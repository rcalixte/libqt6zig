#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKEDITLISTWIDGET_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKEDITLISTWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KEditListWidget so that we can call protected methods
class VirtualKEditListWidget final : public KEditListWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualKEditListWidget = true;

    // Virtual class public types (including callbacks)
    using KEditListWidget_Metacall_Callback = int (*)(KEditListWidget*, int, int, void**);
    using KEditListWidget_EventFilter_Callback = bool (*)(KEditListWidget*, QObject*, QEvent*);
    using KEditListWidget_DevType_Callback = int (*)();
    using KEditListWidget_SetVisible_Callback = void (*)(KEditListWidget*, bool);
    using KEditListWidget_SizeHint_Callback = QSize* (*)();
    using KEditListWidget_MinimumSizeHint_Callback = QSize* (*)();
    using KEditListWidget_HeightForWidth_Callback = int (*)(const KEditListWidget*, int);
    using KEditListWidget_HasHeightForWidth_Callback = bool (*)();
    using KEditListWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using KEditListWidget_Event_Callback = bool (*)(KEditListWidget*, QEvent*);
    using KEditListWidget_MousePressEvent_Callback = void (*)(KEditListWidget*, QMouseEvent*);
    using KEditListWidget_MouseReleaseEvent_Callback = void (*)(KEditListWidget*, QMouseEvent*);
    using KEditListWidget_MouseDoubleClickEvent_Callback = void (*)(KEditListWidget*, QMouseEvent*);
    using KEditListWidget_MouseMoveEvent_Callback = void (*)(KEditListWidget*, QMouseEvent*);
    using KEditListWidget_WheelEvent_Callback = void (*)(KEditListWidget*, QWheelEvent*);
    using KEditListWidget_KeyPressEvent_Callback = void (*)(KEditListWidget*, QKeyEvent*);
    using KEditListWidget_KeyReleaseEvent_Callback = void (*)(KEditListWidget*, QKeyEvent*);
    using KEditListWidget_FocusInEvent_Callback = void (*)(KEditListWidget*, QFocusEvent*);
    using KEditListWidget_FocusOutEvent_Callback = void (*)(KEditListWidget*, QFocusEvent*);
    using KEditListWidget_EnterEvent_Callback = void (*)(KEditListWidget*, QEnterEvent*);
    using KEditListWidget_LeaveEvent_Callback = void (*)(KEditListWidget*, QEvent*);
    using KEditListWidget_PaintEvent_Callback = void (*)(KEditListWidget*, QPaintEvent*);
    using KEditListWidget_MoveEvent_Callback = void (*)(KEditListWidget*, QMoveEvent*);
    using KEditListWidget_ResizeEvent_Callback = void (*)(KEditListWidget*, QResizeEvent*);
    using KEditListWidget_CloseEvent_Callback = void (*)(KEditListWidget*, QCloseEvent*);
    using KEditListWidget_ContextMenuEvent_Callback = void (*)(KEditListWidget*, QContextMenuEvent*);
    using KEditListWidget_TabletEvent_Callback = void (*)(KEditListWidget*, QTabletEvent*);
    using KEditListWidget_ActionEvent_Callback = void (*)(KEditListWidget*, QActionEvent*);
    using KEditListWidget_DragEnterEvent_Callback = void (*)(KEditListWidget*, QDragEnterEvent*);
    using KEditListWidget_DragMoveEvent_Callback = void (*)(KEditListWidget*, QDragMoveEvent*);
    using KEditListWidget_DragLeaveEvent_Callback = void (*)(KEditListWidget*, QDragLeaveEvent*);
    using KEditListWidget_DropEvent_Callback = void (*)(KEditListWidget*, QDropEvent*);
    using KEditListWidget_ShowEvent_Callback = void (*)(KEditListWidget*, QShowEvent*);
    using KEditListWidget_HideEvent_Callback = void (*)(KEditListWidget*, QHideEvent*);
    using KEditListWidget_NativeEvent_Callback = bool (*)(KEditListWidget*, libqt_string, void*, intptr_t*);
    using KEditListWidget_ChangeEvent_Callback = void (*)(KEditListWidget*, QEvent*);
    using KEditListWidget_Metric_Callback = int (*)(const KEditListWidget*, int);
    using KEditListWidget_InitPainter_Callback = void (*)(const KEditListWidget*, QPainter*);
    using KEditListWidget_Redirected_Callback = QPaintDevice* (*)(const KEditListWidget*, QPoint*);
    using KEditListWidget_SharedPainter_Callback = QPainter* (*)();
    using KEditListWidget_InputMethodEvent_Callback = void (*)(KEditListWidget*, QInputMethodEvent*);
    using KEditListWidget_InputMethodQuery_Callback = QVariant* (*)(const KEditListWidget*, int);
    using KEditListWidget_FocusNextPrevChild_Callback = bool (*)(KEditListWidget*, bool);
    using KEditListWidget_TimerEvent_Callback = void (*)(KEditListWidget*, QTimerEvent*);
    using KEditListWidget_ChildEvent_Callback = void (*)(KEditListWidget*, QChildEvent*);
    using KEditListWidget_CustomEvent_Callback = void (*)(KEditListWidget*, QEvent*);
    using KEditListWidget_ConnectNotify_Callback = void (*)(KEditListWidget*, QMetaMethod*);
    using KEditListWidget_DisconnectNotify_Callback = void (*)(KEditListWidget*, QMetaMethod*);
    using KEditListWidget_UpdateMicroFocus_Callback = void (*)();
    using KEditListWidget_Create_Callback = void (*)();
    using KEditListWidget_Destroy_Callback = void (*)();
    using KEditListWidget_FocusNextChild_Callback = bool (*)();
    using KEditListWidget_FocusPreviousChild_Callback = bool (*)();
    using KEditListWidget_Sender_Callback = QObject* (*)();
    using KEditListWidget_SenderSignalIndex_Callback = int (*)();
    using KEditListWidget_Receivers_Callback = int (*)(const KEditListWidget*, const char*);
    using KEditListWidget_IsSignalConnected_Callback = bool (*)(const KEditListWidget*, QMetaMethod*);
    using KEditListWidget_GetDecodedMetricF_Callback = double (*)(const KEditListWidget*, int, int);

  protected:
    // Instance callback storage
    KEditListWidget_Metacall_Callback keditlistwidget_metacall_callback = nullptr;
    KEditListWidget_EventFilter_Callback keditlistwidget_eventfilter_callback = nullptr;
    KEditListWidget_DevType_Callback keditlistwidget_devtype_callback = nullptr;
    KEditListWidget_SetVisible_Callback keditlistwidget_setvisible_callback = nullptr;
    KEditListWidget_SizeHint_Callback keditlistwidget_sizehint_callback = nullptr;
    KEditListWidget_MinimumSizeHint_Callback keditlistwidget_minimumsizehint_callback = nullptr;
    KEditListWidget_HeightForWidth_Callback keditlistwidget_heightforwidth_callback = nullptr;
    KEditListWidget_HasHeightForWidth_Callback keditlistwidget_hasheightforwidth_callback = nullptr;
    KEditListWidget_PaintEngine_Callback keditlistwidget_paintengine_callback = nullptr;
    KEditListWidget_Event_Callback keditlistwidget_event_callback = nullptr;
    KEditListWidget_MousePressEvent_Callback keditlistwidget_mousepressevent_callback = nullptr;
    KEditListWidget_MouseReleaseEvent_Callback keditlistwidget_mousereleaseevent_callback = nullptr;
    KEditListWidget_MouseDoubleClickEvent_Callback keditlistwidget_mousedoubleclickevent_callback = nullptr;
    KEditListWidget_MouseMoveEvent_Callback keditlistwidget_mousemoveevent_callback = nullptr;
    KEditListWidget_WheelEvent_Callback keditlistwidget_wheelevent_callback = nullptr;
    KEditListWidget_KeyPressEvent_Callback keditlistwidget_keypressevent_callback = nullptr;
    KEditListWidget_KeyReleaseEvent_Callback keditlistwidget_keyreleaseevent_callback = nullptr;
    KEditListWidget_FocusInEvent_Callback keditlistwidget_focusinevent_callback = nullptr;
    KEditListWidget_FocusOutEvent_Callback keditlistwidget_focusoutevent_callback = nullptr;
    KEditListWidget_EnterEvent_Callback keditlistwidget_enterevent_callback = nullptr;
    KEditListWidget_LeaveEvent_Callback keditlistwidget_leaveevent_callback = nullptr;
    KEditListWidget_PaintEvent_Callback keditlistwidget_paintevent_callback = nullptr;
    KEditListWidget_MoveEvent_Callback keditlistwidget_moveevent_callback = nullptr;
    KEditListWidget_ResizeEvent_Callback keditlistwidget_resizeevent_callback = nullptr;
    KEditListWidget_CloseEvent_Callback keditlistwidget_closeevent_callback = nullptr;
    KEditListWidget_ContextMenuEvent_Callback keditlistwidget_contextmenuevent_callback = nullptr;
    KEditListWidget_TabletEvent_Callback keditlistwidget_tabletevent_callback = nullptr;
    KEditListWidget_ActionEvent_Callback keditlistwidget_actionevent_callback = nullptr;
    KEditListWidget_DragEnterEvent_Callback keditlistwidget_dragenterevent_callback = nullptr;
    KEditListWidget_DragMoveEvent_Callback keditlistwidget_dragmoveevent_callback = nullptr;
    KEditListWidget_DragLeaveEvent_Callback keditlistwidget_dragleaveevent_callback = nullptr;
    KEditListWidget_DropEvent_Callback keditlistwidget_dropevent_callback = nullptr;
    KEditListWidget_ShowEvent_Callback keditlistwidget_showevent_callback = nullptr;
    KEditListWidget_HideEvent_Callback keditlistwidget_hideevent_callback = nullptr;
    KEditListWidget_NativeEvent_Callback keditlistwidget_nativeevent_callback = nullptr;
    KEditListWidget_ChangeEvent_Callback keditlistwidget_changeevent_callback = nullptr;
    KEditListWidget_Metric_Callback keditlistwidget_metric_callback = nullptr;
    KEditListWidget_InitPainter_Callback keditlistwidget_initpainter_callback = nullptr;
    KEditListWidget_Redirected_Callback keditlistwidget_redirected_callback = nullptr;
    KEditListWidget_SharedPainter_Callback keditlistwidget_sharedpainter_callback = nullptr;
    KEditListWidget_InputMethodEvent_Callback keditlistwidget_inputmethodevent_callback = nullptr;
    KEditListWidget_InputMethodQuery_Callback keditlistwidget_inputmethodquery_callback = nullptr;
    KEditListWidget_FocusNextPrevChild_Callback keditlistwidget_focusnextprevchild_callback = nullptr;
    KEditListWidget_TimerEvent_Callback keditlistwidget_timerevent_callback = nullptr;
    KEditListWidget_ChildEvent_Callback keditlistwidget_childevent_callback = nullptr;
    KEditListWidget_CustomEvent_Callback keditlistwidget_customevent_callback = nullptr;
    KEditListWidget_ConnectNotify_Callback keditlistwidget_connectnotify_callback = nullptr;
    KEditListWidget_DisconnectNotify_Callback keditlistwidget_disconnectnotify_callback = nullptr;
    KEditListWidget_UpdateMicroFocus_Callback keditlistwidget_updatemicrofocus_callback = nullptr;
    KEditListWidget_Create_Callback keditlistwidget_create_callback = nullptr;
    KEditListWidget_Destroy_Callback keditlistwidget_destroy_callback = nullptr;
    KEditListWidget_FocusNextChild_Callback keditlistwidget_focusnextchild_callback = nullptr;
    KEditListWidget_FocusPreviousChild_Callback keditlistwidget_focuspreviouschild_callback = nullptr;
    KEditListWidget_Sender_Callback keditlistwidget_sender_callback = nullptr;
    KEditListWidget_SenderSignalIndex_Callback keditlistwidget_sendersignalindex_callback = nullptr;
    KEditListWidget_Receivers_Callback keditlistwidget_receivers_callback = nullptr;
    KEditListWidget_IsSignalConnected_Callback keditlistwidget_issignalconnected_callback = nullptr;
    KEditListWidget_GetDecodedMetricF_Callback keditlistwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool keditlistwidget_metacall_isbase = false;
    mutable bool keditlistwidget_eventfilter_isbase = false;
    mutable bool keditlistwidget_devtype_isbase = false;
    mutable bool keditlistwidget_setvisible_isbase = false;
    mutable bool keditlistwidget_sizehint_isbase = false;
    mutable bool keditlistwidget_minimumsizehint_isbase = false;
    mutable bool keditlistwidget_heightforwidth_isbase = false;
    mutable bool keditlistwidget_hasheightforwidth_isbase = false;
    mutable bool keditlistwidget_paintengine_isbase = false;
    mutable bool keditlistwidget_event_isbase = false;
    mutable bool keditlistwidget_mousepressevent_isbase = false;
    mutable bool keditlistwidget_mousereleaseevent_isbase = false;
    mutable bool keditlistwidget_mousedoubleclickevent_isbase = false;
    mutable bool keditlistwidget_mousemoveevent_isbase = false;
    mutable bool keditlistwidget_wheelevent_isbase = false;
    mutable bool keditlistwidget_keypressevent_isbase = false;
    mutable bool keditlistwidget_keyreleaseevent_isbase = false;
    mutable bool keditlistwidget_focusinevent_isbase = false;
    mutable bool keditlistwidget_focusoutevent_isbase = false;
    mutable bool keditlistwidget_enterevent_isbase = false;
    mutable bool keditlistwidget_leaveevent_isbase = false;
    mutable bool keditlistwidget_paintevent_isbase = false;
    mutable bool keditlistwidget_moveevent_isbase = false;
    mutable bool keditlistwidget_resizeevent_isbase = false;
    mutable bool keditlistwidget_closeevent_isbase = false;
    mutable bool keditlistwidget_contextmenuevent_isbase = false;
    mutable bool keditlistwidget_tabletevent_isbase = false;
    mutable bool keditlistwidget_actionevent_isbase = false;
    mutable bool keditlistwidget_dragenterevent_isbase = false;
    mutable bool keditlistwidget_dragmoveevent_isbase = false;
    mutable bool keditlistwidget_dragleaveevent_isbase = false;
    mutable bool keditlistwidget_dropevent_isbase = false;
    mutable bool keditlistwidget_showevent_isbase = false;
    mutable bool keditlistwidget_hideevent_isbase = false;
    mutable bool keditlistwidget_nativeevent_isbase = false;
    mutable bool keditlistwidget_changeevent_isbase = false;
    mutable bool keditlistwidget_metric_isbase = false;
    mutable bool keditlistwidget_initpainter_isbase = false;
    mutable bool keditlistwidget_redirected_isbase = false;
    mutable bool keditlistwidget_sharedpainter_isbase = false;
    mutable bool keditlistwidget_inputmethodevent_isbase = false;
    mutable bool keditlistwidget_inputmethodquery_isbase = false;
    mutable bool keditlistwidget_focusnextprevchild_isbase = false;
    mutable bool keditlistwidget_timerevent_isbase = false;
    mutable bool keditlistwidget_childevent_isbase = false;
    mutable bool keditlistwidget_customevent_isbase = false;
    mutable bool keditlistwidget_connectnotify_isbase = false;
    mutable bool keditlistwidget_disconnectnotify_isbase = false;
    mutable bool keditlistwidget_updatemicrofocus_isbase = false;
    mutable bool keditlistwidget_create_isbase = false;
    mutable bool keditlistwidget_destroy_isbase = false;
    mutable bool keditlistwidget_focusnextchild_isbase = false;
    mutable bool keditlistwidget_focuspreviouschild_isbase = false;
    mutable bool keditlistwidget_sender_isbase = false;
    mutable bool keditlistwidget_sendersignalindex_isbase = false;
    mutable bool keditlistwidget_receivers_isbase = false;
    mutable bool keditlistwidget_issignalconnected_isbase = false;
    mutable bool keditlistwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualKEditListWidget(QWidget* parent) : KEditListWidget(parent) {};
    VirtualKEditListWidget() : KEditListWidget() {};
    VirtualKEditListWidget(const KEditListWidget::CustomEditor& customEditor) : KEditListWidget(customEditor) {};
    VirtualKEditListWidget(const KEditListWidget::CustomEditor& customEditor, QWidget* parent) : KEditListWidget(customEditor, parent) {};
    VirtualKEditListWidget(const KEditListWidget::CustomEditor& customEditor, QWidget* parent, bool checkAtEntering) : KEditListWidget(customEditor, parent, checkAtEntering) {};
    VirtualKEditListWidget(const KEditListWidget::CustomEditor& customEditor, QWidget* parent, bool checkAtEntering, KEditListWidget::Buttons buttons) : KEditListWidget(customEditor, parent, checkAtEntering, buttons) {};

    ~VirtualKEditListWidget() {
        keditlistwidget_metacall_callback = nullptr;
        keditlistwidget_eventfilter_callback = nullptr;
        keditlistwidget_devtype_callback = nullptr;
        keditlistwidget_setvisible_callback = nullptr;
        keditlistwidget_sizehint_callback = nullptr;
        keditlistwidget_minimumsizehint_callback = nullptr;
        keditlistwidget_heightforwidth_callback = nullptr;
        keditlistwidget_hasheightforwidth_callback = nullptr;
        keditlistwidget_paintengine_callback = nullptr;
        keditlistwidget_event_callback = nullptr;
        keditlistwidget_mousepressevent_callback = nullptr;
        keditlistwidget_mousereleaseevent_callback = nullptr;
        keditlistwidget_mousedoubleclickevent_callback = nullptr;
        keditlistwidget_mousemoveevent_callback = nullptr;
        keditlistwidget_wheelevent_callback = nullptr;
        keditlistwidget_keypressevent_callback = nullptr;
        keditlistwidget_keyreleaseevent_callback = nullptr;
        keditlistwidget_focusinevent_callback = nullptr;
        keditlistwidget_focusoutevent_callback = nullptr;
        keditlistwidget_enterevent_callback = nullptr;
        keditlistwidget_leaveevent_callback = nullptr;
        keditlistwidget_paintevent_callback = nullptr;
        keditlistwidget_moveevent_callback = nullptr;
        keditlistwidget_resizeevent_callback = nullptr;
        keditlistwidget_closeevent_callback = nullptr;
        keditlistwidget_contextmenuevent_callback = nullptr;
        keditlistwidget_tabletevent_callback = nullptr;
        keditlistwidget_actionevent_callback = nullptr;
        keditlistwidget_dragenterevent_callback = nullptr;
        keditlistwidget_dragmoveevent_callback = nullptr;
        keditlistwidget_dragleaveevent_callback = nullptr;
        keditlistwidget_dropevent_callback = nullptr;
        keditlistwidget_showevent_callback = nullptr;
        keditlistwidget_hideevent_callback = nullptr;
        keditlistwidget_nativeevent_callback = nullptr;
        keditlistwidget_changeevent_callback = nullptr;
        keditlistwidget_metric_callback = nullptr;
        keditlistwidget_initpainter_callback = nullptr;
        keditlistwidget_redirected_callback = nullptr;
        keditlistwidget_sharedpainter_callback = nullptr;
        keditlistwidget_inputmethodevent_callback = nullptr;
        keditlistwidget_inputmethodquery_callback = nullptr;
        keditlistwidget_focusnextprevchild_callback = nullptr;
        keditlistwidget_timerevent_callback = nullptr;
        keditlistwidget_childevent_callback = nullptr;
        keditlistwidget_customevent_callback = nullptr;
        keditlistwidget_connectnotify_callback = nullptr;
        keditlistwidget_disconnectnotify_callback = nullptr;
        keditlistwidget_updatemicrofocus_callback = nullptr;
        keditlistwidget_create_callback = nullptr;
        keditlistwidget_destroy_callback = nullptr;
        keditlistwidget_focusnextchild_callback = nullptr;
        keditlistwidget_focuspreviouschild_callback = nullptr;
        keditlistwidget_sender_callback = nullptr;
        keditlistwidget_sendersignalindex_callback = nullptr;
        keditlistwidget_receivers_callback = nullptr;
        keditlistwidget_issignalconnected_callback = nullptr;
        keditlistwidget_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKEditListWidget_Metacall_Callback(KEditListWidget_Metacall_Callback cb) { keditlistwidget_metacall_callback = cb; }
    inline void setKEditListWidget_EventFilter_Callback(KEditListWidget_EventFilter_Callback cb) { keditlistwidget_eventfilter_callback = cb; }
    inline void setKEditListWidget_DevType_Callback(KEditListWidget_DevType_Callback cb) { keditlistwidget_devtype_callback = cb; }
    inline void setKEditListWidget_SetVisible_Callback(KEditListWidget_SetVisible_Callback cb) { keditlistwidget_setvisible_callback = cb; }
    inline void setKEditListWidget_SizeHint_Callback(KEditListWidget_SizeHint_Callback cb) { keditlistwidget_sizehint_callback = cb; }
    inline void setKEditListWidget_MinimumSizeHint_Callback(KEditListWidget_MinimumSizeHint_Callback cb) { keditlistwidget_minimumsizehint_callback = cb; }
    inline void setKEditListWidget_HeightForWidth_Callback(KEditListWidget_HeightForWidth_Callback cb) { keditlistwidget_heightforwidth_callback = cb; }
    inline void setKEditListWidget_HasHeightForWidth_Callback(KEditListWidget_HasHeightForWidth_Callback cb) { keditlistwidget_hasheightforwidth_callback = cb; }
    inline void setKEditListWidget_PaintEngine_Callback(KEditListWidget_PaintEngine_Callback cb) { keditlistwidget_paintengine_callback = cb; }
    inline void setKEditListWidget_Event_Callback(KEditListWidget_Event_Callback cb) { keditlistwidget_event_callback = cb; }
    inline void setKEditListWidget_MousePressEvent_Callback(KEditListWidget_MousePressEvent_Callback cb) { keditlistwidget_mousepressevent_callback = cb; }
    inline void setKEditListWidget_MouseReleaseEvent_Callback(KEditListWidget_MouseReleaseEvent_Callback cb) { keditlistwidget_mousereleaseevent_callback = cb; }
    inline void setKEditListWidget_MouseDoubleClickEvent_Callback(KEditListWidget_MouseDoubleClickEvent_Callback cb) { keditlistwidget_mousedoubleclickevent_callback = cb; }
    inline void setKEditListWidget_MouseMoveEvent_Callback(KEditListWidget_MouseMoveEvent_Callback cb) { keditlistwidget_mousemoveevent_callback = cb; }
    inline void setKEditListWidget_WheelEvent_Callback(KEditListWidget_WheelEvent_Callback cb) { keditlistwidget_wheelevent_callback = cb; }
    inline void setKEditListWidget_KeyPressEvent_Callback(KEditListWidget_KeyPressEvent_Callback cb) { keditlistwidget_keypressevent_callback = cb; }
    inline void setKEditListWidget_KeyReleaseEvent_Callback(KEditListWidget_KeyReleaseEvent_Callback cb) { keditlistwidget_keyreleaseevent_callback = cb; }
    inline void setKEditListWidget_FocusInEvent_Callback(KEditListWidget_FocusInEvent_Callback cb) { keditlistwidget_focusinevent_callback = cb; }
    inline void setKEditListWidget_FocusOutEvent_Callback(KEditListWidget_FocusOutEvent_Callback cb) { keditlistwidget_focusoutevent_callback = cb; }
    inline void setKEditListWidget_EnterEvent_Callback(KEditListWidget_EnterEvent_Callback cb) { keditlistwidget_enterevent_callback = cb; }
    inline void setKEditListWidget_LeaveEvent_Callback(KEditListWidget_LeaveEvent_Callback cb) { keditlistwidget_leaveevent_callback = cb; }
    inline void setKEditListWidget_PaintEvent_Callback(KEditListWidget_PaintEvent_Callback cb) { keditlistwidget_paintevent_callback = cb; }
    inline void setKEditListWidget_MoveEvent_Callback(KEditListWidget_MoveEvent_Callback cb) { keditlistwidget_moveevent_callback = cb; }
    inline void setKEditListWidget_ResizeEvent_Callback(KEditListWidget_ResizeEvent_Callback cb) { keditlistwidget_resizeevent_callback = cb; }
    inline void setKEditListWidget_CloseEvent_Callback(KEditListWidget_CloseEvent_Callback cb) { keditlistwidget_closeevent_callback = cb; }
    inline void setKEditListWidget_ContextMenuEvent_Callback(KEditListWidget_ContextMenuEvent_Callback cb) { keditlistwidget_contextmenuevent_callback = cb; }
    inline void setKEditListWidget_TabletEvent_Callback(KEditListWidget_TabletEvent_Callback cb) { keditlistwidget_tabletevent_callback = cb; }
    inline void setKEditListWidget_ActionEvent_Callback(KEditListWidget_ActionEvent_Callback cb) { keditlistwidget_actionevent_callback = cb; }
    inline void setKEditListWidget_DragEnterEvent_Callback(KEditListWidget_DragEnterEvent_Callback cb) { keditlistwidget_dragenterevent_callback = cb; }
    inline void setKEditListWidget_DragMoveEvent_Callback(KEditListWidget_DragMoveEvent_Callback cb) { keditlistwidget_dragmoveevent_callback = cb; }
    inline void setKEditListWidget_DragLeaveEvent_Callback(KEditListWidget_DragLeaveEvent_Callback cb) { keditlistwidget_dragleaveevent_callback = cb; }
    inline void setKEditListWidget_DropEvent_Callback(KEditListWidget_DropEvent_Callback cb) { keditlistwidget_dropevent_callback = cb; }
    inline void setKEditListWidget_ShowEvent_Callback(KEditListWidget_ShowEvent_Callback cb) { keditlistwidget_showevent_callback = cb; }
    inline void setKEditListWidget_HideEvent_Callback(KEditListWidget_HideEvent_Callback cb) { keditlistwidget_hideevent_callback = cb; }
    inline void setKEditListWidget_NativeEvent_Callback(KEditListWidget_NativeEvent_Callback cb) { keditlistwidget_nativeevent_callback = cb; }
    inline void setKEditListWidget_ChangeEvent_Callback(KEditListWidget_ChangeEvent_Callback cb) { keditlistwidget_changeevent_callback = cb; }
    inline void setKEditListWidget_Metric_Callback(KEditListWidget_Metric_Callback cb) { keditlistwidget_metric_callback = cb; }
    inline void setKEditListWidget_InitPainter_Callback(KEditListWidget_InitPainter_Callback cb) { keditlistwidget_initpainter_callback = cb; }
    inline void setKEditListWidget_Redirected_Callback(KEditListWidget_Redirected_Callback cb) { keditlistwidget_redirected_callback = cb; }
    inline void setKEditListWidget_SharedPainter_Callback(KEditListWidget_SharedPainter_Callback cb) { keditlistwidget_sharedpainter_callback = cb; }
    inline void setKEditListWidget_InputMethodEvent_Callback(KEditListWidget_InputMethodEvent_Callback cb) { keditlistwidget_inputmethodevent_callback = cb; }
    inline void setKEditListWidget_InputMethodQuery_Callback(KEditListWidget_InputMethodQuery_Callback cb) { keditlistwidget_inputmethodquery_callback = cb; }
    inline void setKEditListWidget_FocusNextPrevChild_Callback(KEditListWidget_FocusNextPrevChild_Callback cb) { keditlistwidget_focusnextprevchild_callback = cb; }
    inline void setKEditListWidget_TimerEvent_Callback(KEditListWidget_TimerEvent_Callback cb) { keditlistwidget_timerevent_callback = cb; }
    inline void setKEditListWidget_ChildEvent_Callback(KEditListWidget_ChildEvent_Callback cb) { keditlistwidget_childevent_callback = cb; }
    inline void setKEditListWidget_CustomEvent_Callback(KEditListWidget_CustomEvent_Callback cb) { keditlistwidget_customevent_callback = cb; }
    inline void setKEditListWidget_ConnectNotify_Callback(KEditListWidget_ConnectNotify_Callback cb) { keditlistwidget_connectnotify_callback = cb; }
    inline void setKEditListWidget_DisconnectNotify_Callback(KEditListWidget_DisconnectNotify_Callback cb) { keditlistwidget_disconnectnotify_callback = cb; }
    inline void setKEditListWidget_UpdateMicroFocus_Callback(KEditListWidget_UpdateMicroFocus_Callback cb) { keditlistwidget_updatemicrofocus_callback = cb; }
    inline void setKEditListWidget_Create_Callback(KEditListWidget_Create_Callback cb) { keditlistwidget_create_callback = cb; }
    inline void setKEditListWidget_Destroy_Callback(KEditListWidget_Destroy_Callback cb) { keditlistwidget_destroy_callback = cb; }
    inline void setKEditListWidget_FocusNextChild_Callback(KEditListWidget_FocusNextChild_Callback cb) { keditlistwidget_focusnextchild_callback = cb; }
    inline void setKEditListWidget_FocusPreviousChild_Callback(KEditListWidget_FocusPreviousChild_Callback cb) { keditlistwidget_focuspreviouschild_callback = cb; }
    inline void setKEditListWidget_Sender_Callback(KEditListWidget_Sender_Callback cb) { keditlistwidget_sender_callback = cb; }
    inline void setKEditListWidget_SenderSignalIndex_Callback(KEditListWidget_SenderSignalIndex_Callback cb) { keditlistwidget_sendersignalindex_callback = cb; }
    inline void setKEditListWidget_Receivers_Callback(KEditListWidget_Receivers_Callback cb) { keditlistwidget_receivers_callback = cb; }
    inline void setKEditListWidget_IsSignalConnected_Callback(KEditListWidget_IsSignalConnected_Callback cb) { keditlistwidget_issignalconnected_callback = cb; }
    inline void setKEditListWidget_GetDecodedMetricF_Callback(KEditListWidget_GetDecodedMetricF_Callback cb) { keditlistwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKEditListWidget_Metacall_IsBase(bool value) const { keditlistwidget_metacall_isbase = value; }
    inline void setKEditListWidget_EventFilter_IsBase(bool value) const { keditlistwidget_eventfilter_isbase = value; }
    inline void setKEditListWidget_DevType_IsBase(bool value) const { keditlistwidget_devtype_isbase = value; }
    inline void setKEditListWidget_SetVisible_IsBase(bool value) const { keditlistwidget_setvisible_isbase = value; }
    inline void setKEditListWidget_SizeHint_IsBase(bool value) const { keditlistwidget_sizehint_isbase = value; }
    inline void setKEditListWidget_MinimumSizeHint_IsBase(bool value) const { keditlistwidget_minimumsizehint_isbase = value; }
    inline void setKEditListWidget_HeightForWidth_IsBase(bool value) const { keditlistwidget_heightforwidth_isbase = value; }
    inline void setKEditListWidget_HasHeightForWidth_IsBase(bool value) const { keditlistwidget_hasheightforwidth_isbase = value; }
    inline void setKEditListWidget_PaintEngine_IsBase(bool value) const { keditlistwidget_paintengine_isbase = value; }
    inline void setKEditListWidget_Event_IsBase(bool value) const { keditlistwidget_event_isbase = value; }
    inline void setKEditListWidget_MousePressEvent_IsBase(bool value) const { keditlistwidget_mousepressevent_isbase = value; }
    inline void setKEditListWidget_MouseReleaseEvent_IsBase(bool value) const { keditlistwidget_mousereleaseevent_isbase = value; }
    inline void setKEditListWidget_MouseDoubleClickEvent_IsBase(bool value) const { keditlistwidget_mousedoubleclickevent_isbase = value; }
    inline void setKEditListWidget_MouseMoveEvent_IsBase(bool value) const { keditlistwidget_mousemoveevent_isbase = value; }
    inline void setKEditListWidget_WheelEvent_IsBase(bool value) const { keditlistwidget_wheelevent_isbase = value; }
    inline void setKEditListWidget_KeyPressEvent_IsBase(bool value) const { keditlistwidget_keypressevent_isbase = value; }
    inline void setKEditListWidget_KeyReleaseEvent_IsBase(bool value) const { keditlistwidget_keyreleaseevent_isbase = value; }
    inline void setKEditListWidget_FocusInEvent_IsBase(bool value) const { keditlistwidget_focusinevent_isbase = value; }
    inline void setKEditListWidget_FocusOutEvent_IsBase(bool value) const { keditlistwidget_focusoutevent_isbase = value; }
    inline void setKEditListWidget_EnterEvent_IsBase(bool value) const { keditlistwidget_enterevent_isbase = value; }
    inline void setKEditListWidget_LeaveEvent_IsBase(bool value) const { keditlistwidget_leaveevent_isbase = value; }
    inline void setKEditListWidget_PaintEvent_IsBase(bool value) const { keditlistwidget_paintevent_isbase = value; }
    inline void setKEditListWidget_MoveEvent_IsBase(bool value) const { keditlistwidget_moveevent_isbase = value; }
    inline void setKEditListWidget_ResizeEvent_IsBase(bool value) const { keditlistwidget_resizeevent_isbase = value; }
    inline void setKEditListWidget_CloseEvent_IsBase(bool value) const { keditlistwidget_closeevent_isbase = value; }
    inline void setKEditListWidget_ContextMenuEvent_IsBase(bool value) const { keditlistwidget_contextmenuevent_isbase = value; }
    inline void setKEditListWidget_TabletEvent_IsBase(bool value) const { keditlistwidget_tabletevent_isbase = value; }
    inline void setKEditListWidget_ActionEvent_IsBase(bool value) const { keditlistwidget_actionevent_isbase = value; }
    inline void setKEditListWidget_DragEnterEvent_IsBase(bool value) const { keditlistwidget_dragenterevent_isbase = value; }
    inline void setKEditListWidget_DragMoveEvent_IsBase(bool value) const { keditlistwidget_dragmoveevent_isbase = value; }
    inline void setKEditListWidget_DragLeaveEvent_IsBase(bool value) const { keditlistwidget_dragleaveevent_isbase = value; }
    inline void setKEditListWidget_DropEvent_IsBase(bool value) const { keditlistwidget_dropevent_isbase = value; }
    inline void setKEditListWidget_ShowEvent_IsBase(bool value) const { keditlistwidget_showevent_isbase = value; }
    inline void setKEditListWidget_HideEvent_IsBase(bool value) const { keditlistwidget_hideevent_isbase = value; }
    inline void setKEditListWidget_NativeEvent_IsBase(bool value) const { keditlistwidget_nativeevent_isbase = value; }
    inline void setKEditListWidget_ChangeEvent_IsBase(bool value) const { keditlistwidget_changeevent_isbase = value; }
    inline void setKEditListWidget_Metric_IsBase(bool value) const { keditlistwidget_metric_isbase = value; }
    inline void setKEditListWidget_InitPainter_IsBase(bool value) const { keditlistwidget_initpainter_isbase = value; }
    inline void setKEditListWidget_Redirected_IsBase(bool value) const { keditlistwidget_redirected_isbase = value; }
    inline void setKEditListWidget_SharedPainter_IsBase(bool value) const { keditlistwidget_sharedpainter_isbase = value; }
    inline void setKEditListWidget_InputMethodEvent_IsBase(bool value) const { keditlistwidget_inputmethodevent_isbase = value; }
    inline void setKEditListWidget_InputMethodQuery_IsBase(bool value) const { keditlistwidget_inputmethodquery_isbase = value; }
    inline void setKEditListWidget_FocusNextPrevChild_IsBase(bool value) const { keditlistwidget_focusnextprevchild_isbase = value; }
    inline void setKEditListWidget_TimerEvent_IsBase(bool value) const { keditlistwidget_timerevent_isbase = value; }
    inline void setKEditListWidget_ChildEvent_IsBase(bool value) const { keditlistwidget_childevent_isbase = value; }
    inline void setKEditListWidget_CustomEvent_IsBase(bool value) const { keditlistwidget_customevent_isbase = value; }
    inline void setKEditListWidget_ConnectNotify_IsBase(bool value) const { keditlistwidget_connectnotify_isbase = value; }
    inline void setKEditListWidget_DisconnectNotify_IsBase(bool value) const { keditlistwidget_disconnectnotify_isbase = value; }
    inline void setKEditListWidget_UpdateMicroFocus_IsBase(bool value) const { keditlistwidget_updatemicrofocus_isbase = value; }
    inline void setKEditListWidget_Create_IsBase(bool value) const { keditlistwidget_create_isbase = value; }
    inline void setKEditListWidget_Destroy_IsBase(bool value) const { keditlistwidget_destroy_isbase = value; }
    inline void setKEditListWidget_FocusNextChild_IsBase(bool value) const { keditlistwidget_focusnextchild_isbase = value; }
    inline void setKEditListWidget_FocusPreviousChild_IsBase(bool value) const { keditlistwidget_focuspreviouschild_isbase = value; }
    inline void setKEditListWidget_Sender_IsBase(bool value) const { keditlistwidget_sender_isbase = value; }
    inline void setKEditListWidget_SenderSignalIndex_IsBase(bool value) const { keditlistwidget_sendersignalindex_isbase = value; }
    inline void setKEditListWidget_Receivers_IsBase(bool value) const { keditlistwidget_receivers_isbase = value; }
    inline void setKEditListWidget_IsSignalConnected_IsBase(bool value) const { keditlistwidget_issignalconnected_isbase = value; }
    inline void setKEditListWidget_GetDecodedMetricF_IsBase(bool value) const { keditlistwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (keditlistwidget_metacall_isbase) {
            keditlistwidget_metacall_isbase = false;
            return KEditListWidget::qt_metacall(param1, param2, param3);
        } else if (keditlistwidget_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = keditlistwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KEditListWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* o, QEvent* e) override {
        if (keditlistwidget_eventfilter_isbase) {
            keditlistwidget_eventfilter_isbase = false;
            return KEditListWidget::eventFilter(o, e);
        } else if (keditlistwidget_eventfilter_callback != nullptr) {
            QObject* cbval1 = o;
            QEvent* cbval2 = e;

            bool callback_ret = keditlistwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KEditListWidget::eventFilter(o, e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (keditlistwidget_devtype_isbase) {
            keditlistwidget_devtype_isbase = false;
            return KEditListWidget::devType();
        } else if (keditlistwidget_devtype_callback != nullptr) {
            int callback_ret = keditlistwidget_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KEditListWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (keditlistwidget_setvisible_isbase) {
            keditlistwidget_setvisible_isbase = false;
            KEditListWidget::setVisible(visible);
        } else if (keditlistwidget_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            keditlistwidget_setvisible_callback(this, cbval1);
        } else {
            KEditListWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (keditlistwidget_sizehint_isbase) {
            keditlistwidget_sizehint_isbase = false;
            return KEditListWidget::sizeHint();
        } else if (keditlistwidget_sizehint_callback != nullptr) {
            QSize* callback_ret = keditlistwidget_sizehint_callback();
            return *callback_ret;
        } else {
            return KEditListWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (keditlistwidget_minimumsizehint_isbase) {
            keditlistwidget_minimumsizehint_isbase = false;
            return KEditListWidget::minimumSizeHint();
        } else if (keditlistwidget_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = keditlistwidget_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KEditListWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (keditlistwidget_heightforwidth_isbase) {
            keditlistwidget_heightforwidth_isbase = false;
            return KEditListWidget::heightForWidth(param1);
        } else if (keditlistwidget_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = keditlistwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KEditListWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (keditlistwidget_hasheightforwidth_isbase) {
            keditlistwidget_hasheightforwidth_isbase = false;
            return KEditListWidget::hasHeightForWidth();
        } else if (keditlistwidget_hasheightforwidth_callback != nullptr) {
            bool callback_ret = keditlistwidget_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KEditListWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (keditlistwidget_paintengine_isbase) {
            keditlistwidget_paintengine_isbase = false;
            return KEditListWidget::paintEngine();
        } else if (keditlistwidget_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = keditlistwidget_paintengine_callback();
            return callback_ret;
        } else {
            return KEditListWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (keditlistwidget_event_isbase) {
            keditlistwidget_event_isbase = false;
            return KEditListWidget::event(event);
        } else if (keditlistwidget_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = keditlistwidget_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KEditListWidget::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (keditlistwidget_mousepressevent_isbase) {
            keditlistwidget_mousepressevent_isbase = false;
            KEditListWidget::mousePressEvent(event);
        } else if (keditlistwidget_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            keditlistwidget_mousepressevent_callback(this, cbval1);
        } else {
            KEditListWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (keditlistwidget_mousereleaseevent_isbase) {
            keditlistwidget_mousereleaseevent_isbase = false;
            KEditListWidget::mouseReleaseEvent(event);
        } else if (keditlistwidget_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            keditlistwidget_mousereleaseevent_callback(this, cbval1);
        } else {
            KEditListWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (keditlistwidget_mousedoubleclickevent_isbase) {
            keditlistwidget_mousedoubleclickevent_isbase = false;
            KEditListWidget::mouseDoubleClickEvent(event);
        } else if (keditlistwidget_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            keditlistwidget_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KEditListWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (keditlistwidget_mousemoveevent_isbase) {
            keditlistwidget_mousemoveevent_isbase = false;
            KEditListWidget::mouseMoveEvent(event);
        } else if (keditlistwidget_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            keditlistwidget_mousemoveevent_callback(this, cbval1);
        } else {
            KEditListWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (keditlistwidget_wheelevent_isbase) {
            keditlistwidget_wheelevent_isbase = false;
            KEditListWidget::wheelEvent(event);
        } else if (keditlistwidget_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            keditlistwidget_wheelevent_callback(this, cbval1);
        } else {
            KEditListWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (keditlistwidget_keypressevent_isbase) {
            keditlistwidget_keypressevent_isbase = false;
            KEditListWidget::keyPressEvent(event);
        } else if (keditlistwidget_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            keditlistwidget_keypressevent_callback(this, cbval1);
        } else {
            KEditListWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (keditlistwidget_keyreleaseevent_isbase) {
            keditlistwidget_keyreleaseevent_isbase = false;
            KEditListWidget::keyReleaseEvent(event);
        } else if (keditlistwidget_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            keditlistwidget_keyreleaseevent_callback(this, cbval1);
        } else {
            KEditListWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (keditlistwidget_focusinevent_isbase) {
            keditlistwidget_focusinevent_isbase = false;
            KEditListWidget::focusInEvent(event);
        } else if (keditlistwidget_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            keditlistwidget_focusinevent_callback(this, cbval1);
        } else {
            KEditListWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (keditlistwidget_focusoutevent_isbase) {
            keditlistwidget_focusoutevent_isbase = false;
            KEditListWidget::focusOutEvent(event);
        } else if (keditlistwidget_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            keditlistwidget_focusoutevent_callback(this, cbval1);
        } else {
            KEditListWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (keditlistwidget_enterevent_isbase) {
            keditlistwidget_enterevent_isbase = false;
            KEditListWidget::enterEvent(event);
        } else if (keditlistwidget_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            keditlistwidget_enterevent_callback(this, cbval1);
        } else {
            KEditListWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (keditlistwidget_leaveevent_isbase) {
            keditlistwidget_leaveevent_isbase = false;
            KEditListWidget::leaveEvent(event);
        } else if (keditlistwidget_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            keditlistwidget_leaveevent_callback(this, cbval1);
        } else {
            KEditListWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (keditlistwidget_paintevent_isbase) {
            keditlistwidget_paintevent_isbase = false;
            KEditListWidget::paintEvent(event);
        } else if (keditlistwidget_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            keditlistwidget_paintevent_callback(this, cbval1);
        } else {
            KEditListWidget::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (keditlistwidget_moveevent_isbase) {
            keditlistwidget_moveevent_isbase = false;
            KEditListWidget::moveEvent(event);
        } else if (keditlistwidget_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            keditlistwidget_moveevent_callback(this, cbval1);
        } else {
            KEditListWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (keditlistwidget_resizeevent_isbase) {
            keditlistwidget_resizeevent_isbase = false;
            KEditListWidget::resizeEvent(event);
        } else if (keditlistwidget_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            keditlistwidget_resizeevent_callback(this, cbval1);
        } else {
            KEditListWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (keditlistwidget_closeevent_isbase) {
            keditlistwidget_closeevent_isbase = false;
            KEditListWidget::closeEvent(event);
        } else if (keditlistwidget_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            keditlistwidget_closeevent_callback(this, cbval1);
        } else {
            KEditListWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (keditlistwidget_contextmenuevent_isbase) {
            keditlistwidget_contextmenuevent_isbase = false;
            KEditListWidget::contextMenuEvent(event);
        } else if (keditlistwidget_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            keditlistwidget_contextmenuevent_callback(this, cbval1);
        } else {
            KEditListWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (keditlistwidget_tabletevent_isbase) {
            keditlistwidget_tabletevent_isbase = false;
            KEditListWidget::tabletEvent(event);
        } else if (keditlistwidget_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            keditlistwidget_tabletevent_callback(this, cbval1);
        } else {
            KEditListWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (keditlistwidget_actionevent_isbase) {
            keditlistwidget_actionevent_isbase = false;
            KEditListWidget::actionEvent(event);
        } else if (keditlistwidget_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            keditlistwidget_actionevent_callback(this, cbval1);
        } else {
            KEditListWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (keditlistwidget_dragenterevent_isbase) {
            keditlistwidget_dragenterevent_isbase = false;
            KEditListWidget::dragEnterEvent(event);
        } else if (keditlistwidget_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            keditlistwidget_dragenterevent_callback(this, cbval1);
        } else {
            KEditListWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (keditlistwidget_dragmoveevent_isbase) {
            keditlistwidget_dragmoveevent_isbase = false;
            KEditListWidget::dragMoveEvent(event);
        } else if (keditlistwidget_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            keditlistwidget_dragmoveevent_callback(this, cbval1);
        } else {
            KEditListWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (keditlistwidget_dragleaveevent_isbase) {
            keditlistwidget_dragleaveevent_isbase = false;
            KEditListWidget::dragLeaveEvent(event);
        } else if (keditlistwidget_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            keditlistwidget_dragleaveevent_callback(this, cbval1);
        } else {
            KEditListWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (keditlistwidget_dropevent_isbase) {
            keditlistwidget_dropevent_isbase = false;
            KEditListWidget::dropEvent(event);
        } else if (keditlistwidget_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            keditlistwidget_dropevent_callback(this, cbval1);
        } else {
            KEditListWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (keditlistwidget_showevent_isbase) {
            keditlistwidget_showevent_isbase = false;
            KEditListWidget::showEvent(event);
        } else if (keditlistwidget_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            keditlistwidget_showevent_callback(this, cbval1);
        } else {
            KEditListWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (keditlistwidget_hideevent_isbase) {
            keditlistwidget_hideevent_isbase = false;
            KEditListWidget::hideEvent(event);
        } else if (keditlistwidget_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            keditlistwidget_hideevent_callback(this, cbval1);
        } else {
            KEditListWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (keditlistwidget_nativeevent_isbase) {
            keditlistwidget_nativeevent_isbase = false;
            return KEditListWidget::nativeEvent(eventType, message, result);
        } else if (keditlistwidget_nativeevent_callback != nullptr) {
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

            bool callback_ret = keditlistwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KEditListWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (keditlistwidget_changeevent_isbase) {
            keditlistwidget_changeevent_isbase = false;
            KEditListWidget::changeEvent(param1);
        } else if (keditlistwidget_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            keditlistwidget_changeevent_callback(this, cbval1);
        } else {
            KEditListWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (keditlistwidget_metric_isbase) {
            keditlistwidget_metric_isbase = false;
            return KEditListWidget::metric(param1);
        } else if (keditlistwidget_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = keditlistwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KEditListWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (keditlistwidget_initpainter_isbase) {
            keditlistwidget_initpainter_isbase = false;
            KEditListWidget::initPainter(painter);
        } else if (keditlistwidget_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            keditlistwidget_initpainter_callback(this, cbval1);
        } else {
            KEditListWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (keditlistwidget_redirected_isbase) {
            keditlistwidget_redirected_isbase = false;
            return KEditListWidget::redirected(offset);
        } else if (keditlistwidget_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = keditlistwidget_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KEditListWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (keditlistwidget_sharedpainter_isbase) {
            keditlistwidget_sharedpainter_isbase = false;
            return KEditListWidget::sharedPainter();
        } else if (keditlistwidget_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = keditlistwidget_sharedpainter_callback();
            return callback_ret;
        } else {
            return KEditListWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (keditlistwidget_inputmethodevent_isbase) {
            keditlistwidget_inputmethodevent_isbase = false;
            KEditListWidget::inputMethodEvent(param1);
        } else if (keditlistwidget_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            keditlistwidget_inputmethodevent_callback(this, cbval1);
        } else {
            KEditListWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (keditlistwidget_inputmethodquery_isbase) {
            keditlistwidget_inputmethodquery_isbase = false;
            return KEditListWidget::inputMethodQuery(param1);
        } else if (keditlistwidget_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = keditlistwidget_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KEditListWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (keditlistwidget_focusnextprevchild_isbase) {
            keditlistwidget_focusnextprevchild_isbase = false;
            return KEditListWidget::focusNextPrevChild(next);
        } else if (keditlistwidget_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = keditlistwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KEditListWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (keditlistwidget_timerevent_isbase) {
            keditlistwidget_timerevent_isbase = false;
            KEditListWidget::timerEvent(event);
        } else if (keditlistwidget_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            keditlistwidget_timerevent_callback(this, cbval1);
        } else {
            KEditListWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (keditlistwidget_childevent_isbase) {
            keditlistwidget_childevent_isbase = false;
            KEditListWidget::childEvent(event);
        } else if (keditlistwidget_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            keditlistwidget_childevent_callback(this, cbval1);
        } else {
            KEditListWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (keditlistwidget_customevent_isbase) {
            keditlistwidget_customevent_isbase = false;
            KEditListWidget::customEvent(event);
        } else if (keditlistwidget_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            keditlistwidget_customevent_callback(this, cbval1);
        } else {
            KEditListWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (keditlistwidget_connectnotify_isbase) {
            keditlistwidget_connectnotify_isbase = false;
            KEditListWidget::connectNotify(signal);
        } else if (keditlistwidget_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            keditlistwidget_connectnotify_callback(this, cbval1);
        } else {
            KEditListWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (keditlistwidget_disconnectnotify_isbase) {
            keditlistwidget_disconnectnotify_isbase = false;
            KEditListWidget::disconnectNotify(signal);
        } else if (keditlistwidget_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            keditlistwidget_disconnectnotify_callback(this, cbval1);
        } else {
            KEditListWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (keditlistwidget_updatemicrofocus_isbase) {
            keditlistwidget_updatemicrofocus_isbase = false;
            KEditListWidget::updateMicroFocus();
        } else if (keditlistwidget_updatemicrofocus_callback != nullptr) {
            keditlistwidget_updatemicrofocus_callback();
        } else {
            KEditListWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (keditlistwidget_create_isbase) {
            keditlistwidget_create_isbase = false;
            KEditListWidget::create();
        } else if (keditlistwidget_create_callback != nullptr) {
            keditlistwidget_create_callback();
        } else {
            KEditListWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (keditlistwidget_destroy_isbase) {
            keditlistwidget_destroy_isbase = false;
            KEditListWidget::destroy();
        } else if (keditlistwidget_destroy_callback != nullptr) {
            keditlistwidget_destroy_callback();
        } else {
            KEditListWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (keditlistwidget_focusnextchild_isbase) {
            keditlistwidget_focusnextchild_isbase = false;
            return KEditListWidget::focusNextChild();
        } else if (keditlistwidget_focusnextchild_callback != nullptr) {
            bool callback_ret = keditlistwidget_focusnextchild_callback();
            return callback_ret;
        } else {
            return KEditListWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (keditlistwidget_focuspreviouschild_isbase) {
            keditlistwidget_focuspreviouschild_isbase = false;
            return KEditListWidget::focusPreviousChild();
        } else if (keditlistwidget_focuspreviouschild_callback != nullptr) {
            bool callback_ret = keditlistwidget_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KEditListWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (keditlistwidget_sender_isbase) {
            keditlistwidget_sender_isbase = false;
            return KEditListWidget::sender();
        } else if (keditlistwidget_sender_callback != nullptr) {
            QObject* callback_ret = keditlistwidget_sender_callback();
            return callback_ret;
        } else {
            return KEditListWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (keditlistwidget_sendersignalindex_isbase) {
            keditlistwidget_sendersignalindex_isbase = false;
            return KEditListWidget::senderSignalIndex();
        } else if (keditlistwidget_sendersignalindex_callback != nullptr) {
            int callback_ret = keditlistwidget_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KEditListWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (keditlistwidget_receivers_isbase) {
            keditlistwidget_receivers_isbase = false;
            return KEditListWidget::receivers(signal);
        } else if (keditlistwidget_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = keditlistwidget_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KEditListWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (keditlistwidget_issignalconnected_isbase) {
            keditlistwidget_issignalconnected_isbase = false;
            return KEditListWidget::isSignalConnected(signal);
        } else if (keditlistwidget_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = keditlistwidget_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KEditListWidget::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (keditlistwidget_getdecodedmetricf_isbase) {
            keditlistwidget_getdecodedmetricf_isbase = false;
            return KEditListWidget::getDecodedMetricF(metricA, metricB);
        } else if (keditlistwidget_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = keditlistwidget_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KEditListWidget::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KEditListWidget_Event(KEditListWidget* self, QEvent* event);
    friend bool KEditListWidget_QBaseEvent(KEditListWidget* self, QEvent* event);
    friend void KEditListWidget_MousePressEvent(KEditListWidget* self, QMouseEvent* event);
    friend void KEditListWidget_QBaseMousePressEvent(KEditListWidget* self, QMouseEvent* event);
    friend void KEditListWidget_MouseReleaseEvent(KEditListWidget* self, QMouseEvent* event);
    friend void KEditListWidget_QBaseMouseReleaseEvent(KEditListWidget* self, QMouseEvent* event);
    friend void KEditListWidget_MouseDoubleClickEvent(KEditListWidget* self, QMouseEvent* event);
    friend void KEditListWidget_QBaseMouseDoubleClickEvent(KEditListWidget* self, QMouseEvent* event);
    friend void KEditListWidget_MouseMoveEvent(KEditListWidget* self, QMouseEvent* event);
    friend void KEditListWidget_QBaseMouseMoveEvent(KEditListWidget* self, QMouseEvent* event);
    friend void KEditListWidget_WheelEvent(KEditListWidget* self, QWheelEvent* event);
    friend void KEditListWidget_QBaseWheelEvent(KEditListWidget* self, QWheelEvent* event);
    friend void KEditListWidget_KeyPressEvent(KEditListWidget* self, QKeyEvent* event);
    friend void KEditListWidget_QBaseKeyPressEvent(KEditListWidget* self, QKeyEvent* event);
    friend void KEditListWidget_KeyReleaseEvent(KEditListWidget* self, QKeyEvent* event);
    friend void KEditListWidget_QBaseKeyReleaseEvent(KEditListWidget* self, QKeyEvent* event);
    friend void KEditListWidget_FocusInEvent(KEditListWidget* self, QFocusEvent* event);
    friend void KEditListWidget_QBaseFocusInEvent(KEditListWidget* self, QFocusEvent* event);
    friend void KEditListWidget_FocusOutEvent(KEditListWidget* self, QFocusEvent* event);
    friend void KEditListWidget_QBaseFocusOutEvent(KEditListWidget* self, QFocusEvent* event);
    friend void KEditListWidget_EnterEvent(KEditListWidget* self, QEnterEvent* event);
    friend void KEditListWidget_QBaseEnterEvent(KEditListWidget* self, QEnterEvent* event);
    friend void KEditListWidget_LeaveEvent(KEditListWidget* self, QEvent* event);
    friend void KEditListWidget_QBaseLeaveEvent(KEditListWidget* self, QEvent* event);
    friend void KEditListWidget_PaintEvent(KEditListWidget* self, QPaintEvent* event);
    friend void KEditListWidget_QBasePaintEvent(KEditListWidget* self, QPaintEvent* event);
    friend void KEditListWidget_MoveEvent(KEditListWidget* self, QMoveEvent* event);
    friend void KEditListWidget_QBaseMoveEvent(KEditListWidget* self, QMoveEvent* event);
    friend void KEditListWidget_ResizeEvent(KEditListWidget* self, QResizeEvent* event);
    friend void KEditListWidget_QBaseResizeEvent(KEditListWidget* self, QResizeEvent* event);
    friend void KEditListWidget_CloseEvent(KEditListWidget* self, QCloseEvent* event);
    friend void KEditListWidget_QBaseCloseEvent(KEditListWidget* self, QCloseEvent* event);
    friend void KEditListWidget_ContextMenuEvent(KEditListWidget* self, QContextMenuEvent* event);
    friend void KEditListWidget_QBaseContextMenuEvent(KEditListWidget* self, QContextMenuEvent* event);
    friend void KEditListWidget_TabletEvent(KEditListWidget* self, QTabletEvent* event);
    friend void KEditListWidget_QBaseTabletEvent(KEditListWidget* self, QTabletEvent* event);
    friend void KEditListWidget_ActionEvent(KEditListWidget* self, QActionEvent* event);
    friend void KEditListWidget_QBaseActionEvent(KEditListWidget* self, QActionEvent* event);
    friend void KEditListWidget_DragEnterEvent(KEditListWidget* self, QDragEnterEvent* event);
    friend void KEditListWidget_QBaseDragEnterEvent(KEditListWidget* self, QDragEnterEvent* event);
    friend void KEditListWidget_DragMoveEvent(KEditListWidget* self, QDragMoveEvent* event);
    friend void KEditListWidget_QBaseDragMoveEvent(KEditListWidget* self, QDragMoveEvent* event);
    friend void KEditListWidget_DragLeaveEvent(KEditListWidget* self, QDragLeaveEvent* event);
    friend void KEditListWidget_QBaseDragLeaveEvent(KEditListWidget* self, QDragLeaveEvent* event);
    friend void KEditListWidget_DropEvent(KEditListWidget* self, QDropEvent* event);
    friend void KEditListWidget_QBaseDropEvent(KEditListWidget* self, QDropEvent* event);
    friend void KEditListWidget_ShowEvent(KEditListWidget* self, QShowEvent* event);
    friend void KEditListWidget_QBaseShowEvent(KEditListWidget* self, QShowEvent* event);
    friend void KEditListWidget_HideEvent(KEditListWidget* self, QHideEvent* event);
    friend void KEditListWidget_QBaseHideEvent(KEditListWidget* self, QHideEvent* event);
    friend bool KEditListWidget_NativeEvent(KEditListWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KEditListWidget_QBaseNativeEvent(KEditListWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KEditListWidget_ChangeEvent(KEditListWidget* self, QEvent* param1);
    friend void KEditListWidget_QBaseChangeEvent(KEditListWidget* self, QEvent* param1);
    friend int KEditListWidget_Metric(const KEditListWidget* self, int param1);
    friend int KEditListWidget_QBaseMetric(const KEditListWidget* self, int param1);
    friend void KEditListWidget_InitPainter(const KEditListWidget* self, QPainter* painter);
    friend void KEditListWidget_QBaseInitPainter(const KEditListWidget* self, QPainter* painter);
    friend QPaintDevice* KEditListWidget_Redirected(const KEditListWidget* self, QPoint* offset);
    friend QPaintDevice* KEditListWidget_QBaseRedirected(const KEditListWidget* self, QPoint* offset);
    friend QPainter* KEditListWidget_SharedPainter(const KEditListWidget* self);
    friend QPainter* KEditListWidget_QBaseSharedPainter(const KEditListWidget* self);
    friend void KEditListWidget_InputMethodEvent(KEditListWidget* self, QInputMethodEvent* param1);
    friend void KEditListWidget_QBaseInputMethodEvent(KEditListWidget* self, QInputMethodEvent* param1);
    friend bool KEditListWidget_FocusNextPrevChild(KEditListWidget* self, bool next);
    friend bool KEditListWidget_QBaseFocusNextPrevChild(KEditListWidget* self, bool next);
    friend void KEditListWidget_TimerEvent(KEditListWidget* self, QTimerEvent* event);
    friend void KEditListWidget_QBaseTimerEvent(KEditListWidget* self, QTimerEvent* event);
    friend void KEditListWidget_ChildEvent(KEditListWidget* self, QChildEvent* event);
    friend void KEditListWidget_QBaseChildEvent(KEditListWidget* self, QChildEvent* event);
    friend void KEditListWidget_CustomEvent(KEditListWidget* self, QEvent* event);
    friend void KEditListWidget_QBaseCustomEvent(KEditListWidget* self, QEvent* event);
    friend void KEditListWidget_ConnectNotify(KEditListWidget* self, const QMetaMethod* signal);
    friend void KEditListWidget_QBaseConnectNotify(KEditListWidget* self, const QMetaMethod* signal);
    friend void KEditListWidget_DisconnectNotify(KEditListWidget* self, const QMetaMethod* signal);
    friend void KEditListWidget_QBaseDisconnectNotify(KEditListWidget* self, const QMetaMethod* signal);
    friend void KEditListWidget_UpdateMicroFocus(KEditListWidget* self);
    friend void KEditListWidget_QBaseUpdateMicroFocus(KEditListWidget* self);
    friend void KEditListWidget_Create(KEditListWidget* self);
    friend void KEditListWidget_QBaseCreate(KEditListWidget* self);
    friend void KEditListWidget_Destroy(KEditListWidget* self);
    friend void KEditListWidget_QBaseDestroy(KEditListWidget* self);
    friend bool KEditListWidget_FocusNextChild(KEditListWidget* self);
    friend bool KEditListWidget_QBaseFocusNextChild(KEditListWidget* self);
    friend bool KEditListWidget_FocusPreviousChild(KEditListWidget* self);
    friend bool KEditListWidget_QBaseFocusPreviousChild(KEditListWidget* self);
    friend QObject* KEditListWidget_Sender(const KEditListWidget* self);
    friend QObject* KEditListWidget_QBaseSender(const KEditListWidget* self);
    friend int KEditListWidget_SenderSignalIndex(const KEditListWidget* self);
    friend int KEditListWidget_QBaseSenderSignalIndex(const KEditListWidget* self);
    friend int KEditListWidget_Receivers(const KEditListWidget* self, const char* signal);
    friend int KEditListWidget_QBaseReceivers(const KEditListWidget* self, const char* signal);
    friend bool KEditListWidget_IsSignalConnected(const KEditListWidget* self, const QMetaMethod* signal);
    friend bool KEditListWidget_QBaseIsSignalConnected(const KEditListWidget* self, const QMetaMethod* signal);
    friend double KEditListWidget_GetDecodedMetricF(const KEditListWidget* self, int metricA, int metricB);
    friend double KEditListWidget_QBaseGetDecodedMetricF(const KEditListWidget* self, int metricA, int metricB);
};

// This class is a subclass of KEditListWidget::CustomEditor so that we can call protected methods
class VirtualKEditListWidgetCustomEditor final : public KEditListWidget::CustomEditor {

  public:
    // Virtual class boolean flag
    bool isVirtualKEditListWidgetCustomEditor = true;

    // Virtual class public types (including callbacks)
    using KEditListWidget__CustomEditor_RepresentationWidget_Callback = QWidget* (*)();
    using KEditListWidget__CustomEditor_LineEdit_Callback = QLineEdit* (*)();

  protected:
    // Instance callback storage
    KEditListWidget__CustomEditor_RepresentationWidget_Callback keditlistwidget__customeditor_representationwidget_callback = nullptr;
    KEditListWidget__CustomEditor_LineEdit_Callback keditlistwidget__customeditor_lineedit_callback = nullptr;

    // Instance base flags
    mutable bool keditlistwidget__customeditor_representationwidget_isbase = false;
    mutable bool keditlistwidget__customeditor_lineedit_isbase = false;

  public:
    VirtualKEditListWidgetCustomEditor() : KEditListWidget::CustomEditor() {};
    VirtualKEditListWidgetCustomEditor(QWidget* repWidget, QLineEdit* edit) : KEditListWidget::CustomEditor(repWidget, edit) {};
    VirtualKEditListWidgetCustomEditor(QComboBox* combo) : KEditListWidget::CustomEditor(combo) {};

    ~VirtualKEditListWidgetCustomEditor() {
        keditlistwidget__customeditor_representationwidget_callback = nullptr;
        keditlistwidget__customeditor_lineedit_callback = nullptr;
    }

    // Callback setters
    inline void setKEditListWidget__CustomEditor_RepresentationWidget_Callback(KEditListWidget__CustomEditor_RepresentationWidget_Callback cb) { keditlistwidget__customeditor_representationwidget_callback = cb; }
    inline void setKEditListWidget__CustomEditor_LineEdit_Callback(KEditListWidget__CustomEditor_LineEdit_Callback cb) { keditlistwidget__customeditor_lineedit_callback = cb; }

    // Base flag setters
    inline void setKEditListWidget__CustomEditor_RepresentationWidget_IsBase(bool value) const { keditlistwidget__customeditor_representationwidget_isbase = value; }
    inline void setKEditListWidget__CustomEditor_LineEdit_IsBase(bool value) const { keditlistwidget__customeditor_lineedit_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* representationWidget() const override {
        if (keditlistwidget__customeditor_representationwidget_isbase) {
            keditlistwidget__customeditor_representationwidget_isbase = false;
            return KEditListWidget__CustomEditor::representationWidget();
        } else if (keditlistwidget__customeditor_representationwidget_callback != nullptr) {
            QWidget* callback_ret = keditlistwidget__customeditor_representationwidget_callback();
            return callback_ret;
        } else {
            return KEditListWidget__CustomEditor::representationWidget();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLineEdit* lineEdit() const override {
        if (keditlistwidget__customeditor_lineedit_isbase) {
            keditlistwidget__customeditor_lineedit_isbase = false;
            return KEditListWidget__CustomEditor::lineEdit();
        } else if (keditlistwidget__customeditor_lineedit_callback != nullptr) {
            QLineEdit* callback_ret = keditlistwidget__customeditor_lineedit_callback();
            return callback_ret;
        } else {
            return KEditListWidget__CustomEditor::lineEdit();
        }
    }
};

#endif
