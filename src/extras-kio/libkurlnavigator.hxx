#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKURLNAVIGATOR_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKURLNAVIGATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KUrlNavigator so that we can call protected methods
class VirtualKUrlNavigator final : public KUrlNavigator {

  public:
    // Virtual class boolean flag
    bool isVirtualKUrlNavigator = true;

    // Virtual class public types (including callbacks)
    using KUrlNavigator_Metacall_Callback = int (*)(KUrlNavigator*, int, int, void**);
    using KUrlNavigator_KeyPressEvent_Callback = void (*)(KUrlNavigator*, QKeyEvent*);
    using KUrlNavigator_KeyReleaseEvent_Callback = void (*)(KUrlNavigator*, QKeyEvent*);
    using KUrlNavigator_MouseReleaseEvent_Callback = void (*)(KUrlNavigator*, QMouseEvent*);
    using KUrlNavigator_MousePressEvent_Callback = void (*)(KUrlNavigator*, QMouseEvent*);
    using KUrlNavigator_ResizeEvent_Callback = void (*)(KUrlNavigator*, QResizeEvent*);
    using KUrlNavigator_WheelEvent_Callback = void (*)(KUrlNavigator*, QWheelEvent*);
    using KUrlNavigator_ShowEvent_Callback = void (*)(KUrlNavigator*, QShowEvent*);
    using KUrlNavigator_EventFilter_Callback = bool (*)(KUrlNavigator*, QObject*, QEvent*);
    using KUrlNavigator_PaintEvent_Callback = void (*)(KUrlNavigator*, QPaintEvent*);
    using KUrlNavigator_DevType_Callback = int (*)();
    using KUrlNavigator_SetVisible_Callback = void (*)(KUrlNavigator*, bool);
    using KUrlNavigator_SizeHint_Callback = QSize* (*)();
    using KUrlNavigator_MinimumSizeHint_Callback = QSize* (*)();
    using KUrlNavigator_HeightForWidth_Callback = int (*)(const KUrlNavigator*, int);
    using KUrlNavigator_HasHeightForWidth_Callback = bool (*)();
    using KUrlNavigator_PaintEngine_Callback = QPaintEngine* (*)();
    using KUrlNavigator_Event_Callback = bool (*)(KUrlNavigator*, QEvent*);
    using KUrlNavigator_MouseDoubleClickEvent_Callback = void (*)(KUrlNavigator*, QMouseEvent*);
    using KUrlNavigator_MouseMoveEvent_Callback = void (*)(KUrlNavigator*, QMouseEvent*);
    using KUrlNavigator_FocusInEvent_Callback = void (*)(KUrlNavigator*, QFocusEvent*);
    using KUrlNavigator_FocusOutEvent_Callback = void (*)(KUrlNavigator*, QFocusEvent*);
    using KUrlNavigator_EnterEvent_Callback = void (*)(KUrlNavigator*, QEnterEvent*);
    using KUrlNavigator_LeaveEvent_Callback = void (*)(KUrlNavigator*, QEvent*);
    using KUrlNavigator_MoveEvent_Callback = void (*)(KUrlNavigator*, QMoveEvent*);
    using KUrlNavigator_CloseEvent_Callback = void (*)(KUrlNavigator*, QCloseEvent*);
    using KUrlNavigator_ContextMenuEvent_Callback = void (*)(KUrlNavigator*, QContextMenuEvent*);
    using KUrlNavigator_TabletEvent_Callback = void (*)(KUrlNavigator*, QTabletEvent*);
    using KUrlNavigator_ActionEvent_Callback = void (*)(KUrlNavigator*, QActionEvent*);
    using KUrlNavigator_DragEnterEvent_Callback = void (*)(KUrlNavigator*, QDragEnterEvent*);
    using KUrlNavigator_DragMoveEvent_Callback = void (*)(KUrlNavigator*, QDragMoveEvent*);
    using KUrlNavigator_DragLeaveEvent_Callback = void (*)(KUrlNavigator*, QDragLeaveEvent*);
    using KUrlNavigator_DropEvent_Callback = void (*)(KUrlNavigator*, QDropEvent*);
    using KUrlNavigator_HideEvent_Callback = void (*)(KUrlNavigator*, QHideEvent*);
    using KUrlNavigator_NativeEvent_Callback = bool (*)(KUrlNavigator*, libqt_string, void*, intptr_t*);
    using KUrlNavigator_ChangeEvent_Callback = void (*)(KUrlNavigator*, QEvent*);
    using KUrlNavigator_Metric_Callback = int (*)(const KUrlNavigator*, int);
    using KUrlNavigator_InitPainter_Callback = void (*)(const KUrlNavigator*, QPainter*);
    using KUrlNavigator_Redirected_Callback = QPaintDevice* (*)(const KUrlNavigator*, QPoint*);
    using KUrlNavigator_SharedPainter_Callback = QPainter* (*)();
    using KUrlNavigator_InputMethodEvent_Callback = void (*)(KUrlNavigator*, QInputMethodEvent*);
    using KUrlNavigator_InputMethodQuery_Callback = QVariant* (*)(const KUrlNavigator*, int);
    using KUrlNavigator_FocusNextPrevChild_Callback = bool (*)(KUrlNavigator*, bool);
    using KUrlNavigator_TimerEvent_Callback = void (*)(KUrlNavigator*, QTimerEvent*);
    using KUrlNavigator_ChildEvent_Callback = void (*)(KUrlNavigator*, QChildEvent*);
    using KUrlNavigator_CustomEvent_Callback = void (*)(KUrlNavigator*, QEvent*);
    using KUrlNavigator_ConnectNotify_Callback = void (*)(KUrlNavigator*, QMetaMethod*);
    using KUrlNavigator_DisconnectNotify_Callback = void (*)(KUrlNavigator*, QMetaMethod*);
    using KUrlNavigator_UpdateMicroFocus_Callback = void (*)();
    using KUrlNavigator_Create_Callback = void (*)();
    using KUrlNavigator_Destroy_Callback = void (*)();
    using KUrlNavigator_FocusNextChild_Callback = bool (*)();
    using KUrlNavigator_FocusPreviousChild_Callback = bool (*)();
    using KUrlNavigator_Sender_Callback = QObject* (*)();
    using KUrlNavigator_SenderSignalIndex_Callback = int (*)();
    using KUrlNavigator_Receivers_Callback = int (*)(const KUrlNavigator*, const char*);
    using KUrlNavigator_IsSignalConnected_Callback = bool (*)(const KUrlNavigator*, QMetaMethod*);
    using KUrlNavigator_GetDecodedMetricF_Callback = double (*)(const KUrlNavigator*, int, int);

  protected:
    // Instance callback storage
    KUrlNavigator_Metacall_Callback kurlnavigator_metacall_callback = nullptr;
    KUrlNavigator_KeyPressEvent_Callback kurlnavigator_keypressevent_callback = nullptr;
    KUrlNavigator_KeyReleaseEvent_Callback kurlnavigator_keyreleaseevent_callback = nullptr;
    KUrlNavigator_MouseReleaseEvent_Callback kurlnavigator_mousereleaseevent_callback = nullptr;
    KUrlNavigator_MousePressEvent_Callback kurlnavigator_mousepressevent_callback = nullptr;
    KUrlNavigator_ResizeEvent_Callback kurlnavigator_resizeevent_callback = nullptr;
    KUrlNavigator_WheelEvent_Callback kurlnavigator_wheelevent_callback = nullptr;
    KUrlNavigator_ShowEvent_Callback kurlnavigator_showevent_callback = nullptr;
    KUrlNavigator_EventFilter_Callback kurlnavigator_eventfilter_callback = nullptr;
    KUrlNavigator_PaintEvent_Callback kurlnavigator_paintevent_callback = nullptr;
    KUrlNavigator_DevType_Callback kurlnavigator_devtype_callback = nullptr;
    KUrlNavigator_SetVisible_Callback kurlnavigator_setvisible_callback = nullptr;
    KUrlNavigator_SizeHint_Callback kurlnavigator_sizehint_callback = nullptr;
    KUrlNavigator_MinimumSizeHint_Callback kurlnavigator_minimumsizehint_callback = nullptr;
    KUrlNavigator_HeightForWidth_Callback kurlnavigator_heightforwidth_callback = nullptr;
    KUrlNavigator_HasHeightForWidth_Callback kurlnavigator_hasheightforwidth_callback = nullptr;
    KUrlNavigator_PaintEngine_Callback kurlnavigator_paintengine_callback = nullptr;
    KUrlNavigator_Event_Callback kurlnavigator_event_callback = nullptr;
    KUrlNavigator_MouseDoubleClickEvent_Callback kurlnavigator_mousedoubleclickevent_callback = nullptr;
    KUrlNavigator_MouseMoveEvent_Callback kurlnavigator_mousemoveevent_callback = nullptr;
    KUrlNavigator_FocusInEvent_Callback kurlnavigator_focusinevent_callback = nullptr;
    KUrlNavigator_FocusOutEvent_Callback kurlnavigator_focusoutevent_callback = nullptr;
    KUrlNavigator_EnterEvent_Callback kurlnavigator_enterevent_callback = nullptr;
    KUrlNavigator_LeaveEvent_Callback kurlnavigator_leaveevent_callback = nullptr;
    KUrlNavigator_MoveEvent_Callback kurlnavigator_moveevent_callback = nullptr;
    KUrlNavigator_CloseEvent_Callback kurlnavigator_closeevent_callback = nullptr;
    KUrlNavigator_ContextMenuEvent_Callback kurlnavigator_contextmenuevent_callback = nullptr;
    KUrlNavigator_TabletEvent_Callback kurlnavigator_tabletevent_callback = nullptr;
    KUrlNavigator_ActionEvent_Callback kurlnavigator_actionevent_callback = nullptr;
    KUrlNavigator_DragEnterEvent_Callback kurlnavigator_dragenterevent_callback = nullptr;
    KUrlNavigator_DragMoveEvent_Callback kurlnavigator_dragmoveevent_callback = nullptr;
    KUrlNavigator_DragLeaveEvent_Callback kurlnavigator_dragleaveevent_callback = nullptr;
    KUrlNavigator_DropEvent_Callback kurlnavigator_dropevent_callback = nullptr;
    KUrlNavigator_HideEvent_Callback kurlnavigator_hideevent_callback = nullptr;
    KUrlNavigator_NativeEvent_Callback kurlnavigator_nativeevent_callback = nullptr;
    KUrlNavigator_ChangeEvent_Callback kurlnavigator_changeevent_callback = nullptr;
    KUrlNavigator_Metric_Callback kurlnavigator_metric_callback = nullptr;
    KUrlNavigator_InitPainter_Callback kurlnavigator_initpainter_callback = nullptr;
    KUrlNavigator_Redirected_Callback kurlnavigator_redirected_callback = nullptr;
    KUrlNavigator_SharedPainter_Callback kurlnavigator_sharedpainter_callback = nullptr;
    KUrlNavigator_InputMethodEvent_Callback kurlnavigator_inputmethodevent_callback = nullptr;
    KUrlNavigator_InputMethodQuery_Callback kurlnavigator_inputmethodquery_callback = nullptr;
    KUrlNavigator_FocusNextPrevChild_Callback kurlnavigator_focusnextprevchild_callback = nullptr;
    KUrlNavigator_TimerEvent_Callback kurlnavigator_timerevent_callback = nullptr;
    KUrlNavigator_ChildEvent_Callback kurlnavigator_childevent_callback = nullptr;
    KUrlNavigator_CustomEvent_Callback kurlnavigator_customevent_callback = nullptr;
    KUrlNavigator_ConnectNotify_Callback kurlnavigator_connectnotify_callback = nullptr;
    KUrlNavigator_DisconnectNotify_Callback kurlnavigator_disconnectnotify_callback = nullptr;
    KUrlNavigator_UpdateMicroFocus_Callback kurlnavigator_updatemicrofocus_callback = nullptr;
    KUrlNavigator_Create_Callback kurlnavigator_create_callback = nullptr;
    KUrlNavigator_Destroy_Callback kurlnavigator_destroy_callback = nullptr;
    KUrlNavigator_FocusNextChild_Callback kurlnavigator_focusnextchild_callback = nullptr;
    KUrlNavigator_FocusPreviousChild_Callback kurlnavigator_focuspreviouschild_callback = nullptr;
    KUrlNavigator_Sender_Callback kurlnavigator_sender_callback = nullptr;
    KUrlNavigator_SenderSignalIndex_Callback kurlnavigator_sendersignalindex_callback = nullptr;
    KUrlNavigator_Receivers_Callback kurlnavigator_receivers_callback = nullptr;
    KUrlNavigator_IsSignalConnected_Callback kurlnavigator_issignalconnected_callback = nullptr;
    KUrlNavigator_GetDecodedMetricF_Callback kurlnavigator_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kurlnavigator_metacall_isbase = false;
    mutable bool kurlnavigator_keypressevent_isbase = false;
    mutable bool kurlnavigator_keyreleaseevent_isbase = false;
    mutable bool kurlnavigator_mousereleaseevent_isbase = false;
    mutable bool kurlnavigator_mousepressevent_isbase = false;
    mutable bool kurlnavigator_resizeevent_isbase = false;
    mutable bool kurlnavigator_wheelevent_isbase = false;
    mutable bool kurlnavigator_showevent_isbase = false;
    mutable bool kurlnavigator_eventfilter_isbase = false;
    mutable bool kurlnavigator_paintevent_isbase = false;
    mutable bool kurlnavigator_devtype_isbase = false;
    mutable bool kurlnavigator_setvisible_isbase = false;
    mutable bool kurlnavigator_sizehint_isbase = false;
    mutable bool kurlnavigator_minimumsizehint_isbase = false;
    mutable bool kurlnavigator_heightforwidth_isbase = false;
    mutable bool kurlnavigator_hasheightforwidth_isbase = false;
    mutable bool kurlnavigator_paintengine_isbase = false;
    mutable bool kurlnavigator_event_isbase = false;
    mutable bool kurlnavigator_mousedoubleclickevent_isbase = false;
    mutable bool kurlnavigator_mousemoveevent_isbase = false;
    mutable bool kurlnavigator_focusinevent_isbase = false;
    mutable bool kurlnavigator_focusoutevent_isbase = false;
    mutable bool kurlnavigator_enterevent_isbase = false;
    mutable bool kurlnavigator_leaveevent_isbase = false;
    mutable bool kurlnavigator_moveevent_isbase = false;
    mutable bool kurlnavigator_closeevent_isbase = false;
    mutable bool kurlnavigator_contextmenuevent_isbase = false;
    mutable bool kurlnavigator_tabletevent_isbase = false;
    mutable bool kurlnavigator_actionevent_isbase = false;
    mutable bool kurlnavigator_dragenterevent_isbase = false;
    mutable bool kurlnavigator_dragmoveevent_isbase = false;
    mutable bool kurlnavigator_dragleaveevent_isbase = false;
    mutable bool kurlnavigator_dropevent_isbase = false;
    mutable bool kurlnavigator_hideevent_isbase = false;
    mutable bool kurlnavigator_nativeevent_isbase = false;
    mutable bool kurlnavigator_changeevent_isbase = false;
    mutable bool kurlnavigator_metric_isbase = false;
    mutable bool kurlnavigator_initpainter_isbase = false;
    mutable bool kurlnavigator_redirected_isbase = false;
    mutable bool kurlnavigator_sharedpainter_isbase = false;
    mutable bool kurlnavigator_inputmethodevent_isbase = false;
    mutable bool kurlnavigator_inputmethodquery_isbase = false;
    mutable bool kurlnavigator_focusnextprevchild_isbase = false;
    mutable bool kurlnavigator_timerevent_isbase = false;
    mutable bool kurlnavigator_childevent_isbase = false;
    mutable bool kurlnavigator_customevent_isbase = false;
    mutable bool kurlnavigator_connectnotify_isbase = false;
    mutable bool kurlnavigator_disconnectnotify_isbase = false;
    mutable bool kurlnavigator_updatemicrofocus_isbase = false;
    mutable bool kurlnavigator_create_isbase = false;
    mutable bool kurlnavigator_destroy_isbase = false;
    mutable bool kurlnavigator_focusnextchild_isbase = false;
    mutable bool kurlnavigator_focuspreviouschild_isbase = false;
    mutable bool kurlnavigator_sender_isbase = false;
    mutable bool kurlnavigator_sendersignalindex_isbase = false;
    mutable bool kurlnavigator_receivers_isbase = false;
    mutable bool kurlnavigator_issignalconnected_isbase = false;
    mutable bool kurlnavigator_getdecodedmetricf_isbase = false;

  public:
    VirtualKUrlNavigator(QWidget* parent) : KUrlNavigator(parent) {};
    VirtualKUrlNavigator() : KUrlNavigator() {};
    VirtualKUrlNavigator(KFilePlacesModel* placesModel, const QUrl& url, QWidget* parent) : KUrlNavigator(placesModel, url, parent) {};

    ~VirtualKUrlNavigator() {
        kurlnavigator_metacall_callback = nullptr;
        kurlnavigator_keypressevent_callback = nullptr;
        kurlnavigator_keyreleaseevent_callback = nullptr;
        kurlnavigator_mousereleaseevent_callback = nullptr;
        kurlnavigator_mousepressevent_callback = nullptr;
        kurlnavigator_resizeevent_callback = nullptr;
        kurlnavigator_wheelevent_callback = nullptr;
        kurlnavigator_showevent_callback = nullptr;
        kurlnavigator_eventfilter_callback = nullptr;
        kurlnavigator_paintevent_callback = nullptr;
        kurlnavigator_devtype_callback = nullptr;
        kurlnavigator_setvisible_callback = nullptr;
        kurlnavigator_sizehint_callback = nullptr;
        kurlnavigator_minimumsizehint_callback = nullptr;
        kurlnavigator_heightforwidth_callback = nullptr;
        kurlnavigator_hasheightforwidth_callback = nullptr;
        kurlnavigator_paintengine_callback = nullptr;
        kurlnavigator_event_callback = nullptr;
        kurlnavigator_mousedoubleclickevent_callback = nullptr;
        kurlnavigator_mousemoveevent_callback = nullptr;
        kurlnavigator_focusinevent_callback = nullptr;
        kurlnavigator_focusoutevent_callback = nullptr;
        kurlnavigator_enterevent_callback = nullptr;
        kurlnavigator_leaveevent_callback = nullptr;
        kurlnavigator_moveevent_callback = nullptr;
        kurlnavigator_closeevent_callback = nullptr;
        kurlnavigator_contextmenuevent_callback = nullptr;
        kurlnavigator_tabletevent_callback = nullptr;
        kurlnavigator_actionevent_callback = nullptr;
        kurlnavigator_dragenterevent_callback = nullptr;
        kurlnavigator_dragmoveevent_callback = nullptr;
        kurlnavigator_dragleaveevent_callback = nullptr;
        kurlnavigator_dropevent_callback = nullptr;
        kurlnavigator_hideevent_callback = nullptr;
        kurlnavigator_nativeevent_callback = nullptr;
        kurlnavigator_changeevent_callback = nullptr;
        kurlnavigator_metric_callback = nullptr;
        kurlnavigator_initpainter_callback = nullptr;
        kurlnavigator_redirected_callback = nullptr;
        kurlnavigator_sharedpainter_callback = nullptr;
        kurlnavigator_inputmethodevent_callback = nullptr;
        kurlnavigator_inputmethodquery_callback = nullptr;
        kurlnavigator_focusnextprevchild_callback = nullptr;
        kurlnavigator_timerevent_callback = nullptr;
        kurlnavigator_childevent_callback = nullptr;
        kurlnavigator_customevent_callback = nullptr;
        kurlnavigator_connectnotify_callback = nullptr;
        kurlnavigator_disconnectnotify_callback = nullptr;
        kurlnavigator_updatemicrofocus_callback = nullptr;
        kurlnavigator_create_callback = nullptr;
        kurlnavigator_destroy_callback = nullptr;
        kurlnavigator_focusnextchild_callback = nullptr;
        kurlnavigator_focuspreviouschild_callback = nullptr;
        kurlnavigator_sender_callback = nullptr;
        kurlnavigator_sendersignalindex_callback = nullptr;
        kurlnavigator_receivers_callback = nullptr;
        kurlnavigator_issignalconnected_callback = nullptr;
        kurlnavigator_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKUrlNavigator_Metacall_Callback(KUrlNavigator_Metacall_Callback cb) { kurlnavigator_metacall_callback = cb; }
    inline void setKUrlNavigator_KeyPressEvent_Callback(KUrlNavigator_KeyPressEvent_Callback cb) { kurlnavigator_keypressevent_callback = cb; }
    inline void setKUrlNavigator_KeyReleaseEvent_Callback(KUrlNavigator_KeyReleaseEvent_Callback cb) { kurlnavigator_keyreleaseevent_callback = cb; }
    inline void setKUrlNavigator_MouseReleaseEvent_Callback(KUrlNavigator_MouseReleaseEvent_Callback cb) { kurlnavigator_mousereleaseevent_callback = cb; }
    inline void setKUrlNavigator_MousePressEvent_Callback(KUrlNavigator_MousePressEvent_Callback cb) { kurlnavigator_mousepressevent_callback = cb; }
    inline void setKUrlNavigator_ResizeEvent_Callback(KUrlNavigator_ResizeEvent_Callback cb) { kurlnavigator_resizeevent_callback = cb; }
    inline void setKUrlNavigator_WheelEvent_Callback(KUrlNavigator_WheelEvent_Callback cb) { kurlnavigator_wheelevent_callback = cb; }
    inline void setKUrlNavigator_ShowEvent_Callback(KUrlNavigator_ShowEvent_Callback cb) { kurlnavigator_showevent_callback = cb; }
    inline void setKUrlNavigator_EventFilter_Callback(KUrlNavigator_EventFilter_Callback cb) { kurlnavigator_eventfilter_callback = cb; }
    inline void setKUrlNavigator_PaintEvent_Callback(KUrlNavigator_PaintEvent_Callback cb) { kurlnavigator_paintevent_callback = cb; }
    inline void setKUrlNavigator_DevType_Callback(KUrlNavigator_DevType_Callback cb) { kurlnavigator_devtype_callback = cb; }
    inline void setKUrlNavigator_SetVisible_Callback(KUrlNavigator_SetVisible_Callback cb) { kurlnavigator_setvisible_callback = cb; }
    inline void setKUrlNavigator_SizeHint_Callback(KUrlNavigator_SizeHint_Callback cb) { kurlnavigator_sizehint_callback = cb; }
    inline void setKUrlNavigator_MinimumSizeHint_Callback(KUrlNavigator_MinimumSizeHint_Callback cb) { kurlnavigator_minimumsizehint_callback = cb; }
    inline void setKUrlNavigator_HeightForWidth_Callback(KUrlNavigator_HeightForWidth_Callback cb) { kurlnavigator_heightforwidth_callback = cb; }
    inline void setKUrlNavigator_HasHeightForWidth_Callback(KUrlNavigator_HasHeightForWidth_Callback cb) { kurlnavigator_hasheightforwidth_callback = cb; }
    inline void setKUrlNavigator_PaintEngine_Callback(KUrlNavigator_PaintEngine_Callback cb) { kurlnavigator_paintengine_callback = cb; }
    inline void setKUrlNavigator_Event_Callback(KUrlNavigator_Event_Callback cb) { kurlnavigator_event_callback = cb; }
    inline void setKUrlNavigator_MouseDoubleClickEvent_Callback(KUrlNavigator_MouseDoubleClickEvent_Callback cb) { kurlnavigator_mousedoubleclickevent_callback = cb; }
    inline void setKUrlNavigator_MouseMoveEvent_Callback(KUrlNavigator_MouseMoveEvent_Callback cb) { kurlnavigator_mousemoveevent_callback = cb; }
    inline void setKUrlNavigator_FocusInEvent_Callback(KUrlNavigator_FocusInEvent_Callback cb) { kurlnavigator_focusinevent_callback = cb; }
    inline void setKUrlNavigator_FocusOutEvent_Callback(KUrlNavigator_FocusOutEvent_Callback cb) { kurlnavigator_focusoutevent_callback = cb; }
    inline void setKUrlNavigator_EnterEvent_Callback(KUrlNavigator_EnterEvent_Callback cb) { kurlnavigator_enterevent_callback = cb; }
    inline void setKUrlNavigator_LeaveEvent_Callback(KUrlNavigator_LeaveEvent_Callback cb) { kurlnavigator_leaveevent_callback = cb; }
    inline void setKUrlNavigator_MoveEvent_Callback(KUrlNavigator_MoveEvent_Callback cb) { kurlnavigator_moveevent_callback = cb; }
    inline void setKUrlNavigator_CloseEvent_Callback(KUrlNavigator_CloseEvent_Callback cb) { kurlnavigator_closeevent_callback = cb; }
    inline void setKUrlNavigator_ContextMenuEvent_Callback(KUrlNavigator_ContextMenuEvent_Callback cb) { kurlnavigator_contextmenuevent_callback = cb; }
    inline void setKUrlNavigator_TabletEvent_Callback(KUrlNavigator_TabletEvent_Callback cb) { kurlnavigator_tabletevent_callback = cb; }
    inline void setKUrlNavigator_ActionEvent_Callback(KUrlNavigator_ActionEvent_Callback cb) { kurlnavigator_actionevent_callback = cb; }
    inline void setKUrlNavigator_DragEnterEvent_Callback(KUrlNavigator_DragEnterEvent_Callback cb) { kurlnavigator_dragenterevent_callback = cb; }
    inline void setKUrlNavigator_DragMoveEvent_Callback(KUrlNavigator_DragMoveEvent_Callback cb) { kurlnavigator_dragmoveevent_callback = cb; }
    inline void setKUrlNavigator_DragLeaveEvent_Callback(KUrlNavigator_DragLeaveEvent_Callback cb) { kurlnavigator_dragleaveevent_callback = cb; }
    inline void setKUrlNavigator_DropEvent_Callback(KUrlNavigator_DropEvent_Callback cb) { kurlnavigator_dropevent_callback = cb; }
    inline void setKUrlNavigator_HideEvent_Callback(KUrlNavigator_HideEvent_Callback cb) { kurlnavigator_hideevent_callback = cb; }
    inline void setKUrlNavigator_NativeEvent_Callback(KUrlNavigator_NativeEvent_Callback cb) { kurlnavigator_nativeevent_callback = cb; }
    inline void setKUrlNavigator_ChangeEvent_Callback(KUrlNavigator_ChangeEvent_Callback cb) { kurlnavigator_changeevent_callback = cb; }
    inline void setKUrlNavigator_Metric_Callback(KUrlNavigator_Metric_Callback cb) { kurlnavigator_metric_callback = cb; }
    inline void setKUrlNavigator_InitPainter_Callback(KUrlNavigator_InitPainter_Callback cb) { kurlnavigator_initpainter_callback = cb; }
    inline void setKUrlNavigator_Redirected_Callback(KUrlNavigator_Redirected_Callback cb) { kurlnavigator_redirected_callback = cb; }
    inline void setKUrlNavigator_SharedPainter_Callback(KUrlNavigator_SharedPainter_Callback cb) { kurlnavigator_sharedpainter_callback = cb; }
    inline void setKUrlNavigator_InputMethodEvent_Callback(KUrlNavigator_InputMethodEvent_Callback cb) { kurlnavigator_inputmethodevent_callback = cb; }
    inline void setKUrlNavigator_InputMethodQuery_Callback(KUrlNavigator_InputMethodQuery_Callback cb) { kurlnavigator_inputmethodquery_callback = cb; }
    inline void setKUrlNavigator_FocusNextPrevChild_Callback(KUrlNavigator_FocusNextPrevChild_Callback cb) { kurlnavigator_focusnextprevchild_callback = cb; }
    inline void setKUrlNavigator_TimerEvent_Callback(KUrlNavigator_TimerEvent_Callback cb) { kurlnavigator_timerevent_callback = cb; }
    inline void setKUrlNavigator_ChildEvent_Callback(KUrlNavigator_ChildEvent_Callback cb) { kurlnavigator_childevent_callback = cb; }
    inline void setKUrlNavigator_CustomEvent_Callback(KUrlNavigator_CustomEvent_Callback cb) { kurlnavigator_customevent_callback = cb; }
    inline void setKUrlNavigator_ConnectNotify_Callback(KUrlNavigator_ConnectNotify_Callback cb) { kurlnavigator_connectnotify_callback = cb; }
    inline void setKUrlNavigator_DisconnectNotify_Callback(KUrlNavigator_DisconnectNotify_Callback cb) { kurlnavigator_disconnectnotify_callback = cb; }
    inline void setKUrlNavigator_UpdateMicroFocus_Callback(KUrlNavigator_UpdateMicroFocus_Callback cb) { kurlnavigator_updatemicrofocus_callback = cb; }
    inline void setKUrlNavigator_Create_Callback(KUrlNavigator_Create_Callback cb) { kurlnavigator_create_callback = cb; }
    inline void setKUrlNavigator_Destroy_Callback(KUrlNavigator_Destroy_Callback cb) { kurlnavigator_destroy_callback = cb; }
    inline void setKUrlNavigator_FocusNextChild_Callback(KUrlNavigator_FocusNextChild_Callback cb) { kurlnavigator_focusnextchild_callback = cb; }
    inline void setKUrlNavigator_FocusPreviousChild_Callback(KUrlNavigator_FocusPreviousChild_Callback cb) { kurlnavigator_focuspreviouschild_callback = cb; }
    inline void setKUrlNavigator_Sender_Callback(KUrlNavigator_Sender_Callback cb) { kurlnavigator_sender_callback = cb; }
    inline void setKUrlNavigator_SenderSignalIndex_Callback(KUrlNavigator_SenderSignalIndex_Callback cb) { kurlnavigator_sendersignalindex_callback = cb; }
    inline void setKUrlNavigator_Receivers_Callback(KUrlNavigator_Receivers_Callback cb) { kurlnavigator_receivers_callback = cb; }
    inline void setKUrlNavigator_IsSignalConnected_Callback(KUrlNavigator_IsSignalConnected_Callback cb) { kurlnavigator_issignalconnected_callback = cb; }
    inline void setKUrlNavigator_GetDecodedMetricF_Callback(KUrlNavigator_GetDecodedMetricF_Callback cb) { kurlnavigator_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKUrlNavigator_Metacall_IsBase(bool value) const { kurlnavigator_metacall_isbase = value; }
    inline void setKUrlNavigator_KeyPressEvent_IsBase(bool value) const { kurlnavigator_keypressevent_isbase = value; }
    inline void setKUrlNavigator_KeyReleaseEvent_IsBase(bool value) const { kurlnavigator_keyreleaseevent_isbase = value; }
    inline void setKUrlNavigator_MouseReleaseEvent_IsBase(bool value) const { kurlnavigator_mousereleaseevent_isbase = value; }
    inline void setKUrlNavigator_MousePressEvent_IsBase(bool value) const { kurlnavigator_mousepressevent_isbase = value; }
    inline void setKUrlNavigator_ResizeEvent_IsBase(bool value) const { kurlnavigator_resizeevent_isbase = value; }
    inline void setKUrlNavigator_WheelEvent_IsBase(bool value) const { kurlnavigator_wheelevent_isbase = value; }
    inline void setKUrlNavigator_ShowEvent_IsBase(bool value) const { kurlnavigator_showevent_isbase = value; }
    inline void setKUrlNavigator_EventFilter_IsBase(bool value) const { kurlnavigator_eventfilter_isbase = value; }
    inline void setKUrlNavigator_PaintEvent_IsBase(bool value) const { kurlnavigator_paintevent_isbase = value; }
    inline void setKUrlNavigator_DevType_IsBase(bool value) const { kurlnavigator_devtype_isbase = value; }
    inline void setKUrlNavigator_SetVisible_IsBase(bool value) const { kurlnavigator_setvisible_isbase = value; }
    inline void setKUrlNavigator_SizeHint_IsBase(bool value) const { kurlnavigator_sizehint_isbase = value; }
    inline void setKUrlNavigator_MinimumSizeHint_IsBase(bool value) const { kurlnavigator_minimumsizehint_isbase = value; }
    inline void setKUrlNavigator_HeightForWidth_IsBase(bool value) const { kurlnavigator_heightforwidth_isbase = value; }
    inline void setKUrlNavigator_HasHeightForWidth_IsBase(bool value) const { kurlnavigator_hasheightforwidth_isbase = value; }
    inline void setKUrlNavigator_PaintEngine_IsBase(bool value) const { kurlnavigator_paintengine_isbase = value; }
    inline void setKUrlNavigator_Event_IsBase(bool value) const { kurlnavigator_event_isbase = value; }
    inline void setKUrlNavigator_MouseDoubleClickEvent_IsBase(bool value) const { kurlnavigator_mousedoubleclickevent_isbase = value; }
    inline void setKUrlNavigator_MouseMoveEvent_IsBase(bool value) const { kurlnavigator_mousemoveevent_isbase = value; }
    inline void setKUrlNavigator_FocusInEvent_IsBase(bool value) const { kurlnavigator_focusinevent_isbase = value; }
    inline void setKUrlNavigator_FocusOutEvent_IsBase(bool value) const { kurlnavigator_focusoutevent_isbase = value; }
    inline void setKUrlNavigator_EnterEvent_IsBase(bool value) const { kurlnavigator_enterevent_isbase = value; }
    inline void setKUrlNavigator_LeaveEvent_IsBase(bool value) const { kurlnavigator_leaveevent_isbase = value; }
    inline void setKUrlNavigator_MoveEvent_IsBase(bool value) const { kurlnavigator_moveevent_isbase = value; }
    inline void setKUrlNavigator_CloseEvent_IsBase(bool value) const { kurlnavigator_closeevent_isbase = value; }
    inline void setKUrlNavigator_ContextMenuEvent_IsBase(bool value) const { kurlnavigator_contextmenuevent_isbase = value; }
    inline void setKUrlNavigator_TabletEvent_IsBase(bool value) const { kurlnavigator_tabletevent_isbase = value; }
    inline void setKUrlNavigator_ActionEvent_IsBase(bool value) const { kurlnavigator_actionevent_isbase = value; }
    inline void setKUrlNavigator_DragEnterEvent_IsBase(bool value) const { kurlnavigator_dragenterevent_isbase = value; }
    inline void setKUrlNavigator_DragMoveEvent_IsBase(bool value) const { kurlnavigator_dragmoveevent_isbase = value; }
    inline void setKUrlNavigator_DragLeaveEvent_IsBase(bool value) const { kurlnavigator_dragleaveevent_isbase = value; }
    inline void setKUrlNavigator_DropEvent_IsBase(bool value) const { kurlnavigator_dropevent_isbase = value; }
    inline void setKUrlNavigator_HideEvent_IsBase(bool value) const { kurlnavigator_hideevent_isbase = value; }
    inline void setKUrlNavigator_NativeEvent_IsBase(bool value) const { kurlnavigator_nativeevent_isbase = value; }
    inline void setKUrlNavigator_ChangeEvent_IsBase(bool value) const { kurlnavigator_changeevent_isbase = value; }
    inline void setKUrlNavigator_Metric_IsBase(bool value) const { kurlnavigator_metric_isbase = value; }
    inline void setKUrlNavigator_InitPainter_IsBase(bool value) const { kurlnavigator_initpainter_isbase = value; }
    inline void setKUrlNavigator_Redirected_IsBase(bool value) const { kurlnavigator_redirected_isbase = value; }
    inline void setKUrlNavigator_SharedPainter_IsBase(bool value) const { kurlnavigator_sharedpainter_isbase = value; }
    inline void setKUrlNavigator_InputMethodEvent_IsBase(bool value) const { kurlnavigator_inputmethodevent_isbase = value; }
    inline void setKUrlNavigator_InputMethodQuery_IsBase(bool value) const { kurlnavigator_inputmethodquery_isbase = value; }
    inline void setKUrlNavigator_FocusNextPrevChild_IsBase(bool value) const { kurlnavigator_focusnextprevchild_isbase = value; }
    inline void setKUrlNavigator_TimerEvent_IsBase(bool value) const { kurlnavigator_timerevent_isbase = value; }
    inline void setKUrlNavigator_ChildEvent_IsBase(bool value) const { kurlnavigator_childevent_isbase = value; }
    inline void setKUrlNavigator_CustomEvent_IsBase(bool value) const { kurlnavigator_customevent_isbase = value; }
    inline void setKUrlNavigator_ConnectNotify_IsBase(bool value) const { kurlnavigator_connectnotify_isbase = value; }
    inline void setKUrlNavigator_DisconnectNotify_IsBase(bool value) const { kurlnavigator_disconnectnotify_isbase = value; }
    inline void setKUrlNavigator_UpdateMicroFocus_IsBase(bool value) const { kurlnavigator_updatemicrofocus_isbase = value; }
    inline void setKUrlNavigator_Create_IsBase(bool value) const { kurlnavigator_create_isbase = value; }
    inline void setKUrlNavigator_Destroy_IsBase(bool value) const { kurlnavigator_destroy_isbase = value; }
    inline void setKUrlNavigator_FocusNextChild_IsBase(bool value) const { kurlnavigator_focusnextchild_isbase = value; }
    inline void setKUrlNavigator_FocusPreviousChild_IsBase(bool value) const { kurlnavigator_focuspreviouschild_isbase = value; }
    inline void setKUrlNavigator_Sender_IsBase(bool value) const { kurlnavigator_sender_isbase = value; }
    inline void setKUrlNavigator_SenderSignalIndex_IsBase(bool value) const { kurlnavigator_sendersignalindex_isbase = value; }
    inline void setKUrlNavigator_Receivers_IsBase(bool value) const { kurlnavigator_receivers_isbase = value; }
    inline void setKUrlNavigator_IsSignalConnected_IsBase(bool value) const { kurlnavigator_issignalconnected_isbase = value; }
    inline void setKUrlNavigator_GetDecodedMetricF_IsBase(bool value) const { kurlnavigator_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kurlnavigator_metacall_isbase) {
            kurlnavigator_metacall_isbase = false;
            return KUrlNavigator::qt_metacall(param1, param2, param3);
        } else if (kurlnavigator_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kurlnavigator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KUrlNavigator::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kurlnavigator_keypressevent_isbase) {
            kurlnavigator_keypressevent_isbase = false;
            KUrlNavigator::keyPressEvent(event);
        } else if (kurlnavigator_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kurlnavigator_keypressevent_callback(this, cbval1);
        } else {
            KUrlNavigator::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kurlnavigator_keyreleaseevent_isbase) {
            kurlnavigator_keyreleaseevent_isbase = false;
            KUrlNavigator::keyReleaseEvent(event);
        } else if (kurlnavigator_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kurlnavigator_keyreleaseevent_callback(this, cbval1);
        } else {
            KUrlNavigator::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kurlnavigator_mousereleaseevent_isbase) {
            kurlnavigator_mousereleaseevent_isbase = false;
            KUrlNavigator::mouseReleaseEvent(event);
        } else if (kurlnavigator_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kurlnavigator_mousereleaseevent_callback(this, cbval1);
        } else {
            KUrlNavigator::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kurlnavigator_mousepressevent_isbase) {
            kurlnavigator_mousepressevent_isbase = false;
            KUrlNavigator::mousePressEvent(event);
        } else if (kurlnavigator_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kurlnavigator_mousepressevent_callback(this, cbval1);
        } else {
            KUrlNavigator::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kurlnavigator_resizeevent_isbase) {
            kurlnavigator_resizeevent_isbase = false;
            KUrlNavigator::resizeEvent(event);
        } else if (kurlnavigator_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kurlnavigator_resizeevent_callback(this, cbval1);
        } else {
            KUrlNavigator::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kurlnavigator_wheelevent_isbase) {
            kurlnavigator_wheelevent_isbase = false;
            KUrlNavigator::wheelEvent(event);
        } else if (kurlnavigator_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kurlnavigator_wheelevent_callback(this, cbval1);
        } else {
            KUrlNavigator::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kurlnavigator_showevent_isbase) {
            kurlnavigator_showevent_isbase = false;
            KUrlNavigator::showEvent(event);
        } else if (kurlnavigator_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kurlnavigator_showevent_callback(this, cbval1);
        } else {
            KUrlNavigator::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kurlnavigator_eventfilter_isbase) {
            kurlnavigator_eventfilter_isbase = false;
            return KUrlNavigator::eventFilter(watched, event);
        } else if (kurlnavigator_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kurlnavigator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KUrlNavigator::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kurlnavigator_paintevent_isbase) {
            kurlnavigator_paintevent_isbase = false;
            KUrlNavigator::paintEvent(event);
        } else if (kurlnavigator_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kurlnavigator_paintevent_callback(this, cbval1);
        } else {
            KUrlNavigator::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kurlnavigator_devtype_isbase) {
            kurlnavigator_devtype_isbase = false;
            return KUrlNavigator::devType();
        } else if (kurlnavigator_devtype_callback != nullptr) {
            int callback_ret = kurlnavigator_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KUrlNavigator::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kurlnavigator_setvisible_isbase) {
            kurlnavigator_setvisible_isbase = false;
            KUrlNavigator::setVisible(visible);
        } else if (kurlnavigator_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kurlnavigator_setvisible_callback(this, cbval1);
        } else {
            KUrlNavigator::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kurlnavigator_sizehint_isbase) {
            kurlnavigator_sizehint_isbase = false;
            return KUrlNavigator::sizeHint();
        } else if (kurlnavigator_sizehint_callback != nullptr) {
            QSize* callback_ret = kurlnavigator_sizehint_callback();
            return *callback_ret;
        } else {
            return KUrlNavigator::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kurlnavigator_minimumsizehint_isbase) {
            kurlnavigator_minimumsizehint_isbase = false;
            return KUrlNavigator::minimumSizeHint();
        } else if (kurlnavigator_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kurlnavigator_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KUrlNavigator::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kurlnavigator_heightforwidth_isbase) {
            kurlnavigator_heightforwidth_isbase = false;
            return KUrlNavigator::heightForWidth(param1);
        } else if (kurlnavigator_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kurlnavigator_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KUrlNavigator::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kurlnavigator_hasheightforwidth_isbase) {
            kurlnavigator_hasheightforwidth_isbase = false;
            return KUrlNavigator::hasHeightForWidth();
        } else if (kurlnavigator_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kurlnavigator_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KUrlNavigator::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kurlnavigator_paintengine_isbase) {
            kurlnavigator_paintengine_isbase = false;
            return KUrlNavigator::paintEngine();
        } else if (kurlnavigator_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kurlnavigator_paintengine_callback();
            return callback_ret;
        } else {
            return KUrlNavigator::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kurlnavigator_event_isbase) {
            kurlnavigator_event_isbase = false;
            return KUrlNavigator::event(event);
        } else if (kurlnavigator_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kurlnavigator_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUrlNavigator::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kurlnavigator_mousedoubleclickevent_isbase) {
            kurlnavigator_mousedoubleclickevent_isbase = false;
            KUrlNavigator::mouseDoubleClickEvent(event);
        } else if (kurlnavigator_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kurlnavigator_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KUrlNavigator::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kurlnavigator_mousemoveevent_isbase) {
            kurlnavigator_mousemoveevent_isbase = false;
            KUrlNavigator::mouseMoveEvent(event);
        } else if (kurlnavigator_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kurlnavigator_mousemoveevent_callback(this, cbval1);
        } else {
            KUrlNavigator::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kurlnavigator_focusinevent_isbase) {
            kurlnavigator_focusinevent_isbase = false;
            KUrlNavigator::focusInEvent(event);
        } else if (kurlnavigator_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kurlnavigator_focusinevent_callback(this, cbval1);
        } else {
            KUrlNavigator::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kurlnavigator_focusoutevent_isbase) {
            kurlnavigator_focusoutevent_isbase = false;
            KUrlNavigator::focusOutEvent(event);
        } else if (kurlnavigator_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kurlnavigator_focusoutevent_callback(this, cbval1);
        } else {
            KUrlNavigator::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kurlnavigator_enterevent_isbase) {
            kurlnavigator_enterevent_isbase = false;
            KUrlNavigator::enterEvent(event);
        } else if (kurlnavigator_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kurlnavigator_enterevent_callback(this, cbval1);
        } else {
            KUrlNavigator::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kurlnavigator_leaveevent_isbase) {
            kurlnavigator_leaveevent_isbase = false;
            KUrlNavigator::leaveEvent(event);
        } else if (kurlnavigator_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kurlnavigator_leaveevent_callback(this, cbval1);
        } else {
            KUrlNavigator::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kurlnavigator_moveevent_isbase) {
            kurlnavigator_moveevent_isbase = false;
            KUrlNavigator::moveEvent(event);
        } else if (kurlnavigator_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kurlnavigator_moveevent_callback(this, cbval1);
        } else {
            KUrlNavigator::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kurlnavigator_closeevent_isbase) {
            kurlnavigator_closeevent_isbase = false;
            KUrlNavigator::closeEvent(event);
        } else if (kurlnavigator_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kurlnavigator_closeevent_callback(this, cbval1);
        } else {
            KUrlNavigator::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kurlnavigator_contextmenuevent_isbase) {
            kurlnavigator_contextmenuevent_isbase = false;
            KUrlNavigator::contextMenuEvent(event);
        } else if (kurlnavigator_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kurlnavigator_contextmenuevent_callback(this, cbval1);
        } else {
            KUrlNavigator::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kurlnavigator_tabletevent_isbase) {
            kurlnavigator_tabletevent_isbase = false;
            KUrlNavigator::tabletEvent(event);
        } else if (kurlnavigator_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kurlnavigator_tabletevent_callback(this, cbval1);
        } else {
            KUrlNavigator::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kurlnavigator_actionevent_isbase) {
            kurlnavigator_actionevent_isbase = false;
            KUrlNavigator::actionEvent(event);
        } else if (kurlnavigator_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kurlnavigator_actionevent_callback(this, cbval1);
        } else {
            KUrlNavigator::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kurlnavigator_dragenterevent_isbase) {
            kurlnavigator_dragenterevent_isbase = false;
            KUrlNavigator::dragEnterEvent(event);
        } else if (kurlnavigator_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kurlnavigator_dragenterevent_callback(this, cbval1);
        } else {
            KUrlNavigator::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kurlnavigator_dragmoveevent_isbase) {
            kurlnavigator_dragmoveevent_isbase = false;
            KUrlNavigator::dragMoveEvent(event);
        } else if (kurlnavigator_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kurlnavigator_dragmoveevent_callback(this, cbval1);
        } else {
            KUrlNavigator::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kurlnavigator_dragleaveevent_isbase) {
            kurlnavigator_dragleaveevent_isbase = false;
            KUrlNavigator::dragLeaveEvent(event);
        } else if (kurlnavigator_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kurlnavigator_dragleaveevent_callback(this, cbval1);
        } else {
            KUrlNavigator::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kurlnavigator_dropevent_isbase) {
            kurlnavigator_dropevent_isbase = false;
            KUrlNavigator::dropEvent(event);
        } else if (kurlnavigator_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kurlnavigator_dropevent_callback(this, cbval1);
        } else {
            KUrlNavigator::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kurlnavigator_hideevent_isbase) {
            kurlnavigator_hideevent_isbase = false;
            KUrlNavigator::hideEvent(event);
        } else if (kurlnavigator_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kurlnavigator_hideevent_callback(this, cbval1);
        } else {
            KUrlNavigator::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kurlnavigator_nativeevent_isbase) {
            kurlnavigator_nativeevent_isbase = false;
            return KUrlNavigator::nativeEvent(eventType, message, result);
        } else if (kurlnavigator_nativeevent_callback != nullptr) {
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

            bool callback_ret = kurlnavigator_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KUrlNavigator::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kurlnavigator_changeevent_isbase) {
            kurlnavigator_changeevent_isbase = false;
            KUrlNavigator::changeEvent(param1);
        } else if (kurlnavigator_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kurlnavigator_changeevent_callback(this, cbval1);
        } else {
            KUrlNavigator::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kurlnavigator_metric_isbase) {
            kurlnavigator_metric_isbase = false;
            return KUrlNavigator::metric(param1);
        } else if (kurlnavigator_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kurlnavigator_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KUrlNavigator::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kurlnavigator_initpainter_isbase) {
            kurlnavigator_initpainter_isbase = false;
            KUrlNavigator::initPainter(painter);
        } else if (kurlnavigator_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kurlnavigator_initpainter_callback(this, cbval1);
        } else {
            KUrlNavigator::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kurlnavigator_redirected_isbase) {
            kurlnavigator_redirected_isbase = false;
            return KUrlNavigator::redirected(offset);
        } else if (kurlnavigator_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kurlnavigator_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUrlNavigator::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kurlnavigator_sharedpainter_isbase) {
            kurlnavigator_sharedpainter_isbase = false;
            return KUrlNavigator::sharedPainter();
        } else if (kurlnavigator_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kurlnavigator_sharedpainter_callback();
            return callback_ret;
        } else {
            return KUrlNavigator::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kurlnavigator_inputmethodevent_isbase) {
            kurlnavigator_inputmethodevent_isbase = false;
            KUrlNavigator::inputMethodEvent(param1);
        } else if (kurlnavigator_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kurlnavigator_inputmethodevent_callback(this, cbval1);
        } else {
            KUrlNavigator::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kurlnavigator_inputmethodquery_isbase) {
            kurlnavigator_inputmethodquery_isbase = false;
            return KUrlNavigator::inputMethodQuery(param1);
        } else if (kurlnavigator_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kurlnavigator_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KUrlNavigator::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kurlnavigator_focusnextprevchild_isbase) {
            kurlnavigator_focusnextprevchild_isbase = false;
            return KUrlNavigator::focusNextPrevChild(next);
        } else if (kurlnavigator_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kurlnavigator_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUrlNavigator::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kurlnavigator_timerevent_isbase) {
            kurlnavigator_timerevent_isbase = false;
            KUrlNavigator::timerEvent(event);
        } else if (kurlnavigator_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kurlnavigator_timerevent_callback(this, cbval1);
        } else {
            KUrlNavigator::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kurlnavigator_childevent_isbase) {
            kurlnavigator_childevent_isbase = false;
            KUrlNavigator::childEvent(event);
        } else if (kurlnavigator_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kurlnavigator_childevent_callback(this, cbval1);
        } else {
            KUrlNavigator::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kurlnavigator_customevent_isbase) {
            kurlnavigator_customevent_isbase = false;
            KUrlNavigator::customEvent(event);
        } else if (kurlnavigator_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kurlnavigator_customevent_callback(this, cbval1);
        } else {
            KUrlNavigator::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kurlnavigator_connectnotify_isbase) {
            kurlnavigator_connectnotify_isbase = false;
            KUrlNavigator::connectNotify(signal);
        } else if (kurlnavigator_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kurlnavigator_connectnotify_callback(this, cbval1);
        } else {
            KUrlNavigator::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kurlnavigator_disconnectnotify_isbase) {
            kurlnavigator_disconnectnotify_isbase = false;
            KUrlNavigator::disconnectNotify(signal);
        } else if (kurlnavigator_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kurlnavigator_disconnectnotify_callback(this, cbval1);
        } else {
            KUrlNavigator::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kurlnavigator_updatemicrofocus_isbase) {
            kurlnavigator_updatemicrofocus_isbase = false;
            KUrlNavigator::updateMicroFocus();
        } else if (kurlnavigator_updatemicrofocus_callback != nullptr) {
            kurlnavigator_updatemicrofocus_callback();
        } else {
            KUrlNavigator::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kurlnavigator_create_isbase) {
            kurlnavigator_create_isbase = false;
            KUrlNavigator::create();
        } else if (kurlnavigator_create_callback != nullptr) {
            kurlnavigator_create_callback();
        } else {
            KUrlNavigator::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kurlnavigator_destroy_isbase) {
            kurlnavigator_destroy_isbase = false;
            KUrlNavigator::destroy();
        } else if (kurlnavigator_destroy_callback != nullptr) {
            kurlnavigator_destroy_callback();
        } else {
            KUrlNavigator::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kurlnavigator_focusnextchild_isbase) {
            kurlnavigator_focusnextchild_isbase = false;
            return KUrlNavigator::focusNextChild();
        } else if (kurlnavigator_focusnextchild_callback != nullptr) {
            bool callback_ret = kurlnavigator_focusnextchild_callback();
            return callback_ret;
        } else {
            return KUrlNavigator::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kurlnavigator_focuspreviouschild_isbase) {
            kurlnavigator_focuspreviouschild_isbase = false;
            return KUrlNavigator::focusPreviousChild();
        } else if (kurlnavigator_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kurlnavigator_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KUrlNavigator::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kurlnavigator_sender_isbase) {
            kurlnavigator_sender_isbase = false;
            return KUrlNavigator::sender();
        } else if (kurlnavigator_sender_callback != nullptr) {
            QObject* callback_ret = kurlnavigator_sender_callback();
            return callback_ret;
        } else {
            return KUrlNavigator::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kurlnavigator_sendersignalindex_isbase) {
            kurlnavigator_sendersignalindex_isbase = false;
            return KUrlNavigator::senderSignalIndex();
        } else if (kurlnavigator_sendersignalindex_callback != nullptr) {
            int callback_ret = kurlnavigator_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KUrlNavigator::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kurlnavigator_receivers_isbase) {
            kurlnavigator_receivers_isbase = false;
            return KUrlNavigator::receivers(signal);
        } else if (kurlnavigator_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kurlnavigator_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KUrlNavigator::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kurlnavigator_issignalconnected_isbase) {
            kurlnavigator_issignalconnected_isbase = false;
            return KUrlNavigator::isSignalConnected(signal);
        } else if (kurlnavigator_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kurlnavigator_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUrlNavigator::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kurlnavigator_getdecodedmetricf_isbase) {
            kurlnavigator_getdecodedmetricf_isbase = false;
            return KUrlNavigator::getDecodedMetricF(metricA, metricB);
        } else if (kurlnavigator_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kurlnavigator_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KUrlNavigator::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KUrlNavigator_KeyPressEvent(KUrlNavigator* self, QKeyEvent* event);
    friend void KUrlNavigator_QBaseKeyPressEvent(KUrlNavigator* self, QKeyEvent* event);
    friend void KUrlNavigator_KeyReleaseEvent(KUrlNavigator* self, QKeyEvent* event);
    friend void KUrlNavigator_QBaseKeyReleaseEvent(KUrlNavigator* self, QKeyEvent* event);
    friend void KUrlNavigator_MouseReleaseEvent(KUrlNavigator* self, QMouseEvent* event);
    friend void KUrlNavigator_QBaseMouseReleaseEvent(KUrlNavigator* self, QMouseEvent* event);
    friend void KUrlNavigator_MousePressEvent(KUrlNavigator* self, QMouseEvent* event);
    friend void KUrlNavigator_QBaseMousePressEvent(KUrlNavigator* self, QMouseEvent* event);
    friend void KUrlNavigator_ResizeEvent(KUrlNavigator* self, QResizeEvent* event);
    friend void KUrlNavigator_QBaseResizeEvent(KUrlNavigator* self, QResizeEvent* event);
    friend void KUrlNavigator_WheelEvent(KUrlNavigator* self, QWheelEvent* event);
    friend void KUrlNavigator_QBaseWheelEvent(KUrlNavigator* self, QWheelEvent* event);
    friend void KUrlNavigator_ShowEvent(KUrlNavigator* self, QShowEvent* event);
    friend void KUrlNavigator_QBaseShowEvent(KUrlNavigator* self, QShowEvent* event);
    friend bool KUrlNavigator_EventFilter(KUrlNavigator* self, QObject* watched, QEvent* event);
    friend bool KUrlNavigator_QBaseEventFilter(KUrlNavigator* self, QObject* watched, QEvent* event);
    friend void KUrlNavigator_PaintEvent(KUrlNavigator* self, QPaintEvent* event);
    friend void KUrlNavigator_QBasePaintEvent(KUrlNavigator* self, QPaintEvent* event);
    friend bool KUrlNavigator_Event(KUrlNavigator* self, QEvent* event);
    friend bool KUrlNavigator_QBaseEvent(KUrlNavigator* self, QEvent* event);
    friend void KUrlNavigator_MouseDoubleClickEvent(KUrlNavigator* self, QMouseEvent* event);
    friend void KUrlNavigator_QBaseMouseDoubleClickEvent(KUrlNavigator* self, QMouseEvent* event);
    friend void KUrlNavigator_MouseMoveEvent(KUrlNavigator* self, QMouseEvent* event);
    friend void KUrlNavigator_QBaseMouseMoveEvent(KUrlNavigator* self, QMouseEvent* event);
    friend void KUrlNavigator_FocusInEvent(KUrlNavigator* self, QFocusEvent* event);
    friend void KUrlNavigator_QBaseFocusInEvent(KUrlNavigator* self, QFocusEvent* event);
    friend void KUrlNavigator_FocusOutEvent(KUrlNavigator* self, QFocusEvent* event);
    friend void KUrlNavigator_QBaseFocusOutEvent(KUrlNavigator* self, QFocusEvent* event);
    friend void KUrlNavigator_EnterEvent(KUrlNavigator* self, QEnterEvent* event);
    friend void KUrlNavigator_QBaseEnterEvent(KUrlNavigator* self, QEnterEvent* event);
    friend void KUrlNavigator_LeaveEvent(KUrlNavigator* self, QEvent* event);
    friend void KUrlNavigator_QBaseLeaveEvent(KUrlNavigator* self, QEvent* event);
    friend void KUrlNavigator_MoveEvent(KUrlNavigator* self, QMoveEvent* event);
    friend void KUrlNavigator_QBaseMoveEvent(KUrlNavigator* self, QMoveEvent* event);
    friend void KUrlNavigator_CloseEvent(KUrlNavigator* self, QCloseEvent* event);
    friend void KUrlNavigator_QBaseCloseEvent(KUrlNavigator* self, QCloseEvent* event);
    friend void KUrlNavigator_ContextMenuEvent(KUrlNavigator* self, QContextMenuEvent* event);
    friend void KUrlNavigator_QBaseContextMenuEvent(KUrlNavigator* self, QContextMenuEvent* event);
    friend void KUrlNavigator_TabletEvent(KUrlNavigator* self, QTabletEvent* event);
    friend void KUrlNavigator_QBaseTabletEvent(KUrlNavigator* self, QTabletEvent* event);
    friend void KUrlNavigator_ActionEvent(KUrlNavigator* self, QActionEvent* event);
    friend void KUrlNavigator_QBaseActionEvent(KUrlNavigator* self, QActionEvent* event);
    friend void KUrlNavigator_DragEnterEvent(KUrlNavigator* self, QDragEnterEvent* event);
    friend void KUrlNavigator_QBaseDragEnterEvent(KUrlNavigator* self, QDragEnterEvent* event);
    friend void KUrlNavigator_DragMoveEvent(KUrlNavigator* self, QDragMoveEvent* event);
    friend void KUrlNavigator_QBaseDragMoveEvent(KUrlNavigator* self, QDragMoveEvent* event);
    friend void KUrlNavigator_DragLeaveEvent(KUrlNavigator* self, QDragLeaveEvent* event);
    friend void KUrlNavigator_QBaseDragLeaveEvent(KUrlNavigator* self, QDragLeaveEvent* event);
    friend void KUrlNavigator_DropEvent(KUrlNavigator* self, QDropEvent* event);
    friend void KUrlNavigator_QBaseDropEvent(KUrlNavigator* self, QDropEvent* event);
    friend void KUrlNavigator_HideEvent(KUrlNavigator* self, QHideEvent* event);
    friend void KUrlNavigator_QBaseHideEvent(KUrlNavigator* self, QHideEvent* event);
    friend bool KUrlNavigator_NativeEvent(KUrlNavigator* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KUrlNavigator_QBaseNativeEvent(KUrlNavigator* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KUrlNavigator_ChangeEvent(KUrlNavigator* self, QEvent* param1);
    friend void KUrlNavigator_QBaseChangeEvent(KUrlNavigator* self, QEvent* param1);
    friend int KUrlNavigator_Metric(const KUrlNavigator* self, int param1);
    friend int KUrlNavigator_QBaseMetric(const KUrlNavigator* self, int param1);
    friend void KUrlNavigator_InitPainter(const KUrlNavigator* self, QPainter* painter);
    friend void KUrlNavigator_QBaseInitPainter(const KUrlNavigator* self, QPainter* painter);
    friend QPaintDevice* KUrlNavigator_Redirected(const KUrlNavigator* self, QPoint* offset);
    friend QPaintDevice* KUrlNavigator_QBaseRedirected(const KUrlNavigator* self, QPoint* offset);
    friend QPainter* KUrlNavigator_SharedPainter(const KUrlNavigator* self);
    friend QPainter* KUrlNavigator_QBaseSharedPainter(const KUrlNavigator* self);
    friend void KUrlNavigator_InputMethodEvent(KUrlNavigator* self, QInputMethodEvent* param1);
    friend void KUrlNavigator_QBaseInputMethodEvent(KUrlNavigator* self, QInputMethodEvent* param1);
    friend bool KUrlNavigator_FocusNextPrevChild(KUrlNavigator* self, bool next);
    friend bool KUrlNavigator_QBaseFocusNextPrevChild(KUrlNavigator* self, bool next);
    friend void KUrlNavigator_TimerEvent(KUrlNavigator* self, QTimerEvent* event);
    friend void KUrlNavigator_QBaseTimerEvent(KUrlNavigator* self, QTimerEvent* event);
    friend void KUrlNavigator_ChildEvent(KUrlNavigator* self, QChildEvent* event);
    friend void KUrlNavigator_QBaseChildEvent(KUrlNavigator* self, QChildEvent* event);
    friend void KUrlNavigator_CustomEvent(KUrlNavigator* self, QEvent* event);
    friend void KUrlNavigator_QBaseCustomEvent(KUrlNavigator* self, QEvent* event);
    friend void KUrlNavigator_ConnectNotify(KUrlNavigator* self, const QMetaMethod* signal);
    friend void KUrlNavigator_QBaseConnectNotify(KUrlNavigator* self, const QMetaMethod* signal);
    friend void KUrlNavigator_DisconnectNotify(KUrlNavigator* self, const QMetaMethod* signal);
    friend void KUrlNavigator_QBaseDisconnectNotify(KUrlNavigator* self, const QMetaMethod* signal);
    friend void KUrlNavigator_UpdateMicroFocus(KUrlNavigator* self);
    friend void KUrlNavigator_QBaseUpdateMicroFocus(KUrlNavigator* self);
    friend void KUrlNavigator_Create(KUrlNavigator* self);
    friend void KUrlNavigator_QBaseCreate(KUrlNavigator* self);
    friend void KUrlNavigator_Destroy(KUrlNavigator* self);
    friend void KUrlNavigator_QBaseDestroy(KUrlNavigator* self);
    friend bool KUrlNavigator_FocusNextChild(KUrlNavigator* self);
    friend bool KUrlNavigator_QBaseFocusNextChild(KUrlNavigator* self);
    friend bool KUrlNavigator_FocusPreviousChild(KUrlNavigator* self);
    friend bool KUrlNavigator_QBaseFocusPreviousChild(KUrlNavigator* self);
    friend QObject* KUrlNavigator_Sender(const KUrlNavigator* self);
    friend QObject* KUrlNavigator_QBaseSender(const KUrlNavigator* self);
    friend int KUrlNavigator_SenderSignalIndex(const KUrlNavigator* self);
    friend int KUrlNavigator_QBaseSenderSignalIndex(const KUrlNavigator* self);
    friend int KUrlNavigator_Receivers(const KUrlNavigator* self, const char* signal);
    friend int KUrlNavigator_QBaseReceivers(const KUrlNavigator* self, const char* signal);
    friend bool KUrlNavigator_IsSignalConnected(const KUrlNavigator* self, const QMetaMethod* signal);
    friend bool KUrlNavigator_QBaseIsSignalConnected(const KUrlNavigator* self, const QMetaMethod* signal);
    friend double KUrlNavigator_GetDecodedMetricF(const KUrlNavigator* self, int metricA, int metricB);
    friend double KUrlNavigator_QBaseGetDecodedMetricF(const KUrlNavigator* self, int metricA, int metricB);
};

#endif
