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
    using KTreeWidgetSearchLineWidget_MetaObject_Callback = QMetaObject* (*)();
    using KTreeWidgetSearchLineWidget_Metacast_Callback = void* (*)(KTreeWidgetSearchLineWidget*, const char*);
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
    KTreeWidgetSearchLineWidget_MetaObject_Callback ktreewidgetsearchlinewidget_metaobject_callback = nullptr;
    KTreeWidgetSearchLineWidget_Metacast_Callback ktreewidgetsearchlinewidget_metacast_callback = nullptr;
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
    mutable bool ktreewidgetsearchlinewidget_metaobject_isbase = false;
    mutable bool ktreewidgetsearchlinewidget_metacast_isbase = false;
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

    // Callback setters
    inline void setKTreeWidgetSearchLineWidget_MetaObject_Callback(KTreeWidgetSearchLineWidget_MetaObject_Callback cb) { ktreewidgetsearchlinewidget_metaobject_callback = cb; }
    inline void setKTreeWidgetSearchLineWidget_Metacast_Callback(KTreeWidgetSearchLineWidget_Metacast_Callback cb) { ktreewidgetsearchlinewidget_metacast_callback = cb; }
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
    inline void setKTreeWidgetSearchLineWidget_MetaObject_IsBase(bool value) const { ktreewidgetsearchlinewidget_metaobject_isbase = value; }
    inline void setKTreeWidgetSearchLineWidget_Metacast_IsBase(bool value) const { ktreewidgetsearchlinewidget_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (ktreewidgetsearchlinewidget_metaobject_isbase) {
            ktreewidgetsearchlinewidget_metaobject_isbase = false;
            return KTreeWidgetSearchLineWidget::metaObject();
        }
        auto metaobject_cb = ktreewidgetsearchlinewidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktreewidgetsearchlinewidget_metacast_isbase) {
            ktreewidgetsearchlinewidget_metacast_isbase = false;
            return KTreeWidgetSearchLineWidget::qt_metacast(param1);
        }
        auto metacast_cb = ktreewidgetsearchlinewidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktreewidgetsearchlinewidget_metacall_isbase) {
            ktreewidgetsearchlinewidget_metacall_isbase = false;
            return KTreeWidgetSearchLineWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = ktreewidgetsearchlinewidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTreeWidgetSearchLineWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void createWidgets() override {
        if (ktreewidgetsearchlinewidget_createwidgets_isbase) {
            ktreewidgetsearchlinewidget_createwidgets_isbase = false;
            KTreeWidgetSearchLineWidget::createWidgets();
            return;
        }
        auto createwidgets_cb = ktreewidgetsearchlinewidget_createwidgets_callback;
        if (createwidgets_cb) {
            createwidgets_cb();
            return;
        }
        KTreeWidgetSearchLineWidget::createWidgets();
    }

    // Virtual method for C ABI access and custom callback
    virtual KTreeWidgetSearchLine* createSearchLine(QTreeWidget* treeWidget) const override {
        if (ktreewidgetsearchlinewidget_createsearchline_isbase) {
            ktreewidgetsearchlinewidget_createsearchline_isbase = false;
            return KTreeWidgetSearchLineWidget::createSearchLine(treeWidget);
        }
        auto createsearchline_cb = ktreewidgetsearchlinewidget_createsearchline_callback;
        if (createsearchline_cb) {
            QTreeWidget* cbval1 = treeWidget;

            KTreeWidgetSearchLine* callback_ret = createsearchline_cb(this, cbval1);
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::createSearchLine(treeWidget);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ktreewidgetsearchlinewidget_devtype_isbase) {
            ktreewidgetsearchlinewidget_devtype_isbase = false;
            return KTreeWidgetSearchLineWidget::devType();
        }
        auto devtype_cb = ktreewidgetsearchlinewidget_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KTreeWidgetSearchLineWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ktreewidgetsearchlinewidget_setvisible_isbase) {
            ktreewidgetsearchlinewidget_setvisible_isbase = false;
            KTreeWidgetSearchLineWidget::setVisible(visible);
            return;
        }
        auto setvisible_cb = ktreewidgetsearchlinewidget_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ktreewidgetsearchlinewidget_sizehint_isbase) {
            ktreewidgetsearchlinewidget_sizehint_isbase = false;
            return KTreeWidgetSearchLineWidget::sizeHint();
        }
        auto sizehint_cb = ktreewidgetsearchlinewidget_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KTreeWidgetSearchLineWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ktreewidgetsearchlinewidget_minimumsizehint_isbase) {
            ktreewidgetsearchlinewidget_minimumsizehint_isbase = false;
            return KTreeWidgetSearchLineWidget::minimumSizeHint();
        }
        auto minimumsizehint_cb = ktreewidgetsearchlinewidget_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KTreeWidgetSearchLineWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ktreewidgetsearchlinewidget_heightforwidth_isbase) {
            ktreewidgetsearchlinewidget_heightforwidth_isbase = false;
            return KTreeWidgetSearchLineWidget::heightForWidth(param1);
        }
        auto heightforwidth_cb = ktreewidgetsearchlinewidget_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTreeWidgetSearchLineWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ktreewidgetsearchlinewidget_hasheightforwidth_isbase) {
            ktreewidgetsearchlinewidget_hasheightforwidth_isbase = false;
            return KTreeWidgetSearchLineWidget::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = ktreewidgetsearchlinewidget_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ktreewidgetsearchlinewidget_paintengine_isbase) {
            ktreewidgetsearchlinewidget_paintengine_isbase = false;
            return KTreeWidgetSearchLineWidget::paintEngine();
        }
        auto paintengine_cb = ktreewidgetsearchlinewidget_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktreewidgetsearchlinewidget_event_isbase) {
            ktreewidgetsearchlinewidget_event_isbase = false;
            return KTreeWidgetSearchLineWidget::event(event);
        }
        auto event_cb = ktreewidgetsearchlinewidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (ktreewidgetsearchlinewidget_mousepressevent_isbase) {
            ktreewidgetsearchlinewidget_mousepressevent_isbase = false;
            KTreeWidgetSearchLineWidget::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = ktreewidgetsearchlinewidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (ktreewidgetsearchlinewidget_mousereleaseevent_isbase) {
            ktreewidgetsearchlinewidget_mousereleaseevent_isbase = false;
            KTreeWidgetSearchLineWidget::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = ktreewidgetsearchlinewidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (ktreewidgetsearchlinewidget_mousedoubleclickevent_isbase) {
            ktreewidgetsearchlinewidget_mousedoubleclickevent_isbase = false;
            KTreeWidgetSearchLineWidget::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = ktreewidgetsearchlinewidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (ktreewidgetsearchlinewidget_mousemoveevent_isbase) {
            ktreewidgetsearchlinewidget_mousemoveevent_isbase = false;
            KTreeWidgetSearchLineWidget::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = ktreewidgetsearchlinewidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ktreewidgetsearchlinewidget_wheelevent_isbase) {
            ktreewidgetsearchlinewidget_wheelevent_isbase = false;
            KTreeWidgetSearchLineWidget::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = ktreewidgetsearchlinewidget_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (ktreewidgetsearchlinewidget_keypressevent_isbase) {
            ktreewidgetsearchlinewidget_keypressevent_isbase = false;
            KTreeWidgetSearchLineWidget::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = ktreewidgetsearchlinewidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (ktreewidgetsearchlinewidget_keyreleaseevent_isbase) {
            ktreewidgetsearchlinewidget_keyreleaseevent_isbase = false;
            KTreeWidgetSearchLineWidget::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = ktreewidgetsearchlinewidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (ktreewidgetsearchlinewidget_focusinevent_isbase) {
            ktreewidgetsearchlinewidget_focusinevent_isbase = false;
            KTreeWidgetSearchLineWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = ktreewidgetsearchlinewidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (ktreewidgetsearchlinewidget_focusoutevent_isbase) {
            ktreewidgetsearchlinewidget_focusoutevent_isbase = false;
            KTreeWidgetSearchLineWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = ktreewidgetsearchlinewidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ktreewidgetsearchlinewidget_enterevent_isbase) {
            ktreewidgetsearchlinewidget_enterevent_isbase = false;
            KTreeWidgetSearchLineWidget::enterEvent(event);
            return;
        }
        auto enterevent_cb = ktreewidgetsearchlinewidget_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ktreewidgetsearchlinewidget_leaveevent_isbase) {
            ktreewidgetsearchlinewidget_leaveevent_isbase = false;
            KTreeWidgetSearchLineWidget::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = ktreewidgetsearchlinewidget_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (ktreewidgetsearchlinewidget_paintevent_isbase) {
            ktreewidgetsearchlinewidget_paintevent_isbase = false;
            KTreeWidgetSearchLineWidget::paintEvent(event);
            return;
        }
        auto paintevent_cb = ktreewidgetsearchlinewidget_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ktreewidgetsearchlinewidget_moveevent_isbase) {
            ktreewidgetsearchlinewidget_moveevent_isbase = false;
            KTreeWidgetSearchLineWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = ktreewidgetsearchlinewidget_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (ktreewidgetsearchlinewidget_resizeevent_isbase) {
            ktreewidgetsearchlinewidget_resizeevent_isbase = false;
            KTreeWidgetSearchLineWidget::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = ktreewidgetsearchlinewidget_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ktreewidgetsearchlinewidget_closeevent_isbase) {
            ktreewidgetsearchlinewidget_closeevent_isbase = false;
            KTreeWidgetSearchLineWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = ktreewidgetsearchlinewidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (ktreewidgetsearchlinewidget_contextmenuevent_isbase) {
            ktreewidgetsearchlinewidget_contextmenuevent_isbase = false;
            KTreeWidgetSearchLineWidget::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = ktreewidgetsearchlinewidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ktreewidgetsearchlinewidget_tabletevent_isbase) {
            ktreewidgetsearchlinewidget_tabletevent_isbase = false;
            KTreeWidgetSearchLineWidget::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = ktreewidgetsearchlinewidget_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (ktreewidgetsearchlinewidget_actionevent_isbase) {
            ktreewidgetsearchlinewidget_actionevent_isbase = false;
            KTreeWidgetSearchLineWidget::actionEvent(event);
            return;
        }
        auto actionevent_cb = ktreewidgetsearchlinewidget_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (ktreewidgetsearchlinewidget_dragenterevent_isbase) {
            ktreewidgetsearchlinewidget_dragenterevent_isbase = false;
            KTreeWidgetSearchLineWidget::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = ktreewidgetsearchlinewidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (ktreewidgetsearchlinewidget_dragmoveevent_isbase) {
            ktreewidgetsearchlinewidget_dragmoveevent_isbase = false;
            KTreeWidgetSearchLineWidget::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = ktreewidgetsearchlinewidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (ktreewidgetsearchlinewidget_dragleaveevent_isbase) {
            ktreewidgetsearchlinewidget_dragleaveevent_isbase = false;
            KTreeWidgetSearchLineWidget::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = ktreewidgetsearchlinewidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (ktreewidgetsearchlinewidget_dropevent_isbase) {
            ktreewidgetsearchlinewidget_dropevent_isbase = false;
            KTreeWidgetSearchLineWidget::dropEvent(event);
            return;
        }
        auto dropevent_cb = ktreewidgetsearchlinewidget_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (ktreewidgetsearchlinewidget_showevent_isbase) {
            ktreewidgetsearchlinewidget_showevent_isbase = false;
            KTreeWidgetSearchLineWidget::showEvent(event);
            return;
        }
        auto showevent_cb = ktreewidgetsearchlinewidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (ktreewidgetsearchlinewidget_hideevent_isbase) {
            ktreewidgetsearchlinewidget_hideevent_isbase = false;
            KTreeWidgetSearchLineWidget::hideEvent(event);
            return;
        }
        auto hideevent_cb = ktreewidgetsearchlinewidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ktreewidgetsearchlinewidget_nativeevent_isbase) {
            ktreewidgetsearchlinewidget_nativeevent_isbase = false;
            return KTreeWidgetSearchLineWidget::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = ktreewidgetsearchlinewidget_nativeevent_callback;
        if (nativeevent_cb) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = nativeevent_cb(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (ktreewidgetsearchlinewidget_changeevent_isbase) {
            ktreewidgetsearchlinewidget_changeevent_isbase = false;
            KTreeWidgetSearchLineWidget::changeEvent(param1);
            return;
        }
        auto changeevent_cb = ktreewidgetsearchlinewidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ktreewidgetsearchlinewidget_metric_isbase) {
            ktreewidgetsearchlinewidget_metric_isbase = false;
            return KTreeWidgetSearchLineWidget::metric(param1);
        }
        auto metric_cb = ktreewidgetsearchlinewidget_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTreeWidgetSearchLineWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ktreewidgetsearchlinewidget_initpainter_isbase) {
            ktreewidgetsearchlinewidget_initpainter_isbase = false;
            KTreeWidgetSearchLineWidget::initPainter(painter);
            return;
        }
        auto initpainter_cb = ktreewidgetsearchlinewidget_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ktreewidgetsearchlinewidget_redirected_isbase) {
            ktreewidgetsearchlinewidget_redirected_isbase = false;
            return KTreeWidgetSearchLineWidget::redirected(offset);
        }
        auto redirected_cb = ktreewidgetsearchlinewidget_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ktreewidgetsearchlinewidget_sharedpainter_isbase) {
            ktreewidgetsearchlinewidget_sharedpainter_isbase = false;
            return KTreeWidgetSearchLineWidget::sharedPainter();
        }
        auto sharedpainter_cb = ktreewidgetsearchlinewidget_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ktreewidgetsearchlinewidget_inputmethodevent_isbase) {
            ktreewidgetsearchlinewidget_inputmethodevent_isbase = false;
            KTreeWidgetSearchLineWidget::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = ktreewidgetsearchlinewidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ktreewidgetsearchlinewidget_inputmethodquery_isbase) {
            ktreewidgetsearchlinewidget_inputmethodquery_isbase = false;
            return KTreeWidgetSearchLineWidget::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = ktreewidgetsearchlinewidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KTreeWidgetSearchLineWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ktreewidgetsearchlinewidget_focusnextprevchild_isbase) {
            ktreewidgetsearchlinewidget_focusnextprevchild_isbase = false;
            return KTreeWidgetSearchLineWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = ktreewidgetsearchlinewidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktreewidgetsearchlinewidget_eventfilter_isbase) {
            ktreewidgetsearchlinewidget_eventfilter_isbase = false;
            return KTreeWidgetSearchLineWidget::eventFilter(watched, event);
        }
        auto eventfilter_cb = ktreewidgetsearchlinewidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktreewidgetsearchlinewidget_timerevent_isbase) {
            ktreewidgetsearchlinewidget_timerevent_isbase = false;
            KTreeWidgetSearchLineWidget::timerEvent(event);
            return;
        }
        auto timerevent_cb = ktreewidgetsearchlinewidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktreewidgetsearchlinewidget_childevent_isbase) {
            ktreewidgetsearchlinewidget_childevent_isbase = false;
            KTreeWidgetSearchLineWidget::childEvent(event);
            return;
        }
        auto childevent_cb = ktreewidgetsearchlinewidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktreewidgetsearchlinewidget_customevent_isbase) {
            ktreewidgetsearchlinewidget_customevent_isbase = false;
            KTreeWidgetSearchLineWidget::customEvent(event);
            return;
        }
        auto customevent_cb = ktreewidgetsearchlinewidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktreewidgetsearchlinewidget_connectnotify_isbase) {
            ktreewidgetsearchlinewidget_connectnotify_isbase = false;
            KTreeWidgetSearchLineWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = ktreewidgetsearchlinewidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktreewidgetsearchlinewidget_disconnectnotify_isbase) {
            ktreewidgetsearchlinewidget_disconnectnotify_isbase = false;
            KTreeWidgetSearchLineWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = ktreewidgetsearchlinewidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KTreeWidgetSearchLineWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (ktreewidgetsearchlinewidget_updatemicrofocus_isbase) {
            ktreewidgetsearchlinewidget_updatemicrofocus_isbase = false;
            KTreeWidgetSearchLineWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = ktreewidgetsearchlinewidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KTreeWidgetSearchLineWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (ktreewidgetsearchlinewidget_create_isbase) {
            ktreewidgetsearchlinewidget_create_isbase = false;
            KTreeWidgetSearchLineWidget::create();
            return;
        }
        auto create_cb = ktreewidgetsearchlinewidget_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KTreeWidgetSearchLineWidget::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (ktreewidgetsearchlinewidget_destroy_isbase) {
            ktreewidgetsearchlinewidget_destroy_isbase = false;
            KTreeWidgetSearchLineWidget::destroy();
            return;
        }
        auto destroy_cb = ktreewidgetsearchlinewidget_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KTreeWidgetSearchLineWidget::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (ktreewidgetsearchlinewidget_focusnextchild_isbase) {
            ktreewidgetsearchlinewidget_focusnextchild_isbase = false;
            return KTreeWidgetSearchLineWidget::focusNextChild();
        }
        auto focusnextchild_cb = ktreewidgetsearchlinewidget_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (ktreewidgetsearchlinewidget_focuspreviouschild_isbase) {
            ktreewidgetsearchlinewidget_focuspreviouschild_isbase = false;
            return KTreeWidgetSearchLineWidget::focusPreviousChild();
        }
        auto focuspreviouschild_cb = ktreewidgetsearchlinewidget_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktreewidgetsearchlinewidget_sender_isbase) {
            ktreewidgetsearchlinewidget_sender_isbase = false;
            return KTreeWidgetSearchLineWidget::sender();
        }
        auto sender_cb = ktreewidgetsearchlinewidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktreewidgetsearchlinewidget_sendersignalindex_isbase) {
            ktreewidgetsearchlinewidget_sendersignalindex_isbase = false;
            return KTreeWidgetSearchLineWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = ktreewidgetsearchlinewidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KTreeWidgetSearchLineWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktreewidgetsearchlinewidget_receivers_isbase) {
            ktreewidgetsearchlinewidget_receivers_isbase = false;
            return KTreeWidgetSearchLineWidget::receivers(signal);
        }
        auto receivers_cb = ktreewidgetsearchlinewidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTreeWidgetSearchLineWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktreewidgetsearchlinewidget_issignalconnected_isbase) {
            ktreewidgetsearchlinewidget_issignalconnected_isbase = false;
            return KTreeWidgetSearchLineWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = ktreewidgetsearchlinewidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KTreeWidgetSearchLineWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (ktreewidgetsearchlinewidget_getdecodedmetricf_isbase) {
            ktreewidgetsearchlinewidget_getdecodedmetricf_isbase = false;
            return KTreeWidgetSearchLineWidget::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = ktreewidgetsearchlinewidget_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KTreeWidgetSearchLineWidget::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KTreeWidgetSearchLineWidget_CreateWidgets(KTreeWidgetSearchLineWidget* self);
    friend void KTreeWidgetSearchLineWidget_SuperCreateWidgets(KTreeWidgetSearchLineWidget* self);
    friend KTreeWidgetSearchLine* KTreeWidgetSearchLineWidget_CreateSearchLine(const KTreeWidgetSearchLineWidget* self, QTreeWidget* treeWidget);
    friend KTreeWidgetSearchLine* KTreeWidgetSearchLineWidget_SuperCreateSearchLine(const KTreeWidgetSearchLineWidget* self, QTreeWidget* treeWidget);
    friend bool KTreeWidgetSearchLineWidget_Event(KTreeWidgetSearchLineWidget* self, QEvent* event);
    friend bool KTreeWidgetSearchLineWidget_SuperEvent(KTreeWidgetSearchLineWidget* self, QEvent* event);
    friend void KTreeWidgetSearchLineWidget_MousePressEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperMousePressEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
    friend void KTreeWidgetSearchLineWidget_MouseReleaseEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperMouseReleaseEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
    friend void KTreeWidgetSearchLineWidget_MouseDoubleClickEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperMouseDoubleClickEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
    friend void KTreeWidgetSearchLineWidget_MouseMoveEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperMouseMoveEvent(KTreeWidgetSearchLineWidget* self, QMouseEvent* event);
    friend void KTreeWidgetSearchLineWidget_WheelEvent(KTreeWidgetSearchLineWidget* self, QWheelEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperWheelEvent(KTreeWidgetSearchLineWidget* self, QWheelEvent* event);
    friend void KTreeWidgetSearchLineWidget_KeyPressEvent(KTreeWidgetSearchLineWidget* self, QKeyEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperKeyPressEvent(KTreeWidgetSearchLineWidget* self, QKeyEvent* event);
    friend void KTreeWidgetSearchLineWidget_KeyReleaseEvent(KTreeWidgetSearchLineWidget* self, QKeyEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperKeyReleaseEvent(KTreeWidgetSearchLineWidget* self, QKeyEvent* event);
    friend void KTreeWidgetSearchLineWidget_FocusInEvent(KTreeWidgetSearchLineWidget* self, QFocusEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperFocusInEvent(KTreeWidgetSearchLineWidget* self, QFocusEvent* event);
    friend void KTreeWidgetSearchLineWidget_FocusOutEvent(KTreeWidgetSearchLineWidget* self, QFocusEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperFocusOutEvent(KTreeWidgetSearchLineWidget* self, QFocusEvent* event);
    friend void KTreeWidgetSearchLineWidget_EnterEvent(KTreeWidgetSearchLineWidget* self, QEnterEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperEnterEvent(KTreeWidgetSearchLineWidget* self, QEnterEvent* event);
    friend void KTreeWidgetSearchLineWidget_LeaveEvent(KTreeWidgetSearchLineWidget* self, QEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperLeaveEvent(KTreeWidgetSearchLineWidget* self, QEvent* event);
    friend void KTreeWidgetSearchLineWidget_PaintEvent(KTreeWidgetSearchLineWidget* self, QPaintEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperPaintEvent(KTreeWidgetSearchLineWidget* self, QPaintEvent* event);
    friend void KTreeWidgetSearchLineWidget_MoveEvent(KTreeWidgetSearchLineWidget* self, QMoveEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperMoveEvent(KTreeWidgetSearchLineWidget* self, QMoveEvent* event);
    friend void KTreeWidgetSearchLineWidget_ResizeEvent(KTreeWidgetSearchLineWidget* self, QResizeEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperResizeEvent(KTreeWidgetSearchLineWidget* self, QResizeEvent* event);
    friend void KTreeWidgetSearchLineWidget_CloseEvent(KTreeWidgetSearchLineWidget* self, QCloseEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperCloseEvent(KTreeWidgetSearchLineWidget* self, QCloseEvent* event);
    friend void KTreeWidgetSearchLineWidget_ContextMenuEvent(KTreeWidgetSearchLineWidget* self, QContextMenuEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperContextMenuEvent(KTreeWidgetSearchLineWidget* self, QContextMenuEvent* event);
    friend void KTreeWidgetSearchLineWidget_TabletEvent(KTreeWidgetSearchLineWidget* self, QTabletEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperTabletEvent(KTreeWidgetSearchLineWidget* self, QTabletEvent* event);
    friend void KTreeWidgetSearchLineWidget_ActionEvent(KTreeWidgetSearchLineWidget* self, QActionEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperActionEvent(KTreeWidgetSearchLineWidget* self, QActionEvent* event);
    friend void KTreeWidgetSearchLineWidget_DragEnterEvent(KTreeWidgetSearchLineWidget* self, QDragEnterEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperDragEnterEvent(KTreeWidgetSearchLineWidget* self, QDragEnterEvent* event);
    friend void KTreeWidgetSearchLineWidget_DragMoveEvent(KTreeWidgetSearchLineWidget* self, QDragMoveEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperDragMoveEvent(KTreeWidgetSearchLineWidget* self, QDragMoveEvent* event);
    friend void KTreeWidgetSearchLineWidget_DragLeaveEvent(KTreeWidgetSearchLineWidget* self, QDragLeaveEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperDragLeaveEvent(KTreeWidgetSearchLineWidget* self, QDragLeaveEvent* event);
    friend void KTreeWidgetSearchLineWidget_DropEvent(KTreeWidgetSearchLineWidget* self, QDropEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperDropEvent(KTreeWidgetSearchLineWidget* self, QDropEvent* event);
    friend void KTreeWidgetSearchLineWidget_ShowEvent(KTreeWidgetSearchLineWidget* self, QShowEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperShowEvent(KTreeWidgetSearchLineWidget* self, QShowEvent* event);
    friend void KTreeWidgetSearchLineWidget_HideEvent(KTreeWidgetSearchLineWidget* self, QHideEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperHideEvent(KTreeWidgetSearchLineWidget* self, QHideEvent* event);
    friend bool KTreeWidgetSearchLineWidget_NativeEvent(KTreeWidgetSearchLineWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KTreeWidgetSearchLineWidget_SuperNativeEvent(KTreeWidgetSearchLineWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KTreeWidgetSearchLineWidget_ChangeEvent(KTreeWidgetSearchLineWidget* self, QEvent* param1);
    friend void KTreeWidgetSearchLineWidget_SuperChangeEvent(KTreeWidgetSearchLineWidget* self, QEvent* param1);
    friend int KTreeWidgetSearchLineWidget_Metric(const KTreeWidgetSearchLineWidget* self, int param1);
    friend int KTreeWidgetSearchLineWidget_SuperMetric(const KTreeWidgetSearchLineWidget* self, int param1);
    friend void KTreeWidgetSearchLineWidget_InitPainter(const KTreeWidgetSearchLineWidget* self, QPainter* painter);
    friend void KTreeWidgetSearchLineWidget_SuperInitPainter(const KTreeWidgetSearchLineWidget* self, QPainter* painter);
    friend QPaintDevice* KTreeWidgetSearchLineWidget_Redirected(const KTreeWidgetSearchLineWidget* self, QPoint* offset);
    friend QPaintDevice* KTreeWidgetSearchLineWidget_SuperRedirected(const KTreeWidgetSearchLineWidget* self, QPoint* offset);
    friend QPainter* KTreeWidgetSearchLineWidget_SharedPainter(const KTreeWidgetSearchLineWidget* self);
    friend QPainter* KTreeWidgetSearchLineWidget_SuperSharedPainter(const KTreeWidgetSearchLineWidget* self);
    friend void KTreeWidgetSearchLineWidget_InputMethodEvent(KTreeWidgetSearchLineWidget* self, QInputMethodEvent* param1);
    friend void KTreeWidgetSearchLineWidget_SuperInputMethodEvent(KTreeWidgetSearchLineWidget* self, QInputMethodEvent* param1);
    friend bool KTreeWidgetSearchLineWidget_FocusNextPrevChild(KTreeWidgetSearchLineWidget* self, bool next);
    friend bool KTreeWidgetSearchLineWidget_SuperFocusNextPrevChild(KTreeWidgetSearchLineWidget* self, bool next);
    friend void KTreeWidgetSearchLineWidget_TimerEvent(KTreeWidgetSearchLineWidget* self, QTimerEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperTimerEvent(KTreeWidgetSearchLineWidget* self, QTimerEvent* event);
    friend void KTreeWidgetSearchLineWidget_ChildEvent(KTreeWidgetSearchLineWidget* self, QChildEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperChildEvent(KTreeWidgetSearchLineWidget* self, QChildEvent* event);
    friend void KTreeWidgetSearchLineWidget_CustomEvent(KTreeWidgetSearchLineWidget* self, QEvent* event);
    friend void KTreeWidgetSearchLineWidget_SuperCustomEvent(KTreeWidgetSearchLineWidget* self, QEvent* event);
    friend void KTreeWidgetSearchLineWidget_ConnectNotify(KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal);
    friend void KTreeWidgetSearchLineWidget_SuperConnectNotify(KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal);
    friend void KTreeWidgetSearchLineWidget_DisconnectNotify(KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal);
    friend void KTreeWidgetSearchLineWidget_SuperDisconnectNotify(KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal);
    friend void KTreeWidgetSearchLineWidget_UpdateMicroFocus(KTreeWidgetSearchLineWidget* self);
    friend void KTreeWidgetSearchLineWidget_SuperUpdateMicroFocus(KTreeWidgetSearchLineWidget* self);
    friend void KTreeWidgetSearchLineWidget_Create(KTreeWidgetSearchLineWidget* self);
    friend void KTreeWidgetSearchLineWidget_SuperCreate(KTreeWidgetSearchLineWidget* self);
    friend void KTreeWidgetSearchLineWidget_Destroy(KTreeWidgetSearchLineWidget* self);
    friend void KTreeWidgetSearchLineWidget_SuperDestroy(KTreeWidgetSearchLineWidget* self);
    friend bool KTreeWidgetSearchLineWidget_FocusNextChild(KTreeWidgetSearchLineWidget* self);
    friend bool KTreeWidgetSearchLineWidget_SuperFocusNextChild(KTreeWidgetSearchLineWidget* self);
    friend bool KTreeWidgetSearchLineWidget_FocusPreviousChild(KTreeWidgetSearchLineWidget* self);
    friend bool KTreeWidgetSearchLineWidget_SuperFocusPreviousChild(KTreeWidgetSearchLineWidget* self);
    friend QObject* KTreeWidgetSearchLineWidget_Sender(const KTreeWidgetSearchLineWidget* self);
    friend QObject* KTreeWidgetSearchLineWidget_SuperSender(const KTreeWidgetSearchLineWidget* self);
    friend int KTreeWidgetSearchLineWidget_SenderSignalIndex(const KTreeWidgetSearchLineWidget* self);
    friend int KTreeWidgetSearchLineWidget_SuperSenderSignalIndex(const KTreeWidgetSearchLineWidget* self);
    friend int KTreeWidgetSearchLineWidget_Receivers(const KTreeWidgetSearchLineWidget* self, const char* signal);
    friend int KTreeWidgetSearchLineWidget_SuperReceivers(const KTreeWidgetSearchLineWidget* self, const char* signal);
    friend bool KTreeWidgetSearchLineWidget_IsSignalConnected(const KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal);
    friend bool KTreeWidgetSearchLineWidget_SuperIsSignalConnected(const KTreeWidgetSearchLineWidget* self, const QMetaMethod* signal);
    friend double KTreeWidgetSearchLineWidget_GetDecodedMetricF(const KTreeWidgetSearchLineWidget* self, int metricA, int metricB);
    friend double KTreeWidgetSearchLineWidget_SuperGetDecodedMetricF(const KTreeWidgetSearchLineWidget* self, int metricA, int metricB);
};

#endif
