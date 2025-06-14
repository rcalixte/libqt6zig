#pragma once
#ifndef SRCC_LIBVIRTUALQMESSAGEBOX_H
#define SRCC_LIBVIRTUALQMESSAGEBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QMessageBox so that we can call protected methods
class VirtualQMessageBox final : public QMessageBox {

  public:
    // Virtual class boolean flag
    bool isVirtualQMessageBox = true;

    // Virtual class public types (including callbacks)
    using QMessageBox_Metacall_Callback = int (*)(QMessageBox*, int, int, void**);
    using QMessageBox_Event_Callback = bool (*)(QMessageBox*, QEvent*);
    using QMessageBox_ResizeEvent_Callback = void (*)(QMessageBox*, QResizeEvent*);
    using QMessageBox_ShowEvent_Callback = void (*)(QMessageBox*, QShowEvent*);
    using QMessageBox_CloseEvent_Callback = void (*)(QMessageBox*, QCloseEvent*);
    using QMessageBox_KeyPressEvent_Callback = void (*)(QMessageBox*, QKeyEvent*);
    using QMessageBox_ChangeEvent_Callback = void (*)(QMessageBox*, QEvent*);
    using QMessageBox_SetVisible_Callback = void (*)(QMessageBox*, bool);
    using QMessageBox_SizeHint_Callback = QSize* (*)();
    using QMessageBox_MinimumSizeHint_Callback = QSize* (*)();
    using QMessageBox_Open_Callback = void (*)();
    using QMessageBox_Exec_Callback = int (*)();
    using QMessageBox_Done_Callback = void (*)(QMessageBox*, int);
    using QMessageBox_Accept_Callback = void (*)();
    using QMessageBox_Reject_Callback = void (*)();
    using QMessageBox_ContextMenuEvent_Callback = void (*)(QMessageBox*, QContextMenuEvent*);
    using QMessageBox_EventFilter_Callback = bool (*)(QMessageBox*, QObject*, QEvent*);
    using QMessageBox_DevType_Callback = int (*)();
    using QMessageBox_HeightForWidth_Callback = int (*)(const QMessageBox*, int);
    using QMessageBox_HasHeightForWidth_Callback = bool (*)();
    using QMessageBox_PaintEngine_Callback = QPaintEngine* (*)();
    using QMessageBox_MousePressEvent_Callback = void (*)(QMessageBox*, QMouseEvent*);
    using QMessageBox_MouseReleaseEvent_Callback = void (*)(QMessageBox*, QMouseEvent*);
    using QMessageBox_MouseDoubleClickEvent_Callback = void (*)(QMessageBox*, QMouseEvent*);
    using QMessageBox_MouseMoveEvent_Callback = void (*)(QMessageBox*, QMouseEvent*);
    using QMessageBox_WheelEvent_Callback = void (*)(QMessageBox*, QWheelEvent*);
    using QMessageBox_KeyReleaseEvent_Callback = void (*)(QMessageBox*, QKeyEvent*);
    using QMessageBox_FocusInEvent_Callback = void (*)(QMessageBox*, QFocusEvent*);
    using QMessageBox_FocusOutEvent_Callback = void (*)(QMessageBox*, QFocusEvent*);
    using QMessageBox_EnterEvent_Callback = void (*)(QMessageBox*, QEnterEvent*);
    using QMessageBox_LeaveEvent_Callback = void (*)(QMessageBox*, QEvent*);
    using QMessageBox_PaintEvent_Callback = void (*)(QMessageBox*, QPaintEvent*);
    using QMessageBox_MoveEvent_Callback = void (*)(QMessageBox*, QMoveEvent*);
    using QMessageBox_TabletEvent_Callback = void (*)(QMessageBox*, QTabletEvent*);
    using QMessageBox_ActionEvent_Callback = void (*)(QMessageBox*, QActionEvent*);
    using QMessageBox_DragEnterEvent_Callback = void (*)(QMessageBox*, QDragEnterEvent*);
    using QMessageBox_DragMoveEvent_Callback = void (*)(QMessageBox*, QDragMoveEvent*);
    using QMessageBox_DragLeaveEvent_Callback = void (*)(QMessageBox*, QDragLeaveEvent*);
    using QMessageBox_DropEvent_Callback = void (*)(QMessageBox*, QDropEvent*);
    using QMessageBox_HideEvent_Callback = void (*)(QMessageBox*, QHideEvent*);
    using QMessageBox_NativeEvent_Callback = bool (*)(QMessageBox*, libqt_string, void*, intptr_t*);
    using QMessageBox_Metric_Callback = int (*)(const QMessageBox*, int);
    using QMessageBox_InitPainter_Callback = void (*)(const QMessageBox*, QPainter*);
    using QMessageBox_Redirected_Callback = QPaintDevice* (*)(const QMessageBox*, QPoint*);
    using QMessageBox_SharedPainter_Callback = QPainter* (*)();
    using QMessageBox_InputMethodEvent_Callback = void (*)(QMessageBox*, QInputMethodEvent*);
    using QMessageBox_InputMethodQuery_Callback = QVariant* (*)(const QMessageBox*, int);
    using QMessageBox_FocusNextPrevChild_Callback = bool (*)(QMessageBox*, bool);
    using QMessageBox_TimerEvent_Callback = void (*)(QMessageBox*, QTimerEvent*);
    using QMessageBox_ChildEvent_Callback = void (*)(QMessageBox*, QChildEvent*);
    using QMessageBox_CustomEvent_Callback = void (*)(QMessageBox*, QEvent*);
    using QMessageBox_ConnectNotify_Callback = void (*)(QMessageBox*, QMetaMethod*);
    using QMessageBox_DisconnectNotify_Callback = void (*)(QMessageBox*, QMetaMethod*);
    using QMessageBox_AdjustPosition_Callback = void (*)(QMessageBox*, QWidget*);
    using QMessageBox_UpdateMicroFocus_Callback = void (*)();
    using QMessageBox_Create_Callback = void (*)();
    using QMessageBox_Destroy_Callback = void (*)();
    using QMessageBox_FocusNextChild_Callback = bool (*)();
    using QMessageBox_FocusPreviousChild_Callback = bool (*)();
    using QMessageBox_Sender_Callback = QObject* (*)();
    using QMessageBox_SenderSignalIndex_Callback = int (*)();
    using QMessageBox_Receivers_Callback = int (*)(const QMessageBox*, const char*);
    using QMessageBox_IsSignalConnected_Callback = bool (*)(const QMessageBox*, QMetaMethod*);

  protected:
    // Instance callback storage
    QMessageBox_Metacall_Callback qmessagebox_metacall_callback = nullptr;
    QMessageBox_Event_Callback qmessagebox_event_callback = nullptr;
    QMessageBox_ResizeEvent_Callback qmessagebox_resizeevent_callback = nullptr;
    QMessageBox_ShowEvent_Callback qmessagebox_showevent_callback = nullptr;
    QMessageBox_CloseEvent_Callback qmessagebox_closeevent_callback = nullptr;
    QMessageBox_KeyPressEvent_Callback qmessagebox_keypressevent_callback = nullptr;
    QMessageBox_ChangeEvent_Callback qmessagebox_changeevent_callback = nullptr;
    QMessageBox_SetVisible_Callback qmessagebox_setvisible_callback = nullptr;
    QMessageBox_SizeHint_Callback qmessagebox_sizehint_callback = nullptr;
    QMessageBox_MinimumSizeHint_Callback qmessagebox_minimumsizehint_callback = nullptr;
    QMessageBox_Open_Callback qmessagebox_open_callback = nullptr;
    QMessageBox_Exec_Callback qmessagebox_exec_callback = nullptr;
    QMessageBox_Done_Callback qmessagebox_done_callback = nullptr;
    QMessageBox_Accept_Callback qmessagebox_accept_callback = nullptr;
    QMessageBox_Reject_Callback qmessagebox_reject_callback = nullptr;
    QMessageBox_ContextMenuEvent_Callback qmessagebox_contextmenuevent_callback = nullptr;
    QMessageBox_EventFilter_Callback qmessagebox_eventfilter_callback = nullptr;
    QMessageBox_DevType_Callback qmessagebox_devtype_callback = nullptr;
    QMessageBox_HeightForWidth_Callback qmessagebox_heightforwidth_callback = nullptr;
    QMessageBox_HasHeightForWidth_Callback qmessagebox_hasheightforwidth_callback = nullptr;
    QMessageBox_PaintEngine_Callback qmessagebox_paintengine_callback = nullptr;
    QMessageBox_MousePressEvent_Callback qmessagebox_mousepressevent_callback = nullptr;
    QMessageBox_MouseReleaseEvent_Callback qmessagebox_mousereleaseevent_callback = nullptr;
    QMessageBox_MouseDoubleClickEvent_Callback qmessagebox_mousedoubleclickevent_callback = nullptr;
    QMessageBox_MouseMoveEvent_Callback qmessagebox_mousemoveevent_callback = nullptr;
    QMessageBox_WheelEvent_Callback qmessagebox_wheelevent_callback = nullptr;
    QMessageBox_KeyReleaseEvent_Callback qmessagebox_keyreleaseevent_callback = nullptr;
    QMessageBox_FocusInEvent_Callback qmessagebox_focusinevent_callback = nullptr;
    QMessageBox_FocusOutEvent_Callback qmessagebox_focusoutevent_callback = nullptr;
    QMessageBox_EnterEvent_Callback qmessagebox_enterevent_callback = nullptr;
    QMessageBox_LeaveEvent_Callback qmessagebox_leaveevent_callback = nullptr;
    QMessageBox_PaintEvent_Callback qmessagebox_paintevent_callback = nullptr;
    QMessageBox_MoveEvent_Callback qmessagebox_moveevent_callback = nullptr;
    QMessageBox_TabletEvent_Callback qmessagebox_tabletevent_callback = nullptr;
    QMessageBox_ActionEvent_Callback qmessagebox_actionevent_callback = nullptr;
    QMessageBox_DragEnterEvent_Callback qmessagebox_dragenterevent_callback = nullptr;
    QMessageBox_DragMoveEvent_Callback qmessagebox_dragmoveevent_callback = nullptr;
    QMessageBox_DragLeaveEvent_Callback qmessagebox_dragleaveevent_callback = nullptr;
    QMessageBox_DropEvent_Callback qmessagebox_dropevent_callback = nullptr;
    QMessageBox_HideEvent_Callback qmessagebox_hideevent_callback = nullptr;
    QMessageBox_NativeEvent_Callback qmessagebox_nativeevent_callback = nullptr;
    QMessageBox_Metric_Callback qmessagebox_metric_callback = nullptr;
    QMessageBox_InitPainter_Callback qmessagebox_initpainter_callback = nullptr;
    QMessageBox_Redirected_Callback qmessagebox_redirected_callback = nullptr;
    QMessageBox_SharedPainter_Callback qmessagebox_sharedpainter_callback = nullptr;
    QMessageBox_InputMethodEvent_Callback qmessagebox_inputmethodevent_callback = nullptr;
    QMessageBox_InputMethodQuery_Callback qmessagebox_inputmethodquery_callback = nullptr;
    QMessageBox_FocusNextPrevChild_Callback qmessagebox_focusnextprevchild_callback = nullptr;
    QMessageBox_TimerEvent_Callback qmessagebox_timerevent_callback = nullptr;
    QMessageBox_ChildEvent_Callback qmessagebox_childevent_callback = nullptr;
    QMessageBox_CustomEvent_Callback qmessagebox_customevent_callback = nullptr;
    QMessageBox_ConnectNotify_Callback qmessagebox_connectnotify_callback = nullptr;
    QMessageBox_DisconnectNotify_Callback qmessagebox_disconnectnotify_callback = nullptr;
    QMessageBox_AdjustPosition_Callback qmessagebox_adjustposition_callback = nullptr;
    QMessageBox_UpdateMicroFocus_Callback qmessagebox_updatemicrofocus_callback = nullptr;
    QMessageBox_Create_Callback qmessagebox_create_callback = nullptr;
    QMessageBox_Destroy_Callback qmessagebox_destroy_callback = nullptr;
    QMessageBox_FocusNextChild_Callback qmessagebox_focusnextchild_callback = nullptr;
    QMessageBox_FocusPreviousChild_Callback qmessagebox_focuspreviouschild_callback = nullptr;
    QMessageBox_Sender_Callback qmessagebox_sender_callback = nullptr;
    QMessageBox_SenderSignalIndex_Callback qmessagebox_sendersignalindex_callback = nullptr;
    QMessageBox_Receivers_Callback qmessagebox_receivers_callback = nullptr;
    QMessageBox_IsSignalConnected_Callback qmessagebox_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qmessagebox_metacall_isbase = false;
    mutable bool qmessagebox_event_isbase = false;
    mutable bool qmessagebox_resizeevent_isbase = false;
    mutable bool qmessagebox_showevent_isbase = false;
    mutable bool qmessagebox_closeevent_isbase = false;
    mutable bool qmessagebox_keypressevent_isbase = false;
    mutable bool qmessagebox_changeevent_isbase = false;
    mutable bool qmessagebox_setvisible_isbase = false;
    mutable bool qmessagebox_sizehint_isbase = false;
    mutable bool qmessagebox_minimumsizehint_isbase = false;
    mutable bool qmessagebox_open_isbase = false;
    mutable bool qmessagebox_exec_isbase = false;
    mutable bool qmessagebox_done_isbase = false;
    mutable bool qmessagebox_accept_isbase = false;
    mutable bool qmessagebox_reject_isbase = false;
    mutable bool qmessagebox_contextmenuevent_isbase = false;
    mutable bool qmessagebox_eventfilter_isbase = false;
    mutable bool qmessagebox_devtype_isbase = false;
    mutable bool qmessagebox_heightforwidth_isbase = false;
    mutable bool qmessagebox_hasheightforwidth_isbase = false;
    mutable bool qmessagebox_paintengine_isbase = false;
    mutable bool qmessagebox_mousepressevent_isbase = false;
    mutable bool qmessagebox_mousereleaseevent_isbase = false;
    mutable bool qmessagebox_mousedoubleclickevent_isbase = false;
    mutable bool qmessagebox_mousemoveevent_isbase = false;
    mutable bool qmessagebox_wheelevent_isbase = false;
    mutable bool qmessagebox_keyreleaseevent_isbase = false;
    mutable bool qmessagebox_focusinevent_isbase = false;
    mutable bool qmessagebox_focusoutevent_isbase = false;
    mutable bool qmessagebox_enterevent_isbase = false;
    mutable bool qmessagebox_leaveevent_isbase = false;
    mutable bool qmessagebox_paintevent_isbase = false;
    mutable bool qmessagebox_moveevent_isbase = false;
    mutable bool qmessagebox_tabletevent_isbase = false;
    mutable bool qmessagebox_actionevent_isbase = false;
    mutable bool qmessagebox_dragenterevent_isbase = false;
    mutable bool qmessagebox_dragmoveevent_isbase = false;
    mutable bool qmessagebox_dragleaveevent_isbase = false;
    mutable bool qmessagebox_dropevent_isbase = false;
    mutable bool qmessagebox_hideevent_isbase = false;
    mutable bool qmessagebox_nativeevent_isbase = false;
    mutable bool qmessagebox_metric_isbase = false;
    mutable bool qmessagebox_initpainter_isbase = false;
    mutable bool qmessagebox_redirected_isbase = false;
    mutable bool qmessagebox_sharedpainter_isbase = false;
    mutable bool qmessagebox_inputmethodevent_isbase = false;
    mutable bool qmessagebox_inputmethodquery_isbase = false;
    mutable bool qmessagebox_focusnextprevchild_isbase = false;
    mutable bool qmessagebox_timerevent_isbase = false;
    mutable bool qmessagebox_childevent_isbase = false;
    mutable bool qmessagebox_customevent_isbase = false;
    mutable bool qmessagebox_connectnotify_isbase = false;
    mutable bool qmessagebox_disconnectnotify_isbase = false;
    mutable bool qmessagebox_adjustposition_isbase = false;
    mutable bool qmessagebox_updatemicrofocus_isbase = false;
    mutable bool qmessagebox_create_isbase = false;
    mutable bool qmessagebox_destroy_isbase = false;
    mutable bool qmessagebox_focusnextchild_isbase = false;
    mutable bool qmessagebox_focuspreviouschild_isbase = false;
    mutable bool qmessagebox_sender_isbase = false;
    mutable bool qmessagebox_sendersignalindex_isbase = false;
    mutable bool qmessagebox_receivers_isbase = false;
    mutable bool qmessagebox_issignalconnected_isbase = false;

  public:
    VirtualQMessageBox(QWidget* parent) : QMessageBox(parent){};
    VirtualQMessageBox() : QMessageBox(){};
    VirtualQMessageBox(QMessageBox::Icon icon, const QString& title, const QString& text) : QMessageBox(icon, title, text){};
    VirtualQMessageBox(const QString& title, const QString& text, QMessageBox::Icon icon, int button0, int button1, int button2) : QMessageBox(title, text, icon, button0, button1, button2){};
    VirtualQMessageBox(QMessageBox::Icon icon, const QString& title, const QString& text, QMessageBox::StandardButtons buttons) : QMessageBox(icon, title, text, buttons){};
    VirtualQMessageBox(QMessageBox::Icon icon, const QString& title, const QString& text, QMessageBox::StandardButtons buttons, QWidget* parent) : QMessageBox(icon, title, text, buttons, parent){};
    VirtualQMessageBox(QMessageBox::Icon icon, const QString& title, const QString& text, QMessageBox::StandardButtons buttons, QWidget* parent, Qt::WindowFlags flags) : QMessageBox(icon, title, text, buttons, parent, flags){};
    VirtualQMessageBox(const QString& title, const QString& text, QMessageBox::Icon icon, int button0, int button1, int button2, QWidget* parent) : QMessageBox(title, text, icon, button0, button1, button2, parent){};
    VirtualQMessageBox(const QString& title, const QString& text, QMessageBox::Icon icon, int button0, int button1, int button2, QWidget* parent, Qt::WindowFlags f) : QMessageBox(title, text, icon, button0, button1, button2, parent, f){};

    ~VirtualQMessageBox() {
        qmessagebox_metacall_callback = nullptr;
        qmessagebox_event_callback = nullptr;
        qmessagebox_resizeevent_callback = nullptr;
        qmessagebox_showevent_callback = nullptr;
        qmessagebox_closeevent_callback = nullptr;
        qmessagebox_keypressevent_callback = nullptr;
        qmessagebox_changeevent_callback = nullptr;
        qmessagebox_setvisible_callback = nullptr;
        qmessagebox_sizehint_callback = nullptr;
        qmessagebox_minimumsizehint_callback = nullptr;
        qmessagebox_open_callback = nullptr;
        qmessagebox_exec_callback = nullptr;
        qmessagebox_done_callback = nullptr;
        qmessagebox_accept_callback = nullptr;
        qmessagebox_reject_callback = nullptr;
        qmessagebox_contextmenuevent_callback = nullptr;
        qmessagebox_eventfilter_callback = nullptr;
        qmessagebox_devtype_callback = nullptr;
        qmessagebox_heightforwidth_callback = nullptr;
        qmessagebox_hasheightforwidth_callback = nullptr;
        qmessagebox_paintengine_callback = nullptr;
        qmessagebox_mousepressevent_callback = nullptr;
        qmessagebox_mousereleaseevent_callback = nullptr;
        qmessagebox_mousedoubleclickevent_callback = nullptr;
        qmessagebox_mousemoveevent_callback = nullptr;
        qmessagebox_wheelevent_callback = nullptr;
        qmessagebox_keyreleaseevent_callback = nullptr;
        qmessagebox_focusinevent_callback = nullptr;
        qmessagebox_focusoutevent_callback = nullptr;
        qmessagebox_enterevent_callback = nullptr;
        qmessagebox_leaveevent_callback = nullptr;
        qmessagebox_paintevent_callback = nullptr;
        qmessagebox_moveevent_callback = nullptr;
        qmessagebox_tabletevent_callback = nullptr;
        qmessagebox_actionevent_callback = nullptr;
        qmessagebox_dragenterevent_callback = nullptr;
        qmessagebox_dragmoveevent_callback = nullptr;
        qmessagebox_dragleaveevent_callback = nullptr;
        qmessagebox_dropevent_callback = nullptr;
        qmessagebox_hideevent_callback = nullptr;
        qmessagebox_nativeevent_callback = nullptr;
        qmessagebox_metric_callback = nullptr;
        qmessagebox_initpainter_callback = nullptr;
        qmessagebox_redirected_callback = nullptr;
        qmessagebox_sharedpainter_callback = nullptr;
        qmessagebox_inputmethodevent_callback = nullptr;
        qmessagebox_inputmethodquery_callback = nullptr;
        qmessagebox_focusnextprevchild_callback = nullptr;
        qmessagebox_timerevent_callback = nullptr;
        qmessagebox_childevent_callback = nullptr;
        qmessagebox_customevent_callback = nullptr;
        qmessagebox_connectnotify_callback = nullptr;
        qmessagebox_disconnectnotify_callback = nullptr;
        qmessagebox_adjustposition_callback = nullptr;
        qmessagebox_updatemicrofocus_callback = nullptr;
        qmessagebox_create_callback = nullptr;
        qmessagebox_destroy_callback = nullptr;
        qmessagebox_focusnextchild_callback = nullptr;
        qmessagebox_focuspreviouschild_callback = nullptr;
        qmessagebox_sender_callback = nullptr;
        qmessagebox_sendersignalindex_callback = nullptr;
        qmessagebox_receivers_callback = nullptr;
        qmessagebox_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQMessageBox_Metacall_Callback(QMessageBox_Metacall_Callback cb) { qmessagebox_metacall_callback = cb; }
    inline void setQMessageBox_Event_Callback(QMessageBox_Event_Callback cb) { qmessagebox_event_callback = cb; }
    inline void setQMessageBox_ResizeEvent_Callback(QMessageBox_ResizeEvent_Callback cb) { qmessagebox_resizeevent_callback = cb; }
    inline void setQMessageBox_ShowEvent_Callback(QMessageBox_ShowEvent_Callback cb) { qmessagebox_showevent_callback = cb; }
    inline void setQMessageBox_CloseEvent_Callback(QMessageBox_CloseEvent_Callback cb) { qmessagebox_closeevent_callback = cb; }
    inline void setQMessageBox_KeyPressEvent_Callback(QMessageBox_KeyPressEvent_Callback cb) { qmessagebox_keypressevent_callback = cb; }
    inline void setQMessageBox_ChangeEvent_Callback(QMessageBox_ChangeEvent_Callback cb) { qmessagebox_changeevent_callback = cb; }
    inline void setQMessageBox_SetVisible_Callback(QMessageBox_SetVisible_Callback cb) { qmessagebox_setvisible_callback = cb; }
    inline void setQMessageBox_SizeHint_Callback(QMessageBox_SizeHint_Callback cb) { qmessagebox_sizehint_callback = cb; }
    inline void setQMessageBox_MinimumSizeHint_Callback(QMessageBox_MinimumSizeHint_Callback cb) { qmessagebox_minimumsizehint_callback = cb; }
    inline void setQMessageBox_Open_Callback(QMessageBox_Open_Callback cb) { qmessagebox_open_callback = cb; }
    inline void setQMessageBox_Exec_Callback(QMessageBox_Exec_Callback cb) { qmessagebox_exec_callback = cb; }
    inline void setQMessageBox_Done_Callback(QMessageBox_Done_Callback cb) { qmessagebox_done_callback = cb; }
    inline void setQMessageBox_Accept_Callback(QMessageBox_Accept_Callback cb) { qmessagebox_accept_callback = cb; }
    inline void setQMessageBox_Reject_Callback(QMessageBox_Reject_Callback cb) { qmessagebox_reject_callback = cb; }
    inline void setQMessageBox_ContextMenuEvent_Callback(QMessageBox_ContextMenuEvent_Callback cb) { qmessagebox_contextmenuevent_callback = cb; }
    inline void setQMessageBox_EventFilter_Callback(QMessageBox_EventFilter_Callback cb) { qmessagebox_eventfilter_callback = cb; }
    inline void setQMessageBox_DevType_Callback(QMessageBox_DevType_Callback cb) { qmessagebox_devtype_callback = cb; }
    inline void setQMessageBox_HeightForWidth_Callback(QMessageBox_HeightForWidth_Callback cb) { qmessagebox_heightforwidth_callback = cb; }
    inline void setQMessageBox_HasHeightForWidth_Callback(QMessageBox_HasHeightForWidth_Callback cb) { qmessagebox_hasheightforwidth_callback = cb; }
    inline void setQMessageBox_PaintEngine_Callback(QMessageBox_PaintEngine_Callback cb) { qmessagebox_paintengine_callback = cb; }
    inline void setQMessageBox_MousePressEvent_Callback(QMessageBox_MousePressEvent_Callback cb) { qmessagebox_mousepressevent_callback = cb; }
    inline void setQMessageBox_MouseReleaseEvent_Callback(QMessageBox_MouseReleaseEvent_Callback cb) { qmessagebox_mousereleaseevent_callback = cb; }
    inline void setQMessageBox_MouseDoubleClickEvent_Callback(QMessageBox_MouseDoubleClickEvent_Callback cb) { qmessagebox_mousedoubleclickevent_callback = cb; }
    inline void setQMessageBox_MouseMoveEvent_Callback(QMessageBox_MouseMoveEvent_Callback cb) { qmessagebox_mousemoveevent_callback = cb; }
    inline void setQMessageBox_WheelEvent_Callback(QMessageBox_WheelEvent_Callback cb) { qmessagebox_wheelevent_callback = cb; }
    inline void setQMessageBox_KeyReleaseEvent_Callback(QMessageBox_KeyReleaseEvent_Callback cb) { qmessagebox_keyreleaseevent_callback = cb; }
    inline void setQMessageBox_FocusInEvent_Callback(QMessageBox_FocusInEvent_Callback cb) { qmessagebox_focusinevent_callback = cb; }
    inline void setQMessageBox_FocusOutEvent_Callback(QMessageBox_FocusOutEvent_Callback cb) { qmessagebox_focusoutevent_callback = cb; }
    inline void setQMessageBox_EnterEvent_Callback(QMessageBox_EnterEvent_Callback cb) { qmessagebox_enterevent_callback = cb; }
    inline void setQMessageBox_LeaveEvent_Callback(QMessageBox_LeaveEvent_Callback cb) { qmessagebox_leaveevent_callback = cb; }
    inline void setQMessageBox_PaintEvent_Callback(QMessageBox_PaintEvent_Callback cb) { qmessagebox_paintevent_callback = cb; }
    inline void setQMessageBox_MoveEvent_Callback(QMessageBox_MoveEvent_Callback cb) { qmessagebox_moveevent_callback = cb; }
    inline void setQMessageBox_TabletEvent_Callback(QMessageBox_TabletEvent_Callback cb) { qmessagebox_tabletevent_callback = cb; }
    inline void setQMessageBox_ActionEvent_Callback(QMessageBox_ActionEvent_Callback cb) { qmessagebox_actionevent_callback = cb; }
    inline void setQMessageBox_DragEnterEvent_Callback(QMessageBox_DragEnterEvent_Callback cb) { qmessagebox_dragenterevent_callback = cb; }
    inline void setQMessageBox_DragMoveEvent_Callback(QMessageBox_DragMoveEvent_Callback cb) { qmessagebox_dragmoveevent_callback = cb; }
    inline void setQMessageBox_DragLeaveEvent_Callback(QMessageBox_DragLeaveEvent_Callback cb) { qmessagebox_dragleaveevent_callback = cb; }
    inline void setQMessageBox_DropEvent_Callback(QMessageBox_DropEvent_Callback cb) { qmessagebox_dropevent_callback = cb; }
    inline void setQMessageBox_HideEvent_Callback(QMessageBox_HideEvent_Callback cb) { qmessagebox_hideevent_callback = cb; }
    inline void setQMessageBox_NativeEvent_Callback(QMessageBox_NativeEvent_Callback cb) { qmessagebox_nativeevent_callback = cb; }
    inline void setQMessageBox_Metric_Callback(QMessageBox_Metric_Callback cb) { qmessagebox_metric_callback = cb; }
    inline void setQMessageBox_InitPainter_Callback(QMessageBox_InitPainter_Callback cb) { qmessagebox_initpainter_callback = cb; }
    inline void setQMessageBox_Redirected_Callback(QMessageBox_Redirected_Callback cb) { qmessagebox_redirected_callback = cb; }
    inline void setQMessageBox_SharedPainter_Callback(QMessageBox_SharedPainter_Callback cb) { qmessagebox_sharedpainter_callback = cb; }
    inline void setQMessageBox_InputMethodEvent_Callback(QMessageBox_InputMethodEvent_Callback cb) { qmessagebox_inputmethodevent_callback = cb; }
    inline void setQMessageBox_InputMethodQuery_Callback(QMessageBox_InputMethodQuery_Callback cb) { qmessagebox_inputmethodquery_callback = cb; }
    inline void setQMessageBox_FocusNextPrevChild_Callback(QMessageBox_FocusNextPrevChild_Callback cb) { qmessagebox_focusnextprevchild_callback = cb; }
    inline void setQMessageBox_TimerEvent_Callback(QMessageBox_TimerEvent_Callback cb) { qmessagebox_timerevent_callback = cb; }
    inline void setQMessageBox_ChildEvent_Callback(QMessageBox_ChildEvent_Callback cb) { qmessagebox_childevent_callback = cb; }
    inline void setQMessageBox_CustomEvent_Callback(QMessageBox_CustomEvent_Callback cb) { qmessagebox_customevent_callback = cb; }
    inline void setQMessageBox_ConnectNotify_Callback(QMessageBox_ConnectNotify_Callback cb) { qmessagebox_connectnotify_callback = cb; }
    inline void setQMessageBox_DisconnectNotify_Callback(QMessageBox_DisconnectNotify_Callback cb) { qmessagebox_disconnectnotify_callback = cb; }
    inline void setQMessageBox_AdjustPosition_Callback(QMessageBox_AdjustPosition_Callback cb) { qmessagebox_adjustposition_callback = cb; }
    inline void setQMessageBox_UpdateMicroFocus_Callback(QMessageBox_UpdateMicroFocus_Callback cb) { qmessagebox_updatemicrofocus_callback = cb; }
    inline void setQMessageBox_Create_Callback(QMessageBox_Create_Callback cb) { qmessagebox_create_callback = cb; }
    inline void setQMessageBox_Destroy_Callback(QMessageBox_Destroy_Callback cb) { qmessagebox_destroy_callback = cb; }
    inline void setQMessageBox_FocusNextChild_Callback(QMessageBox_FocusNextChild_Callback cb) { qmessagebox_focusnextchild_callback = cb; }
    inline void setQMessageBox_FocusPreviousChild_Callback(QMessageBox_FocusPreviousChild_Callback cb) { qmessagebox_focuspreviouschild_callback = cb; }
    inline void setQMessageBox_Sender_Callback(QMessageBox_Sender_Callback cb) { qmessagebox_sender_callback = cb; }
    inline void setQMessageBox_SenderSignalIndex_Callback(QMessageBox_SenderSignalIndex_Callback cb) { qmessagebox_sendersignalindex_callback = cb; }
    inline void setQMessageBox_Receivers_Callback(QMessageBox_Receivers_Callback cb) { qmessagebox_receivers_callback = cb; }
    inline void setQMessageBox_IsSignalConnected_Callback(QMessageBox_IsSignalConnected_Callback cb) { qmessagebox_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQMessageBox_Metacall_IsBase(bool value) const { qmessagebox_metacall_isbase = value; }
    inline void setQMessageBox_Event_IsBase(bool value) const { qmessagebox_event_isbase = value; }
    inline void setQMessageBox_ResizeEvent_IsBase(bool value) const { qmessagebox_resizeevent_isbase = value; }
    inline void setQMessageBox_ShowEvent_IsBase(bool value) const { qmessagebox_showevent_isbase = value; }
    inline void setQMessageBox_CloseEvent_IsBase(bool value) const { qmessagebox_closeevent_isbase = value; }
    inline void setQMessageBox_KeyPressEvent_IsBase(bool value) const { qmessagebox_keypressevent_isbase = value; }
    inline void setQMessageBox_ChangeEvent_IsBase(bool value) const { qmessagebox_changeevent_isbase = value; }
    inline void setQMessageBox_SetVisible_IsBase(bool value) const { qmessagebox_setvisible_isbase = value; }
    inline void setQMessageBox_SizeHint_IsBase(bool value) const { qmessagebox_sizehint_isbase = value; }
    inline void setQMessageBox_MinimumSizeHint_IsBase(bool value) const { qmessagebox_minimumsizehint_isbase = value; }
    inline void setQMessageBox_Open_IsBase(bool value) const { qmessagebox_open_isbase = value; }
    inline void setQMessageBox_Exec_IsBase(bool value) const { qmessagebox_exec_isbase = value; }
    inline void setQMessageBox_Done_IsBase(bool value) const { qmessagebox_done_isbase = value; }
    inline void setQMessageBox_Accept_IsBase(bool value) const { qmessagebox_accept_isbase = value; }
    inline void setQMessageBox_Reject_IsBase(bool value) const { qmessagebox_reject_isbase = value; }
    inline void setQMessageBox_ContextMenuEvent_IsBase(bool value) const { qmessagebox_contextmenuevent_isbase = value; }
    inline void setQMessageBox_EventFilter_IsBase(bool value) const { qmessagebox_eventfilter_isbase = value; }
    inline void setQMessageBox_DevType_IsBase(bool value) const { qmessagebox_devtype_isbase = value; }
    inline void setQMessageBox_HeightForWidth_IsBase(bool value) const { qmessagebox_heightforwidth_isbase = value; }
    inline void setQMessageBox_HasHeightForWidth_IsBase(bool value) const { qmessagebox_hasheightforwidth_isbase = value; }
    inline void setQMessageBox_PaintEngine_IsBase(bool value) const { qmessagebox_paintengine_isbase = value; }
    inline void setQMessageBox_MousePressEvent_IsBase(bool value) const { qmessagebox_mousepressevent_isbase = value; }
    inline void setQMessageBox_MouseReleaseEvent_IsBase(bool value) const { qmessagebox_mousereleaseevent_isbase = value; }
    inline void setQMessageBox_MouseDoubleClickEvent_IsBase(bool value) const { qmessagebox_mousedoubleclickevent_isbase = value; }
    inline void setQMessageBox_MouseMoveEvent_IsBase(bool value) const { qmessagebox_mousemoveevent_isbase = value; }
    inline void setQMessageBox_WheelEvent_IsBase(bool value) const { qmessagebox_wheelevent_isbase = value; }
    inline void setQMessageBox_KeyReleaseEvent_IsBase(bool value) const { qmessagebox_keyreleaseevent_isbase = value; }
    inline void setQMessageBox_FocusInEvent_IsBase(bool value) const { qmessagebox_focusinevent_isbase = value; }
    inline void setQMessageBox_FocusOutEvent_IsBase(bool value) const { qmessagebox_focusoutevent_isbase = value; }
    inline void setQMessageBox_EnterEvent_IsBase(bool value) const { qmessagebox_enterevent_isbase = value; }
    inline void setQMessageBox_LeaveEvent_IsBase(bool value) const { qmessagebox_leaveevent_isbase = value; }
    inline void setQMessageBox_PaintEvent_IsBase(bool value) const { qmessagebox_paintevent_isbase = value; }
    inline void setQMessageBox_MoveEvent_IsBase(bool value) const { qmessagebox_moveevent_isbase = value; }
    inline void setQMessageBox_TabletEvent_IsBase(bool value) const { qmessagebox_tabletevent_isbase = value; }
    inline void setQMessageBox_ActionEvent_IsBase(bool value) const { qmessagebox_actionevent_isbase = value; }
    inline void setQMessageBox_DragEnterEvent_IsBase(bool value) const { qmessagebox_dragenterevent_isbase = value; }
    inline void setQMessageBox_DragMoveEvent_IsBase(bool value) const { qmessagebox_dragmoveevent_isbase = value; }
    inline void setQMessageBox_DragLeaveEvent_IsBase(bool value) const { qmessagebox_dragleaveevent_isbase = value; }
    inline void setQMessageBox_DropEvent_IsBase(bool value) const { qmessagebox_dropevent_isbase = value; }
    inline void setQMessageBox_HideEvent_IsBase(bool value) const { qmessagebox_hideevent_isbase = value; }
    inline void setQMessageBox_NativeEvent_IsBase(bool value) const { qmessagebox_nativeevent_isbase = value; }
    inline void setQMessageBox_Metric_IsBase(bool value) const { qmessagebox_metric_isbase = value; }
    inline void setQMessageBox_InitPainter_IsBase(bool value) const { qmessagebox_initpainter_isbase = value; }
    inline void setQMessageBox_Redirected_IsBase(bool value) const { qmessagebox_redirected_isbase = value; }
    inline void setQMessageBox_SharedPainter_IsBase(bool value) const { qmessagebox_sharedpainter_isbase = value; }
    inline void setQMessageBox_InputMethodEvent_IsBase(bool value) const { qmessagebox_inputmethodevent_isbase = value; }
    inline void setQMessageBox_InputMethodQuery_IsBase(bool value) const { qmessagebox_inputmethodquery_isbase = value; }
    inline void setQMessageBox_FocusNextPrevChild_IsBase(bool value) const { qmessagebox_focusnextprevchild_isbase = value; }
    inline void setQMessageBox_TimerEvent_IsBase(bool value) const { qmessagebox_timerevent_isbase = value; }
    inline void setQMessageBox_ChildEvent_IsBase(bool value) const { qmessagebox_childevent_isbase = value; }
    inline void setQMessageBox_CustomEvent_IsBase(bool value) const { qmessagebox_customevent_isbase = value; }
    inline void setQMessageBox_ConnectNotify_IsBase(bool value) const { qmessagebox_connectnotify_isbase = value; }
    inline void setQMessageBox_DisconnectNotify_IsBase(bool value) const { qmessagebox_disconnectnotify_isbase = value; }
    inline void setQMessageBox_AdjustPosition_IsBase(bool value) const { qmessagebox_adjustposition_isbase = value; }
    inline void setQMessageBox_UpdateMicroFocus_IsBase(bool value) const { qmessagebox_updatemicrofocus_isbase = value; }
    inline void setQMessageBox_Create_IsBase(bool value) const { qmessagebox_create_isbase = value; }
    inline void setQMessageBox_Destroy_IsBase(bool value) const { qmessagebox_destroy_isbase = value; }
    inline void setQMessageBox_FocusNextChild_IsBase(bool value) const { qmessagebox_focusnextchild_isbase = value; }
    inline void setQMessageBox_FocusPreviousChild_IsBase(bool value) const { qmessagebox_focuspreviouschild_isbase = value; }
    inline void setQMessageBox_Sender_IsBase(bool value) const { qmessagebox_sender_isbase = value; }
    inline void setQMessageBox_SenderSignalIndex_IsBase(bool value) const { qmessagebox_sendersignalindex_isbase = value; }
    inline void setQMessageBox_Receivers_IsBase(bool value) const { qmessagebox_receivers_isbase = value; }
    inline void setQMessageBox_IsSignalConnected_IsBase(bool value) const { qmessagebox_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmessagebox_metacall_isbase) {
            qmessagebox_metacall_isbase = false;
            return QMessageBox::qt_metacall(param1, param2, param3);
        } else if (qmessagebox_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qmessagebox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QMessageBox::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qmessagebox_event_isbase) {
            qmessagebox_event_isbase = false;
            return QMessageBox::event(e);
        } else if (qmessagebox_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = qmessagebox_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMessageBox::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qmessagebox_resizeevent_isbase) {
            qmessagebox_resizeevent_isbase = false;
            QMessageBox::resizeEvent(event);
        } else if (qmessagebox_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qmessagebox_resizeevent_callback(this, cbval1);
        } else {
            QMessageBox::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qmessagebox_showevent_isbase) {
            qmessagebox_showevent_isbase = false;
            QMessageBox::showEvent(event);
        } else if (qmessagebox_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qmessagebox_showevent_callback(this, cbval1);
        } else {
            QMessageBox::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qmessagebox_closeevent_isbase) {
            qmessagebox_closeevent_isbase = false;
            QMessageBox::closeEvent(event);
        } else if (qmessagebox_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qmessagebox_closeevent_callback(this, cbval1);
        } else {
            QMessageBox::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qmessagebox_keypressevent_isbase) {
            qmessagebox_keypressevent_isbase = false;
            QMessageBox::keyPressEvent(event);
        } else if (qmessagebox_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qmessagebox_keypressevent_callback(this, cbval1);
        } else {
            QMessageBox::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qmessagebox_changeevent_isbase) {
            qmessagebox_changeevent_isbase = false;
            QMessageBox::changeEvent(event);
        } else if (qmessagebox_changeevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qmessagebox_changeevent_callback(this, cbval1);
        } else {
            QMessageBox::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qmessagebox_setvisible_isbase) {
            qmessagebox_setvisible_isbase = false;
            QMessageBox::setVisible(visible);
        } else if (qmessagebox_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qmessagebox_setvisible_callback(this, cbval1);
        } else {
            QMessageBox::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qmessagebox_sizehint_isbase) {
            qmessagebox_sizehint_isbase = false;
            return QMessageBox::sizeHint();
        } else if (qmessagebox_sizehint_callback != nullptr) {
            QSize* callback_ret = qmessagebox_sizehint_callback();
            return *callback_ret;
        } else {
            return QMessageBox::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qmessagebox_minimumsizehint_isbase) {
            qmessagebox_minimumsizehint_isbase = false;
            return QMessageBox::minimumSizeHint();
        } else if (qmessagebox_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qmessagebox_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QMessageBox::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qmessagebox_open_isbase) {
            qmessagebox_open_isbase = false;
            QMessageBox::open();
        } else if (qmessagebox_open_callback != nullptr) {
            qmessagebox_open_callback();
        } else {
            QMessageBox::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qmessagebox_exec_isbase) {
            qmessagebox_exec_isbase = false;
            return QMessageBox::exec();
        } else if (qmessagebox_exec_callback != nullptr) {
            int callback_ret = qmessagebox_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QMessageBox::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (qmessagebox_done_isbase) {
            qmessagebox_done_isbase = false;
            QMessageBox::done(param1);
        } else if (qmessagebox_done_callback != nullptr) {
            int cbval1 = param1;

            qmessagebox_done_callback(this, cbval1);
        } else {
            QMessageBox::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qmessagebox_accept_isbase) {
            qmessagebox_accept_isbase = false;
            QMessageBox::accept();
        } else if (qmessagebox_accept_callback != nullptr) {
            qmessagebox_accept_callback();
        } else {
            QMessageBox::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qmessagebox_reject_isbase) {
            qmessagebox_reject_isbase = false;
            QMessageBox::reject();
        } else if (qmessagebox_reject_callback != nullptr) {
            qmessagebox_reject_callback();
        } else {
            QMessageBox::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qmessagebox_contextmenuevent_isbase) {
            qmessagebox_contextmenuevent_isbase = false;
            QMessageBox::contextMenuEvent(param1);
        } else if (qmessagebox_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            qmessagebox_contextmenuevent_callback(this, cbval1);
        } else {
            QMessageBox::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qmessagebox_eventfilter_isbase) {
            qmessagebox_eventfilter_isbase = false;
            return QMessageBox::eventFilter(param1, param2);
        } else if (qmessagebox_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = qmessagebox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QMessageBox::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qmessagebox_devtype_isbase) {
            qmessagebox_devtype_isbase = false;
            return QMessageBox::devType();
        } else if (qmessagebox_devtype_callback != nullptr) {
            int callback_ret = qmessagebox_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QMessageBox::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qmessagebox_heightforwidth_isbase) {
            qmessagebox_heightforwidth_isbase = false;
            return QMessageBox::heightForWidth(param1);
        } else if (qmessagebox_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qmessagebox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QMessageBox::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qmessagebox_hasheightforwidth_isbase) {
            qmessagebox_hasheightforwidth_isbase = false;
            return QMessageBox::hasHeightForWidth();
        } else if (qmessagebox_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qmessagebox_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QMessageBox::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qmessagebox_paintengine_isbase) {
            qmessagebox_paintengine_isbase = false;
            return QMessageBox::paintEngine();
        } else if (qmessagebox_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qmessagebox_paintengine_callback();
            return callback_ret;
        } else {
            return QMessageBox::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qmessagebox_mousepressevent_isbase) {
            qmessagebox_mousepressevent_isbase = false;
            QMessageBox::mousePressEvent(event);
        } else if (qmessagebox_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qmessagebox_mousepressevent_callback(this, cbval1);
        } else {
            QMessageBox::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qmessagebox_mousereleaseevent_isbase) {
            qmessagebox_mousereleaseevent_isbase = false;
            QMessageBox::mouseReleaseEvent(event);
        } else if (qmessagebox_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qmessagebox_mousereleaseevent_callback(this, cbval1);
        } else {
            QMessageBox::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qmessagebox_mousedoubleclickevent_isbase) {
            qmessagebox_mousedoubleclickevent_isbase = false;
            QMessageBox::mouseDoubleClickEvent(event);
        } else if (qmessagebox_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qmessagebox_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QMessageBox::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qmessagebox_mousemoveevent_isbase) {
            qmessagebox_mousemoveevent_isbase = false;
            QMessageBox::mouseMoveEvent(event);
        } else if (qmessagebox_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qmessagebox_mousemoveevent_callback(this, cbval1);
        } else {
            QMessageBox::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qmessagebox_wheelevent_isbase) {
            qmessagebox_wheelevent_isbase = false;
            QMessageBox::wheelEvent(event);
        } else if (qmessagebox_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qmessagebox_wheelevent_callback(this, cbval1);
        } else {
            QMessageBox::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qmessagebox_keyreleaseevent_isbase) {
            qmessagebox_keyreleaseevent_isbase = false;
            QMessageBox::keyReleaseEvent(event);
        } else if (qmessagebox_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qmessagebox_keyreleaseevent_callback(this, cbval1);
        } else {
            QMessageBox::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qmessagebox_focusinevent_isbase) {
            qmessagebox_focusinevent_isbase = false;
            QMessageBox::focusInEvent(event);
        } else if (qmessagebox_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qmessagebox_focusinevent_callback(this, cbval1);
        } else {
            QMessageBox::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qmessagebox_focusoutevent_isbase) {
            qmessagebox_focusoutevent_isbase = false;
            QMessageBox::focusOutEvent(event);
        } else if (qmessagebox_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qmessagebox_focusoutevent_callback(this, cbval1);
        } else {
            QMessageBox::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qmessagebox_enterevent_isbase) {
            qmessagebox_enterevent_isbase = false;
            QMessageBox::enterEvent(event);
        } else if (qmessagebox_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qmessagebox_enterevent_callback(this, cbval1);
        } else {
            QMessageBox::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qmessagebox_leaveevent_isbase) {
            qmessagebox_leaveevent_isbase = false;
            QMessageBox::leaveEvent(event);
        } else if (qmessagebox_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qmessagebox_leaveevent_callback(this, cbval1);
        } else {
            QMessageBox::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qmessagebox_paintevent_isbase) {
            qmessagebox_paintevent_isbase = false;
            QMessageBox::paintEvent(event);
        } else if (qmessagebox_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qmessagebox_paintevent_callback(this, cbval1);
        } else {
            QMessageBox::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qmessagebox_moveevent_isbase) {
            qmessagebox_moveevent_isbase = false;
            QMessageBox::moveEvent(event);
        } else if (qmessagebox_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qmessagebox_moveevent_callback(this, cbval1);
        } else {
            QMessageBox::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qmessagebox_tabletevent_isbase) {
            qmessagebox_tabletevent_isbase = false;
            QMessageBox::tabletEvent(event);
        } else if (qmessagebox_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qmessagebox_tabletevent_callback(this, cbval1);
        } else {
            QMessageBox::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qmessagebox_actionevent_isbase) {
            qmessagebox_actionevent_isbase = false;
            QMessageBox::actionEvent(event);
        } else if (qmessagebox_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qmessagebox_actionevent_callback(this, cbval1);
        } else {
            QMessageBox::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qmessagebox_dragenterevent_isbase) {
            qmessagebox_dragenterevent_isbase = false;
            QMessageBox::dragEnterEvent(event);
        } else if (qmessagebox_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qmessagebox_dragenterevent_callback(this, cbval1);
        } else {
            QMessageBox::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qmessagebox_dragmoveevent_isbase) {
            qmessagebox_dragmoveevent_isbase = false;
            QMessageBox::dragMoveEvent(event);
        } else if (qmessagebox_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qmessagebox_dragmoveevent_callback(this, cbval1);
        } else {
            QMessageBox::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qmessagebox_dragleaveevent_isbase) {
            qmessagebox_dragleaveevent_isbase = false;
            QMessageBox::dragLeaveEvent(event);
        } else if (qmessagebox_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qmessagebox_dragleaveevent_callback(this, cbval1);
        } else {
            QMessageBox::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qmessagebox_dropevent_isbase) {
            qmessagebox_dropevent_isbase = false;
            QMessageBox::dropEvent(event);
        } else if (qmessagebox_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qmessagebox_dropevent_callback(this, cbval1);
        } else {
            QMessageBox::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qmessagebox_hideevent_isbase) {
            qmessagebox_hideevent_isbase = false;
            QMessageBox::hideEvent(event);
        } else if (qmessagebox_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qmessagebox_hideevent_callback(this, cbval1);
        } else {
            QMessageBox::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qmessagebox_nativeevent_isbase) {
            qmessagebox_nativeevent_isbase = false;
            return QMessageBox::nativeEvent(eventType, message, result);
        } else if (qmessagebox_nativeevent_callback != nullptr) {
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

            bool callback_ret = qmessagebox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QMessageBox::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qmessagebox_metric_isbase) {
            qmessagebox_metric_isbase = false;
            return QMessageBox::metric(param1);
        } else if (qmessagebox_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qmessagebox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QMessageBox::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qmessagebox_initpainter_isbase) {
            qmessagebox_initpainter_isbase = false;
            QMessageBox::initPainter(painter);
        } else if (qmessagebox_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qmessagebox_initpainter_callback(this, cbval1);
        } else {
            QMessageBox::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qmessagebox_redirected_isbase) {
            qmessagebox_redirected_isbase = false;
            return QMessageBox::redirected(offset);
        } else if (qmessagebox_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qmessagebox_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMessageBox::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qmessagebox_sharedpainter_isbase) {
            qmessagebox_sharedpainter_isbase = false;
            return QMessageBox::sharedPainter();
        } else if (qmessagebox_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qmessagebox_sharedpainter_callback();
            return callback_ret;
        } else {
            return QMessageBox::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qmessagebox_inputmethodevent_isbase) {
            qmessagebox_inputmethodevent_isbase = false;
            QMessageBox::inputMethodEvent(param1);
        } else if (qmessagebox_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qmessagebox_inputmethodevent_callback(this, cbval1);
        } else {
            QMessageBox::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qmessagebox_inputmethodquery_isbase) {
            qmessagebox_inputmethodquery_isbase = false;
            return QMessageBox::inputMethodQuery(param1);
        } else if (qmessagebox_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qmessagebox_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QMessageBox::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qmessagebox_focusnextprevchild_isbase) {
            qmessagebox_focusnextprevchild_isbase = false;
            return QMessageBox::focusNextPrevChild(next);
        } else if (qmessagebox_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qmessagebox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMessageBox::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmessagebox_timerevent_isbase) {
            qmessagebox_timerevent_isbase = false;
            QMessageBox::timerEvent(event);
        } else if (qmessagebox_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qmessagebox_timerevent_callback(this, cbval1);
        } else {
            QMessageBox::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmessagebox_childevent_isbase) {
            qmessagebox_childevent_isbase = false;
            QMessageBox::childEvent(event);
        } else if (qmessagebox_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qmessagebox_childevent_callback(this, cbval1);
        } else {
            QMessageBox::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmessagebox_customevent_isbase) {
            qmessagebox_customevent_isbase = false;
            QMessageBox::customEvent(event);
        } else if (qmessagebox_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qmessagebox_customevent_callback(this, cbval1);
        } else {
            QMessageBox::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmessagebox_connectnotify_isbase) {
            qmessagebox_connectnotify_isbase = false;
            QMessageBox::connectNotify(signal);
        } else if (qmessagebox_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qmessagebox_connectnotify_callback(this, cbval1);
        } else {
            QMessageBox::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmessagebox_disconnectnotify_isbase) {
            qmessagebox_disconnectnotify_isbase = false;
            QMessageBox::disconnectNotify(signal);
        } else if (qmessagebox_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qmessagebox_disconnectnotify_callback(this, cbval1);
        } else {
            QMessageBox::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (qmessagebox_adjustposition_isbase) {
            qmessagebox_adjustposition_isbase = false;
            QMessageBox::adjustPosition(param1);
        } else if (qmessagebox_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            qmessagebox_adjustposition_callback(this, cbval1);
        } else {
            QMessageBox::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qmessagebox_updatemicrofocus_isbase) {
            qmessagebox_updatemicrofocus_isbase = false;
            QMessageBox::updateMicroFocus();
        } else if (qmessagebox_updatemicrofocus_callback != nullptr) {
            qmessagebox_updatemicrofocus_callback();
        } else {
            QMessageBox::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qmessagebox_create_isbase) {
            qmessagebox_create_isbase = false;
            QMessageBox::create();
        } else if (qmessagebox_create_callback != nullptr) {
            qmessagebox_create_callback();
        } else {
            QMessageBox::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qmessagebox_destroy_isbase) {
            qmessagebox_destroy_isbase = false;
            QMessageBox::destroy();
        } else if (qmessagebox_destroy_callback != nullptr) {
            qmessagebox_destroy_callback();
        } else {
            QMessageBox::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qmessagebox_focusnextchild_isbase) {
            qmessagebox_focusnextchild_isbase = false;
            return QMessageBox::focusNextChild();
        } else if (qmessagebox_focusnextchild_callback != nullptr) {
            bool callback_ret = qmessagebox_focusnextchild_callback();
            return callback_ret;
        } else {
            return QMessageBox::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qmessagebox_focuspreviouschild_isbase) {
            qmessagebox_focuspreviouschild_isbase = false;
            return QMessageBox::focusPreviousChild();
        } else if (qmessagebox_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qmessagebox_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QMessageBox::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qmessagebox_sender_isbase) {
            qmessagebox_sender_isbase = false;
            return QMessageBox::sender();
        } else if (qmessagebox_sender_callback != nullptr) {
            QObject* callback_ret = qmessagebox_sender_callback();
            return callback_ret;
        } else {
            return QMessageBox::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qmessagebox_sendersignalindex_isbase) {
            qmessagebox_sendersignalindex_isbase = false;
            return QMessageBox::senderSignalIndex();
        } else if (qmessagebox_sendersignalindex_callback != nullptr) {
            int callback_ret = qmessagebox_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QMessageBox::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qmessagebox_receivers_isbase) {
            qmessagebox_receivers_isbase = false;
            return QMessageBox::receivers(signal);
        } else if (qmessagebox_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qmessagebox_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QMessageBox::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qmessagebox_issignalconnected_isbase) {
            qmessagebox_issignalconnected_isbase = false;
            return QMessageBox::isSignalConnected(signal);
        } else if (qmessagebox_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qmessagebox_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QMessageBox::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QMessageBox_Event(QMessageBox* self, QEvent* e);
    friend bool QMessageBox_QBaseEvent(QMessageBox* self, QEvent* e);
    friend void QMessageBox_ResizeEvent(QMessageBox* self, QResizeEvent* event);
    friend void QMessageBox_QBaseResizeEvent(QMessageBox* self, QResizeEvent* event);
    friend void QMessageBox_ShowEvent(QMessageBox* self, QShowEvent* event);
    friend void QMessageBox_QBaseShowEvent(QMessageBox* self, QShowEvent* event);
    friend void QMessageBox_CloseEvent(QMessageBox* self, QCloseEvent* event);
    friend void QMessageBox_QBaseCloseEvent(QMessageBox* self, QCloseEvent* event);
    friend void QMessageBox_KeyPressEvent(QMessageBox* self, QKeyEvent* event);
    friend void QMessageBox_QBaseKeyPressEvent(QMessageBox* self, QKeyEvent* event);
    friend void QMessageBox_ChangeEvent(QMessageBox* self, QEvent* event);
    friend void QMessageBox_QBaseChangeEvent(QMessageBox* self, QEvent* event);
    friend void QMessageBox_ContextMenuEvent(QMessageBox* self, QContextMenuEvent* param1);
    friend void QMessageBox_QBaseContextMenuEvent(QMessageBox* self, QContextMenuEvent* param1);
    friend bool QMessageBox_EventFilter(QMessageBox* self, QObject* param1, QEvent* param2);
    friend bool QMessageBox_QBaseEventFilter(QMessageBox* self, QObject* param1, QEvent* param2);
    friend void QMessageBox_MousePressEvent(QMessageBox* self, QMouseEvent* event);
    friend void QMessageBox_QBaseMousePressEvent(QMessageBox* self, QMouseEvent* event);
    friend void QMessageBox_MouseReleaseEvent(QMessageBox* self, QMouseEvent* event);
    friend void QMessageBox_QBaseMouseReleaseEvent(QMessageBox* self, QMouseEvent* event);
    friend void QMessageBox_MouseDoubleClickEvent(QMessageBox* self, QMouseEvent* event);
    friend void QMessageBox_QBaseMouseDoubleClickEvent(QMessageBox* self, QMouseEvent* event);
    friend void QMessageBox_MouseMoveEvent(QMessageBox* self, QMouseEvent* event);
    friend void QMessageBox_QBaseMouseMoveEvent(QMessageBox* self, QMouseEvent* event);
    friend void QMessageBox_WheelEvent(QMessageBox* self, QWheelEvent* event);
    friend void QMessageBox_QBaseWheelEvent(QMessageBox* self, QWheelEvent* event);
    friend void QMessageBox_KeyReleaseEvent(QMessageBox* self, QKeyEvent* event);
    friend void QMessageBox_QBaseKeyReleaseEvent(QMessageBox* self, QKeyEvent* event);
    friend void QMessageBox_FocusInEvent(QMessageBox* self, QFocusEvent* event);
    friend void QMessageBox_QBaseFocusInEvent(QMessageBox* self, QFocusEvent* event);
    friend void QMessageBox_FocusOutEvent(QMessageBox* self, QFocusEvent* event);
    friend void QMessageBox_QBaseFocusOutEvent(QMessageBox* self, QFocusEvent* event);
    friend void QMessageBox_EnterEvent(QMessageBox* self, QEnterEvent* event);
    friend void QMessageBox_QBaseEnterEvent(QMessageBox* self, QEnterEvent* event);
    friend void QMessageBox_LeaveEvent(QMessageBox* self, QEvent* event);
    friend void QMessageBox_QBaseLeaveEvent(QMessageBox* self, QEvent* event);
    friend void QMessageBox_PaintEvent(QMessageBox* self, QPaintEvent* event);
    friend void QMessageBox_QBasePaintEvent(QMessageBox* self, QPaintEvent* event);
    friend void QMessageBox_MoveEvent(QMessageBox* self, QMoveEvent* event);
    friend void QMessageBox_QBaseMoveEvent(QMessageBox* self, QMoveEvent* event);
    friend void QMessageBox_TabletEvent(QMessageBox* self, QTabletEvent* event);
    friend void QMessageBox_QBaseTabletEvent(QMessageBox* self, QTabletEvent* event);
    friend void QMessageBox_ActionEvent(QMessageBox* self, QActionEvent* event);
    friend void QMessageBox_QBaseActionEvent(QMessageBox* self, QActionEvent* event);
    friend void QMessageBox_DragEnterEvent(QMessageBox* self, QDragEnterEvent* event);
    friend void QMessageBox_QBaseDragEnterEvent(QMessageBox* self, QDragEnterEvent* event);
    friend void QMessageBox_DragMoveEvent(QMessageBox* self, QDragMoveEvent* event);
    friend void QMessageBox_QBaseDragMoveEvent(QMessageBox* self, QDragMoveEvent* event);
    friend void QMessageBox_DragLeaveEvent(QMessageBox* self, QDragLeaveEvent* event);
    friend void QMessageBox_QBaseDragLeaveEvent(QMessageBox* self, QDragLeaveEvent* event);
    friend void QMessageBox_DropEvent(QMessageBox* self, QDropEvent* event);
    friend void QMessageBox_QBaseDropEvent(QMessageBox* self, QDropEvent* event);
    friend void QMessageBox_HideEvent(QMessageBox* self, QHideEvent* event);
    friend void QMessageBox_QBaseHideEvent(QMessageBox* self, QHideEvent* event);
    friend bool QMessageBox_NativeEvent(QMessageBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QMessageBox_QBaseNativeEvent(QMessageBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QMessageBox_Metric(const QMessageBox* self, int param1);
    friend int QMessageBox_QBaseMetric(const QMessageBox* self, int param1);
    friend void QMessageBox_InitPainter(const QMessageBox* self, QPainter* painter);
    friend void QMessageBox_QBaseInitPainter(const QMessageBox* self, QPainter* painter);
    friend QPaintDevice* QMessageBox_Redirected(const QMessageBox* self, QPoint* offset);
    friend QPaintDevice* QMessageBox_QBaseRedirected(const QMessageBox* self, QPoint* offset);
    friend QPainter* QMessageBox_SharedPainter(const QMessageBox* self);
    friend QPainter* QMessageBox_QBaseSharedPainter(const QMessageBox* self);
    friend void QMessageBox_InputMethodEvent(QMessageBox* self, QInputMethodEvent* param1);
    friend void QMessageBox_QBaseInputMethodEvent(QMessageBox* self, QInputMethodEvent* param1);
    friend bool QMessageBox_FocusNextPrevChild(QMessageBox* self, bool next);
    friend bool QMessageBox_QBaseFocusNextPrevChild(QMessageBox* self, bool next);
    friend void QMessageBox_TimerEvent(QMessageBox* self, QTimerEvent* event);
    friend void QMessageBox_QBaseTimerEvent(QMessageBox* self, QTimerEvent* event);
    friend void QMessageBox_ChildEvent(QMessageBox* self, QChildEvent* event);
    friend void QMessageBox_QBaseChildEvent(QMessageBox* self, QChildEvent* event);
    friend void QMessageBox_CustomEvent(QMessageBox* self, QEvent* event);
    friend void QMessageBox_QBaseCustomEvent(QMessageBox* self, QEvent* event);
    friend void QMessageBox_ConnectNotify(QMessageBox* self, const QMetaMethod* signal);
    friend void QMessageBox_QBaseConnectNotify(QMessageBox* self, const QMetaMethod* signal);
    friend void QMessageBox_DisconnectNotify(QMessageBox* self, const QMetaMethod* signal);
    friend void QMessageBox_QBaseDisconnectNotify(QMessageBox* self, const QMetaMethod* signal);
    friend void QMessageBox_AdjustPosition(QMessageBox* self, QWidget* param1);
    friend void QMessageBox_QBaseAdjustPosition(QMessageBox* self, QWidget* param1);
    friend void QMessageBox_UpdateMicroFocus(QMessageBox* self);
    friend void QMessageBox_QBaseUpdateMicroFocus(QMessageBox* self);
    friend void QMessageBox_Create(QMessageBox* self);
    friend void QMessageBox_QBaseCreate(QMessageBox* self);
    friend void QMessageBox_Destroy(QMessageBox* self);
    friend void QMessageBox_QBaseDestroy(QMessageBox* self);
    friend bool QMessageBox_FocusNextChild(QMessageBox* self);
    friend bool QMessageBox_QBaseFocusNextChild(QMessageBox* self);
    friend bool QMessageBox_FocusPreviousChild(QMessageBox* self);
    friend bool QMessageBox_QBaseFocusPreviousChild(QMessageBox* self);
    friend QObject* QMessageBox_Sender(const QMessageBox* self);
    friend QObject* QMessageBox_QBaseSender(const QMessageBox* self);
    friend int QMessageBox_SenderSignalIndex(const QMessageBox* self);
    friend int QMessageBox_QBaseSenderSignalIndex(const QMessageBox* self);
    friend int QMessageBox_Receivers(const QMessageBox* self, const char* signal);
    friend int QMessageBox_QBaseReceivers(const QMessageBox* self, const char* signal);
    friend bool QMessageBox_IsSignalConnected(const QMessageBox* self, const QMetaMethod* signal);
    friend bool QMessageBox_QBaseIsSignalConnected(const QMessageBox* self, const QMetaMethod* signal);
};

#endif
