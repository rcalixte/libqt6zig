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
    using KEditListWidget_MetaObject_Callback = QMetaObject* (*)();
    using KEditListWidget_Metacast_Callback = void* (*)(KEditListWidget*, const char*);
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
    KEditListWidget_MetaObject_Callback keditlistwidget_metaobject_callback = nullptr;
    KEditListWidget_Metacast_Callback keditlistwidget_metacast_callback = nullptr;
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
    mutable bool keditlistwidget_metaobject_isbase = false;
    mutable bool keditlistwidget_metacast_isbase = false;
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

    // Callback setters
    inline void setKEditListWidget_MetaObject_Callback(KEditListWidget_MetaObject_Callback cb) { keditlistwidget_metaobject_callback = cb; }
    inline void setKEditListWidget_Metacast_Callback(KEditListWidget_Metacast_Callback cb) { keditlistwidget_metacast_callback = cb; }
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
    inline void setKEditListWidget_MetaObject_IsBase(bool value) const { keditlistwidget_metaobject_isbase = value; }
    inline void setKEditListWidget_Metacast_IsBase(bool value) const { keditlistwidget_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (keditlistwidget_metaobject_isbase) {
            keditlistwidget_metaobject_isbase = false;
            return KEditListWidget::metaObject();
        }
        auto metaobject_cb = keditlistwidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KEditListWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (keditlistwidget_metacast_isbase) {
            keditlistwidget_metacast_isbase = false;
            return KEditListWidget::qt_metacast(param1);
        }
        auto metacast_cb = keditlistwidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KEditListWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (keditlistwidget_metacall_isbase) {
            keditlistwidget_metacall_isbase = false;
            return KEditListWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = keditlistwidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KEditListWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* o, QEvent* e) override {
        if (keditlistwidget_eventfilter_isbase) {
            keditlistwidget_eventfilter_isbase = false;
            return KEditListWidget::eventFilter(o, e);
        }
        auto eventfilter_cb = keditlistwidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = o;
            QEvent* cbval2 = e;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KEditListWidget::eventFilter(o, e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (keditlistwidget_devtype_isbase) {
            keditlistwidget_devtype_isbase = false;
            return KEditListWidget::devType();
        }
        auto devtype_cb = keditlistwidget_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KEditListWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (keditlistwidget_setvisible_isbase) {
            keditlistwidget_setvisible_isbase = false;
            KEditListWidget::setVisible(visible);
            return;
        }
        auto setvisible_cb = keditlistwidget_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KEditListWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (keditlistwidget_sizehint_isbase) {
            keditlistwidget_sizehint_isbase = false;
            return KEditListWidget::sizeHint();
        }
        auto sizehint_cb = keditlistwidget_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KEditListWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (keditlistwidget_minimumsizehint_isbase) {
            keditlistwidget_minimumsizehint_isbase = false;
            return KEditListWidget::minimumSizeHint();
        }
        auto minimumsizehint_cb = keditlistwidget_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KEditListWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (keditlistwidget_heightforwidth_isbase) {
            keditlistwidget_heightforwidth_isbase = false;
            return KEditListWidget::heightForWidth(param1);
        }
        auto heightforwidth_cb = keditlistwidget_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KEditListWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (keditlistwidget_hasheightforwidth_isbase) {
            keditlistwidget_hasheightforwidth_isbase = false;
            return KEditListWidget::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = keditlistwidget_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KEditListWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (keditlistwidget_paintengine_isbase) {
            keditlistwidget_paintengine_isbase = false;
            return KEditListWidget::paintEngine();
        }
        auto paintengine_cb = keditlistwidget_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KEditListWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (keditlistwidget_event_isbase) {
            keditlistwidget_event_isbase = false;
            return KEditListWidget::event(event);
        }
        auto event_cb = keditlistwidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KEditListWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (keditlistwidget_mousepressevent_isbase) {
            keditlistwidget_mousepressevent_isbase = false;
            KEditListWidget::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = keditlistwidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (keditlistwidget_mousereleaseevent_isbase) {
            keditlistwidget_mousereleaseevent_isbase = false;
            KEditListWidget::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = keditlistwidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (keditlistwidget_mousedoubleclickevent_isbase) {
            keditlistwidget_mousedoubleclickevent_isbase = false;
            KEditListWidget::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = keditlistwidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (keditlistwidget_mousemoveevent_isbase) {
            keditlistwidget_mousemoveevent_isbase = false;
            KEditListWidget::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = keditlistwidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (keditlistwidget_wheelevent_isbase) {
            keditlistwidget_wheelevent_isbase = false;
            KEditListWidget::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = keditlistwidget_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (keditlistwidget_keypressevent_isbase) {
            keditlistwidget_keypressevent_isbase = false;
            KEditListWidget::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = keditlistwidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (keditlistwidget_keyreleaseevent_isbase) {
            keditlistwidget_keyreleaseevent_isbase = false;
            KEditListWidget::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = keditlistwidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (keditlistwidget_focusinevent_isbase) {
            keditlistwidget_focusinevent_isbase = false;
            KEditListWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = keditlistwidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (keditlistwidget_focusoutevent_isbase) {
            keditlistwidget_focusoutevent_isbase = false;
            KEditListWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = keditlistwidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (keditlistwidget_enterevent_isbase) {
            keditlistwidget_enterevent_isbase = false;
            KEditListWidget::enterEvent(event);
            return;
        }
        auto enterevent_cb = keditlistwidget_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (keditlistwidget_leaveevent_isbase) {
            keditlistwidget_leaveevent_isbase = false;
            KEditListWidget::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = keditlistwidget_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (keditlistwidget_paintevent_isbase) {
            keditlistwidget_paintevent_isbase = false;
            KEditListWidget::paintEvent(event);
            return;
        }
        auto paintevent_cb = keditlistwidget_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (keditlistwidget_moveevent_isbase) {
            keditlistwidget_moveevent_isbase = false;
            KEditListWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = keditlistwidget_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (keditlistwidget_resizeevent_isbase) {
            keditlistwidget_resizeevent_isbase = false;
            KEditListWidget::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = keditlistwidget_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (keditlistwidget_closeevent_isbase) {
            keditlistwidget_closeevent_isbase = false;
            KEditListWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = keditlistwidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (keditlistwidget_contextmenuevent_isbase) {
            keditlistwidget_contextmenuevent_isbase = false;
            KEditListWidget::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = keditlistwidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (keditlistwidget_tabletevent_isbase) {
            keditlistwidget_tabletevent_isbase = false;
            KEditListWidget::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = keditlistwidget_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (keditlistwidget_actionevent_isbase) {
            keditlistwidget_actionevent_isbase = false;
            KEditListWidget::actionEvent(event);
            return;
        }
        auto actionevent_cb = keditlistwidget_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (keditlistwidget_dragenterevent_isbase) {
            keditlistwidget_dragenterevent_isbase = false;
            KEditListWidget::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = keditlistwidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (keditlistwidget_dragmoveevent_isbase) {
            keditlistwidget_dragmoveevent_isbase = false;
            KEditListWidget::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = keditlistwidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (keditlistwidget_dragleaveevent_isbase) {
            keditlistwidget_dragleaveevent_isbase = false;
            KEditListWidget::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = keditlistwidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (keditlistwidget_dropevent_isbase) {
            keditlistwidget_dropevent_isbase = false;
            KEditListWidget::dropEvent(event);
            return;
        }
        auto dropevent_cb = keditlistwidget_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (keditlistwidget_showevent_isbase) {
            keditlistwidget_showevent_isbase = false;
            KEditListWidget::showEvent(event);
            return;
        }
        auto showevent_cb = keditlistwidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (keditlistwidget_hideevent_isbase) {
            keditlistwidget_hideevent_isbase = false;
            KEditListWidget::hideEvent(event);
            return;
        }
        auto hideevent_cb = keditlistwidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (keditlistwidget_nativeevent_isbase) {
            keditlistwidget_nativeevent_isbase = false;
            return KEditListWidget::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = keditlistwidget_nativeevent_callback;
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
        return KEditListWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (keditlistwidget_changeevent_isbase) {
            keditlistwidget_changeevent_isbase = false;
            KEditListWidget::changeEvent(param1);
            return;
        }
        auto changeevent_cb = keditlistwidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (keditlistwidget_metric_isbase) {
            keditlistwidget_metric_isbase = false;
            return KEditListWidget::metric(param1);
        }
        auto metric_cb = keditlistwidget_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KEditListWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (keditlistwidget_initpainter_isbase) {
            keditlistwidget_initpainter_isbase = false;
            KEditListWidget::initPainter(painter);
            return;
        }
        auto initpainter_cb = keditlistwidget_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KEditListWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (keditlistwidget_redirected_isbase) {
            keditlistwidget_redirected_isbase = false;
            return KEditListWidget::redirected(offset);
        }
        auto redirected_cb = keditlistwidget_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KEditListWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (keditlistwidget_sharedpainter_isbase) {
            keditlistwidget_sharedpainter_isbase = false;
            return KEditListWidget::sharedPainter();
        }
        auto sharedpainter_cb = keditlistwidget_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KEditListWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (keditlistwidget_inputmethodevent_isbase) {
            keditlistwidget_inputmethodevent_isbase = false;
            KEditListWidget::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = keditlistwidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (keditlistwidget_inputmethodquery_isbase) {
            keditlistwidget_inputmethodquery_isbase = false;
            return KEditListWidget::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = keditlistwidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KEditListWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (keditlistwidget_focusnextprevchild_isbase) {
            keditlistwidget_focusnextprevchild_isbase = false;
            return KEditListWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = keditlistwidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KEditListWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (keditlistwidget_timerevent_isbase) {
            keditlistwidget_timerevent_isbase = false;
            KEditListWidget::timerEvent(event);
            return;
        }
        auto timerevent_cb = keditlistwidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (keditlistwidget_childevent_isbase) {
            keditlistwidget_childevent_isbase = false;
            KEditListWidget::childEvent(event);
            return;
        }
        auto childevent_cb = keditlistwidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (keditlistwidget_customevent_isbase) {
            keditlistwidget_customevent_isbase = false;
            KEditListWidget::customEvent(event);
            return;
        }
        auto customevent_cb = keditlistwidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KEditListWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (keditlistwidget_connectnotify_isbase) {
            keditlistwidget_connectnotify_isbase = false;
            KEditListWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = keditlistwidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KEditListWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (keditlistwidget_disconnectnotify_isbase) {
            keditlistwidget_disconnectnotify_isbase = false;
            KEditListWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = keditlistwidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KEditListWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (keditlistwidget_updatemicrofocus_isbase) {
            keditlistwidget_updatemicrofocus_isbase = false;
            KEditListWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = keditlistwidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KEditListWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (keditlistwidget_create_isbase) {
            keditlistwidget_create_isbase = false;
            KEditListWidget::create();
            return;
        }
        auto create_cb = keditlistwidget_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KEditListWidget::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (keditlistwidget_destroy_isbase) {
            keditlistwidget_destroy_isbase = false;
            KEditListWidget::destroy();
            return;
        }
        auto destroy_cb = keditlistwidget_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KEditListWidget::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (keditlistwidget_focusnextchild_isbase) {
            keditlistwidget_focusnextchild_isbase = false;
            return KEditListWidget::focusNextChild();
        }
        auto focusnextchild_cb = keditlistwidget_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KEditListWidget::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (keditlistwidget_focuspreviouschild_isbase) {
            keditlistwidget_focuspreviouschild_isbase = false;
            return KEditListWidget::focusPreviousChild();
        }
        auto focuspreviouschild_cb = keditlistwidget_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KEditListWidget::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (keditlistwidget_sender_isbase) {
            keditlistwidget_sender_isbase = false;
            return KEditListWidget::sender();
        }
        auto sender_cb = keditlistwidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KEditListWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (keditlistwidget_sendersignalindex_isbase) {
            keditlistwidget_sendersignalindex_isbase = false;
            return KEditListWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = keditlistwidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KEditListWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (keditlistwidget_receivers_isbase) {
            keditlistwidget_receivers_isbase = false;
            return KEditListWidget::receivers(signal);
        }
        auto receivers_cb = keditlistwidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KEditListWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (keditlistwidget_issignalconnected_isbase) {
            keditlistwidget_issignalconnected_isbase = false;
            return KEditListWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = keditlistwidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KEditListWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (keditlistwidget_getdecodedmetricf_isbase) {
            keditlistwidget_getdecodedmetricf_isbase = false;
            return KEditListWidget::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = keditlistwidget_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KEditListWidget::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool KEditListWidget_Event(KEditListWidget* self, QEvent* event);
    friend bool KEditListWidget_SuperEvent(KEditListWidget* self, QEvent* event);
    friend void KEditListWidget_MousePressEvent(KEditListWidget* self, QMouseEvent* event);
    friend void KEditListWidget_SuperMousePressEvent(KEditListWidget* self, QMouseEvent* event);
    friend void KEditListWidget_MouseReleaseEvent(KEditListWidget* self, QMouseEvent* event);
    friend void KEditListWidget_SuperMouseReleaseEvent(KEditListWidget* self, QMouseEvent* event);
    friend void KEditListWidget_MouseDoubleClickEvent(KEditListWidget* self, QMouseEvent* event);
    friend void KEditListWidget_SuperMouseDoubleClickEvent(KEditListWidget* self, QMouseEvent* event);
    friend void KEditListWidget_MouseMoveEvent(KEditListWidget* self, QMouseEvent* event);
    friend void KEditListWidget_SuperMouseMoveEvent(KEditListWidget* self, QMouseEvent* event);
    friend void KEditListWidget_WheelEvent(KEditListWidget* self, QWheelEvent* event);
    friend void KEditListWidget_SuperWheelEvent(KEditListWidget* self, QWheelEvent* event);
    friend void KEditListWidget_KeyPressEvent(KEditListWidget* self, QKeyEvent* event);
    friend void KEditListWidget_SuperKeyPressEvent(KEditListWidget* self, QKeyEvent* event);
    friend void KEditListWidget_KeyReleaseEvent(KEditListWidget* self, QKeyEvent* event);
    friend void KEditListWidget_SuperKeyReleaseEvent(KEditListWidget* self, QKeyEvent* event);
    friend void KEditListWidget_FocusInEvent(KEditListWidget* self, QFocusEvent* event);
    friend void KEditListWidget_SuperFocusInEvent(KEditListWidget* self, QFocusEvent* event);
    friend void KEditListWidget_FocusOutEvent(KEditListWidget* self, QFocusEvent* event);
    friend void KEditListWidget_SuperFocusOutEvent(KEditListWidget* self, QFocusEvent* event);
    friend void KEditListWidget_EnterEvent(KEditListWidget* self, QEnterEvent* event);
    friend void KEditListWidget_SuperEnterEvent(KEditListWidget* self, QEnterEvent* event);
    friend void KEditListWidget_LeaveEvent(KEditListWidget* self, QEvent* event);
    friend void KEditListWidget_SuperLeaveEvent(KEditListWidget* self, QEvent* event);
    friend void KEditListWidget_PaintEvent(KEditListWidget* self, QPaintEvent* event);
    friend void KEditListWidget_SuperPaintEvent(KEditListWidget* self, QPaintEvent* event);
    friend void KEditListWidget_MoveEvent(KEditListWidget* self, QMoveEvent* event);
    friend void KEditListWidget_SuperMoveEvent(KEditListWidget* self, QMoveEvent* event);
    friend void KEditListWidget_ResizeEvent(KEditListWidget* self, QResizeEvent* event);
    friend void KEditListWidget_SuperResizeEvent(KEditListWidget* self, QResizeEvent* event);
    friend void KEditListWidget_CloseEvent(KEditListWidget* self, QCloseEvent* event);
    friend void KEditListWidget_SuperCloseEvent(KEditListWidget* self, QCloseEvent* event);
    friend void KEditListWidget_ContextMenuEvent(KEditListWidget* self, QContextMenuEvent* event);
    friend void KEditListWidget_SuperContextMenuEvent(KEditListWidget* self, QContextMenuEvent* event);
    friend void KEditListWidget_TabletEvent(KEditListWidget* self, QTabletEvent* event);
    friend void KEditListWidget_SuperTabletEvent(KEditListWidget* self, QTabletEvent* event);
    friend void KEditListWidget_ActionEvent(KEditListWidget* self, QActionEvent* event);
    friend void KEditListWidget_SuperActionEvent(KEditListWidget* self, QActionEvent* event);
    friend void KEditListWidget_DragEnterEvent(KEditListWidget* self, QDragEnterEvent* event);
    friend void KEditListWidget_SuperDragEnterEvent(KEditListWidget* self, QDragEnterEvent* event);
    friend void KEditListWidget_DragMoveEvent(KEditListWidget* self, QDragMoveEvent* event);
    friend void KEditListWidget_SuperDragMoveEvent(KEditListWidget* self, QDragMoveEvent* event);
    friend void KEditListWidget_DragLeaveEvent(KEditListWidget* self, QDragLeaveEvent* event);
    friend void KEditListWidget_SuperDragLeaveEvent(KEditListWidget* self, QDragLeaveEvent* event);
    friend void KEditListWidget_DropEvent(KEditListWidget* self, QDropEvent* event);
    friend void KEditListWidget_SuperDropEvent(KEditListWidget* self, QDropEvent* event);
    friend void KEditListWidget_ShowEvent(KEditListWidget* self, QShowEvent* event);
    friend void KEditListWidget_SuperShowEvent(KEditListWidget* self, QShowEvent* event);
    friend void KEditListWidget_HideEvent(KEditListWidget* self, QHideEvent* event);
    friend void KEditListWidget_SuperHideEvent(KEditListWidget* self, QHideEvent* event);
    friend bool KEditListWidget_NativeEvent(KEditListWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KEditListWidget_SuperNativeEvent(KEditListWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KEditListWidget_ChangeEvent(KEditListWidget* self, QEvent* param1);
    friend void KEditListWidget_SuperChangeEvent(KEditListWidget* self, QEvent* param1);
    friend int KEditListWidget_Metric(const KEditListWidget* self, int param1);
    friend int KEditListWidget_SuperMetric(const KEditListWidget* self, int param1);
    friend void KEditListWidget_InitPainter(const KEditListWidget* self, QPainter* painter);
    friend void KEditListWidget_SuperInitPainter(const KEditListWidget* self, QPainter* painter);
    friend QPaintDevice* KEditListWidget_Redirected(const KEditListWidget* self, QPoint* offset);
    friend QPaintDevice* KEditListWidget_SuperRedirected(const KEditListWidget* self, QPoint* offset);
    friend QPainter* KEditListWidget_SharedPainter(const KEditListWidget* self);
    friend QPainter* KEditListWidget_SuperSharedPainter(const KEditListWidget* self);
    friend void KEditListWidget_InputMethodEvent(KEditListWidget* self, QInputMethodEvent* param1);
    friend void KEditListWidget_SuperInputMethodEvent(KEditListWidget* self, QInputMethodEvent* param1);
    friend bool KEditListWidget_FocusNextPrevChild(KEditListWidget* self, bool next);
    friend bool KEditListWidget_SuperFocusNextPrevChild(KEditListWidget* self, bool next);
    friend void KEditListWidget_TimerEvent(KEditListWidget* self, QTimerEvent* event);
    friend void KEditListWidget_SuperTimerEvent(KEditListWidget* self, QTimerEvent* event);
    friend void KEditListWidget_ChildEvent(KEditListWidget* self, QChildEvent* event);
    friend void KEditListWidget_SuperChildEvent(KEditListWidget* self, QChildEvent* event);
    friend void KEditListWidget_CustomEvent(KEditListWidget* self, QEvent* event);
    friend void KEditListWidget_SuperCustomEvent(KEditListWidget* self, QEvent* event);
    friend void KEditListWidget_ConnectNotify(KEditListWidget* self, const QMetaMethod* signal);
    friend void KEditListWidget_SuperConnectNotify(KEditListWidget* self, const QMetaMethod* signal);
    friend void KEditListWidget_DisconnectNotify(KEditListWidget* self, const QMetaMethod* signal);
    friend void KEditListWidget_SuperDisconnectNotify(KEditListWidget* self, const QMetaMethod* signal);
    friend void KEditListWidget_UpdateMicroFocus(KEditListWidget* self);
    friend void KEditListWidget_SuperUpdateMicroFocus(KEditListWidget* self);
    friend void KEditListWidget_Create(KEditListWidget* self);
    friend void KEditListWidget_SuperCreate(KEditListWidget* self);
    friend void KEditListWidget_Destroy(KEditListWidget* self);
    friend void KEditListWidget_SuperDestroy(KEditListWidget* self);
    friend bool KEditListWidget_FocusNextChild(KEditListWidget* self);
    friend bool KEditListWidget_SuperFocusNextChild(KEditListWidget* self);
    friend bool KEditListWidget_FocusPreviousChild(KEditListWidget* self);
    friend bool KEditListWidget_SuperFocusPreviousChild(KEditListWidget* self);
    friend QObject* KEditListWidget_Sender(const KEditListWidget* self);
    friend QObject* KEditListWidget_SuperSender(const KEditListWidget* self);
    friend int KEditListWidget_SenderSignalIndex(const KEditListWidget* self);
    friend int KEditListWidget_SuperSenderSignalIndex(const KEditListWidget* self);
    friend int KEditListWidget_Receivers(const KEditListWidget* self, const char* signal);
    friend int KEditListWidget_SuperReceivers(const KEditListWidget* self, const char* signal);
    friend bool KEditListWidget_IsSignalConnected(const KEditListWidget* self, const QMetaMethod* signal);
    friend bool KEditListWidget_SuperIsSignalConnected(const KEditListWidget* self, const QMetaMethod* signal);
    friend double KEditListWidget_GetDecodedMetricF(const KEditListWidget* self, int metricA, int metricB);
    friend double KEditListWidget_SuperGetDecodedMetricF(const KEditListWidget* self, int metricA, int metricB);
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
        }
        auto representationwidget_cb = keditlistwidget__customeditor_representationwidget_callback;
        if (representationwidget_cb) {
            QWidget* callback_ret = representationwidget_cb();
            return callback_ret;
        }
        return KEditListWidget__CustomEditor::representationWidget();
    }

    // Virtual method for C ABI access and custom callback
    virtual QLineEdit* lineEdit() const override {
        if (keditlistwidget__customeditor_lineedit_isbase) {
            keditlistwidget__customeditor_lineedit_isbase = false;
            return KEditListWidget__CustomEditor::lineEdit();
        }
        auto lineedit_cb = keditlistwidget__customeditor_lineedit_callback;
        if (lineedit_cb) {
            QLineEdit* callback_ret = lineedit_cb();
            return callback_ret;
        }
        return KEditListWidget__CustomEditor::lineEdit();
    }
};

#endif
