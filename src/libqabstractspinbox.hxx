#pragma once
#ifndef SRCC_LIBVIRTUALQABSTRACTSPINBOX_H
#define SRCC_LIBVIRTUALQABSTRACTSPINBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractSpinBox so that we can call protected methods
class VirtualQAbstractSpinBox final : public QAbstractSpinBox {

  public:
    // Virtual class boolean flag
    bool isVirtualQAbstractSpinBox = true;

    // Virtual class public types (including callbacks)
    using QAbstractSpinBox_Metacall_Callback = int (*)(QAbstractSpinBox*, int, int, void**);
    using QAbstractSpinBox_SizeHint_Callback = QSize* (*)();
    using QAbstractSpinBox_MinimumSizeHint_Callback = QSize* (*)();
    using QAbstractSpinBox_Event_Callback = bool (*)(QAbstractSpinBox*, QEvent*);
    using QAbstractSpinBox_InputMethodQuery_Callback = QVariant* (*)(const QAbstractSpinBox*, int);
    using QAbstractSpinBox_Validate_Callback = int (*)(const QAbstractSpinBox*, libqt_string, int*);
    using QAbstractSpinBox_Fixup_Callback = void (*)(const QAbstractSpinBox*, libqt_string);
    using QAbstractSpinBox_StepBy_Callback = void (*)(QAbstractSpinBox*, int);
    using QAbstractSpinBox_Clear_Callback = void (*)();
    using QAbstractSpinBox_ResizeEvent_Callback = void (*)(QAbstractSpinBox*, QResizeEvent*);
    using QAbstractSpinBox_KeyPressEvent_Callback = void (*)(QAbstractSpinBox*, QKeyEvent*);
    using QAbstractSpinBox_KeyReleaseEvent_Callback = void (*)(QAbstractSpinBox*, QKeyEvent*);
    using QAbstractSpinBox_WheelEvent_Callback = void (*)(QAbstractSpinBox*, QWheelEvent*);
    using QAbstractSpinBox_FocusInEvent_Callback = void (*)(QAbstractSpinBox*, QFocusEvent*);
    using QAbstractSpinBox_FocusOutEvent_Callback = void (*)(QAbstractSpinBox*, QFocusEvent*);
    using QAbstractSpinBox_ContextMenuEvent_Callback = void (*)(QAbstractSpinBox*, QContextMenuEvent*);
    using QAbstractSpinBox_ChangeEvent_Callback = void (*)(QAbstractSpinBox*, QEvent*);
    using QAbstractSpinBox_CloseEvent_Callback = void (*)(QAbstractSpinBox*, QCloseEvent*);
    using QAbstractSpinBox_HideEvent_Callback = void (*)(QAbstractSpinBox*, QHideEvent*);
    using QAbstractSpinBox_MousePressEvent_Callback = void (*)(QAbstractSpinBox*, QMouseEvent*);
    using QAbstractSpinBox_MouseReleaseEvent_Callback = void (*)(QAbstractSpinBox*, QMouseEvent*);
    using QAbstractSpinBox_MouseMoveEvent_Callback = void (*)(QAbstractSpinBox*, QMouseEvent*);
    using QAbstractSpinBox_TimerEvent_Callback = void (*)(QAbstractSpinBox*, QTimerEvent*);
    using QAbstractSpinBox_PaintEvent_Callback = void (*)(QAbstractSpinBox*, QPaintEvent*);
    using QAbstractSpinBox_ShowEvent_Callback = void (*)(QAbstractSpinBox*, QShowEvent*);
    using QAbstractSpinBox_InitStyleOption_Callback = void (*)(const QAbstractSpinBox*, QStyleOptionSpinBox*);
    using QAbstractSpinBox_StepEnabled_Callback = int (*)();
    using QAbstractSpinBox_DevType_Callback = int (*)();
    using QAbstractSpinBox_SetVisible_Callback = void (*)(QAbstractSpinBox*, bool);
    using QAbstractSpinBox_HeightForWidth_Callback = int (*)(const QAbstractSpinBox*, int);
    using QAbstractSpinBox_HasHeightForWidth_Callback = bool (*)();
    using QAbstractSpinBox_PaintEngine_Callback = QPaintEngine* (*)();
    using QAbstractSpinBox_MouseDoubleClickEvent_Callback = void (*)(QAbstractSpinBox*, QMouseEvent*);
    using QAbstractSpinBox_EnterEvent_Callback = void (*)(QAbstractSpinBox*, QEnterEvent*);
    using QAbstractSpinBox_LeaveEvent_Callback = void (*)(QAbstractSpinBox*, QEvent*);
    using QAbstractSpinBox_MoveEvent_Callback = void (*)(QAbstractSpinBox*, QMoveEvent*);
    using QAbstractSpinBox_TabletEvent_Callback = void (*)(QAbstractSpinBox*, QTabletEvent*);
    using QAbstractSpinBox_ActionEvent_Callback = void (*)(QAbstractSpinBox*, QActionEvent*);
    using QAbstractSpinBox_DragEnterEvent_Callback = void (*)(QAbstractSpinBox*, QDragEnterEvent*);
    using QAbstractSpinBox_DragMoveEvent_Callback = void (*)(QAbstractSpinBox*, QDragMoveEvent*);
    using QAbstractSpinBox_DragLeaveEvent_Callback = void (*)(QAbstractSpinBox*, QDragLeaveEvent*);
    using QAbstractSpinBox_DropEvent_Callback = void (*)(QAbstractSpinBox*, QDropEvent*);
    using QAbstractSpinBox_NativeEvent_Callback = bool (*)(QAbstractSpinBox*, libqt_string, void*, intptr_t*);
    using QAbstractSpinBox_Metric_Callback = int (*)(const QAbstractSpinBox*, int);
    using QAbstractSpinBox_InitPainter_Callback = void (*)(const QAbstractSpinBox*, QPainter*);
    using QAbstractSpinBox_Redirected_Callback = QPaintDevice* (*)(const QAbstractSpinBox*, QPoint*);
    using QAbstractSpinBox_SharedPainter_Callback = QPainter* (*)();
    using QAbstractSpinBox_InputMethodEvent_Callback = void (*)(QAbstractSpinBox*, QInputMethodEvent*);
    using QAbstractSpinBox_FocusNextPrevChild_Callback = bool (*)(QAbstractSpinBox*, bool);
    using QAbstractSpinBox_EventFilter_Callback = bool (*)(QAbstractSpinBox*, QObject*, QEvent*);
    using QAbstractSpinBox_ChildEvent_Callback = void (*)(QAbstractSpinBox*, QChildEvent*);
    using QAbstractSpinBox_CustomEvent_Callback = void (*)(QAbstractSpinBox*, QEvent*);
    using QAbstractSpinBox_ConnectNotify_Callback = void (*)(QAbstractSpinBox*, QMetaMethod*);
    using QAbstractSpinBox_DisconnectNotify_Callback = void (*)(QAbstractSpinBox*, QMetaMethod*);
    using QAbstractSpinBox_LineEdit_Callback = QLineEdit* (*)();
    using QAbstractSpinBox_SetLineEdit_Callback = void (*)(QAbstractSpinBox*, QLineEdit*);
    using QAbstractSpinBox_UpdateMicroFocus_Callback = void (*)();
    using QAbstractSpinBox_Create_Callback = void (*)();
    using QAbstractSpinBox_Destroy_Callback = void (*)();
    using QAbstractSpinBox_FocusNextChild_Callback = bool (*)();
    using QAbstractSpinBox_FocusPreviousChild_Callback = bool (*)();
    using QAbstractSpinBox_Sender_Callback = QObject* (*)();
    using QAbstractSpinBox_SenderSignalIndex_Callback = int (*)();
    using QAbstractSpinBox_Receivers_Callback = int (*)(const QAbstractSpinBox*, const char*);
    using QAbstractSpinBox_IsSignalConnected_Callback = bool (*)(const QAbstractSpinBox*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAbstractSpinBox_Metacall_Callback qabstractspinbox_metacall_callback = nullptr;
    QAbstractSpinBox_SizeHint_Callback qabstractspinbox_sizehint_callback = nullptr;
    QAbstractSpinBox_MinimumSizeHint_Callback qabstractspinbox_minimumsizehint_callback = nullptr;
    QAbstractSpinBox_Event_Callback qabstractspinbox_event_callback = nullptr;
    QAbstractSpinBox_InputMethodQuery_Callback qabstractspinbox_inputmethodquery_callback = nullptr;
    QAbstractSpinBox_Validate_Callback qabstractspinbox_validate_callback = nullptr;
    QAbstractSpinBox_Fixup_Callback qabstractspinbox_fixup_callback = nullptr;
    QAbstractSpinBox_StepBy_Callback qabstractspinbox_stepby_callback = nullptr;
    QAbstractSpinBox_Clear_Callback qabstractspinbox_clear_callback = nullptr;
    QAbstractSpinBox_ResizeEvent_Callback qabstractspinbox_resizeevent_callback = nullptr;
    QAbstractSpinBox_KeyPressEvent_Callback qabstractspinbox_keypressevent_callback = nullptr;
    QAbstractSpinBox_KeyReleaseEvent_Callback qabstractspinbox_keyreleaseevent_callback = nullptr;
    QAbstractSpinBox_WheelEvent_Callback qabstractspinbox_wheelevent_callback = nullptr;
    QAbstractSpinBox_FocusInEvent_Callback qabstractspinbox_focusinevent_callback = nullptr;
    QAbstractSpinBox_FocusOutEvent_Callback qabstractspinbox_focusoutevent_callback = nullptr;
    QAbstractSpinBox_ContextMenuEvent_Callback qabstractspinbox_contextmenuevent_callback = nullptr;
    QAbstractSpinBox_ChangeEvent_Callback qabstractspinbox_changeevent_callback = nullptr;
    QAbstractSpinBox_CloseEvent_Callback qabstractspinbox_closeevent_callback = nullptr;
    QAbstractSpinBox_HideEvent_Callback qabstractspinbox_hideevent_callback = nullptr;
    QAbstractSpinBox_MousePressEvent_Callback qabstractspinbox_mousepressevent_callback = nullptr;
    QAbstractSpinBox_MouseReleaseEvent_Callback qabstractspinbox_mousereleaseevent_callback = nullptr;
    QAbstractSpinBox_MouseMoveEvent_Callback qabstractspinbox_mousemoveevent_callback = nullptr;
    QAbstractSpinBox_TimerEvent_Callback qabstractspinbox_timerevent_callback = nullptr;
    QAbstractSpinBox_PaintEvent_Callback qabstractspinbox_paintevent_callback = nullptr;
    QAbstractSpinBox_ShowEvent_Callback qabstractspinbox_showevent_callback = nullptr;
    QAbstractSpinBox_InitStyleOption_Callback qabstractspinbox_initstyleoption_callback = nullptr;
    QAbstractSpinBox_StepEnabled_Callback qabstractspinbox_stepenabled_callback = nullptr;
    QAbstractSpinBox_DevType_Callback qabstractspinbox_devtype_callback = nullptr;
    QAbstractSpinBox_SetVisible_Callback qabstractspinbox_setvisible_callback = nullptr;
    QAbstractSpinBox_HeightForWidth_Callback qabstractspinbox_heightforwidth_callback = nullptr;
    QAbstractSpinBox_HasHeightForWidth_Callback qabstractspinbox_hasheightforwidth_callback = nullptr;
    QAbstractSpinBox_PaintEngine_Callback qabstractspinbox_paintengine_callback = nullptr;
    QAbstractSpinBox_MouseDoubleClickEvent_Callback qabstractspinbox_mousedoubleclickevent_callback = nullptr;
    QAbstractSpinBox_EnterEvent_Callback qabstractspinbox_enterevent_callback = nullptr;
    QAbstractSpinBox_LeaveEvent_Callback qabstractspinbox_leaveevent_callback = nullptr;
    QAbstractSpinBox_MoveEvent_Callback qabstractspinbox_moveevent_callback = nullptr;
    QAbstractSpinBox_TabletEvent_Callback qabstractspinbox_tabletevent_callback = nullptr;
    QAbstractSpinBox_ActionEvent_Callback qabstractspinbox_actionevent_callback = nullptr;
    QAbstractSpinBox_DragEnterEvent_Callback qabstractspinbox_dragenterevent_callback = nullptr;
    QAbstractSpinBox_DragMoveEvent_Callback qabstractspinbox_dragmoveevent_callback = nullptr;
    QAbstractSpinBox_DragLeaveEvent_Callback qabstractspinbox_dragleaveevent_callback = nullptr;
    QAbstractSpinBox_DropEvent_Callback qabstractspinbox_dropevent_callback = nullptr;
    QAbstractSpinBox_NativeEvent_Callback qabstractspinbox_nativeevent_callback = nullptr;
    QAbstractSpinBox_Metric_Callback qabstractspinbox_metric_callback = nullptr;
    QAbstractSpinBox_InitPainter_Callback qabstractspinbox_initpainter_callback = nullptr;
    QAbstractSpinBox_Redirected_Callback qabstractspinbox_redirected_callback = nullptr;
    QAbstractSpinBox_SharedPainter_Callback qabstractspinbox_sharedpainter_callback = nullptr;
    QAbstractSpinBox_InputMethodEvent_Callback qabstractspinbox_inputmethodevent_callback = nullptr;
    QAbstractSpinBox_FocusNextPrevChild_Callback qabstractspinbox_focusnextprevchild_callback = nullptr;
    QAbstractSpinBox_EventFilter_Callback qabstractspinbox_eventfilter_callback = nullptr;
    QAbstractSpinBox_ChildEvent_Callback qabstractspinbox_childevent_callback = nullptr;
    QAbstractSpinBox_CustomEvent_Callback qabstractspinbox_customevent_callback = nullptr;
    QAbstractSpinBox_ConnectNotify_Callback qabstractspinbox_connectnotify_callback = nullptr;
    QAbstractSpinBox_DisconnectNotify_Callback qabstractspinbox_disconnectnotify_callback = nullptr;
    QAbstractSpinBox_LineEdit_Callback qabstractspinbox_lineedit_callback = nullptr;
    QAbstractSpinBox_SetLineEdit_Callback qabstractspinbox_setlineedit_callback = nullptr;
    QAbstractSpinBox_UpdateMicroFocus_Callback qabstractspinbox_updatemicrofocus_callback = nullptr;
    QAbstractSpinBox_Create_Callback qabstractspinbox_create_callback = nullptr;
    QAbstractSpinBox_Destroy_Callback qabstractspinbox_destroy_callback = nullptr;
    QAbstractSpinBox_FocusNextChild_Callback qabstractspinbox_focusnextchild_callback = nullptr;
    QAbstractSpinBox_FocusPreviousChild_Callback qabstractspinbox_focuspreviouschild_callback = nullptr;
    QAbstractSpinBox_Sender_Callback qabstractspinbox_sender_callback = nullptr;
    QAbstractSpinBox_SenderSignalIndex_Callback qabstractspinbox_sendersignalindex_callback = nullptr;
    QAbstractSpinBox_Receivers_Callback qabstractspinbox_receivers_callback = nullptr;
    QAbstractSpinBox_IsSignalConnected_Callback qabstractspinbox_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qabstractspinbox_metacall_isbase = false;
    mutable bool qabstractspinbox_sizehint_isbase = false;
    mutable bool qabstractspinbox_minimumsizehint_isbase = false;
    mutable bool qabstractspinbox_event_isbase = false;
    mutable bool qabstractspinbox_inputmethodquery_isbase = false;
    mutable bool qabstractspinbox_validate_isbase = false;
    mutable bool qabstractspinbox_fixup_isbase = false;
    mutable bool qabstractspinbox_stepby_isbase = false;
    mutable bool qabstractspinbox_clear_isbase = false;
    mutable bool qabstractspinbox_resizeevent_isbase = false;
    mutable bool qabstractspinbox_keypressevent_isbase = false;
    mutable bool qabstractspinbox_keyreleaseevent_isbase = false;
    mutable bool qabstractspinbox_wheelevent_isbase = false;
    mutable bool qabstractspinbox_focusinevent_isbase = false;
    mutable bool qabstractspinbox_focusoutevent_isbase = false;
    mutable bool qabstractspinbox_contextmenuevent_isbase = false;
    mutable bool qabstractspinbox_changeevent_isbase = false;
    mutable bool qabstractspinbox_closeevent_isbase = false;
    mutable bool qabstractspinbox_hideevent_isbase = false;
    mutable bool qabstractspinbox_mousepressevent_isbase = false;
    mutable bool qabstractspinbox_mousereleaseevent_isbase = false;
    mutable bool qabstractspinbox_mousemoveevent_isbase = false;
    mutable bool qabstractspinbox_timerevent_isbase = false;
    mutable bool qabstractspinbox_paintevent_isbase = false;
    mutable bool qabstractspinbox_showevent_isbase = false;
    mutable bool qabstractspinbox_initstyleoption_isbase = false;
    mutable bool qabstractspinbox_stepenabled_isbase = false;
    mutable bool qabstractspinbox_devtype_isbase = false;
    mutable bool qabstractspinbox_setvisible_isbase = false;
    mutable bool qabstractspinbox_heightforwidth_isbase = false;
    mutable bool qabstractspinbox_hasheightforwidth_isbase = false;
    mutable bool qabstractspinbox_paintengine_isbase = false;
    mutable bool qabstractspinbox_mousedoubleclickevent_isbase = false;
    mutable bool qabstractspinbox_enterevent_isbase = false;
    mutable bool qabstractspinbox_leaveevent_isbase = false;
    mutable bool qabstractspinbox_moveevent_isbase = false;
    mutable bool qabstractspinbox_tabletevent_isbase = false;
    mutable bool qabstractspinbox_actionevent_isbase = false;
    mutable bool qabstractspinbox_dragenterevent_isbase = false;
    mutable bool qabstractspinbox_dragmoveevent_isbase = false;
    mutable bool qabstractspinbox_dragleaveevent_isbase = false;
    mutable bool qabstractspinbox_dropevent_isbase = false;
    mutable bool qabstractspinbox_nativeevent_isbase = false;
    mutable bool qabstractspinbox_metric_isbase = false;
    mutable bool qabstractspinbox_initpainter_isbase = false;
    mutable bool qabstractspinbox_redirected_isbase = false;
    mutable bool qabstractspinbox_sharedpainter_isbase = false;
    mutable bool qabstractspinbox_inputmethodevent_isbase = false;
    mutable bool qabstractspinbox_focusnextprevchild_isbase = false;
    mutable bool qabstractspinbox_eventfilter_isbase = false;
    mutable bool qabstractspinbox_childevent_isbase = false;
    mutable bool qabstractspinbox_customevent_isbase = false;
    mutable bool qabstractspinbox_connectnotify_isbase = false;
    mutable bool qabstractspinbox_disconnectnotify_isbase = false;
    mutable bool qabstractspinbox_lineedit_isbase = false;
    mutable bool qabstractspinbox_setlineedit_isbase = false;
    mutable bool qabstractspinbox_updatemicrofocus_isbase = false;
    mutable bool qabstractspinbox_create_isbase = false;
    mutable bool qabstractspinbox_destroy_isbase = false;
    mutable bool qabstractspinbox_focusnextchild_isbase = false;
    mutable bool qabstractspinbox_focuspreviouschild_isbase = false;
    mutable bool qabstractspinbox_sender_isbase = false;
    mutable bool qabstractspinbox_sendersignalindex_isbase = false;
    mutable bool qabstractspinbox_receivers_isbase = false;
    mutable bool qabstractspinbox_issignalconnected_isbase = false;

  public:
    VirtualQAbstractSpinBox(QWidget* parent) : QAbstractSpinBox(parent){};
    VirtualQAbstractSpinBox() : QAbstractSpinBox(){};

    ~VirtualQAbstractSpinBox() {
        qabstractspinbox_metacall_callback = nullptr;
        qabstractspinbox_sizehint_callback = nullptr;
        qabstractspinbox_minimumsizehint_callback = nullptr;
        qabstractspinbox_event_callback = nullptr;
        qabstractspinbox_inputmethodquery_callback = nullptr;
        qabstractspinbox_validate_callback = nullptr;
        qabstractspinbox_fixup_callback = nullptr;
        qabstractspinbox_stepby_callback = nullptr;
        qabstractspinbox_clear_callback = nullptr;
        qabstractspinbox_resizeevent_callback = nullptr;
        qabstractspinbox_keypressevent_callback = nullptr;
        qabstractspinbox_keyreleaseevent_callback = nullptr;
        qabstractspinbox_wheelevent_callback = nullptr;
        qabstractspinbox_focusinevent_callback = nullptr;
        qabstractspinbox_focusoutevent_callback = nullptr;
        qabstractspinbox_contextmenuevent_callback = nullptr;
        qabstractspinbox_changeevent_callback = nullptr;
        qabstractspinbox_closeevent_callback = nullptr;
        qabstractspinbox_hideevent_callback = nullptr;
        qabstractspinbox_mousepressevent_callback = nullptr;
        qabstractspinbox_mousereleaseevent_callback = nullptr;
        qabstractspinbox_mousemoveevent_callback = nullptr;
        qabstractspinbox_timerevent_callback = nullptr;
        qabstractspinbox_paintevent_callback = nullptr;
        qabstractspinbox_showevent_callback = nullptr;
        qabstractspinbox_initstyleoption_callback = nullptr;
        qabstractspinbox_stepenabled_callback = nullptr;
        qabstractspinbox_devtype_callback = nullptr;
        qabstractspinbox_setvisible_callback = nullptr;
        qabstractspinbox_heightforwidth_callback = nullptr;
        qabstractspinbox_hasheightforwidth_callback = nullptr;
        qabstractspinbox_paintengine_callback = nullptr;
        qabstractspinbox_mousedoubleclickevent_callback = nullptr;
        qabstractspinbox_enterevent_callback = nullptr;
        qabstractspinbox_leaveevent_callback = nullptr;
        qabstractspinbox_moveevent_callback = nullptr;
        qabstractspinbox_tabletevent_callback = nullptr;
        qabstractspinbox_actionevent_callback = nullptr;
        qabstractspinbox_dragenterevent_callback = nullptr;
        qabstractspinbox_dragmoveevent_callback = nullptr;
        qabstractspinbox_dragleaveevent_callback = nullptr;
        qabstractspinbox_dropevent_callback = nullptr;
        qabstractspinbox_nativeevent_callback = nullptr;
        qabstractspinbox_metric_callback = nullptr;
        qabstractspinbox_initpainter_callback = nullptr;
        qabstractspinbox_redirected_callback = nullptr;
        qabstractspinbox_sharedpainter_callback = nullptr;
        qabstractspinbox_inputmethodevent_callback = nullptr;
        qabstractspinbox_focusnextprevchild_callback = nullptr;
        qabstractspinbox_eventfilter_callback = nullptr;
        qabstractspinbox_childevent_callback = nullptr;
        qabstractspinbox_customevent_callback = nullptr;
        qabstractspinbox_connectnotify_callback = nullptr;
        qabstractspinbox_disconnectnotify_callback = nullptr;
        qabstractspinbox_lineedit_callback = nullptr;
        qabstractspinbox_setlineedit_callback = nullptr;
        qabstractspinbox_updatemicrofocus_callback = nullptr;
        qabstractspinbox_create_callback = nullptr;
        qabstractspinbox_destroy_callback = nullptr;
        qabstractspinbox_focusnextchild_callback = nullptr;
        qabstractspinbox_focuspreviouschild_callback = nullptr;
        qabstractspinbox_sender_callback = nullptr;
        qabstractspinbox_sendersignalindex_callback = nullptr;
        qabstractspinbox_receivers_callback = nullptr;
        qabstractspinbox_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQAbstractSpinBox_Metacall_Callback(QAbstractSpinBox_Metacall_Callback cb) { qabstractspinbox_metacall_callback = cb; }
    inline void setQAbstractSpinBox_SizeHint_Callback(QAbstractSpinBox_SizeHint_Callback cb) { qabstractspinbox_sizehint_callback = cb; }
    inline void setQAbstractSpinBox_MinimumSizeHint_Callback(QAbstractSpinBox_MinimumSizeHint_Callback cb) { qabstractspinbox_minimumsizehint_callback = cb; }
    inline void setQAbstractSpinBox_Event_Callback(QAbstractSpinBox_Event_Callback cb) { qabstractspinbox_event_callback = cb; }
    inline void setQAbstractSpinBox_InputMethodQuery_Callback(QAbstractSpinBox_InputMethodQuery_Callback cb) { qabstractspinbox_inputmethodquery_callback = cb; }
    inline void setQAbstractSpinBox_Validate_Callback(QAbstractSpinBox_Validate_Callback cb) { qabstractspinbox_validate_callback = cb; }
    inline void setQAbstractSpinBox_Fixup_Callback(QAbstractSpinBox_Fixup_Callback cb) { qabstractspinbox_fixup_callback = cb; }
    inline void setQAbstractSpinBox_StepBy_Callback(QAbstractSpinBox_StepBy_Callback cb) { qabstractspinbox_stepby_callback = cb; }
    inline void setQAbstractSpinBox_Clear_Callback(QAbstractSpinBox_Clear_Callback cb) { qabstractspinbox_clear_callback = cb; }
    inline void setQAbstractSpinBox_ResizeEvent_Callback(QAbstractSpinBox_ResizeEvent_Callback cb) { qabstractspinbox_resizeevent_callback = cb; }
    inline void setQAbstractSpinBox_KeyPressEvent_Callback(QAbstractSpinBox_KeyPressEvent_Callback cb) { qabstractspinbox_keypressevent_callback = cb; }
    inline void setQAbstractSpinBox_KeyReleaseEvent_Callback(QAbstractSpinBox_KeyReleaseEvent_Callback cb) { qabstractspinbox_keyreleaseevent_callback = cb; }
    inline void setQAbstractSpinBox_WheelEvent_Callback(QAbstractSpinBox_WheelEvent_Callback cb) { qabstractspinbox_wheelevent_callback = cb; }
    inline void setQAbstractSpinBox_FocusInEvent_Callback(QAbstractSpinBox_FocusInEvent_Callback cb) { qabstractspinbox_focusinevent_callback = cb; }
    inline void setQAbstractSpinBox_FocusOutEvent_Callback(QAbstractSpinBox_FocusOutEvent_Callback cb) { qabstractspinbox_focusoutevent_callback = cb; }
    inline void setQAbstractSpinBox_ContextMenuEvent_Callback(QAbstractSpinBox_ContextMenuEvent_Callback cb) { qabstractspinbox_contextmenuevent_callback = cb; }
    inline void setQAbstractSpinBox_ChangeEvent_Callback(QAbstractSpinBox_ChangeEvent_Callback cb) { qabstractspinbox_changeevent_callback = cb; }
    inline void setQAbstractSpinBox_CloseEvent_Callback(QAbstractSpinBox_CloseEvent_Callback cb) { qabstractspinbox_closeevent_callback = cb; }
    inline void setQAbstractSpinBox_HideEvent_Callback(QAbstractSpinBox_HideEvent_Callback cb) { qabstractspinbox_hideevent_callback = cb; }
    inline void setQAbstractSpinBox_MousePressEvent_Callback(QAbstractSpinBox_MousePressEvent_Callback cb) { qabstractspinbox_mousepressevent_callback = cb; }
    inline void setQAbstractSpinBox_MouseReleaseEvent_Callback(QAbstractSpinBox_MouseReleaseEvent_Callback cb) { qabstractspinbox_mousereleaseevent_callback = cb; }
    inline void setQAbstractSpinBox_MouseMoveEvent_Callback(QAbstractSpinBox_MouseMoveEvent_Callback cb) { qabstractspinbox_mousemoveevent_callback = cb; }
    inline void setQAbstractSpinBox_TimerEvent_Callback(QAbstractSpinBox_TimerEvent_Callback cb) { qabstractspinbox_timerevent_callback = cb; }
    inline void setQAbstractSpinBox_PaintEvent_Callback(QAbstractSpinBox_PaintEvent_Callback cb) { qabstractspinbox_paintevent_callback = cb; }
    inline void setQAbstractSpinBox_ShowEvent_Callback(QAbstractSpinBox_ShowEvent_Callback cb) { qabstractspinbox_showevent_callback = cb; }
    inline void setQAbstractSpinBox_InitStyleOption_Callback(QAbstractSpinBox_InitStyleOption_Callback cb) { qabstractspinbox_initstyleoption_callback = cb; }
    inline void setQAbstractSpinBox_StepEnabled_Callback(QAbstractSpinBox_StepEnabled_Callback cb) { qabstractspinbox_stepenabled_callback = cb; }
    inline void setQAbstractSpinBox_DevType_Callback(QAbstractSpinBox_DevType_Callback cb) { qabstractspinbox_devtype_callback = cb; }
    inline void setQAbstractSpinBox_SetVisible_Callback(QAbstractSpinBox_SetVisible_Callback cb) { qabstractspinbox_setvisible_callback = cb; }
    inline void setQAbstractSpinBox_HeightForWidth_Callback(QAbstractSpinBox_HeightForWidth_Callback cb) { qabstractspinbox_heightforwidth_callback = cb; }
    inline void setQAbstractSpinBox_HasHeightForWidth_Callback(QAbstractSpinBox_HasHeightForWidth_Callback cb) { qabstractspinbox_hasheightforwidth_callback = cb; }
    inline void setQAbstractSpinBox_PaintEngine_Callback(QAbstractSpinBox_PaintEngine_Callback cb) { qabstractspinbox_paintengine_callback = cb; }
    inline void setQAbstractSpinBox_MouseDoubleClickEvent_Callback(QAbstractSpinBox_MouseDoubleClickEvent_Callback cb) { qabstractspinbox_mousedoubleclickevent_callback = cb; }
    inline void setQAbstractSpinBox_EnterEvent_Callback(QAbstractSpinBox_EnterEvent_Callback cb) { qabstractspinbox_enterevent_callback = cb; }
    inline void setQAbstractSpinBox_LeaveEvent_Callback(QAbstractSpinBox_LeaveEvent_Callback cb) { qabstractspinbox_leaveevent_callback = cb; }
    inline void setQAbstractSpinBox_MoveEvent_Callback(QAbstractSpinBox_MoveEvent_Callback cb) { qabstractspinbox_moveevent_callback = cb; }
    inline void setQAbstractSpinBox_TabletEvent_Callback(QAbstractSpinBox_TabletEvent_Callback cb) { qabstractspinbox_tabletevent_callback = cb; }
    inline void setQAbstractSpinBox_ActionEvent_Callback(QAbstractSpinBox_ActionEvent_Callback cb) { qabstractspinbox_actionevent_callback = cb; }
    inline void setQAbstractSpinBox_DragEnterEvent_Callback(QAbstractSpinBox_DragEnterEvent_Callback cb) { qabstractspinbox_dragenterevent_callback = cb; }
    inline void setQAbstractSpinBox_DragMoveEvent_Callback(QAbstractSpinBox_DragMoveEvent_Callback cb) { qabstractspinbox_dragmoveevent_callback = cb; }
    inline void setQAbstractSpinBox_DragLeaveEvent_Callback(QAbstractSpinBox_DragLeaveEvent_Callback cb) { qabstractspinbox_dragleaveevent_callback = cb; }
    inline void setQAbstractSpinBox_DropEvent_Callback(QAbstractSpinBox_DropEvent_Callback cb) { qabstractspinbox_dropevent_callback = cb; }
    inline void setQAbstractSpinBox_NativeEvent_Callback(QAbstractSpinBox_NativeEvent_Callback cb) { qabstractspinbox_nativeevent_callback = cb; }
    inline void setQAbstractSpinBox_Metric_Callback(QAbstractSpinBox_Metric_Callback cb) { qabstractspinbox_metric_callback = cb; }
    inline void setQAbstractSpinBox_InitPainter_Callback(QAbstractSpinBox_InitPainter_Callback cb) { qabstractspinbox_initpainter_callback = cb; }
    inline void setQAbstractSpinBox_Redirected_Callback(QAbstractSpinBox_Redirected_Callback cb) { qabstractspinbox_redirected_callback = cb; }
    inline void setQAbstractSpinBox_SharedPainter_Callback(QAbstractSpinBox_SharedPainter_Callback cb) { qabstractspinbox_sharedpainter_callback = cb; }
    inline void setQAbstractSpinBox_InputMethodEvent_Callback(QAbstractSpinBox_InputMethodEvent_Callback cb) { qabstractspinbox_inputmethodevent_callback = cb; }
    inline void setQAbstractSpinBox_FocusNextPrevChild_Callback(QAbstractSpinBox_FocusNextPrevChild_Callback cb) { qabstractspinbox_focusnextprevchild_callback = cb; }
    inline void setQAbstractSpinBox_EventFilter_Callback(QAbstractSpinBox_EventFilter_Callback cb) { qabstractspinbox_eventfilter_callback = cb; }
    inline void setQAbstractSpinBox_ChildEvent_Callback(QAbstractSpinBox_ChildEvent_Callback cb) { qabstractspinbox_childevent_callback = cb; }
    inline void setQAbstractSpinBox_CustomEvent_Callback(QAbstractSpinBox_CustomEvent_Callback cb) { qabstractspinbox_customevent_callback = cb; }
    inline void setQAbstractSpinBox_ConnectNotify_Callback(QAbstractSpinBox_ConnectNotify_Callback cb) { qabstractspinbox_connectnotify_callback = cb; }
    inline void setQAbstractSpinBox_DisconnectNotify_Callback(QAbstractSpinBox_DisconnectNotify_Callback cb) { qabstractspinbox_disconnectnotify_callback = cb; }
    inline void setQAbstractSpinBox_LineEdit_Callback(QAbstractSpinBox_LineEdit_Callback cb) { qabstractspinbox_lineedit_callback = cb; }
    inline void setQAbstractSpinBox_SetLineEdit_Callback(QAbstractSpinBox_SetLineEdit_Callback cb) { qabstractspinbox_setlineedit_callback = cb; }
    inline void setQAbstractSpinBox_UpdateMicroFocus_Callback(QAbstractSpinBox_UpdateMicroFocus_Callback cb) { qabstractspinbox_updatemicrofocus_callback = cb; }
    inline void setQAbstractSpinBox_Create_Callback(QAbstractSpinBox_Create_Callback cb) { qabstractspinbox_create_callback = cb; }
    inline void setQAbstractSpinBox_Destroy_Callback(QAbstractSpinBox_Destroy_Callback cb) { qabstractspinbox_destroy_callback = cb; }
    inline void setQAbstractSpinBox_FocusNextChild_Callback(QAbstractSpinBox_FocusNextChild_Callback cb) { qabstractspinbox_focusnextchild_callback = cb; }
    inline void setQAbstractSpinBox_FocusPreviousChild_Callback(QAbstractSpinBox_FocusPreviousChild_Callback cb) { qabstractspinbox_focuspreviouschild_callback = cb; }
    inline void setQAbstractSpinBox_Sender_Callback(QAbstractSpinBox_Sender_Callback cb) { qabstractspinbox_sender_callback = cb; }
    inline void setQAbstractSpinBox_SenderSignalIndex_Callback(QAbstractSpinBox_SenderSignalIndex_Callback cb) { qabstractspinbox_sendersignalindex_callback = cb; }
    inline void setQAbstractSpinBox_Receivers_Callback(QAbstractSpinBox_Receivers_Callback cb) { qabstractspinbox_receivers_callback = cb; }
    inline void setQAbstractSpinBox_IsSignalConnected_Callback(QAbstractSpinBox_IsSignalConnected_Callback cb) { qabstractspinbox_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAbstractSpinBox_Metacall_IsBase(bool value) const { qabstractspinbox_metacall_isbase = value; }
    inline void setQAbstractSpinBox_SizeHint_IsBase(bool value) const { qabstractspinbox_sizehint_isbase = value; }
    inline void setQAbstractSpinBox_MinimumSizeHint_IsBase(bool value) const { qabstractspinbox_minimumsizehint_isbase = value; }
    inline void setQAbstractSpinBox_Event_IsBase(bool value) const { qabstractspinbox_event_isbase = value; }
    inline void setQAbstractSpinBox_InputMethodQuery_IsBase(bool value) const { qabstractspinbox_inputmethodquery_isbase = value; }
    inline void setQAbstractSpinBox_Validate_IsBase(bool value) const { qabstractspinbox_validate_isbase = value; }
    inline void setQAbstractSpinBox_Fixup_IsBase(bool value) const { qabstractspinbox_fixup_isbase = value; }
    inline void setQAbstractSpinBox_StepBy_IsBase(bool value) const { qabstractspinbox_stepby_isbase = value; }
    inline void setQAbstractSpinBox_Clear_IsBase(bool value) const { qabstractspinbox_clear_isbase = value; }
    inline void setQAbstractSpinBox_ResizeEvent_IsBase(bool value) const { qabstractspinbox_resizeevent_isbase = value; }
    inline void setQAbstractSpinBox_KeyPressEvent_IsBase(bool value) const { qabstractspinbox_keypressevent_isbase = value; }
    inline void setQAbstractSpinBox_KeyReleaseEvent_IsBase(bool value) const { qabstractspinbox_keyreleaseevent_isbase = value; }
    inline void setQAbstractSpinBox_WheelEvent_IsBase(bool value) const { qabstractspinbox_wheelevent_isbase = value; }
    inline void setQAbstractSpinBox_FocusInEvent_IsBase(bool value) const { qabstractspinbox_focusinevent_isbase = value; }
    inline void setQAbstractSpinBox_FocusOutEvent_IsBase(bool value) const { qabstractspinbox_focusoutevent_isbase = value; }
    inline void setQAbstractSpinBox_ContextMenuEvent_IsBase(bool value) const { qabstractspinbox_contextmenuevent_isbase = value; }
    inline void setQAbstractSpinBox_ChangeEvent_IsBase(bool value) const { qabstractspinbox_changeevent_isbase = value; }
    inline void setQAbstractSpinBox_CloseEvent_IsBase(bool value) const { qabstractspinbox_closeevent_isbase = value; }
    inline void setQAbstractSpinBox_HideEvent_IsBase(bool value) const { qabstractspinbox_hideevent_isbase = value; }
    inline void setQAbstractSpinBox_MousePressEvent_IsBase(bool value) const { qabstractspinbox_mousepressevent_isbase = value; }
    inline void setQAbstractSpinBox_MouseReleaseEvent_IsBase(bool value) const { qabstractspinbox_mousereleaseevent_isbase = value; }
    inline void setQAbstractSpinBox_MouseMoveEvent_IsBase(bool value) const { qabstractspinbox_mousemoveevent_isbase = value; }
    inline void setQAbstractSpinBox_TimerEvent_IsBase(bool value) const { qabstractspinbox_timerevent_isbase = value; }
    inline void setQAbstractSpinBox_PaintEvent_IsBase(bool value) const { qabstractspinbox_paintevent_isbase = value; }
    inline void setQAbstractSpinBox_ShowEvent_IsBase(bool value) const { qabstractspinbox_showevent_isbase = value; }
    inline void setQAbstractSpinBox_InitStyleOption_IsBase(bool value) const { qabstractspinbox_initstyleoption_isbase = value; }
    inline void setQAbstractSpinBox_StepEnabled_IsBase(bool value) const { qabstractspinbox_stepenabled_isbase = value; }
    inline void setQAbstractSpinBox_DevType_IsBase(bool value) const { qabstractspinbox_devtype_isbase = value; }
    inline void setQAbstractSpinBox_SetVisible_IsBase(bool value) const { qabstractspinbox_setvisible_isbase = value; }
    inline void setQAbstractSpinBox_HeightForWidth_IsBase(bool value) const { qabstractspinbox_heightforwidth_isbase = value; }
    inline void setQAbstractSpinBox_HasHeightForWidth_IsBase(bool value) const { qabstractspinbox_hasheightforwidth_isbase = value; }
    inline void setQAbstractSpinBox_PaintEngine_IsBase(bool value) const { qabstractspinbox_paintengine_isbase = value; }
    inline void setQAbstractSpinBox_MouseDoubleClickEvent_IsBase(bool value) const { qabstractspinbox_mousedoubleclickevent_isbase = value; }
    inline void setQAbstractSpinBox_EnterEvent_IsBase(bool value) const { qabstractspinbox_enterevent_isbase = value; }
    inline void setQAbstractSpinBox_LeaveEvent_IsBase(bool value) const { qabstractspinbox_leaveevent_isbase = value; }
    inline void setQAbstractSpinBox_MoveEvent_IsBase(bool value) const { qabstractspinbox_moveevent_isbase = value; }
    inline void setQAbstractSpinBox_TabletEvent_IsBase(bool value) const { qabstractspinbox_tabletevent_isbase = value; }
    inline void setQAbstractSpinBox_ActionEvent_IsBase(bool value) const { qabstractspinbox_actionevent_isbase = value; }
    inline void setQAbstractSpinBox_DragEnterEvent_IsBase(bool value) const { qabstractspinbox_dragenterevent_isbase = value; }
    inline void setQAbstractSpinBox_DragMoveEvent_IsBase(bool value) const { qabstractspinbox_dragmoveevent_isbase = value; }
    inline void setQAbstractSpinBox_DragLeaveEvent_IsBase(bool value) const { qabstractspinbox_dragleaveevent_isbase = value; }
    inline void setQAbstractSpinBox_DropEvent_IsBase(bool value) const { qabstractspinbox_dropevent_isbase = value; }
    inline void setQAbstractSpinBox_NativeEvent_IsBase(bool value) const { qabstractspinbox_nativeevent_isbase = value; }
    inline void setQAbstractSpinBox_Metric_IsBase(bool value) const { qabstractspinbox_metric_isbase = value; }
    inline void setQAbstractSpinBox_InitPainter_IsBase(bool value) const { qabstractspinbox_initpainter_isbase = value; }
    inline void setQAbstractSpinBox_Redirected_IsBase(bool value) const { qabstractspinbox_redirected_isbase = value; }
    inline void setQAbstractSpinBox_SharedPainter_IsBase(bool value) const { qabstractspinbox_sharedpainter_isbase = value; }
    inline void setQAbstractSpinBox_InputMethodEvent_IsBase(bool value) const { qabstractspinbox_inputmethodevent_isbase = value; }
    inline void setQAbstractSpinBox_FocusNextPrevChild_IsBase(bool value) const { qabstractspinbox_focusnextprevchild_isbase = value; }
    inline void setQAbstractSpinBox_EventFilter_IsBase(bool value) const { qabstractspinbox_eventfilter_isbase = value; }
    inline void setQAbstractSpinBox_ChildEvent_IsBase(bool value) const { qabstractspinbox_childevent_isbase = value; }
    inline void setQAbstractSpinBox_CustomEvent_IsBase(bool value) const { qabstractspinbox_customevent_isbase = value; }
    inline void setQAbstractSpinBox_ConnectNotify_IsBase(bool value) const { qabstractspinbox_connectnotify_isbase = value; }
    inline void setQAbstractSpinBox_DisconnectNotify_IsBase(bool value) const { qabstractspinbox_disconnectnotify_isbase = value; }
    inline void setQAbstractSpinBox_LineEdit_IsBase(bool value) const { qabstractspinbox_lineedit_isbase = value; }
    inline void setQAbstractSpinBox_SetLineEdit_IsBase(bool value) const { qabstractspinbox_setlineedit_isbase = value; }
    inline void setQAbstractSpinBox_UpdateMicroFocus_IsBase(bool value) const { qabstractspinbox_updatemicrofocus_isbase = value; }
    inline void setQAbstractSpinBox_Create_IsBase(bool value) const { qabstractspinbox_create_isbase = value; }
    inline void setQAbstractSpinBox_Destroy_IsBase(bool value) const { qabstractspinbox_destroy_isbase = value; }
    inline void setQAbstractSpinBox_FocusNextChild_IsBase(bool value) const { qabstractspinbox_focusnextchild_isbase = value; }
    inline void setQAbstractSpinBox_FocusPreviousChild_IsBase(bool value) const { qabstractspinbox_focuspreviouschild_isbase = value; }
    inline void setQAbstractSpinBox_Sender_IsBase(bool value) const { qabstractspinbox_sender_isbase = value; }
    inline void setQAbstractSpinBox_SenderSignalIndex_IsBase(bool value) const { qabstractspinbox_sendersignalindex_isbase = value; }
    inline void setQAbstractSpinBox_Receivers_IsBase(bool value) const { qabstractspinbox_receivers_isbase = value; }
    inline void setQAbstractSpinBox_IsSignalConnected_IsBase(bool value) const { qabstractspinbox_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractspinbox_metacall_isbase) {
            qabstractspinbox_metacall_isbase = false;
            return QAbstractSpinBox::qt_metacall(param1, param2, param3);
        } else if (qabstractspinbox_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qabstractspinbox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractSpinBox::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qabstractspinbox_sizehint_isbase) {
            qabstractspinbox_sizehint_isbase = false;
            return QAbstractSpinBox::sizeHint();
        } else if (qabstractspinbox_sizehint_callback != nullptr) {
            QSize* callback_ret = qabstractspinbox_sizehint_callback();
            return *callback_ret;
        } else {
            return QAbstractSpinBox::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qabstractspinbox_minimumsizehint_isbase) {
            qabstractspinbox_minimumsizehint_isbase = false;
            return QAbstractSpinBox::minimumSizeHint();
        } else if (qabstractspinbox_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qabstractspinbox_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QAbstractSpinBox::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractspinbox_event_isbase) {
            qabstractspinbox_event_isbase = false;
            return QAbstractSpinBox::event(event);
        } else if (qabstractspinbox_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qabstractspinbox_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractSpinBox::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qabstractspinbox_inputmethodquery_isbase) {
            qabstractspinbox_inputmethodquery_isbase = false;
            return QAbstractSpinBox::inputMethodQuery(param1);
        } else if (qabstractspinbox_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qabstractspinbox_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QAbstractSpinBox::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& input, int& pos) const override {
        if (qabstractspinbox_validate_isbase) {
            qabstractspinbox_validate_isbase = false;
            return QAbstractSpinBox::validate(input, pos);
        } else if (qabstractspinbox_validate_callback != nullptr) {
            QString input_ret = input;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray input_b = input_ret.toUtf8();
            libqt_string input_str;
            input_str.len = input_b.length();
            input_str.data = static_cast<const char*>(malloc((input_str.len + 1) * sizeof(char)));
            memcpy((void*)input_str.data, input_b.data(), input_str.len);
            ((char*)input_str.data)[input_str.len] = '\0';
            libqt_string cbval1 = input_str;
            int* cbval2 = &pos;

            int callback_ret = qabstractspinbox_validate_callback(this, cbval1, cbval2);
            return static_cast<QValidator::State>(callback_ret);
        } else {
            return QAbstractSpinBox::validate(input, pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& input) const override {
        if (qabstractspinbox_fixup_isbase) {
            qabstractspinbox_fixup_isbase = false;
            QAbstractSpinBox::fixup(input);
        } else if (qabstractspinbox_fixup_callback != nullptr) {
            QString input_ret = input;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray input_b = input_ret.toUtf8();
            libqt_string input_str;
            input_str.len = input_b.length();
            input_str.data = static_cast<const char*>(malloc((input_str.len + 1) * sizeof(char)));
            memcpy((void*)input_str.data, input_b.data(), input_str.len);
            ((char*)input_str.data)[input_str.len] = '\0';
            libqt_string cbval1 = input_str;

            qabstractspinbox_fixup_callback(this, cbval1);
        } else {
            QAbstractSpinBox::fixup(input);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void stepBy(int steps) override {
        if (qabstractspinbox_stepby_isbase) {
            qabstractspinbox_stepby_isbase = false;
            QAbstractSpinBox::stepBy(steps);
        } else if (qabstractspinbox_stepby_callback != nullptr) {
            int cbval1 = steps;

            qabstractspinbox_stepby_callback(this, cbval1);
        } else {
            QAbstractSpinBox::stepBy(steps);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qabstractspinbox_clear_isbase) {
            qabstractspinbox_clear_isbase = false;
            QAbstractSpinBox::clear();
        } else if (qabstractspinbox_clear_callback != nullptr) {
            qabstractspinbox_clear_callback();
        } else {
            QAbstractSpinBox::clear();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qabstractspinbox_resizeevent_isbase) {
            qabstractspinbox_resizeevent_isbase = false;
            QAbstractSpinBox::resizeEvent(event);
        } else if (qabstractspinbox_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qabstractspinbox_resizeevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qabstractspinbox_keypressevent_isbase) {
            qabstractspinbox_keypressevent_isbase = false;
            QAbstractSpinBox::keyPressEvent(event);
        } else if (qabstractspinbox_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qabstractspinbox_keypressevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qabstractspinbox_keyreleaseevent_isbase) {
            qabstractspinbox_keyreleaseevent_isbase = false;
            QAbstractSpinBox::keyReleaseEvent(event);
        } else if (qabstractspinbox_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qabstractspinbox_keyreleaseevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qabstractspinbox_wheelevent_isbase) {
            qabstractspinbox_wheelevent_isbase = false;
            QAbstractSpinBox::wheelEvent(event);
        } else if (qabstractspinbox_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qabstractspinbox_wheelevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qabstractspinbox_focusinevent_isbase) {
            qabstractspinbox_focusinevent_isbase = false;
            QAbstractSpinBox::focusInEvent(event);
        } else if (qabstractspinbox_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qabstractspinbox_focusinevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qabstractspinbox_focusoutevent_isbase) {
            qabstractspinbox_focusoutevent_isbase = false;
            QAbstractSpinBox::focusOutEvent(event);
        } else if (qabstractspinbox_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qabstractspinbox_focusoutevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qabstractspinbox_contextmenuevent_isbase) {
            qabstractspinbox_contextmenuevent_isbase = false;
            QAbstractSpinBox::contextMenuEvent(event);
        } else if (qabstractspinbox_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qabstractspinbox_contextmenuevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qabstractspinbox_changeevent_isbase) {
            qabstractspinbox_changeevent_isbase = false;
            QAbstractSpinBox::changeEvent(event);
        } else if (qabstractspinbox_changeevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qabstractspinbox_changeevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qabstractspinbox_closeevent_isbase) {
            qabstractspinbox_closeevent_isbase = false;
            QAbstractSpinBox::closeEvent(event);
        } else if (qabstractspinbox_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qabstractspinbox_closeevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qabstractspinbox_hideevent_isbase) {
            qabstractspinbox_hideevent_isbase = false;
            QAbstractSpinBox::hideEvent(event);
        } else if (qabstractspinbox_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qabstractspinbox_hideevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qabstractspinbox_mousepressevent_isbase) {
            qabstractspinbox_mousepressevent_isbase = false;
            QAbstractSpinBox::mousePressEvent(event);
        } else if (qabstractspinbox_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qabstractspinbox_mousepressevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qabstractspinbox_mousereleaseevent_isbase) {
            qabstractspinbox_mousereleaseevent_isbase = false;
            QAbstractSpinBox::mouseReleaseEvent(event);
        } else if (qabstractspinbox_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qabstractspinbox_mousereleaseevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qabstractspinbox_mousemoveevent_isbase) {
            qabstractspinbox_mousemoveevent_isbase = false;
            QAbstractSpinBox::mouseMoveEvent(event);
        } else if (qabstractspinbox_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qabstractspinbox_mousemoveevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractspinbox_timerevent_isbase) {
            qabstractspinbox_timerevent_isbase = false;
            QAbstractSpinBox::timerEvent(event);
        } else if (qabstractspinbox_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qabstractspinbox_timerevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qabstractspinbox_paintevent_isbase) {
            qabstractspinbox_paintevent_isbase = false;
            QAbstractSpinBox::paintEvent(event);
        } else if (qabstractspinbox_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qabstractspinbox_paintevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qabstractspinbox_showevent_isbase) {
            qabstractspinbox_showevent_isbase = false;
            QAbstractSpinBox::showEvent(event);
        } else if (qabstractspinbox_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qabstractspinbox_showevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
        if (qabstractspinbox_initstyleoption_isbase) {
            qabstractspinbox_initstyleoption_isbase = false;
            QAbstractSpinBox::initStyleOption(option);
        } else if (qabstractspinbox_initstyleoption_callback != nullptr) {
            QStyleOptionSpinBox* cbval1 = option;

            qabstractspinbox_initstyleoption_callback(this, cbval1);
        } else {
            QAbstractSpinBox::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
        if (qabstractspinbox_stepenabled_isbase) {
            qabstractspinbox_stepenabled_isbase = false;
            return QAbstractSpinBox::stepEnabled();
        } else if (qabstractspinbox_stepenabled_callback != nullptr) {
            int callback_ret = qabstractspinbox_stepenabled_callback();
            return static_cast<QAbstractSpinBox::StepEnabled>(callback_ret);
        } else {
            return QAbstractSpinBox::stepEnabled();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qabstractspinbox_devtype_isbase) {
            qabstractspinbox_devtype_isbase = false;
            return QAbstractSpinBox::devType();
        } else if (qabstractspinbox_devtype_callback != nullptr) {
            int callback_ret = qabstractspinbox_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractSpinBox::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qabstractspinbox_setvisible_isbase) {
            qabstractspinbox_setvisible_isbase = false;
            QAbstractSpinBox::setVisible(visible);
        } else if (qabstractspinbox_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qabstractspinbox_setvisible_callback(this, cbval1);
        } else {
            QAbstractSpinBox::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qabstractspinbox_heightforwidth_isbase) {
            qabstractspinbox_heightforwidth_isbase = false;
            return QAbstractSpinBox::heightForWidth(param1);
        } else if (qabstractspinbox_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qabstractspinbox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractSpinBox::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qabstractspinbox_hasheightforwidth_isbase) {
            qabstractspinbox_hasheightforwidth_isbase = false;
            return QAbstractSpinBox::hasHeightForWidth();
        } else if (qabstractspinbox_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qabstractspinbox_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QAbstractSpinBox::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qabstractspinbox_paintengine_isbase) {
            qabstractspinbox_paintengine_isbase = false;
            return QAbstractSpinBox::paintEngine();
        } else if (qabstractspinbox_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qabstractspinbox_paintengine_callback();
            return callback_ret;
        } else {
            return QAbstractSpinBox::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qabstractspinbox_mousedoubleclickevent_isbase) {
            qabstractspinbox_mousedoubleclickevent_isbase = false;
            QAbstractSpinBox::mouseDoubleClickEvent(event);
        } else if (qabstractspinbox_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qabstractspinbox_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qabstractspinbox_enterevent_isbase) {
            qabstractspinbox_enterevent_isbase = false;
            QAbstractSpinBox::enterEvent(event);
        } else if (qabstractspinbox_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qabstractspinbox_enterevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qabstractspinbox_leaveevent_isbase) {
            qabstractspinbox_leaveevent_isbase = false;
            QAbstractSpinBox::leaveEvent(event);
        } else if (qabstractspinbox_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qabstractspinbox_leaveevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qabstractspinbox_moveevent_isbase) {
            qabstractspinbox_moveevent_isbase = false;
            QAbstractSpinBox::moveEvent(event);
        } else if (qabstractspinbox_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qabstractspinbox_moveevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qabstractspinbox_tabletevent_isbase) {
            qabstractspinbox_tabletevent_isbase = false;
            QAbstractSpinBox::tabletEvent(event);
        } else if (qabstractspinbox_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qabstractspinbox_tabletevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qabstractspinbox_actionevent_isbase) {
            qabstractspinbox_actionevent_isbase = false;
            QAbstractSpinBox::actionEvent(event);
        } else if (qabstractspinbox_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qabstractspinbox_actionevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qabstractspinbox_dragenterevent_isbase) {
            qabstractspinbox_dragenterevent_isbase = false;
            QAbstractSpinBox::dragEnterEvent(event);
        } else if (qabstractspinbox_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qabstractspinbox_dragenterevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qabstractspinbox_dragmoveevent_isbase) {
            qabstractspinbox_dragmoveevent_isbase = false;
            QAbstractSpinBox::dragMoveEvent(event);
        } else if (qabstractspinbox_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qabstractspinbox_dragmoveevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qabstractspinbox_dragleaveevent_isbase) {
            qabstractspinbox_dragleaveevent_isbase = false;
            QAbstractSpinBox::dragLeaveEvent(event);
        } else if (qabstractspinbox_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qabstractspinbox_dragleaveevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qabstractspinbox_dropevent_isbase) {
            qabstractspinbox_dropevent_isbase = false;
            QAbstractSpinBox::dropEvent(event);
        } else if (qabstractspinbox_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qabstractspinbox_dropevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qabstractspinbox_nativeevent_isbase) {
            qabstractspinbox_nativeevent_isbase = false;
            return QAbstractSpinBox::nativeEvent(eventType, message, result);
        } else if (qabstractspinbox_nativeevent_callback != nullptr) {
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

            bool callback_ret = qabstractspinbox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QAbstractSpinBox::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qabstractspinbox_metric_isbase) {
            qabstractspinbox_metric_isbase = false;
            return QAbstractSpinBox::metric(param1);
        } else if (qabstractspinbox_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qabstractspinbox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractSpinBox::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qabstractspinbox_initpainter_isbase) {
            qabstractspinbox_initpainter_isbase = false;
            QAbstractSpinBox::initPainter(painter);
        } else if (qabstractspinbox_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qabstractspinbox_initpainter_callback(this, cbval1);
        } else {
            QAbstractSpinBox::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qabstractspinbox_redirected_isbase) {
            qabstractspinbox_redirected_isbase = false;
            return QAbstractSpinBox::redirected(offset);
        } else if (qabstractspinbox_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qabstractspinbox_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractSpinBox::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qabstractspinbox_sharedpainter_isbase) {
            qabstractspinbox_sharedpainter_isbase = false;
            return QAbstractSpinBox::sharedPainter();
        } else if (qabstractspinbox_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qabstractspinbox_sharedpainter_callback();
            return callback_ret;
        } else {
            return QAbstractSpinBox::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qabstractspinbox_inputmethodevent_isbase) {
            qabstractspinbox_inputmethodevent_isbase = false;
            QAbstractSpinBox::inputMethodEvent(param1);
        } else if (qabstractspinbox_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qabstractspinbox_inputmethodevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qabstractspinbox_focusnextprevchild_isbase) {
            qabstractspinbox_focusnextprevchild_isbase = false;
            return QAbstractSpinBox::focusNextPrevChild(next);
        } else if (qabstractspinbox_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qabstractspinbox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractSpinBox::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstractspinbox_eventfilter_isbase) {
            qabstractspinbox_eventfilter_isbase = false;
            return QAbstractSpinBox::eventFilter(watched, event);
        } else if (qabstractspinbox_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qabstractspinbox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAbstractSpinBox::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractspinbox_childevent_isbase) {
            qabstractspinbox_childevent_isbase = false;
            QAbstractSpinBox::childEvent(event);
        } else if (qabstractspinbox_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qabstractspinbox_childevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractspinbox_customevent_isbase) {
            qabstractspinbox_customevent_isbase = false;
            QAbstractSpinBox::customEvent(event);
        } else if (qabstractspinbox_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qabstractspinbox_customevent_callback(this, cbval1);
        } else {
            QAbstractSpinBox::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractspinbox_connectnotify_isbase) {
            qabstractspinbox_connectnotify_isbase = false;
            QAbstractSpinBox::connectNotify(signal);
        } else if (qabstractspinbox_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qabstractspinbox_connectnotify_callback(this, cbval1);
        } else {
            QAbstractSpinBox::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractspinbox_disconnectnotify_isbase) {
            qabstractspinbox_disconnectnotify_isbase = false;
            QAbstractSpinBox::disconnectNotify(signal);
        } else if (qabstractspinbox_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qabstractspinbox_disconnectnotify_callback(this, cbval1);
        } else {
            QAbstractSpinBox::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QLineEdit* lineEdit() const {
        if (qabstractspinbox_lineedit_isbase) {
            qabstractspinbox_lineedit_isbase = false;
            return QAbstractSpinBox::lineEdit();
        } else if (qabstractspinbox_lineedit_callback != nullptr) {
            QLineEdit* callback_ret = qabstractspinbox_lineedit_callback();
            return callback_ret;
        } else {
            return QAbstractSpinBox::lineEdit();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLineEdit(QLineEdit* edit) {
        if (qabstractspinbox_setlineedit_isbase) {
            qabstractspinbox_setlineedit_isbase = false;
            QAbstractSpinBox::setLineEdit(edit);
        } else if (qabstractspinbox_setlineedit_callback != nullptr) {
            QLineEdit* cbval1 = edit;

            qabstractspinbox_setlineedit_callback(this, cbval1);
        } else {
            QAbstractSpinBox::setLineEdit(edit);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qabstractspinbox_updatemicrofocus_isbase) {
            qabstractspinbox_updatemicrofocus_isbase = false;
            QAbstractSpinBox::updateMicroFocus();
        } else if (qabstractspinbox_updatemicrofocus_callback != nullptr) {
            qabstractspinbox_updatemicrofocus_callback();
        } else {
            QAbstractSpinBox::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qabstractspinbox_create_isbase) {
            qabstractspinbox_create_isbase = false;
            QAbstractSpinBox::create();
        } else if (qabstractspinbox_create_callback != nullptr) {
            qabstractspinbox_create_callback();
        } else {
            QAbstractSpinBox::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qabstractspinbox_destroy_isbase) {
            qabstractspinbox_destroy_isbase = false;
            QAbstractSpinBox::destroy();
        } else if (qabstractspinbox_destroy_callback != nullptr) {
            qabstractspinbox_destroy_callback();
        } else {
            QAbstractSpinBox::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qabstractspinbox_focusnextchild_isbase) {
            qabstractspinbox_focusnextchild_isbase = false;
            return QAbstractSpinBox::focusNextChild();
        } else if (qabstractspinbox_focusnextchild_callback != nullptr) {
            bool callback_ret = qabstractspinbox_focusnextchild_callback();
            return callback_ret;
        } else {
            return QAbstractSpinBox::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qabstractspinbox_focuspreviouschild_isbase) {
            qabstractspinbox_focuspreviouschild_isbase = false;
            return QAbstractSpinBox::focusPreviousChild();
        } else if (qabstractspinbox_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qabstractspinbox_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QAbstractSpinBox::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qabstractspinbox_sender_isbase) {
            qabstractspinbox_sender_isbase = false;
            return QAbstractSpinBox::sender();
        } else if (qabstractspinbox_sender_callback != nullptr) {
            QObject* callback_ret = qabstractspinbox_sender_callback();
            return callback_ret;
        } else {
            return QAbstractSpinBox::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qabstractspinbox_sendersignalindex_isbase) {
            qabstractspinbox_sendersignalindex_isbase = false;
            return QAbstractSpinBox::senderSignalIndex();
        } else if (qabstractspinbox_sendersignalindex_callback != nullptr) {
            int callback_ret = qabstractspinbox_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractSpinBox::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qabstractspinbox_receivers_isbase) {
            qabstractspinbox_receivers_isbase = false;
            return QAbstractSpinBox::receivers(signal);
        } else if (qabstractspinbox_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qabstractspinbox_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractSpinBox::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qabstractspinbox_issignalconnected_isbase) {
            qabstractspinbox_issignalconnected_isbase = false;
            return QAbstractSpinBox::isSignalConnected(signal);
        } else if (qabstractspinbox_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qabstractspinbox_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractSpinBox::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QAbstractSpinBox_ResizeEvent(QAbstractSpinBox* self, QResizeEvent* event);
    friend void QAbstractSpinBox_QBaseResizeEvent(QAbstractSpinBox* self, QResizeEvent* event);
    friend void QAbstractSpinBox_KeyPressEvent(QAbstractSpinBox* self, QKeyEvent* event);
    friend void QAbstractSpinBox_QBaseKeyPressEvent(QAbstractSpinBox* self, QKeyEvent* event);
    friend void QAbstractSpinBox_KeyReleaseEvent(QAbstractSpinBox* self, QKeyEvent* event);
    friend void QAbstractSpinBox_QBaseKeyReleaseEvent(QAbstractSpinBox* self, QKeyEvent* event);
    friend void QAbstractSpinBox_WheelEvent(QAbstractSpinBox* self, QWheelEvent* event);
    friend void QAbstractSpinBox_QBaseWheelEvent(QAbstractSpinBox* self, QWheelEvent* event);
    friend void QAbstractSpinBox_FocusInEvent(QAbstractSpinBox* self, QFocusEvent* event);
    friend void QAbstractSpinBox_QBaseFocusInEvent(QAbstractSpinBox* self, QFocusEvent* event);
    friend void QAbstractSpinBox_FocusOutEvent(QAbstractSpinBox* self, QFocusEvent* event);
    friend void QAbstractSpinBox_QBaseFocusOutEvent(QAbstractSpinBox* self, QFocusEvent* event);
    friend void QAbstractSpinBox_ContextMenuEvent(QAbstractSpinBox* self, QContextMenuEvent* event);
    friend void QAbstractSpinBox_QBaseContextMenuEvent(QAbstractSpinBox* self, QContextMenuEvent* event);
    friend void QAbstractSpinBox_ChangeEvent(QAbstractSpinBox* self, QEvent* event);
    friend void QAbstractSpinBox_QBaseChangeEvent(QAbstractSpinBox* self, QEvent* event);
    friend void QAbstractSpinBox_CloseEvent(QAbstractSpinBox* self, QCloseEvent* event);
    friend void QAbstractSpinBox_QBaseCloseEvent(QAbstractSpinBox* self, QCloseEvent* event);
    friend void QAbstractSpinBox_HideEvent(QAbstractSpinBox* self, QHideEvent* event);
    friend void QAbstractSpinBox_QBaseHideEvent(QAbstractSpinBox* self, QHideEvent* event);
    friend void QAbstractSpinBox_MousePressEvent(QAbstractSpinBox* self, QMouseEvent* event);
    friend void QAbstractSpinBox_QBaseMousePressEvent(QAbstractSpinBox* self, QMouseEvent* event);
    friend void QAbstractSpinBox_MouseReleaseEvent(QAbstractSpinBox* self, QMouseEvent* event);
    friend void QAbstractSpinBox_QBaseMouseReleaseEvent(QAbstractSpinBox* self, QMouseEvent* event);
    friend void QAbstractSpinBox_MouseMoveEvent(QAbstractSpinBox* self, QMouseEvent* event);
    friend void QAbstractSpinBox_QBaseMouseMoveEvent(QAbstractSpinBox* self, QMouseEvent* event);
    friend void QAbstractSpinBox_TimerEvent(QAbstractSpinBox* self, QTimerEvent* event);
    friend void QAbstractSpinBox_QBaseTimerEvent(QAbstractSpinBox* self, QTimerEvent* event);
    friend void QAbstractSpinBox_PaintEvent(QAbstractSpinBox* self, QPaintEvent* event);
    friend void QAbstractSpinBox_QBasePaintEvent(QAbstractSpinBox* self, QPaintEvent* event);
    friend void QAbstractSpinBox_ShowEvent(QAbstractSpinBox* self, QShowEvent* event);
    friend void QAbstractSpinBox_QBaseShowEvent(QAbstractSpinBox* self, QShowEvent* event);
    friend void QAbstractSpinBox_InitStyleOption(const QAbstractSpinBox* self, QStyleOptionSpinBox* option);
    friend void QAbstractSpinBox_QBaseInitStyleOption(const QAbstractSpinBox* self, QStyleOptionSpinBox* option);
    friend int QAbstractSpinBox_StepEnabled(const QAbstractSpinBox* self);
    friend int QAbstractSpinBox_QBaseStepEnabled(const QAbstractSpinBox* self);
    friend void QAbstractSpinBox_MouseDoubleClickEvent(QAbstractSpinBox* self, QMouseEvent* event);
    friend void QAbstractSpinBox_QBaseMouseDoubleClickEvent(QAbstractSpinBox* self, QMouseEvent* event);
    friend void QAbstractSpinBox_EnterEvent(QAbstractSpinBox* self, QEnterEvent* event);
    friend void QAbstractSpinBox_QBaseEnterEvent(QAbstractSpinBox* self, QEnterEvent* event);
    friend void QAbstractSpinBox_LeaveEvent(QAbstractSpinBox* self, QEvent* event);
    friend void QAbstractSpinBox_QBaseLeaveEvent(QAbstractSpinBox* self, QEvent* event);
    friend void QAbstractSpinBox_MoveEvent(QAbstractSpinBox* self, QMoveEvent* event);
    friend void QAbstractSpinBox_QBaseMoveEvent(QAbstractSpinBox* self, QMoveEvent* event);
    friend void QAbstractSpinBox_TabletEvent(QAbstractSpinBox* self, QTabletEvent* event);
    friend void QAbstractSpinBox_QBaseTabletEvent(QAbstractSpinBox* self, QTabletEvent* event);
    friend void QAbstractSpinBox_ActionEvent(QAbstractSpinBox* self, QActionEvent* event);
    friend void QAbstractSpinBox_QBaseActionEvent(QAbstractSpinBox* self, QActionEvent* event);
    friend void QAbstractSpinBox_DragEnterEvent(QAbstractSpinBox* self, QDragEnterEvent* event);
    friend void QAbstractSpinBox_QBaseDragEnterEvent(QAbstractSpinBox* self, QDragEnterEvent* event);
    friend void QAbstractSpinBox_DragMoveEvent(QAbstractSpinBox* self, QDragMoveEvent* event);
    friend void QAbstractSpinBox_QBaseDragMoveEvent(QAbstractSpinBox* self, QDragMoveEvent* event);
    friend void QAbstractSpinBox_DragLeaveEvent(QAbstractSpinBox* self, QDragLeaveEvent* event);
    friend void QAbstractSpinBox_QBaseDragLeaveEvent(QAbstractSpinBox* self, QDragLeaveEvent* event);
    friend void QAbstractSpinBox_DropEvent(QAbstractSpinBox* self, QDropEvent* event);
    friend void QAbstractSpinBox_QBaseDropEvent(QAbstractSpinBox* self, QDropEvent* event);
    friend bool QAbstractSpinBox_NativeEvent(QAbstractSpinBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QAbstractSpinBox_QBaseNativeEvent(QAbstractSpinBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QAbstractSpinBox_Metric(const QAbstractSpinBox* self, int param1);
    friend int QAbstractSpinBox_QBaseMetric(const QAbstractSpinBox* self, int param1);
    friend void QAbstractSpinBox_InitPainter(const QAbstractSpinBox* self, QPainter* painter);
    friend void QAbstractSpinBox_QBaseInitPainter(const QAbstractSpinBox* self, QPainter* painter);
    friend QPaintDevice* QAbstractSpinBox_Redirected(const QAbstractSpinBox* self, QPoint* offset);
    friend QPaintDevice* QAbstractSpinBox_QBaseRedirected(const QAbstractSpinBox* self, QPoint* offset);
    friend QPainter* QAbstractSpinBox_SharedPainter(const QAbstractSpinBox* self);
    friend QPainter* QAbstractSpinBox_QBaseSharedPainter(const QAbstractSpinBox* self);
    friend void QAbstractSpinBox_InputMethodEvent(QAbstractSpinBox* self, QInputMethodEvent* param1);
    friend void QAbstractSpinBox_QBaseInputMethodEvent(QAbstractSpinBox* self, QInputMethodEvent* param1);
    friend bool QAbstractSpinBox_FocusNextPrevChild(QAbstractSpinBox* self, bool next);
    friend bool QAbstractSpinBox_QBaseFocusNextPrevChild(QAbstractSpinBox* self, bool next);
    friend void QAbstractSpinBox_ChildEvent(QAbstractSpinBox* self, QChildEvent* event);
    friend void QAbstractSpinBox_QBaseChildEvent(QAbstractSpinBox* self, QChildEvent* event);
    friend void QAbstractSpinBox_CustomEvent(QAbstractSpinBox* self, QEvent* event);
    friend void QAbstractSpinBox_QBaseCustomEvent(QAbstractSpinBox* self, QEvent* event);
    friend void QAbstractSpinBox_ConnectNotify(QAbstractSpinBox* self, const QMetaMethod* signal);
    friend void QAbstractSpinBox_QBaseConnectNotify(QAbstractSpinBox* self, const QMetaMethod* signal);
    friend void QAbstractSpinBox_DisconnectNotify(QAbstractSpinBox* self, const QMetaMethod* signal);
    friend void QAbstractSpinBox_QBaseDisconnectNotify(QAbstractSpinBox* self, const QMetaMethod* signal);
    friend QLineEdit* QAbstractSpinBox_LineEdit(const QAbstractSpinBox* self);
    friend QLineEdit* QAbstractSpinBox_QBaseLineEdit(const QAbstractSpinBox* self);
    friend void QAbstractSpinBox_SetLineEdit(QAbstractSpinBox* self, QLineEdit* edit);
    friend void QAbstractSpinBox_QBaseSetLineEdit(QAbstractSpinBox* self, QLineEdit* edit);
    friend void QAbstractSpinBox_UpdateMicroFocus(QAbstractSpinBox* self);
    friend void QAbstractSpinBox_QBaseUpdateMicroFocus(QAbstractSpinBox* self);
    friend void QAbstractSpinBox_Create(QAbstractSpinBox* self);
    friend void QAbstractSpinBox_QBaseCreate(QAbstractSpinBox* self);
    friend void QAbstractSpinBox_Destroy(QAbstractSpinBox* self);
    friend void QAbstractSpinBox_QBaseDestroy(QAbstractSpinBox* self);
    friend bool QAbstractSpinBox_FocusNextChild(QAbstractSpinBox* self);
    friend bool QAbstractSpinBox_QBaseFocusNextChild(QAbstractSpinBox* self);
    friend bool QAbstractSpinBox_FocusPreviousChild(QAbstractSpinBox* self);
    friend bool QAbstractSpinBox_QBaseFocusPreviousChild(QAbstractSpinBox* self);
    friend QObject* QAbstractSpinBox_Sender(const QAbstractSpinBox* self);
    friend QObject* QAbstractSpinBox_QBaseSender(const QAbstractSpinBox* self);
    friend int QAbstractSpinBox_SenderSignalIndex(const QAbstractSpinBox* self);
    friend int QAbstractSpinBox_QBaseSenderSignalIndex(const QAbstractSpinBox* self);
    friend int QAbstractSpinBox_Receivers(const QAbstractSpinBox* self, const char* signal);
    friend int QAbstractSpinBox_QBaseReceivers(const QAbstractSpinBox* self, const char* signal);
    friend bool QAbstractSpinBox_IsSignalConnected(const QAbstractSpinBox* self, const QMetaMethod* signal);
    friend bool QAbstractSpinBox_QBaseIsSignalConnected(const QAbstractSpinBox* self, const QMetaMethod* signal);
};

#endif
