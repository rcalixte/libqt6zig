#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKFONTCHOOSER_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKFONTCHOOSER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFontChooser so that we can call protected methods
class VirtualKFontChooser final : public KFontChooser {

  public:
    // Virtual class boolean flag
    bool isVirtualKFontChooser = true;

    // Virtual class public types (including callbacks)
    using KFontChooser_Metacall_Callback = int (*)(KFontChooser*, int, int, void**);
    using KFontChooser_SizeHint_Callback = QSize* (*)();
    using KFontChooser_DevType_Callback = int (*)();
    using KFontChooser_SetVisible_Callback = void (*)(KFontChooser*, bool);
    using KFontChooser_MinimumSizeHint_Callback = QSize* (*)();
    using KFontChooser_HeightForWidth_Callback = int (*)(const KFontChooser*, int);
    using KFontChooser_HasHeightForWidth_Callback = bool (*)();
    using KFontChooser_PaintEngine_Callback = QPaintEngine* (*)();
    using KFontChooser_Event_Callback = bool (*)(KFontChooser*, QEvent*);
    using KFontChooser_MousePressEvent_Callback = void (*)(KFontChooser*, QMouseEvent*);
    using KFontChooser_MouseReleaseEvent_Callback = void (*)(KFontChooser*, QMouseEvent*);
    using KFontChooser_MouseDoubleClickEvent_Callback = void (*)(KFontChooser*, QMouseEvent*);
    using KFontChooser_MouseMoveEvent_Callback = void (*)(KFontChooser*, QMouseEvent*);
    using KFontChooser_WheelEvent_Callback = void (*)(KFontChooser*, QWheelEvent*);
    using KFontChooser_KeyPressEvent_Callback = void (*)(KFontChooser*, QKeyEvent*);
    using KFontChooser_KeyReleaseEvent_Callback = void (*)(KFontChooser*, QKeyEvent*);
    using KFontChooser_FocusInEvent_Callback = void (*)(KFontChooser*, QFocusEvent*);
    using KFontChooser_FocusOutEvent_Callback = void (*)(KFontChooser*, QFocusEvent*);
    using KFontChooser_EnterEvent_Callback = void (*)(KFontChooser*, QEnterEvent*);
    using KFontChooser_LeaveEvent_Callback = void (*)(KFontChooser*, QEvent*);
    using KFontChooser_PaintEvent_Callback = void (*)(KFontChooser*, QPaintEvent*);
    using KFontChooser_MoveEvent_Callback = void (*)(KFontChooser*, QMoveEvent*);
    using KFontChooser_ResizeEvent_Callback = void (*)(KFontChooser*, QResizeEvent*);
    using KFontChooser_CloseEvent_Callback = void (*)(KFontChooser*, QCloseEvent*);
    using KFontChooser_ContextMenuEvent_Callback = void (*)(KFontChooser*, QContextMenuEvent*);
    using KFontChooser_TabletEvent_Callback = void (*)(KFontChooser*, QTabletEvent*);
    using KFontChooser_ActionEvent_Callback = void (*)(KFontChooser*, QActionEvent*);
    using KFontChooser_DragEnterEvent_Callback = void (*)(KFontChooser*, QDragEnterEvent*);
    using KFontChooser_DragMoveEvent_Callback = void (*)(KFontChooser*, QDragMoveEvent*);
    using KFontChooser_DragLeaveEvent_Callback = void (*)(KFontChooser*, QDragLeaveEvent*);
    using KFontChooser_DropEvent_Callback = void (*)(KFontChooser*, QDropEvent*);
    using KFontChooser_ShowEvent_Callback = void (*)(KFontChooser*, QShowEvent*);
    using KFontChooser_HideEvent_Callback = void (*)(KFontChooser*, QHideEvent*);
    using KFontChooser_NativeEvent_Callback = bool (*)(KFontChooser*, libqt_string, void*, intptr_t*);
    using KFontChooser_ChangeEvent_Callback = void (*)(KFontChooser*, QEvent*);
    using KFontChooser_Metric_Callback = int (*)(const KFontChooser*, int);
    using KFontChooser_InitPainter_Callback = void (*)(const KFontChooser*, QPainter*);
    using KFontChooser_Redirected_Callback = QPaintDevice* (*)(const KFontChooser*, QPoint*);
    using KFontChooser_SharedPainter_Callback = QPainter* (*)();
    using KFontChooser_InputMethodEvent_Callback = void (*)(KFontChooser*, QInputMethodEvent*);
    using KFontChooser_InputMethodQuery_Callback = QVariant* (*)(const KFontChooser*, int);
    using KFontChooser_FocusNextPrevChild_Callback = bool (*)(KFontChooser*, bool);
    using KFontChooser_EventFilter_Callback = bool (*)(KFontChooser*, QObject*, QEvent*);
    using KFontChooser_TimerEvent_Callback = void (*)(KFontChooser*, QTimerEvent*);
    using KFontChooser_ChildEvent_Callback = void (*)(KFontChooser*, QChildEvent*);
    using KFontChooser_CustomEvent_Callback = void (*)(KFontChooser*, QEvent*);
    using KFontChooser_ConnectNotify_Callback = void (*)(KFontChooser*, QMetaMethod*);
    using KFontChooser_DisconnectNotify_Callback = void (*)(KFontChooser*, QMetaMethod*);
    using KFontChooser_UpdateMicroFocus_Callback = void (*)();
    using KFontChooser_Create_Callback = void (*)();
    using KFontChooser_Destroy_Callback = void (*)();
    using KFontChooser_FocusNextChild_Callback = bool (*)();
    using KFontChooser_FocusPreviousChild_Callback = bool (*)();
    using KFontChooser_Sender_Callback = QObject* (*)();
    using KFontChooser_SenderSignalIndex_Callback = int (*)();
    using KFontChooser_Receivers_Callback = int (*)(const KFontChooser*, const char*);
    using KFontChooser_IsSignalConnected_Callback = bool (*)(const KFontChooser*, QMetaMethod*);
    using KFontChooser_GetDecodedMetricF_Callback = double (*)(const KFontChooser*, int, int);

  protected:
    // Instance callback storage
    KFontChooser_Metacall_Callback kfontchooser_metacall_callback = nullptr;
    KFontChooser_SizeHint_Callback kfontchooser_sizehint_callback = nullptr;
    KFontChooser_DevType_Callback kfontchooser_devtype_callback = nullptr;
    KFontChooser_SetVisible_Callback kfontchooser_setvisible_callback = nullptr;
    KFontChooser_MinimumSizeHint_Callback kfontchooser_minimumsizehint_callback = nullptr;
    KFontChooser_HeightForWidth_Callback kfontchooser_heightforwidth_callback = nullptr;
    KFontChooser_HasHeightForWidth_Callback kfontchooser_hasheightforwidth_callback = nullptr;
    KFontChooser_PaintEngine_Callback kfontchooser_paintengine_callback = nullptr;
    KFontChooser_Event_Callback kfontchooser_event_callback = nullptr;
    KFontChooser_MousePressEvent_Callback kfontchooser_mousepressevent_callback = nullptr;
    KFontChooser_MouseReleaseEvent_Callback kfontchooser_mousereleaseevent_callback = nullptr;
    KFontChooser_MouseDoubleClickEvent_Callback kfontchooser_mousedoubleclickevent_callback = nullptr;
    KFontChooser_MouseMoveEvent_Callback kfontchooser_mousemoveevent_callback = nullptr;
    KFontChooser_WheelEvent_Callback kfontchooser_wheelevent_callback = nullptr;
    KFontChooser_KeyPressEvent_Callback kfontchooser_keypressevent_callback = nullptr;
    KFontChooser_KeyReleaseEvent_Callback kfontchooser_keyreleaseevent_callback = nullptr;
    KFontChooser_FocusInEvent_Callback kfontchooser_focusinevent_callback = nullptr;
    KFontChooser_FocusOutEvent_Callback kfontchooser_focusoutevent_callback = nullptr;
    KFontChooser_EnterEvent_Callback kfontchooser_enterevent_callback = nullptr;
    KFontChooser_LeaveEvent_Callback kfontchooser_leaveevent_callback = nullptr;
    KFontChooser_PaintEvent_Callback kfontchooser_paintevent_callback = nullptr;
    KFontChooser_MoveEvent_Callback kfontchooser_moveevent_callback = nullptr;
    KFontChooser_ResizeEvent_Callback kfontchooser_resizeevent_callback = nullptr;
    KFontChooser_CloseEvent_Callback kfontchooser_closeevent_callback = nullptr;
    KFontChooser_ContextMenuEvent_Callback kfontchooser_contextmenuevent_callback = nullptr;
    KFontChooser_TabletEvent_Callback kfontchooser_tabletevent_callback = nullptr;
    KFontChooser_ActionEvent_Callback kfontchooser_actionevent_callback = nullptr;
    KFontChooser_DragEnterEvent_Callback kfontchooser_dragenterevent_callback = nullptr;
    KFontChooser_DragMoveEvent_Callback kfontchooser_dragmoveevent_callback = nullptr;
    KFontChooser_DragLeaveEvent_Callback kfontchooser_dragleaveevent_callback = nullptr;
    KFontChooser_DropEvent_Callback kfontchooser_dropevent_callback = nullptr;
    KFontChooser_ShowEvent_Callback kfontchooser_showevent_callback = nullptr;
    KFontChooser_HideEvent_Callback kfontchooser_hideevent_callback = nullptr;
    KFontChooser_NativeEvent_Callback kfontchooser_nativeevent_callback = nullptr;
    KFontChooser_ChangeEvent_Callback kfontchooser_changeevent_callback = nullptr;
    KFontChooser_Metric_Callback kfontchooser_metric_callback = nullptr;
    KFontChooser_InitPainter_Callback kfontchooser_initpainter_callback = nullptr;
    KFontChooser_Redirected_Callback kfontchooser_redirected_callback = nullptr;
    KFontChooser_SharedPainter_Callback kfontchooser_sharedpainter_callback = nullptr;
    KFontChooser_InputMethodEvent_Callback kfontchooser_inputmethodevent_callback = nullptr;
    KFontChooser_InputMethodQuery_Callback kfontchooser_inputmethodquery_callback = nullptr;
    KFontChooser_FocusNextPrevChild_Callback kfontchooser_focusnextprevchild_callback = nullptr;
    KFontChooser_EventFilter_Callback kfontchooser_eventfilter_callback = nullptr;
    KFontChooser_TimerEvent_Callback kfontchooser_timerevent_callback = nullptr;
    KFontChooser_ChildEvent_Callback kfontchooser_childevent_callback = nullptr;
    KFontChooser_CustomEvent_Callback kfontchooser_customevent_callback = nullptr;
    KFontChooser_ConnectNotify_Callback kfontchooser_connectnotify_callback = nullptr;
    KFontChooser_DisconnectNotify_Callback kfontchooser_disconnectnotify_callback = nullptr;
    KFontChooser_UpdateMicroFocus_Callback kfontchooser_updatemicrofocus_callback = nullptr;
    KFontChooser_Create_Callback kfontchooser_create_callback = nullptr;
    KFontChooser_Destroy_Callback kfontchooser_destroy_callback = nullptr;
    KFontChooser_FocusNextChild_Callback kfontchooser_focusnextchild_callback = nullptr;
    KFontChooser_FocusPreviousChild_Callback kfontchooser_focuspreviouschild_callback = nullptr;
    KFontChooser_Sender_Callback kfontchooser_sender_callback = nullptr;
    KFontChooser_SenderSignalIndex_Callback kfontchooser_sendersignalindex_callback = nullptr;
    KFontChooser_Receivers_Callback kfontchooser_receivers_callback = nullptr;
    KFontChooser_IsSignalConnected_Callback kfontchooser_issignalconnected_callback = nullptr;
    KFontChooser_GetDecodedMetricF_Callback kfontchooser_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kfontchooser_metacall_isbase = false;
    mutable bool kfontchooser_sizehint_isbase = false;
    mutable bool kfontchooser_devtype_isbase = false;
    mutable bool kfontchooser_setvisible_isbase = false;
    mutable bool kfontchooser_minimumsizehint_isbase = false;
    mutable bool kfontchooser_heightforwidth_isbase = false;
    mutable bool kfontchooser_hasheightforwidth_isbase = false;
    mutable bool kfontchooser_paintengine_isbase = false;
    mutable bool kfontchooser_event_isbase = false;
    mutable bool kfontchooser_mousepressevent_isbase = false;
    mutable bool kfontchooser_mousereleaseevent_isbase = false;
    mutable bool kfontchooser_mousedoubleclickevent_isbase = false;
    mutable bool kfontchooser_mousemoveevent_isbase = false;
    mutable bool kfontchooser_wheelevent_isbase = false;
    mutable bool kfontchooser_keypressevent_isbase = false;
    mutable bool kfontchooser_keyreleaseevent_isbase = false;
    mutable bool kfontchooser_focusinevent_isbase = false;
    mutable bool kfontchooser_focusoutevent_isbase = false;
    mutable bool kfontchooser_enterevent_isbase = false;
    mutable bool kfontchooser_leaveevent_isbase = false;
    mutable bool kfontchooser_paintevent_isbase = false;
    mutable bool kfontchooser_moveevent_isbase = false;
    mutable bool kfontchooser_resizeevent_isbase = false;
    mutable bool kfontchooser_closeevent_isbase = false;
    mutable bool kfontchooser_contextmenuevent_isbase = false;
    mutable bool kfontchooser_tabletevent_isbase = false;
    mutable bool kfontchooser_actionevent_isbase = false;
    mutable bool kfontchooser_dragenterevent_isbase = false;
    mutable bool kfontchooser_dragmoveevent_isbase = false;
    mutable bool kfontchooser_dragleaveevent_isbase = false;
    mutable bool kfontchooser_dropevent_isbase = false;
    mutable bool kfontchooser_showevent_isbase = false;
    mutable bool kfontchooser_hideevent_isbase = false;
    mutable bool kfontchooser_nativeevent_isbase = false;
    mutable bool kfontchooser_changeevent_isbase = false;
    mutable bool kfontchooser_metric_isbase = false;
    mutable bool kfontchooser_initpainter_isbase = false;
    mutable bool kfontchooser_redirected_isbase = false;
    mutable bool kfontchooser_sharedpainter_isbase = false;
    mutable bool kfontchooser_inputmethodevent_isbase = false;
    mutable bool kfontchooser_inputmethodquery_isbase = false;
    mutable bool kfontchooser_focusnextprevchild_isbase = false;
    mutable bool kfontchooser_eventfilter_isbase = false;
    mutable bool kfontchooser_timerevent_isbase = false;
    mutable bool kfontchooser_childevent_isbase = false;
    mutable bool kfontchooser_customevent_isbase = false;
    mutable bool kfontchooser_connectnotify_isbase = false;
    mutable bool kfontchooser_disconnectnotify_isbase = false;
    mutable bool kfontchooser_updatemicrofocus_isbase = false;
    mutable bool kfontchooser_create_isbase = false;
    mutable bool kfontchooser_destroy_isbase = false;
    mutable bool kfontchooser_focusnextchild_isbase = false;
    mutable bool kfontchooser_focuspreviouschild_isbase = false;
    mutable bool kfontchooser_sender_isbase = false;
    mutable bool kfontchooser_sendersignalindex_isbase = false;
    mutable bool kfontchooser_receivers_isbase = false;
    mutable bool kfontchooser_issignalconnected_isbase = false;
    mutable bool kfontchooser_getdecodedmetricf_isbase = false;

  public:
    VirtualKFontChooser(QWidget* parent) : KFontChooser(parent) {};
    VirtualKFontChooser() : KFontChooser() {};
    VirtualKFontChooser(KFontChooser::DisplayFlags flags) : KFontChooser(flags) {};
    VirtualKFontChooser(KFontChooser::DisplayFlags flags, QWidget* parent) : KFontChooser(flags, parent) {};

    ~VirtualKFontChooser() {
        kfontchooser_metacall_callback = nullptr;
        kfontchooser_sizehint_callback = nullptr;
        kfontchooser_devtype_callback = nullptr;
        kfontchooser_setvisible_callback = nullptr;
        kfontchooser_minimumsizehint_callback = nullptr;
        kfontchooser_heightforwidth_callback = nullptr;
        kfontchooser_hasheightforwidth_callback = nullptr;
        kfontchooser_paintengine_callback = nullptr;
        kfontchooser_event_callback = nullptr;
        kfontchooser_mousepressevent_callback = nullptr;
        kfontchooser_mousereleaseevent_callback = nullptr;
        kfontchooser_mousedoubleclickevent_callback = nullptr;
        kfontchooser_mousemoveevent_callback = nullptr;
        kfontchooser_wheelevent_callback = nullptr;
        kfontchooser_keypressevent_callback = nullptr;
        kfontchooser_keyreleaseevent_callback = nullptr;
        kfontchooser_focusinevent_callback = nullptr;
        kfontchooser_focusoutevent_callback = nullptr;
        kfontchooser_enterevent_callback = nullptr;
        kfontchooser_leaveevent_callback = nullptr;
        kfontchooser_paintevent_callback = nullptr;
        kfontchooser_moveevent_callback = nullptr;
        kfontchooser_resizeevent_callback = nullptr;
        kfontchooser_closeevent_callback = nullptr;
        kfontchooser_contextmenuevent_callback = nullptr;
        kfontchooser_tabletevent_callback = nullptr;
        kfontchooser_actionevent_callback = nullptr;
        kfontchooser_dragenterevent_callback = nullptr;
        kfontchooser_dragmoveevent_callback = nullptr;
        kfontchooser_dragleaveevent_callback = nullptr;
        kfontchooser_dropevent_callback = nullptr;
        kfontchooser_showevent_callback = nullptr;
        kfontchooser_hideevent_callback = nullptr;
        kfontchooser_nativeevent_callback = nullptr;
        kfontchooser_changeevent_callback = nullptr;
        kfontchooser_metric_callback = nullptr;
        kfontchooser_initpainter_callback = nullptr;
        kfontchooser_redirected_callback = nullptr;
        kfontchooser_sharedpainter_callback = nullptr;
        kfontchooser_inputmethodevent_callback = nullptr;
        kfontchooser_inputmethodquery_callback = nullptr;
        kfontchooser_focusnextprevchild_callback = nullptr;
        kfontchooser_eventfilter_callback = nullptr;
        kfontchooser_timerevent_callback = nullptr;
        kfontchooser_childevent_callback = nullptr;
        kfontchooser_customevent_callback = nullptr;
        kfontchooser_connectnotify_callback = nullptr;
        kfontchooser_disconnectnotify_callback = nullptr;
        kfontchooser_updatemicrofocus_callback = nullptr;
        kfontchooser_create_callback = nullptr;
        kfontchooser_destroy_callback = nullptr;
        kfontchooser_focusnextchild_callback = nullptr;
        kfontchooser_focuspreviouschild_callback = nullptr;
        kfontchooser_sender_callback = nullptr;
        kfontchooser_sendersignalindex_callback = nullptr;
        kfontchooser_receivers_callback = nullptr;
        kfontchooser_issignalconnected_callback = nullptr;
        kfontchooser_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKFontChooser_Metacall_Callback(KFontChooser_Metacall_Callback cb) { kfontchooser_metacall_callback = cb; }
    inline void setKFontChooser_SizeHint_Callback(KFontChooser_SizeHint_Callback cb) { kfontchooser_sizehint_callback = cb; }
    inline void setKFontChooser_DevType_Callback(KFontChooser_DevType_Callback cb) { kfontchooser_devtype_callback = cb; }
    inline void setKFontChooser_SetVisible_Callback(KFontChooser_SetVisible_Callback cb) { kfontchooser_setvisible_callback = cb; }
    inline void setKFontChooser_MinimumSizeHint_Callback(KFontChooser_MinimumSizeHint_Callback cb) { kfontchooser_minimumsizehint_callback = cb; }
    inline void setKFontChooser_HeightForWidth_Callback(KFontChooser_HeightForWidth_Callback cb) { kfontchooser_heightforwidth_callback = cb; }
    inline void setKFontChooser_HasHeightForWidth_Callback(KFontChooser_HasHeightForWidth_Callback cb) { kfontchooser_hasheightforwidth_callback = cb; }
    inline void setKFontChooser_PaintEngine_Callback(KFontChooser_PaintEngine_Callback cb) { kfontchooser_paintengine_callback = cb; }
    inline void setKFontChooser_Event_Callback(KFontChooser_Event_Callback cb) { kfontchooser_event_callback = cb; }
    inline void setKFontChooser_MousePressEvent_Callback(KFontChooser_MousePressEvent_Callback cb) { kfontchooser_mousepressevent_callback = cb; }
    inline void setKFontChooser_MouseReleaseEvent_Callback(KFontChooser_MouseReleaseEvent_Callback cb) { kfontchooser_mousereleaseevent_callback = cb; }
    inline void setKFontChooser_MouseDoubleClickEvent_Callback(KFontChooser_MouseDoubleClickEvent_Callback cb) { kfontchooser_mousedoubleclickevent_callback = cb; }
    inline void setKFontChooser_MouseMoveEvent_Callback(KFontChooser_MouseMoveEvent_Callback cb) { kfontchooser_mousemoveevent_callback = cb; }
    inline void setKFontChooser_WheelEvent_Callback(KFontChooser_WheelEvent_Callback cb) { kfontchooser_wheelevent_callback = cb; }
    inline void setKFontChooser_KeyPressEvent_Callback(KFontChooser_KeyPressEvent_Callback cb) { kfontchooser_keypressevent_callback = cb; }
    inline void setKFontChooser_KeyReleaseEvent_Callback(KFontChooser_KeyReleaseEvent_Callback cb) { kfontchooser_keyreleaseevent_callback = cb; }
    inline void setKFontChooser_FocusInEvent_Callback(KFontChooser_FocusInEvent_Callback cb) { kfontchooser_focusinevent_callback = cb; }
    inline void setKFontChooser_FocusOutEvent_Callback(KFontChooser_FocusOutEvent_Callback cb) { kfontchooser_focusoutevent_callback = cb; }
    inline void setKFontChooser_EnterEvent_Callback(KFontChooser_EnterEvent_Callback cb) { kfontchooser_enterevent_callback = cb; }
    inline void setKFontChooser_LeaveEvent_Callback(KFontChooser_LeaveEvent_Callback cb) { kfontchooser_leaveevent_callback = cb; }
    inline void setKFontChooser_PaintEvent_Callback(KFontChooser_PaintEvent_Callback cb) { kfontchooser_paintevent_callback = cb; }
    inline void setKFontChooser_MoveEvent_Callback(KFontChooser_MoveEvent_Callback cb) { kfontchooser_moveevent_callback = cb; }
    inline void setKFontChooser_ResizeEvent_Callback(KFontChooser_ResizeEvent_Callback cb) { kfontchooser_resizeevent_callback = cb; }
    inline void setKFontChooser_CloseEvent_Callback(KFontChooser_CloseEvent_Callback cb) { kfontchooser_closeevent_callback = cb; }
    inline void setKFontChooser_ContextMenuEvent_Callback(KFontChooser_ContextMenuEvent_Callback cb) { kfontchooser_contextmenuevent_callback = cb; }
    inline void setKFontChooser_TabletEvent_Callback(KFontChooser_TabletEvent_Callback cb) { kfontchooser_tabletevent_callback = cb; }
    inline void setKFontChooser_ActionEvent_Callback(KFontChooser_ActionEvent_Callback cb) { kfontchooser_actionevent_callback = cb; }
    inline void setKFontChooser_DragEnterEvent_Callback(KFontChooser_DragEnterEvent_Callback cb) { kfontchooser_dragenterevent_callback = cb; }
    inline void setKFontChooser_DragMoveEvent_Callback(KFontChooser_DragMoveEvent_Callback cb) { kfontchooser_dragmoveevent_callback = cb; }
    inline void setKFontChooser_DragLeaveEvent_Callback(KFontChooser_DragLeaveEvent_Callback cb) { kfontchooser_dragleaveevent_callback = cb; }
    inline void setKFontChooser_DropEvent_Callback(KFontChooser_DropEvent_Callback cb) { kfontchooser_dropevent_callback = cb; }
    inline void setKFontChooser_ShowEvent_Callback(KFontChooser_ShowEvent_Callback cb) { kfontchooser_showevent_callback = cb; }
    inline void setKFontChooser_HideEvent_Callback(KFontChooser_HideEvent_Callback cb) { kfontchooser_hideevent_callback = cb; }
    inline void setKFontChooser_NativeEvent_Callback(KFontChooser_NativeEvent_Callback cb) { kfontchooser_nativeevent_callback = cb; }
    inline void setKFontChooser_ChangeEvent_Callback(KFontChooser_ChangeEvent_Callback cb) { kfontchooser_changeevent_callback = cb; }
    inline void setKFontChooser_Metric_Callback(KFontChooser_Metric_Callback cb) { kfontchooser_metric_callback = cb; }
    inline void setKFontChooser_InitPainter_Callback(KFontChooser_InitPainter_Callback cb) { kfontchooser_initpainter_callback = cb; }
    inline void setKFontChooser_Redirected_Callback(KFontChooser_Redirected_Callback cb) { kfontchooser_redirected_callback = cb; }
    inline void setKFontChooser_SharedPainter_Callback(KFontChooser_SharedPainter_Callback cb) { kfontchooser_sharedpainter_callback = cb; }
    inline void setKFontChooser_InputMethodEvent_Callback(KFontChooser_InputMethodEvent_Callback cb) { kfontchooser_inputmethodevent_callback = cb; }
    inline void setKFontChooser_InputMethodQuery_Callback(KFontChooser_InputMethodQuery_Callback cb) { kfontchooser_inputmethodquery_callback = cb; }
    inline void setKFontChooser_FocusNextPrevChild_Callback(KFontChooser_FocusNextPrevChild_Callback cb) { kfontchooser_focusnextprevchild_callback = cb; }
    inline void setKFontChooser_EventFilter_Callback(KFontChooser_EventFilter_Callback cb) { kfontchooser_eventfilter_callback = cb; }
    inline void setKFontChooser_TimerEvent_Callback(KFontChooser_TimerEvent_Callback cb) { kfontchooser_timerevent_callback = cb; }
    inline void setKFontChooser_ChildEvent_Callback(KFontChooser_ChildEvent_Callback cb) { kfontchooser_childevent_callback = cb; }
    inline void setKFontChooser_CustomEvent_Callback(KFontChooser_CustomEvent_Callback cb) { kfontchooser_customevent_callback = cb; }
    inline void setKFontChooser_ConnectNotify_Callback(KFontChooser_ConnectNotify_Callback cb) { kfontchooser_connectnotify_callback = cb; }
    inline void setKFontChooser_DisconnectNotify_Callback(KFontChooser_DisconnectNotify_Callback cb) { kfontchooser_disconnectnotify_callback = cb; }
    inline void setKFontChooser_UpdateMicroFocus_Callback(KFontChooser_UpdateMicroFocus_Callback cb) { kfontchooser_updatemicrofocus_callback = cb; }
    inline void setKFontChooser_Create_Callback(KFontChooser_Create_Callback cb) { kfontchooser_create_callback = cb; }
    inline void setKFontChooser_Destroy_Callback(KFontChooser_Destroy_Callback cb) { kfontchooser_destroy_callback = cb; }
    inline void setKFontChooser_FocusNextChild_Callback(KFontChooser_FocusNextChild_Callback cb) { kfontchooser_focusnextchild_callback = cb; }
    inline void setKFontChooser_FocusPreviousChild_Callback(KFontChooser_FocusPreviousChild_Callback cb) { kfontchooser_focuspreviouschild_callback = cb; }
    inline void setKFontChooser_Sender_Callback(KFontChooser_Sender_Callback cb) { kfontchooser_sender_callback = cb; }
    inline void setKFontChooser_SenderSignalIndex_Callback(KFontChooser_SenderSignalIndex_Callback cb) { kfontchooser_sendersignalindex_callback = cb; }
    inline void setKFontChooser_Receivers_Callback(KFontChooser_Receivers_Callback cb) { kfontchooser_receivers_callback = cb; }
    inline void setKFontChooser_IsSignalConnected_Callback(KFontChooser_IsSignalConnected_Callback cb) { kfontchooser_issignalconnected_callback = cb; }
    inline void setKFontChooser_GetDecodedMetricF_Callback(KFontChooser_GetDecodedMetricF_Callback cb) { kfontchooser_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKFontChooser_Metacall_IsBase(bool value) const { kfontchooser_metacall_isbase = value; }
    inline void setKFontChooser_SizeHint_IsBase(bool value) const { kfontchooser_sizehint_isbase = value; }
    inline void setKFontChooser_DevType_IsBase(bool value) const { kfontchooser_devtype_isbase = value; }
    inline void setKFontChooser_SetVisible_IsBase(bool value) const { kfontchooser_setvisible_isbase = value; }
    inline void setKFontChooser_MinimumSizeHint_IsBase(bool value) const { kfontchooser_minimumsizehint_isbase = value; }
    inline void setKFontChooser_HeightForWidth_IsBase(bool value) const { kfontchooser_heightforwidth_isbase = value; }
    inline void setKFontChooser_HasHeightForWidth_IsBase(bool value) const { kfontchooser_hasheightforwidth_isbase = value; }
    inline void setKFontChooser_PaintEngine_IsBase(bool value) const { kfontchooser_paintengine_isbase = value; }
    inline void setKFontChooser_Event_IsBase(bool value) const { kfontchooser_event_isbase = value; }
    inline void setKFontChooser_MousePressEvent_IsBase(bool value) const { kfontchooser_mousepressevent_isbase = value; }
    inline void setKFontChooser_MouseReleaseEvent_IsBase(bool value) const { kfontchooser_mousereleaseevent_isbase = value; }
    inline void setKFontChooser_MouseDoubleClickEvent_IsBase(bool value) const { kfontchooser_mousedoubleclickevent_isbase = value; }
    inline void setKFontChooser_MouseMoveEvent_IsBase(bool value) const { kfontchooser_mousemoveevent_isbase = value; }
    inline void setKFontChooser_WheelEvent_IsBase(bool value) const { kfontchooser_wheelevent_isbase = value; }
    inline void setKFontChooser_KeyPressEvent_IsBase(bool value) const { kfontchooser_keypressevent_isbase = value; }
    inline void setKFontChooser_KeyReleaseEvent_IsBase(bool value) const { kfontchooser_keyreleaseevent_isbase = value; }
    inline void setKFontChooser_FocusInEvent_IsBase(bool value) const { kfontchooser_focusinevent_isbase = value; }
    inline void setKFontChooser_FocusOutEvent_IsBase(bool value) const { kfontchooser_focusoutevent_isbase = value; }
    inline void setKFontChooser_EnterEvent_IsBase(bool value) const { kfontchooser_enterevent_isbase = value; }
    inline void setKFontChooser_LeaveEvent_IsBase(bool value) const { kfontchooser_leaveevent_isbase = value; }
    inline void setKFontChooser_PaintEvent_IsBase(bool value) const { kfontchooser_paintevent_isbase = value; }
    inline void setKFontChooser_MoveEvent_IsBase(bool value) const { kfontchooser_moveevent_isbase = value; }
    inline void setKFontChooser_ResizeEvent_IsBase(bool value) const { kfontchooser_resizeevent_isbase = value; }
    inline void setKFontChooser_CloseEvent_IsBase(bool value) const { kfontchooser_closeevent_isbase = value; }
    inline void setKFontChooser_ContextMenuEvent_IsBase(bool value) const { kfontchooser_contextmenuevent_isbase = value; }
    inline void setKFontChooser_TabletEvent_IsBase(bool value) const { kfontchooser_tabletevent_isbase = value; }
    inline void setKFontChooser_ActionEvent_IsBase(bool value) const { kfontchooser_actionevent_isbase = value; }
    inline void setKFontChooser_DragEnterEvent_IsBase(bool value) const { kfontchooser_dragenterevent_isbase = value; }
    inline void setKFontChooser_DragMoveEvent_IsBase(bool value) const { kfontchooser_dragmoveevent_isbase = value; }
    inline void setKFontChooser_DragLeaveEvent_IsBase(bool value) const { kfontchooser_dragleaveevent_isbase = value; }
    inline void setKFontChooser_DropEvent_IsBase(bool value) const { kfontchooser_dropevent_isbase = value; }
    inline void setKFontChooser_ShowEvent_IsBase(bool value) const { kfontchooser_showevent_isbase = value; }
    inline void setKFontChooser_HideEvent_IsBase(bool value) const { kfontchooser_hideevent_isbase = value; }
    inline void setKFontChooser_NativeEvent_IsBase(bool value) const { kfontchooser_nativeevent_isbase = value; }
    inline void setKFontChooser_ChangeEvent_IsBase(bool value) const { kfontchooser_changeevent_isbase = value; }
    inline void setKFontChooser_Metric_IsBase(bool value) const { kfontchooser_metric_isbase = value; }
    inline void setKFontChooser_InitPainter_IsBase(bool value) const { kfontchooser_initpainter_isbase = value; }
    inline void setKFontChooser_Redirected_IsBase(bool value) const { kfontchooser_redirected_isbase = value; }
    inline void setKFontChooser_SharedPainter_IsBase(bool value) const { kfontchooser_sharedpainter_isbase = value; }
    inline void setKFontChooser_InputMethodEvent_IsBase(bool value) const { kfontchooser_inputmethodevent_isbase = value; }
    inline void setKFontChooser_InputMethodQuery_IsBase(bool value) const { kfontchooser_inputmethodquery_isbase = value; }
    inline void setKFontChooser_FocusNextPrevChild_IsBase(bool value) const { kfontchooser_focusnextprevchild_isbase = value; }
    inline void setKFontChooser_EventFilter_IsBase(bool value) const { kfontchooser_eventfilter_isbase = value; }
    inline void setKFontChooser_TimerEvent_IsBase(bool value) const { kfontchooser_timerevent_isbase = value; }
    inline void setKFontChooser_ChildEvent_IsBase(bool value) const { kfontchooser_childevent_isbase = value; }
    inline void setKFontChooser_CustomEvent_IsBase(bool value) const { kfontchooser_customevent_isbase = value; }
    inline void setKFontChooser_ConnectNotify_IsBase(bool value) const { kfontchooser_connectnotify_isbase = value; }
    inline void setKFontChooser_DisconnectNotify_IsBase(bool value) const { kfontchooser_disconnectnotify_isbase = value; }
    inline void setKFontChooser_UpdateMicroFocus_IsBase(bool value) const { kfontchooser_updatemicrofocus_isbase = value; }
    inline void setKFontChooser_Create_IsBase(bool value) const { kfontchooser_create_isbase = value; }
    inline void setKFontChooser_Destroy_IsBase(bool value) const { kfontchooser_destroy_isbase = value; }
    inline void setKFontChooser_FocusNextChild_IsBase(bool value) const { kfontchooser_focusnextchild_isbase = value; }
    inline void setKFontChooser_FocusPreviousChild_IsBase(bool value) const { kfontchooser_focuspreviouschild_isbase = value; }
    inline void setKFontChooser_Sender_IsBase(bool value) const { kfontchooser_sender_isbase = value; }
    inline void setKFontChooser_SenderSignalIndex_IsBase(bool value) const { kfontchooser_sendersignalindex_isbase = value; }
    inline void setKFontChooser_Receivers_IsBase(bool value) const { kfontchooser_receivers_isbase = value; }
    inline void setKFontChooser_IsSignalConnected_IsBase(bool value) const { kfontchooser_issignalconnected_isbase = value; }
    inline void setKFontChooser_GetDecodedMetricF_IsBase(bool value) const { kfontchooser_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfontchooser_metacall_isbase) {
            kfontchooser_metacall_isbase = false;
            return KFontChooser::qt_metacall(param1, param2, param3);
        } else if (kfontchooser_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kfontchooser_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KFontChooser::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kfontchooser_sizehint_isbase) {
            kfontchooser_sizehint_isbase = false;
            return KFontChooser::sizeHint();
        } else if (kfontchooser_sizehint_callback != nullptr) {
            QSize* callback_ret = kfontchooser_sizehint_callback();
            return *callback_ret;
        } else {
            return KFontChooser::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kfontchooser_devtype_isbase) {
            kfontchooser_devtype_isbase = false;
            return KFontChooser::devType();
        } else if (kfontchooser_devtype_callback != nullptr) {
            int callback_ret = kfontchooser_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFontChooser::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kfontchooser_setvisible_isbase) {
            kfontchooser_setvisible_isbase = false;
            KFontChooser::setVisible(visible);
        } else if (kfontchooser_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kfontchooser_setvisible_callback(this, cbval1);
        } else {
            KFontChooser::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kfontchooser_minimumsizehint_isbase) {
            kfontchooser_minimumsizehint_isbase = false;
            return KFontChooser::minimumSizeHint();
        } else if (kfontchooser_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kfontchooser_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KFontChooser::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kfontchooser_heightforwidth_isbase) {
            kfontchooser_heightforwidth_isbase = false;
            return KFontChooser::heightForWidth(param1);
        } else if (kfontchooser_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kfontchooser_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFontChooser::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kfontchooser_hasheightforwidth_isbase) {
            kfontchooser_hasheightforwidth_isbase = false;
            return KFontChooser::hasHeightForWidth();
        } else if (kfontchooser_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kfontchooser_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KFontChooser::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kfontchooser_paintengine_isbase) {
            kfontchooser_paintengine_isbase = false;
            return KFontChooser::paintEngine();
        } else if (kfontchooser_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kfontchooser_paintengine_callback();
            return callback_ret;
        } else {
            return KFontChooser::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfontchooser_event_isbase) {
            kfontchooser_event_isbase = false;
            return KFontChooser::event(event);
        } else if (kfontchooser_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kfontchooser_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFontChooser::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kfontchooser_mousepressevent_isbase) {
            kfontchooser_mousepressevent_isbase = false;
            KFontChooser::mousePressEvent(event);
        } else if (kfontchooser_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfontchooser_mousepressevent_callback(this, cbval1);
        } else {
            KFontChooser::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kfontchooser_mousereleaseevent_isbase) {
            kfontchooser_mousereleaseevent_isbase = false;
            KFontChooser::mouseReleaseEvent(event);
        } else if (kfontchooser_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfontchooser_mousereleaseevent_callback(this, cbval1);
        } else {
            KFontChooser::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kfontchooser_mousedoubleclickevent_isbase) {
            kfontchooser_mousedoubleclickevent_isbase = false;
            KFontChooser::mouseDoubleClickEvent(event);
        } else if (kfontchooser_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfontchooser_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KFontChooser::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kfontchooser_mousemoveevent_isbase) {
            kfontchooser_mousemoveevent_isbase = false;
            KFontChooser::mouseMoveEvent(event);
        } else if (kfontchooser_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfontchooser_mousemoveevent_callback(this, cbval1);
        } else {
            KFontChooser::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kfontchooser_wheelevent_isbase) {
            kfontchooser_wheelevent_isbase = false;
            KFontChooser::wheelEvent(event);
        } else if (kfontchooser_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kfontchooser_wheelevent_callback(this, cbval1);
        } else {
            KFontChooser::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kfontchooser_keypressevent_isbase) {
            kfontchooser_keypressevent_isbase = false;
            KFontChooser::keyPressEvent(event);
        } else if (kfontchooser_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kfontchooser_keypressevent_callback(this, cbval1);
        } else {
            KFontChooser::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kfontchooser_keyreleaseevent_isbase) {
            kfontchooser_keyreleaseevent_isbase = false;
            KFontChooser::keyReleaseEvent(event);
        } else if (kfontchooser_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kfontchooser_keyreleaseevent_callback(this, cbval1);
        } else {
            KFontChooser::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kfontchooser_focusinevent_isbase) {
            kfontchooser_focusinevent_isbase = false;
            KFontChooser::focusInEvent(event);
        } else if (kfontchooser_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kfontchooser_focusinevent_callback(this, cbval1);
        } else {
            KFontChooser::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kfontchooser_focusoutevent_isbase) {
            kfontchooser_focusoutevent_isbase = false;
            KFontChooser::focusOutEvent(event);
        } else if (kfontchooser_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kfontchooser_focusoutevent_callback(this, cbval1);
        } else {
            KFontChooser::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kfontchooser_enterevent_isbase) {
            kfontchooser_enterevent_isbase = false;
            KFontChooser::enterEvent(event);
        } else if (kfontchooser_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kfontchooser_enterevent_callback(this, cbval1);
        } else {
            KFontChooser::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kfontchooser_leaveevent_isbase) {
            kfontchooser_leaveevent_isbase = false;
            KFontChooser::leaveEvent(event);
        } else if (kfontchooser_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kfontchooser_leaveevent_callback(this, cbval1);
        } else {
            KFontChooser::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kfontchooser_paintevent_isbase) {
            kfontchooser_paintevent_isbase = false;
            KFontChooser::paintEvent(event);
        } else if (kfontchooser_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kfontchooser_paintevent_callback(this, cbval1);
        } else {
            KFontChooser::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kfontchooser_moveevent_isbase) {
            kfontchooser_moveevent_isbase = false;
            KFontChooser::moveEvent(event);
        } else if (kfontchooser_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kfontchooser_moveevent_callback(this, cbval1);
        } else {
            KFontChooser::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kfontchooser_resizeevent_isbase) {
            kfontchooser_resizeevent_isbase = false;
            KFontChooser::resizeEvent(event);
        } else if (kfontchooser_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kfontchooser_resizeevent_callback(this, cbval1);
        } else {
            KFontChooser::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kfontchooser_closeevent_isbase) {
            kfontchooser_closeevent_isbase = false;
            KFontChooser::closeEvent(event);
        } else if (kfontchooser_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kfontchooser_closeevent_callback(this, cbval1);
        } else {
            KFontChooser::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kfontchooser_contextmenuevent_isbase) {
            kfontchooser_contextmenuevent_isbase = false;
            KFontChooser::contextMenuEvent(event);
        } else if (kfontchooser_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kfontchooser_contextmenuevent_callback(this, cbval1);
        } else {
            KFontChooser::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kfontchooser_tabletevent_isbase) {
            kfontchooser_tabletevent_isbase = false;
            KFontChooser::tabletEvent(event);
        } else if (kfontchooser_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kfontchooser_tabletevent_callback(this, cbval1);
        } else {
            KFontChooser::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kfontchooser_actionevent_isbase) {
            kfontchooser_actionevent_isbase = false;
            KFontChooser::actionEvent(event);
        } else if (kfontchooser_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kfontchooser_actionevent_callback(this, cbval1);
        } else {
            KFontChooser::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kfontchooser_dragenterevent_isbase) {
            kfontchooser_dragenterevent_isbase = false;
            KFontChooser::dragEnterEvent(event);
        } else if (kfontchooser_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kfontchooser_dragenterevent_callback(this, cbval1);
        } else {
            KFontChooser::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kfontchooser_dragmoveevent_isbase) {
            kfontchooser_dragmoveevent_isbase = false;
            KFontChooser::dragMoveEvent(event);
        } else if (kfontchooser_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kfontchooser_dragmoveevent_callback(this, cbval1);
        } else {
            KFontChooser::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kfontchooser_dragleaveevent_isbase) {
            kfontchooser_dragleaveevent_isbase = false;
            KFontChooser::dragLeaveEvent(event);
        } else if (kfontchooser_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kfontchooser_dragleaveevent_callback(this, cbval1);
        } else {
            KFontChooser::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kfontchooser_dropevent_isbase) {
            kfontchooser_dropevent_isbase = false;
            KFontChooser::dropEvent(event);
        } else if (kfontchooser_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kfontchooser_dropevent_callback(this, cbval1);
        } else {
            KFontChooser::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kfontchooser_showevent_isbase) {
            kfontchooser_showevent_isbase = false;
            KFontChooser::showEvent(event);
        } else if (kfontchooser_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kfontchooser_showevent_callback(this, cbval1);
        } else {
            KFontChooser::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kfontchooser_hideevent_isbase) {
            kfontchooser_hideevent_isbase = false;
            KFontChooser::hideEvent(event);
        } else if (kfontchooser_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kfontchooser_hideevent_callback(this, cbval1);
        } else {
            KFontChooser::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kfontchooser_nativeevent_isbase) {
            kfontchooser_nativeevent_isbase = false;
            return KFontChooser::nativeEvent(eventType, message, result);
        } else if (kfontchooser_nativeevent_callback != nullptr) {
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

            bool callback_ret = kfontchooser_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KFontChooser::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kfontchooser_changeevent_isbase) {
            kfontchooser_changeevent_isbase = false;
            KFontChooser::changeEvent(param1);
        } else if (kfontchooser_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kfontchooser_changeevent_callback(this, cbval1);
        } else {
            KFontChooser::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kfontchooser_metric_isbase) {
            kfontchooser_metric_isbase = false;
            return KFontChooser::metric(param1);
        } else if (kfontchooser_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kfontchooser_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFontChooser::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kfontchooser_initpainter_isbase) {
            kfontchooser_initpainter_isbase = false;
            KFontChooser::initPainter(painter);
        } else if (kfontchooser_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kfontchooser_initpainter_callback(this, cbval1);
        } else {
            KFontChooser::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kfontchooser_redirected_isbase) {
            kfontchooser_redirected_isbase = false;
            return KFontChooser::redirected(offset);
        } else if (kfontchooser_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kfontchooser_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFontChooser::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kfontchooser_sharedpainter_isbase) {
            kfontchooser_sharedpainter_isbase = false;
            return KFontChooser::sharedPainter();
        } else if (kfontchooser_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kfontchooser_sharedpainter_callback();
            return callback_ret;
        } else {
            return KFontChooser::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kfontchooser_inputmethodevent_isbase) {
            kfontchooser_inputmethodevent_isbase = false;
            KFontChooser::inputMethodEvent(param1);
        } else if (kfontchooser_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kfontchooser_inputmethodevent_callback(this, cbval1);
        } else {
            KFontChooser::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kfontchooser_inputmethodquery_isbase) {
            kfontchooser_inputmethodquery_isbase = false;
            return KFontChooser::inputMethodQuery(param1);
        } else if (kfontchooser_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kfontchooser_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KFontChooser::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kfontchooser_focusnextprevchild_isbase) {
            kfontchooser_focusnextprevchild_isbase = false;
            return KFontChooser::focusNextPrevChild(next);
        } else if (kfontchooser_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kfontchooser_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFontChooser::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfontchooser_eventfilter_isbase) {
            kfontchooser_eventfilter_isbase = false;
            return KFontChooser::eventFilter(watched, event);
        } else if (kfontchooser_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kfontchooser_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KFontChooser::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfontchooser_timerevent_isbase) {
            kfontchooser_timerevent_isbase = false;
            KFontChooser::timerEvent(event);
        } else if (kfontchooser_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kfontchooser_timerevent_callback(this, cbval1);
        } else {
            KFontChooser::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfontchooser_childevent_isbase) {
            kfontchooser_childevent_isbase = false;
            KFontChooser::childEvent(event);
        } else if (kfontchooser_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kfontchooser_childevent_callback(this, cbval1);
        } else {
            KFontChooser::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfontchooser_customevent_isbase) {
            kfontchooser_customevent_isbase = false;
            KFontChooser::customEvent(event);
        } else if (kfontchooser_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kfontchooser_customevent_callback(this, cbval1);
        } else {
            KFontChooser::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfontchooser_connectnotify_isbase) {
            kfontchooser_connectnotify_isbase = false;
            KFontChooser::connectNotify(signal);
        } else if (kfontchooser_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfontchooser_connectnotify_callback(this, cbval1);
        } else {
            KFontChooser::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfontchooser_disconnectnotify_isbase) {
            kfontchooser_disconnectnotify_isbase = false;
            KFontChooser::disconnectNotify(signal);
        } else if (kfontchooser_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfontchooser_disconnectnotify_callback(this, cbval1);
        } else {
            KFontChooser::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kfontchooser_updatemicrofocus_isbase) {
            kfontchooser_updatemicrofocus_isbase = false;
            KFontChooser::updateMicroFocus();
        } else if (kfontchooser_updatemicrofocus_callback != nullptr) {
            kfontchooser_updatemicrofocus_callback();
        } else {
            KFontChooser::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kfontchooser_create_isbase) {
            kfontchooser_create_isbase = false;
            KFontChooser::create();
        } else if (kfontchooser_create_callback != nullptr) {
            kfontchooser_create_callback();
        } else {
            KFontChooser::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kfontchooser_destroy_isbase) {
            kfontchooser_destroy_isbase = false;
            KFontChooser::destroy();
        } else if (kfontchooser_destroy_callback != nullptr) {
            kfontchooser_destroy_callback();
        } else {
            KFontChooser::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kfontchooser_focusnextchild_isbase) {
            kfontchooser_focusnextchild_isbase = false;
            return KFontChooser::focusNextChild();
        } else if (kfontchooser_focusnextchild_callback != nullptr) {
            bool callback_ret = kfontchooser_focusnextchild_callback();
            return callback_ret;
        } else {
            return KFontChooser::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kfontchooser_focuspreviouschild_isbase) {
            kfontchooser_focuspreviouschild_isbase = false;
            return KFontChooser::focusPreviousChild();
        } else if (kfontchooser_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kfontchooser_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KFontChooser::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfontchooser_sender_isbase) {
            kfontchooser_sender_isbase = false;
            return KFontChooser::sender();
        } else if (kfontchooser_sender_callback != nullptr) {
            QObject* callback_ret = kfontchooser_sender_callback();
            return callback_ret;
        } else {
            return KFontChooser::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfontchooser_sendersignalindex_isbase) {
            kfontchooser_sendersignalindex_isbase = false;
            return KFontChooser::senderSignalIndex();
        } else if (kfontchooser_sendersignalindex_callback != nullptr) {
            int callback_ret = kfontchooser_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFontChooser::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfontchooser_receivers_isbase) {
            kfontchooser_receivers_isbase = false;
            return KFontChooser::receivers(signal);
        } else if (kfontchooser_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kfontchooser_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFontChooser::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfontchooser_issignalconnected_isbase) {
            kfontchooser_issignalconnected_isbase = false;
            return KFontChooser::isSignalConnected(signal);
        } else if (kfontchooser_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kfontchooser_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFontChooser::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kfontchooser_getdecodedmetricf_isbase) {
            kfontchooser_getdecodedmetricf_isbase = false;
            return KFontChooser::getDecodedMetricF(metricA, metricB);
        } else if (kfontchooser_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kfontchooser_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KFontChooser::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KFontChooser_Event(KFontChooser* self, QEvent* event);
    friend bool KFontChooser_QBaseEvent(KFontChooser* self, QEvent* event);
    friend void KFontChooser_MousePressEvent(KFontChooser* self, QMouseEvent* event);
    friend void KFontChooser_QBaseMousePressEvent(KFontChooser* self, QMouseEvent* event);
    friend void KFontChooser_MouseReleaseEvent(KFontChooser* self, QMouseEvent* event);
    friend void KFontChooser_QBaseMouseReleaseEvent(KFontChooser* self, QMouseEvent* event);
    friend void KFontChooser_MouseDoubleClickEvent(KFontChooser* self, QMouseEvent* event);
    friend void KFontChooser_QBaseMouseDoubleClickEvent(KFontChooser* self, QMouseEvent* event);
    friend void KFontChooser_MouseMoveEvent(KFontChooser* self, QMouseEvent* event);
    friend void KFontChooser_QBaseMouseMoveEvent(KFontChooser* self, QMouseEvent* event);
    friend void KFontChooser_WheelEvent(KFontChooser* self, QWheelEvent* event);
    friend void KFontChooser_QBaseWheelEvent(KFontChooser* self, QWheelEvent* event);
    friend void KFontChooser_KeyPressEvent(KFontChooser* self, QKeyEvent* event);
    friend void KFontChooser_QBaseKeyPressEvent(KFontChooser* self, QKeyEvent* event);
    friend void KFontChooser_KeyReleaseEvent(KFontChooser* self, QKeyEvent* event);
    friend void KFontChooser_QBaseKeyReleaseEvent(KFontChooser* self, QKeyEvent* event);
    friend void KFontChooser_FocusInEvent(KFontChooser* self, QFocusEvent* event);
    friend void KFontChooser_QBaseFocusInEvent(KFontChooser* self, QFocusEvent* event);
    friend void KFontChooser_FocusOutEvent(KFontChooser* self, QFocusEvent* event);
    friend void KFontChooser_QBaseFocusOutEvent(KFontChooser* self, QFocusEvent* event);
    friend void KFontChooser_EnterEvent(KFontChooser* self, QEnterEvent* event);
    friend void KFontChooser_QBaseEnterEvent(KFontChooser* self, QEnterEvent* event);
    friend void KFontChooser_LeaveEvent(KFontChooser* self, QEvent* event);
    friend void KFontChooser_QBaseLeaveEvent(KFontChooser* self, QEvent* event);
    friend void KFontChooser_PaintEvent(KFontChooser* self, QPaintEvent* event);
    friend void KFontChooser_QBasePaintEvent(KFontChooser* self, QPaintEvent* event);
    friend void KFontChooser_MoveEvent(KFontChooser* self, QMoveEvent* event);
    friend void KFontChooser_QBaseMoveEvent(KFontChooser* self, QMoveEvent* event);
    friend void KFontChooser_ResizeEvent(KFontChooser* self, QResizeEvent* event);
    friend void KFontChooser_QBaseResizeEvent(KFontChooser* self, QResizeEvent* event);
    friend void KFontChooser_CloseEvent(KFontChooser* self, QCloseEvent* event);
    friend void KFontChooser_QBaseCloseEvent(KFontChooser* self, QCloseEvent* event);
    friend void KFontChooser_ContextMenuEvent(KFontChooser* self, QContextMenuEvent* event);
    friend void KFontChooser_QBaseContextMenuEvent(KFontChooser* self, QContextMenuEvent* event);
    friend void KFontChooser_TabletEvent(KFontChooser* self, QTabletEvent* event);
    friend void KFontChooser_QBaseTabletEvent(KFontChooser* self, QTabletEvent* event);
    friend void KFontChooser_ActionEvent(KFontChooser* self, QActionEvent* event);
    friend void KFontChooser_QBaseActionEvent(KFontChooser* self, QActionEvent* event);
    friend void KFontChooser_DragEnterEvent(KFontChooser* self, QDragEnterEvent* event);
    friend void KFontChooser_QBaseDragEnterEvent(KFontChooser* self, QDragEnterEvent* event);
    friend void KFontChooser_DragMoveEvent(KFontChooser* self, QDragMoveEvent* event);
    friend void KFontChooser_QBaseDragMoveEvent(KFontChooser* self, QDragMoveEvent* event);
    friend void KFontChooser_DragLeaveEvent(KFontChooser* self, QDragLeaveEvent* event);
    friend void KFontChooser_QBaseDragLeaveEvent(KFontChooser* self, QDragLeaveEvent* event);
    friend void KFontChooser_DropEvent(KFontChooser* self, QDropEvent* event);
    friend void KFontChooser_QBaseDropEvent(KFontChooser* self, QDropEvent* event);
    friend void KFontChooser_ShowEvent(KFontChooser* self, QShowEvent* event);
    friend void KFontChooser_QBaseShowEvent(KFontChooser* self, QShowEvent* event);
    friend void KFontChooser_HideEvent(KFontChooser* self, QHideEvent* event);
    friend void KFontChooser_QBaseHideEvent(KFontChooser* self, QHideEvent* event);
    friend bool KFontChooser_NativeEvent(KFontChooser* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KFontChooser_QBaseNativeEvent(KFontChooser* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KFontChooser_ChangeEvent(KFontChooser* self, QEvent* param1);
    friend void KFontChooser_QBaseChangeEvent(KFontChooser* self, QEvent* param1);
    friend int KFontChooser_Metric(const KFontChooser* self, int param1);
    friend int KFontChooser_QBaseMetric(const KFontChooser* self, int param1);
    friend void KFontChooser_InitPainter(const KFontChooser* self, QPainter* painter);
    friend void KFontChooser_QBaseInitPainter(const KFontChooser* self, QPainter* painter);
    friend QPaintDevice* KFontChooser_Redirected(const KFontChooser* self, QPoint* offset);
    friend QPaintDevice* KFontChooser_QBaseRedirected(const KFontChooser* self, QPoint* offset);
    friend QPainter* KFontChooser_SharedPainter(const KFontChooser* self);
    friend QPainter* KFontChooser_QBaseSharedPainter(const KFontChooser* self);
    friend void KFontChooser_InputMethodEvent(KFontChooser* self, QInputMethodEvent* param1);
    friend void KFontChooser_QBaseInputMethodEvent(KFontChooser* self, QInputMethodEvent* param1);
    friend bool KFontChooser_FocusNextPrevChild(KFontChooser* self, bool next);
    friend bool KFontChooser_QBaseFocusNextPrevChild(KFontChooser* self, bool next);
    friend void KFontChooser_TimerEvent(KFontChooser* self, QTimerEvent* event);
    friend void KFontChooser_QBaseTimerEvent(KFontChooser* self, QTimerEvent* event);
    friend void KFontChooser_ChildEvent(KFontChooser* self, QChildEvent* event);
    friend void KFontChooser_QBaseChildEvent(KFontChooser* self, QChildEvent* event);
    friend void KFontChooser_CustomEvent(KFontChooser* self, QEvent* event);
    friend void KFontChooser_QBaseCustomEvent(KFontChooser* self, QEvent* event);
    friend void KFontChooser_ConnectNotify(KFontChooser* self, const QMetaMethod* signal);
    friend void KFontChooser_QBaseConnectNotify(KFontChooser* self, const QMetaMethod* signal);
    friend void KFontChooser_DisconnectNotify(KFontChooser* self, const QMetaMethod* signal);
    friend void KFontChooser_QBaseDisconnectNotify(KFontChooser* self, const QMetaMethod* signal);
    friend void KFontChooser_UpdateMicroFocus(KFontChooser* self);
    friend void KFontChooser_QBaseUpdateMicroFocus(KFontChooser* self);
    friend void KFontChooser_Create(KFontChooser* self);
    friend void KFontChooser_QBaseCreate(KFontChooser* self);
    friend void KFontChooser_Destroy(KFontChooser* self);
    friend void KFontChooser_QBaseDestroy(KFontChooser* self);
    friend bool KFontChooser_FocusNextChild(KFontChooser* self);
    friend bool KFontChooser_QBaseFocusNextChild(KFontChooser* self);
    friend bool KFontChooser_FocusPreviousChild(KFontChooser* self);
    friend bool KFontChooser_QBaseFocusPreviousChild(KFontChooser* self);
    friend QObject* KFontChooser_Sender(const KFontChooser* self);
    friend QObject* KFontChooser_QBaseSender(const KFontChooser* self);
    friend int KFontChooser_SenderSignalIndex(const KFontChooser* self);
    friend int KFontChooser_QBaseSenderSignalIndex(const KFontChooser* self);
    friend int KFontChooser_Receivers(const KFontChooser* self, const char* signal);
    friend int KFontChooser_QBaseReceivers(const KFontChooser* self, const char* signal);
    friend bool KFontChooser_IsSignalConnected(const KFontChooser* self, const QMetaMethod* signal);
    friend bool KFontChooser_QBaseIsSignalConnected(const KFontChooser* self, const QMetaMethod* signal);
    friend double KFontChooser_GetDecodedMetricF(const KFontChooser* self, int metricA, int metricB);
    friend double KFontChooser_QBaseGetDecodedMetricF(const KFontChooser* self, int metricA, int metricB);
};

#endif
