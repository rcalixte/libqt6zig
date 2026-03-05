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
    using KListWidgetSearchLine_MetaObject_Callback = QMetaObject* (*)();
    using KListWidgetSearchLine_Metacast_Callback = void* (*)(KListWidgetSearchLine*, const char*);
    using KListWidgetSearchLine_Metacall_Callback = int (*)(KListWidgetSearchLine*, int, int, void**);
    using KListWidgetSearchLine_UpdateSearch_Callback = void (*)(KListWidgetSearchLine*, const char*);
    using KListWidgetSearchLine_ItemMatches_Callback = bool (*)(const KListWidgetSearchLine*, QListWidgetItem*, const char*);
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
    KListWidgetSearchLine_MetaObject_Callback klistwidgetsearchline_metaobject_callback = nullptr;
    KListWidgetSearchLine_Metacast_Callback klistwidgetsearchline_metacast_callback = nullptr;
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
    mutable bool klistwidgetsearchline_metaobject_isbase = false;
    mutable bool klistwidgetsearchline_metacast_isbase = false;
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

    // Callback setters
    inline void setKListWidgetSearchLine_MetaObject_Callback(KListWidgetSearchLine_MetaObject_Callback cb) { klistwidgetsearchline_metaobject_callback = cb; }
    inline void setKListWidgetSearchLine_Metacast_Callback(KListWidgetSearchLine_Metacast_Callback cb) { klistwidgetsearchline_metacast_callback = cb; }
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
    inline void setKListWidgetSearchLine_MetaObject_IsBase(bool value) const { klistwidgetsearchline_metaobject_isbase = value; }
    inline void setKListWidgetSearchLine_Metacast_IsBase(bool value) const { klistwidgetsearchline_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (klistwidgetsearchline_metaobject_isbase) {
            klistwidgetsearchline_metaobject_isbase = false;
            return KListWidgetSearchLine::metaObject();
        }
        auto metaobject_cb = klistwidgetsearchline_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KListWidgetSearchLine::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (klistwidgetsearchline_metacast_isbase) {
            klistwidgetsearchline_metacast_isbase = false;
            return KListWidgetSearchLine::qt_metacast(param1);
        }
        auto metacast_cb = klistwidgetsearchline_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KListWidgetSearchLine::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (klistwidgetsearchline_metacall_isbase) {
            klistwidgetsearchline_metacall_isbase = false;
            return KListWidgetSearchLine::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = klistwidgetsearchline_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KListWidgetSearchLine::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateSearch(const QString& s) override {
        if (klistwidgetsearchline_updatesearch_isbase) {
            klistwidgetsearchline_updatesearch_isbase = false;
            KListWidgetSearchLine::updateSearch(s);
            return;
        }
        auto updatesearch_cb = klistwidgetsearchline_updatesearch_callback;
        if (updatesearch_cb) {
            const QString s_ret = s;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray s_b = s_ret.toUtf8();
            auto s_str_len = s_b.length();
            const char* s_str = static_cast<const char*>(malloc(s_str_len + 1));
            memcpy((void*)s_str, s_b.data(), s_str_len);
            ((char*)s_str)[s_str_len] = '\0';
            const char* cbval1 = s_str;

            updatesearch_cb(this, cbval1);
            libqt_free(s_str);
            return;
        }
        KListWidgetSearchLine::updateSearch(s);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool itemMatches(const QListWidgetItem* item, const QString& s) const override {
        if (klistwidgetsearchline_itemmatches_isbase) {
            klistwidgetsearchline_itemmatches_isbase = false;
            return KListWidgetSearchLine::itemMatches(item, s);
        }
        auto itemmatches_cb = klistwidgetsearchline_itemmatches_callback;
        if (itemmatches_cb) {
            QListWidgetItem* cbval1 = (QListWidgetItem*)item;
            const QString s_ret = s;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray s_b = s_ret.toUtf8();
            auto s_str_len = s_b.length();
            const char* s_str = static_cast<const char*>(malloc(s_str_len + 1));
            memcpy((void*)s_str, s_b.data(), s_str_len);
            ((char*)s_str)[s_str_len] = '\0';
            const char* cbval2 = s_str;

            bool callback_ret = itemmatches_cb(this, cbval1, cbval2);
            libqt_free(s_str);
            return callback_ret;
        }
        return KListWidgetSearchLine::itemMatches(item, s);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (klistwidgetsearchline_event_isbase) {
            klistwidgetsearchline_event_isbase = false;
            return KListWidgetSearchLine::event(event);
        }
        auto event_cb = klistwidgetsearchline_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KListWidgetSearchLine::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (klistwidgetsearchline_sizehint_isbase) {
            klistwidgetsearchline_sizehint_isbase = false;
            return KListWidgetSearchLine::sizeHint();
        }
        auto sizehint_cb = klistwidgetsearchline_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KListWidgetSearchLine::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (klistwidgetsearchline_minimumsizehint_isbase) {
            klistwidgetsearchline_minimumsizehint_isbase = false;
            return KListWidgetSearchLine::minimumSizeHint();
        }
        auto minimumsizehint_cb = klistwidgetsearchline_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KListWidgetSearchLine::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (klistwidgetsearchline_mousepressevent_isbase) {
            klistwidgetsearchline_mousepressevent_isbase = false;
            KListWidgetSearchLine::mousePressEvent(param1);
            return;
        }
        auto mousepressevent_cb = klistwidgetsearchline_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (klistwidgetsearchline_mousemoveevent_isbase) {
            klistwidgetsearchline_mousemoveevent_isbase = false;
            KListWidgetSearchLine::mouseMoveEvent(param1);
            return;
        }
        auto mousemoveevent_cb = klistwidgetsearchline_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (klistwidgetsearchline_mousereleaseevent_isbase) {
            klistwidgetsearchline_mousereleaseevent_isbase = false;
            KListWidgetSearchLine::mouseReleaseEvent(param1);
            return;
        }
        auto mousereleaseevent_cb = klistwidgetsearchline_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (klistwidgetsearchline_mousedoubleclickevent_isbase) {
            klistwidgetsearchline_mousedoubleclickevent_isbase = false;
            KListWidgetSearchLine::mouseDoubleClickEvent(param1);
            return;
        }
        auto mousedoubleclickevent_cb = klistwidgetsearchline_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::mouseDoubleClickEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (klistwidgetsearchline_keypressevent_isbase) {
            klistwidgetsearchline_keypressevent_isbase = false;
            KListWidgetSearchLine::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = klistwidgetsearchline_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (klistwidgetsearchline_keyreleaseevent_isbase) {
            klistwidgetsearchline_keyreleaseevent_isbase = false;
            KListWidgetSearchLine::keyReleaseEvent(param1);
            return;
        }
        auto keyreleaseevent_cb = klistwidgetsearchline_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = param1;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::keyReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (klistwidgetsearchline_focusinevent_isbase) {
            klistwidgetsearchline_focusinevent_isbase = false;
            KListWidgetSearchLine::focusInEvent(param1);
            return;
        }
        auto focusinevent_cb = klistwidgetsearchline_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = param1;

            focusinevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::focusInEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (klistwidgetsearchline_focusoutevent_isbase) {
            klistwidgetsearchline_focusoutevent_isbase = false;
            KListWidgetSearchLine::focusOutEvent(param1);
            return;
        }
        auto focusoutevent_cb = klistwidgetsearchline_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = param1;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (klistwidgetsearchline_paintevent_isbase) {
            klistwidgetsearchline_paintevent_isbase = false;
            KListWidgetSearchLine::paintEvent(param1);
            return;
        }
        auto paintevent_cb = klistwidgetsearchline_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;

            paintevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (klistwidgetsearchline_dragenterevent_isbase) {
            klistwidgetsearchline_dragenterevent_isbase = false;
            KListWidgetSearchLine::dragEnterEvent(param1);
            return;
        }
        auto dragenterevent_cb = klistwidgetsearchline_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = param1;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (klistwidgetsearchline_dragmoveevent_isbase) {
            klistwidgetsearchline_dragmoveevent_isbase = false;
            KListWidgetSearchLine::dragMoveEvent(e);
            return;
        }
        auto dragmoveevent_cb = klistwidgetsearchline_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = e;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::dragMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (klistwidgetsearchline_dragleaveevent_isbase) {
            klistwidgetsearchline_dragleaveevent_isbase = false;
            KListWidgetSearchLine::dragLeaveEvent(e);
            return;
        }
        auto dragleaveevent_cb = klistwidgetsearchline_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = e;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::dragLeaveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (klistwidgetsearchline_dropevent_isbase) {
            klistwidgetsearchline_dropevent_isbase = false;
            KListWidgetSearchLine::dropEvent(param1);
            return;
        }
        auto dropevent_cb = klistwidgetsearchline_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = param1;

            dropevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (klistwidgetsearchline_changeevent_isbase) {
            klistwidgetsearchline_changeevent_isbase = false;
            KListWidgetSearchLine::changeEvent(param1);
            return;
        }
        auto changeevent_cb = klistwidgetsearchline_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (klistwidgetsearchline_contextmenuevent_isbase) {
            klistwidgetsearchline_contextmenuevent_isbase = false;
            KListWidgetSearchLine::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = klistwidgetsearchline_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (klistwidgetsearchline_inputmethodevent_isbase) {
            klistwidgetsearchline_inputmethodevent_isbase = false;
            KListWidgetSearchLine::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = klistwidgetsearchline_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (klistwidgetsearchline_initstyleoption_isbase) {
            klistwidgetsearchline_initstyleoption_isbase = false;
            KListWidgetSearchLine::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = klistwidgetsearchline_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (klistwidgetsearchline_inputmethodquery_isbase) {
            klistwidgetsearchline_inputmethodquery_isbase = false;
            return KListWidgetSearchLine::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = klistwidgetsearchline_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KListWidgetSearchLine::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (klistwidgetsearchline_timerevent_isbase) {
            klistwidgetsearchline_timerevent_isbase = false;
            KListWidgetSearchLine::timerEvent(param1);
            return;
        }
        auto timerevent_cb = klistwidgetsearchline_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = param1;

            timerevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (klistwidgetsearchline_devtype_isbase) {
            klistwidgetsearchline_devtype_isbase = false;
            return KListWidgetSearchLine::devType();
        }
        auto devtype_cb = klistwidgetsearchline_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KListWidgetSearchLine::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (klistwidgetsearchline_setvisible_isbase) {
            klistwidgetsearchline_setvisible_isbase = false;
            KListWidgetSearchLine::setVisible(visible);
            return;
        }
        auto setvisible_cb = klistwidgetsearchline_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (klistwidgetsearchline_heightforwidth_isbase) {
            klistwidgetsearchline_heightforwidth_isbase = false;
            return KListWidgetSearchLine::heightForWidth(param1);
        }
        auto heightforwidth_cb = klistwidgetsearchline_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KListWidgetSearchLine::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (klistwidgetsearchline_hasheightforwidth_isbase) {
            klistwidgetsearchline_hasheightforwidth_isbase = false;
            return KListWidgetSearchLine::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = klistwidgetsearchline_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KListWidgetSearchLine::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (klistwidgetsearchline_paintengine_isbase) {
            klistwidgetsearchline_paintengine_isbase = false;
            return KListWidgetSearchLine::paintEngine();
        }
        auto paintengine_cb = klistwidgetsearchline_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KListWidgetSearchLine::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (klistwidgetsearchline_wheelevent_isbase) {
            klistwidgetsearchline_wheelevent_isbase = false;
            KListWidgetSearchLine::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = klistwidgetsearchline_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (klistwidgetsearchline_enterevent_isbase) {
            klistwidgetsearchline_enterevent_isbase = false;
            KListWidgetSearchLine::enterEvent(event);
            return;
        }
        auto enterevent_cb = klistwidgetsearchline_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (klistwidgetsearchline_leaveevent_isbase) {
            klistwidgetsearchline_leaveevent_isbase = false;
            KListWidgetSearchLine::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = klistwidgetsearchline_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (klistwidgetsearchline_moveevent_isbase) {
            klistwidgetsearchline_moveevent_isbase = false;
            KListWidgetSearchLine::moveEvent(event);
            return;
        }
        auto moveevent_cb = klistwidgetsearchline_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (klistwidgetsearchline_resizeevent_isbase) {
            klistwidgetsearchline_resizeevent_isbase = false;
            KListWidgetSearchLine::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = klistwidgetsearchline_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (klistwidgetsearchline_closeevent_isbase) {
            klistwidgetsearchline_closeevent_isbase = false;
            KListWidgetSearchLine::closeEvent(event);
            return;
        }
        auto closeevent_cb = klistwidgetsearchline_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (klistwidgetsearchline_tabletevent_isbase) {
            klistwidgetsearchline_tabletevent_isbase = false;
            KListWidgetSearchLine::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = klistwidgetsearchline_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (klistwidgetsearchline_actionevent_isbase) {
            klistwidgetsearchline_actionevent_isbase = false;
            KListWidgetSearchLine::actionEvent(event);
            return;
        }
        auto actionevent_cb = klistwidgetsearchline_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (klistwidgetsearchline_showevent_isbase) {
            klistwidgetsearchline_showevent_isbase = false;
            KListWidgetSearchLine::showEvent(event);
            return;
        }
        auto showevent_cb = klistwidgetsearchline_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (klistwidgetsearchline_hideevent_isbase) {
            klistwidgetsearchline_hideevent_isbase = false;
            KListWidgetSearchLine::hideEvent(event);
            return;
        }
        auto hideevent_cb = klistwidgetsearchline_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (klistwidgetsearchline_nativeevent_isbase) {
            klistwidgetsearchline_nativeevent_isbase = false;
            return KListWidgetSearchLine::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = klistwidgetsearchline_nativeevent_callback;
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
        return KListWidgetSearchLine::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (klistwidgetsearchline_metric_isbase) {
            klistwidgetsearchline_metric_isbase = false;
            return KListWidgetSearchLine::metric(param1);
        }
        auto metric_cb = klistwidgetsearchline_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KListWidgetSearchLine::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (klistwidgetsearchline_initpainter_isbase) {
            klistwidgetsearchline_initpainter_isbase = false;
            KListWidgetSearchLine::initPainter(painter);
            return;
        }
        auto initpainter_cb = klistwidgetsearchline_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (klistwidgetsearchline_redirected_isbase) {
            klistwidgetsearchline_redirected_isbase = false;
            return KListWidgetSearchLine::redirected(offset);
        }
        auto redirected_cb = klistwidgetsearchline_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KListWidgetSearchLine::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (klistwidgetsearchline_sharedpainter_isbase) {
            klistwidgetsearchline_sharedpainter_isbase = false;
            return KListWidgetSearchLine::sharedPainter();
        }
        auto sharedpainter_cb = klistwidgetsearchline_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KListWidgetSearchLine::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (klistwidgetsearchline_focusnextprevchild_isbase) {
            klistwidgetsearchline_focusnextprevchild_isbase = false;
            return KListWidgetSearchLine::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = klistwidgetsearchline_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KListWidgetSearchLine::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (klistwidgetsearchline_eventfilter_isbase) {
            klistwidgetsearchline_eventfilter_isbase = false;
            return KListWidgetSearchLine::eventFilter(watched, event);
        }
        auto eventfilter_cb = klistwidgetsearchline_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KListWidgetSearchLine::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (klistwidgetsearchline_childevent_isbase) {
            klistwidgetsearchline_childevent_isbase = false;
            KListWidgetSearchLine::childEvent(event);
            return;
        }
        auto childevent_cb = klistwidgetsearchline_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (klistwidgetsearchline_customevent_isbase) {
            klistwidgetsearchline_customevent_isbase = false;
            KListWidgetSearchLine::customEvent(event);
            return;
        }
        auto customevent_cb = klistwidgetsearchline_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (klistwidgetsearchline_connectnotify_isbase) {
            klistwidgetsearchline_connectnotify_isbase = false;
            KListWidgetSearchLine::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = klistwidgetsearchline_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (klistwidgetsearchline_disconnectnotify_isbase) {
            klistwidgetsearchline_disconnectnotify_isbase = false;
            KListWidgetSearchLine::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = klistwidgetsearchline_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KListWidgetSearchLine::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QRect cursorRect() const {
        if (klistwidgetsearchline_cursorrect_isbase) {
            klistwidgetsearchline_cursorrect_isbase = false;
            return KListWidgetSearchLine::cursorRect();
        }
        auto cursorrect_cb = klistwidgetsearchline_cursorrect_callback;
        if (cursorrect_cb) {
            QRect* callback_ret = cursorrect_cb();
            return *callback_ret;
        }
        return KListWidgetSearchLine::cursorRect();
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (klistwidgetsearchline_updatemicrofocus_isbase) {
            klistwidgetsearchline_updatemicrofocus_isbase = false;
            KListWidgetSearchLine::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = klistwidgetsearchline_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KListWidgetSearchLine::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (klistwidgetsearchline_create_isbase) {
            klistwidgetsearchline_create_isbase = false;
            KListWidgetSearchLine::create();
            return;
        }
        auto create_cb = klistwidgetsearchline_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KListWidgetSearchLine::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (klistwidgetsearchline_destroy_isbase) {
            klistwidgetsearchline_destroy_isbase = false;
            KListWidgetSearchLine::destroy();
            return;
        }
        auto destroy_cb = klistwidgetsearchline_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KListWidgetSearchLine::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (klistwidgetsearchline_focusnextchild_isbase) {
            klistwidgetsearchline_focusnextchild_isbase = false;
            return KListWidgetSearchLine::focusNextChild();
        }
        auto focusnextchild_cb = klistwidgetsearchline_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KListWidgetSearchLine::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (klistwidgetsearchline_focuspreviouschild_isbase) {
            klistwidgetsearchline_focuspreviouschild_isbase = false;
            return KListWidgetSearchLine::focusPreviousChild();
        }
        auto focuspreviouschild_cb = klistwidgetsearchline_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KListWidgetSearchLine::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (klistwidgetsearchline_sender_isbase) {
            klistwidgetsearchline_sender_isbase = false;
            return KListWidgetSearchLine::sender();
        }
        auto sender_cb = klistwidgetsearchline_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KListWidgetSearchLine::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (klistwidgetsearchline_sendersignalindex_isbase) {
            klistwidgetsearchline_sendersignalindex_isbase = false;
            return KListWidgetSearchLine::senderSignalIndex();
        }
        auto sendersignalindex_cb = klistwidgetsearchline_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KListWidgetSearchLine::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (klistwidgetsearchline_receivers_isbase) {
            klistwidgetsearchline_receivers_isbase = false;
            return KListWidgetSearchLine::receivers(signal);
        }
        auto receivers_cb = klistwidgetsearchline_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KListWidgetSearchLine::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (klistwidgetsearchline_issignalconnected_isbase) {
            klistwidgetsearchline_issignalconnected_isbase = false;
            return KListWidgetSearchLine::isSignalConnected(signal);
        }
        auto issignalconnected_cb = klistwidgetsearchline_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KListWidgetSearchLine::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (klistwidgetsearchline_getdecodedmetricf_isbase) {
            klistwidgetsearchline_getdecodedmetricf_isbase = false;
            return KListWidgetSearchLine::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = klistwidgetsearchline_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KListWidgetSearchLine::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool KListWidgetSearchLine_ItemMatches(const KListWidgetSearchLine* self, const QListWidgetItem* item, const libqt_string s);
    friend bool KListWidgetSearchLine_SuperItemMatches(const KListWidgetSearchLine* self, const QListWidgetItem* item, const libqt_string s);
    friend bool KListWidgetSearchLine_Event(KListWidgetSearchLine* self, QEvent* event);
    friend bool KListWidgetSearchLine_SuperEvent(KListWidgetSearchLine* self, QEvent* event);
    friend void KListWidgetSearchLine_MousePressEvent(KListWidgetSearchLine* self, QMouseEvent* param1);
    friend void KListWidgetSearchLine_SuperMousePressEvent(KListWidgetSearchLine* self, QMouseEvent* param1);
    friend void KListWidgetSearchLine_MouseMoveEvent(KListWidgetSearchLine* self, QMouseEvent* param1);
    friend void KListWidgetSearchLine_SuperMouseMoveEvent(KListWidgetSearchLine* self, QMouseEvent* param1);
    friend void KListWidgetSearchLine_MouseReleaseEvent(KListWidgetSearchLine* self, QMouseEvent* param1);
    friend void KListWidgetSearchLine_SuperMouseReleaseEvent(KListWidgetSearchLine* self, QMouseEvent* param1);
    friend void KListWidgetSearchLine_MouseDoubleClickEvent(KListWidgetSearchLine* self, QMouseEvent* param1);
    friend void KListWidgetSearchLine_SuperMouseDoubleClickEvent(KListWidgetSearchLine* self, QMouseEvent* param1);
    friend void KListWidgetSearchLine_KeyPressEvent(KListWidgetSearchLine* self, QKeyEvent* param1);
    friend void KListWidgetSearchLine_SuperKeyPressEvent(KListWidgetSearchLine* self, QKeyEvent* param1);
    friend void KListWidgetSearchLine_KeyReleaseEvent(KListWidgetSearchLine* self, QKeyEvent* param1);
    friend void KListWidgetSearchLine_SuperKeyReleaseEvent(KListWidgetSearchLine* self, QKeyEvent* param1);
    friend void KListWidgetSearchLine_FocusInEvent(KListWidgetSearchLine* self, QFocusEvent* param1);
    friend void KListWidgetSearchLine_SuperFocusInEvent(KListWidgetSearchLine* self, QFocusEvent* param1);
    friend void KListWidgetSearchLine_FocusOutEvent(KListWidgetSearchLine* self, QFocusEvent* param1);
    friend void KListWidgetSearchLine_SuperFocusOutEvent(KListWidgetSearchLine* self, QFocusEvent* param1);
    friend void KListWidgetSearchLine_PaintEvent(KListWidgetSearchLine* self, QPaintEvent* param1);
    friend void KListWidgetSearchLine_SuperPaintEvent(KListWidgetSearchLine* self, QPaintEvent* param1);
    friend void KListWidgetSearchLine_DragEnterEvent(KListWidgetSearchLine* self, QDragEnterEvent* param1);
    friend void KListWidgetSearchLine_SuperDragEnterEvent(KListWidgetSearchLine* self, QDragEnterEvent* param1);
    friend void KListWidgetSearchLine_DragMoveEvent(KListWidgetSearchLine* self, QDragMoveEvent* e);
    friend void KListWidgetSearchLine_SuperDragMoveEvent(KListWidgetSearchLine* self, QDragMoveEvent* e);
    friend void KListWidgetSearchLine_DragLeaveEvent(KListWidgetSearchLine* self, QDragLeaveEvent* e);
    friend void KListWidgetSearchLine_SuperDragLeaveEvent(KListWidgetSearchLine* self, QDragLeaveEvent* e);
    friend void KListWidgetSearchLine_DropEvent(KListWidgetSearchLine* self, QDropEvent* param1);
    friend void KListWidgetSearchLine_SuperDropEvent(KListWidgetSearchLine* self, QDropEvent* param1);
    friend void KListWidgetSearchLine_ChangeEvent(KListWidgetSearchLine* self, QEvent* param1);
    friend void KListWidgetSearchLine_SuperChangeEvent(KListWidgetSearchLine* self, QEvent* param1);
    friend void KListWidgetSearchLine_ContextMenuEvent(KListWidgetSearchLine* self, QContextMenuEvent* param1);
    friend void KListWidgetSearchLine_SuperContextMenuEvent(KListWidgetSearchLine* self, QContextMenuEvent* param1);
    friend void KListWidgetSearchLine_InputMethodEvent(KListWidgetSearchLine* self, QInputMethodEvent* param1);
    friend void KListWidgetSearchLine_SuperInputMethodEvent(KListWidgetSearchLine* self, QInputMethodEvent* param1);
    friend void KListWidgetSearchLine_InitStyleOption(const KListWidgetSearchLine* self, QStyleOptionFrame* option);
    friend void KListWidgetSearchLine_SuperInitStyleOption(const KListWidgetSearchLine* self, QStyleOptionFrame* option);
    friend void KListWidgetSearchLine_WheelEvent(KListWidgetSearchLine* self, QWheelEvent* event);
    friend void KListWidgetSearchLine_SuperWheelEvent(KListWidgetSearchLine* self, QWheelEvent* event);
    friend void KListWidgetSearchLine_EnterEvent(KListWidgetSearchLine* self, QEnterEvent* event);
    friend void KListWidgetSearchLine_SuperEnterEvent(KListWidgetSearchLine* self, QEnterEvent* event);
    friend void KListWidgetSearchLine_LeaveEvent(KListWidgetSearchLine* self, QEvent* event);
    friend void KListWidgetSearchLine_SuperLeaveEvent(KListWidgetSearchLine* self, QEvent* event);
    friend void KListWidgetSearchLine_MoveEvent(KListWidgetSearchLine* self, QMoveEvent* event);
    friend void KListWidgetSearchLine_SuperMoveEvent(KListWidgetSearchLine* self, QMoveEvent* event);
    friend void KListWidgetSearchLine_ResizeEvent(KListWidgetSearchLine* self, QResizeEvent* event);
    friend void KListWidgetSearchLine_SuperResizeEvent(KListWidgetSearchLine* self, QResizeEvent* event);
    friend void KListWidgetSearchLine_CloseEvent(KListWidgetSearchLine* self, QCloseEvent* event);
    friend void KListWidgetSearchLine_SuperCloseEvent(KListWidgetSearchLine* self, QCloseEvent* event);
    friend void KListWidgetSearchLine_TabletEvent(KListWidgetSearchLine* self, QTabletEvent* event);
    friend void KListWidgetSearchLine_SuperTabletEvent(KListWidgetSearchLine* self, QTabletEvent* event);
    friend void KListWidgetSearchLine_ActionEvent(KListWidgetSearchLine* self, QActionEvent* event);
    friend void KListWidgetSearchLine_SuperActionEvent(KListWidgetSearchLine* self, QActionEvent* event);
    friend void KListWidgetSearchLine_ShowEvent(KListWidgetSearchLine* self, QShowEvent* event);
    friend void KListWidgetSearchLine_SuperShowEvent(KListWidgetSearchLine* self, QShowEvent* event);
    friend void KListWidgetSearchLine_HideEvent(KListWidgetSearchLine* self, QHideEvent* event);
    friend void KListWidgetSearchLine_SuperHideEvent(KListWidgetSearchLine* self, QHideEvent* event);
    friend bool KListWidgetSearchLine_NativeEvent(KListWidgetSearchLine* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KListWidgetSearchLine_SuperNativeEvent(KListWidgetSearchLine* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KListWidgetSearchLine_Metric(const KListWidgetSearchLine* self, int param1);
    friend int KListWidgetSearchLine_SuperMetric(const KListWidgetSearchLine* self, int param1);
    friend void KListWidgetSearchLine_InitPainter(const KListWidgetSearchLine* self, QPainter* painter);
    friend void KListWidgetSearchLine_SuperInitPainter(const KListWidgetSearchLine* self, QPainter* painter);
    friend QPaintDevice* KListWidgetSearchLine_Redirected(const KListWidgetSearchLine* self, QPoint* offset);
    friend QPaintDevice* KListWidgetSearchLine_SuperRedirected(const KListWidgetSearchLine* self, QPoint* offset);
    friend QPainter* KListWidgetSearchLine_SharedPainter(const KListWidgetSearchLine* self);
    friend QPainter* KListWidgetSearchLine_SuperSharedPainter(const KListWidgetSearchLine* self);
    friend bool KListWidgetSearchLine_FocusNextPrevChild(KListWidgetSearchLine* self, bool next);
    friend bool KListWidgetSearchLine_SuperFocusNextPrevChild(KListWidgetSearchLine* self, bool next);
    friend void KListWidgetSearchLine_ChildEvent(KListWidgetSearchLine* self, QChildEvent* event);
    friend void KListWidgetSearchLine_SuperChildEvent(KListWidgetSearchLine* self, QChildEvent* event);
    friend void KListWidgetSearchLine_CustomEvent(KListWidgetSearchLine* self, QEvent* event);
    friend void KListWidgetSearchLine_SuperCustomEvent(KListWidgetSearchLine* self, QEvent* event);
    friend void KListWidgetSearchLine_ConnectNotify(KListWidgetSearchLine* self, const QMetaMethod* signal);
    friend void KListWidgetSearchLine_SuperConnectNotify(KListWidgetSearchLine* self, const QMetaMethod* signal);
    friend void KListWidgetSearchLine_DisconnectNotify(KListWidgetSearchLine* self, const QMetaMethod* signal);
    friend void KListWidgetSearchLine_SuperDisconnectNotify(KListWidgetSearchLine* self, const QMetaMethod* signal);
    friend QRect* KListWidgetSearchLine_CursorRect(const KListWidgetSearchLine* self);
    friend QRect* KListWidgetSearchLine_SuperCursorRect(const KListWidgetSearchLine* self);
    friend void KListWidgetSearchLine_UpdateMicroFocus(KListWidgetSearchLine* self);
    friend void KListWidgetSearchLine_SuperUpdateMicroFocus(KListWidgetSearchLine* self);
    friend void KListWidgetSearchLine_Create(KListWidgetSearchLine* self);
    friend void KListWidgetSearchLine_SuperCreate(KListWidgetSearchLine* self);
    friend void KListWidgetSearchLine_Destroy(KListWidgetSearchLine* self);
    friend void KListWidgetSearchLine_SuperDestroy(KListWidgetSearchLine* self);
    friend bool KListWidgetSearchLine_FocusNextChild(KListWidgetSearchLine* self);
    friend bool KListWidgetSearchLine_SuperFocusNextChild(KListWidgetSearchLine* self);
    friend bool KListWidgetSearchLine_FocusPreviousChild(KListWidgetSearchLine* self);
    friend bool KListWidgetSearchLine_SuperFocusPreviousChild(KListWidgetSearchLine* self);
    friend QObject* KListWidgetSearchLine_Sender(const KListWidgetSearchLine* self);
    friend QObject* KListWidgetSearchLine_SuperSender(const KListWidgetSearchLine* self);
    friend int KListWidgetSearchLine_SenderSignalIndex(const KListWidgetSearchLine* self);
    friend int KListWidgetSearchLine_SuperSenderSignalIndex(const KListWidgetSearchLine* self);
    friend int KListWidgetSearchLine_Receivers(const KListWidgetSearchLine* self, const char* signal);
    friend int KListWidgetSearchLine_SuperReceivers(const KListWidgetSearchLine* self, const char* signal);
    friend bool KListWidgetSearchLine_IsSignalConnected(const KListWidgetSearchLine* self, const QMetaMethod* signal);
    friend bool KListWidgetSearchLine_SuperIsSignalConnected(const KListWidgetSearchLine* self, const QMetaMethod* signal);
    friend double KListWidgetSearchLine_GetDecodedMetricF(const KListWidgetSearchLine* self, int metricA, int metricB);
    friend double KListWidgetSearchLine_SuperGetDecodedMetricF(const KListWidgetSearchLine* self, int metricA, int metricB);
};

#endif
