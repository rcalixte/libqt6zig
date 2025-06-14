#pragma once
#ifndef SRCC_LIBVIRTUALQSPINBOX_H
#define SRCC_LIBVIRTUALQSPINBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSpinBox so that we can call protected methods
class VirtualQSpinBox final : public QSpinBox {

  public:
    // Virtual class boolean flag
    bool isVirtualQSpinBox = true;

    // Virtual class public types (including callbacks)
    using QSpinBox_Metacall_Callback = int (*)(QSpinBox*, int, int, void**);
    using QSpinBox_Event_Callback = bool (*)(QSpinBox*, QEvent*);
    using QSpinBox_Validate_Callback = int (*)(const QSpinBox*, libqt_string, int*);
    using QSpinBox_ValueFromText_Callback = int (*)(const QSpinBox*, libqt_string);
    using QSpinBox_TextFromValue_Callback = libqt_string (*)(const QSpinBox*, int);
    using QSpinBox_Fixup_Callback = void (*)(const QSpinBox*, libqt_string);
    using QSpinBox_SizeHint_Callback = QSize* (*)();
    using QSpinBox_MinimumSizeHint_Callback = QSize* (*)();
    using QSpinBox_InputMethodQuery_Callback = QVariant* (*)(const QSpinBox*, int);
    using QSpinBox_StepBy_Callback = void (*)(QSpinBox*, int);
    using QSpinBox_Clear_Callback = void (*)();
    using QSpinBox_ResizeEvent_Callback = void (*)(QSpinBox*, QResizeEvent*);
    using QSpinBox_KeyPressEvent_Callback = void (*)(QSpinBox*, QKeyEvent*);
    using QSpinBox_KeyReleaseEvent_Callback = void (*)(QSpinBox*, QKeyEvent*);
    using QSpinBox_WheelEvent_Callback = void (*)(QSpinBox*, QWheelEvent*);
    using QSpinBox_FocusInEvent_Callback = void (*)(QSpinBox*, QFocusEvent*);
    using QSpinBox_FocusOutEvent_Callback = void (*)(QSpinBox*, QFocusEvent*);
    using QSpinBox_ContextMenuEvent_Callback = void (*)(QSpinBox*, QContextMenuEvent*);
    using QSpinBox_ChangeEvent_Callback = void (*)(QSpinBox*, QEvent*);
    using QSpinBox_CloseEvent_Callback = void (*)(QSpinBox*, QCloseEvent*);
    using QSpinBox_HideEvent_Callback = void (*)(QSpinBox*, QHideEvent*);
    using QSpinBox_MousePressEvent_Callback = void (*)(QSpinBox*, QMouseEvent*);
    using QSpinBox_MouseReleaseEvent_Callback = void (*)(QSpinBox*, QMouseEvent*);
    using QSpinBox_MouseMoveEvent_Callback = void (*)(QSpinBox*, QMouseEvent*);
    using QSpinBox_TimerEvent_Callback = void (*)(QSpinBox*, QTimerEvent*);
    using QSpinBox_PaintEvent_Callback = void (*)(QSpinBox*, QPaintEvent*);
    using QSpinBox_ShowEvent_Callback = void (*)(QSpinBox*, QShowEvent*);
    using QSpinBox_InitStyleOption_Callback = void (*)(const QSpinBox*, QStyleOptionSpinBox*);
    using QSpinBox_StepEnabled_Callback = int (*)();
    using QSpinBox_DevType_Callback = int (*)();
    using QSpinBox_SetVisible_Callback = void (*)(QSpinBox*, bool);
    using QSpinBox_HeightForWidth_Callback = int (*)(const QSpinBox*, int);
    using QSpinBox_HasHeightForWidth_Callback = bool (*)();
    using QSpinBox_PaintEngine_Callback = QPaintEngine* (*)();
    using QSpinBox_MouseDoubleClickEvent_Callback = void (*)(QSpinBox*, QMouseEvent*);
    using QSpinBox_EnterEvent_Callback = void (*)(QSpinBox*, QEnterEvent*);
    using QSpinBox_LeaveEvent_Callback = void (*)(QSpinBox*, QEvent*);
    using QSpinBox_MoveEvent_Callback = void (*)(QSpinBox*, QMoveEvent*);
    using QSpinBox_TabletEvent_Callback = void (*)(QSpinBox*, QTabletEvent*);
    using QSpinBox_ActionEvent_Callback = void (*)(QSpinBox*, QActionEvent*);
    using QSpinBox_DragEnterEvent_Callback = void (*)(QSpinBox*, QDragEnterEvent*);
    using QSpinBox_DragMoveEvent_Callback = void (*)(QSpinBox*, QDragMoveEvent*);
    using QSpinBox_DragLeaveEvent_Callback = void (*)(QSpinBox*, QDragLeaveEvent*);
    using QSpinBox_DropEvent_Callback = void (*)(QSpinBox*, QDropEvent*);
    using QSpinBox_NativeEvent_Callback = bool (*)(QSpinBox*, libqt_string, void*, intptr_t*);
    using QSpinBox_Metric_Callback = int (*)(const QSpinBox*, int);
    using QSpinBox_InitPainter_Callback = void (*)(const QSpinBox*, QPainter*);
    using QSpinBox_Redirected_Callback = QPaintDevice* (*)(const QSpinBox*, QPoint*);
    using QSpinBox_SharedPainter_Callback = QPainter* (*)();
    using QSpinBox_InputMethodEvent_Callback = void (*)(QSpinBox*, QInputMethodEvent*);
    using QSpinBox_FocusNextPrevChild_Callback = bool (*)(QSpinBox*, bool);
    using QSpinBox_EventFilter_Callback = bool (*)(QSpinBox*, QObject*, QEvent*);
    using QSpinBox_ChildEvent_Callback = void (*)(QSpinBox*, QChildEvent*);
    using QSpinBox_CustomEvent_Callback = void (*)(QSpinBox*, QEvent*);
    using QSpinBox_ConnectNotify_Callback = void (*)(QSpinBox*, QMetaMethod*);
    using QSpinBox_DisconnectNotify_Callback = void (*)(QSpinBox*, QMetaMethod*);
    using QSpinBox_LineEdit_Callback = QLineEdit* (*)();
    using QSpinBox_SetLineEdit_Callback = void (*)(QSpinBox*, QLineEdit*);
    using QSpinBox_UpdateMicroFocus_Callback = void (*)();
    using QSpinBox_Create_Callback = void (*)();
    using QSpinBox_Destroy_Callback = void (*)();
    using QSpinBox_FocusNextChild_Callback = bool (*)();
    using QSpinBox_FocusPreviousChild_Callback = bool (*)();
    using QSpinBox_Sender_Callback = QObject* (*)();
    using QSpinBox_SenderSignalIndex_Callback = int (*)();
    using QSpinBox_Receivers_Callback = int (*)(const QSpinBox*, const char*);
    using QSpinBox_IsSignalConnected_Callback = bool (*)(const QSpinBox*, QMetaMethod*);

  protected:
    // Instance callback storage
    QSpinBox_Metacall_Callback qspinbox_metacall_callback = nullptr;
    QSpinBox_Event_Callback qspinbox_event_callback = nullptr;
    QSpinBox_Validate_Callback qspinbox_validate_callback = nullptr;
    QSpinBox_ValueFromText_Callback qspinbox_valuefromtext_callback = nullptr;
    QSpinBox_TextFromValue_Callback qspinbox_textfromvalue_callback = nullptr;
    QSpinBox_Fixup_Callback qspinbox_fixup_callback = nullptr;
    QSpinBox_SizeHint_Callback qspinbox_sizehint_callback = nullptr;
    QSpinBox_MinimumSizeHint_Callback qspinbox_minimumsizehint_callback = nullptr;
    QSpinBox_InputMethodQuery_Callback qspinbox_inputmethodquery_callback = nullptr;
    QSpinBox_StepBy_Callback qspinbox_stepby_callback = nullptr;
    QSpinBox_Clear_Callback qspinbox_clear_callback = nullptr;
    QSpinBox_ResizeEvent_Callback qspinbox_resizeevent_callback = nullptr;
    QSpinBox_KeyPressEvent_Callback qspinbox_keypressevent_callback = nullptr;
    QSpinBox_KeyReleaseEvent_Callback qspinbox_keyreleaseevent_callback = nullptr;
    QSpinBox_WheelEvent_Callback qspinbox_wheelevent_callback = nullptr;
    QSpinBox_FocusInEvent_Callback qspinbox_focusinevent_callback = nullptr;
    QSpinBox_FocusOutEvent_Callback qspinbox_focusoutevent_callback = nullptr;
    QSpinBox_ContextMenuEvent_Callback qspinbox_contextmenuevent_callback = nullptr;
    QSpinBox_ChangeEvent_Callback qspinbox_changeevent_callback = nullptr;
    QSpinBox_CloseEvent_Callback qspinbox_closeevent_callback = nullptr;
    QSpinBox_HideEvent_Callback qspinbox_hideevent_callback = nullptr;
    QSpinBox_MousePressEvent_Callback qspinbox_mousepressevent_callback = nullptr;
    QSpinBox_MouseReleaseEvent_Callback qspinbox_mousereleaseevent_callback = nullptr;
    QSpinBox_MouseMoveEvent_Callback qspinbox_mousemoveevent_callback = nullptr;
    QSpinBox_TimerEvent_Callback qspinbox_timerevent_callback = nullptr;
    QSpinBox_PaintEvent_Callback qspinbox_paintevent_callback = nullptr;
    QSpinBox_ShowEvent_Callback qspinbox_showevent_callback = nullptr;
    QSpinBox_InitStyleOption_Callback qspinbox_initstyleoption_callback = nullptr;
    QSpinBox_StepEnabled_Callback qspinbox_stepenabled_callback = nullptr;
    QSpinBox_DevType_Callback qspinbox_devtype_callback = nullptr;
    QSpinBox_SetVisible_Callback qspinbox_setvisible_callback = nullptr;
    QSpinBox_HeightForWidth_Callback qspinbox_heightforwidth_callback = nullptr;
    QSpinBox_HasHeightForWidth_Callback qspinbox_hasheightforwidth_callback = nullptr;
    QSpinBox_PaintEngine_Callback qspinbox_paintengine_callback = nullptr;
    QSpinBox_MouseDoubleClickEvent_Callback qspinbox_mousedoubleclickevent_callback = nullptr;
    QSpinBox_EnterEvent_Callback qspinbox_enterevent_callback = nullptr;
    QSpinBox_LeaveEvent_Callback qspinbox_leaveevent_callback = nullptr;
    QSpinBox_MoveEvent_Callback qspinbox_moveevent_callback = nullptr;
    QSpinBox_TabletEvent_Callback qspinbox_tabletevent_callback = nullptr;
    QSpinBox_ActionEvent_Callback qspinbox_actionevent_callback = nullptr;
    QSpinBox_DragEnterEvent_Callback qspinbox_dragenterevent_callback = nullptr;
    QSpinBox_DragMoveEvent_Callback qspinbox_dragmoveevent_callback = nullptr;
    QSpinBox_DragLeaveEvent_Callback qspinbox_dragleaveevent_callback = nullptr;
    QSpinBox_DropEvent_Callback qspinbox_dropevent_callback = nullptr;
    QSpinBox_NativeEvent_Callback qspinbox_nativeevent_callback = nullptr;
    QSpinBox_Metric_Callback qspinbox_metric_callback = nullptr;
    QSpinBox_InitPainter_Callback qspinbox_initpainter_callback = nullptr;
    QSpinBox_Redirected_Callback qspinbox_redirected_callback = nullptr;
    QSpinBox_SharedPainter_Callback qspinbox_sharedpainter_callback = nullptr;
    QSpinBox_InputMethodEvent_Callback qspinbox_inputmethodevent_callback = nullptr;
    QSpinBox_FocusNextPrevChild_Callback qspinbox_focusnextprevchild_callback = nullptr;
    QSpinBox_EventFilter_Callback qspinbox_eventfilter_callback = nullptr;
    QSpinBox_ChildEvent_Callback qspinbox_childevent_callback = nullptr;
    QSpinBox_CustomEvent_Callback qspinbox_customevent_callback = nullptr;
    QSpinBox_ConnectNotify_Callback qspinbox_connectnotify_callback = nullptr;
    QSpinBox_DisconnectNotify_Callback qspinbox_disconnectnotify_callback = nullptr;
    QSpinBox_LineEdit_Callback qspinbox_lineedit_callback = nullptr;
    QSpinBox_SetLineEdit_Callback qspinbox_setlineedit_callback = nullptr;
    QSpinBox_UpdateMicroFocus_Callback qspinbox_updatemicrofocus_callback = nullptr;
    QSpinBox_Create_Callback qspinbox_create_callback = nullptr;
    QSpinBox_Destroy_Callback qspinbox_destroy_callback = nullptr;
    QSpinBox_FocusNextChild_Callback qspinbox_focusnextchild_callback = nullptr;
    QSpinBox_FocusPreviousChild_Callback qspinbox_focuspreviouschild_callback = nullptr;
    QSpinBox_Sender_Callback qspinbox_sender_callback = nullptr;
    QSpinBox_SenderSignalIndex_Callback qspinbox_sendersignalindex_callback = nullptr;
    QSpinBox_Receivers_Callback qspinbox_receivers_callback = nullptr;
    QSpinBox_IsSignalConnected_Callback qspinbox_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qspinbox_metacall_isbase = false;
    mutable bool qspinbox_event_isbase = false;
    mutable bool qspinbox_validate_isbase = false;
    mutable bool qspinbox_valuefromtext_isbase = false;
    mutable bool qspinbox_textfromvalue_isbase = false;
    mutable bool qspinbox_fixup_isbase = false;
    mutable bool qspinbox_sizehint_isbase = false;
    mutable bool qspinbox_minimumsizehint_isbase = false;
    mutable bool qspinbox_inputmethodquery_isbase = false;
    mutable bool qspinbox_stepby_isbase = false;
    mutable bool qspinbox_clear_isbase = false;
    mutable bool qspinbox_resizeevent_isbase = false;
    mutable bool qspinbox_keypressevent_isbase = false;
    mutable bool qspinbox_keyreleaseevent_isbase = false;
    mutable bool qspinbox_wheelevent_isbase = false;
    mutable bool qspinbox_focusinevent_isbase = false;
    mutable bool qspinbox_focusoutevent_isbase = false;
    mutable bool qspinbox_contextmenuevent_isbase = false;
    mutable bool qspinbox_changeevent_isbase = false;
    mutable bool qspinbox_closeevent_isbase = false;
    mutable bool qspinbox_hideevent_isbase = false;
    mutable bool qspinbox_mousepressevent_isbase = false;
    mutable bool qspinbox_mousereleaseevent_isbase = false;
    mutable bool qspinbox_mousemoveevent_isbase = false;
    mutable bool qspinbox_timerevent_isbase = false;
    mutable bool qspinbox_paintevent_isbase = false;
    mutable bool qspinbox_showevent_isbase = false;
    mutable bool qspinbox_initstyleoption_isbase = false;
    mutable bool qspinbox_stepenabled_isbase = false;
    mutable bool qspinbox_devtype_isbase = false;
    mutable bool qspinbox_setvisible_isbase = false;
    mutable bool qspinbox_heightforwidth_isbase = false;
    mutable bool qspinbox_hasheightforwidth_isbase = false;
    mutable bool qspinbox_paintengine_isbase = false;
    mutable bool qspinbox_mousedoubleclickevent_isbase = false;
    mutable bool qspinbox_enterevent_isbase = false;
    mutable bool qspinbox_leaveevent_isbase = false;
    mutable bool qspinbox_moveevent_isbase = false;
    mutable bool qspinbox_tabletevent_isbase = false;
    mutable bool qspinbox_actionevent_isbase = false;
    mutable bool qspinbox_dragenterevent_isbase = false;
    mutable bool qspinbox_dragmoveevent_isbase = false;
    mutable bool qspinbox_dragleaveevent_isbase = false;
    mutable bool qspinbox_dropevent_isbase = false;
    mutable bool qspinbox_nativeevent_isbase = false;
    mutable bool qspinbox_metric_isbase = false;
    mutable bool qspinbox_initpainter_isbase = false;
    mutable bool qspinbox_redirected_isbase = false;
    mutable bool qspinbox_sharedpainter_isbase = false;
    mutable bool qspinbox_inputmethodevent_isbase = false;
    mutable bool qspinbox_focusnextprevchild_isbase = false;
    mutable bool qspinbox_eventfilter_isbase = false;
    mutable bool qspinbox_childevent_isbase = false;
    mutable bool qspinbox_customevent_isbase = false;
    mutable bool qspinbox_connectnotify_isbase = false;
    mutable bool qspinbox_disconnectnotify_isbase = false;
    mutable bool qspinbox_lineedit_isbase = false;
    mutable bool qspinbox_setlineedit_isbase = false;
    mutable bool qspinbox_updatemicrofocus_isbase = false;
    mutable bool qspinbox_create_isbase = false;
    mutable bool qspinbox_destroy_isbase = false;
    mutable bool qspinbox_focusnextchild_isbase = false;
    mutable bool qspinbox_focuspreviouschild_isbase = false;
    mutable bool qspinbox_sender_isbase = false;
    mutable bool qspinbox_sendersignalindex_isbase = false;
    mutable bool qspinbox_receivers_isbase = false;
    mutable bool qspinbox_issignalconnected_isbase = false;

  public:
    VirtualQSpinBox(QWidget* parent) : QSpinBox(parent){};
    VirtualQSpinBox() : QSpinBox(){};

    ~VirtualQSpinBox() {
        qspinbox_metacall_callback = nullptr;
        qspinbox_event_callback = nullptr;
        qspinbox_validate_callback = nullptr;
        qspinbox_valuefromtext_callback = nullptr;
        qspinbox_textfromvalue_callback = nullptr;
        qspinbox_fixup_callback = nullptr;
        qspinbox_sizehint_callback = nullptr;
        qspinbox_minimumsizehint_callback = nullptr;
        qspinbox_inputmethodquery_callback = nullptr;
        qspinbox_stepby_callback = nullptr;
        qspinbox_clear_callback = nullptr;
        qspinbox_resizeevent_callback = nullptr;
        qspinbox_keypressevent_callback = nullptr;
        qspinbox_keyreleaseevent_callback = nullptr;
        qspinbox_wheelevent_callback = nullptr;
        qspinbox_focusinevent_callback = nullptr;
        qspinbox_focusoutevent_callback = nullptr;
        qspinbox_contextmenuevent_callback = nullptr;
        qspinbox_changeevent_callback = nullptr;
        qspinbox_closeevent_callback = nullptr;
        qspinbox_hideevent_callback = nullptr;
        qspinbox_mousepressevent_callback = nullptr;
        qspinbox_mousereleaseevent_callback = nullptr;
        qspinbox_mousemoveevent_callback = nullptr;
        qspinbox_timerevent_callback = nullptr;
        qspinbox_paintevent_callback = nullptr;
        qspinbox_showevent_callback = nullptr;
        qspinbox_initstyleoption_callback = nullptr;
        qspinbox_stepenabled_callback = nullptr;
        qspinbox_devtype_callback = nullptr;
        qspinbox_setvisible_callback = nullptr;
        qspinbox_heightforwidth_callback = nullptr;
        qspinbox_hasheightforwidth_callback = nullptr;
        qspinbox_paintengine_callback = nullptr;
        qspinbox_mousedoubleclickevent_callback = nullptr;
        qspinbox_enterevent_callback = nullptr;
        qspinbox_leaveevent_callback = nullptr;
        qspinbox_moveevent_callback = nullptr;
        qspinbox_tabletevent_callback = nullptr;
        qspinbox_actionevent_callback = nullptr;
        qspinbox_dragenterevent_callback = nullptr;
        qspinbox_dragmoveevent_callback = nullptr;
        qspinbox_dragleaveevent_callback = nullptr;
        qspinbox_dropevent_callback = nullptr;
        qspinbox_nativeevent_callback = nullptr;
        qspinbox_metric_callback = nullptr;
        qspinbox_initpainter_callback = nullptr;
        qspinbox_redirected_callback = nullptr;
        qspinbox_sharedpainter_callback = nullptr;
        qspinbox_inputmethodevent_callback = nullptr;
        qspinbox_focusnextprevchild_callback = nullptr;
        qspinbox_eventfilter_callback = nullptr;
        qspinbox_childevent_callback = nullptr;
        qspinbox_customevent_callback = nullptr;
        qspinbox_connectnotify_callback = nullptr;
        qspinbox_disconnectnotify_callback = nullptr;
        qspinbox_lineedit_callback = nullptr;
        qspinbox_setlineedit_callback = nullptr;
        qspinbox_updatemicrofocus_callback = nullptr;
        qspinbox_create_callback = nullptr;
        qspinbox_destroy_callback = nullptr;
        qspinbox_focusnextchild_callback = nullptr;
        qspinbox_focuspreviouschild_callback = nullptr;
        qspinbox_sender_callback = nullptr;
        qspinbox_sendersignalindex_callback = nullptr;
        qspinbox_receivers_callback = nullptr;
        qspinbox_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQSpinBox_Metacall_Callback(QSpinBox_Metacall_Callback cb) { qspinbox_metacall_callback = cb; }
    inline void setQSpinBox_Event_Callback(QSpinBox_Event_Callback cb) { qspinbox_event_callback = cb; }
    inline void setQSpinBox_Validate_Callback(QSpinBox_Validate_Callback cb) { qspinbox_validate_callback = cb; }
    inline void setQSpinBox_ValueFromText_Callback(QSpinBox_ValueFromText_Callback cb) { qspinbox_valuefromtext_callback = cb; }
    inline void setQSpinBox_TextFromValue_Callback(QSpinBox_TextFromValue_Callback cb) { qspinbox_textfromvalue_callback = cb; }
    inline void setQSpinBox_Fixup_Callback(QSpinBox_Fixup_Callback cb) { qspinbox_fixup_callback = cb; }
    inline void setQSpinBox_SizeHint_Callback(QSpinBox_SizeHint_Callback cb) { qspinbox_sizehint_callback = cb; }
    inline void setQSpinBox_MinimumSizeHint_Callback(QSpinBox_MinimumSizeHint_Callback cb) { qspinbox_minimumsizehint_callback = cb; }
    inline void setQSpinBox_InputMethodQuery_Callback(QSpinBox_InputMethodQuery_Callback cb) { qspinbox_inputmethodquery_callback = cb; }
    inline void setQSpinBox_StepBy_Callback(QSpinBox_StepBy_Callback cb) { qspinbox_stepby_callback = cb; }
    inline void setQSpinBox_Clear_Callback(QSpinBox_Clear_Callback cb) { qspinbox_clear_callback = cb; }
    inline void setQSpinBox_ResizeEvent_Callback(QSpinBox_ResizeEvent_Callback cb) { qspinbox_resizeevent_callback = cb; }
    inline void setQSpinBox_KeyPressEvent_Callback(QSpinBox_KeyPressEvent_Callback cb) { qspinbox_keypressevent_callback = cb; }
    inline void setQSpinBox_KeyReleaseEvent_Callback(QSpinBox_KeyReleaseEvent_Callback cb) { qspinbox_keyreleaseevent_callback = cb; }
    inline void setQSpinBox_WheelEvent_Callback(QSpinBox_WheelEvent_Callback cb) { qspinbox_wheelevent_callback = cb; }
    inline void setQSpinBox_FocusInEvent_Callback(QSpinBox_FocusInEvent_Callback cb) { qspinbox_focusinevent_callback = cb; }
    inline void setQSpinBox_FocusOutEvent_Callback(QSpinBox_FocusOutEvent_Callback cb) { qspinbox_focusoutevent_callback = cb; }
    inline void setQSpinBox_ContextMenuEvent_Callback(QSpinBox_ContextMenuEvent_Callback cb) { qspinbox_contextmenuevent_callback = cb; }
    inline void setQSpinBox_ChangeEvent_Callback(QSpinBox_ChangeEvent_Callback cb) { qspinbox_changeevent_callback = cb; }
    inline void setQSpinBox_CloseEvent_Callback(QSpinBox_CloseEvent_Callback cb) { qspinbox_closeevent_callback = cb; }
    inline void setQSpinBox_HideEvent_Callback(QSpinBox_HideEvent_Callback cb) { qspinbox_hideevent_callback = cb; }
    inline void setQSpinBox_MousePressEvent_Callback(QSpinBox_MousePressEvent_Callback cb) { qspinbox_mousepressevent_callback = cb; }
    inline void setQSpinBox_MouseReleaseEvent_Callback(QSpinBox_MouseReleaseEvent_Callback cb) { qspinbox_mousereleaseevent_callback = cb; }
    inline void setQSpinBox_MouseMoveEvent_Callback(QSpinBox_MouseMoveEvent_Callback cb) { qspinbox_mousemoveevent_callback = cb; }
    inline void setQSpinBox_TimerEvent_Callback(QSpinBox_TimerEvent_Callback cb) { qspinbox_timerevent_callback = cb; }
    inline void setQSpinBox_PaintEvent_Callback(QSpinBox_PaintEvent_Callback cb) { qspinbox_paintevent_callback = cb; }
    inline void setQSpinBox_ShowEvent_Callback(QSpinBox_ShowEvent_Callback cb) { qspinbox_showevent_callback = cb; }
    inline void setQSpinBox_InitStyleOption_Callback(QSpinBox_InitStyleOption_Callback cb) { qspinbox_initstyleoption_callback = cb; }
    inline void setQSpinBox_StepEnabled_Callback(QSpinBox_StepEnabled_Callback cb) { qspinbox_stepenabled_callback = cb; }
    inline void setQSpinBox_DevType_Callback(QSpinBox_DevType_Callback cb) { qspinbox_devtype_callback = cb; }
    inline void setQSpinBox_SetVisible_Callback(QSpinBox_SetVisible_Callback cb) { qspinbox_setvisible_callback = cb; }
    inline void setQSpinBox_HeightForWidth_Callback(QSpinBox_HeightForWidth_Callback cb) { qspinbox_heightforwidth_callback = cb; }
    inline void setQSpinBox_HasHeightForWidth_Callback(QSpinBox_HasHeightForWidth_Callback cb) { qspinbox_hasheightforwidth_callback = cb; }
    inline void setQSpinBox_PaintEngine_Callback(QSpinBox_PaintEngine_Callback cb) { qspinbox_paintengine_callback = cb; }
    inline void setQSpinBox_MouseDoubleClickEvent_Callback(QSpinBox_MouseDoubleClickEvent_Callback cb) { qspinbox_mousedoubleclickevent_callback = cb; }
    inline void setQSpinBox_EnterEvent_Callback(QSpinBox_EnterEvent_Callback cb) { qspinbox_enterevent_callback = cb; }
    inline void setQSpinBox_LeaveEvent_Callback(QSpinBox_LeaveEvent_Callback cb) { qspinbox_leaveevent_callback = cb; }
    inline void setQSpinBox_MoveEvent_Callback(QSpinBox_MoveEvent_Callback cb) { qspinbox_moveevent_callback = cb; }
    inline void setQSpinBox_TabletEvent_Callback(QSpinBox_TabletEvent_Callback cb) { qspinbox_tabletevent_callback = cb; }
    inline void setQSpinBox_ActionEvent_Callback(QSpinBox_ActionEvent_Callback cb) { qspinbox_actionevent_callback = cb; }
    inline void setQSpinBox_DragEnterEvent_Callback(QSpinBox_DragEnterEvent_Callback cb) { qspinbox_dragenterevent_callback = cb; }
    inline void setQSpinBox_DragMoveEvent_Callback(QSpinBox_DragMoveEvent_Callback cb) { qspinbox_dragmoveevent_callback = cb; }
    inline void setQSpinBox_DragLeaveEvent_Callback(QSpinBox_DragLeaveEvent_Callback cb) { qspinbox_dragleaveevent_callback = cb; }
    inline void setQSpinBox_DropEvent_Callback(QSpinBox_DropEvent_Callback cb) { qspinbox_dropevent_callback = cb; }
    inline void setQSpinBox_NativeEvent_Callback(QSpinBox_NativeEvent_Callback cb) { qspinbox_nativeevent_callback = cb; }
    inline void setQSpinBox_Metric_Callback(QSpinBox_Metric_Callback cb) { qspinbox_metric_callback = cb; }
    inline void setQSpinBox_InitPainter_Callback(QSpinBox_InitPainter_Callback cb) { qspinbox_initpainter_callback = cb; }
    inline void setQSpinBox_Redirected_Callback(QSpinBox_Redirected_Callback cb) { qspinbox_redirected_callback = cb; }
    inline void setQSpinBox_SharedPainter_Callback(QSpinBox_SharedPainter_Callback cb) { qspinbox_sharedpainter_callback = cb; }
    inline void setQSpinBox_InputMethodEvent_Callback(QSpinBox_InputMethodEvent_Callback cb) { qspinbox_inputmethodevent_callback = cb; }
    inline void setQSpinBox_FocusNextPrevChild_Callback(QSpinBox_FocusNextPrevChild_Callback cb) { qspinbox_focusnextprevchild_callback = cb; }
    inline void setQSpinBox_EventFilter_Callback(QSpinBox_EventFilter_Callback cb) { qspinbox_eventfilter_callback = cb; }
    inline void setQSpinBox_ChildEvent_Callback(QSpinBox_ChildEvent_Callback cb) { qspinbox_childevent_callback = cb; }
    inline void setQSpinBox_CustomEvent_Callback(QSpinBox_CustomEvent_Callback cb) { qspinbox_customevent_callback = cb; }
    inline void setQSpinBox_ConnectNotify_Callback(QSpinBox_ConnectNotify_Callback cb) { qspinbox_connectnotify_callback = cb; }
    inline void setQSpinBox_DisconnectNotify_Callback(QSpinBox_DisconnectNotify_Callback cb) { qspinbox_disconnectnotify_callback = cb; }
    inline void setQSpinBox_LineEdit_Callback(QSpinBox_LineEdit_Callback cb) { qspinbox_lineedit_callback = cb; }
    inline void setQSpinBox_SetLineEdit_Callback(QSpinBox_SetLineEdit_Callback cb) { qspinbox_setlineedit_callback = cb; }
    inline void setQSpinBox_UpdateMicroFocus_Callback(QSpinBox_UpdateMicroFocus_Callback cb) { qspinbox_updatemicrofocus_callback = cb; }
    inline void setQSpinBox_Create_Callback(QSpinBox_Create_Callback cb) { qspinbox_create_callback = cb; }
    inline void setQSpinBox_Destroy_Callback(QSpinBox_Destroy_Callback cb) { qspinbox_destroy_callback = cb; }
    inline void setQSpinBox_FocusNextChild_Callback(QSpinBox_FocusNextChild_Callback cb) { qspinbox_focusnextchild_callback = cb; }
    inline void setQSpinBox_FocusPreviousChild_Callback(QSpinBox_FocusPreviousChild_Callback cb) { qspinbox_focuspreviouschild_callback = cb; }
    inline void setQSpinBox_Sender_Callback(QSpinBox_Sender_Callback cb) { qspinbox_sender_callback = cb; }
    inline void setQSpinBox_SenderSignalIndex_Callback(QSpinBox_SenderSignalIndex_Callback cb) { qspinbox_sendersignalindex_callback = cb; }
    inline void setQSpinBox_Receivers_Callback(QSpinBox_Receivers_Callback cb) { qspinbox_receivers_callback = cb; }
    inline void setQSpinBox_IsSignalConnected_Callback(QSpinBox_IsSignalConnected_Callback cb) { qspinbox_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSpinBox_Metacall_IsBase(bool value) const { qspinbox_metacall_isbase = value; }
    inline void setQSpinBox_Event_IsBase(bool value) const { qspinbox_event_isbase = value; }
    inline void setQSpinBox_Validate_IsBase(bool value) const { qspinbox_validate_isbase = value; }
    inline void setQSpinBox_ValueFromText_IsBase(bool value) const { qspinbox_valuefromtext_isbase = value; }
    inline void setQSpinBox_TextFromValue_IsBase(bool value) const { qspinbox_textfromvalue_isbase = value; }
    inline void setQSpinBox_Fixup_IsBase(bool value) const { qspinbox_fixup_isbase = value; }
    inline void setQSpinBox_SizeHint_IsBase(bool value) const { qspinbox_sizehint_isbase = value; }
    inline void setQSpinBox_MinimumSizeHint_IsBase(bool value) const { qspinbox_minimumsizehint_isbase = value; }
    inline void setQSpinBox_InputMethodQuery_IsBase(bool value) const { qspinbox_inputmethodquery_isbase = value; }
    inline void setQSpinBox_StepBy_IsBase(bool value) const { qspinbox_stepby_isbase = value; }
    inline void setQSpinBox_Clear_IsBase(bool value) const { qspinbox_clear_isbase = value; }
    inline void setQSpinBox_ResizeEvent_IsBase(bool value) const { qspinbox_resizeevent_isbase = value; }
    inline void setQSpinBox_KeyPressEvent_IsBase(bool value) const { qspinbox_keypressevent_isbase = value; }
    inline void setQSpinBox_KeyReleaseEvent_IsBase(bool value) const { qspinbox_keyreleaseevent_isbase = value; }
    inline void setQSpinBox_WheelEvent_IsBase(bool value) const { qspinbox_wheelevent_isbase = value; }
    inline void setQSpinBox_FocusInEvent_IsBase(bool value) const { qspinbox_focusinevent_isbase = value; }
    inline void setQSpinBox_FocusOutEvent_IsBase(bool value) const { qspinbox_focusoutevent_isbase = value; }
    inline void setQSpinBox_ContextMenuEvent_IsBase(bool value) const { qspinbox_contextmenuevent_isbase = value; }
    inline void setQSpinBox_ChangeEvent_IsBase(bool value) const { qspinbox_changeevent_isbase = value; }
    inline void setQSpinBox_CloseEvent_IsBase(bool value) const { qspinbox_closeevent_isbase = value; }
    inline void setQSpinBox_HideEvent_IsBase(bool value) const { qspinbox_hideevent_isbase = value; }
    inline void setQSpinBox_MousePressEvent_IsBase(bool value) const { qspinbox_mousepressevent_isbase = value; }
    inline void setQSpinBox_MouseReleaseEvent_IsBase(bool value) const { qspinbox_mousereleaseevent_isbase = value; }
    inline void setQSpinBox_MouseMoveEvent_IsBase(bool value) const { qspinbox_mousemoveevent_isbase = value; }
    inline void setQSpinBox_TimerEvent_IsBase(bool value) const { qspinbox_timerevent_isbase = value; }
    inline void setQSpinBox_PaintEvent_IsBase(bool value) const { qspinbox_paintevent_isbase = value; }
    inline void setQSpinBox_ShowEvent_IsBase(bool value) const { qspinbox_showevent_isbase = value; }
    inline void setQSpinBox_InitStyleOption_IsBase(bool value) const { qspinbox_initstyleoption_isbase = value; }
    inline void setQSpinBox_StepEnabled_IsBase(bool value) const { qspinbox_stepenabled_isbase = value; }
    inline void setQSpinBox_DevType_IsBase(bool value) const { qspinbox_devtype_isbase = value; }
    inline void setQSpinBox_SetVisible_IsBase(bool value) const { qspinbox_setvisible_isbase = value; }
    inline void setQSpinBox_HeightForWidth_IsBase(bool value) const { qspinbox_heightforwidth_isbase = value; }
    inline void setQSpinBox_HasHeightForWidth_IsBase(bool value) const { qspinbox_hasheightforwidth_isbase = value; }
    inline void setQSpinBox_PaintEngine_IsBase(bool value) const { qspinbox_paintengine_isbase = value; }
    inline void setQSpinBox_MouseDoubleClickEvent_IsBase(bool value) const { qspinbox_mousedoubleclickevent_isbase = value; }
    inline void setQSpinBox_EnterEvent_IsBase(bool value) const { qspinbox_enterevent_isbase = value; }
    inline void setQSpinBox_LeaveEvent_IsBase(bool value) const { qspinbox_leaveevent_isbase = value; }
    inline void setQSpinBox_MoveEvent_IsBase(bool value) const { qspinbox_moveevent_isbase = value; }
    inline void setQSpinBox_TabletEvent_IsBase(bool value) const { qspinbox_tabletevent_isbase = value; }
    inline void setQSpinBox_ActionEvent_IsBase(bool value) const { qspinbox_actionevent_isbase = value; }
    inline void setQSpinBox_DragEnterEvent_IsBase(bool value) const { qspinbox_dragenterevent_isbase = value; }
    inline void setQSpinBox_DragMoveEvent_IsBase(bool value) const { qspinbox_dragmoveevent_isbase = value; }
    inline void setQSpinBox_DragLeaveEvent_IsBase(bool value) const { qspinbox_dragleaveevent_isbase = value; }
    inline void setQSpinBox_DropEvent_IsBase(bool value) const { qspinbox_dropevent_isbase = value; }
    inline void setQSpinBox_NativeEvent_IsBase(bool value) const { qspinbox_nativeevent_isbase = value; }
    inline void setQSpinBox_Metric_IsBase(bool value) const { qspinbox_metric_isbase = value; }
    inline void setQSpinBox_InitPainter_IsBase(bool value) const { qspinbox_initpainter_isbase = value; }
    inline void setQSpinBox_Redirected_IsBase(bool value) const { qspinbox_redirected_isbase = value; }
    inline void setQSpinBox_SharedPainter_IsBase(bool value) const { qspinbox_sharedpainter_isbase = value; }
    inline void setQSpinBox_InputMethodEvent_IsBase(bool value) const { qspinbox_inputmethodevent_isbase = value; }
    inline void setQSpinBox_FocusNextPrevChild_IsBase(bool value) const { qspinbox_focusnextprevchild_isbase = value; }
    inline void setQSpinBox_EventFilter_IsBase(bool value) const { qspinbox_eventfilter_isbase = value; }
    inline void setQSpinBox_ChildEvent_IsBase(bool value) const { qspinbox_childevent_isbase = value; }
    inline void setQSpinBox_CustomEvent_IsBase(bool value) const { qspinbox_customevent_isbase = value; }
    inline void setQSpinBox_ConnectNotify_IsBase(bool value) const { qspinbox_connectnotify_isbase = value; }
    inline void setQSpinBox_DisconnectNotify_IsBase(bool value) const { qspinbox_disconnectnotify_isbase = value; }
    inline void setQSpinBox_LineEdit_IsBase(bool value) const { qspinbox_lineedit_isbase = value; }
    inline void setQSpinBox_SetLineEdit_IsBase(bool value) const { qspinbox_setlineedit_isbase = value; }
    inline void setQSpinBox_UpdateMicroFocus_IsBase(bool value) const { qspinbox_updatemicrofocus_isbase = value; }
    inline void setQSpinBox_Create_IsBase(bool value) const { qspinbox_create_isbase = value; }
    inline void setQSpinBox_Destroy_IsBase(bool value) const { qspinbox_destroy_isbase = value; }
    inline void setQSpinBox_FocusNextChild_IsBase(bool value) const { qspinbox_focusnextchild_isbase = value; }
    inline void setQSpinBox_FocusPreviousChild_IsBase(bool value) const { qspinbox_focuspreviouschild_isbase = value; }
    inline void setQSpinBox_Sender_IsBase(bool value) const { qspinbox_sender_isbase = value; }
    inline void setQSpinBox_SenderSignalIndex_IsBase(bool value) const { qspinbox_sendersignalindex_isbase = value; }
    inline void setQSpinBox_Receivers_IsBase(bool value) const { qspinbox_receivers_isbase = value; }
    inline void setQSpinBox_IsSignalConnected_IsBase(bool value) const { qspinbox_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qspinbox_metacall_isbase) {
            qspinbox_metacall_isbase = false;
            return QSpinBox::qt_metacall(param1, param2, param3);
        } else if (qspinbox_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qspinbox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QSpinBox::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qspinbox_event_isbase) {
            qspinbox_event_isbase = false;
            return QSpinBox::event(event);
        } else if (qspinbox_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qspinbox_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSpinBox::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& input, int& pos) const override {
        if (qspinbox_validate_isbase) {
            qspinbox_validate_isbase = false;
            return QSpinBox::validate(input, pos);
        } else if (qspinbox_validate_callback != nullptr) {
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

            int callback_ret = qspinbox_validate_callback(this, cbval1, cbval2);
            return static_cast<QValidator::State>(callback_ret);
        } else {
            return QSpinBox::validate(input, pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int valueFromText(const QString& text) const override {
        if (qspinbox_valuefromtext_isbase) {
            qspinbox_valuefromtext_isbase = false;
            return QSpinBox::valueFromText(text);
        } else if (qspinbox_valuefromtext_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc((text_str.len + 1) * sizeof(char)));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            int callback_ret = qspinbox_valuefromtext_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSpinBox::valueFromText(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString textFromValue(int val) const override {
        if (qspinbox_textfromvalue_isbase) {
            qspinbox_textfromvalue_isbase = false;
            return QSpinBox::textFromValue(val);
        } else if (qspinbox_textfromvalue_callback != nullptr) {
            int cbval1 = val;

            libqt_string callback_ret = qspinbox_textfromvalue_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QSpinBox::textFromValue(val);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& str) const override {
        if (qspinbox_fixup_isbase) {
            qspinbox_fixup_isbase = false;
            QSpinBox::fixup(str);
        } else if (qspinbox_fixup_callback != nullptr) {
            QString str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            libqt_string str_str;
            str_str.len = str_b.length();
            str_str.data = static_cast<const char*>(malloc((str_str.len + 1) * sizeof(char)));
            memcpy((void*)str_str.data, str_b.data(), str_str.len);
            ((char*)str_str.data)[str_str.len] = '\0';
            libqt_string cbval1 = str_str;

            qspinbox_fixup_callback(this, cbval1);
        } else {
            QSpinBox::fixup(str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qspinbox_sizehint_isbase) {
            qspinbox_sizehint_isbase = false;
            return QSpinBox::sizeHint();
        } else if (qspinbox_sizehint_callback != nullptr) {
            QSize* callback_ret = qspinbox_sizehint_callback();
            return *callback_ret;
        } else {
            return QSpinBox::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qspinbox_minimumsizehint_isbase) {
            qspinbox_minimumsizehint_isbase = false;
            return QSpinBox::minimumSizeHint();
        } else if (qspinbox_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qspinbox_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QSpinBox::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qspinbox_inputmethodquery_isbase) {
            qspinbox_inputmethodquery_isbase = false;
            return QSpinBox::inputMethodQuery(param1);
        } else if (qspinbox_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qspinbox_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSpinBox::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void stepBy(int steps) override {
        if (qspinbox_stepby_isbase) {
            qspinbox_stepby_isbase = false;
            QSpinBox::stepBy(steps);
        } else if (qspinbox_stepby_callback != nullptr) {
            int cbval1 = steps;

            qspinbox_stepby_callback(this, cbval1);
        } else {
            QSpinBox::stepBy(steps);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qspinbox_clear_isbase) {
            qspinbox_clear_isbase = false;
            QSpinBox::clear();
        } else if (qspinbox_clear_callback != nullptr) {
            qspinbox_clear_callback();
        } else {
            QSpinBox::clear();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qspinbox_resizeevent_isbase) {
            qspinbox_resizeevent_isbase = false;
            QSpinBox::resizeEvent(event);
        } else if (qspinbox_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qspinbox_resizeevent_callback(this, cbval1);
        } else {
            QSpinBox::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qspinbox_keypressevent_isbase) {
            qspinbox_keypressevent_isbase = false;
            QSpinBox::keyPressEvent(event);
        } else if (qspinbox_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qspinbox_keypressevent_callback(this, cbval1);
        } else {
            QSpinBox::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qspinbox_keyreleaseevent_isbase) {
            qspinbox_keyreleaseevent_isbase = false;
            QSpinBox::keyReleaseEvent(event);
        } else if (qspinbox_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qspinbox_keyreleaseevent_callback(this, cbval1);
        } else {
            QSpinBox::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qspinbox_wheelevent_isbase) {
            qspinbox_wheelevent_isbase = false;
            QSpinBox::wheelEvent(event);
        } else if (qspinbox_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qspinbox_wheelevent_callback(this, cbval1);
        } else {
            QSpinBox::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qspinbox_focusinevent_isbase) {
            qspinbox_focusinevent_isbase = false;
            QSpinBox::focusInEvent(event);
        } else if (qspinbox_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qspinbox_focusinevent_callback(this, cbval1);
        } else {
            QSpinBox::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qspinbox_focusoutevent_isbase) {
            qspinbox_focusoutevent_isbase = false;
            QSpinBox::focusOutEvent(event);
        } else if (qspinbox_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qspinbox_focusoutevent_callback(this, cbval1);
        } else {
            QSpinBox::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qspinbox_contextmenuevent_isbase) {
            qspinbox_contextmenuevent_isbase = false;
            QSpinBox::contextMenuEvent(event);
        } else if (qspinbox_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qspinbox_contextmenuevent_callback(this, cbval1);
        } else {
            QSpinBox::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qspinbox_changeevent_isbase) {
            qspinbox_changeevent_isbase = false;
            QSpinBox::changeEvent(event);
        } else if (qspinbox_changeevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qspinbox_changeevent_callback(this, cbval1);
        } else {
            QSpinBox::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qspinbox_closeevent_isbase) {
            qspinbox_closeevent_isbase = false;
            QSpinBox::closeEvent(event);
        } else if (qspinbox_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qspinbox_closeevent_callback(this, cbval1);
        } else {
            QSpinBox::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qspinbox_hideevent_isbase) {
            qspinbox_hideevent_isbase = false;
            QSpinBox::hideEvent(event);
        } else if (qspinbox_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qspinbox_hideevent_callback(this, cbval1);
        } else {
            QSpinBox::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qspinbox_mousepressevent_isbase) {
            qspinbox_mousepressevent_isbase = false;
            QSpinBox::mousePressEvent(event);
        } else if (qspinbox_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qspinbox_mousepressevent_callback(this, cbval1);
        } else {
            QSpinBox::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qspinbox_mousereleaseevent_isbase) {
            qspinbox_mousereleaseevent_isbase = false;
            QSpinBox::mouseReleaseEvent(event);
        } else if (qspinbox_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qspinbox_mousereleaseevent_callback(this, cbval1);
        } else {
            QSpinBox::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qspinbox_mousemoveevent_isbase) {
            qspinbox_mousemoveevent_isbase = false;
            QSpinBox::mouseMoveEvent(event);
        } else if (qspinbox_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qspinbox_mousemoveevent_callback(this, cbval1);
        } else {
            QSpinBox::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qspinbox_timerevent_isbase) {
            qspinbox_timerevent_isbase = false;
            QSpinBox::timerEvent(event);
        } else if (qspinbox_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qspinbox_timerevent_callback(this, cbval1);
        } else {
            QSpinBox::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qspinbox_paintevent_isbase) {
            qspinbox_paintevent_isbase = false;
            QSpinBox::paintEvent(event);
        } else if (qspinbox_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qspinbox_paintevent_callback(this, cbval1);
        } else {
            QSpinBox::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qspinbox_showevent_isbase) {
            qspinbox_showevent_isbase = false;
            QSpinBox::showEvent(event);
        } else if (qspinbox_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qspinbox_showevent_callback(this, cbval1);
        } else {
            QSpinBox::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
        if (qspinbox_initstyleoption_isbase) {
            qspinbox_initstyleoption_isbase = false;
            QSpinBox::initStyleOption(option);
        } else if (qspinbox_initstyleoption_callback != nullptr) {
            QStyleOptionSpinBox* cbval1 = option;

            qspinbox_initstyleoption_callback(this, cbval1);
        } else {
            QSpinBox::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
        if (qspinbox_stepenabled_isbase) {
            qspinbox_stepenabled_isbase = false;
            return QSpinBox::stepEnabled();
        } else if (qspinbox_stepenabled_callback != nullptr) {
            int callback_ret = qspinbox_stepenabled_callback();
            return static_cast<QAbstractSpinBox::StepEnabled>(callback_ret);
        } else {
            return QSpinBox::stepEnabled();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qspinbox_devtype_isbase) {
            qspinbox_devtype_isbase = false;
            return QSpinBox::devType();
        } else if (qspinbox_devtype_callback != nullptr) {
            int callback_ret = qspinbox_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QSpinBox::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qspinbox_setvisible_isbase) {
            qspinbox_setvisible_isbase = false;
            QSpinBox::setVisible(visible);
        } else if (qspinbox_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qspinbox_setvisible_callback(this, cbval1);
        } else {
            QSpinBox::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qspinbox_heightforwidth_isbase) {
            qspinbox_heightforwidth_isbase = false;
            return QSpinBox::heightForWidth(param1);
        } else if (qspinbox_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qspinbox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSpinBox::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qspinbox_hasheightforwidth_isbase) {
            qspinbox_hasheightforwidth_isbase = false;
            return QSpinBox::hasHeightForWidth();
        } else if (qspinbox_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qspinbox_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QSpinBox::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qspinbox_paintengine_isbase) {
            qspinbox_paintengine_isbase = false;
            return QSpinBox::paintEngine();
        } else if (qspinbox_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qspinbox_paintengine_callback();
            return callback_ret;
        } else {
            return QSpinBox::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qspinbox_mousedoubleclickevent_isbase) {
            qspinbox_mousedoubleclickevent_isbase = false;
            QSpinBox::mouseDoubleClickEvent(event);
        } else if (qspinbox_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qspinbox_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QSpinBox::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qspinbox_enterevent_isbase) {
            qspinbox_enterevent_isbase = false;
            QSpinBox::enterEvent(event);
        } else if (qspinbox_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qspinbox_enterevent_callback(this, cbval1);
        } else {
            QSpinBox::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qspinbox_leaveevent_isbase) {
            qspinbox_leaveevent_isbase = false;
            QSpinBox::leaveEvent(event);
        } else if (qspinbox_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qspinbox_leaveevent_callback(this, cbval1);
        } else {
            QSpinBox::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qspinbox_moveevent_isbase) {
            qspinbox_moveevent_isbase = false;
            QSpinBox::moveEvent(event);
        } else if (qspinbox_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qspinbox_moveevent_callback(this, cbval1);
        } else {
            QSpinBox::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qspinbox_tabletevent_isbase) {
            qspinbox_tabletevent_isbase = false;
            QSpinBox::tabletEvent(event);
        } else if (qspinbox_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qspinbox_tabletevent_callback(this, cbval1);
        } else {
            QSpinBox::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qspinbox_actionevent_isbase) {
            qspinbox_actionevent_isbase = false;
            QSpinBox::actionEvent(event);
        } else if (qspinbox_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qspinbox_actionevent_callback(this, cbval1);
        } else {
            QSpinBox::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qspinbox_dragenterevent_isbase) {
            qspinbox_dragenterevent_isbase = false;
            QSpinBox::dragEnterEvent(event);
        } else if (qspinbox_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qspinbox_dragenterevent_callback(this, cbval1);
        } else {
            QSpinBox::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qspinbox_dragmoveevent_isbase) {
            qspinbox_dragmoveevent_isbase = false;
            QSpinBox::dragMoveEvent(event);
        } else if (qspinbox_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qspinbox_dragmoveevent_callback(this, cbval1);
        } else {
            QSpinBox::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qspinbox_dragleaveevent_isbase) {
            qspinbox_dragleaveevent_isbase = false;
            QSpinBox::dragLeaveEvent(event);
        } else if (qspinbox_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qspinbox_dragleaveevent_callback(this, cbval1);
        } else {
            QSpinBox::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qspinbox_dropevent_isbase) {
            qspinbox_dropevent_isbase = false;
            QSpinBox::dropEvent(event);
        } else if (qspinbox_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qspinbox_dropevent_callback(this, cbval1);
        } else {
            QSpinBox::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qspinbox_nativeevent_isbase) {
            qspinbox_nativeevent_isbase = false;
            return QSpinBox::nativeEvent(eventType, message, result);
        } else if (qspinbox_nativeevent_callback != nullptr) {
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

            bool callback_ret = qspinbox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSpinBox::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qspinbox_metric_isbase) {
            qspinbox_metric_isbase = false;
            return QSpinBox::metric(param1);
        } else if (qspinbox_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qspinbox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSpinBox::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qspinbox_initpainter_isbase) {
            qspinbox_initpainter_isbase = false;
            QSpinBox::initPainter(painter);
        } else if (qspinbox_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qspinbox_initpainter_callback(this, cbval1);
        } else {
            QSpinBox::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qspinbox_redirected_isbase) {
            qspinbox_redirected_isbase = false;
            return QSpinBox::redirected(offset);
        } else if (qspinbox_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qspinbox_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSpinBox::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qspinbox_sharedpainter_isbase) {
            qspinbox_sharedpainter_isbase = false;
            return QSpinBox::sharedPainter();
        } else if (qspinbox_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qspinbox_sharedpainter_callback();
            return callback_ret;
        } else {
            return QSpinBox::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qspinbox_inputmethodevent_isbase) {
            qspinbox_inputmethodevent_isbase = false;
            QSpinBox::inputMethodEvent(param1);
        } else if (qspinbox_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qspinbox_inputmethodevent_callback(this, cbval1);
        } else {
            QSpinBox::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qspinbox_focusnextprevchild_isbase) {
            qspinbox_focusnextprevchild_isbase = false;
            return QSpinBox::focusNextPrevChild(next);
        } else if (qspinbox_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qspinbox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSpinBox::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qspinbox_eventfilter_isbase) {
            qspinbox_eventfilter_isbase = false;
            return QSpinBox::eventFilter(watched, event);
        } else if (qspinbox_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qspinbox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSpinBox::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qspinbox_childevent_isbase) {
            qspinbox_childevent_isbase = false;
            QSpinBox::childEvent(event);
        } else if (qspinbox_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qspinbox_childevent_callback(this, cbval1);
        } else {
            QSpinBox::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qspinbox_customevent_isbase) {
            qspinbox_customevent_isbase = false;
            QSpinBox::customEvent(event);
        } else if (qspinbox_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qspinbox_customevent_callback(this, cbval1);
        } else {
            QSpinBox::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qspinbox_connectnotify_isbase) {
            qspinbox_connectnotify_isbase = false;
            QSpinBox::connectNotify(signal);
        } else if (qspinbox_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qspinbox_connectnotify_callback(this, cbval1);
        } else {
            QSpinBox::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qspinbox_disconnectnotify_isbase) {
            qspinbox_disconnectnotify_isbase = false;
            QSpinBox::disconnectNotify(signal);
        } else if (qspinbox_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qspinbox_disconnectnotify_callback(this, cbval1);
        } else {
            QSpinBox::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QLineEdit* lineEdit() const {
        if (qspinbox_lineedit_isbase) {
            qspinbox_lineedit_isbase = false;
            return QSpinBox::lineEdit();
        } else if (qspinbox_lineedit_callback != nullptr) {
            QLineEdit* callback_ret = qspinbox_lineedit_callback();
            return callback_ret;
        } else {
            return QSpinBox::lineEdit();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLineEdit(QLineEdit* edit) {
        if (qspinbox_setlineedit_isbase) {
            qspinbox_setlineedit_isbase = false;
            QSpinBox::setLineEdit(edit);
        } else if (qspinbox_setlineedit_callback != nullptr) {
            QLineEdit* cbval1 = edit;

            qspinbox_setlineedit_callback(this, cbval1);
        } else {
            QSpinBox::setLineEdit(edit);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qspinbox_updatemicrofocus_isbase) {
            qspinbox_updatemicrofocus_isbase = false;
            QSpinBox::updateMicroFocus();
        } else if (qspinbox_updatemicrofocus_callback != nullptr) {
            qspinbox_updatemicrofocus_callback();
        } else {
            QSpinBox::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qspinbox_create_isbase) {
            qspinbox_create_isbase = false;
            QSpinBox::create();
        } else if (qspinbox_create_callback != nullptr) {
            qspinbox_create_callback();
        } else {
            QSpinBox::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qspinbox_destroy_isbase) {
            qspinbox_destroy_isbase = false;
            QSpinBox::destroy();
        } else if (qspinbox_destroy_callback != nullptr) {
            qspinbox_destroy_callback();
        } else {
            QSpinBox::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qspinbox_focusnextchild_isbase) {
            qspinbox_focusnextchild_isbase = false;
            return QSpinBox::focusNextChild();
        } else if (qspinbox_focusnextchild_callback != nullptr) {
            bool callback_ret = qspinbox_focusnextchild_callback();
            return callback_ret;
        } else {
            return QSpinBox::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qspinbox_focuspreviouschild_isbase) {
            qspinbox_focuspreviouschild_isbase = false;
            return QSpinBox::focusPreviousChild();
        } else if (qspinbox_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qspinbox_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QSpinBox::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qspinbox_sender_isbase) {
            qspinbox_sender_isbase = false;
            return QSpinBox::sender();
        } else if (qspinbox_sender_callback != nullptr) {
            QObject* callback_ret = qspinbox_sender_callback();
            return callback_ret;
        } else {
            return QSpinBox::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qspinbox_sendersignalindex_isbase) {
            qspinbox_sendersignalindex_isbase = false;
            return QSpinBox::senderSignalIndex();
        } else if (qspinbox_sendersignalindex_callback != nullptr) {
            int callback_ret = qspinbox_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QSpinBox::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qspinbox_receivers_isbase) {
            qspinbox_receivers_isbase = false;
            return QSpinBox::receivers(signal);
        } else if (qspinbox_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qspinbox_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSpinBox::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qspinbox_issignalconnected_isbase) {
            qspinbox_issignalconnected_isbase = false;
            return QSpinBox::isSignalConnected(signal);
        } else if (qspinbox_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qspinbox_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSpinBox::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QSpinBox_Event(QSpinBox* self, QEvent* event);
    friend bool QSpinBox_QBaseEvent(QSpinBox* self, QEvent* event);
    friend int QSpinBox_Validate(const QSpinBox* self, libqt_string input, int* pos);
    friend int QSpinBox_QBaseValidate(const QSpinBox* self, libqt_string input, int* pos);
    friend int QSpinBox_ValueFromText(const QSpinBox* self, const libqt_string text);
    friend int QSpinBox_QBaseValueFromText(const QSpinBox* self, const libqt_string text);
    friend libqt_string QSpinBox_TextFromValue(const QSpinBox* self, int val);
    friend libqt_string QSpinBox_QBaseTextFromValue(const QSpinBox* self, int val);
    friend void QSpinBox_Fixup(const QSpinBox* self, libqt_string str);
    friend void QSpinBox_QBaseFixup(const QSpinBox* self, libqt_string str);
    friend void QSpinBox_ResizeEvent(QSpinBox* self, QResizeEvent* event);
    friend void QSpinBox_QBaseResizeEvent(QSpinBox* self, QResizeEvent* event);
    friend void QSpinBox_KeyPressEvent(QSpinBox* self, QKeyEvent* event);
    friend void QSpinBox_QBaseKeyPressEvent(QSpinBox* self, QKeyEvent* event);
    friend void QSpinBox_KeyReleaseEvent(QSpinBox* self, QKeyEvent* event);
    friend void QSpinBox_QBaseKeyReleaseEvent(QSpinBox* self, QKeyEvent* event);
    friend void QSpinBox_WheelEvent(QSpinBox* self, QWheelEvent* event);
    friend void QSpinBox_QBaseWheelEvent(QSpinBox* self, QWheelEvent* event);
    friend void QSpinBox_FocusInEvent(QSpinBox* self, QFocusEvent* event);
    friend void QSpinBox_QBaseFocusInEvent(QSpinBox* self, QFocusEvent* event);
    friend void QSpinBox_FocusOutEvent(QSpinBox* self, QFocusEvent* event);
    friend void QSpinBox_QBaseFocusOutEvent(QSpinBox* self, QFocusEvent* event);
    friend void QSpinBox_ContextMenuEvent(QSpinBox* self, QContextMenuEvent* event);
    friend void QSpinBox_QBaseContextMenuEvent(QSpinBox* self, QContextMenuEvent* event);
    friend void QSpinBox_ChangeEvent(QSpinBox* self, QEvent* event);
    friend void QSpinBox_QBaseChangeEvent(QSpinBox* self, QEvent* event);
    friend void QSpinBox_CloseEvent(QSpinBox* self, QCloseEvent* event);
    friend void QSpinBox_QBaseCloseEvent(QSpinBox* self, QCloseEvent* event);
    friend void QSpinBox_HideEvent(QSpinBox* self, QHideEvent* event);
    friend void QSpinBox_QBaseHideEvent(QSpinBox* self, QHideEvent* event);
    friend void QSpinBox_MousePressEvent(QSpinBox* self, QMouseEvent* event);
    friend void QSpinBox_QBaseMousePressEvent(QSpinBox* self, QMouseEvent* event);
    friend void QSpinBox_MouseReleaseEvent(QSpinBox* self, QMouseEvent* event);
    friend void QSpinBox_QBaseMouseReleaseEvent(QSpinBox* self, QMouseEvent* event);
    friend void QSpinBox_MouseMoveEvent(QSpinBox* self, QMouseEvent* event);
    friend void QSpinBox_QBaseMouseMoveEvent(QSpinBox* self, QMouseEvent* event);
    friend void QSpinBox_TimerEvent(QSpinBox* self, QTimerEvent* event);
    friend void QSpinBox_QBaseTimerEvent(QSpinBox* self, QTimerEvent* event);
    friend void QSpinBox_PaintEvent(QSpinBox* self, QPaintEvent* event);
    friend void QSpinBox_QBasePaintEvent(QSpinBox* self, QPaintEvent* event);
    friend void QSpinBox_ShowEvent(QSpinBox* self, QShowEvent* event);
    friend void QSpinBox_QBaseShowEvent(QSpinBox* self, QShowEvent* event);
    friend void QSpinBox_InitStyleOption(const QSpinBox* self, QStyleOptionSpinBox* option);
    friend void QSpinBox_QBaseInitStyleOption(const QSpinBox* self, QStyleOptionSpinBox* option);
    friend int QSpinBox_StepEnabled(const QSpinBox* self);
    friend int QSpinBox_QBaseStepEnabled(const QSpinBox* self);
    friend void QSpinBox_MouseDoubleClickEvent(QSpinBox* self, QMouseEvent* event);
    friend void QSpinBox_QBaseMouseDoubleClickEvent(QSpinBox* self, QMouseEvent* event);
    friend void QSpinBox_EnterEvent(QSpinBox* self, QEnterEvent* event);
    friend void QSpinBox_QBaseEnterEvent(QSpinBox* self, QEnterEvent* event);
    friend void QSpinBox_LeaveEvent(QSpinBox* self, QEvent* event);
    friend void QSpinBox_QBaseLeaveEvent(QSpinBox* self, QEvent* event);
    friend void QSpinBox_MoveEvent(QSpinBox* self, QMoveEvent* event);
    friend void QSpinBox_QBaseMoveEvent(QSpinBox* self, QMoveEvent* event);
    friend void QSpinBox_TabletEvent(QSpinBox* self, QTabletEvent* event);
    friend void QSpinBox_QBaseTabletEvent(QSpinBox* self, QTabletEvent* event);
    friend void QSpinBox_ActionEvent(QSpinBox* self, QActionEvent* event);
    friend void QSpinBox_QBaseActionEvent(QSpinBox* self, QActionEvent* event);
    friend void QSpinBox_DragEnterEvent(QSpinBox* self, QDragEnterEvent* event);
    friend void QSpinBox_QBaseDragEnterEvent(QSpinBox* self, QDragEnterEvent* event);
    friend void QSpinBox_DragMoveEvent(QSpinBox* self, QDragMoveEvent* event);
    friend void QSpinBox_QBaseDragMoveEvent(QSpinBox* self, QDragMoveEvent* event);
    friend void QSpinBox_DragLeaveEvent(QSpinBox* self, QDragLeaveEvent* event);
    friend void QSpinBox_QBaseDragLeaveEvent(QSpinBox* self, QDragLeaveEvent* event);
    friend void QSpinBox_DropEvent(QSpinBox* self, QDropEvent* event);
    friend void QSpinBox_QBaseDropEvent(QSpinBox* self, QDropEvent* event);
    friend bool QSpinBox_NativeEvent(QSpinBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QSpinBox_QBaseNativeEvent(QSpinBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QSpinBox_Metric(const QSpinBox* self, int param1);
    friend int QSpinBox_QBaseMetric(const QSpinBox* self, int param1);
    friend void QSpinBox_InitPainter(const QSpinBox* self, QPainter* painter);
    friend void QSpinBox_QBaseInitPainter(const QSpinBox* self, QPainter* painter);
    friend QPaintDevice* QSpinBox_Redirected(const QSpinBox* self, QPoint* offset);
    friend QPaintDevice* QSpinBox_QBaseRedirected(const QSpinBox* self, QPoint* offset);
    friend QPainter* QSpinBox_SharedPainter(const QSpinBox* self);
    friend QPainter* QSpinBox_QBaseSharedPainter(const QSpinBox* self);
    friend void QSpinBox_InputMethodEvent(QSpinBox* self, QInputMethodEvent* param1);
    friend void QSpinBox_QBaseInputMethodEvent(QSpinBox* self, QInputMethodEvent* param1);
    friend bool QSpinBox_FocusNextPrevChild(QSpinBox* self, bool next);
    friend bool QSpinBox_QBaseFocusNextPrevChild(QSpinBox* self, bool next);
    friend void QSpinBox_ChildEvent(QSpinBox* self, QChildEvent* event);
    friend void QSpinBox_QBaseChildEvent(QSpinBox* self, QChildEvent* event);
    friend void QSpinBox_CustomEvent(QSpinBox* self, QEvent* event);
    friend void QSpinBox_QBaseCustomEvent(QSpinBox* self, QEvent* event);
    friend void QSpinBox_ConnectNotify(QSpinBox* self, const QMetaMethod* signal);
    friend void QSpinBox_QBaseConnectNotify(QSpinBox* self, const QMetaMethod* signal);
    friend void QSpinBox_DisconnectNotify(QSpinBox* self, const QMetaMethod* signal);
    friend void QSpinBox_QBaseDisconnectNotify(QSpinBox* self, const QMetaMethod* signal);
    friend QLineEdit* QSpinBox_LineEdit(const QSpinBox* self);
    friend QLineEdit* QSpinBox_QBaseLineEdit(const QSpinBox* self);
    friend void QSpinBox_SetLineEdit(QSpinBox* self, QLineEdit* edit);
    friend void QSpinBox_QBaseSetLineEdit(QSpinBox* self, QLineEdit* edit);
    friend void QSpinBox_UpdateMicroFocus(QSpinBox* self);
    friend void QSpinBox_QBaseUpdateMicroFocus(QSpinBox* self);
    friend void QSpinBox_Create(QSpinBox* self);
    friend void QSpinBox_QBaseCreate(QSpinBox* self);
    friend void QSpinBox_Destroy(QSpinBox* self);
    friend void QSpinBox_QBaseDestroy(QSpinBox* self);
    friend bool QSpinBox_FocusNextChild(QSpinBox* self);
    friend bool QSpinBox_QBaseFocusNextChild(QSpinBox* self);
    friend bool QSpinBox_FocusPreviousChild(QSpinBox* self);
    friend bool QSpinBox_QBaseFocusPreviousChild(QSpinBox* self);
    friend QObject* QSpinBox_Sender(const QSpinBox* self);
    friend QObject* QSpinBox_QBaseSender(const QSpinBox* self);
    friend int QSpinBox_SenderSignalIndex(const QSpinBox* self);
    friend int QSpinBox_QBaseSenderSignalIndex(const QSpinBox* self);
    friend int QSpinBox_Receivers(const QSpinBox* self, const char* signal);
    friend int QSpinBox_QBaseReceivers(const QSpinBox* self, const char* signal);
    friend bool QSpinBox_IsSignalConnected(const QSpinBox* self, const QMetaMethod* signal);
    friend bool QSpinBox_QBaseIsSignalConnected(const QSpinBox* self, const QMetaMethod* signal);
};

// This class is a subclass of QDoubleSpinBox so that we can call protected methods
class VirtualQDoubleSpinBox final : public QDoubleSpinBox {

  public:
    // Virtual class boolean flag
    bool isVirtualQDoubleSpinBox = true;

    // Virtual class public types (including callbacks)
    using QDoubleSpinBox_Metacall_Callback = int (*)(QDoubleSpinBox*, int, int, void**);
    using QDoubleSpinBox_Validate_Callback = int (*)(const QDoubleSpinBox*, libqt_string, int*);
    using QDoubleSpinBox_ValueFromText_Callback = double (*)(const QDoubleSpinBox*, libqt_string);
    using QDoubleSpinBox_TextFromValue_Callback = libqt_string (*)(const QDoubleSpinBox*, double);
    using QDoubleSpinBox_Fixup_Callback = void (*)(const QDoubleSpinBox*, libqt_string);
    using QDoubleSpinBox_SizeHint_Callback = QSize* (*)();
    using QDoubleSpinBox_MinimumSizeHint_Callback = QSize* (*)();
    using QDoubleSpinBox_Event_Callback = bool (*)(QDoubleSpinBox*, QEvent*);
    using QDoubleSpinBox_InputMethodQuery_Callback = QVariant* (*)(const QDoubleSpinBox*, int);
    using QDoubleSpinBox_StepBy_Callback = void (*)(QDoubleSpinBox*, int);
    using QDoubleSpinBox_Clear_Callback = void (*)();
    using QDoubleSpinBox_ResizeEvent_Callback = void (*)(QDoubleSpinBox*, QResizeEvent*);
    using QDoubleSpinBox_KeyPressEvent_Callback = void (*)(QDoubleSpinBox*, QKeyEvent*);
    using QDoubleSpinBox_KeyReleaseEvent_Callback = void (*)(QDoubleSpinBox*, QKeyEvent*);
    using QDoubleSpinBox_WheelEvent_Callback = void (*)(QDoubleSpinBox*, QWheelEvent*);
    using QDoubleSpinBox_FocusInEvent_Callback = void (*)(QDoubleSpinBox*, QFocusEvent*);
    using QDoubleSpinBox_FocusOutEvent_Callback = void (*)(QDoubleSpinBox*, QFocusEvent*);
    using QDoubleSpinBox_ContextMenuEvent_Callback = void (*)(QDoubleSpinBox*, QContextMenuEvent*);
    using QDoubleSpinBox_ChangeEvent_Callback = void (*)(QDoubleSpinBox*, QEvent*);
    using QDoubleSpinBox_CloseEvent_Callback = void (*)(QDoubleSpinBox*, QCloseEvent*);
    using QDoubleSpinBox_HideEvent_Callback = void (*)(QDoubleSpinBox*, QHideEvent*);
    using QDoubleSpinBox_MousePressEvent_Callback = void (*)(QDoubleSpinBox*, QMouseEvent*);
    using QDoubleSpinBox_MouseReleaseEvent_Callback = void (*)(QDoubleSpinBox*, QMouseEvent*);
    using QDoubleSpinBox_MouseMoveEvent_Callback = void (*)(QDoubleSpinBox*, QMouseEvent*);
    using QDoubleSpinBox_TimerEvent_Callback = void (*)(QDoubleSpinBox*, QTimerEvent*);
    using QDoubleSpinBox_PaintEvent_Callback = void (*)(QDoubleSpinBox*, QPaintEvent*);
    using QDoubleSpinBox_ShowEvent_Callback = void (*)(QDoubleSpinBox*, QShowEvent*);
    using QDoubleSpinBox_InitStyleOption_Callback = void (*)(const QDoubleSpinBox*, QStyleOptionSpinBox*);
    using QDoubleSpinBox_StepEnabled_Callback = int (*)();
    using QDoubleSpinBox_DevType_Callback = int (*)();
    using QDoubleSpinBox_SetVisible_Callback = void (*)(QDoubleSpinBox*, bool);
    using QDoubleSpinBox_HeightForWidth_Callback = int (*)(const QDoubleSpinBox*, int);
    using QDoubleSpinBox_HasHeightForWidth_Callback = bool (*)();
    using QDoubleSpinBox_PaintEngine_Callback = QPaintEngine* (*)();
    using QDoubleSpinBox_MouseDoubleClickEvent_Callback = void (*)(QDoubleSpinBox*, QMouseEvent*);
    using QDoubleSpinBox_EnterEvent_Callback = void (*)(QDoubleSpinBox*, QEnterEvent*);
    using QDoubleSpinBox_LeaveEvent_Callback = void (*)(QDoubleSpinBox*, QEvent*);
    using QDoubleSpinBox_MoveEvent_Callback = void (*)(QDoubleSpinBox*, QMoveEvent*);
    using QDoubleSpinBox_TabletEvent_Callback = void (*)(QDoubleSpinBox*, QTabletEvent*);
    using QDoubleSpinBox_ActionEvent_Callback = void (*)(QDoubleSpinBox*, QActionEvent*);
    using QDoubleSpinBox_DragEnterEvent_Callback = void (*)(QDoubleSpinBox*, QDragEnterEvent*);
    using QDoubleSpinBox_DragMoveEvent_Callback = void (*)(QDoubleSpinBox*, QDragMoveEvent*);
    using QDoubleSpinBox_DragLeaveEvent_Callback = void (*)(QDoubleSpinBox*, QDragLeaveEvent*);
    using QDoubleSpinBox_DropEvent_Callback = void (*)(QDoubleSpinBox*, QDropEvent*);
    using QDoubleSpinBox_NativeEvent_Callback = bool (*)(QDoubleSpinBox*, libqt_string, void*, intptr_t*);
    using QDoubleSpinBox_Metric_Callback = int (*)(const QDoubleSpinBox*, int);
    using QDoubleSpinBox_InitPainter_Callback = void (*)(const QDoubleSpinBox*, QPainter*);
    using QDoubleSpinBox_Redirected_Callback = QPaintDevice* (*)(const QDoubleSpinBox*, QPoint*);
    using QDoubleSpinBox_SharedPainter_Callback = QPainter* (*)();
    using QDoubleSpinBox_InputMethodEvent_Callback = void (*)(QDoubleSpinBox*, QInputMethodEvent*);
    using QDoubleSpinBox_FocusNextPrevChild_Callback = bool (*)(QDoubleSpinBox*, bool);
    using QDoubleSpinBox_EventFilter_Callback = bool (*)(QDoubleSpinBox*, QObject*, QEvent*);
    using QDoubleSpinBox_ChildEvent_Callback = void (*)(QDoubleSpinBox*, QChildEvent*);
    using QDoubleSpinBox_CustomEvent_Callback = void (*)(QDoubleSpinBox*, QEvent*);
    using QDoubleSpinBox_ConnectNotify_Callback = void (*)(QDoubleSpinBox*, QMetaMethod*);
    using QDoubleSpinBox_DisconnectNotify_Callback = void (*)(QDoubleSpinBox*, QMetaMethod*);
    using QDoubleSpinBox_LineEdit_Callback = QLineEdit* (*)();
    using QDoubleSpinBox_SetLineEdit_Callback = void (*)(QDoubleSpinBox*, QLineEdit*);
    using QDoubleSpinBox_UpdateMicroFocus_Callback = void (*)();
    using QDoubleSpinBox_Create_Callback = void (*)();
    using QDoubleSpinBox_Destroy_Callback = void (*)();
    using QDoubleSpinBox_FocusNextChild_Callback = bool (*)();
    using QDoubleSpinBox_FocusPreviousChild_Callback = bool (*)();
    using QDoubleSpinBox_Sender_Callback = QObject* (*)();
    using QDoubleSpinBox_SenderSignalIndex_Callback = int (*)();
    using QDoubleSpinBox_Receivers_Callback = int (*)(const QDoubleSpinBox*, const char*);
    using QDoubleSpinBox_IsSignalConnected_Callback = bool (*)(const QDoubleSpinBox*, QMetaMethod*);

  protected:
    // Instance callback storage
    QDoubleSpinBox_Metacall_Callback qdoublespinbox_metacall_callback = nullptr;
    QDoubleSpinBox_Validate_Callback qdoublespinbox_validate_callback = nullptr;
    QDoubleSpinBox_ValueFromText_Callback qdoublespinbox_valuefromtext_callback = nullptr;
    QDoubleSpinBox_TextFromValue_Callback qdoublespinbox_textfromvalue_callback = nullptr;
    QDoubleSpinBox_Fixup_Callback qdoublespinbox_fixup_callback = nullptr;
    QDoubleSpinBox_SizeHint_Callback qdoublespinbox_sizehint_callback = nullptr;
    QDoubleSpinBox_MinimumSizeHint_Callback qdoublespinbox_minimumsizehint_callback = nullptr;
    QDoubleSpinBox_Event_Callback qdoublespinbox_event_callback = nullptr;
    QDoubleSpinBox_InputMethodQuery_Callback qdoublespinbox_inputmethodquery_callback = nullptr;
    QDoubleSpinBox_StepBy_Callback qdoublespinbox_stepby_callback = nullptr;
    QDoubleSpinBox_Clear_Callback qdoublespinbox_clear_callback = nullptr;
    QDoubleSpinBox_ResizeEvent_Callback qdoublespinbox_resizeevent_callback = nullptr;
    QDoubleSpinBox_KeyPressEvent_Callback qdoublespinbox_keypressevent_callback = nullptr;
    QDoubleSpinBox_KeyReleaseEvent_Callback qdoublespinbox_keyreleaseevent_callback = nullptr;
    QDoubleSpinBox_WheelEvent_Callback qdoublespinbox_wheelevent_callback = nullptr;
    QDoubleSpinBox_FocusInEvent_Callback qdoublespinbox_focusinevent_callback = nullptr;
    QDoubleSpinBox_FocusOutEvent_Callback qdoublespinbox_focusoutevent_callback = nullptr;
    QDoubleSpinBox_ContextMenuEvent_Callback qdoublespinbox_contextmenuevent_callback = nullptr;
    QDoubleSpinBox_ChangeEvent_Callback qdoublespinbox_changeevent_callback = nullptr;
    QDoubleSpinBox_CloseEvent_Callback qdoublespinbox_closeevent_callback = nullptr;
    QDoubleSpinBox_HideEvent_Callback qdoublespinbox_hideevent_callback = nullptr;
    QDoubleSpinBox_MousePressEvent_Callback qdoublespinbox_mousepressevent_callback = nullptr;
    QDoubleSpinBox_MouseReleaseEvent_Callback qdoublespinbox_mousereleaseevent_callback = nullptr;
    QDoubleSpinBox_MouseMoveEvent_Callback qdoublespinbox_mousemoveevent_callback = nullptr;
    QDoubleSpinBox_TimerEvent_Callback qdoublespinbox_timerevent_callback = nullptr;
    QDoubleSpinBox_PaintEvent_Callback qdoublespinbox_paintevent_callback = nullptr;
    QDoubleSpinBox_ShowEvent_Callback qdoublespinbox_showevent_callback = nullptr;
    QDoubleSpinBox_InitStyleOption_Callback qdoublespinbox_initstyleoption_callback = nullptr;
    QDoubleSpinBox_StepEnabled_Callback qdoublespinbox_stepenabled_callback = nullptr;
    QDoubleSpinBox_DevType_Callback qdoublespinbox_devtype_callback = nullptr;
    QDoubleSpinBox_SetVisible_Callback qdoublespinbox_setvisible_callback = nullptr;
    QDoubleSpinBox_HeightForWidth_Callback qdoublespinbox_heightforwidth_callback = nullptr;
    QDoubleSpinBox_HasHeightForWidth_Callback qdoublespinbox_hasheightforwidth_callback = nullptr;
    QDoubleSpinBox_PaintEngine_Callback qdoublespinbox_paintengine_callback = nullptr;
    QDoubleSpinBox_MouseDoubleClickEvent_Callback qdoublespinbox_mousedoubleclickevent_callback = nullptr;
    QDoubleSpinBox_EnterEvent_Callback qdoublespinbox_enterevent_callback = nullptr;
    QDoubleSpinBox_LeaveEvent_Callback qdoublespinbox_leaveevent_callback = nullptr;
    QDoubleSpinBox_MoveEvent_Callback qdoublespinbox_moveevent_callback = nullptr;
    QDoubleSpinBox_TabletEvent_Callback qdoublespinbox_tabletevent_callback = nullptr;
    QDoubleSpinBox_ActionEvent_Callback qdoublespinbox_actionevent_callback = nullptr;
    QDoubleSpinBox_DragEnterEvent_Callback qdoublespinbox_dragenterevent_callback = nullptr;
    QDoubleSpinBox_DragMoveEvent_Callback qdoublespinbox_dragmoveevent_callback = nullptr;
    QDoubleSpinBox_DragLeaveEvent_Callback qdoublespinbox_dragleaveevent_callback = nullptr;
    QDoubleSpinBox_DropEvent_Callback qdoublespinbox_dropevent_callback = nullptr;
    QDoubleSpinBox_NativeEvent_Callback qdoublespinbox_nativeevent_callback = nullptr;
    QDoubleSpinBox_Metric_Callback qdoublespinbox_metric_callback = nullptr;
    QDoubleSpinBox_InitPainter_Callback qdoublespinbox_initpainter_callback = nullptr;
    QDoubleSpinBox_Redirected_Callback qdoublespinbox_redirected_callback = nullptr;
    QDoubleSpinBox_SharedPainter_Callback qdoublespinbox_sharedpainter_callback = nullptr;
    QDoubleSpinBox_InputMethodEvent_Callback qdoublespinbox_inputmethodevent_callback = nullptr;
    QDoubleSpinBox_FocusNextPrevChild_Callback qdoublespinbox_focusnextprevchild_callback = nullptr;
    QDoubleSpinBox_EventFilter_Callback qdoublespinbox_eventfilter_callback = nullptr;
    QDoubleSpinBox_ChildEvent_Callback qdoublespinbox_childevent_callback = nullptr;
    QDoubleSpinBox_CustomEvent_Callback qdoublespinbox_customevent_callback = nullptr;
    QDoubleSpinBox_ConnectNotify_Callback qdoublespinbox_connectnotify_callback = nullptr;
    QDoubleSpinBox_DisconnectNotify_Callback qdoublespinbox_disconnectnotify_callback = nullptr;
    QDoubleSpinBox_LineEdit_Callback qdoublespinbox_lineedit_callback = nullptr;
    QDoubleSpinBox_SetLineEdit_Callback qdoublespinbox_setlineedit_callback = nullptr;
    QDoubleSpinBox_UpdateMicroFocus_Callback qdoublespinbox_updatemicrofocus_callback = nullptr;
    QDoubleSpinBox_Create_Callback qdoublespinbox_create_callback = nullptr;
    QDoubleSpinBox_Destroy_Callback qdoublespinbox_destroy_callback = nullptr;
    QDoubleSpinBox_FocusNextChild_Callback qdoublespinbox_focusnextchild_callback = nullptr;
    QDoubleSpinBox_FocusPreviousChild_Callback qdoublespinbox_focuspreviouschild_callback = nullptr;
    QDoubleSpinBox_Sender_Callback qdoublespinbox_sender_callback = nullptr;
    QDoubleSpinBox_SenderSignalIndex_Callback qdoublespinbox_sendersignalindex_callback = nullptr;
    QDoubleSpinBox_Receivers_Callback qdoublespinbox_receivers_callback = nullptr;
    QDoubleSpinBox_IsSignalConnected_Callback qdoublespinbox_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdoublespinbox_metacall_isbase = false;
    mutable bool qdoublespinbox_validate_isbase = false;
    mutable bool qdoublespinbox_valuefromtext_isbase = false;
    mutable bool qdoublespinbox_textfromvalue_isbase = false;
    mutable bool qdoublespinbox_fixup_isbase = false;
    mutable bool qdoublespinbox_sizehint_isbase = false;
    mutable bool qdoublespinbox_minimumsizehint_isbase = false;
    mutable bool qdoublespinbox_event_isbase = false;
    mutable bool qdoublespinbox_inputmethodquery_isbase = false;
    mutable bool qdoublespinbox_stepby_isbase = false;
    mutable bool qdoublespinbox_clear_isbase = false;
    mutable bool qdoublespinbox_resizeevent_isbase = false;
    mutable bool qdoublespinbox_keypressevent_isbase = false;
    mutable bool qdoublespinbox_keyreleaseevent_isbase = false;
    mutable bool qdoublespinbox_wheelevent_isbase = false;
    mutable bool qdoublespinbox_focusinevent_isbase = false;
    mutable bool qdoublespinbox_focusoutevent_isbase = false;
    mutable bool qdoublespinbox_contextmenuevent_isbase = false;
    mutable bool qdoublespinbox_changeevent_isbase = false;
    mutable bool qdoublespinbox_closeevent_isbase = false;
    mutable bool qdoublespinbox_hideevent_isbase = false;
    mutable bool qdoublespinbox_mousepressevent_isbase = false;
    mutable bool qdoublespinbox_mousereleaseevent_isbase = false;
    mutable bool qdoublespinbox_mousemoveevent_isbase = false;
    mutable bool qdoublespinbox_timerevent_isbase = false;
    mutable bool qdoublespinbox_paintevent_isbase = false;
    mutable bool qdoublespinbox_showevent_isbase = false;
    mutable bool qdoublespinbox_initstyleoption_isbase = false;
    mutable bool qdoublespinbox_stepenabled_isbase = false;
    mutable bool qdoublespinbox_devtype_isbase = false;
    mutable bool qdoublespinbox_setvisible_isbase = false;
    mutable bool qdoublespinbox_heightforwidth_isbase = false;
    mutable bool qdoublespinbox_hasheightforwidth_isbase = false;
    mutable bool qdoublespinbox_paintengine_isbase = false;
    mutable bool qdoublespinbox_mousedoubleclickevent_isbase = false;
    mutable bool qdoublespinbox_enterevent_isbase = false;
    mutable bool qdoublespinbox_leaveevent_isbase = false;
    mutable bool qdoublespinbox_moveevent_isbase = false;
    mutable bool qdoublespinbox_tabletevent_isbase = false;
    mutable bool qdoublespinbox_actionevent_isbase = false;
    mutable bool qdoublespinbox_dragenterevent_isbase = false;
    mutable bool qdoublespinbox_dragmoveevent_isbase = false;
    mutable bool qdoublespinbox_dragleaveevent_isbase = false;
    mutable bool qdoublespinbox_dropevent_isbase = false;
    mutable bool qdoublespinbox_nativeevent_isbase = false;
    mutable bool qdoublespinbox_metric_isbase = false;
    mutable bool qdoublespinbox_initpainter_isbase = false;
    mutable bool qdoublespinbox_redirected_isbase = false;
    mutable bool qdoublespinbox_sharedpainter_isbase = false;
    mutable bool qdoublespinbox_inputmethodevent_isbase = false;
    mutable bool qdoublespinbox_focusnextprevchild_isbase = false;
    mutable bool qdoublespinbox_eventfilter_isbase = false;
    mutable bool qdoublespinbox_childevent_isbase = false;
    mutable bool qdoublespinbox_customevent_isbase = false;
    mutable bool qdoublespinbox_connectnotify_isbase = false;
    mutable bool qdoublespinbox_disconnectnotify_isbase = false;
    mutable bool qdoublespinbox_lineedit_isbase = false;
    mutable bool qdoublespinbox_setlineedit_isbase = false;
    mutable bool qdoublespinbox_updatemicrofocus_isbase = false;
    mutable bool qdoublespinbox_create_isbase = false;
    mutable bool qdoublespinbox_destroy_isbase = false;
    mutable bool qdoublespinbox_focusnextchild_isbase = false;
    mutable bool qdoublespinbox_focuspreviouschild_isbase = false;
    mutable bool qdoublespinbox_sender_isbase = false;
    mutable bool qdoublespinbox_sendersignalindex_isbase = false;
    mutable bool qdoublespinbox_receivers_isbase = false;
    mutable bool qdoublespinbox_issignalconnected_isbase = false;

  public:
    VirtualQDoubleSpinBox(QWidget* parent) : QDoubleSpinBox(parent){};
    VirtualQDoubleSpinBox() : QDoubleSpinBox(){};

    ~VirtualQDoubleSpinBox() {
        qdoublespinbox_metacall_callback = nullptr;
        qdoublespinbox_validate_callback = nullptr;
        qdoublespinbox_valuefromtext_callback = nullptr;
        qdoublespinbox_textfromvalue_callback = nullptr;
        qdoublespinbox_fixup_callback = nullptr;
        qdoublespinbox_sizehint_callback = nullptr;
        qdoublespinbox_minimumsizehint_callback = nullptr;
        qdoublespinbox_event_callback = nullptr;
        qdoublespinbox_inputmethodquery_callback = nullptr;
        qdoublespinbox_stepby_callback = nullptr;
        qdoublespinbox_clear_callback = nullptr;
        qdoublespinbox_resizeevent_callback = nullptr;
        qdoublespinbox_keypressevent_callback = nullptr;
        qdoublespinbox_keyreleaseevent_callback = nullptr;
        qdoublespinbox_wheelevent_callback = nullptr;
        qdoublespinbox_focusinevent_callback = nullptr;
        qdoublespinbox_focusoutevent_callback = nullptr;
        qdoublespinbox_contextmenuevent_callback = nullptr;
        qdoublespinbox_changeevent_callback = nullptr;
        qdoublespinbox_closeevent_callback = nullptr;
        qdoublespinbox_hideevent_callback = nullptr;
        qdoublespinbox_mousepressevent_callback = nullptr;
        qdoublespinbox_mousereleaseevent_callback = nullptr;
        qdoublespinbox_mousemoveevent_callback = nullptr;
        qdoublespinbox_timerevent_callback = nullptr;
        qdoublespinbox_paintevent_callback = nullptr;
        qdoublespinbox_showevent_callback = nullptr;
        qdoublespinbox_initstyleoption_callback = nullptr;
        qdoublespinbox_stepenabled_callback = nullptr;
        qdoublespinbox_devtype_callback = nullptr;
        qdoublespinbox_setvisible_callback = nullptr;
        qdoublespinbox_heightforwidth_callback = nullptr;
        qdoublespinbox_hasheightforwidth_callback = nullptr;
        qdoublespinbox_paintengine_callback = nullptr;
        qdoublespinbox_mousedoubleclickevent_callback = nullptr;
        qdoublespinbox_enterevent_callback = nullptr;
        qdoublespinbox_leaveevent_callback = nullptr;
        qdoublespinbox_moveevent_callback = nullptr;
        qdoublespinbox_tabletevent_callback = nullptr;
        qdoublespinbox_actionevent_callback = nullptr;
        qdoublespinbox_dragenterevent_callback = nullptr;
        qdoublespinbox_dragmoveevent_callback = nullptr;
        qdoublespinbox_dragleaveevent_callback = nullptr;
        qdoublespinbox_dropevent_callback = nullptr;
        qdoublespinbox_nativeevent_callback = nullptr;
        qdoublespinbox_metric_callback = nullptr;
        qdoublespinbox_initpainter_callback = nullptr;
        qdoublespinbox_redirected_callback = nullptr;
        qdoublespinbox_sharedpainter_callback = nullptr;
        qdoublespinbox_inputmethodevent_callback = nullptr;
        qdoublespinbox_focusnextprevchild_callback = nullptr;
        qdoublespinbox_eventfilter_callback = nullptr;
        qdoublespinbox_childevent_callback = nullptr;
        qdoublespinbox_customevent_callback = nullptr;
        qdoublespinbox_connectnotify_callback = nullptr;
        qdoublespinbox_disconnectnotify_callback = nullptr;
        qdoublespinbox_lineedit_callback = nullptr;
        qdoublespinbox_setlineedit_callback = nullptr;
        qdoublespinbox_updatemicrofocus_callback = nullptr;
        qdoublespinbox_create_callback = nullptr;
        qdoublespinbox_destroy_callback = nullptr;
        qdoublespinbox_focusnextchild_callback = nullptr;
        qdoublespinbox_focuspreviouschild_callback = nullptr;
        qdoublespinbox_sender_callback = nullptr;
        qdoublespinbox_sendersignalindex_callback = nullptr;
        qdoublespinbox_receivers_callback = nullptr;
        qdoublespinbox_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQDoubleSpinBox_Metacall_Callback(QDoubleSpinBox_Metacall_Callback cb) { qdoublespinbox_metacall_callback = cb; }
    inline void setQDoubleSpinBox_Validate_Callback(QDoubleSpinBox_Validate_Callback cb) { qdoublespinbox_validate_callback = cb; }
    inline void setQDoubleSpinBox_ValueFromText_Callback(QDoubleSpinBox_ValueFromText_Callback cb) { qdoublespinbox_valuefromtext_callback = cb; }
    inline void setQDoubleSpinBox_TextFromValue_Callback(QDoubleSpinBox_TextFromValue_Callback cb) { qdoublespinbox_textfromvalue_callback = cb; }
    inline void setQDoubleSpinBox_Fixup_Callback(QDoubleSpinBox_Fixup_Callback cb) { qdoublespinbox_fixup_callback = cb; }
    inline void setQDoubleSpinBox_SizeHint_Callback(QDoubleSpinBox_SizeHint_Callback cb) { qdoublespinbox_sizehint_callback = cb; }
    inline void setQDoubleSpinBox_MinimumSizeHint_Callback(QDoubleSpinBox_MinimumSizeHint_Callback cb) { qdoublespinbox_minimumsizehint_callback = cb; }
    inline void setQDoubleSpinBox_Event_Callback(QDoubleSpinBox_Event_Callback cb) { qdoublespinbox_event_callback = cb; }
    inline void setQDoubleSpinBox_InputMethodQuery_Callback(QDoubleSpinBox_InputMethodQuery_Callback cb) { qdoublespinbox_inputmethodquery_callback = cb; }
    inline void setQDoubleSpinBox_StepBy_Callback(QDoubleSpinBox_StepBy_Callback cb) { qdoublespinbox_stepby_callback = cb; }
    inline void setQDoubleSpinBox_Clear_Callback(QDoubleSpinBox_Clear_Callback cb) { qdoublespinbox_clear_callback = cb; }
    inline void setQDoubleSpinBox_ResizeEvent_Callback(QDoubleSpinBox_ResizeEvent_Callback cb) { qdoublespinbox_resizeevent_callback = cb; }
    inline void setQDoubleSpinBox_KeyPressEvent_Callback(QDoubleSpinBox_KeyPressEvent_Callback cb) { qdoublespinbox_keypressevent_callback = cb; }
    inline void setQDoubleSpinBox_KeyReleaseEvent_Callback(QDoubleSpinBox_KeyReleaseEvent_Callback cb) { qdoublespinbox_keyreleaseevent_callback = cb; }
    inline void setQDoubleSpinBox_WheelEvent_Callback(QDoubleSpinBox_WheelEvent_Callback cb) { qdoublespinbox_wheelevent_callback = cb; }
    inline void setQDoubleSpinBox_FocusInEvent_Callback(QDoubleSpinBox_FocusInEvent_Callback cb) { qdoublespinbox_focusinevent_callback = cb; }
    inline void setQDoubleSpinBox_FocusOutEvent_Callback(QDoubleSpinBox_FocusOutEvent_Callback cb) { qdoublespinbox_focusoutevent_callback = cb; }
    inline void setQDoubleSpinBox_ContextMenuEvent_Callback(QDoubleSpinBox_ContextMenuEvent_Callback cb) { qdoublespinbox_contextmenuevent_callback = cb; }
    inline void setQDoubleSpinBox_ChangeEvent_Callback(QDoubleSpinBox_ChangeEvent_Callback cb) { qdoublespinbox_changeevent_callback = cb; }
    inline void setQDoubleSpinBox_CloseEvent_Callback(QDoubleSpinBox_CloseEvent_Callback cb) { qdoublespinbox_closeevent_callback = cb; }
    inline void setQDoubleSpinBox_HideEvent_Callback(QDoubleSpinBox_HideEvent_Callback cb) { qdoublespinbox_hideevent_callback = cb; }
    inline void setQDoubleSpinBox_MousePressEvent_Callback(QDoubleSpinBox_MousePressEvent_Callback cb) { qdoublespinbox_mousepressevent_callback = cb; }
    inline void setQDoubleSpinBox_MouseReleaseEvent_Callback(QDoubleSpinBox_MouseReleaseEvent_Callback cb) { qdoublespinbox_mousereleaseevent_callback = cb; }
    inline void setQDoubleSpinBox_MouseMoveEvent_Callback(QDoubleSpinBox_MouseMoveEvent_Callback cb) { qdoublespinbox_mousemoveevent_callback = cb; }
    inline void setQDoubleSpinBox_TimerEvent_Callback(QDoubleSpinBox_TimerEvent_Callback cb) { qdoublespinbox_timerevent_callback = cb; }
    inline void setQDoubleSpinBox_PaintEvent_Callback(QDoubleSpinBox_PaintEvent_Callback cb) { qdoublespinbox_paintevent_callback = cb; }
    inline void setQDoubleSpinBox_ShowEvent_Callback(QDoubleSpinBox_ShowEvent_Callback cb) { qdoublespinbox_showevent_callback = cb; }
    inline void setQDoubleSpinBox_InitStyleOption_Callback(QDoubleSpinBox_InitStyleOption_Callback cb) { qdoublespinbox_initstyleoption_callback = cb; }
    inline void setQDoubleSpinBox_StepEnabled_Callback(QDoubleSpinBox_StepEnabled_Callback cb) { qdoublespinbox_stepenabled_callback = cb; }
    inline void setQDoubleSpinBox_DevType_Callback(QDoubleSpinBox_DevType_Callback cb) { qdoublespinbox_devtype_callback = cb; }
    inline void setQDoubleSpinBox_SetVisible_Callback(QDoubleSpinBox_SetVisible_Callback cb) { qdoublespinbox_setvisible_callback = cb; }
    inline void setQDoubleSpinBox_HeightForWidth_Callback(QDoubleSpinBox_HeightForWidth_Callback cb) { qdoublespinbox_heightforwidth_callback = cb; }
    inline void setQDoubleSpinBox_HasHeightForWidth_Callback(QDoubleSpinBox_HasHeightForWidth_Callback cb) { qdoublespinbox_hasheightforwidth_callback = cb; }
    inline void setQDoubleSpinBox_PaintEngine_Callback(QDoubleSpinBox_PaintEngine_Callback cb) { qdoublespinbox_paintengine_callback = cb; }
    inline void setQDoubleSpinBox_MouseDoubleClickEvent_Callback(QDoubleSpinBox_MouseDoubleClickEvent_Callback cb) { qdoublespinbox_mousedoubleclickevent_callback = cb; }
    inline void setQDoubleSpinBox_EnterEvent_Callback(QDoubleSpinBox_EnterEvent_Callback cb) { qdoublespinbox_enterevent_callback = cb; }
    inline void setQDoubleSpinBox_LeaveEvent_Callback(QDoubleSpinBox_LeaveEvent_Callback cb) { qdoublespinbox_leaveevent_callback = cb; }
    inline void setQDoubleSpinBox_MoveEvent_Callback(QDoubleSpinBox_MoveEvent_Callback cb) { qdoublespinbox_moveevent_callback = cb; }
    inline void setQDoubleSpinBox_TabletEvent_Callback(QDoubleSpinBox_TabletEvent_Callback cb) { qdoublespinbox_tabletevent_callback = cb; }
    inline void setQDoubleSpinBox_ActionEvent_Callback(QDoubleSpinBox_ActionEvent_Callback cb) { qdoublespinbox_actionevent_callback = cb; }
    inline void setQDoubleSpinBox_DragEnterEvent_Callback(QDoubleSpinBox_DragEnterEvent_Callback cb) { qdoublespinbox_dragenterevent_callback = cb; }
    inline void setQDoubleSpinBox_DragMoveEvent_Callback(QDoubleSpinBox_DragMoveEvent_Callback cb) { qdoublespinbox_dragmoveevent_callback = cb; }
    inline void setQDoubleSpinBox_DragLeaveEvent_Callback(QDoubleSpinBox_DragLeaveEvent_Callback cb) { qdoublespinbox_dragleaveevent_callback = cb; }
    inline void setQDoubleSpinBox_DropEvent_Callback(QDoubleSpinBox_DropEvent_Callback cb) { qdoublespinbox_dropevent_callback = cb; }
    inline void setQDoubleSpinBox_NativeEvent_Callback(QDoubleSpinBox_NativeEvent_Callback cb) { qdoublespinbox_nativeevent_callback = cb; }
    inline void setQDoubleSpinBox_Metric_Callback(QDoubleSpinBox_Metric_Callback cb) { qdoublespinbox_metric_callback = cb; }
    inline void setQDoubleSpinBox_InitPainter_Callback(QDoubleSpinBox_InitPainter_Callback cb) { qdoublespinbox_initpainter_callback = cb; }
    inline void setQDoubleSpinBox_Redirected_Callback(QDoubleSpinBox_Redirected_Callback cb) { qdoublespinbox_redirected_callback = cb; }
    inline void setQDoubleSpinBox_SharedPainter_Callback(QDoubleSpinBox_SharedPainter_Callback cb) { qdoublespinbox_sharedpainter_callback = cb; }
    inline void setQDoubleSpinBox_InputMethodEvent_Callback(QDoubleSpinBox_InputMethodEvent_Callback cb) { qdoublespinbox_inputmethodevent_callback = cb; }
    inline void setQDoubleSpinBox_FocusNextPrevChild_Callback(QDoubleSpinBox_FocusNextPrevChild_Callback cb) { qdoublespinbox_focusnextprevchild_callback = cb; }
    inline void setQDoubleSpinBox_EventFilter_Callback(QDoubleSpinBox_EventFilter_Callback cb) { qdoublespinbox_eventfilter_callback = cb; }
    inline void setQDoubleSpinBox_ChildEvent_Callback(QDoubleSpinBox_ChildEvent_Callback cb) { qdoublespinbox_childevent_callback = cb; }
    inline void setQDoubleSpinBox_CustomEvent_Callback(QDoubleSpinBox_CustomEvent_Callback cb) { qdoublespinbox_customevent_callback = cb; }
    inline void setQDoubleSpinBox_ConnectNotify_Callback(QDoubleSpinBox_ConnectNotify_Callback cb) { qdoublespinbox_connectnotify_callback = cb; }
    inline void setQDoubleSpinBox_DisconnectNotify_Callback(QDoubleSpinBox_DisconnectNotify_Callback cb) { qdoublespinbox_disconnectnotify_callback = cb; }
    inline void setQDoubleSpinBox_LineEdit_Callback(QDoubleSpinBox_LineEdit_Callback cb) { qdoublespinbox_lineedit_callback = cb; }
    inline void setQDoubleSpinBox_SetLineEdit_Callback(QDoubleSpinBox_SetLineEdit_Callback cb) { qdoublespinbox_setlineedit_callback = cb; }
    inline void setQDoubleSpinBox_UpdateMicroFocus_Callback(QDoubleSpinBox_UpdateMicroFocus_Callback cb) { qdoublespinbox_updatemicrofocus_callback = cb; }
    inline void setQDoubleSpinBox_Create_Callback(QDoubleSpinBox_Create_Callback cb) { qdoublespinbox_create_callback = cb; }
    inline void setQDoubleSpinBox_Destroy_Callback(QDoubleSpinBox_Destroy_Callback cb) { qdoublespinbox_destroy_callback = cb; }
    inline void setQDoubleSpinBox_FocusNextChild_Callback(QDoubleSpinBox_FocusNextChild_Callback cb) { qdoublespinbox_focusnextchild_callback = cb; }
    inline void setQDoubleSpinBox_FocusPreviousChild_Callback(QDoubleSpinBox_FocusPreviousChild_Callback cb) { qdoublespinbox_focuspreviouschild_callback = cb; }
    inline void setQDoubleSpinBox_Sender_Callback(QDoubleSpinBox_Sender_Callback cb) { qdoublespinbox_sender_callback = cb; }
    inline void setQDoubleSpinBox_SenderSignalIndex_Callback(QDoubleSpinBox_SenderSignalIndex_Callback cb) { qdoublespinbox_sendersignalindex_callback = cb; }
    inline void setQDoubleSpinBox_Receivers_Callback(QDoubleSpinBox_Receivers_Callback cb) { qdoublespinbox_receivers_callback = cb; }
    inline void setQDoubleSpinBox_IsSignalConnected_Callback(QDoubleSpinBox_IsSignalConnected_Callback cb) { qdoublespinbox_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQDoubleSpinBox_Metacall_IsBase(bool value) const { qdoublespinbox_metacall_isbase = value; }
    inline void setQDoubleSpinBox_Validate_IsBase(bool value) const { qdoublespinbox_validate_isbase = value; }
    inline void setQDoubleSpinBox_ValueFromText_IsBase(bool value) const { qdoublespinbox_valuefromtext_isbase = value; }
    inline void setQDoubleSpinBox_TextFromValue_IsBase(bool value) const { qdoublespinbox_textfromvalue_isbase = value; }
    inline void setQDoubleSpinBox_Fixup_IsBase(bool value) const { qdoublespinbox_fixup_isbase = value; }
    inline void setQDoubleSpinBox_SizeHint_IsBase(bool value) const { qdoublespinbox_sizehint_isbase = value; }
    inline void setQDoubleSpinBox_MinimumSizeHint_IsBase(bool value) const { qdoublespinbox_minimumsizehint_isbase = value; }
    inline void setQDoubleSpinBox_Event_IsBase(bool value) const { qdoublespinbox_event_isbase = value; }
    inline void setQDoubleSpinBox_InputMethodQuery_IsBase(bool value) const { qdoublespinbox_inputmethodquery_isbase = value; }
    inline void setQDoubleSpinBox_StepBy_IsBase(bool value) const { qdoublespinbox_stepby_isbase = value; }
    inline void setQDoubleSpinBox_Clear_IsBase(bool value) const { qdoublespinbox_clear_isbase = value; }
    inline void setQDoubleSpinBox_ResizeEvent_IsBase(bool value) const { qdoublespinbox_resizeevent_isbase = value; }
    inline void setQDoubleSpinBox_KeyPressEvent_IsBase(bool value) const { qdoublespinbox_keypressevent_isbase = value; }
    inline void setQDoubleSpinBox_KeyReleaseEvent_IsBase(bool value) const { qdoublespinbox_keyreleaseevent_isbase = value; }
    inline void setQDoubleSpinBox_WheelEvent_IsBase(bool value) const { qdoublespinbox_wheelevent_isbase = value; }
    inline void setQDoubleSpinBox_FocusInEvent_IsBase(bool value) const { qdoublespinbox_focusinevent_isbase = value; }
    inline void setQDoubleSpinBox_FocusOutEvent_IsBase(bool value) const { qdoublespinbox_focusoutevent_isbase = value; }
    inline void setQDoubleSpinBox_ContextMenuEvent_IsBase(bool value) const { qdoublespinbox_contextmenuevent_isbase = value; }
    inline void setQDoubleSpinBox_ChangeEvent_IsBase(bool value) const { qdoublespinbox_changeevent_isbase = value; }
    inline void setQDoubleSpinBox_CloseEvent_IsBase(bool value) const { qdoublespinbox_closeevent_isbase = value; }
    inline void setQDoubleSpinBox_HideEvent_IsBase(bool value) const { qdoublespinbox_hideevent_isbase = value; }
    inline void setQDoubleSpinBox_MousePressEvent_IsBase(bool value) const { qdoublespinbox_mousepressevent_isbase = value; }
    inline void setQDoubleSpinBox_MouseReleaseEvent_IsBase(bool value) const { qdoublespinbox_mousereleaseevent_isbase = value; }
    inline void setQDoubleSpinBox_MouseMoveEvent_IsBase(bool value) const { qdoublespinbox_mousemoveevent_isbase = value; }
    inline void setQDoubleSpinBox_TimerEvent_IsBase(bool value) const { qdoublespinbox_timerevent_isbase = value; }
    inline void setQDoubleSpinBox_PaintEvent_IsBase(bool value) const { qdoublespinbox_paintevent_isbase = value; }
    inline void setQDoubleSpinBox_ShowEvent_IsBase(bool value) const { qdoublespinbox_showevent_isbase = value; }
    inline void setQDoubleSpinBox_InitStyleOption_IsBase(bool value) const { qdoublespinbox_initstyleoption_isbase = value; }
    inline void setQDoubleSpinBox_StepEnabled_IsBase(bool value) const { qdoublespinbox_stepenabled_isbase = value; }
    inline void setQDoubleSpinBox_DevType_IsBase(bool value) const { qdoublespinbox_devtype_isbase = value; }
    inline void setQDoubleSpinBox_SetVisible_IsBase(bool value) const { qdoublespinbox_setvisible_isbase = value; }
    inline void setQDoubleSpinBox_HeightForWidth_IsBase(bool value) const { qdoublespinbox_heightforwidth_isbase = value; }
    inline void setQDoubleSpinBox_HasHeightForWidth_IsBase(bool value) const { qdoublespinbox_hasheightforwidth_isbase = value; }
    inline void setQDoubleSpinBox_PaintEngine_IsBase(bool value) const { qdoublespinbox_paintengine_isbase = value; }
    inline void setQDoubleSpinBox_MouseDoubleClickEvent_IsBase(bool value) const { qdoublespinbox_mousedoubleclickevent_isbase = value; }
    inline void setQDoubleSpinBox_EnterEvent_IsBase(bool value) const { qdoublespinbox_enterevent_isbase = value; }
    inline void setQDoubleSpinBox_LeaveEvent_IsBase(bool value) const { qdoublespinbox_leaveevent_isbase = value; }
    inline void setQDoubleSpinBox_MoveEvent_IsBase(bool value) const { qdoublespinbox_moveevent_isbase = value; }
    inline void setQDoubleSpinBox_TabletEvent_IsBase(bool value) const { qdoublespinbox_tabletevent_isbase = value; }
    inline void setQDoubleSpinBox_ActionEvent_IsBase(bool value) const { qdoublespinbox_actionevent_isbase = value; }
    inline void setQDoubleSpinBox_DragEnterEvent_IsBase(bool value) const { qdoublespinbox_dragenterevent_isbase = value; }
    inline void setQDoubleSpinBox_DragMoveEvent_IsBase(bool value) const { qdoublespinbox_dragmoveevent_isbase = value; }
    inline void setQDoubleSpinBox_DragLeaveEvent_IsBase(bool value) const { qdoublespinbox_dragleaveevent_isbase = value; }
    inline void setQDoubleSpinBox_DropEvent_IsBase(bool value) const { qdoublespinbox_dropevent_isbase = value; }
    inline void setQDoubleSpinBox_NativeEvent_IsBase(bool value) const { qdoublespinbox_nativeevent_isbase = value; }
    inline void setQDoubleSpinBox_Metric_IsBase(bool value) const { qdoublespinbox_metric_isbase = value; }
    inline void setQDoubleSpinBox_InitPainter_IsBase(bool value) const { qdoublespinbox_initpainter_isbase = value; }
    inline void setQDoubleSpinBox_Redirected_IsBase(bool value) const { qdoublespinbox_redirected_isbase = value; }
    inline void setQDoubleSpinBox_SharedPainter_IsBase(bool value) const { qdoublespinbox_sharedpainter_isbase = value; }
    inline void setQDoubleSpinBox_InputMethodEvent_IsBase(bool value) const { qdoublespinbox_inputmethodevent_isbase = value; }
    inline void setQDoubleSpinBox_FocusNextPrevChild_IsBase(bool value) const { qdoublespinbox_focusnextprevchild_isbase = value; }
    inline void setQDoubleSpinBox_EventFilter_IsBase(bool value) const { qdoublespinbox_eventfilter_isbase = value; }
    inline void setQDoubleSpinBox_ChildEvent_IsBase(bool value) const { qdoublespinbox_childevent_isbase = value; }
    inline void setQDoubleSpinBox_CustomEvent_IsBase(bool value) const { qdoublespinbox_customevent_isbase = value; }
    inline void setQDoubleSpinBox_ConnectNotify_IsBase(bool value) const { qdoublespinbox_connectnotify_isbase = value; }
    inline void setQDoubleSpinBox_DisconnectNotify_IsBase(bool value) const { qdoublespinbox_disconnectnotify_isbase = value; }
    inline void setQDoubleSpinBox_LineEdit_IsBase(bool value) const { qdoublespinbox_lineedit_isbase = value; }
    inline void setQDoubleSpinBox_SetLineEdit_IsBase(bool value) const { qdoublespinbox_setlineedit_isbase = value; }
    inline void setQDoubleSpinBox_UpdateMicroFocus_IsBase(bool value) const { qdoublespinbox_updatemicrofocus_isbase = value; }
    inline void setQDoubleSpinBox_Create_IsBase(bool value) const { qdoublespinbox_create_isbase = value; }
    inline void setQDoubleSpinBox_Destroy_IsBase(bool value) const { qdoublespinbox_destroy_isbase = value; }
    inline void setQDoubleSpinBox_FocusNextChild_IsBase(bool value) const { qdoublespinbox_focusnextchild_isbase = value; }
    inline void setQDoubleSpinBox_FocusPreviousChild_IsBase(bool value) const { qdoublespinbox_focuspreviouschild_isbase = value; }
    inline void setQDoubleSpinBox_Sender_IsBase(bool value) const { qdoublespinbox_sender_isbase = value; }
    inline void setQDoubleSpinBox_SenderSignalIndex_IsBase(bool value) const { qdoublespinbox_sendersignalindex_isbase = value; }
    inline void setQDoubleSpinBox_Receivers_IsBase(bool value) const { qdoublespinbox_receivers_isbase = value; }
    inline void setQDoubleSpinBox_IsSignalConnected_IsBase(bool value) const { qdoublespinbox_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdoublespinbox_metacall_isbase) {
            qdoublespinbox_metacall_isbase = false;
            return QDoubleSpinBox::qt_metacall(param1, param2, param3);
        } else if (qdoublespinbox_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qdoublespinbox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QDoubleSpinBox::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& input, int& pos) const override {
        if (qdoublespinbox_validate_isbase) {
            qdoublespinbox_validate_isbase = false;
            return QDoubleSpinBox::validate(input, pos);
        } else if (qdoublespinbox_validate_callback != nullptr) {
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

            int callback_ret = qdoublespinbox_validate_callback(this, cbval1, cbval2);
            return static_cast<QValidator::State>(callback_ret);
        } else {
            return QDoubleSpinBox::validate(input, pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual double valueFromText(const QString& text) const override {
        if (qdoublespinbox_valuefromtext_isbase) {
            qdoublespinbox_valuefromtext_isbase = false;
            return QDoubleSpinBox::valueFromText(text);
        } else if (qdoublespinbox_valuefromtext_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc((text_str.len + 1) * sizeof(char)));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            double callback_ret = qdoublespinbox_valuefromtext_callback(this, cbval1);
            return static_cast<double>(callback_ret);
        } else {
            return QDoubleSpinBox::valueFromText(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString textFromValue(double val) const override {
        if (qdoublespinbox_textfromvalue_isbase) {
            qdoublespinbox_textfromvalue_isbase = false;
            return QDoubleSpinBox::textFromValue(val);
        } else if (qdoublespinbox_textfromvalue_callback != nullptr) {
            double cbval1 = val;

            libqt_string callback_ret = qdoublespinbox_textfromvalue_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QDoubleSpinBox::textFromValue(val);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& str) const override {
        if (qdoublespinbox_fixup_isbase) {
            qdoublespinbox_fixup_isbase = false;
            QDoubleSpinBox::fixup(str);
        } else if (qdoublespinbox_fixup_callback != nullptr) {
            QString str_ret = str;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray str_b = str_ret.toUtf8();
            libqt_string str_str;
            str_str.len = str_b.length();
            str_str.data = static_cast<const char*>(malloc((str_str.len + 1) * sizeof(char)));
            memcpy((void*)str_str.data, str_b.data(), str_str.len);
            ((char*)str_str.data)[str_str.len] = '\0';
            libqt_string cbval1 = str_str;

            qdoublespinbox_fixup_callback(this, cbval1);
        } else {
            QDoubleSpinBox::fixup(str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdoublespinbox_sizehint_isbase) {
            qdoublespinbox_sizehint_isbase = false;
            return QDoubleSpinBox::sizeHint();
        } else if (qdoublespinbox_sizehint_callback != nullptr) {
            QSize* callback_ret = qdoublespinbox_sizehint_callback();
            return *callback_ret;
        } else {
            return QDoubleSpinBox::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdoublespinbox_minimumsizehint_isbase) {
            qdoublespinbox_minimumsizehint_isbase = false;
            return QDoubleSpinBox::minimumSizeHint();
        } else if (qdoublespinbox_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qdoublespinbox_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QDoubleSpinBox::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdoublespinbox_event_isbase) {
            qdoublespinbox_event_isbase = false;
            return QDoubleSpinBox::event(event);
        } else if (qdoublespinbox_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qdoublespinbox_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDoubleSpinBox::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdoublespinbox_inputmethodquery_isbase) {
            qdoublespinbox_inputmethodquery_isbase = false;
            return QDoubleSpinBox::inputMethodQuery(param1);
        } else if (qdoublespinbox_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qdoublespinbox_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QDoubleSpinBox::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void stepBy(int steps) override {
        if (qdoublespinbox_stepby_isbase) {
            qdoublespinbox_stepby_isbase = false;
            QDoubleSpinBox::stepBy(steps);
        } else if (qdoublespinbox_stepby_callback != nullptr) {
            int cbval1 = steps;

            qdoublespinbox_stepby_callback(this, cbval1);
        } else {
            QDoubleSpinBox::stepBy(steps);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qdoublespinbox_clear_isbase) {
            qdoublespinbox_clear_isbase = false;
            QDoubleSpinBox::clear();
        } else if (qdoublespinbox_clear_callback != nullptr) {
            qdoublespinbox_clear_callback();
        } else {
            QDoubleSpinBox::clear();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qdoublespinbox_resizeevent_isbase) {
            qdoublespinbox_resizeevent_isbase = false;
            QDoubleSpinBox::resizeEvent(event);
        } else if (qdoublespinbox_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qdoublespinbox_resizeevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qdoublespinbox_keypressevent_isbase) {
            qdoublespinbox_keypressevent_isbase = false;
            QDoubleSpinBox::keyPressEvent(event);
        } else if (qdoublespinbox_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qdoublespinbox_keypressevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdoublespinbox_keyreleaseevent_isbase) {
            qdoublespinbox_keyreleaseevent_isbase = false;
            QDoubleSpinBox::keyReleaseEvent(event);
        } else if (qdoublespinbox_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qdoublespinbox_keyreleaseevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdoublespinbox_wheelevent_isbase) {
            qdoublespinbox_wheelevent_isbase = false;
            QDoubleSpinBox::wheelEvent(event);
        } else if (qdoublespinbox_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qdoublespinbox_wheelevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdoublespinbox_focusinevent_isbase) {
            qdoublespinbox_focusinevent_isbase = false;
            QDoubleSpinBox::focusInEvent(event);
        } else if (qdoublespinbox_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qdoublespinbox_focusinevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdoublespinbox_focusoutevent_isbase) {
            qdoublespinbox_focusoutevent_isbase = false;
            QDoubleSpinBox::focusOutEvent(event);
        } else if (qdoublespinbox_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qdoublespinbox_focusoutevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdoublespinbox_contextmenuevent_isbase) {
            qdoublespinbox_contextmenuevent_isbase = false;
            QDoubleSpinBox::contextMenuEvent(event);
        } else if (qdoublespinbox_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qdoublespinbox_contextmenuevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qdoublespinbox_changeevent_isbase) {
            qdoublespinbox_changeevent_isbase = false;
            QDoubleSpinBox::changeEvent(event);
        } else if (qdoublespinbox_changeevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qdoublespinbox_changeevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdoublespinbox_closeevent_isbase) {
            qdoublespinbox_closeevent_isbase = false;
            QDoubleSpinBox::closeEvent(event);
        } else if (qdoublespinbox_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qdoublespinbox_closeevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdoublespinbox_hideevent_isbase) {
            qdoublespinbox_hideevent_isbase = false;
            QDoubleSpinBox::hideEvent(event);
        } else if (qdoublespinbox_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qdoublespinbox_hideevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdoublespinbox_mousepressevent_isbase) {
            qdoublespinbox_mousepressevent_isbase = false;
            QDoubleSpinBox::mousePressEvent(event);
        } else if (qdoublespinbox_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qdoublespinbox_mousepressevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdoublespinbox_mousereleaseevent_isbase) {
            qdoublespinbox_mousereleaseevent_isbase = false;
            QDoubleSpinBox::mouseReleaseEvent(event);
        } else if (qdoublespinbox_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qdoublespinbox_mousereleaseevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdoublespinbox_mousemoveevent_isbase) {
            qdoublespinbox_mousemoveevent_isbase = false;
            QDoubleSpinBox::mouseMoveEvent(event);
        } else if (qdoublespinbox_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qdoublespinbox_mousemoveevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdoublespinbox_timerevent_isbase) {
            qdoublespinbox_timerevent_isbase = false;
            QDoubleSpinBox::timerEvent(event);
        } else if (qdoublespinbox_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qdoublespinbox_timerevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdoublespinbox_paintevent_isbase) {
            qdoublespinbox_paintevent_isbase = false;
            QDoubleSpinBox::paintEvent(event);
        } else if (qdoublespinbox_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            qdoublespinbox_paintevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdoublespinbox_showevent_isbase) {
            qdoublespinbox_showevent_isbase = false;
            QDoubleSpinBox::showEvent(event);
        } else if (qdoublespinbox_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qdoublespinbox_showevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
        if (qdoublespinbox_initstyleoption_isbase) {
            qdoublespinbox_initstyleoption_isbase = false;
            QDoubleSpinBox::initStyleOption(option);
        } else if (qdoublespinbox_initstyleoption_callback != nullptr) {
            QStyleOptionSpinBox* cbval1 = option;

            qdoublespinbox_initstyleoption_callback(this, cbval1);
        } else {
            QDoubleSpinBox::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
        if (qdoublespinbox_stepenabled_isbase) {
            qdoublespinbox_stepenabled_isbase = false;
            return QDoubleSpinBox::stepEnabled();
        } else if (qdoublespinbox_stepenabled_callback != nullptr) {
            int callback_ret = qdoublespinbox_stepenabled_callback();
            return static_cast<QAbstractSpinBox::StepEnabled>(callback_ret);
        } else {
            return QDoubleSpinBox::stepEnabled();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdoublespinbox_devtype_isbase) {
            qdoublespinbox_devtype_isbase = false;
            return QDoubleSpinBox::devType();
        } else if (qdoublespinbox_devtype_callback != nullptr) {
            int callback_ret = qdoublespinbox_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QDoubleSpinBox::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdoublespinbox_setvisible_isbase) {
            qdoublespinbox_setvisible_isbase = false;
            QDoubleSpinBox::setVisible(visible);
        } else if (qdoublespinbox_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qdoublespinbox_setvisible_callback(this, cbval1);
        } else {
            QDoubleSpinBox::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdoublespinbox_heightforwidth_isbase) {
            qdoublespinbox_heightforwidth_isbase = false;
            return QDoubleSpinBox::heightForWidth(param1);
        } else if (qdoublespinbox_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qdoublespinbox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QDoubleSpinBox::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdoublespinbox_hasheightforwidth_isbase) {
            qdoublespinbox_hasheightforwidth_isbase = false;
            return QDoubleSpinBox::hasHeightForWidth();
        } else if (qdoublespinbox_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qdoublespinbox_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QDoubleSpinBox::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdoublespinbox_paintengine_isbase) {
            qdoublespinbox_paintengine_isbase = false;
            return QDoubleSpinBox::paintEngine();
        } else if (qdoublespinbox_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qdoublespinbox_paintengine_callback();
            return callback_ret;
        } else {
            return QDoubleSpinBox::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdoublespinbox_mousedoubleclickevent_isbase) {
            qdoublespinbox_mousedoubleclickevent_isbase = false;
            QDoubleSpinBox::mouseDoubleClickEvent(event);
        } else if (qdoublespinbox_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qdoublespinbox_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdoublespinbox_enterevent_isbase) {
            qdoublespinbox_enterevent_isbase = false;
            QDoubleSpinBox::enterEvent(event);
        } else if (qdoublespinbox_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qdoublespinbox_enterevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdoublespinbox_leaveevent_isbase) {
            qdoublespinbox_leaveevent_isbase = false;
            QDoubleSpinBox::leaveEvent(event);
        } else if (qdoublespinbox_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qdoublespinbox_leaveevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdoublespinbox_moveevent_isbase) {
            qdoublespinbox_moveevent_isbase = false;
            QDoubleSpinBox::moveEvent(event);
        } else if (qdoublespinbox_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qdoublespinbox_moveevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdoublespinbox_tabletevent_isbase) {
            qdoublespinbox_tabletevent_isbase = false;
            QDoubleSpinBox::tabletEvent(event);
        } else if (qdoublespinbox_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qdoublespinbox_tabletevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdoublespinbox_actionevent_isbase) {
            qdoublespinbox_actionevent_isbase = false;
            QDoubleSpinBox::actionEvent(event);
        } else if (qdoublespinbox_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qdoublespinbox_actionevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdoublespinbox_dragenterevent_isbase) {
            qdoublespinbox_dragenterevent_isbase = false;
            QDoubleSpinBox::dragEnterEvent(event);
        } else if (qdoublespinbox_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qdoublespinbox_dragenterevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdoublespinbox_dragmoveevent_isbase) {
            qdoublespinbox_dragmoveevent_isbase = false;
            QDoubleSpinBox::dragMoveEvent(event);
        } else if (qdoublespinbox_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qdoublespinbox_dragmoveevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdoublespinbox_dragleaveevent_isbase) {
            qdoublespinbox_dragleaveevent_isbase = false;
            QDoubleSpinBox::dragLeaveEvent(event);
        } else if (qdoublespinbox_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qdoublespinbox_dragleaveevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdoublespinbox_dropevent_isbase) {
            qdoublespinbox_dropevent_isbase = false;
            QDoubleSpinBox::dropEvent(event);
        } else if (qdoublespinbox_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qdoublespinbox_dropevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdoublespinbox_nativeevent_isbase) {
            qdoublespinbox_nativeevent_isbase = false;
            return QDoubleSpinBox::nativeEvent(eventType, message, result);
        } else if (qdoublespinbox_nativeevent_callback != nullptr) {
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

            bool callback_ret = qdoublespinbox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QDoubleSpinBox::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdoublespinbox_metric_isbase) {
            qdoublespinbox_metric_isbase = false;
            return QDoubleSpinBox::metric(param1);
        } else if (qdoublespinbox_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qdoublespinbox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QDoubleSpinBox::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdoublespinbox_initpainter_isbase) {
            qdoublespinbox_initpainter_isbase = false;
            QDoubleSpinBox::initPainter(painter);
        } else if (qdoublespinbox_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qdoublespinbox_initpainter_callback(this, cbval1);
        } else {
            QDoubleSpinBox::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdoublespinbox_redirected_isbase) {
            qdoublespinbox_redirected_isbase = false;
            return QDoubleSpinBox::redirected(offset);
        } else if (qdoublespinbox_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qdoublespinbox_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDoubleSpinBox::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdoublespinbox_sharedpainter_isbase) {
            qdoublespinbox_sharedpainter_isbase = false;
            return QDoubleSpinBox::sharedPainter();
        } else if (qdoublespinbox_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qdoublespinbox_sharedpainter_callback();
            return callback_ret;
        } else {
            return QDoubleSpinBox::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdoublespinbox_inputmethodevent_isbase) {
            qdoublespinbox_inputmethodevent_isbase = false;
            QDoubleSpinBox::inputMethodEvent(param1);
        } else if (qdoublespinbox_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qdoublespinbox_inputmethodevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdoublespinbox_focusnextprevchild_isbase) {
            qdoublespinbox_focusnextprevchild_isbase = false;
            return QDoubleSpinBox::focusNextPrevChild(next);
        } else if (qdoublespinbox_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qdoublespinbox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDoubleSpinBox::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdoublespinbox_eventfilter_isbase) {
            qdoublespinbox_eventfilter_isbase = false;
            return QDoubleSpinBox::eventFilter(watched, event);
        } else if (qdoublespinbox_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qdoublespinbox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QDoubleSpinBox::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdoublespinbox_childevent_isbase) {
            qdoublespinbox_childevent_isbase = false;
            QDoubleSpinBox::childEvent(event);
        } else if (qdoublespinbox_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qdoublespinbox_childevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdoublespinbox_customevent_isbase) {
            qdoublespinbox_customevent_isbase = false;
            QDoubleSpinBox::customEvent(event);
        } else if (qdoublespinbox_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qdoublespinbox_customevent_callback(this, cbval1);
        } else {
            QDoubleSpinBox::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdoublespinbox_connectnotify_isbase) {
            qdoublespinbox_connectnotify_isbase = false;
            QDoubleSpinBox::connectNotify(signal);
        } else if (qdoublespinbox_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdoublespinbox_connectnotify_callback(this, cbval1);
        } else {
            QDoubleSpinBox::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdoublespinbox_disconnectnotify_isbase) {
            qdoublespinbox_disconnectnotify_isbase = false;
            QDoubleSpinBox::disconnectNotify(signal);
        } else if (qdoublespinbox_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qdoublespinbox_disconnectnotify_callback(this, cbval1);
        } else {
            QDoubleSpinBox::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QLineEdit* lineEdit() const {
        if (qdoublespinbox_lineedit_isbase) {
            qdoublespinbox_lineedit_isbase = false;
            return QDoubleSpinBox::lineEdit();
        } else if (qdoublespinbox_lineedit_callback != nullptr) {
            QLineEdit* callback_ret = qdoublespinbox_lineedit_callback();
            return callback_ret;
        } else {
            return QDoubleSpinBox::lineEdit();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLineEdit(QLineEdit* edit) {
        if (qdoublespinbox_setlineedit_isbase) {
            qdoublespinbox_setlineedit_isbase = false;
            QDoubleSpinBox::setLineEdit(edit);
        } else if (qdoublespinbox_setlineedit_callback != nullptr) {
            QLineEdit* cbval1 = edit;

            qdoublespinbox_setlineedit_callback(this, cbval1);
        } else {
            QDoubleSpinBox::setLineEdit(edit);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qdoublespinbox_updatemicrofocus_isbase) {
            qdoublespinbox_updatemicrofocus_isbase = false;
            QDoubleSpinBox::updateMicroFocus();
        } else if (qdoublespinbox_updatemicrofocus_callback != nullptr) {
            qdoublespinbox_updatemicrofocus_callback();
        } else {
            QDoubleSpinBox::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qdoublespinbox_create_isbase) {
            qdoublespinbox_create_isbase = false;
            QDoubleSpinBox::create();
        } else if (qdoublespinbox_create_callback != nullptr) {
            qdoublespinbox_create_callback();
        } else {
            QDoubleSpinBox::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qdoublespinbox_destroy_isbase) {
            qdoublespinbox_destroy_isbase = false;
            QDoubleSpinBox::destroy();
        } else if (qdoublespinbox_destroy_callback != nullptr) {
            qdoublespinbox_destroy_callback();
        } else {
            QDoubleSpinBox::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qdoublespinbox_focusnextchild_isbase) {
            qdoublespinbox_focusnextchild_isbase = false;
            return QDoubleSpinBox::focusNextChild();
        } else if (qdoublespinbox_focusnextchild_callback != nullptr) {
            bool callback_ret = qdoublespinbox_focusnextchild_callback();
            return callback_ret;
        } else {
            return QDoubleSpinBox::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qdoublespinbox_focuspreviouschild_isbase) {
            qdoublespinbox_focuspreviouschild_isbase = false;
            return QDoubleSpinBox::focusPreviousChild();
        } else if (qdoublespinbox_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qdoublespinbox_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QDoubleSpinBox::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdoublespinbox_sender_isbase) {
            qdoublespinbox_sender_isbase = false;
            return QDoubleSpinBox::sender();
        } else if (qdoublespinbox_sender_callback != nullptr) {
            QObject* callback_ret = qdoublespinbox_sender_callback();
            return callback_ret;
        } else {
            return QDoubleSpinBox::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdoublespinbox_sendersignalindex_isbase) {
            qdoublespinbox_sendersignalindex_isbase = false;
            return QDoubleSpinBox::senderSignalIndex();
        } else if (qdoublespinbox_sendersignalindex_callback != nullptr) {
            int callback_ret = qdoublespinbox_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QDoubleSpinBox::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdoublespinbox_receivers_isbase) {
            qdoublespinbox_receivers_isbase = false;
            return QDoubleSpinBox::receivers(signal);
        } else if (qdoublespinbox_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qdoublespinbox_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QDoubleSpinBox::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdoublespinbox_issignalconnected_isbase) {
            qdoublespinbox_issignalconnected_isbase = false;
            return QDoubleSpinBox::isSignalConnected(signal);
        } else if (qdoublespinbox_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qdoublespinbox_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QDoubleSpinBox::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QDoubleSpinBox_ResizeEvent(QDoubleSpinBox* self, QResizeEvent* event);
    friend void QDoubleSpinBox_QBaseResizeEvent(QDoubleSpinBox* self, QResizeEvent* event);
    friend void QDoubleSpinBox_KeyPressEvent(QDoubleSpinBox* self, QKeyEvent* event);
    friend void QDoubleSpinBox_QBaseKeyPressEvent(QDoubleSpinBox* self, QKeyEvent* event);
    friend void QDoubleSpinBox_KeyReleaseEvent(QDoubleSpinBox* self, QKeyEvent* event);
    friend void QDoubleSpinBox_QBaseKeyReleaseEvent(QDoubleSpinBox* self, QKeyEvent* event);
    friend void QDoubleSpinBox_WheelEvent(QDoubleSpinBox* self, QWheelEvent* event);
    friend void QDoubleSpinBox_QBaseWheelEvent(QDoubleSpinBox* self, QWheelEvent* event);
    friend void QDoubleSpinBox_FocusInEvent(QDoubleSpinBox* self, QFocusEvent* event);
    friend void QDoubleSpinBox_QBaseFocusInEvent(QDoubleSpinBox* self, QFocusEvent* event);
    friend void QDoubleSpinBox_FocusOutEvent(QDoubleSpinBox* self, QFocusEvent* event);
    friend void QDoubleSpinBox_QBaseFocusOutEvent(QDoubleSpinBox* self, QFocusEvent* event);
    friend void QDoubleSpinBox_ContextMenuEvent(QDoubleSpinBox* self, QContextMenuEvent* event);
    friend void QDoubleSpinBox_QBaseContextMenuEvent(QDoubleSpinBox* self, QContextMenuEvent* event);
    friend void QDoubleSpinBox_ChangeEvent(QDoubleSpinBox* self, QEvent* event);
    friend void QDoubleSpinBox_QBaseChangeEvent(QDoubleSpinBox* self, QEvent* event);
    friend void QDoubleSpinBox_CloseEvent(QDoubleSpinBox* self, QCloseEvent* event);
    friend void QDoubleSpinBox_QBaseCloseEvent(QDoubleSpinBox* self, QCloseEvent* event);
    friend void QDoubleSpinBox_HideEvent(QDoubleSpinBox* self, QHideEvent* event);
    friend void QDoubleSpinBox_QBaseHideEvent(QDoubleSpinBox* self, QHideEvent* event);
    friend void QDoubleSpinBox_MousePressEvent(QDoubleSpinBox* self, QMouseEvent* event);
    friend void QDoubleSpinBox_QBaseMousePressEvent(QDoubleSpinBox* self, QMouseEvent* event);
    friend void QDoubleSpinBox_MouseReleaseEvent(QDoubleSpinBox* self, QMouseEvent* event);
    friend void QDoubleSpinBox_QBaseMouseReleaseEvent(QDoubleSpinBox* self, QMouseEvent* event);
    friend void QDoubleSpinBox_MouseMoveEvent(QDoubleSpinBox* self, QMouseEvent* event);
    friend void QDoubleSpinBox_QBaseMouseMoveEvent(QDoubleSpinBox* self, QMouseEvent* event);
    friend void QDoubleSpinBox_TimerEvent(QDoubleSpinBox* self, QTimerEvent* event);
    friend void QDoubleSpinBox_QBaseTimerEvent(QDoubleSpinBox* self, QTimerEvent* event);
    friend void QDoubleSpinBox_PaintEvent(QDoubleSpinBox* self, QPaintEvent* event);
    friend void QDoubleSpinBox_QBasePaintEvent(QDoubleSpinBox* self, QPaintEvent* event);
    friend void QDoubleSpinBox_ShowEvent(QDoubleSpinBox* self, QShowEvent* event);
    friend void QDoubleSpinBox_QBaseShowEvent(QDoubleSpinBox* self, QShowEvent* event);
    friend void QDoubleSpinBox_InitStyleOption(const QDoubleSpinBox* self, QStyleOptionSpinBox* option);
    friend void QDoubleSpinBox_QBaseInitStyleOption(const QDoubleSpinBox* self, QStyleOptionSpinBox* option);
    friend int QDoubleSpinBox_StepEnabled(const QDoubleSpinBox* self);
    friend int QDoubleSpinBox_QBaseStepEnabled(const QDoubleSpinBox* self);
    friend void QDoubleSpinBox_MouseDoubleClickEvent(QDoubleSpinBox* self, QMouseEvent* event);
    friend void QDoubleSpinBox_QBaseMouseDoubleClickEvent(QDoubleSpinBox* self, QMouseEvent* event);
    friend void QDoubleSpinBox_EnterEvent(QDoubleSpinBox* self, QEnterEvent* event);
    friend void QDoubleSpinBox_QBaseEnterEvent(QDoubleSpinBox* self, QEnterEvent* event);
    friend void QDoubleSpinBox_LeaveEvent(QDoubleSpinBox* self, QEvent* event);
    friend void QDoubleSpinBox_QBaseLeaveEvent(QDoubleSpinBox* self, QEvent* event);
    friend void QDoubleSpinBox_MoveEvent(QDoubleSpinBox* self, QMoveEvent* event);
    friend void QDoubleSpinBox_QBaseMoveEvent(QDoubleSpinBox* self, QMoveEvent* event);
    friend void QDoubleSpinBox_TabletEvent(QDoubleSpinBox* self, QTabletEvent* event);
    friend void QDoubleSpinBox_QBaseTabletEvent(QDoubleSpinBox* self, QTabletEvent* event);
    friend void QDoubleSpinBox_ActionEvent(QDoubleSpinBox* self, QActionEvent* event);
    friend void QDoubleSpinBox_QBaseActionEvent(QDoubleSpinBox* self, QActionEvent* event);
    friend void QDoubleSpinBox_DragEnterEvent(QDoubleSpinBox* self, QDragEnterEvent* event);
    friend void QDoubleSpinBox_QBaseDragEnterEvent(QDoubleSpinBox* self, QDragEnterEvent* event);
    friend void QDoubleSpinBox_DragMoveEvent(QDoubleSpinBox* self, QDragMoveEvent* event);
    friend void QDoubleSpinBox_QBaseDragMoveEvent(QDoubleSpinBox* self, QDragMoveEvent* event);
    friend void QDoubleSpinBox_DragLeaveEvent(QDoubleSpinBox* self, QDragLeaveEvent* event);
    friend void QDoubleSpinBox_QBaseDragLeaveEvent(QDoubleSpinBox* self, QDragLeaveEvent* event);
    friend void QDoubleSpinBox_DropEvent(QDoubleSpinBox* self, QDropEvent* event);
    friend void QDoubleSpinBox_QBaseDropEvent(QDoubleSpinBox* self, QDropEvent* event);
    friend bool QDoubleSpinBox_NativeEvent(QDoubleSpinBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QDoubleSpinBox_QBaseNativeEvent(QDoubleSpinBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QDoubleSpinBox_Metric(const QDoubleSpinBox* self, int param1);
    friend int QDoubleSpinBox_QBaseMetric(const QDoubleSpinBox* self, int param1);
    friend void QDoubleSpinBox_InitPainter(const QDoubleSpinBox* self, QPainter* painter);
    friend void QDoubleSpinBox_QBaseInitPainter(const QDoubleSpinBox* self, QPainter* painter);
    friend QPaintDevice* QDoubleSpinBox_Redirected(const QDoubleSpinBox* self, QPoint* offset);
    friend QPaintDevice* QDoubleSpinBox_QBaseRedirected(const QDoubleSpinBox* self, QPoint* offset);
    friend QPainter* QDoubleSpinBox_SharedPainter(const QDoubleSpinBox* self);
    friend QPainter* QDoubleSpinBox_QBaseSharedPainter(const QDoubleSpinBox* self);
    friend void QDoubleSpinBox_InputMethodEvent(QDoubleSpinBox* self, QInputMethodEvent* param1);
    friend void QDoubleSpinBox_QBaseInputMethodEvent(QDoubleSpinBox* self, QInputMethodEvent* param1);
    friend bool QDoubleSpinBox_FocusNextPrevChild(QDoubleSpinBox* self, bool next);
    friend bool QDoubleSpinBox_QBaseFocusNextPrevChild(QDoubleSpinBox* self, bool next);
    friend void QDoubleSpinBox_ChildEvent(QDoubleSpinBox* self, QChildEvent* event);
    friend void QDoubleSpinBox_QBaseChildEvent(QDoubleSpinBox* self, QChildEvent* event);
    friend void QDoubleSpinBox_CustomEvent(QDoubleSpinBox* self, QEvent* event);
    friend void QDoubleSpinBox_QBaseCustomEvent(QDoubleSpinBox* self, QEvent* event);
    friend void QDoubleSpinBox_ConnectNotify(QDoubleSpinBox* self, const QMetaMethod* signal);
    friend void QDoubleSpinBox_QBaseConnectNotify(QDoubleSpinBox* self, const QMetaMethod* signal);
    friend void QDoubleSpinBox_DisconnectNotify(QDoubleSpinBox* self, const QMetaMethod* signal);
    friend void QDoubleSpinBox_QBaseDisconnectNotify(QDoubleSpinBox* self, const QMetaMethod* signal);
    friend QLineEdit* QDoubleSpinBox_LineEdit(const QDoubleSpinBox* self);
    friend QLineEdit* QDoubleSpinBox_QBaseLineEdit(const QDoubleSpinBox* self);
    friend void QDoubleSpinBox_SetLineEdit(QDoubleSpinBox* self, QLineEdit* edit);
    friend void QDoubleSpinBox_QBaseSetLineEdit(QDoubleSpinBox* self, QLineEdit* edit);
    friend void QDoubleSpinBox_UpdateMicroFocus(QDoubleSpinBox* self);
    friend void QDoubleSpinBox_QBaseUpdateMicroFocus(QDoubleSpinBox* self);
    friend void QDoubleSpinBox_Create(QDoubleSpinBox* self);
    friend void QDoubleSpinBox_QBaseCreate(QDoubleSpinBox* self);
    friend void QDoubleSpinBox_Destroy(QDoubleSpinBox* self);
    friend void QDoubleSpinBox_QBaseDestroy(QDoubleSpinBox* self);
    friend bool QDoubleSpinBox_FocusNextChild(QDoubleSpinBox* self);
    friend bool QDoubleSpinBox_QBaseFocusNextChild(QDoubleSpinBox* self);
    friend bool QDoubleSpinBox_FocusPreviousChild(QDoubleSpinBox* self);
    friend bool QDoubleSpinBox_QBaseFocusPreviousChild(QDoubleSpinBox* self);
    friend QObject* QDoubleSpinBox_Sender(const QDoubleSpinBox* self);
    friend QObject* QDoubleSpinBox_QBaseSender(const QDoubleSpinBox* self);
    friend int QDoubleSpinBox_SenderSignalIndex(const QDoubleSpinBox* self);
    friend int QDoubleSpinBox_QBaseSenderSignalIndex(const QDoubleSpinBox* self);
    friend int QDoubleSpinBox_Receivers(const QDoubleSpinBox* self, const char* signal);
    friend int QDoubleSpinBox_QBaseReceivers(const QDoubleSpinBox* self, const char* signal);
    friend bool QDoubleSpinBox_IsSignalConnected(const QDoubleSpinBox* self, const QMetaMethod* signal);
    friend bool QDoubleSpinBox_QBaseIsSignalConnected(const QDoubleSpinBox* self, const QMetaMethod* signal);
};

#endif
