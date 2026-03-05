#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTITLEWIDGET_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTITLEWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTitleWidget so that we can call protected methods
class VirtualKTitleWidget final : public KTitleWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualKTitleWidget = true;

    // Virtual class public types (including callbacks)
    using KTitleWidget_MetaObject_Callback = QMetaObject* (*)();
    using KTitleWidget_Metacast_Callback = void* (*)(KTitleWidget*, const char*);
    using KTitleWidget_Metacall_Callback = int (*)(KTitleWidget*, int, int, void**);
    using KTitleWidget_ChangeEvent_Callback = void (*)(KTitleWidget*, QEvent*);
    using KTitleWidget_ShowEvent_Callback = void (*)(KTitleWidget*, QShowEvent*);
    using KTitleWidget_EventFilter_Callback = bool (*)(KTitleWidget*, QObject*, QEvent*);
    using KTitleWidget_DevType_Callback = int (*)();
    using KTitleWidget_SetVisible_Callback = void (*)(KTitleWidget*, bool);
    using KTitleWidget_SizeHint_Callback = QSize* (*)();
    using KTitleWidget_MinimumSizeHint_Callback = QSize* (*)();
    using KTitleWidget_HeightForWidth_Callback = int (*)(const KTitleWidget*, int);
    using KTitleWidget_HasHeightForWidth_Callback = bool (*)();
    using KTitleWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using KTitleWidget_Event_Callback = bool (*)(KTitleWidget*, QEvent*);
    using KTitleWidget_MousePressEvent_Callback = void (*)(KTitleWidget*, QMouseEvent*);
    using KTitleWidget_MouseReleaseEvent_Callback = void (*)(KTitleWidget*, QMouseEvent*);
    using KTitleWidget_MouseDoubleClickEvent_Callback = void (*)(KTitleWidget*, QMouseEvent*);
    using KTitleWidget_MouseMoveEvent_Callback = void (*)(KTitleWidget*, QMouseEvent*);
    using KTitleWidget_WheelEvent_Callback = void (*)(KTitleWidget*, QWheelEvent*);
    using KTitleWidget_KeyPressEvent_Callback = void (*)(KTitleWidget*, QKeyEvent*);
    using KTitleWidget_KeyReleaseEvent_Callback = void (*)(KTitleWidget*, QKeyEvent*);
    using KTitleWidget_FocusInEvent_Callback = void (*)(KTitleWidget*, QFocusEvent*);
    using KTitleWidget_FocusOutEvent_Callback = void (*)(KTitleWidget*, QFocusEvent*);
    using KTitleWidget_EnterEvent_Callback = void (*)(KTitleWidget*, QEnterEvent*);
    using KTitleWidget_LeaveEvent_Callback = void (*)(KTitleWidget*, QEvent*);
    using KTitleWidget_PaintEvent_Callback = void (*)(KTitleWidget*, QPaintEvent*);
    using KTitleWidget_MoveEvent_Callback = void (*)(KTitleWidget*, QMoveEvent*);
    using KTitleWidget_ResizeEvent_Callback = void (*)(KTitleWidget*, QResizeEvent*);
    using KTitleWidget_CloseEvent_Callback = void (*)(KTitleWidget*, QCloseEvent*);
    using KTitleWidget_ContextMenuEvent_Callback = void (*)(KTitleWidget*, QContextMenuEvent*);
    using KTitleWidget_TabletEvent_Callback = void (*)(KTitleWidget*, QTabletEvent*);
    using KTitleWidget_ActionEvent_Callback = void (*)(KTitleWidget*, QActionEvent*);
    using KTitleWidget_DragEnterEvent_Callback = void (*)(KTitleWidget*, QDragEnterEvent*);
    using KTitleWidget_DragMoveEvent_Callback = void (*)(KTitleWidget*, QDragMoveEvent*);
    using KTitleWidget_DragLeaveEvent_Callback = void (*)(KTitleWidget*, QDragLeaveEvent*);
    using KTitleWidget_DropEvent_Callback = void (*)(KTitleWidget*, QDropEvent*);
    using KTitleWidget_HideEvent_Callback = void (*)(KTitleWidget*, QHideEvent*);
    using KTitleWidget_NativeEvent_Callback = bool (*)(KTitleWidget*, libqt_string, void*, intptr_t*);
    using KTitleWidget_Metric_Callback = int (*)(const KTitleWidget*, int);
    using KTitleWidget_InitPainter_Callback = void (*)(const KTitleWidget*, QPainter*);
    using KTitleWidget_Redirected_Callback = QPaintDevice* (*)(const KTitleWidget*, QPoint*);
    using KTitleWidget_SharedPainter_Callback = QPainter* (*)();
    using KTitleWidget_InputMethodEvent_Callback = void (*)(KTitleWidget*, QInputMethodEvent*);
    using KTitleWidget_InputMethodQuery_Callback = QVariant* (*)(const KTitleWidget*, int);
    using KTitleWidget_FocusNextPrevChild_Callback = bool (*)(KTitleWidget*, bool);
    using KTitleWidget_TimerEvent_Callback = void (*)(KTitleWidget*, QTimerEvent*);
    using KTitleWidget_ChildEvent_Callback = void (*)(KTitleWidget*, QChildEvent*);
    using KTitleWidget_CustomEvent_Callback = void (*)(KTitleWidget*, QEvent*);
    using KTitleWidget_ConnectNotify_Callback = void (*)(KTitleWidget*, QMetaMethod*);
    using KTitleWidget_DisconnectNotify_Callback = void (*)(KTitleWidget*, QMetaMethod*);
    using KTitleWidget_UpdateMicroFocus_Callback = void (*)();
    using KTitleWidget_Create_Callback = void (*)();
    using KTitleWidget_Destroy_Callback = void (*)();
    using KTitleWidget_FocusNextChild_Callback = bool (*)();
    using KTitleWidget_FocusPreviousChild_Callback = bool (*)();
    using KTitleWidget_Sender_Callback = QObject* (*)();
    using KTitleWidget_SenderSignalIndex_Callback = int (*)();
    using KTitleWidget_Receivers_Callback = int (*)(const KTitleWidget*, const char*);
    using KTitleWidget_IsSignalConnected_Callback = bool (*)(const KTitleWidget*, QMetaMethod*);
    using KTitleWidget_GetDecodedMetricF_Callback = double (*)(const KTitleWidget*, int, int);

  protected:
    // Instance callback storage
    KTitleWidget_MetaObject_Callback ktitlewidget_metaobject_callback = nullptr;
    KTitleWidget_Metacast_Callback ktitlewidget_metacast_callback = nullptr;
    KTitleWidget_Metacall_Callback ktitlewidget_metacall_callback = nullptr;
    KTitleWidget_ChangeEvent_Callback ktitlewidget_changeevent_callback = nullptr;
    KTitleWidget_ShowEvent_Callback ktitlewidget_showevent_callback = nullptr;
    KTitleWidget_EventFilter_Callback ktitlewidget_eventfilter_callback = nullptr;
    KTitleWidget_DevType_Callback ktitlewidget_devtype_callback = nullptr;
    KTitleWidget_SetVisible_Callback ktitlewidget_setvisible_callback = nullptr;
    KTitleWidget_SizeHint_Callback ktitlewidget_sizehint_callback = nullptr;
    KTitleWidget_MinimumSizeHint_Callback ktitlewidget_minimumsizehint_callback = nullptr;
    KTitleWidget_HeightForWidth_Callback ktitlewidget_heightforwidth_callback = nullptr;
    KTitleWidget_HasHeightForWidth_Callback ktitlewidget_hasheightforwidth_callback = nullptr;
    KTitleWidget_PaintEngine_Callback ktitlewidget_paintengine_callback = nullptr;
    KTitleWidget_Event_Callback ktitlewidget_event_callback = nullptr;
    KTitleWidget_MousePressEvent_Callback ktitlewidget_mousepressevent_callback = nullptr;
    KTitleWidget_MouseReleaseEvent_Callback ktitlewidget_mousereleaseevent_callback = nullptr;
    KTitleWidget_MouseDoubleClickEvent_Callback ktitlewidget_mousedoubleclickevent_callback = nullptr;
    KTitleWidget_MouseMoveEvent_Callback ktitlewidget_mousemoveevent_callback = nullptr;
    KTitleWidget_WheelEvent_Callback ktitlewidget_wheelevent_callback = nullptr;
    KTitleWidget_KeyPressEvent_Callback ktitlewidget_keypressevent_callback = nullptr;
    KTitleWidget_KeyReleaseEvent_Callback ktitlewidget_keyreleaseevent_callback = nullptr;
    KTitleWidget_FocusInEvent_Callback ktitlewidget_focusinevent_callback = nullptr;
    KTitleWidget_FocusOutEvent_Callback ktitlewidget_focusoutevent_callback = nullptr;
    KTitleWidget_EnterEvent_Callback ktitlewidget_enterevent_callback = nullptr;
    KTitleWidget_LeaveEvent_Callback ktitlewidget_leaveevent_callback = nullptr;
    KTitleWidget_PaintEvent_Callback ktitlewidget_paintevent_callback = nullptr;
    KTitleWidget_MoveEvent_Callback ktitlewidget_moveevent_callback = nullptr;
    KTitleWidget_ResizeEvent_Callback ktitlewidget_resizeevent_callback = nullptr;
    KTitleWidget_CloseEvent_Callback ktitlewidget_closeevent_callback = nullptr;
    KTitleWidget_ContextMenuEvent_Callback ktitlewidget_contextmenuevent_callback = nullptr;
    KTitleWidget_TabletEvent_Callback ktitlewidget_tabletevent_callback = nullptr;
    KTitleWidget_ActionEvent_Callback ktitlewidget_actionevent_callback = nullptr;
    KTitleWidget_DragEnterEvent_Callback ktitlewidget_dragenterevent_callback = nullptr;
    KTitleWidget_DragMoveEvent_Callback ktitlewidget_dragmoveevent_callback = nullptr;
    KTitleWidget_DragLeaveEvent_Callback ktitlewidget_dragleaveevent_callback = nullptr;
    KTitleWidget_DropEvent_Callback ktitlewidget_dropevent_callback = nullptr;
    KTitleWidget_HideEvent_Callback ktitlewidget_hideevent_callback = nullptr;
    KTitleWidget_NativeEvent_Callback ktitlewidget_nativeevent_callback = nullptr;
    KTitleWidget_Metric_Callback ktitlewidget_metric_callback = nullptr;
    KTitleWidget_InitPainter_Callback ktitlewidget_initpainter_callback = nullptr;
    KTitleWidget_Redirected_Callback ktitlewidget_redirected_callback = nullptr;
    KTitleWidget_SharedPainter_Callback ktitlewidget_sharedpainter_callback = nullptr;
    KTitleWidget_InputMethodEvent_Callback ktitlewidget_inputmethodevent_callback = nullptr;
    KTitleWidget_InputMethodQuery_Callback ktitlewidget_inputmethodquery_callback = nullptr;
    KTitleWidget_FocusNextPrevChild_Callback ktitlewidget_focusnextprevchild_callback = nullptr;
    KTitleWidget_TimerEvent_Callback ktitlewidget_timerevent_callback = nullptr;
    KTitleWidget_ChildEvent_Callback ktitlewidget_childevent_callback = nullptr;
    KTitleWidget_CustomEvent_Callback ktitlewidget_customevent_callback = nullptr;
    KTitleWidget_ConnectNotify_Callback ktitlewidget_connectnotify_callback = nullptr;
    KTitleWidget_DisconnectNotify_Callback ktitlewidget_disconnectnotify_callback = nullptr;
    KTitleWidget_UpdateMicroFocus_Callback ktitlewidget_updatemicrofocus_callback = nullptr;
    KTitleWidget_Create_Callback ktitlewidget_create_callback = nullptr;
    KTitleWidget_Destroy_Callback ktitlewidget_destroy_callback = nullptr;
    KTitleWidget_FocusNextChild_Callback ktitlewidget_focusnextchild_callback = nullptr;
    KTitleWidget_FocusPreviousChild_Callback ktitlewidget_focuspreviouschild_callback = nullptr;
    KTitleWidget_Sender_Callback ktitlewidget_sender_callback = nullptr;
    KTitleWidget_SenderSignalIndex_Callback ktitlewidget_sendersignalindex_callback = nullptr;
    KTitleWidget_Receivers_Callback ktitlewidget_receivers_callback = nullptr;
    KTitleWidget_IsSignalConnected_Callback ktitlewidget_issignalconnected_callback = nullptr;
    KTitleWidget_GetDecodedMetricF_Callback ktitlewidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool ktitlewidget_metaobject_isbase = false;
    mutable bool ktitlewidget_metacast_isbase = false;
    mutable bool ktitlewidget_metacall_isbase = false;
    mutable bool ktitlewidget_changeevent_isbase = false;
    mutable bool ktitlewidget_showevent_isbase = false;
    mutable bool ktitlewidget_eventfilter_isbase = false;
    mutable bool ktitlewidget_devtype_isbase = false;
    mutable bool ktitlewidget_setvisible_isbase = false;
    mutable bool ktitlewidget_sizehint_isbase = false;
    mutable bool ktitlewidget_minimumsizehint_isbase = false;
    mutable bool ktitlewidget_heightforwidth_isbase = false;
    mutable bool ktitlewidget_hasheightforwidth_isbase = false;
    mutable bool ktitlewidget_paintengine_isbase = false;
    mutable bool ktitlewidget_event_isbase = false;
    mutable bool ktitlewidget_mousepressevent_isbase = false;
    mutable bool ktitlewidget_mousereleaseevent_isbase = false;
    mutable bool ktitlewidget_mousedoubleclickevent_isbase = false;
    mutable bool ktitlewidget_mousemoveevent_isbase = false;
    mutable bool ktitlewidget_wheelevent_isbase = false;
    mutable bool ktitlewidget_keypressevent_isbase = false;
    mutable bool ktitlewidget_keyreleaseevent_isbase = false;
    mutable bool ktitlewidget_focusinevent_isbase = false;
    mutable bool ktitlewidget_focusoutevent_isbase = false;
    mutable bool ktitlewidget_enterevent_isbase = false;
    mutable bool ktitlewidget_leaveevent_isbase = false;
    mutable bool ktitlewidget_paintevent_isbase = false;
    mutable bool ktitlewidget_moveevent_isbase = false;
    mutable bool ktitlewidget_resizeevent_isbase = false;
    mutable bool ktitlewidget_closeevent_isbase = false;
    mutable bool ktitlewidget_contextmenuevent_isbase = false;
    mutable bool ktitlewidget_tabletevent_isbase = false;
    mutable bool ktitlewidget_actionevent_isbase = false;
    mutable bool ktitlewidget_dragenterevent_isbase = false;
    mutable bool ktitlewidget_dragmoveevent_isbase = false;
    mutable bool ktitlewidget_dragleaveevent_isbase = false;
    mutable bool ktitlewidget_dropevent_isbase = false;
    mutable bool ktitlewidget_hideevent_isbase = false;
    mutable bool ktitlewidget_nativeevent_isbase = false;
    mutable bool ktitlewidget_metric_isbase = false;
    mutable bool ktitlewidget_initpainter_isbase = false;
    mutable bool ktitlewidget_redirected_isbase = false;
    mutable bool ktitlewidget_sharedpainter_isbase = false;
    mutable bool ktitlewidget_inputmethodevent_isbase = false;
    mutable bool ktitlewidget_inputmethodquery_isbase = false;
    mutable bool ktitlewidget_focusnextprevchild_isbase = false;
    mutable bool ktitlewidget_timerevent_isbase = false;
    mutable bool ktitlewidget_childevent_isbase = false;
    mutable bool ktitlewidget_customevent_isbase = false;
    mutable bool ktitlewidget_connectnotify_isbase = false;
    mutable bool ktitlewidget_disconnectnotify_isbase = false;
    mutable bool ktitlewidget_updatemicrofocus_isbase = false;
    mutable bool ktitlewidget_create_isbase = false;
    mutable bool ktitlewidget_destroy_isbase = false;
    mutable bool ktitlewidget_focusnextchild_isbase = false;
    mutable bool ktitlewidget_focuspreviouschild_isbase = false;
    mutable bool ktitlewidget_sender_isbase = false;
    mutable bool ktitlewidget_sendersignalindex_isbase = false;
    mutable bool ktitlewidget_receivers_isbase = false;
    mutable bool ktitlewidget_issignalconnected_isbase = false;
    mutable bool ktitlewidget_getdecodedmetricf_isbase = false;

  public:
    VirtualKTitleWidget(QWidget* parent) : KTitleWidget(parent) {};
    VirtualKTitleWidget() : KTitleWidget() {};

    // Callback setters
    inline void setKTitleWidget_MetaObject_Callback(KTitleWidget_MetaObject_Callback cb) { ktitlewidget_metaobject_callback = cb; }
    inline void setKTitleWidget_Metacast_Callback(KTitleWidget_Metacast_Callback cb) { ktitlewidget_metacast_callback = cb; }
    inline void setKTitleWidget_Metacall_Callback(KTitleWidget_Metacall_Callback cb) { ktitlewidget_metacall_callback = cb; }
    inline void setKTitleWidget_ChangeEvent_Callback(KTitleWidget_ChangeEvent_Callback cb) { ktitlewidget_changeevent_callback = cb; }
    inline void setKTitleWidget_ShowEvent_Callback(KTitleWidget_ShowEvent_Callback cb) { ktitlewidget_showevent_callback = cb; }
    inline void setKTitleWidget_EventFilter_Callback(KTitleWidget_EventFilter_Callback cb) { ktitlewidget_eventfilter_callback = cb; }
    inline void setKTitleWidget_DevType_Callback(KTitleWidget_DevType_Callback cb) { ktitlewidget_devtype_callback = cb; }
    inline void setKTitleWidget_SetVisible_Callback(KTitleWidget_SetVisible_Callback cb) { ktitlewidget_setvisible_callback = cb; }
    inline void setKTitleWidget_SizeHint_Callback(KTitleWidget_SizeHint_Callback cb) { ktitlewidget_sizehint_callback = cb; }
    inline void setKTitleWidget_MinimumSizeHint_Callback(KTitleWidget_MinimumSizeHint_Callback cb) { ktitlewidget_minimumsizehint_callback = cb; }
    inline void setKTitleWidget_HeightForWidth_Callback(KTitleWidget_HeightForWidth_Callback cb) { ktitlewidget_heightforwidth_callback = cb; }
    inline void setKTitleWidget_HasHeightForWidth_Callback(KTitleWidget_HasHeightForWidth_Callback cb) { ktitlewidget_hasheightforwidth_callback = cb; }
    inline void setKTitleWidget_PaintEngine_Callback(KTitleWidget_PaintEngine_Callback cb) { ktitlewidget_paintengine_callback = cb; }
    inline void setKTitleWidget_Event_Callback(KTitleWidget_Event_Callback cb) { ktitlewidget_event_callback = cb; }
    inline void setKTitleWidget_MousePressEvent_Callback(KTitleWidget_MousePressEvent_Callback cb) { ktitlewidget_mousepressevent_callback = cb; }
    inline void setKTitleWidget_MouseReleaseEvent_Callback(KTitleWidget_MouseReleaseEvent_Callback cb) { ktitlewidget_mousereleaseevent_callback = cb; }
    inline void setKTitleWidget_MouseDoubleClickEvent_Callback(KTitleWidget_MouseDoubleClickEvent_Callback cb) { ktitlewidget_mousedoubleclickevent_callback = cb; }
    inline void setKTitleWidget_MouseMoveEvent_Callback(KTitleWidget_MouseMoveEvent_Callback cb) { ktitlewidget_mousemoveevent_callback = cb; }
    inline void setKTitleWidget_WheelEvent_Callback(KTitleWidget_WheelEvent_Callback cb) { ktitlewidget_wheelevent_callback = cb; }
    inline void setKTitleWidget_KeyPressEvent_Callback(KTitleWidget_KeyPressEvent_Callback cb) { ktitlewidget_keypressevent_callback = cb; }
    inline void setKTitleWidget_KeyReleaseEvent_Callback(KTitleWidget_KeyReleaseEvent_Callback cb) { ktitlewidget_keyreleaseevent_callback = cb; }
    inline void setKTitleWidget_FocusInEvent_Callback(KTitleWidget_FocusInEvent_Callback cb) { ktitlewidget_focusinevent_callback = cb; }
    inline void setKTitleWidget_FocusOutEvent_Callback(KTitleWidget_FocusOutEvent_Callback cb) { ktitlewidget_focusoutevent_callback = cb; }
    inline void setKTitleWidget_EnterEvent_Callback(KTitleWidget_EnterEvent_Callback cb) { ktitlewidget_enterevent_callback = cb; }
    inline void setKTitleWidget_LeaveEvent_Callback(KTitleWidget_LeaveEvent_Callback cb) { ktitlewidget_leaveevent_callback = cb; }
    inline void setKTitleWidget_PaintEvent_Callback(KTitleWidget_PaintEvent_Callback cb) { ktitlewidget_paintevent_callback = cb; }
    inline void setKTitleWidget_MoveEvent_Callback(KTitleWidget_MoveEvent_Callback cb) { ktitlewidget_moveevent_callback = cb; }
    inline void setKTitleWidget_ResizeEvent_Callback(KTitleWidget_ResizeEvent_Callback cb) { ktitlewidget_resizeevent_callback = cb; }
    inline void setKTitleWidget_CloseEvent_Callback(KTitleWidget_CloseEvent_Callback cb) { ktitlewidget_closeevent_callback = cb; }
    inline void setKTitleWidget_ContextMenuEvent_Callback(KTitleWidget_ContextMenuEvent_Callback cb) { ktitlewidget_contextmenuevent_callback = cb; }
    inline void setKTitleWidget_TabletEvent_Callback(KTitleWidget_TabletEvent_Callback cb) { ktitlewidget_tabletevent_callback = cb; }
    inline void setKTitleWidget_ActionEvent_Callback(KTitleWidget_ActionEvent_Callback cb) { ktitlewidget_actionevent_callback = cb; }
    inline void setKTitleWidget_DragEnterEvent_Callback(KTitleWidget_DragEnterEvent_Callback cb) { ktitlewidget_dragenterevent_callback = cb; }
    inline void setKTitleWidget_DragMoveEvent_Callback(KTitleWidget_DragMoveEvent_Callback cb) { ktitlewidget_dragmoveevent_callback = cb; }
    inline void setKTitleWidget_DragLeaveEvent_Callback(KTitleWidget_DragLeaveEvent_Callback cb) { ktitlewidget_dragleaveevent_callback = cb; }
    inline void setKTitleWidget_DropEvent_Callback(KTitleWidget_DropEvent_Callback cb) { ktitlewidget_dropevent_callback = cb; }
    inline void setKTitleWidget_HideEvent_Callback(KTitleWidget_HideEvent_Callback cb) { ktitlewidget_hideevent_callback = cb; }
    inline void setKTitleWidget_NativeEvent_Callback(KTitleWidget_NativeEvent_Callback cb) { ktitlewidget_nativeevent_callback = cb; }
    inline void setKTitleWidget_Metric_Callback(KTitleWidget_Metric_Callback cb) { ktitlewidget_metric_callback = cb; }
    inline void setKTitleWidget_InitPainter_Callback(KTitleWidget_InitPainter_Callback cb) { ktitlewidget_initpainter_callback = cb; }
    inline void setKTitleWidget_Redirected_Callback(KTitleWidget_Redirected_Callback cb) { ktitlewidget_redirected_callback = cb; }
    inline void setKTitleWidget_SharedPainter_Callback(KTitleWidget_SharedPainter_Callback cb) { ktitlewidget_sharedpainter_callback = cb; }
    inline void setKTitleWidget_InputMethodEvent_Callback(KTitleWidget_InputMethodEvent_Callback cb) { ktitlewidget_inputmethodevent_callback = cb; }
    inline void setKTitleWidget_InputMethodQuery_Callback(KTitleWidget_InputMethodQuery_Callback cb) { ktitlewidget_inputmethodquery_callback = cb; }
    inline void setKTitleWidget_FocusNextPrevChild_Callback(KTitleWidget_FocusNextPrevChild_Callback cb) { ktitlewidget_focusnextprevchild_callback = cb; }
    inline void setKTitleWidget_TimerEvent_Callback(KTitleWidget_TimerEvent_Callback cb) { ktitlewidget_timerevent_callback = cb; }
    inline void setKTitleWidget_ChildEvent_Callback(KTitleWidget_ChildEvent_Callback cb) { ktitlewidget_childevent_callback = cb; }
    inline void setKTitleWidget_CustomEvent_Callback(KTitleWidget_CustomEvent_Callback cb) { ktitlewidget_customevent_callback = cb; }
    inline void setKTitleWidget_ConnectNotify_Callback(KTitleWidget_ConnectNotify_Callback cb) { ktitlewidget_connectnotify_callback = cb; }
    inline void setKTitleWidget_DisconnectNotify_Callback(KTitleWidget_DisconnectNotify_Callback cb) { ktitlewidget_disconnectnotify_callback = cb; }
    inline void setKTitleWidget_UpdateMicroFocus_Callback(KTitleWidget_UpdateMicroFocus_Callback cb) { ktitlewidget_updatemicrofocus_callback = cb; }
    inline void setKTitleWidget_Create_Callback(KTitleWidget_Create_Callback cb) { ktitlewidget_create_callback = cb; }
    inline void setKTitleWidget_Destroy_Callback(KTitleWidget_Destroy_Callback cb) { ktitlewidget_destroy_callback = cb; }
    inline void setKTitleWidget_FocusNextChild_Callback(KTitleWidget_FocusNextChild_Callback cb) { ktitlewidget_focusnextchild_callback = cb; }
    inline void setKTitleWidget_FocusPreviousChild_Callback(KTitleWidget_FocusPreviousChild_Callback cb) { ktitlewidget_focuspreviouschild_callback = cb; }
    inline void setKTitleWidget_Sender_Callback(KTitleWidget_Sender_Callback cb) { ktitlewidget_sender_callback = cb; }
    inline void setKTitleWidget_SenderSignalIndex_Callback(KTitleWidget_SenderSignalIndex_Callback cb) { ktitlewidget_sendersignalindex_callback = cb; }
    inline void setKTitleWidget_Receivers_Callback(KTitleWidget_Receivers_Callback cb) { ktitlewidget_receivers_callback = cb; }
    inline void setKTitleWidget_IsSignalConnected_Callback(KTitleWidget_IsSignalConnected_Callback cb) { ktitlewidget_issignalconnected_callback = cb; }
    inline void setKTitleWidget_GetDecodedMetricF_Callback(KTitleWidget_GetDecodedMetricF_Callback cb) { ktitlewidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKTitleWidget_MetaObject_IsBase(bool value) const { ktitlewidget_metaobject_isbase = value; }
    inline void setKTitleWidget_Metacast_IsBase(bool value) const { ktitlewidget_metacast_isbase = value; }
    inline void setKTitleWidget_Metacall_IsBase(bool value) const { ktitlewidget_metacall_isbase = value; }
    inline void setKTitleWidget_ChangeEvent_IsBase(bool value) const { ktitlewidget_changeevent_isbase = value; }
    inline void setKTitleWidget_ShowEvent_IsBase(bool value) const { ktitlewidget_showevent_isbase = value; }
    inline void setKTitleWidget_EventFilter_IsBase(bool value) const { ktitlewidget_eventfilter_isbase = value; }
    inline void setKTitleWidget_DevType_IsBase(bool value) const { ktitlewidget_devtype_isbase = value; }
    inline void setKTitleWidget_SetVisible_IsBase(bool value) const { ktitlewidget_setvisible_isbase = value; }
    inline void setKTitleWidget_SizeHint_IsBase(bool value) const { ktitlewidget_sizehint_isbase = value; }
    inline void setKTitleWidget_MinimumSizeHint_IsBase(bool value) const { ktitlewidget_minimumsizehint_isbase = value; }
    inline void setKTitleWidget_HeightForWidth_IsBase(bool value) const { ktitlewidget_heightforwidth_isbase = value; }
    inline void setKTitleWidget_HasHeightForWidth_IsBase(bool value) const { ktitlewidget_hasheightforwidth_isbase = value; }
    inline void setKTitleWidget_PaintEngine_IsBase(bool value) const { ktitlewidget_paintengine_isbase = value; }
    inline void setKTitleWidget_Event_IsBase(bool value) const { ktitlewidget_event_isbase = value; }
    inline void setKTitleWidget_MousePressEvent_IsBase(bool value) const { ktitlewidget_mousepressevent_isbase = value; }
    inline void setKTitleWidget_MouseReleaseEvent_IsBase(bool value) const { ktitlewidget_mousereleaseevent_isbase = value; }
    inline void setKTitleWidget_MouseDoubleClickEvent_IsBase(bool value) const { ktitlewidget_mousedoubleclickevent_isbase = value; }
    inline void setKTitleWidget_MouseMoveEvent_IsBase(bool value) const { ktitlewidget_mousemoveevent_isbase = value; }
    inline void setKTitleWidget_WheelEvent_IsBase(bool value) const { ktitlewidget_wheelevent_isbase = value; }
    inline void setKTitleWidget_KeyPressEvent_IsBase(bool value) const { ktitlewidget_keypressevent_isbase = value; }
    inline void setKTitleWidget_KeyReleaseEvent_IsBase(bool value) const { ktitlewidget_keyreleaseevent_isbase = value; }
    inline void setKTitleWidget_FocusInEvent_IsBase(bool value) const { ktitlewidget_focusinevent_isbase = value; }
    inline void setKTitleWidget_FocusOutEvent_IsBase(bool value) const { ktitlewidget_focusoutevent_isbase = value; }
    inline void setKTitleWidget_EnterEvent_IsBase(bool value) const { ktitlewidget_enterevent_isbase = value; }
    inline void setKTitleWidget_LeaveEvent_IsBase(bool value) const { ktitlewidget_leaveevent_isbase = value; }
    inline void setKTitleWidget_PaintEvent_IsBase(bool value) const { ktitlewidget_paintevent_isbase = value; }
    inline void setKTitleWidget_MoveEvent_IsBase(bool value) const { ktitlewidget_moveevent_isbase = value; }
    inline void setKTitleWidget_ResizeEvent_IsBase(bool value) const { ktitlewidget_resizeevent_isbase = value; }
    inline void setKTitleWidget_CloseEvent_IsBase(bool value) const { ktitlewidget_closeevent_isbase = value; }
    inline void setKTitleWidget_ContextMenuEvent_IsBase(bool value) const { ktitlewidget_contextmenuevent_isbase = value; }
    inline void setKTitleWidget_TabletEvent_IsBase(bool value) const { ktitlewidget_tabletevent_isbase = value; }
    inline void setKTitleWidget_ActionEvent_IsBase(bool value) const { ktitlewidget_actionevent_isbase = value; }
    inline void setKTitleWidget_DragEnterEvent_IsBase(bool value) const { ktitlewidget_dragenterevent_isbase = value; }
    inline void setKTitleWidget_DragMoveEvent_IsBase(bool value) const { ktitlewidget_dragmoveevent_isbase = value; }
    inline void setKTitleWidget_DragLeaveEvent_IsBase(bool value) const { ktitlewidget_dragleaveevent_isbase = value; }
    inline void setKTitleWidget_DropEvent_IsBase(bool value) const { ktitlewidget_dropevent_isbase = value; }
    inline void setKTitleWidget_HideEvent_IsBase(bool value) const { ktitlewidget_hideevent_isbase = value; }
    inline void setKTitleWidget_NativeEvent_IsBase(bool value) const { ktitlewidget_nativeevent_isbase = value; }
    inline void setKTitleWidget_Metric_IsBase(bool value) const { ktitlewidget_metric_isbase = value; }
    inline void setKTitleWidget_InitPainter_IsBase(bool value) const { ktitlewidget_initpainter_isbase = value; }
    inline void setKTitleWidget_Redirected_IsBase(bool value) const { ktitlewidget_redirected_isbase = value; }
    inline void setKTitleWidget_SharedPainter_IsBase(bool value) const { ktitlewidget_sharedpainter_isbase = value; }
    inline void setKTitleWidget_InputMethodEvent_IsBase(bool value) const { ktitlewidget_inputmethodevent_isbase = value; }
    inline void setKTitleWidget_InputMethodQuery_IsBase(bool value) const { ktitlewidget_inputmethodquery_isbase = value; }
    inline void setKTitleWidget_FocusNextPrevChild_IsBase(bool value) const { ktitlewidget_focusnextprevchild_isbase = value; }
    inline void setKTitleWidget_TimerEvent_IsBase(bool value) const { ktitlewidget_timerevent_isbase = value; }
    inline void setKTitleWidget_ChildEvent_IsBase(bool value) const { ktitlewidget_childevent_isbase = value; }
    inline void setKTitleWidget_CustomEvent_IsBase(bool value) const { ktitlewidget_customevent_isbase = value; }
    inline void setKTitleWidget_ConnectNotify_IsBase(bool value) const { ktitlewidget_connectnotify_isbase = value; }
    inline void setKTitleWidget_DisconnectNotify_IsBase(bool value) const { ktitlewidget_disconnectnotify_isbase = value; }
    inline void setKTitleWidget_UpdateMicroFocus_IsBase(bool value) const { ktitlewidget_updatemicrofocus_isbase = value; }
    inline void setKTitleWidget_Create_IsBase(bool value) const { ktitlewidget_create_isbase = value; }
    inline void setKTitleWidget_Destroy_IsBase(bool value) const { ktitlewidget_destroy_isbase = value; }
    inline void setKTitleWidget_FocusNextChild_IsBase(bool value) const { ktitlewidget_focusnextchild_isbase = value; }
    inline void setKTitleWidget_FocusPreviousChild_IsBase(bool value) const { ktitlewidget_focuspreviouschild_isbase = value; }
    inline void setKTitleWidget_Sender_IsBase(bool value) const { ktitlewidget_sender_isbase = value; }
    inline void setKTitleWidget_SenderSignalIndex_IsBase(bool value) const { ktitlewidget_sendersignalindex_isbase = value; }
    inline void setKTitleWidget_Receivers_IsBase(bool value) const { ktitlewidget_receivers_isbase = value; }
    inline void setKTitleWidget_IsSignalConnected_IsBase(bool value) const { ktitlewidget_issignalconnected_isbase = value; }
    inline void setKTitleWidget_GetDecodedMetricF_IsBase(bool value) const { ktitlewidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktitlewidget_metaobject_isbase) {
            ktitlewidget_metaobject_isbase = false;
            return KTitleWidget::metaObject();
        }
        auto metaobject_cb = ktitlewidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KTitleWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktitlewidget_metacast_isbase) {
            ktitlewidget_metacast_isbase = false;
            return KTitleWidget::qt_metacast(param1);
        }
        auto metacast_cb = ktitlewidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KTitleWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktitlewidget_metacall_isbase) {
            ktitlewidget_metacall_isbase = false;
            return KTitleWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = ktitlewidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTitleWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (ktitlewidget_changeevent_isbase) {
            ktitlewidget_changeevent_isbase = false;
            KTitleWidget::changeEvent(e);
            return;
        }
        auto changeevent_cb = ktitlewidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = e;

            changeevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (ktitlewidget_showevent_isbase) {
            ktitlewidget_showevent_isbase = false;
            KTitleWidget::showEvent(event);
            return;
        }
        auto showevent_cb = ktitlewidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (ktitlewidget_eventfilter_isbase) {
            ktitlewidget_eventfilter_isbase = false;
            return KTitleWidget::eventFilter(object, event);
        }
        auto eventfilter_cb = ktitlewidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTitleWidget::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ktitlewidget_devtype_isbase) {
            ktitlewidget_devtype_isbase = false;
            return KTitleWidget::devType();
        }
        auto devtype_cb = ktitlewidget_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KTitleWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ktitlewidget_setvisible_isbase) {
            ktitlewidget_setvisible_isbase = false;
            KTitleWidget::setVisible(visible);
            return;
        }
        auto setvisible_cb = ktitlewidget_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KTitleWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ktitlewidget_sizehint_isbase) {
            ktitlewidget_sizehint_isbase = false;
            return KTitleWidget::sizeHint();
        }
        auto sizehint_cb = ktitlewidget_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KTitleWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ktitlewidget_minimumsizehint_isbase) {
            ktitlewidget_minimumsizehint_isbase = false;
            return KTitleWidget::minimumSizeHint();
        }
        auto minimumsizehint_cb = ktitlewidget_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KTitleWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ktitlewidget_heightforwidth_isbase) {
            ktitlewidget_heightforwidth_isbase = false;
            return KTitleWidget::heightForWidth(param1);
        }
        auto heightforwidth_cb = ktitlewidget_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTitleWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ktitlewidget_hasheightforwidth_isbase) {
            ktitlewidget_hasheightforwidth_isbase = false;
            return KTitleWidget::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = ktitlewidget_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KTitleWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ktitlewidget_paintengine_isbase) {
            ktitlewidget_paintengine_isbase = false;
            return KTitleWidget::paintEngine();
        }
        auto paintengine_cb = ktitlewidget_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KTitleWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktitlewidget_event_isbase) {
            ktitlewidget_event_isbase = false;
            return KTitleWidget::event(event);
        }
        auto event_cb = ktitlewidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KTitleWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (ktitlewidget_mousepressevent_isbase) {
            ktitlewidget_mousepressevent_isbase = false;
            KTitleWidget::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = ktitlewidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (ktitlewidget_mousereleaseevent_isbase) {
            ktitlewidget_mousereleaseevent_isbase = false;
            KTitleWidget::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = ktitlewidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (ktitlewidget_mousedoubleclickevent_isbase) {
            ktitlewidget_mousedoubleclickevent_isbase = false;
            KTitleWidget::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = ktitlewidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (ktitlewidget_mousemoveevent_isbase) {
            ktitlewidget_mousemoveevent_isbase = false;
            KTitleWidget::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = ktitlewidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ktitlewidget_wheelevent_isbase) {
            ktitlewidget_wheelevent_isbase = false;
            KTitleWidget::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = ktitlewidget_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (ktitlewidget_keypressevent_isbase) {
            ktitlewidget_keypressevent_isbase = false;
            KTitleWidget::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = ktitlewidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (ktitlewidget_keyreleaseevent_isbase) {
            ktitlewidget_keyreleaseevent_isbase = false;
            KTitleWidget::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = ktitlewidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (ktitlewidget_focusinevent_isbase) {
            ktitlewidget_focusinevent_isbase = false;
            KTitleWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = ktitlewidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (ktitlewidget_focusoutevent_isbase) {
            ktitlewidget_focusoutevent_isbase = false;
            KTitleWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = ktitlewidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ktitlewidget_enterevent_isbase) {
            ktitlewidget_enterevent_isbase = false;
            KTitleWidget::enterEvent(event);
            return;
        }
        auto enterevent_cb = ktitlewidget_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ktitlewidget_leaveevent_isbase) {
            ktitlewidget_leaveevent_isbase = false;
            KTitleWidget::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = ktitlewidget_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (ktitlewidget_paintevent_isbase) {
            ktitlewidget_paintevent_isbase = false;
            KTitleWidget::paintEvent(event);
            return;
        }
        auto paintevent_cb = ktitlewidget_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ktitlewidget_moveevent_isbase) {
            ktitlewidget_moveevent_isbase = false;
            KTitleWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = ktitlewidget_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (ktitlewidget_resizeevent_isbase) {
            ktitlewidget_resizeevent_isbase = false;
            KTitleWidget::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = ktitlewidget_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ktitlewidget_closeevent_isbase) {
            ktitlewidget_closeevent_isbase = false;
            KTitleWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = ktitlewidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (ktitlewidget_contextmenuevent_isbase) {
            ktitlewidget_contextmenuevent_isbase = false;
            KTitleWidget::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = ktitlewidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ktitlewidget_tabletevent_isbase) {
            ktitlewidget_tabletevent_isbase = false;
            KTitleWidget::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = ktitlewidget_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (ktitlewidget_actionevent_isbase) {
            ktitlewidget_actionevent_isbase = false;
            KTitleWidget::actionEvent(event);
            return;
        }
        auto actionevent_cb = ktitlewidget_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (ktitlewidget_dragenterevent_isbase) {
            ktitlewidget_dragenterevent_isbase = false;
            KTitleWidget::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = ktitlewidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (ktitlewidget_dragmoveevent_isbase) {
            ktitlewidget_dragmoveevent_isbase = false;
            KTitleWidget::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = ktitlewidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (ktitlewidget_dragleaveevent_isbase) {
            ktitlewidget_dragleaveevent_isbase = false;
            KTitleWidget::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = ktitlewidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (ktitlewidget_dropevent_isbase) {
            ktitlewidget_dropevent_isbase = false;
            KTitleWidget::dropEvent(event);
            return;
        }
        auto dropevent_cb = ktitlewidget_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (ktitlewidget_hideevent_isbase) {
            ktitlewidget_hideevent_isbase = false;
            KTitleWidget::hideEvent(event);
            return;
        }
        auto hideevent_cb = ktitlewidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ktitlewidget_nativeevent_isbase) {
            ktitlewidget_nativeevent_isbase = false;
            return KTitleWidget::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = ktitlewidget_nativeevent_callback;
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
        return KTitleWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ktitlewidget_metric_isbase) {
            ktitlewidget_metric_isbase = false;
            return KTitleWidget::metric(param1);
        }
        auto metric_cb = ktitlewidget_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTitleWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ktitlewidget_initpainter_isbase) {
            ktitlewidget_initpainter_isbase = false;
            KTitleWidget::initPainter(painter);
            return;
        }
        auto initpainter_cb = ktitlewidget_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KTitleWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ktitlewidget_redirected_isbase) {
            ktitlewidget_redirected_isbase = false;
            return KTitleWidget::redirected(offset);
        }
        auto redirected_cb = ktitlewidget_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KTitleWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ktitlewidget_sharedpainter_isbase) {
            ktitlewidget_sharedpainter_isbase = false;
            return KTitleWidget::sharedPainter();
        }
        auto sharedpainter_cb = ktitlewidget_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KTitleWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ktitlewidget_inputmethodevent_isbase) {
            ktitlewidget_inputmethodevent_isbase = false;
            KTitleWidget::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = ktitlewidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ktitlewidget_inputmethodquery_isbase) {
            ktitlewidget_inputmethodquery_isbase = false;
            return KTitleWidget::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = ktitlewidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KTitleWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ktitlewidget_focusnextprevchild_isbase) {
            ktitlewidget_focusnextprevchild_isbase = false;
            return KTitleWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = ktitlewidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KTitleWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktitlewidget_timerevent_isbase) {
            ktitlewidget_timerevent_isbase = false;
            KTitleWidget::timerEvent(event);
            return;
        }
        auto timerevent_cb = ktitlewidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktitlewidget_childevent_isbase) {
            ktitlewidget_childevent_isbase = false;
            KTitleWidget::childEvent(event);
            return;
        }
        auto childevent_cb = ktitlewidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktitlewidget_customevent_isbase) {
            ktitlewidget_customevent_isbase = false;
            KTitleWidget::customEvent(event);
            return;
        }
        auto customevent_cb = ktitlewidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KTitleWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktitlewidget_connectnotify_isbase) {
            ktitlewidget_connectnotify_isbase = false;
            KTitleWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = ktitlewidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KTitleWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktitlewidget_disconnectnotify_isbase) {
            ktitlewidget_disconnectnotify_isbase = false;
            KTitleWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = ktitlewidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KTitleWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (ktitlewidget_updatemicrofocus_isbase) {
            ktitlewidget_updatemicrofocus_isbase = false;
            KTitleWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = ktitlewidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KTitleWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (ktitlewidget_create_isbase) {
            ktitlewidget_create_isbase = false;
            KTitleWidget::create();
            return;
        }
        auto create_cb = ktitlewidget_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KTitleWidget::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (ktitlewidget_destroy_isbase) {
            ktitlewidget_destroy_isbase = false;
            KTitleWidget::destroy();
            return;
        }
        auto destroy_cb = ktitlewidget_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KTitleWidget::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (ktitlewidget_focusnextchild_isbase) {
            ktitlewidget_focusnextchild_isbase = false;
            return KTitleWidget::focusNextChild();
        }
        auto focusnextchild_cb = ktitlewidget_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KTitleWidget::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (ktitlewidget_focuspreviouschild_isbase) {
            ktitlewidget_focuspreviouschild_isbase = false;
            return KTitleWidget::focusPreviousChild();
        }
        auto focuspreviouschild_cb = ktitlewidget_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KTitleWidget::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktitlewidget_sender_isbase) {
            ktitlewidget_sender_isbase = false;
            return KTitleWidget::sender();
        }
        auto sender_cb = ktitlewidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KTitleWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktitlewidget_sendersignalindex_isbase) {
            ktitlewidget_sendersignalindex_isbase = false;
            return KTitleWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = ktitlewidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KTitleWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktitlewidget_receivers_isbase) {
            ktitlewidget_receivers_isbase = false;
            return KTitleWidget::receivers(signal);
        }
        auto receivers_cb = ktitlewidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTitleWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktitlewidget_issignalconnected_isbase) {
            ktitlewidget_issignalconnected_isbase = false;
            return KTitleWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = ktitlewidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KTitleWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (ktitlewidget_getdecodedmetricf_isbase) {
            ktitlewidget_getdecodedmetricf_isbase = false;
            return KTitleWidget::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = ktitlewidget_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KTitleWidget::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KTitleWidget_ChangeEvent(KTitleWidget* self, QEvent* e);
    friend void KTitleWidget_SuperChangeEvent(KTitleWidget* self, QEvent* e);
    friend void KTitleWidget_ShowEvent(KTitleWidget* self, QShowEvent* event);
    friend void KTitleWidget_SuperShowEvent(KTitleWidget* self, QShowEvent* event);
    friend bool KTitleWidget_EventFilter(KTitleWidget* self, QObject* object, QEvent* event);
    friend bool KTitleWidget_SuperEventFilter(KTitleWidget* self, QObject* object, QEvent* event);
    friend bool KTitleWidget_Event(KTitleWidget* self, QEvent* event);
    friend bool KTitleWidget_SuperEvent(KTitleWidget* self, QEvent* event);
    friend void KTitleWidget_MousePressEvent(KTitleWidget* self, QMouseEvent* event);
    friend void KTitleWidget_SuperMousePressEvent(KTitleWidget* self, QMouseEvent* event);
    friend void KTitleWidget_MouseReleaseEvent(KTitleWidget* self, QMouseEvent* event);
    friend void KTitleWidget_SuperMouseReleaseEvent(KTitleWidget* self, QMouseEvent* event);
    friend void KTitleWidget_MouseDoubleClickEvent(KTitleWidget* self, QMouseEvent* event);
    friend void KTitleWidget_SuperMouseDoubleClickEvent(KTitleWidget* self, QMouseEvent* event);
    friend void KTitleWidget_MouseMoveEvent(KTitleWidget* self, QMouseEvent* event);
    friend void KTitleWidget_SuperMouseMoveEvent(KTitleWidget* self, QMouseEvent* event);
    friend void KTitleWidget_WheelEvent(KTitleWidget* self, QWheelEvent* event);
    friend void KTitleWidget_SuperWheelEvent(KTitleWidget* self, QWheelEvent* event);
    friend void KTitleWidget_KeyPressEvent(KTitleWidget* self, QKeyEvent* event);
    friend void KTitleWidget_SuperKeyPressEvent(KTitleWidget* self, QKeyEvent* event);
    friend void KTitleWidget_KeyReleaseEvent(KTitleWidget* self, QKeyEvent* event);
    friend void KTitleWidget_SuperKeyReleaseEvent(KTitleWidget* self, QKeyEvent* event);
    friend void KTitleWidget_FocusInEvent(KTitleWidget* self, QFocusEvent* event);
    friend void KTitleWidget_SuperFocusInEvent(KTitleWidget* self, QFocusEvent* event);
    friend void KTitleWidget_FocusOutEvent(KTitleWidget* self, QFocusEvent* event);
    friend void KTitleWidget_SuperFocusOutEvent(KTitleWidget* self, QFocusEvent* event);
    friend void KTitleWidget_EnterEvent(KTitleWidget* self, QEnterEvent* event);
    friend void KTitleWidget_SuperEnterEvent(KTitleWidget* self, QEnterEvent* event);
    friend void KTitleWidget_LeaveEvent(KTitleWidget* self, QEvent* event);
    friend void KTitleWidget_SuperLeaveEvent(KTitleWidget* self, QEvent* event);
    friend void KTitleWidget_PaintEvent(KTitleWidget* self, QPaintEvent* event);
    friend void KTitleWidget_SuperPaintEvent(KTitleWidget* self, QPaintEvent* event);
    friend void KTitleWidget_MoveEvent(KTitleWidget* self, QMoveEvent* event);
    friend void KTitleWidget_SuperMoveEvent(KTitleWidget* self, QMoveEvent* event);
    friend void KTitleWidget_ResizeEvent(KTitleWidget* self, QResizeEvent* event);
    friend void KTitleWidget_SuperResizeEvent(KTitleWidget* self, QResizeEvent* event);
    friend void KTitleWidget_CloseEvent(KTitleWidget* self, QCloseEvent* event);
    friend void KTitleWidget_SuperCloseEvent(KTitleWidget* self, QCloseEvent* event);
    friend void KTitleWidget_ContextMenuEvent(KTitleWidget* self, QContextMenuEvent* event);
    friend void KTitleWidget_SuperContextMenuEvent(KTitleWidget* self, QContextMenuEvent* event);
    friend void KTitleWidget_TabletEvent(KTitleWidget* self, QTabletEvent* event);
    friend void KTitleWidget_SuperTabletEvent(KTitleWidget* self, QTabletEvent* event);
    friend void KTitleWidget_ActionEvent(KTitleWidget* self, QActionEvent* event);
    friend void KTitleWidget_SuperActionEvent(KTitleWidget* self, QActionEvent* event);
    friend void KTitleWidget_DragEnterEvent(KTitleWidget* self, QDragEnterEvent* event);
    friend void KTitleWidget_SuperDragEnterEvent(KTitleWidget* self, QDragEnterEvent* event);
    friend void KTitleWidget_DragMoveEvent(KTitleWidget* self, QDragMoveEvent* event);
    friend void KTitleWidget_SuperDragMoveEvent(KTitleWidget* self, QDragMoveEvent* event);
    friend void KTitleWidget_DragLeaveEvent(KTitleWidget* self, QDragLeaveEvent* event);
    friend void KTitleWidget_SuperDragLeaveEvent(KTitleWidget* self, QDragLeaveEvent* event);
    friend void KTitleWidget_DropEvent(KTitleWidget* self, QDropEvent* event);
    friend void KTitleWidget_SuperDropEvent(KTitleWidget* self, QDropEvent* event);
    friend void KTitleWidget_HideEvent(KTitleWidget* self, QHideEvent* event);
    friend void KTitleWidget_SuperHideEvent(KTitleWidget* self, QHideEvent* event);
    friend bool KTitleWidget_NativeEvent(KTitleWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KTitleWidget_SuperNativeEvent(KTitleWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KTitleWidget_Metric(const KTitleWidget* self, int param1);
    friend int KTitleWidget_SuperMetric(const KTitleWidget* self, int param1);
    friend void KTitleWidget_InitPainter(const KTitleWidget* self, QPainter* painter);
    friend void KTitleWidget_SuperInitPainter(const KTitleWidget* self, QPainter* painter);
    friend QPaintDevice* KTitleWidget_Redirected(const KTitleWidget* self, QPoint* offset);
    friend QPaintDevice* KTitleWidget_SuperRedirected(const KTitleWidget* self, QPoint* offset);
    friend QPainter* KTitleWidget_SharedPainter(const KTitleWidget* self);
    friend QPainter* KTitleWidget_SuperSharedPainter(const KTitleWidget* self);
    friend void KTitleWidget_InputMethodEvent(KTitleWidget* self, QInputMethodEvent* param1);
    friend void KTitleWidget_SuperInputMethodEvent(KTitleWidget* self, QInputMethodEvent* param1);
    friend bool KTitleWidget_FocusNextPrevChild(KTitleWidget* self, bool next);
    friend bool KTitleWidget_SuperFocusNextPrevChild(KTitleWidget* self, bool next);
    friend void KTitleWidget_TimerEvent(KTitleWidget* self, QTimerEvent* event);
    friend void KTitleWidget_SuperTimerEvent(KTitleWidget* self, QTimerEvent* event);
    friend void KTitleWidget_ChildEvent(KTitleWidget* self, QChildEvent* event);
    friend void KTitleWidget_SuperChildEvent(KTitleWidget* self, QChildEvent* event);
    friend void KTitleWidget_CustomEvent(KTitleWidget* self, QEvent* event);
    friend void KTitleWidget_SuperCustomEvent(KTitleWidget* self, QEvent* event);
    friend void KTitleWidget_ConnectNotify(KTitleWidget* self, const QMetaMethod* signal);
    friend void KTitleWidget_SuperConnectNotify(KTitleWidget* self, const QMetaMethod* signal);
    friend void KTitleWidget_DisconnectNotify(KTitleWidget* self, const QMetaMethod* signal);
    friend void KTitleWidget_SuperDisconnectNotify(KTitleWidget* self, const QMetaMethod* signal);
    friend void KTitleWidget_UpdateMicroFocus(KTitleWidget* self);
    friend void KTitleWidget_SuperUpdateMicroFocus(KTitleWidget* self);
    friend void KTitleWidget_Create(KTitleWidget* self);
    friend void KTitleWidget_SuperCreate(KTitleWidget* self);
    friend void KTitleWidget_Destroy(KTitleWidget* self);
    friend void KTitleWidget_SuperDestroy(KTitleWidget* self);
    friend bool KTitleWidget_FocusNextChild(KTitleWidget* self);
    friend bool KTitleWidget_SuperFocusNextChild(KTitleWidget* self);
    friend bool KTitleWidget_FocusPreviousChild(KTitleWidget* self);
    friend bool KTitleWidget_SuperFocusPreviousChild(KTitleWidget* self);
    friend QObject* KTitleWidget_Sender(const KTitleWidget* self);
    friend QObject* KTitleWidget_SuperSender(const KTitleWidget* self);
    friend int KTitleWidget_SenderSignalIndex(const KTitleWidget* self);
    friend int KTitleWidget_SuperSenderSignalIndex(const KTitleWidget* self);
    friend int KTitleWidget_Receivers(const KTitleWidget* self, const char* signal);
    friend int KTitleWidget_SuperReceivers(const KTitleWidget* self, const char* signal);
    friend bool KTitleWidget_IsSignalConnected(const KTitleWidget* self, const QMetaMethod* signal);
    friend bool KTitleWidget_SuperIsSignalConnected(const KTitleWidget* self, const QMetaMethod* signal);
    friend double KTitleWidget_GetDecodedMetricF(const KTitleWidget* self, int metricA, int metricB);
    friend double KTitleWidget_SuperGetDecodedMetricF(const KTitleWidget* self, int metricA, int metricB);
};

#endif
