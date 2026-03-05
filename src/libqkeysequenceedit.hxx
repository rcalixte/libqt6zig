#pragma once
#ifndef SRCC_LIBVIRTUALQKEYSEQUENCEEDIT_H
#define SRCC_LIBVIRTUALQKEYSEQUENCEEDIT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QKeySequenceEdit so that we can call protected methods
class VirtualQKeySequenceEdit final : public QKeySequenceEdit {

  public:
    // Virtual class boolean flag
    bool isVirtualQKeySequenceEdit = true;

    // Virtual class public types (including callbacks)
    using QKeySequenceEdit_MetaObject_Callback = QMetaObject* (*)();
    using QKeySequenceEdit_Metacast_Callback = void* (*)(QKeySequenceEdit*, const char*);
    using QKeySequenceEdit_Metacall_Callback = int (*)(QKeySequenceEdit*, int, int, void**);
    using QKeySequenceEdit_Event_Callback = bool (*)(QKeySequenceEdit*, QEvent*);
    using QKeySequenceEdit_KeyPressEvent_Callback = void (*)(QKeySequenceEdit*, QKeyEvent*);
    using QKeySequenceEdit_KeyReleaseEvent_Callback = void (*)(QKeySequenceEdit*, QKeyEvent*);
    using QKeySequenceEdit_TimerEvent_Callback = void (*)(QKeySequenceEdit*, QTimerEvent*);
    using QKeySequenceEdit_FocusOutEvent_Callback = void (*)(QKeySequenceEdit*, QFocusEvent*);
    using QKeySequenceEdit_DevType_Callback = int (*)();
    using QKeySequenceEdit_SetVisible_Callback = void (*)(QKeySequenceEdit*, bool);
    using QKeySequenceEdit_SizeHint_Callback = QSize* (*)();
    using QKeySequenceEdit_MinimumSizeHint_Callback = QSize* (*)();
    using QKeySequenceEdit_HeightForWidth_Callback = int (*)(const QKeySequenceEdit*, int);
    using QKeySequenceEdit_HasHeightForWidth_Callback = bool (*)();
    using QKeySequenceEdit_PaintEngine_Callback = QPaintEngine* (*)();
    using QKeySequenceEdit_MousePressEvent_Callback = void (*)(QKeySequenceEdit*, QMouseEvent*);
    using QKeySequenceEdit_MouseReleaseEvent_Callback = void (*)(QKeySequenceEdit*, QMouseEvent*);
    using QKeySequenceEdit_MouseDoubleClickEvent_Callback = void (*)(QKeySequenceEdit*, QMouseEvent*);
    using QKeySequenceEdit_MouseMoveEvent_Callback = void (*)(QKeySequenceEdit*, QMouseEvent*);
    using QKeySequenceEdit_WheelEvent_Callback = void (*)(QKeySequenceEdit*, QWheelEvent*);
    using QKeySequenceEdit_FocusInEvent_Callback = void (*)(QKeySequenceEdit*, QFocusEvent*);
    using QKeySequenceEdit_EnterEvent_Callback = void (*)(QKeySequenceEdit*, QEnterEvent*);
    using QKeySequenceEdit_LeaveEvent_Callback = void (*)(QKeySequenceEdit*, QEvent*);
    using QKeySequenceEdit_PaintEvent_Callback = void (*)(QKeySequenceEdit*, QPaintEvent*);
    using QKeySequenceEdit_MoveEvent_Callback = void (*)(QKeySequenceEdit*, QMoveEvent*);
    using QKeySequenceEdit_ResizeEvent_Callback = void (*)(QKeySequenceEdit*, QResizeEvent*);
    using QKeySequenceEdit_CloseEvent_Callback = void (*)(QKeySequenceEdit*, QCloseEvent*);
    using QKeySequenceEdit_ContextMenuEvent_Callback = void (*)(QKeySequenceEdit*, QContextMenuEvent*);
    using QKeySequenceEdit_TabletEvent_Callback = void (*)(QKeySequenceEdit*, QTabletEvent*);
    using QKeySequenceEdit_ActionEvent_Callback = void (*)(QKeySequenceEdit*, QActionEvent*);
    using QKeySequenceEdit_DragEnterEvent_Callback = void (*)(QKeySequenceEdit*, QDragEnterEvent*);
    using QKeySequenceEdit_DragMoveEvent_Callback = void (*)(QKeySequenceEdit*, QDragMoveEvent*);
    using QKeySequenceEdit_DragLeaveEvent_Callback = void (*)(QKeySequenceEdit*, QDragLeaveEvent*);
    using QKeySequenceEdit_DropEvent_Callback = void (*)(QKeySequenceEdit*, QDropEvent*);
    using QKeySequenceEdit_ShowEvent_Callback = void (*)(QKeySequenceEdit*, QShowEvent*);
    using QKeySequenceEdit_HideEvent_Callback = void (*)(QKeySequenceEdit*, QHideEvent*);
    using QKeySequenceEdit_NativeEvent_Callback = bool (*)(QKeySequenceEdit*, libqt_string, void*, intptr_t*);
    using QKeySequenceEdit_ChangeEvent_Callback = void (*)(QKeySequenceEdit*, QEvent*);
    using QKeySequenceEdit_Metric_Callback = int (*)(const QKeySequenceEdit*, int);
    using QKeySequenceEdit_InitPainter_Callback = void (*)(const QKeySequenceEdit*, QPainter*);
    using QKeySequenceEdit_Redirected_Callback = QPaintDevice* (*)(const QKeySequenceEdit*, QPoint*);
    using QKeySequenceEdit_SharedPainter_Callback = QPainter* (*)();
    using QKeySequenceEdit_InputMethodEvent_Callback = void (*)(QKeySequenceEdit*, QInputMethodEvent*);
    using QKeySequenceEdit_InputMethodQuery_Callback = QVariant* (*)(const QKeySequenceEdit*, int);
    using QKeySequenceEdit_FocusNextPrevChild_Callback = bool (*)(QKeySequenceEdit*, bool);
    using QKeySequenceEdit_EventFilter_Callback = bool (*)(QKeySequenceEdit*, QObject*, QEvent*);
    using QKeySequenceEdit_ChildEvent_Callback = void (*)(QKeySequenceEdit*, QChildEvent*);
    using QKeySequenceEdit_CustomEvent_Callback = void (*)(QKeySequenceEdit*, QEvent*);
    using QKeySequenceEdit_ConnectNotify_Callback = void (*)(QKeySequenceEdit*, QMetaMethod*);
    using QKeySequenceEdit_DisconnectNotify_Callback = void (*)(QKeySequenceEdit*, QMetaMethod*);
    using QKeySequenceEdit_UpdateMicroFocus_Callback = void (*)();
    using QKeySequenceEdit_Create_Callback = void (*)();
    using QKeySequenceEdit_Destroy_Callback = void (*)();
    using QKeySequenceEdit_FocusNextChild_Callback = bool (*)();
    using QKeySequenceEdit_FocusPreviousChild_Callback = bool (*)();
    using QKeySequenceEdit_Sender_Callback = QObject* (*)();
    using QKeySequenceEdit_SenderSignalIndex_Callback = int (*)();
    using QKeySequenceEdit_Receivers_Callback = int (*)(const QKeySequenceEdit*, const char*);
    using QKeySequenceEdit_IsSignalConnected_Callback = bool (*)(const QKeySequenceEdit*, QMetaMethod*);
    using QKeySequenceEdit_GetDecodedMetricF_Callback = double (*)(const QKeySequenceEdit*, int, int);

  protected:
    // Instance callback storage
    QKeySequenceEdit_MetaObject_Callback qkeysequenceedit_metaobject_callback = nullptr;
    QKeySequenceEdit_Metacast_Callback qkeysequenceedit_metacast_callback = nullptr;
    QKeySequenceEdit_Metacall_Callback qkeysequenceedit_metacall_callback = nullptr;
    QKeySequenceEdit_Event_Callback qkeysequenceedit_event_callback = nullptr;
    QKeySequenceEdit_KeyPressEvent_Callback qkeysequenceedit_keypressevent_callback = nullptr;
    QKeySequenceEdit_KeyReleaseEvent_Callback qkeysequenceedit_keyreleaseevent_callback = nullptr;
    QKeySequenceEdit_TimerEvent_Callback qkeysequenceedit_timerevent_callback = nullptr;
    QKeySequenceEdit_FocusOutEvent_Callback qkeysequenceedit_focusoutevent_callback = nullptr;
    QKeySequenceEdit_DevType_Callback qkeysequenceedit_devtype_callback = nullptr;
    QKeySequenceEdit_SetVisible_Callback qkeysequenceedit_setvisible_callback = nullptr;
    QKeySequenceEdit_SizeHint_Callback qkeysequenceedit_sizehint_callback = nullptr;
    QKeySequenceEdit_MinimumSizeHint_Callback qkeysequenceedit_minimumsizehint_callback = nullptr;
    QKeySequenceEdit_HeightForWidth_Callback qkeysequenceedit_heightforwidth_callback = nullptr;
    QKeySequenceEdit_HasHeightForWidth_Callback qkeysequenceedit_hasheightforwidth_callback = nullptr;
    QKeySequenceEdit_PaintEngine_Callback qkeysequenceedit_paintengine_callback = nullptr;
    QKeySequenceEdit_MousePressEvent_Callback qkeysequenceedit_mousepressevent_callback = nullptr;
    QKeySequenceEdit_MouseReleaseEvent_Callback qkeysequenceedit_mousereleaseevent_callback = nullptr;
    QKeySequenceEdit_MouseDoubleClickEvent_Callback qkeysequenceedit_mousedoubleclickevent_callback = nullptr;
    QKeySequenceEdit_MouseMoveEvent_Callback qkeysequenceedit_mousemoveevent_callback = nullptr;
    QKeySequenceEdit_WheelEvent_Callback qkeysequenceedit_wheelevent_callback = nullptr;
    QKeySequenceEdit_FocusInEvent_Callback qkeysequenceedit_focusinevent_callback = nullptr;
    QKeySequenceEdit_EnterEvent_Callback qkeysequenceedit_enterevent_callback = nullptr;
    QKeySequenceEdit_LeaveEvent_Callback qkeysequenceedit_leaveevent_callback = nullptr;
    QKeySequenceEdit_PaintEvent_Callback qkeysequenceedit_paintevent_callback = nullptr;
    QKeySequenceEdit_MoveEvent_Callback qkeysequenceedit_moveevent_callback = nullptr;
    QKeySequenceEdit_ResizeEvent_Callback qkeysequenceedit_resizeevent_callback = nullptr;
    QKeySequenceEdit_CloseEvent_Callback qkeysequenceedit_closeevent_callback = nullptr;
    QKeySequenceEdit_ContextMenuEvent_Callback qkeysequenceedit_contextmenuevent_callback = nullptr;
    QKeySequenceEdit_TabletEvent_Callback qkeysequenceedit_tabletevent_callback = nullptr;
    QKeySequenceEdit_ActionEvent_Callback qkeysequenceedit_actionevent_callback = nullptr;
    QKeySequenceEdit_DragEnterEvent_Callback qkeysequenceedit_dragenterevent_callback = nullptr;
    QKeySequenceEdit_DragMoveEvent_Callback qkeysequenceedit_dragmoveevent_callback = nullptr;
    QKeySequenceEdit_DragLeaveEvent_Callback qkeysequenceedit_dragleaveevent_callback = nullptr;
    QKeySequenceEdit_DropEvent_Callback qkeysequenceedit_dropevent_callback = nullptr;
    QKeySequenceEdit_ShowEvent_Callback qkeysequenceedit_showevent_callback = nullptr;
    QKeySequenceEdit_HideEvent_Callback qkeysequenceedit_hideevent_callback = nullptr;
    QKeySequenceEdit_NativeEvent_Callback qkeysequenceedit_nativeevent_callback = nullptr;
    QKeySequenceEdit_ChangeEvent_Callback qkeysequenceedit_changeevent_callback = nullptr;
    QKeySequenceEdit_Metric_Callback qkeysequenceedit_metric_callback = nullptr;
    QKeySequenceEdit_InitPainter_Callback qkeysequenceedit_initpainter_callback = nullptr;
    QKeySequenceEdit_Redirected_Callback qkeysequenceedit_redirected_callback = nullptr;
    QKeySequenceEdit_SharedPainter_Callback qkeysequenceedit_sharedpainter_callback = nullptr;
    QKeySequenceEdit_InputMethodEvent_Callback qkeysequenceedit_inputmethodevent_callback = nullptr;
    QKeySequenceEdit_InputMethodQuery_Callback qkeysequenceedit_inputmethodquery_callback = nullptr;
    QKeySequenceEdit_FocusNextPrevChild_Callback qkeysequenceedit_focusnextprevchild_callback = nullptr;
    QKeySequenceEdit_EventFilter_Callback qkeysequenceedit_eventfilter_callback = nullptr;
    QKeySequenceEdit_ChildEvent_Callback qkeysequenceedit_childevent_callback = nullptr;
    QKeySequenceEdit_CustomEvent_Callback qkeysequenceedit_customevent_callback = nullptr;
    QKeySequenceEdit_ConnectNotify_Callback qkeysequenceedit_connectnotify_callback = nullptr;
    QKeySequenceEdit_DisconnectNotify_Callback qkeysequenceedit_disconnectnotify_callback = nullptr;
    QKeySequenceEdit_UpdateMicroFocus_Callback qkeysequenceedit_updatemicrofocus_callback = nullptr;
    QKeySequenceEdit_Create_Callback qkeysequenceedit_create_callback = nullptr;
    QKeySequenceEdit_Destroy_Callback qkeysequenceedit_destroy_callback = nullptr;
    QKeySequenceEdit_FocusNextChild_Callback qkeysequenceedit_focusnextchild_callback = nullptr;
    QKeySequenceEdit_FocusPreviousChild_Callback qkeysequenceedit_focuspreviouschild_callback = nullptr;
    QKeySequenceEdit_Sender_Callback qkeysequenceedit_sender_callback = nullptr;
    QKeySequenceEdit_SenderSignalIndex_Callback qkeysequenceedit_sendersignalindex_callback = nullptr;
    QKeySequenceEdit_Receivers_Callback qkeysequenceedit_receivers_callback = nullptr;
    QKeySequenceEdit_IsSignalConnected_Callback qkeysequenceedit_issignalconnected_callback = nullptr;
    QKeySequenceEdit_GetDecodedMetricF_Callback qkeysequenceedit_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qkeysequenceedit_metaobject_isbase = false;
    mutable bool qkeysequenceedit_metacast_isbase = false;
    mutable bool qkeysequenceedit_metacall_isbase = false;
    mutable bool qkeysequenceedit_event_isbase = false;
    mutable bool qkeysequenceedit_keypressevent_isbase = false;
    mutable bool qkeysequenceedit_keyreleaseevent_isbase = false;
    mutable bool qkeysequenceedit_timerevent_isbase = false;
    mutable bool qkeysequenceedit_focusoutevent_isbase = false;
    mutable bool qkeysequenceedit_devtype_isbase = false;
    mutable bool qkeysequenceedit_setvisible_isbase = false;
    mutable bool qkeysequenceedit_sizehint_isbase = false;
    mutable bool qkeysequenceedit_minimumsizehint_isbase = false;
    mutable bool qkeysequenceedit_heightforwidth_isbase = false;
    mutable bool qkeysequenceedit_hasheightforwidth_isbase = false;
    mutable bool qkeysequenceedit_paintengine_isbase = false;
    mutable bool qkeysequenceedit_mousepressevent_isbase = false;
    mutable bool qkeysequenceedit_mousereleaseevent_isbase = false;
    mutable bool qkeysequenceedit_mousedoubleclickevent_isbase = false;
    mutable bool qkeysequenceedit_mousemoveevent_isbase = false;
    mutable bool qkeysequenceedit_wheelevent_isbase = false;
    mutable bool qkeysequenceedit_focusinevent_isbase = false;
    mutable bool qkeysequenceedit_enterevent_isbase = false;
    mutable bool qkeysequenceedit_leaveevent_isbase = false;
    mutable bool qkeysequenceedit_paintevent_isbase = false;
    mutable bool qkeysequenceedit_moveevent_isbase = false;
    mutable bool qkeysequenceedit_resizeevent_isbase = false;
    mutable bool qkeysequenceedit_closeevent_isbase = false;
    mutable bool qkeysequenceedit_contextmenuevent_isbase = false;
    mutable bool qkeysequenceedit_tabletevent_isbase = false;
    mutable bool qkeysequenceedit_actionevent_isbase = false;
    mutable bool qkeysequenceedit_dragenterevent_isbase = false;
    mutable bool qkeysequenceedit_dragmoveevent_isbase = false;
    mutable bool qkeysequenceedit_dragleaveevent_isbase = false;
    mutable bool qkeysequenceedit_dropevent_isbase = false;
    mutable bool qkeysequenceedit_showevent_isbase = false;
    mutable bool qkeysequenceedit_hideevent_isbase = false;
    mutable bool qkeysequenceedit_nativeevent_isbase = false;
    mutable bool qkeysequenceedit_changeevent_isbase = false;
    mutable bool qkeysequenceedit_metric_isbase = false;
    mutable bool qkeysequenceedit_initpainter_isbase = false;
    mutable bool qkeysequenceedit_redirected_isbase = false;
    mutable bool qkeysequenceedit_sharedpainter_isbase = false;
    mutable bool qkeysequenceedit_inputmethodevent_isbase = false;
    mutable bool qkeysequenceedit_inputmethodquery_isbase = false;
    mutable bool qkeysequenceedit_focusnextprevchild_isbase = false;
    mutable bool qkeysequenceedit_eventfilter_isbase = false;
    mutable bool qkeysequenceedit_childevent_isbase = false;
    mutable bool qkeysequenceedit_customevent_isbase = false;
    mutable bool qkeysequenceedit_connectnotify_isbase = false;
    mutable bool qkeysequenceedit_disconnectnotify_isbase = false;
    mutable bool qkeysequenceedit_updatemicrofocus_isbase = false;
    mutable bool qkeysequenceedit_create_isbase = false;
    mutable bool qkeysequenceedit_destroy_isbase = false;
    mutable bool qkeysequenceedit_focusnextchild_isbase = false;
    mutable bool qkeysequenceedit_focuspreviouschild_isbase = false;
    mutable bool qkeysequenceedit_sender_isbase = false;
    mutable bool qkeysequenceedit_sendersignalindex_isbase = false;
    mutable bool qkeysequenceedit_receivers_isbase = false;
    mutable bool qkeysequenceedit_issignalconnected_isbase = false;
    mutable bool qkeysequenceedit_getdecodedmetricf_isbase = false;

  public:
    VirtualQKeySequenceEdit(QWidget* parent) : QKeySequenceEdit(parent) {};
    VirtualQKeySequenceEdit() : QKeySequenceEdit() {};
    VirtualQKeySequenceEdit(const QKeySequence& keySequence) : QKeySequenceEdit(keySequence) {};
    VirtualQKeySequenceEdit(const QKeySequence& keySequence, QWidget* parent) : QKeySequenceEdit(keySequence, parent) {};

    // Callback setters
    inline void setQKeySequenceEdit_MetaObject_Callback(QKeySequenceEdit_MetaObject_Callback cb) { qkeysequenceedit_metaobject_callback = cb; }
    inline void setQKeySequenceEdit_Metacast_Callback(QKeySequenceEdit_Metacast_Callback cb) { qkeysequenceedit_metacast_callback = cb; }
    inline void setQKeySequenceEdit_Metacall_Callback(QKeySequenceEdit_Metacall_Callback cb) { qkeysequenceedit_metacall_callback = cb; }
    inline void setQKeySequenceEdit_Event_Callback(QKeySequenceEdit_Event_Callback cb) { qkeysequenceedit_event_callback = cb; }
    inline void setQKeySequenceEdit_KeyPressEvent_Callback(QKeySequenceEdit_KeyPressEvent_Callback cb) { qkeysequenceedit_keypressevent_callback = cb; }
    inline void setQKeySequenceEdit_KeyReleaseEvent_Callback(QKeySequenceEdit_KeyReleaseEvent_Callback cb) { qkeysequenceedit_keyreleaseevent_callback = cb; }
    inline void setQKeySequenceEdit_TimerEvent_Callback(QKeySequenceEdit_TimerEvent_Callback cb) { qkeysequenceedit_timerevent_callback = cb; }
    inline void setQKeySequenceEdit_FocusOutEvent_Callback(QKeySequenceEdit_FocusOutEvent_Callback cb) { qkeysequenceedit_focusoutevent_callback = cb; }
    inline void setQKeySequenceEdit_DevType_Callback(QKeySequenceEdit_DevType_Callback cb) { qkeysequenceedit_devtype_callback = cb; }
    inline void setQKeySequenceEdit_SetVisible_Callback(QKeySequenceEdit_SetVisible_Callback cb) { qkeysequenceedit_setvisible_callback = cb; }
    inline void setQKeySequenceEdit_SizeHint_Callback(QKeySequenceEdit_SizeHint_Callback cb) { qkeysequenceedit_sizehint_callback = cb; }
    inline void setQKeySequenceEdit_MinimumSizeHint_Callback(QKeySequenceEdit_MinimumSizeHint_Callback cb) { qkeysequenceedit_minimumsizehint_callback = cb; }
    inline void setQKeySequenceEdit_HeightForWidth_Callback(QKeySequenceEdit_HeightForWidth_Callback cb) { qkeysequenceedit_heightforwidth_callback = cb; }
    inline void setQKeySequenceEdit_HasHeightForWidth_Callback(QKeySequenceEdit_HasHeightForWidth_Callback cb) { qkeysequenceedit_hasheightforwidth_callback = cb; }
    inline void setQKeySequenceEdit_PaintEngine_Callback(QKeySequenceEdit_PaintEngine_Callback cb) { qkeysequenceedit_paintengine_callback = cb; }
    inline void setQKeySequenceEdit_MousePressEvent_Callback(QKeySequenceEdit_MousePressEvent_Callback cb) { qkeysequenceedit_mousepressevent_callback = cb; }
    inline void setQKeySequenceEdit_MouseReleaseEvent_Callback(QKeySequenceEdit_MouseReleaseEvent_Callback cb) { qkeysequenceedit_mousereleaseevent_callback = cb; }
    inline void setQKeySequenceEdit_MouseDoubleClickEvent_Callback(QKeySequenceEdit_MouseDoubleClickEvent_Callback cb) { qkeysequenceedit_mousedoubleclickevent_callback = cb; }
    inline void setQKeySequenceEdit_MouseMoveEvent_Callback(QKeySequenceEdit_MouseMoveEvent_Callback cb) { qkeysequenceedit_mousemoveevent_callback = cb; }
    inline void setQKeySequenceEdit_WheelEvent_Callback(QKeySequenceEdit_WheelEvent_Callback cb) { qkeysequenceedit_wheelevent_callback = cb; }
    inline void setQKeySequenceEdit_FocusInEvent_Callback(QKeySequenceEdit_FocusInEvent_Callback cb) { qkeysequenceedit_focusinevent_callback = cb; }
    inline void setQKeySequenceEdit_EnterEvent_Callback(QKeySequenceEdit_EnterEvent_Callback cb) { qkeysequenceedit_enterevent_callback = cb; }
    inline void setQKeySequenceEdit_LeaveEvent_Callback(QKeySequenceEdit_LeaveEvent_Callback cb) { qkeysequenceedit_leaveevent_callback = cb; }
    inline void setQKeySequenceEdit_PaintEvent_Callback(QKeySequenceEdit_PaintEvent_Callback cb) { qkeysequenceedit_paintevent_callback = cb; }
    inline void setQKeySequenceEdit_MoveEvent_Callback(QKeySequenceEdit_MoveEvent_Callback cb) { qkeysequenceedit_moveevent_callback = cb; }
    inline void setQKeySequenceEdit_ResizeEvent_Callback(QKeySequenceEdit_ResizeEvent_Callback cb) { qkeysequenceedit_resizeevent_callback = cb; }
    inline void setQKeySequenceEdit_CloseEvent_Callback(QKeySequenceEdit_CloseEvent_Callback cb) { qkeysequenceedit_closeevent_callback = cb; }
    inline void setQKeySequenceEdit_ContextMenuEvent_Callback(QKeySequenceEdit_ContextMenuEvent_Callback cb) { qkeysequenceedit_contextmenuevent_callback = cb; }
    inline void setQKeySequenceEdit_TabletEvent_Callback(QKeySequenceEdit_TabletEvent_Callback cb) { qkeysequenceedit_tabletevent_callback = cb; }
    inline void setQKeySequenceEdit_ActionEvent_Callback(QKeySequenceEdit_ActionEvent_Callback cb) { qkeysequenceedit_actionevent_callback = cb; }
    inline void setQKeySequenceEdit_DragEnterEvent_Callback(QKeySequenceEdit_DragEnterEvent_Callback cb) { qkeysequenceedit_dragenterevent_callback = cb; }
    inline void setQKeySequenceEdit_DragMoveEvent_Callback(QKeySequenceEdit_DragMoveEvent_Callback cb) { qkeysequenceedit_dragmoveevent_callback = cb; }
    inline void setQKeySequenceEdit_DragLeaveEvent_Callback(QKeySequenceEdit_DragLeaveEvent_Callback cb) { qkeysequenceedit_dragleaveevent_callback = cb; }
    inline void setQKeySequenceEdit_DropEvent_Callback(QKeySequenceEdit_DropEvent_Callback cb) { qkeysequenceedit_dropevent_callback = cb; }
    inline void setQKeySequenceEdit_ShowEvent_Callback(QKeySequenceEdit_ShowEvent_Callback cb) { qkeysequenceedit_showevent_callback = cb; }
    inline void setQKeySequenceEdit_HideEvent_Callback(QKeySequenceEdit_HideEvent_Callback cb) { qkeysequenceedit_hideevent_callback = cb; }
    inline void setQKeySequenceEdit_NativeEvent_Callback(QKeySequenceEdit_NativeEvent_Callback cb) { qkeysequenceedit_nativeevent_callback = cb; }
    inline void setQKeySequenceEdit_ChangeEvent_Callback(QKeySequenceEdit_ChangeEvent_Callback cb) { qkeysequenceedit_changeevent_callback = cb; }
    inline void setQKeySequenceEdit_Metric_Callback(QKeySequenceEdit_Metric_Callback cb) { qkeysequenceedit_metric_callback = cb; }
    inline void setQKeySequenceEdit_InitPainter_Callback(QKeySequenceEdit_InitPainter_Callback cb) { qkeysequenceedit_initpainter_callback = cb; }
    inline void setQKeySequenceEdit_Redirected_Callback(QKeySequenceEdit_Redirected_Callback cb) { qkeysequenceedit_redirected_callback = cb; }
    inline void setQKeySequenceEdit_SharedPainter_Callback(QKeySequenceEdit_SharedPainter_Callback cb) { qkeysequenceedit_sharedpainter_callback = cb; }
    inline void setQKeySequenceEdit_InputMethodEvent_Callback(QKeySequenceEdit_InputMethodEvent_Callback cb) { qkeysequenceedit_inputmethodevent_callback = cb; }
    inline void setQKeySequenceEdit_InputMethodQuery_Callback(QKeySequenceEdit_InputMethodQuery_Callback cb) { qkeysequenceedit_inputmethodquery_callback = cb; }
    inline void setQKeySequenceEdit_FocusNextPrevChild_Callback(QKeySequenceEdit_FocusNextPrevChild_Callback cb) { qkeysequenceedit_focusnextprevchild_callback = cb; }
    inline void setQKeySequenceEdit_EventFilter_Callback(QKeySequenceEdit_EventFilter_Callback cb) { qkeysequenceedit_eventfilter_callback = cb; }
    inline void setQKeySequenceEdit_ChildEvent_Callback(QKeySequenceEdit_ChildEvent_Callback cb) { qkeysequenceedit_childevent_callback = cb; }
    inline void setQKeySequenceEdit_CustomEvent_Callback(QKeySequenceEdit_CustomEvent_Callback cb) { qkeysequenceedit_customevent_callback = cb; }
    inline void setQKeySequenceEdit_ConnectNotify_Callback(QKeySequenceEdit_ConnectNotify_Callback cb) { qkeysequenceedit_connectnotify_callback = cb; }
    inline void setQKeySequenceEdit_DisconnectNotify_Callback(QKeySequenceEdit_DisconnectNotify_Callback cb) { qkeysequenceedit_disconnectnotify_callback = cb; }
    inline void setQKeySequenceEdit_UpdateMicroFocus_Callback(QKeySequenceEdit_UpdateMicroFocus_Callback cb) { qkeysequenceedit_updatemicrofocus_callback = cb; }
    inline void setQKeySequenceEdit_Create_Callback(QKeySequenceEdit_Create_Callback cb) { qkeysequenceedit_create_callback = cb; }
    inline void setQKeySequenceEdit_Destroy_Callback(QKeySequenceEdit_Destroy_Callback cb) { qkeysequenceedit_destroy_callback = cb; }
    inline void setQKeySequenceEdit_FocusNextChild_Callback(QKeySequenceEdit_FocusNextChild_Callback cb) { qkeysequenceedit_focusnextchild_callback = cb; }
    inline void setQKeySequenceEdit_FocusPreviousChild_Callback(QKeySequenceEdit_FocusPreviousChild_Callback cb) { qkeysequenceedit_focuspreviouschild_callback = cb; }
    inline void setQKeySequenceEdit_Sender_Callback(QKeySequenceEdit_Sender_Callback cb) { qkeysequenceedit_sender_callback = cb; }
    inline void setQKeySequenceEdit_SenderSignalIndex_Callback(QKeySequenceEdit_SenderSignalIndex_Callback cb) { qkeysequenceedit_sendersignalindex_callback = cb; }
    inline void setQKeySequenceEdit_Receivers_Callback(QKeySequenceEdit_Receivers_Callback cb) { qkeysequenceedit_receivers_callback = cb; }
    inline void setQKeySequenceEdit_IsSignalConnected_Callback(QKeySequenceEdit_IsSignalConnected_Callback cb) { qkeysequenceedit_issignalconnected_callback = cb; }
    inline void setQKeySequenceEdit_GetDecodedMetricF_Callback(QKeySequenceEdit_GetDecodedMetricF_Callback cb) { qkeysequenceedit_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQKeySequenceEdit_MetaObject_IsBase(bool value) const { qkeysequenceedit_metaobject_isbase = value; }
    inline void setQKeySequenceEdit_Metacast_IsBase(bool value) const { qkeysequenceedit_metacast_isbase = value; }
    inline void setQKeySequenceEdit_Metacall_IsBase(bool value) const { qkeysequenceedit_metacall_isbase = value; }
    inline void setQKeySequenceEdit_Event_IsBase(bool value) const { qkeysequenceedit_event_isbase = value; }
    inline void setQKeySequenceEdit_KeyPressEvent_IsBase(bool value) const { qkeysequenceedit_keypressevent_isbase = value; }
    inline void setQKeySequenceEdit_KeyReleaseEvent_IsBase(bool value) const { qkeysequenceedit_keyreleaseevent_isbase = value; }
    inline void setQKeySequenceEdit_TimerEvent_IsBase(bool value) const { qkeysequenceedit_timerevent_isbase = value; }
    inline void setQKeySequenceEdit_FocusOutEvent_IsBase(bool value) const { qkeysequenceedit_focusoutevent_isbase = value; }
    inline void setQKeySequenceEdit_DevType_IsBase(bool value) const { qkeysequenceedit_devtype_isbase = value; }
    inline void setQKeySequenceEdit_SetVisible_IsBase(bool value) const { qkeysequenceedit_setvisible_isbase = value; }
    inline void setQKeySequenceEdit_SizeHint_IsBase(bool value) const { qkeysequenceedit_sizehint_isbase = value; }
    inline void setQKeySequenceEdit_MinimumSizeHint_IsBase(bool value) const { qkeysequenceedit_minimumsizehint_isbase = value; }
    inline void setQKeySequenceEdit_HeightForWidth_IsBase(bool value) const { qkeysequenceedit_heightforwidth_isbase = value; }
    inline void setQKeySequenceEdit_HasHeightForWidth_IsBase(bool value) const { qkeysequenceedit_hasheightforwidth_isbase = value; }
    inline void setQKeySequenceEdit_PaintEngine_IsBase(bool value) const { qkeysequenceedit_paintengine_isbase = value; }
    inline void setQKeySequenceEdit_MousePressEvent_IsBase(bool value) const { qkeysequenceedit_mousepressevent_isbase = value; }
    inline void setQKeySequenceEdit_MouseReleaseEvent_IsBase(bool value) const { qkeysequenceedit_mousereleaseevent_isbase = value; }
    inline void setQKeySequenceEdit_MouseDoubleClickEvent_IsBase(bool value) const { qkeysequenceedit_mousedoubleclickevent_isbase = value; }
    inline void setQKeySequenceEdit_MouseMoveEvent_IsBase(bool value) const { qkeysequenceedit_mousemoveevent_isbase = value; }
    inline void setQKeySequenceEdit_WheelEvent_IsBase(bool value) const { qkeysequenceedit_wheelevent_isbase = value; }
    inline void setQKeySequenceEdit_FocusInEvent_IsBase(bool value) const { qkeysequenceedit_focusinevent_isbase = value; }
    inline void setQKeySequenceEdit_EnterEvent_IsBase(bool value) const { qkeysequenceedit_enterevent_isbase = value; }
    inline void setQKeySequenceEdit_LeaveEvent_IsBase(bool value) const { qkeysequenceedit_leaveevent_isbase = value; }
    inline void setQKeySequenceEdit_PaintEvent_IsBase(bool value) const { qkeysequenceedit_paintevent_isbase = value; }
    inline void setQKeySequenceEdit_MoveEvent_IsBase(bool value) const { qkeysequenceedit_moveevent_isbase = value; }
    inline void setQKeySequenceEdit_ResizeEvent_IsBase(bool value) const { qkeysequenceedit_resizeevent_isbase = value; }
    inline void setQKeySequenceEdit_CloseEvent_IsBase(bool value) const { qkeysequenceedit_closeevent_isbase = value; }
    inline void setQKeySequenceEdit_ContextMenuEvent_IsBase(bool value) const { qkeysequenceedit_contextmenuevent_isbase = value; }
    inline void setQKeySequenceEdit_TabletEvent_IsBase(bool value) const { qkeysequenceedit_tabletevent_isbase = value; }
    inline void setQKeySequenceEdit_ActionEvent_IsBase(bool value) const { qkeysequenceedit_actionevent_isbase = value; }
    inline void setQKeySequenceEdit_DragEnterEvent_IsBase(bool value) const { qkeysequenceedit_dragenterevent_isbase = value; }
    inline void setQKeySequenceEdit_DragMoveEvent_IsBase(bool value) const { qkeysequenceedit_dragmoveevent_isbase = value; }
    inline void setQKeySequenceEdit_DragLeaveEvent_IsBase(bool value) const { qkeysequenceedit_dragleaveevent_isbase = value; }
    inline void setQKeySequenceEdit_DropEvent_IsBase(bool value) const { qkeysequenceedit_dropevent_isbase = value; }
    inline void setQKeySequenceEdit_ShowEvent_IsBase(bool value) const { qkeysequenceedit_showevent_isbase = value; }
    inline void setQKeySequenceEdit_HideEvent_IsBase(bool value) const { qkeysequenceedit_hideevent_isbase = value; }
    inline void setQKeySequenceEdit_NativeEvent_IsBase(bool value) const { qkeysequenceedit_nativeevent_isbase = value; }
    inline void setQKeySequenceEdit_ChangeEvent_IsBase(bool value) const { qkeysequenceedit_changeevent_isbase = value; }
    inline void setQKeySequenceEdit_Metric_IsBase(bool value) const { qkeysequenceedit_metric_isbase = value; }
    inline void setQKeySequenceEdit_InitPainter_IsBase(bool value) const { qkeysequenceedit_initpainter_isbase = value; }
    inline void setQKeySequenceEdit_Redirected_IsBase(bool value) const { qkeysequenceedit_redirected_isbase = value; }
    inline void setQKeySequenceEdit_SharedPainter_IsBase(bool value) const { qkeysequenceedit_sharedpainter_isbase = value; }
    inline void setQKeySequenceEdit_InputMethodEvent_IsBase(bool value) const { qkeysequenceedit_inputmethodevent_isbase = value; }
    inline void setQKeySequenceEdit_InputMethodQuery_IsBase(bool value) const { qkeysequenceedit_inputmethodquery_isbase = value; }
    inline void setQKeySequenceEdit_FocusNextPrevChild_IsBase(bool value) const { qkeysequenceedit_focusnextprevchild_isbase = value; }
    inline void setQKeySequenceEdit_EventFilter_IsBase(bool value) const { qkeysequenceedit_eventfilter_isbase = value; }
    inline void setQKeySequenceEdit_ChildEvent_IsBase(bool value) const { qkeysequenceedit_childevent_isbase = value; }
    inline void setQKeySequenceEdit_CustomEvent_IsBase(bool value) const { qkeysequenceedit_customevent_isbase = value; }
    inline void setQKeySequenceEdit_ConnectNotify_IsBase(bool value) const { qkeysequenceedit_connectnotify_isbase = value; }
    inline void setQKeySequenceEdit_DisconnectNotify_IsBase(bool value) const { qkeysequenceedit_disconnectnotify_isbase = value; }
    inline void setQKeySequenceEdit_UpdateMicroFocus_IsBase(bool value) const { qkeysequenceedit_updatemicrofocus_isbase = value; }
    inline void setQKeySequenceEdit_Create_IsBase(bool value) const { qkeysequenceedit_create_isbase = value; }
    inline void setQKeySequenceEdit_Destroy_IsBase(bool value) const { qkeysequenceedit_destroy_isbase = value; }
    inline void setQKeySequenceEdit_FocusNextChild_IsBase(bool value) const { qkeysequenceedit_focusnextchild_isbase = value; }
    inline void setQKeySequenceEdit_FocusPreviousChild_IsBase(bool value) const { qkeysequenceedit_focuspreviouschild_isbase = value; }
    inline void setQKeySequenceEdit_Sender_IsBase(bool value) const { qkeysequenceedit_sender_isbase = value; }
    inline void setQKeySequenceEdit_SenderSignalIndex_IsBase(bool value) const { qkeysequenceedit_sendersignalindex_isbase = value; }
    inline void setQKeySequenceEdit_Receivers_IsBase(bool value) const { qkeysequenceedit_receivers_isbase = value; }
    inline void setQKeySequenceEdit_IsSignalConnected_IsBase(bool value) const { qkeysequenceedit_issignalconnected_isbase = value; }
    inline void setQKeySequenceEdit_GetDecodedMetricF_IsBase(bool value) const { qkeysequenceedit_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qkeysequenceedit_metaobject_isbase) {
            qkeysequenceedit_metaobject_isbase = false;
            return QKeySequenceEdit::metaObject();
        }
        auto metaobject_cb = qkeysequenceedit_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QKeySequenceEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qkeysequenceedit_metacast_isbase) {
            qkeysequenceedit_metacast_isbase = false;
            return QKeySequenceEdit::qt_metacast(param1);
        }
        auto metacast_cb = qkeysequenceedit_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QKeySequenceEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qkeysequenceedit_metacall_isbase) {
            qkeysequenceedit_metacall_isbase = false;
            return QKeySequenceEdit::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qkeysequenceedit_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QKeySequenceEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qkeysequenceedit_event_isbase) {
            qkeysequenceedit_event_isbase = false;
            return QKeySequenceEdit::event(param1);
        }
        auto event_cb = qkeysequenceedit_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QKeySequenceEdit::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qkeysequenceedit_keypressevent_isbase) {
            qkeysequenceedit_keypressevent_isbase = false;
            QKeySequenceEdit::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = qkeysequenceedit_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (qkeysequenceedit_keyreleaseevent_isbase) {
            qkeysequenceedit_keyreleaseevent_isbase = false;
            QKeySequenceEdit::keyReleaseEvent(param1);
            return;
        }
        auto keyreleaseevent_cb = qkeysequenceedit_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = param1;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::keyReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qkeysequenceedit_timerevent_isbase) {
            qkeysequenceedit_timerevent_isbase = false;
            QKeySequenceEdit::timerEvent(param1);
            return;
        }
        auto timerevent_cb = qkeysequenceedit_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = param1;

            timerevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qkeysequenceedit_focusoutevent_isbase) {
            qkeysequenceedit_focusoutevent_isbase = false;
            QKeySequenceEdit::focusOutEvent(param1);
            return;
        }
        auto focusoutevent_cb = qkeysequenceedit_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = param1;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::focusOutEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qkeysequenceedit_devtype_isbase) {
            qkeysequenceedit_devtype_isbase = false;
            return QKeySequenceEdit::devType();
        }
        auto devtype_cb = qkeysequenceedit_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QKeySequenceEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qkeysequenceedit_setvisible_isbase) {
            qkeysequenceedit_setvisible_isbase = false;
            QKeySequenceEdit::setVisible(visible);
            return;
        }
        auto setvisible_cb = qkeysequenceedit_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qkeysequenceedit_sizehint_isbase) {
            qkeysequenceedit_sizehint_isbase = false;
            return QKeySequenceEdit::sizeHint();
        }
        auto sizehint_cb = qkeysequenceedit_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QKeySequenceEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qkeysequenceedit_minimumsizehint_isbase) {
            qkeysequenceedit_minimumsizehint_isbase = false;
            return QKeySequenceEdit::minimumSizeHint();
        }
        auto minimumsizehint_cb = qkeysequenceedit_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QKeySequenceEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qkeysequenceedit_heightforwidth_isbase) {
            qkeysequenceedit_heightforwidth_isbase = false;
            return QKeySequenceEdit::heightForWidth(param1);
        }
        auto heightforwidth_cb = qkeysequenceedit_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QKeySequenceEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qkeysequenceedit_hasheightforwidth_isbase) {
            qkeysequenceedit_hasheightforwidth_isbase = false;
            return QKeySequenceEdit::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qkeysequenceedit_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QKeySequenceEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qkeysequenceedit_paintengine_isbase) {
            qkeysequenceedit_paintengine_isbase = false;
            return QKeySequenceEdit::paintEngine();
        }
        auto paintengine_cb = qkeysequenceedit_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QKeySequenceEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qkeysequenceedit_mousepressevent_isbase) {
            qkeysequenceedit_mousepressevent_isbase = false;
            QKeySequenceEdit::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qkeysequenceedit_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qkeysequenceedit_mousereleaseevent_isbase) {
            qkeysequenceedit_mousereleaseevent_isbase = false;
            QKeySequenceEdit::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qkeysequenceedit_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qkeysequenceedit_mousedoubleclickevent_isbase) {
            qkeysequenceedit_mousedoubleclickevent_isbase = false;
            QKeySequenceEdit::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qkeysequenceedit_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qkeysequenceedit_mousemoveevent_isbase) {
            qkeysequenceedit_mousemoveevent_isbase = false;
            QKeySequenceEdit::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qkeysequenceedit_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qkeysequenceedit_wheelevent_isbase) {
            qkeysequenceedit_wheelevent_isbase = false;
            QKeySequenceEdit::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qkeysequenceedit_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qkeysequenceedit_focusinevent_isbase) {
            qkeysequenceedit_focusinevent_isbase = false;
            QKeySequenceEdit::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qkeysequenceedit_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qkeysequenceedit_enterevent_isbase) {
            qkeysequenceedit_enterevent_isbase = false;
            QKeySequenceEdit::enterEvent(event);
            return;
        }
        auto enterevent_cb = qkeysequenceedit_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qkeysequenceedit_leaveevent_isbase) {
            qkeysequenceedit_leaveevent_isbase = false;
            QKeySequenceEdit::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qkeysequenceedit_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qkeysequenceedit_paintevent_isbase) {
            qkeysequenceedit_paintevent_isbase = false;
            QKeySequenceEdit::paintEvent(event);
            return;
        }
        auto paintevent_cb = qkeysequenceedit_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qkeysequenceedit_moveevent_isbase) {
            qkeysequenceedit_moveevent_isbase = false;
            QKeySequenceEdit::moveEvent(event);
            return;
        }
        auto moveevent_cb = qkeysequenceedit_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qkeysequenceedit_resizeevent_isbase) {
            qkeysequenceedit_resizeevent_isbase = false;
            QKeySequenceEdit::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = qkeysequenceedit_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qkeysequenceedit_closeevent_isbase) {
            qkeysequenceedit_closeevent_isbase = false;
            QKeySequenceEdit::closeEvent(event);
            return;
        }
        auto closeevent_cb = qkeysequenceedit_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qkeysequenceedit_contextmenuevent_isbase) {
            qkeysequenceedit_contextmenuevent_isbase = false;
            QKeySequenceEdit::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qkeysequenceedit_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qkeysequenceedit_tabletevent_isbase) {
            qkeysequenceedit_tabletevent_isbase = false;
            QKeySequenceEdit::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qkeysequenceedit_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qkeysequenceedit_actionevent_isbase) {
            qkeysequenceedit_actionevent_isbase = false;
            QKeySequenceEdit::actionEvent(event);
            return;
        }
        auto actionevent_cb = qkeysequenceedit_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qkeysequenceedit_dragenterevent_isbase) {
            qkeysequenceedit_dragenterevent_isbase = false;
            QKeySequenceEdit::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qkeysequenceedit_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qkeysequenceedit_dragmoveevent_isbase) {
            qkeysequenceedit_dragmoveevent_isbase = false;
            QKeySequenceEdit::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qkeysequenceedit_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qkeysequenceedit_dragleaveevent_isbase) {
            qkeysequenceedit_dragleaveevent_isbase = false;
            QKeySequenceEdit::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qkeysequenceedit_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qkeysequenceedit_dropevent_isbase) {
            qkeysequenceedit_dropevent_isbase = false;
            QKeySequenceEdit::dropEvent(event);
            return;
        }
        auto dropevent_cb = qkeysequenceedit_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qkeysequenceedit_showevent_isbase) {
            qkeysequenceedit_showevent_isbase = false;
            QKeySequenceEdit::showEvent(event);
            return;
        }
        auto showevent_cb = qkeysequenceedit_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qkeysequenceedit_hideevent_isbase) {
            qkeysequenceedit_hideevent_isbase = false;
            QKeySequenceEdit::hideEvent(event);
            return;
        }
        auto hideevent_cb = qkeysequenceedit_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qkeysequenceedit_nativeevent_isbase) {
            qkeysequenceedit_nativeevent_isbase = false;
            return QKeySequenceEdit::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qkeysequenceedit_nativeevent_callback;
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
        return QKeySequenceEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qkeysequenceedit_changeevent_isbase) {
            qkeysequenceedit_changeevent_isbase = false;
            QKeySequenceEdit::changeEvent(param1);
            return;
        }
        auto changeevent_cb = qkeysequenceedit_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qkeysequenceedit_metric_isbase) {
            qkeysequenceedit_metric_isbase = false;
            return QKeySequenceEdit::metric(param1);
        }
        auto metric_cb = qkeysequenceedit_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QKeySequenceEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qkeysequenceedit_initpainter_isbase) {
            qkeysequenceedit_initpainter_isbase = false;
            QKeySequenceEdit::initPainter(painter);
            return;
        }
        auto initpainter_cb = qkeysequenceedit_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qkeysequenceedit_redirected_isbase) {
            qkeysequenceedit_redirected_isbase = false;
            return QKeySequenceEdit::redirected(offset);
        }
        auto redirected_cb = qkeysequenceedit_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QKeySequenceEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qkeysequenceedit_sharedpainter_isbase) {
            qkeysequenceedit_sharedpainter_isbase = false;
            return QKeySequenceEdit::sharedPainter();
        }
        auto sharedpainter_cb = qkeysequenceedit_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QKeySequenceEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qkeysequenceedit_inputmethodevent_isbase) {
            qkeysequenceedit_inputmethodevent_isbase = false;
            QKeySequenceEdit::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qkeysequenceedit_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qkeysequenceedit_inputmethodquery_isbase) {
            qkeysequenceedit_inputmethodquery_isbase = false;
            return QKeySequenceEdit::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qkeysequenceedit_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QKeySequenceEdit::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qkeysequenceedit_focusnextprevchild_isbase) {
            qkeysequenceedit_focusnextprevchild_isbase = false;
            return QKeySequenceEdit::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qkeysequenceedit_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QKeySequenceEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qkeysequenceedit_eventfilter_isbase) {
            qkeysequenceedit_eventfilter_isbase = false;
            return QKeySequenceEdit::eventFilter(watched, event);
        }
        auto eventfilter_cb = qkeysequenceedit_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QKeySequenceEdit::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qkeysequenceedit_childevent_isbase) {
            qkeysequenceedit_childevent_isbase = false;
            QKeySequenceEdit::childEvent(event);
            return;
        }
        auto childevent_cb = qkeysequenceedit_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qkeysequenceedit_customevent_isbase) {
            qkeysequenceedit_customevent_isbase = false;
            QKeySequenceEdit::customEvent(event);
            return;
        }
        auto customevent_cb = qkeysequenceedit_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qkeysequenceedit_connectnotify_isbase) {
            qkeysequenceedit_connectnotify_isbase = false;
            QKeySequenceEdit::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qkeysequenceedit_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qkeysequenceedit_disconnectnotify_isbase) {
            qkeysequenceedit_disconnectnotify_isbase = false;
            QKeySequenceEdit::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qkeysequenceedit_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QKeySequenceEdit::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qkeysequenceedit_updatemicrofocus_isbase) {
            qkeysequenceedit_updatemicrofocus_isbase = false;
            QKeySequenceEdit::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qkeysequenceedit_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QKeySequenceEdit::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qkeysequenceedit_create_isbase) {
            qkeysequenceedit_create_isbase = false;
            QKeySequenceEdit::create();
            return;
        }
        auto create_cb = qkeysequenceedit_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QKeySequenceEdit::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qkeysequenceedit_destroy_isbase) {
            qkeysequenceedit_destroy_isbase = false;
            QKeySequenceEdit::destroy();
            return;
        }
        auto destroy_cb = qkeysequenceedit_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QKeySequenceEdit::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qkeysequenceedit_focusnextchild_isbase) {
            qkeysequenceedit_focusnextchild_isbase = false;
            return QKeySequenceEdit::focusNextChild();
        }
        auto focusnextchild_cb = qkeysequenceedit_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QKeySequenceEdit::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qkeysequenceedit_focuspreviouschild_isbase) {
            qkeysequenceedit_focuspreviouschild_isbase = false;
            return QKeySequenceEdit::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qkeysequenceedit_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QKeySequenceEdit::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qkeysequenceedit_sender_isbase) {
            qkeysequenceedit_sender_isbase = false;
            return QKeySequenceEdit::sender();
        }
        auto sender_cb = qkeysequenceedit_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QKeySequenceEdit::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qkeysequenceedit_sendersignalindex_isbase) {
            qkeysequenceedit_sendersignalindex_isbase = false;
            return QKeySequenceEdit::senderSignalIndex();
        }
        auto sendersignalindex_cb = qkeysequenceedit_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QKeySequenceEdit::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qkeysequenceedit_receivers_isbase) {
            qkeysequenceedit_receivers_isbase = false;
            return QKeySequenceEdit::receivers(signal);
        }
        auto receivers_cb = qkeysequenceedit_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QKeySequenceEdit::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qkeysequenceedit_issignalconnected_isbase) {
            qkeysequenceedit_issignalconnected_isbase = false;
            return QKeySequenceEdit::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qkeysequenceedit_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QKeySequenceEdit::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qkeysequenceedit_getdecodedmetricf_isbase) {
            qkeysequenceedit_getdecodedmetricf_isbase = false;
            return QKeySequenceEdit::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qkeysequenceedit_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QKeySequenceEdit::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool QKeySequenceEdit_Event(QKeySequenceEdit* self, QEvent* param1);
    friend bool QKeySequenceEdit_SuperEvent(QKeySequenceEdit* self, QEvent* param1);
    friend void QKeySequenceEdit_KeyPressEvent(QKeySequenceEdit* self, QKeyEvent* param1);
    friend void QKeySequenceEdit_SuperKeyPressEvent(QKeySequenceEdit* self, QKeyEvent* param1);
    friend void QKeySequenceEdit_KeyReleaseEvent(QKeySequenceEdit* self, QKeyEvent* param1);
    friend void QKeySequenceEdit_SuperKeyReleaseEvent(QKeySequenceEdit* self, QKeyEvent* param1);
    friend void QKeySequenceEdit_TimerEvent(QKeySequenceEdit* self, QTimerEvent* param1);
    friend void QKeySequenceEdit_SuperTimerEvent(QKeySequenceEdit* self, QTimerEvent* param1);
    friend void QKeySequenceEdit_FocusOutEvent(QKeySequenceEdit* self, QFocusEvent* param1);
    friend void QKeySequenceEdit_SuperFocusOutEvent(QKeySequenceEdit* self, QFocusEvent* param1);
    friend void QKeySequenceEdit_MousePressEvent(QKeySequenceEdit* self, QMouseEvent* event);
    friend void QKeySequenceEdit_SuperMousePressEvent(QKeySequenceEdit* self, QMouseEvent* event);
    friend void QKeySequenceEdit_MouseReleaseEvent(QKeySequenceEdit* self, QMouseEvent* event);
    friend void QKeySequenceEdit_SuperMouseReleaseEvent(QKeySequenceEdit* self, QMouseEvent* event);
    friend void QKeySequenceEdit_MouseDoubleClickEvent(QKeySequenceEdit* self, QMouseEvent* event);
    friend void QKeySequenceEdit_SuperMouseDoubleClickEvent(QKeySequenceEdit* self, QMouseEvent* event);
    friend void QKeySequenceEdit_MouseMoveEvent(QKeySequenceEdit* self, QMouseEvent* event);
    friend void QKeySequenceEdit_SuperMouseMoveEvent(QKeySequenceEdit* self, QMouseEvent* event);
    friend void QKeySequenceEdit_WheelEvent(QKeySequenceEdit* self, QWheelEvent* event);
    friend void QKeySequenceEdit_SuperWheelEvent(QKeySequenceEdit* self, QWheelEvent* event);
    friend void QKeySequenceEdit_FocusInEvent(QKeySequenceEdit* self, QFocusEvent* event);
    friend void QKeySequenceEdit_SuperFocusInEvent(QKeySequenceEdit* self, QFocusEvent* event);
    friend void QKeySequenceEdit_EnterEvent(QKeySequenceEdit* self, QEnterEvent* event);
    friend void QKeySequenceEdit_SuperEnterEvent(QKeySequenceEdit* self, QEnterEvent* event);
    friend void QKeySequenceEdit_LeaveEvent(QKeySequenceEdit* self, QEvent* event);
    friend void QKeySequenceEdit_SuperLeaveEvent(QKeySequenceEdit* self, QEvent* event);
    friend void QKeySequenceEdit_PaintEvent(QKeySequenceEdit* self, QPaintEvent* event);
    friend void QKeySequenceEdit_SuperPaintEvent(QKeySequenceEdit* self, QPaintEvent* event);
    friend void QKeySequenceEdit_MoveEvent(QKeySequenceEdit* self, QMoveEvent* event);
    friend void QKeySequenceEdit_SuperMoveEvent(QKeySequenceEdit* self, QMoveEvent* event);
    friend void QKeySequenceEdit_ResizeEvent(QKeySequenceEdit* self, QResizeEvent* event);
    friend void QKeySequenceEdit_SuperResizeEvent(QKeySequenceEdit* self, QResizeEvent* event);
    friend void QKeySequenceEdit_CloseEvent(QKeySequenceEdit* self, QCloseEvent* event);
    friend void QKeySequenceEdit_SuperCloseEvent(QKeySequenceEdit* self, QCloseEvent* event);
    friend void QKeySequenceEdit_ContextMenuEvent(QKeySequenceEdit* self, QContextMenuEvent* event);
    friend void QKeySequenceEdit_SuperContextMenuEvent(QKeySequenceEdit* self, QContextMenuEvent* event);
    friend void QKeySequenceEdit_TabletEvent(QKeySequenceEdit* self, QTabletEvent* event);
    friend void QKeySequenceEdit_SuperTabletEvent(QKeySequenceEdit* self, QTabletEvent* event);
    friend void QKeySequenceEdit_ActionEvent(QKeySequenceEdit* self, QActionEvent* event);
    friend void QKeySequenceEdit_SuperActionEvent(QKeySequenceEdit* self, QActionEvent* event);
    friend void QKeySequenceEdit_DragEnterEvent(QKeySequenceEdit* self, QDragEnterEvent* event);
    friend void QKeySequenceEdit_SuperDragEnterEvent(QKeySequenceEdit* self, QDragEnterEvent* event);
    friend void QKeySequenceEdit_DragMoveEvent(QKeySequenceEdit* self, QDragMoveEvent* event);
    friend void QKeySequenceEdit_SuperDragMoveEvent(QKeySequenceEdit* self, QDragMoveEvent* event);
    friend void QKeySequenceEdit_DragLeaveEvent(QKeySequenceEdit* self, QDragLeaveEvent* event);
    friend void QKeySequenceEdit_SuperDragLeaveEvent(QKeySequenceEdit* self, QDragLeaveEvent* event);
    friend void QKeySequenceEdit_DropEvent(QKeySequenceEdit* self, QDropEvent* event);
    friend void QKeySequenceEdit_SuperDropEvent(QKeySequenceEdit* self, QDropEvent* event);
    friend void QKeySequenceEdit_ShowEvent(QKeySequenceEdit* self, QShowEvent* event);
    friend void QKeySequenceEdit_SuperShowEvent(QKeySequenceEdit* self, QShowEvent* event);
    friend void QKeySequenceEdit_HideEvent(QKeySequenceEdit* self, QHideEvent* event);
    friend void QKeySequenceEdit_SuperHideEvent(QKeySequenceEdit* self, QHideEvent* event);
    friend bool QKeySequenceEdit_NativeEvent(QKeySequenceEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QKeySequenceEdit_SuperNativeEvent(QKeySequenceEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QKeySequenceEdit_ChangeEvent(QKeySequenceEdit* self, QEvent* param1);
    friend void QKeySequenceEdit_SuperChangeEvent(QKeySequenceEdit* self, QEvent* param1);
    friend int QKeySequenceEdit_Metric(const QKeySequenceEdit* self, int param1);
    friend int QKeySequenceEdit_SuperMetric(const QKeySequenceEdit* self, int param1);
    friend void QKeySequenceEdit_InitPainter(const QKeySequenceEdit* self, QPainter* painter);
    friend void QKeySequenceEdit_SuperInitPainter(const QKeySequenceEdit* self, QPainter* painter);
    friend QPaintDevice* QKeySequenceEdit_Redirected(const QKeySequenceEdit* self, QPoint* offset);
    friend QPaintDevice* QKeySequenceEdit_SuperRedirected(const QKeySequenceEdit* self, QPoint* offset);
    friend QPainter* QKeySequenceEdit_SharedPainter(const QKeySequenceEdit* self);
    friend QPainter* QKeySequenceEdit_SuperSharedPainter(const QKeySequenceEdit* self);
    friend void QKeySequenceEdit_InputMethodEvent(QKeySequenceEdit* self, QInputMethodEvent* param1);
    friend void QKeySequenceEdit_SuperInputMethodEvent(QKeySequenceEdit* self, QInputMethodEvent* param1);
    friend bool QKeySequenceEdit_FocusNextPrevChild(QKeySequenceEdit* self, bool next);
    friend bool QKeySequenceEdit_SuperFocusNextPrevChild(QKeySequenceEdit* self, bool next);
    friend void QKeySequenceEdit_ChildEvent(QKeySequenceEdit* self, QChildEvent* event);
    friend void QKeySequenceEdit_SuperChildEvent(QKeySequenceEdit* self, QChildEvent* event);
    friend void QKeySequenceEdit_CustomEvent(QKeySequenceEdit* self, QEvent* event);
    friend void QKeySequenceEdit_SuperCustomEvent(QKeySequenceEdit* self, QEvent* event);
    friend void QKeySequenceEdit_ConnectNotify(QKeySequenceEdit* self, const QMetaMethod* signal);
    friend void QKeySequenceEdit_SuperConnectNotify(QKeySequenceEdit* self, const QMetaMethod* signal);
    friend void QKeySequenceEdit_DisconnectNotify(QKeySequenceEdit* self, const QMetaMethod* signal);
    friend void QKeySequenceEdit_SuperDisconnectNotify(QKeySequenceEdit* self, const QMetaMethod* signal);
    friend void QKeySequenceEdit_UpdateMicroFocus(QKeySequenceEdit* self);
    friend void QKeySequenceEdit_SuperUpdateMicroFocus(QKeySequenceEdit* self);
    friend void QKeySequenceEdit_Create(QKeySequenceEdit* self);
    friend void QKeySequenceEdit_SuperCreate(QKeySequenceEdit* self);
    friend void QKeySequenceEdit_Destroy(QKeySequenceEdit* self);
    friend void QKeySequenceEdit_SuperDestroy(QKeySequenceEdit* self);
    friend bool QKeySequenceEdit_FocusNextChild(QKeySequenceEdit* self);
    friend bool QKeySequenceEdit_SuperFocusNextChild(QKeySequenceEdit* self);
    friend bool QKeySequenceEdit_FocusPreviousChild(QKeySequenceEdit* self);
    friend bool QKeySequenceEdit_SuperFocusPreviousChild(QKeySequenceEdit* self);
    friend QObject* QKeySequenceEdit_Sender(const QKeySequenceEdit* self);
    friend QObject* QKeySequenceEdit_SuperSender(const QKeySequenceEdit* self);
    friend int QKeySequenceEdit_SenderSignalIndex(const QKeySequenceEdit* self);
    friend int QKeySequenceEdit_SuperSenderSignalIndex(const QKeySequenceEdit* self);
    friend int QKeySequenceEdit_Receivers(const QKeySequenceEdit* self, const char* signal);
    friend int QKeySequenceEdit_SuperReceivers(const QKeySequenceEdit* self, const char* signal);
    friend bool QKeySequenceEdit_IsSignalConnected(const QKeySequenceEdit* self, const QMetaMethod* signal);
    friend bool QKeySequenceEdit_SuperIsSignalConnected(const QKeySequenceEdit* self, const QMetaMethod* signal);
    friend double QKeySequenceEdit_GetDecodedMetricF(const QKeySequenceEdit* self, int metricA, int metricB);
    friend double QKeySequenceEdit_SuperGetDecodedMetricF(const QKeySequenceEdit* self, int metricA, int metricB);
};

#endif
