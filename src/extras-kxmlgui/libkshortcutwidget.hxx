#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKSHORTCUTWIDGET_H
#define SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKSHORTCUTWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KShortcutWidget so that we can call protected methods
class VirtualKShortcutWidget final : public KShortcutWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualKShortcutWidget = true;

    // Virtual class public types (including callbacks)
    using KShortcutWidget_MetaObject_Callback = QMetaObject* (*)();
    using KShortcutWidget_Metacast_Callback = void* (*)(KShortcutWidget*, const char*);
    using KShortcutWidget_Metacall_Callback = int (*)(KShortcutWidget*, int, int, void**);
    using KShortcutWidget_DevType_Callback = int (*)();
    using KShortcutWidget_SetVisible_Callback = void (*)(KShortcutWidget*, bool);
    using KShortcutWidget_SizeHint_Callback = QSize* (*)();
    using KShortcutWidget_MinimumSizeHint_Callback = QSize* (*)();
    using KShortcutWidget_HeightForWidth_Callback = int (*)(const KShortcutWidget*, int);
    using KShortcutWidget_HasHeightForWidth_Callback = bool (*)();
    using KShortcutWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using KShortcutWidget_Event_Callback = bool (*)(KShortcutWidget*, QEvent*);
    using KShortcutWidget_MousePressEvent_Callback = void (*)(KShortcutWidget*, QMouseEvent*);
    using KShortcutWidget_MouseReleaseEvent_Callback = void (*)(KShortcutWidget*, QMouseEvent*);
    using KShortcutWidget_MouseDoubleClickEvent_Callback = void (*)(KShortcutWidget*, QMouseEvent*);
    using KShortcutWidget_MouseMoveEvent_Callback = void (*)(KShortcutWidget*, QMouseEvent*);
    using KShortcutWidget_WheelEvent_Callback = void (*)(KShortcutWidget*, QWheelEvent*);
    using KShortcutWidget_KeyPressEvent_Callback = void (*)(KShortcutWidget*, QKeyEvent*);
    using KShortcutWidget_KeyReleaseEvent_Callback = void (*)(KShortcutWidget*, QKeyEvent*);
    using KShortcutWidget_FocusInEvent_Callback = void (*)(KShortcutWidget*, QFocusEvent*);
    using KShortcutWidget_FocusOutEvent_Callback = void (*)(KShortcutWidget*, QFocusEvent*);
    using KShortcutWidget_EnterEvent_Callback = void (*)(KShortcutWidget*, QEnterEvent*);
    using KShortcutWidget_LeaveEvent_Callback = void (*)(KShortcutWidget*, QEvent*);
    using KShortcutWidget_PaintEvent_Callback = void (*)(KShortcutWidget*, QPaintEvent*);
    using KShortcutWidget_MoveEvent_Callback = void (*)(KShortcutWidget*, QMoveEvent*);
    using KShortcutWidget_ResizeEvent_Callback = void (*)(KShortcutWidget*, QResizeEvent*);
    using KShortcutWidget_CloseEvent_Callback = void (*)(KShortcutWidget*, QCloseEvent*);
    using KShortcutWidget_ContextMenuEvent_Callback = void (*)(KShortcutWidget*, QContextMenuEvent*);
    using KShortcutWidget_TabletEvent_Callback = void (*)(KShortcutWidget*, QTabletEvent*);
    using KShortcutWidget_ActionEvent_Callback = void (*)(KShortcutWidget*, QActionEvent*);
    using KShortcutWidget_DragEnterEvent_Callback = void (*)(KShortcutWidget*, QDragEnterEvent*);
    using KShortcutWidget_DragMoveEvent_Callback = void (*)(KShortcutWidget*, QDragMoveEvent*);
    using KShortcutWidget_DragLeaveEvent_Callback = void (*)(KShortcutWidget*, QDragLeaveEvent*);
    using KShortcutWidget_DropEvent_Callback = void (*)(KShortcutWidget*, QDropEvent*);
    using KShortcutWidget_ShowEvent_Callback = void (*)(KShortcutWidget*, QShowEvent*);
    using KShortcutWidget_HideEvent_Callback = void (*)(KShortcutWidget*, QHideEvent*);
    using KShortcutWidget_NativeEvent_Callback = bool (*)(KShortcutWidget*, libqt_string, void*, intptr_t*);
    using KShortcutWidget_ChangeEvent_Callback = void (*)(KShortcutWidget*, QEvent*);
    using KShortcutWidget_Metric_Callback = int (*)(const KShortcutWidget*, int);
    using KShortcutWidget_InitPainter_Callback = void (*)(const KShortcutWidget*, QPainter*);
    using KShortcutWidget_Redirected_Callback = QPaintDevice* (*)(const KShortcutWidget*, QPoint*);
    using KShortcutWidget_SharedPainter_Callback = QPainter* (*)();
    using KShortcutWidget_InputMethodEvent_Callback = void (*)(KShortcutWidget*, QInputMethodEvent*);
    using KShortcutWidget_InputMethodQuery_Callback = QVariant* (*)(const KShortcutWidget*, int);
    using KShortcutWidget_FocusNextPrevChild_Callback = bool (*)(KShortcutWidget*, bool);
    using KShortcutWidget_EventFilter_Callback = bool (*)(KShortcutWidget*, QObject*, QEvent*);
    using KShortcutWidget_TimerEvent_Callback = void (*)(KShortcutWidget*, QTimerEvent*);
    using KShortcutWidget_ChildEvent_Callback = void (*)(KShortcutWidget*, QChildEvent*);
    using KShortcutWidget_CustomEvent_Callback = void (*)(KShortcutWidget*, QEvent*);
    using KShortcutWidget_ConnectNotify_Callback = void (*)(KShortcutWidget*, QMetaMethod*);
    using KShortcutWidget_DisconnectNotify_Callback = void (*)(KShortcutWidget*, QMetaMethod*);
    using KShortcutWidget_UpdateMicroFocus_Callback = void (*)();
    using KShortcutWidget_Create_Callback = void (*)();
    using KShortcutWidget_Destroy_Callback = void (*)();
    using KShortcutWidget_FocusNextChild_Callback = bool (*)();
    using KShortcutWidget_FocusPreviousChild_Callback = bool (*)();
    using KShortcutWidget_Sender_Callback = QObject* (*)();
    using KShortcutWidget_SenderSignalIndex_Callback = int (*)();
    using KShortcutWidget_Receivers_Callback = int (*)(const KShortcutWidget*, const char*);
    using KShortcutWidget_IsSignalConnected_Callback = bool (*)(const KShortcutWidget*, QMetaMethod*);
    using KShortcutWidget_GetDecodedMetricF_Callback = double (*)(const KShortcutWidget*, int, int);

  protected:
    // Instance callback storage
    KShortcutWidget_MetaObject_Callback kshortcutwidget_metaobject_callback = nullptr;
    KShortcutWidget_Metacast_Callback kshortcutwidget_metacast_callback = nullptr;
    KShortcutWidget_Metacall_Callback kshortcutwidget_metacall_callback = nullptr;
    KShortcutWidget_DevType_Callback kshortcutwidget_devtype_callback = nullptr;
    KShortcutWidget_SetVisible_Callback kshortcutwidget_setvisible_callback = nullptr;
    KShortcutWidget_SizeHint_Callback kshortcutwidget_sizehint_callback = nullptr;
    KShortcutWidget_MinimumSizeHint_Callback kshortcutwidget_minimumsizehint_callback = nullptr;
    KShortcutWidget_HeightForWidth_Callback kshortcutwidget_heightforwidth_callback = nullptr;
    KShortcutWidget_HasHeightForWidth_Callback kshortcutwidget_hasheightforwidth_callback = nullptr;
    KShortcutWidget_PaintEngine_Callback kshortcutwidget_paintengine_callback = nullptr;
    KShortcutWidget_Event_Callback kshortcutwidget_event_callback = nullptr;
    KShortcutWidget_MousePressEvent_Callback kshortcutwidget_mousepressevent_callback = nullptr;
    KShortcutWidget_MouseReleaseEvent_Callback kshortcutwidget_mousereleaseevent_callback = nullptr;
    KShortcutWidget_MouseDoubleClickEvent_Callback kshortcutwidget_mousedoubleclickevent_callback = nullptr;
    KShortcutWidget_MouseMoveEvent_Callback kshortcutwidget_mousemoveevent_callback = nullptr;
    KShortcutWidget_WheelEvent_Callback kshortcutwidget_wheelevent_callback = nullptr;
    KShortcutWidget_KeyPressEvent_Callback kshortcutwidget_keypressevent_callback = nullptr;
    KShortcutWidget_KeyReleaseEvent_Callback kshortcutwidget_keyreleaseevent_callback = nullptr;
    KShortcutWidget_FocusInEvent_Callback kshortcutwidget_focusinevent_callback = nullptr;
    KShortcutWidget_FocusOutEvent_Callback kshortcutwidget_focusoutevent_callback = nullptr;
    KShortcutWidget_EnterEvent_Callback kshortcutwidget_enterevent_callback = nullptr;
    KShortcutWidget_LeaveEvent_Callback kshortcutwidget_leaveevent_callback = nullptr;
    KShortcutWidget_PaintEvent_Callback kshortcutwidget_paintevent_callback = nullptr;
    KShortcutWidget_MoveEvent_Callback kshortcutwidget_moveevent_callback = nullptr;
    KShortcutWidget_ResizeEvent_Callback kshortcutwidget_resizeevent_callback = nullptr;
    KShortcutWidget_CloseEvent_Callback kshortcutwidget_closeevent_callback = nullptr;
    KShortcutWidget_ContextMenuEvent_Callback kshortcutwidget_contextmenuevent_callback = nullptr;
    KShortcutWidget_TabletEvent_Callback kshortcutwidget_tabletevent_callback = nullptr;
    KShortcutWidget_ActionEvent_Callback kshortcutwidget_actionevent_callback = nullptr;
    KShortcutWidget_DragEnterEvent_Callback kshortcutwidget_dragenterevent_callback = nullptr;
    KShortcutWidget_DragMoveEvent_Callback kshortcutwidget_dragmoveevent_callback = nullptr;
    KShortcutWidget_DragLeaveEvent_Callback kshortcutwidget_dragleaveevent_callback = nullptr;
    KShortcutWidget_DropEvent_Callback kshortcutwidget_dropevent_callback = nullptr;
    KShortcutWidget_ShowEvent_Callback kshortcutwidget_showevent_callback = nullptr;
    KShortcutWidget_HideEvent_Callback kshortcutwidget_hideevent_callback = nullptr;
    KShortcutWidget_NativeEvent_Callback kshortcutwidget_nativeevent_callback = nullptr;
    KShortcutWidget_ChangeEvent_Callback kshortcutwidget_changeevent_callback = nullptr;
    KShortcutWidget_Metric_Callback kshortcutwidget_metric_callback = nullptr;
    KShortcutWidget_InitPainter_Callback kshortcutwidget_initpainter_callback = nullptr;
    KShortcutWidget_Redirected_Callback kshortcutwidget_redirected_callback = nullptr;
    KShortcutWidget_SharedPainter_Callback kshortcutwidget_sharedpainter_callback = nullptr;
    KShortcutWidget_InputMethodEvent_Callback kshortcutwidget_inputmethodevent_callback = nullptr;
    KShortcutWidget_InputMethodQuery_Callback kshortcutwidget_inputmethodquery_callback = nullptr;
    KShortcutWidget_FocusNextPrevChild_Callback kshortcutwidget_focusnextprevchild_callback = nullptr;
    KShortcutWidget_EventFilter_Callback kshortcutwidget_eventfilter_callback = nullptr;
    KShortcutWidget_TimerEvent_Callback kshortcutwidget_timerevent_callback = nullptr;
    KShortcutWidget_ChildEvent_Callback kshortcutwidget_childevent_callback = nullptr;
    KShortcutWidget_CustomEvent_Callback kshortcutwidget_customevent_callback = nullptr;
    KShortcutWidget_ConnectNotify_Callback kshortcutwidget_connectnotify_callback = nullptr;
    KShortcutWidget_DisconnectNotify_Callback kshortcutwidget_disconnectnotify_callback = nullptr;
    KShortcutWidget_UpdateMicroFocus_Callback kshortcutwidget_updatemicrofocus_callback = nullptr;
    KShortcutWidget_Create_Callback kshortcutwidget_create_callback = nullptr;
    KShortcutWidget_Destroy_Callback kshortcutwidget_destroy_callback = nullptr;
    KShortcutWidget_FocusNextChild_Callback kshortcutwidget_focusnextchild_callback = nullptr;
    KShortcutWidget_FocusPreviousChild_Callback kshortcutwidget_focuspreviouschild_callback = nullptr;
    KShortcutWidget_Sender_Callback kshortcutwidget_sender_callback = nullptr;
    KShortcutWidget_SenderSignalIndex_Callback kshortcutwidget_sendersignalindex_callback = nullptr;
    KShortcutWidget_Receivers_Callback kshortcutwidget_receivers_callback = nullptr;
    KShortcutWidget_IsSignalConnected_Callback kshortcutwidget_issignalconnected_callback = nullptr;
    KShortcutWidget_GetDecodedMetricF_Callback kshortcutwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kshortcutwidget_metaobject_isbase = false;
    mutable bool kshortcutwidget_metacast_isbase = false;
    mutable bool kshortcutwidget_metacall_isbase = false;
    mutable bool kshortcutwidget_devtype_isbase = false;
    mutable bool kshortcutwidget_setvisible_isbase = false;
    mutable bool kshortcutwidget_sizehint_isbase = false;
    mutable bool kshortcutwidget_minimumsizehint_isbase = false;
    mutable bool kshortcutwidget_heightforwidth_isbase = false;
    mutable bool kshortcutwidget_hasheightforwidth_isbase = false;
    mutable bool kshortcutwidget_paintengine_isbase = false;
    mutable bool kshortcutwidget_event_isbase = false;
    mutable bool kshortcutwidget_mousepressevent_isbase = false;
    mutable bool kshortcutwidget_mousereleaseevent_isbase = false;
    mutable bool kshortcutwidget_mousedoubleclickevent_isbase = false;
    mutable bool kshortcutwidget_mousemoveevent_isbase = false;
    mutable bool kshortcutwidget_wheelevent_isbase = false;
    mutable bool kshortcutwidget_keypressevent_isbase = false;
    mutable bool kshortcutwidget_keyreleaseevent_isbase = false;
    mutable bool kshortcutwidget_focusinevent_isbase = false;
    mutable bool kshortcutwidget_focusoutevent_isbase = false;
    mutable bool kshortcutwidget_enterevent_isbase = false;
    mutable bool kshortcutwidget_leaveevent_isbase = false;
    mutable bool kshortcutwidget_paintevent_isbase = false;
    mutable bool kshortcutwidget_moveevent_isbase = false;
    mutable bool kshortcutwidget_resizeevent_isbase = false;
    mutable bool kshortcutwidget_closeevent_isbase = false;
    mutable bool kshortcutwidget_contextmenuevent_isbase = false;
    mutable bool kshortcutwidget_tabletevent_isbase = false;
    mutable bool kshortcutwidget_actionevent_isbase = false;
    mutable bool kshortcutwidget_dragenterevent_isbase = false;
    mutable bool kshortcutwidget_dragmoveevent_isbase = false;
    mutable bool kshortcutwidget_dragleaveevent_isbase = false;
    mutable bool kshortcutwidget_dropevent_isbase = false;
    mutable bool kshortcutwidget_showevent_isbase = false;
    mutable bool kshortcutwidget_hideevent_isbase = false;
    mutable bool kshortcutwidget_nativeevent_isbase = false;
    mutable bool kshortcutwidget_changeevent_isbase = false;
    mutable bool kshortcutwidget_metric_isbase = false;
    mutable bool kshortcutwidget_initpainter_isbase = false;
    mutable bool kshortcutwidget_redirected_isbase = false;
    mutable bool kshortcutwidget_sharedpainter_isbase = false;
    mutable bool kshortcutwidget_inputmethodevent_isbase = false;
    mutable bool kshortcutwidget_inputmethodquery_isbase = false;
    mutable bool kshortcutwidget_focusnextprevchild_isbase = false;
    mutable bool kshortcutwidget_eventfilter_isbase = false;
    mutable bool kshortcutwidget_timerevent_isbase = false;
    mutable bool kshortcutwidget_childevent_isbase = false;
    mutable bool kshortcutwidget_customevent_isbase = false;
    mutable bool kshortcutwidget_connectnotify_isbase = false;
    mutable bool kshortcutwidget_disconnectnotify_isbase = false;
    mutable bool kshortcutwidget_updatemicrofocus_isbase = false;
    mutable bool kshortcutwidget_create_isbase = false;
    mutable bool kshortcutwidget_destroy_isbase = false;
    mutable bool kshortcutwidget_focusnextchild_isbase = false;
    mutable bool kshortcutwidget_focuspreviouschild_isbase = false;
    mutable bool kshortcutwidget_sender_isbase = false;
    mutable bool kshortcutwidget_sendersignalindex_isbase = false;
    mutable bool kshortcutwidget_receivers_isbase = false;
    mutable bool kshortcutwidget_issignalconnected_isbase = false;
    mutable bool kshortcutwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualKShortcutWidget(QWidget* parent) : KShortcutWidget(parent) {};
    VirtualKShortcutWidget() : KShortcutWidget() {};

    // Callback setters
    inline void setKShortcutWidget_MetaObject_Callback(KShortcutWidget_MetaObject_Callback cb) { kshortcutwidget_metaobject_callback = cb; }
    inline void setKShortcutWidget_Metacast_Callback(KShortcutWidget_Metacast_Callback cb) { kshortcutwidget_metacast_callback = cb; }
    inline void setKShortcutWidget_Metacall_Callback(KShortcutWidget_Metacall_Callback cb) { kshortcutwidget_metacall_callback = cb; }
    inline void setKShortcutWidget_DevType_Callback(KShortcutWidget_DevType_Callback cb) { kshortcutwidget_devtype_callback = cb; }
    inline void setKShortcutWidget_SetVisible_Callback(KShortcutWidget_SetVisible_Callback cb) { kshortcutwidget_setvisible_callback = cb; }
    inline void setKShortcutWidget_SizeHint_Callback(KShortcutWidget_SizeHint_Callback cb) { kshortcutwidget_sizehint_callback = cb; }
    inline void setKShortcutWidget_MinimumSizeHint_Callback(KShortcutWidget_MinimumSizeHint_Callback cb) { kshortcutwidget_minimumsizehint_callback = cb; }
    inline void setKShortcutWidget_HeightForWidth_Callback(KShortcutWidget_HeightForWidth_Callback cb) { kshortcutwidget_heightforwidth_callback = cb; }
    inline void setKShortcutWidget_HasHeightForWidth_Callback(KShortcutWidget_HasHeightForWidth_Callback cb) { kshortcutwidget_hasheightforwidth_callback = cb; }
    inline void setKShortcutWidget_PaintEngine_Callback(KShortcutWidget_PaintEngine_Callback cb) { kshortcutwidget_paintengine_callback = cb; }
    inline void setKShortcutWidget_Event_Callback(KShortcutWidget_Event_Callback cb) { kshortcutwidget_event_callback = cb; }
    inline void setKShortcutWidget_MousePressEvent_Callback(KShortcutWidget_MousePressEvent_Callback cb) { kshortcutwidget_mousepressevent_callback = cb; }
    inline void setKShortcutWidget_MouseReleaseEvent_Callback(KShortcutWidget_MouseReleaseEvent_Callback cb) { kshortcutwidget_mousereleaseevent_callback = cb; }
    inline void setKShortcutWidget_MouseDoubleClickEvent_Callback(KShortcutWidget_MouseDoubleClickEvent_Callback cb) { kshortcutwidget_mousedoubleclickevent_callback = cb; }
    inline void setKShortcutWidget_MouseMoveEvent_Callback(KShortcutWidget_MouseMoveEvent_Callback cb) { kshortcutwidget_mousemoveevent_callback = cb; }
    inline void setKShortcutWidget_WheelEvent_Callback(KShortcutWidget_WheelEvent_Callback cb) { kshortcutwidget_wheelevent_callback = cb; }
    inline void setKShortcutWidget_KeyPressEvent_Callback(KShortcutWidget_KeyPressEvent_Callback cb) { kshortcutwidget_keypressevent_callback = cb; }
    inline void setKShortcutWidget_KeyReleaseEvent_Callback(KShortcutWidget_KeyReleaseEvent_Callback cb) { kshortcutwidget_keyreleaseevent_callback = cb; }
    inline void setKShortcutWidget_FocusInEvent_Callback(KShortcutWidget_FocusInEvent_Callback cb) { kshortcutwidget_focusinevent_callback = cb; }
    inline void setKShortcutWidget_FocusOutEvent_Callback(KShortcutWidget_FocusOutEvent_Callback cb) { kshortcutwidget_focusoutevent_callback = cb; }
    inline void setKShortcutWidget_EnterEvent_Callback(KShortcutWidget_EnterEvent_Callback cb) { kshortcutwidget_enterevent_callback = cb; }
    inline void setKShortcutWidget_LeaveEvent_Callback(KShortcutWidget_LeaveEvent_Callback cb) { kshortcutwidget_leaveevent_callback = cb; }
    inline void setKShortcutWidget_PaintEvent_Callback(KShortcutWidget_PaintEvent_Callback cb) { kshortcutwidget_paintevent_callback = cb; }
    inline void setKShortcutWidget_MoveEvent_Callback(KShortcutWidget_MoveEvent_Callback cb) { kshortcutwidget_moveevent_callback = cb; }
    inline void setKShortcutWidget_ResizeEvent_Callback(KShortcutWidget_ResizeEvent_Callback cb) { kshortcutwidget_resizeevent_callback = cb; }
    inline void setKShortcutWidget_CloseEvent_Callback(KShortcutWidget_CloseEvent_Callback cb) { kshortcutwidget_closeevent_callback = cb; }
    inline void setKShortcutWidget_ContextMenuEvent_Callback(KShortcutWidget_ContextMenuEvent_Callback cb) { kshortcutwidget_contextmenuevent_callback = cb; }
    inline void setKShortcutWidget_TabletEvent_Callback(KShortcutWidget_TabletEvent_Callback cb) { kshortcutwidget_tabletevent_callback = cb; }
    inline void setKShortcutWidget_ActionEvent_Callback(KShortcutWidget_ActionEvent_Callback cb) { kshortcutwidget_actionevent_callback = cb; }
    inline void setKShortcutWidget_DragEnterEvent_Callback(KShortcutWidget_DragEnterEvent_Callback cb) { kshortcutwidget_dragenterevent_callback = cb; }
    inline void setKShortcutWidget_DragMoveEvent_Callback(KShortcutWidget_DragMoveEvent_Callback cb) { kshortcutwidget_dragmoveevent_callback = cb; }
    inline void setKShortcutWidget_DragLeaveEvent_Callback(KShortcutWidget_DragLeaveEvent_Callback cb) { kshortcutwidget_dragleaveevent_callback = cb; }
    inline void setKShortcutWidget_DropEvent_Callback(KShortcutWidget_DropEvent_Callback cb) { kshortcutwidget_dropevent_callback = cb; }
    inline void setKShortcutWidget_ShowEvent_Callback(KShortcutWidget_ShowEvent_Callback cb) { kshortcutwidget_showevent_callback = cb; }
    inline void setKShortcutWidget_HideEvent_Callback(KShortcutWidget_HideEvent_Callback cb) { kshortcutwidget_hideevent_callback = cb; }
    inline void setKShortcutWidget_NativeEvent_Callback(KShortcutWidget_NativeEvent_Callback cb) { kshortcutwidget_nativeevent_callback = cb; }
    inline void setKShortcutWidget_ChangeEvent_Callback(KShortcutWidget_ChangeEvent_Callback cb) { kshortcutwidget_changeevent_callback = cb; }
    inline void setKShortcutWidget_Metric_Callback(KShortcutWidget_Metric_Callback cb) { kshortcutwidget_metric_callback = cb; }
    inline void setKShortcutWidget_InitPainter_Callback(KShortcutWidget_InitPainter_Callback cb) { kshortcutwidget_initpainter_callback = cb; }
    inline void setKShortcutWidget_Redirected_Callback(KShortcutWidget_Redirected_Callback cb) { kshortcutwidget_redirected_callback = cb; }
    inline void setKShortcutWidget_SharedPainter_Callback(KShortcutWidget_SharedPainter_Callback cb) { kshortcutwidget_sharedpainter_callback = cb; }
    inline void setKShortcutWidget_InputMethodEvent_Callback(KShortcutWidget_InputMethodEvent_Callback cb) { kshortcutwidget_inputmethodevent_callback = cb; }
    inline void setKShortcutWidget_InputMethodQuery_Callback(KShortcutWidget_InputMethodQuery_Callback cb) { kshortcutwidget_inputmethodquery_callback = cb; }
    inline void setKShortcutWidget_FocusNextPrevChild_Callback(KShortcutWidget_FocusNextPrevChild_Callback cb) { kshortcutwidget_focusnextprevchild_callback = cb; }
    inline void setKShortcutWidget_EventFilter_Callback(KShortcutWidget_EventFilter_Callback cb) { kshortcutwidget_eventfilter_callback = cb; }
    inline void setKShortcutWidget_TimerEvent_Callback(KShortcutWidget_TimerEvent_Callback cb) { kshortcutwidget_timerevent_callback = cb; }
    inline void setKShortcutWidget_ChildEvent_Callback(KShortcutWidget_ChildEvent_Callback cb) { kshortcutwidget_childevent_callback = cb; }
    inline void setKShortcutWidget_CustomEvent_Callback(KShortcutWidget_CustomEvent_Callback cb) { kshortcutwidget_customevent_callback = cb; }
    inline void setKShortcutWidget_ConnectNotify_Callback(KShortcutWidget_ConnectNotify_Callback cb) { kshortcutwidget_connectnotify_callback = cb; }
    inline void setKShortcutWidget_DisconnectNotify_Callback(KShortcutWidget_DisconnectNotify_Callback cb) { kshortcutwidget_disconnectnotify_callback = cb; }
    inline void setKShortcutWidget_UpdateMicroFocus_Callback(KShortcutWidget_UpdateMicroFocus_Callback cb) { kshortcutwidget_updatemicrofocus_callback = cb; }
    inline void setKShortcutWidget_Create_Callback(KShortcutWidget_Create_Callback cb) { kshortcutwidget_create_callback = cb; }
    inline void setKShortcutWidget_Destroy_Callback(KShortcutWidget_Destroy_Callback cb) { kshortcutwidget_destroy_callback = cb; }
    inline void setKShortcutWidget_FocusNextChild_Callback(KShortcutWidget_FocusNextChild_Callback cb) { kshortcutwidget_focusnextchild_callback = cb; }
    inline void setKShortcutWidget_FocusPreviousChild_Callback(KShortcutWidget_FocusPreviousChild_Callback cb) { kshortcutwidget_focuspreviouschild_callback = cb; }
    inline void setKShortcutWidget_Sender_Callback(KShortcutWidget_Sender_Callback cb) { kshortcutwidget_sender_callback = cb; }
    inline void setKShortcutWidget_SenderSignalIndex_Callback(KShortcutWidget_SenderSignalIndex_Callback cb) { kshortcutwidget_sendersignalindex_callback = cb; }
    inline void setKShortcutWidget_Receivers_Callback(KShortcutWidget_Receivers_Callback cb) { kshortcutwidget_receivers_callback = cb; }
    inline void setKShortcutWidget_IsSignalConnected_Callback(KShortcutWidget_IsSignalConnected_Callback cb) { kshortcutwidget_issignalconnected_callback = cb; }
    inline void setKShortcutWidget_GetDecodedMetricF_Callback(KShortcutWidget_GetDecodedMetricF_Callback cb) { kshortcutwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKShortcutWidget_MetaObject_IsBase(bool value) const { kshortcutwidget_metaobject_isbase = value; }
    inline void setKShortcutWidget_Metacast_IsBase(bool value) const { kshortcutwidget_metacast_isbase = value; }
    inline void setKShortcutWidget_Metacall_IsBase(bool value) const { kshortcutwidget_metacall_isbase = value; }
    inline void setKShortcutWidget_DevType_IsBase(bool value) const { kshortcutwidget_devtype_isbase = value; }
    inline void setKShortcutWidget_SetVisible_IsBase(bool value) const { kshortcutwidget_setvisible_isbase = value; }
    inline void setKShortcutWidget_SizeHint_IsBase(bool value) const { kshortcutwidget_sizehint_isbase = value; }
    inline void setKShortcutWidget_MinimumSizeHint_IsBase(bool value) const { kshortcutwidget_minimumsizehint_isbase = value; }
    inline void setKShortcutWidget_HeightForWidth_IsBase(bool value) const { kshortcutwidget_heightforwidth_isbase = value; }
    inline void setKShortcutWidget_HasHeightForWidth_IsBase(bool value) const { kshortcutwidget_hasheightforwidth_isbase = value; }
    inline void setKShortcutWidget_PaintEngine_IsBase(bool value) const { kshortcutwidget_paintengine_isbase = value; }
    inline void setKShortcutWidget_Event_IsBase(bool value) const { kshortcutwidget_event_isbase = value; }
    inline void setKShortcutWidget_MousePressEvent_IsBase(bool value) const { kshortcutwidget_mousepressevent_isbase = value; }
    inline void setKShortcutWidget_MouseReleaseEvent_IsBase(bool value) const { kshortcutwidget_mousereleaseevent_isbase = value; }
    inline void setKShortcutWidget_MouseDoubleClickEvent_IsBase(bool value) const { kshortcutwidget_mousedoubleclickevent_isbase = value; }
    inline void setKShortcutWidget_MouseMoveEvent_IsBase(bool value) const { kshortcutwidget_mousemoveevent_isbase = value; }
    inline void setKShortcutWidget_WheelEvent_IsBase(bool value) const { kshortcutwidget_wheelevent_isbase = value; }
    inline void setKShortcutWidget_KeyPressEvent_IsBase(bool value) const { kshortcutwidget_keypressevent_isbase = value; }
    inline void setKShortcutWidget_KeyReleaseEvent_IsBase(bool value) const { kshortcutwidget_keyreleaseevent_isbase = value; }
    inline void setKShortcutWidget_FocusInEvent_IsBase(bool value) const { kshortcutwidget_focusinevent_isbase = value; }
    inline void setKShortcutWidget_FocusOutEvent_IsBase(bool value) const { kshortcutwidget_focusoutevent_isbase = value; }
    inline void setKShortcutWidget_EnterEvent_IsBase(bool value) const { kshortcutwidget_enterevent_isbase = value; }
    inline void setKShortcutWidget_LeaveEvent_IsBase(bool value) const { kshortcutwidget_leaveevent_isbase = value; }
    inline void setKShortcutWidget_PaintEvent_IsBase(bool value) const { kshortcutwidget_paintevent_isbase = value; }
    inline void setKShortcutWidget_MoveEvent_IsBase(bool value) const { kshortcutwidget_moveevent_isbase = value; }
    inline void setKShortcutWidget_ResizeEvent_IsBase(bool value) const { kshortcutwidget_resizeevent_isbase = value; }
    inline void setKShortcutWidget_CloseEvent_IsBase(bool value) const { kshortcutwidget_closeevent_isbase = value; }
    inline void setKShortcutWidget_ContextMenuEvent_IsBase(bool value) const { kshortcutwidget_contextmenuevent_isbase = value; }
    inline void setKShortcutWidget_TabletEvent_IsBase(bool value) const { kshortcutwidget_tabletevent_isbase = value; }
    inline void setKShortcutWidget_ActionEvent_IsBase(bool value) const { kshortcutwidget_actionevent_isbase = value; }
    inline void setKShortcutWidget_DragEnterEvent_IsBase(bool value) const { kshortcutwidget_dragenterevent_isbase = value; }
    inline void setKShortcutWidget_DragMoveEvent_IsBase(bool value) const { kshortcutwidget_dragmoveevent_isbase = value; }
    inline void setKShortcutWidget_DragLeaveEvent_IsBase(bool value) const { kshortcutwidget_dragleaveevent_isbase = value; }
    inline void setKShortcutWidget_DropEvent_IsBase(bool value) const { kshortcutwidget_dropevent_isbase = value; }
    inline void setKShortcutWidget_ShowEvent_IsBase(bool value) const { kshortcutwidget_showevent_isbase = value; }
    inline void setKShortcutWidget_HideEvent_IsBase(bool value) const { kshortcutwidget_hideevent_isbase = value; }
    inline void setKShortcutWidget_NativeEvent_IsBase(bool value) const { kshortcutwidget_nativeevent_isbase = value; }
    inline void setKShortcutWidget_ChangeEvent_IsBase(bool value) const { kshortcutwidget_changeevent_isbase = value; }
    inline void setKShortcutWidget_Metric_IsBase(bool value) const { kshortcutwidget_metric_isbase = value; }
    inline void setKShortcutWidget_InitPainter_IsBase(bool value) const { kshortcutwidget_initpainter_isbase = value; }
    inline void setKShortcutWidget_Redirected_IsBase(bool value) const { kshortcutwidget_redirected_isbase = value; }
    inline void setKShortcutWidget_SharedPainter_IsBase(bool value) const { kshortcutwidget_sharedpainter_isbase = value; }
    inline void setKShortcutWidget_InputMethodEvent_IsBase(bool value) const { kshortcutwidget_inputmethodevent_isbase = value; }
    inline void setKShortcutWidget_InputMethodQuery_IsBase(bool value) const { kshortcutwidget_inputmethodquery_isbase = value; }
    inline void setKShortcutWidget_FocusNextPrevChild_IsBase(bool value) const { kshortcutwidget_focusnextprevchild_isbase = value; }
    inline void setKShortcutWidget_EventFilter_IsBase(bool value) const { kshortcutwidget_eventfilter_isbase = value; }
    inline void setKShortcutWidget_TimerEvent_IsBase(bool value) const { kshortcutwidget_timerevent_isbase = value; }
    inline void setKShortcutWidget_ChildEvent_IsBase(bool value) const { kshortcutwidget_childevent_isbase = value; }
    inline void setKShortcutWidget_CustomEvent_IsBase(bool value) const { kshortcutwidget_customevent_isbase = value; }
    inline void setKShortcutWidget_ConnectNotify_IsBase(bool value) const { kshortcutwidget_connectnotify_isbase = value; }
    inline void setKShortcutWidget_DisconnectNotify_IsBase(bool value) const { kshortcutwidget_disconnectnotify_isbase = value; }
    inline void setKShortcutWidget_UpdateMicroFocus_IsBase(bool value) const { kshortcutwidget_updatemicrofocus_isbase = value; }
    inline void setKShortcutWidget_Create_IsBase(bool value) const { kshortcutwidget_create_isbase = value; }
    inline void setKShortcutWidget_Destroy_IsBase(bool value) const { kshortcutwidget_destroy_isbase = value; }
    inline void setKShortcutWidget_FocusNextChild_IsBase(bool value) const { kshortcutwidget_focusnextchild_isbase = value; }
    inline void setKShortcutWidget_FocusPreviousChild_IsBase(bool value) const { kshortcutwidget_focuspreviouschild_isbase = value; }
    inline void setKShortcutWidget_Sender_IsBase(bool value) const { kshortcutwidget_sender_isbase = value; }
    inline void setKShortcutWidget_SenderSignalIndex_IsBase(bool value) const { kshortcutwidget_sendersignalindex_isbase = value; }
    inline void setKShortcutWidget_Receivers_IsBase(bool value) const { kshortcutwidget_receivers_isbase = value; }
    inline void setKShortcutWidget_IsSignalConnected_IsBase(bool value) const { kshortcutwidget_issignalconnected_isbase = value; }
    inline void setKShortcutWidget_GetDecodedMetricF_IsBase(bool value) const { kshortcutwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kshortcutwidget_metaobject_isbase) {
            kshortcutwidget_metaobject_isbase = false;
            return KShortcutWidget::metaObject();
        }
        auto metaobject_cb = kshortcutwidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KShortcutWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kshortcutwidget_metacast_isbase) {
            kshortcutwidget_metacast_isbase = false;
            return KShortcutWidget::qt_metacast(param1);
        }
        auto metacast_cb = kshortcutwidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KShortcutWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kshortcutwidget_metacall_isbase) {
            kshortcutwidget_metacall_isbase = false;
            return KShortcutWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kshortcutwidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KShortcutWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kshortcutwidget_devtype_isbase) {
            kshortcutwidget_devtype_isbase = false;
            return KShortcutWidget::devType();
        }
        auto devtype_cb = kshortcutwidget_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KShortcutWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kshortcutwidget_setvisible_isbase) {
            kshortcutwidget_setvisible_isbase = false;
            KShortcutWidget::setVisible(visible);
            return;
        }
        auto setvisible_cb = kshortcutwidget_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KShortcutWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kshortcutwidget_sizehint_isbase) {
            kshortcutwidget_sizehint_isbase = false;
            return KShortcutWidget::sizeHint();
        }
        auto sizehint_cb = kshortcutwidget_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KShortcutWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kshortcutwidget_minimumsizehint_isbase) {
            kshortcutwidget_minimumsizehint_isbase = false;
            return KShortcutWidget::minimumSizeHint();
        }
        auto minimumsizehint_cb = kshortcutwidget_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KShortcutWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kshortcutwidget_heightforwidth_isbase) {
            kshortcutwidget_heightforwidth_isbase = false;
            return KShortcutWidget::heightForWidth(param1);
        }
        auto heightforwidth_cb = kshortcutwidget_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KShortcutWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kshortcutwidget_hasheightforwidth_isbase) {
            kshortcutwidget_hasheightforwidth_isbase = false;
            return KShortcutWidget::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kshortcutwidget_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KShortcutWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kshortcutwidget_paintengine_isbase) {
            kshortcutwidget_paintengine_isbase = false;
            return KShortcutWidget::paintEngine();
        }
        auto paintengine_cb = kshortcutwidget_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KShortcutWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kshortcutwidget_event_isbase) {
            kshortcutwidget_event_isbase = false;
            return KShortcutWidget::event(event);
        }
        auto event_cb = kshortcutwidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KShortcutWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kshortcutwidget_mousepressevent_isbase) {
            kshortcutwidget_mousepressevent_isbase = false;
            KShortcutWidget::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kshortcutwidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kshortcutwidget_mousereleaseevent_isbase) {
            kshortcutwidget_mousereleaseevent_isbase = false;
            KShortcutWidget::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kshortcutwidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kshortcutwidget_mousedoubleclickevent_isbase) {
            kshortcutwidget_mousedoubleclickevent_isbase = false;
            KShortcutWidget::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kshortcutwidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kshortcutwidget_mousemoveevent_isbase) {
            kshortcutwidget_mousemoveevent_isbase = false;
            KShortcutWidget::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kshortcutwidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kshortcutwidget_wheelevent_isbase) {
            kshortcutwidget_wheelevent_isbase = false;
            KShortcutWidget::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kshortcutwidget_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kshortcutwidget_keypressevent_isbase) {
            kshortcutwidget_keypressevent_isbase = false;
            KShortcutWidget::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = kshortcutwidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kshortcutwidget_keyreleaseevent_isbase) {
            kshortcutwidget_keyreleaseevent_isbase = false;
            KShortcutWidget::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kshortcutwidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kshortcutwidget_focusinevent_isbase) {
            kshortcutwidget_focusinevent_isbase = false;
            KShortcutWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kshortcutwidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kshortcutwidget_focusoutevent_isbase) {
            kshortcutwidget_focusoutevent_isbase = false;
            KShortcutWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kshortcutwidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kshortcutwidget_enterevent_isbase) {
            kshortcutwidget_enterevent_isbase = false;
            KShortcutWidget::enterEvent(event);
            return;
        }
        auto enterevent_cb = kshortcutwidget_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kshortcutwidget_leaveevent_isbase) {
            kshortcutwidget_leaveevent_isbase = false;
            KShortcutWidget::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kshortcutwidget_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kshortcutwidget_paintevent_isbase) {
            kshortcutwidget_paintevent_isbase = false;
            KShortcutWidget::paintEvent(event);
            return;
        }
        auto paintevent_cb = kshortcutwidget_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kshortcutwidget_moveevent_isbase) {
            kshortcutwidget_moveevent_isbase = false;
            KShortcutWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = kshortcutwidget_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kshortcutwidget_resizeevent_isbase) {
            kshortcutwidget_resizeevent_isbase = false;
            KShortcutWidget::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = kshortcutwidget_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kshortcutwidget_closeevent_isbase) {
            kshortcutwidget_closeevent_isbase = false;
            KShortcutWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = kshortcutwidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kshortcutwidget_contextmenuevent_isbase) {
            kshortcutwidget_contextmenuevent_isbase = false;
            KShortcutWidget::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = kshortcutwidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kshortcutwidget_tabletevent_isbase) {
            kshortcutwidget_tabletevent_isbase = false;
            KShortcutWidget::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kshortcutwidget_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kshortcutwidget_actionevent_isbase) {
            kshortcutwidget_actionevent_isbase = false;
            KShortcutWidget::actionEvent(event);
            return;
        }
        auto actionevent_cb = kshortcutwidget_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kshortcutwidget_dragenterevent_isbase) {
            kshortcutwidget_dragenterevent_isbase = false;
            KShortcutWidget::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kshortcutwidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kshortcutwidget_dragmoveevent_isbase) {
            kshortcutwidget_dragmoveevent_isbase = false;
            KShortcutWidget::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kshortcutwidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kshortcutwidget_dragleaveevent_isbase) {
            kshortcutwidget_dragleaveevent_isbase = false;
            KShortcutWidget::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kshortcutwidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kshortcutwidget_dropevent_isbase) {
            kshortcutwidget_dropevent_isbase = false;
            KShortcutWidget::dropEvent(event);
            return;
        }
        auto dropevent_cb = kshortcutwidget_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kshortcutwidget_showevent_isbase) {
            kshortcutwidget_showevent_isbase = false;
            KShortcutWidget::showEvent(event);
            return;
        }
        auto showevent_cb = kshortcutwidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kshortcutwidget_hideevent_isbase) {
            kshortcutwidget_hideevent_isbase = false;
            KShortcutWidget::hideEvent(event);
            return;
        }
        auto hideevent_cb = kshortcutwidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kshortcutwidget_nativeevent_isbase) {
            kshortcutwidget_nativeevent_isbase = false;
            return KShortcutWidget::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kshortcutwidget_nativeevent_callback;
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
        return KShortcutWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kshortcutwidget_changeevent_isbase) {
            kshortcutwidget_changeevent_isbase = false;
            KShortcutWidget::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kshortcutwidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kshortcutwidget_metric_isbase) {
            kshortcutwidget_metric_isbase = false;
            return KShortcutWidget::metric(param1);
        }
        auto metric_cb = kshortcutwidget_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KShortcutWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kshortcutwidget_initpainter_isbase) {
            kshortcutwidget_initpainter_isbase = false;
            KShortcutWidget::initPainter(painter);
            return;
        }
        auto initpainter_cb = kshortcutwidget_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KShortcutWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kshortcutwidget_redirected_isbase) {
            kshortcutwidget_redirected_isbase = false;
            return KShortcutWidget::redirected(offset);
        }
        auto redirected_cb = kshortcutwidget_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KShortcutWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kshortcutwidget_sharedpainter_isbase) {
            kshortcutwidget_sharedpainter_isbase = false;
            return KShortcutWidget::sharedPainter();
        }
        auto sharedpainter_cb = kshortcutwidget_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KShortcutWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kshortcutwidget_inputmethodevent_isbase) {
            kshortcutwidget_inputmethodevent_isbase = false;
            KShortcutWidget::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kshortcutwidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kshortcutwidget_inputmethodquery_isbase) {
            kshortcutwidget_inputmethodquery_isbase = false;
            return KShortcutWidget::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kshortcutwidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KShortcutWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kshortcutwidget_focusnextprevchild_isbase) {
            kshortcutwidget_focusnextprevchild_isbase = false;
            return KShortcutWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kshortcutwidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KShortcutWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kshortcutwidget_eventfilter_isbase) {
            kshortcutwidget_eventfilter_isbase = false;
            return KShortcutWidget::eventFilter(watched, event);
        }
        auto eventfilter_cb = kshortcutwidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KShortcutWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kshortcutwidget_timerevent_isbase) {
            kshortcutwidget_timerevent_isbase = false;
            KShortcutWidget::timerEvent(event);
            return;
        }
        auto timerevent_cb = kshortcutwidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kshortcutwidget_childevent_isbase) {
            kshortcutwidget_childevent_isbase = false;
            KShortcutWidget::childEvent(event);
            return;
        }
        auto childevent_cb = kshortcutwidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kshortcutwidget_customevent_isbase) {
            kshortcutwidget_customevent_isbase = false;
            KShortcutWidget::customEvent(event);
            return;
        }
        auto customevent_cb = kshortcutwidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KShortcutWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kshortcutwidget_connectnotify_isbase) {
            kshortcutwidget_connectnotify_isbase = false;
            KShortcutWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kshortcutwidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KShortcutWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kshortcutwidget_disconnectnotify_isbase) {
            kshortcutwidget_disconnectnotify_isbase = false;
            KShortcutWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kshortcutwidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KShortcutWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kshortcutwidget_updatemicrofocus_isbase) {
            kshortcutwidget_updatemicrofocus_isbase = false;
            KShortcutWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kshortcutwidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KShortcutWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kshortcutwidget_create_isbase) {
            kshortcutwidget_create_isbase = false;
            KShortcutWidget::create();
            return;
        }
        auto create_cb = kshortcutwidget_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KShortcutWidget::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kshortcutwidget_destroy_isbase) {
            kshortcutwidget_destroy_isbase = false;
            KShortcutWidget::destroy();
            return;
        }
        auto destroy_cb = kshortcutwidget_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KShortcutWidget::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kshortcutwidget_focusnextchild_isbase) {
            kshortcutwidget_focusnextchild_isbase = false;
            return KShortcutWidget::focusNextChild();
        }
        auto focusnextchild_cb = kshortcutwidget_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KShortcutWidget::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kshortcutwidget_focuspreviouschild_isbase) {
            kshortcutwidget_focuspreviouschild_isbase = false;
            return KShortcutWidget::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kshortcutwidget_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KShortcutWidget::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kshortcutwidget_sender_isbase) {
            kshortcutwidget_sender_isbase = false;
            return KShortcutWidget::sender();
        }
        auto sender_cb = kshortcutwidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KShortcutWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kshortcutwidget_sendersignalindex_isbase) {
            kshortcutwidget_sendersignalindex_isbase = false;
            return KShortcutWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = kshortcutwidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KShortcutWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kshortcutwidget_receivers_isbase) {
            kshortcutwidget_receivers_isbase = false;
            return KShortcutWidget::receivers(signal);
        }
        auto receivers_cb = kshortcutwidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KShortcutWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kshortcutwidget_issignalconnected_isbase) {
            kshortcutwidget_issignalconnected_isbase = false;
            return KShortcutWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kshortcutwidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KShortcutWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kshortcutwidget_getdecodedmetricf_isbase) {
            kshortcutwidget_getdecodedmetricf_isbase = false;
            return KShortcutWidget::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kshortcutwidget_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KShortcutWidget::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool KShortcutWidget_Event(KShortcutWidget* self, QEvent* event);
    friend bool KShortcutWidget_SuperEvent(KShortcutWidget* self, QEvent* event);
    friend void KShortcutWidget_MousePressEvent(KShortcutWidget* self, QMouseEvent* event);
    friend void KShortcutWidget_SuperMousePressEvent(KShortcutWidget* self, QMouseEvent* event);
    friend void KShortcutWidget_MouseReleaseEvent(KShortcutWidget* self, QMouseEvent* event);
    friend void KShortcutWidget_SuperMouseReleaseEvent(KShortcutWidget* self, QMouseEvent* event);
    friend void KShortcutWidget_MouseDoubleClickEvent(KShortcutWidget* self, QMouseEvent* event);
    friend void KShortcutWidget_SuperMouseDoubleClickEvent(KShortcutWidget* self, QMouseEvent* event);
    friend void KShortcutWidget_MouseMoveEvent(KShortcutWidget* self, QMouseEvent* event);
    friend void KShortcutWidget_SuperMouseMoveEvent(KShortcutWidget* self, QMouseEvent* event);
    friend void KShortcutWidget_WheelEvent(KShortcutWidget* self, QWheelEvent* event);
    friend void KShortcutWidget_SuperWheelEvent(KShortcutWidget* self, QWheelEvent* event);
    friend void KShortcutWidget_KeyPressEvent(KShortcutWidget* self, QKeyEvent* event);
    friend void KShortcutWidget_SuperKeyPressEvent(KShortcutWidget* self, QKeyEvent* event);
    friend void KShortcutWidget_KeyReleaseEvent(KShortcutWidget* self, QKeyEvent* event);
    friend void KShortcutWidget_SuperKeyReleaseEvent(KShortcutWidget* self, QKeyEvent* event);
    friend void KShortcutWidget_FocusInEvent(KShortcutWidget* self, QFocusEvent* event);
    friend void KShortcutWidget_SuperFocusInEvent(KShortcutWidget* self, QFocusEvent* event);
    friend void KShortcutWidget_FocusOutEvent(KShortcutWidget* self, QFocusEvent* event);
    friend void KShortcutWidget_SuperFocusOutEvent(KShortcutWidget* self, QFocusEvent* event);
    friend void KShortcutWidget_EnterEvent(KShortcutWidget* self, QEnterEvent* event);
    friend void KShortcutWidget_SuperEnterEvent(KShortcutWidget* self, QEnterEvent* event);
    friend void KShortcutWidget_LeaveEvent(KShortcutWidget* self, QEvent* event);
    friend void KShortcutWidget_SuperLeaveEvent(KShortcutWidget* self, QEvent* event);
    friend void KShortcutWidget_PaintEvent(KShortcutWidget* self, QPaintEvent* event);
    friend void KShortcutWidget_SuperPaintEvent(KShortcutWidget* self, QPaintEvent* event);
    friend void KShortcutWidget_MoveEvent(KShortcutWidget* self, QMoveEvent* event);
    friend void KShortcutWidget_SuperMoveEvent(KShortcutWidget* self, QMoveEvent* event);
    friend void KShortcutWidget_ResizeEvent(KShortcutWidget* self, QResizeEvent* event);
    friend void KShortcutWidget_SuperResizeEvent(KShortcutWidget* self, QResizeEvent* event);
    friend void KShortcutWidget_CloseEvent(KShortcutWidget* self, QCloseEvent* event);
    friend void KShortcutWidget_SuperCloseEvent(KShortcutWidget* self, QCloseEvent* event);
    friend void KShortcutWidget_ContextMenuEvent(KShortcutWidget* self, QContextMenuEvent* event);
    friend void KShortcutWidget_SuperContextMenuEvent(KShortcutWidget* self, QContextMenuEvent* event);
    friend void KShortcutWidget_TabletEvent(KShortcutWidget* self, QTabletEvent* event);
    friend void KShortcutWidget_SuperTabletEvent(KShortcutWidget* self, QTabletEvent* event);
    friend void KShortcutWidget_ActionEvent(KShortcutWidget* self, QActionEvent* event);
    friend void KShortcutWidget_SuperActionEvent(KShortcutWidget* self, QActionEvent* event);
    friend void KShortcutWidget_DragEnterEvent(KShortcutWidget* self, QDragEnterEvent* event);
    friend void KShortcutWidget_SuperDragEnterEvent(KShortcutWidget* self, QDragEnterEvent* event);
    friend void KShortcutWidget_DragMoveEvent(KShortcutWidget* self, QDragMoveEvent* event);
    friend void KShortcutWidget_SuperDragMoveEvent(KShortcutWidget* self, QDragMoveEvent* event);
    friend void KShortcutWidget_DragLeaveEvent(KShortcutWidget* self, QDragLeaveEvent* event);
    friend void KShortcutWidget_SuperDragLeaveEvent(KShortcutWidget* self, QDragLeaveEvent* event);
    friend void KShortcutWidget_DropEvent(KShortcutWidget* self, QDropEvent* event);
    friend void KShortcutWidget_SuperDropEvent(KShortcutWidget* self, QDropEvent* event);
    friend void KShortcutWidget_ShowEvent(KShortcutWidget* self, QShowEvent* event);
    friend void KShortcutWidget_SuperShowEvent(KShortcutWidget* self, QShowEvent* event);
    friend void KShortcutWidget_HideEvent(KShortcutWidget* self, QHideEvent* event);
    friend void KShortcutWidget_SuperHideEvent(KShortcutWidget* self, QHideEvent* event);
    friend bool KShortcutWidget_NativeEvent(KShortcutWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KShortcutWidget_SuperNativeEvent(KShortcutWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KShortcutWidget_ChangeEvent(KShortcutWidget* self, QEvent* param1);
    friend void KShortcutWidget_SuperChangeEvent(KShortcutWidget* self, QEvent* param1);
    friend int KShortcutWidget_Metric(const KShortcutWidget* self, int param1);
    friend int KShortcutWidget_SuperMetric(const KShortcutWidget* self, int param1);
    friend void KShortcutWidget_InitPainter(const KShortcutWidget* self, QPainter* painter);
    friend void KShortcutWidget_SuperInitPainter(const KShortcutWidget* self, QPainter* painter);
    friend QPaintDevice* KShortcutWidget_Redirected(const KShortcutWidget* self, QPoint* offset);
    friend QPaintDevice* KShortcutWidget_SuperRedirected(const KShortcutWidget* self, QPoint* offset);
    friend QPainter* KShortcutWidget_SharedPainter(const KShortcutWidget* self);
    friend QPainter* KShortcutWidget_SuperSharedPainter(const KShortcutWidget* self);
    friend void KShortcutWidget_InputMethodEvent(KShortcutWidget* self, QInputMethodEvent* param1);
    friend void KShortcutWidget_SuperInputMethodEvent(KShortcutWidget* self, QInputMethodEvent* param1);
    friend bool KShortcutWidget_FocusNextPrevChild(KShortcutWidget* self, bool next);
    friend bool KShortcutWidget_SuperFocusNextPrevChild(KShortcutWidget* self, bool next);
    friend void KShortcutWidget_TimerEvent(KShortcutWidget* self, QTimerEvent* event);
    friend void KShortcutWidget_SuperTimerEvent(KShortcutWidget* self, QTimerEvent* event);
    friend void KShortcutWidget_ChildEvent(KShortcutWidget* self, QChildEvent* event);
    friend void KShortcutWidget_SuperChildEvent(KShortcutWidget* self, QChildEvent* event);
    friend void KShortcutWidget_CustomEvent(KShortcutWidget* self, QEvent* event);
    friend void KShortcutWidget_SuperCustomEvent(KShortcutWidget* self, QEvent* event);
    friend void KShortcutWidget_ConnectNotify(KShortcutWidget* self, const QMetaMethod* signal);
    friend void KShortcutWidget_SuperConnectNotify(KShortcutWidget* self, const QMetaMethod* signal);
    friend void KShortcutWidget_DisconnectNotify(KShortcutWidget* self, const QMetaMethod* signal);
    friend void KShortcutWidget_SuperDisconnectNotify(KShortcutWidget* self, const QMetaMethod* signal);
    friend void KShortcutWidget_UpdateMicroFocus(KShortcutWidget* self);
    friend void KShortcutWidget_SuperUpdateMicroFocus(KShortcutWidget* self);
    friend void KShortcutWidget_Create(KShortcutWidget* self);
    friend void KShortcutWidget_SuperCreate(KShortcutWidget* self);
    friend void KShortcutWidget_Destroy(KShortcutWidget* self);
    friend void KShortcutWidget_SuperDestroy(KShortcutWidget* self);
    friend bool KShortcutWidget_FocusNextChild(KShortcutWidget* self);
    friend bool KShortcutWidget_SuperFocusNextChild(KShortcutWidget* self);
    friend bool KShortcutWidget_FocusPreviousChild(KShortcutWidget* self);
    friend bool KShortcutWidget_SuperFocusPreviousChild(KShortcutWidget* self);
    friend QObject* KShortcutWidget_Sender(const KShortcutWidget* self);
    friend QObject* KShortcutWidget_SuperSender(const KShortcutWidget* self);
    friend int KShortcutWidget_SenderSignalIndex(const KShortcutWidget* self);
    friend int KShortcutWidget_SuperSenderSignalIndex(const KShortcutWidget* self);
    friend int KShortcutWidget_Receivers(const KShortcutWidget* self, const char* signal);
    friend int KShortcutWidget_SuperReceivers(const KShortcutWidget* self, const char* signal);
    friend bool KShortcutWidget_IsSignalConnected(const KShortcutWidget* self, const QMetaMethod* signal);
    friend bool KShortcutWidget_SuperIsSignalConnected(const KShortcutWidget* self, const QMetaMethod* signal);
    friend double KShortcutWidget_GetDecodedMetricF(const KShortcutWidget* self, int metricA, int metricB);
    friend double KShortcutWidget_SuperGetDecodedMetricF(const KShortcutWidget* self, int metricA, int metricB);
};

#endif
