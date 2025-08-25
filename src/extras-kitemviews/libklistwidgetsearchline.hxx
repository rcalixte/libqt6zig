#pragma once
#ifndef SRC_EXTRAS_KITEMVIEWSC_LIBVIRTUALKLISTWIDGETSEARCHLINE_H
#define SRC_EXTRAS_KITEMVIEWSC_LIBVIRTUALKLISTWIDGETSEARCHLINE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KListWidgetSearchLine so that we can call protected methods
class VirtualKListWidgetSearchLine final : public KListWidgetSearchLine {

  public:
    // Virtual class boolean flag
    bool isVirtualKListWidgetSearchLine = true;

    // Virtual class public types (including callbacks)
    using KListWidgetSearchLine_Metacall_Callback = int (*)(KListWidgetSearchLine*, int, int, void**);
    using KListWidgetSearchLine_UpdateSearch_Callback = void (*)(KListWidgetSearchLine*, libqt_string);
    using KListWidgetSearchLine_ItemMatches_Callback = bool (*)(const KListWidgetSearchLine*, QListWidgetItem*, libqt_string);
    using KListWidgetSearchLine_Event_Callback = bool (*)(KListWidgetSearchLine*, QEvent*);
    using KListWidgetSearchLine_SizeHint_Callback = QSize* (*)();
    using KListWidgetSearchLine_MinimumSizeHint_Callback = QSize* (*)();
    using KListWidgetSearchLine_MousePressEvent_Callback = void (*)(KListWidgetSearchLine*, QMouseEvent*);
    using KListWidgetSearchLine_MouseMoveEvent_Callback = void (*)(KListWidgetSearchLine*, QMouseEvent*);
    using KListWidgetSearchLine_MouseReleaseEvent_Callback = void (*)(KListWidgetSearchLine*, QMouseEvent*);
    using KListWidgetSearchLine_MouseDoubleClickEvent_Callback = void (*)(KListWidgetSearchLine*, QMouseEvent*);
    using KListWidgetSearchLine_KeyPressEvent_Callback = void (*)(KListWidgetSearchLine*, QKeyEvent*);
    using KListWidgetSearchLine_KeyReleaseEvent_Callback = void (*)(KListWidgetSearchLine*, QKeyEvent*);
    using KListWidgetSearchLine_FocusInEvent_Callback = void (*)(KListWidgetSearchLine*, QFocusEvent*);
    using KListWidgetSearchLine_FocusOutEvent_Callback = void (*)(KListWidgetSearchLine*, QFocusEvent*);
    using KListWidgetSearchLine_PaintEvent_Callback = void (*)(KListWidgetSearchLine*, QPaintEvent*);
    using KListWidgetSearchLine_DragEnterEvent_Callback = void (*)(KListWidgetSearchLine*, QDragEnterEvent*);
    using KListWidgetSearchLine_DragMoveEvent_Callback = void (*)(KListWidgetSearchLine*, QDragMoveEvent*);
    using KListWidgetSearchLine_DragLeaveEvent_Callback = void (*)(KListWidgetSearchLine*, QDragLeaveEvent*);
    using KListWidgetSearchLine_DropEvent_Callback = void (*)(KListWidgetSearchLine*, QDropEvent*);
    using KListWidgetSearchLine_ChangeEvent_Callback = void (*)(KListWidgetSearchLine*, QEvent*);
    using KListWidgetSearchLine_ContextMenuEvent_Callback = void (*)(KListWidgetSearchLine*, QContextMenuEvent*);
    using KListWidgetSearchLine_InputMethodEvent_Callback = void (*)(KListWidgetSearchLine*, QInputMethodEvent*);
    using KListWidgetSearchLine_InitStyleOption_Callback = void (*)(const KListWidgetSearchLine*, QStyleOptionFrame*);
    using KListWidgetSearchLine_InputMethodQuery_Callback = QVariant* (*)(const KListWidgetSearchLine*, int);
    using KListWidgetSearchLine_TimerEvent_Callback = void (*)(KListWidgetSearchLine*, QTimerEvent*);
    using KListWidgetSearchLine_DevType_Callback = int (*)();
    using KListWidgetSearchLine_SetVisible_Callback = void (*)(KListWidgetSearchLine*, bool);
    using KListWidgetSearchLine_HeightForWidth_Callback = int (*)(const KListWidgetSearchLine*, int);
    using KListWidgetSearchLine_HasHeightForWidth_Callback = bool (*)();
    using KListWidgetSearchLine_PaintEngine_Callback = QPaintEngine* (*)();
    using KListWidgetSearchLine_WheelEvent_Callback = void (*)(KListWidgetSearchLine*, QWheelEvent*);
    using KListWidgetSearchLine_EnterEvent_Callback = void (*)(KListWidgetSearchLine*, QEnterEvent*);
    using KListWidgetSearchLine_LeaveEvent_Callback = void (*)(KListWidgetSearchLine*, QEvent*);
    using KListWidgetSearchLine_MoveEvent_Callback = void (*)(KListWidgetSearchLine*, QMoveEvent*);
    using KListWidgetSearchLine_ResizeEvent_Callback = void (*)(KListWidgetSearchLine*, QResizeEvent*);
    using KListWidgetSearchLine_CloseEvent_Callback = void (*)(KListWidgetSearchLine*, QCloseEvent*);
    using KListWidgetSearchLine_TabletEvent_Callback = void (*)(KListWidgetSearchLine*, QTabletEvent*);
    using KListWidgetSearchLine_ActionEvent_Callback = void (*)(KListWidgetSearchLine*, QActionEvent*);
    using KListWidgetSearchLine_ShowEvent_Callback = void (*)(KListWidgetSearchLine*, QShowEvent*);
    using KListWidgetSearchLine_HideEvent_Callback = void (*)(KListWidgetSearchLine*, QHideEvent*);
    using KListWidgetSearchLine_NativeEvent_Callback = bool (*)(KListWidgetSearchLine*, libqt_string, void*, intptr_t*);
    using KListWidgetSearchLine_Metric_Callback = int (*)(const KListWidgetSearchLine*, int);
    using KListWidgetSearchLine_InitPainter_Callback = void (*)(const KListWidgetSearchLine*, QPainter*);
    using KListWidgetSearchLine_Redirected_Callback = QPaintDevice* (*)(const KListWidgetSearchLine*, QPoint*);
    using KListWidgetSearchLine_SharedPainter_Callback = QPainter* (*)();
    using KListWidgetSearchLine_FocusNextPrevChild_Callback = bool (*)(KListWidgetSearchLine*, bool);
    using KListWidgetSearchLine_EventFilter_Callback = bool (*)(KListWidgetSearchLine*, QObject*, QEvent*);
    using KListWidgetSearchLine_ChildEvent_Callback = void (*)(KListWidgetSearchLine*, QChildEvent*);
    using KListWidgetSearchLine_CustomEvent_Callback = void (*)(KListWidgetSearchLine*, QEvent*);
    using KListWidgetSearchLine_ConnectNotify_Callback = void (*)(KListWidgetSearchLine*, QMetaMethod*);
    using KListWidgetSearchLine_DisconnectNotify_Callback = void (*)(KListWidgetSearchLine*, QMetaMethod*);
    using KListWidgetSearchLine_CursorRect_Callback = QRect* (*)();
    using KListWidgetSearchLine_UpdateMicroFocus_Callback = void (*)();
    using KListWidgetSearchLine_Create_Callback = void (*)();
    using KListWidgetSearchLine_Destroy_Callback = void (*)();
    using KListWidgetSearchLine_FocusNextChild_Callback = bool (*)();
    using KListWidgetSearchLine_FocusPreviousChild_Callback = bool (*)();
    using KListWidgetSearchLine_Sender_Callback = QObject* (*)();
    using KListWidgetSearchLine_SenderSignalIndex_Callback = int (*)();
    using KListWidgetSearchLine_Receivers_Callback = int (*)(const KListWidgetSearchLine*, const char*);
    using KListWidgetSearchLine_IsSignalConnected_Callback = bool (*)(const KListWidgetSearchLine*, QMetaMethod*);
    using KListWidgetSearchLine_GetDecodedMetricF_Callback = double (*)(const KListWidgetSearchLine*, int, int);

  protected:
    // Instance callback storage
    KListWidgetSearchLine_Metacall_Callback klistwidgetsearchline_metacall_callback = nullptr;
    KListWidgetSearchLine_UpdateSearch_Callback klistwidgetsearchline_updatesearch_callback = nullptr;
    KListWidgetSearchLine_ItemMatches_Callback klistwidgetsearchline_itemmatches_callback = nullptr;
    KListWidgetSearchLine_Event_Callback klistwidgetsearchline_event_callback = nullptr;
    KListWidgetSearchLine_SizeHint_Callback klistwidgetsearchline_sizehint_callback = nullptr;
    KListWidgetSearchLine_MinimumSizeHint_Callback klistwidgetsearchline_minimumsizehint_callback = nullptr;
    KListWidgetSearchLine_MousePressEvent_Callback klistwidgetsearchline_mousepressevent_callback = nullptr;
    KListWidgetSearchLine_MouseMoveEvent_Callback klistwidgetsearchline_mousemoveevent_callback = nullptr;
    KListWidgetSearchLine_MouseReleaseEvent_Callback klistwidgetsearchline_mousereleaseevent_callback = nullptr;
    KListWidgetSearchLine_MouseDoubleClickEvent_Callback klistwidgetsearchline_mousedoubleclickevent_callback = nullptr;
    KListWidgetSearchLine_KeyPressEvent_Callback klistwidgetsearchline_keypressevent_callback = nullptr;
    KListWidgetSearchLine_KeyReleaseEvent_Callback klistwidgetsearchline_keyreleaseevent_callback = nullptr;
    KListWidgetSearchLine_FocusInEvent_Callback klistwidgetsearchline_focusinevent_callback = nullptr;
    KListWidgetSearchLine_FocusOutEvent_Callback klistwidgetsearchline_focusoutevent_callback = nullptr;
    KListWidgetSearchLine_PaintEvent_Callback klistwidgetsearchline_paintevent_callback = nullptr;
    KListWidgetSearchLine_DragEnterEvent_Callback klistwidgetsearchline_dragenterevent_callback = nullptr;
    KListWidgetSearchLine_DragMoveEvent_Callback klistwidgetsearchline_dragmoveevent_callback = nullptr;
    KListWidgetSearchLine_DragLeaveEvent_Callback klistwidgetsearchline_dragleaveevent_callback = nullptr;
    KListWidgetSearchLine_DropEvent_Callback klistwidgetsearchline_dropevent_callback = nullptr;
    KListWidgetSearchLine_ChangeEvent_Callback klistwidgetsearchline_changeevent_callback = nullptr;
    KListWidgetSearchLine_ContextMenuEvent_Callback klistwidgetsearchline_contextmenuevent_callback = nullptr;
    KListWidgetSearchLine_InputMethodEvent_Callback klistwidgetsearchline_inputmethodevent_callback = nullptr;
    KListWidgetSearchLine_InitStyleOption_Callback klistwidgetsearchline_initstyleoption_callback = nullptr;
    KListWidgetSearchLine_InputMethodQuery_Callback klistwidgetsearchline_inputmethodquery_callback = nullptr;
    KListWidgetSearchLine_TimerEvent_Callback klistwidgetsearchline_timerevent_callback = nullptr;
    KListWidgetSearchLine_DevType_Callback klistwidgetsearchline_devtype_callback = nullptr;
    KListWidgetSearchLine_SetVisible_Callback klistwidgetsearchline_setvisible_callback = nullptr;
    KListWidgetSearchLine_HeightForWidth_Callback klistwidgetsearchline_heightforwidth_callback = nullptr;
    KListWidgetSearchLine_HasHeightForWidth_Callback klistwidgetsearchline_hasheightforwidth_callback = nullptr;
    KListWidgetSearchLine_PaintEngine_Callback klistwidgetsearchline_paintengine_callback = nullptr;
    KListWidgetSearchLine_WheelEvent_Callback klistwidgetsearchline_wheelevent_callback = nullptr;
    KListWidgetSearchLine_EnterEvent_Callback klistwidgetsearchline_enterevent_callback = nullptr;
    KListWidgetSearchLine_LeaveEvent_Callback klistwidgetsearchline_leaveevent_callback = nullptr;
    KListWidgetSearchLine_MoveEvent_Callback klistwidgetsearchline_moveevent_callback = nullptr;
    KListWidgetSearchLine_ResizeEvent_Callback klistwidgetsearchline_resizeevent_callback = nullptr;
    KListWidgetSearchLine_CloseEvent_Callback klistwidgetsearchline_closeevent_callback = nullptr;
    KListWidgetSearchLine_TabletEvent_Callback klistwidgetsearchline_tabletevent_callback = nullptr;
    KListWidgetSearchLine_ActionEvent_Callback klistwidgetsearchline_actionevent_callback = nullptr;
    KListWidgetSearchLine_ShowEvent_Callback klistwidgetsearchline_showevent_callback = nullptr;
    KListWidgetSearchLine_HideEvent_Callback klistwidgetsearchline_hideevent_callback = nullptr;
    KListWidgetSearchLine_NativeEvent_Callback klistwidgetsearchline_nativeevent_callback = nullptr;
    KListWidgetSearchLine_Metric_Callback klistwidgetsearchline_metric_callback = nullptr;
    KListWidgetSearchLine_InitPainter_Callback klistwidgetsearchline_initpainter_callback = nullptr;
    KListWidgetSearchLine_Redirected_Callback klistwidgetsearchline_redirected_callback = nullptr;
    KListWidgetSearchLine_SharedPainter_Callback klistwidgetsearchline_sharedpainter_callback = nullptr;
    KListWidgetSearchLine_FocusNextPrevChild_Callback klistwidgetsearchline_focusnextprevchild_callback = nullptr;
    KListWidgetSearchLine_EventFilter_Callback klistwidgetsearchline_eventfilter_callback = nullptr;
    KListWidgetSearchLine_ChildEvent_Callback klistwidgetsearchline_childevent_callback = nullptr;
    KListWidgetSearchLine_CustomEvent_Callback klistwidgetsearchline_customevent_callback = nullptr;
    KListWidgetSearchLine_ConnectNotify_Callback klistwidgetsearchline_connectnotify_callback = nullptr;
    KListWidgetSearchLine_DisconnectNotify_Callback klistwidgetsearchline_disconnectnotify_callback = nullptr;
    KListWidgetSearchLine_CursorRect_Callback klistwidgetsearchline_cursorrect_callback = nullptr;
    KListWidgetSearchLine_UpdateMicroFocus_Callback klistwidgetsearchline_updatemicrofocus_callback = nullptr;
    KListWidgetSearchLine_Create_Callback klistwidgetsearchline_create_callback = nullptr;
    KListWidgetSearchLine_Destroy_Callback klistwidgetsearchline_destroy_callback = nullptr;
    KListWidgetSearchLine_FocusNextChild_Callback klistwidgetsearchline_focusnextchild_callback = nullptr;
    KListWidgetSearchLine_FocusPreviousChild_Callback klistwidgetsearchline_focuspreviouschild_callback = nullptr;
    KListWidgetSearchLine_Sender_Callback klistwidgetsearchline_sender_callback = nullptr;
    KListWidgetSearchLine_SenderSignalIndex_Callback klistwidgetsearchline_sendersignalindex_callback = nullptr;
    KListWidgetSearchLine_Receivers_Callback klistwidgetsearchline_receivers_callback = nullptr;
    KListWidgetSearchLine_IsSignalConnected_Callback klistwidgetsearchline_issignalconnected_callback = nullptr;
    KListWidgetSearchLine_GetDecodedMetricF_Callback klistwidgetsearchline_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool klistwidgetsearchline_metacall_isbase = false;
    mutable bool klistwidgetsearchline_updatesearch_isbase = false;
    mutable bool klistwidgetsearchline_itemmatches_isbase = false;
    mutable bool klistwidgetsearchline_event_isbase = false;
    mutable bool klistwidgetsearchline_sizehint_isbase = false;
    mutable bool klistwidgetsearchline_minimumsizehint_isbase = false;
    mutable bool klistwidgetsearchline_mousepressevent_isbase = false;
    mutable bool klistwidgetsearchline_mousemoveevent_isbase = false;
    mutable bool klistwidgetsearchline_mousereleaseevent_isbase = false;
    mutable bool klistwidgetsearchline_mousedoubleclickevent_isbase = false;
    mutable bool klistwidgetsearchline_keypressevent_isbase = false;
    mutable bool klistwidgetsearchline_keyreleaseevent_isbase = false;
    mutable bool klistwidgetsearchline_focusinevent_isbase = false;
    mutable bool klistwidgetsearchline_focusoutevent_isbase = false;
    mutable bool klistwidgetsearchline_paintevent_isbase = false;
    mutable bool klistwidgetsearchline_dragenterevent_isbase = false;
    mutable bool klistwidgetsearchline_dragmoveevent_isbase = false;
    mutable bool klistwidgetsearchline_dragleaveevent_isbase = false;
    mutable bool klistwidgetsearchline_dropevent_isbase = false;
    mutable bool klistwidgetsearchline_changeevent_isbase = false;
    mutable bool klistwidgetsearchline_contextmenuevent_isbase = false;
    mutable bool klistwidgetsearchline_inputmethodevent_isbase = false;
    mutable bool klistwidgetsearchline_initstyleoption_isbase = false;
    mutable bool klistwidgetsearchline_inputmethodquery_isbase = false;
    mutable bool klistwidgetsearchline_timerevent_isbase = false;
    mutable bool klistwidgetsearchline_devtype_isbase = false;
    mutable bool klistwidgetsearchline_setvisible_isbase = false;
    mutable bool klistwidgetsearchline_heightforwidth_isbase = false;
    mutable bool klistwidgetsearchline_hasheightforwidth_isbase = false;
    mutable bool klistwidgetsearchline_paintengine_isbase = false;
    mutable bool klistwidgetsearchline_wheelevent_isbase = false;
    mutable bool klistwidgetsearchline_enterevent_isbase = false;
    mutable bool klistwidgetsearchline_leaveevent_isbase = false;
    mutable bool klistwidgetsearchline_moveevent_isbase = false;
    mutable bool klistwidgetsearchline_resizeevent_isbase = false;
    mutable bool klistwidgetsearchline_closeevent_isbase = false;
    mutable bool klistwidgetsearchline_tabletevent_isbase = false;
    mutable bool klistwidgetsearchline_actionevent_isbase = false;
    mutable bool klistwidgetsearchline_showevent_isbase = false;
    mutable bool klistwidgetsearchline_hideevent_isbase = false;
    mutable bool klistwidgetsearchline_nativeevent_isbase = false;
    mutable bool klistwidgetsearchline_metric_isbase = false;
    mutable bool klistwidgetsearchline_initpainter_isbase = false;
    mutable bool klistwidgetsearchline_redirected_isbase = false;
    mutable bool klistwidgetsearchline_sharedpainter_isbase = false;
    mutable bool klistwidgetsearchline_focusnextprevchild_isbase = false;
    mutable bool klistwidgetsearchline_eventfilter_isbase = false;
    mutable bool klistwidgetsearchline_childevent_isbase = false;
    mutable bool klistwidgetsearchline_customevent_isbase = false;
    mutable bool klistwidgetsearchline_connectnotify_isbase = false;
    mutable bool klistwidgetsearchline_disconnectnotify_isbase = false;
    mutable bool klistwidgetsearchline_cursorrect_isbase = false;
    mutable bool klistwidgetsearchline_updatemicrofocus_isbase = false;
    mutable bool klistwidgetsearchline_create_isbase = false;
    mutable bool klistwidgetsearchline_destroy_isbase = false;
    mutable bool klistwidgetsearchline_focusnextchild_isbase = false;
    mutable bool klistwidgetsearchline_focuspreviouschild_isbase = false;
    mutable bool klistwidgetsearchline_sender_isbase = false;
    mutable bool klistwidgetsearchline_sendersignalindex_isbase = false;
    mutable bool klistwidgetsearchline_receivers_isbase = false;
    mutable bool klistwidgetsearchline_issignalconnected_isbase = false;
    mutable bool klistwidgetsearchline_getdecodedmetricf_isbase = false;

  public:
    VirtualKListWidgetSearchLine(QWidget* parent) : KListWidgetSearchLine(parent) {};
    VirtualKListWidgetSearchLine() : KListWidgetSearchLine() {};
    VirtualKListWidgetSearchLine(QWidget* parent, QListWidget* listWidget) : KListWidgetSearchLine(parent, listWidget) {};

    ~VirtualKListWidgetSearchLine() {
        klistwidgetsearchline_metacall_callback = nullptr;
        klistwidgetsearchline_updatesearch_callback = nullptr;
        klistwidgetsearchline_itemmatches_callback = nullptr;
        klistwidgetsearchline_event_callback = nullptr;
        klistwidgetsearchline_sizehint_callback = nullptr;
        klistwidgetsearchline_minimumsizehint_callback = nullptr;
        klistwidgetsearchline_mousepressevent_callback = nullptr;
        klistwidgetsearchline_mousemoveevent_callback = nullptr;
        klistwidgetsearchline_mousereleaseevent_callback = nullptr;
        klistwidgetsearchline_mousedoubleclickevent_callback = nullptr;
        klistwidgetsearchline_keypressevent_callback = nullptr;
        klistwidgetsearchline_keyreleaseevent_callback = nullptr;
        klistwidgetsearchline_focusinevent_callback = nullptr;
        klistwidgetsearchline_focusoutevent_callback = nullptr;
        klistwidgetsearchline_paintevent_callback = nullptr;
        klistwidgetsearchline_dragenterevent_callback = nullptr;
        klistwidgetsearchline_dragmoveevent_callback = nullptr;
        klistwidgetsearchline_dragleaveevent_callback = nullptr;
        klistwidgetsearchline_dropevent_callback = nullptr;
        klistwidgetsearchline_changeevent_callback = nullptr;
        klistwidgetsearchline_contextmenuevent_callback = nullptr;
        klistwidgetsearchline_inputmethodevent_callback = nullptr;
        klistwidgetsearchline_initstyleoption_callback = nullptr;
        klistwidgetsearchline_inputmethodquery_callback = nullptr;
        klistwidgetsearchline_timerevent_callback = nullptr;
        klistwidgetsearchline_devtype_callback = nullptr;
        klistwidgetsearchline_setvisible_callback = nullptr;
        klistwidgetsearchline_heightforwidth_callback = nullptr;
        klistwidgetsearchline_hasheightforwidth_callback = nullptr;
        klistwidgetsearchline_paintengine_callback = nullptr;
        klistwidgetsearchline_wheelevent_callback = nullptr;
        klistwidgetsearchline_enterevent_callback = nullptr;
        klistwidgetsearchline_leaveevent_callback = nullptr;
        klistwidgetsearchline_moveevent_callback = nullptr;
        klistwidgetsearchline_resizeevent_callback = nullptr;
        klistwidgetsearchline_closeevent_callback = nullptr;
        klistwidgetsearchline_tabletevent_callback = nullptr;
        klistwidgetsearchline_actionevent_callback = nullptr;
        klistwidgetsearchline_showevent_callback = nullptr;
        klistwidgetsearchline_hideevent_callback = nullptr;
        klistwidgetsearchline_nativeevent_callback = nullptr;
        klistwidgetsearchline_metric_callback = nullptr;
        klistwidgetsearchline_initpainter_callback = nullptr;
        klistwidgetsearchline_redirected_callback = nullptr;
        klistwidgetsearchline_sharedpainter_callback = nullptr;
        klistwidgetsearchline_focusnextprevchild_callback = nullptr;
        klistwidgetsearchline_eventfilter_callback = nullptr;
        klistwidgetsearchline_childevent_callback = nullptr;
        klistwidgetsearchline_customevent_callback = nullptr;
        klistwidgetsearchline_connectnotify_callback = nullptr;
        klistwidgetsearchline_disconnectnotify_callback = nullptr;
        klistwidgetsearchline_cursorrect_callback = nullptr;
        klistwidgetsearchline_updatemicrofocus_callback = nullptr;
        klistwidgetsearchline_create_callback = nullptr;
        klistwidgetsearchline_destroy_callback = nullptr;
        klistwidgetsearchline_focusnextchild_callback = nullptr;
        klistwidgetsearchline_focuspreviouschild_callback = nullptr;
        klistwidgetsearchline_sender_callback = nullptr;
        klistwidgetsearchline_sendersignalindex_callback = nullptr;
        klistwidgetsearchline_receivers_callback = nullptr;
        klistwidgetsearchline_issignalconnected_callback = nullptr;
        klistwidgetsearchline_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKListWidgetSearchLine_Metacall_Callback(KListWidgetSearchLine_Metacall_Callback cb) { klistwidgetsearchline_metacall_callback = cb; }
    inline void setKListWidgetSearchLine_UpdateSearch_Callback(KListWidgetSearchLine_UpdateSearch_Callback cb) { klistwidgetsearchline_updatesearch_callback = cb; }
    inline void setKListWidgetSearchLine_ItemMatches_Callback(KListWidgetSearchLine_ItemMatches_Callback cb) { klistwidgetsearchline_itemmatches_callback = cb; }
    inline void setKListWidgetSearchLine_Event_Callback(KListWidgetSearchLine_Event_Callback cb) { klistwidgetsearchline_event_callback = cb; }
    inline void setKListWidgetSearchLine_SizeHint_Callback(KListWidgetSearchLine_SizeHint_Callback cb) { klistwidgetsearchline_sizehint_callback = cb; }
    inline void setKListWidgetSearchLine_MinimumSizeHint_Callback(KListWidgetSearchLine_MinimumSizeHint_Callback cb) { klistwidgetsearchline_minimumsizehint_callback = cb; }
    inline void setKListWidgetSearchLine_MousePressEvent_Callback(KListWidgetSearchLine_MousePressEvent_Callback cb) { klistwidgetsearchline_mousepressevent_callback = cb; }
    inline void setKListWidgetSearchLine_MouseMoveEvent_Callback(KListWidgetSearchLine_MouseMoveEvent_Callback cb) { klistwidgetsearchline_mousemoveevent_callback = cb; }
    inline void setKListWidgetSearchLine_MouseReleaseEvent_Callback(KListWidgetSearchLine_MouseReleaseEvent_Callback cb) { klistwidgetsearchline_mousereleaseevent_callback = cb; }
    inline void setKListWidgetSearchLine_MouseDoubleClickEvent_Callback(KListWidgetSearchLine_MouseDoubleClickEvent_Callback cb) { klistwidgetsearchline_mousedoubleclickevent_callback = cb; }
    inline void setKListWidgetSearchLine_KeyPressEvent_Callback(KListWidgetSearchLine_KeyPressEvent_Callback cb) { klistwidgetsearchline_keypressevent_callback = cb; }
    inline void setKListWidgetSearchLine_KeyReleaseEvent_Callback(KListWidgetSearchLine_KeyReleaseEvent_Callback cb) { klistwidgetsearchline_keyreleaseevent_callback = cb; }
    inline void setKListWidgetSearchLine_FocusInEvent_Callback(KListWidgetSearchLine_FocusInEvent_Callback cb) { klistwidgetsearchline_focusinevent_callback = cb; }
    inline void setKListWidgetSearchLine_FocusOutEvent_Callback(KListWidgetSearchLine_FocusOutEvent_Callback cb) { klistwidgetsearchline_focusoutevent_callback = cb; }
    inline void setKListWidgetSearchLine_PaintEvent_Callback(KListWidgetSearchLine_PaintEvent_Callback cb) { klistwidgetsearchline_paintevent_callback = cb; }
    inline void setKListWidgetSearchLine_DragEnterEvent_Callback(KListWidgetSearchLine_DragEnterEvent_Callback cb) { klistwidgetsearchline_dragenterevent_callback = cb; }
    inline void setKListWidgetSearchLine_DragMoveEvent_Callback(KListWidgetSearchLine_DragMoveEvent_Callback cb) { klistwidgetsearchline_dragmoveevent_callback = cb; }
    inline void setKListWidgetSearchLine_DragLeaveEvent_Callback(KListWidgetSearchLine_DragLeaveEvent_Callback cb) { klistwidgetsearchline_dragleaveevent_callback = cb; }
    inline void setKListWidgetSearchLine_DropEvent_Callback(KListWidgetSearchLine_DropEvent_Callback cb) { klistwidgetsearchline_dropevent_callback = cb; }
    inline void setKListWidgetSearchLine_ChangeEvent_Callback(KListWidgetSearchLine_ChangeEvent_Callback cb) { klistwidgetsearchline_changeevent_callback = cb; }
    inline void setKListWidgetSearchLine_ContextMenuEvent_Callback(KListWidgetSearchLine_ContextMenuEvent_Callback cb) { klistwidgetsearchline_contextmenuevent_callback = cb; }
    inline void setKListWidgetSearchLine_InputMethodEvent_Callback(KListWidgetSearchLine_InputMethodEvent_Callback cb) { klistwidgetsearchline_inputmethodevent_callback = cb; }
    inline void setKListWidgetSearchLine_InitStyleOption_Callback(KListWidgetSearchLine_InitStyleOption_Callback cb) { klistwidgetsearchline_initstyleoption_callback = cb; }
    inline void setKListWidgetSearchLine_InputMethodQuery_Callback(KListWidgetSearchLine_InputMethodQuery_Callback cb) { klistwidgetsearchline_inputmethodquery_callback = cb; }
    inline void setKListWidgetSearchLine_TimerEvent_Callback(KListWidgetSearchLine_TimerEvent_Callback cb) { klistwidgetsearchline_timerevent_callback = cb; }
    inline void setKListWidgetSearchLine_DevType_Callback(KListWidgetSearchLine_DevType_Callback cb) { klistwidgetsearchline_devtype_callback = cb; }
    inline void setKListWidgetSearchLine_SetVisible_Callback(KListWidgetSearchLine_SetVisible_Callback cb) { klistwidgetsearchline_setvisible_callback = cb; }
    inline void setKListWidgetSearchLine_HeightForWidth_Callback(KListWidgetSearchLine_HeightForWidth_Callback cb) { klistwidgetsearchline_heightforwidth_callback = cb; }
    inline void setKListWidgetSearchLine_HasHeightForWidth_Callback(KListWidgetSearchLine_HasHeightForWidth_Callback cb) { klistwidgetsearchline_hasheightforwidth_callback = cb; }
    inline void setKListWidgetSearchLine_PaintEngine_Callback(KListWidgetSearchLine_PaintEngine_Callback cb) { klistwidgetsearchline_paintengine_callback = cb; }
    inline void setKListWidgetSearchLine_WheelEvent_Callback(KListWidgetSearchLine_WheelEvent_Callback cb) { klistwidgetsearchline_wheelevent_callback = cb; }
    inline void setKListWidgetSearchLine_EnterEvent_Callback(KListWidgetSearchLine_EnterEvent_Callback cb) { klistwidgetsearchline_enterevent_callback = cb; }
    inline void setKListWidgetSearchLine_LeaveEvent_Callback(KListWidgetSearchLine_LeaveEvent_Callback cb) { klistwidgetsearchline_leaveevent_callback = cb; }
    inline void setKListWidgetSearchLine_MoveEvent_Callback(KListWidgetSearchLine_MoveEvent_Callback cb) { klistwidgetsearchline_moveevent_callback = cb; }
    inline void setKListWidgetSearchLine_ResizeEvent_Callback(KListWidgetSearchLine_ResizeEvent_Callback cb) { klistwidgetsearchline_resizeevent_callback = cb; }
    inline void setKListWidgetSearchLine_CloseEvent_Callback(KListWidgetSearchLine_CloseEvent_Callback cb) { klistwidgetsearchline_closeevent_callback = cb; }
    inline void setKListWidgetSearchLine_TabletEvent_Callback(KListWidgetSearchLine_TabletEvent_Callback cb) { klistwidgetsearchline_tabletevent_callback = cb; }
    inline void setKListWidgetSearchLine_ActionEvent_Callback(KListWidgetSearchLine_ActionEvent_Callback cb) { klistwidgetsearchline_actionevent_callback = cb; }
    inline void setKListWidgetSearchLine_ShowEvent_Callback(KListWidgetSearchLine_ShowEvent_Callback cb) { klistwidgetsearchline_showevent_callback = cb; }
    inline void setKListWidgetSearchLine_HideEvent_Callback(KListWidgetSearchLine_HideEvent_Callback cb) { klistwidgetsearchline_hideevent_callback = cb; }
    inline void setKListWidgetSearchLine_NativeEvent_Callback(KListWidgetSearchLine_NativeEvent_Callback cb) { klistwidgetsearchline_nativeevent_callback = cb; }
    inline void setKListWidgetSearchLine_Metric_Callback(KListWidgetSearchLine_Metric_Callback cb) { klistwidgetsearchline_metric_callback = cb; }
    inline void setKListWidgetSearchLine_InitPainter_Callback(KListWidgetSearchLine_InitPainter_Callback cb) { klistwidgetsearchline_initpainter_callback = cb; }
    inline void setKListWidgetSearchLine_Redirected_Callback(KListWidgetSearchLine_Redirected_Callback cb) { klistwidgetsearchline_redirected_callback = cb; }
    inline void setKListWidgetSearchLine_SharedPainter_Callback(KListWidgetSearchLine_SharedPainter_Callback cb) { klistwidgetsearchline_sharedpainter_callback = cb; }
    inline void setKListWidgetSearchLine_FocusNextPrevChild_Callback(KListWidgetSearchLine_FocusNextPrevChild_Callback cb) { klistwidgetsearchline_focusnextprevchild_callback = cb; }
    inline void setKListWidgetSearchLine_EventFilter_Callback(KListWidgetSearchLine_EventFilter_Callback cb) { klistwidgetsearchline_eventfilter_callback = cb; }
    inline void setKListWidgetSearchLine_ChildEvent_Callback(KListWidgetSearchLine_ChildEvent_Callback cb) { klistwidgetsearchline_childevent_callback = cb; }
    inline void setKListWidgetSearchLine_CustomEvent_Callback(KListWidgetSearchLine_CustomEvent_Callback cb) { klistwidgetsearchline_customevent_callback = cb; }
    inline void setKListWidgetSearchLine_ConnectNotify_Callback(KListWidgetSearchLine_ConnectNotify_Callback cb) { klistwidgetsearchline_connectnotify_callback = cb; }
    inline void setKListWidgetSearchLine_DisconnectNotify_Callback(KListWidgetSearchLine_DisconnectNotify_Callback cb) { klistwidgetsearchline_disconnectnotify_callback = cb; }
    inline void setKListWidgetSearchLine_CursorRect_Callback(KListWidgetSearchLine_CursorRect_Callback cb) { klistwidgetsearchline_cursorrect_callback = cb; }
    inline void setKListWidgetSearchLine_UpdateMicroFocus_Callback(KListWidgetSearchLine_UpdateMicroFocus_Callback cb) { klistwidgetsearchline_updatemicrofocus_callback = cb; }
    inline void setKListWidgetSearchLine_Create_Callback(KListWidgetSearchLine_Create_Callback cb) { klistwidgetsearchline_create_callback = cb; }
    inline void setKListWidgetSearchLine_Destroy_Callback(KListWidgetSearchLine_Destroy_Callback cb) { klistwidgetsearchline_destroy_callback = cb; }
    inline void setKListWidgetSearchLine_FocusNextChild_Callback(KListWidgetSearchLine_FocusNextChild_Callback cb) { klistwidgetsearchline_focusnextchild_callback = cb; }
    inline void setKListWidgetSearchLine_FocusPreviousChild_Callback(KListWidgetSearchLine_FocusPreviousChild_Callback cb) { klistwidgetsearchline_focuspreviouschild_callback = cb; }
    inline void setKListWidgetSearchLine_Sender_Callback(KListWidgetSearchLine_Sender_Callback cb) { klistwidgetsearchline_sender_callback = cb; }
    inline void setKListWidgetSearchLine_SenderSignalIndex_Callback(KListWidgetSearchLine_SenderSignalIndex_Callback cb) { klistwidgetsearchline_sendersignalindex_callback = cb; }
    inline void setKListWidgetSearchLine_Receivers_Callback(KListWidgetSearchLine_Receivers_Callback cb) { klistwidgetsearchline_receivers_callback = cb; }
    inline void setKListWidgetSearchLine_IsSignalConnected_Callback(KListWidgetSearchLine_IsSignalConnected_Callback cb) { klistwidgetsearchline_issignalconnected_callback = cb; }
    inline void setKListWidgetSearchLine_GetDecodedMetricF_Callback(KListWidgetSearchLine_GetDecodedMetricF_Callback cb) { klistwidgetsearchline_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKListWidgetSearchLine_Metacall_IsBase(bool value) const { klistwidgetsearchline_metacall_isbase = value; }
    inline void setKListWidgetSearchLine_UpdateSearch_IsBase(bool value) const { klistwidgetsearchline_updatesearch_isbase = value; }
    inline void setKListWidgetSearchLine_ItemMatches_IsBase(bool value) const { klistwidgetsearchline_itemmatches_isbase = value; }
    inline void setKListWidgetSearchLine_Event_IsBase(bool value) const { klistwidgetsearchline_event_isbase = value; }
    inline void setKListWidgetSearchLine_SizeHint_IsBase(bool value) const { klistwidgetsearchline_sizehint_isbase = value; }
    inline void setKListWidgetSearchLine_MinimumSizeHint_IsBase(bool value) const { klistwidgetsearchline_minimumsizehint_isbase = value; }
    inline void setKListWidgetSearchLine_MousePressEvent_IsBase(bool value) const { klistwidgetsearchline_mousepressevent_isbase = value; }
    inline void setKListWidgetSearchLine_MouseMoveEvent_IsBase(bool value) const { klistwidgetsearchline_mousemoveevent_isbase = value; }
    inline void setKListWidgetSearchLine_MouseReleaseEvent_IsBase(bool value) const { klistwidgetsearchline_mousereleaseevent_isbase = value; }
    inline void setKListWidgetSearchLine_MouseDoubleClickEvent_IsBase(bool value) const { klistwidgetsearchline_mousedoubleclickevent_isbase = value; }
    inline void setKListWidgetSearchLine_KeyPressEvent_IsBase(bool value) const { klistwidgetsearchline_keypressevent_isbase = value; }
    inline void setKListWidgetSearchLine_KeyReleaseEvent_IsBase(bool value) const { klistwidgetsearchline_keyreleaseevent_isbase = value; }
    inline void setKListWidgetSearchLine_FocusInEvent_IsBase(bool value) const { klistwidgetsearchline_focusinevent_isbase = value; }
    inline void setKListWidgetSearchLine_FocusOutEvent_IsBase(bool value) const { klistwidgetsearchline_focusoutevent_isbase = value; }
    inline void setKListWidgetSearchLine_PaintEvent_IsBase(bool value) const { klistwidgetsearchline_paintevent_isbase = value; }
    inline void setKListWidgetSearchLine_DragEnterEvent_IsBase(bool value) const { klistwidgetsearchline_dragenterevent_isbase = value; }
    inline void setKListWidgetSearchLine_DragMoveEvent_IsBase(bool value) const { klistwidgetsearchline_dragmoveevent_isbase = value; }
    inline void setKListWidgetSearchLine_DragLeaveEvent_IsBase(bool value) const { klistwidgetsearchline_dragleaveevent_isbase = value; }
    inline void setKListWidgetSearchLine_DropEvent_IsBase(bool value) const { klistwidgetsearchline_dropevent_isbase = value; }
    inline void setKListWidgetSearchLine_ChangeEvent_IsBase(bool value) const { klistwidgetsearchline_changeevent_isbase = value; }
    inline void setKListWidgetSearchLine_ContextMenuEvent_IsBase(bool value) const { klistwidgetsearchline_contextmenuevent_isbase = value; }
    inline void setKListWidgetSearchLine_InputMethodEvent_IsBase(bool value) const { klistwidgetsearchline_inputmethodevent_isbase = value; }
    inline void setKListWidgetSearchLine_InitStyleOption_IsBase(bool value) const { klistwidgetsearchline_initstyleoption_isbase = value; }
    inline void setKListWidgetSearchLine_InputMethodQuery_IsBase(bool value) const { klistwidgetsearchline_inputmethodquery_isbase = value; }
    inline void setKListWidgetSearchLine_TimerEvent_IsBase(bool value) const { klistwidgetsearchline_timerevent_isbase = value; }
    inline void setKListWidgetSearchLine_DevType_IsBase(bool value) const { klistwidgetsearchline_devtype_isbase = value; }
    inline void setKListWidgetSearchLine_SetVisible_IsBase(bool value) const { klistwidgetsearchline_setvisible_isbase = value; }
    inline void setKListWidgetSearchLine_HeightForWidth_IsBase(bool value) const { klistwidgetsearchline_heightforwidth_isbase = value; }
    inline void setKListWidgetSearchLine_HasHeightForWidth_IsBase(bool value) const { klistwidgetsearchline_hasheightforwidth_isbase = value; }
    inline void setKListWidgetSearchLine_PaintEngine_IsBase(bool value) const { klistwidgetsearchline_paintengine_isbase = value; }
    inline void setKListWidgetSearchLine_WheelEvent_IsBase(bool value) const { klistwidgetsearchline_wheelevent_isbase = value; }
    inline void setKListWidgetSearchLine_EnterEvent_IsBase(bool value) const { klistwidgetsearchline_enterevent_isbase = value; }
    inline void setKListWidgetSearchLine_LeaveEvent_IsBase(bool value) const { klistwidgetsearchline_leaveevent_isbase = value; }
    inline void setKListWidgetSearchLine_MoveEvent_IsBase(bool value) const { klistwidgetsearchline_moveevent_isbase = value; }
    inline void setKListWidgetSearchLine_ResizeEvent_IsBase(bool value) const { klistwidgetsearchline_resizeevent_isbase = value; }
    inline void setKListWidgetSearchLine_CloseEvent_IsBase(bool value) const { klistwidgetsearchline_closeevent_isbase = value; }
    inline void setKListWidgetSearchLine_TabletEvent_IsBase(bool value) const { klistwidgetsearchline_tabletevent_isbase = value; }
    inline void setKListWidgetSearchLine_ActionEvent_IsBase(bool value) const { klistwidgetsearchline_actionevent_isbase = value; }
    inline void setKListWidgetSearchLine_ShowEvent_IsBase(bool value) const { klistwidgetsearchline_showevent_isbase = value; }
    inline void setKListWidgetSearchLine_HideEvent_IsBase(bool value) const { klistwidgetsearchline_hideevent_isbase = value; }
    inline void setKListWidgetSearchLine_NativeEvent_IsBase(bool value) const { klistwidgetsearchline_nativeevent_isbase = value; }
    inline void setKListWidgetSearchLine_Metric_IsBase(bool value) const { klistwidgetsearchline_metric_isbase = value; }
    inline void setKListWidgetSearchLine_InitPainter_IsBase(bool value) const { klistwidgetsearchline_initpainter_isbase = value; }
    inline void setKListWidgetSearchLine_Redirected_IsBase(bool value) const { klistwidgetsearchline_redirected_isbase = value; }
    inline void setKListWidgetSearchLine_SharedPainter_IsBase(bool value) const { klistwidgetsearchline_sharedpainter_isbase = value; }
    inline void setKListWidgetSearchLine_FocusNextPrevChild_IsBase(bool value) const { klistwidgetsearchline_focusnextprevchild_isbase = value; }
    inline void setKListWidgetSearchLine_EventFilter_IsBase(bool value) const { klistwidgetsearchline_eventfilter_isbase = value; }
    inline void setKListWidgetSearchLine_ChildEvent_IsBase(bool value) const { klistwidgetsearchline_childevent_isbase = value; }
    inline void setKListWidgetSearchLine_CustomEvent_IsBase(bool value) const { klistwidgetsearchline_customevent_isbase = value; }
    inline void setKListWidgetSearchLine_ConnectNotify_IsBase(bool value) const { klistwidgetsearchline_connectnotify_isbase = value; }
    inline void setKListWidgetSearchLine_DisconnectNotify_IsBase(bool value) const { klistwidgetsearchline_disconnectnotify_isbase = value; }
    inline void setKListWidgetSearchLine_CursorRect_IsBase(bool value) const { klistwidgetsearchline_cursorrect_isbase = value; }
    inline void setKListWidgetSearchLine_UpdateMicroFocus_IsBase(bool value) const { klistwidgetsearchline_updatemicrofocus_isbase = value; }
    inline void setKListWidgetSearchLine_Create_IsBase(bool value) const { klistwidgetsearchline_create_isbase = value; }
    inline void setKListWidgetSearchLine_Destroy_IsBase(bool value) const { klistwidgetsearchline_destroy_isbase = value; }
    inline void setKListWidgetSearchLine_FocusNextChild_IsBase(bool value) const { klistwidgetsearchline_focusnextchild_isbase = value; }
    inline void setKListWidgetSearchLine_FocusPreviousChild_IsBase(bool value) const { klistwidgetsearchline_focuspreviouschild_isbase = value; }
    inline void setKListWidgetSearchLine_Sender_IsBase(bool value) const { klistwidgetsearchline_sender_isbase = value; }
    inline void setKListWidgetSearchLine_SenderSignalIndex_IsBase(bool value) const { klistwidgetsearchline_sendersignalindex_isbase = value; }
    inline void setKListWidgetSearchLine_Receivers_IsBase(bool value) const { klistwidgetsearchline_receivers_isbase = value; }
    inline void setKListWidgetSearchLine_IsSignalConnected_IsBase(bool value) const { klistwidgetsearchline_issignalconnected_isbase = value; }
    inline void setKListWidgetSearchLine_GetDecodedMetricF_IsBase(bool value) const { klistwidgetsearchline_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (klistwidgetsearchline_metacall_isbase) {
            klistwidgetsearchline_metacall_isbase = false;
            return KListWidgetSearchLine::qt_metacall(param1, param2, param3);
        } else if (klistwidgetsearchline_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = klistwidgetsearchline_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KListWidgetSearchLine::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateSearch(const QString& s) override {
        if (klistwidgetsearchline_updatesearch_isbase) {
            klistwidgetsearchline_updatesearch_isbase = false;
            KListWidgetSearchLine::updateSearch(s);
        } else if (klistwidgetsearchline_updatesearch_callback != nullptr) {
            const QString s_ret = s;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray s_b = s_ret.toUtf8();
            libqt_string s_str;
            s_str.len = s_b.length();
            s_str.data = static_cast<const char*>(malloc(s_str.len + 1));
            memcpy((void*)s_str.data, s_b.data(), s_str.len);
            ((char*)s_str.data)[s_str.len] = '\0';
            libqt_string cbval1 = s_str;

            klistwidgetsearchline_updatesearch_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::updateSearch(s);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool itemMatches(const QListWidgetItem* item, const QString& s) const override {
        if (klistwidgetsearchline_itemmatches_isbase) {
            klistwidgetsearchline_itemmatches_isbase = false;
            return KListWidgetSearchLine::itemMatches(item, s);
        } else if (klistwidgetsearchline_itemmatches_callback != nullptr) {
            QListWidgetItem* cbval1 = (QListWidgetItem*)item;
            const QString s_ret = s;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray s_b = s_ret.toUtf8();
            libqt_string s_str;
            s_str.len = s_b.length();
            s_str.data = static_cast<const char*>(malloc(s_str.len + 1));
            memcpy((void*)s_str.data, s_b.data(), s_str.len);
            ((char*)s_str.data)[s_str.len] = '\0';
            libqt_string cbval2 = s_str;

            bool callback_ret = klistwidgetsearchline_itemmatches_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KListWidgetSearchLine::itemMatches(item, s);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (klistwidgetsearchline_event_isbase) {
            klistwidgetsearchline_event_isbase = false;
            return KListWidgetSearchLine::event(event);
        } else if (klistwidgetsearchline_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = klistwidgetsearchline_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KListWidgetSearchLine::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (klistwidgetsearchline_sizehint_isbase) {
            klistwidgetsearchline_sizehint_isbase = false;
            return KListWidgetSearchLine::sizeHint();
        } else if (klistwidgetsearchline_sizehint_callback != nullptr) {
            QSize* callback_ret = klistwidgetsearchline_sizehint_callback();
            return *callback_ret;
        } else {
            return KListWidgetSearchLine::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (klistwidgetsearchline_minimumsizehint_isbase) {
            klistwidgetsearchline_minimumsizehint_isbase = false;
            return KListWidgetSearchLine::minimumSizeHint();
        } else if (klistwidgetsearchline_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = klistwidgetsearchline_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KListWidgetSearchLine::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (klistwidgetsearchline_mousepressevent_isbase) {
            klistwidgetsearchline_mousepressevent_isbase = false;
            KListWidgetSearchLine::mousePressEvent(param1);
        } else if (klistwidgetsearchline_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            klistwidgetsearchline_mousepressevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (klistwidgetsearchline_mousemoveevent_isbase) {
            klistwidgetsearchline_mousemoveevent_isbase = false;
            KListWidgetSearchLine::mouseMoveEvent(param1);
        } else if (klistwidgetsearchline_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            klistwidgetsearchline_mousemoveevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (klistwidgetsearchline_mousereleaseevent_isbase) {
            klistwidgetsearchline_mousereleaseevent_isbase = false;
            KListWidgetSearchLine::mouseReleaseEvent(param1);
        } else if (klistwidgetsearchline_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            klistwidgetsearchline_mousereleaseevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (klistwidgetsearchline_mousedoubleclickevent_isbase) {
            klistwidgetsearchline_mousedoubleclickevent_isbase = false;
            KListWidgetSearchLine::mouseDoubleClickEvent(param1);
        } else if (klistwidgetsearchline_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            klistwidgetsearchline_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::mouseDoubleClickEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (klistwidgetsearchline_keypressevent_isbase) {
            klistwidgetsearchline_keypressevent_isbase = false;
            KListWidgetSearchLine::keyPressEvent(param1);
        } else if (klistwidgetsearchline_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            klistwidgetsearchline_keypressevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (klistwidgetsearchline_keyreleaseevent_isbase) {
            klistwidgetsearchline_keyreleaseevent_isbase = false;
            KListWidgetSearchLine::keyReleaseEvent(param1);
        } else if (klistwidgetsearchline_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            klistwidgetsearchline_keyreleaseevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::keyReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (klistwidgetsearchline_focusinevent_isbase) {
            klistwidgetsearchline_focusinevent_isbase = false;
            KListWidgetSearchLine::focusInEvent(param1);
        } else if (klistwidgetsearchline_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            klistwidgetsearchline_focusinevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::focusInEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (klistwidgetsearchline_focusoutevent_isbase) {
            klistwidgetsearchline_focusoutevent_isbase = false;
            KListWidgetSearchLine::focusOutEvent(param1);
        } else if (klistwidgetsearchline_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            klistwidgetsearchline_focusoutevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::focusOutEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (klistwidgetsearchline_paintevent_isbase) {
            klistwidgetsearchline_paintevent_isbase = false;
            KListWidgetSearchLine::paintEvent(param1);
        } else if (klistwidgetsearchline_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            klistwidgetsearchline_paintevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (klistwidgetsearchline_dragenterevent_isbase) {
            klistwidgetsearchline_dragenterevent_isbase = false;
            KListWidgetSearchLine::dragEnterEvent(param1);
        } else if (klistwidgetsearchline_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = param1;

            klistwidgetsearchline_dragenterevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::dragEnterEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (klistwidgetsearchline_dragmoveevent_isbase) {
            klistwidgetsearchline_dragmoveevent_isbase = false;
            KListWidgetSearchLine::dragMoveEvent(e);
        } else if (klistwidgetsearchline_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = e;

            klistwidgetsearchline_dragmoveevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::dragMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (klistwidgetsearchline_dragleaveevent_isbase) {
            klistwidgetsearchline_dragleaveevent_isbase = false;
            KListWidgetSearchLine::dragLeaveEvent(e);
        } else if (klistwidgetsearchline_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = e;

            klistwidgetsearchline_dragleaveevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::dragLeaveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (klistwidgetsearchline_dropevent_isbase) {
            klistwidgetsearchline_dropevent_isbase = false;
            KListWidgetSearchLine::dropEvent(param1);
        } else if (klistwidgetsearchline_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = param1;

            klistwidgetsearchline_dropevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::dropEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (klistwidgetsearchline_changeevent_isbase) {
            klistwidgetsearchline_changeevent_isbase = false;
            KListWidgetSearchLine::changeEvent(param1);
        } else if (klistwidgetsearchline_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            klistwidgetsearchline_changeevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (klistwidgetsearchline_contextmenuevent_isbase) {
            klistwidgetsearchline_contextmenuevent_isbase = false;
            KListWidgetSearchLine::contextMenuEvent(param1);
        } else if (klistwidgetsearchline_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            klistwidgetsearchline_contextmenuevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (klistwidgetsearchline_inputmethodevent_isbase) {
            klistwidgetsearchline_inputmethodevent_isbase = false;
            KListWidgetSearchLine::inputMethodEvent(param1);
        } else if (klistwidgetsearchline_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            klistwidgetsearchline_inputmethodevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (klistwidgetsearchline_initstyleoption_isbase) {
            klistwidgetsearchline_initstyleoption_isbase = false;
            KListWidgetSearchLine::initStyleOption(option);
        } else if (klistwidgetsearchline_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            klistwidgetsearchline_initstyleoption_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (klistwidgetsearchline_inputmethodquery_isbase) {
            klistwidgetsearchline_inputmethodquery_isbase = false;
            return KListWidgetSearchLine::inputMethodQuery(param1);
        } else if (klistwidgetsearchline_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = klistwidgetsearchline_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KListWidgetSearchLine::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (klistwidgetsearchline_timerevent_isbase) {
            klistwidgetsearchline_timerevent_isbase = false;
            KListWidgetSearchLine::timerEvent(param1);
        } else if (klistwidgetsearchline_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = param1;

            klistwidgetsearchline_timerevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::timerEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (klistwidgetsearchline_devtype_isbase) {
            klistwidgetsearchline_devtype_isbase = false;
            return KListWidgetSearchLine::devType();
        } else if (klistwidgetsearchline_devtype_callback != nullptr) {
            int callback_ret = klistwidgetsearchline_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KListWidgetSearchLine::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (klistwidgetsearchline_setvisible_isbase) {
            klistwidgetsearchline_setvisible_isbase = false;
            KListWidgetSearchLine::setVisible(visible);
        } else if (klistwidgetsearchline_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            klistwidgetsearchline_setvisible_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (klistwidgetsearchline_heightforwidth_isbase) {
            klistwidgetsearchline_heightforwidth_isbase = false;
            return KListWidgetSearchLine::heightForWidth(param1);
        } else if (klistwidgetsearchline_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = klistwidgetsearchline_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KListWidgetSearchLine::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (klistwidgetsearchline_hasheightforwidth_isbase) {
            klistwidgetsearchline_hasheightforwidth_isbase = false;
            return KListWidgetSearchLine::hasHeightForWidth();
        } else if (klistwidgetsearchline_hasheightforwidth_callback != nullptr) {
            bool callback_ret = klistwidgetsearchline_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KListWidgetSearchLine::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (klistwidgetsearchline_paintengine_isbase) {
            klistwidgetsearchline_paintengine_isbase = false;
            return KListWidgetSearchLine::paintEngine();
        } else if (klistwidgetsearchline_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = klistwidgetsearchline_paintengine_callback();
            return callback_ret;
        } else {
            return KListWidgetSearchLine::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (klistwidgetsearchline_wheelevent_isbase) {
            klistwidgetsearchline_wheelevent_isbase = false;
            KListWidgetSearchLine::wheelEvent(event);
        } else if (klistwidgetsearchline_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            klistwidgetsearchline_wheelevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (klistwidgetsearchline_enterevent_isbase) {
            klistwidgetsearchline_enterevent_isbase = false;
            KListWidgetSearchLine::enterEvent(event);
        } else if (klistwidgetsearchline_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            klistwidgetsearchline_enterevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (klistwidgetsearchline_leaveevent_isbase) {
            klistwidgetsearchline_leaveevent_isbase = false;
            KListWidgetSearchLine::leaveEvent(event);
        } else if (klistwidgetsearchline_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            klistwidgetsearchline_leaveevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (klistwidgetsearchline_moveevent_isbase) {
            klistwidgetsearchline_moveevent_isbase = false;
            KListWidgetSearchLine::moveEvent(event);
        } else if (klistwidgetsearchline_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            klistwidgetsearchline_moveevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (klistwidgetsearchline_resizeevent_isbase) {
            klistwidgetsearchline_resizeevent_isbase = false;
            KListWidgetSearchLine::resizeEvent(event);
        } else if (klistwidgetsearchline_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            klistwidgetsearchline_resizeevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (klistwidgetsearchline_closeevent_isbase) {
            klistwidgetsearchline_closeevent_isbase = false;
            KListWidgetSearchLine::closeEvent(event);
        } else if (klistwidgetsearchline_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            klistwidgetsearchline_closeevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (klistwidgetsearchline_tabletevent_isbase) {
            klistwidgetsearchline_tabletevent_isbase = false;
            KListWidgetSearchLine::tabletEvent(event);
        } else if (klistwidgetsearchline_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            klistwidgetsearchline_tabletevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (klistwidgetsearchline_actionevent_isbase) {
            klistwidgetsearchline_actionevent_isbase = false;
            KListWidgetSearchLine::actionEvent(event);
        } else if (klistwidgetsearchline_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            klistwidgetsearchline_actionevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (klistwidgetsearchline_showevent_isbase) {
            klistwidgetsearchline_showevent_isbase = false;
            KListWidgetSearchLine::showEvent(event);
        } else if (klistwidgetsearchline_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            klistwidgetsearchline_showevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (klistwidgetsearchline_hideevent_isbase) {
            klistwidgetsearchline_hideevent_isbase = false;
            KListWidgetSearchLine::hideEvent(event);
        } else if (klistwidgetsearchline_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            klistwidgetsearchline_hideevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (klistwidgetsearchline_nativeevent_isbase) {
            klistwidgetsearchline_nativeevent_isbase = false;
            return KListWidgetSearchLine::nativeEvent(eventType, message, result);
        } else if (klistwidgetsearchline_nativeevent_callback != nullptr) {
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

            bool callback_ret = klistwidgetsearchline_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KListWidgetSearchLine::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (klistwidgetsearchline_metric_isbase) {
            klistwidgetsearchline_metric_isbase = false;
            return KListWidgetSearchLine::metric(param1);
        } else if (klistwidgetsearchline_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = klistwidgetsearchline_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KListWidgetSearchLine::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (klistwidgetsearchline_initpainter_isbase) {
            klistwidgetsearchline_initpainter_isbase = false;
            KListWidgetSearchLine::initPainter(painter);
        } else if (klistwidgetsearchline_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            klistwidgetsearchline_initpainter_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (klistwidgetsearchline_redirected_isbase) {
            klistwidgetsearchline_redirected_isbase = false;
            return KListWidgetSearchLine::redirected(offset);
        } else if (klistwidgetsearchline_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = klistwidgetsearchline_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KListWidgetSearchLine::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (klistwidgetsearchline_sharedpainter_isbase) {
            klistwidgetsearchline_sharedpainter_isbase = false;
            return KListWidgetSearchLine::sharedPainter();
        } else if (klistwidgetsearchline_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = klistwidgetsearchline_sharedpainter_callback();
            return callback_ret;
        } else {
            return KListWidgetSearchLine::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (klistwidgetsearchline_focusnextprevchild_isbase) {
            klistwidgetsearchline_focusnextprevchild_isbase = false;
            return KListWidgetSearchLine::focusNextPrevChild(next);
        } else if (klistwidgetsearchline_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = klistwidgetsearchline_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KListWidgetSearchLine::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (klistwidgetsearchline_eventfilter_isbase) {
            klistwidgetsearchline_eventfilter_isbase = false;
            return KListWidgetSearchLine::eventFilter(watched, event);
        } else if (klistwidgetsearchline_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = klistwidgetsearchline_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KListWidgetSearchLine::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (klistwidgetsearchline_childevent_isbase) {
            klistwidgetsearchline_childevent_isbase = false;
            KListWidgetSearchLine::childEvent(event);
        } else if (klistwidgetsearchline_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            klistwidgetsearchline_childevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (klistwidgetsearchline_customevent_isbase) {
            klistwidgetsearchline_customevent_isbase = false;
            KListWidgetSearchLine::customEvent(event);
        } else if (klistwidgetsearchline_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            klistwidgetsearchline_customevent_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (klistwidgetsearchline_connectnotify_isbase) {
            klistwidgetsearchline_connectnotify_isbase = false;
            KListWidgetSearchLine::connectNotify(signal);
        } else if (klistwidgetsearchline_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            klistwidgetsearchline_connectnotify_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (klistwidgetsearchline_disconnectnotify_isbase) {
            klistwidgetsearchline_disconnectnotify_isbase = false;
            KListWidgetSearchLine::disconnectNotify(signal);
        } else if (klistwidgetsearchline_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            klistwidgetsearchline_disconnectnotify_callback(this, cbval1);
        } else {
            KListWidgetSearchLine::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QRect cursorRect() const {
        if (klistwidgetsearchline_cursorrect_isbase) {
            klistwidgetsearchline_cursorrect_isbase = false;
            return KListWidgetSearchLine::cursorRect();
        } else if (klistwidgetsearchline_cursorrect_callback != nullptr) {
            QRect* callback_ret = klistwidgetsearchline_cursorrect_callback();
            return *callback_ret;
        } else {
            return KListWidgetSearchLine::cursorRect();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (klistwidgetsearchline_updatemicrofocus_isbase) {
            klistwidgetsearchline_updatemicrofocus_isbase = false;
            KListWidgetSearchLine::updateMicroFocus();
        } else if (klistwidgetsearchline_updatemicrofocus_callback != nullptr) {
            klistwidgetsearchline_updatemicrofocus_callback();
        } else {
            KListWidgetSearchLine::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (klistwidgetsearchline_create_isbase) {
            klistwidgetsearchline_create_isbase = false;
            KListWidgetSearchLine::create();
        } else if (klistwidgetsearchline_create_callback != nullptr) {
            klistwidgetsearchline_create_callback();
        } else {
            KListWidgetSearchLine::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (klistwidgetsearchline_destroy_isbase) {
            klistwidgetsearchline_destroy_isbase = false;
            KListWidgetSearchLine::destroy();
        } else if (klistwidgetsearchline_destroy_callback != nullptr) {
            klistwidgetsearchline_destroy_callback();
        } else {
            KListWidgetSearchLine::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (klistwidgetsearchline_focusnextchild_isbase) {
            klistwidgetsearchline_focusnextchild_isbase = false;
            return KListWidgetSearchLine::focusNextChild();
        } else if (klistwidgetsearchline_focusnextchild_callback != nullptr) {
            bool callback_ret = klistwidgetsearchline_focusnextchild_callback();
            return callback_ret;
        } else {
            return KListWidgetSearchLine::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (klistwidgetsearchline_focuspreviouschild_isbase) {
            klistwidgetsearchline_focuspreviouschild_isbase = false;
            return KListWidgetSearchLine::focusPreviousChild();
        } else if (klistwidgetsearchline_focuspreviouschild_callback != nullptr) {
            bool callback_ret = klistwidgetsearchline_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KListWidgetSearchLine::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (klistwidgetsearchline_sender_isbase) {
            klistwidgetsearchline_sender_isbase = false;
            return KListWidgetSearchLine::sender();
        } else if (klistwidgetsearchline_sender_callback != nullptr) {
            QObject* callback_ret = klistwidgetsearchline_sender_callback();
            return callback_ret;
        } else {
            return KListWidgetSearchLine::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (klistwidgetsearchline_sendersignalindex_isbase) {
            klistwidgetsearchline_sendersignalindex_isbase = false;
            return KListWidgetSearchLine::senderSignalIndex();
        } else if (klistwidgetsearchline_sendersignalindex_callback != nullptr) {
            int callback_ret = klistwidgetsearchline_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KListWidgetSearchLine::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (klistwidgetsearchline_receivers_isbase) {
            klistwidgetsearchline_receivers_isbase = false;
            return KListWidgetSearchLine::receivers(signal);
        } else if (klistwidgetsearchline_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = klistwidgetsearchline_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KListWidgetSearchLine::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (klistwidgetsearchline_issignalconnected_isbase) {
            klistwidgetsearchline_issignalconnected_isbase = false;
            return KListWidgetSearchLine::isSignalConnected(signal);
        } else if (klistwidgetsearchline_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = klistwidgetsearchline_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KListWidgetSearchLine::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (klistwidgetsearchline_getdecodedmetricf_isbase) {
            klistwidgetsearchline_getdecodedmetricf_isbase = false;
            return KListWidgetSearchLine::getDecodedMetricF(metricA, metricB);
        } else if (klistwidgetsearchline_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = klistwidgetsearchline_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KListWidgetSearchLine::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KListWidgetSearchLine_ItemMatches(const KListWidgetSearchLine* self, const QListWidgetItem* item, const libqt_string s);
    friend bool KListWidgetSearchLine_QBaseItemMatches(const KListWidgetSearchLine* self, const QListWidgetItem* item, const libqt_string s);
    friend bool KListWidgetSearchLine_Event(KListWidgetSearchLine* self, QEvent* event);
    friend bool KListWidgetSearchLine_QBaseEvent(KListWidgetSearchLine* self, QEvent* event);
    friend void KListWidgetSearchLine_MousePressEvent(KListWidgetSearchLine* self, QMouseEvent* param1);
    friend void KListWidgetSearchLine_QBaseMousePressEvent(KListWidgetSearchLine* self, QMouseEvent* param1);
    friend void KListWidgetSearchLine_MouseMoveEvent(KListWidgetSearchLine* self, QMouseEvent* param1);
    friend void KListWidgetSearchLine_QBaseMouseMoveEvent(KListWidgetSearchLine* self, QMouseEvent* param1);
    friend void KListWidgetSearchLine_MouseReleaseEvent(KListWidgetSearchLine* self, QMouseEvent* param1);
    friend void KListWidgetSearchLine_QBaseMouseReleaseEvent(KListWidgetSearchLine* self, QMouseEvent* param1);
    friend void KListWidgetSearchLine_MouseDoubleClickEvent(KListWidgetSearchLine* self, QMouseEvent* param1);
    friend void KListWidgetSearchLine_QBaseMouseDoubleClickEvent(KListWidgetSearchLine* self, QMouseEvent* param1);
    friend void KListWidgetSearchLine_KeyPressEvent(KListWidgetSearchLine* self, QKeyEvent* param1);
    friend void KListWidgetSearchLine_QBaseKeyPressEvent(KListWidgetSearchLine* self, QKeyEvent* param1);
    friend void KListWidgetSearchLine_KeyReleaseEvent(KListWidgetSearchLine* self, QKeyEvent* param1);
    friend void KListWidgetSearchLine_QBaseKeyReleaseEvent(KListWidgetSearchLine* self, QKeyEvent* param1);
    friend void KListWidgetSearchLine_FocusInEvent(KListWidgetSearchLine* self, QFocusEvent* param1);
    friend void KListWidgetSearchLine_QBaseFocusInEvent(KListWidgetSearchLine* self, QFocusEvent* param1);
    friend void KListWidgetSearchLine_FocusOutEvent(KListWidgetSearchLine* self, QFocusEvent* param1);
    friend void KListWidgetSearchLine_QBaseFocusOutEvent(KListWidgetSearchLine* self, QFocusEvent* param1);
    friend void KListWidgetSearchLine_PaintEvent(KListWidgetSearchLine* self, QPaintEvent* param1);
    friend void KListWidgetSearchLine_QBasePaintEvent(KListWidgetSearchLine* self, QPaintEvent* param1);
    friend void KListWidgetSearchLine_DragEnterEvent(KListWidgetSearchLine* self, QDragEnterEvent* param1);
    friend void KListWidgetSearchLine_QBaseDragEnterEvent(KListWidgetSearchLine* self, QDragEnterEvent* param1);
    friend void KListWidgetSearchLine_DragMoveEvent(KListWidgetSearchLine* self, QDragMoveEvent* e);
    friend void KListWidgetSearchLine_QBaseDragMoveEvent(KListWidgetSearchLine* self, QDragMoveEvent* e);
    friend void KListWidgetSearchLine_DragLeaveEvent(KListWidgetSearchLine* self, QDragLeaveEvent* e);
    friend void KListWidgetSearchLine_QBaseDragLeaveEvent(KListWidgetSearchLine* self, QDragLeaveEvent* e);
    friend void KListWidgetSearchLine_DropEvent(KListWidgetSearchLine* self, QDropEvent* param1);
    friend void KListWidgetSearchLine_QBaseDropEvent(KListWidgetSearchLine* self, QDropEvent* param1);
    friend void KListWidgetSearchLine_ChangeEvent(KListWidgetSearchLine* self, QEvent* param1);
    friend void KListWidgetSearchLine_QBaseChangeEvent(KListWidgetSearchLine* self, QEvent* param1);
    friend void KListWidgetSearchLine_ContextMenuEvent(KListWidgetSearchLine* self, QContextMenuEvent* param1);
    friend void KListWidgetSearchLine_QBaseContextMenuEvent(KListWidgetSearchLine* self, QContextMenuEvent* param1);
    friend void KListWidgetSearchLine_InputMethodEvent(KListWidgetSearchLine* self, QInputMethodEvent* param1);
    friend void KListWidgetSearchLine_QBaseInputMethodEvent(KListWidgetSearchLine* self, QInputMethodEvent* param1);
    friend void KListWidgetSearchLine_InitStyleOption(const KListWidgetSearchLine* self, QStyleOptionFrame* option);
    friend void KListWidgetSearchLine_QBaseInitStyleOption(const KListWidgetSearchLine* self, QStyleOptionFrame* option);
    friend void KListWidgetSearchLine_WheelEvent(KListWidgetSearchLine* self, QWheelEvent* event);
    friend void KListWidgetSearchLine_QBaseWheelEvent(KListWidgetSearchLine* self, QWheelEvent* event);
    friend void KListWidgetSearchLine_EnterEvent(KListWidgetSearchLine* self, QEnterEvent* event);
    friend void KListWidgetSearchLine_QBaseEnterEvent(KListWidgetSearchLine* self, QEnterEvent* event);
    friend void KListWidgetSearchLine_LeaveEvent(KListWidgetSearchLine* self, QEvent* event);
    friend void KListWidgetSearchLine_QBaseLeaveEvent(KListWidgetSearchLine* self, QEvent* event);
    friend void KListWidgetSearchLine_MoveEvent(KListWidgetSearchLine* self, QMoveEvent* event);
    friend void KListWidgetSearchLine_QBaseMoveEvent(KListWidgetSearchLine* self, QMoveEvent* event);
    friend void KListWidgetSearchLine_ResizeEvent(KListWidgetSearchLine* self, QResizeEvent* event);
    friend void KListWidgetSearchLine_QBaseResizeEvent(KListWidgetSearchLine* self, QResizeEvent* event);
    friend void KListWidgetSearchLine_CloseEvent(KListWidgetSearchLine* self, QCloseEvent* event);
    friend void KListWidgetSearchLine_QBaseCloseEvent(KListWidgetSearchLine* self, QCloseEvent* event);
    friend void KListWidgetSearchLine_TabletEvent(KListWidgetSearchLine* self, QTabletEvent* event);
    friend void KListWidgetSearchLine_QBaseTabletEvent(KListWidgetSearchLine* self, QTabletEvent* event);
    friend void KListWidgetSearchLine_ActionEvent(KListWidgetSearchLine* self, QActionEvent* event);
    friend void KListWidgetSearchLine_QBaseActionEvent(KListWidgetSearchLine* self, QActionEvent* event);
    friend void KListWidgetSearchLine_ShowEvent(KListWidgetSearchLine* self, QShowEvent* event);
    friend void KListWidgetSearchLine_QBaseShowEvent(KListWidgetSearchLine* self, QShowEvent* event);
    friend void KListWidgetSearchLine_HideEvent(KListWidgetSearchLine* self, QHideEvent* event);
    friend void KListWidgetSearchLine_QBaseHideEvent(KListWidgetSearchLine* self, QHideEvent* event);
    friend bool KListWidgetSearchLine_NativeEvent(KListWidgetSearchLine* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KListWidgetSearchLine_QBaseNativeEvent(KListWidgetSearchLine* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KListWidgetSearchLine_Metric(const KListWidgetSearchLine* self, int param1);
    friend int KListWidgetSearchLine_QBaseMetric(const KListWidgetSearchLine* self, int param1);
    friend void KListWidgetSearchLine_InitPainter(const KListWidgetSearchLine* self, QPainter* painter);
    friend void KListWidgetSearchLine_QBaseInitPainter(const KListWidgetSearchLine* self, QPainter* painter);
    friend QPaintDevice* KListWidgetSearchLine_Redirected(const KListWidgetSearchLine* self, QPoint* offset);
    friend QPaintDevice* KListWidgetSearchLine_QBaseRedirected(const KListWidgetSearchLine* self, QPoint* offset);
    friend QPainter* KListWidgetSearchLine_SharedPainter(const KListWidgetSearchLine* self);
    friend QPainter* KListWidgetSearchLine_QBaseSharedPainter(const KListWidgetSearchLine* self);
    friend bool KListWidgetSearchLine_FocusNextPrevChild(KListWidgetSearchLine* self, bool next);
    friend bool KListWidgetSearchLine_QBaseFocusNextPrevChild(KListWidgetSearchLine* self, bool next);
    friend void KListWidgetSearchLine_ChildEvent(KListWidgetSearchLine* self, QChildEvent* event);
    friend void KListWidgetSearchLine_QBaseChildEvent(KListWidgetSearchLine* self, QChildEvent* event);
    friend void KListWidgetSearchLine_CustomEvent(KListWidgetSearchLine* self, QEvent* event);
    friend void KListWidgetSearchLine_QBaseCustomEvent(KListWidgetSearchLine* self, QEvent* event);
    friend void KListWidgetSearchLine_ConnectNotify(KListWidgetSearchLine* self, const QMetaMethod* signal);
    friend void KListWidgetSearchLine_QBaseConnectNotify(KListWidgetSearchLine* self, const QMetaMethod* signal);
    friend void KListWidgetSearchLine_DisconnectNotify(KListWidgetSearchLine* self, const QMetaMethod* signal);
    friend void KListWidgetSearchLine_QBaseDisconnectNotify(KListWidgetSearchLine* self, const QMetaMethod* signal);
    friend QRect* KListWidgetSearchLine_CursorRect(const KListWidgetSearchLine* self);
    friend QRect* KListWidgetSearchLine_QBaseCursorRect(const KListWidgetSearchLine* self);
    friend void KListWidgetSearchLine_UpdateMicroFocus(KListWidgetSearchLine* self);
    friend void KListWidgetSearchLine_QBaseUpdateMicroFocus(KListWidgetSearchLine* self);
    friend void KListWidgetSearchLine_Create(KListWidgetSearchLine* self);
    friend void KListWidgetSearchLine_QBaseCreate(KListWidgetSearchLine* self);
    friend void KListWidgetSearchLine_Destroy(KListWidgetSearchLine* self);
    friend void KListWidgetSearchLine_QBaseDestroy(KListWidgetSearchLine* self);
    friend bool KListWidgetSearchLine_FocusNextChild(KListWidgetSearchLine* self);
    friend bool KListWidgetSearchLine_QBaseFocusNextChild(KListWidgetSearchLine* self);
    friend bool KListWidgetSearchLine_FocusPreviousChild(KListWidgetSearchLine* self);
    friend bool KListWidgetSearchLine_QBaseFocusPreviousChild(KListWidgetSearchLine* self);
    friend QObject* KListWidgetSearchLine_Sender(const KListWidgetSearchLine* self);
    friend QObject* KListWidgetSearchLine_QBaseSender(const KListWidgetSearchLine* self);
    friend int KListWidgetSearchLine_SenderSignalIndex(const KListWidgetSearchLine* self);
    friend int KListWidgetSearchLine_QBaseSenderSignalIndex(const KListWidgetSearchLine* self);
    friend int KListWidgetSearchLine_Receivers(const KListWidgetSearchLine* self, const char* signal);
    friend int KListWidgetSearchLine_QBaseReceivers(const KListWidgetSearchLine* self, const char* signal);
    friend bool KListWidgetSearchLine_IsSignalConnected(const KListWidgetSearchLine* self, const QMetaMethod* signal);
    friend bool KListWidgetSearchLine_QBaseIsSignalConnected(const KListWidgetSearchLine* self, const QMetaMethod* signal);
    friend double KListWidgetSearchLine_GetDecodedMetricF(const KListWidgetSearchLine* self, int metricA, int metricB);
    friend double KListWidgetSearchLine_QBaseGetDecodedMetricF(const KListWidgetSearchLine* self, int metricA, int metricB);
};

#endif
