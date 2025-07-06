#pragma once
#ifndef SRCC_LIBVIRTUALQTABBAR_H
#define SRCC_LIBVIRTUALQTABBAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTabBar so that we can call protected methods
class VirtualQTabBar final : public QTabBar {

  public:
    // Virtual class boolean flag
    bool isVirtualQTabBar = true;

    // Virtual class public types (including callbacks)
    using QTabBar_Metacall_Callback = int (*)(QTabBar*, int, int, void**);
    using QTabBar_SizeHint_Callback = QSize* (*)();
    using QTabBar_MinimumSizeHint_Callback = QSize* (*)();
    using QTabBar_TabSizeHint_Callback = QSize* (*)(const QTabBar*, int);
    using QTabBar_MinimumTabSizeHint_Callback = QSize* (*)(const QTabBar*, int);
    using QTabBar_TabInserted_Callback = void (*)(QTabBar*, int);
    using QTabBar_TabRemoved_Callback = void (*)(QTabBar*, int);
    using QTabBar_TabLayoutChange_Callback = void (*)();
    using QTabBar_Event_Callback = bool (*)(QTabBar*, QEvent*);
    using QTabBar_ResizeEvent_Callback = void (*)(QTabBar*, QResizeEvent*);
    using QTabBar_ShowEvent_Callback = void (*)(QTabBar*, QShowEvent*);
    using QTabBar_HideEvent_Callback = void (*)(QTabBar*, QHideEvent*);
    using QTabBar_PaintEvent_Callback = void (*)(QTabBar*, QPaintEvent*);
    using QTabBar_MousePressEvent_Callback = void (*)(QTabBar*, QMouseEvent*);
    using QTabBar_MouseMoveEvent_Callback = void (*)(QTabBar*, QMouseEvent*);
    using QTabBar_MouseReleaseEvent_Callback = void (*)(QTabBar*, QMouseEvent*);
    using QTabBar_MouseDoubleClickEvent_Callback = void (*)(QTabBar*, QMouseEvent*);
    using QTabBar_WheelEvent_Callback = void (*)(QTabBar*, QWheelEvent*);
    using QTabBar_KeyPressEvent_Callback = void (*)(QTabBar*, QKeyEvent*);
    using QTabBar_ChangeEvent_Callback = void (*)(QTabBar*, QEvent*);
    using QTabBar_TimerEvent_Callback = void (*)(QTabBar*, QTimerEvent*);
    using QTabBar_InitStyleOption_Callback = void (*)(const QTabBar*, QStyleOptionTab*, int);
    using QTabBar_DevType_Callback = int (*)();
    using QTabBar_SetVisible_Callback = void (*)(QTabBar*, bool);
    using QTabBar_HeightForWidth_Callback = int (*)(const QTabBar*, int);
    using QTabBar_HasHeightForWidth_Callback = bool (*)();
    using QTabBar_PaintEngine_Callback = QPaintEngine* (*)();
    using QTabBar_KeyReleaseEvent_Callback = void (*)(QTabBar*, QKeyEvent*);
    using QTabBar_FocusInEvent_Callback = void (*)(QTabBar*, QFocusEvent*);
    using QTabBar_FocusOutEvent_Callback = void (*)(QTabBar*, QFocusEvent*);
    using QTabBar_EnterEvent_Callback = void (*)(QTabBar*, QEnterEvent*);
    using QTabBar_LeaveEvent_Callback = void (*)(QTabBar*, QEvent*);
    using QTabBar_MoveEvent_Callback = void (*)(QTabBar*, QMoveEvent*);
    using QTabBar_CloseEvent_Callback = void (*)(QTabBar*, QCloseEvent*);
    using QTabBar_ContextMenuEvent_Callback = void (*)(QTabBar*, QContextMenuEvent*);
    using QTabBar_TabletEvent_Callback = void (*)(QTabBar*, QTabletEvent*);
    using QTabBar_ActionEvent_Callback = void (*)(QTabBar*, QActionEvent*);
    using QTabBar_DragEnterEvent_Callback = void (*)(QTabBar*, QDragEnterEvent*);
    using QTabBar_DragMoveEvent_Callback = void (*)(QTabBar*, QDragMoveEvent*);
    using QTabBar_DragLeaveEvent_Callback = void (*)(QTabBar*, QDragLeaveEvent*);
    using QTabBar_DropEvent_Callback = void (*)(QTabBar*, QDropEvent*);
    using QTabBar_NativeEvent_Callback = bool (*)(QTabBar*, libqt_string, void*, intptr_t*);
    using QTabBar_Metric_Callback = int (*)(const QTabBar*, int);
    using QTabBar_InitPainter_Callback = void (*)(const QTabBar*, QPainter*);
    using QTabBar_Redirected_Callback = QPaintDevice* (*)(const QTabBar*, QPoint*);
    using QTabBar_SharedPainter_Callback = QPainter* (*)();
    using QTabBar_InputMethodEvent_Callback = void (*)(QTabBar*, QInputMethodEvent*);
    using QTabBar_InputMethodQuery_Callback = QVariant* (*)(const QTabBar*, int);
    using QTabBar_FocusNextPrevChild_Callback = bool (*)(QTabBar*, bool);
    using QTabBar_EventFilter_Callback = bool (*)(QTabBar*, QObject*, QEvent*);
    using QTabBar_ChildEvent_Callback = void (*)(QTabBar*, QChildEvent*);
    using QTabBar_CustomEvent_Callback = void (*)(QTabBar*, QEvent*);
    using QTabBar_ConnectNotify_Callback = void (*)(QTabBar*, QMetaMethod*);
    using QTabBar_DisconnectNotify_Callback = void (*)(QTabBar*, QMetaMethod*);
    using QTabBar_UpdateMicroFocus_Callback = void (*)();
    using QTabBar_Create_Callback = void (*)();
    using QTabBar_Destroy_Callback = void (*)();
    using QTabBar_FocusNextChild_Callback = bool (*)();
    using QTabBar_FocusPreviousChild_Callback = bool (*)();
    using QTabBar_Sender_Callback = QObject* (*)();
    using QTabBar_SenderSignalIndex_Callback = int (*)();
    using QTabBar_Receivers_Callback = int (*)(const QTabBar*, const char*);
    using QTabBar_IsSignalConnected_Callback = bool (*)(const QTabBar*, QMetaMethod*);
    using QTabBar_GetDecodedMetricF_Callback = double (*)(const QTabBar*, int, int);

  protected:
    // Instance callback storage
    QTabBar_Metacall_Callback qtabbar_metacall_callback = nullptr;
    QTabBar_SizeHint_Callback qtabbar_sizehint_callback = nullptr;
    QTabBar_MinimumSizeHint_Callback qtabbar_minimumsizehint_callback = nullptr;
    QTabBar_TabSizeHint_Callback qtabbar_tabsizehint_callback = nullptr;
    QTabBar_MinimumTabSizeHint_Callback qtabbar_minimumtabsizehint_callback = nullptr;
    QTabBar_TabInserted_Callback qtabbar_tabinserted_callback = nullptr;
    QTabBar_TabRemoved_Callback qtabbar_tabremoved_callback = nullptr;
    QTabBar_TabLayoutChange_Callback qtabbar_tablayoutchange_callback = nullptr;
    QTabBar_Event_Callback qtabbar_event_callback = nullptr;
    QTabBar_ResizeEvent_Callback qtabbar_resizeevent_callback = nullptr;
    QTabBar_ShowEvent_Callback qtabbar_showevent_callback = nullptr;
    QTabBar_HideEvent_Callback qtabbar_hideevent_callback = nullptr;
    QTabBar_PaintEvent_Callback qtabbar_paintevent_callback = nullptr;
    QTabBar_MousePressEvent_Callback qtabbar_mousepressevent_callback = nullptr;
    QTabBar_MouseMoveEvent_Callback qtabbar_mousemoveevent_callback = nullptr;
    QTabBar_MouseReleaseEvent_Callback qtabbar_mousereleaseevent_callback = nullptr;
    QTabBar_MouseDoubleClickEvent_Callback qtabbar_mousedoubleclickevent_callback = nullptr;
    QTabBar_WheelEvent_Callback qtabbar_wheelevent_callback = nullptr;
    QTabBar_KeyPressEvent_Callback qtabbar_keypressevent_callback = nullptr;
    QTabBar_ChangeEvent_Callback qtabbar_changeevent_callback = nullptr;
    QTabBar_TimerEvent_Callback qtabbar_timerevent_callback = nullptr;
    QTabBar_InitStyleOption_Callback qtabbar_initstyleoption_callback = nullptr;
    QTabBar_DevType_Callback qtabbar_devtype_callback = nullptr;
    QTabBar_SetVisible_Callback qtabbar_setvisible_callback = nullptr;
    QTabBar_HeightForWidth_Callback qtabbar_heightforwidth_callback = nullptr;
    QTabBar_HasHeightForWidth_Callback qtabbar_hasheightforwidth_callback = nullptr;
    QTabBar_PaintEngine_Callback qtabbar_paintengine_callback = nullptr;
    QTabBar_KeyReleaseEvent_Callback qtabbar_keyreleaseevent_callback = nullptr;
    QTabBar_FocusInEvent_Callback qtabbar_focusinevent_callback = nullptr;
    QTabBar_FocusOutEvent_Callback qtabbar_focusoutevent_callback = nullptr;
    QTabBar_EnterEvent_Callback qtabbar_enterevent_callback = nullptr;
    QTabBar_LeaveEvent_Callback qtabbar_leaveevent_callback = nullptr;
    QTabBar_MoveEvent_Callback qtabbar_moveevent_callback = nullptr;
    QTabBar_CloseEvent_Callback qtabbar_closeevent_callback = nullptr;
    QTabBar_ContextMenuEvent_Callback qtabbar_contextmenuevent_callback = nullptr;
    QTabBar_TabletEvent_Callback qtabbar_tabletevent_callback = nullptr;
    QTabBar_ActionEvent_Callback qtabbar_actionevent_callback = nullptr;
    QTabBar_DragEnterEvent_Callback qtabbar_dragenterevent_callback = nullptr;
    QTabBar_DragMoveEvent_Callback qtabbar_dragmoveevent_callback = nullptr;
    QTabBar_DragLeaveEvent_Callback qtabbar_dragleaveevent_callback = nullptr;
    QTabBar_DropEvent_Callback qtabbar_dropevent_callback = nullptr;
    QTabBar_NativeEvent_Callback qtabbar_nativeevent_callback = nullptr;
    QTabBar_Metric_Callback qtabbar_metric_callback = nullptr;
    QTabBar_InitPainter_Callback qtabbar_initpainter_callback = nullptr;
    QTabBar_Redirected_Callback qtabbar_redirected_callback = nullptr;
    QTabBar_SharedPainter_Callback qtabbar_sharedpainter_callback = nullptr;
    QTabBar_InputMethodEvent_Callback qtabbar_inputmethodevent_callback = nullptr;
    QTabBar_InputMethodQuery_Callback qtabbar_inputmethodquery_callback = nullptr;
    QTabBar_FocusNextPrevChild_Callback qtabbar_focusnextprevchild_callback = nullptr;
    QTabBar_EventFilter_Callback qtabbar_eventfilter_callback = nullptr;
    QTabBar_ChildEvent_Callback qtabbar_childevent_callback = nullptr;
    QTabBar_CustomEvent_Callback qtabbar_customevent_callback = nullptr;
    QTabBar_ConnectNotify_Callback qtabbar_connectnotify_callback = nullptr;
    QTabBar_DisconnectNotify_Callback qtabbar_disconnectnotify_callback = nullptr;
    QTabBar_UpdateMicroFocus_Callback qtabbar_updatemicrofocus_callback = nullptr;
    QTabBar_Create_Callback qtabbar_create_callback = nullptr;
    QTabBar_Destroy_Callback qtabbar_destroy_callback = nullptr;
    QTabBar_FocusNextChild_Callback qtabbar_focusnextchild_callback = nullptr;
    QTabBar_FocusPreviousChild_Callback qtabbar_focuspreviouschild_callback = nullptr;
    QTabBar_Sender_Callback qtabbar_sender_callback = nullptr;
    QTabBar_SenderSignalIndex_Callback qtabbar_sendersignalindex_callback = nullptr;
    QTabBar_Receivers_Callback qtabbar_receivers_callback = nullptr;
    QTabBar_IsSignalConnected_Callback qtabbar_issignalconnected_callback = nullptr;
    QTabBar_GetDecodedMetricF_Callback qtabbar_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qtabbar_metacall_isbase = false;
    mutable bool qtabbar_sizehint_isbase = false;
    mutable bool qtabbar_minimumsizehint_isbase = false;
    mutable bool qtabbar_tabsizehint_isbase = false;
    mutable bool qtabbar_minimumtabsizehint_isbase = false;
    mutable bool qtabbar_tabinserted_isbase = false;
    mutable bool qtabbar_tabremoved_isbase = false;
    mutable bool qtabbar_tablayoutchange_isbase = false;
    mutable bool qtabbar_event_isbase = false;
    mutable bool qtabbar_resizeevent_isbase = false;
    mutable bool qtabbar_showevent_isbase = false;
    mutable bool qtabbar_hideevent_isbase = false;
    mutable bool qtabbar_paintevent_isbase = false;
    mutable bool qtabbar_mousepressevent_isbase = false;
    mutable bool qtabbar_mousemoveevent_isbase = false;
    mutable bool qtabbar_mousereleaseevent_isbase = false;
    mutable bool qtabbar_mousedoubleclickevent_isbase = false;
    mutable bool qtabbar_wheelevent_isbase = false;
    mutable bool qtabbar_keypressevent_isbase = false;
    mutable bool qtabbar_changeevent_isbase = false;
    mutable bool qtabbar_timerevent_isbase = false;
    mutable bool qtabbar_initstyleoption_isbase = false;
    mutable bool qtabbar_devtype_isbase = false;
    mutable bool qtabbar_setvisible_isbase = false;
    mutable bool qtabbar_heightforwidth_isbase = false;
    mutable bool qtabbar_hasheightforwidth_isbase = false;
    mutable bool qtabbar_paintengine_isbase = false;
    mutable bool qtabbar_keyreleaseevent_isbase = false;
    mutable bool qtabbar_focusinevent_isbase = false;
    mutable bool qtabbar_focusoutevent_isbase = false;
    mutable bool qtabbar_enterevent_isbase = false;
    mutable bool qtabbar_leaveevent_isbase = false;
    mutable bool qtabbar_moveevent_isbase = false;
    mutable bool qtabbar_closeevent_isbase = false;
    mutable bool qtabbar_contextmenuevent_isbase = false;
    mutable bool qtabbar_tabletevent_isbase = false;
    mutable bool qtabbar_actionevent_isbase = false;
    mutable bool qtabbar_dragenterevent_isbase = false;
    mutable bool qtabbar_dragmoveevent_isbase = false;
    mutable bool qtabbar_dragleaveevent_isbase = false;
    mutable bool qtabbar_dropevent_isbase = false;
    mutable bool qtabbar_nativeevent_isbase = false;
    mutable bool qtabbar_metric_isbase = false;
    mutable bool qtabbar_initpainter_isbase = false;
    mutable bool qtabbar_redirected_isbase = false;
    mutable bool qtabbar_sharedpainter_isbase = false;
    mutable bool qtabbar_inputmethodevent_isbase = false;
    mutable bool qtabbar_inputmethodquery_isbase = false;
    mutable bool qtabbar_focusnextprevchild_isbase = false;
    mutable bool qtabbar_eventfilter_isbase = false;
    mutable bool qtabbar_childevent_isbase = false;
    mutable bool qtabbar_customevent_isbase = false;
    mutable bool qtabbar_connectnotify_isbase = false;
    mutable bool qtabbar_disconnectnotify_isbase = false;
    mutable bool qtabbar_updatemicrofocus_isbase = false;
    mutable bool qtabbar_create_isbase = false;
    mutable bool qtabbar_destroy_isbase = false;
    mutable bool qtabbar_focusnextchild_isbase = false;
    mutable bool qtabbar_focuspreviouschild_isbase = false;
    mutable bool qtabbar_sender_isbase = false;
    mutable bool qtabbar_sendersignalindex_isbase = false;
    mutable bool qtabbar_receivers_isbase = false;
    mutable bool qtabbar_issignalconnected_isbase = false;
    mutable bool qtabbar_getdecodedmetricf_isbase = false;

  public:
    VirtualQTabBar(QWidget* parent) : QTabBar(parent) {};
    VirtualQTabBar() : QTabBar() {};

    ~VirtualQTabBar() {
        qtabbar_metacall_callback = nullptr;
        qtabbar_sizehint_callback = nullptr;
        qtabbar_minimumsizehint_callback = nullptr;
        qtabbar_tabsizehint_callback = nullptr;
        qtabbar_minimumtabsizehint_callback = nullptr;
        qtabbar_tabinserted_callback = nullptr;
        qtabbar_tabremoved_callback = nullptr;
        qtabbar_tablayoutchange_callback = nullptr;
        qtabbar_event_callback = nullptr;
        qtabbar_resizeevent_callback = nullptr;
        qtabbar_showevent_callback = nullptr;
        qtabbar_hideevent_callback = nullptr;
        qtabbar_paintevent_callback = nullptr;
        qtabbar_mousepressevent_callback = nullptr;
        qtabbar_mousemoveevent_callback = nullptr;
        qtabbar_mousereleaseevent_callback = nullptr;
        qtabbar_mousedoubleclickevent_callback = nullptr;
        qtabbar_wheelevent_callback = nullptr;
        qtabbar_keypressevent_callback = nullptr;
        qtabbar_changeevent_callback = nullptr;
        qtabbar_timerevent_callback = nullptr;
        qtabbar_initstyleoption_callback = nullptr;
        qtabbar_devtype_callback = nullptr;
        qtabbar_setvisible_callback = nullptr;
        qtabbar_heightforwidth_callback = nullptr;
        qtabbar_hasheightforwidth_callback = nullptr;
        qtabbar_paintengine_callback = nullptr;
        qtabbar_keyreleaseevent_callback = nullptr;
        qtabbar_focusinevent_callback = nullptr;
        qtabbar_focusoutevent_callback = nullptr;
        qtabbar_enterevent_callback = nullptr;
        qtabbar_leaveevent_callback = nullptr;
        qtabbar_moveevent_callback = nullptr;
        qtabbar_closeevent_callback = nullptr;
        qtabbar_contextmenuevent_callback = nullptr;
        qtabbar_tabletevent_callback = nullptr;
        qtabbar_actionevent_callback = nullptr;
        qtabbar_dragenterevent_callback = nullptr;
        qtabbar_dragmoveevent_callback = nullptr;
        qtabbar_dragleaveevent_callback = nullptr;
        qtabbar_dropevent_callback = nullptr;
        qtabbar_nativeevent_callback = nullptr;
        qtabbar_metric_callback = nullptr;
        qtabbar_initpainter_callback = nullptr;
        qtabbar_redirected_callback = nullptr;
        qtabbar_sharedpainter_callback = nullptr;
        qtabbar_inputmethodevent_callback = nullptr;
        qtabbar_inputmethodquery_callback = nullptr;
        qtabbar_focusnextprevchild_callback = nullptr;
        qtabbar_eventfilter_callback = nullptr;
        qtabbar_childevent_callback = nullptr;
        qtabbar_customevent_callback = nullptr;
        qtabbar_connectnotify_callback = nullptr;
        qtabbar_disconnectnotify_callback = nullptr;
        qtabbar_updatemicrofocus_callback = nullptr;
        qtabbar_create_callback = nullptr;
        qtabbar_destroy_callback = nullptr;
        qtabbar_focusnextchild_callback = nullptr;
        qtabbar_focuspreviouschild_callback = nullptr;
        qtabbar_sender_callback = nullptr;
        qtabbar_sendersignalindex_callback = nullptr;
        qtabbar_receivers_callback = nullptr;
        qtabbar_issignalconnected_callback = nullptr;
        qtabbar_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQTabBar_Metacall_Callback(QTabBar_Metacall_Callback cb) { qtabbar_metacall_callback = cb; }
    inline void setQTabBar_SizeHint_Callback(QTabBar_SizeHint_Callback cb) { qtabbar_sizehint_callback = cb; }
    inline void setQTabBar_MinimumSizeHint_Callback(QTabBar_MinimumSizeHint_Callback cb) { qtabbar_minimumsizehint_callback = cb; }
    inline void setQTabBar_TabSizeHint_Callback(QTabBar_TabSizeHint_Callback cb) { qtabbar_tabsizehint_callback = cb; }
    inline void setQTabBar_MinimumTabSizeHint_Callback(QTabBar_MinimumTabSizeHint_Callback cb) { qtabbar_minimumtabsizehint_callback = cb; }
    inline void setQTabBar_TabInserted_Callback(QTabBar_TabInserted_Callback cb) { qtabbar_tabinserted_callback = cb; }
    inline void setQTabBar_TabRemoved_Callback(QTabBar_TabRemoved_Callback cb) { qtabbar_tabremoved_callback = cb; }
    inline void setQTabBar_TabLayoutChange_Callback(QTabBar_TabLayoutChange_Callback cb) { qtabbar_tablayoutchange_callback = cb; }
    inline void setQTabBar_Event_Callback(QTabBar_Event_Callback cb) { qtabbar_event_callback = cb; }
    inline void setQTabBar_ResizeEvent_Callback(QTabBar_ResizeEvent_Callback cb) { qtabbar_resizeevent_callback = cb; }
    inline void setQTabBar_ShowEvent_Callback(QTabBar_ShowEvent_Callback cb) { qtabbar_showevent_callback = cb; }
    inline void setQTabBar_HideEvent_Callback(QTabBar_HideEvent_Callback cb) { qtabbar_hideevent_callback = cb; }
    inline void setQTabBar_PaintEvent_Callback(QTabBar_PaintEvent_Callback cb) { qtabbar_paintevent_callback = cb; }
    inline void setQTabBar_MousePressEvent_Callback(QTabBar_MousePressEvent_Callback cb) { qtabbar_mousepressevent_callback = cb; }
    inline void setQTabBar_MouseMoveEvent_Callback(QTabBar_MouseMoveEvent_Callback cb) { qtabbar_mousemoveevent_callback = cb; }
    inline void setQTabBar_MouseReleaseEvent_Callback(QTabBar_MouseReleaseEvent_Callback cb) { qtabbar_mousereleaseevent_callback = cb; }
    inline void setQTabBar_MouseDoubleClickEvent_Callback(QTabBar_MouseDoubleClickEvent_Callback cb) { qtabbar_mousedoubleclickevent_callback = cb; }
    inline void setQTabBar_WheelEvent_Callback(QTabBar_WheelEvent_Callback cb) { qtabbar_wheelevent_callback = cb; }
    inline void setQTabBar_KeyPressEvent_Callback(QTabBar_KeyPressEvent_Callback cb) { qtabbar_keypressevent_callback = cb; }
    inline void setQTabBar_ChangeEvent_Callback(QTabBar_ChangeEvent_Callback cb) { qtabbar_changeevent_callback = cb; }
    inline void setQTabBar_TimerEvent_Callback(QTabBar_TimerEvent_Callback cb) { qtabbar_timerevent_callback = cb; }
    inline void setQTabBar_InitStyleOption_Callback(QTabBar_InitStyleOption_Callback cb) { qtabbar_initstyleoption_callback = cb; }
    inline void setQTabBar_DevType_Callback(QTabBar_DevType_Callback cb) { qtabbar_devtype_callback = cb; }
    inline void setQTabBar_SetVisible_Callback(QTabBar_SetVisible_Callback cb) { qtabbar_setvisible_callback = cb; }
    inline void setQTabBar_HeightForWidth_Callback(QTabBar_HeightForWidth_Callback cb) { qtabbar_heightforwidth_callback = cb; }
    inline void setQTabBar_HasHeightForWidth_Callback(QTabBar_HasHeightForWidth_Callback cb) { qtabbar_hasheightforwidth_callback = cb; }
    inline void setQTabBar_PaintEngine_Callback(QTabBar_PaintEngine_Callback cb) { qtabbar_paintengine_callback = cb; }
    inline void setQTabBar_KeyReleaseEvent_Callback(QTabBar_KeyReleaseEvent_Callback cb) { qtabbar_keyreleaseevent_callback = cb; }
    inline void setQTabBar_FocusInEvent_Callback(QTabBar_FocusInEvent_Callback cb) { qtabbar_focusinevent_callback = cb; }
    inline void setQTabBar_FocusOutEvent_Callback(QTabBar_FocusOutEvent_Callback cb) { qtabbar_focusoutevent_callback = cb; }
    inline void setQTabBar_EnterEvent_Callback(QTabBar_EnterEvent_Callback cb) { qtabbar_enterevent_callback = cb; }
    inline void setQTabBar_LeaveEvent_Callback(QTabBar_LeaveEvent_Callback cb) { qtabbar_leaveevent_callback = cb; }
    inline void setQTabBar_MoveEvent_Callback(QTabBar_MoveEvent_Callback cb) { qtabbar_moveevent_callback = cb; }
    inline void setQTabBar_CloseEvent_Callback(QTabBar_CloseEvent_Callback cb) { qtabbar_closeevent_callback = cb; }
    inline void setQTabBar_ContextMenuEvent_Callback(QTabBar_ContextMenuEvent_Callback cb) { qtabbar_contextmenuevent_callback = cb; }
    inline void setQTabBar_TabletEvent_Callback(QTabBar_TabletEvent_Callback cb) { qtabbar_tabletevent_callback = cb; }
    inline void setQTabBar_ActionEvent_Callback(QTabBar_ActionEvent_Callback cb) { qtabbar_actionevent_callback = cb; }
    inline void setQTabBar_DragEnterEvent_Callback(QTabBar_DragEnterEvent_Callback cb) { qtabbar_dragenterevent_callback = cb; }
    inline void setQTabBar_DragMoveEvent_Callback(QTabBar_DragMoveEvent_Callback cb) { qtabbar_dragmoveevent_callback = cb; }
    inline void setQTabBar_DragLeaveEvent_Callback(QTabBar_DragLeaveEvent_Callback cb) { qtabbar_dragleaveevent_callback = cb; }
    inline void setQTabBar_DropEvent_Callback(QTabBar_DropEvent_Callback cb) { qtabbar_dropevent_callback = cb; }
    inline void setQTabBar_NativeEvent_Callback(QTabBar_NativeEvent_Callback cb) { qtabbar_nativeevent_callback = cb; }
    inline void setQTabBar_Metric_Callback(QTabBar_Metric_Callback cb) { qtabbar_metric_callback = cb; }
    inline void setQTabBar_InitPainter_Callback(QTabBar_InitPainter_Callback cb) { qtabbar_initpainter_callback = cb; }
    inline void setQTabBar_Redirected_Callback(QTabBar_Redirected_Callback cb) { qtabbar_redirected_callback = cb; }
    inline void setQTabBar_SharedPainter_Callback(QTabBar_SharedPainter_Callback cb) { qtabbar_sharedpainter_callback = cb; }
    inline void setQTabBar_InputMethodEvent_Callback(QTabBar_InputMethodEvent_Callback cb) { qtabbar_inputmethodevent_callback = cb; }
    inline void setQTabBar_InputMethodQuery_Callback(QTabBar_InputMethodQuery_Callback cb) { qtabbar_inputmethodquery_callback = cb; }
    inline void setQTabBar_FocusNextPrevChild_Callback(QTabBar_FocusNextPrevChild_Callback cb) { qtabbar_focusnextprevchild_callback = cb; }
    inline void setQTabBar_EventFilter_Callback(QTabBar_EventFilter_Callback cb) { qtabbar_eventfilter_callback = cb; }
    inline void setQTabBar_ChildEvent_Callback(QTabBar_ChildEvent_Callback cb) { qtabbar_childevent_callback = cb; }
    inline void setQTabBar_CustomEvent_Callback(QTabBar_CustomEvent_Callback cb) { qtabbar_customevent_callback = cb; }
    inline void setQTabBar_ConnectNotify_Callback(QTabBar_ConnectNotify_Callback cb) { qtabbar_connectnotify_callback = cb; }
    inline void setQTabBar_DisconnectNotify_Callback(QTabBar_DisconnectNotify_Callback cb) { qtabbar_disconnectnotify_callback = cb; }
    inline void setQTabBar_UpdateMicroFocus_Callback(QTabBar_UpdateMicroFocus_Callback cb) { qtabbar_updatemicrofocus_callback = cb; }
    inline void setQTabBar_Create_Callback(QTabBar_Create_Callback cb) { qtabbar_create_callback = cb; }
    inline void setQTabBar_Destroy_Callback(QTabBar_Destroy_Callback cb) { qtabbar_destroy_callback = cb; }
    inline void setQTabBar_FocusNextChild_Callback(QTabBar_FocusNextChild_Callback cb) { qtabbar_focusnextchild_callback = cb; }
    inline void setQTabBar_FocusPreviousChild_Callback(QTabBar_FocusPreviousChild_Callback cb) { qtabbar_focuspreviouschild_callback = cb; }
    inline void setQTabBar_Sender_Callback(QTabBar_Sender_Callback cb) { qtabbar_sender_callback = cb; }
    inline void setQTabBar_SenderSignalIndex_Callback(QTabBar_SenderSignalIndex_Callback cb) { qtabbar_sendersignalindex_callback = cb; }
    inline void setQTabBar_Receivers_Callback(QTabBar_Receivers_Callback cb) { qtabbar_receivers_callback = cb; }
    inline void setQTabBar_IsSignalConnected_Callback(QTabBar_IsSignalConnected_Callback cb) { qtabbar_issignalconnected_callback = cb; }
    inline void setQTabBar_GetDecodedMetricF_Callback(QTabBar_GetDecodedMetricF_Callback cb) { qtabbar_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQTabBar_Metacall_IsBase(bool value) const { qtabbar_metacall_isbase = value; }
    inline void setQTabBar_SizeHint_IsBase(bool value) const { qtabbar_sizehint_isbase = value; }
    inline void setQTabBar_MinimumSizeHint_IsBase(bool value) const { qtabbar_minimumsizehint_isbase = value; }
    inline void setQTabBar_TabSizeHint_IsBase(bool value) const { qtabbar_tabsizehint_isbase = value; }
    inline void setQTabBar_MinimumTabSizeHint_IsBase(bool value) const { qtabbar_minimumtabsizehint_isbase = value; }
    inline void setQTabBar_TabInserted_IsBase(bool value) const { qtabbar_tabinserted_isbase = value; }
    inline void setQTabBar_TabRemoved_IsBase(bool value) const { qtabbar_tabremoved_isbase = value; }
    inline void setQTabBar_TabLayoutChange_IsBase(bool value) const { qtabbar_tablayoutchange_isbase = value; }
    inline void setQTabBar_Event_IsBase(bool value) const { qtabbar_event_isbase = value; }
    inline void setQTabBar_ResizeEvent_IsBase(bool value) const { qtabbar_resizeevent_isbase = value; }
    inline void setQTabBar_ShowEvent_IsBase(bool value) const { qtabbar_showevent_isbase = value; }
    inline void setQTabBar_HideEvent_IsBase(bool value) const { qtabbar_hideevent_isbase = value; }
    inline void setQTabBar_PaintEvent_IsBase(bool value) const { qtabbar_paintevent_isbase = value; }
    inline void setQTabBar_MousePressEvent_IsBase(bool value) const { qtabbar_mousepressevent_isbase = value; }
    inline void setQTabBar_MouseMoveEvent_IsBase(bool value) const { qtabbar_mousemoveevent_isbase = value; }
    inline void setQTabBar_MouseReleaseEvent_IsBase(bool value) const { qtabbar_mousereleaseevent_isbase = value; }
    inline void setQTabBar_MouseDoubleClickEvent_IsBase(bool value) const { qtabbar_mousedoubleclickevent_isbase = value; }
    inline void setQTabBar_WheelEvent_IsBase(bool value) const { qtabbar_wheelevent_isbase = value; }
    inline void setQTabBar_KeyPressEvent_IsBase(bool value) const { qtabbar_keypressevent_isbase = value; }
    inline void setQTabBar_ChangeEvent_IsBase(bool value) const { qtabbar_changeevent_isbase = value; }
    inline void setQTabBar_TimerEvent_IsBase(bool value) const { qtabbar_timerevent_isbase = value; }
    inline void setQTabBar_InitStyleOption_IsBase(bool value) const { qtabbar_initstyleoption_isbase = value; }
    inline void setQTabBar_DevType_IsBase(bool value) const { qtabbar_devtype_isbase = value; }
    inline void setQTabBar_SetVisible_IsBase(bool value) const { qtabbar_setvisible_isbase = value; }
    inline void setQTabBar_HeightForWidth_IsBase(bool value) const { qtabbar_heightforwidth_isbase = value; }
    inline void setQTabBar_HasHeightForWidth_IsBase(bool value) const { qtabbar_hasheightforwidth_isbase = value; }
    inline void setQTabBar_PaintEngine_IsBase(bool value) const { qtabbar_paintengine_isbase = value; }
    inline void setQTabBar_KeyReleaseEvent_IsBase(bool value) const { qtabbar_keyreleaseevent_isbase = value; }
    inline void setQTabBar_FocusInEvent_IsBase(bool value) const { qtabbar_focusinevent_isbase = value; }
    inline void setQTabBar_FocusOutEvent_IsBase(bool value) const { qtabbar_focusoutevent_isbase = value; }
    inline void setQTabBar_EnterEvent_IsBase(bool value) const { qtabbar_enterevent_isbase = value; }
    inline void setQTabBar_LeaveEvent_IsBase(bool value) const { qtabbar_leaveevent_isbase = value; }
    inline void setQTabBar_MoveEvent_IsBase(bool value) const { qtabbar_moveevent_isbase = value; }
    inline void setQTabBar_CloseEvent_IsBase(bool value) const { qtabbar_closeevent_isbase = value; }
    inline void setQTabBar_ContextMenuEvent_IsBase(bool value) const { qtabbar_contextmenuevent_isbase = value; }
    inline void setQTabBar_TabletEvent_IsBase(bool value) const { qtabbar_tabletevent_isbase = value; }
    inline void setQTabBar_ActionEvent_IsBase(bool value) const { qtabbar_actionevent_isbase = value; }
    inline void setQTabBar_DragEnterEvent_IsBase(bool value) const { qtabbar_dragenterevent_isbase = value; }
    inline void setQTabBar_DragMoveEvent_IsBase(bool value) const { qtabbar_dragmoveevent_isbase = value; }
    inline void setQTabBar_DragLeaveEvent_IsBase(bool value) const { qtabbar_dragleaveevent_isbase = value; }
    inline void setQTabBar_DropEvent_IsBase(bool value) const { qtabbar_dropevent_isbase = value; }
    inline void setQTabBar_NativeEvent_IsBase(bool value) const { qtabbar_nativeevent_isbase = value; }
    inline void setQTabBar_Metric_IsBase(bool value) const { qtabbar_metric_isbase = value; }
    inline void setQTabBar_InitPainter_IsBase(bool value) const { qtabbar_initpainter_isbase = value; }
    inline void setQTabBar_Redirected_IsBase(bool value) const { qtabbar_redirected_isbase = value; }
    inline void setQTabBar_SharedPainter_IsBase(bool value) const { qtabbar_sharedpainter_isbase = value; }
    inline void setQTabBar_InputMethodEvent_IsBase(bool value) const { qtabbar_inputmethodevent_isbase = value; }
    inline void setQTabBar_InputMethodQuery_IsBase(bool value) const { qtabbar_inputmethodquery_isbase = value; }
    inline void setQTabBar_FocusNextPrevChild_IsBase(bool value) const { qtabbar_focusnextprevchild_isbase = value; }
    inline void setQTabBar_EventFilter_IsBase(bool value) const { qtabbar_eventfilter_isbase = value; }
    inline void setQTabBar_ChildEvent_IsBase(bool value) const { qtabbar_childevent_isbase = value; }
    inline void setQTabBar_CustomEvent_IsBase(bool value) const { qtabbar_customevent_isbase = value; }
    inline void setQTabBar_ConnectNotify_IsBase(bool value) const { qtabbar_connectnotify_isbase = value; }
    inline void setQTabBar_DisconnectNotify_IsBase(bool value) const { qtabbar_disconnectnotify_isbase = value; }
    inline void setQTabBar_UpdateMicroFocus_IsBase(bool value) const { qtabbar_updatemicrofocus_isbase = value; }
    inline void setQTabBar_Create_IsBase(bool value) const { qtabbar_create_isbase = value; }
    inline void setQTabBar_Destroy_IsBase(bool value) const { qtabbar_destroy_isbase = value; }
    inline void setQTabBar_FocusNextChild_IsBase(bool value) const { qtabbar_focusnextchild_isbase = value; }
    inline void setQTabBar_FocusPreviousChild_IsBase(bool value) const { qtabbar_focuspreviouschild_isbase = value; }
    inline void setQTabBar_Sender_IsBase(bool value) const { qtabbar_sender_isbase = value; }
    inline void setQTabBar_SenderSignalIndex_IsBase(bool value) const { qtabbar_sendersignalindex_isbase = value; }
    inline void setQTabBar_Receivers_IsBase(bool value) const { qtabbar_receivers_isbase = value; }
    inline void setQTabBar_IsSignalConnected_IsBase(bool value) const { qtabbar_issignalconnected_isbase = value; }
    inline void setQTabBar_GetDecodedMetricF_IsBase(bool value) const { qtabbar_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtabbar_metacall_isbase) {
            qtabbar_metacall_isbase = false;
            return QTabBar::qt_metacall(param1, param2, param3);
        } else if (qtabbar_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qtabbar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QTabBar::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtabbar_sizehint_isbase) {
            qtabbar_sizehint_isbase = false;
            return QTabBar::sizeHint();
        } else if (qtabbar_sizehint_callback != nullptr) {
            QSize* callback_ret = qtabbar_sizehint_callback();
            return *callback_ret;
        } else {
            return QTabBar::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtabbar_minimumsizehint_isbase) {
            qtabbar_minimumsizehint_isbase = false;
            return QTabBar::minimumSizeHint();
        } else if (qtabbar_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qtabbar_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QTabBar::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize tabSizeHint(int index) const override {
        if (qtabbar_tabsizehint_isbase) {
            qtabbar_tabsizehint_isbase = false;
            return QTabBar::tabSizeHint(index);
        } else if (qtabbar_tabsizehint_callback != nullptr) {
            int cbval1 = index;

            QSize* callback_ret = qtabbar_tabsizehint_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTabBar::tabSizeHint(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumTabSizeHint(int index) const override {
        if (qtabbar_minimumtabsizehint_isbase) {
            qtabbar_minimumtabsizehint_isbase = false;
            return QTabBar::minimumTabSizeHint(index);
        } else if (qtabbar_minimumtabsizehint_callback != nullptr) {
            int cbval1 = index;

            QSize* callback_ret = qtabbar_minimumtabsizehint_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTabBar::minimumTabSizeHint(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabInserted(int index) override {
        if (qtabbar_tabinserted_isbase) {
            qtabbar_tabinserted_isbase = false;
            QTabBar::tabInserted(index);
        } else if (qtabbar_tabinserted_callback != nullptr) {
            int cbval1 = index;

            qtabbar_tabinserted_callback(this, cbval1);
        } else {
            QTabBar::tabInserted(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabRemoved(int index) override {
        if (qtabbar_tabremoved_isbase) {
            qtabbar_tabremoved_isbase = false;
            QTabBar::tabRemoved(index);
        } else if (qtabbar_tabremoved_callback != nullptr) {
            int cbval1 = index;

            qtabbar_tabremoved_callback(this, cbval1);
        } else {
            QTabBar::tabRemoved(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabLayoutChange() override {
        if (qtabbar_tablayoutchange_isbase) {
            qtabbar_tablayoutchange_isbase = false;
            QTabBar::tabLayoutChange();
        } else if (qtabbar_tablayoutchange_callback != nullptr) {
            qtabbar_tablayoutchange_callback();
        } else {
            QTabBar::tabLayoutChange();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qtabbar_event_isbase) {
            qtabbar_event_isbase = false;
            return QTabBar::event(param1);
        } else if (qtabbar_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = qtabbar_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTabBar::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qtabbar_resizeevent_isbase) {
            qtabbar_resizeevent_isbase = false;
            QTabBar::resizeEvent(param1);
        } else if (qtabbar_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            qtabbar_resizeevent_callback(this, cbval1);
        } else {
            QTabBar::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qtabbar_showevent_isbase) {
            qtabbar_showevent_isbase = false;
            QTabBar::showEvent(param1);
        } else if (qtabbar_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            qtabbar_showevent_callback(this, cbval1);
        } else {
            QTabBar::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (qtabbar_hideevent_isbase) {
            qtabbar_hideevent_isbase = false;
            QTabBar::hideEvent(param1);
        } else if (qtabbar_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = param1;

            qtabbar_hideevent_callback(this, cbval1);
        } else {
            QTabBar::hideEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qtabbar_paintevent_isbase) {
            qtabbar_paintevent_isbase = false;
            QTabBar::paintEvent(param1);
        } else if (qtabbar_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            qtabbar_paintevent_callback(this, cbval1);
        } else {
            QTabBar::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qtabbar_mousepressevent_isbase) {
            qtabbar_mousepressevent_isbase = false;
            QTabBar::mousePressEvent(param1);
        } else if (qtabbar_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qtabbar_mousepressevent_callback(this, cbval1);
        } else {
            QTabBar::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qtabbar_mousemoveevent_isbase) {
            qtabbar_mousemoveevent_isbase = false;
            QTabBar::mouseMoveEvent(param1);
        } else if (qtabbar_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qtabbar_mousemoveevent_callback(this, cbval1);
        } else {
            QTabBar::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qtabbar_mousereleaseevent_isbase) {
            qtabbar_mousereleaseevent_isbase = false;
            QTabBar::mouseReleaseEvent(param1);
        } else if (qtabbar_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qtabbar_mousereleaseevent_callback(this, cbval1);
        } else {
            QTabBar::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qtabbar_mousedoubleclickevent_isbase) {
            qtabbar_mousedoubleclickevent_isbase = false;
            QTabBar::mouseDoubleClickEvent(param1);
        } else if (qtabbar_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qtabbar_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QTabBar::mouseDoubleClickEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qtabbar_wheelevent_isbase) {
            qtabbar_wheelevent_isbase = false;
            QTabBar::wheelEvent(event);
        } else if (qtabbar_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qtabbar_wheelevent_callback(this, cbval1);
        } else {
            QTabBar::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qtabbar_keypressevent_isbase) {
            qtabbar_keypressevent_isbase = false;
            QTabBar::keyPressEvent(param1);
        } else if (qtabbar_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            qtabbar_keypressevent_callback(this, cbval1);
        } else {
            QTabBar::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qtabbar_changeevent_isbase) {
            qtabbar_changeevent_isbase = false;
            QTabBar::changeEvent(param1);
        } else if (qtabbar_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qtabbar_changeevent_callback(this, cbval1);
        } else {
            QTabBar::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtabbar_timerevent_isbase) {
            qtabbar_timerevent_isbase = false;
            QTabBar::timerEvent(event);
        } else if (qtabbar_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qtabbar_timerevent_callback(this, cbval1);
        } else {
            QTabBar::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionTab* option, int tabIndex) const override {
        if (qtabbar_initstyleoption_isbase) {
            qtabbar_initstyleoption_isbase = false;
            QTabBar::initStyleOption(option, tabIndex);
        } else if (qtabbar_initstyleoption_callback != nullptr) {
            QStyleOptionTab* cbval1 = option;
            int cbval2 = tabIndex;

            qtabbar_initstyleoption_callback(this, cbval1, cbval2);
        } else {
            QTabBar::initStyleOption(option, tabIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtabbar_devtype_isbase) {
            qtabbar_devtype_isbase = false;
            return QTabBar::devType();
        } else if (qtabbar_devtype_callback != nullptr) {
            int callback_ret = qtabbar_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTabBar::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtabbar_setvisible_isbase) {
            qtabbar_setvisible_isbase = false;
            QTabBar::setVisible(visible);
        } else if (qtabbar_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qtabbar_setvisible_callback(this, cbval1);
        } else {
            QTabBar::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtabbar_heightforwidth_isbase) {
            qtabbar_heightforwidth_isbase = false;
            return QTabBar::heightForWidth(param1);
        } else if (qtabbar_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qtabbar_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTabBar::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtabbar_hasheightforwidth_isbase) {
            qtabbar_hasheightforwidth_isbase = false;
            return QTabBar::hasHeightForWidth();
        } else if (qtabbar_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qtabbar_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QTabBar::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtabbar_paintengine_isbase) {
            qtabbar_paintengine_isbase = false;
            return QTabBar::paintEngine();
        } else if (qtabbar_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qtabbar_paintengine_callback();
            return callback_ret;
        } else {
            return QTabBar::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtabbar_keyreleaseevent_isbase) {
            qtabbar_keyreleaseevent_isbase = false;
            QTabBar::keyReleaseEvent(event);
        } else if (qtabbar_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qtabbar_keyreleaseevent_callback(this, cbval1);
        } else {
            QTabBar::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtabbar_focusinevent_isbase) {
            qtabbar_focusinevent_isbase = false;
            QTabBar::focusInEvent(event);
        } else if (qtabbar_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qtabbar_focusinevent_callback(this, cbval1);
        } else {
            QTabBar::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtabbar_focusoutevent_isbase) {
            qtabbar_focusoutevent_isbase = false;
            QTabBar::focusOutEvent(event);
        } else if (qtabbar_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qtabbar_focusoutevent_callback(this, cbval1);
        } else {
            QTabBar::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtabbar_enterevent_isbase) {
            qtabbar_enterevent_isbase = false;
            QTabBar::enterEvent(event);
        } else if (qtabbar_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qtabbar_enterevent_callback(this, cbval1);
        } else {
            QTabBar::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtabbar_leaveevent_isbase) {
            qtabbar_leaveevent_isbase = false;
            QTabBar::leaveEvent(event);
        } else if (qtabbar_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qtabbar_leaveevent_callback(this, cbval1);
        } else {
            QTabBar::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtabbar_moveevent_isbase) {
            qtabbar_moveevent_isbase = false;
            QTabBar::moveEvent(event);
        } else if (qtabbar_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qtabbar_moveevent_callback(this, cbval1);
        } else {
            QTabBar::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtabbar_closeevent_isbase) {
            qtabbar_closeevent_isbase = false;
            QTabBar::closeEvent(event);
        } else if (qtabbar_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qtabbar_closeevent_callback(this, cbval1);
        } else {
            QTabBar::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qtabbar_contextmenuevent_isbase) {
            qtabbar_contextmenuevent_isbase = false;
            QTabBar::contextMenuEvent(event);
        } else if (qtabbar_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qtabbar_contextmenuevent_callback(this, cbval1);
        } else {
            QTabBar::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtabbar_tabletevent_isbase) {
            qtabbar_tabletevent_isbase = false;
            QTabBar::tabletEvent(event);
        } else if (qtabbar_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qtabbar_tabletevent_callback(this, cbval1);
        } else {
            QTabBar::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtabbar_actionevent_isbase) {
            qtabbar_actionevent_isbase = false;
            QTabBar::actionEvent(event);
        } else if (qtabbar_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qtabbar_actionevent_callback(this, cbval1);
        } else {
            QTabBar::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtabbar_dragenterevent_isbase) {
            qtabbar_dragenterevent_isbase = false;
            QTabBar::dragEnterEvent(event);
        } else if (qtabbar_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qtabbar_dragenterevent_callback(this, cbval1);
        } else {
            QTabBar::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtabbar_dragmoveevent_isbase) {
            qtabbar_dragmoveevent_isbase = false;
            QTabBar::dragMoveEvent(event);
        } else if (qtabbar_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qtabbar_dragmoveevent_callback(this, cbval1);
        } else {
            QTabBar::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtabbar_dragleaveevent_isbase) {
            qtabbar_dragleaveevent_isbase = false;
            QTabBar::dragLeaveEvent(event);
        } else if (qtabbar_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qtabbar_dragleaveevent_callback(this, cbval1);
        } else {
            QTabBar::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtabbar_dropevent_isbase) {
            qtabbar_dropevent_isbase = false;
            QTabBar::dropEvent(event);
        } else if (qtabbar_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qtabbar_dropevent_callback(this, cbval1);
        } else {
            QTabBar::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtabbar_nativeevent_isbase) {
            qtabbar_nativeevent_isbase = false;
            return QTabBar::nativeEvent(eventType, message, result);
        } else if (qtabbar_nativeevent_callback != nullptr) {
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

            bool callback_ret = qtabbar_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QTabBar::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtabbar_metric_isbase) {
            qtabbar_metric_isbase = false;
            return QTabBar::metric(param1);
        } else if (qtabbar_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qtabbar_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTabBar::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtabbar_initpainter_isbase) {
            qtabbar_initpainter_isbase = false;
            QTabBar::initPainter(painter);
        } else if (qtabbar_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qtabbar_initpainter_callback(this, cbval1);
        } else {
            QTabBar::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtabbar_redirected_isbase) {
            qtabbar_redirected_isbase = false;
            return QTabBar::redirected(offset);
        } else if (qtabbar_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qtabbar_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTabBar::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtabbar_sharedpainter_isbase) {
            qtabbar_sharedpainter_isbase = false;
            return QTabBar::sharedPainter();
        } else if (qtabbar_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qtabbar_sharedpainter_callback();
            return callback_ret;
        } else {
            return QTabBar::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qtabbar_inputmethodevent_isbase) {
            qtabbar_inputmethodevent_isbase = false;
            QTabBar::inputMethodEvent(param1);
        } else if (qtabbar_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qtabbar_inputmethodevent_callback(this, cbval1);
        } else {
            QTabBar::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qtabbar_inputmethodquery_isbase) {
            qtabbar_inputmethodquery_isbase = false;
            return QTabBar::inputMethodQuery(param1);
        } else if (qtabbar_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qtabbar_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QTabBar::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtabbar_focusnextprevchild_isbase) {
            qtabbar_focusnextprevchild_isbase = false;
            return QTabBar::focusNextPrevChild(next);
        } else if (qtabbar_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qtabbar_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTabBar::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtabbar_eventfilter_isbase) {
            qtabbar_eventfilter_isbase = false;
            return QTabBar::eventFilter(watched, event);
        } else if (qtabbar_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qtabbar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QTabBar::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtabbar_childevent_isbase) {
            qtabbar_childevent_isbase = false;
            QTabBar::childEvent(event);
        } else if (qtabbar_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qtabbar_childevent_callback(this, cbval1);
        } else {
            QTabBar::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtabbar_customevent_isbase) {
            qtabbar_customevent_isbase = false;
            QTabBar::customEvent(event);
        } else if (qtabbar_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qtabbar_customevent_callback(this, cbval1);
        } else {
            QTabBar::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtabbar_connectnotify_isbase) {
            qtabbar_connectnotify_isbase = false;
            QTabBar::connectNotify(signal);
        } else if (qtabbar_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtabbar_connectnotify_callback(this, cbval1);
        } else {
            QTabBar::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtabbar_disconnectnotify_isbase) {
            qtabbar_disconnectnotify_isbase = false;
            QTabBar::disconnectNotify(signal);
        } else if (qtabbar_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtabbar_disconnectnotify_callback(this, cbval1);
        } else {
            QTabBar::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qtabbar_updatemicrofocus_isbase) {
            qtabbar_updatemicrofocus_isbase = false;
            QTabBar::updateMicroFocus();
        } else if (qtabbar_updatemicrofocus_callback != nullptr) {
            qtabbar_updatemicrofocus_callback();
        } else {
            QTabBar::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qtabbar_create_isbase) {
            qtabbar_create_isbase = false;
            QTabBar::create();
        } else if (qtabbar_create_callback != nullptr) {
            qtabbar_create_callback();
        } else {
            QTabBar::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qtabbar_destroy_isbase) {
            qtabbar_destroy_isbase = false;
            QTabBar::destroy();
        } else if (qtabbar_destroy_callback != nullptr) {
            qtabbar_destroy_callback();
        } else {
            QTabBar::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qtabbar_focusnextchild_isbase) {
            qtabbar_focusnextchild_isbase = false;
            return QTabBar::focusNextChild();
        } else if (qtabbar_focusnextchild_callback != nullptr) {
            bool callback_ret = qtabbar_focusnextchild_callback();
            return callback_ret;
        } else {
            return QTabBar::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qtabbar_focuspreviouschild_isbase) {
            qtabbar_focuspreviouschild_isbase = false;
            return QTabBar::focusPreviousChild();
        } else if (qtabbar_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qtabbar_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QTabBar::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtabbar_sender_isbase) {
            qtabbar_sender_isbase = false;
            return QTabBar::sender();
        } else if (qtabbar_sender_callback != nullptr) {
            QObject* callback_ret = qtabbar_sender_callback();
            return callback_ret;
        } else {
            return QTabBar::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtabbar_sendersignalindex_isbase) {
            qtabbar_sendersignalindex_isbase = false;
            return QTabBar::senderSignalIndex();
        } else if (qtabbar_sendersignalindex_callback != nullptr) {
            int callback_ret = qtabbar_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTabBar::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtabbar_receivers_isbase) {
            qtabbar_receivers_isbase = false;
            return QTabBar::receivers(signal);
        } else if (qtabbar_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qtabbar_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTabBar::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtabbar_issignalconnected_isbase) {
            qtabbar_issignalconnected_isbase = false;
            return QTabBar::isSignalConnected(signal);
        } else if (qtabbar_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qtabbar_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTabBar::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qtabbar_getdecodedmetricf_isbase) {
            qtabbar_getdecodedmetricf_isbase = false;
            return QTabBar::getDecodedMetricF(metricA, metricB);
        } else if (qtabbar_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qtabbar_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QTabBar::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend QSize* QTabBar_TabSizeHint(const QTabBar* self, int index);
    friend QSize* QTabBar_QBaseTabSizeHint(const QTabBar* self, int index);
    friend QSize* QTabBar_MinimumTabSizeHint(const QTabBar* self, int index);
    friend QSize* QTabBar_QBaseMinimumTabSizeHint(const QTabBar* self, int index);
    friend void QTabBar_TabInserted(QTabBar* self, int index);
    friend void QTabBar_QBaseTabInserted(QTabBar* self, int index);
    friend void QTabBar_TabRemoved(QTabBar* self, int index);
    friend void QTabBar_QBaseTabRemoved(QTabBar* self, int index);
    friend void QTabBar_TabLayoutChange(QTabBar* self);
    friend void QTabBar_QBaseTabLayoutChange(QTabBar* self);
    friend bool QTabBar_Event(QTabBar* self, QEvent* param1);
    friend bool QTabBar_QBaseEvent(QTabBar* self, QEvent* param1);
    friend void QTabBar_ResizeEvent(QTabBar* self, QResizeEvent* param1);
    friend void QTabBar_QBaseResizeEvent(QTabBar* self, QResizeEvent* param1);
    friend void QTabBar_ShowEvent(QTabBar* self, QShowEvent* param1);
    friend void QTabBar_QBaseShowEvent(QTabBar* self, QShowEvent* param1);
    friend void QTabBar_HideEvent(QTabBar* self, QHideEvent* param1);
    friend void QTabBar_QBaseHideEvent(QTabBar* self, QHideEvent* param1);
    friend void QTabBar_PaintEvent(QTabBar* self, QPaintEvent* param1);
    friend void QTabBar_QBasePaintEvent(QTabBar* self, QPaintEvent* param1);
    friend void QTabBar_MousePressEvent(QTabBar* self, QMouseEvent* param1);
    friend void QTabBar_QBaseMousePressEvent(QTabBar* self, QMouseEvent* param1);
    friend void QTabBar_MouseMoveEvent(QTabBar* self, QMouseEvent* param1);
    friend void QTabBar_QBaseMouseMoveEvent(QTabBar* self, QMouseEvent* param1);
    friend void QTabBar_MouseReleaseEvent(QTabBar* self, QMouseEvent* param1);
    friend void QTabBar_QBaseMouseReleaseEvent(QTabBar* self, QMouseEvent* param1);
    friend void QTabBar_MouseDoubleClickEvent(QTabBar* self, QMouseEvent* param1);
    friend void QTabBar_QBaseMouseDoubleClickEvent(QTabBar* self, QMouseEvent* param1);
    friend void QTabBar_WheelEvent(QTabBar* self, QWheelEvent* event);
    friend void QTabBar_QBaseWheelEvent(QTabBar* self, QWheelEvent* event);
    friend void QTabBar_KeyPressEvent(QTabBar* self, QKeyEvent* param1);
    friend void QTabBar_QBaseKeyPressEvent(QTabBar* self, QKeyEvent* param1);
    friend void QTabBar_ChangeEvent(QTabBar* self, QEvent* param1);
    friend void QTabBar_QBaseChangeEvent(QTabBar* self, QEvent* param1);
    friend void QTabBar_TimerEvent(QTabBar* self, QTimerEvent* event);
    friend void QTabBar_QBaseTimerEvent(QTabBar* self, QTimerEvent* event);
    friend void QTabBar_InitStyleOption(const QTabBar* self, QStyleOptionTab* option, int tabIndex);
    friend void QTabBar_QBaseInitStyleOption(const QTabBar* self, QStyleOptionTab* option, int tabIndex);
    friend void QTabBar_KeyReleaseEvent(QTabBar* self, QKeyEvent* event);
    friend void QTabBar_QBaseKeyReleaseEvent(QTabBar* self, QKeyEvent* event);
    friend void QTabBar_FocusInEvent(QTabBar* self, QFocusEvent* event);
    friend void QTabBar_QBaseFocusInEvent(QTabBar* self, QFocusEvent* event);
    friend void QTabBar_FocusOutEvent(QTabBar* self, QFocusEvent* event);
    friend void QTabBar_QBaseFocusOutEvent(QTabBar* self, QFocusEvent* event);
    friend void QTabBar_EnterEvent(QTabBar* self, QEnterEvent* event);
    friend void QTabBar_QBaseEnterEvent(QTabBar* self, QEnterEvent* event);
    friend void QTabBar_LeaveEvent(QTabBar* self, QEvent* event);
    friend void QTabBar_QBaseLeaveEvent(QTabBar* self, QEvent* event);
    friend void QTabBar_MoveEvent(QTabBar* self, QMoveEvent* event);
    friend void QTabBar_QBaseMoveEvent(QTabBar* self, QMoveEvent* event);
    friend void QTabBar_CloseEvent(QTabBar* self, QCloseEvent* event);
    friend void QTabBar_QBaseCloseEvent(QTabBar* self, QCloseEvent* event);
    friend void QTabBar_ContextMenuEvent(QTabBar* self, QContextMenuEvent* event);
    friend void QTabBar_QBaseContextMenuEvent(QTabBar* self, QContextMenuEvent* event);
    friend void QTabBar_TabletEvent(QTabBar* self, QTabletEvent* event);
    friend void QTabBar_QBaseTabletEvent(QTabBar* self, QTabletEvent* event);
    friend void QTabBar_ActionEvent(QTabBar* self, QActionEvent* event);
    friend void QTabBar_QBaseActionEvent(QTabBar* self, QActionEvent* event);
    friend void QTabBar_DragEnterEvent(QTabBar* self, QDragEnterEvent* event);
    friend void QTabBar_QBaseDragEnterEvent(QTabBar* self, QDragEnterEvent* event);
    friend void QTabBar_DragMoveEvent(QTabBar* self, QDragMoveEvent* event);
    friend void QTabBar_QBaseDragMoveEvent(QTabBar* self, QDragMoveEvent* event);
    friend void QTabBar_DragLeaveEvent(QTabBar* self, QDragLeaveEvent* event);
    friend void QTabBar_QBaseDragLeaveEvent(QTabBar* self, QDragLeaveEvent* event);
    friend void QTabBar_DropEvent(QTabBar* self, QDropEvent* event);
    friend void QTabBar_QBaseDropEvent(QTabBar* self, QDropEvent* event);
    friend bool QTabBar_NativeEvent(QTabBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QTabBar_QBaseNativeEvent(QTabBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QTabBar_Metric(const QTabBar* self, int param1);
    friend int QTabBar_QBaseMetric(const QTabBar* self, int param1);
    friend void QTabBar_InitPainter(const QTabBar* self, QPainter* painter);
    friend void QTabBar_QBaseInitPainter(const QTabBar* self, QPainter* painter);
    friend QPaintDevice* QTabBar_Redirected(const QTabBar* self, QPoint* offset);
    friend QPaintDevice* QTabBar_QBaseRedirected(const QTabBar* self, QPoint* offset);
    friend QPainter* QTabBar_SharedPainter(const QTabBar* self);
    friend QPainter* QTabBar_QBaseSharedPainter(const QTabBar* self);
    friend void QTabBar_InputMethodEvent(QTabBar* self, QInputMethodEvent* param1);
    friend void QTabBar_QBaseInputMethodEvent(QTabBar* self, QInputMethodEvent* param1);
    friend bool QTabBar_FocusNextPrevChild(QTabBar* self, bool next);
    friend bool QTabBar_QBaseFocusNextPrevChild(QTabBar* self, bool next);
    friend void QTabBar_ChildEvent(QTabBar* self, QChildEvent* event);
    friend void QTabBar_QBaseChildEvent(QTabBar* self, QChildEvent* event);
    friend void QTabBar_CustomEvent(QTabBar* self, QEvent* event);
    friend void QTabBar_QBaseCustomEvent(QTabBar* self, QEvent* event);
    friend void QTabBar_ConnectNotify(QTabBar* self, const QMetaMethod* signal);
    friend void QTabBar_QBaseConnectNotify(QTabBar* self, const QMetaMethod* signal);
    friend void QTabBar_DisconnectNotify(QTabBar* self, const QMetaMethod* signal);
    friend void QTabBar_QBaseDisconnectNotify(QTabBar* self, const QMetaMethod* signal);
    friend void QTabBar_UpdateMicroFocus(QTabBar* self);
    friend void QTabBar_QBaseUpdateMicroFocus(QTabBar* self);
    friend void QTabBar_Create(QTabBar* self);
    friend void QTabBar_QBaseCreate(QTabBar* self);
    friend void QTabBar_Destroy(QTabBar* self);
    friend void QTabBar_QBaseDestroy(QTabBar* self);
    friend bool QTabBar_FocusNextChild(QTabBar* self);
    friend bool QTabBar_QBaseFocusNextChild(QTabBar* self);
    friend bool QTabBar_FocusPreviousChild(QTabBar* self);
    friend bool QTabBar_QBaseFocusPreviousChild(QTabBar* self);
    friend QObject* QTabBar_Sender(const QTabBar* self);
    friend QObject* QTabBar_QBaseSender(const QTabBar* self);
    friend int QTabBar_SenderSignalIndex(const QTabBar* self);
    friend int QTabBar_QBaseSenderSignalIndex(const QTabBar* self);
    friend int QTabBar_Receivers(const QTabBar* self, const char* signal);
    friend int QTabBar_QBaseReceivers(const QTabBar* self, const char* signal);
    friend bool QTabBar_IsSignalConnected(const QTabBar* self, const QMetaMethod* signal);
    friend bool QTabBar_QBaseIsSignalConnected(const QTabBar* self, const QMetaMethod* signal);
    friend double QTabBar_GetDecodedMetricF(const QTabBar* self, int metricA, int metricB);
    friend double QTabBar_QBaseGetDecodedMetricF(const QTabBar* self, int metricA, int metricB);
};

#endif
