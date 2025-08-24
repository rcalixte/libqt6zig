#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKCOLLAPSIBLEGROUPBOX_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKCOLLAPSIBLEGROUPBOX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCollapsibleGroupBox so that we can call protected methods
class VirtualKCollapsibleGroupBox final : public KCollapsibleGroupBox {

  public:
    // Virtual class boolean flag
    bool isVirtualKCollapsibleGroupBox = true;

    // Virtual class public types (including callbacks)
    using KCollapsibleGroupBox_Metacall_Callback = int (*)(KCollapsibleGroupBox*, int, int, void**);
    using KCollapsibleGroupBox_SizeHint_Callback = QSize* (*)();
    using KCollapsibleGroupBox_MinimumSizeHint_Callback = QSize* (*)();
    using KCollapsibleGroupBox_PaintEvent_Callback = void (*)(KCollapsibleGroupBox*, QPaintEvent*);
    using KCollapsibleGroupBox_Event_Callback = bool (*)(KCollapsibleGroupBox*, QEvent*);
    using KCollapsibleGroupBox_MousePressEvent_Callback = void (*)(KCollapsibleGroupBox*, QMouseEvent*);
    using KCollapsibleGroupBox_MouseMoveEvent_Callback = void (*)(KCollapsibleGroupBox*, QMouseEvent*);
    using KCollapsibleGroupBox_LeaveEvent_Callback = void (*)(KCollapsibleGroupBox*, QEvent*);
    using KCollapsibleGroupBox_KeyPressEvent_Callback = void (*)(KCollapsibleGroupBox*, QKeyEvent*);
    using KCollapsibleGroupBox_ResizeEvent_Callback = void (*)(KCollapsibleGroupBox*, QResizeEvent*);
    using KCollapsibleGroupBox_DevType_Callback = int (*)();
    using KCollapsibleGroupBox_SetVisible_Callback = void (*)(KCollapsibleGroupBox*, bool);
    using KCollapsibleGroupBox_HeightForWidth_Callback = int (*)(const KCollapsibleGroupBox*, int);
    using KCollapsibleGroupBox_HasHeightForWidth_Callback = bool (*)();
    using KCollapsibleGroupBox_PaintEngine_Callback = QPaintEngine* (*)();
    using KCollapsibleGroupBox_MouseReleaseEvent_Callback = void (*)(KCollapsibleGroupBox*, QMouseEvent*);
    using KCollapsibleGroupBox_MouseDoubleClickEvent_Callback = void (*)(KCollapsibleGroupBox*, QMouseEvent*);
    using KCollapsibleGroupBox_WheelEvent_Callback = void (*)(KCollapsibleGroupBox*, QWheelEvent*);
    using KCollapsibleGroupBox_KeyReleaseEvent_Callback = void (*)(KCollapsibleGroupBox*, QKeyEvent*);
    using KCollapsibleGroupBox_FocusInEvent_Callback = void (*)(KCollapsibleGroupBox*, QFocusEvent*);
    using KCollapsibleGroupBox_FocusOutEvent_Callback = void (*)(KCollapsibleGroupBox*, QFocusEvent*);
    using KCollapsibleGroupBox_EnterEvent_Callback = void (*)(KCollapsibleGroupBox*, QEnterEvent*);
    using KCollapsibleGroupBox_MoveEvent_Callback = void (*)(KCollapsibleGroupBox*, QMoveEvent*);
    using KCollapsibleGroupBox_CloseEvent_Callback = void (*)(KCollapsibleGroupBox*, QCloseEvent*);
    using KCollapsibleGroupBox_ContextMenuEvent_Callback = void (*)(KCollapsibleGroupBox*, QContextMenuEvent*);
    using KCollapsibleGroupBox_TabletEvent_Callback = void (*)(KCollapsibleGroupBox*, QTabletEvent*);
    using KCollapsibleGroupBox_ActionEvent_Callback = void (*)(KCollapsibleGroupBox*, QActionEvent*);
    using KCollapsibleGroupBox_DragEnterEvent_Callback = void (*)(KCollapsibleGroupBox*, QDragEnterEvent*);
    using KCollapsibleGroupBox_DragMoveEvent_Callback = void (*)(KCollapsibleGroupBox*, QDragMoveEvent*);
    using KCollapsibleGroupBox_DragLeaveEvent_Callback = void (*)(KCollapsibleGroupBox*, QDragLeaveEvent*);
    using KCollapsibleGroupBox_DropEvent_Callback = void (*)(KCollapsibleGroupBox*, QDropEvent*);
    using KCollapsibleGroupBox_ShowEvent_Callback = void (*)(KCollapsibleGroupBox*, QShowEvent*);
    using KCollapsibleGroupBox_HideEvent_Callback = void (*)(KCollapsibleGroupBox*, QHideEvent*);
    using KCollapsibleGroupBox_NativeEvent_Callback = bool (*)(KCollapsibleGroupBox*, libqt_string, void*, intptr_t*);
    using KCollapsibleGroupBox_ChangeEvent_Callback = void (*)(KCollapsibleGroupBox*, QEvent*);
    using KCollapsibleGroupBox_Metric_Callback = int (*)(const KCollapsibleGroupBox*, int);
    using KCollapsibleGroupBox_InitPainter_Callback = void (*)(const KCollapsibleGroupBox*, QPainter*);
    using KCollapsibleGroupBox_Redirected_Callback = QPaintDevice* (*)(const KCollapsibleGroupBox*, QPoint*);
    using KCollapsibleGroupBox_SharedPainter_Callback = QPainter* (*)();
    using KCollapsibleGroupBox_InputMethodEvent_Callback = void (*)(KCollapsibleGroupBox*, QInputMethodEvent*);
    using KCollapsibleGroupBox_InputMethodQuery_Callback = QVariant* (*)(const KCollapsibleGroupBox*, int);
    using KCollapsibleGroupBox_FocusNextPrevChild_Callback = bool (*)(KCollapsibleGroupBox*, bool);
    using KCollapsibleGroupBox_EventFilter_Callback = bool (*)(KCollapsibleGroupBox*, QObject*, QEvent*);
    using KCollapsibleGroupBox_TimerEvent_Callback = void (*)(KCollapsibleGroupBox*, QTimerEvent*);
    using KCollapsibleGroupBox_ChildEvent_Callback = void (*)(KCollapsibleGroupBox*, QChildEvent*);
    using KCollapsibleGroupBox_CustomEvent_Callback = void (*)(KCollapsibleGroupBox*, QEvent*);
    using KCollapsibleGroupBox_ConnectNotify_Callback = void (*)(KCollapsibleGroupBox*, QMetaMethod*);
    using KCollapsibleGroupBox_DisconnectNotify_Callback = void (*)(KCollapsibleGroupBox*, QMetaMethod*);
    using KCollapsibleGroupBox_UpdateMicroFocus_Callback = void (*)();
    using KCollapsibleGroupBox_Create_Callback = void (*)();
    using KCollapsibleGroupBox_Destroy_Callback = void (*)();
    using KCollapsibleGroupBox_FocusNextChild_Callback = bool (*)();
    using KCollapsibleGroupBox_FocusPreviousChild_Callback = bool (*)();
    using KCollapsibleGroupBox_Sender_Callback = QObject* (*)();
    using KCollapsibleGroupBox_SenderSignalIndex_Callback = int (*)();
    using KCollapsibleGroupBox_Receivers_Callback = int (*)(const KCollapsibleGroupBox*, const char*);
    using KCollapsibleGroupBox_IsSignalConnected_Callback = bool (*)(const KCollapsibleGroupBox*, QMetaMethod*);
    using KCollapsibleGroupBox_GetDecodedMetricF_Callback = double (*)(const KCollapsibleGroupBox*, int, int);

  protected:
    // Instance callback storage
    KCollapsibleGroupBox_Metacall_Callback kcollapsiblegroupbox_metacall_callback = nullptr;
    KCollapsibleGroupBox_SizeHint_Callback kcollapsiblegroupbox_sizehint_callback = nullptr;
    KCollapsibleGroupBox_MinimumSizeHint_Callback kcollapsiblegroupbox_minimumsizehint_callback = nullptr;
    KCollapsibleGroupBox_PaintEvent_Callback kcollapsiblegroupbox_paintevent_callback = nullptr;
    KCollapsibleGroupBox_Event_Callback kcollapsiblegroupbox_event_callback = nullptr;
    KCollapsibleGroupBox_MousePressEvent_Callback kcollapsiblegroupbox_mousepressevent_callback = nullptr;
    KCollapsibleGroupBox_MouseMoveEvent_Callback kcollapsiblegroupbox_mousemoveevent_callback = nullptr;
    KCollapsibleGroupBox_LeaveEvent_Callback kcollapsiblegroupbox_leaveevent_callback = nullptr;
    KCollapsibleGroupBox_KeyPressEvent_Callback kcollapsiblegroupbox_keypressevent_callback = nullptr;
    KCollapsibleGroupBox_ResizeEvent_Callback kcollapsiblegroupbox_resizeevent_callback = nullptr;
    KCollapsibleGroupBox_DevType_Callback kcollapsiblegroupbox_devtype_callback = nullptr;
    KCollapsibleGroupBox_SetVisible_Callback kcollapsiblegroupbox_setvisible_callback = nullptr;
    KCollapsibleGroupBox_HeightForWidth_Callback kcollapsiblegroupbox_heightforwidth_callback = nullptr;
    KCollapsibleGroupBox_HasHeightForWidth_Callback kcollapsiblegroupbox_hasheightforwidth_callback = nullptr;
    KCollapsibleGroupBox_PaintEngine_Callback kcollapsiblegroupbox_paintengine_callback = nullptr;
    KCollapsibleGroupBox_MouseReleaseEvent_Callback kcollapsiblegroupbox_mousereleaseevent_callback = nullptr;
    KCollapsibleGroupBox_MouseDoubleClickEvent_Callback kcollapsiblegroupbox_mousedoubleclickevent_callback = nullptr;
    KCollapsibleGroupBox_WheelEvent_Callback kcollapsiblegroupbox_wheelevent_callback = nullptr;
    KCollapsibleGroupBox_KeyReleaseEvent_Callback kcollapsiblegroupbox_keyreleaseevent_callback = nullptr;
    KCollapsibleGroupBox_FocusInEvent_Callback kcollapsiblegroupbox_focusinevent_callback = nullptr;
    KCollapsibleGroupBox_FocusOutEvent_Callback kcollapsiblegroupbox_focusoutevent_callback = nullptr;
    KCollapsibleGroupBox_EnterEvent_Callback kcollapsiblegroupbox_enterevent_callback = nullptr;
    KCollapsibleGroupBox_MoveEvent_Callback kcollapsiblegroupbox_moveevent_callback = nullptr;
    KCollapsibleGroupBox_CloseEvent_Callback kcollapsiblegroupbox_closeevent_callback = nullptr;
    KCollapsibleGroupBox_ContextMenuEvent_Callback kcollapsiblegroupbox_contextmenuevent_callback = nullptr;
    KCollapsibleGroupBox_TabletEvent_Callback kcollapsiblegroupbox_tabletevent_callback = nullptr;
    KCollapsibleGroupBox_ActionEvent_Callback kcollapsiblegroupbox_actionevent_callback = nullptr;
    KCollapsibleGroupBox_DragEnterEvent_Callback kcollapsiblegroupbox_dragenterevent_callback = nullptr;
    KCollapsibleGroupBox_DragMoveEvent_Callback kcollapsiblegroupbox_dragmoveevent_callback = nullptr;
    KCollapsibleGroupBox_DragLeaveEvent_Callback kcollapsiblegroupbox_dragleaveevent_callback = nullptr;
    KCollapsibleGroupBox_DropEvent_Callback kcollapsiblegroupbox_dropevent_callback = nullptr;
    KCollapsibleGroupBox_ShowEvent_Callback kcollapsiblegroupbox_showevent_callback = nullptr;
    KCollapsibleGroupBox_HideEvent_Callback kcollapsiblegroupbox_hideevent_callback = nullptr;
    KCollapsibleGroupBox_NativeEvent_Callback kcollapsiblegroupbox_nativeevent_callback = nullptr;
    KCollapsibleGroupBox_ChangeEvent_Callback kcollapsiblegroupbox_changeevent_callback = nullptr;
    KCollapsibleGroupBox_Metric_Callback kcollapsiblegroupbox_metric_callback = nullptr;
    KCollapsibleGroupBox_InitPainter_Callback kcollapsiblegroupbox_initpainter_callback = nullptr;
    KCollapsibleGroupBox_Redirected_Callback kcollapsiblegroupbox_redirected_callback = nullptr;
    KCollapsibleGroupBox_SharedPainter_Callback kcollapsiblegroupbox_sharedpainter_callback = nullptr;
    KCollapsibleGroupBox_InputMethodEvent_Callback kcollapsiblegroupbox_inputmethodevent_callback = nullptr;
    KCollapsibleGroupBox_InputMethodQuery_Callback kcollapsiblegroupbox_inputmethodquery_callback = nullptr;
    KCollapsibleGroupBox_FocusNextPrevChild_Callback kcollapsiblegroupbox_focusnextprevchild_callback = nullptr;
    KCollapsibleGroupBox_EventFilter_Callback kcollapsiblegroupbox_eventfilter_callback = nullptr;
    KCollapsibleGroupBox_TimerEvent_Callback kcollapsiblegroupbox_timerevent_callback = nullptr;
    KCollapsibleGroupBox_ChildEvent_Callback kcollapsiblegroupbox_childevent_callback = nullptr;
    KCollapsibleGroupBox_CustomEvent_Callback kcollapsiblegroupbox_customevent_callback = nullptr;
    KCollapsibleGroupBox_ConnectNotify_Callback kcollapsiblegroupbox_connectnotify_callback = nullptr;
    KCollapsibleGroupBox_DisconnectNotify_Callback kcollapsiblegroupbox_disconnectnotify_callback = nullptr;
    KCollapsibleGroupBox_UpdateMicroFocus_Callback kcollapsiblegroupbox_updatemicrofocus_callback = nullptr;
    KCollapsibleGroupBox_Create_Callback kcollapsiblegroupbox_create_callback = nullptr;
    KCollapsibleGroupBox_Destroy_Callback kcollapsiblegroupbox_destroy_callback = nullptr;
    KCollapsibleGroupBox_FocusNextChild_Callback kcollapsiblegroupbox_focusnextchild_callback = nullptr;
    KCollapsibleGroupBox_FocusPreviousChild_Callback kcollapsiblegroupbox_focuspreviouschild_callback = nullptr;
    KCollapsibleGroupBox_Sender_Callback kcollapsiblegroupbox_sender_callback = nullptr;
    KCollapsibleGroupBox_SenderSignalIndex_Callback kcollapsiblegroupbox_sendersignalindex_callback = nullptr;
    KCollapsibleGroupBox_Receivers_Callback kcollapsiblegroupbox_receivers_callback = nullptr;
    KCollapsibleGroupBox_IsSignalConnected_Callback kcollapsiblegroupbox_issignalconnected_callback = nullptr;
    KCollapsibleGroupBox_GetDecodedMetricF_Callback kcollapsiblegroupbox_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kcollapsiblegroupbox_metacall_isbase = false;
    mutable bool kcollapsiblegroupbox_sizehint_isbase = false;
    mutable bool kcollapsiblegroupbox_minimumsizehint_isbase = false;
    mutable bool kcollapsiblegroupbox_paintevent_isbase = false;
    mutable bool kcollapsiblegroupbox_event_isbase = false;
    mutable bool kcollapsiblegroupbox_mousepressevent_isbase = false;
    mutable bool kcollapsiblegroupbox_mousemoveevent_isbase = false;
    mutable bool kcollapsiblegroupbox_leaveevent_isbase = false;
    mutable bool kcollapsiblegroupbox_keypressevent_isbase = false;
    mutable bool kcollapsiblegroupbox_resizeevent_isbase = false;
    mutable bool kcollapsiblegroupbox_devtype_isbase = false;
    mutable bool kcollapsiblegroupbox_setvisible_isbase = false;
    mutable bool kcollapsiblegroupbox_heightforwidth_isbase = false;
    mutable bool kcollapsiblegroupbox_hasheightforwidth_isbase = false;
    mutable bool kcollapsiblegroupbox_paintengine_isbase = false;
    mutable bool kcollapsiblegroupbox_mousereleaseevent_isbase = false;
    mutable bool kcollapsiblegroupbox_mousedoubleclickevent_isbase = false;
    mutable bool kcollapsiblegroupbox_wheelevent_isbase = false;
    mutable bool kcollapsiblegroupbox_keyreleaseevent_isbase = false;
    mutable bool kcollapsiblegroupbox_focusinevent_isbase = false;
    mutable bool kcollapsiblegroupbox_focusoutevent_isbase = false;
    mutable bool kcollapsiblegroupbox_enterevent_isbase = false;
    mutable bool kcollapsiblegroupbox_moveevent_isbase = false;
    mutable bool kcollapsiblegroupbox_closeevent_isbase = false;
    mutable bool kcollapsiblegroupbox_contextmenuevent_isbase = false;
    mutable bool kcollapsiblegroupbox_tabletevent_isbase = false;
    mutable bool kcollapsiblegroupbox_actionevent_isbase = false;
    mutable bool kcollapsiblegroupbox_dragenterevent_isbase = false;
    mutable bool kcollapsiblegroupbox_dragmoveevent_isbase = false;
    mutable bool kcollapsiblegroupbox_dragleaveevent_isbase = false;
    mutable bool kcollapsiblegroupbox_dropevent_isbase = false;
    mutable bool kcollapsiblegroupbox_showevent_isbase = false;
    mutable bool kcollapsiblegroupbox_hideevent_isbase = false;
    mutable bool kcollapsiblegroupbox_nativeevent_isbase = false;
    mutable bool kcollapsiblegroupbox_changeevent_isbase = false;
    mutable bool kcollapsiblegroupbox_metric_isbase = false;
    mutable bool kcollapsiblegroupbox_initpainter_isbase = false;
    mutable bool kcollapsiblegroupbox_redirected_isbase = false;
    mutable bool kcollapsiblegroupbox_sharedpainter_isbase = false;
    mutable bool kcollapsiblegroupbox_inputmethodevent_isbase = false;
    mutable bool kcollapsiblegroupbox_inputmethodquery_isbase = false;
    mutable bool kcollapsiblegroupbox_focusnextprevchild_isbase = false;
    mutable bool kcollapsiblegroupbox_eventfilter_isbase = false;
    mutable bool kcollapsiblegroupbox_timerevent_isbase = false;
    mutable bool kcollapsiblegroupbox_childevent_isbase = false;
    mutable bool kcollapsiblegroupbox_customevent_isbase = false;
    mutable bool kcollapsiblegroupbox_connectnotify_isbase = false;
    mutable bool kcollapsiblegroupbox_disconnectnotify_isbase = false;
    mutable bool kcollapsiblegroupbox_updatemicrofocus_isbase = false;
    mutable bool kcollapsiblegroupbox_create_isbase = false;
    mutable bool kcollapsiblegroupbox_destroy_isbase = false;
    mutable bool kcollapsiblegroupbox_focusnextchild_isbase = false;
    mutable bool kcollapsiblegroupbox_focuspreviouschild_isbase = false;
    mutable bool kcollapsiblegroupbox_sender_isbase = false;
    mutable bool kcollapsiblegroupbox_sendersignalindex_isbase = false;
    mutable bool kcollapsiblegroupbox_receivers_isbase = false;
    mutable bool kcollapsiblegroupbox_issignalconnected_isbase = false;
    mutable bool kcollapsiblegroupbox_getdecodedmetricf_isbase = false;

  public:
    VirtualKCollapsibleGroupBox(QWidget* parent) : KCollapsibleGroupBox(parent) {};
    VirtualKCollapsibleGroupBox() : KCollapsibleGroupBox() {};

    ~VirtualKCollapsibleGroupBox() {
        kcollapsiblegroupbox_metacall_callback = nullptr;
        kcollapsiblegroupbox_sizehint_callback = nullptr;
        kcollapsiblegroupbox_minimumsizehint_callback = nullptr;
        kcollapsiblegroupbox_paintevent_callback = nullptr;
        kcollapsiblegroupbox_event_callback = nullptr;
        kcollapsiblegroupbox_mousepressevent_callback = nullptr;
        kcollapsiblegroupbox_mousemoveevent_callback = nullptr;
        kcollapsiblegroupbox_leaveevent_callback = nullptr;
        kcollapsiblegroupbox_keypressevent_callback = nullptr;
        kcollapsiblegroupbox_resizeevent_callback = nullptr;
        kcollapsiblegroupbox_devtype_callback = nullptr;
        kcollapsiblegroupbox_setvisible_callback = nullptr;
        kcollapsiblegroupbox_heightforwidth_callback = nullptr;
        kcollapsiblegroupbox_hasheightforwidth_callback = nullptr;
        kcollapsiblegroupbox_paintengine_callback = nullptr;
        kcollapsiblegroupbox_mousereleaseevent_callback = nullptr;
        kcollapsiblegroupbox_mousedoubleclickevent_callback = nullptr;
        kcollapsiblegroupbox_wheelevent_callback = nullptr;
        kcollapsiblegroupbox_keyreleaseevent_callback = nullptr;
        kcollapsiblegroupbox_focusinevent_callback = nullptr;
        kcollapsiblegroupbox_focusoutevent_callback = nullptr;
        kcollapsiblegroupbox_enterevent_callback = nullptr;
        kcollapsiblegroupbox_moveevent_callback = nullptr;
        kcollapsiblegroupbox_closeevent_callback = nullptr;
        kcollapsiblegroupbox_contextmenuevent_callback = nullptr;
        kcollapsiblegroupbox_tabletevent_callback = nullptr;
        kcollapsiblegroupbox_actionevent_callback = nullptr;
        kcollapsiblegroupbox_dragenterevent_callback = nullptr;
        kcollapsiblegroupbox_dragmoveevent_callback = nullptr;
        kcollapsiblegroupbox_dragleaveevent_callback = nullptr;
        kcollapsiblegroupbox_dropevent_callback = nullptr;
        kcollapsiblegroupbox_showevent_callback = nullptr;
        kcollapsiblegroupbox_hideevent_callback = nullptr;
        kcollapsiblegroupbox_nativeevent_callback = nullptr;
        kcollapsiblegroupbox_changeevent_callback = nullptr;
        kcollapsiblegroupbox_metric_callback = nullptr;
        kcollapsiblegroupbox_initpainter_callback = nullptr;
        kcollapsiblegroupbox_redirected_callback = nullptr;
        kcollapsiblegroupbox_sharedpainter_callback = nullptr;
        kcollapsiblegroupbox_inputmethodevent_callback = nullptr;
        kcollapsiblegroupbox_inputmethodquery_callback = nullptr;
        kcollapsiblegroupbox_focusnextprevchild_callback = nullptr;
        kcollapsiblegroupbox_eventfilter_callback = nullptr;
        kcollapsiblegroupbox_timerevent_callback = nullptr;
        kcollapsiblegroupbox_childevent_callback = nullptr;
        kcollapsiblegroupbox_customevent_callback = nullptr;
        kcollapsiblegroupbox_connectnotify_callback = nullptr;
        kcollapsiblegroupbox_disconnectnotify_callback = nullptr;
        kcollapsiblegroupbox_updatemicrofocus_callback = nullptr;
        kcollapsiblegroupbox_create_callback = nullptr;
        kcollapsiblegroupbox_destroy_callback = nullptr;
        kcollapsiblegroupbox_focusnextchild_callback = nullptr;
        kcollapsiblegroupbox_focuspreviouschild_callback = nullptr;
        kcollapsiblegroupbox_sender_callback = nullptr;
        kcollapsiblegroupbox_sendersignalindex_callback = nullptr;
        kcollapsiblegroupbox_receivers_callback = nullptr;
        kcollapsiblegroupbox_issignalconnected_callback = nullptr;
        kcollapsiblegroupbox_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKCollapsibleGroupBox_Metacall_Callback(KCollapsibleGroupBox_Metacall_Callback cb) { kcollapsiblegroupbox_metacall_callback = cb; }
    inline void setKCollapsibleGroupBox_SizeHint_Callback(KCollapsibleGroupBox_SizeHint_Callback cb) { kcollapsiblegroupbox_sizehint_callback = cb; }
    inline void setKCollapsibleGroupBox_MinimumSizeHint_Callback(KCollapsibleGroupBox_MinimumSizeHint_Callback cb) { kcollapsiblegroupbox_minimumsizehint_callback = cb; }
    inline void setKCollapsibleGroupBox_PaintEvent_Callback(KCollapsibleGroupBox_PaintEvent_Callback cb) { kcollapsiblegroupbox_paintevent_callback = cb; }
    inline void setKCollapsibleGroupBox_Event_Callback(KCollapsibleGroupBox_Event_Callback cb) { kcollapsiblegroupbox_event_callback = cb; }
    inline void setKCollapsibleGroupBox_MousePressEvent_Callback(KCollapsibleGroupBox_MousePressEvent_Callback cb) { kcollapsiblegroupbox_mousepressevent_callback = cb; }
    inline void setKCollapsibleGroupBox_MouseMoveEvent_Callback(KCollapsibleGroupBox_MouseMoveEvent_Callback cb) { kcollapsiblegroupbox_mousemoveevent_callback = cb; }
    inline void setKCollapsibleGroupBox_LeaveEvent_Callback(KCollapsibleGroupBox_LeaveEvent_Callback cb) { kcollapsiblegroupbox_leaveevent_callback = cb; }
    inline void setKCollapsibleGroupBox_KeyPressEvent_Callback(KCollapsibleGroupBox_KeyPressEvent_Callback cb) { kcollapsiblegroupbox_keypressevent_callback = cb; }
    inline void setKCollapsibleGroupBox_ResizeEvent_Callback(KCollapsibleGroupBox_ResizeEvent_Callback cb) { kcollapsiblegroupbox_resizeevent_callback = cb; }
    inline void setKCollapsibleGroupBox_DevType_Callback(KCollapsibleGroupBox_DevType_Callback cb) { kcollapsiblegroupbox_devtype_callback = cb; }
    inline void setKCollapsibleGroupBox_SetVisible_Callback(KCollapsibleGroupBox_SetVisible_Callback cb) { kcollapsiblegroupbox_setvisible_callback = cb; }
    inline void setKCollapsibleGroupBox_HeightForWidth_Callback(KCollapsibleGroupBox_HeightForWidth_Callback cb) { kcollapsiblegroupbox_heightforwidth_callback = cb; }
    inline void setKCollapsibleGroupBox_HasHeightForWidth_Callback(KCollapsibleGroupBox_HasHeightForWidth_Callback cb) { kcollapsiblegroupbox_hasheightforwidth_callback = cb; }
    inline void setKCollapsibleGroupBox_PaintEngine_Callback(KCollapsibleGroupBox_PaintEngine_Callback cb) { kcollapsiblegroupbox_paintengine_callback = cb; }
    inline void setKCollapsibleGroupBox_MouseReleaseEvent_Callback(KCollapsibleGroupBox_MouseReleaseEvent_Callback cb) { kcollapsiblegroupbox_mousereleaseevent_callback = cb; }
    inline void setKCollapsibleGroupBox_MouseDoubleClickEvent_Callback(KCollapsibleGroupBox_MouseDoubleClickEvent_Callback cb) { kcollapsiblegroupbox_mousedoubleclickevent_callback = cb; }
    inline void setKCollapsibleGroupBox_WheelEvent_Callback(KCollapsibleGroupBox_WheelEvent_Callback cb) { kcollapsiblegroupbox_wheelevent_callback = cb; }
    inline void setKCollapsibleGroupBox_KeyReleaseEvent_Callback(KCollapsibleGroupBox_KeyReleaseEvent_Callback cb) { kcollapsiblegroupbox_keyreleaseevent_callback = cb; }
    inline void setKCollapsibleGroupBox_FocusInEvent_Callback(KCollapsibleGroupBox_FocusInEvent_Callback cb) { kcollapsiblegroupbox_focusinevent_callback = cb; }
    inline void setKCollapsibleGroupBox_FocusOutEvent_Callback(KCollapsibleGroupBox_FocusOutEvent_Callback cb) { kcollapsiblegroupbox_focusoutevent_callback = cb; }
    inline void setKCollapsibleGroupBox_EnterEvent_Callback(KCollapsibleGroupBox_EnterEvent_Callback cb) { kcollapsiblegroupbox_enterevent_callback = cb; }
    inline void setKCollapsibleGroupBox_MoveEvent_Callback(KCollapsibleGroupBox_MoveEvent_Callback cb) { kcollapsiblegroupbox_moveevent_callback = cb; }
    inline void setKCollapsibleGroupBox_CloseEvent_Callback(KCollapsibleGroupBox_CloseEvent_Callback cb) { kcollapsiblegroupbox_closeevent_callback = cb; }
    inline void setKCollapsibleGroupBox_ContextMenuEvent_Callback(KCollapsibleGroupBox_ContextMenuEvent_Callback cb) { kcollapsiblegroupbox_contextmenuevent_callback = cb; }
    inline void setKCollapsibleGroupBox_TabletEvent_Callback(KCollapsibleGroupBox_TabletEvent_Callback cb) { kcollapsiblegroupbox_tabletevent_callback = cb; }
    inline void setKCollapsibleGroupBox_ActionEvent_Callback(KCollapsibleGroupBox_ActionEvent_Callback cb) { kcollapsiblegroupbox_actionevent_callback = cb; }
    inline void setKCollapsibleGroupBox_DragEnterEvent_Callback(KCollapsibleGroupBox_DragEnterEvent_Callback cb) { kcollapsiblegroupbox_dragenterevent_callback = cb; }
    inline void setKCollapsibleGroupBox_DragMoveEvent_Callback(KCollapsibleGroupBox_DragMoveEvent_Callback cb) { kcollapsiblegroupbox_dragmoveevent_callback = cb; }
    inline void setKCollapsibleGroupBox_DragLeaveEvent_Callback(KCollapsibleGroupBox_DragLeaveEvent_Callback cb) { kcollapsiblegroupbox_dragleaveevent_callback = cb; }
    inline void setKCollapsibleGroupBox_DropEvent_Callback(KCollapsibleGroupBox_DropEvent_Callback cb) { kcollapsiblegroupbox_dropevent_callback = cb; }
    inline void setKCollapsibleGroupBox_ShowEvent_Callback(KCollapsibleGroupBox_ShowEvent_Callback cb) { kcollapsiblegroupbox_showevent_callback = cb; }
    inline void setKCollapsibleGroupBox_HideEvent_Callback(KCollapsibleGroupBox_HideEvent_Callback cb) { kcollapsiblegroupbox_hideevent_callback = cb; }
    inline void setKCollapsibleGroupBox_NativeEvent_Callback(KCollapsibleGroupBox_NativeEvent_Callback cb) { kcollapsiblegroupbox_nativeevent_callback = cb; }
    inline void setKCollapsibleGroupBox_ChangeEvent_Callback(KCollapsibleGroupBox_ChangeEvent_Callback cb) { kcollapsiblegroupbox_changeevent_callback = cb; }
    inline void setKCollapsibleGroupBox_Metric_Callback(KCollapsibleGroupBox_Metric_Callback cb) { kcollapsiblegroupbox_metric_callback = cb; }
    inline void setKCollapsibleGroupBox_InitPainter_Callback(KCollapsibleGroupBox_InitPainter_Callback cb) { kcollapsiblegroupbox_initpainter_callback = cb; }
    inline void setKCollapsibleGroupBox_Redirected_Callback(KCollapsibleGroupBox_Redirected_Callback cb) { kcollapsiblegroupbox_redirected_callback = cb; }
    inline void setKCollapsibleGroupBox_SharedPainter_Callback(KCollapsibleGroupBox_SharedPainter_Callback cb) { kcollapsiblegroupbox_sharedpainter_callback = cb; }
    inline void setKCollapsibleGroupBox_InputMethodEvent_Callback(KCollapsibleGroupBox_InputMethodEvent_Callback cb) { kcollapsiblegroupbox_inputmethodevent_callback = cb; }
    inline void setKCollapsibleGroupBox_InputMethodQuery_Callback(KCollapsibleGroupBox_InputMethodQuery_Callback cb) { kcollapsiblegroupbox_inputmethodquery_callback = cb; }
    inline void setKCollapsibleGroupBox_FocusNextPrevChild_Callback(KCollapsibleGroupBox_FocusNextPrevChild_Callback cb) { kcollapsiblegroupbox_focusnextprevchild_callback = cb; }
    inline void setKCollapsibleGroupBox_EventFilter_Callback(KCollapsibleGroupBox_EventFilter_Callback cb) { kcollapsiblegroupbox_eventfilter_callback = cb; }
    inline void setKCollapsibleGroupBox_TimerEvent_Callback(KCollapsibleGroupBox_TimerEvent_Callback cb) { kcollapsiblegroupbox_timerevent_callback = cb; }
    inline void setKCollapsibleGroupBox_ChildEvent_Callback(KCollapsibleGroupBox_ChildEvent_Callback cb) { kcollapsiblegroupbox_childevent_callback = cb; }
    inline void setKCollapsibleGroupBox_CustomEvent_Callback(KCollapsibleGroupBox_CustomEvent_Callback cb) { kcollapsiblegroupbox_customevent_callback = cb; }
    inline void setKCollapsibleGroupBox_ConnectNotify_Callback(KCollapsibleGroupBox_ConnectNotify_Callback cb) { kcollapsiblegroupbox_connectnotify_callback = cb; }
    inline void setKCollapsibleGroupBox_DisconnectNotify_Callback(KCollapsibleGroupBox_DisconnectNotify_Callback cb) { kcollapsiblegroupbox_disconnectnotify_callback = cb; }
    inline void setKCollapsibleGroupBox_UpdateMicroFocus_Callback(KCollapsibleGroupBox_UpdateMicroFocus_Callback cb) { kcollapsiblegroupbox_updatemicrofocus_callback = cb; }
    inline void setKCollapsibleGroupBox_Create_Callback(KCollapsibleGroupBox_Create_Callback cb) { kcollapsiblegroupbox_create_callback = cb; }
    inline void setKCollapsibleGroupBox_Destroy_Callback(KCollapsibleGroupBox_Destroy_Callback cb) { kcollapsiblegroupbox_destroy_callback = cb; }
    inline void setKCollapsibleGroupBox_FocusNextChild_Callback(KCollapsibleGroupBox_FocusNextChild_Callback cb) { kcollapsiblegroupbox_focusnextchild_callback = cb; }
    inline void setKCollapsibleGroupBox_FocusPreviousChild_Callback(KCollapsibleGroupBox_FocusPreviousChild_Callback cb) { kcollapsiblegroupbox_focuspreviouschild_callback = cb; }
    inline void setKCollapsibleGroupBox_Sender_Callback(KCollapsibleGroupBox_Sender_Callback cb) { kcollapsiblegroupbox_sender_callback = cb; }
    inline void setKCollapsibleGroupBox_SenderSignalIndex_Callback(KCollapsibleGroupBox_SenderSignalIndex_Callback cb) { kcollapsiblegroupbox_sendersignalindex_callback = cb; }
    inline void setKCollapsibleGroupBox_Receivers_Callback(KCollapsibleGroupBox_Receivers_Callback cb) { kcollapsiblegroupbox_receivers_callback = cb; }
    inline void setKCollapsibleGroupBox_IsSignalConnected_Callback(KCollapsibleGroupBox_IsSignalConnected_Callback cb) { kcollapsiblegroupbox_issignalconnected_callback = cb; }
    inline void setKCollapsibleGroupBox_GetDecodedMetricF_Callback(KCollapsibleGroupBox_GetDecodedMetricF_Callback cb) { kcollapsiblegroupbox_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKCollapsibleGroupBox_Metacall_IsBase(bool value) const { kcollapsiblegroupbox_metacall_isbase = value; }
    inline void setKCollapsibleGroupBox_SizeHint_IsBase(bool value) const { kcollapsiblegroupbox_sizehint_isbase = value; }
    inline void setKCollapsibleGroupBox_MinimumSizeHint_IsBase(bool value) const { kcollapsiblegroupbox_minimumsizehint_isbase = value; }
    inline void setKCollapsibleGroupBox_PaintEvent_IsBase(bool value) const { kcollapsiblegroupbox_paintevent_isbase = value; }
    inline void setKCollapsibleGroupBox_Event_IsBase(bool value) const { kcollapsiblegroupbox_event_isbase = value; }
    inline void setKCollapsibleGroupBox_MousePressEvent_IsBase(bool value) const { kcollapsiblegroupbox_mousepressevent_isbase = value; }
    inline void setKCollapsibleGroupBox_MouseMoveEvent_IsBase(bool value) const { kcollapsiblegroupbox_mousemoveevent_isbase = value; }
    inline void setKCollapsibleGroupBox_LeaveEvent_IsBase(bool value) const { kcollapsiblegroupbox_leaveevent_isbase = value; }
    inline void setKCollapsibleGroupBox_KeyPressEvent_IsBase(bool value) const { kcollapsiblegroupbox_keypressevent_isbase = value; }
    inline void setKCollapsibleGroupBox_ResizeEvent_IsBase(bool value) const { kcollapsiblegroupbox_resizeevent_isbase = value; }
    inline void setKCollapsibleGroupBox_DevType_IsBase(bool value) const { kcollapsiblegroupbox_devtype_isbase = value; }
    inline void setKCollapsibleGroupBox_SetVisible_IsBase(bool value) const { kcollapsiblegroupbox_setvisible_isbase = value; }
    inline void setKCollapsibleGroupBox_HeightForWidth_IsBase(bool value) const { kcollapsiblegroupbox_heightforwidth_isbase = value; }
    inline void setKCollapsibleGroupBox_HasHeightForWidth_IsBase(bool value) const { kcollapsiblegroupbox_hasheightforwidth_isbase = value; }
    inline void setKCollapsibleGroupBox_PaintEngine_IsBase(bool value) const { kcollapsiblegroupbox_paintengine_isbase = value; }
    inline void setKCollapsibleGroupBox_MouseReleaseEvent_IsBase(bool value) const { kcollapsiblegroupbox_mousereleaseevent_isbase = value; }
    inline void setKCollapsibleGroupBox_MouseDoubleClickEvent_IsBase(bool value) const { kcollapsiblegroupbox_mousedoubleclickevent_isbase = value; }
    inline void setKCollapsibleGroupBox_WheelEvent_IsBase(bool value) const { kcollapsiblegroupbox_wheelevent_isbase = value; }
    inline void setKCollapsibleGroupBox_KeyReleaseEvent_IsBase(bool value) const { kcollapsiblegroupbox_keyreleaseevent_isbase = value; }
    inline void setKCollapsibleGroupBox_FocusInEvent_IsBase(bool value) const { kcollapsiblegroupbox_focusinevent_isbase = value; }
    inline void setKCollapsibleGroupBox_FocusOutEvent_IsBase(bool value) const { kcollapsiblegroupbox_focusoutevent_isbase = value; }
    inline void setKCollapsibleGroupBox_EnterEvent_IsBase(bool value) const { kcollapsiblegroupbox_enterevent_isbase = value; }
    inline void setKCollapsibleGroupBox_MoveEvent_IsBase(bool value) const { kcollapsiblegroupbox_moveevent_isbase = value; }
    inline void setKCollapsibleGroupBox_CloseEvent_IsBase(bool value) const { kcollapsiblegroupbox_closeevent_isbase = value; }
    inline void setKCollapsibleGroupBox_ContextMenuEvent_IsBase(bool value) const { kcollapsiblegroupbox_contextmenuevent_isbase = value; }
    inline void setKCollapsibleGroupBox_TabletEvent_IsBase(bool value) const { kcollapsiblegroupbox_tabletevent_isbase = value; }
    inline void setKCollapsibleGroupBox_ActionEvent_IsBase(bool value) const { kcollapsiblegroupbox_actionevent_isbase = value; }
    inline void setKCollapsibleGroupBox_DragEnterEvent_IsBase(bool value) const { kcollapsiblegroupbox_dragenterevent_isbase = value; }
    inline void setKCollapsibleGroupBox_DragMoveEvent_IsBase(bool value) const { kcollapsiblegroupbox_dragmoveevent_isbase = value; }
    inline void setKCollapsibleGroupBox_DragLeaveEvent_IsBase(bool value) const { kcollapsiblegroupbox_dragleaveevent_isbase = value; }
    inline void setKCollapsibleGroupBox_DropEvent_IsBase(bool value) const { kcollapsiblegroupbox_dropevent_isbase = value; }
    inline void setKCollapsibleGroupBox_ShowEvent_IsBase(bool value) const { kcollapsiblegroupbox_showevent_isbase = value; }
    inline void setKCollapsibleGroupBox_HideEvent_IsBase(bool value) const { kcollapsiblegroupbox_hideevent_isbase = value; }
    inline void setKCollapsibleGroupBox_NativeEvent_IsBase(bool value) const { kcollapsiblegroupbox_nativeevent_isbase = value; }
    inline void setKCollapsibleGroupBox_ChangeEvent_IsBase(bool value) const { kcollapsiblegroupbox_changeevent_isbase = value; }
    inline void setKCollapsibleGroupBox_Metric_IsBase(bool value) const { kcollapsiblegroupbox_metric_isbase = value; }
    inline void setKCollapsibleGroupBox_InitPainter_IsBase(bool value) const { kcollapsiblegroupbox_initpainter_isbase = value; }
    inline void setKCollapsibleGroupBox_Redirected_IsBase(bool value) const { kcollapsiblegroupbox_redirected_isbase = value; }
    inline void setKCollapsibleGroupBox_SharedPainter_IsBase(bool value) const { kcollapsiblegroupbox_sharedpainter_isbase = value; }
    inline void setKCollapsibleGroupBox_InputMethodEvent_IsBase(bool value) const { kcollapsiblegroupbox_inputmethodevent_isbase = value; }
    inline void setKCollapsibleGroupBox_InputMethodQuery_IsBase(bool value) const { kcollapsiblegroupbox_inputmethodquery_isbase = value; }
    inline void setKCollapsibleGroupBox_FocusNextPrevChild_IsBase(bool value) const { kcollapsiblegroupbox_focusnextprevchild_isbase = value; }
    inline void setKCollapsibleGroupBox_EventFilter_IsBase(bool value) const { kcollapsiblegroupbox_eventfilter_isbase = value; }
    inline void setKCollapsibleGroupBox_TimerEvent_IsBase(bool value) const { kcollapsiblegroupbox_timerevent_isbase = value; }
    inline void setKCollapsibleGroupBox_ChildEvent_IsBase(bool value) const { kcollapsiblegroupbox_childevent_isbase = value; }
    inline void setKCollapsibleGroupBox_CustomEvent_IsBase(bool value) const { kcollapsiblegroupbox_customevent_isbase = value; }
    inline void setKCollapsibleGroupBox_ConnectNotify_IsBase(bool value) const { kcollapsiblegroupbox_connectnotify_isbase = value; }
    inline void setKCollapsibleGroupBox_DisconnectNotify_IsBase(bool value) const { kcollapsiblegroupbox_disconnectnotify_isbase = value; }
    inline void setKCollapsibleGroupBox_UpdateMicroFocus_IsBase(bool value) const { kcollapsiblegroupbox_updatemicrofocus_isbase = value; }
    inline void setKCollapsibleGroupBox_Create_IsBase(bool value) const { kcollapsiblegroupbox_create_isbase = value; }
    inline void setKCollapsibleGroupBox_Destroy_IsBase(bool value) const { kcollapsiblegroupbox_destroy_isbase = value; }
    inline void setKCollapsibleGroupBox_FocusNextChild_IsBase(bool value) const { kcollapsiblegroupbox_focusnextchild_isbase = value; }
    inline void setKCollapsibleGroupBox_FocusPreviousChild_IsBase(bool value) const { kcollapsiblegroupbox_focuspreviouschild_isbase = value; }
    inline void setKCollapsibleGroupBox_Sender_IsBase(bool value) const { kcollapsiblegroupbox_sender_isbase = value; }
    inline void setKCollapsibleGroupBox_SenderSignalIndex_IsBase(bool value) const { kcollapsiblegroupbox_sendersignalindex_isbase = value; }
    inline void setKCollapsibleGroupBox_Receivers_IsBase(bool value) const { kcollapsiblegroupbox_receivers_isbase = value; }
    inline void setKCollapsibleGroupBox_IsSignalConnected_IsBase(bool value) const { kcollapsiblegroupbox_issignalconnected_isbase = value; }
    inline void setKCollapsibleGroupBox_GetDecodedMetricF_IsBase(bool value) const { kcollapsiblegroupbox_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcollapsiblegroupbox_metacall_isbase) {
            kcollapsiblegroupbox_metacall_isbase = false;
            return KCollapsibleGroupBox::qt_metacall(param1, param2, param3);
        } else if (kcollapsiblegroupbox_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kcollapsiblegroupbox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KCollapsibleGroupBox::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kcollapsiblegroupbox_sizehint_isbase) {
            kcollapsiblegroupbox_sizehint_isbase = false;
            return KCollapsibleGroupBox::sizeHint();
        } else if (kcollapsiblegroupbox_sizehint_callback != nullptr) {
            QSize* callback_ret = kcollapsiblegroupbox_sizehint_callback();
            return *callback_ret;
        } else {
            return KCollapsibleGroupBox::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kcollapsiblegroupbox_minimumsizehint_isbase) {
            kcollapsiblegroupbox_minimumsizehint_isbase = false;
            return KCollapsibleGroupBox::minimumSizeHint();
        } else if (kcollapsiblegroupbox_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kcollapsiblegroupbox_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KCollapsibleGroupBox::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kcollapsiblegroupbox_paintevent_isbase) {
            kcollapsiblegroupbox_paintevent_isbase = false;
            KCollapsibleGroupBox::paintEvent(param1);
        } else if (kcollapsiblegroupbox_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            kcollapsiblegroupbox_paintevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (kcollapsiblegroupbox_event_isbase) {
            kcollapsiblegroupbox_event_isbase = false;
            return KCollapsibleGroupBox::event(param1);
        } else if (kcollapsiblegroupbox_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = kcollapsiblegroupbox_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCollapsibleGroupBox::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (kcollapsiblegroupbox_mousepressevent_isbase) {
            kcollapsiblegroupbox_mousepressevent_isbase = false;
            KCollapsibleGroupBox::mousePressEvent(param1);
        } else if (kcollapsiblegroupbox_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            kcollapsiblegroupbox_mousepressevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (kcollapsiblegroupbox_mousemoveevent_isbase) {
            kcollapsiblegroupbox_mousemoveevent_isbase = false;
            KCollapsibleGroupBox::mouseMoveEvent(param1);
        } else if (kcollapsiblegroupbox_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            kcollapsiblegroupbox_mousemoveevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (kcollapsiblegroupbox_leaveevent_isbase) {
            kcollapsiblegroupbox_leaveevent_isbase = false;
            KCollapsibleGroupBox::leaveEvent(param1);
        } else if (kcollapsiblegroupbox_leaveevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kcollapsiblegroupbox_leaveevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::leaveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kcollapsiblegroupbox_keypressevent_isbase) {
            kcollapsiblegroupbox_keypressevent_isbase = false;
            KCollapsibleGroupBox::keyPressEvent(param1);
        } else if (kcollapsiblegroupbox_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            kcollapsiblegroupbox_keypressevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kcollapsiblegroupbox_resizeevent_isbase) {
            kcollapsiblegroupbox_resizeevent_isbase = false;
            KCollapsibleGroupBox::resizeEvent(param1);
        } else if (kcollapsiblegroupbox_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            kcollapsiblegroupbox_resizeevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kcollapsiblegroupbox_devtype_isbase) {
            kcollapsiblegroupbox_devtype_isbase = false;
            return KCollapsibleGroupBox::devType();
        } else if (kcollapsiblegroupbox_devtype_callback != nullptr) {
            int callback_ret = kcollapsiblegroupbox_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCollapsibleGroupBox::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kcollapsiblegroupbox_setvisible_isbase) {
            kcollapsiblegroupbox_setvisible_isbase = false;
            KCollapsibleGroupBox::setVisible(visible);
        } else if (kcollapsiblegroupbox_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kcollapsiblegroupbox_setvisible_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kcollapsiblegroupbox_heightforwidth_isbase) {
            kcollapsiblegroupbox_heightforwidth_isbase = false;
            return KCollapsibleGroupBox::heightForWidth(param1);
        } else if (kcollapsiblegroupbox_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kcollapsiblegroupbox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCollapsibleGroupBox::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kcollapsiblegroupbox_hasheightforwidth_isbase) {
            kcollapsiblegroupbox_hasheightforwidth_isbase = false;
            return KCollapsibleGroupBox::hasHeightForWidth();
        } else if (kcollapsiblegroupbox_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kcollapsiblegroupbox_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KCollapsibleGroupBox::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kcollapsiblegroupbox_paintengine_isbase) {
            kcollapsiblegroupbox_paintengine_isbase = false;
            return KCollapsibleGroupBox::paintEngine();
        } else if (kcollapsiblegroupbox_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kcollapsiblegroupbox_paintengine_callback();
            return callback_ret;
        } else {
            return KCollapsibleGroupBox::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kcollapsiblegroupbox_mousereleaseevent_isbase) {
            kcollapsiblegroupbox_mousereleaseevent_isbase = false;
            KCollapsibleGroupBox::mouseReleaseEvent(event);
        } else if (kcollapsiblegroupbox_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcollapsiblegroupbox_mousereleaseevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kcollapsiblegroupbox_mousedoubleclickevent_isbase) {
            kcollapsiblegroupbox_mousedoubleclickevent_isbase = false;
            KCollapsibleGroupBox::mouseDoubleClickEvent(event);
        } else if (kcollapsiblegroupbox_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcollapsiblegroupbox_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kcollapsiblegroupbox_wheelevent_isbase) {
            kcollapsiblegroupbox_wheelevent_isbase = false;
            KCollapsibleGroupBox::wheelEvent(event);
        } else if (kcollapsiblegroupbox_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kcollapsiblegroupbox_wheelevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kcollapsiblegroupbox_keyreleaseevent_isbase) {
            kcollapsiblegroupbox_keyreleaseevent_isbase = false;
            KCollapsibleGroupBox::keyReleaseEvent(event);
        } else if (kcollapsiblegroupbox_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kcollapsiblegroupbox_keyreleaseevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kcollapsiblegroupbox_focusinevent_isbase) {
            kcollapsiblegroupbox_focusinevent_isbase = false;
            KCollapsibleGroupBox::focusInEvent(event);
        } else if (kcollapsiblegroupbox_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kcollapsiblegroupbox_focusinevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kcollapsiblegroupbox_focusoutevent_isbase) {
            kcollapsiblegroupbox_focusoutevent_isbase = false;
            KCollapsibleGroupBox::focusOutEvent(event);
        } else if (kcollapsiblegroupbox_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kcollapsiblegroupbox_focusoutevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kcollapsiblegroupbox_enterevent_isbase) {
            kcollapsiblegroupbox_enterevent_isbase = false;
            KCollapsibleGroupBox::enterEvent(event);
        } else if (kcollapsiblegroupbox_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kcollapsiblegroupbox_enterevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kcollapsiblegroupbox_moveevent_isbase) {
            kcollapsiblegroupbox_moveevent_isbase = false;
            KCollapsibleGroupBox::moveEvent(event);
        } else if (kcollapsiblegroupbox_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kcollapsiblegroupbox_moveevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kcollapsiblegroupbox_closeevent_isbase) {
            kcollapsiblegroupbox_closeevent_isbase = false;
            KCollapsibleGroupBox::closeEvent(event);
        } else if (kcollapsiblegroupbox_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kcollapsiblegroupbox_closeevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kcollapsiblegroupbox_contextmenuevent_isbase) {
            kcollapsiblegroupbox_contextmenuevent_isbase = false;
            KCollapsibleGroupBox::contextMenuEvent(event);
        } else if (kcollapsiblegroupbox_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kcollapsiblegroupbox_contextmenuevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kcollapsiblegroupbox_tabletevent_isbase) {
            kcollapsiblegroupbox_tabletevent_isbase = false;
            KCollapsibleGroupBox::tabletEvent(event);
        } else if (kcollapsiblegroupbox_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kcollapsiblegroupbox_tabletevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kcollapsiblegroupbox_actionevent_isbase) {
            kcollapsiblegroupbox_actionevent_isbase = false;
            KCollapsibleGroupBox::actionEvent(event);
        } else if (kcollapsiblegroupbox_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kcollapsiblegroupbox_actionevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kcollapsiblegroupbox_dragenterevent_isbase) {
            kcollapsiblegroupbox_dragenterevent_isbase = false;
            KCollapsibleGroupBox::dragEnterEvent(event);
        } else if (kcollapsiblegroupbox_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kcollapsiblegroupbox_dragenterevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kcollapsiblegroupbox_dragmoveevent_isbase) {
            kcollapsiblegroupbox_dragmoveevent_isbase = false;
            KCollapsibleGroupBox::dragMoveEvent(event);
        } else if (kcollapsiblegroupbox_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kcollapsiblegroupbox_dragmoveevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kcollapsiblegroupbox_dragleaveevent_isbase) {
            kcollapsiblegroupbox_dragleaveevent_isbase = false;
            KCollapsibleGroupBox::dragLeaveEvent(event);
        } else if (kcollapsiblegroupbox_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kcollapsiblegroupbox_dragleaveevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kcollapsiblegroupbox_dropevent_isbase) {
            kcollapsiblegroupbox_dropevent_isbase = false;
            KCollapsibleGroupBox::dropEvent(event);
        } else if (kcollapsiblegroupbox_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kcollapsiblegroupbox_dropevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kcollapsiblegroupbox_showevent_isbase) {
            kcollapsiblegroupbox_showevent_isbase = false;
            KCollapsibleGroupBox::showEvent(event);
        } else if (kcollapsiblegroupbox_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kcollapsiblegroupbox_showevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kcollapsiblegroupbox_hideevent_isbase) {
            kcollapsiblegroupbox_hideevent_isbase = false;
            KCollapsibleGroupBox::hideEvent(event);
        } else if (kcollapsiblegroupbox_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kcollapsiblegroupbox_hideevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kcollapsiblegroupbox_nativeevent_isbase) {
            kcollapsiblegroupbox_nativeevent_isbase = false;
            return KCollapsibleGroupBox::nativeEvent(eventType, message, result);
        } else if (kcollapsiblegroupbox_nativeevent_callback != nullptr) {
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

            bool callback_ret = kcollapsiblegroupbox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KCollapsibleGroupBox::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kcollapsiblegroupbox_changeevent_isbase) {
            kcollapsiblegroupbox_changeevent_isbase = false;
            KCollapsibleGroupBox::changeEvent(param1);
        } else if (kcollapsiblegroupbox_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kcollapsiblegroupbox_changeevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kcollapsiblegroupbox_metric_isbase) {
            kcollapsiblegroupbox_metric_isbase = false;
            return KCollapsibleGroupBox::metric(param1);
        } else if (kcollapsiblegroupbox_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kcollapsiblegroupbox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCollapsibleGroupBox::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kcollapsiblegroupbox_initpainter_isbase) {
            kcollapsiblegroupbox_initpainter_isbase = false;
            KCollapsibleGroupBox::initPainter(painter);
        } else if (kcollapsiblegroupbox_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kcollapsiblegroupbox_initpainter_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kcollapsiblegroupbox_redirected_isbase) {
            kcollapsiblegroupbox_redirected_isbase = false;
            return KCollapsibleGroupBox::redirected(offset);
        } else if (kcollapsiblegroupbox_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kcollapsiblegroupbox_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCollapsibleGroupBox::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kcollapsiblegroupbox_sharedpainter_isbase) {
            kcollapsiblegroupbox_sharedpainter_isbase = false;
            return KCollapsibleGroupBox::sharedPainter();
        } else if (kcollapsiblegroupbox_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kcollapsiblegroupbox_sharedpainter_callback();
            return callback_ret;
        } else {
            return KCollapsibleGroupBox::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kcollapsiblegroupbox_inputmethodevent_isbase) {
            kcollapsiblegroupbox_inputmethodevent_isbase = false;
            KCollapsibleGroupBox::inputMethodEvent(param1);
        } else if (kcollapsiblegroupbox_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kcollapsiblegroupbox_inputmethodevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kcollapsiblegroupbox_inputmethodquery_isbase) {
            kcollapsiblegroupbox_inputmethodquery_isbase = false;
            return KCollapsibleGroupBox::inputMethodQuery(param1);
        } else if (kcollapsiblegroupbox_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kcollapsiblegroupbox_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KCollapsibleGroupBox::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kcollapsiblegroupbox_focusnextprevchild_isbase) {
            kcollapsiblegroupbox_focusnextprevchild_isbase = false;
            return KCollapsibleGroupBox::focusNextPrevChild(next);
        } else if (kcollapsiblegroupbox_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kcollapsiblegroupbox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCollapsibleGroupBox::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcollapsiblegroupbox_eventfilter_isbase) {
            kcollapsiblegroupbox_eventfilter_isbase = false;
            return KCollapsibleGroupBox::eventFilter(watched, event);
        } else if (kcollapsiblegroupbox_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kcollapsiblegroupbox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KCollapsibleGroupBox::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcollapsiblegroupbox_timerevent_isbase) {
            kcollapsiblegroupbox_timerevent_isbase = false;
            KCollapsibleGroupBox::timerEvent(event);
        } else if (kcollapsiblegroupbox_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kcollapsiblegroupbox_timerevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcollapsiblegroupbox_childevent_isbase) {
            kcollapsiblegroupbox_childevent_isbase = false;
            KCollapsibleGroupBox::childEvent(event);
        } else if (kcollapsiblegroupbox_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kcollapsiblegroupbox_childevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcollapsiblegroupbox_customevent_isbase) {
            kcollapsiblegroupbox_customevent_isbase = false;
            KCollapsibleGroupBox::customEvent(event);
        } else if (kcollapsiblegroupbox_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcollapsiblegroupbox_customevent_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcollapsiblegroupbox_connectnotify_isbase) {
            kcollapsiblegroupbox_connectnotify_isbase = false;
            KCollapsibleGroupBox::connectNotify(signal);
        } else if (kcollapsiblegroupbox_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcollapsiblegroupbox_connectnotify_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcollapsiblegroupbox_disconnectnotify_isbase) {
            kcollapsiblegroupbox_disconnectnotify_isbase = false;
            KCollapsibleGroupBox::disconnectNotify(signal);
        } else if (kcollapsiblegroupbox_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcollapsiblegroupbox_disconnectnotify_callback(this, cbval1);
        } else {
            KCollapsibleGroupBox::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kcollapsiblegroupbox_updatemicrofocus_isbase) {
            kcollapsiblegroupbox_updatemicrofocus_isbase = false;
            KCollapsibleGroupBox::updateMicroFocus();
        } else if (kcollapsiblegroupbox_updatemicrofocus_callback != nullptr) {
            kcollapsiblegroupbox_updatemicrofocus_callback();
        } else {
            KCollapsibleGroupBox::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kcollapsiblegroupbox_create_isbase) {
            kcollapsiblegroupbox_create_isbase = false;
            KCollapsibleGroupBox::create();
        } else if (kcollapsiblegroupbox_create_callback != nullptr) {
            kcollapsiblegroupbox_create_callback();
        } else {
            KCollapsibleGroupBox::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kcollapsiblegroupbox_destroy_isbase) {
            kcollapsiblegroupbox_destroy_isbase = false;
            KCollapsibleGroupBox::destroy();
        } else if (kcollapsiblegroupbox_destroy_callback != nullptr) {
            kcollapsiblegroupbox_destroy_callback();
        } else {
            KCollapsibleGroupBox::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kcollapsiblegroupbox_focusnextchild_isbase) {
            kcollapsiblegroupbox_focusnextchild_isbase = false;
            return KCollapsibleGroupBox::focusNextChild();
        } else if (kcollapsiblegroupbox_focusnextchild_callback != nullptr) {
            bool callback_ret = kcollapsiblegroupbox_focusnextchild_callback();
            return callback_ret;
        } else {
            return KCollapsibleGroupBox::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kcollapsiblegroupbox_focuspreviouschild_isbase) {
            kcollapsiblegroupbox_focuspreviouschild_isbase = false;
            return KCollapsibleGroupBox::focusPreviousChild();
        } else if (kcollapsiblegroupbox_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kcollapsiblegroupbox_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KCollapsibleGroupBox::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcollapsiblegroupbox_sender_isbase) {
            kcollapsiblegroupbox_sender_isbase = false;
            return KCollapsibleGroupBox::sender();
        } else if (kcollapsiblegroupbox_sender_callback != nullptr) {
            QObject* callback_ret = kcollapsiblegroupbox_sender_callback();
            return callback_ret;
        } else {
            return KCollapsibleGroupBox::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcollapsiblegroupbox_sendersignalindex_isbase) {
            kcollapsiblegroupbox_sendersignalindex_isbase = false;
            return KCollapsibleGroupBox::senderSignalIndex();
        } else if (kcollapsiblegroupbox_sendersignalindex_callback != nullptr) {
            int callback_ret = kcollapsiblegroupbox_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCollapsibleGroupBox::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcollapsiblegroupbox_receivers_isbase) {
            kcollapsiblegroupbox_receivers_isbase = false;
            return KCollapsibleGroupBox::receivers(signal);
        } else if (kcollapsiblegroupbox_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kcollapsiblegroupbox_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCollapsibleGroupBox::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcollapsiblegroupbox_issignalconnected_isbase) {
            kcollapsiblegroupbox_issignalconnected_isbase = false;
            return KCollapsibleGroupBox::isSignalConnected(signal);
        } else if (kcollapsiblegroupbox_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kcollapsiblegroupbox_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCollapsibleGroupBox::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kcollapsiblegroupbox_getdecodedmetricf_isbase) {
            kcollapsiblegroupbox_getdecodedmetricf_isbase = false;
            return KCollapsibleGroupBox::getDecodedMetricF(metricA, metricB);
        } else if (kcollapsiblegroupbox_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kcollapsiblegroupbox_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KCollapsibleGroupBox::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KCollapsibleGroupBox_PaintEvent(KCollapsibleGroupBox* self, QPaintEvent* param1);
    friend void KCollapsibleGroupBox_QBasePaintEvent(KCollapsibleGroupBox* self, QPaintEvent* param1);
    friend bool KCollapsibleGroupBox_Event(KCollapsibleGroupBox* self, QEvent* param1);
    friend bool KCollapsibleGroupBox_QBaseEvent(KCollapsibleGroupBox* self, QEvent* param1);
    friend void KCollapsibleGroupBox_MousePressEvent(KCollapsibleGroupBox* self, QMouseEvent* param1);
    friend void KCollapsibleGroupBox_QBaseMousePressEvent(KCollapsibleGroupBox* self, QMouseEvent* param1);
    friend void KCollapsibleGroupBox_MouseMoveEvent(KCollapsibleGroupBox* self, QMouseEvent* param1);
    friend void KCollapsibleGroupBox_QBaseMouseMoveEvent(KCollapsibleGroupBox* self, QMouseEvent* param1);
    friend void KCollapsibleGroupBox_LeaveEvent(KCollapsibleGroupBox* self, QEvent* param1);
    friend void KCollapsibleGroupBox_QBaseLeaveEvent(KCollapsibleGroupBox* self, QEvent* param1);
    friend void KCollapsibleGroupBox_KeyPressEvent(KCollapsibleGroupBox* self, QKeyEvent* param1);
    friend void KCollapsibleGroupBox_QBaseKeyPressEvent(KCollapsibleGroupBox* self, QKeyEvent* param1);
    friend void KCollapsibleGroupBox_ResizeEvent(KCollapsibleGroupBox* self, QResizeEvent* param1);
    friend void KCollapsibleGroupBox_QBaseResizeEvent(KCollapsibleGroupBox* self, QResizeEvent* param1);
    friend void KCollapsibleGroupBox_MouseReleaseEvent(KCollapsibleGroupBox* self, QMouseEvent* event);
    friend void KCollapsibleGroupBox_QBaseMouseReleaseEvent(KCollapsibleGroupBox* self, QMouseEvent* event);
    friend void KCollapsibleGroupBox_MouseDoubleClickEvent(KCollapsibleGroupBox* self, QMouseEvent* event);
    friend void KCollapsibleGroupBox_QBaseMouseDoubleClickEvent(KCollapsibleGroupBox* self, QMouseEvent* event);
    friend void KCollapsibleGroupBox_WheelEvent(KCollapsibleGroupBox* self, QWheelEvent* event);
    friend void KCollapsibleGroupBox_QBaseWheelEvent(KCollapsibleGroupBox* self, QWheelEvent* event);
    friend void KCollapsibleGroupBox_KeyReleaseEvent(KCollapsibleGroupBox* self, QKeyEvent* event);
    friend void KCollapsibleGroupBox_QBaseKeyReleaseEvent(KCollapsibleGroupBox* self, QKeyEvent* event);
    friend void KCollapsibleGroupBox_FocusInEvent(KCollapsibleGroupBox* self, QFocusEvent* event);
    friend void KCollapsibleGroupBox_QBaseFocusInEvent(KCollapsibleGroupBox* self, QFocusEvent* event);
    friend void KCollapsibleGroupBox_FocusOutEvent(KCollapsibleGroupBox* self, QFocusEvent* event);
    friend void KCollapsibleGroupBox_QBaseFocusOutEvent(KCollapsibleGroupBox* self, QFocusEvent* event);
    friend void KCollapsibleGroupBox_EnterEvent(KCollapsibleGroupBox* self, QEnterEvent* event);
    friend void KCollapsibleGroupBox_QBaseEnterEvent(KCollapsibleGroupBox* self, QEnterEvent* event);
    friend void KCollapsibleGroupBox_MoveEvent(KCollapsibleGroupBox* self, QMoveEvent* event);
    friend void KCollapsibleGroupBox_QBaseMoveEvent(KCollapsibleGroupBox* self, QMoveEvent* event);
    friend void KCollapsibleGroupBox_CloseEvent(KCollapsibleGroupBox* self, QCloseEvent* event);
    friend void KCollapsibleGroupBox_QBaseCloseEvent(KCollapsibleGroupBox* self, QCloseEvent* event);
    friend void KCollapsibleGroupBox_ContextMenuEvent(KCollapsibleGroupBox* self, QContextMenuEvent* event);
    friend void KCollapsibleGroupBox_QBaseContextMenuEvent(KCollapsibleGroupBox* self, QContextMenuEvent* event);
    friend void KCollapsibleGroupBox_TabletEvent(KCollapsibleGroupBox* self, QTabletEvent* event);
    friend void KCollapsibleGroupBox_QBaseTabletEvent(KCollapsibleGroupBox* self, QTabletEvent* event);
    friend void KCollapsibleGroupBox_ActionEvent(KCollapsibleGroupBox* self, QActionEvent* event);
    friend void KCollapsibleGroupBox_QBaseActionEvent(KCollapsibleGroupBox* self, QActionEvent* event);
    friend void KCollapsibleGroupBox_DragEnterEvent(KCollapsibleGroupBox* self, QDragEnterEvent* event);
    friend void KCollapsibleGroupBox_QBaseDragEnterEvent(KCollapsibleGroupBox* self, QDragEnterEvent* event);
    friend void KCollapsibleGroupBox_DragMoveEvent(KCollapsibleGroupBox* self, QDragMoveEvent* event);
    friend void KCollapsibleGroupBox_QBaseDragMoveEvent(KCollapsibleGroupBox* self, QDragMoveEvent* event);
    friend void KCollapsibleGroupBox_DragLeaveEvent(KCollapsibleGroupBox* self, QDragLeaveEvent* event);
    friend void KCollapsibleGroupBox_QBaseDragLeaveEvent(KCollapsibleGroupBox* self, QDragLeaveEvent* event);
    friend void KCollapsibleGroupBox_DropEvent(KCollapsibleGroupBox* self, QDropEvent* event);
    friend void KCollapsibleGroupBox_QBaseDropEvent(KCollapsibleGroupBox* self, QDropEvent* event);
    friend void KCollapsibleGroupBox_ShowEvent(KCollapsibleGroupBox* self, QShowEvent* event);
    friend void KCollapsibleGroupBox_QBaseShowEvent(KCollapsibleGroupBox* self, QShowEvent* event);
    friend void KCollapsibleGroupBox_HideEvent(KCollapsibleGroupBox* self, QHideEvent* event);
    friend void KCollapsibleGroupBox_QBaseHideEvent(KCollapsibleGroupBox* self, QHideEvent* event);
    friend bool KCollapsibleGroupBox_NativeEvent(KCollapsibleGroupBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KCollapsibleGroupBox_QBaseNativeEvent(KCollapsibleGroupBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KCollapsibleGroupBox_ChangeEvent(KCollapsibleGroupBox* self, QEvent* param1);
    friend void KCollapsibleGroupBox_QBaseChangeEvent(KCollapsibleGroupBox* self, QEvent* param1);
    friend int KCollapsibleGroupBox_Metric(const KCollapsibleGroupBox* self, int param1);
    friend int KCollapsibleGroupBox_QBaseMetric(const KCollapsibleGroupBox* self, int param1);
    friend void KCollapsibleGroupBox_InitPainter(const KCollapsibleGroupBox* self, QPainter* painter);
    friend void KCollapsibleGroupBox_QBaseInitPainter(const KCollapsibleGroupBox* self, QPainter* painter);
    friend QPaintDevice* KCollapsibleGroupBox_Redirected(const KCollapsibleGroupBox* self, QPoint* offset);
    friend QPaintDevice* KCollapsibleGroupBox_QBaseRedirected(const KCollapsibleGroupBox* self, QPoint* offset);
    friend QPainter* KCollapsibleGroupBox_SharedPainter(const KCollapsibleGroupBox* self);
    friend QPainter* KCollapsibleGroupBox_QBaseSharedPainter(const KCollapsibleGroupBox* self);
    friend void KCollapsibleGroupBox_InputMethodEvent(KCollapsibleGroupBox* self, QInputMethodEvent* param1);
    friend void KCollapsibleGroupBox_QBaseInputMethodEvent(KCollapsibleGroupBox* self, QInputMethodEvent* param1);
    friend bool KCollapsibleGroupBox_FocusNextPrevChild(KCollapsibleGroupBox* self, bool next);
    friend bool KCollapsibleGroupBox_QBaseFocusNextPrevChild(KCollapsibleGroupBox* self, bool next);
    friend void KCollapsibleGroupBox_TimerEvent(KCollapsibleGroupBox* self, QTimerEvent* event);
    friend void KCollapsibleGroupBox_QBaseTimerEvent(KCollapsibleGroupBox* self, QTimerEvent* event);
    friend void KCollapsibleGroupBox_ChildEvent(KCollapsibleGroupBox* self, QChildEvent* event);
    friend void KCollapsibleGroupBox_QBaseChildEvent(KCollapsibleGroupBox* self, QChildEvent* event);
    friend void KCollapsibleGroupBox_CustomEvent(KCollapsibleGroupBox* self, QEvent* event);
    friend void KCollapsibleGroupBox_QBaseCustomEvent(KCollapsibleGroupBox* self, QEvent* event);
    friend void KCollapsibleGroupBox_ConnectNotify(KCollapsibleGroupBox* self, const QMetaMethod* signal);
    friend void KCollapsibleGroupBox_QBaseConnectNotify(KCollapsibleGroupBox* self, const QMetaMethod* signal);
    friend void KCollapsibleGroupBox_DisconnectNotify(KCollapsibleGroupBox* self, const QMetaMethod* signal);
    friend void KCollapsibleGroupBox_QBaseDisconnectNotify(KCollapsibleGroupBox* self, const QMetaMethod* signal);
    friend void KCollapsibleGroupBox_UpdateMicroFocus(KCollapsibleGroupBox* self);
    friend void KCollapsibleGroupBox_QBaseUpdateMicroFocus(KCollapsibleGroupBox* self);
    friend void KCollapsibleGroupBox_Create(KCollapsibleGroupBox* self);
    friend void KCollapsibleGroupBox_QBaseCreate(KCollapsibleGroupBox* self);
    friend void KCollapsibleGroupBox_Destroy(KCollapsibleGroupBox* self);
    friend void KCollapsibleGroupBox_QBaseDestroy(KCollapsibleGroupBox* self);
    friend bool KCollapsibleGroupBox_FocusNextChild(KCollapsibleGroupBox* self);
    friend bool KCollapsibleGroupBox_QBaseFocusNextChild(KCollapsibleGroupBox* self);
    friend bool KCollapsibleGroupBox_FocusPreviousChild(KCollapsibleGroupBox* self);
    friend bool KCollapsibleGroupBox_QBaseFocusPreviousChild(KCollapsibleGroupBox* self);
    friend QObject* KCollapsibleGroupBox_Sender(const KCollapsibleGroupBox* self);
    friend QObject* KCollapsibleGroupBox_QBaseSender(const KCollapsibleGroupBox* self);
    friend int KCollapsibleGroupBox_SenderSignalIndex(const KCollapsibleGroupBox* self);
    friend int KCollapsibleGroupBox_QBaseSenderSignalIndex(const KCollapsibleGroupBox* self);
    friend int KCollapsibleGroupBox_Receivers(const KCollapsibleGroupBox* self, const char* signal);
    friend int KCollapsibleGroupBox_QBaseReceivers(const KCollapsibleGroupBox* self, const char* signal);
    friend bool KCollapsibleGroupBox_IsSignalConnected(const KCollapsibleGroupBox* self, const QMetaMethod* signal);
    friend bool KCollapsibleGroupBox_QBaseIsSignalConnected(const KCollapsibleGroupBox* self, const QMetaMethod* signal);
    friend double KCollapsibleGroupBox_GetDecodedMetricF(const KCollapsibleGroupBox* self, int metricA, int metricB);
    friend double KCollapsibleGroupBox_QBaseGetDecodedMetricF(const KCollapsibleGroupBox* self, int metricA, int metricB);
};

#endif
