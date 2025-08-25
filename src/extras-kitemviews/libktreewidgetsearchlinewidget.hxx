#pragma once
#ifndef SRC_EXTRAS_KITEMVIEWSC_LIBVIRTUALKTREEWIDGETSEARCHLINEWIDGET_H
#define SRC_EXTRAS_KITEMVIEWSC_LIBVIRTUALKTREEWIDGETSEARCHLINEWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTreeWidgetSearchLineWidget so that we can call protected methods
class VirtualKTreeWidgetSearchLineWidget final : public KTreeWidgetSearchLineWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualKTreeWidgetSearchLineWidget = true;

    // Virtual class public types (including callbacks)
    using KTreeWidgetSearchLineWidget_Metacall_Callback = int (*)(KTreeWidgetSearchLineWidget*, int, int, void**);
    using KTreeWidgetSearchLineWidget_CreateWidgets_Callback = void (*)();
    using KTreeWidgetSearchLineWidget_CreateSearchLine_Callback = KTreeWidgetSearchLine* (*)(const KTreeWidgetSearchLineWidget*, QTreeWidget*);
    using KTreeWidgetSearchLineWidget_DevType_Callback = int (*)();
    using KTreeWidgetSearchLineWidget_SetVisible_Callback = void (*)(KTreeWidgetSearchLineWidget*, bool);
    using KTreeWidgetSearchLineWidget_SizeHint_Callback = QSize* (*)();
    using KTreeWidgetSearchLineWidget_MinimumSizeHint_Callback = QSize* (*)();
    using KTreeWidgetSearchLineWidget_HeightForWidth_Callback = int (*)(const KTreeWidgetSearchLineWidget*, int);
    using KTreeWidgetSearchLineWidget_HasHeightForWidth_Callback = bool (*)();
    using KTreeWidgetSearchLineWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using KTreeWidgetSearchLineWidget_Event_Callback = bool (*)(KTreeWidgetSearchLineWidget*, QEvent*);
    using KTreeWidgetSearchLineWidget_MousePressEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QMouseEvent*);
    using KTreeWidgetSearchLineWidget_MouseReleaseEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QMouseEvent*);
    using KTreeWidgetSearchLineWidget_MouseDoubleClickEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QMouseEvent*);
    using KTreeWidgetSearchLineWidget_MouseMoveEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QMouseEvent*);
    using KTreeWidgetSearchLineWidget_WheelEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QWheelEvent*);
    using KTreeWidgetSearchLineWidget_KeyPressEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QKeyEvent*);
    using KTreeWidgetSearchLineWidget_KeyReleaseEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QKeyEvent*);
    using KTreeWidgetSearchLineWidget_FocusInEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QFocusEvent*);
    using KTreeWidgetSearchLineWidget_FocusOutEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QFocusEvent*);
    using KTreeWidgetSearchLineWidget_EnterEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QEnterEvent*);
    using KTreeWidgetSearchLineWidget_LeaveEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QEvent*);
    using KTreeWidgetSearchLineWidget_PaintEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QPaintEvent*);
    using KTreeWidgetSearchLineWidget_MoveEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QMoveEvent*);
    using KTreeWidgetSearchLineWidget_ResizeEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QResizeEvent*);
    using KTreeWidgetSearchLineWidget_CloseEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QCloseEvent*);
    using KTreeWidgetSearchLineWidget_ContextMenuEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QContextMenuEvent*);
    using KTreeWidgetSearchLineWidget_TabletEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QTabletEvent*);
    using KTreeWidgetSearchLineWidget_ActionEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QActionEvent*);
    using KTreeWidgetSearchLineWidget_DragEnterEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QDragEnterEvent*);
    using KTreeWidgetSearchLineWidget_DragMoveEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QDragMoveEvent*);
    using KTreeWidgetSearchLineWidget_DragLeaveEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QDragLeaveEvent*);
    using KTreeWidgetSearchLineWidget_DropEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QDropEvent*);
    using KTreeWidgetSearchLineWidget_ShowEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QShowEvent*);
    using KTreeWidgetSearchLineWidget_HideEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QHideEvent*);
    using KTreeWidgetSearchLineWidget_NativeEvent_Callback = bool (*)(KTreeWidgetSearchLineWidget*, libqt_string, void*, intptr_t*);
    using KTreeWidgetSearchLineWidget_ChangeEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QEvent*);
    using KTreeWidgetSearchLineWidget_Metric_Callback = int (*)(const KTreeWidgetSearchLineWidget*, int);
    using KTreeWidgetSearchLineWidget_InitPainter_Callback = void (*)(const KTreeWidgetSearchLineWidget*, QPainter*);
    using KTreeWidgetSearchLineWidget_Redirected_Callback = QPaintDevice* (*)(const KTreeWidgetSearchLineWidget*, QPoint*);
    using KTreeWidgetSearchLineWidget_SharedPainter_Callback = QPainter* (*)();
    using KTreeWidgetSearchLineWidget_InputMethodEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QInputMethodEvent*);
    using KTreeWidgetSearchLineWidget_InputMethodQuery_Callback = QVariant* (*)(const KTreeWidgetSearchLineWidget*, int);
    using KTreeWidgetSearchLineWidget_FocusNextPrevChild_Callback = bool (*)(KTreeWidgetSearchLineWidget*, bool);
    using KTreeWidgetSearchLineWidget_EventFilter_Callback = bool (*)(KTreeWidgetSearchLineWidget*, QObject*, QEvent*);
    using KTreeWidgetSearchLineWidget_TimerEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QTimerEvent*);
    using KTreeWidgetSearchLineWidget_ChildEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QChildEvent*);
    using KTreeWidgetSearchLineWidget_CustomEvent_Callback = void (*)(KTreeWidgetSearchLineWidget*, QEvent*);
    using KTreeWidgetSearchLineWidget_ConnectNotify_Callback = void (*)(KTreeWidgetSearchLineWidget*, QMetaMethod*);
    using KTreeWidgetSearchLineWidget_DisconnectNotify_Callback = void (*)(KTreeWidgetSearchLineWidget*, QMetaMethod*);
    using KTreeWidgetSearchLineWidget_UpdateMicroFocus_Callback = void (*)();
    using KTreeWidgetSearchLineWidget_Create_Callback = void (*)();
    using KTreeWidgetSearchLineWidget_Destroy_Callback = void (*)();
    using KTreeWidgetSearchLineWidget_FocusNextChild_Callback = bool (*)();
    using KTreeWidgetSearchLineWidget_FocusPreviousChild_Callback = bool (*)();
    using KTreeWidgetSearchLineWidget_Sender_Callback = QObject* (*)();
    using KTreeWidgetSearchLineWidget_SenderSignalIndex_Callback = int (*)();
    using KTreeWidgetSearchLineWidget_Receivers_Callback = int (*)(const KTreeWidgetSearchLineWidget*, const char*);
    using KTreeWidgetSearchLineWidget_IsSignalConnected_Callback = bool (*)(const KTreeWidgetSearchLineWidget*, QMetaMethod*);
    using KTreeWidgetSearchLineWidget_GetDecodedMetricF_Callback = double (*)(const KTreeWidgetSearchLineWidget*, int, int);

  protected:
    // Instance callback storage
    KTreeWidgetSearchLineWidget_Metacall_Callback ktreewidgetsearchlinewidget_metacall_callback = nullptr;
    KTreeWidgetSearchLineWidget_CreateWidgets_Callback ktreewidgetsearchlinewidget_createwidgets_callback = nullptr;
    KTreeWidgetSearchLineWidget_CreateSearchLine_Callback ktreewidgetsearchlinewidget_createsearchline_callback = nullptr;
    KTreeWidgetSearchLineWidget_DevType_Callback ktreewidgetsearchlinewidget_devtype_callback = nullptr;
    KTreeWidgetSearchLineWidget_SetVisible_Callback ktreewidgetsearchlinewidget_setvisible_callback = nullptr;
    KTreeWidgetSearchLineWidget_SizeHint_Callback ktreewidgetsearchlinewidget_sizehint_callback = nullptr;
    KTreeWidgetSearchLineWidget_MinimumSizeHint_Callback ktreewidgetsearchlinewidget_minimumsizehint_callback = nullptr;
    KTreeWidgetSearchLineWidget_HeightForWidth_Callback ktreewidgetsearchlinewidget_heightforwidth_callback = nullptr;
    KTreeWidgetSearchLineWidget_HasHeightForWidth_Callback ktreewidgetsearchlinewidget_hasheightforwidth_callback = nullptr;
    KTreeWidgetSearchLineWidget_PaintEngine_Callback ktreewidgetsearchlinewidget_paintengine_callback = nullptr;
    KTreeWidgetSearchLineWidget_Event_Callback ktreewidgetsearchlinewidget_event_callback = nullptr;
    KTreeWidgetSearchLineWidget_MousePressEvent_Callback ktreewidgetsearchlinewidget_mousepressevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_MouseReleaseEvent_Callback ktreewidgetsearchlinewidget_mousereleaseevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_MouseDoubleClickEvent_Callback ktreewidgetsearchlinewidget_mousedoubleclickevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_MouseMoveEvent_Callback ktreewidgetsearchlinewidget_mousemoveevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_WheelEvent_Callback ktreewidgetsearchlinewidget_wheelevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_KeyPressEvent_Callback ktreewidgetsearchlinewidget_keypressevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_KeyReleaseEvent_Callback ktreewidgetsearchlinewidget_keyreleaseevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_FocusInEvent_Callback ktreewidgetsearchlinewidget_focusinevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_FocusOutEvent_Callback ktreewidgetsearchlinewidget_focusoutevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_EnterEvent_Callback ktreewidgetsearchlinewidget_enterevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_LeaveEvent_Callback ktreewidgetsearchlinewidget_leaveevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_PaintEvent_Callback ktreewidgetsearchlinewidget_paintevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_MoveEvent_Callback ktreewidgetsearchlinewidget_moveevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_ResizeEvent_Callback ktreewidgetsearchlinewidget_resizeevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_CloseEvent_Callback ktreewidgetsearchlinewidget_closeevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_ContextMenuEvent_Callback ktreewidgetsearchlinewidget_contextmenuevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_TabletEvent_Callback ktreewidgetsearchlinewidget_tabletevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_ActionEvent_Callback ktreewidgetsearchlinewidget_actionevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_DragEnterEvent_Callback ktreewidgetsearchlinewidget_dragenterevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_DragMoveEvent_Callback ktreewidgetsearchlinewidget_dragmoveevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_DragLeaveEvent_Callback ktreewidgetsearchlinewidget_dragleaveevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_DropEvent_Callback ktreewidgetsearchlinewidget_dropevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_ShowEvent_Callback ktreewidgetsearchlinewidget_showevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_HideEvent_Callback ktreewidgetsearchlinewidget_hideevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_NativeEvent_Callback ktreewidgetsearchlinewidget_nativeevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_ChangeEvent_Callback ktreewidgetsearchlinewidget_changeevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_Metric_Callback ktreewidgetsearchlinewidget_metric_callback = nullptr;
    KTreeWidgetSearchLineWidget_InitPainter_Callback ktreewidgetsearchlinewidget_initpainter_callback = nullptr;
    KTreeWidgetSearchLineWidget_Redirected_Callback ktreewidgetsearchlinewidget_redirected_callback = nullptr;
    KTreeWidgetSearchLineWidget_SharedPainter_Callback ktreewidgetsearchlinewidget_sharedpainter_callback = nullptr;
    KTreeWidgetSearchLineWidget_InputMethodEvent_Callback ktreewidgetsearchlinewidget_inputmethodevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_InputMethodQuery_Callback ktreewidgetsearchlinewidget_inputmethodquery_callback = nullptr;
    KTreeWidgetSearchLineWidget_FocusNextPrevChild_Callback ktreewidgetsearchlinewidget_focusnextprevchild_callback = nullptr;
    KTreeWidgetSearchLineWidget_EventFilter_Callback ktreewidgetsearchlinewidget_eventfilter_callback = nullptr;
    KTreeWidgetSearchLineWidget_TimerEvent_Callback ktreewidgetsearchlinewidget_timerevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_ChildEvent_Callback ktreewidgetsearchlinewidget_childevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_CustomEvent_Callback ktreewidgetsearchlinewidget_customevent_callback = nullptr;
    KTreeWidgetSearchLineWidget_ConnectNotify_Callback ktreewidgetsearchlinewidget_connectnotify_callback = nullptr;
    KTreeWidgetSearchLineWidget_DisconnectNotify_Callback ktreewidgetsearchlinewidget_disconnectnotify_callback = nullptr;
    KTreeWidgetSearchLineWidget_UpdateMicroFocus_Callback ktreewidgetsearchlinewidget_updatemicrofocus_callback = nullptr;
    KTreeWidgetSearchLineWidget_Create_Callback ktreewidgetsearchlinewidget_create_callback = nullptr;
    KTreeWidgetSearchLineWidget_Destroy_Callback ktreewidgetsearchlinewidget_destroy_callback = nullptr;
    KTreeWidgetSearchLineWidget_FocusNextChild_Callback ktreewidgetsearchlinewidget_focusnextchild_callback = nullptr;
    KTreeWidgetSearchLineWidget_FocusPreviousChild_Callback ktreewidgetsearchlinewidget_focuspreviouschild_callback = nullptr;
    KTreeWidgetSearchLineWidget_Sender_Callback ktreewidgetsearchlinewidget_sender_callback = nullptr;
    KTreeWidgetSearchLineWidget_SenderSignalIndex_Callback ktreewidgetsearchlinewidget_sendersignalindex_callback = nullptr;
    KTreeWidgetSearchLineWidget_Receivers_Callback ktreewidgetsearchlinewidget_receivers_callback = nullptr;
    KTreeWidgetSearchLineWidget_IsSignalConnected_Callback ktreewidgetsearchlinewidget_issignalconnected_callback = nullptr;
    KTreeWidgetSearchLineWidget_GetDecodedMetricF_Callback ktreewidgetsearchlinewidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool ktreewidgetsearchlinewidget_metacall_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_createwidgets_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_createsearchline_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_devtype_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_setvisible_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_sizehint_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_minimumsizehint_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_heightforwidth_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_hasheightforwidth_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_paintengine_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_event_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_mousepressevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_mousereleaseevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_mousedoubleclickevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_mousemoveevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_wheelevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_keypressevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_keyreleaseevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_focusinevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_focusoutevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_enterevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_leaveevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_paintevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_moveevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_resizeevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_closeevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_contextmenuevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_tabletevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_actionevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_dragenterevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_dragmoveevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_dragleaveevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_dropevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_showevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_hideevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_nativeevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_changeevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_metric_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_initpainter_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_redirected_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_sharedpainter_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_inputmethodevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_inputmethodquery_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_focusnextprevchild_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_eventfilter_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_timerevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_childevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_customevent_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_connectnotify_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_disconnectnotify_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_updatemicrofocus_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_create_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_destroy_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_focusnextchild_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_focuspreviouschild_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_sender_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_sendersignalindex_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_receivers_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_issignalconnected_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_getdecodedmetricf_isbase = false;

  public:
    VirtualKTreeWidgetSearchLineWidget(QWidget* parent) : KTreeWidgetSearchLineWidget(parent) {};
    VirtualKTreeWidgetSearchLineWidget() : KTreeWidgetSearchLineWidget() {};
    VirtualKTreeWidgetSearchLineWidget(QWidget* parent, QTreeWidget* treeWidget) : KTreeWidgetSearchLineWidget(parent, treeWidget) {};

    ~VirtualKTreeWidgetSearchLineWidget() {
        ktreewidgetsearchlinewidget_metacall_callback = nullptr;
        ktreewidgetsearchlinewidget_createwidgets_callback = nullptr;
        ktreewidgetsearchlinewidget_createsearchline_callback = nullptr;
        ktreewidgetsearchlinewidget_devtype_callback = nullptr;
        ktreewidgetsearchlinewidget_setvisible_callback = nullptr;
        ktreewidgetsearchlinewidget_sizehint_callback = nullptr;
        ktreewidgetsearchlinewidget_minimumsizehint_callback = nullptr;
        ktreewidgetsearchlinewidget_heightforwidth_callback = nullptr;
        ktreewidgetsearchlinewidget_hasheightforwidth_callback = nullptr;
        ktreewidgetsearchlinewidget_paintengine_callback = nullptr;
        ktreewidgetsearchlinewidget_event_callback = nullptr;
        ktreewidgetsearchlinewidget_mousepressevent_callback = nullptr;
        ktreewidgetsearchlinewidget_mousereleaseevent_callback = nullptr;
        ktreewidgetsearchlinewidget_mousedoubleclickevent_callback = nullptr;
        ktreewidgetsearchlinewidget_mousemoveevent_callback = nullptr;
        ktreewidgetsearchlinewidget_wheelevent_callback = nullptr;
        ktreewidgetsearchlinewidget_keypressevent_callback = nullptr;
        ktreewidgetsearchlinewidget_keyreleaseevent_callback = nullptr;
        ktreewidgetsearchlinewidget_focusinevent_callback = nullptr;
        ktreewidgetsearchlinewidget_focusoutevent_callback = nullptr;
        ktreewidgetsearchlinewidget_enterevent_callback = nullptr;
        ktreewidgetsearchlinewidget_leaveevent_callback = nullptr;
        ktreewidgetsearchlinewidget_paintevent_callback = nullptr;
        ktreewidgetsearchlinewidget_moveevent_callback = nullptr;
        ktreewidgetsearchlinewidget_resizeevent_callback = nullptr;
        ktreewidgetsearchlinewidget_closeevent_callback = nullptr;
        ktreewidgetsearchlinewidget_contextmenuevent_callback = nullptr;
        ktreewidgetsearchlinewidget_tabletevent_callback = nullptr;
        ktreewidgetsearchlinewidget_actionevent_callback = nullptr;
        ktreewidgetsearchlinewidget_dragenterevent_callback = nullptr;
        ktreewidgetsearchlinewidget_dragmoveevent_callback = nullptr;
        ktreewidgetsearchlinewidget_dragleaveevent_callback = nullptr;
        ktreewidgetsearchlinewidget_dropevent_callback = nullptr;
        ktreewidgetsearchlinewidget_showevent_callback = nullptr;
        ktreewidgetsearchlinewidget_hideevent_callback = nullptr;
        ktreewidgetsearchlinewidget_nativeevent_callback = nullptr;
        ktreewidgetsearchlinewidget_changeevent_callback = nullptr;
        ktreewidgetsearchlinewidget_metric_callback = nullptr;
        ktreewidgetsearchlinewidget_initpainter_callback = nullptr;
        ktreewidgetsearchlinewidget_redirected_callback = nullptr;
        ktreewidgetsearchlinewidget_sharedpainter_callback = nullptr;
        ktreewidgetsearchlinewidget_inputmethodevent_callback = nullptr;
        ktreewidgetsearchlinewidget_inputmethodquery_callback = nullptr;
        ktreewidgetsearchlinewidget_focusnextprevchild_callback = nullptr;
        ktreewidgetsearchlinewidget_eventfilter_callback = nullptr;
        ktreewidgetsearchlinewidget_timerevent_callback = nullptr;
        ktreewidgetsearchlinewidget_childevent_callback = nullptr;
        ktreewidgetsearchlinewidget_customevent_callback = nullptr;
        ktreewidgetsearchlinewidget_connectnotify_callback = nullptr;
        ktreewidgetsearchlinewidget_disconnectnotify_callback = nullptr;
        ktreewidgetsearchlinewidget_updatemicrofocus_callback = nullptr;
        ktreewidgetsearchlinewidget_create_callback = nullptr;
        ktreewidgetsearchlinewidget_destroy_callback = nullptr;
        ktreewidgetsearchlinewidget_focusnextchild_callback = nullptr;
        ktreewidgetsearchlinewidget_focuspreviouschild_callback = nullptr;
        ktreewidgetsearchlinewidget_sender_callback = nullptr;
        ktreewidgetsearchlinewidget_sendersignalindex_callback = nullptr;
        ktreewidgetsearchlinewidget_receivers_callback = nullptr;
        ktreewidgetsearchlinewidget_issignalconnected_callback = nullptr;
        ktreewidgetsearchlinewidget_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKTreeWidgetSearchLineWidget_Metacall_Callback(KTreeWidgetSearchLineWidget_Metacall_Callback cb) { ktreewidgetsearchlinewidget_metacall_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_CreateWidgets_Callback(KTreeWidgetSearchLineWidget_CreateWidgets_Callback cb) { ktreewidgetsearchlinewidget_createwidgets_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_CreateSearchLine_Callback(KTreeWidgetSearchLineWidget_CreateSearchLine_Callback cb) { ktreewidgetsearchlinewidget_createsearchline_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_DevType_Callback(KTreeWidgetSearchLineWidget_DevType_Callback cb) { ktreewidgetsearchlinewidget_devtype_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_SetVisible_Callback(KTreeWidgetSearchLineWidget_SetVisible_Callback cb) { ktreewidgetsearchlinewidget_setvisible_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_SizeHint_Callback(KTreeWidgetSearchLineWidget_SizeHint_Callback cb) { ktreewidgetsearchlinewidget_sizehint_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_MinimumSizeHint_Callback(KTreeWidgetSearchLineWidget_MinimumSizeHint_Callback cb) { ktreewidgetsearchlinewidget_minimumsizehint_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_HeightForWidth_Callback(KTreeWidgetSearchLineWidget_HeightForWidth_Callback cb) { ktreewidgetsearchlinewidget_heightforwidth_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_HasHeightForWidth_Callback(KTreeWidgetSearchLineWidget_HasHeightForWidth_Callback cb) { ktreewidgetsearchlinewidget_hasheightforwidth_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_PaintEngine_Callback(KTreeWidgetSearchLineWidget_PaintEngine_Callback cb) { ktreewidgetsearchlinewidget_paintengine_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_Event_Callback(KTreeWidgetSearchLineWidget_Event_Callback cb) { ktreewidgetsearchlinewidget_event_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_MousePressEvent_Callback(KTreeWidgetSearchLineWidget_MousePressEvent_Callback cb) { ktreewidgetsearchlinewidget_mousepressevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_MouseReleaseEvent_Callback(KTreeWidgetSearchLineWidget_MouseReleaseEvent_Callback cb) { ktreewidgetsearchlinewidget_mousereleaseevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_MouseDoubleClickEvent_Callback(KTreeWidgetSearchLineWidget_MouseDoubleClickEvent_Callback cb) { ktreewidgetsearchlinewidget_mousedoubleclickevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_MouseMoveEvent_Callback(KTreeWidgetSearchLineWidget_MouseMoveEvent_Callback cb) { ktreewidgetsearchlinewidget_mousemoveevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_WheelEvent_Callback(KTreeWidgetSearchLineWidget_WheelEvent_Callback cb) { ktreewidgetsearchlinewidget_wheelevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_KeyPressEvent_Callback(KTreeWidgetSearchLineWidget_KeyPressEvent_Callback cb) { ktreewidgetsearchlinewidget_keypressevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_KeyReleaseEvent_Callback(KTreeWidgetSearchLineWidget_KeyReleaseEvent_Callback cb) { ktreewidgetsearchlinewidget_keyreleaseevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_FocusInEvent_Callback(KTreeWidgetSearchLineWidget_FocusInEvent_Callback cb) { ktreewidgetsearchlinewidget_focusinevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_FocusOutEvent_Callback(KTreeWidgetSearchLineWidget_FocusOutEvent_Callback cb) { ktreewidgetsearchlinewidget_focusoutevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_EnterEvent_Callback(KTreeWidgetSearchLineWidget_EnterEvent_Callback cb) { ktreewidgetsearchlinewidget_enterevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_LeaveEvent_Callback(KTreeWidgetSearchLineWidget_LeaveEvent_Callback cb) { ktreewidgetsearchlinewidget_leaveevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_PaintEvent_Callback(KTreeWidgetSearchLineWidget_PaintEvent_Callback cb) { ktreewidgetsearchlinewidget_paintevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_MoveEvent_Callback(KTreeWidgetSearchLineWidget_MoveEvent_Callback cb) { ktreewidgetsearchlinewidget_moveevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_ResizeEvent_Callback(KTreeWidgetSearchLineWidget_ResizeEvent_Callback cb) { ktreewidgetsearchlinewidget_resizeevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_CloseEvent_Callback(KTreeWidgetSearchLineWidget_CloseEvent_Callback cb) { ktreewidgetsearchlinewidget_closeevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_ContextMenuEvent_Callback(KTreeWidgetSearchLineWidget_ContextMenuEvent_Callback cb) { ktreewidgetsearchlinewidget_contextmenuevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_TabletEvent_Callback(KTreeWidgetSearchLineWidget_TabletEvent_Callback cb) { ktreewidgetsearchlinewidget_tabletevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_ActionEvent_Callback(KTreeWidgetSearchLineWidget_ActionEvent_Callback cb) { ktreewidgetsearchlinewidget_actionevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_DragEnterEvent_Callback(KTreeWidgetSearchLineWidget_DragEnterEvent_Callback cb) { ktreewidgetsearchlinewidget_dragenterevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_DragMoveEvent_Callback(KTreeWidgetSearchLineWidget_DragMoveEvent_Callback cb) { ktreewidgetsearchlinewidget_dragmoveevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_DragLeaveEvent_Callback(KTreeWidgetSearchLineWidget_DragLeaveEvent_Callback cb) { ktreewidgetsearchlinewidget_dragleaveevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_DropEvent_Callback(KTreeWidgetSearchLineWidget_DropEvent_Callback cb) { ktreewidgetsearchlinewidget_dropevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_ShowEvent_Callback(KTreeWidgetSearchLineWidget_ShowEvent_Callback cb) { ktreewidgetsearchlinewidget_showevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_HideEvent_Callback(KTreeWidgetSearchLineWidget_HideEvent_Callback cb) { ktreewidgetsearchlinewidget_hideevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_NativeEvent_Callback(KTreeWidgetSearchLineWidget_NativeEvent_Callback cb) { ktreewidgetsearchlinewidget_nativeevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_ChangeEvent_Callback(KTreeWidgetSearchLineWidget_ChangeEvent_Callback cb) { ktreewidgetsearchlinewidget_changeevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_Metric_Callback(KTreeWidgetSearchLineWidget_Metric_Callback cb) { ktreewidgetsearchlinewidget_metric_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_InitPainter_Callback(KTreeWidgetSearchLineWidget_InitPainter_Callback cb) { ktreewidgetsearchlinewidget_initpainter_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_Redirected_Callback(KTreeWidgetSearchLineWidget_Redirected_Callback cb) { ktreewidgetsearchlinewidget_redirected_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_SharedPainter_Callback(KTreeWidgetSearchLineWidget_SharedPainter_Callback cb) { ktreewidgetsearchlinewidget_sharedpainter_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_InputMethodEvent_Callback(KTreeWidgetSearchLineWidget_InputMethodEvent_Callback cb) { ktreewidgetsearchlinewidget_inputmethodevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_InputMethodQuery_Callback(KTreeWidgetSearchLineWidget_InputMethodQuery_Callback cb) { ktreewidgetsearchlinewidget_inputmethodquery_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_FocusNextPrevChild_Callback(KTreeWidgetSearchLineWidget_FocusNextPrevChild_Callback cb) { ktreewidgetsearchlinewidget_focusnextprevchild_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_EventFilter_Callback(KTreeWidgetSearchLineWidget_EventFilter_Callback cb) { ktreewidgetsearchlinewidget_eventfilter_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_TimerEvent_Callback(KTreeWidgetSearchLineWidget_TimerEvent_Callback cb) { ktreewidgetsearchlinewidget_timerevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_ChildEvent_Callback(KTreeWidgetSearchLineWidget_ChildEvent_Callback cb) { ktreewidgetsearchlinewidget_childevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_CustomEvent_Callback(KTreeWidgetSearchLineWidget_CustomEvent_Callback cb) { ktreewidgetsearchlinewidget_customevent_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_ConnectNotify_Callback(KTreeWidgetSearchLineWidget_ConnectNotify_Callback cb) { ktreewidgetsearchlinewidget_connectnotify_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_DisconnectNotify_Callback(KTreeWidgetSearchLineWidget_DisconnectNotify_Callback cb) { ktreewidgetsearchlinewidget_disconnectnotify_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_UpdateMicroFocus_Callback(KTreeWidgetSearchLineWidget_UpdateMicroFocus_Callback cb) { ktreewidgetsearchlinewidget_updatemicrofocus_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_Create_Callback(KTreeWidgetSearchLineWidget_Create_Callback cb) { ktreewidgetsearchlinewidget_create_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_Destroy_Callback(KTreeWidgetSearchLineWidget_Destroy_Callback cb) { ktreewidgetsearchlinewidget_destroy_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_FocusNextChild_Callback(KTreeWidgetSearchLineWidget_FocusNextChild_Callback cb) { ktreewidgetsearchlinewidget_focusnextchild_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_FocusPreviousChild_Callback(KTreeWidgetSearchLineWidget_FocusPreviousChild_Callback cb) { ktreewidgetsearchlinewidget_focuspreviouschild_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_Sender_Callback(KTreeWidgetSearchLineWidget_Sender_Callback cb) { ktreewidgetsearchlinewidget_sender_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_SenderSignalIndex_Callback(KTreeWidgetSearchLineWidget_SenderSignalIndex_Callback cb) { ktreewidgetsearchlinewidget_sendersignalindex_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_Receivers_Callback(KTreeWidgetSearchLineWidget_Receivers_Callback cb) { ktreewidgetsearchlinewidget_receivers_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_IsSignalConnected_Callback(KTreeWidgetSearchLineWidget_IsSignalConnected_Callback cb) { ktreewidgetsearchlinewidget_issignalconnected_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_GetDecodedMetricF_Callback(KTreeWidgetSearchLineWidget_GetDecodedMetricF_Callback cb) { ktreewidgetsearchlinewidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKTreeWidgetSearchLineWidget_Metacall_IsBase(bool value) const { ktreewidgetsearchlinewidget_metacall_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_CreateWidgets_IsBase(bool value) const { ktreewidgetsearchlinewidget_createwidgets_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_CreateSearchLine_IsBase(bool value) const { ktreewidgetsearchlinewidget_createsearchline_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_DevType_IsBase(bool value) const { ktreewidgetsearchlinewidget_devtype_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_SetVisible_IsBase(bool value) const { ktreewidgetsearchlinewidget_setvisible_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_SizeHint_IsBase(bool value) const { ktreewidgetsearchlinewidget_sizehint_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_MinimumSizeHint_IsBase(bool value) const { ktreewidgetsearchlinewidget_minimumsizehint_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_HeightForWidth_IsBase(bool value) const { ktreewidgetsearchlinewidget_heightforwidth_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_HasHeightForWidth_IsBase(bool value) const { ktreewidgetsearchlinewidget_hasheightforwidth_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_PaintEngine_IsBase(bool value) const { ktreewidgetsearchlinewidget_paintengine_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_Event_IsBase(bool value) const { ktreewidgetsearchlinewidget_event_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_MousePressEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_mousepressevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_MouseReleaseEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_mousereleaseevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_MouseDoubleClickEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_mousedoubleclickevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_MouseMoveEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_mousemoveevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_WheelEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_wheelevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_KeyPressEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_keypressevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_KeyReleaseEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_keyreleaseevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_FocusInEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_focusinevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_FocusOutEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_focusoutevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_EnterEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_enterevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_LeaveEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_leaveevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_PaintEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_paintevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_MoveEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_moveevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_ResizeEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_resizeevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_CloseEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_closeevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_ContextMenuEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_contextmenuevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_TabletEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_tabletevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_ActionEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_actionevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_DragEnterEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_dragenterevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_DragMoveEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_dragmoveevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_DragLeaveEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_dragleaveevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_DropEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_dropevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_ShowEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_showevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_HideEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_hideevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_NativeEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_nativeevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_ChangeEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_changeevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_Metric_IsBase(bool value) const { ktreewidgetsearchlinewidget_metric_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_InitPainter_IsBase(bool value) const { ktreewidgetsearchlinewidget_initpainter_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_Redirected_IsBase(bool value) const { ktreewidgetsearchlinewidget_redirected_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_SharedPainter_IsBase(bool value) const { ktreewidgetsearchlinewidget_sharedpainter_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_InputMethodEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_inputmethodevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_InputMethodQuery_IsBase(bool value) const { ktreewidgetsearchlinewidget_inputmethodquery_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_FocusNextPrevChild_IsBase(bool value) const { ktreewidgetsearchlinewidget_focusnextprevchild_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_EventFilter_IsBase(bool value) const { ktreewidgetsearchlinewidget_eventfilter_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_TimerEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_timerevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_ChildEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_childevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_CustomEvent_IsBase(bool value) const { ktreewidgetsearchlinewidget_customevent_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_ConnectNotify_IsBase(bool value) const { ktreewidgetsearchlinewidget_connectnotify_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_DisconnectNotify_IsBase(bool value) const { ktreewidgetsearchlinewidget_disconnectnotify_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_UpdateMicroFocus_IsBase(bool value) const { ktreewidgetsearchlinewidget_updatemicrofocus_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_Create_IsBase(bool value) const { ktreewidgetsearchlinewidget_create_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_Destroy_IsBase(bool value) const { ktreewidgetsearchlinewidget_destroy_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_FocusNextChild_IsBase(bool value) const { ktreewidgetsearchlinewidget_focusnextchild_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_FocusPreviousChild_IsBase(bool value) const { ktreewidgetsearchlinewidget_focuspreviouschild_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_Sender_IsBase(bool value) const { ktreewidgetsearchlinewidget_sender_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_SenderSignalIndex_IsBase(bool value) const { ktreewidgetsearchlinewidget_sendersignalindex_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_Receivers_IsBase(bool value) const { ktreewidgetsearchlinewidget_receivers_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_IsSignalConnected_IsBase(bool value) const { ktreewidgetsearchlinewidget_issignalconnected_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_GetDecodedMetricF_IsBase(bool value) const { ktreewidgetsearchlinewidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktreewidgetsearchlinewidget_metacall_isbase) {
            ktreewidgetsearchlinewidget_metacall_isbase = false;
            return KTreeWidgetSearchLineWidget::qt_metacall(param1, param2, param3);
        } else if (ktreewidgetsearchlinewidget_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ktreewidgetsearchlinewidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KTreeWidgetSearchLineWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void createWidgets() override {
        if (ktreewidgetsearchlinewidget_createwidgets_isbase) {
            ktreewidgetsearchlinewidget_createwidgets_isbase = false;
            KTreeWidgetSearchLineWidget::createWidgets();
        } else if (ktreewidgetsearchlinewidget_createwidgets_callback != nullptr) {
            ktreewidgetsearchlinewidget_createwidgets_callback();
        } else {
            KTreeWidgetSearchLineWidget::createWidgets();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KTreeWidgetSearchLine* createSearchLine(QTreeWidget* treeWidget) const override {
        if (ktreewidgetsearchlinewidget_createsearchline_isbase) {
            ktreewidgetsearchlinewidget_createsearchline_isbase = false;
            return KTreeWidgetSearchLineWidget::createSearchLine(treeWidget);
        } else if (ktreewidgetsearchlinewidget_createsearchline_callback != nullptr) {
            QTreeWidget* cbval1 = treeWidget;

            KTreeWidgetSearchLine* callback_ret = ktreewidgetsearchlinewidget_createsearchline_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTreeWidgetSearchLineWidget::createSearchLine(treeWidget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ktreewidgetsearchlinewidget_devtype_isbase) {
            ktreewidgetsearchlinewidget_devtype_isbase = false;
            return KTreeWidgetSearchLineWidget::devType();
        } else if (ktreewidgetsearchlinewidget_devtype_callback != nullptr) {
            int callback_ret = ktreewidgetsearchlinewidget_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KTreeWidgetSearchLineWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ktreewidgetsearchlinewidget_setvisible_isbase) {
            ktreewidgetsearchlinewidget_setvisible_isbase = false;
            KTreeWidgetSearchLineWidget::setVisible(visible);
        } else if (ktreewidgetsearchlinewidget_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            ktreewidgetsearchlinewidget_setvisible_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ktreewidgetsearchlinewidget_sizehint_isbase) {
            ktreewidgetsearchlinewidget_sizehint_isbase = false;
            return KTreeWidgetSearchLineWidget::sizeHint();
        } else if (ktreewidgetsearchlinewidget_sizehint_callback != nullptr) {
            QSize* callback_ret = ktreewidgetsearchlinewidget_sizehint_callback();
            return *callback_ret;
        } else {
            return KTreeWidgetSearchLineWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ktreewidgetsearchlinewidget_minimumsizehint_isbase) {
            ktreewidgetsearchlinewidget_minimumsizehint_isbase = false;
            return KTreeWidgetSearchLineWidget::minimumSizeHint();
        } else if (ktreewidgetsearchlinewidget_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = ktreewidgetsearchlinewidget_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KTreeWidgetSearchLineWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ktreewidgetsearchlinewidget_heightforwidth_isbase) {
            ktreewidgetsearchlinewidget_heightforwidth_isbase = false;
            return KTreeWidgetSearchLineWidget::heightForWidth(param1);
        } else if (ktreewidgetsearchlinewidget_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = ktreewidgetsearchlinewidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTreeWidgetSearchLineWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ktreewidgetsearchlinewidget_hasheightforwidth_isbase) {
            ktreewidgetsearchlinewidget_hasheightforwidth_isbase = false;
            return KTreeWidgetSearchLineWidget::hasHeightForWidth();
        } else if (ktreewidgetsearchlinewidget_hasheightforwidth_callback != nullptr) {
            bool callback_ret = ktreewidgetsearchlinewidget_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KTreeWidgetSearchLineWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ktreewidgetsearchlinewidget_paintengine_isbase) {
            ktreewidgetsearchlinewidget_paintengine_isbase = false;
            return KTreeWidgetSearchLineWidget::paintEngine();
        } else if (ktreewidgetsearchlinewidget_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = ktreewidgetsearchlinewidget_paintengine_callback();
            return callback_ret;
        } else {
            return KTreeWidgetSearchLineWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktreewidgetsearchlinewidget_event_isbase) {
            ktreewidgetsearchlinewidget_event_isbase = false;
            return KTreeWidgetSearchLineWidget::event(event);
        } else if (ktreewidgetsearchlinewidget_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = ktreewidgetsearchlinewidget_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTreeWidgetSearchLineWidget::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (ktreewidgetsearchlinewidget_mousepressevent_isbase) {
            ktreewidgetsearchlinewidget_mousepressevent_isbase = false;
            KTreeWidgetSearchLineWidget::mousePressEvent(event);
        } else if (ktreewidgetsearchlinewidget_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_mousepressevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (ktreewidgetsearchlinewidget_mousereleaseevent_isbase) {
            ktreewidgetsearchlinewidget_mousereleaseevent_isbase = false;
            KTreeWidgetSearchLineWidget::mouseReleaseEvent(event);
        } else if (ktreewidgetsearchlinewidget_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_mousereleaseevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (ktreewidgetsearchlinewidget_mousedoubleclickevent_isbase) {
            ktreewidgetsearchlinewidget_mousedoubleclickevent_isbase = false;
            KTreeWidgetSearchLineWidget::mouseDoubleClickEvent(event);
        } else if (ktreewidgetsearchlinewidget_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (ktreewidgetsearchlinewidget_mousemoveevent_isbase) {
            ktreewidgetsearchlinewidget_mousemoveevent_isbase = false;
            KTreeWidgetSearchLineWidget::mouseMoveEvent(event);
        } else if (ktreewidgetsearchlinewidget_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_mousemoveevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ktreewidgetsearchlinewidget_wheelevent_isbase) {
            ktreewidgetsearchlinewidget_wheelevent_isbase = false;
            KTreeWidgetSearchLineWidget::wheelEvent(event);
        } else if (ktreewidgetsearchlinewidget_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_wheelevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (ktreewidgetsearchlinewidget_keypressevent_isbase) {
            ktreewidgetsearchlinewidget_keypressevent_isbase = false;
            KTreeWidgetSearchLineWidget::keyPressEvent(event);
        } else if (ktreewidgetsearchlinewidget_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_keypressevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (ktreewidgetsearchlinewidget_keyreleaseevent_isbase) {
            ktreewidgetsearchlinewidget_keyreleaseevent_isbase = false;
            KTreeWidgetSearchLineWidget::keyReleaseEvent(event);
        } else if (ktreewidgetsearchlinewidget_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_keyreleaseevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (ktreewidgetsearchlinewidget_focusinevent_isbase) {
            ktreewidgetsearchlinewidget_focusinevent_isbase = false;
            KTreeWidgetSearchLineWidget::focusInEvent(event);
        } else if (ktreewidgetsearchlinewidget_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_focusinevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (ktreewidgetsearchlinewidget_focusoutevent_isbase) {
            ktreewidgetsearchlinewidget_focusoutevent_isbase = false;
            KTreeWidgetSearchLineWidget::focusOutEvent(event);
        } else if (ktreewidgetsearchlinewidget_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_focusoutevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ktreewidgetsearchlinewidget_enterevent_isbase) {
            ktreewidgetsearchlinewidget_enterevent_isbase = false;
            KTreeWidgetSearchLineWidget::enterEvent(event);
        } else if (ktreewidgetsearchlinewidget_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_enterevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ktreewidgetsearchlinewidget_leaveevent_isbase) {
            ktreewidgetsearchlinewidget_leaveevent_isbase = false;
            KTreeWidgetSearchLineWidget::leaveEvent(event);
        } else if (ktreewidgetsearchlinewidget_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_leaveevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (ktreewidgetsearchlinewidget_paintevent_isbase) {
            ktreewidgetsearchlinewidget_paintevent_isbase = false;
            KTreeWidgetSearchLineWidget::paintEvent(event);
        } else if (ktreewidgetsearchlinewidget_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_paintevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ktreewidgetsearchlinewidget_moveevent_isbase) {
            ktreewidgetsearchlinewidget_moveevent_isbase = false;
            KTreeWidgetSearchLineWidget::moveEvent(event);
        } else if (ktreewidgetsearchlinewidget_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_moveevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (ktreewidgetsearchlinewidget_resizeevent_isbase) {
            ktreewidgetsearchlinewidget_resizeevent_isbase = false;
            KTreeWidgetSearchLineWidget::resizeEvent(event);
        } else if (ktreewidgetsearchlinewidget_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_resizeevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ktreewidgetsearchlinewidget_closeevent_isbase) {
            ktreewidgetsearchlinewidget_closeevent_isbase = false;
            KTreeWidgetSearchLineWidget::closeEvent(event);
        } else if (ktreewidgetsearchlinewidget_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_closeevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (ktreewidgetsearchlinewidget_contextmenuevent_isbase) {
            ktreewidgetsearchlinewidget_contextmenuevent_isbase = false;
            KTreeWidgetSearchLineWidget::contextMenuEvent(event);
        } else if (ktreewidgetsearchlinewidget_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_contextmenuevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ktreewidgetsearchlinewidget_tabletevent_isbase) {
            ktreewidgetsearchlinewidget_tabletevent_isbase = false;
            KTreeWidgetSearchLineWidget::tabletEvent(event);
        } else if (ktreewidgetsearchlinewidget_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_tabletevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (ktreewidgetsearchlinewidget_actionevent_isbase) {
            ktreewidgetsearchlinewidget_actionevent_isbase = false;
            KTreeWidgetSearchLineWidget::actionEvent(event);
        } else if (ktreewidgetsearchlinewidget_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_actionevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (ktreewidgetsearchlinewidget_dragenterevent_isbase) {
            ktreewidgetsearchlinewidget_dragenterevent_isbase = false;
            KTreeWidgetSearchLineWidget::dragEnterEvent(event);
        } else if (ktreewidgetsearchlinewidget_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_dragenterevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (ktreewidgetsearchlinewidget_dragmoveevent_isbase) {
            ktreewidgetsearchlinewidget_dragmoveevent_isbase = false;
            KTreeWidgetSearchLineWidget::dragMoveEvent(event);
        } else if (ktreewidgetsearchlinewidget_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_dragmoveevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (ktreewidgetsearchlinewidget_dragleaveevent_isbase) {
            ktreewidgetsearchlinewidget_dragleaveevent_isbase = false;
            KTreeWidgetSearchLineWidget::dragLeaveEvent(event);
        } else if (ktreewidgetsearchlinewidget_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_dragleaveevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (ktreewidgetsearchlinewidget_dropevent_isbase) {
            ktreewidgetsearchlinewidget_dropevent_isbase = false;
            KTreeWidgetSearchLineWidget::dropEvent(event);
        } else if (ktreewidgetsearchlinewidget_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_dropevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (ktreewidgetsearchlinewidget_showevent_isbase) {
            ktreewidgetsearchlinewidget_showevent_isbase = false;
            KTreeWidgetSearchLineWidget::showEvent(event);
        } else if (ktreewidgetsearchlinewidget_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_showevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (ktreewidgetsearchlinewidget_hideevent_isbase) {
            ktreewidgetsearchlinewidget_hideevent_isbase = false;
            KTreeWidgetSearchLineWidget::hideEvent(event);
        } else if (ktreewidgetsearchlinewidget_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_hideevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ktreewidgetsearchlinewidget_nativeevent_isbase) {
            ktreewidgetsearchlinewidget_nativeevent_isbase = false;
            return KTreeWidgetSearchLineWidget::nativeEvent(eventType, message, result);
        } else if (ktreewidgetsearchlinewidget_nativeevent_callback != nullptr) {
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

            bool callback_ret = ktreewidgetsearchlinewidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KTreeWidgetSearchLineWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (ktreewidgetsearchlinewidget_changeevent_isbase) {
            ktreewidgetsearchlinewidget_changeevent_isbase = false;
            KTreeWidgetSearchLineWidget::changeEvent(param1);
        } else if (ktreewidgetsearchlinewidget_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            ktreewidgetsearchlinewidget_changeevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ktreewidgetsearchlinewidget_metric_isbase) {
            ktreewidgetsearchlinewidget_metric_isbase = false;
            return KTreeWidgetSearchLineWidget::metric(param1);
        } else if (ktreewidgetsearchlinewidget_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = ktreewidgetsearchlinewidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTreeWidgetSearchLineWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ktreewidgetsearchlinewidget_initpainter_isbase) {
            ktreewidgetsearchlinewidget_initpainter_isbase = false;
            KTreeWidgetSearchLineWidget::initPainter(painter);
        } else if (ktreewidgetsearchlinewidget_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            ktreewidgetsearchlinewidget_initpainter_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ktreewidgetsearchlinewidget_redirected_isbase) {
            ktreewidgetsearchlinewidget_redirected_isbase = false;
            return KTreeWidgetSearchLineWidget::redirected(offset);
        } else if (ktreewidgetsearchlinewidget_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = ktreewidgetsearchlinewidget_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTreeWidgetSearchLineWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ktreewidgetsearchlinewidget_sharedpainter_isbase) {
            ktreewidgetsearchlinewidget_sharedpainter_isbase = false;
            return KTreeWidgetSearchLineWidget::sharedPainter();
        } else if (ktreewidgetsearchlinewidget_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = ktreewidgetsearchlinewidget_sharedpainter_callback();
            return callback_ret;
        } else {
            return KTreeWidgetSearchLineWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ktreewidgetsearchlinewidget_inputmethodevent_isbase) {
            ktreewidgetsearchlinewidget_inputmethodevent_isbase = false;
            KTreeWidgetSearchLineWidget::inputMethodEvent(param1);
        } else if (ktreewidgetsearchlinewidget_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            ktreewidgetsearchlinewidget_inputmethodevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ktreewidgetsearchlinewidget_inputmethodquery_isbase) {
            ktreewidgetsearchlinewidget_inputmethodquery_isbase = false;
            return KTreeWidgetSearchLineWidget::inputMethodQuery(param1);
        } else if (ktreewidgetsearchlinewidget_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = ktreewidgetsearchlinewidget_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KTreeWidgetSearchLineWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ktreewidgetsearchlinewidget_focusnextprevchild_isbase) {
            ktreewidgetsearchlinewidget_focusnextprevchild_isbase = false;
            return KTreeWidgetSearchLineWidget::focusNextPrevChild(next);
        } else if (ktreewidgetsearchlinewidget_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = ktreewidgetsearchlinewidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTreeWidgetSearchLineWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktreewidgetsearchlinewidget_eventfilter_isbase) {
            ktreewidgetsearchlinewidget_eventfilter_isbase = false;
            return KTreeWidgetSearchLineWidget::eventFilter(watched, event);
        } else if (ktreewidgetsearchlinewidget_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = ktreewidgetsearchlinewidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KTreeWidgetSearchLineWidget::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktreewidgetsearchlinewidget_timerevent_isbase) {
            ktreewidgetsearchlinewidget_timerevent_isbase = false;
            KTreeWidgetSearchLineWidget::timerEvent(event);
        } else if (ktreewidgetsearchlinewidget_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_timerevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktreewidgetsearchlinewidget_childevent_isbase) {
            ktreewidgetsearchlinewidget_childevent_isbase = false;
            KTreeWidgetSearchLineWidget::childEvent(event);
        } else if (ktreewidgetsearchlinewidget_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_childevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktreewidgetsearchlinewidget_customevent_isbase) {
            ktreewidgetsearchlinewidget_customevent_isbase = false;
            KTreeWidgetSearchLineWidget::customEvent(event);
        } else if (ktreewidgetsearchlinewidget_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktreewidgetsearchlinewidget_customevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktreewidgetsearchlinewidget_connectnotify_isbase) {
            ktreewidgetsearchlinewidget_connectnotify_isbase = false;
            KTreeWidgetSearchLineWidget::connectNotify(signal);
        } else if (ktreewidgetsearchlinewidget_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktreewidgetsearchlinewidget_connectnotify_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktreewidgetsearchlinewidget_disconnectnotify_isbase) {
            ktreewidgetsearchlinewidget_disconnectnotify_isbase = false;
            KTreeWidgetSearchLineWidget::disconnectNotify(signal);
        } else if (ktreewidgetsearchlinewidget_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktreewidgetsearchlinewidget_disconnectnotify_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLineWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (ktreewidgetsearchlinewidget_updatemicrofocus_isbase) {
            ktreewidgetsearchlinewidget_updatemicrofocus_isbase = false;
            KTreeWidgetSearchLineWidget::updateMicroFocus();
        } else if (ktreewidgetsearchlinewidget_updatemicrofocus_callback != nullptr) {
            ktreewidgetsearchlinewidget_updatemicrofocus_callback();
        } else {
            KTreeWidgetSearchLineWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (ktreewidgetsearchlinewidget_create_isbase) {
            ktreewidgetsearchlinewidget_create_isbase = false;
            KTreeWidgetSearchLineWidget::create();
        } else if (ktreewidgetsearchlinewidget_create_callback != nullptr) {
            ktreewidgetsearchlinewidget_create_callback();
        } else {
            KTreeWidgetSearchLineWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (ktreewidgetsearchlinewidget_destroy_isbase) {
            ktreewidgetsearchlinewidget_destroy_isbase = false;
            KTreeWidgetSearchLineWidget::destroy();
        } else if (ktreewidgetsearchlinewidget_destroy_callback != nullptr) {
            ktreewidgetsearchlinewidget_destroy_callback();
        } else {
            KTreeWidgetSearchLineWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (ktreewidgetsearchlinewidget_focusnextchild_isbase) {
            ktreewidgetsearchlinewidget_focusnextchild_isbase = false;
            return KTreeWidgetSearchLineWidget::focusNextChild();
        } else if (ktreewidgetsearchlinewidget_focusnextchild_callback != nullptr) {
            bool callback_ret = ktreewidgetsearchlinewidget_focusnextchild_callback();
            return callback_ret;
        } else {
            return KTreeWidgetSearchLineWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (ktreewidgetsearchlinewidget_focuspreviouschild_isbase) {
            ktreewidgetsearchlinewidget_focuspreviouschild_isbase = false;
            return KTreeWidgetSearchLineWidget::focusPreviousChild();
        } else if (ktreewidgetsearchlinewidget_focuspreviouschild_callback != nullptr) {
            bool callback_ret = ktreewidgetsearchlinewidget_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KTreeWidgetSearchLineWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktreewidgetsearchlinewidget_sender_isbase) {
            ktreewidgetsearchlinewidget_sender_isbase = false;
            return KTreeWidgetSearchLineWidget::sender();
        } else if (ktreewidgetsearchlinewidget_sender_callback != nullptr) {
            QObject* callback_ret = ktreewidgetsearchlinewidget_sender_callback();
            return callback_ret;
        } else {
            return KTreeWidgetSearchLineWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktreewidgetsearchlinewidget_sendersignalindex_isbase) {
            ktreewidgetsearchlinewidget_sendersignalindex_isbase = false;
            return KTreeWidgetSearchLineWidget::senderSignalIndex();
        } else if (ktreewidgetsearchlinewidget_sendersignalindex_callback != nullptr) {
            int callback_ret = ktreewidgetsearchlinewidget_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KTreeWidgetSearchLineWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktreewidgetsearchlinewidget_receivers_isbase) {
            ktreewidgetsearchlinewidget_receivers_isbase = false;
            return KTreeWidgetSearchLineWidget::receivers(signal);
        } else if (ktreewidgetsearchlinewidget_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ktreewidgetsearchlinewidget_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTreeWidgetSearchLineWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktreewidgetsearchlinewidget_issignalconnected_isbase) {
            ktreewidgetsearchlinewidget_issignalconnected_isbase = false;
            return KTreeWidgetSearchLineWidget::isSignalConnected(signal);
        } else if (ktreewidgetsearchlinewidget_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ktreewidgetsearchlinewidget_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTreeWidgetSearchLineWidget::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (ktreewidgetsearchlinewidget_getdecodedmetricf_isbase) {
            ktreewidgetsearchlinewidget_getdecodedmetricf_isbase = false;
            return KTreeWidgetSearchLineWidget::getDecodedMetricF(metricA, metricB);
        } else if (ktreewidgetsearchlinewidget_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = ktreewidgetsearchlinewidget_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KTreeWidgetSearchLineWidget::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KTreeWidgetSearchLineWidget_CreateWidgets(KTreeWidgetSearchLineWidget* self);
    friend void KTreeWidgetSearchLineWidget_QBaseCreateWidgets(KTreeWidgetSearchLineWidget* self);
    friend KTreeWidgetSearchLine* KTreeWidgetSearchLineWidget_CreateSearchLine(const KTreeWidgetSearchLineWidget* self, QTreeWidget* treeWidget);
    friend KTreeWidgetSearchLine* KTreeWidgetSearchLineWidget_QBaseCreateSearchLine(const KTreeWidgetSearchLineWidget* self, QTreeWidget* treeWidget);
    friend bool KTreeWidgetSearchLineWidget_Event(KTreeWidgetSearchLineWidget* self, QEvent* event);
    friend bool KTreeWidgetSearchLineWidget_QBaseEvent(KTreeWidgetSearchLineWidget* self, QEvent* event);
    friend void KTreeWidgetSearchLineWidget_MousePressEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseMousePressEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
    friend void KTreeWidgetSearchLineWidget_MouseReleaseEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseMouseReleaseEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
    friend void KTreeWidgetSearchLineWidget_MouseDoubleClickEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseMouseDoubleClickEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
    friend void KTreeWidgetSearchLineWidget_MouseMoveEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseMouseMoveEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
    friend void KTreeWidgetSearchLineWidget_WheelEvent(KTreeWidgetSearchLineWidget* self, QWheelEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseWheelEvent(KTreeWidgetSearchLineWidget* self, QWheelEvent* event);
    friend void KTreeWidgetSearchLineWidget_KeyPressEvent(KTreeWidgetSearchLineWidget* self, QKeyEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseKeyPressEvent(KTreeWidgetSearchLineWidget* self, QKeyEvent* event);
    friend void KTreeWidgetSearchLineWidget_KeyReleaseEvent(KTreeWidgetSearchLineWidget* self, QKeyEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseKeyReleaseEvent(KTreeWidgetSearchLineWidget* self, QKeyEvent* event);
    friend void KTreeWidgetSearchLineWidget_FocusInEvent(KTreeWidgetSearchLineWidget* self, QFocusEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseFocusInEvent(KTreeWidgetSearchLineWidget* self, QFocusEvent* event);
    friend void KTreeWidgetSearchLineWidget_FocusOutEvent(KTreeWidgetSearchLineWidget* self, QFocusEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseFocusOutEvent(KTreeWidgetSearchLineWidget* self, QFocusEvent* event);
    friend void KTreeWidgetSearchLineWidget_EnterEvent(KTreeWidgetSearchLineWidget* self, QEnterEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseEnterEvent(KTreeWidgetSearchLineWidget* self, QEnterEvent* event);
    friend void KTreeWidgetSearchLineWidget_LeaveEvent(KTreeWidgetSearchLineWidget* self, QEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseLeaveEvent(KTreeWidgetSearchLineWidget* self, QEvent* event);
    friend void KTreeWidgetSearchLineWidget_PaintEvent(KTreeWidgetSearchLineWidget* self, QPaintEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBasePaintEvent(KTreeWidgetSearchLineWidget* self, QPaintEvent* event);
    friend void KTreeWidgetSearchLineWidget_MoveEvent(KTreeWidgetSearchLineWidget* self, QMoveEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseMoveEvent(KTreeWidgetSearchLineWidget* self, QMoveEvent* event);
    friend void KTreeWidgetSearchLineWidget_ResizeEvent(KTreeWidgetSearchLineWidget* self, QResizeEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseResizeEvent(KTreeWidgetSearchLineWidget* self, QResizeEvent* event);
    friend void KTreeWidgetSearchLineWidget_CloseEvent(KTreeWidgetSearchLineWidget* self, QCloseEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseCloseEvent(KTreeWidgetSearchLineWidget* self, QCloseEvent* event);
    friend void KTreeWidgetSearchLineWidget_ContextMenuEvent(KTreeWidgetSearchLineWidget* self, QContextMenuEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseContextMenuEvent(KTreeWidgetSearchLineWidget* self, QContextMenuEvent* event);
    friend void KTreeWidgetSearchLineWidget_TabletEvent(KTreeWidgetSearchLineWidget* self, QTabletEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseTabletEvent(KTreeWidgetSearchLineWidget* self, QTabletEvent* event);
    friend void KTreeWidgetSearchLineWidget_ActionEvent(KTreeWidgetSearchLineWidget* self, QActionEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseActionEvent(KTreeWidgetSearchLineWidget* self, QActionEvent* event);
    friend void KTreeWidgetSearchLineWidget_DragEnterEvent(KTreeWidgetSearchLineWidget* self, QDragEnterEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseDragEnterEvent(KTreeWidgetSearchLineWidget* self, QDragEnterEvent* event);
    friend void KTreeWidgetSearchLineWidget_DragMoveEvent(KTreeWidgetSearchLineWidget* self, QDragMoveEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseDragMoveEvent(KTreeWidgetSearchLineWidget* self, QDragMoveEvent* event);
    friend void KTreeWidgetSearchLineWidget_DragLeaveEvent(KTreeWidgetSearchLineWidget* self, QDragLeaveEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseDragLeaveEvent(KTreeWidgetSearchLineWidget* self, QDragLeaveEvent* event);
    friend void KTreeWidgetSearchLineWidget_DropEvent(KTreeWidgetSearchLineWidget* self, QDropEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseDropEvent(KTreeWidgetSearchLineWidget* self, QDropEvent* event);
    friend void KTreeWidgetSearchLineWidget_ShowEvent(KTreeWidgetSearchLineWidget* self, QShowEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseShowEvent(KTreeWidgetSearchLineWidget* self, QShowEvent* event);
    friend void KTreeWidgetSearchLineWidget_HideEvent(KTreeWidgetSearchLineWidget* self, QHideEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseHideEvent(KTreeWidgetSearchLineWidget* self, QHideEvent* event);
    friend bool KTreeWidgetSearchLineWidget_NativeEvent(KTreeWidgetSearchLineWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KTreeWidgetSearchLineWidget_QBaseNativeEvent(KTreeWidgetSearchLineWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KTreeWidgetSearchLineWidget_ChangeEvent(KTreeWidgetSearchLineWidget* self, QEvent* param1);
    friend void KTreeWidgetSearchLineWidget_QBaseChangeEvent(KTreeWidgetSearchLineWidget* self, QEvent* param1);
    friend int KTreeWidgetSearchLineWidget_Metric(const KTreeWidgetSearchLineWidget* self, int param1);
    friend int KTreeWidgetSearchLineWidget_QBaseMetric(const KTreeWidgetSearchLineWidget* self, int param1);
    friend void KTreeWidgetSearchLineWidget_InitPainter(const KTreeWidgetSearchLineWidget* self, QPainter* painter);
    friend void KTreeWidgetSearchLineWidget_QBaseInitPainter(const KTreeWidgetSearchLineWidget* self, QPainter* painter);
    friend QPaintDevice* KTreeWidgetSearchLineWidget_Redirected(const KTreeWidgetSearchLineWidget* self, QPoint* offset);
    friend QPaintDevice* KTreeWidgetSearchLineWidget_QBaseRedirected(const KTreeWidgetSearchLineWidget* self, QPoint* offset);
    friend QPainter* KTreeWidgetSearchLineWidget_SharedPainter(const KTreeWidgetSearchLineWidget* self);
    friend QPainter* KTreeWidgetSearchLineWidget_QBaseSharedPainter(const KTreeWidgetSearchLineWidget* self);
    friend void KTreeWidgetSearchLineWidget_InputMethodEvent(KTreeWidgetSearchLineWidget* self, QInputMethodEvent* param1);
    friend void KTreeWidgetSearchLineWidget_QBaseInputMethodEvent(KTreeWidgetSearchLineWidget* self, QInputMethodEvent* param1);
    friend bool KTreeWidgetSearchLineWidget_FocusNextPrevChild(KTreeWidgetSearchLineWidget* self, bool next);
    friend bool KTreeWidgetSearchLineWidget_QBaseFocusNextPrevChild(KTreeWidgetSearchLineWidget* self, bool next);
    friend void KTreeWidgetSearchLineWidget_TimerEvent(KTreeWidgetSearchLineWidget* self, QTimerEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseTimerEvent(KTreeWidgetSearchLineWidget* self, QTimerEvent* event);
    friend void KTreeWidgetSearchLineWidget_ChildEvent(KTreeWidgetSearchLineWidget* self, QChildEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseChildEvent(KTreeWidgetSearchLineWidget* self, QChildEvent* event);
    friend void KTreeWidgetSearchLineWidget_CustomEvent(KTreeWidgetSearchLineWidget* self, QEvent* event);
    friend void KTreeWidgetSearchLineWidget_QBaseCustomEvent(KTreeWidgetSearchLineWidget* self, QEvent* event);
    friend void KTreeWidgetSearchLineWidget_ConnectNotify(KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal);
    friend void KTreeWidgetSearchLineWidget_QBaseConnectNotify(KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal);
    friend void KTreeWidgetSearchLineWidget_DisconnectNotify(KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal);
    friend void KTreeWidgetSearchLineWidget_QBaseDisconnectNotify(KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal);
    friend void KTreeWidgetSearchLineWidget_UpdateMicroFocus(KTreeWidgetSearchLineWidget* self);
    friend void KTreeWidgetSearchLineWidget_QBaseUpdateMicroFocus(KTreeWidgetSearchLineWidget* self);
    friend void KTreeWidgetSearchLineWidget_Create(KTreeWidgetSearchLineWidget* self);
    friend void KTreeWidgetSearchLineWidget_QBaseCreate(KTreeWidgetSearchLineWidget* self);
    friend void KTreeWidgetSearchLineWidget_Destroy(KTreeWidgetSearchLineWidget* self);
    friend void KTreeWidgetSearchLineWidget_QBaseDestroy(KTreeWidgetSearchLineWidget* self);
    friend bool KTreeWidgetSearchLineWidget_FocusNextChild(KTreeWidgetSearchLineWidget* self);
    friend bool KTreeWidgetSearchLineWidget_QBaseFocusNextChild(KTreeWidgetSearchLineWidget* self);
    friend bool KTreeWidgetSearchLineWidget_FocusPreviousChild(KTreeWidgetSearchLineWidget* self);
    friend bool KTreeWidgetSearchLineWidget_QBaseFocusPreviousChild(KTreeWidgetSearchLineWidget* self);
    friend QObject* KTreeWidgetSearchLineWidget_Sender(const KTreeWidgetSearchLineWidget* self);
    friend QObject* KTreeWidgetSearchLineWidget_QBaseSender(const KTreeWidgetSearchLineWidget* self);
    friend int KTreeWidgetSearchLineWidget_SenderSignalIndex(const KTreeWidgetSearchLineWidget* self);
    friend int KTreeWidgetSearchLineWidget_QBaseSenderSignalIndex(const KTreeWidgetSearchLineWidget* self);
    friend int KTreeWidgetSearchLineWidget_Receivers(const KTreeWidgetSearchLineWidget* self, const char* signal);
    friend int KTreeWidgetSearchLineWidget_QBaseReceivers(const KTreeWidgetSearchLineWidget* self, const char* signal);
    friend bool KTreeWidgetSearchLineWidget_IsSignalConnected(const KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal);
    friend bool KTreeWidgetSearchLineWidget_QBaseIsSignalConnected(const KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal);
    friend double KTreeWidgetSearchLineWidget_GetDecodedMetricF(const KTreeWidgetSearchLineWidget* self, int metricA, int metricB);
    friend double KTreeWidgetSearchLineWidget_QBaseGetDecodedMetricF(const KTreeWidgetSearchLineWidget* self, int metricA, int metricB);
};

#endif
