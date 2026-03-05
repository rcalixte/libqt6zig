#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPASSWORDLINEEDIT_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPASSWORDLINEEDIT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPasswordLineEdit so that we can call protected methods
class VirtualKPasswordLineEdit final : public KPasswordLineEdit {

  public:
    // Virtual class boolean flag
    bool isVirtualKPasswordLineEdit = true;

    // Virtual class public types (including callbacks)
    using KPasswordLineEdit_MetaObject_Callback = QMetaObject* (*)();
    using KPasswordLineEdit_Metacast_Callback = void* (*)(KPasswordLineEdit*, const char*);
    using KPasswordLineEdit_Metacall_Callback = int (*)(KPasswordLineEdit*, int, int, void**);
    using KPasswordLineEdit_DevType_Callback = int (*)();
    using KPasswordLineEdit_SetVisible_Callback = void (*)(KPasswordLineEdit*, bool);
    using KPasswordLineEdit_SizeHint_Callback = QSize* (*)();
    using KPasswordLineEdit_MinimumSizeHint_Callback = QSize* (*)();
    using KPasswordLineEdit_HeightForWidth_Callback = int (*)(const KPasswordLineEdit*, int);
    using KPasswordLineEdit_HasHeightForWidth_Callback = bool (*)();
    using KPasswordLineEdit_PaintEngine_Callback = QPaintEngine* (*)();
    using KPasswordLineEdit_Event_Callback = bool (*)(KPasswordLineEdit*, QEvent*);
    using KPasswordLineEdit_MousePressEvent_Callback = void (*)(KPasswordLineEdit*, QMouseEvent*);
    using KPasswordLineEdit_MouseReleaseEvent_Callback = void (*)(KPasswordLineEdit*, QMouseEvent*);
    using KPasswordLineEdit_MouseDoubleClickEvent_Callback = void (*)(KPasswordLineEdit*, QMouseEvent*);
    using KPasswordLineEdit_MouseMoveEvent_Callback = void (*)(KPasswordLineEdit*, QMouseEvent*);
    using KPasswordLineEdit_WheelEvent_Callback = void (*)(KPasswordLineEdit*, QWheelEvent*);
    using KPasswordLineEdit_KeyPressEvent_Callback = void (*)(KPasswordLineEdit*, QKeyEvent*);
    using KPasswordLineEdit_KeyReleaseEvent_Callback = void (*)(KPasswordLineEdit*, QKeyEvent*);
    using KPasswordLineEdit_FocusInEvent_Callback = void (*)(KPasswordLineEdit*, QFocusEvent*);
    using KPasswordLineEdit_FocusOutEvent_Callback = void (*)(KPasswordLineEdit*, QFocusEvent*);
    using KPasswordLineEdit_EnterEvent_Callback = void (*)(KPasswordLineEdit*, QEnterEvent*);
    using KPasswordLineEdit_LeaveEvent_Callback = void (*)(KPasswordLineEdit*, QEvent*);
    using KPasswordLineEdit_PaintEvent_Callback = void (*)(KPasswordLineEdit*, QPaintEvent*);
    using KPasswordLineEdit_MoveEvent_Callback = void (*)(KPasswordLineEdit*, QMoveEvent*);
    using KPasswordLineEdit_ResizeEvent_Callback = void (*)(KPasswordLineEdit*, QResizeEvent*);
    using KPasswordLineEdit_CloseEvent_Callback = void (*)(KPasswordLineEdit*, QCloseEvent*);
    using KPasswordLineEdit_ContextMenuEvent_Callback = void (*)(KPasswordLineEdit*, QContextMenuEvent*);
    using KPasswordLineEdit_TabletEvent_Callback = void (*)(KPasswordLineEdit*, QTabletEvent*);
    using KPasswordLineEdit_ActionEvent_Callback = void (*)(KPasswordLineEdit*, QActionEvent*);
    using KPasswordLineEdit_DragEnterEvent_Callback = void (*)(KPasswordLineEdit*, QDragEnterEvent*);
    using KPasswordLineEdit_DragMoveEvent_Callback = void (*)(KPasswordLineEdit*, QDragMoveEvent*);
    using KPasswordLineEdit_DragLeaveEvent_Callback = void (*)(KPasswordLineEdit*, QDragLeaveEvent*);
    using KPasswordLineEdit_DropEvent_Callback = void (*)(KPasswordLineEdit*, QDropEvent*);
    using KPasswordLineEdit_ShowEvent_Callback = void (*)(KPasswordLineEdit*, QShowEvent*);
    using KPasswordLineEdit_HideEvent_Callback = void (*)(KPasswordLineEdit*, QHideEvent*);
    using KPasswordLineEdit_NativeEvent_Callback = bool (*)(KPasswordLineEdit*, libqt_string, void*, intptr_t*);
    using KPasswordLineEdit_ChangeEvent_Callback = void (*)(KPasswordLineEdit*, QEvent*);
    using KPasswordLineEdit_Metric_Callback = int (*)(const KPasswordLineEdit*, int);
    using KPasswordLineEdit_InitPainter_Callback = void (*)(const KPasswordLineEdit*, QPainter*);
    using KPasswordLineEdit_Redirected_Callback = QPaintDevice* (*)(const KPasswordLineEdit*, QPoint*);
    using KPasswordLineEdit_SharedPainter_Callback = QPainter* (*)();
    using KPasswordLineEdit_InputMethodEvent_Callback = void (*)(KPasswordLineEdit*, QInputMethodEvent*);
    using KPasswordLineEdit_InputMethodQuery_Callback = QVariant* (*)(const KPasswordLineEdit*, int);
    using KPasswordLineEdit_FocusNextPrevChild_Callback = bool (*)(KPasswordLineEdit*, bool);
    using KPasswordLineEdit_EventFilter_Callback = bool (*)(KPasswordLineEdit*, QObject*, QEvent*);
    using KPasswordLineEdit_TimerEvent_Callback = void (*)(KPasswordLineEdit*, QTimerEvent*);
    using KPasswordLineEdit_ChildEvent_Callback = void (*)(KPasswordLineEdit*, QChildEvent*);
    using KPasswordLineEdit_CustomEvent_Callback = void (*)(KPasswordLineEdit*, QEvent*);
    using KPasswordLineEdit_ConnectNotify_Callback = void (*)(KPasswordLineEdit*, QMetaMethod*);
    using KPasswordLineEdit_DisconnectNotify_Callback = void (*)(KPasswordLineEdit*, QMetaMethod*);
    using KPasswordLineEdit_UpdateMicroFocus_Callback = void (*)();
    using KPasswordLineEdit_Create_Callback = void (*)();
    using KPasswordLineEdit_Destroy_Callback = void (*)();
    using KPasswordLineEdit_FocusNextChild_Callback = bool (*)();
    using KPasswordLineEdit_FocusPreviousChild_Callback = bool (*)();
    using KPasswordLineEdit_Sender_Callback = QObject* (*)();
    using KPasswordLineEdit_SenderSignalIndex_Callback = int (*)();
    using KPasswordLineEdit_Receivers_Callback = int (*)(const KPasswordLineEdit*, const char*);
    using KPasswordLineEdit_IsSignalConnected_Callback = bool (*)(const KPasswordLineEdit*, QMetaMethod*);
    using KPasswordLineEdit_GetDecodedMetricF_Callback = double (*)(const KPasswordLineEdit*, int, int);

  protected:
    // Instance callback storage
    KPasswordLineEdit_MetaObject_Callback kpasswordlineedit_metaobject_callback = nullptr;
    KPasswordLineEdit_Metacast_Callback kpasswordlineedit_metacast_callback = nullptr;
    KPasswordLineEdit_Metacall_Callback kpasswordlineedit_metacall_callback = nullptr;
    KPasswordLineEdit_DevType_Callback kpasswordlineedit_devtype_callback = nullptr;
    KPasswordLineEdit_SetVisible_Callback kpasswordlineedit_setvisible_callback = nullptr;
    KPasswordLineEdit_SizeHint_Callback kpasswordlineedit_sizehint_callback = nullptr;
    KPasswordLineEdit_MinimumSizeHint_Callback kpasswordlineedit_minimumsizehint_callback = nullptr;
    KPasswordLineEdit_HeightForWidth_Callback kpasswordlineedit_heightforwidth_callback = nullptr;
    KPasswordLineEdit_HasHeightForWidth_Callback kpasswordlineedit_hasheightforwidth_callback = nullptr;
    KPasswordLineEdit_PaintEngine_Callback kpasswordlineedit_paintengine_callback = nullptr;
    KPasswordLineEdit_Event_Callback kpasswordlineedit_event_callback = nullptr;
    KPasswordLineEdit_MousePressEvent_Callback kpasswordlineedit_mousepressevent_callback = nullptr;
    KPasswordLineEdit_MouseReleaseEvent_Callback kpasswordlineedit_mousereleaseevent_callback = nullptr;
    KPasswordLineEdit_MouseDoubleClickEvent_Callback kpasswordlineedit_mousedoubleclickevent_callback = nullptr;
    KPasswordLineEdit_MouseMoveEvent_Callback kpasswordlineedit_mousemoveevent_callback = nullptr;
    KPasswordLineEdit_WheelEvent_Callback kpasswordlineedit_wheelevent_callback = nullptr;
    KPasswordLineEdit_KeyPressEvent_Callback kpasswordlineedit_keypressevent_callback = nullptr;
    KPasswordLineEdit_KeyReleaseEvent_Callback kpasswordlineedit_keyreleaseevent_callback = nullptr;
    KPasswordLineEdit_FocusInEvent_Callback kpasswordlineedit_focusinevent_callback = nullptr;
    KPasswordLineEdit_FocusOutEvent_Callback kpasswordlineedit_focusoutevent_callback = nullptr;
    KPasswordLineEdit_EnterEvent_Callback kpasswordlineedit_enterevent_callback = nullptr;
    KPasswordLineEdit_LeaveEvent_Callback kpasswordlineedit_leaveevent_callback = nullptr;
    KPasswordLineEdit_PaintEvent_Callback kpasswordlineedit_paintevent_callback = nullptr;
    KPasswordLineEdit_MoveEvent_Callback kpasswordlineedit_moveevent_callback = nullptr;
    KPasswordLineEdit_ResizeEvent_Callback kpasswordlineedit_resizeevent_callback = nullptr;
    KPasswordLineEdit_CloseEvent_Callback kpasswordlineedit_closeevent_callback = nullptr;
    KPasswordLineEdit_ContextMenuEvent_Callback kpasswordlineedit_contextmenuevent_callback = nullptr;
    KPasswordLineEdit_TabletEvent_Callback kpasswordlineedit_tabletevent_callback = nullptr;
    KPasswordLineEdit_ActionEvent_Callback kpasswordlineedit_actionevent_callback = nullptr;
    KPasswordLineEdit_DragEnterEvent_Callback kpasswordlineedit_dragenterevent_callback = nullptr;
    KPasswordLineEdit_DragMoveEvent_Callback kpasswordlineedit_dragmoveevent_callback = nullptr;
    KPasswordLineEdit_DragLeaveEvent_Callback kpasswordlineedit_dragleaveevent_callback = nullptr;
    KPasswordLineEdit_DropEvent_Callback kpasswordlineedit_dropevent_callback = nullptr;
    KPasswordLineEdit_ShowEvent_Callback kpasswordlineedit_showevent_callback = nullptr;
    KPasswordLineEdit_HideEvent_Callback kpasswordlineedit_hideevent_callback = nullptr;
    KPasswordLineEdit_NativeEvent_Callback kpasswordlineedit_nativeevent_callback = nullptr;
    KPasswordLineEdit_ChangeEvent_Callback kpasswordlineedit_changeevent_callback = nullptr;
    KPasswordLineEdit_Metric_Callback kpasswordlineedit_metric_callback = nullptr;
    KPasswordLineEdit_InitPainter_Callback kpasswordlineedit_initpainter_callback = nullptr;
    KPasswordLineEdit_Redirected_Callback kpasswordlineedit_redirected_callback = nullptr;
    KPasswordLineEdit_SharedPainter_Callback kpasswordlineedit_sharedpainter_callback = nullptr;
    KPasswordLineEdit_InputMethodEvent_Callback kpasswordlineedit_inputmethodevent_callback = nullptr;
    KPasswordLineEdit_InputMethodQuery_Callback kpasswordlineedit_inputmethodquery_callback = nullptr;
    KPasswordLineEdit_FocusNextPrevChild_Callback kpasswordlineedit_focusnextprevchild_callback = nullptr;
    KPasswordLineEdit_EventFilter_Callback kpasswordlineedit_eventfilter_callback = nullptr;
    KPasswordLineEdit_TimerEvent_Callback kpasswordlineedit_timerevent_callback = nullptr;
    KPasswordLineEdit_ChildEvent_Callback kpasswordlineedit_childevent_callback = nullptr;
    KPasswordLineEdit_CustomEvent_Callback kpasswordlineedit_customevent_callback = nullptr;
    KPasswordLineEdit_ConnectNotify_Callback kpasswordlineedit_connectnotify_callback = nullptr;
    KPasswordLineEdit_DisconnectNotify_Callback kpasswordlineedit_disconnectnotify_callback = nullptr;
    KPasswordLineEdit_UpdateMicroFocus_Callback kpasswordlineedit_updatemicrofocus_callback = nullptr;
    KPasswordLineEdit_Create_Callback kpasswordlineedit_create_callback = nullptr;
    KPasswordLineEdit_Destroy_Callback kpasswordlineedit_destroy_callback = nullptr;
    KPasswordLineEdit_FocusNextChild_Callback kpasswordlineedit_focusnextchild_callback = nullptr;
    KPasswordLineEdit_FocusPreviousChild_Callback kpasswordlineedit_focuspreviouschild_callback = nullptr;
    KPasswordLineEdit_Sender_Callback kpasswordlineedit_sender_callback = nullptr;
    KPasswordLineEdit_SenderSignalIndex_Callback kpasswordlineedit_sendersignalindex_callback = nullptr;
    KPasswordLineEdit_Receivers_Callback kpasswordlineedit_receivers_callback = nullptr;
    KPasswordLineEdit_IsSignalConnected_Callback kpasswordlineedit_issignalconnected_callback = nullptr;
    KPasswordLineEdit_GetDecodedMetricF_Callback kpasswordlineedit_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kpasswordlineedit_metaobject_isbase = false;
    mutable bool kpasswordlineedit_metacast_isbase = false;
    mutable bool kpasswordlineedit_metacall_isbase = false;
    mutable bool kpasswordlineedit_devtype_isbase = false;
    mutable bool kpasswordlineedit_setvisible_isbase = false;
    mutable bool kpasswordlineedit_sizehint_isbase = false;
    mutable bool kpasswordlineedit_minimumsizehint_isbase = false;
    mutable bool kpasswordlineedit_heightforwidth_isbase = false;
    mutable bool kpasswordlineedit_hasheightforwidth_isbase = false;
    mutable bool kpasswordlineedit_paintengine_isbase = false;
    mutable bool kpasswordlineedit_event_isbase = false;
    mutable bool kpasswordlineedit_mousepressevent_isbase = false;
    mutable bool kpasswordlineedit_mousereleaseevent_isbase = false;
    mutable bool kpasswordlineedit_mousedoubleclickevent_isbase = false;
    mutable bool kpasswordlineedit_mousemoveevent_isbase = false;
    mutable bool kpasswordlineedit_wheelevent_isbase = false;
    mutable bool kpasswordlineedit_keypressevent_isbase = false;
    mutable bool kpasswordlineedit_keyreleaseevent_isbase = false;
    mutable bool kpasswordlineedit_focusinevent_isbase = false;
    mutable bool kpasswordlineedit_focusoutevent_isbase = false;
    mutable bool kpasswordlineedit_enterevent_isbase = false;
    mutable bool kpasswordlineedit_leaveevent_isbase = false;
    mutable bool kpasswordlineedit_paintevent_isbase = false;
    mutable bool kpasswordlineedit_moveevent_isbase = false;
    mutable bool kpasswordlineedit_resizeevent_isbase = false;
    mutable bool kpasswordlineedit_closeevent_isbase = false;
    mutable bool kpasswordlineedit_contextmenuevent_isbase = false;
    mutable bool kpasswordlineedit_tabletevent_isbase = false;
    mutable bool kpasswordlineedit_actionevent_isbase = false;
    mutable bool kpasswordlineedit_dragenterevent_isbase = false;
    mutable bool kpasswordlineedit_dragmoveevent_isbase = false;
    mutable bool kpasswordlineedit_dragleaveevent_isbase = false;
    mutable bool kpasswordlineedit_dropevent_isbase = false;
    mutable bool kpasswordlineedit_showevent_isbase = false;
    mutable bool kpasswordlineedit_hideevent_isbase = false;
    mutable bool kpasswordlineedit_nativeevent_isbase = false;
    mutable bool kpasswordlineedit_changeevent_isbase = false;
    mutable bool kpasswordlineedit_metric_isbase = false;
    mutable bool kpasswordlineedit_initpainter_isbase = false;
    mutable bool kpasswordlineedit_redirected_isbase = false;
    mutable bool kpasswordlineedit_sharedpainter_isbase = false;
    mutable bool kpasswordlineedit_inputmethodevent_isbase = false;
    mutable bool kpasswordlineedit_inputmethodquery_isbase = false;
    mutable bool kpasswordlineedit_focusnextprevchild_isbase = false;
    mutable bool kpasswordlineedit_eventfilter_isbase = false;
    mutable bool kpasswordlineedit_timerevent_isbase = false;
    mutable bool kpasswordlineedit_childevent_isbase = false;
    mutable bool kpasswordlineedit_customevent_isbase = false;
    mutable bool kpasswordlineedit_connectnotify_isbase = false;
    mutable bool kpasswordlineedit_disconnectnotify_isbase = false;
    mutable bool kpasswordlineedit_updatemicrofocus_isbase = false;
    mutable bool kpasswordlineedit_create_isbase = false;
    mutable bool kpasswordlineedit_destroy_isbase = false;
    mutable bool kpasswordlineedit_focusnextchild_isbase = false;
    mutable bool kpasswordlineedit_focuspreviouschild_isbase = false;
    mutable bool kpasswordlineedit_sender_isbase = false;
    mutable bool kpasswordlineedit_sendersignalindex_isbase = false;
    mutable bool kpasswordlineedit_receivers_isbase = false;
    mutable bool kpasswordlineedit_issignalconnected_isbase = false;
    mutable bool kpasswordlineedit_getdecodedmetricf_isbase = false;

  public:
    VirtualKPasswordLineEdit(QWidget* parent) : KPasswordLineEdit(parent) {};
    VirtualKPasswordLineEdit() : KPasswordLineEdit() {};

    // Callback setters
    inline void setKPasswordLineEdit_MetaObject_Callback(KPasswordLineEdit_MetaObject_Callback cb) { kpasswordlineedit_metaobject_callback = cb; }
    inline void setKPasswordLineEdit_Metacast_Callback(KPasswordLineEdit_Metacast_Callback cb) { kpasswordlineedit_metacast_callback = cb; }
    inline void setKPasswordLineEdit_Metacall_Callback(KPasswordLineEdit_Metacall_Callback cb) { kpasswordlineedit_metacall_callback = cb; }
    inline void setKPasswordLineEdit_DevType_Callback(KPasswordLineEdit_DevType_Callback cb) { kpasswordlineedit_devtype_callback = cb; }
    inline void setKPasswordLineEdit_SetVisible_Callback(KPasswordLineEdit_SetVisible_Callback cb) { kpasswordlineedit_setvisible_callback = cb; }
    inline void setKPasswordLineEdit_SizeHint_Callback(KPasswordLineEdit_SizeHint_Callback cb) { kpasswordlineedit_sizehint_callback = cb; }
    inline void setKPasswordLineEdit_MinimumSizeHint_Callback(KPasswordLineEdit_MinimumSizeHint_Callback cb) { kpasswordlineedit_minimumsizehint_callback = cb; }
    inline void setKPasswordLineEdit_HeightForWidth_Callback(KPasswordLineEdit_HeightForWidth_Callback cb) { kpasswordlineedit_heightforwidth_callback = cb; }
    inline void setKPasswordLineEdit_HasHeightForWidth_Callback(KPasswordLineEdit_HasHeightForWidth_Callback cb) { kpasswordlineedit_hasheightforwidth_callback = cb; }
    inline void setKPasswordLineEdit_PaintEngine_Callback(KPasswordLineEdit_PaintEngine_Callback cb) { kpasswordlineedit_paintengine_callback = cb; }
    inline void setKPasswordLineEdit_Event_Callback(KPasswordLineEdit_Event_Callback cb) { kpasswordlineedit_event_callback = cb; }
    inline void setKPasswordLineEdit_MousePressEvent_Callback(KPasswordLineEdit_MousePressEvent_Callback cb) { kpasswordlineedit_mousepressevent_callback = cb; }
    inline void setKPasswordLineEdit_MouseReleaseEvent_Callback(KPasswordLineEdit_MouseReleaseEvent_Callback cb) { kpasswordlineedit_mousereleaseevent_callback = cb; }
    inline void setKPasswordLineEdit_MouseDoubleClickEvent_Callback(KPasswordLineEdit_MouseDoubleClickEvent_Callback cb) { kpasswordlineedit_mousedoubleclickevent_callback = cb; }
    inline void setKPasswordLineEdit_MouseMoveEvent_Callback(KPasswordLineEdit_MouseMoveEvent_Callback cb) { kpasswordlineedit_mousemoveevent_callback = cb; }
    inline void setKPasswordLineEdit_WheelEvent_Callback(KPasswordLineEdit_WheelEvent_Callback cb) { kpasswordlineedit_wheelevent_callback = cb; }
    inline void setKPasswordLineEdit_KeyPressEvent_Callback(KPasswordLineEdit_KeyPressEvent_Callback cb) { kpasswordlineedit_keypressevent_callback = cb; }
    inline void setKPasswordLineEdit_KeyReleaseEvent_Callback(KPasswordLineEdit_KeyReleaseEvent_Callback cb) { kpasswordlineedit_keyreleaseevent_callback = cb; }
    inline void setKPasswordLineEdit_FocusInEvent_Callback(KPasswordLineEdit_FocusInEvent_Callback cb) { kpasswordlineedit_focusinevent_callback = cb; }
    inline void setKPasswordLineEdit_FocusOutEvent_Callback(KPasswordLineEdit_FocusOutEvent_Callback cb) { kpasswordlineedit_focusoutevent_callback = cb; }
    inline void setKPasswordLineEdit_EnterEvent_Callback(KPasswordLineEdit_EnterEvent_Callback cb) { kpasswordlineedit_enterevent_callback = cb; }
    inline void setKPasswordLineEdit_LeaveEvent_Callback(KPasswordLineEdit_LeaveEvent_Callback cb) { kpasswordlineedit_leaveevent_callback = cb; }
    inline void setKPasswordLineEdit_PaintEvent_Callback(KPasswordLineEdit_PaintEvent_Callback cb) { kpasswordlineedit_paintevent_callback = cb; }
    inline void setKPasswordLineEdit_MoveEvent_Callback(KPasswordLineEdit_MoveEvent_Callback cb) { kpasswordlineedit_moveevent_callback = cb; }
    inline void setKPasswordLineEdit_ResizeEvent_Callback(KPasswordLineEdit_ResizeEvent_Callback cb) { kpasswordlineedit_resizeevent_callback = cb; }
    inline void setKPasswordLineEdit_CloseEvent_Callback(KPasswordLineEdit_CloseEvent_Callback cb) { kpasswordlineedit_closeevent_callback = cb; }
    inline void setKPasswordLineEdit_ContextMenuEvent_Callback(KPasswordLineEdit_ContextMenuEvent_Callback cb) { kpasswordlineedit_contextmenuevent_callback = cb; }
    inline void setKPasswordLineEdit_TabletEvent_Callback(KPasswordLineEdit_TabletEvent_Callback cb) { kpasswordlineedit_tabletevent_callback = cb; }
    inline void setKPasswordLineEdit_ActionEvent_Callback(KPasswordLineEdit_ActionEvent_Callback cb) { kpasswordlineedit_actionevent_callback = cb; }
    inline void setKPasswordLineEdit_DragEnterEvent_Callback(KPasswordLineEdit_DragEnterEvent_Callback cb) { kpasswordlineedit_dragenterevent_callback = cb; }
    inline void setKPasswordLineEdit_DragMoveEvent_Callback(KPasswordLineEdit_DragMoveEvent_Callback cb) { kpasswordlineedit_dragmoveevent_callback = cb; }
    inline void setKPasswordLineEdit_DragLeaveEvent_Callback(KPasswordLineEdit_DragLeaveEvent_Callback cb) { kpasswordlineedit_dragleaveevent_callback = cb; }
    inline void setKPasswordLineEdit_DropEvent_Callback(KPasswordLineEdit_DropEvent_Callback cb) { kpasswordlineedit_dropevent_callback = cb; }
    inline void setKPasswordLineEdit_ShowEvent_Callback(KPasswordLineEdit_ShowEvent_Callback cb) { kpasswordlineedit_showevent_callback = cb; }
    inline void setKPasswordLineEdit_HideEvent_Callback(KPasswordLineEdit_HideEvent_Callback cb) { kpasswordlineedit_hideevent_callback = cb; }
    inline void setKPasswordLineEdit_NativeEvent_Callback(KPasswordLineEdit_NativeEvent_Callback cb) { kpasswordlineedit_nativeevent_callback = cb; }
    inline void setKPasswordLineEdit_ChangeEvent_Callback(KPasswordLineEdit_ChangeEvent_Callback cb) { kpasswordlineedit_changeevent_callback = cb; }
    inline void setKPasswordLineEdit_Metric_Callback(KPasswordLineEdit_Metric_Callback cb) { kpasswordlineedit_metric_callback = cb; }
    inline void setKPasswordLineEdit_InitPainter_Callback(KPasswordLineEdit_InitPainter_Callback cb) { kpasswordlineedit_initpainter_callback = cb; }
    inline void setKPasswordLineEdit_Redirected_Callback(KPasswordLineEdit_Redirected_Callback cb) { kpasswordlineedit_redirected_callback = cb; }
    inline void setKPasswordLineEdit_SharedPainter_Callback(KPasswordLineEdit_SharedPainter_Callback cb) { kpasswordlineedit_sharedpainter_callback = cb; }
    inline void setKPasswordLineEdit_InputMethodEvent_Callback(KPasswordLineEdit_InputMethodEvent_Callback cb) { kpasswordlineedit_inputmethodevent_callback = cb; }
    inline void setKPasswordLineEdit_InputMethodQuery_Callback(KPasswordLineEdit_InputMethodQuery_Callback cb) { kpasswordlineedit_inputmethodquery_callback = cb; }
    inline void setKPasswordLineEdit_FocusNextPrevChild_Callback(KPasswordLineEdit_FocusNextPrevChild_Callback cb) { kpasswordlineedit_focusnextprevchild_callback = cb; }
    inline void setKPasswordLineEdit_EventFilter_Callback(KPasswordLineEdit_EventFilter_Callback cb) { kpasswordlineedit_eventfilter_callback = cb; }
    inline void setKPasswordLineEdit_TimerEvent_Callback(KPasswordLineEdit_TimerEvent_Callback cb) { kpasswordlineedit_timerevent_callback = cb; }
    inline void setKPasswordLineEdit_ChildEvent_Callback(KPasswordLineEdit_ChildEvent_Callback cb) { kpasswordlineedit_childevent_callback = cb; }
    inline void setKPasswordLineEdit_CustomEvent_Callback(KPasswordLineEdit_CustomEvent_Callback cb) { kpasswordlineedit_customevent_callback = cb; }
    inline void setKPasswordLineEdit_ConnectNotify_Callback(KPasswordLineEdit_ConnectNotify_Callback cb) { kpasswordlineedit_connectnotify_callback = cb; }
    inline void setKPasswordLineEdit_DisconnectNotify_Callback(KPasswordLineEdit_DisconnectNotify_Callback cb) { kpasswordlineedit_disconnectnotify_callback = cb; }
    inline void setKPasswordLineEdit_UpdateMicroFocus_Callback(KPasswordLineEdit_UpdateMicroFocus_Callback cb) { kpasswordlineedit_updatemicrofocus_callback = cb; }
    inline void setKPasswordLineEdit_Create_Callback(KPasswordLineEdit_Create_Callback cb) { kpasswordlineedit_create_callback = cb; }
    inline void setKPasswordLineEdit_Destroy_Callback(KPasswordLineEdit_Destroy_Callback cb) { kpasswordlineedit_destroy_callback = cb; }
    inline void setKPasswordLineEdit_FocusNextChild_Callback(KPasswordLineEdit_FocusNextChild_Callback cb) { kpasswordlineedit_focusnextchild_callback = cb; }
    inline void setKPasswordLineEdit_FocusPreviousChild_Callback(KPasswordLineEdit_FocusPreviousChild_Callback cb) { kpasswordlineedit_focuspreviouschild_callback = cb; }
    inline void setKPasswordLineEdit_Sender_Callback(KPasswordLineEdit_Sender_Callback cb) { kpasswordlineedit_sender_callback = cb; }
    inline void setKPasswordLineEdit_SenderSignalIndex_Callback(KPasswordLineEdit_SenderSignalIndex_Callback cb) { kpasswordlineedit_sendersignalindex_callback = cb; }
    inline void setKPasswordLineEdit_Receivers_Callback(KPasswordLineEdit_Receivers_Callback cb) { kpasswordlineedit_receivers_callback = cb; }
    inline void setKPasswordLineEdit_IsSignalConnected_Callback(KPasswordLineEdit_IsSignalConnected_Callback cb) { kpasswordlineedit_issignalconnected_callback = cb; }
    inline void setKPasswordLineEdit_GetDecodedMetricF_Callback(KPasswordLineEdit_GetDecodedMetricF_Callback cb) { kpasswordlineedit_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKPasswordLineEdit_MetaObject_IsBase(bool value) const { kpasswordlineedit_metaobject_isbase = value; }
    inline void setKPasswordLineEdit_Metacast_IsBase(bool value) const { kpasswordlineedit_metacast_isbase = value; }
    inline void setKPasswordLineEdit_Metacall_IsBase(bool value) const { kpasswordlineedit_metacall_isbase = value; }
    inline void setKPasswordLineEdit_DevType_IsBase(bool value) const { kpasswordlineedit_devtype_isbase = value; }
    inline void setKPasswordLineEdit_SetVisible_IsBase(bool value) const { kpasswordlineedit_setvisible_isbase = value; }
    inline void setKPasswordLineEdit_SizeHint_IsBase(bool value) const { kpasswordlineedit_sizehint_isbase = value; }
    inline void setKPasswordLineEdit_MinimumSizeHint_IsBase(bool value) const { kpasswordlineedit_minimumsizehint_isbase = value; }
    inline void setKPasswordLineEdit_HeightForWidth_IsBase(bool value) const { kpasswordlineedit_heightforwidth_isbase = value; }
    inline void setKPasswordLineEdit_HasHeightForWidth_IsBase(bool value) const { kpasswordlineedit_hasheightforwidth_isbase = value; }
    inline void setKPasswordLineEdit_PaintEngine_IsBase(bool value) const { kpasswordlineedit_paintengine_isbase = value; }
    inline void setKPasswordLineEdit_Event_IsBase(bool value) const { kpasswordlineedit_event_isbase = value; }
    inline void setKPasswordLineEdit_MousePressEvent_IsBase(bool value) const { kpasswordlineedit_mousepressevent_isbase = value; }
    inline void setKPasswordLineEdit_MouseReleaseEvent_IsBase(bool value) const { kpasswordlineedit_mousereleaseevent_isbase = value; }
    inline void setKPasswordLineEdit_MouseDoubleClickEvent_IsBase(bool value) const { kpasswordlineedit_mousedoubleclickevent_isbase = value; }
    inline void setKPasswordLineEdit_MouseMoveEvent_IsBase(bool value) const { kpasswordlineedit_mousemoveevent_isbase = value; }
    inline void setKPasswordLineEdit_WheelEvent_IsBase(bool value) const { kpasswordlineedit_wheelevent_isbase = value; }
    inline void setKPasswordLineEdit_KeyPressEvent_IsBase(bool value) const { kpasswordlineedit_keypressevent_isbase = value; }
    inline void setKPasswordLineEdit_KeyReleaseEvent_IsBase(bool value) const { kpasswordlineedit_keyreleaseevent_isbase = value; }
    inline void setKPasswordLineEdit_FocusInEvent_IsBase(bool value) const { kpasswordlineedit_focusinevent_isbase = value; }
    inline void setKPasswordLineEdit_FocusOutEvent_IsBase(bool value) const { kpasswordlineedit_focusoutevent_isbase = value; }
    inline void setKPasswordLineEdit_EnterEvent_IsBase(bool value) const { kpasswordlineedit_enterevent_isbase = value; }
    inline void setKPasswordLineEdit_LeaveEvent_IsBase(bool value) const { kpasswordlineedit_leaveevent_isbase = value; }
    inline void setKPasswordLineEdit_PaintEvent_IsBase(bool value) const { kpasswordlineedit_paintevent_isbase = value; }
    inline void setKPasswordLineEdit_MoveEvent_IsBase(bool value) const { kpasswordlineedit_moveevent_isbase = value; }
    inline void setKPasswordLineEdit_ResizeEvent_IsBase(bool value) const { kpasswordlineedit_resizeevent_isbase = value; }
    inline void setKPasswordLineEdit_CloseEvent_IsBase(bool value) const { kpasswordlineedit_closeevent_isbase = value; }
    inline void setKPasswordLineEdit_ContextMenuEvent_IsBase(bool value) const { kpasswordlineedit_contextmenuevent_isbase = value; }
    inline void setKPasswordLineEdit_TabletEvent_IsBase(bool value) const { kpasswordlineedit_tabletevent_isbase = value; }
    inline void setKPasswordLineEdit_ActionEvent_IsBase(bool value) const { kpasswordlineedit_actionevent_isbase = value; }
    inline void setKPasswordLineEdit_DragEnterEvent_IsBase(bool value) const { kpasswordlineedit_dragenterevent_isbase = value; }
    inline void setKPasswordLineEdit_DragMoveEvent_IsBase(bool value) const { kpasswordlineedit_dragmoveevent_isbase = value; }
    inline void setKPasswordLineEdit_DragLeaveEvent_IsBase(bool value) const { kpasswordlineedit_dragleaveevent_isbase = value; }
    inline void setKPasswordLineEdit_DropEvent_IsBase(bool value) const { kpasswordlineedit_dropevent_isbase = value; }
    inline void setKPasswordLineEdit_ShowEvent_IsBase(bool value) const { kpasswordlineedit_showevent_isbase = value; }
    inline void setKPasswordLineEdit_HideEvent_IsBase(bool value) const { kpasswordlineedit_hideevent_isbase = value; }
    inline void setKPasswordLineEdit_NativeEvent_IsBase(bool value) const { kpasswordlineedit_nativeevent_isbase = value; }
    inline void setKPasswordLineEdit_ChangeEvent_IsBase(bool value) const { kpasswordlineedit_changeevent_isbase = value; }
    inline void setKPasswordLineEdit_Metric_IsBase(bool value) const { kpasswordlineedit_metric_isbase = value; }
    inline void setKPasswordLineEdit_InitPainter_IsBase(bool value) const { kpasswordlineedit_initpainter_isbase = value; }
    inline void setKPasswordLineEdit_Redirected_IsBase(bool value) const { kpasswordlineedit_redirected_isbase = value; }
    inline void setKPasswordLineEdit_SharedPainter_IsBase(bool value) const { kpasswordlineedit_sharedpainter_isbase = value; }
    inline void setKPasswordLineEdit_InputMethodEvent_IsBase(bool value) const { kpasswordlineedit_inputmethodevent_isbase = value; }
    inline void setKPasswordLineEdit_InputMethodQuery_IsBase(bool value) const { kpasswordlineedit_inputmethodquery_isbase = value; }
    inline void setKPasswordLineEdit_FocusNextPrevChild_IsBase(bool value) const { kpasswordlineedit_focusnextprevchild_isbase = value; }
    inline void setKPasswordLineEdit_EventFilter_IsBase(bool value) const { kpasswordlineedit_eventfilter_isbase = value; }
    inline void setKPasswordLineEdit_TimerEvent_IsBase(bool value) const { kpasswordlineedit_timerevent_isbase = value; }
    inline void setKPasswordLineEdit_ChildEvent_IsBase(bool value) const { kpasswordlineedit_childevent_isbase = value; }
    inline void setKPasswordLineEdit_CustomEvent_IsBase(bool value) const { kpasswordlineedit_customevent_isbase = value; }
    inline void setKPasswordLineEdit_ConnectNotify_IsBase(bool value) const { kpasswordlineedit_connectnotify_isbase = value; }
    inline void setKPasswordLineEdit_DisconnectNotify_IsBase(bool value) const { kpasswordlineedit_disconnectnotify_isbase = value; }
    inline void setKPasswordLineEdit_UpdateMicroFocus_IsBase(bool value) const { kpasswordlineedit_updatemicrofocus_isbase = value; }
    inline void setKPasswordLineEdit_Create_IsBase(bool value) const { kpasswordlineedit_create_isbase = value; }
    inline void setKPasswordLineEdit_Destroy_IsBase(bool value) const { kpasswordlineedit_destroy_isbase = value; }
    inline void setKPasswordLineEdit_FocusNextChild_IsBase(bool value) const { kpasswordlineedit_focusnextchild_isbase = value; }
    inline void setKPasswordLineEdit_FocusPreviousChild_IsBase(bool value) const { kpasswordlineedit_focuspreviouschild_isbase = value; }
    inline void setKPasswordLineEdit_Sender_IsBase(bool value) const { kpasswordlineedit_sender_isbase = value; }
    inline void setKPasswordLineEdit_SenderSignalIndex_IsBase(bool value) const { kpasswordlineedit_sendersignalindex_isbase = value; }
    inline void setKPasswordLineEdit_Receivers_IsBase(bool value) const { kpasswordlineedit_receivers_isbase = value; }
    inline void setKPasswordLineEdit_IsSignalConnected_IsBase(bool value) const { kpasswordlineedit_issignalconnected_isbase = value; }
    inline void setKPasswordLineEdit_GetDecodedMetricF_IsBase(bool value) const { kpasswordlineedit_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpasswordlineedit_metaobject_isbase) {
            kpasswordlineedit_metaobject_isbase = false;
            return KPasswordLineEdit::metaObject();
        }
        auto metaobject_cb = kpasswordlineedit_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KPasswordLineEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpasswordlineedit_metacast_isbase) {
            kpasswordlineedit_metacast_isbase = false;
            return KPasswordLineEdit::qt_metacast(param1);
        }
        auto metacast_cb = kpasswordlineedit_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KPasswordLineEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpasswordlineedit_metacall_isbase) {
            kpasswordlineedit_metacall_isbase = false;
            return KPasswordLineEdit::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kpasswordlineedit_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPasswordLineEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpasswordlineedit_devtype_isbase) {
            kpasswordlineedit_devtype_isbase = false;
            return KPasswordLineEdit::devType();
        }
        auto devtype_cb = kpasswordlineedit_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KPasswordLineEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpasswordlineedit_setvisible_isbase) {
            kpasswordlineedit_setvisible_isbase = false;
            KPasswordLineEdit::setVisible(visible);
            return;
        }
        auto setvisible_cb = kpasswordlineedit_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpasswordlineedit_sizehint_isbase) {
            kpasswordlineedit_sizehint_isbase = false;
            return KPasswordLineEdit::sizeHint();
        }
        auto sizehint_cb = kpasswordlineedit_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KPasswordLineEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpasswordlineedit_minimumsizehint_isbase) {
            kpasswordlineedit_minimumsizehint_isbase = false;
            return KPasswordLineEdit::minimumSizeHint();
        }
        auto minimumsizehint_cb = kpasswordlineedit_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KPasswordLineEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpasswordlineedit_heightforwidth_isbase) {
            kpasswordlineedit_heightforwidth_isbase = false;
            return KPasswordLineEdit::heightForWidth(param1);
        }
        auto heightforwidth_cb = kpasswordlineedit_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPasswordLineEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpasswordlineedit_hasheightforwidth_isbase) {
            kpasswordlineedit_hasheightforwidth_isbase = false;
            return KPasswordLineEdit::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kpasswordlineedit_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KPasswordLineEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpasswordlineedit_paintengine_isbase) {
            kpasswordlineedit_paintengine_isbase = false;
            return KPasswordLineEdit::paintEngine();
        }
        auto paintengine_cb = kpasswordlineedit_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KPasswordLineEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpasswordlineedit_event_isbase) {
            kpasswordlineedit_event_isbase = false;
            return KPasswordLineEdit::event(event);
        }
        auto event_cb = kpasswordlineedit_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KPasswordLineEdit::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpasswordlineedit_mousepressevent_isbase) {
            kpasswordlineedit_mousepressevent_isbase = false;
            KPasswordLineEdit::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kpasswordlineedit_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpasswordlineedit_mousereleaseevent_isbase) {
            kpasswordlineedit_mousereleaseevent_isbase = false;
            KPasswordLineEdit::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kpasswordlineedit_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpasswordlineedit_mousedoubleclickevent_isbase) {
            kpasswordlineedit_mousedoubleclickevent_isbase = false;
            KPasswordLineEdit::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kpasswordlineedit_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpasswordlineedit_mousemoveevent_isbase) {
            kpasswordlineedit_mousemoveevent_isbase = false;
            KPasswordLineEdit::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kpasswordlineedit_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpasswordlineedit_wheelevent_isbase) {
            kpasswordlineedit_wheelevent_isbase = false;
            KPasswordLineEdit::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kpasswordlineedit_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kpasswordlineedit_keypressevent_isbase) {
            kpasswordlineedit_keypressevent_isbase = false;
            KPasswordLineEdit::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = kpasswordlineedit_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpasswordlineedit_keyreleaseevent_isbase) {
            kpasswordlineedit_keyreleaseevent_isbase = false;
            KPasswordLineEdit::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kpasswordlineedit_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpasswordlineedit_focusinevent_isbase) {
            kpasswordlineedit_focusinevent_isbase = false;
            KPasswordLineEdit::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kpasswordlineedit_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpasswordlineedit_focusoutevent_isbase) {
            kpasswordlineedit_focusoutevent_isbase = false;
            KPasswordLineEdit::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kpasswordlineedit_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpasswordlineedit_enterevent_isbase) {
            kpasswordlineedit_enterevent_isbase = false;
            KPasswordLineEdit::enterEvent(event);
            return;
        }
        auto enterevent_cb = kpasswordlineedit_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpasswordlineedit_leaveevent_isbase) {
            kpasswordlineedit_leaveevent_isbase = false;
            KPasswordLineEdit::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kpasswordlineedit_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpasswordlineedit_paintevent_isbase) {
            kpasswordlineedit_paintevent_isbase = false;
            KPasswordLineEdit::paintEvent(event);
            return;
        }
        auto paintevent_cb = kpasswordlineedit_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpasswordlineedit_moveevent_isbase) {
            kpasswordlineedit_moveevent_isbase = false;
            KPasswordLineEdit::moveEvent(event);
            return;
        }
        auto moveevent_cb = kpasswordlineedit_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kpasswordlineedit_resizeevent_isbase) {
            kpasswordlineedit_resizeevent_isbase = false;
            KPasswordLineEdit::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = kpasswordlineedit_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kpasswordlineedit_closeevent_isbase) {
            kpasswordlineedit_closeevent_isbase = false;
            KPasswordLineEdit::closeEvent(event);
            return;
        }
        auto closeevent_cb = kpasswordlineedit_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kpasswordlineedit_contextmenuevent_isbase) {
            kpasswordlineedit_contextmenuevent_isbase = false;
            KPasswordLineEdit::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = kpasswordlineedit_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpasswordlineedit_tabletevent_isbase) {
            kpasswordlineedit_tabletevent_isbase = false;
            KPasswordLineEdit::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kpasswordlineedit_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpasswordlineedit_actionevent_isbase) {
            kpasswordlineedit_actionevent_isbase = false;
            KPasswordLineEdit::actionEvent(event);
            return;
        }
        auto actionevent_cb = kpasswordlineedit_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpasswordlineedit_dragenterevent_isbase) {
            kpasswordlineedit_dragenterevent_isbase = false;
            KPasswordLineEdit::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kpasswordlineedit_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpasswordlineedit_dragmoveevent_isbase) {
            kpasswordlineedit_dragmoveevent_isbase = false;
            KPasswordLineEdit::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kpasswordlineedit_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpasswordlineedit_dragleaveevent_isbase) {
            kpasswordlineedit_dragleaveevent_isbase = false;
            KPasswordLineEdit::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kpasswordlineedit_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpasswordlineedit_dropevent_isbase) {
            kpasswordlineedit_dropevent_isbase = false;
            KPasswordLineEdit::dropEvent(event);
            return;
        }
        auto dropevent_cb = kpasswordlineedit_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kpasswordlineedit_showevent_isbase) {
            kpasswordlineedit_showevent_isbase = false;
            KPasswordLineEdit::showEvent(event);
            return;
        }
        auto showevent_cb = kpasswordlineedit_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpasswordlineedit_hideevent_isbase) {
            kpasswordlineedit_hideevent_isbase = false;
            KPasswordLineEdit::hideEvent(event);
            return;
        }
        auto hideevent_cb = kpasswordlineedit_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpasswordlineedit_nativeevent_isbase) {
            kpasswordlineedit_nativeevent_isbase = false;
            return KPasswordLineEdit::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kpasswordlineedit_nativeevent_callback;
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
        return KPasswordLineEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpasswordlineedit_changeevent_isbase) {
            kpasswordlineedit_changeevent_isbase = false;
            KPasswordLineEdit::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kpasswordlineedit_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpasswordlineedit_metric_isbase) {
            kpasswordlineedit_metric_isbase = false;
            return KPasswordLineEdit::metric(param1);
        }
        auto metric_cb = kpasswordlineedit_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPasswordLineEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpasswordlineedit_initpainter_isbase) {
            kpasswordlineedit_initpainter_isbase = false;
            KPasswordLineEdit::initPainter(painter);
            return;
        }
        auto initpainter_cb = kpasswordlineedit_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpasswordlineedit_redirected_isbase) {
            kpasswordlineedit_redirected_isbase = false;
            return KPasswordLineEdit::redirected(offset);
        }
        auto redirected_cb = kpasswordlineedit_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KPasswordLineEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpasswordlineedit_sharedpainter_isbase) {
            kpasswordlineedit_sharedpainter_isbase = false;
            return KPasswordLineEdit::sharedPainter();
        }
        auto sharedpainter_cb = kpasswordlineedit_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KPasswordLineEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpasswordlineedit_inputmethodevent_isbase) {
            kpasswordlineedit_inputmethodevent_isbase = false;
            KPasswordLineEdit::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kpasswordlineedit_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpasswordlineedit_inputmethodquery_isbase) {
            kpasswordlineedit_inputmethodquery_isbase = false;
            return KPasswordLineEdit::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kpasswordlineedit_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KPasswordLineEdit::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpasswordlineedit_focusnextprevchild_isbase) {
            kpasswordlineedit_focusnextprevchild_isbase = false;
            return KPasswordLineEdit::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kpasswordlineedit_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KPasswordLineEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpasswordlineedit_eventfilter_isbase) {
            kpasswordlineedit_eventfilter_isbase = false;
            return KPasswordLineEdit::eventFilter(watched, event);
        }
        auto eventfilter_cb = kpasswordlineedit_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPasswordLineEdit::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpasswordlineedit_timerevent_isbase) {
            kpasswordlineedit_timerevent_isbase = false;
            KPasswordLineEdit::timerEvent(event);
            return;
        }
        auto timerevent_cb = kpasswordlineedit_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpasswordlineedit_childevent_isbase) {
            kpasswordlineedit_childevent_isbase = false;
            KPasswordLineEdit::childEvent(event);
            return;
        }
        auto childevent_cb = kpasswordlineedit_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpasswordlineedit_customevent_isbase) {
            kpasswordlineedit_customevent_isbase = false;
            KPasswordLineEdit::customEvent(event);
            return;
        }
        auto customevent_cb = kpasswordlineedit_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpasswordlineedit_connectnotify_isbase) {
            kpasswordlineedit_connectnotify_isbase = false;
            KPasswordLineEdit::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kpasswordlineedit_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpasswordlineedit_disconnectnotify_isbase) {
            kpasswordlineedit_disconnectnotify_isbase = false;
            KPasswordLineEdit::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kpasswordlineedit_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KPasswordLineEdit::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kpasswordlineedit_updatemicrofocus_isbase) {
            kpasswordlineedit_updatemicrofocus_isbase = false;
            KPasswordLineEdit::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kpasswordlineedit_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KPasswordLineEdit::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kpasswordlineedit_create_isbase) {
            kpasswordlineedit_create_isbase = false;
            KPasswordLineEdit::create();
            return;
        }
        auto create_cb = kpasswordlineedit_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KPasswordLineEdit::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kpasswordlineedit_destroy_isbase) {
            kpasswordlineedit_destroy_isbase = false;
            KPasswordLineEdit::destroy();
            return;
        }
        auto destroy_cb = kpasswordlineedit_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KPasswordLineEdit::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kpasswordlineedit_focusnextchild_isbase) {
            kpasswordlineedit_focusnextchild_isbase = false;
            return KPasswordLineEdit::focusNextChild();
        }
        auto focusnextchild_cb = kpasswordlineedit_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KPasswordLineEdit::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kpasswordlineedit_focuspreviouschild_isbase) {
            kpasswordlineedit_focuspreviouschild_isbase = false;
            return KPasswordLineEdit::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kpasswordlineedit_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KPasswordLineEdit::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kpasswordlineedit_sender_isbase) {
            kpasswordlineedit_sender_isbase = false;
            return KPasswordLineEdit::sender();
        }
        auto sender_cb = kpasswordlineedit_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KPasswordLineEdit::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kpasswordlineedit_sendersignalindex_isbase) {
            kpasswordlineedit_sendersignalindex_isbase = false;
            return KPasswordLineEdit::senderSignalIndex();
        }
        auto sendersignalindex_cb = kpasswordlineedit_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KPasswordLineEdit::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kpasswordlineedit_receivers_isbase) {
            kpasswordlineedit_receivers_isbase = false;
            return KPasswordLineEdit::receivers(signal);
        }
        auto receivers_cb = kpasswordlineedit_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPasswordLineEdit::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kpasswordlineedit_issignalconnected_isbase) {
            kpasswordlineedit_issignalconnected_isbase = false;
            return KPasswordLineEdit::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kpasswordlineedit_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KPasswordLineEdit::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kpasswordlineedit_getdecodedmetricf_isbase) {
            kpasswordlineedit_getdecodedmetricf_isbase = false;
            return KPasswordLineEdit::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kpasswordlineedit_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KPasswordLineEdit::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool KPasswordLineEdit_Event(KPasswordLineEdit* self, QEvent* event);
    friend bool KPasswordLineEdit_SuperEvent(KPasswordLineEdit* self, QEvent* event);
    friend void KPasswordLineEdit_MousePressEvent(KPasswordLineEdit* self, QMouseEvent* event);
    friend void KPasswordLineEdit_SuperMousePressEvent(KPasswordLineEdit* self, QMouseEvent* event);
    friend void KPasswordLineEdit_MouseReleaseEvent(KPasswordLineEdit* self, QMouseEvent* event);
    friend void KPasswordLineEdit_SuperMouseReleaseEvent(KPasswordLineEdit* self, QMouseEvent* event);
    friend void KPasswordLineEdit_MouseDoubleClickEvent(KPasswordLineEdit* self, QMouseEvent* event);
    friend void KPasswordLineEdit_SuperMouseDoubleClickEvent(KPasswordLineEdit* self, QMouseEvent* event);
    friend void KPasswordLineEdit_MouseMoveEvent(KPasswordLineEdit* self, QMouseEvent* event);
    friend void KPasswordLineEdit_SuperMouseMoveEvent(KPasswordLineEdit* self, QMouseEvent* event);
    friend void KPasswordLineEdit_WheelEvent(KPasswordLineEdit* self, QWheelEvent* event);
    friend void KPasswordLineEdit_SuperWheelEvent(KPasswordLineEdit* self, QWheelEvent* event);
    friend void KPasswordLineEdit_KeyPressEvent(KPasswordLineEdit* self, QKeyEvent* event);
    friend void KPasswordLineEdit_SuperKeyPressEvent(KPasswordLineEdit* self, QKeyEvent* event);
    friend void KPasswordLineEdit_KeyReleaseEvent(KPasswordLineEdit* self, QKeyEvent* event);
    friend void KPasswordLineEdit_SuperKeyReleaseEvent(KPasswordLineEdit* self, QKeyEvent* event);
    friend void KPasswordLineEdit_FocusInEvent(KPasswordLineEdit* self, QFocusEvent* event);
    friend void KPasswordLineEdit_SuperFocusInEvent(KPasswordLineEdit* self, QFocusEvent* event);
    friend void KPasswordLineEdit_FocusOutEvent(KPasswordLineEdit* self, QFocusEvent* event);
    friend void KPasswordLineEdit_SuperFocusOutEvent(KPasswordLineEdit* self, QFocusEvent* event);
    friend void KPasswordLineEdit_EnterEvent(KPasswordLineEdit* self, QEnterEvent* event);
    friend void KPasswordLineEdit_SuperEnterEvent(KPasswordLineEdit* self, QEnterEvent* event);
    friend void KPasswordLineEdit_LeaveEvent(KPasswordLineEdit* self, QEvent* event);
    friend void KPasswordLineEdit_SuperLeaveEvent(KPasswordLineEdit* self, QEvent* event);
    friend void KPasswordLineEdit_PaintEvent(KPasswordLineEdit* self, QPaintEvent* event);
    friend void KPasswordLineEdit_SuperPaintEvent(KPasswordLineEdit* self, QPaintEvent* event);
    friend void KPasswordLineEdit_MoveEvent(KPasswordLineEdit* self, QMoveEvent* event);
    friend void KPasswordLineEdit_SuperMoveEvent(KPasswordLineEdit* self, QMoveEvent* event);
    friend void KPasswordLineEdit_ResizeEvent(KPasswordLineEdit* self, QResizeEvent* event);
    friend void KPasswordLineEdit_SuperResizeEvent(KPasswordLineEdit* self, QResizeEvent* event);
    friend void KPasswordLineEdit_CloseEvent(KPasswordLineEdit* self, QCloseEvent* event);
    friend void KPasswordLineEdit_SuperCloseEvent(KPasswordLineEdit* self, QCloseEvent* event);
    friend void KPasswordLineEdit_ContextMenuEvent(KPasswordLineEdit* self, QContextMenuEvent* event);
    friend void KPasswordLineEdit_SuperContextMenuEvent(KPasswordLineEdit* self, QContextMenuEvent* event);
    friend void KPasswordLineEdit_TabletEvent(KPasswordLineEdit* self, QTabletEvent* event);
    friend void KPasswordLineEdit_SuperTabletEvent(KPasswordLineEdit* self, QTabletEvent* event);
    friend void KPasswordLineEdit_ActionEvent(KPasswordLineEdit* self, QActionEvent* event);
    friend void KPasswordLineEdit_SuperActionEvent(KPasswordLineEdit* self, QActionEvent* event);
    friend void KPasswordLineEdit_DragEnterEvent(KPasswordLineEdit* self, QDragEnterEvent* event);
    friend void KPasswordLineEdit_SuperDragEnterEvent(KPasswordLineEdit* self, QDragEnterEvent* event);
    friend void KPasswordLineEdit_DragMoveEvent(KPasswordLineEdit* self, QDragMoveEvent* event);
    friend void KPasswordLineEdit_SuperDragMoveEvent(KPasswordLineEdit* self, QDragMoveEvent* event);
    friend void KPasswordLineEdit_DragLeaveEvent(KPasswordLineEdit* self, QDragLeaveEvent* event);
    friend void KPasswordLineEdit_SuperDragLeaveEvent(KPasswordLineEdit* self, QDragLeaveEvent* event);
    friend void KPasswordLineEdit_DropEvent(KPasswordLineEdit* self, QDropEvent* event);
    friend void KPasswordLineEdit_SuperDropEvent(KPasswordLineEdit* self, QDropEvent* event);
    friend void KPasswordLineEdit_ShowEvent(KPasswordLineEdit* self, QShowEvent* event);
    friend void KPasswordLineEdit_SuperShowEvent(KPasswordLineEdit* self, QShowEvent* event);
    friend void KPasswordLineEdit_HideEvent(KPasswordLineEdit* self, QHideEvent* event);
    friend void KPasswordLineEdit_SuperHideEvent(KPasswordLineEdit* self, QHideEvent* event);
    friend bool KPasswordLineEdit_NativeEvent(KPasswordLineEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KPasswordLineEdit_SuperNativeEvent(KPasswordLineEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KPasswordLineEdit_ChangeEvent(KPasswordLineEdit* self, QEvent* param1);
    friend void KPasswordLineEdit_SuperChangeEvent(KPasswordLineEdit* self, QEvent* param1);
    friend int KPasswordLineEdit_Metric(const KPasswordLineEdit* self, int param1);
    friend int KPasswordLineEdit_SuperMetric(const KPasswordLineEdit* self, int param1);
    friend void KPasswordLineEdit_InitPainter(const KPasswordLineEdit* self, QPainter* painter);
    friend void KPasswordLineEdit_SuperInitPainter(const KPasswordLineEdit* self, QPainter* painter);
    friend QPaintDevice* KPasswordLineEdit_Redirected(const KPasswordLineEdit* self, QPoint* offset);
    friend QPaintDevice* KPasswordLineEdit_SuperRedirected(const KPasswordLineEdit* self, QPoint* offset);
    friend QPainter* KPasswordLineEdit_SharedPainter(const KPasswordLineEdit* self);
    friend QPainter* KPasswordLineEdit_SuperSharedPainter(const KPasswordLineEdit* self);
    friend void KPasswordLineEdit_InputMethodEvent(KPasswordLineEdit* self, QInputMethodEvent* param1);
    friend void KPasswordLineEdit_SuperInputMethodEvent(KPasswordLineEdit* self, QInputMethodEvent* param1);
    friend bool KPasswordLineEdit_FocusNextPrevChild(KPasswordLineEdit* self, bool next);
    friend bool KPasswordLineEdit_SuperFocusNextPrevChild(KPasswordLineEdit* self, bool next);
    friend void KPasswordLineEdit_TimerEvent(KPasswordLineEdit* self, QTimerEvent* event);
    friend void KPasswordLineEdit_SuperTimerEvent(KPasswordLineEdit* self, QTimerEvent* event);
    friend void KPasswordLineEdit_ChildEvent(KPasswordLineEdit* self, QChildEvent* event);
    friend void KPasswordLineEdit_SuperChildEvent(KPasswordLineEdit* self, QChildEvent* event);
    friend void KPasswordLineEdit_CustomEvent(KPasswordLineEdit* self, QEvent* event);
    friend void KPasswordLineEdit_SuperCustomEvent(KPasswordLineEdit* self, QEvent* event);
    friend void KPasswordLineEdit_ConnectNotify(KPasswordLineEdit* self, const QMetaMethod* signal);
    friend void KPasswordLineEdit_SuperConnectNotify(KPasswordLineEdit* self, const QMetaMethod* signal);
    friend void KPasswordLineEdit_DisconnectNotify(KPasswordLineEdit* self, const QMetaMethod* signal);
    friend void KPasswordLineEdit_SuperDisconnectNotify(KPasswordLineEdit* self, const QMetaMethod* signal);
    friend void KPasswordLineEdit_UpdateMicroFocus(KPasswordLineEdit* self);
    friend void KPasswordLineEdit_SuperUpdateMicroFocus(KPasswordLineEdit* self);
    friend void KPasswordLineEdit_Create(KPasswordLineEdit* self);
    friend void KPasswordLineEdit_SuperCreate(KPasswordLineEdit* self);
    friend void KPasswordLineEdit_Destroy(KPasswordLineEdit* self);
    friend void KPasswordLineEdit_SuperDestroy(KPasswordLineEdit* self);
    friend bool KPasswordLineEdit_FocusNextChild(KPasswordLineEdit* self);
    friend bool KPasswordLineEdit_SuperFocusNextChild(KPasswordLineEdit* self);
    friend bool KPasswordLineEdit_FocusPreviousChild(KPasswordLineEdit* self);
    friend bool KPasswordLineEdit_SuperFocusPreviousChild(KPasswordLineEdit* self);
    friend QObject* KPasswordLineEdit_Sender(const KPasswordLineEdit* self);
    friend QObject* KPasswordLineEdit_SuperSender(const KPasswordLineEdit* self);
    friend int KPasswordLineEdit_SenderSignalIndex(const KPasswordLineEdit* self);
    friend int KPasswordLineEdit_SuperSenderSignalIndex(const KPasswordLineEdit* self);
    friend int KPasswordLineEdit_Receivers(const KPasswordLineEdit* self, const char* signal);
    friend int KPasswordLineEdit_SuperReceivers(const KPasswordLineEdit* self, const char* signal);
    friend bool KPasswordLineEdit_IsSignalConnected(const KPasswordLineEdit* self, const QMetaMethod* signal);
    friend bool KPasswordLineEdit_SuperIsSignalConnected(const KPasswordLineEdit* self, const QMetaMethod* signal);
    friend double KPasswordLineEdit_GetDecodedMetricF(const KPasswordLineEdit* self, int metricA, int metricB);
    friend double KPasswordLineEdit_SuperGetDecodedMetricF(const KPasswordLineEdit* self, int metricA, int metricB);
};

#endif
