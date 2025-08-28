#pragma once
#ifndef SRC_EXTRAS_SONNETC_LIBVIRTUALCONFIGWIDGET_H
#define SRC_EXTRAS_SONNETC_LIBVIRTUALCONFIGWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Sonnet::ConfigWidget so that we can call protected methods
class VirtualSonnetConfigWidget final : public Sonnet::ConfigWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualSonnetConfigWidget = true;

    // Virtual class public types (including callbacks)
    using Sonnet__ConfigWidget_Metacall_Callback = int (*)(Sonnet__ConfigWidget*, int, int, void**);
    using Sonnet__ConfigWidget_DevType_Callback = int (*)();
    using Sonnet__ConfigWidget_SetVisible_Callback = void (*)(Sonnet__ConfigWidget*, bool);
    using Sonnet__ConfigWidget_SizeHint_Callback = QSize* (*)();
    using Sonnet__ConfigWidget_MinimumSizeHint_Callback = QSize* (*)();
    using Sonnet__ConfigWidget_HeightForWidth_Callback = int (*)(const Sonnet__ConfigWidget*, int);
    using Sonnet__ConfigWidget_HasHeightForWidth_Callback = bool (*)();
    using Sonnet__ConfigWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using Sonnet__ConfigWidget_Event_Callback = bool (*)(Sonnet__ConfigWidget*, QEvent*);
    using Sonnet__ConfigWidget_MousePressEvent_Callback = void (*)(Sonnet__ConfigWidget*, QMouseEvent*);
    using Sonnet__ConfigWidget_MouseReleaseEvent_Callback = void (*)(Sonnet__ConfigWidget*, QMouseEvent*);
    using Sonnet__ConfigWidget_MouseDoubleClickEvent_Callback = void (*)(Sonnet__ConfigWidget*, QMouseEvent*);
    using Sonnet__ConfigWidget_MouseMoveEvent_Callback = void (*)(Sonnet__ConfigWidget*, QMouseEvent*);
    using Sonnet__ConfigWidget_WheelEvent_Callback = void (*)(Sonnet__ConfigWidget*, QWheelEvent*);
    using Sonnet__ConfigWidget_KeyPressEvent_Callback = void (*)(Sonnet__ConfigWidget*, QKeyEvent*);
    using Sonnet__ConfigWidget_KeyReleaseEvent_Callback = void (*)(Sonnet__ConfigWidget*, QKeyEvent*);
    using Sonnet__ConfigWidget_FocusInEvent_Callback = void (*)(Sonnet__ConfigWidget*, QFocusEvent*);
    using Sonnet__ConfigWidget_FocusOutEvent_Callback = void (*)(Sonnet__ConfigWidget*, QFocusEvent*);
    using Sonnet__ConfigWidget_EnterEvent_Callback = void (*)(Sonnet__ConfigWidget*, QEnterEvent*);
    using Sonnet__ConfigWidget_LeaveEvent_Callback = void (*)(Sonnet__ConfigWidget*, QEvent*);
    using Sonnet__ConfigWidget_PaintEvent_Callback = void (*)(Sonnet__ConfigWidget*, QPaintEvent*);
    using Sonnet__ConfigWidget_MoveEvent_Callback = void (*)(Sonnet__ConfigWidget*, QMoveEvent*);
    using Sonnet__ConfigWidget_ResizeEvent_Callback = void (*)(Sonnet__ConfigWidget*, QResizeEvent*);
    using Sonnet__ConfigWidget_CloseEvent_Callback = void (*)(Sonnet__ConfigWidget*, QCloseEvent*);
    using Sonnet__ConfigWidget_ContextMenuEvent_Callback = void (*)(Sonnet__ConfigWidget*, QContextMenuEvent*);
    using Sonnet__ConfigWidget_TabletEvent_Callback = void (*)(Sonnet__ConfigWidget*, QTabletEvent*);
    using Sonnet__ConfigWidget_ActionEvent_Callback = void (*)(Sonnet__ConfigWidget*, QActionEvent*);
    using Sonnet__ConfigWidget_DragEnterEvent_Callback = void (*)(Sonnet__ConfigWidget*, QDragEnterEvent*);
    using Sonnet__ConfigWidget_DragMoveEvent_Callback = void (*)(Sonnet__ConfigWidget*, QDragMoveEvent*);
    using Sonnet__ConfigWidget_DragLeaveEvent_Callback = void (*)(Sonnet__ConfigWidget*, QDragLeaveEvent*);
    using Sonnet__ConfigWidget_DropEvent_Callback = void (*)(Sonnet__ConfigWidget*, QDropEvent*);
    using Sonnet__ConfigWidget_ShowEvent_Callback = void (*)(Sonnet__ConfigWidget*, QShowEvent*);
    using Sonnet__ConfigWidget_HideEvent_Callback = void (*)(Sonnet__ConfigWidget*, QHideEvent*);
    using Sonnet__ConfigWidget_NativeEvent_Callback = bool (*)(Sonnet__ConfigWidget*, libqt_string, void*, intptr_t*);
    using Sonnet__ConfigWidget_ChangeEvent_Callback = void (*)(Sonnet__ConfigWidget*, QEvent*);
    using Sonnet__ConfigWidget_Metric_Callback = int (*)(const Sonnet__ConfigWidget*, int);
    using Sonnet__ConfigWidget_InitPainter_Callback = void (*)(const Sonnet__ConfigWidget*, QPainter*);
    using Sonnet__ConfigWidget_Redirected_Callback = QPaintDevice* (*)(const Sonnet__ConfigWidget*, QPoint*);
    using Sonnet__ConfigWidget_SharedPainter_Callback = QPainter* (*)();
    using Sonnet__ConfigWidget_InputMethodEvent_Callback = void (*)(Sonnet__ConfigWidget*, QInputMethodEvent*);
    using Sonnet__ConfigWidget_InputMethodQuery_Callback = QVariant* (*)(const Sonnet__ConfigWidget*, int);
    using Sonnet__ConfigWidget_FocusNextPrevChild_Callback = bool (*)(Sonnet__ConfigWidget*, bool);
    using Sonnet__ConfigWidget_EventFilter_Callback = bool (*)(Sonnet__ConfigWidget*, QObject*, QEvent*);
    using Sonnet__ConfigWidget_TimerEvent_Callback = void (*)(Sonnet__ConfigWidget*, QTimerEvent*);
    using Sonnet__ConfigWidget_ChildEvent_Callback = void (*)(Sonnet__ConfigWidget*, QChildEvent*);
    using Sonnet__ConfigWidget_CustomEvent_Callback = void (*)(Sonnet__ConfigWidget*, QEvent*);
    using Sonnet__ConfigWidget_ConnectNotify_Callback = void (*)(Sonnet__ConfigWidget*, QMetaMethod*);
    using Sonnet__ConfigWidget_DisconnectNotify_Callback = void (*)(Sonnet__ConfigWidget*, QMetaMethod*);
    using Sonnet__ConfigWidget_SlotIgnoreWordRemoved_Callback = void (*)();
    using Sonnet__ConfigWidget_SlotIgnoreWordAdded_Callback = void (*)();
    using Sonnet__ConfigWidget_UpdateMicroFocus_Callback = void (*)();
    using Sonnet__ConfigWidget_Create_Callback = void (*)();
    using Sonnet__ConfigWidget_Destroy_Callback = void (*)();
    using Sonnet__ConfigWidget_FocusNextChild_Callback = bool (*)();
    using Sonnet__ConfigWidget_FocusPreviousChild_Callback = bool (*)();
    using Sonnet__ConfigWidget_Sender_Callback = QObject* (*)();
    using Sonnet__ConfigWidget_SenderSignalIndex_Callback = int (*)();
    using Sonnet__ConfigWidget_Receivers_Callback = int (*)(const Sonnet__ConfigWidget*, const char*);
    using Sonnet__ConfigWidget_IsSignalConnected_Callback = bool (*)(const Sonnet__ConfigWidget*, QMetaMethod*);
    using Sonnet__ConfigWidget_GetDecodedMetricF_Callback = double (*)(const Sonnet__ConfigWidget*, int, int);

  protected:
    // Instance callback storage
    Sonnet__ConfigWidget_Metacall_Callback sonnet__configwidget_metacall_callback = nullptr;
    Sonnet__ConfigWidget_DevType_Callback sonnet__configwidget_devtype_callback = nullptr;
    Sonnet__ConfigWidget_SetVisible_Callback sonnet__configwidget_setvisible_callback = nullptr;
    Sonnet__ConfigWidget_SizeHint_Callback sonnet__configwidget_sizehint_callback = nullptr;
    Sonnet__ConfigWidget_MinimumSizeHint_Callback sonnet__configwidget_minimumsizehint_callback = nullptr;
    Sonnet__ConfigWidget_HeightForWidth_Callback sonnet__configwidget_heightforwidth_callback = nullptr;
    Sonnet__ConfigWidget_HasHeightForWidth_Callback sonnet__configwidget_hasheightforwidth_callback = nullptr;
    Sonnet__ConfigWidget_PaintEngine_Callback sonnet__configwidget_paintengine_callback = nullptr;
    Sonnet__ConfigWidget_Event_Callback sonnet__configwidget_event_callback = nullptr;
    Sonnet__ConfigWidget_MousePressEvent_Callback sonnet__configwidget_mousepressevent_callback = nullptr;
    Sonnet__ConfigWidget_MouseReleaseEvent_Callback sonnet__configwidget_mousereleaseevent_callback = nullptr;
    Sonnet__ConfigWidget_MouseDoubleClickEvent_Callback sonnet__configwidget_mousedoubleclickevent_callback = nullptr;
    Sonnet__ConfigWidget_MouseMoveEvent_Callback sonnet__configwidget_mousemoveevent_callback = nullptr;
    Sonnet__ConfigWidget_WheelEvent_Callback sonnet__configwidget_wheelevent_callback = nullptr;
    Sonnet__ConfigWidget_KeyPressEvent_Callback sonnet__configwidget_keypressevent_callback = nullptr;
    Sonnet__ConfigWidget_KeyReleaseEvent_Callback sonnet__configwidget_keyreleaseevent_callback = nullptr;
    Sonnet__ConfigWidget_FocusInEvent_Callback sonnet__configwidget_focusinevent_callback = nullptr;
    Sonnet__ConfigWidget_FocusOutEvent_Callback sonnet__configwidget_focusoutevent_callback = nullptr;
    Sonnet__ConfigWidget_EnterEvent_Callback sonnet__configwidget_enterevent_callback = nullptr;
    Sonnet__ConfigWidget_LeaveEvent_Callback sonnet__configwidget_leaveevent_callback = nullptr;
    Sonnet__ConfigWidget_PaintEvent_Callback sonnet__configwidget_paintevent_callback = nullptr;
    Sonnet__ConfigWidget_MoveEvent_Callback sonnet__configwidget_moveevent_callback = nullptr;
    Sonnet__ConfigWidget_ResizeEvent_Callback sonnet__configwidget_resizeevent_callback = nullptr;
    Sonnet__ConfigWidget_CloseEvent_Callback sonnet__configwidget_closeevent_callback = nullptr;
    Sonnet__ConfigWidget_ContextMenuEvent_Callback sonnet__configwidget_contextmenuevent_callback = nullptr;
    Sonnet__ConfigWidget_TabletEvent_Callback sonnet__configwidget_tabletevent_callback = nullptr;
    Sonnet__ConfigWidget_ActionEvent_Callback sonnet__configwidget_actionevent_callback = nullptr;
    Sonnet__ConfigWidget_DragEnterEvent_Callback sonnet__configwidget_dragenterevent_callback = nullptr;
    Sonnet__ConfigWidget_DragMoveEvent_Callback sonnet__configwidget_dragmoveevent_callback = nullptr;
    Sonnet__ConfigWidget_DragLeaveEvent_Callback sonnet__configwidget_dragleaveevent_callback = nullptr;
    Sonnet__ConfigWidget_DropEvent_Callback sonnet__configwidget_dropevent_callback = nullptr;
    Sonnet__ConfigWidget_ShowEvent_Callback sonnet__configwidget_showevent_callback = nullptr;
    Sonnet__ConfigWidget_HideEvent_Callback sonnet__configwidget_hideevent_callback = nullptr;
    Sonnet__ConfigWidget_NativeEvent_Callback sonnet__configwidget_nativeevent_callback = nullptr;
    Sonnet__ConfigWidget_ChangeEvent_Callback sonnet__configwidget_changeevent_callback = nullptr;
    Sonnet__ConfigWidget_Metric_Callback sonnet__configwidget_metric_callback = nullptr;
    Sonnet__ConfigWidget_InitPainter_Callback sonnet__configwidget_initpainter_callback = nullptr;
    Sonnet__ConfigWidget_Redirected_Callback sonnet__configwidget_redirected_callback = nullptr;
    Sonnet__ConfigWidget_SharedPainter_Callback sonnet__configwidget_sharedpainter_callback = nullptr;
    Sonnet__ConfigWidget_InputMethodEvent_Callback sonnet__configwidget_inputmethodevent_callback = nullptr;
    Sonnet__ConfigWidget_InputMethodQuery_Callback sonnet__configwidget_inputmethodquery_callback = nullptr;
    Sonnet__ConfigWidget_FocusNextPrevChild_Callback sonnet__configwidget_focusnextprevchild_callback = nullptr;
    Sonnet__ConfigWidget_EventFilter_Callback sonnet__configwidget_eventfilter_callback = nullptr;
    Sonnet__ConfigWidget_TimerEvent_Callback sonnet__configwidget_timerevent_callback = nullptr;
    Sonnet__ConfigWidget_ChildEvent_Callback sonnet__configwidget_childevent_callback = nullptr;
    Sonnet__ConfigWidget_CustomEvent_Callback sonnet__configwidget_customevent_callback = nullptr;
    Sonnet__ConfigWidget_ConnectNotify_Callback sonnet__configwidget_connectnotify_callback = nullptr;
    Sonnet__ConfigWidget_DisconnectNotify_Callback sonnet__configwidget_disconnectnotify_callback = nullptr;
    Sonnet__ConfigWidget_SlotIgnoreWordRemoved_Callback sonnet__configwidget_slotignorewordremoved_callback = nullptr;
    Sonnet__ConfigWidget_SlotIgnoreWordAdded_Callback sonnet__configwidget_slotignorewordadded_callback = nullptr;
    Sonnet__ConfigWidget_UpdateMicroFocus_Callback sonnet__configwidget_updatemicrofocus_callback = nullptr;
    Sonnet__ConfigWidget_Create_Callback sonnet__configwidget_create_callback = nullptr;
    Sonnet__ConfigWidget_Destroy_Callback sonnet__configwidget_destroy_callback = nullptr;
    Sonnet__ConfigWidget_FocusNextChild_Callback sonnet__configwidget_focusnextchild_callback = nullptr;
    Sonnet__ConfigWidget_FocusPreviousChild_Callback sonnet__configwidget_focuspreviouschild_callback = nullptr;
    Sonnet__ConfigWidget_Sender_Callback sonnet__configwidget_sender_callback = nullptr;
    Sonnet__ConfigWidget_SenderSignalIndex_Callback sonnet__configwidget_sendersignalindex_callback = nullptr;
    Sonnet__ConfigWidget_Receivers_Callback sonnet__configwidget_receivers_callback = nullptr;
    Sonnet__ConfigWidget_IsSignalConnected_Callback sonnet__configwidget_issignalconnected_callback = nullptr;
    Sonnet__ConfigWidget_GetDecodedMetricF_Callback sonnet__configwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool sonnet__configwidget_metacall_isbase = false;
    mutable bool sonnet__configwidget_devtype_isbase = false;
    mutable bool sonnet__configwidget_setvisible_isbase = false;
    mutable bool sonnet__configwidget_sizehint_isbase = false;
    mutable bool sonnet__configwidget_minimumsizehint_isbase = false;
    mutable bool sonnet__configwidget_heightforwidth_isbase = false;
    mutable bool sonnet__configwidget_hasheightforwidth_isbase = false;
    mutable bool sonnet__configwidget_paintengine_isbase = false;
    mutable bool sonnet__configwidget_event_isbase = false;
    mutable bool sonnet__configwidget_mousepressevent_isbase = false;
    mutable bool sonnet__configwidget_mousereleaseevent_isbase = false;
    mutable bool sonnet__configwidget_mousedoubleclickevent_isbase = false;
    mutable bool sonnet__configwidget_mousemoveevent_isbase = false;
    mutable bool sonnet__configwidget_wheelevent_isbase = false;
    mutable bool sonnet__configwidget_keypressevent_isbase = false;
    mutable bool sonnet__configwidget_keyreleaseevent_isbase = false;
    mutable bool sonnet__configwidget_focusinevent_isbase = false;
    mutable bool sonnet__configwidget_focusoutevent_isbase = false;
    mutable bool sonnet__configwidget_enterevent_isbase = false;
    mutable bool sonnet__configwidget_leaveevent_isbase = false;
    mutable bool sonnet__configwidget_paintevent_isbase = false;
    mutable bool sonnet__configwidget_moveevent_isbase = false;
    mutable bool sonnet__configwidget_resizeevent_isbase = false;
    mutable bool sonnet__configwidget_closeevent_isbase = false;
    mutable bool sonnet__configwidget_contextmenuevent_isbase = false;
    mutable bool sonnet__configwidget_tabletevent_isbase = false;
    mutable bool sonnet__configwidget_actionevent_isbase = false;
    mutable bool sonnet__configwidget_dragenterevent_isbase = false;
    mutable bool sonnet__configwidget_dragmoveevent_isbase = false;
    mutable bool sonnet__configwidget_dragleaveevent_isbase = false;
    mutable bool sonnet__configwidget_dropevent_isbase = false;
    mutable bool sonnet__configwidget_showevent_isbase = false;
    mutable bool sonnet__configwidget_hideevent_isbase = false;
    mutable bool sonnet__configwidget_nativeevent_isbase = false;
    mutable bool sonnet__configwidget_changeevent_isbase = false;
    mutable bool sonnet__configwidget_metric_isbase = false;
    mutable bool sonnet__configwidget_initpainter_isbase = false;
    mutable bool sonnet__configwidget_redirected_isbase = false;
    mutable bool sonnet__configwidget_sharedpainter_isbase = false;
    mutable bool sonnet__configwidget_inputmethodevent_isbase = false;
    mutable bool sonnet__configwidget_inputmethodquery_isbase = false;
    mutable bool sonnet__configwidget_focusnextprevchild_isbase = false;
    mutable bool sonnet__configwidget_eventfilter_isbase = false;
    mutable bool sonnet__configwidget_timerevent_isbase = false;
    mutable bool sonnet__configwidget_childevent_isbase = false;
    mutable bool sonnet__configwidget_customevent_isbase = false;
    mutable bool sonnet__configwidget_connectnotify_isbase = false;
    mutable bool sonnet__configwidget_disconnectnotify_isbase = false;
    mutable bool sonnet__configwidget_slotignorewordremoved_isbase = false;
    mutable bool sonnet__configwidget_slotignorewordadded_isbase = false;
    mutable bool sonnet__configwidget_updatemicrofocus_isbase = false;
    mutable bool sonnet__configwidget_create_isbase = false;
    mutable bool sonnet__configwidget_destroy_isbase = false;
    mutable bool sonnet__configwidget_focusnextchild_isbase = false;
    mutable bool sonnet__configwidget_focuspreviouschild_isbase = false;
    mutable bool sonnet__configwidget_sender_isbase = false;
    mutable bool sonnet__configwidget_sendersignalindex_isbase = false;
    mutable bool sonnet__configwidget_receivers_isbase = false;
    mutable bool sonnet__configwidget_issignalconnected_isbase = false;
    mutable bool sonnet__configwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualSonnetConfigWidget(QWidget* parent) : Sonnet::ConfigWidget(parent) {};

    ~VirtualSonnetConfigWidget() {
        sonnet__configwidget_metacall_callback = nullptr;
        sonnet__configwidget_devtype_callback = nullptr;
        sonnet__configwidget_setvisible_callback = nullptr;
        sonnet__configwidget_sizehint_callback = nullptr;
        sonnet__configwidget_minimumsizehint_callback = nullptr;
        sonnet__configwidget_heightforwidth_callback = nullptr;
        sonnet__configwidget_hasheightforwidth_callback = nullptr;
        sonnet__configwidget_paintengine_callback = nullptr;
        sonnet__configwidget_event_callback = nullptr;
        sonnet__configwidget_mousepressevent_callback = nullptr;
        sonnet__configwidget_mousereleaseevent_callback = nullptr;
        sonnet__configwidget_mousedoubleclickevent_callback = nullptr;
        sonnet__configwidget_mousemoveevent_callback = nullptr;
        sonnet__configwidget_wheelevent_callback = nullptr;
        sonnet__configwidget_keypressevent_callback = nullptr;
        sonnet__configwidget_keyreleaseevent_callback = nullptr;
        sonnet__configwidget_focusinevent_callback = nullptr;
        sonnet__configwidget_focusoutevent_callback = nullptr;
        sonnet__configwidget_enterevent_callback = nullptr;
        sonnet__configwidget_leaveevent_callback = nullptr;
        sonnet__configwidget_paintevent_callback = nullptr;
        sonnet__configwidget_moveevent_callback = nullptr;
        sonnet__configwidget_resizeevent_callback = nullptr;
        sonnet__configwidget_closeevent_callback = nullptr;
        sonnet__configwidget_contextmenuevent_callback = nullptr;
        sonnet__configwidget_tabletevent_callback = nullptr;
        sonnet__configwidget_actionevent_callback = nullptr;
        sonnet__configwidget_dragenterevent_callback = nullptr;
        sonnet__configwidget_dragmoveevent_callback = nullptr;
        sonnet__configwidget_dragleaveevent_callback = nullptr;
        sonnet__configwidget_dropevent_callback = nullptr;
        sonnet__configwidget_showevent_callback = nullptr;
        sonnet__configwidget_hideevent_callback = nullptr;
        sonnet__configwidget_nativeevent_callback = nullptr;
        sonnet__configwidget_changeevent_callback = nullptr;
        sonnet__configwidget_metric_callback = nullptr;
        sonnet__configwidget_initpainter_callback = nullptr;
        sonnet__configwidget_redirected_callback = nullptr;
        sonnet__configwidget_sharedpainter_callback = nullptr;
        sonnet__configwidget_inputmethodevent_callback = nullptr;
        sonnet__configwidget_inputmethodquery_callback = nullptr;
        sonnet__configwidget_focusnextprevchild_callback = nullptr;
        sonnet__configwidget_eventfilter_callback = nullptr;
        sonnet__configwidget_timerevent_callback = nullptr;
        sonnet__configwidget_childevent_callback = nullptr;
        sonnet__configwidget_customevent_callback = nullptr;
        sonnet__configwidget_connectnotify_callback = nullptr;
        sonnet__configwidget_disconnectnotify_callback = nullptr;
        sonnet__configwidget_slotignorewordremoved_callback = nullptr;
        sonnet__configwidget_slotignorewordadded_callback = nullptr;
        sonnet__configwidget_updatemicrofocus_callback = nullptr;
        sonnet__configwidget_create_callback = nullptr;
        sonnet__configwidget_destroy_callback = nullptr;
        sonnet__configwidget_focusnextchild_callback = nullptr;
        sonnet__configwidget_focuspreviouschild_callback = nullptr;
        sonnet__configwidget_sender_callback = nullptr;
        sonnet__configwidget_sendersignalindex_callback = nullptr;
        sonnet__configwidget_receivers_callback = nullptr;
        sonnet__configwidget_issignalconnected_callback = nullptr;
        sonnet__configwidget_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setSonnet__ConfigWidget_Metacall_Callback(Sonnet__ConfigWidget_Metacall_Callback cb) { sonnet__configwidget_metacall_callback = cb; }
    inline void setSonnet__ConfigWidget_DevType_Callback(Sonnet__ConfigWidget_DevType_Callback cb) { sonnet__configwidget_devtype_callback = cb; }
    inline void setSonnet__ConfigWidget_SetVisible_Callback(Sonnet__ConfigWidget_SetVisible_Callback cb) { sonnet__configwidget_setvisible_callback = cb; }
    inline void setSonnet__ConfigWidget_SizeHint_Callback(Sonnet__ConfigWidget_SizeHint_Callback cb) { sonnet__configwidget_sizehint_callback = cb; }
    inline void setSonnet__ConfigWidget_MinimumSizeHint_Callback(Sonnet__ConfigWidget_MinimumSizeHint_Callback cb) { sonnet__configwidget_minimumsizehint_callback = cb; }
    inline void setSonnet__ConfigWidget_HeightForWidth_Callback(Sonnet__ConfigWidget_HeightForWidth_Callback cb) { sonnet__configwidget_heightforwidth_callback = cb; }
    inline void setSonnet__ConfigWidget_HasHeightForWidth_Callback(Sonnet__ConfigWidget_HasHeightForWidth_Callback cb) { sonnet__configwidget_hasheightforwidth_callback = cb; }
    inline void setSonnet__ConfigWidget_PaintEngine_Callback(Sonnet__ConfigWidget_PaintEngine_Callback cb) { sonnet__configwidget_paintengine_callback = cb; }
    inline void setSonnet__ConfigWidget_Event_Callback(Sonnet__ConfigWidget_Event_Callback cb) { sonnet__configwidget_event_callback = cb; }
    inline void setSonnet__ConfigWidget_MousePressEvent_Callback(Sonnet__ConfigWidget_MousePressEvent_Callback cb) { sonnet__configwidget_mousepressevent_callback = cb; }
    inline void setSonnet__ConfigWidget_MouseReleaseEvent_Callback(Sonnet__ConfigWidget_MouseReleaseEvent_Callback cb) { sonnet__configwidget_mousereleaseevent_callback = cb; }
    inline void setSonnet__ConfigWidget_MouseDoubleClickEvent_Callback(Sonnet__ConfigWidget_MouseDoubleClickEvent_Callback cb) { sonnet__configwidget_mousedoubleclickevent_callback = cb; }
    inline void setSonnet__ConfigWidget_MouseMoveEvent_Callback(Sonnet__ConfigWidget_MouseMoveEvent_Callback cb) { sonnet__configwidget_mousemoveevent_callback = cb; }
    inline void setSonnet__ConfigWidget_WheelEvent_Callback(Sonnet__ConfigWidget_WheelEvent_Callback cb) { sonnet__configwidget_wheelevent_callback = cb; }
    inline void setSonnet__ConfigWidget_KeyPressEvent_Callback(Sonnet__ConfigWidget_KeyPressEvent_Callback cb) { sonnet__configwidget_keypressevent_callback = cb; }
    inline void setSonnet__ConfigWidget_KeyReleaseEvent_Callback(Sonnet__ConfigWidget_KeyReleaseEvent_Callback cb) { sonnet__configwidget_keyreleaseevent_callback = cb; }
    inline void setSonnet__ConfigWidget_FocusInEvent_Callback(Sonnet__ConfigWidget_FocusInEvent_Callback cb) { sonnet__configwidget_focusinevent_callback = cb; }
    inline void setSonnet__ConfigWidget_FocusOutEvent_Callback(Sonnet__ConfigWidget_FocusOutEvent_Callback cb) { sonnet__configwidget_focusoutevent_callback = cb; }
    inline void setSonnet__ConfigWidget_EnterEvent_Callback(Sonnet__ConfigWidget_EnterEvent_Callback cb) { sonnet__configwidget_enterevent_callback = cb; }
    inline void setSonnet__ConfigWidget_LeaveEvent_Callback(Sonnet__ConfigWidget_LeaveEvent_Callback cb) { sonnet__configwidget_leaveevent_callback = cb; }
    inline void setSonnet__ConfigWidget_PaintEvent_Callback(Sonnet__ConfigWidget_PaintEvent_Callback cb) { sonnet__configwidget_paintevent_callback = cb; }
    inline void setSonnet__ConfigWidget_MoveEvent_Callback(Sonnet__ConfigWidget_MoveEvent_Callback cb) { sonnet__configwidget_moveevent_callback = cb; }
    inline void setSonnet__ConfigWidget_ResizeEvent_Callback(Sonnet__ConfigWidget_ResizeEvent_Callback cb) { sonnet__configwidget_resizeevent_callback = cb; }
    inline void setSonnet__ConfigWidget_CloseEvent_Callback(Sonnet__ConfigWidget_CloseEvent_Callback cb) { sonnet__configwidget_closeevent_callback = cb; }
    inline void setSonnet__ConfigWidget_ContextMenuEvent_Callback(Sonnet__ConfigWidget_ContextMenuEvent_Callback cb) { sonnet__configwidget_contextmenuevent_callback = cb; }
    inline void setSonnet__ConfigWidget_TabletEvent_Callback(Sonnet__ConfigWidget_TabletEvent_Callback cb) { sonnet__configwidget_tabletevent_callback = cb; }
    inline void setSonnet__ConfigWidget_ActionEvent_Callback(Sonnet__ConfigWidget_ActionEvent_Callback cb) { sonnet__configwidget_actionevent_callback = cb; }
    inline void setSonnet__ConfigWidget_DragEnterEvent_Callback(Sonnet__ConfigWidget_DragEnterEvent_Callback cb) { sonnet__configwidget_dragenterevent_callback = cb; }
    inline void setSonnet__ConfigWidget_DragMoveEvent_Callback(Sonnet__ConfigWidget_DragMoveEvent_Callback cb) { sonnet__configwidget_dragmoveevent_callback = cb; }
    inline void setSonnet__ConfigWidget_DragLeaveEvent_Callback(Sonnet__ConfigWidget_DragLeaveEvent_Callback cb) { sonnet__configwidget_dragleaveevent_callback = cb; }
    inline void setSonnet__ConfigWidget_DropEvent_Callback(Sonnet__ConfigWidget_DropEvent_Callback cb) { sonnet__configwidget_dropevent_callback = cb; }
    inline void setSonnet__ConfigWidget_ShowEvent_Callback(Sonnet__ConfigWidget_ShowEvent_Callback cb) { sonnet__configwidget_showevent_callback = cb; }
    inline void setSonnet__ConfigWidget_HideEvent_Callback(Sonnet__ConfigWidget_HideEvent_Callback cb) { sonnet__configwidget_hideevent_callback = cb; }
    inline void setSonnet__ConfigWidget_NativeEvent_Callback(Sonnet__ConfigWidget_NativeEvent_Callback cb) { sonnet__configwidget_nativeevent_callback = cb; }
    inline void setSonnet__ConfigWidget_ChangeEvent_Callback(Sonnet__ConfigWidget_ChangeEvent_Callback cb) { sonnet__configwidget_changeevent_callback = cb; }
    inline void setSonnet__ConfigWidget_Metric_Callback(Sonnet__ConfigWidget_Metric_Callback cb) { sonnet__configwidget_metric_callback = cb; }
    inline void setSonnet__ConfigWidget_InitPainter_Callback(Sonnet__ConfigWidget_InitPainter_Callback cb) { sonnet__configwidget_initpainter_callback = cb; }
    inline void setSonnet__ConfigWidget_Redirected_Callback(Sonnet__ConfigWidget_Redirected_Callback cb) { sonnet__configwidget_redirected_callback = cb; }
    inline void setSonnet__ConfigWidget_SharedPainter_Callback(Sonnet__ConfigWidget_SharedPainter_Callback cb) { sonnet__configwidget_sharedpainter_callback = cb; }
    inline void setSonnet__ConfigWidget_InputMethodEvent_Callback(Sonnet__ConfigWidget_InputMethodEvent_Callback cb) { sonnet__configwidget_inputmethodevent_callback = cb; }
    inline void setSonnet__ConfigWidget_InputMethodQuery_Callback(Sonnet__ConfigWidget_InputMethodQuery_Callback cb) { sonnet__configwidget_inputmethodquery_callback = cb; }
    inline void setSonnet__ConfigWidget_FocusNextPrevChild_Callback(Sonnet__ConfigWidget_FocusNextPrevChild_Callback cb) { sonnet__configwidget_focusnextprevchild_callback = cb; }
    inline void setSonnet__ConfigWidget_EventFilter_Callback(Sonnet__ConfigWidget_EventFilter_Callback cb) { sonnet__configwidget_eventfilter_callback = cb; }
    inline void setSonnet__ConfigWidget_TimerEvent_Callback(Sonnet__ConfigWidget_TimerEvent_Callback cb) { sonnet__configwidget_timerevent_callback = cb; }
    inline void setSonnet__ConfigWidget_ChildEvent_Callback(Sonnet__ConfigWidget_ChildEvent_Callback cb) { sonnet__configwidget_childevent_callback = cb; }
    inline void setSonnet__ConfigWidget_CustomEvent_Callback(Sonnet__ConfigWidget_CustomEvent_Callback cb) { sonnet__configwidget_customevent_callback = cb; }
    inline void setSonnet__ConfigWidget_ConnectNotify_Callback(Sonnet__ConfigWidget_ConnectNotify_Callback cb) { sonnet__configwidget_connectnotify_callback = cb; }
    inline void setSonnet__ConfigWidget_DisconnectNotify_Callback(Sonnet__ConfigWidget_DisconnectNotify_Callback cb) { sonnet__configwidget_disconnectnotify_callback = cb; }
    inline void setSonnet__ConfigWidget_SlotIgnoreWordRemoved_Callback(Sonnet__ConfigWidget_SlotIgnoreWordRemoved_Callback cb) { sonnet__configwidget_slotignorewordremoved_callback = cb; }
    inline void setSonnet__ConfigWidget_SlotIgnoreWordAdded_Callback(Sonnet__ConfigWidget_SlotIgnoreWordAdded_Callback cb) { sonnet__configwidget_slotignorewordadded_callback = cb; }
    inline void setSonnet__ConfigWidget_UpdateMicroFocus_Callback(Sonnet__ConfigWidget_UpdateMicroFocus_Callback cb) { sonnet__configwidget_updatemicrofocus_callback = cb; }
    inline void setSonnet__ConfigWidget_Create_Callback(Sonnet__ConfigWidget_Create_Callback cb) { sonnet__configwidget_create_callback = cb; }
    inline void setSonnet__ConfigWidget_Destroy_Callback(Sonnet__ConfigWidget_Destroy_Callback cb) { sonnet__configwidget_destroy_callback = cb; }
    inline void setSonnet__ConfigWidget_FocusNextChild_Callback(Sonnet__ConfigWidget_FocusNextChild_Callback cb) { sonnet__configwidget_focusnextchild_callback = cb; }
    inline void setSonnet__ConfigWidget_FocusPreviousChild_Callback(Sonnet__ConfigWidget_FocusPreviousChild_Callback cb) { sonnet__configwidget_focuspreviouschild_callback = cb; }
    inline void setSonnet__ConfigWidget_Sender_Callback(Sonnet__ConfigWidget_Sender_Callback cb) { sonnet__configwidget_sender_callback = cb; }
    inline void setSonnet__ConfigWidget_SenderSignalIndex_Callback(Sonnet__ConfigWidget_SenderSignalIndex_Callback cb) { sonnet__configwidget_sendersignalindex_callback = cb; }
    inline void setSonnet__ConfigWidget_Receivers_Callback(Sonnet__ConfigWidget_Receivers_Callback cb) { sonnet__configwidget_receivers_callback = cb; }
    inline void setSonnet__ConfigWidget_IsSignalConnected_Callback(Sonnet__ConfigWidget_IsSignalConnected_Callback cb) { sonnet__configwidget_issignalconnected_callback = cb; }
    inline void setSonnet__ConfigWidget_GetDecodedMetricF_Callback(Sonnet__ConfigWidget_GetDecodedMetricF_Callback cb) { sonnet__configwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setSonnet__ConfigWidget_Metacall_IsBase(bool value) const { sonnet__configwidget_metacall_isbase = value; }
    inline void setSonnet__ConfigWidget_DevType_IsBase(bool value) const { sonnet__configwidget_devtype_isbase = value; }
    inline void setSonnet__ConfigWidget_SetVisible_IsBase(bool value) const { sonnet__configwidget_setvisible_isbase = value; }
    inline void setSonnet__ConfigWidget_SizeHint_IsBase(bool value) const { sonnet__configwidget_sizehint_isbase = value; }
    inline void setSonnet__ConfigWidget_MinimumSizeHint_IsBase(bool value) const { sonnet__configwidget_minimumsizehint_isbase = value; }
    inline void setSonnet__ConfigWidget_HeightForWidth_IsBase(bool value) const { sonnet__configwidget_heightforwidth_isbase = value; }
    inline void setSonnet__ConfigWidget_HasHeightForWidth_IsBase(bool value) const { sonnet__configwidget_hasheightforwidth_isbase = value; }
    inline void setSonnet__ConfigWidget_PaintEngine_IsBase(bool value) const { sonnet__configwidget_paintengine_isbase = value; }
    inline void setSonnet__ConfigWidget_Event_IsBase(bool value) const { sonnet__configwidget_event_isbase = value; }
    inline void setSonnet__ConfigWidget_MousePressEvent_IsBase(bool value) const { sonnet__configwidget_mousepressevent_isbase = value; }
    inline void setSonnet__ConfigWidget_MouseReleaseEvent_IsBase(bool value) const { sonnet__configwidget_mousereleaseevent_isbase = value; }
    inline void setSonnet__ConfigWidget_MouseDoubleClickEvent_IsBase(bool value) const { sonnet__configwidget_mousedoubleclickevent_isbase = value; }
    inline void setSonnet__ConfigWidget_MouseMoveEvent_IsBase(bool value) const { sonnet__configwidget_mousemoveevent_isbase = value; }
    inline void setSonnet__ConfigWidget_WheelEvent_IsBase(bool value) const { sonnet__configwidget_wheelevent_isbase = value; }
    inline void setSonnet__ConfigWidget_KeyPressEvent_IsBase(bool value) const { sonnet__configwidget_keypressevent_isbase = value; }
    inline void setSonnet__ConfigWidget_KeyReleaseEvent_IsBase(bool value) const { sonnet__configwidget_keyreleaseevent_isbase = value; }
    inline void setSonnet__ConfigWidget_FocusInEvent_IsBase(bool value) const { sonnet__configwidget_focusinevent_isbase = value; }
    inline void setSonnet__ConfigWidget_FocusOutEvent_IsBase(bool value) const { sonnet__configwidget_focusoutevent_isbase = value; }
    inline void setSonnet__ConfigWidget_EnterEvent_IsBase(bool value) const { sonnet__configwidget_enterevent_isbase = value; }
    inline void setSonnet__ConfigWidget_LeaveEvent_IsBase(bool value) const { sonnet__configwidget_leaveevent_isbase = value; }
    inline void setSonnet__ConfigWidget_PaintEvent_IsBase(bool value) const { sonnet__configwidget_paintevent_isbase = value; }
    inline void setSonnet__ConfigWidget_MoveEvent_IsBase(bool value) const { sonnet__configwidget_moveevent_isbase = value; }
    inline void setSonnet__ConfigWidget_ResizeEvent_IsBase(bool value) const { sonnet__configwidget_resizeevent_isbase = value; }
    inline void setSonnet__ConfigWidget_CloseEvent_IsBase(bool value) const { sonnet__configwidget_closeevent_isbase = value; }
    inline void setSonnet__ConfigWidget_ContextMenuEvent_IsBase(bool value) const { sonnet__configwidget_contextmenuevent_isbase = value; }
    inline void setSonnet__ConfigWidget_TabletEvent_IsBase(bool value) const { sonnet__configwidget_tabletevent_isbase = value; }
    inline void setSonnet__ConfigWidget_ActionEvent_IsBase(bool value) const { sonnet__configwidget_actionevent_isbase = value; }
    inline void setSonnet__ConfigWidget_DragEnterEvent_IsBase(bool value) const { sonnet__configwidget_dragenterevent_isbase = value; }
    inline void setSonnet__ConfigWidget_DragMoveEvent_IsBase(bool value) const { sonnet__configwidget_dragmoveevent_isbase = value; }
    inline void setSonnet__ConfigWidget_DragLeaveEvent_IsBase(bool value) const { sonnet__configwidget_dragleaveevent_isbase = value; }
    inline void setSonnet__ConfigWidget_DropEvent_IsBase(bool value) const { sonnet__configwidget_dropevent_isbase = value; }
    inline void setSonnet__ConfigWidget_ShowEvent_IsBase(bool value) const { sonnet__configwidget_showevent_isbase = value; }
    inline void setSonnet__ConfigWidget_HideEvent_IsBase(bool value) const { sonnet__configwidget_hideevent_isbase = value; }
    inline void setSonnet__ConfigWidget_NativeEvent_IsBase(bool value) const { sonnet__configwidget_nativeevent_isbase = value; }
    inline void setSonnet__ConfigWidget_ChangeEvent_IsBase(bool value) const { sonnet__configwidget_changeevent_isbase = value; }
    inline void setSonnet__ConfigWidget_Metric_IsBase(bool value) const { sonnet__configwidget_metric_isbase = value; }
    inline void setSonnet__ConfigWidget_InitPainter_IsBase(bool value) const { sonnet__configwidget_initpainter_isbase = value; }
    inline void setSonnet__ConfigWidget_Redirected_IsBase(bool value) const { sonnet__configwidget_redirected_isbase = value; }
    inline void setSonnet__ConfigWidget_SharedPainter_IsBase(bool value) const { sonnet__configwidget_sharedpainter_isbase = value; }
    inline void setSonnet__ConfigWidget_InputMethodEvent_IsBase(bool value) const { sonnet__configwidget_inputmethodevent_isbase = value; }
    inline void setSonnet__ConfigWidget_InputMethodQuery_IsBase(bool value) const { sonnet__configwidget_inputmethodquery_isbase = value; }
    inline void setSonnet__ConfigWidget_FocusNextPrevChild_IsBase(bool value) const { sonnet__configwidget_focusnextprevchild_isbase = value; }
    inline void setSonnet__ConfigWidget_EventFilter_IsBase(bool value) const { sonnet__configwidget_eventfilter_isbase = value; }
    inline void setSonnet__ConfigWidget_TimerEvent_IsBase(bool value) const { sonnet__configwidget_timerevent_isbase = value; }
    inline void setSonnet__ConfigWidget_ChildEvent_IsBase(bool value) const { sonnet__configwidget_childevent_isbase = value; }
    inline void setSonnet__ConfigWidget_CustomEvent_IsBase(bool value) const { sonnet__configwidget_customevent_isbase = value; }
    inline void setSonnet__ConfigWidget_ConnectNotify_IsBase(bool value) const { sonnet__configwidget_connectnotify_isbase = value; }
    inline void setSonnet__ConfigWidget_DisconnectNotify_IsBase(bool value) const { sonnet__configwidget_disconnectnotify_isbase = value; }
    inline void setSonnet__ConfigWidget_SlotIgnoreWordRemoved_IsBase(bool value) const { sonnet__configwidget_slotignorewordremoved_isbase = value; }
    inline void setSonnet__ConfigWidget_SlotIgnoreWordAdded_IsBase(bool value) const { sonnet__configwidget_slotignorewordadded_isbase = value; }
    inline void setSonnet__ConfigWidget_UpdateMicroFocus_IsBase(bool value) const { sonnet__configwidget_updatemicrofocus_isbase = value; }
    inline void setSonnet__ConfigWidget_Create_IsBase(bool value) const { sonnet__configwidget_create_isbase = value; }
    inline void setSonnet__ConfigWidget_Destroy_IsBase(bool value) const { sonnet__configwidget_destroy_isbase = value; }
    inline void setSonnet__ConfigWidget_FocusNextChild_IsBase(bool value) const { sonnet__configwidget_focusnextchild_isbase = value; }
    inline void setSonnet__ConfigWidget_FocusPreviousChild_IsBase(bool value) const { sonnet__configwidget_focuspreviouschild_isbase = value; }
    inline void setSonnet__ConfigWidget_Sender_IsBase(bool value) const { sonnet__configwidget_sender_isbase = value; }
    inline void setSonnet__ConfigWidget_SenderSignalIndex_IsBase(bool value) const { sonnet__configwidget_sendersignalindex_isbase = value; }
    inline void setSonnet__ConfigWidget_Receivers_IsBase(bool value) const { sonnet__configwidget_receivers_isbase = value; }
    inline void setSonnet__ConfigWidget_IsSignalConnected_IsBase(bool value) const { sonnet__configwidget_issignalconnected_isbase = value; }
    inline void setSonnet__ConfigWidget_GetDecodedMetricF_IsBase(bool value) const { sonnet__configwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (sonnet__configwidget_metacall_isbase) {
            sonnet__configwidget_metacall_isbase = false;
            return Sonnet__ConfigWidget::qt_metacall(param1, param2, param3);
        } else if (sonnet__configwidget_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = sonnet__configwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__ConfigWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (sonnet__configwidget_devtype_isbase) {
            sonnet__configwidget_devtype_isbase = false;
            return Sonnet__ConfigWidget::devType();
        } else if (sonnet__configwidget_devtype_callback != nullptr) {
            int callback_ret = sonnet__configwidget_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__ConfigWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (sonnet__configwidget_setvisible_isbase) {
            sonnet__configwidget_setvisible_isbase = false;
            Sonnet__ConfigWidget::setVisible(visible);
        } else if (sonnet__configwidget_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            sonnet__configwidget_setvisible_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (sonnet__configwidget_sizehint_isbase) {
            sonnet__configwidget_sizehint_isbase = false;
            return Sonnet__ConfigWidget::sizeHint();
        } else if (sonnet__configwidget_sizehint_callback != nullptr) {
            QSize* callback_ret = sonnet__configwidget_sizehint_callback();
            return *callback_ret;
        } else {
            return Sonnet__ConfigWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (sonnet__configwidget_minimumsizehint_isbase) {
            sonnet__configwidget_minimumsizehint_isbase = false;
            return Sonnet__ConfigWidget::minimumSizeHint();
        } else if (sonnet__configwidget_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = sonnet__configwidget_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return Sonnet__ConfigWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (sonnet__configwidget_heightforwidth_isbase) {
            sonnet__configwidget_heightforwidth_isbase = false;
            return Sonnet__ConfigWidget::heightForWidth(param1);
        } else if (sonnet__configwidget_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = sonnet__configwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__ConfigWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (sonnet__configwidget_hasheightforwidth_isbase) {
            sonnet__configwidget_hasheightforwidth_isbase = false;
            return Sonnet__ConfigWidget::hasHeightForWidth();
        } else if (sonnet__configwidget_hasheightforwidth_callback != nullptr) {
            bool callback_ret = sonnet__configwidget_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return Sonnet__ConfigWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (sonnet__configwidget_paintengine_isbase) {
            sonnet__configwidget_paintengine_isbase = false;
            return Sonnet__ConfigWidget::paintEngine();
        } else if (sonnet__configwidget_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = sonnet__configwidget_paintengine_callback();
            return callback_ret;
        } else {
            return Sonnet__ConfigWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (sonnet__configwidget_event_isbase) {
            sonnet__configwidget_event_isbase = false;
            return Sonnet__ConfigWidget::event(event);
        } else if (sonnet__configwidget_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = sonnet__configwidget_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__ConfigWidget::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (sonnet__configwidget_mousepressevent_isbase) {
            sonnet__configwidget_mousepressevent_isbase = false;
            Sonnet__ConfigWidget::mousePressEvent(event);
        } else if (sonnet__configwidget_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            sonnet__configwidget_mousepressevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (sonnet__configwidget_mousereleaseevent_isbase) {
            sonnet__configwidget_mousereleaseevent_isbase = false;
            Sonnet__ConfigWidget::mouseReleaseEvent(event);
        } else if (sonnet__configwidget_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            sonnet__configwidget_mousereleaseevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (sonnet__configwidget_mousedoubleclickevent_isbase) {
            sonnet__configwidget_mousedoubleclickevent_isbase = false;
            Sonnet__ConfigWidget::mouseDoubleClickEvent(event);
        } else if (sonnet__configwidget_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            sonnet__configwidget_mousedoubleclickevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (sonnet__configwidget_mousemoveevent_isbase) {
            sonnet__configwidget_mousemoveevent_isbase = false;
            Sonnet__ConfigWidget::mouseMoveEvent(event);
        } else if (sonnet__configwidget_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            sonnet__configwidget_mousemoveevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (sonnet__configwidget_wheelevent_isbase) {
            sonnet__configwidget_wheelevent_isbase = false;
            Sonnet__ConfigWidget::wheelEvent(event);
        } else if (sonnet__configwidget_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            sonnet__configwidget_wheelevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (sonnet__configwidget_keypressevent_isbase) {
            sonnet__configwidget_keypressevent_isbase = false;
            Sonnet__ConfigWidget::keyPressEvent(event);
        } else if (sonnet__configwidget_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            sonnet__configwidget_keypressevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (sonnet__configwidget_keyreleaseevent_isbase) {
            sonnet__configwidget_keyreleaseevent_isbase = false;
            Sonnet__ConfigWidget::keyReleaseEvent(event);
        } else if (sonnet__configwidget_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            sonnet__configwidget_keyreleaseevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (sonnet__configwidget_focusinevent_isbase) {
            sonnet__configwidget_focusinevent_isbase = false;
            Sonnet__ConfigWidget::focusInEvent(event);
        } else if (sonnet__configwidget_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            sonnet__configwidget_focusinevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (sonnet__configwidget_focusoutevent_isbase) {
            sonnet__configwidget_focusoutevent_isbase = false;
            Sonnet__ConfigWidget::focusOutEvent(event);
        } else if (sonnet__configwidget_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            sonnet__configwidget_focusoutevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (sonnet__configwidget_enterevent_isbase) {
            sonnet__configwidget_enterevent_isbase = false;
            Sonnet__ConfigWidget::enterEvent(event);
        } else if (sonnet__configwidget_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            sonnet__configwidget_enterevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (sonnet__configwidget_leaveevent_isbase) {
            sonnet__configwidget_leaveevent_isbase = false;
            Sonnet__ConfigWidget::leaveEvent(event);
        } else if (sonnet__configwidget_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            sonnet__configwidget_leaveevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (sonnet__configwidget_paintevent_isbase) {
            sonnet__configwidget_paintevent_isbase = false;
            Sonnet__ConfigWidget::paintEvent(event);
        } else if (sonnet__configwidget_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            sonnet__configwidget_paintevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (sonnet__configwidget_moveevent_isbase) {
            sonnet__configwidget_moveevent_isbase = false;
            Sonnet__ConfigWidget::moveEvent(event);
        } else if (sonnet__configwidget_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            sonnet__configwidget_moveevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (sonnet__configwidget_resizeevent_isbase) {
            sonnet__configwidget_resizeevent_isbase = false;
            Sonnet__ConfigWidget::resizeEvent(event);
        } else if (sonnet__configwidget_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            sonnet__configwidget_resizeevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (sonnet__configwidget_closeevent_isbase) {
            sonnet__configwidget_closeevent_isbase = false;
            Sonnet__ConfigWidget::closeEvent(event);
        } else if (sonnet__configwidget_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            sonnet__configwidget_closeevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (sonnet__configwidget_contextmenuevent_isbase) {
            sonnet__configwidget_contextmenuevent_isbase = false;
            Sonnet__ConfigWidget::contextMenuEvent(event);
        } else if (sonnet__configwidget_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            sonnet__configwidget_contextmenuevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (sonnet__configwidget_tabletevent_isbase) {
            sonnet__configwidget_tabletevent_isbase = false;
            Sonnet__ConfigWidget::tabletEvent(event);
        } else if (sonnet__configwidget_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            sonnet__configwidget_tabletevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (sonnet__configwidget_actionevent_isbase) {
            sonnet__configwidget_actionevent_isbase = false;
            Sonnet__ConfigWidget::actionEvent(event);
        } else if (sonnet__configwidget_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            sonnet__configwidget_actionevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (sonnet__configwidget_dragenterevent_isbase) {
            sonnet__configwidget_dragenterevent_isbase = false;
            Sonnet__ConfigWidget::dragEnterEvent(event);
        } else if (sonnet__configwidget_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            sonnet__configwidget_dragenterevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (sonnet__configwidget_dragmoveevent_isbase) {
            sonnet__configwidget_dragmoveevent_isbase = false;
            Sonnet__ConfigWidget::dragMoveEvent(event);
        } else if (sonnet__configwidget_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            sonnet__configwidget_dragmoveevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (sonnet__configwidget_dragleaveevent_isbase) {
            sonnet__configwidget_dragleaveevent_isbase = false;
            Sonnet__ConfigWidget::dragLeaveEvent(event);
        } else if (sonnet__configwidget_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            sonnet__configwidget_dragleaveevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (sonnet__configwidget_dropevent_isbase) {
            sonnet__configwidget_dropevent_isbase = false;
            Sonnet__ConfigWidget::dropEvent(event);
        } else if (sonnet__configwidget_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            sonnet__configwidget_dropevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (sonnet__configwidget_showevent_isbase) {
            sonnet__configwidget_showevent_isbase = false;
            Sonnet__ConfigWidget::showEvent(event);
        } else if (sonnet__configwidget_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            sonnet__configwidget_showevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (sonnet__configwidget_hideevent_isbase) {
            sonnet__configwidget_hideevent_isbase = false;
            Sonnet__ConfigWidget::hideEvent(event);
        } else if (sonnet__configwidget_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            sonnet__configwidget_hideevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (sonnet__configwidget_nativeevent_isbase) {
            sonnet__configwidget_nativeevent_isbase = false;
            return Sonnet__ConfigWidget::nativeEvent(eventType, message, result);
        } else if (sonnet__configwidget_nativeevent_callback != nullptr) {
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

            bool callback_ret = sonnet__configwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return Sonnet__ConfigWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (sonnet__configwidget_changeevent_isbase) {
            sonnet__configwidget_changeevent_isbase = false;
            Sonnet__ConfigWidget::changeEvent(param1);
        } else if (sonnet__configwidget_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            sonnet__configwidget_changeevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (sonnet__configwidget_metric_isbase) {
            sonnet__configwidget_metric_isbase = false;
            return Sonnet__ConfigWidget::metric(param1);
        } else if (sonnet__configwidget_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = sonnet__configwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__ConfigWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (sonnet__configwidget_initpainter_isbase) {
            sonnet__configwidget_initpainter_isbase = false;
            Sonnet__ConfigWidget::initPainter(painter);
        } else if (sonnet__configwidget_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            sonnet__configwidget_initpainter_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (sonnet__configwidget_redirected_isbase) {
            sonnet__configwidget_redirected_isbase = false;
            return Sonnet__ConfigWidget::redirected(offset);
        } else if (sonnet__configwidget_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = sonnet__configwidget_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__ConfigWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (sonnet__configwidget_sharedpainter_isbase) {
            sonnet__configwidget_sharedpainter_isbase = false;
            return Sonnet__ConfigWidget::sharedPainter();
        } else if (sonnet__configwidget_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = sonnet__configwidget_sharedpainter_callback();
            return callback_ret;
        } else {
            return Sonnet__ConfigWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (sonnet__configwidget_inputmethodevent_isbase) {
            sonnet__configwidget_inputmethodevent_isbase = false;
            Sonnet__ConfigWidget::inputMethodEvent(param1);
        } else if (sonnet__configwidget_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            sonnet__configwidget_inputmethodevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (sonnet__configwidget_inputmethodquery_isbase) {
            sonnet__configwidget_inputmethodquery_isbase = false;
            return Sonnet__ConfigWidget::inputMethodQuery(param1);
        } else if (sonnet__configwidget_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = sonnet__configwidget_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return Sonnet__ConfigWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (sonnet__configwidget_focusnextprevchild_isbase) {
            sonnet__configwidget_focusnextprevchild_isbase = false;
            return Sonnet__ConfigWidget::focusNextPrevChild(next);
        } else if (sonnet__configwidget_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = sonnet__configwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__ConfigWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (sonnet__configwidget_eventfilter_isbase) {
            sonnet__configwidget_eventfilter_isbase = false;
            return Sonnet__ConfigWidget::eventFilter(watched, event);
        } else if (sonnet__configwidget_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = sonnet__configwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return Sonnet__ConfigWidget::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (sonnet__configwidget_timerevent_isbase) {
            sonnet__configwidget_timerevent_isbase = false;
            Sonnet__ConfigWidget::timerEvent(event);
        } else if (sonnet__configwidget_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            sonnet__configwidget_timerevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (sonnet__configwidget_childevent_isbase) {
            sonnet__configwidget_childevent_isbase = false;
            Sonnet__ConfigWidget::childEvent(event);
        } else if (sonnet__configwidget_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            sonnet__configwidget_childevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (sonnet__configwidget_customevent_isbase) {
            sonnet__configwidget_customevent_isbase = false;
            Sonnet__ConfigWidget::customEvent(event);
        } else if (sonnet__configwidget_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            sonnet__configwidget_customevent_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (sonnet__configwidget_connectnotify_isbase) {
            sonnet__configwidget_connectnotify_isbase = false;
            Sonnet__ConfigWidget::connectNotify(signal);
        } else if (sonnet__configwidget_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            sonnet__configwidget_connectnotify_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (sonnet__configwidget_disconnectnotify_isbase) {
            sonnet__configwidget_disconnectnotify_isbase = false;
            Sonnet__ConfigWidget::disconnectNotify(signal);
        } else if (sonnet__configwidget_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            sonnet__configwidget_disconnectnotify_callback(this, cbval1);
        } else {
            Sonnet__ConfigWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotIgnoreWordRemoved() {
        if (sonnet__configwidget_slotignorewordremoved_isbase) {
            sonnet__configwidget_slotignorewordremoved_isbase = false;
            Sonnet__ConfigWidget::slotIgnoreWordRemoved();
        } else if (sonnet__configwidget_slotignorewordremoved_callback != nullptr) {
            sonnet__configwidget_slotignorewordremoved_callback();
        } else {
            Sonnet__ConfigWidget::slotIgnoreWordRemoved();
        }
    }

    // Virtual method for C ABI access and custom callback
    void slotIgnoreWordAdded() {
        if (sonnet__configwidget_slotignorewordadded_isbase) {
            sonnet__configwidget_slotignorewordadded_isbase = false;
            Sonnet__ConfigWidget::slotIgnoreWordAdded();
        } else if (sonnet__configwidget_slotignorewordadded_callback != nullptr) {
            sonnet__configwidget_slotignorewordadded_callback();
        } else {
            Sonnet__ConfigWidget::slotIgnoreWordAdded();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (sonnet__configwidget_updatemicrofocus_isbase) {
            sonnet__configwidget_updatemicrofocus_isbase = false;
            Sonnet__ConfigWidget::updateMicroFocus();
        } else if (sonnet__configwidget_updatemicrofocus_callback != nullptr) {
            sonnet__configwidget_updatemicrofocus_callback();
        } else {
            Sonnet__ConfigWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (sonnet__configwidget_create_isbase) {
            sonnet__configwidget_create_isbase = false;
            Sonnet__ConfigWidget::create();
        } else if (sonnet__configwidget_create_callback != nullptr) {
            sonnet__configwidget_create_callback();
        } else {
            Sonnet__ConfigWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (sonnet__configwidget_destroy_isbase) {
            sonnet__configwidget_destroy_isbase = false;
            Sonnet__ConfigWidget::destroy();
        } else if (sonnet__configwidget_destroy_callback != nullptr) {
            sonnet__configwidget_destroy_callback();
        } else {
            Sonnet__ConfigWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (sonnet__configwidget_focusnextchild_isbase) {
            sonnet__configwidget_focusnextchild_isbase = false;
            return Sonnet__ConfigWidget::focusNextChild();
        } else if (sonnet__configwidget_focusnextchild_callback != nullptr) {
            bool callback_ret = sonnet__configwidget_focusnextchild_callback();
            return callback_ret;
        } else {
            return Sonnet__ConfigWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (sonnet__configwidget_focuspreviouschild_isbase) {
            sonnet__configwidget_focuspreviouschild_isbase = false;
            return Sonnet__ConfigWidget::focusPreviousChild();
        } else if (sonnet__configwidget_focuspreviouschild_callback != nullptr) {
            bool callback_ret = sonnet__configwidget_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return Sonnet__ConfigWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (sonnet__configwidget_sender_isbase) {
            sonnet__configwidget_sender_isbase = false;
            return Sonnet__ConfigWidget::sender();
        } else if (sonnet__configwidget_sender_callback != nullptr) {
            QObject* callback_ret = sonnet__configwidget_sender_callback();
            return callback_ret;
        } else {
            return Sonnet__ConfigWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (sonnet__configwidget_sendersignalindex_isbase) {
            sonnet__configwidget_sendersignalindex_isbase = false;
            return Sonnet__ConfigWidget::senderSignalIndex();
        } else if (sonnet__configwidget_sendersignalindex_callback != nullptr) {
            int callback_ret = sonnet__configwidget_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__ConfigWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (sonnet__configwidget_receivers_isbase) {
            sonnet__configwidget_receivers_isbase = false;
            return Sonnet__ConfigWidget::receivers(signal);
        } else if (sonnet__configwidget_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = sonnet__configwidget_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__ConfigWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (sonnet__configwidget_issignalconnected_isbase) {
            sonnet__configwidget_issignalconnected_isbase = false;
            return Sonnet__ConfigWidget::isSignalConnected(signal);
        } else if (sonnet__configwidget_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = sonnet__configwidget_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__ConfigWidget::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (sonnet__configwidget_getdecodedmetricf_isbase) {
            sonnet__configwidget_getdecodedmetricf_isbase = false;
            return Sonnet__ConfigWidget::getDecodedMetricF(metricA, metricB);
        } else if (sonnet__configwidget_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = sonnet__configwidget_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return Sonnet__ConfigWidget::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool Sonnet__ConfigWidget_Event(Sonnet::ConfigWidget* self, QEvent* event);
    friend bool Sonnet__ConfigWidget_QBaseEvent(Sonnet::ConfigWidget* self, QEvent* event);
    friend void Sonnet__ConfigWidget_MousePressEvent(Sonnet::ConfigWidget* self, QMouseEvent* event);
    friend void Sonnet__ConfigWidget_QBaseMousePressEvent(Sonnet::ConfigWidget* self, QMouseEvent* event);
    friend void Sonnet__ConfigWidget_MouseReleaseEvent(Sonnet::ConfigWidget* self, QMouseEvent* event);
    friend void Sonnet__ConfigWidget_QBaseMouseReleaseEvent(Sonnet::ConfigWidget* self, QMouseEvent* event);
    friend void Sonnet__ConfigWidget_MouseDoubleClickEvent(Sonnet::ConfigWidget* self, QMouseEvent* event);
    friend void Sonnet__ConfigWidget_QBaseMouseDoubleClickEvent(Sonnet::ConfigWidget* self, QMouseEvent* event);
    friend void Sonnet__ConfigWidget_MouseMoveEvent(Sonnet::ConfigWidget* self, QMouseEvent* event);
    friend void Sonnet__ConfigWidget_QBaseMouseMoveEvent(Sonnet::ConfigWidget* self, QMouseEvent* event);
    friend void Sonnet__ConfigWidget_WheelEvent(Sonnet::ConfigWidget* self, QWheelEvent* event);
    friend void Sonnet__ConfigWidget_QBaseWheelEvent(Sonnet::ConfigWidget* self, QWheelEvent* event);
    friend void Sonnet__ConfigWidget_KeyPressEvent(Sonnet::ConfigWidget* self, QKeyEvent* event);
    friend void Sonnet__ConfigWidget_QBaseKeyPressEvent(Sonnet::ConfigWidget* self, QKeyEvent* event);
    friend void Sonnet__ConfigWidget_KeyReleaseEvent(Sonnet::ConfigWidget* self, QKeyEvent* event);
    friend void Sonnet__ConfigWidget_QBaseKeyReleaseEvent(Sonnet::ConfigWidget* self, QKeyEvent* event);
    friend void Sonnet__ConfigWidget_FocusInEvent(Sonnet::ConfigWidget* self, QFocusEvent* event);
    friend void Sonnet__ConfigWidget_QBaseFocusInEvent(Sonnet::ConfigWidget* self, QFocusEvent* event);
    friend void Sonnet__ConfigWidget_FocusOutEvent(Sonnet::ConfigWidget* self, QFocusEvent* event);
    friend void Sonnet__ConfigWidget_QBaseFocusOutEvent(Sonnet::ConfigWidget* self, QFocusEvent* event);
    friend void Sonnet__ConfigWidget_EnterEvent(Sonnet::ConfigWidget* self, QEnterEvent* event);
    friend void Sonnet__ConfigWidget_QBaseEnterEvent(Sonnet::ConfigWidget* self, QEnterEvent* event);
    friend void Sonnet__ConfigWidget_LeaveEvent(Sonnet::ConfigWidget* self, QEvent* event);
    friend void Sonnet__ConfigWidget_QBaseLeaveEvent(Sonnet::ConfigWidget* self, QEvent* event);
    friend void Sonnet__ConfigWidget_PaintEvent(Sonnet::ConfigWidget* self, QPaintEvent* event);
    friend void Sonnet__ConfigWidget_QBasePaintEvent(Sonnet::ConfigWidget* self, QPaintEvent* event);
    friend void Sonnet__ConfigWidget_MoveEvent(Sonnet::ConfigWidget* self, QMoveEvent* event);
    friend void Sonnet__ConfigWidget_QBaseMoveEvent(Sonnet::ConfigWidget* self, QMoveEvent* event);
    friend void Sonnet__ConfigWidget_ResizeEvent(Sonnet::ConfigWidget* self, QResizeEvent* event);
    friend void Sonnet__ConfigWidget_QBaseResizeEvent(Sonnet::ConfigWidget* self, QResizeEvent* event);
    friend void Sonnet__ConfigWidget_CloseEvent(Sonnet::ConfigWidget* self, QCloseEvent* event);
    friend void Sonnet__ConfigWidget_QBaseCloseEvent(Sonnet::ConfigWidget* self, QCloseEvent* event);
    friend void Sonnet__ConfigWidget_ContextMenuEvent(Sonnet::ConfigWidget* self, QContextMenuEvent* event);
    friend void Sonnet__ConfigWidget_QBaseContextMenuEvent(Sonnet::ConfigWidget* self, QContextMenuEvent* event);
    friend void Sonnet__ConfigWidget_TabletEvent(Sonnet::ConfigWidget* self, QTabletEvent* event);
    friend void Sonnet__ConfigWidget_QBaseTabletEvent(Sonnet::ConfigWidget* self, QTabletEvent* event);
    friend void Sonnet__ConfigWidget_ActionEvent(Sonnet::ConfigWidget* self, QActionEvent* event);
    friend void Sonnet__ConfigWidget_QBaseActionEvent(Sonnet::ConfigWidget* self, QActionEvent* event);
    friend void Sonnet__ConfigWidget_DragEnterEvent(Sonnet::ConfigWidget* self, QDragEnterEvent* event);
    friend void Sonnet__ConfigWidget_QBaseDragEnterEvent(Sonnet::ConfigWidget* self, QDragEnterEvent* event);
    friend void Sonnet__ConfigWidget_DragMoveEvent(Sonnet::ConfigWidget* self, QDragMoveEvent* event);
    friend void Sonnet__ConfigWidget_QBaseDragMoveEvent(Sonnet::ConfigWidget* self, QDragMoveEvent* event);
    friend void Sonnet__ConfigWidget_DragLeaveEvent(Sonnet::ConfigWidget* self, QDragLeaveEvent* event);
    friend void Sonnet__ConfigWidget_QBaseDragLeaveEvent(Sonnet::ConfigWidget* self, QDragLeaveEvent* event);
    friend void Sonnet__ConfigWidget_DropEvent(Sonnet::ConfigWidget* self, QDropEvent* event);
    friend void Sonnet__ConfigWidget_QBaseDropEvent(Sonnet::ConfigWidget* self, QDropEvent* event);
    friend void Sonnet__ConfigWidget_ShowEvent(Sonnet::ConfigWidget* self, QShowEvent* event);
    friend void Sonnet__ConfigWidget_QBaseShowEvent(Sonnet::ConfigWidget* self, QShowEvent* event);
    friend void Sonnet__ConfigWidget_HideEvent(Sonnet::ConfigWidget* self, QHideEvent* event);
    friend void Sonnet__ConfigWidget_QBaseHideEvent(Sonnet::ConfigWidget* self, QHideEvent* event);
    friend bool Sonnet__ConfigWidget_NativeEvent(Sonnet::ConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool Sonnet__ConfigWidget_QBaseNativeEvent(Sonnet::ConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void Sonnet__ConfigWidget_ChangeEvent(Sonnet::ConfigWidget* self, QEvent* param1);
    friend void Sonnet__ConfigWidget_QBaseChangeEvent(Sonnet::ConfigWidget* self, QEvent* param1);
    friend int Sonnet__ConfigWidget_Metric(const Sonnet::ConfigWidget* self, int param1);
    friend int Sonnet__ConfigWidget_QBaseMetric(const Sonnet::ConfigWidget* self, int param1);
    friend void Sonnet__ConfigWidget_InitPainter(const Sonnet::ConfigWidget* self, QPainter* painter);
    friend void Sonnet__ConfigWidget_QBaseInitPainter(const Sonnet::ConfigWidget* self, QPainter* painter);
    friend QPaintDevice* Sonnet__ConfigWidget_Redirected(const Sonnet::ConfigWidget* self, QPoint* offset);
    friend QPaintDevice* Sonnet__ConfigWidget_QBaseRedirected(const Sonnet::ConfigWidget* self, QPoint* offset);
    friend QPainter* Sonnet__ConfigWidget_SharedPainter(const Sonnet::ConfigWidget* self);
    friend QPainter* Sonnet__ConfigWidget_QBaseSharedPainter(const Sonnet::ConfigWidget* self);
    friend void Sonnet__ConfigWidget_InputMethodEvent(Sonnet::ConfigWidget* self, QInputMethodEvent* param1);
    friend void Sonnet__ConfigWidget_QBaseInputMethodEvent(Sonnet::ConfigWidget* self, QInputMethodEvent* param1);
    friend bool Sonnet__ConfigWidget_FocusNextPrevChild(Sonnet::ConfigWidget* self, bool next);
    friend bool Sonnet__ConfigWidget_QBaseFocusNextPrevChild(Sonnet::ConfigWidget* self, bool next);
    friend void Sonnet__ConfigWidget_TimerEvent(Sonnet::ConfigWidget* self, QTimerEvent* event);
    friend void Sonnet__ConfigWidget_QBaseTimerEvent(Sonnet::ConfigWidget* self, QTimerEvent* event);
    friend void Sonnet__ConfigWidget_ChildEvent(Sonnet::ConfigWidget* self, QChildEvent* event);
    friend void Sonnet__ConfigWidget_QBaseChildEvent(Sonnet::ConfigWidget* self, QChildEvent* event);
    friend void Sonnet__ConfigWidget_CustomEvent(Sonnet::ConfigWidget* self, QEvent* event);
    friend void Sonnet__ConfigWidget_QBaseCustomEvent(Sonnet::ConfigWidget* self, QEvent* event);
    friend void Sonnet__ConfigWidget_ConnectNotify(Sonnet::ConfigWidget* self, const QMetaMethod* signal);
    friend void Sonnet__ConfigWidget_QBaseConnectNotify(Sonnet::ConfigWidget* self, const QMetaMethod* signal);
    friend void Sonnet__ConfigWidget_DisconnectNotify(Sonnet::ConfigWidget* self, const QMetaMethod* signal);
    friend void Sonnet__ConfigWidget_QBaseDisconnectNotify(Sonnet::ConfigWidget* self, const QMetaMethod* signal);
    friend void Sonnet__ConfigWidget_SlotIgnoreWordRemoved(Sonnet::ConfigWidget* self);
    friend void Sonnet__ConfigWidget_QBaseSlotIgnoreWordRemoved(Sonnet::ConfigWidget* self);
    friend void Sonnet__ConfigWidget_SlotIgnoreWordAdded(Sonnet::ConfigWidget* self);
    friend void Sonnet__ConfigWidget_QBaseSlotIgnoreWordAdded(Sonnet::ConfigWidget* self);
    friend void Sonnet__ConfigWidget_UpdateMicroFocus(Sonnet::ConfigWidget* self);
    friend void Sonnet__ConfigWidget_QBaseUpdateMicroFocus(Sonnet::ConfigWidget* self);
    friend void Sonnet__ConfigWidget_Create(Sonnet::ConfigWidget* self);
    friend void Sonnet__ConfigWidget_QBaseCreate(Sonnet::ConfigWidget* self);
    friend void Sonnet__ConfigWidget_Destroy(Sonnet::ConfigWidget* self);
    friend void Sonnet__ConfigWidget_QBaseDestroy(Sonnet::ConfigWidget* self);
    friend bool Sonnet__ConfigWidget_FocusNextChild(Sonnet::ConfigWidget* self);
    friend bool Sonnet__ConfigWidget_QBaseFocusNextChild(Sonnet::ConfigWidget* self);
    friend bool Sonnet__ConfigWidget_FocusPreviousChild(Sonnet::ConfigWidget* self);
    friend bool Sonnet__ConfigWidget_QBaseFocusPreviousChild(Sonnet::ConfigWidget* self);
    friend QObject* Sonnet__ConfigWidget_Sender(const Sonnet::ConfigWidget* self);
    friend QObject* Sonnet__ConfigWidget_QBaseSender(const Sonnet::ConfigWidget* self);
    friend int Sonnet__ConfigWidget_SenderSignalIndex(const Sonnet::ConfigWidget* self);
    friend int Sonnet__ConfigWidget_QBaseSenderSignalIndex(const Sonnet::ConfigWidget* self);
    friend int Sonnet__ConfigWidget_Receivers(const Sonnet::ConfigWidget* self, const char* signal);
    friend int Sonnet__ConfigWidget_QBaseReceivers(const Sonnet::ConfigWidget* self, const char* signal);
    friend bool Sonnet__ConfigWidget_IsSignalConnected(const Sonnet::ConfigWidget* self, const QMetaMethod* signal);
    friend bool Sonnet__ConfigWidget_QBaseIsSignalConnected(const Sonnet::ConfigWidget* self, const QMetaMethod* signal);
    friend double Sonnet__ConfigWidget_GetDecodedMetricF(const Sonnet::ConfigWidget* self, int metricA, int metricB);
    friend double Sonnet__ConfigWidget_QBaseGetDecodedMetricF(const Sonnet::ConfigWidget* self, int metricA, int metricB);
};

#endif
