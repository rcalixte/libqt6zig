#pragma once
#ifndef SRCC_LIBVIRTUALQTABWIDGET_H
#define SRCC_LIBVIRTUALQTABWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTabWidget so that we can call protected methods
class VirtualQTabWidget final : public QTabWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualQTabWidget = true;

    // Virtual class public types (including callbacks)
    using QTabWidget_Metacall_Callback = int (*)(QTabWidget*, int, int, void**);
    using QTabWidget_SizeHint_Callback = QSize* (*)();
    using QTabWidget_MinimumSizeHint_Callback = QSize* (*)();
    using QTabWidget_HeightForWidth_Callback = int (*)(const QTabWidget*, int);
    using QTabWidget_HasHeightForWidth_Callback = bool (*)();
    using QTabWidget_TabInserted_Callback = void (*)(QTabWidget*, int);
    using QTabWidget_TabRemoved_Callback = void (*)(QTabWidget*, int);
    using QTabWidget_ShowEvent_Callback = void (*)(QTabWidget*, QShowEvent*);
    using QTabWidget_ResizeEvent_Callback = void (*)(QTabWidget*, QResizeEvent*);
    using QTabWidget_KeyPressEvent_Callback = void (*)(QTabWidget*, QKeyEvent*);
    using QTabWidget_PaintEvent_Callback = void (*)(QTabWidget*, QPaintEvent*);
    using QTabWidget_ChangeEvent_Callback = void (*)(QTabWidget*, QEvent*);
    using QTabWidget_Event_Callback = bool (*)(QTabWidget*, QEvent*);
    using QTabWidget_InitStyleOption_Callback = void (*)(const QTabWidget*, QStyleOptionTabWidgetFrame*);
    using QTabWidget_DevType_Callback = int (*)();
    using QTabWidget_SetVisible_Callback = void (*)(QTabWidget*, bool);
    using QTabWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using QTabWidget_MousePressEvent_Callback = void (*)(QTabWidget*, QMouseEvent*);
    using QTabWidget_MouseReleaseEvent_Callback = void (*)(QTabWidget*, QMouseEvent*);
    using QTabWidget_MouseDoubleClickEvent_Callback = void (*)(QTabWidget*, QMouseEvent*);
    using QTabWidget_MouseMoveEvent_Callback = void (*)(QTabWidget*, QMouseEvent*);
    using QTabWidget_WheelEvent_Callback = void (*)(QTabWidget*, QWheelEvent*);
    using QTabWidget_KeyReleaseEvent_Callback = void (*)(QTabWidget*, QKeyEvent*);
    using QTabWidget_FocusInEvent_Callback = void (*)(QTabWidget*, QFocusEvent*);
    using QTabWidget_FocusOutEvent_Callback = void (*)(QTabWidget*, QFocusEvent*);
    using QTabWidget_EnterEvent_Callback = void (*)(QTabWidget*, QEnterEvent*);
    using QTabWidget_LeaveEvent_Callback = void (*)(QTabWidget*, QEvent*);
    using QTabWidget_MoveEvent_Callback = void (*)(QTabWidget*, QMoveEvent*);
    using QTabWidget_CloseEvent_Callback = void (*)(QTabWidget*, QCloseEvent*);
    using QTabWidget_ContextMenuEvent_Callback = void (*)(QTabWidget*, QContextMenuEvent*);
    using QTabWidget_TabletEvent_Callback = void (*)(QTabWidget*, QTabletEvent*);
    using QTabWidget_ActionEvent_Callback = void (*)(QTabWidget*, QActionEvent*);
    using QTabWidget_DragEnterEvent_Callback = void (*)(QTabWidget*, QDragEnterEvent*);
    using QTabWidget_DragMoveEvent_Callback = void (*)(QTabWidget*, QDragMoveEvent*);
    using QTabWidget_DragLeaveEvent_Callback = void (*)(QTabWidget*, QDragLeaveEvent*);
    using QTabWidget_DropEvent_Callback = void (*)(QTabWidget*, QDropEvent*);
    using QTabWidget_HideEvent_Callback = void (*)(QTabWidget*, QHideEvent*);
    using QTabWidget_NativeEvent_Callback = bool (*)(QTabWidget*, libqt_string, void*, intptr_t*);
    using QTabWidget_Metric_Callback = int (*)(const QTabWidget*, int);
    using QTabWidget_InitPainter_Callback = void (*)(const QTabWidget*, QPainter*);
    using QTabWidget_Redirected_Callback = QPaintDevice* (*)(const QTabWidget*, QPoint*);
    using QTabWidget_SharedPainter_Callback = QPainter* (*)();
    using QTabWidget_InputMethodEvent_Callback = void (*)(QTabWidget*, QInputMethodEvent*);
    using QTabWidget_InputMethodQuery_Callback = QVariant* (*)(const QTabWidget*, int);
    using QTabWidget_FocusNextPrevChild_Callback = bool (*)(QTabWidget*, bool);
    using QTabWidget_EventFilter_Callback = bool (*)(QTabWidget*, QObject*, QEvent*);
    using QTabWidget_TimerEvent_Callback = void (*)(QTabWidget*, QTimerEvent*);
    using QTabWidget_ChildEvent_Callback = void (*)(QTabWidget*, QChildEvent*);
    using QTabWidget_CustomEvent_Callback = void (*)(QTabWidget*, QEvent*);
    using QTabWidget_ConnectNotify_Callback = void (*)(QTabWidget*, QMetaMethod*);
    using QTabWidget_DisconnectNotify_Callback = void (*)(QTabWidget*, QMetaMethod*);
    using QTabWidget_SetTabBar_Callback = void (*)(QTabWidget*, QTabBar*);
    using QTabWidget_UpdateMicroFocus_Callback = void (*)();
    using QTabWidget_Create_Callback = void (*)();
    using QTabWidget_Destroy_Callback = void (*)();
    using QTabWidget_FocusNextChild_Callback = bool (*)();
    using QTabWidget_FocusPreviousChild_Callback = bool (*)();
    using QTabWidget_Sender_Callback = QObject* (*)();
    using QTabWidget_SenderSignalIndex_Callback = int (*)();
    using QTabWidget_Receivers_Callback = int (*)(const QTabWidget*, const char*);
    using QTabWidget_IsSignalConnected_Callback = bool (*)(const QTabWidget*, QMetaMethod*);

  protected:
    // Instance callback storage
    QTabWidget_Metacall_Callback qtabwidget_metacall_callback = nullptr;
    QTabWidget_SizeHint_Callback qtabwidget_sizehint_callback = nullptr;
    QTabWidget_MinimumSizeHint_Callback qtabwidget_minimumsizehint_callback = nullptr;
    QTabWidget_HeightForWidth_Callback qtabwidget_heightforwidth_callback = nullptr;
    QTabWidget_HasHeightForWidth_Callback qtabwidget_hasheightforwidth_callback = nullptr;
    QTabWidget_TabInserted_Callback qtabwidget_tabinserted_callback = nullptr;
    QTabWidget_TabRemoved_Callback qtabwidget_tabremoved_callback = nullptr;
    QTabWidget_ShowEvent_Callback qtabwidget_showevent_callback = nullptr;
    QTabWidget_ResizeEvent_Callback qtabwidget_resizeevent_callback = nullptr;
    QTabWidget_KeyPressEvent_Callback qtabwidget_keypressevent_callback = nullptr;
    QTabWidget_PaintEvent_Callback qtabwidget_paintevent_callback = nullptr;
    QTabWidget_ChangeEvent_Callback qtabwidget_changeevent_callback = nullptr;
    QTabWidget_Event_Callback qtabwidget_event_callback = nullptr;
    QTabWidget_InitStyleOption_Callback qtabwidget_initstyleoption_callback = nullptr;
    QTabWidget_DevType_Callback qtabwidget_devtype_callback = nullptr;
    QTabWidget_SetVisible_Callback qtabwidget_setvisible_callback = nullptr;
    QTabWidget_PaintEngine_Callback qtabwidget_paintengine_callback = nullptr;
    QTabWidget_MousePressEvent_Callback qtabwidget_mousepressevent_callback = nullptr;
    QTabWidget_MouseReleaseEvent_Callback qtabwidget_mousereleaseevent_callback = nullptr;
    QTabWidget_MouseDoubleClickEvent_Callback qtabwidget_mousedoubleclickevent_callback = nullptr;
    QTabWidget_MouseMoveEvent_Callback qtabwidget_mousemoveevent_callback = nullptr;
    QTabWidget_WheelEvent_Callback qtabwidget_wheelevent_callback = nullptr;
    QTabWidget_KeyReleaseEvent_Callback qtabwidget_keyreleaseevent_callback = nullptr;
    QTabWidget_FocusInEvent_Callback qtabwidget_focusinevent_callback = nullptr;
    QTabWidget_FocusOutEvent_Callback qtabwidget_focusoutevent_callback = nullptr;
    QTabWidget_EnterEvent_Callback qtabwidget_enterevent_callback = nullptr;
    QTabWidget_LeaveEvent_Callback qtabwidget_leaveevent_callback = nullptr;
    QTabWidget_MoveEvent_Callback qtabwidget_moveevent_callback = nullptr;
    QTabWidget_CloseEvent_Callback qtabwidget_closeevent_callback = nullptr;
    QTabWidget_ContextMenuEvent_Callback qtabwidget_contextmenuevent_callback = nullptr;
    QTabWidget_TabletEvent_Callback qtabwidget_tabletevent_callback = nullptr;
    QTabWidget_ActionEvent_Callback qtabwidget_actionevent_callback = nullptr;
    QTabWidget_DragEnterEvent_Callback qtabwidget_dragenterevent_callback = nullptr;
    QTabWidget_DragMoveEvent_Callback qtabwidget_dragmoveevent_callback = nullptr;
    QTabWidget_DragLeaveEvent_Callback qtabwidget_dragleaveevent_callback = nullptr;
    QTabWidget_DropEvent_Callback qtabwidget_dropevent_callback = nullptr;
    QTabWidget_HideEvent_Callback qtabwidget_hideevent_callback = nullptr;
    QTabWidget_NativeEvent_Callback qtabwidget_nativeevent_callback = nullptr;
    QTabWidget_Metric_Callback qtabwidget_metric_callback = nullptr;
    QTabWidget_InitPainter_Callback qtabwidget_initpainter_callback = nullptr;
    QTabWidget_Redirected_Callback qtabwidget_redirected_callback = nullptr;
    QTabWidget_SharedPainter_Callback qtabwidget_sharedpainter_callback = nullptr;
    QTabWidget_InputMethodEvent_Callback qtabwidget_inputmethodevent_callback = nullptr;
    QTabWidget_InputMethodQuery_Callback qtabwidget_inputmethodquery_callback = nullptr;
    QTabWidget_FocusNextPrevChild_Callback qtabwidget_focusnextprevchild_callback = nullptr;
    QTabWidget_EventFilter_Callback qtabwidget_eventfilter_callback = nullptr;
    QTabWidget_TimerEvent_Callback qtabwidget_timerevent_callback = nullptr;
    QTabWidget_ChildEvent_Callback qtabwidget_childevent_callback = nullptr;
    QTabWidget_CustomEvent_Callback qtabwidget_customevent_callback = nullptr;
    QTabWidget_ConnectNotify_Callback qtabwidget_connectnotify_callback = nullptr;
    QTabWidget_DisconnectNotify_Callback qtabwidget_disconnectnotify_callback = nullptr;
    QTabWidget_SetTabBar_Callback qtabwidget_settabbar_callback = nullptr;
    QTabWidget_UpdateMicroFocus_Callback qtabwidget_updatemicrofocus_callback = nullptr;
    QTabWidget_Create_Callback qtabwidget_create_callback = nullptr;
    QTabWidget_Destroy_Callback qtabwidget_destroy_callback = nullptr;
    QTabWidget_FocusNextChild_Callback qtabwidget_focusnextchild_callback = nullptr;
    QTabWidget_FocusPreviousChild_Callback qtabwidget_focuspreviouschild_callback = nullptr;
    QTabWidget_Sender_Callback qtabwidget_sender_callback = nullptr;
    QTabWidget_SenderSignalIndex_Callback qtabwidget_sendersignalindex_callback = nullptr;
    QTabWidget_Receivers_Callback qtabwidget_receivers_callback = nullptr;
    QTabWidget_IsSignalConnected_Callback qtabwidget_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtabwidget_metacall_isbase = false;
    mutable bool qtabwidget_sizehint_isbase = false;
    mutable bool qtabwidget_minimumsizehint_isbase = false;
    mutable bool qtabwidget_heightforwidth_isbase = false;
    mutable bool qtabwidget_hasheightforwidth_isbase = false;
    mutable bool qtabwidget_tabinserted_isbase = false;
    mutable bool qtabwidget_tabremoved_isbase = false;
    mutable bool qtabwidget_showevent_isbase = false;
    mutable bool qtabwidget_resizeevent_isbase = false;
    mutable bool qtabwidget_keypressevent_isbase = false;
    mutable bool qtabwidget_paintevent_isbase = false;
    mutable bool qtabwidget_changeevent_isbase = false;
    mutable bool qtabwidget_event_isbase = false;
    mutable bool qtabwidget_initstyleoption_isbase = false;
    mutable bool qtabwidget_devtype_isbase = false;
    mutable bool qtabwidget_setvisible_isbase = false;
    mutable bool qtabwidget_paintengine_isbase = false;
    mutable bool qtabwidget_mousepressevent_isbase = false;
    mutable bool qtabwidget_mousereleaseevent_isbase = false;
    mutable bool qtabwidget_mousedoubleclickevent_isbase = false;
    mutable bool qtabwidget_mousemoveevent_isbase = false;
    mutable bool qtabwidget_wheelevent_isbase = false;
    mutable bool qtabwidget_keyreleaseevent_isbase = false;
    mutable bool qtabwidget_focusinevent_isbase = false;
    mutable bool qtabwidget_focusoutevent_isbase = false;
    mutable bool qtabwidget_enterevent_isbase = false;
    mutable bool qtabwidget_leaveevent_isbase = false;
    mutable bool qtabwidget_moveevent_isbase = false;
    mutable bool qtabwidget_closeevent_isbase = false;
    mutable bool qtabwidget_contextmenuevent_isbase = false;
    mutable bool qtabwidget_tabletevent_isbase = false;
    mutable bool qtabwidget_actionevent_isbase = false;
    mutable bool qtabwidget_dragenterevent_isbase = false;
    mutable bool qtabwidget_dragmoveevent_isbase = false;
    mutable bool qtabwidget_dragleaveevent_isbase = false;
    mutable bool qtabwidget_dropevent_isbase = false;
    mutable bool qtabwidget_hideevent_isbase = false;
    mutable bool qtabwidget_nativeevent_isbase = false;
    mutable bool qtabwidget_metric_isbase = false;
    mutable bool qtabwidget_initpainter_isbase = false;
    mutable bool qtabwidget_redirected_isbase = false;
    mutable bool qtabwidget_sharedpainter_isbase = false;
    mutable bool qtabwidget_inputmethodevent_isbase = false;
    mutable bool qtabwidget_inputmethodquery_isbase = false;
    mutable bool qtabwidget_focusnextprevchild_isbase = false;
    mutable bool qtabwidget_eventfilter_isbase = false;
    mutable bool qtabwidget_timerevent_isbase = false;
    mutable bool qtabwidget_childevent_isbase = false;
    mutable bool qtabwidget_customevent_isbase = false;
    mutable bool qtabwidget_connectnotify_isbase = false;
    mutable bool qtabwidget_disconnectnotify_isbase = false;
    mutable bool qtabwidget_settabbar_isbase = false;
    mutable bool qtabwidget_updatemicrofocus_isbase = false;
    mutable bool qtabwidget_create_isbase = false;
    mutable bool qtabwidget_destroy_isbase = false;
    mutable bool qtabwidget_focusnextchild_isbase = false;
    mutable bool qtabwidget_focuspreviouschild_isbase = false;
    mutable bool qtabwidget_sender_isbase = false;
    mutable bool qtabwidget_sendersignalindex_isbase = false;
    mutable bool qtabwidget_receivers_isbase = false;
    mutable bool qtabwidget_issignalconnected_isbase = false;

  public:
    VirtualQTabWidget(QWidget* parent) : QTabWidget(parent){};
    VirtualQTabWidget() : QTabWidget(){};

    ~VirtualQTabWidget() {
        qtabwidget_metacall_callback = nullptr;
        qtabwidget_sizehint_callback = nullptr;
        qtabwidget_minimumsizehint_callback = nullptr;
        qtabwidget_heightforwidth_callback = nullptr;
        qtabwidget_hasheightforwidth_callback = nullptr;
        qtabwidget_tabinserted_callback = nullptr;
        qtabwidget_tabremoved_callback = nullptr;
        qtabwidget_showevent_callback = nullptr;
        qtabwidget_resizeevent_callback = nullptr;
        qtabwidget_keypressevent_callback = nullptr;
        qtabwidget_paintevent_callback = nullptr;
        qtabwidget_changeevent_callback = nullptr;
        qtabwidget_event_callback = nullptr;
        qtabwidget_initstyleoption_callback = nullptr;
        qtabwidget_devtype_callback = nullptr;
        qtabwidget_setvisible_callback = nullptr;
        qtabwidget_paintengine_callback = nullptr;
        qtabwidget_mousepressevent_callback = nullptr;
        qtabwidget_mousereleaseevent_callback = nullptr;
        qtabwidget_mousedoubleclickevent_callback = nullptr;
        qtabwidget_mousemoveevent_callback = nullptr;
        qtabwidget_wheelevent_callback = nullptr;
        qtabwidget_keyreleaseevent_callback = nullptr;
        qtabwidget_focusinevent_callback = nullptr;
        qtabwidget_focusoutevent_callback = nullptr;
        qtabwidget_enterevent_callback = nullptr;
        qtabwidget_leaveevent_callback = nullptr;
        qtabwidget_moveevent_callback = nullptr;
        qtabwidget_closeevent_callback = nullptr;
        qtabwidget_contextmenuevent_callback = nullptr;
        qtabwidget_tabletevent_callback = nullptr;
        qtabwidget_actionevent_callback = nullptr;
        qtabwidget_dragenterevent_callback = nullptr;
        qtabwidget_dragmoveevent_callback = nullptr;
        qtabwidget_dragleaveevent_callback = nullptr;
        qtabwidget_dropevent_callback = nullptr;
        qtabwidget_hideevent_callback = nullptr;
        qtabwidget_nativeevent_callback = nullptr;
        qtabwidget_metric_callback = nullptr;
        qtabwidget_initpainter_callback = nullptr;
        qtabwidget_redirected_callback = nullptr;
        qtabwidget_sharedpainter_callback = nullptr;
        qtabwidget_inputmethodevent_callback = nullptr;
        qtabwidget_inputmethodquery_callback = nullptr;
        qtabwidget_focusnextprevchild_callback = nullptr;
        qtabwidget_eventfilter_callback = nullptr;
        qtabwidget_timerevent_callback = nullptr;
        qtabwidget_childevent_callback = nullptr;
        qtabwidget_customevent_callback = nullptr;
        qtabwidget_connectnotify_callback = nullptr;
        qtabwidget_disconnectnotify_callback = nullptr;
        qtabwidget_settabbar_callback = nullptr;
        qtabwidget_updatemicrofocus_callback = nullptr;
        qtabwidget_create_callback = nullptr;
        qtabwidget_destroy_callback = nullptr;
        qtabwidget_focusnextchild_callback = nullptr;
        qtabwidget_focuspreviouschild_callback = nullptr;
        qtabwidget_sender_callback = nullptr;
        qtabwidget_sendersignalindex_callback = nullptr;
        qtabwidget_receivers_callback = nullptr;
        qtabwidget_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQTabWidget_Metacall_Callback(QTabWidget_Metacall_Callback cb) { qtabwidget_metacall_callback = cb; }
    inline void setQTabWidget_SizeHint_Callback(QTabWidget_SizeHint_Callback cb) { qtabwidget_sizehint_callback = cb; }
    inline void setQTabWidget_MinimumSizeHint_Callback(QTabWidget_MinimumSizeHint_Callback cb) { qtabwidget_minimumsizehint_callback = cb; }
    inline void setQTabWidget_HeightForWidth_Callback(QTabWidget_HeightForWidth_Callback cb) { qtabwidget_heightforwidth_callback = cb; }
    inline void setQTabWidget_HasHeightForWidth_Callback(QTabWidget_HasHeightForWidth_Callback cb) { qtabwidget_hasheightforwidth_callback = cb; }
    inline void setQTabWidget_TabInserted_Callback(QTabWidget_TabInserted_Callback cb) { qtabwidget_tabinserted_callback = cb; }
    inline void setQTabWidget_TabRemoved_Callback(QTabWidget_TabRemoved_Callback cb) { qtabwidget_tabremoved_callback = cb; }
    inline void setQTabWidget_ShowEvent_Callback(QTabWidget_ShowEvent_Callback cb) { qtabwidget_showevent_callback = cb; }
    inline void setQTabWidget_ResizeEvent_Callback(QTabWidget_ResizeEvent_Callback cb) { qtabwidget_resizeevent_callback = cb; }
    inline void setQTabWidget_KeyPressEvent_Callback(QTabWidget_KeyPressEvent_Callback cb) { qtabwidget_keypressevent_callback = cb; }
    inline void setQTabWidget_PaintEvent_Callback(QTabWidget_PaintEvent_Callback cb) { qtabwidget_paintevent_callback = cb; }
    inline void setQTabWidget_ChangeEvent_Callback(QTabWidget_ChangeEvent_Callback cb) { qtabwidget_changeevent_callback = cb; }
    inline void setQTabWidget_Event_Callback(QTabWidget_Event_Callback cb) { qtabwidget_event_callback = cb; }
    inline void setQTabWidget_InitStyleOption_Callback(QTabWidget_InitStyleOption_Callback cb) { qtabwidget_initstyleoption_callback = cb; }
    inline void setQTabWidget_DevType_Callback(QTabWidget_DevType_Callback cb) { qtabwidget_devtype_callback = cb; }
    inline void setQTabWidget_SetVisible_Callback(QTabWidget_SetVisible_Callback cb) { qtabwidget_setvisible_callback = cb; }
    inline void setQTabWidget_PaintEngine_Callback(QTabWidget_PaintEngine_Callback cb) { qtabwidget_paintengine_callback = cb; }
    inline void setQTabWidget_MousePressEvent_Callback(QTabWidget_MousePressEvent_Callback cb) { qtabwidget_mousepressevent_callback = cb; }
    inline void setQTabWidget_MouseReleaseEvent_Callback(QTabWidget_MouseReleaseEvent_Callback cb) { qtabwidget_mousereleaseevent_callback = cb; }
    inline void setQTabWidget_MouseDoubleClickEvent_Callback(QTabWidget_MouseDoubleClickEvent_Callback cb) { qtabwidget_mousedoubleclickevent_callback = cb; }
    inline void setQTabWidget_MouseMoveEvent_Callback(QTabWidget_MouseMoveEvent_Callback cb) { qtabwidget_mousemoveevent_callback = cb; }
    inline void setQTabWidget_WheelEvent_Callback(QTabWidget_WheelEvent_Callback cb) { qtabwidget_wheelevent_callback = cb; }
    inline void setQTabWidget_KeyReleaseEvent_Callback(QTabWidget_KeyReleaseEvent_Callback cb) { qtabwidget_keyreleaseevent_callback = cb; }
    inline void setQTabWidget_FocusInEvent_Callback(QTabWidget_FocusInEvent_Callback cb) { qtabwidget_focusinevent_callback = cb; }
    inline void setQTabWidget_FocusOutEvent_Callback(QTabWidget_FocusOutEvent_Callback cb) { qtabwidget_focusoutevent_callback = cb; }
    inline void setQTabWidget_EnterEvent_Callback(QTabWidget_EnterEvent_Callback cb) { qtabwidget_enterevent_callback = cb; }
    inline void setQTabWidget_LeaveEvent_Callback(QTabWidget_LeaveEvent_Callback cb) { qtabwidget_leaveevent_callback = cb; }
    inline void setQTabWidget_MoveEvent_Callback(QTabWidget_MoveEvent_Callback cb) { qtabwidget_moveevent_callback = cb; }
    inline void setQTabWidget_CloseEvent_Callback(QTabWidget_CloseEvent_Callback cb) { qtabwidget_closeevent_callback = cb; }
    inline void setQTabWidget_ContextMenuEvent_Callback(QTabWidget_ContextMenuEvent_Callback cb) { qtabwidget_contextmenuevent_callback = cb; }
    inline void setQTabWidget_TabletEvent_Callback(QTabWidget_TabletEvent_Callback cb) { qtabwidget_tabletevent_callback = cb; }
    inline void setQTabWidget_ActionEvent_Callback(QTabWidget_ActionEvent_Callback cb) { qtabwidget_actionevent_callback = cb; }
    inline void setQTabWidget_DragEnterEvent_Callback(QTabWidget_DragEnterEvent_Callback cb) { qtabwidget_dragenterevent_callback = cb; }
    inline void setQTabWidget_DragMoveEvent_Callback(QTabWidget_DragMoveEvent_Callback cb) { qtabwidget_dragmoveevent_callback = cb; }
    inline void setQTabWidget_DragLeaveEvent_Callback(QTabWidget_DragLeaveEvent_Callback cb) { qtabwidget_dragleaveevent_callback = cb; }
    inline void setQTabWidget_DropEvent_Callback(QTabWidget_DropEvent_Callback cb) { qtabwidget_dropevent_callback = cb; }
    inline void setQTabWidget_HideEvent_Callback(QTabWidget_HideEvent_Callback cb) { qtabwidget_hideevent_callback = cb; }
    inline void setQTabWidget_NativeEvent_Callback(QTabWidget_NativeEvent_Callback cb) { qtabwidget_nativeevent_callback = cb; }
    inline void setQTabWidget_Metric_Callback(QTabWidget_Metric_Callback cb) { qtabwidget_metric_callback = cb; }
    inline void setQTabWidget_InitPainter_Callback(QTabWidget_InitPainter_Callback cb) { qtabwidget_initpainter_callback = cb; }
    inline void setQTabWidget_Redirected_Callback(QTabWidget_Redirected_Callback cb) { qtabwidget_redirected_callback = cb; }
    inline void setQTabWidget_SharedPainter_Callback(QTabWidget_SharedPainter_Callback cb) { qtabwidget_sharedpainter_callback = cb; }
    inline void setQTabWidget_InputMethodEvent_Callback(QTabWidget_InputMethodEvent_Callback cb) { qtabwidget_inputmethodevent_callback = cb; }
    inline void setQTabWidget_InputMethodQuery_Callback(QTabWidget_InputMethodQuery_Callback cb) { qtabwidget_inputmethodquery_callback = cb; }
    inline void setQTabWidget_FocusNextPrevChild_Callback(QTabWidget_FocusNextPrevChild_Callback cb) { qtabwidget_focusnextprevchild_callback = cb; }
    inline void setQTabWidget_EventFilter_Callback(QTabWidget_EventFilter_Callback cb) { qtabwidget_eventfilter_callback = cb; }
    inline void setQTabWidget_TimerEvent_Callback(QTabWidget_TimerEvent_Callback cb) { qtabwidget_timerevent_callback = cb; }
    inline void setQTabWidget_ChildEvent_Callback(QTabWidget_ChildEvent_Callback cb) { qtabwidget_childevent_callback = cb; }
    inline void setQTabWidget_CustomEvent_Callback(QTabWidget_CustomEvent_Callback cb) { qtabwidget_customevent_callback = cb; }
    inline void setQTabWidget_ConnectNotify_Callback(QTabWidget_ConnectNotify_Callback cb) { qtabwidget_connectnotify_callback = cb; }
    inline void setQTabWidget_DisconnectNotify_Callback(QTabWidget_DisconnectNotify_Callback cb) { qtabwidget_disconnectnotify_callback = cb; }
    inline void setQTabWidget_SetTabBar_Callback(QTabWidget_SetTabBar_Callback cb) { qtabwidget_settabbar_callback = cb; }
    inline void setQTabWidget_UpdateMicroFocus_Callback(QTabWidget_UpdateMicroFocus_Callback cb) { qtabwidget_updatemicrofocus_callback = cb; }
    inline void setQTabWidget_Create_Callback(QTabWidget_Create_Callback cb) { qtabwidget_create_callback = cb; }
    inline void setQTabWidget_Destroy_Callback(QTabWidget_Destroy_Callback cb) { qtabwidget_destroy_callback = cb; }
    inline void setQTabWidget_FocusNextChild_Callback(QTabWidget_FocusNextChild_Callback cb) { qtabwidget_focusnextchild_callback = cb; }
    inline void setQTabWidget_FocusPreviousChild_Callback(QTabWidget_FocusPreviousChild_Callback cb) { qtabwidget_focuspreviouschild_callback = cb; }
    inline void setQTabWidget_Sender_Callback(QTabWidget_Sender_Callback cb) { qtabwidget_sender_callback = cb; }
    inline void setQTabWidget_SenderSignalIndex_Callback(QTabWidget_SenderSignalIndex_Callback cb) { qtabwidget_sendersignalindex_callback = cb; }
    inline void setQTabWidget_Receivers_Callback(QTabWidget_Receivers_Callback cb) { qtabwidget_receivers_callback = cb; }
    inline void setQTabWidget_IsSignalConnected_Callback(QTabWidget_IsSignalConnected_Callback cb) { qtabwidget_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQTabWidget_Metacall_IsBase(bool value) const { qtabwidget_metacall_isbase = value; }
    inline void setQTabWidget_SizeHint_IsBase(bool value) const { qtabwidget_sizehint_isbase = value; }
    inline void setQTabWidget_MinimumSizeHint_IsBase(bool value) const { qtabwidget_minimumsizehint_isbase = value; }
    inline void setQTabWidget_HeightForWidth_IsBase(bool value) const { qtabwidget_heightforwidth_isbase = value; }
    inline void setQTabWidget_HasHeightForWidth_IsBase(bool value) const { qtabwidget_hasheightforwidth_isbase = value; }
    inline void setQTabWidget_TabInserted_IsBase(bool value) const { qtabwidget_tabinserted_isbase = value; }
    inline void setQTabWidget_TabRemoved_IsBase(bool value) const { qtabwidget_tabremoved_isbase = value; }
    inline void setQTabWidget_ShowEvent_IsBase(bool value) const { qtabwidget_showevent_isbase = value; }
    inline void setQTabWidget_ResizeEvent_IsBase(bool value) const { qtabwidget_resizeevent_isbase = value; }
    inline void setQTabWidget_KeyPressEvent_IsBase(bool value) const { qtabwidget_keypressevent_isbase = value; }
    inline void setQTabWidget_PaintEvent_IsBase(bool value) const { qtabwidget_paintevent_isbase = value; }
    inline void setQTabWidget_ChangeEvent_IsBase(bool value) const { qtabwidget_changeevent_isbase = value; }
    inline void setQTabWidget_Event_IsBase(bool value) const { qtabwidget_event_isbase = value; }
    inline void setQTabWidget_InitStyleOption_IsBase(bool value) const { qtabwidget_initstyleoption_isbase = value; }
    inline void setQTabWidget_DevType_IsBase(bool value) const { qtabwidget_devtype_isbase = value; }
    inline void setQTabWidget_SetVisible_IsBase(bool value) const { qtabwidget_setvisible_isbase = value; }
    inline void setQTabWidget_PaintEngine_IsBase(bool value) const { qtabwidget_paintengine_isbase = value; }
    inline void setQTabWidget_MousePressEvent_IsBase(bool value) const { qtabwidget_mousepressevent_isbase = value; }
    inline void setQTabWidget_MouseReleaseEvent_IsBase(bool value) const { qtabwidget_mousereleaseevent_isbase = value; }
    inline void setQTabWidget_MouseDoubleClickEvent_IsBase(bool value) const { qtabwidget_mousedoubleclickevent_isbase = value; }
    inline void setQTabWidget_MouseMoveEvent_IsBase(bool value) const { qtabwidget_mousemoveevent_isbase = value; }
    inline void setQTabWidget_WheelEvent_IsBase(bool value) const { qtabwidget_wheelevent_isbase = value; }
    inline void setQTabWidget_KeyReleaseEvent_IsBase(bool value) const { qtabwidget_keyreleaseevent_isbase = value; }
    inline void setQTabWidget_FocusInEvent_IsBase(bool value) const { qtabwidget_focusinevent_isbase = value; }
    inline void setQTabWidget_FocusOutEvent_IsBase(bool value) const { qtabwidget_focusoutevent_isbase = value; }
    inline void setQTabWidget_EnterEvent_IsBase(bool value) const { qtabwidget_enterevent_isbase = value; }
    inline void setQTabWidget_LeaveEvent_IsBase(bool value) const { qtabwidget_leaveevent_isbase = value; }
    inline void setQTabWidget_MoveEvent_IsBase(bool value) const { qtabwidget_moveevent_isbase = value; }
    inline void setQTabWidget_CloseEvent_IsBase(bool value) const { qtabwidget_closeevent_isbase = value; }
    inline void setQTabWidget_ContextMenuEvent_IsBase(bool value) const { qtabwidget_contextmenuevent_isbase = value; }
    inline void setQTabWidget_TabletEvent_IsBase(bool value) const { qtabwidget_tabletevent_isbase = value; }
    inline void setQTabWidget_ActionEvent_IsBase(bool value) const { qtabwidget_actionevent_isbase = value; }
    inline void setQTabWidget_DragEnterEvent_IsBase(bool value) const { qtabwidget_dragenterevent_isbase = value; }
    inline void setQTabWidget_DragMoveEvent_IsBase(bool value) const { qtabwidget_dragmoveevent_isbase = value; }
    inline void setQTabWidget_DragLeaveEvent_IsBase(bool value) const { qtabwidget_dragleaveevent_isbase = value; }
    inline void setQTabWidget_DropEvent_IsBase(bool value) const { qtabwidget_dropevent_isbase = value; }
    inline void setQTabWidget_HideEvent_IsBase(bool value) const { qtabwidget_hideevent_isbase = value; }
    inline void setQTabWidget_NativeEvent_IsBase(bool value) const { qtabwidget_nativeevent_isbase = value; }
    inline void setQTabWidget_Metric_IsBase(bool value) const { qtabwidget_metric_isbase = value; }
    inline void setQTabWidget_InitPainter_IsBase(bool value) const { qtabwidget_initpainter_isbase = value; }
    inline void setQTabWidget_Redirected_IsBase(bool value) const { qtabwidget_redirected_isbase = value; }
    inline void setQTabWidget_SharedPainter_IsBase(bool value) const { qtabwidget_sharedpainter_isbase = value; }
    inline void setQTabWidget_InputMethodEvent_IsBase(bool value) const { qtabwidget_inputmethodevent_isbase = value; }
    inline void setQTabWidget_InputMethodQuery_IsBase(bool value) const { qtabwidget_inputmethodquery_isbase = value; }
    inline void setQTabWidget_FocusNextPrevChild_IsBase(bool value) const { qtabwidget_focusnextprevchild_isbase = value; }
    inline void setQTabWidget_EventFilter_IsBase(bool value) const { qtabwidget_eventfilter_isbase = value; }
    inline void setQTabWidget_TimerEvent_IsBase(bool value) const { qtabwidget_timerevent_isbase = value; }
    inline void setQTabWidget_ChildEvent_IsBase(bool value) const { qtabwidget_childevent_isbase = value; }
    inline void setQTabWidget_CustomEvent_IsBase(bool value) const { qtabwidget_customevent_isbase = value; }
    inline void setQTabWidget_ConnectNotify_IsBase(bool value) const { qtabwidget_connectnotify_isbase = value; }
    inline void setQTabWidget_DisconnectNotify_IsBase(bool value) const { qtabwidget_disconnectnotify_isbase = value; }
    inline void setQTabWidget_SetTabBar_IsBase(bool value) const { qtabwidget_settabbar_isbase = value; }
    inline void setQTabWidget_UpdateMicroFocus_IsBase(bool value) const { qtabwidget_updatemicrofocus_isbase = value; }
    inline void setQTabWidget_Create_IsBase(bool value) const { qtabwidget_create_isbase = value; }
    inline void setQTabWidget_Destroy_IsBase(bool value) const { qtabwidget_destroy_isbase = value; }
    inline void setQTabWidget_FocusNextChild_IsBase(bool value) const { qtabwidget_focusnextchild_isbase = value; }
    inline void setQTabWidget_FocusPreviousChild_IsBase(bool value) const { qtabwidget_focuspreviouschild_isbase = value; }
    inline void setQTabWidget_Sender_IsBase(bool value) const { qtabwidget_sender_isbase = value; }
    inline void setQTabWidget_SenderSignalIndex_IsBase(bool value) const { qtabwidget_sendersignalindex_isbase = value; }
    inline void setQTabWidget_Receivers_IsBase(bool value) const { qtabwidget_receivers_isbase = value; }
    inline void setQTabWidget_IsSignalConnected_IsBase(bool value) const { qtabwidget_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtabwidget_metacall_isbase) {
            qtabwidget_metacall_isbase = false;
            return QTabWidget::qt_metacall(param1, param2, param3);
        } else if (qtabwidget_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qtabwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QTabWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtabwidget_sizehint_isbase) {
            qtabwidget_sizehint_isbase = false;
            return QTabWidget::sizeHint();
        } else if (qtabwidget_sizehint_callback != nullptr) {
            QSize* callback_ret = qtabwidget_sizehint_callback();
            return *callback_ret;
        } else {
            return QTabWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtabwidget_minimumsizehint_isbase) {
            qtabwidget_minimumsizehint_isbase = false;
            return QTabWidget::minimumSizeHint();
        } else if (qtabwidget_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qtabwidget_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QTabWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int width) const override {
        if (qtabwidget_heightforwidth_isbase) {
            qtabwidget_heightforwidth_isbase = false;
            return QTabWidget::heightForWidth(width);
        } else if (qtabwidget_heightforwidth_callback != nullptr) {
            int cbval1 = width;

            int callback_ret = qtabwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTabWidget::heightForWidth(width);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtabwidget_hasheightforwidth_isbase) {
            qtabwidget_hasheightforwidth_isbase = false;
            return QTabWidget::hasHeightForWidth();
        } else if (qtabwidget_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qtabwidget_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QTabWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabInserted(int index) override {
        if (qtabwidget_tabinserted_isbase) {
            qtabwidget_tabinserted_isbase = false;
            QTabWidget::tabInserted(index);
        } else if (qtabwidget_tabinserted_callback != nullptr) {
            int cbval1 = index;

            qtabwidget_tabinserted_callback(this, cbval1);
        } else {
            QTabWidget::tabInserted(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabRemoved(int index) override {
        if (qtabwidget_tabremoved_isbase) {
            qtabwidget_tabremoved_isbase = false;
            QTabWidget::tabRemoved(index);
        } else if (qtabwidget_tabremoved_callback != nullptr) {
            int cbval1 = index;

            qtabwidget_tabremoved_callback(this, cbval1);
        } else {
            QTabWidget::tabRemoved(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qtabwidget_showevent_isbase) {
            qtabwidget_showevent_isbase = false;
            QTabWidget::showEvent(param1);
        } else if (qtabwidget_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            qtabwidget_showevent_callback(this, cbval1);
        } else {
            QTabWidget::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qtabwidget_resizeevent_isbase) {
            qtabwidget_resizeevent_isbase = false;
            QTabWidget::resizeEvent(param1);
        } else if (qtabwidget_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            qtabwidget_resizeevent_callback(this, cbval1);
        } else {
            QTabWidget::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qtabwidget_keypressevent_isbase) {
            qtabwidget_keypressevent_isbase = false;
            QTabWidget::keyPressEvent(param1);
        } else if (qtabwidget_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            qtabwidget_keypressevent_callback(this, cbval1);
        } else {
            QTabWidget::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qtabwidget_paintevent_isbase) {
            qtabwidget_paintevent_isbase = false;
            QTabWidget::paintEvent(param1);
        } else if (qtabwidget_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            qtabwidget_paintevent_callback(this, cbval1);
        } else {
            QTabWidget::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qtabwidget_changeevent_isbase) {
            qtabwidget_changeevent_isbase = false;
            QTabWidget::changeEvent(param1);
        } else if (qtabwidget_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qtabwidget_changeevent_callback(this, cbval1);
        } else {
            QTabWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qtabwidget_event_isbase) {
            qtabwidget_event_isbase = false;
            return QTabWidget::event(param1);
        } else if (qtabwidget_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = qtabwidget_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTabWidget::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionTabWidgetFrame* option) const override {
        if (qtabwidget_initstyleoption_isbase) {
            qtabwidget_initstyleoption_isbase = false;
            QTabWidget::initStyleOption(option);
        } else if (qtabwidget_initstyleoption_callback != nullptr) {
            QStyleOptionTabWidgetFrame* cbval1 = option;

            qtabwidget_initstyleoption_callback(this, cbval1);
        } else {
            QTabWidget::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtabwidget_devtype_isbase) {
            qtabwidget_devtype_isbase = false;
            return QTabWidget::devType();
        } else if (qtabwidget_devtype_callback != nullptr) {
            int callback_ret = qtabwidget_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTabWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtabwidget_setvisible_isbase) {
            qtabwidget_setvisible_isbase = false;
            QTabWidget::setVisible(visible);
        } else if (qtabwidget_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qtabwidget_setvisible_callback(this, cbval1);
        } else {
            QTabWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtabwidget_paintengine_isbase) {
            qtabwidget_paintengine_isbase = false;
            return QTabWidget::paintEngine();
        } else if (qtabwidget_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qtabwidget_paintengine_callback();
            return callback_ret;
        } else {
            return QTabWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtabwidget_mousepressevent_isbase) {
            qtabwidget_mousepressevent_isbase = false;
            QTabWidget::mousePressEvent(event);
        } else if (qtabwidget_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qtabwidget_mousepressevent_callback(this, cbval1);
        } else {
            QTabWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtabwidget_mousereleaseevent_isbase) {
            qtabwidget_mousereleaseevent_isbase = false;
            QTabWidget::mouseReleaseEvent(event);
        } else if (qtabwidget_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qtabwidget_mousereleaseevent_callback(this, cbval1);
        } else {
            QTabWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtabwidget_mousedoubleclickevent_isbase) {
            qtabwidget_mousedoubleclickevent_isbase = false;
            QTabWidget::mouseDoubleClickEvent(event);
        } else if (qtabwidget_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qtabwidget_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QTabWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtabwidget_mousemoveevent_isbase) {
            qtabwidget_mousemoveevent_isbase = false;
            QTabWidget::mouseMoveEvent(event);
        } else if (qtabwidget_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qtabwidget_mousemoveevent_callback(this, cbval1);
        } else {
            QTabWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qtabwidget_wheelevent_isbase) {
            qtabwidget_wheelevent_isbase = false;
            QTabWidget::wheelEvent(event);
        } else if (qtabwidget_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qtabwidget_wheelevent_callback(this, cbval1);
        } else {
            QTabWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtabwidget_keyreleaseevent_isbase) {
            qtabwidget_keyreleaseevent_isbase = false;
            QTabWidget::keyReleaseEvent(event);
        } else if (qtabwidget_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qtabwidget_keyreleaseevent_callback(this, cbval1);
        } else {
            QTabWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtabwidget_focusinevent_isbase) {
            qtabwidget_focusinevent_isbase = false;
            QTabWidget::focusInEvent(event);
        } else if (qtabwidget_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qtabwidget_focusinevent_callback(this, cbval1);
        } else {
            QTabWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtabwidget_focusoutevent_isbase) {
            qtabwidget_focusoutevent_isbase = false;
            QTabWidget::focusOutEvent(event);
        } else if (qtabwidget_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qtabwidget_focusoutevent_callback(this, cbval1);
        } else {
            QTabWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtabwidget_enterevent_isbase) {
            qtabwidget_enterevent_isbase = false;
            QTabWidget::enterEvent(event);
        } else if (qtabwidget_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qtabwidget_enterevent_callback(this, cbval1);
        } else {
            QTabWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtabwidget_leaveevent_isbase) {
            qtabwidget_leaveevent_isbase = false;
            QTabWidget::leaveEvent(event);
        } else if (qtabwidget_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qtabwidget_leaveevent_callback(this, cbval1);
        } else {
            QTabWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtabwidget_moveevent_isbase) {
            qtabwidget_moveevent_isbase = false;
            QTabWidget::moveEvent(event);
        } else if (qtabwidget_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qtabwidget_moveevent_callback(this, cbval1);
        } else {
            QTabWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtabwidget_closeevent_isbase) {
            qtabwidget_closeevent_isbase = false;
            QTabWidget::closeEvent(event);
        } else if (qtabwidget_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qtabwidget_closeevent_callback(this, cbval1);
        } else {
            QTabWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qtabwidget_contextmenuevent_isbase) {
            qtabwidget_contextmenuevent_isbase = false;
            QTabWidget::contextMenuEvent(event);
        } else if (qtabwidget_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qtabwidget_contextmenuevent_callback(this, cbval1);
        } else {
            QTabWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtabwidget_tabletevent_isbase) {
            qtabwidget_tabletevent_isbase = false;
            QTabWidget::tabletEvent(event);
        } else if (qtabwidget_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qtabwidget_tabletevent_callback(this, cbval1);
        } else {
            QTabWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtabwidget_actionevent_isbase) {
            qtabwidget_actionevent_isbase = false;
            QTabWidget::actionEvent(event);
        } else if (qtabwidget_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qtabwidget_actionevent_callback(this, cbval1);
        } else {
            QTabWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtabwidget_dragenterevent_isbase) {
            qtabwidget_dragenterevent_isbase = false;
            QTabWidget::dragEnterEvent(event);
        } else if (qtabwidget_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qtabwidget_dragenterevent_callback(this, cbval1);
        } else {
            QTabWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtabwidget_dragmoveevent_isbase) {
            qtabwidget_dragmoveevent_isbase = false;
            QTabWidget::dragMoveEvent(event);
        } else if (qtabwidget_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qtabwidget_dragmoveevent_callback(this, cbval1);
        } else {
            QTabWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtabwidget_dragleaveevent_isbase) {
            qtabwidget_dragleaveevent_isbase = false;
            QTabWidget::dragLeaveEvent(event);
        } else if (qtabwidget_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qtabwidget_dragleaveevent_callback(this, cbval1);
        } else {
            QTabWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtabwidget_dropevent_isbase) {
            qtabwidget_dropevent_isbase = false;
            QTabWidget::dropEvent(event);
        } else if (qtabwidget_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qtabwidget_dropevent_callback(this, cbval1);
        } else {
            QTabWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtabwidget_hideevent_isbase) {
            qtabwidget_hideevent_isbase = false;
            QTabWidget::hideEvent(event);
        } else if (qtabwidget_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qtabwidget_hideevent_callback(this, cbval1);
        } else {
            QTabWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtabwidget_nativeevent_isbase) {
            qtabwidget_nativeevent_isbase = false;
            return QTabWidget::nativeEvent(eventType, message, result);
        } else if (qtabwidget_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<const char*>(malloc((eventType_str.len + 1) * sizeof(char)));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            ((char*)eventType_str.data)[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = qtabwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QTabWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtabwidget_metric_isbase) {
            qtabwidget_metric_isbase = false;
            return QTabWidget::metric(param1);
        } else if (qtabwidget_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qtabwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTabWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtabwidget_initpainter_isbase) {
            qtabwidget_initpainter_isbase = false;
            QTabWidget::initPainter(painter);
        } else if (qtabwidget_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qtabwidget_initpainter_callback(this, cbval1);
        } else {
            QTabWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtabwidget_redirected_isbase) {
            qtabwidget_redirected_isbase = false;
            return QTabWidget::redirected(offset);
        } else if (qtabwidget_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qtabwidget_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTabWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtabwidget_sharedpainter_isbase) {
            qtabwidget_sharedpainter_isbase = false;
            return QTabWidget::sharedPainter();
        } else if (qtabwidget_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qtabwidget_sharedpainter_callback();
            return callback_ret;
        } else {
            return QTabWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qtabwidget_inputmethodevent_isbase) {
            qtabwidget_inputmethodevent_isbase = false;
            QTabWidget::inputMethodEvent(param1);
        } else if (qtabwidget_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qtabwidget_inputmethodevent_callback(this, cbval1);
        } else {
            QTabWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qtabwidget_inputmethodquery_isbase) {
            qtabwidget_inputmethodquery_isbase = false;
            return QTabWidget::inputMethodQuery(param1);
        } else if (qtabwidget_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qtabwidget_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTabWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtabwidget_focusnextprevchild_isbase) {
            qtabwidget_focusnextprevchild_isbase = false;
            return QTabWidget::focusNextPrevChild(next);
        } else if (qtabwidget_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qtabwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTabWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtabwidget_eventfilter_isbase) {
            qtabwidget_eventfilter_isbase = false;
            return QTabWidget::eventFilter(watched, event);
        } else if (qtabwidget_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qtabwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QTabWidget::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtabwidget_timerevent_isbase) {
            qtabwidget_timerevent_isbase = false;
            QTabWidget::timerEvent(event);
        } else if (qtabwidget_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qtabwidget_timerevent_callback(this, cbval1);
        } else {
            QTabWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtabwidget_childevent_isbase) {
            qtabwidget_childevent_isbase = false;
            QTabWidget::childEvent(event);
        } else if (qtabwidget_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qtabwidget_childevent_callback(this, cbval1);
        } else {
            QTabWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtabwidget_customevent_isbase) {
            qtabwidget_customevent_isbase = false;
            QTabWidget::customEvent(event);
        } else if (qtabwidget_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qtabwidget_customevent_callback(this, cbval1);
        } else {
            QTabWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtabwidget_connectnotify_isbase) {
            qtabwidget_connectnotify_isbase = false;
            QTabWidget::connectNotify(signal);
        } else if (qtabwidget_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtabwidget_connectnotify_callback(this, cbval1);
        } else {
            QTabWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtabwidget_disconnectnotify_isbase) {
            qtabwidget_disconnectnotify_isbase = false;
            QTabWidget::disconnectNotify(signal);
        } else if (qtabwidget_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtabwidget_disconnectnotify_callback(this, cbval1);
        } else {
            QTabWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setTabBar(QTabBar* tabBar) {
        if (qtabwidget_settabbar_isbase) {
            qtabwidget_settabbar_isbase = false;
            QTabWidget::setTabBar(tabBar);
        } else if (qtabwidget_settabbar_callback != nullptr) {
            QTabBar* cbval1 = tabBar;

            qtabwidget_settabbar_callback(this, cbval1);
        } else {
            QTabWidget::setTabBar(tabBar);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qtabwidget_updatemicrofocus_isbase) {
            qtabwidget_updatemicrofocus_isbase = false;
            QTabWidget::updateMicroFocus();
        } else if (qtabwidget_updatemicrofocus_callback != nullptr) {
            qtabwidget_updatemicrofocus_callback();
        } else {
            QTabWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qtabwidget_create_isbase) {
            qtabwidget_create_isbase = false;
            QTabWidget::create();
        } else if (qtabwidget_create_callback != nullptr) {
            qtabwidget_create_callback();
        } else {
            QTabWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qtabwidget_destroy_isbase) {
            qtabwidget_destroy_isbase = false;
            QTabWidget::destroy();
        } else if (qtabwidget_destroy_callback != nullptr) {
            qtabwidget_destroy_callback();
        } else {
            QTabWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qtabwidget_focusnextchild_isbase) {
            qtabwidget_focusnextchild_isbase = false;
            return QTabWidget::focusNextChild();
        } else if (qtabwidget_focusnextchild_callback != nullptr) {
            bool callback_ret = qtabwidget_focusnextchild_callback();
            return callback_ret;
        } else {
            return QTabWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qtabwidget_focuspreviouschild_isbase) {
            qtabwidget_focuspreviouschild_isbase = false;
            return QTabWidget::focusPreviousChild();
        } else if (qtabwidget_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qtabwidget_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QTabWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtabwidget_sender_isbase) {
            qtabwidget_sender_isbase = false;
            return QTabWidget::sender();
        } else if (qtabwidget_sender_callback != nullptr) {
            QObject* callback_ret = qtabwidget_sender_callback();
            return callback_ret;
        } else {
            return QTabWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtabwidget_sendersignalindex_isbase) {
            qtabwidget_sendersignalindex_isbase = false;
            return QTabWidget::senderSignalIndex();
        } else if (qtabwidget_sendersignalindex_callback != nullptr) {
            int callback_ret = qtabwidget_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTabWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtabwidget_receivers_isbase) {
            qtabwidget_receivers_isbase = false;
            return QTabWidget::receivers(signal);
        } else if (qtabwidget_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qtabwidget_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTabWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtabwidget_issignalconnected_isbase) {
            qtabwidget_issignalconnected_isbase = false;
            return QTabWidget::isSignalConnected(signal);
        } else if (qtabwidget_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qtabwidget_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTabWidget::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QTabWidget_TabInserted(QTabWidget* self, int index);
    friend void QTabWidget_QBaseTabInserted(QTabWidget* self, int index);
    friend void QTabWidget_TabRemoved(QTabWidget* self, int index);
    friend void QTabWidget_QBaseTabRemoved(QTabWidget* self, int index);
    friend void QTabWidget_ShowEvent(QTabWidget* self, QShowEvent* param1);
    friend void QTabWidget_QBaseShowEvent(QTabWidget* self, QShowEvent* param1);
    friend void QTabWidget_ResizeEvent(QTabWidget* self, QResizeEvent* param1);
    friend void QTabWidget_QBaseResizeEvent(QTabWidget* self, QResizeEvent* param1);
    friend void QTabWidget_KeyPressEvent(QTabWidget* self, QKeyEvent* param1);
    friend void QTabWidget_QBaseKeyPressEvent(QTabWidget* self, QKeyEvent* param1);
    friend void QTabWidget_PaintEvent(QTabWidget* self, QPaintEvent* param1);
    friend void QTabWidget_QBasePaintEvent(QTabWidget* self, QPaintEvent* param1);
    friend void QTabWidget_ChangeEvent(QTabWidget* self, QEvent* param1);
    friend void QTabWidget_QBaseChangeEvent(QTabWidget* self, QEvent* param1);
    friend bool QTabWidget_Event(QTabWidget* self, QEvent* param1);
    friend bool QTabWidget_QBaseEvent(QTabWidget* self, QEvent* param1);
    friend void QTabWidget_InitStyleOption(const QTabWidget* self, QStyleOptionTabWidgetFrame* option);
    friend void QTabWidget_QBaseInitStyleOption(const QTabWidget* self, QStyleOptionTabWidgetFrame* option);
    friend void QTabWidget_MousePressEvent(QTabWidget* self, QMouseEvent* event);
    friend void QTabWidget_QBaseMousePressEvent(QTabWidget* self, QMouseEvent* event);
    friend void QTabWidget_MouseReleaseEvent(QTabWidget* self, QMouseEvent* event);
    friend void QTabWidget_QBaseMouseReleaseEvent(QTabWidget* self, QMouseEvent* event);
    friend void QTabWidget_MouseDoubleClickEvent(QTabWidget* self, QMouseEvent* event);
    friend void QTabWidget_QBaseMouseDoubleClickEvent(QTabWidget* self, QMouseEvent* event);
    friend void QTabWidget_MouseMoveEvent(QTabWidget* self, QMouseEvent* event);
    friend void QTabWidget_QBaseMouseMoveEvent(QTabWidget* self, QMouseEvent* event);
    friend void QTabWidget_WheelEvent(QTabWidget* self, QWheelEvent* event);
    friend void QTabWidget_QBaseWheelEvent(QTabWidget* self, QWheelEvent* event);
    friend void QTabWidget_KeyReleaseEvent(QTabWidget* self, QKeyEvent* event);
    friend void QTabWidget_QBaseKeyReleaseEvent(QTabWidget* self, QKeyEvent* event);
    friend void QTabWidget_FocusInEvent(QTabWidget* self, QFocusEvent* event);
    friend void QTabWidget_QBaseFocusInEvent(QTabWidget* self, QFocusEvent* event);
    friend void QTabWidget_FocusOutEvent(QTabWidget* self, QFocusEvent* event);
    friend void QTabWidget_QBaseFocusOutEvent(QTabWidget* self, QFocusEvent* event);
    friend void QTabWidget_EnterEvent(QTabWidget* self, QEnterEvent* event);
    friend void QTabWidget_QBaseEnterEvent(QTabWidget* self, QEnterEvent* event);
    friend void QTabWidget_LeaveEvent(QTabWidget* self, QEvent* event);
    friend void QTabWidget_QBaseLeaveEvent(QTabWidget* self, QEvent* event);
    friend void QTabWidget_MoveEvent(QTabWidget* self, QMoveEvent* event);
    friend void QTabWidget_QBaseMoveEvent(QTabWidget* self, QMoveEvent* event);
    friend void QTabWidget_CloseEvent(QTabWidget* self, QCloseEvent* event);
    friend void QTabWidget_QBaseCloseEvent(QTabWidget* self, QCloseEvent* event);
    friend void QTabWidget_ContextMenuEvent(QTabWidget* self, QContextMenuEvent* event);
    friend void QTabWidget_QBaseContextMenuEvent(QTabWidget* self, QContextMenuEvent* event);
    friend void QTabWidget_TabletEvent(QTabWidget* self, QTabletEvent* event);
    friend void QTabWidget_QBaseTabletEvent(QTabWidget* self, QTabletEvent* event);
    friend void QTabWidget_ActionEvent(QTabWidget* self, QActionEvent* event);
    friend void QTabWidget_QBaseActionEvent(QTabWidget* self, QActionEvent* event);
    friend void QTabWidget_DragEnterEvent(QTabWidget* self, QDragEnterEvent* event);
    friend void QTabWidget_QBaseDragEnterEvent(QTabWidget* self, QDragEnterEvent* event);
    friend void QTabWidget_DragMoveEvent(QTabWidget* self, QDragMoveEvent* event);
    friend void QTabWidget_QBaseDragMoveEvent(QTabWidget* self, QDragMoveEvent* event);
    friend void QTabWidget_DragLeaveEvent(QTabWidget* self, QDragLeaveEvent* event);
    friend void QTabWidget_QBaseDragLeaveEvent(QTabWidget* self, QDragLeaveEvent* event);
    friend void QTabWidget_DropEvent(QTabWidget* self, QDropEvent* event);
    friend void QTabWidget_QBaseDropEvent(QTabWidget* self, QDropEvent* event);
    friend void QTabWidget_HideEvent(QTabWidget* self, QHideEvent* event);
    friend void QTabWidget_QBaseHideEvent(QTabWidget* self, QHideEvent* event);
    friend bool QTabWidget_NativeEvent(QTabWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QTabWidget_QBaseNativeEvent(QTabWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QTabWidget_Metric(const QTabWidget* self, int param1);
    friend int QTabWidget_QBaseMetric(const QTabWidget* self, int param1);
    friend void QTabWidget_InitPainter(const QTabWidget* self, QPainter* painter);
    friend void QTabWidget_QBaseInitPainter(const QTabWidget* self, QPainter* painter);
    friend QPaintDevice* QTabWidget_Redirected(const QTabWidget* self, QPoint* offset);
    friend QPaintDevice* QTabWidget_QBaseRedirected(const QTabWidget* self, QPoint* offset);
    friend QPainter* QTabWidget_SharedPainter(const QTabWidget* self);
    friend QPainter* QTabWidget_QBaseSharedPainter(const QTabWidget* self);
    friend void QTabWidget_InputMethodEvent(QTabWidget* self, QInputMethodEvent* param1);
    friend void QTabWidget_QBaseInputMethodEvent(QTabWidget* self, QInputMethodEvent* param1);
    friend bool QTabWidget_FocusNextPrevChild(QTabWidget* self, bool next);
    friend bool QTabWidget_QBaseFocusNextPrevChild(QTabWidget* self, bool next);
    friend void QTabWidget_TimerEvent(QTabWidget* self, QTimerEvent* event);
    friend void QTabWidget_QBaseTimerEvent(QTabWidget* self, QTimerEvent* event);
    friend void QTabWidget_ChildEvent(QTabWidget* self, QChildEvent* event);
    friend void QTabWidget_QBaseChildEvent(QTabWidget* self, QChildEvent* event);
    friend void QTabWidget_CustomEvent(QTabWidget* self, QEvent* event);
    friend void QTabWidget_QBaseCustomEvent(QTabWidget* self, QEvent* event);
    friend void QTabWidget_ConnectNotify(QTabWidget* self, const QMetaMethod* signal);
    friend void QTabWidget_QBaseConnectNotify(QTabWidget* self, const QMetaMethod* signal);
    friend void QTabWidget_DisconnectNotify(QTabWidget* self, const QMetaMethod* signal);
    friend void QTabWidget_QBaseDisconnectNotify(QTabWidget* self, const QMetaMethod* signal);
    friend void QTabWidget_SetTabBar(QTabWidget* self, QTabBar* tabBar);
    friend void QTabWidget_QBaseSetTabBar(QTabWidget* self, QTabBar* tabBar);
    friend void QTabWidget_UpdateMicroFocus(QTabWidget* self);
    friend void QTabWidget_QBaseUpdateMicroFocus(QTabWidget* self);
    friend void QTabWidget_Create(QTabWidget* self);
    friend void QTabWidget_QBaseCreate(QTabWidget* self);
    friend void QTabWidget_Destroy(QTabWidget* self);
    friend void QTabWidget_QBaseDestroy(QTabWidget* self);
    friend bool QTabWidget_FocusNextChild(QTabWidget* self);
    friend bool QTabWidget_QBaseFocusNextChild(QTabWidget* self);
    friend bool QTabWidget_FocusPreviousChild(QTabWidget* self);
    friend bool QTabWidget_QBaseFocusPreviousChild(QTabWidget* self);
    friend QObject* QTabWidget_Sender(const QTabWidget* self);
    friend QObject* QTabWidget_QBaseSender(const QTabWidget* self);
    friend int QTabWidget_SenderSignalIndex(const QTabWidget* self);
    friend int QTabWidget_QBaseSenderSignalIndex(const QTabWidget* self);
    friend int QTabWidget_Receivers(const QTabWidget* self, const char* signal);
    friend int QTabWidget_QBaseReceivers(const QTabWidget* self, const char* signal);
    friend bool QTabWidget_IsSignalConnected(const QTabWidget* self, const QMetaMethod* signal);
    friend bool QTabWidget_QBaseIsSignalConnected(const QTabWidget* self, const QMetaMethod* signal);
};

#endif
