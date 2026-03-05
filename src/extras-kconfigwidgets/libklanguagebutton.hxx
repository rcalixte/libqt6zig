#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETSC_LIBVIRTUALKLANGUAGEBUTTON_H
#define SRC_EXTRAS_KCONFIGWIDGETSC_LIBVIRTUALKLANGUAGEBUTTON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KLanguageButton so that we can call protected methods
class VirtualKLanguageButton final : public KLanguageButton {

  public:
    // Virtual class boolean flag
    bool isVirtualKLanguageButton = true;

    // Virtual class public types (including callbacks)
    using KLanguageButton_MetaObject_Callback = QMetaObject* (*)();
    using KLanguageButton_Metacast_Callback = void* (*)(KLanguageButton*, const char*);
    using KLanguageButton_Metacall_Callback = int (*)(KLanguageButton*, int, int, void**);
    using KLanguageButton_DevType_Callback = int (*)();
    using KLanguageButton_SetVisible_Callback = void (*)(KLanguageButton*, bool);
    using KLanguageButton_SizeHint_Callback = QSize* (*)();
    using KLanguageButton_MinimumSizeHint_Callback = QSize* (*)();
    using KLanguageButton_HeightForWidth_Callback = int (*)(const KLanguageButton*, int);
    using KLanguageButton_HasHeightForWidth_Callback = bool (*)();
    using KLanguageButton_PaintEngine_Callback = QPaintEngine* (*)();
    using KLanguageButton_Event_Callback = bool (*)(KLanguageButton*, QEvent*);
    using KLanguageButton_MousePressEvent_Callback = void (*)(KLanguageButton*, QMouseEvent*);
    using KLanguageButton_MouseReleaseEvent_Callback = void (*)(KLanguageButton*, QMouseEvent*);
    using KLanguageButton_MouseDoubleClickEvent_Callback = void (*)(KLanguageButton*, QMouseEvent*);
    using KLanguageButton_MouseMoveEvent_Callback = void (*)(KLanguageButton*, QMouseEvent*);
    using KLanguageButton_WheelEvent_Callback = void (*)(KLanguageButton*, QWheelEvent*);
    using KLanguageButton_KeyPressEvent_Callback = void (*)(KLanguageButton*, QKeyEvent*);
    using KLanguageButton_KeyReleaseEvent_Callback = void (*)(KLanguageButton*, QKeyEvent*);
    using KLanguageButton_FocusInEvent_Callback = void (*)(KLanguageButton*, QFocusEvent*);
    using KLanguageButton_FocusOutEvent_Callback = void (*)(KLanguageButton*, QFocusEvent*);
    using KLanguageButton_EnterEvent_Callback = void (*)(KLanguageButton*, QEnterEvent*);
    using KLanguageButton_LeaveEvent_Callback = void (*)(KLanguageButton*, QEvent*);
    using KLanguageButton_PaintEvent_Callback = void (*)(KLanguageButton*, QPaintEvent*);
    using KLanguageButton_MoveEvent_Callback = void (*)(KLanguageButton*, QMoveEvent*);
    using KLanguageButton_ResizeEvent_Callback = void (*)(KLanguageButton*, QResizeEvent*);
    using KLanguageButton_CloseEvent_Callback = void (*)(KLanguageButton*, QCloseEvent*);
    using KLanguageButton_ContextMenuEvent_Callback = void (*)(KLanguageButton*, QContextMenuEvent*);
    using KLanguageButton_TabletEvent_Callback = void (*)(KLanguageButton*, QTabletEvent*);
    using KLanguageButton_ActionEvent_Callback = void (*)(KLanguageButton*, QActionEvent*);
    using KLanguageButton_DragEnterEvent_Callback = void (*)(KLanguageButton*, QDragEnterEvent*);
    using KLanguageButton_DragMoveEvent_Callback = void (*)(KLanguageButton*, QDragMoveEvent*);
    using KLanguageButton_DragLeaveEvent_Callback = void (*)(KLanguageButton*, QDragLeaveEvent*);
    using KLanguageButton_DropEvent_Callback = void (*)(KLanguageButton*, QDropEvent*);
    using KLanguageButton_ShowEvent_Callback = void (*)(KLanguageButton*, QShowEvent*);
    using KLanguageButton_HideEvent_Callback = void (*)(KLanguageButton*, QHideEvent*);
    using KLanguageButton_NativeEvent_Callback = bool (*)(KLanguageButton*, libqt_string, void*, intptr_t*);
    using KLanguageButton_ChangeEvent_Callback = void (*)(KLanguageButton*, QEvent*);
    using KLanguageButton_Metric_Callback = int (*)(const KLanguageButton*, int);
    using KLanguageButton_InitPainter_Callback = void (*)(const KLanguageButton*, QPainter*);
    using KLanguageButton_Redirected_Callback = QPaintDevice* (*)(const KLanguageButton*, QPoint*);
    using KLanguageButton_SharedPainter_Callback = QPainter* (*)();
    using KLanguageButton_InputMethodEvent_Callback = void (*)(KLanguageButton*, QInputMethodEvent*);
    using KLanguageButton_InputMethodQuery_Callback = QVariant* (*)(const KLanguageButton*, int);
    using KLanguageButton_FocusNextPrevChild_Callback = bool (*)(KLanguageButton*, bool);
    using KLanguageButton_EventFilter_Callback = bool (*)(KLanguageButton*, QObject*, QEvent*);
    using KLanguageButton_TimerEvent_Callback = void (*)(KLanguageButton*, QTimerEvent*);
    using KLanguageButton_ChildEvent_Callback = void (*)(KLanguageButton*, QChildEvent*);
    using KLanguageButton_CustomEvent_Callback = void (*)(KLanguageButton*, QEvent*);
    using KLanguageButton_ConnectNotify_Callback = void (*)(KLanguageButton*, QMetaMethod*);
    using KLanguageButton_DisconnectNotify_Callback = void (*)(KLanguageButton*, QMetaMethod*);
    using KLanguageButton_UpdateMicroFocus_Callback = void (*)();
    using KLanguageButton_Create_Callback = void (*)();
    using KLanguageButton_Destroy_Callback = void (*)();
    using KLanguageButton_FocusNextChild_Callback = bool (*)();
    using KLanguageButton_FocusPreviousChild_Callback = bool (*)();
    using KLanguageButton_Sender_Callback = QObject* (*)();
    using KLanguageButton_SenderSignalIndex_Callback = int (*)();
    using KLanguageButton_Receivers_Callback = int (*)(const KLanguageButton*, const char*);
    using KLanguageButton_IsSignalConnected_Callback = bool (*)(const KLanguageButton*, QMetaMethod*);
    using KLanguageButton_GetDecodedMetricF_Callback = double (*)(const KLanguageButton*, int, int);

  protected:
    // Instance callback storage
    KLanguageButton_MetaObject_Callback klanguagebutton_metaobject_callback = nullptr;
    KLanguageButton_Metacast_Callback klanguagebutton_metacast_callback = nullptr;
    KLanguageButton_Metacall_Callback klanguagebutton_metacall_callback = nullptr;
    KLanguageButton_DevType_Callback klanguagebutton_devtype_callback = nullptr;
    KLanguageButton_SetVisible_Callback klanguagebutton_setvisible_callback = nullptr;
    KLanguageButton_SizeHint_Callback klanguagebutton_sizehint_callback = nullptr;
    KLanguageButton_MinimumSizeHint_Callback klanguagebutton_minimumsizehint_callback = nullptr;
    KLanguageButton_HeightForWidth_Callback klanguagebutton_heightforwidth_callback = nullptr;
    KLanguageButton_HasHeightForWidth_Callback klanguagebutton_hasheightforwidth_callback = nullptr;
    KLanguageButton_PaintEngine_Callback klanguagebutton_paintengine_callback = nullptr;
    KLanguageButton_Event_Callback klanguagebutton_event_callback = nullptr;
    KLanguageButton_MousePressEvent_Callback klanguagebutton_mousepressevent_callback = nullptr;
    KLanguageButton_MouseReleaseEvent_Callback klanguagebutton_mousereleaseevent_callback = nullptr;
    KLanguageButton_MouseDoubleClickEvent_Callback klanguagebutton_mousedoubleclickevent_callback = nullptr;
    KLanguageButton_MouseMoveEvent_Callback klanguagebutton_mousemoveevent_callback = nullptr;
    KLanguageButton_WheelEvent_Callback klanguagebutton_wheelevent_callback = nullptr;
    KLanguageButton_KeyPressEvent_Callback klanguagebutton_keypressevent_callback = nullptr;
    KLanguageButton_KeyReleaseEvent_Callback klanguagebutton_keyreleaseevent_callback = nullptr;
    KLanguageButton_FocusInEvent_Callback klanguagebutton_focusinevent_callback = nullptr;
    KLanguageButton_FocusOutEvent_Callback klanguagebutton_focusoutevent_callback = nullptr;
    KLanguageButton_EnterEvent_Callback klanguagebutton_enterevent_callback = nullptr;
    KLanguageButton_LeaveEvent_Callback klanguagebutton_leaveevent_callback = nullptr;
    KLanguageButton_PaintEvent_Callback klanguagebutton_paintevent_callback = nullptr;
    KLanguageButton_MoveEvent_Callback klanguagebutton_moveevent_callback = nullptr;
    KLanguageButton_ResizeEvent_Callback klanguagebutton_resizeevent_callback = nullptr;
    KLanguageButton_CloseEvent_Callback klanguagebutton_closeevent_callback = nullptr;
    KLanguageButton_ContextMenuEvent_Callback klanguagebutton_contextmenuevent_callback = nullptr;
    KLanguageButton_TabletEvent_Callback klanguagebutton_tabletevent_callback = nullptr;
    KLanguageButton_ActionEvent_Callback klanguagebutton_actionevent_callback = nullptr;
    KLanguageButton_DragEnterEvent_Callback klanguagebutton_dragenterevent_callback = nullptr;
    KLanguageButton_DragMoveEvent_Callback klanguagebutton_dragmoveevent_callback = nullptr;
    KLanguageButton_DragLeaveEvent_Callback klanguagebutton_dragleaveevent_callback = nullptr;
    KLanguageButton_DropEvent_Callback klanguagebutton_dropevent_callback = nullptr;
    KLanguageButton_ShowEvent_Callback klanguagebutton_showevent_callback = nullptr;
    KLanguageButton_HideEvent_Callback klanguagebutton_hideevent_callback = nullptr;
    KLanguageButton_NativeEvent_Callback klanguagebutton_nativeevent_callback = nullptr;
    KLanguageButton_ChangeEvent_Callback klanguagebutton_changeevent_callback = nullptr;
    KLanguageButton_Metric_Callback klanguagebutton_metric_callback = nullptr;
    KLanguageButton_InitPainter_Callback klanguagebutton_initpainter_callback = nullptr;
    KLanguageButton_Redirected_Callback klanguagebutton_redirected_callback = nullptr;
    KLanguageButton_SharedPainter_Callback klanguagebutton_sharedpainter_callback = nullptr;
    KLanguageButton_InputMethodEvent_Callback klanguagebutton_inputmethodevent_callback = nullptr;
    KLanguageButton_InputMethodQuery_Callback klanguagebutton_inputmethodquery_callback = nullptr;
    KLanguageButton_FocusNextPrevChild_Callback klanguagebutton_focusnextprevchild_callback = nullptr;
    KLanguageButton_EventFilter_Callback klanguagebutton_eventfilter_callback = nullptr;
    KLanguageButton_TimerEvent_Callback klanguagebutton_timerevent_callback = nullptr;
    KLanguageButton_ChildEvent_Callback klanguagebutton_childevent_callback = nullptr;
    KLanguageButton_CustomEvent_Callback klanguagebutton_customevent_callback = nullptr;
    KLanguageButton_ConnectNotify_Callback klanguagebutton_connectnotify_callback = nullptr;
    KLanguageButton_DisconnectNotify_Callback klanguagebutton_disconnectnotify_callback = nullptr;
    KLanguageButton_UpdateMicroFocus_Callback klanguagebutton_updatemicrofocus_callback = nullptr;
    KLanguageButton_Create_Callback klanguagebutton_create_callback = nullptr;
    KLanguageButton_Destroy_Callback klanguagebutton_destroy_callback = nullptr;
    KLanguageButton_FocusNextChild_Callback klanguagebutton_focusnextchild_callback = nullptr;
    KLanguageButton_FocusPreviousChild_Callback klanguagebutton_focuspreviouschild_callback = nullptr;
    KLanguageButton_Sender_Callback klanguagebutton_sender_callback = nullptr;
    KLanguageButton_SenderSignalIndex_Callback klanguagebutton_sendersignalindex_callback = nullptr;
    KLanguageButton_Receivers_Callback klanguagebutton_receivers_callback = nullptr;
    KLanguageButton_IsSignalConnected_Callback klanguagebutton_issignalconnected_callback = nullptr;
    KLanguageButton_GetDecodedMetricF_Callback klanguagebutton_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool klanguagebutton_metaobject_isbase = false;
    mutable bool klanguagebutton_metacast_isbase = false;
    mutable bool klanguagebutton_metacall_isbase = false;
    mutable bool klanguagebutton_devtype_isbase = false;
    mutable bool klanguagebutton_setvisible_isbase = false;
    mutable bool klanguagebutton_sizehint_isbase = false;
    mutable bool klanguagebutton_minimumsizehint_isbase = false;
    mutable bool klanguagebutton_heightforwidth_isbase = false;
    mutable bool klanguagebutton_hasheightforwidth_isbase = false;
    mutable bool klanguagebutton_paintengine_isbase = false;
    mutable bool klanguagebutton_event_isbase = false;
    mutable bool klanguagebutton_mousepressevent_isbase = false;
    mutable bool klanguagebutton_mousereleaseevent_isbase = false;
    mutable bool klanguagebutton_mousedoubleclickevent_isbase = false;
    mutable bool klanguagebutton_mousemoveevent_isbase = false;
    mutable bool klanguagebutton_wheelevent_isbase = false;
    mutable bool klanguagebutton_keypressevent_isbase = false;
    mutable bool klanguagebutton_keyreleaseevent_isbase = false;
    mutable bool klanguagebutton_focusinevent_isbase = false;
    mutable bool klanguagebutton_focusoutevent_isbase = false;
    mutable bool klanguagebutton_enterevent_isbase = false;
    mutable bool klanguagebutton_leaveevent_isbase = false;
    mutable bool klanguagebutton_paintevent_isbase = false;
    mutable bool klanguagebutton_moveevent_isbase = false;
    mutable bool klanguagebutton_resizeevent_isbase = false;
    mutable bool klanguagebutton_closeevent_isbase = false;
    mutable bool klanguagebutton_contextmenuevent_isbase = false;
    mutable bool klanguagebutton_tabletevent_isbase = false;
    mutable bool klanguagebutton_actionevent_isbase = false;
    mutable bool klanguagebutton_dragenterevent_isbase = false;
    mutable bool klanguagebutton_dragmoveevent_isbase = false;
    mutable bool klanguagebutton_dragleaveevent_isbase = false;
    mutable bool klanguagebutton_dropevent_isbase = false;
    mutable bool klanguagebutton_showevent_isbase = false;
    mutable bool klanguagebutton_hideevent_isbase = false;
    mutable bool klanguagebutton_nativeevent_isbase = false;
    mutable bool klanguagebutton_changeevent_isbase = false;
    mutable bool klanguagebutton_metric_isbase = false;
    mutable bool klanguagebutton_initpainter_isbase = false;
    mutable bool klanguagebutton_redirected_isbase = false;
    mutable bool klanguagebutton_sharedpainter_isbase = false;
    mutable bool klanguagebutton_inputmethodevent_isbase = false;
    mutable bool klanguagebutton_inputmethodquery_isbase = false;
    mutable bool klanguagebutton_focusnextprevchild_isbase = false;
    mutable bool klanguagebutton_eventfilter_isbase = false;
    mutable bool klanguagebutton_timerevent_isbase = false;
    mutable bool klanguagebutton_childevent_isbase = false;
    mutable bool klanguagebutton_customevent_isbase = false;
    mutable bool klanguagebutton_connectnotify_isbase = false;
    mutable bool klanguagebutton_disconnectnotify_isbase = false;
    mutable bool klanguagebutton_updatemicrofocus_isbase = false;
    mutable bool klanguagebutton_create_isbase = false;
    mutable bool klanguagebutton_destroy_isbase = false;
    mutable bool klanguagebutton_focusnextchild_isbase = false;
    mutable bool klanguagebutton_focuspreviouschild_isbase = false;
    mutable bool klanguagebutton_sender_isbase = false;
    mutable bool klanguagebutton_sendersignalindex_isbase = false;
    mutable bool klanguagebutton_receivers_isbase = false;
    mutable bool klanguagebutton_issignalconnected_isbase = false;
    mutable bool klanguagebutton_getdecodedmetricf_isbase = false;

  public:
    VirtualKLanguageButton(QWidget* parent) : KLanguageButton(parent) {};
    VirtualKLanguageButton() : KLanguageButton() {};
    VirtualKLanguageButton(const QString& text) : KLanguageButton(text) {};
    VirtualKLanguageButton(const QString& text, QWidget* parent) : KLanguageButton(text, parent) {};

    // Callback setters
    inline void setKLanguageButton_MetaObject_Callback(KLanguageButton_MetaObject_Callback cb) { klanguagebutton_metaobject_callback = cb; }
    inline void setKLanguageButton_Metacast_Callback(KLanguageButton_Metacast_Callback cb) { klanguagebutton_metacast_callback = cb; }
    inline void setKLanguageButton_Metacall_Callback(KLanguageButton_Metacall_Callback cb) { klanguagebutton_metacall_callback = cb; }
    inline void setKLanguageButton_DevType_Callback(KLanguageButton_DevType_Callback cb) { klanguagebutton_devtype_callback = cb; }
    inline void setKLanguageButton_SetVisible_Callback(KLanguageButton_SetVisible_Callback cb) { klanguagebutton_setvisible_callback = cb; }
    inline void setKLanguageButton_SizeHint_Callback(KLanguageButton_SizeHint_Callback cb) { klanguagebutton_sizehint_callback = cb; }
    inline void setKLanguageButton_MinimumSizeHint_Callback(KLanguageButton_MinimumSizeHint_Callback cb) { klanguagebutton_minimumsizehint_callback = cb; }
    inline void setKLanguageButton_HeightForWidth_Callback(KLanguageButton_HeightForWidth_Callback cb) { klanguagebutton_heightforwidth_callback = cb; }
    inline void setKLanguageButton_HasHeightForWidth_Callback(KLanguageButton_HasHeightForWidth_Callback cb) { klanguagebutton_hasheightforwidth_callback = cb; }
    inline void setKLanguageButton_PaintEngine_Callback(KLanguageButton_PaintEngine_Callback cb) { klanguagebutton_paintengine_callback = cb; }
    inline void setKLanguageButton_Event_Callback(KLanguageButton_Event_Callback cb) { klanguagebutton_event_callback = cb; }
    inline void setKLanguageButton_MousePressEvent_Callback(KLanguageButton_MousePressEvent_Callback cb) { klanguagebutton_mousepressevent_callback = cb; }
    inline void setKLanguageButton_MouseReleaseEvent_Callback(KLanguageButton_MouseReleaseEvent_Callback cb) { klanguagebutton_mousereleaseevent_callback = cb; }
    inline void setKLanguageButton_MouseDoubleClickEvent_Callback(KLanguageButton_MouseDoubleClickEvent_Callback cb) { klanguagebutton_mousedoubleclickevent_callback = cb; }
    inline void setKLanguageButton_MouseMoveEvent_Callback(KLanguageButton_MouseMoveEvent_Callback cb) { klanguagebutton_mousemoveevent_callback = cb; }
    inline void setKLanguageButton_WheelEvent_Callback(KLanguageButton_WheelEvent_Callback cb) { klanguagebutton_wheelevent_callback = cb; }
    inline void setKLanguageButton_KeyPressEvent_Callback(KLanguageButton_KeyPressEvent_Callback cb) { klanguagebutton_keypressevent_callback = cb; }
    inline void setKLanguageButton_KeyReleaseEvent_Callback(KLanguageButton_KeyReleaseEvent_Callback cb) { klanguagebutton_keyreleaseevent_callback = cb; }
    inline void setKLanguageButton_FocusInEvent_Callback(KLanguageButton_FocusInEvent_Callback cb) { klanguagebutton_focusinevent_callback = cb; }
    inline void setKLanguageButton_FocusOutEvent_Callback(KLanguageButton_FocusOutEvent_Callback cb) { klanguagebutton_focusoutevent_callback = cb; }
    inline void setKLanguageButton_EnterEvent_Callback(KLanguageButton_EnterEvent_Callback cb) { klanguagebutton_enterevent_callback = cb; }
    inline void setKLanguageButton_LeaveEvent_Callback(KLanguageButton_LeaveEvent_Callback cb) { klanguagebutton_leaveevent_callback = cb; }
    inline void setKLanguageButton_PaintEvent_Callback(KLanguageButton_PaintEvent_Callback cb) { klanguagebutton_paintevent_callback = cb; }
    inline void setKLanguageButton_MoveEvent_Callback(KLanguageButton_MoveEvent_Callback cb) { klanguagebutton_moveevent_callback = cb; }
    inline void setKLanguageButton_ResizeEvent_Callback(KLanguageButton_ResizeEvent_Callback cb) { klanguagebutton_resizeevent_callback = cb; }
    inline void setKLanguageButton_CloseEvent_Callback(KLanguageButton_CloseEvent_Callback cb) { klanguagebutton_closeevent_callback = cb; }
    inline void setKLanguageButton_ContextMenuEvent_Callback(KLanguageButton_ContextMenuEvent_Callback cb) { klanguagebutton_contextmenuevent_callback = cb; }
    inline void setKLanguageButton_TabletEvent_Callback(KLanguageButton_TabletEvent_Callback cb) { klanguagebutton_tabletevent_callback = cb; }
    inline void setKLanguageButton_ActionEvent_Callback(KLanguageButton_ActionEvent_Callback cb) { klanguagebutton_actionevent_callback = cb; }
    inline void setKLanguageButton_DragEnterEvent_Callback(KLanguageButton_DragEnterEvent_Callback cb) { klanguagebutton_dragenterevent_callback = cb; }
    inline void setKLanguageButton_DragMoveEvent_Callback(KLanguageButton_DragMoveEvent_Callback cb) { klanguagebutton_dragmoveevent_callback = cb; }
    inline void setKLanguageButton_DragLeaveEvent_Callback(KLanguageButton_DragLeaveEvent_Callback cb) { klanguagebutton_dragleaveevent_callback = cb; }
    inline void setKLanguageButton_DropEvent_Callback(KLanguageButton_DropEvent_Callback cb) { klanguagebutton_dropevent_callback = cb; }
    inline void setKLanguageButton_ShowEvent_Callback(KLanguageButton_ShowEvent_Callback cb) { klanguagebutton_showevent_callback = cb; }
    inline void setKLanguageButton_HideEvent_Callback(KLanguageButton_HideEvent_Callback cb) { klanguagebutton_hideevent_callback = cb; }
    inline void setKLanguageButton_NativeEvent_Callback(KLanguageButton_NativeEvent_Callback cb) { klanguagebutton_nativeevent_callback = cb; }
    inline void setKLanguageButton_ChangeEvent_Callback(KLanguageButton_ChangeEvent_Callback cb) { klanguagebutton_changeevent_callback = cb; }
    inline void setKLanguageButton_Metric_Callback(KLanguageButton_Metric_Callback cb) { klanguagebutton_metric_callback = cb; }
    inline void setKLanguageButton_InitPainter_Callback(KLanguageButton_InitPainter_Callback cb) { klanguagebutton_initpainter_callback = cb; }
    inline void setKLanguageButton_Redirected_Callback(KLanguageButton_Redirected_Callback cb) { klanguagebutton_redirected_callback = cb; }
    inline void setKLanguageButton_SharedPainter_Callback(KLanguageButton_SharedPainter_Callback cb) { klanguagebutton_sharedpainter_callback = cb; }
    inline void setKLanguageButton_InputMethodEvent_Callback(KLanguageButton_InputMethodEvent_Callback cb) { klanguagebutton_inputmethodevent_callback = cb; }
    inline void setKLanguageButton_InputMethodQuery_Callback(KLanguageButton_InputMethodQuery_Callback cb) { klanguagebutton_inputmethodquery_callback = cb; }
    inline void setKLanguageButton_FocusNextPrevChild_Callback(KLanguageButton_FocusNextPrevChild_Callback cb) { klanguagebutton_focusnextprevchild_callback = cb; }
    inline void setKLanguageButton_EventFilter_Callback(KLanguageButton_EventFilter_Callback cb) { klanguagebutton_eventfilter_callback = cb; }
    inline void setKLanguageButton_TimerEvent_Callback(KLanguageButton_TimerEvent_Callback cb) { klanguagebutton_timerevent_callback = cb; }
    inline void setKLanguageButton_ChildEvent_Callback(KLanguageButton_ChildEvent_Callback cb) { klanguagebutton_childevent_callback = cb; }
    inline void setKLanguageButton_CustomEvent_Callback(KLanguageButton_CustomEvent_Callback cb) { klanguagebutton_customevent_callback = cb; }
    inline void setKLanguageButton_ConnectNotify_Callback(KLanguageButton_ConnectNotify_Callback cb) { klanguagebutton_connectnotify_callback = cb; }
    inline void setKLanguageButton_DisconnectNotify_Callback(KLanguageButton_DisconnectNotify_Callback cb) { klanguagebutton_disconnectnotify_callback = cb; }
    inline void setKLanguageButton_UpdateMicroFocus_Callback(KLanguageButton_UpdateMicroFocus_Callback cb) { klanguagebutton_updatemicrofocus_callback = cb; }
    inline void setKLanguageButton_Create_Callback(KLanguageButton_Create_Callback cb) { klanguagebutton_create_callback = cb; }
    inline void setKLanguageButton_Destroy_Callback(KLanguageButton_Destroy_Callback cb) { klanguagebutton_destroy_callback = cb; }
    inline void setKLanguageButton_FocusNextChild_Callback(KLanguageButton_FocusNextChild_Callback cb) { klanguagebutton_focusnextchild_callback = cb; }
    inline void setKLanguageButton_FocusPreviousChild_Callback(KLanguageButton_FocusPreviousChild_Callback cb) { klanguagebutton_focuspreviouschild_callback = cb; }
    inline void setKLanguageButton_Sender_Callback(KLanguageButton_Sender_Callback cb) { klanguagebutton_sender_callback = cb; }
    inline void setKLanguageButton_SenderSignalIndex_Callback(KLanguageButton_SenderSignalIndex_Callback cb) { klanguagebutton_sendersignalindex_callback = cb; }
    inline void setKLanguageButton_Receivers_Callback(KLanguageButton_Receivers_Callback cb) { klanguagebutton_receivers_callback = cb; }
    inline void setKLanguageButton_IsSignalConnected_Callback(KLanguageButton_IsSignalConnected_Callback cb) { klanguagebutton_issignalconnected_callback = cb; }
    inline void setKLanguageButton_GetDecodedMetricF_Callback(KLanguageButton_GetDecodedMetricF_Callback cb) { klanguagebutton_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKLanguageButton_MetaObject_IsBase(bool value) const { klanguagebutton_metaobject_isbase = value; }
    inline void setKLanguageButton_Metacast_IsBase(bool value) const { klanguagebutton_metacast_isbase = value; }
    inline void setKLanguageButton_Metacall_IsBase(bool value) const { klanguagebutton_metacall_isbase = value; }
    inline void setKLanguageButton_DevType_IsBase(bool value) const { klanguagebutton_devtype_isbase = value; }
    inline void setKLanguageButton_SetVisible_IsBase(bool value) const { klanguagebutton_setvisible_isbase = value; }
    inline void setKLanguageButton_SizeHint_IsBase(bool value) const { klanguagebutton_sizehint_isbase = value; }
    inline void setKLanguageButton_MinimumSizeHint_IsBase(bool value) const { klanguagebutton_minimumsizehint_isbase = value; }
    inline void setKLanguageButton_HeightForWidth_IsBase(bool value) const { klanguagebutton_heightforwidth_isbase = value; }
    inline void setKLanguageButton_HasHeightForWidth_IsBase(bool value) const { klanguagebutton_hasheightforwidth_isbase = value; }
    inline void setKLanguageButton_PaintEngine_IsBase(bool value) const { klanguagebutton_paintengine_isbase = value; }
    inline void setKLanguageButton_Event_IsBase(bool value) const { klanguagebutton_event_isbase = value; }
    inline void setKLanguageButton_MousePressEvent_IsBase(bool value) const { klanguagebutton_mousepressevent_isbase = value; }
    inline void setKLanguageButton_MouseReleaseEvent_IsBase(bool value) const { klanguagebutton_mousereleaseevent_isbase = value; }
    inline void setKLanguageButton_MouseDoubleClickEvent_IsBase(bool value) const { klanguagebutton_mousedoubleclickevent_isbase = value; }
    inline void setKLanguageButton_MouseMoveEvent_IsBase(bool value) const { klanguagebutton_mousemoveevent_isbase = value; }
    inline void setKLanguageButton_WheelEvent_IsBase(bool value) const { klanguagebutton_wheelevent_isbase = value; }
    inline void setKLanguageButton_KeyPressEvent_IsBase(bool value) const { klanguagebutton_keypressevent_isbase = value; }
    inline void setKLanguageButton_KeyReleaseEvent_IsBase(bool value) const { klanguagebutton_keyreleaseevent_isbase = value; }
    inline void setKLanguageButton_FocusInEvent_IsBase(bool value) const { klanguagebutton_focusinevent_isbase = value; }
    inline void setKLanguageButton_FocusOutEvent_IsBase(bool value) const { klanguagebutton_focusoutevent_isbase = value; }
    inline void setKLanguageButton_EnterEvent_IsBase(bool value) const { klanguagebutton_enterevent_isbase = value; }
    inline void setKLanguageButton_LeaveEvent_IsBase(bool value) const { klanguagebutton_leaveevent_isbase = value; }
    inline void setKLanguageButton_PaintEvent_IsBase(bool value) const { klanguagebutton_paintevent_isbase = value; }
    inline void setKLanguageButton_MoveEvent_IsBase(bool value) const { klanguagebutton_moveevent_isbase = value; }
    inline void setKLanguageButton_ResizeEvent_IsBase(bool value) const { klanguagebutton_resizeevent_isbase = value; }
    inline void setKLanguageButton_CloseEvent_IsBase(bool value) const { klanguagebutton_closeevent_isbase = value; }
    inline void setKLanguageButton_ContextMenuEvent_IsBase(bool value) const { klanguagebutton_contextmenuevent_isbase = value; }
    inline void setKLanguageButton_TabletEvent_IsBase(bool value) const { klanguagebutton_tabletevent_isbase = value; }
    inline void setKLanguageButton_ActionEvent_IsBase(bool value) const { klanguagebutton_actionevent_isbase = value; }
    inline void setKLanguageButton_DragEnterEvent_IsBase(bool value) const { klanguagebutton_dragenterevent_isbase = value; }
    inline void setKLanguageButton_DragMoveEvent_IsBase(bool value) const { klanguagebutton_dragmoveevent_isbase = value; }
    inline void setKLanguageButton_DragLeaveEvent_IsBase(bool value) const { klanguagebutton_dragleaveevent_isbase = value; }
    inline void setKLanguageButton_DropEvent_IsBase(bool value) const { klanguagebutton_dropevent_isbase = value; }
    inline void setKLanguageButton_ShowEvent_IsBase(bool value) const { klanguagebutton_showevent_isbase = value; }
    inline void setKLanguageButton_HideEvent_IsBase(bool value) const { klanguagebutton_hideevent_isbase = value; }
    inline void setKLanguageButton_NativeEvent_IsBase(bool value) const { klanguagebutton_nativeevent_isbase = value; }
    inline void setKLanguageButton_ChangeEvent_IsBase(bool value) const { klanguagebutton_changeevent_isbase = value; }
    inline void setKLanguageButton_Metric_IsBase(bool value) const { klanguagebutton_metric_isbase = value; }
    inline void setKLanguageButton_InitPainter_IsBase(bool value) const { klanguagebutton_initpainter_isbase = value; }
    inline void setKLanguageButton_Redirected_IsBase(bool value) const { klanguagebutton_redirected_isbase = value; }
    inline void setKLanguageButton_SharedPainter_IsBase(bool value) const { klanguagebutton_sharedpainter_isbase = value; }
    inline void setKLanguageButton_InputMethodEvent_IsBase(bool value) const { klanguagebutton_inputmethodevent_isbase = value; }
    inline void setKLanguageButton_InputMethodQuery_IsBase(bool value) const { klanguagebutton_inputmethodquery_isbase = value; }
    inline void setKLanguageButton_FocusNextPrevChild_IsBase(bool value) const { klanguagebutton_focusnextprevchild_isbase = value; }
    inline void setKLanguageButton_EventFilter_IsBase(bool value) const { klanguagebutton_eventfilter_isbase = value; }
    inline void setKLanguageButton_TimerEvent_IsBase(bool value) const { klanguagebutton_timerevent_isbase = value; }
    inline void setKLanguageButton_ChildEvent_IsBase(bool value) const { klanguagebutton_childevent_isbase = value; }
    inline void setKLanguageButton_CustomEvent_IsBase(bool value) const { klanguagebutton_customevent_isbase = value; }
    inline void setKLanguageButton_ConnectNotify_IsBase(bool value) const { klanguagebutton_connectnotify_isbase = value; }
    inline void setKLanguageButton_DisconnectNotify_IsBase(bool value) const { klanguagebutton_disconnectnotify_isbase = value; }
    inline void setKLanguageButton_UpdateMicroFocus_IsBase(bool value) const { klanguagebutton_updatemicrofocus_isbase = value; }
    inline void setKLanguageButton_Create_IsBase(bool value) const { klanguagebutton_create_isbase = value; }
    inline void setKLanguageButton_Destroy_IsBase(bool value) const { klanguagebutton_destroy_isbase = value; }
    inline void setKLanguageButton_FocusNextChild_IsBase(bool value) const { klanguagebutton_focusnextchild_isbase = value; }
    inline void setKLanguageButton_FocusPreviousChild_IsBase(bool value) const { klanguagebutton_focuspreviouschild_isbase = value; }
    inline void setKLanguageButton_Sender_IsBase(bool value) const { klanguagebutton_sender_isbase = value; }
    inline void setKLanguageButton_SenderSignalIndex_IsBase(bool value) const { klanguagebutton_sendersignalindex_isbase = value; }
    inline void setKLanguageButton_Receivers_IsBase(bool value) const { klanguagebutton_receivers_isbase = value; }
    inline void setKLanguageButton_IsSignalConnected_IsBase(bool value) const { klanguagebutton_issignalconnected_isbase = value; }
    inline void setKLanguageButton_GetDecodedMetricF_IsBase(bool value) const { klanguagebutton_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (klanguagebutton_metaobject_isbase) {
            klanguagebutton_metaobject_isbase = false;
            return KLanguageButton::metaObject();
        }
        auto metaobject_cb = klanguagebutton_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KLanguageButton::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (klanguagebutton_metacast_isbase) {
            klanguagebutton_metacast_isbase = false;
            return KLanguageButton::qt_metacast(param1);
        }
        auto metacast_cb = klanguagebutton_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KLanguageButton::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (klanguagebutton_metacall_isbase) {
            klanguagebutton_metacall_isbase = false;
            return KLanguageButton::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = klanguagebutton_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KLanguageButton::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (klanguagebutton_devtype_isbase) {
            klanguagebutton_devtype_isbase = false;
            return KLanguageButton::devType();
        }
        auto devtype_cb = klanguagebutton_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KLanguageButton::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (klanguagebutton_setvisible_isbase) {
            klanguagebutton_setvisible_isbase = false;
            KLanguageButton::setVisible(visible);
            return;
        }
        auto setvisible_cb = klanguagebutton_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KLanguageButton::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (klanguagebutton_sizehint_isbase) {
            klanguagebutton_sizehint_isbase = false;
            return KLanguageButton::sizeHint();
        }
        auto sizehint_cb = klanguagebutton_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KLanguageButton::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (klanguagebutton_minimumsizehint_isbase) {
            klanguagebutton_minimumsizehint_isbase = false;
            return KLanguageButton::minimumSizeHint();
        }
        auto minimumsizehint_cb = klanguagebutton_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KLanguageButton::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (klanguagebutton_heightforwidth_isbase) {
            klanguagebutton_heightforwidth_isbase = false;
            return KLanguageButton::heightForWidth(param1);
        }
        auto heightforwidth_cb = klanguagebutton_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KLanguageButton::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (klanguagebutton_hasheightforwidth_isbase) {
            klanguagebutton_hasheightforwidth_isbase = false;
            return KLanguageButton::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = klanguagebutton_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KLanguageButton::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (klanguagebutton_paintengine_isbase) {
            klanguagebutton_paintengine_isbase = false;
            return KLanguageButton::paintEngine();
        }
        auto paintengine_cb = klanguagebutton_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KLanguageButton::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (klanguagebutton_event_isbase) {
            klanguagebutton_event_isbase = false;
            return KLanguageButton::event(event);
        }
        auto event_cb = klanguagebutton_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KLanguageButton::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (klanguagebutton_mousepressevent_isbase) {
            klanguagebutton_mousepressevent_isbase = false;
            KLanguageButton::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = klanguagebutton_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (klanguagebutton_mousereleaseevent_isbase) {
            klanguagebutton_mousereleaseevent_isbase = false;
            KLanguageButton::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = klanguagebutton_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (klanguagebutton_mousedoubleclickevent_isbase) {
            klanguagebutton_mousedoubleclickevent_isbase = false;
            KLanguageButton::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = klanguagebutton_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (klanguagebutton_mousemoveevent_isbase) {
            klanguagebutton_mousemoveevent_isbase = false;
            KLanguageButton::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = klanguagebutton_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (klanguagebutton_wheelevent_isbase) {
            klanguagebutton_wheelevent_isbase = false;
            KLanguageButton::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = klanguagebutton_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (klanguagebutton_keypressevent_isbase) {
            klanguagebutton_keypressevent_isbase = false;
            KLanguageButton::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = klanguagebutton_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (klanguagebutton_keyreleaseevent_isbase) {
            klanguagebutton_keyreleaseevent_isbase = false;
            KLanguageButton::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = klanguagebutton_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (klanguagebutton_focusinevent_isbase) {
            klanguagebutton_focusinevent_isbase = false;
            KLanguageButton::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = klanguagebutton_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (klanguagebutton_focusoutevent_isbase) {
            klanguagebutton_focusoutevent_isbase = false;
            KLanguageButton::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = klanguagebutton_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (klanguagebutton_enterevent_isbase) {
            klanguagebutton_enterevent_isbase = false;
            KLanguageButton::enterEvent(event);
            return;
        }
        auto enterevent_cb = klanguagebutton_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (klanguagebutton_leaveevent_isbase) {
            klanguagebutton_leaveevent_isbase = false;
            KLanguageButton::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = klanguagebutton_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (klanguagebutton_paintevent_isbase) {
            klanguagebutton_paintevent_isbase = false;
            KLanguageButton::paintEvent(event);
            return;
        }
        auto paintevent_cb = klanguagebutton_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (klanguagebutton_moveevent_isbase) {
            klanguagebutton_moveevent_isbase = false;
            KLanguageButton::moveEvent(event);
            return;
        }
        auto moveevent_cb = klanguagebutton_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (klanguagebutton_resizeevent_isbase) {
            klanguagebutton_resizeevent_isbase = false;
            KLanguageButton::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = klanguagebutton_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (klanguagebutton_closeevent_isbase) {
            klanguagebutton_closeevent_isbase = false;
            KLanguageButton::closeEvent(event);
            return;
        }
        auto closeevent_cb = klanguagebutton_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (klanguagebutton_contextmenuevent_isbase) {
            klanguagebutton_contextmenuevent_isbase = false;
            KLanguageButton::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = klanguagebutton_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (klanguagebutton_tabletevent_isbase) {
            klanguagebutton_tabletevent_isbase = false;
            KLanguageButton::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = klanguagebutton_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (klanguagebutton_actionevent_isbase) {
            klanguagebutton_actionevent_isbase = false;
            KLanguageButton::actionEvent(event);
            return;
        }
        auto actionevent_cb = klanguagebutton_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (klanguagebutton_dragenterevent_isbase) {
            klanguagebutton_dragenterevent_isbase = false;
            KLanguageButton::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = klanguagebutton_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (klanguagebutton_dragmoveevent_isbase) {
            klanguagebutton_dragmoveevent_isbase = false;
            KLanguageButton::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = klanguagebutton_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (klanguagebutton_dragleaveevent_isbase) {
            klanguagebutton_dragleaveevent_isbase = false;
            KLanguageButton::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = klanguagebutton_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (klanguagebutton_dropevent_isbase) {
            klanguagebutton_dropevent_isbase = false;
            KLanguageButton::dropEvent(event);
            return;
        }
        auto dropevent_cb = klanguagebutton_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (klanguagebutton_showevent_isbase) {
            klanguagebutton_showevent_isbase = false;
            KLanguageButton::showEvent(event);
            return;
        }
        auto showevent_cb = klanguagebutton_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (klanguagebutton_hideevent_isbase) {
            klanguagebutton_hideevent_isbase = false;
            KLanguageButton::hideEvent(event);
            return;
        }
        auto hideevent_cb = klanguagebutton_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (klanguagebutton_nativeevent_isbase) {
            klanguagebutton_nativeevent_isbase = false;
            return KLanguageButton::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = klanguagebutton_nativeevent_callback;
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
        return KLanguageButton::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (klanguagebutton_changeevent_isbase) {
            klanguagebutton_changeevent_isbase = false;
            KLanguageButton::changeEvent(param1);
            return;
        }
        auto changeevent_cb = klanguagebutton_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (klanguagebutton_metric_isbase) {
            klanguagebutton_metric_isbase = false;
            return KLanguageButton::metric(param1);
        }
        auto metric_cb = klanguagebutton_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KLanguageButton::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (klanguagebutton_initpainter_isbase) {
            klanguagebutton_initpainter_isbase = false;
            KLanguageButton::initPainter(painter);
            return;
        }
        auto initpainter_cb = klanguagebutton_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KLanguageButton::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (klanguagebutton_redirected_isbase) {
            klanguagebutton_redirected_isbase = false;
            return KLanguageButton::redirected(offset);
        }
        auto redirected_cb = klanguagebutton_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KLanguageButton::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (klanguagebutton_sharedpainter_isbase) {
            klanguagebutton_sharedpainter_isbase = false;
            return KLanguageButton::sharedPainter();
        }
        auto sharedpainter_cb = klanguagebutton_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KLanguageButton::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (klanguagebutton_inputmethodevent_isbase) {
            klanguagebutton_inputmethodevent_isbase = false;
            KLanguageButton::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = klanguagebutton_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (klanguagebutton_inputmethodquery_isbase) {
            klanguagebutton_inputmethodquery_isbase = false;
            return KLanguageButton::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = klanguagebutton_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KLanguageButton::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (klanguagebutton_focusnextprevchild_isbase) {
            klanguagebutton_focusnextprevchild_isbase = false;
            return KLanguageButton::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = klanguagebutton_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KLanguageButton::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (klanguagebutton_eventfilter_isbase) {
            klanguagebutton_eventfilter_isbase = false;
            return KLanguageButton::eventFilter(watched, event);
        }
        auto eventfilter_cb = klanguagebutton_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KLanguageButton::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (klanguagebutton_timerevent_isbase) {
            klanguagebutton_timerevent_isbase = false;
            KLanguageButton::timerEvent(event);
            return;
        }
        auto timerevent_cb = klanguagebutton_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (klanguagebutton_childevent_isbase) {
            klanguagebutton_childevent_isbase = false;
            KLanguageButton::childEvent(event);
            return;
        }
        auto childevent_cb = klanguagebutton_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (klanguagebutton_customevent_isbase) {
            klanguagebutton_customevent_isbase = false;
            KLanguageButton::customEvent(event);
            return;
        }
        auto customevent_cb = klanguagebutton_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KLanguageButton::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (klanguagebutton_connectnotify_isbase) {
            klanguagebutton_connectnotify_isbase = false;
            KLanguageButton::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = klanguagebutton_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KLanguageButton::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (klanguagebutton_disconnectnotify_isbase) {
            klanguagebutton_disconnectnotify_isbase = false;
            KLanguageButton::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = klanguagebutton_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KLanguageButton::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (klanguagebutton_updatemicrofocus_isbase) {
            klanguagebutton_updatemicrofocus_isbase = false;
            KLanguageButton::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = klanguagebutton_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KLanguageButton::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (klanguagebutton_create_isbase) {
            klanguagebutton_create_isbase = false;
            KLanguageButton::create();
            return;
        }
        auto create_cb = klanguagebutton_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KLanguageButton::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (klanguagebutton_destroy_isbase) {
            klanguagebutton_destroy_isbase = false;
            KLanguageButton::destroy();
            return;
        }
        auto destroy_cb = klanguagebutton_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KLanguageButton::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (klanguagebutton_focusnextchild_isbase) {
            klanguagebutton_focusnextchild_isbase = false;
            return KLanguageButton::focusNextChild();
        }
        auto focusnextchild_cb = klanguagebutton_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KLanguageButton::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (klanguagebutton_focuspreviouschild_isbase) {
            klanguagebutton_focuspreviouschild_isbase = false;
            return KLanguageButton::focusPreviousChild();
        }
        auto focuspreviouschild_cb = klanguagebutton_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KLanguageButton::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (klanguagebutton_sender_isbase) {
            klanguagebutton_sender_isbase = false;
            return KLanguageButton::sender();
        }
        auto sender_cb = klanguagebutton_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KLanguageButton::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (klanguagebutton_sendersignalindex_isbase) {
            klanguagebutton_sendersignalindex_isbase = false;
            return KLanguageButton::senderSignalIndex();
        }
        auto sendersignalindex_cb = klanguagebutton_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KLanguageButton::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (klanguagebutton_receivers_isbase) {
            klanguagebutton_receivers_isbase = false;
            return KLanguageButton::receivers(signal);
        }
        auto receivers_cb = klanguagebutton_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KLanguageButton::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (klanguagebutton_issignalconnected_isbase) {
            klanguagebutton_issignalconnected_isbase = false;
            return KLanguageButton::isSignalConnected(signal);
        }
        auto issignalconnected_cb = klanguagebutton_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KLanguageButton::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (klanguagebutton_getdecodedmetricf_isbase) {
            klanguagebutton_getdecodedmetricf_isbase = false;
            return KLanguageButton::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = klanguagebutton_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KLanguageButton::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool KLanguageButton_Event(KLanguageButton* self, QEvent* event);
    friend bool KLanguageButton_SuperEvent(KLanguageButton* self, QEvent* event);
    friend void KLanguageButton_MousePressEvent(KLanguageButton* self, QMouseEvent* event);
    friend void KLanguageButton_SuperMousePressEvent(KLanguageButton* self, QMouseEvent* event);
    friend void KLanguageButton_MouseReleaseEvent(KLanguageButton* self, QMouseEvent* event);
    friend void KLanguageButton_SuperMouseReleaseEvent(KLanguageButton* self, QMouseEvent* event);
    friend void KLanguageButton_MouseDoubleClickEvent(KLanguageButton* self, QMouseEvent* event);
    friend void KLanguageButton_SuperMouseDoubleClickEvent(KLanguageButton* self, QMouseEvent* event);
    friend void KLanguageButton_MouseMoveEvent(KLanguageButton* self, QMouseEvent* event);
    friend void KLanguageButton_SuperMouseMoveEvent(KLanguageButton* self, QMouseEvent* event);
    friend void KLanguageButton_WheelEvent(KLanguageButton* self, QWheelEvent* event);
    friend void KLanguageButton_SuperWheelEvent(KLanguageButton* self, QWheelEvent* event);
    friend void KLanguageButton_KeyPressEvent(KLanguageButton* self, QKeyEvent* event);
    friend void KLanguageButton_SuperKeyPressEvent(KLanguageButton* self, QKeyEvent* event);
    friend void KLanguageButton_KeyReleaseEvent(KLanguageButton* self, QKeyEvent* event);
    friend void KLanguageButton_SuperKeyReleaseEvent(KLanguageButton* self, QKeyEvent* event);
    friend void KLanguageButton_FocusInEvent(KLanguageButton* self, QFocusEvent* event);
    friend void KLanguageButton_SuperFocusInEvent(KLanguageButton* self, QFocusEvent* event);
    friend void KLanguageButton_FocusOutEvent(KLanguageButton* self, QFocusEvent* event);
    friend void KLanguageButton_SuperFocusOutEvent(KLanguageButton* self, QFocusEvent* event);
    friend void KLanguageButton_EnterEvent(KLanguageButton* self, QEnterEvent* event);
    friend void KLanguageButton_SuperEnterEvent(KLanguageButton* self, QEnterEvent* event);
    friend void KLanguageButton_LeaveEvent(KLanguageButton* self, QEvent* event);
    friend void KLanguageButton_SuperLeaveEvent(KLanguageButton* self, QEvent* event);
    friend void KLanguageButton_PaintEvent(KLanguageButton* self, QPaintEvent* event);
    friend void KLanguageButton_SuperPaintEvent(KLanguageButton* self, QPaintEvent* event);
    friend void KLanguageButton_MoveEvent(KLanguageButton* self, QMoveEvent* event);
    friend void KLanguageButton_SuperMoveEvent(KLanguageButton* self, QMoveEvent* event);
    friend void KLanguageButton_ResizeEvent(KLanguageButton* self, QResizeEvent* event);
    friend void KLanguageButton_SuperResizeEvent(KLanguageButton* self, QResizeEvent* event);
    friend void KLanguageButton_CloseEvent(KLanguageButton* self, QCloseEvent* event);
    friend void KLanguageButton_SuperCloseEvent(KLanguageButton* self, QCloseEvent* event);
    friend void KLanguageButton_ContextMenuEvent(KLanguageButton* self, QContextMenuEvent* event);
    friend void KLanguageButton_SuperContextMenuEvent(KLanguageButton* self, QContextMenuEvent* event);
    friend void KLanguageButton_TabletEvent(KLanguageButton* self, QTabletEvent* event);
    friend void KLanguageButton_SuperTabletEvent(KLanguageButton* self, QTabletEvent* event);
    friend void KLanguageButton_ActionEvent(KLanguageButton* self, QActionEvent* event);
    friend void KLanguageButton_SuperActionEvent(KLanguageButton* self, QActionEvent* event);
    friend void KLanguageButton_DragEnterEvent(KLanguageButton* self, QDragEnterEvent* event);
    friend void KLanguageButton_SuperDragEnterEvent(KLanguageButton* self, QDragEnterEvent* event);
    friend void KLanguageButton_DragMoveEvent(KLanguageButton* self, QDragMoveEvent* event);
    friend void KLanguageButton_SuperDragMoveEvent(KLanguageButton* self, QDragMoveEvent* event);
    friend void KLanguageButton_DragLeaveEvent(KLanguageButton* self, QDragLeaveEvent* event);
    friend void KLanguageButton_SuperDragLeaveEvent(KLanguageButton* self, QDragLeaveEvent* event);
    friend void KLanguageButton_DropEvent(KLanguageButton* self, QDropEvent* event);
    friend void KLanguageButton_SuperDropEvent(KLanguageButton* self, QDropEvent* event);
    friend void KLanguageButton_ShowEvent(KLanguageButton* self, QShowEvent* event);
    friend void KLanguageButton_SuperShowEvent(KLanguageButton* self, QShowEvent* event);
    friend void KLanguageButton_HideEvent(KLanguageButton* self, QHideEvent* event);
    friend void KLanguageButton_SuperHideEvent(KLanguageButton* self, QHideEvent* event);
    friend bool KLanguageButton_NativeEvent(KLanguageButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KLanguageButton_SuperNativeEvent(KLanguageButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KLanguageButton_ChangeEvent(KLanguageButton* self, QEvent* param1);
    friend void KLanguageButton_SuperChangeEvent(KLanguageButton* self, QEvent* param1);
    friend int KLanguageButton_Metric(const KLanguageButton* self, int param1);
    friend int KLanguageButton_SuperMetric(const KLanguageButton* self, int param1);
    friend void KLanguageButton_InitPainter(const KLanguageButton* self, QPainter* painter);
    friend void KLanguageButton_SuperInitPainter(const KLanguageButton* self, QPainter* painter);
    friend QPaintDevice* KLanguageButton_Redirected(const KLanguageButton* self, QPoint* offset);
    friend QPaintDevice* KLanguageButton_SuperRedirected(const KLanguageButton* self, QPoint* offset);
    friend QPainter* KLanguageButton_SharedPainter(const KLanguageButton* self);
    friend QPainter* KLanguageButton_SuperSharedPainter(const KLanguageButton* self);
    friend void KLanguageButton_InputMethodEvent(KLanguageButton* self, QInputMethodEvent* param1);
    friend void KLanguageButton_SuperInputMethodEvent(KLanguageButton* self, QInputMethodEvent* param1);
    friend bool KLanguageButton_FocusNextPrevChild(KLanguageButton* self, bool next);
    friend bool KLanguageButton_SuperFocusNextPrevChild(KLanguageButton* self, bool next);
    friend void KLanguageButton_TimerEvent(KLanguageButton* self, QTimerEvent* event);
    friend void KLanguageButton_SuperTimerEvent(KLanguageButton* self, QTimerEvent* event);
    friend void KLanguageButton_ChildEvent(KLanguageButton* self, QChildEvent* event);
    friend void KLanguageButton_SuperChildEvent(KLanguageButton* self, QChildEvent* event);
    friend void KLanguageButton_CustomEvent(KLanguageButton* self, QEvent* event);
    friend void KLanguageButton_SuperCustomEvent(KLanguageButton* self, QEvent* event);
    friend void KLanguageButton_ConnectNotify(KLanguageButton* self, const QMetaMethod* signal);
    friend void KLanguageButton_SuperConnectNotify(KLanguageButton* self, const QMetaMethod* signal);
    friend void KLanguageButton_DisconnectNotify(KLanguageButton* self, const QMetaMethod* signal);
    friend void KLanguageButton_SuperDisconnectNotify(KLanguageButton* self, const QMetaMethod* signal);
    friend void KLanguageButton_UpdateMicroFocus(KLanguageButton* self);
    friend void KLanguageButton_SuperUpdateMicroFocus(KLanguageButton* self);
    friend void KLanguageButton_Create(KLanguageButton* self);
    friend void KLanguageButton_SuperCreate(KLanguageButton* self);
    friend void KLanguageButton_Destroy(KLanguageButton* self);
    friend void KLanguageButton_SuperDestroy(KLanguageButton* self);
    friend bool KLanguageButton_FocusNextChild(KLanguageButton* self);
    friend bool KLanguageButton_SuperFocusNextChild(KLanguageButton* self);
    friend bool KLanguageButton_FocusPreviousChild(KLanguageButton* self);
    friend bool KLanguageButton_SuperFocusPreviousChild(KLanguageButton* self);
    friend QObject* KLanguageButton_Sender(const KLanguageButton* self);
    friend QObject* KLanguageButton_SuperSender(const KLanguageButton* self);
    friend int KLanguageButton_SenderSignalIndex(const KLanguageButton* self);
    friend int KLanguageButton_SuperSenderSignalIndex(const KLanguageButton* self);
    friend int KLanguageButton_Receivers(const KLanguageButton* self, const char* signal);
    friend int KLanguageButton_SuperReceivers(const KLanguageButton* self, const char* signal);
    friend bool KLanguageButton_IsSignalConnected(const KLanguageButton* self, const QMetaMethod* signal);
    friend bool KLanguageButton_SuperIsSignalConnected(const KLanguageButton* self, const QMetaMethod* signal);
    friend double KLanguageButton_GetDecodedMetricF(const KLanguageButton* self, int metricA, int metricB);
    friend double KLanguageButton_SuperGetDecodedMetricF(const KLanguageButton* self, int metricA, int metricB);
};

#endif
