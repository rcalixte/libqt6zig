#pragma once
#ifndef SRCC_LIBVIRTUALQKEYSEQUENCEEDIT_H
#define SRCC_LIBVIRTUALQKEYSEQUENCEEDIT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QKeySequenceEdit so that we can call protected methods
class VirtualQKeySequenceEdit final : public QKeySequenceEdit {

  public:
    // Virtual class boolean flag
    bool isVirtualQKeySequenceEdit = true;

    // Virtual class public types (including callbacks)
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

  protected:
    // Instance callback storage
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

    // Instance base flags
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

  public:
    VirtualQKeySequenceEdit(QWidget* parent) : QKeySequenceEdit(parent){};
    VirtualQKeySequenceEdit() : QKeySequenceEdit(){};
    VirtualQKeySequenceEdit(const QKeySequence& keySequence) : QKeySequenceEdit(keySequence){};
    VirtualQKeySequenceEdit(const QKeySequence& keySequence, QWidget* parent) : QKeySequenceEdit(keySequence, parent){};

    ~VirtualQKeySequenceEdit() {
        qkeysequenceedit_metacall_callback = nullptr;
        qkeysequenceedit_event_callback = nullptr;
        qkeysequenceedit_keypressevent_callback = nullptr;
        qkeysequenceedit_keyreleaseevent_callback = nullptr;
        qkeysequenceedit_timerevent_callback = nullptr;
        qkeysequenceedit_focusoutevent_callback = nullptr;
        qkeysequenceedit_devtype_callback = nullptr;
        qkeysequenceedit_setvisible_callback = nullptr;
        qkeysequenceedit_sizehint_callback = nullptr;
        qkeysequenceedit_minimumsizehint_callback = nullptr;
        qkeysequenceedit_heightforwidth_callback = nullptr;
        qkeysequenceedit_hasheightforwidth_callback = nullptr;
        qkeysequenceedit_paintengine_callback = nullptr;
        qkeysequenceedit_mousepressevent_callback = nullptr;
        qkeysequenceedit_mousereleaseevent_callback = nullptr;
        qkeysequenceedit_mousedoubleclickevent_callback = nullptr;
        qkeysequenceedit_mousemoveevent_callback = nullptr;
        qkeysequenceedit_wheelevent_callback = nullptr;
        qkeysequenceedit_focusinevent_callback = nullptr;
        qkeysequenceedit_enterevent_callback = nullptr;
        qkeysequenceedit_leaveevent_callback = nullptr;
        qkeysequenceedit_paintevent_callback = nullptr;
        qkeysequenceedit_moveevent_callback = nullptr;
        qkeysequenceedit_resizeevent_callback = nullptr;
        qkeysequenceedit_closeevent_callback = nullptr;
        qkeysequenceedit_contextmenuevent_callback = nullptr;
        qkeysequenceedit_tabletevent_callback = nullptr;
        qkeysequenceedit_actionevent_callback = nullptr;
        qkeysequenceedit_dragenterevent_callback = nullptr;
        qkeysequenceedit_dragmoveevent_callback = nullptr;
        qkeysequenceedit_dragleaveevent_callback = nullptr;
        qkeysequenceedit_dropevent_callback = nullptr;
        qkeysequenceedit_showevent_callback = nullptr;
        qkeysequenceedit_hideevent_callback = nullptr;
        qkeysequenceedit_nativeevent_callback = nullptr;
        qkeysequenceedit_changeevent_callback = nullptr;
        qkeysequenceedit_metric_callback = nullptr;
        qkeysequenceedit_initpainter_callback = nullptr;
        qkeysequenceedit_redirected_callback = nullptr;
        qkeysequenceedit_sharedpainter_callback = nullptr;
        qkeysequenceedit_inputmethodevent_callback = nullptr;
        qkeysequenceedit_inputmethodquery_callback = nullptr;
        qkeysequenceedit_focusnextprevchild_callback = nullptr;
        qkeysequenceedit_eventfilter_callback = nullptr;
        qkeysequenceedit_childevent_callback = nullptr;
        qkeysequenceedit_customevent_callback = nullptr;
        qkeysequenceedit_connectnotify_callback = nullptr;
        qkeysequenceedit_disconnectnotify_callback = nullptr;
        qkeysequenceedit_updatemicrofocus_callback = nullptr;
        qkeysequenceedit_create_callback = nullptr;
        qkeysequenceedit_destroy_callback = nullptr;
        qkeysequenceedit_focusnextchild_callback = nullptr;
        qkeysequenceedit_focuspreviouschild_callback = nullptr;
        qkeysequenceedit_sender_callback = nullptr;
        qkeysequenceedit_sendersignalindex_callback = nullptr;
        qkeysequenceedit_receivers_callback = nullptr;
        qkeysequenceedit_issignalconnected_callback = nullptr;
    }

    // Callback setters
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

    // Base flag setters
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

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qkeysequenceedit_metacall_isbase) {
            qkeysequenceedit_metacall_isbase = false;
            return QKeySequenceEdit::qt_metacall(param1, param2, param3);
        } else if (qkeysequenceedit_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qkeysequenceedit_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QKeySequenceEdit::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qkeysequenceedit_event_isbase) {
            qkeysequenceedit_event_isbase = false;
            return QKeySequenceEdit::event(param1);
        } else if (qkeysequenceedit_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = qkeysequenceedit_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QKeySequenceEdit::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qkeysequenceedit_keypressevent_isbase) {
            qkeysequenceedit_keypressevent_isbase = false;
            QKeySequenceEdit::keyPressEvent(param1);
        } else if (qkeysequenceedit_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            qkeysequenceedit_keypressevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (qkeysequenceedit_keyreleaseevent_isbase) {
            qkeysequenceedit_keyreleaseevent_isbase = false;
            QKeySequenceEdit::keyReleaseEvent(param1);
        } else if (qkeysequenceedit_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            qkeysequenceedit_keyreleaseevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::keyReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qkeysequenceedit_timerevent_isbase) {
            qkeysequenceedit_timerevent_isbase = false;
            QKeySequenceEdit::timerEvent(param1);
        } else if (qkeysequenceedit_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = param1;

            qkeysequenceedit_timerevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::timerEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qkeysequenceedit_focusoutevent_isbase) {
            qkeysequenceedit_focusoutevent_isbase = false;
            QKeySequenceEdit::focusOutEvent(param1);
        } else if (qkeysequenceedit_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            qkeysequenceedit_focusoutevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::focusOutEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qkeysequenceedit_devtype_isbase) {
            qkeysequenceedit_devtype_isbase = false;
            return QKeySequenceEdit::devType();
        } else if (qkeysequenceedit_devtype_callback != nullptr) {
            int callback_ret = qkeysequenceedit_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QKeySequenceEdit::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qkeysequenceedit_setvisible_isbase) {
            qkeysequenceedit_setvisible_isbase = false;
            QKeySequenceEdit::setVisible(visible);
        } else if (qkeysequenceedit_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qkeysequenceedit_setvisible_callback(this, cbval1);
        } else {
            QKeySequenceEdit::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qkeysequenceedit_sizehint_isbase) {
            qkeysequenceedit_sizehint_isbase = false;
            return QKeySequenceEdit::sizeHint();
        } else if (qkeysequenceedit_sizehint_callback != nullptr) {
            QSize* callback_ret = qkeysequenceedit_sizehint_callback();
            return *callback_ret;
        } else {
            return QKeySequenceEdit::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qkeysequenceedit_minimumsizehint_isbase) {
            qkeysequenceedit_minimumsizehint_isbase = false;
            return QKeySequenceEdit::minimumSizeHint();
        } else if (qkeysequenceedit_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qkeysequenceedit_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QKeySequenceEdit::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qkeysequenceedit_heightforwidth_isbase) {
            qkeysequenceedit_heightforwidth_isbase = false;
            return QKeySequenceEdit::heightForWidth(param1);
        } else if (qkeysequenceedit_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qkeysequenceedit_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QKeySequenceEdit::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qkeysequenceedit_hasheightforwidth_isbase) {
            qkeysequenceedit_hasheightforwidth_isbase = false;
            return QKeySequenceEdit::hasHeightForWidth();
        } else if (qkeysequenceedit_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qkeysequenceedit_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QKeySequenceEdit::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qkeysequenceedit_paintengine_isbase) {
            qkeysequenceedit_paintengine_isbase = false;
            return QKeySequenceEdit::paintEngine();
        } else if (qkeysequenceedit_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qkeysequenceedit_paintengine_callback();
            return callback_ret;
        } else {
            return QKeySequenceEdit::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qkeysequenceedit_mousepressevent_isbase) {
            qkeysequenceedit_mousepressevent_isbase = false;
            QKeySequenceEdit::mousePressEvent(event);
        } else if (qkeysequenceedit_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qkeysequenceedit_mousepressevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qkeysequenceedit_mousereleaseevent_isbase) {
            qkeysequenceedit_mousereleaseevent_isbase = false;
            QKeySequenceEdit::mouseReleaseEvent(event);
        } else if (qkeysequenceedit_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qkeysequenceedit_mousereleaseevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qkeysequenceedit_mousedoubleclickevent_isbase) {
            qkeysequenceedit_mousedoubleclickevent_isbase = false;
            QKeySequenceEdit::mouseDoubleClickEvent(event);
        } else if (qkeysequenceedit_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qkeysequenceedit_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qkeysequenceedit_mousemoveevent_isbase) {
            qkeysequenceedit_mousemoveevent_isbase = false;
            QKeySequenceEdit::mouseMoveEvent(event);
        } else if (qkeysequenceedit_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qkeysequenceedit_mousemoveevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qkeysequenceedit_wheelevent_isbase) {
            qkeysequenceedit_wheelevent_isbase = false;
            QKeySequenceEdit::wheelEvent(event);
        } else if (qkeysequenceedit_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qkeysequenceedit_wheelevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qkeysequenceedit_focusinevent_isbase) {
            qkeysequenceedit_focusinevent_isbase = false;
            QKeySequenceEdit::focusInEvent(event);
        } else if (qkeysequenceedit_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qkeysequenceedit_focusinevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qkeysequenceedit_enterevent_isbase) {
            qkeysequenceedit_enterevent_isbase = false;
            QKeySequenceEdit::enterEvent(event);
        } else if (qkeysequenceedit_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qkeysequenceedit_enterevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qkeysequenceedit_leaveevent_isbase) {
            qkeysequenceedit_leaveevent_isbase = false;
            QKeySequenceEdit::leaveEvent(event);
        } else if (qkeysequenceedit_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qkeysequenceedit_leaveevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qkeysequenceedit_paintevent_isbase) {
            qkeysequenceedit_paintevent_isbase = false;
            QKeySequenceEdit::paintEvent(event);
        } else if (qkeysequenceedit_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qkeysequenceedit_paintevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qkeysequenceedit_moveevent_isbase) {
            qkeysequenceedit_moveevent_isbase = false;
            QKeySequenceEdit::moveEvent(event);
        } else if (qkeysequenceedit_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qkeysequenceedit_moveevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qkeysequenceedit_resizeevent_isbase) {
            qkeysequenceedit_resizeevent_isbase = false;
            QKeySequenceEdit::resizeEvent(event);
        } else if (qkeysequenceedit_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qkeysequenceedit_resizeevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qkeysequenceedit_closeevent_isbase) {
            qkeysequenceedit_closeevent_isbase = false;
            QKeySequenceEdit::closeEvent(event);
        } else if (qkeysequenceedit_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qkeysequenceedit_closeevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qkeysequenceedit_contextmenuevent_isbase) {
            qkeysequenceedit_contextmenuevent_isbase = false;
            QKeySequenceEdit::contextMenuEvent(event);
        } else if (qkeysequenceedit_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qkeysequenceedit_contextmenuevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qkeysequenceedit_tabletevent_isbase) {
            qkeysequenceedit_tabletevent_isbase = false;
            QKeySequenceEdit::tabletEvent(event);
        } else if (qkeysequenceedit_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qkeysequenceedit_tabletevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qkeysequenceedit_actionevent_isbase) {
            qkeysequenceedit_actionevent_isbase = false;
            QKeySequenceEdit::actionEvent(event);
        } else if (qkeysequenceedit_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qkeysequenceedit_actionevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qkeysequenceedit_dragenterevent_isbase) {
            qkeysequenceedit_dragenterevent_isbase = false;
            QKeySequenceEdit::dragEnterEvent(event);
        } else if (qkeysequenceedit_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qkeysequenceedit_dragenterevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qkeysequenceedit_dragmoveevent_isbase) {
            qkeysequenceedit_dragmoveevent_isbase = false;
            QKeySequenceEdit::dragMoveEvent(event);
        } else if (qkeysequenceedit_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qkeysequenceedit_dragmoveevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qkeysequenceedit_dragleaveevent_isbase) {
            qkeysequenceedit_dragleaveevent_isbase = false;
            QKeySequenceEdit::dragLeaveEvent(event);
        } else if (qkeysequenceedit_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qkeysequenceedit_dragleaveevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qkeysequenceedit_dropevent_isbase) {
            qkeysequenceedit_dropevent_isbase = false;
            QKeySequenceEdit::dropEvent(event);
        } else if (qkeysequenceedit_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qkeysequenceedit_dropevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qkeysequenceedit_showevent_isbase) {
            qkeysequenceedit_showevent_isbase = false;
            QKeySequenceEdit::showEvent(event);
        } else if (qkeysequenceedit_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qkeysequenceedit_showevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qkeysequenceedit_hideevent_isbase) {
            qkeysequenceedit_hideevent_isbase = false;
            QKeySequenceEdit::hideEvent(event);
        } else if (qkeysequenceedit_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qkeysequenceedit_hideevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qkeysequenceedit_nativeevent_isbase) {
            qkeysequenceedit_nativeevent_isbase = false;
            return QKeySequenceEdit::nativeEvent(eventType, message, result);
        } else if (qkeysequenceedit_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<const char*>(malloc((eventType_str.len + 1) * sizeof(char)));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            ((char*)eventType_str.data)[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = qkeysequenceedit_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QKeySequenceEdit::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qkeysequenceedit_changeevent_isbase) {
            qkeysequenceedit_changeevent_isbase = false;
            QKeySequenceEdit::changeEvent(param1);
        } else if (qkeysequenceedit_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qkeysequenceedit_changeevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qkeysequenceedit_metric_isbase) {
            qkeysequenceedit_metric_isbase = false;
            return QKeySequenceEdit::metric(param1);
        } else if (qkeysequenceedit_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qkeysequenceedit_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QKeySequenceEdit::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qkeysequenceedit_initpainter_isbase) {
            qkeysequenceedit_initpainter_isbase = false;
            QKeySequenceEdit::initPainter(painter);
        } else if (qkeysequenceedit_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qkeysequenceedit_initpainter_callback(this, cbval1);
        } else {
            QKeySequenceEdit::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qkeysequenceedit_redirected_isbase) {
            qkeysequenceedit_redirected_isbase = false;
            return QKeySequenceEdit::redirected(offset);
        } else if (qkeysequenceedit_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qkeysequenceedit_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QKeySequenceEdit::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qkeysequenceedit_sharedpainter_isbase) {
            qkeysequenceedit_sharedpainter_isbase = false;
            return QKeySequenceEdit::sharedPainter();
        } else if (qkeysequenceedit_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qkeysequenceedit_sharedpainter_callback();
            return callback_ret;
        } else {
            return QKeySequenceEdit::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qkeysequenceedit_inputmethodevent_isbase) {
            qkeysequenceedit_inputmethodevent_isbase = false;
            QKeySequenceEdit::inputMethodEvent(param1);
        } else if (qkeysequenceedit_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qkeysequenceedit_inputmethodevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qkeysequenceedit_inputmethodquery_isbase) {
            qkeysequenceedit_inputmethodquery_isbase = false;
            return QKeySequenceEdit::inputMethodQuery(param1);
        } else if (qkeysequenceedit_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qkeysequenceedit_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QKeySequenceEdit::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qkeysequenceedit_focusnextprevchild_isbase) {
            qkeysequenceedit_focusnextprevchild_isbase = false;
            return QKeySequenceEdit::focusNextPrevChild(next);
        } else if (qkeysequenceedit_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qkeysequenceedit_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QKeySequenceEdit::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qkeysequenceedit_eventfilter_isbase) {
            qkeysequenceedit_eventfilter_isbase = false;
            return QKeySequenceEdit::eventFilter(watched, event);
        } else if (qkeysequenceedit_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qkeysequenceedit_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QKeySequenceEdit::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qkeysequenceedit_childevent_isbase) {
            qkeysequenceedit_childevent_isbase = false;
            QKeySequenceEdit::childEvent(event);
        } else if (qkeysequenceedit_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qkeysequenceedit_childevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qkeysequenceedit_customevent_isbase) {
            qkeysequenceedit_customevent_isbase = false;
            QKeySequenceEdit::customEvent(event);
        } else if (qkeysequenceedit_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qkeysequenceedit_customevent_callback(this, cbval1);
        } else {
            QKeySequenceEdit::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qkeysequenceedit_connectnotify_isbase) {
            qkeysequenceedit_connectnotify_isbase = false;
            QKeySequenceEdit::connectNotify(signal);
        } else if (qkeysequenceedit_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qkeysequenceedit_connectnotify_callback(this, cbval1);
        } else {
            QKeySequenceEdit::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qkeysequenceedit_disconnectnotify_isbase) {
            qkeysequenceedit_disconnectnotify_isbase = false;
            QKeySequenceEdit::disconnectNotify(signal);
        } else if (qkeysequenceedit_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qkeysequenceedit_disconnectnotify_callback(this, cbval1);
        } else {
            QKeySequenceEdit::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qkeysequenceedit_updatemicrofocus_isbase) {
            qkeysequenceedit_updatemicrofocus_isbase = false;
            QKeySequenceEdit::updateMicroFocus();
        } else if (qkeysequenceedit_updatemicrofocus_callback != nullptr) {
            qkeysequenceedit_updatemicrofocus_callback();
        } else {
            QKeySequenceEdit::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qkeysequenceedit_create_isbase) {
            qkeysequenceedit_create_isbase = false;
            QKeySequenceEdit::create();
        } else if (qkeysequenceedit_create_callback != nullptr) {
            qkeysequenceedit_create_callback();
        } else {
            QKeySequenceEdit::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qkeysequenceedit_destroy_isbase) {
            qkeysequenceedit_destroy_isbase = false;
            QKeySequenceEdit::destroy();
        } else if (qkeysequenceedit_destroy_callback != nullptr) {
            qkeysequenceedit_destroy_callback();
        } else {
            QKeySequenceEdit::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qkeysequenceedit_focusnextchild_isbase) {
            qkeysequenceedit_focusnextchild_isbase = false;
            return QKeySequenceEdit::focusNextChild();
        } else if (qkeysequenceedit_focusnextchild_callback != nullptr) {
            bool callback_ret = qkeysequenceedit_focusnextchild_callback();
            return callback_ret;
        } else {
            return QKeySequenceEdit::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qkeysequenceedit_focuspreviouschild_isbase) {
            qkeysequenceedit_focuspreviouschild_isbase = false;
            return QKeySequenceEdit::focusPreviousChild();
        } else if (qkeysequenceedit_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qkeysequenceedit_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QKeySequenceEdit::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qkeysequenceedit_sender_isbase) {
            qkeysequenceedit_sender_isbase = false;
            return QKeySequenceEdit::sender();
        } else if (qkeysequenceedit_sender_callback != nullptr) {
            QObject* callback_ret = qkeysequenceedit_sender_callback();
            return callback_ret;
        } else {
            return QKeySequenceEdit::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qkeysequenceedit_sendersignalindex_isbase) {
            qkeysequenceedit_sendersignalindex_isbase = false;
            return QKeySequenceEdit::senderSignalIndex();
        } else if (qkeysequenceedit_sendersignalindex_callback != nullptr) {
            int callback_ret = qkeysequenceedit_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QKeySequenceEdit::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qkeysequenceedit_receivers_isbase) {
            qkeysequenceedit_receivers_isbase = false;
            return QKeySequenceEdit::receivers(signal);
        } else if (qkeysequenceedit_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qkeysequenceedit_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QKeySequenceEdit::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qkeysequenceedit_issignalconnected_isbase) {
            qkeysequenceedit_issignalconnected_isbase = false;
            return QKeySequenceEdit::isSignalConnected(signal);
        } else if (qkeysequenceedit_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qkeysequenceedit_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QKeySequenceEdit::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QKeySequenceEdit_Event(QKeySequenceEdit* self, QEvent* param1);
    friend bool QKeySequenceEdit_QBaseEvent(QKeySequenceEdit* self, QEvent* param1);
    friend void QKeySequenceEdit_KeyPressEvent(QKeySequenceEdit* self, QKeyEvent* param1);
    friend void QKeySequenceEdit_QBaseKeyPressEvent(QKeySequenceEdit* self, QKeyEvent* param1);
    friend void QKeySequenceEdit_KeyReleaseEvent(QKeySequenceEdit* self, QKeyEvent* param1);
    friend void QKeySequenceEdit_QBaseKeyReleaseEvent(QKeySequenceEdit* self, QKeyEvent* param1);
    friend void QKeySequenceEdit_TimerEvent(QKeySequenceEdit* self, QTimerEvent* param1);
    friend void QKeySequenceEdit_QBaseTimerEvent(QKeySequenceEdit* self, QTimerEvent* param1);
    friend void QKeySequenceEdit_FocusOutEvent(QKeySequenceEdit* self, QFocusEvent* param1);
    friend void QKeySequenceEdit_QBaseFocusOutEvent(QKeySequenceEdit* self, QFocusEvent* param1);
    friend void QKeySequenceEdit_MousePressEvent(QKeySequenceEdit* self, QMouseEvent* event);
    friend void QKeySequenceEdit_QBaseMousePressEvent(QKeySequenceEdit* self, QMouseEvent* event);
    friend void QKeySequenceEdit_MouseReleaseEvent(QKeySequenceEdit* self, QMouseEvent* event);
    friend void QKeySequenceEdit_QBaseMouseReleaseEvent(QKeySequenceEdit* self, QMouseEvent* event);
    friend void QKeySequenceEdit_MouseDoubleClickEvent(QKeySequenceEdit* self, QMouseEvent* event);
    friend void QKeySequenceEdit_QBaseMouseDoubleClickEvent(QKeySequenceEdit* self, QMouseEvent* event);
    friend void QKeySequenceEdit_MouseMoveEvent(QKeySequenceEdit* self, QMouseEvent* event);
    friend void QKeySequenceEdit_QBaseMouseMoveEvent(QKeySequenceEdit* self, QMouseEvent* event);
    friend void QKeySequenceEdit_WheelEvent(QKeySequenceEdit* self, QWheelEvent* event);
    friend void QKeySequenceEdit_QBaseWheelEvent(QKeySequenceEdit* self, QWheelEvent* event);
    friend void QKeySequenceEdit_FocusInEvent(QKeySequenceEdit* self, QFocusEvent* event);
    friend void QKeySequenceEdit_QBaseFocusInEvent(QKeySequenceEdit* self, QFocusEvent* event);
    friend void QKeySequenceEdit_EnterEvent(QKeySequenceEdit* self, QEnterEvent* event);
    friend void QKeySequenceEdit_QBaseEnterEvent(QKeySequenceEdit* self, QEnterEvent* event);
    friend void QKeySequenceEdit_LeaveEvent(QKeySequenceEdit* self, QEvent* event);
    friend void QKeySequenceEdit_QBaseLeaveEvent(QKeySequenceEdit* self, QEvent* event);
    friend void QKeySequenceEdit_PaintEvent(QKeySequenceEdit* self, QPaintEvent* event);
    friend void QKeySequenceEdit_QBasePaintEvent(QKeySequenceEdit* self, QPaintEvent* event);
    friend void QKeySequenceEdit_MoveEvent(QKeySequenceEdit* self, QMoveEvent* event);
    friend void QKeySequenceEdit_QBaseMoveEvent(QKeySequenceEdit* self, QMoveEvent* event);
    friend void QKeySequenceEdit_ResizeEvent(QKeySequenceEdit* self, QResizeEvent* event);
    friend void QKeySequenceEdit_QBaseResizeEvent(QKeySequenceEdit* self, QResizeEvent* event);
    friend void QKeySequenceEdit_CloseEvent(QKeySequenceEdit* self, QCloseEvent* event);
    friend void QKeySequenceEdit_QBaseCloseEvent(QKeySequenceEdit* self, QCloseEvent* event);
    friend void QKeySequenceEdit_ContextMenuEvent(QKeySequenceEdit* self, QContextMenuEvent* event);
    friend void QKeySequenceEdit_QBaseContextMenuEvent(QKeySequenceEdit* self, QContextMenuEvent* event);
    friend void QKeySequenceEdit_TabletEvent(QKeySequenceEdit* self, QTabletEvent* event);
    friend void QKeySequenceEdit_QBaseTabletEvent(QKeySequenceEdit* self, QTabletEvent* event);
    friend void QKeySequenceEdit_ActionEvent(QKeySequenceEdit* self, QActionEvent* event);
    friend void QKeySequenceEdit_QBaseActionEvent(QKeySequenceEdit* self, QActionEvent* event);
    friend void QKeySequenceEdit_DragEnterEvent(QKeySequenceEdit* self, QDragEnterEvent* event);
    friend void QKeySequenceEdit_QBaseDragEnterEvent(QKeySequenceEdit* self, QDragEnterEvent* event);
    friend void QKeySequenceEdit_DragMoveEvent(QKeySequenceEdit* self, QDragMoveEvent* event);
    friend void QKeySequenceEdit_QBaseDragMoveEvent(QKeySequenceEdit* self, QDragMoveEvent* event);
    friend void QKeySequenceEdit_DragLeaveEvent(QKeySequenceEdit* self, QDragLeaveEvent* event);
    friend void QKeySequenceEdit_QBaseDragLeaveEvent(QKeySequenceEdit* self, QDragLeaveEvent* event);
    friend void QKeySequenceEdit_DropEvent(QKeySequenceEdit* self, QDropEvent* event);
    friend void QKeySequenceEdit_QBaseDropEvent(QKeySequenceEdit* self, QDropEvent* event);
    friend void QKeySequenceEdit_ShowEvent(QKeySequenceEdit* self, QShowEvent* event);
    friend void QKeySequenceEdit_QBaseShowEvent(QKeySequenceEdit* self, QShowEvent* event);
    friend void QKeySequenceEdit_HideEvent(QKeySequenceEdit* self, QHideEvent* event);
    friend void QKeySequenceEdit_QBaseHideEvent(QKeySequenceEdit* self, QHideEvent* event);
    friend bool QKeySequenceEdit_NativeEvent(QKeySequenceEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QKeySequenceEdit_QBaseNativeEvent(QKeySequenceEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QKeySequenceEdit_ChangeEvent(QKeySequenceEdit* self, QEvent* param1);
    friend void QKeySequenceEdit_QBaseChangeEvent(QKeySequenceEdit* self, QEvent* param1);
    friend int QKeySequenceEdit_Metric(const QKeySequenceEdit* self, int param1);
    friend int QKeySequenceEdit_QBaseMetric(const QKeySequenceEdit* self, int param1);
    friend void QKeySequenceEdit_InitPainter(const QKeySequenceEdit* self, QPainter* painter);
    friend void QKeySequenceEdit_QBaseInitPainter(const QKeySequenceEdit* self, QPainter* painter);
    friend QPaintDevice* QKeySequenceEdit_Redirected(const QKeySequenceEdit* self, QPoint* offset);
    friend QPaintDevice* QKeySequenceEdit_QBaseRedirected(const QKeySequenceEdit* self, QPoint* offset);
    friend QPainter* QKeySequenceEdit_SharedPainter(const QKeySequenceEdit* self);
    friend QPainter* QKeySequenceEdit_QBaseSharedPainter(const QKeySequenceEdit* self);
    friend void QKeySequenceEdit_InputMethodEvent(QKeySequenceEdit* self, QInputMethodEvent* param1);
    friend void QKeySequenceEdit_QBaseInputMethodEvent(QKeySequenceEdit* self, QInputMethodEvent* param1);
    friend bool QKeySequenceEdit_FocusNextPrevChild(QKeySequenceEdit* self, bool next);
    friend bool QKeySequenceEdit_QBaseFocusNextPrevChild(QKeySequenceEdit* self, bool next);
    friend void QKeySequenceEdit_ChildEvent(QKeySequenceEdit* self, QChildEvent* event);
    friend void QKeySequenceEdit_QBaseChildEvent(QKeySequenceEdit* self, QChildEvent* event);
    friend void QKeySequenceEdit_CustomEvent(QKeySequenceEdit* self, QEvent* event);
    friend void QKeySequenceEdit_QBaseCustomEvent(QKeySequenceEdit* self, QEvent* event);
    friend void QKeySequenceEdit_ConnectNotify(QKeySequenceEdit* self, const QMetaMethod* signal);
    friend void QKeySequenceEdit_QBaseConnectNotify(QKeySequenceEdit* self, const QMetaMethod* signal);
    friend void QKeySequenceEdit_DisconnectNotify(QKeySequenceEdit* self, const QMetaMethod* signal);
    friend void QKeySequenceEdit_QBaseDisconnectNotify(QKeySequenceEdit* self, const QMetaMethod* signal);
    friend void QKeySequenceEdit_UpdateMicroFocus(QKeySequenceEdit* self);
    friend void QKeySequenceEdit_QBaseUpdateMicroFocus(QKeySequenceEdit* self);
    friend void QKeySequenceEdit_Create(QKeySequenceEdit* self);
    friend void QKeySequenceEdit_QBaseCreate(QKeySequenceEdit* self);
    friend void QKeySequenceEdit_Destroy(QKeySequenceEdit* self);
    friend void QKeySequenceEdit_QBaseDestroy(QKeySequenceEdit* self);
    friend bool QKeySequenceEdit_FocusNextChild(QKeySequenceEdit* self);
    friend bool QKeySequenceEdit_QBaseFocusNextChild(QKeySequenceEdit* self);
    friend bool QKeySequenceEdit_FocusPreviousChild(QKeySequenceEdit* self);
    friend bool QKeySequenceEdit_QBaseFocusPreviousChild(QKeySequenceEdit* self);
    friend QObject* QKeySequenceEdit_Sender(const QKeySequenceEdit* self);
    friend QObject* QKeySequenceEdit_QBaseSender(const QKeySequenceEdit* self);
    friend int QKeySequenceEdit_SenderSignalIndex(const QKeySequenceEdit* self);
    friend int QKeySequenceEdit_QBaseSenderSignalIndex(const QKeySequenceEdit* self);
    friend int QKeySequenceEdit_Receivers(const QKeySequenceEdit* self, const char* signal);
    friend int QKeySequenceEdit_QBaseReceivers(const QKeySequenceEdit* self, const char* signal);
    friend bool QKeySequenceEdit_IsSignalConnected(const QKeySequenceEdit* self, const QMetaMethod* signal);
    friend bool QKeySequenceEdit_QBaseIsSignalConnected(const QKeySequenceEdit* self, const QMetaMethod* signal);
};

#endif
