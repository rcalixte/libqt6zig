#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKXYSELECTOR_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKXYSELECTOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KXYSelector so that we can call protected methods
class VirtualKXYSelector final : public KXYSelector {

  public:
    // Virtual class boolean flag
    bool isVirtualKXYSelector = true;

    // Virtual class public types (including callbacks)
    using KXYSelector_MetaObject_Callback = QMetaObject* (*)();
    using KXYSelector_Metacast_Callback = void* (*)(KXYSelector*, const char*);
    using KXYSelector_Metacall_Callback = int (*)(KXYSelector*, int, int, void**);
    using KXYSelector_MinimumSizeHint_Callback = QSize* (*)();
    using KXYSelector_DrawContents_Callback = void (*)(KXYSelector*, QPainter*);
    using KXYSelector_DrawMarker_Callback = void (*)(KXYSelector*, QPainter*, int, int);
    using KXYSelector_PaintEvent_Callback = void (*)(KXYSelector*, QPaintEvent*);
    using KXYSelector_MousePressEvent_Callback = void (*)(KXYSelector*, QMouseEvent*);
    using KXYSelector_MouseMoveEvent_Callback = void (*)(KXYSelector*, QMouseEvent*);
    using KXYSelector_WheelEvent_Callback = void (*)(KXYSelector*, QWheelEvent*);
    using KXYSelector_DevType_Callback = int (*)();
    using KXYSelector_SetVisible_Callback = void (*)(KXYSelector*, bool);
    using KXYSelector_SizeHint_Callback = QSize* (*)();
    using KXYSelector_HeightForWidth_Callback = int (*)(const KXYSelector*, int);
    using KXYSelector_HasHeightForWidth_Callback = bool (*)();
    using KXYSelector_PaintEngine_Callback = QPaintEngine* (*)();
    using KXYSelector_Event_Callback = bool (*)(KXYSelector*, QEvent*);
    using KXYSelector_MouseReleaseEvent_Callback = void (*)(KXYSelector*, QMouseEvent*);
    using KXYSelector_MouseDoubleClickEvent_Callback = void (*)(KXYSelector*, QMouseEvent*);
    using KXYSelector_KeyPressEvent_Callback = void (*)(KXYSelector*, QKeyEvent*);
    using KXYSelector_KeyReleaseEvent_Callback = void (*)(KXYSelector*, QKeyEvent*);
    using KXYSelector_FocusInEvent_Callback = void (*)(KXYSelector*, QFocusEvent*);
    using KXYSelector_FocusOutEvent_Callback = void (*)(KXYSelector*, QFocusEvent*);
    using KXYSelector_EnterEvent_Callback = void (*)(KXYSelector*, QEnterEvent*);
    using KXYSelector_LeaveEvent_Callback = void (*)(KXYSelector*, QEvent*);
    using KXYSelector_MoveEvent_Callback = void (*)(KXYSelector*, QMoveEvent*);
    using KXYSelector_ResizeEvent_Callback = void (*)(KXYSelector*, QResizeEvent*);
    using KXYSelector_CloseEvent_Callback = void (*)(KXYSelector*, QCloseEvent*);
    using KXYSelector_ContextMenuEvent_Callback = void (*)(KXYSelector*, QContextMenuEvent*);
    using KXYSelector_TabletEvent_Callback = void (*)(KXYSelector*, QTabletEvent*);
    using KXYSelector_ActionEvent_Callback = void (*)(KXYSelector*, QActionEvent*);
    using KXYSelector_DragEnterEvent_Callback = void (*)(KXYSelector*, QDragEnterEvent*);
    using KXYSelector_DragMoveEvent_Callback = void (*)(KXYSelector*, QDragMoveEvent*);
    using KXYSelector_DragLeaveEvent_Callback = void (*)(KXYSelector*, QDragLeaveEvent*);
    using KXYSelector_DropEvent_Callback = void (*)(KXYSelector*, QDropEvent*);
    using KXYSelector_ShowEvent_Callback = void (*)(KXYSelector*, QShowEvent*);
    using KXYSelector_HideEvent_Callback = void (*)(KXYSelector*, QHideEvent*);
    using KXYSelector_NativeEvent_Callback = bool (*)(KXYSelector*, libqt_string, void*, intptr_t*);
    using KXYSelector_ChangeEvent_Callback = void (*)(KXYSelector*, QEvent*);
    using KXYSelector_Metric_Callback = int (*)(const KXYSelector*, int);
    using KXYSelector_InitPainter_Callback = void (*)(const KXYSelector*, QPainter*);
    using KXYSelector_Redirected_Callback = QPaintDevice* (*)(const KXYSelector*, QPoint*);
    using KXYSelector_SharedPainter_Callback = QPainter* (*)();
    using KXYSelector_InputMethodEvent_Callback = void (*)(KXYSelector*, QInputMethodEvent*);
    using KXYSelector_InputMethodQuery_Callback = QVariant* (*)(const KXYSelector*, int);
    using KXYSelector_FocusNextPrevChild_Callback = bool (*)(KXYSelector*, bool);
    using KXYSelector_EventFilter_Callback = bool (*)(KXYSelector*, QObject*, QEvent*);
    using KXYSelector_TimerEvent_Callback = void (*)(KXYSelector*, QTimerEvent*);
    using KXYSelector_ChildEvent_Callback = void (*)(KXYSelector*, QChildEvent*);
    using KXYSelector_CustomEvent_Callback = void (*)(KXYSelector*, QEvent*);
    using KXYSelector_ConnectNotify_Callback = void (*)(KXYSelector*, QMetaMethod*);
    using KXYSelector_DisconnectNotify_Callback = void (*)(KXYSelector*, QMetaMethod*);
    using KXYSelector_ValuesFromPosition_Callback = void (*)(const KXYSelector*, int, int, int*, int*);
    using KXYSelector_UpdateMicroFocus_Callback = void (*)();
    using KXYSelector_Create_Callback = void (*)();
    using KXYSelector_Destroy_Callback = void (*)();
    using KXYSelector_FocusNextChild_Callback = bool (*)();
    using KXYSelector_FocusPreviousChild_Callback = bool (*)();
    using KXYSelector_Sender_Callback = QObject* (*)();
    using KXYSelector_SenderSignalIndex_Callback = int (*)();
    using KXYSelector_Receivers_Callback = int (*)(const KXYSelector*, const char*);
    using KXYSelector_IsSignalConnected_Callback = bool (*)(const KXYSelector*, QMetaMethod*);
    using KXYSelector_GetDecodedMetricF_Callback = double (*)(const KXYSelector*, int, int);

  protected:
    // Instance callback storage
    KXYSelector_MetaObject_Callback kxyselector_metaobject_callback = nullptr;
    KXYSelector_Metacast_Callback kxyselector_metacast_callback = nullptr;
    KXYSelector_Metacall_Callback kxyselector_metacall_callback = nullptr;
    KXYSelector_MinimumSizeHint_Callback kxyselector_minimumsizehint_callback = nullptr;
    KXYSelector_DrawContents_Callback kxyselector_drawcontents_callback = nullptr;
    KXYSelector_DrawMarker_Callback kxyselector_drawmarker_callback = nullptr;
    KXYSelector_PaintEvent_Callback kxyselector_paintevent_callback = nullptr;
    KXYSelector_MousePressEvent_Callback kxyselector_mousepressevent_callback = nullptr;
    KXYSelector_MouseMoveEvent_Callback kxyselector_mousemoveevent_callback = nullptr;
    KXYSelector_WheelEvent_Callback kxyselector_wheelevent_callback = nullptr;
    KXYSelector_DevType_Callback kxyselector_devtype_callback = nullptr;
    KXYSelector_SetVisible_Callback kxyselector_setvisible_callback = nullptr;
    KXYSelector_SizeHint_Callback kxyselector_sizehint_callback = nullptr;
    KXYSelector_HeightForWidth_Callback kxyselector_heightforwidth_callback = nullptr;
    KXYSelector_HasHeightForWidth_Callback kxyselector_hasheightforwidth_callback = nullptr;
    KXYSelector_PaintEngine_Callback kxyselector_paintengine_callback = nullptr;
    KXYSelector_Event_Callback kxyselector_event_callback = nullptr;
    KXYSelector_MouseReleaseEvent_Callback kxyselector_mousereleaseevent_callback = nullptr;
    KXYSelector_MouseDoubleClickEvent_Callback kxyselector_mousedoubleclickevent_callback = nullptr;
    KXYSelector_KeyPressEvent_Callback kxyselector_keypressevent_callback = nullptr;
    KXYSelector_KeyReleaseEvent_Callback kxyselector_keyreleaseevent_callback = nullptr;
    KXYSelector_FocusInEvent_Callback kxyselector_focusinevent_callback = nullptr;
    KXYSelector_FocusOutEvent_Callback kxyselector_focusoutevent_callback = nullptr;
    KXYSelector_EnterEvent_Callback kxyselector_enterevent_callback = nullptr;
    KXYSelector_LeaveEvent_Callback kxyselector_leaveevent_callback = nullptr;
    KXYSelector_MoveEvent_Callback kxyselector_moveevent_callback = nullptr;
    KXYSelector_ResizeEvent_Callback kxyselector_resizeevent_callback = nullptr;
    KXYSelector_CloseEvent_Callback kxyselector_closeevent_callback = nullptr;
    KXYSelector_ContextMenuEvent_Callback kxyselector_contextmenuevent_callback = nullptr;
    KXYSelector_TabletEvent_Callback kxyselector_tabletevent_callback = nullptr;
    KXYSelector_ActionEvent_Callback kxyselector_actionevent_callback = nullptr;
    KXYSelector_DragEnterEvent_Callback kxyselector_dragenterevent_callback = nullptr;
    KXYSelector_DragMoveEvent_Callback kxyselector_dragmoveevent_callback = nullptr;
    KXYSelector_DragLeaveEvent_Callback kxyselector_dragleaveevent_callback = nullptr;
    KXYSelector_DropEvent_Callback kxyselector_dropevent_callback = nullptr;
    KXYSelector_ShowEvent_Callback kxyselector_showevent_callback = nullptr;
    KXYSelector_HideEvent_Callback kxyselector_hideevent_callback = nullptr;
    KXYSelector_NativeEvent_Callback kxyselector_nativeevent_callback = nullptr;
    KXYSelector_ChangeEvent_Callback kxyselector_changeevent_callback = nullptr;
    KXYSelector_Metric_Callback kxyselector_metric_callback = nullptr;
    KXYSelector_InitPainter_Callback kxyselector_initpainter_callback = nullptr;
    KXYSelector_Redirected_Callback kxyselector_redirected_callback = nullptr;
    KXYSelector_SharedPainter_Callback kxyselector_sharedpainter_callback = nullptr;
    KXYSelector_InputMethodEvent_Callback kxyselector_inputmethodevent_callback = nullptr;
    KXYSelector_InputMethodQuery_Callback kxyselector_inputmethodquery_callback = nullptr;
    KXYSelector_FocusNextPrevChild_Callback kxyselector_focusnextprevchild_callback = nullptr;
    KXYSelector_EventFilter_Callback kxyselector_eventfilter_callback = nullptr;
    KXYSelector_TimerEvent_Callback kxyselector_timerevent_callback = nullptr;
    KXYSelector_ChildEvent_Callback kxyselector_childevent_callback = nullptr;
    KXYSelector_CustomEvent_Callback kxyselector_customevent_callback = nullptr;
    KXYSelector_ConnectNotify_Callback kxyselector_connectnotify_callback = nullptr;
    KXYSelector_DisconnectNotify_Callback kxyselector_disconnectnotify_callback = nullptr;
    KXYSelector_ValuesFromPosition_Callback kxyselector_valuesfromposition_callback = nullptr;
    KXYSelector_UpdateMicroFocus_Callback kxyselector_updatemicrofocus_callback = nullptr;
    KXYSelector_Create_Callback kxyselector_create_callback = nullptr;
    KXYSelector_Destroy_Callback kxyselector_destroy_callback = nullptr;
    KXYSelector_FocusNextChild_Callback kxyselector_focusnextchild_callback = nullptr;
    KXYSelector_FocusPreviousChild_Callback kxyselector_focuspreviouschild_callback = nullptr;
    KXYSelector_Sender_Callback kxyselector_sender_callback = nullptr;
    KXYSelector_SenderSignalIndex_Callback kxyselector_sendersignalindex_callback = nullptr;
    KXYSelector_Receivers_Callback kxyselector_receivers_callback = nullptr;
    KXYSelector_IsSignalConnected_Callback kxyselector_issignalconnected_callback = nullptr;
    KXYSelector_GetDecodedMetricF_Callback kxyselector_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kxyselector_metaobject_isbase = false;
    mutable bool kxyselector_metacast_isbase = false;
    mutable bool kxyselector_metacall_isbase = false;
    mutable bool kxyselector_minimumsizehint_isbase = false;
    mutable bool kxyselector_drawcontents_isbase = false;
    mutable bool kxyselector_drawmarker_isbase = false;
    mutable bool kxyselector_paintevent_isbase = false;
    mutable bool kxyselector_mousepressevent_isbase = false;
    mutable bool kxyselector_mousemoveevent_isbase = false;
    mutable bool kxyselector_wheelevent_isbase = false;
    mutable bool kxyselector_devtype_isbase = false;
    mutable bool kxyselector_setvisible_isbase = false;
    mutable bool kxyselector_sizehint_isbase = false;
    mutable bool kxyselector_heightforwidth_isbase = false;
    mutable bool kxyselector_hasheightforwidth_isbase = false;
    mutable bool kxyselector_paintengine_isbase = false;
    mutable bool kxyselector_event_isbase = false;
    mutable bool kxyselector_mousereleaseevent_isbase = false;
    mutable bool kxyselector_mousedoubleclickevent_isbase = false;
    mutable bool kxyselector_keypressevent_isbase = false;
    mutable bool kxyselector_keyreleaseevent_isbase = false;
    mutable bool kxyselector_focusinevent_isbase = false;
    mutable bool kxyselector_focusoutevent_isbase = false;
    mutable bool kxyselector_enterevent_isbase = false;
    mutable bool kxyselector_leaveevent_isbase = false;
    mutable bool kxyselector_moveevent_isbase = false;
    mutable bool kxyselector_resizeevent_isbase = false;
    mutable bool kxyselector_closeevent_isbase = false;
    mutable bool kxyselector_contextmenuevent_isbase = false;
    mutable bool kxyselector_tabletevent_isbase = false;
    mutable bool kxyselector_actionevent_isbase = false;
    mutable bool kxyselector_dragenterevent_isbase = false;
    mutable bool kxyselector_dragmoveevent_isbase = false;
    mutable bool kxyselector_dragleaveevent_isbase = false;
    mutable bool kxyselector_dropevent_isbase = false;
    mutable bool kxyselector_showevent_isbase = false;
    mutable bool kxyselector_hideevent_isbase = false;
    mutable bool kxyselector_nativeevent_isbase = false;
    mutable bool kxyselector_changeevent_isbase = false;
    mutable bool kxyselector_metric_isbase = false;
    mutable bool kxyselector_initpainter_isbase = false;
    mutable bool kxyselector_redirected_isbase = false;
    mutable bool kxyselector_sharedpainter_isbase = false;
    mutable bool kxyselector_inputmethodevent_isbase = false;
    mutable bool kxyselector_inputmethodquery_isbase = false;
    mutable bool kxyselector_focusnextprevchild_isbase = false;
    mutable bool kxyselector_eventfilter_isbase = false;
    mutable bool kxyselector_timerevent_isbase = false;
    mutable bool kxyselector_childevent_isbase = false;
    mutable bool kxyselector_customevent_isbase = false;
    mutable bool kxyselector_connectnotify_isbase = false;
    mutable bool kxyselector_disconnectnotify_isbase = false;
    mutable bool kxyselector_valuesfromposition_isbase = false;
    mutable bool kxyselector_updatemicrofocus_isbase = false;
    mutable bool kxyselector_create_isbase = false;
    mutable bool kxyselector_destroy_isbase = false;
    mutable bool kxyselector_focusnextchild_isbase = false;
    mutable bool kxyselector_focuspreviouschild_isbase = false;
    mutable bool kxyselector_sender_isbase = false;
    mutable bool kxyselector_sendersignalindex_isbase = false;
    mutable bool kxyselector_receivers_isbase = false;
    mutable bool kxyselector_issignalconnected_isbase = false;
    mutable bool kxyselector_getdecodedmetricf_isbase = false;

  public:
    VirtualKXYSelector(QWidget* parent) : KXYSelector(parent) {};
    VirtualKXYSelector() : KXYSelector() {};

    // Callback setters
    inline void setKXYSelector_MetaObject_Callback(KXYSelector_MetaObject_Callback cb) { kxyselector_metaobject_callback = cb; }
    inline void setKXYSelector_Metacast_Callback(KXYSelector_Metacast_Callback cb) { kxyselector_metacast_callback = cb; }
    inline void setKXYSelector_Metacall_Callback(KXYSelector_Metacall_Callback cb) { kxyselector_metacall_callback = cb; }
    inline void setKXYSelector_MinimumSizeHint_Callback(KXYSelector_MinimumSizeHint_Callback cb) { kxyselector_minimumsizehint_callback = cb; }
    inline void setKXYSelector_DrawContents_Callback(KXYSelector_DrawContents_Callback cb) { kxyselector_drawcontents_callback = cb; }
    inline void setKXYSelector_DrawMarker_Callback(KXYSelector_DrawMarker_Callback cb) { kxyselector_drawmarker_callback = cb; }
    inline void setKXYSelector_PaintEvent_Callback(KXYSelector_PaintEvent_Callback cb) { kxyselector_paintevent_callback = cb; }
    inline void setKXYSelector_MousePressEvent_Callback(KXYSelector_MousePressEvent_Callback cb) { kxyselector_mousepressevent_callback = cb; }
    inline void setKXYSelector_MouseMoveEvent_Callback(KXYSelector_MouseMoveEvent_Callback cb) { kxyselector_mousemoveevent_callback = cb; }
    inline void setKXYSelector_WheelEvent_Callback(KXYSelector_WheelEvent_Callback cb) { kxyselector_wheelevent_callback = cb; }
    inline void setKXYSelector_DevType_Callback(KXYSelector_DevType_Callback cb) { kxyselector_devtype_callback = cb; }
    inline void setKXYSelector_SetVisible_Callback(KXYSelector_SetVisible_Callback cb) { kxyselector_setvisible_callback = cb; }
    inline void setKXYSelector_SizeHint_Callback(KXYSelector_SizeHint_Callback cb) { kxyselector_sizehint_callback = cb; }
    inline void setKXYSelector_HeightForWidth_Callback(KXYSelector_HeightForWidth_Callback cb) { kxyselector_heightforwidth_callback = cb; }
    inline void setKXYSelector_HasHeightForWidth_Callback(KXYSelector_HasHeightForWidth_Callback cb) { kxyselector_hasheightforwidth_callback = cb; }
    inline void setKXYSelector_PaintEngine_Callback(KXYSelector_PaintEngine_Callback cb) { kxyselector_paintengine_callback = cb; }
    inline void setKXYSelector_Event_Callback(KXYSelector_Event_Callback cb) { kxyselector_event_callback = cb; }
    inline void setKXYSelector_MouseReleaseEvent_Callback(KXYSelector_MouseReleaseEvent_Callback cb) { kxyselector_mousereleaseevent_callback = cb; }
    inline void setKXYSelector_MouseDoubleClickEvent_Callback(KXYSelector_MouseDoubleClickEvent_Callback cb) { kxyselector_mousedoubleclickevent_callback = cb; }
    inline void setKXYSelector_KeyPressEvent_Callback(KXYSelector_KeyPressEvent_Callback cb) { kxyselector_keypressevent_callback = cb; }
    inline void setKXYSelector_KeyReleaseEvent_Callback(KXYSelector_KeyReleaseEvent_Callback cb) { kxyselector_keyreleaseevent_callback = cb; }
    inline void setKXYSelector_FocusInEvent_Callback(KXYSelector_FocusInEvent_Callback cb) { kxyselector_focusinevent_callback = cb; }
    inline void setKXYSelector_FocusOutEvent_Callback(KXYSelector_FocusOutEvent_Callback cb) { kxyselector_focusoutevent_callback = cb; }
    inline void setKXYSelector_EnterEvent_Callback(KXYSelector_EnterEvent_Callback cb) { kxyselector_enterevent_callback = cb; }
    inline void setKXYSelector_LeaveEvent_Callback(KXYSelector_LeaveEvent_Callback cb) { kxyselector_leaveevent_callback = cb; }
    inline void setKXYSelector_MoveEvent_Callback(KXYSelector_MoveEvent_Callback cb) { kxyselector_moveevent_callback = cb; }
    inline void setKXYSelector_ResizeEvent_Callback(KXYSelector_ResizeEvent_Callback cb) { kxyselector_resizeevent_callback = cb; }
    inline void setKXYSelector_CloseEvent_Callback(KXYSelector_CloseEvent_Callback cb) { kxyselector_closeevent_callback = cb; }
    inline void setKXYSelector_ContextMenuEvent_Callback(KXYSelector_ContextMenuEvent_Callback cb) { kxyselector_contextmenuevent_callback = cb; }
    inline void setKXYSelector_TabletEvent_Callback(KXYSelector_TabletEvent_Callback cb) { kxyselector_tabletevent_callback = cb; }
    inline void setKXYSelector_ActionEvent_Callback(KXYSelector_ActionEvent_Callback cb) { kxyselector_actionevent_callback = cb; }
    inline void setKXYSelector_DragEnterEvent_Callback(KXYSelector_DragEnterEvent_Callback cb) { kxyselector_dragenterevent_callback = cb; }
    inline void setKXYSelector_DragMoveEvent_Callback(KXYSelector_DragMoveEvent_Callback cb) { kxyselector_dragmoveevent_callback = cb; }
    inline void setKXYSelector_DragLeaveEvent_Callback(KXYSelector_DragLeaveEvent_Callback cb) { kxyselector_dragleaveevent_callback = cb; }
    inline void setKXYSelector_DropEvent_Callback(KXYSelector_DropEvent_Callback cb) { kxyselector_dropevent_callback = cb; }
    inline void setKXYSelector_ShowEvent_Callback(KXYSelector_ShowEvent_Callback cb) { kxyselector_showevent_callback = cb; }
    inline void setKXYSelector_HideEvent_Callback(KXYSelector_HideEvent_Callback cb) { kxyselector_hideevent_callback = cb; }
    inline void setKXYSelector_NativeEvent_Callback(KXYSelector_NativeEvent_Callback cb) { kxyselector_nativeevent_callback = cb; }
    inline void setKXYSelector_ChangeEvent_Callback(KXYSelector_ChangeEvent_Callback cb) { kxyselector_changeevent_callback = cb; }
    inline void setKXYSelector_Metric_Callback(KXYSelector_Metric_Callback cb) { kxyselector_metric_callback = cb; }
    inline void setKXYSelector_InitPainter_Callback(KXYSelector_InitPainter_Callback cb) { kxyselector_initpainter_callback = cb; }
    inline void setKXYSelector_Redirected_Callback(KXYSelector_Redirected_Callback cb) { kxyselector_redirected_callback = cb; }
    inline void setKXYSelector_SharedPainter_Callback(KXYSelector_SharedPainter_Callback cb) { kxyselector_sharedpainter_callback = cb; }
    inline void setKXYSelector_InputMethodEvent_Callback(KXYSelector_InputMethodEvent_Callback cb) { kxyselector_inputmethodevent_callback = cb; }
    inline void setKXYSelector_InputMethodQuery_Callback(KXYSelector_InputMethodQuery_Callback cb) { kxyselector_inputmethodquery_callback = cb; }
    inline void setKXYSelector_FocusNextPrevChild_Callback(KXYSelector_FocusNextPrevChild_Callback cb) { kxyselector_focusnextprevchild_callback = cb; }
    inline void setKXYSelector_EventFilter_Callback(KXYSelector_EventFilter_Callback cb) { kxyselector_eventfilter_callback = cb; }
    inline void setKXYSelector_TimerEvent_Callback(KXYSelector_TimerEvent_Callback cb) { kxyselector_timerevent_callback = cb; }
    inline void setKXYSelector_ChildEvent_Callback(KXYSelector_ChildEvent_Callback cb) { kxyselector_childevent_callback = cb; }
    inline void setKXYSelector_CustomEvent_Callback(KXYSelector_CustomEvent_Callback cb) { kxyselector_customevent_callback = cb; }
    inline void setKXYSelector_ConnectNotify_Callback(KXYSelector_ConnectNotify_Callback cb) { kxyselector_connectnotify_callback = cb; }
    inline void setKXYSelector_DisconnectNotify_Callback(KXYSelector_DisconnectNotify_Callback cb) { kxyselector_disconnectnotify_callback = cb; }
    inline void setKXYSelector_ValuesFromPosition_Callback(KXYSelector_ValuesFromPosition_Callback cb) { kxyselector_valuesfromposition_callback = cb; }
    inline void setKXYSelector_UpdateMicroFocus_Callback(KXYSelector_UpdateMicroFocus_Callback cb) { kxyselector_updatemicrofocus_callback = cb; }
    inline void setKXYSelector_Create_Callback(KXYSelector_Create_Callback cb) { kxyselector_create_callback = cb; }
    inline void setKXYSelector_Destroy_Callback(KXYSelector_Destroy_Callback cb) { kxyselector_destroy_callback = cb; }
    inline void setKXYSelector_FocusNextChild_Callback(KXYSelector_FocusNextChild_Callback cb) { kxyselector_focusnextchild_callback = cb; }
    inline void setKXYSelector_FocusPreviousChild_Callback(KXYSelector_FocusPreviousChild_Callback cb) { kxyselector_focuspreviouschild_callback = cb; }
    inline void setKXYSelector_Sender_Callback(KXYSelector_Sender_Callback cb) { kxyselector_sender_callback = cb; }
    inline void setKXYSelector_SenderSignalIndex_Callback(KXYSelector_SenderSignalIndex_Callback cb) { kxyselector_sendersignalindex_callback = cb; }
    inline void setKXYSelector_Receivers_Callback(KXYSelector_Receivers_Callback cb) { kxyselector_receivers_callback = cb; }
    inline void setKXYSelector_IsSignalConnected_Callback(KXYSelector_IsSignalConnected_Callback cb) { kxyselector_issignalconnected_callback = cb; }
    inline void setKXYSelector_GetDecodedMetricF_Callback(KXYSelector_GetDecodedMetricF_Callback cb) { kxyselector_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKXYSelector_MetaObject_IsBase(bool value) const { kxyselector_metaobject_isbase = value; }
    inline void setKXYSelector_Metacast_IsBase(bool value) const { kxyselector_metacast_isbase = value; }
    inline void setKXYSelector_Metacall_IsBase(bool value) const { kxyselector_metacall_isbase = value; }
    inline void setKXYSelector_MinimumSizeHint_IsBase(bool value) const { kxyselector_minimumsizehint_isbase = value; }
    inline void setKXYSelector_DrawContents_IsBase(bool value) const { kxyselector_drawcontents_isbase = value; }
    inline void setKXYSelector_DrawMarker_IsBase(bool value) const { kxyselector_drawmarker_isbase = value; }
    inline void setKXYSelector_PaintEvent_IsBase(bool value) const { kxyselector_paintevent_isbase = value; }
    inline void setKXYSelector_MousePressEvent_IsBase(bool value) const { kxyselector_mousepressevent_isbase = value; }
    inline void setKXYSelector_MouseMoveEvent_IsBase(bool value) const { kxyselector_mousemoveevent_isbase = value; }
    inline void setKXYSelector_WheelEvent_IsBase(bool value) const { kxyselector_wheelevent_isbase = value; }
    inline void setKXYSelector_DevType_IsBase(bool value) const { kxyselector_devtype_isbase = value; }
    inline void setKXYSelector_SetVisible_IsBase(bool value) const { kxyselector_setvisible_isbase = value; }
    inline void setKXYSelector_SizeHint_IsBase(bool value) const { kxyselector_sizehint_isbase = value; }
    inline void setKXYSelector_HeightForWidth_IsBase(bool value) const { kxyselector_heightforwidth_isbase = value; }
    inline void setKXYSelector_HasHeightForWidth_IsBase(bool value) const { kxyselector_hasheightforwidth_isbase = value; }
    inline void setKXYSelector_PaintEngine_IsBase(bool value) const { kxyselector_paintengine_isbase = value; }
    inline void setKXYSelector_Event_IsBase(bool value) const { kxyselector_event_isbase = value; }
    inline void setKXYSelector_MouseReleaseEvent_IsBase(bool value) const { kxyselector_mousereleaseevent_isbase = value; }
    inline void setKXYSelector_MouseDoubleClickEvent_IsBase(bool value) const { kxyselector_mousedoubleclickevent_isbase = value; }
    inline void setKXYSelector_KeyPressEvent_IsBase(bool value) const { kxyselector_keypressevent_isbase = value; }
    inline void setKXYSelector_KeyReleaseEvent_IsBase(bool value) const { kxyselector_keyreleaseevent_isbase = value; }
    inline void setKXYSelector_FocusInEvent_IsBase(bool value) const { kxyselector_focusinevent_isbase = value; }
    inline void setKXYSelector_FocusOutEvent_IsBase(bool value) const { kxyselector_focusoutevent_isbase = value; }
    inline void setKXYSelector_EnterEvent_IsBase(bool value) const { kxyselector_enterevent_isbase = value; }
    inline void setKXYSelector_LeaveEvent_IsBase(bool value) const { kxyselector_leaveevent_isbase = value; }
    inline void setKXYSelector_MoveEvent_IsBase(bool value) const { kxyselector_moveevent_isbase = value; }
    inline void setKXYSelector_ResizeEvent_IsBase(bool value) const { kxyselector_resizeevent_isbase = value; }
    inline void setKXYSelector_CloseEvent_IsBase(bool value) const { kxyselector_closeevent_isbase = value; }
    inline void setKXYSelector_ContextMenuEvent_IsBase(bool value) const { kxyselector_contextmenuevent_isbase = value; }
    inline void setKXYSelector_TabletEvent_IsBase(bool value) const { kxyselector_tabletevent_isbase = value; }
    inline void setKXYSelector_ActionEvent_IsBase(bool value) const { kxyselector_actionevent_isbase = value; }
    inline void setKXYSelector_DragEnterEvent_IsBase(bool value) const { kxyselector_dragenterevent_isbase = value; }
    inline void setKXYSelector_DragMoveEvent_IsBase(bool value) const { kxyselector_dragmoveevent_isbase = value; }
    inline void setKXYSelector_DragLeaveEvent_IsBase(bool value) const { kxyselector_dragleaveevent_isbase = value; }
    inline void setKXYSelector_DropEvent_IsBase(bool value) const { kxyselector_dropevent_isbase = value; }
    inline void setKXYSelector_ShowEvent_IsBase(bool value) const { kxyselector_showevent_isbase = value; }
    inline void setKXYSelector_HideEvent_IsBase(bool value) const { kxyselector_hideevent_isbase = value; }
    inline void setKXYSelector_NativeEvent_IsBase(bool value) const { kxyselector_nativeevent_isbase = value; }
    inline void setKXYSelector_ChangeEvent_IsBase(bool value) const { kxyselector_changeevent_isbase = value; }
    inline void setKXYSelector_Metric_IsBase(bool value) const { kxyselector_metric_isbase = value; }
    inline void setKXYSelector_InitPainter_IsBase(bool value) const { kxyselector_initpainter_isbase = value; }
    inline void setKXYSelector_Redirected_IsBase(bool value) const { kxyselector_redirected_isbase = value; }
    inline void setKXYSelector_SharedPainter_IsBase(bool value) const { kxyselector_sharedpainter_isbase = value; }
    inline void setKXYSelector_InputMethodEvent_IsBase(bool value) const { kxyselector_inputmethodevent_isbase = value; }
    inline void setKXYSelector_InputMethodQuery_IsBase(bool value) const { kxyselector_inputmethodquery_isbase = value; }
    inline void setKXYSelector_FocusNextPrevChild_IsBase(bool value) const { kxyselector_focusnextprevchild_isbase = value; }
    inline void setKXYSelector_EventFilter_IsBase(bool value) const { kxyselector_eventfilter_isbase = value; }
    inline void setKXYSelector_TimerEvent_IsBase(bool value) const { kxyselector_timerevent_isbase = value; }
    inline void setKXYSelector_ChildEvent_IsBase(bool value) const { kxyselector_childevent_isbase = value; }
    inline void setKXYSelector_CustomEvent_IsBase(bool value) const { kxyselector_customevent_isbase = value; }
    inline void setKXYSelector_ConnectNotify_IsBase(bool value) const { kxyselector_connectnotify_isbase = value; }
    inline void setKXYSelector_DisconnectNotify_IsBase(bool value) const { kxyselector_disconnectnotify_isbase = value; }
    inline void setKXYSelector_ValuesFromPosition_IsBase(bool value) const { kxyselector_valuesfromposition_isbase = value; }
    inline void setKXYSelector_UpdateMicroFocus_IsBase(bool value) const { kxyselector_updatemicrofocus_isbase = value; }
    inline void setKXYSelector_Create_IsBase(bool value) const { kxyselector_create_isbase = value; }
    inline void setKXYSelector_Destroy_IsBase(bool value) const { kxyselector_destroy_isbase = value; }
    inline void setKXYSelector_FocusNextChild_IsBase(bool value) const { kxyselector_focusnextchild_isbase = value; }
    inline void setKXYSelector_FocusPreviousChild_IsBase(bool value) const { kxyselector_focuspreviouschild_isbase = value; }
    inline void setKXYSelector_Sender_IsBase(bool value) const { kxyselector_sender_isbase = value; }
    inline void setKXYSelector_SenderSignalIndex_IsBase(bool value) const { kxyselector_sendersignalindex_isbase = value; }
    inline void setKXYSelector_Receivers_IsBase(bool value) const { kxyselector_receivers_isbase = value; }
    inline void setKXYSelector_IsSignalConnected_IsBase(bool value) const { kxyselector_issignalconnected_isbase = value; }
    inline void setKXYSelector_GetDecodedMetricF_IsBase(bool value) const { kxyselector_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kxyselector_metaobject_isbase) {
            kxyselector_metaobject_isbase = false;
            return KXYSelector::metaObject();
        }
        auto metaobject_cb = kxyselector_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KXYSelector::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kxyselector_metacast_isbase) {
            kxyselector_metacast_isbase = false;
            return KXYSelector::qt_metacast(param1);
        }
        auto metacast_cb = kxyselector_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KXYSelector::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kxyselector_metacall_isbase) {
            kxyselector_metacall_isbase = false;
            return KXYSelector::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kxyselector_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KXYSelector::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kxyselector_minimumsizehint_isbase) {
            kxyselector_minimumsizehint_isbase = false;
            return KXYSelector::minimumSizeHint();
        }
        auto minimumsizehint_cb = kxyselector_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KXYSelector::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawContents(QPainter* param1) override {
        if (kxyselector_drawcontents_isbase) {
            kxyselector_drawcontents_isbase = false;
            KXYSelector::drawContents(param1);
            return;
        }
        auto drawcontents_cb = kxyselector_drawcontents_callback;
        if (drawcontents_cb) {
            QPainter* cbval1 = param1;

            drawcontents_cb(this, cbval1);
            return;
        }
        KXYSelector::drawContents(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawMarker(QPainter* p, int xp, int yp) override {
        if (kxyselector_drawmarker_isbase) {
            kxyselector_drawmarker_isbase = false;
            KXYSelector::drawMarker(p, xp, yp);
            return;
        }
        auto drawmarker_cb = kxyselector_drawmarker_callback;
        if (drawmarker_cb) {
            QPainter* cbval1 = p;
            int cbval2 = xp;
            int cbval3 = yp;

            drawmarker_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KXYSelector::drawMarker(p, xp, yp);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (kxyselector_paintevent_isbase) {
            kxyselector_paintevent_isbase = false;
            KXYSelector::paintEvent(e);
            return;
        }
        auto paintevent_cb = kxyselector_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = e;

            paintevent_cb(this, cbval1);
            return;
        }
        KXYSelector::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (kxyselector_mousepressevent_isbase) {
            kxyselector_mousepressevent_isbase = false;
            KXYSelector::mousePressEvent(e);
            return;
        }
        auto mousepressevent_cb = kxyselector_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = e;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KXYSelector::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (kxyselector_mousemoveevent_isbase) {
            kxyselector_mousemoveevent_isbase = false;
            KXYSelector::mouseMoveEvent(e);
            return;
        }
        auto mousemoveevent_cb = kxyselector_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = e;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KXYSelector::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (kxyselector_wheelevent_isbase) {
            kxyselector_wheelevent_isbase = false;
            KXYSelector::wheelEvent(param1);
            return;
        }
        auto wheelevent_cb = kxyselector_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = param1;

            wheelevent_cb(this, cbval1);
            return;
        }
        KXYSelector::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kxyselector_devtype_isbase) {
            kxyselector_devtype_isbase = false;
            return KXYSelector::devType();
        }
        auto devtype_cb = kxyselector_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KXYSelector::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kxyselector_setvisible_isbase) {
            kxyselector_setvisible_isbase = false;
            KXYSelector::setVisible(visible);
            return;
        }
        auto setvisible_cb = kxyselector_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KXYSelector::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kxyselector_sizehint_isbase) {
            kxyselector_sizehint_isbase = false;
            return KXYSelector::sizeHint();
        }
        auto sizehint_cb = kxyselector_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KXYSelector::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kxyselector_heightforwidth_isbase) {
            kxyselector_heightforwidth_isbase = false;
            return KXYSelector::heightForWidth(param1);
        }
        auto heightforwidth_cb = kxyselector_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KXYSelector::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kxyselector_hasheightforwidth_isbase) {
            kxyselector_hasheightforwidth_isbase = false;
            return KXYSelector::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kxyselector_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KXYSelector::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kxyselector_paintengine_isbase) {
            kxyselector_paintengine_isbase = false;
            return KXYSelector::paintEngine();
        }
        auto paintengine_cb = kxyselector_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KXYSelector::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kxyselector_event_isbase) {
            kxyselector_event_isbase = false;
            return KXYSelector::event(event);
        }
        auto event_cb = kxyselector_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KXYSelector::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kxyselector_mousereleaseevent_isbase) {
            kxyselector_mousereleaseevent_isbase = false;
            KXYSelector::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kxyselector_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KXYSelector::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kxyselector_mousedoubleclickevent_isbase) {
            kxyselector_mousedoubleclickevent_isbase = false;
            KXYSelector::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kxyselector_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KXYSelector::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kxyselector_keypressevent_isbase) {
            kxyselector_keypressevent_isbase = false;
            KXYSelector::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = kxyselector_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        KXYSelector::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kxyselector_keyreleaseevent_isbase) {
            kxyselector_keyreleaseevent_isbase = false;
            KXYSelector::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kxyselector_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KXYSelector::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kxyselector_focusinevent_isbase) {
            kxyselector_focusinevent_isbase = false;
            KXYSelector::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kxyselector_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KXYSelector::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kxyselector_focusoutevent_isbase) {
            kxyselector_focusoutevent_isbase = false;
            KXYSelector::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kxyselector_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KXYSelector::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kxyselector_enterevent_isbase) {
            kxyselector_enterevent_isbase = false;
            KXYSelector::enterEvent(event);
            return;
        }
        auto enterevent_cb = kxyselector_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KXYSelector::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kxyselector_leaveevent_isbase) {
            kxyselector_leaveevent_isbase = false;
            KXYSelector::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kxyselector_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KXYSelector::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kxyselector_moveevent_isbase) {
            kxyselector_moveevent_isbase = false;
            KXYSelector::moveEvent(event);
            return;
        }
        auto moveevent_cb = kxyselector_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KXYSelector::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kxyselector_resizeevent_isbase) {
            kxyselector_resizeevent_isbase = false;
            KXYSelector::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = kxyselector_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KXYSelector::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kxyselector_closeevent_isbase) {
            kxyselector_closeevent_isbase = false;
            KXYSelector::closeEvent(event);
            return;
        }
        auto closeevent_cb = kxyselector_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KXYSelector::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kxyselector_contextmenuevent_isbase) {
            kxyselector_contextmenuevent_isbase = false;
            KXYSelector::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = kxyselector_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KXYSelector::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kxyselector_tabletevent_isbase) {
            kxyselector_tabletevent_isbase = false;
            KXYSelector::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kxyselector_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KXYSelector::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kxyselector_actionevent_isbase) {
            kxyselector_actionevent_isbase = false;
            KXYSelector::actionEvent(event);
            return;
        }
        auto actionevent_cb = kxyselector_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KXYSelector::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kxyselector_dragenterevent_isbase) {
            kxyselector_dragenterevent_isbase = false;
            KXYSelector::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kxyselector_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KXYSelector::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kxyselector_dragmoveevent_isbase) {
            kxyselector_dragmoveevent_isbase = false;
            KXYSelector::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kxyselector_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KXYSelector::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kxyselector_dragleaveevent_isbase) {
            kxyselector_dragleaveevent_isbase = false;
            KXYSelector::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kxyselector_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KXYSelector::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kxyselector_dropevent_isbase) {
            kxyselector_dropevent_isbase = false;
            KXYSelector::dropEvent(event);
            return;
        }
        auto dropevent_cb = kxyselector_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KXYSelector::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kxyselector_showevent_isbase) {
            kxyselector_showevent_isbase = false;
            KXYSelector::showEvent(event);
            return;
        }
        auto showevent_cb = kxyselector_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KXYSelector::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kxyselector_hideevent_isbase) {
            kxyselector_hideevent_isbase = false;
            KXYSelector::hideEvent(event);
            return;
        }
        auto hideevent_cb = kxyselector_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KXYSelector::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kxyselector_nativeevent_isbase) {
            kxyselector_nativeevent_isbase = false;
            return KXYSelector::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kxyselector_nativeevent_callback;
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
        return KXYSelector::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kxyselector_changeevent_isbase) {
            kxyselector_changeevent_isbase = false;
            KXYSelector::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kxyselector_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KXYSelector::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kxyselector_metric_isbase) {
            kxyselector_metric_isbase = false;
            return KXYSelector::metric(param1);
        }
        auto metric_cb = kxyselector_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KXYSelector::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kxyselector_initpainter_isbase) {
            kxyselector_initpainter_isbase = false;
            KXYSelector::initPainter(painter);
            return;
        }
        auto initpainter_cb = kxyselector_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KXYSelector::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kxyselector_redirected_isbase) {
            kxyselector_redirected_isbase = false;
            return KXYSelector::redirected(offset);
        }
        auto redirected_cb = kxyselector_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KXYSelector::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kxyselector_sharedpainter_isbase) {
            kxyselector_sharedpainter_isbase = false;
            return KXYSelector::sharedPainter();
        }
        auto sharedpainter_cb = kxyselector_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KXYSelector::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kxyselector_inputmethodevent_isbase) {
            kxyselector_inputmethodevent_isbase = false;
            KXYSelector::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kxyselector_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KXYSelector::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kxyselector_inputmethodquery_isbase) {
            kxyselector_inputmethodquery_isbase = false;
            return KXYSelector::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kxyselector_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KXYSelector::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kxyselector_focusnextprevchild_isbase) {
            kxyselector_focusnextprevchild_isbase = false;
            return KXYSelector::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kxyselector_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KXYSelector::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kxyselector_eventfilter_isbase) {
            kxyselector_eventfilter_isbase = false;
            return KXYSelector::eventFilter(watched, event);
        }
        auto eventfilter_cb = kxyselector_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KXYSelector::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kxyselector_timerevent_isbase) {
            kxyselector_timerevent_isbase = false;
            KXYSelector::timerEvent(event);
            return;
        }
        auto timerevent_cb = kxyselector_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KXYSelector::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kxyselector_childevent_isbase) {
            kxyselector_childevent_isbase = false;
            KXYSelector::childEvent(event);
            return;
        }
        auto childevent_cb = kxyselector_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KXYSelector::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kxyselector_customevent_isbase) {
            kxyselector_customevent_isbase = false;
            KXYSelector::customEvent(event);
            return;
        }
        auto customevent_cb = kxyselector_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KXYSelector::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kxyselector_connectnotify_isbase) {
            kxyselector_connectnotify_isbase = false;
            KXYSelector::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kxyselector_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KXYSelector::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kxyselector_disconnectnotify_isbase) {
            kxyselector_disconnectnotify_isbase = false;
            KXYSelector::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kxyselector_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KXYSelector::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void valuesFromPosition(int x, int y, int& xVal, int& yVal) const {
        if (kxyselector_valuesfromposition_isbase) {
            kxyselector_valuesfromposition_isbase = false;
            KXYSelector::valuesFromPosition(x, y, xVal, yVal);
            return;
        }
        auto valuesfromposition_cb = kxyselector_valuesfromposition_callback;
        if (valuesfromposition_cb) {
            int cbval1 = x;
            int cbval2 = y;
            int* cbval3 = &xVal;
            int* cbval4 = &yVal;

            valuesfromposition_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        KXYSelector::valuesFromPosition(x, y, xVal, yVal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kxyselector_updatemicrofocus_isbase) {
            kxyselector_updatemicrofocus_isbase = false;
            KXYSelector::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kxyselector_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KXYSelector::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kxyselector_create_isbase) {
            kxyselector_create_isbase = false;
            KXYSelector::create();
            return;
        }
        auto create_cb = kxyselector_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KXYSelector::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kxyselector_destroy_isbase) {
            kxyselector_destroy_isbase = false;
            KXYSelector::destroy();
            return;
        }
        auto destroy_cb = kxyselector_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KXYSelector::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kxyselector_focusnextchild_isbase) {
            kxyselector_focusnextchild_isbase = false;
            return KXYSelector::focusNextChild();
        }
        auto focusnextchild_cb = kxyselector_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KXYSelector::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kxyselector_focuspreviouschild_isbase) {
            kxyselector_focuspreviouschild_isbase = false;
            return KXYSelector::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kxyselector_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KXYSelector::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kxyselector_sender_isbase) {
            kxyselector_sender_isbase = false;
            return KXYSelector::sender();
        }
        auto sender_cb = kxyselector_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KXYSelector::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kxyselector_sendersignalindex_isbase) {
            kxyselector_sendersignalindex_isbase = false;
            return KXYSelector::senderSignalIndex();
        }
        auto sendersignalindex_cb = kxyselector_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KXYSelector::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kxyselector_receivers_isbase) {
            kxyselector_receivers_isbase = false;
            return KXYSelector::receivers(signal);
        }
        auto receivers_cb = kxyselector_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KXYSelector::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kxyselector_issignalconnected_isbase) {
            kxyselector_issignalconnected_isbase = false;
            return KXYSelector::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kxyselector_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KXYSelector::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kxyselector_getdecodedmetricf_isbase) {
            kxyselector_getdecodedmetricf_isbase = false;
            return KXYSelector::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kxyselector_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KXYSelector::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KXYSelector_DrawContents(KXYSelector* self, QPainter* param1);
    friend void KXYSelector_SuperDrawContents(KXYSelector* self, QPainter* param1);
    friend void KXYSelector_DrawMarker(KXYSelector* self, QPainter* p, int xp, int yp);
    friend void KXYSelector_SuperDrawMarker(KXYSelector* self, QPainter* p, int xp, int yp);
    friend void KXYSelector_PaintEvent(KXYSelector* self, QPaintEvent* e);
    friend void KXYSelector_SuperPaintEvent(KXYSelector* self, QPaintEvent* e);
    friend void KXYSelector_MousePressEvent(KXYSelector* self, QMouseEvent* e);
    friend void KXYSelector_SuperMousePressEvent(KXYSelector* self, QMouseEvent* e);
    friend void KXYSelector_MouseMoveEvent(KXYSelector* self, QMouseEvent* e);
    friend void KXYSelector_SuperMouseMoveEvent(KXYSelector* self, QMouseEvent* e);
    friend void KXYSelector_WheelEvent(KXYSelector* self, QWheelEvent* param1);
    friend void KXYSelector_SuperWheelEvent(KXYSelector* self, QWheelEvent* param1);
    friend bool KXYSelector_Event(KXYSelector* self, QEvent* event);
    friend bool KXYSelector_SuperEvent(KXYSelector* self, QEvent* event);
    friend void KXYSelector_MouseReleaseEvent(KXYSelector* self, QMouseEvent* event);
    friend void KXYSelector_SuperMouseReleaseEvent(KXYSelector* self, QMouseEvent* event);
    friend void KXYSelector_MouseDoubleClickEvent(KXYSelector* self, QMouseEvent* event);
    friend void KXYSelector_SuperMouseDoubleClickEvent(KXYSelector* self, QMouseEvent* event);
    friend void KXYSelector_KeyPressEvent(KXYSelector* self, QKeyEvent* event);
    friend void KXYSelector_SuperKeyPressEvent(KXYSelector* self, QKeyEvent* event);
    friend void KXYSelector_KeyReleaseEvent(KXYSelector* self, QKeyEvent* event);
    friend void KXYSelector_SuperKeyReleaseEvent(KXYSelector* self, QKeyEvent* event);
    friend void KXYSelector_FocusInEvent(KXYSelector* self, QFocusEvent* event);
    friend void KXYSelector_SuperFocusInEvent(KXYSelector* self, QFocusEvent* event);
    friend void KXYSelector_FocusOutEvent(KXYSelector* self, QFocusEvent* event);
    friend void KXYSelector_SuperFocusOutEvent(KXYSelector* self, QFocusEvent* event);
    friend void KXYSelector_EnterEvent(KXYSelector* self, QEnterEvent* event);
    friend void KXYSelector_SuperEnterEvent(KXYSelector* self, QEnterEvent* event);
    friend void KXYSelector_LeaveEvent(KXYSelector* self, QEvent* event);
    friend void KXYSelector_SuperLeaveEvent(KXYSelector* self, QEvent* event);
    friend void KXYSelector_MoveEvent(KXYSelector* self, QMoveEvent* event);
    friend void KXYSelector_SuperMoveEvent(KXYSelector* self, QMoveEvent* event);
    friend void KXYSelector_ResizeEvent(KXYSelector* self, QResizeEvent* event);
    friend void KXYSelector_SuperResizeEvent(KXYSelector* self, QResizeEvent* event);
    friend void KXYSelector_CloseEvent(KXYSelector* self, QCloseEvent* event);
    friend void KXYSelector_SuperCloseEvent(KXYSelector* self, QCloseEvent* event);
    friend void KXYSelector_ContextMenuEvent(KXYSelector* self, QContextMenuEvent* event);
    friend void KXYSelector_SuperContextMenuEvent(KXYSelector* self, QContextMenuEvent* event);
    friend void KXYSelector_TabletEvent(KXYSelector* self, QTabletEvent* event);
    friend void KXYSelector_SuperTabletEvent(KXYSelector* self, QTabletEvent* event);
    friend void KXYSelector_ActionEvent(KXYSelector* self, QActionEvent* event);
    friend void KXYSelector_SuperActionEvent(KXYSelector* self, QActionEvent* event);
    friend void KXYSelector_DragEnterEvent(KXYSelector* self, QDragEnterEvent* event);
    friend void KXYSelector_SuperDragEnterEvent(KXYSelector* self, QDragEnterEvent* event);
    friend void KXYSelector_DragMoveEvent(KXYSelector* self, QDragMoveEvent* event);
    friend void KXYSelector_SuperDragMoveEvent(KXYSelector* self, QDragMoveEvent* event);
    friend void KXYSelector_DragLeaveEvent(KXYSelector* self, QDragLeaveEvent* event);
    friend void KXYSelector_SuperDragLeaveEvent(KXYSelector* self, QDragLeaveEvent* event);
    friend void KXYSelector_DropEvent(KXYSelector* self, QDropEvent* event);
    friend void KXYSelector_SuperDropEvent(KXYSelector* self, QDropEvent* event);
    friend void KXYSelector_ShowEvent(KXYSelector* self, QShowEvent* event);
    friend void KXYSelector_SuperShowEvent(KXYSelector* self, QShowEvent* event);
    friend void KXYSelector_HideEvent(KXYSelector* self, QHideEvent* event);
    friend void KXYSelector_SuperHideEvent(KXYSelector* self, QHideEvent* event);
    friend bool KXYSelector_NativeEvent(KXYSelector* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KXYSelector_SuperNativeEvent(KXYSelector* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KXYSelector_ChangeEvent(KXYSelector* self, QEvent* param1);
    friend void KXYSelector_SuperChangeEvent(KXYSelector* self, QEvent* param1);
    friend int KXYSelector_Metric(const KXYSelector* self, int param1);
    friend int KXYSelector_SuperMetric(const KXYSelector* self, int param1);
    friend void KXYSelector_InitPainter(const KXYSelector* self, QPainter* painter);
    friend void KXYSelector_SuperInitPainter(const KXYSelector* self, QPainter* painter);
    friend QPaintDevice* KXYSelector_Redirected(const KXYSelector* self, QPoint* offset);
    friend QPaintDevice* KXYSelector_SuperRedirected(const KXYSelector* self, QPoint* offset);
    friend QPainter* KXYSelector_SharedPainter(const KXYSelector* self);
    friend QPainter* KXYSelector_SuperSharedPainter(const KXYSelector* self);
    friend void KXYSelector_InputMethodEvent(KXYSelector* self, QInputMethodEvent* param1);
    friend void KXYSelector_SuperInputMethodEvent(KXYSelector* self, QInputMethodEvent* param1);
    friend bool KXYSelector_FocusNextPrevChild(KXYSelector* self, bool next);
    friend bool KXYSelector_SuperFocusNextPrevChild(KXYSelector* self, bool next);
    friend void KXYSelector_TimerEvent(KXYSelector* self, QTimerEvent* event);
    friend void KXYSelector_SuperTimerEvent(KXYSelector* self, QTimerEvent* event);
    friend void KXYSelector_ChildEvent(KXYSelector* self, QChildEvent* event);
    friend void KXYSelector_SuperChildEvent(KXYSelector* self, QChildEvent* event);
    friend void KXYSelector_CustomEvent(KXYSelector* self, QEvent* event);
    friend void KXYSelector_SuperCustomEvent(KXYSelector* self, QEvent* event);
    friend void KXYSelector_ConnectNotify(KXYSelector* self, const QMetaMethod* signal);
    friend void KXYSelector_SuperConnectNotify(KXYSelector* self, const QMetaMethod* signal);
    friend void KXYSelector_DisconnectNotify(KXYSelector* self, const QMetaMethod* signal);
    friend void KXYSelector_SuperDisconnectNotify(KXYSelector* self, const QMetaMethod* signal);
    friend void KXYSelector_ValuesFromPosition(const KXYSelector* self, int x, int y, int* xVal, int* yVal);
    friend void KXYSelector_SuperValuesFromPosition(const KXYSelector* self, int x, int y, int* xVal, int* yVal);
    friend void KXYSelector_UpdateMicroFocus(KXYSelector* self);
    friend void KXYSelector_SuperUpdateMicroFocus(KXYSelector* self);
    friend void KXYSelector_Create(KXYSelector* self);
    friend void KXYSelector_SuperCreate(KXYSelector* self);
    friend void KXYSelector_Destroy(KXYSelector* self);
    friend void KXYSelector_SuperDestroy(KXYSelector* self);
    friend bool KXYSelector_FocusNextChild(KXYSelector* self);
    friend bool KXYSelector_SuperFocusNextChild(KXYSelector* self);
    friend bool KXYSelector_FocusPreviousChild(KXYSelector* self);
    friend bool KXYSelector_SuperFocusPreviousChild(KXYSelector* self);
    friend QObject* KXYSelector_Sender(const KXYSelector* self);
    friend QObject* KXYSelector_SuperSender(const KXYSelector* self);
    friend int KXYSelector_SenderSignalIndex(const KXYSelector* self);
    friend int KXYSelector_SuperSenderSignalIndex(const KXYSelector* self);
    friend int KXYSelector_Receivers(const KXYSelector* self, const char* signal);
    friend int KXYSelector_SuperReceivers(const KXYSelector* self, const char* signal);
    friend bool KXYSelector_IsSignalConnected(const KXYSelector* self, const QMetaMethod* signal);
    friend bool KXYSelector_SuperIsSignalConnected(const KXYSelector* self, const QMetaMethod* signal);
    friend double KXYSelector_GetDecodedMetricF(const KXYSelector* self, int metricA, int metricB);
    friend double KXYSelector_SuperGetDecodedMetricF(const KXYSelector* self, int metricA, int metricB);
};

#endif
