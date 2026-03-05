#pragma once
#ifndef SRCC_LIBVIRTUALQABSTRACTSPINBOX_H
#define SRCC_LIBVIRTUALQABSTRACTSPINBOX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractSpinBox so that we can call protected methods
class VirtualQAbstractSpinBox final : public QAbstractSpinBox {

  public:
    // Virtual class boolean flag
    bool isVirtualQAbstractSpinBox = true;

    // Virtual class public types (including callbacks)
    using QAbstractSpinBox_MetaObject_Callback = QMetaObject* (*)();
    using QAbstractSpinBox_Metacast_Callback = void* (*)(QAbstractSpinBox*, const char*);
    using QAbstractSpinBox_Metacall_Callback = int (*)(QAbstractSpinBox*, int, int, void**);
    using QAbstractSpinBox_SizeHint_Callback = QSize* (*)();
    using QAbstractSpinBox_MinimumSizeHint_Callback = QSize* (*)();
    using QAbstractSpinBox_Event_Callback = bool (*)(QAbstractSpinBox*, QEvent*);
    using QAbstractSpinBox_InputMethodQuery_Callback = QVariant* (*)(const QAbstractSpinBox*, int);
    using QAbstractSpinBox_Validate_Callback = int (*)(const QAbstractSpinBox*, const char*, int*);
    using QAbstractSpinBox_Fixup_Callback = void (*)(const QAbstractSpinBox*, const char*);
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
    using QAbstractSpinBox_GetDecodedMetricF_Callback = double (*)(const QAbstractSpinBox*, int, int);

  protected:
    // Instance callback storage
    QAbstractSpinBox_MetaObject_Callback qabstractspinbox_metaobject_callback = nullptr;
    QAbstractSpinBox_Metacast_Callback qabstractspinbox_metacast_callback = nullptr;
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
    QAbstractSpinBox_GetDecodedMetricF_Callback qabstractspinbox_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qabstractspinbox_metaobject_isbase = false;
    mutable bool qabstractspinbox_metacast_isbase = false;
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
    mutable bool qabstractspinbox_getdecodedmetricf_isbase = false;

  public:
    VirtualQAbstractSpinBox(QWidget* parent) : QAbstractSpinBox(parent) {};
    VirtualQAbstractSpinBox() : QAbstractSpinBox() {};

    // Callback setters
    inline void setQAbstractSpinBox_MetaObject_Callback(QAbstractSpinBox_MetaObject_Callback cb) { qabstractspinbox_metaobject_callback = cb; }
    inline void setQAbstractSpinBox_Metacast_Callback(QAbstractSpinBox_Metacast_Callback cb) { qabstractspinbox_metacast_callback = cb; }
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
    inline void setQAbstractSpinBox_GetDecodedMetricF_Callback(QAbstractSpinBox_GetDecodedMetricF_Callback cb) { qabstractspinbox_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQAbstractSpinBox_MetaObject_IsBase(bool value) const { qabstractspinbox_metaobject_isbase = value; }
    inline void setQAbstractSpinBox_Metacast_IsBase(bool value) const { qabstractspinbox_metacast_isbase = value; }
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
    inline void setQAbstractSpinBox_GetDecodedMetricF_IsBase(bool value) const { qabstractspinbox_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qabstractspinbox_metaobject_isbase) {
            qabstractspinbox_metaobject_isbase = false;
            return QAbstractSpinBox::metaObject();
        }
        auto metaobject_cb = qabstractspinbox_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QAbstractSpinBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qabstractspinbox_metacast_isbase) {
            qabstractspinbox_metacast_isbase = false;
            return QAbstractSpinBox::qt_metacast(param1);
        }
        auto metacast_cb = qabstractspinbox_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractSpinBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractspinbox_metacall_isbase) {
            qabstractspinbox_metacall_isbase = false;
            return QAbstractSpinBox::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qabstractspinbox_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAbstractSpinBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qabstractspinbox_sizehint_isbase) {
            qabstractspinbox_sizehint_isbase = false;
            return QAbstractSpinBox::sizeHint();
        }
        auto sizehint_cb = qabstractspinbox_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QAbstractSpinBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qabstractspinbox_minimumsizehint_isbase) {
            qabstractspinbox_minimumsizehint_isbase = false;
            return QAbstractSpinBox::minimumSizeHint();
        }
        auto minimumsizehint_cb = qabstractspinbox_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QAbstractSpinBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractspinbox_event_isbase) {
            qabstractspinbox_event_isbase = false;
            return QAbstractSpinBox::event(event);
        }
        auto event_cb = qabstractspinbox_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractSpinBox::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qabstractspinbox_inputmethodquery_isbase) {
            qabstractspinbox_inputmethodquery_isbase = false;
            return QAbstractSpinBox::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qabstractspinbox_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QAbstractSpinBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& input, int& pos) const override {
        if (qabstractspinbox_validate_isbase) {
            qabstractspinbox_validate_isbase = false;
            return QAbstractSpinBox::validate(input, pos);
        }
        auto validate_cb = qabstractspinbox_validate_callback;
        if (validate_cb) {
            QString input_ret = input;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray input_b = input_ret.toUtf8();
            auto input_str_len = input_b.length();
            const char* input_str = static_cast<const char*>(malloc(input_str_len + 1));
            memcpy((void*)input_str, input_b.data(), input_str_len);
            ((char*)input_str)[input_str_len] = '\0';
            const char* cbval1 = input_str;
            int* cbval2 = &pos;

            int callback_ret = validate_cb(this, cbval1, cbval2);
            libqt_free(input_str);
            return static_cast<QValidator::State>(callback_ret);
        }
        return QAbstractSpinBox::validate(input, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& input) const override {
        if (qabstractspinbox_fixup_isbase) {
            qabstractspinbox_fixup_isbase = false;
            QAbstractSpinBox::fixup(input);
            return;
        }
        auto fixup_cb = qabstractspinbox_fixup_callback;
        if (fixup_cb) {
            QString input_ret = input;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray input_b = input_ret.toUtf8();
            auto input_str_len = input_b.length();
            const char* input_str = static_cast<const char*>(malloc(input_str_len + 1));
            memcpy((void*)input_str, input_b.data(), input_str_len);
            ((char*)input_str)[input_str_len] = '\0';
            const char* cbval1 = input_str;

            fixup_cb(this, cbval1);
            libqt_free(input_str);
            return;
        }
        QAbstractSpinBox::fixup(input);
    }

    // Virtual method for C ABI access and custom callback
    virtual void stepBy(int steps) override {
        if (qabstractspinbox_stepby_isbase) {
            qabstractspinbox_stepby_isbase = false;
            QAbstractSpinBox::stepBy(steps);
            return;
        }
        auto stepby_cb = qabstractspinbox_stepby_callback;
        if (stepby_cb) {
            int cbval1 = steps;

            stepby_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::stepBy(steps);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qabstractspinbox_clear_isbase) {
            qabstractspinbox_clear_isbase = false;
            QAbstractSpinBox::clear();
            return;
        }
        auto clear_cb = qabstractspinbox_clear_callback;
        if (clear_cb) {
            clear_cb();
            return;
        }
        QAbstractSpinBox::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qabstractspinbox_resizeevent_isbase) {
            qabstractspinbox_resizeevent_isbase = false;
            QAbstractSpinBox::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = qabstractspinbox_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qabstractspinbox_keypressevent_isbase) {
            qabstractspinbox_keypressevent_isbase = false;
            QAbstractSpinBox::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qabstractspinbox_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qabstractspinbox_keyreleaseevent_isbase) {
            qabstractspinbox_keyreleaseevent_isbase = false;
            QAbstractSpinBox::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qabstractspinbox_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qabstractspinbox_wheelevent_isbase) {
            qabstractspinbox_wheelevent_isbase = false;
            QAbstractSpinBox::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qabstractspinbox_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qabstractspinbox_focusinevent_isbase) {
            qabstractspinbox_focusinevent_isbase = false;
            QAbstractSpinBox::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qabstractspinbox_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qabstractspinbox_focusoutevent_isbase) {
            qabstractspinbox_focusoutevent_isbase = false;
            QAbstractSpinBox::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qabstractspinbox_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qabstractspinbox_contextmenuevent_isbase) {
            qabstractspinbox_contextmenuevent_isbase = false;
            QAbstractSpinBox::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qabstractspinbox_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qabstractspinbox_changeevent_isbase) {
            qabstractspinbox_changeevent_isbase = false;
            QAbstractSpinBox::changeEvent(event);
            return;
        }
        auto changeevent_cb = qabstractspinbox_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = event;

            changeevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qabstractspinbox_closeevent_isbase) {
            qabstractspinbox_closeevent_isbase = false;
            QAbstractSpinBox::closeEvent(event);
            return;
        }
        auto closeevent_cb = qabstractspinbox_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qabstractspinbox_hideevent_isbase) {
            qabstractspinbox_hideevent_isbase = false;
            QAbstractSpinBox::hideEvent(event);
            return;
        }
        auto hideevent_cb = qabstractspinbox_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qabstractspinbox_mousepressevent_isbase) {
            qabstractspinbox_mousepressevent_isbase = false;
            QAbstractSpinBox::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qabstractspinbox_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qabstractspinbox_mousereleaseevent_isbase) {
            qabstractspinbox_mousereleaseevent_isbase = false;
            QAbstractSpinBox::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qabstractspinbox_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qabstractspinbox_mousemoveevent_isbase) {
            qabstractspinbox_mousemoveevent_isbase = false;
            QAbstractSpinBox::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qabstractspinbox_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractspinbox_timerevent_isbase) {
            qabstractspinbox_timerevent_isbase = false;
            QAbstractSpinBox::timerEvent(event);
            return;
        }
        auto timerevent_cb = qabstractspinbox_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qabstractspinbox_paintevent_isbase) {
            qabstractspinbox_paintevent_isbase = false;
            QAbstractSpinBox::paintEvent(event);
            return;
        }
        auto paintevent_cb = qabstractspinbox_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qabstractspinbox_showevent_isbase) {
            qabstractspinbox_showevent_isbase = false;
            QAbstractSpinBox::showEvent(event);
            return;
        }
        auto showevent_cb = qabstractspinbox_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
        if (qabstractspinbox_initstyleoption_isbase) {
            qabstractspinbox_initstyleoption_isbase = false;
            QAbstractSpinBox::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qabstractspinbox_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionSpinBox* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
        if (qabstractspinbox_stepenabled_isbase) {
            qabstractspinbox_stepenabled_isbase = false;
            return QAbstractSpinBox::stepEnabled();
        }
        auto stepenabled_cb = qabstractspinbox_stepenabled_callback;
        if (stepenabled_cb) {
            int callback_ret = stepenabled_cb();
            return static_cast<QAbstractSpinBox::StepEnabled>(callback_ret);
        }
        return QAbstractSpinBox::stepEnabled();
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qabstractspinbox_devtype_isbase) {
            qabstractspinbox_devtype_isbase = false;
            return QAbstractSpinBox::devType();
        }
        auto devtype_cb = qabstractspinbox_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QAbstractSpinBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qabstractspinbox_setvisible_isbase) {
            qabstractspinbox_setvisible_isbase = false;
            QAbstractSpinBox::setVisible(visible);
            return;
        }
        auto setvisible_cb = qabstractspinbox_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qabstractspinbox_heightforwidth_isbase) {
            qabstractspinbox_heightforwidth_isbase = false;
            return QAbstractSpinBox::heightForWidth(param1);
        }
        auto heightforwidth_cb = qabstractspinbox_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractSpinBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qabstractspinbox_hasheightforwidth_isbase) {
            qabstractspinbox_hasheightforwidth_isbase = false;
            return QAbstractSpinBox::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qabstractspinbox_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QAbstractSpinBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qabstractspinbox_paintengine_isbase) {
            qabstractspinbox_paintengine_isbase = false;
            return QAbstractSpinBox::paintEngine();
        }
        auto paintengine_cb = qabstractspinbox_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QAbstractSpinBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qabstractspinbox_mousedoubleclickevent_isbase) {
            qabstractspinbox_mousedoubleclickevent_isbase = false;
            QAbstractSpinBox::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qabstractspinbox_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qabstractspinbox_enterevent_isbase) {
            qabstractspinbox_enterevent_isbase = false;
            QAbstractSpinBox::enterEvent(event);
            return;
        }
        auto enterevent_cb = qabstractspinbox_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qabstractspinbox_leaveevent_isbase) {
            qabstractspinbox_leaveevent_isbase = false;
            QAbstractSpinBox::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qabstractspinbox_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qabstractspinbox_moveevent_isbase) {
            qabstractspinbox_moveevent_isbase = false;
            QAbstractSpinBox::moveEvent(event);
            return;
        }
        auto moveevent_cb = qabstractspinbox_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qabstractspinbox_tabletevent_isbase) {
            qabstractspinbox_tabletevent_isbase = false;
            QAbstractSpinBox::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qabstractspinbox_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qabstractspinbox_actionevent_isbase) {
            qabstractspinbox_actionevent_isbase = false;
            QAbstractSpinBox::actionEvent(event);
            return;
        }
        auto actionevent_cb = qabstractspinbox_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qabstractspinbox_dragenterevent_isbase) {
            qabstractspinbox_dragenterevent_isbase = false;
            QAbstractSpinBox::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qabstractspinbox_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qabstractspinbox_dragmoveevent_isbase) {
            qabstractspinbox_dragmoveevent_isbase = false;
            QAbstractSpinBox::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qabstractspinbox_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qabstractspinbox_dragleaveevent_isbase) {
            qabstractspinbox_dragleaveevent_isbase = false;
            QAbstractSpinBox::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qabstractspinbox_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qabstractspinbox_dropevent_isbase) {
            qabstractspinbox_dropevent_isbase = false;
            QAbstractSpinBox::dropEvent(event);
            return;
        }
        auto dropevent_cb = qabstractspinbox_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qabstractspinbox_nativeevent_isbase) {
            qabstractspinbox_nativeevent_isbase = false;
            return QAbstractSpinBox::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qabstractspinbox_nativeevent_callback;
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
        return QAbstractSpinBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qabstractspinbox_metric_isbase) {
            qabstractspinbox_metric_isbase = false;
            return QAbstractSpinBox::metric(param1);
        }
        auto metric_cb = qabstractspinbox_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractSpinBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qabstractspinbox_initpainter_isbase) {
            qabstractspinbox_initpainter_isbase = false;
            QAbstractSpinBox::initPainter(painter);
            return;
        }
        auto initpainter_cb = qabstractspinbox_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qabstractspinbox_redirected_isbase) {
            qabstractspinbox_redirected_isbase = false;
            return QAbstractSpinBox::redirected(offset);
        }
        auto redirected_cb = qabstractspinbox_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractSpinBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qabstractspinbox_sharedpainter_isbase) {
            qabstractspinbox_sharedpainter_isbase = false;
            return QAbstractSpinBox::sharedPainter();
        }
        auto sharedpainter_cb = qabstractspinbox_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QAbstractSpinBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qabstractspinbox_inputmethodevent_isbase) {
            qabstractspinbox_inputmethodevent_isbase = false;
            QAbstractSpinBox::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qabstractspinbox_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qabstractspinbox_focusnextprevchild_isbase) {
            qabstractspinbox_focusnextprevchild_isbase = false;
            return QAbstractSpinBox::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qabstractspinbox_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractSpinBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstractspinbox_eventfilter_isbase) {
            qabstractspinbox_eventfilter_isbase = false;
            return QAbstractSpinBox::eventFilter(watched, event);
        }
        auto eventfilter_cb = qabstractspinbox_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractSpinBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractspinbox_childevent_isbase) {
            qabstractspinbox_childevent_isbase = false;
            QAbstractSpinBox::childEvent(event);
            return;
        }
        auto childevent_cb = qabstractspinbox_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractspinbox_customevent_isbase) {
            qabstractspinbox_customevent_isbase = false;
            QAbstractSpinBox::customEvent(event);
            return;
        }
        auto customevent_cb = qabstractspinbox_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractspinbox_connectnotify_isbase) {
            qabstractspinbox_connectnotify_isbase = false;
            QAbstractSpinBox::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qabstractspinbox_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractspinbox_disconnectnotify_isbase) {
            qabstractspinbox_disconnectnotify_isbase = false;
            QAbstractSpinBox::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qabstractspinbox_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QLineEdit* lineEdit() const {
        if (qabstractspinbox_lineedit_isbase) {
            qabstractspinbox_lineedit_isbase = false;
            return QAbstractSpinBox::lineEdit();
        }
        auto lineedit_cb = qabstractspinbox_lineedit_callback;
        if (lineedit_cb) {
            QLineEdit* callback_ret = lineedit_cb();
            return callback_ret;
        }
        return QAbstractSpinBox::lineEdit();
    }

    // Virtual method for C ABI access and custom callback
    void setLineEdit(QLineEdit* edit) {
        if (qabstractspinbox_setlineedit_isbase) {
            qabstractspinbox_setlineedit_isbase = false;
            QAbstractSpinBox::setLineEdit(edit);
            return;
        }
        auto setlineedit_cb = qabstractspinbox_setlineedit_callback;
        if (setlineedit_cb) {
            QLineEdit* cbval1 = edit;

            setlineedit_cb(this, cbval1);
            return;
        }
        QAbstractSpinBox::setLineEdit(edit);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qabstractspinbox_updatemicrofocus_isbase) {
            qabstractspinbox_updatemicrofocus_isbase = false;
            QAbstractSpinBox::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qabstractspinbox_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QAbstractSpinBox::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qabstractspinbox_create_isbase) {
            qabstractspinbox_create_isbase = false;
            QAbstractSpinBox::create();
            return;
        }
        auto create_cb = qabstractspinbox_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QAbstractSpinBox::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qabstractspinbox_destroy_isbase) {
            qabstractspinbox_destroy_isbase = false;
            QAbstractSpinBox::destroy();
            return;
        }
        auto destroy_cb = qabstractspinbox_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QAbstractSpinBox::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qabstractspinbox_focusnextchild_isbase) {
            qabstractspinbox_focusnextchild_isbase = false;
            return QAbstractSpinBox::focusNextChild();
        }
        auto focusnextchild_cb = qabstractspinbox_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QAbstractSpinBox::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qabstractspinbox_focuspreviouschild_isbase) {
            qabstractspinbox_focuspreviouschild_isbase = false;
            return QAbstractSpinBox::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qabstractspinbox_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QAbstractSpinBox::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qabstractspinbox_sender_isbase) {
            qabstractspinbox_sender_isbase = false;
            return QAbstractSpinBox::sender();
        }
        auto sender_cb = qabstractspinbox_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QAbstractSpinBox::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qabstractspinbox_sendersignalindex_isbase) {
            qabstractspinbox_sendersignalindex_isbase = false;
            return QAbstractSpinBox::senderSignalIndex();
        }
        auto sendersignalindex_cb = qabstractspinbox_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QAbstractSpinBox::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qabstractspinbox_receivers_isbase) {
            qabstractspinbox_receivers_isbase = false;
            return QAbstractSpinBox::receivers(signal);
        }
        auto receivers_cb = qabstractspinbox_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractSpinBox::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qabstractspinbox_issignalconnected_isbase) {
            qabstractspinbox_issignalconnected_isbase = false;
            return QAbstractSpinBox::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qabstractspinbox_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractSpinBox::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qabstractspinbox_getdecodedmetricf_isbase) {
            qabstractspinbox_getdecodedmetricf_isbase = false;
            return QAbstractSpinBox::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qabstractspinbox_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QAbstractSpinBox::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void QAbstractSpinBox_ResizeEvent(QAbstractSpinBox* self, QResizeEvent* event);
    friend void QAbstractSpinBox_SuperResizeEvent(QAbstractSpinBox* self, QResizeEvent* event);
    friend void QAbstractSpinBox_KeyPressEvent(QAbstractSpinBox* self, QKeyEvent* event);
    friend void QAbstractSpinBox_SuperKeyPressEvent(QAbstractSpinBox* self, QKeyEvent* event);
    friend void QAbstractSpinBox_KeyReleaseEvent(QAbstractSpinBox* self, QKeyEvent* event);
    friend void QAbstractSpinBox_SuperKeyReleaseEvent(QAbstractSpinBox* self, QKeyEvent* event);
    friend void QAbstractSpinBox_WheelEvent(QAbstractSpinBox* self, QWheelEvent* event);
    friend void QAbstractSpinBox_SuperWheelEvent(QAbstractSpinBox* self, QWheelEvent* event);
    friend void QAbstractSpinBox_FocusInEvent(QAbstractSpinBox* self, QFocusEvent* event);
    friend void QAbstractSpinBox_SuperFocusInEvent(QAbstractSpinBox* self, QFocusEvent* event);
    friend void QAbstractSpinBox_FocusOutEvent(QAbstractSpinBox* self, QFocusEvent* event);
    friend void QAbstractSpinBox_SuperFocusOutEvent(QAbstractSpinBox* self, QFocusEvent* event);
    friend void QAbstractSpinBox_ContextMenuEvent(QAbstractSpinBox* self, QContextMenuEvent* event);
    friend void QAbstractSpinBox_SuperContextMenuEvent(QAbstractSpinBox* self, QContextMenuEvent* event);
    friend void QAbstractSpinBox_ChangeEvent(QAbstractSpinBox* self, QEvent* event);
    friend void QAbstractSpinBox_SuperChangeEvent(QAbstractSpinBox* self, QEvent* event);
    friend void QAbstractSpinBox_CloseEvent(QAbstractSpinBox* self, QCloseEvent* event);
    friend void QAbstractSpinBox_SuperCloseEvent(QAbstractSpinBox* self, QCloseEvent* event);
    friend void QAbstractSpinBox_HideEvent(QAbstractSpinBox* self, QHideEvent* event);
    friend void QAbstractSpinBox_SuperHideEvent(QAbstractSpinBox* self, QHideEvent* event);
    friend void QAbstractSpinBox_MousePressEvent(QAbstractSpinBox* self, QMouseEvent* event);
    friend void QAbstractSpinBox_SuperMousePressEvent(QAbstractSpinBox* self, QMouseEvent* event);
    friend void QAbstractSpinBox_MouseReleaseEvent(QAbstractSpinBox* self, QMouseEvent* event);
    friend void QAbstractSpinBox_SuperMouseReleaseEvent(QAbstractSpinBox* self, QMouseEvent* event);
    friend void QAbstractSpinBox_MouseMoveEvent(QAbstractSpinBox* self, QMouseEvent* event);
    friend void QAbstractSpinBox_SuperMouseMoveEvent(QAbstractSpinBox* self, QMouseEvent* event);
    friend void QAbstractSpinBox_TimerEvent(QAbstractSpinBox* self, QTimerEvent* event);
    friend void QAbstractSpinBox_SuperTimerEvent(QAbstractSpinBox* self, QTimerEvent* event);
    friend void QAbstractSpinBox_PaintEvent(QAbstractSpinBox* self, QPaintEvent* event);
    friend void QAbstractSpinBox_SuperPaintEvent(QAbstractSpinBox* self, QPaintEvent* event);
    friend void QAbstractSpinBox_ShowEvent(QAbstractSpinBox* self, QShowEvent* event);
    friend void QAbstractSpinBox_SuperShowEvent(QAbstractSpinBox* self, QShowEvent* event);
    friend void QAbstractSpinBox_InitStyleOption(const QAbstractSpinBox* self, QStyleOptionSpinBox* option);
    friend void QAbstractSpinBox_SuperInitStyleOption(const QAbstractSpinBox* self, QStyleOptionSpinBox* option);
    friend int QAbstractSpinBox_StepEnabled(const QAbstractSpinBox* self);
    friend int QAbstractSpinBox_SuperStepEnabled(const QAbstractSpinBox* self);
    friend void QAbstractSpinBox_MouseDoubleClickEvent(QAbstractSpinBox* self, QMouseEvent* event);
    friend void QAbstractSpinBox_SuperMouseDoubleClickEvent(QAbstractSpinBox* self, QMouseEvent* event);
    friend void QAbstractSpinBox_EnterEvent(QAbstractSpinBox* self, QEnterEvent* event);
    friend void QAbstractSpinBox_SuperEnterEvent(QAbstractSpinBox* self, QEnterEvent* event);
    friend void QAbstractSpinBox_LeaveEvent(QAbstractSpinBox* self, QEvent* event);
    friend void QAbstractSpinBox_SuperLeaveEvent(QAbstractSpinBox* self, QEvent* event);
    friend void QAbstractSpinBox_MoveEvent(QAbstractSpinBox* self, QMoveEvent* event);
    friend void QAbstractSpinBox_SuperMoveEvent(QAbstractSpinBox* self, QMoveEvent* event);
    friend void QAbstractSpinBox_TabletEvent(QAbstractSpinBox* self, QTabletEvent* event);
    friend void QAbstractSpinBox_SuperTabletEvent(QAbstractSpinBox* self, QTabletEvent* event);
    friend void QAbstractSpinBox_ActionEvent(QAbstractSpinBox* self, QActionEvent* event);
    friend void QAbstractSpinBox_SuperActionEvent(QAbstractSpinBox* self, QActionEvent* event);
    friend void QAbstractSpinBox_DragEnterEvent(QAbstractSpinBox* self, QDragEnterEvent* event);
    friend void QAbstractSpinBox_SuperDragEnterEvent(QAbstractSpinBox* self, QDragEnterEvent* event);
    friend void QAbstractSpinBox_DragMoveEvent(QAbstractSpinBox* self, QDragMoveEvent* event);
    friend void QAbstractSpinBox_SuperDragMoveEvent(QAbstractSpinBox* self, QDragMoveEvent* event);
    friend void QAbstractSpinBox_DragLeaveEvent(QAbstractSpinBox* self, QDragLeaveEvent* event);
    friend void QAbstractSpinBox_SuperDragLeaveEvent(QAbstractSpinBox* self, QDragLeaveEvent* event);
    friend void QAbstractSpinBox_DropEvent(QAbstractSpinBox* self, QDropEvent* event);
    friend void QAbstractSpinBox_SuperDropEvent(QAbstractSpinBox* self, QDropEvent* event);
    friend bool QAbstractSpinBox_NativeEvent(QAbstractSpinBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QAbstractSpinBox_SuperNativeEvent(QAbstractSpinBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QAbstractSpinBox_Metric(const QAbstractSpinBox* self, int param1);
    friend int QAbstractSpinBox_SuperMetric(const QAbstractSpinBox* self, int param1);
    friend void QAbstractSpinBox_InitPainter(const QAbstractSpinBox* self, QPainter* painter);
    friend void QAbstractSpinBox_SuperInitPainter(const QAbstractSpinBox* self, QPainter* painter);
    friend QPaintDevice* QAbstractSpinBox_Redirected(const QAbstractSpinBox* self, QPoint* offset);
    friend QPaintDevice* QAbstractSpinBox_SuperRedirected(const QAbstractSpinBox* self, QPoint* offset);
    friend QPainter* QAbstractSpinBox_SharedPainter(const QAbstractSpinBox* self);
    friend QPainter* QAbstractSpinBox_SuperSharedPainter(const QAbstractSpinBox* self);
    friend void QAbstractSpinBox_InputMethodEvent(QAbstractSpinBox* self, QInputMethodEvent* param1);
    friend void QAbstractSpinBox_SuperInputMethodEvent(QAbstractSpinBox* self, QInputMethodEvent* param1);
    friend bool QAbstractSpinBox_FocusNextPrevChild(QAbstractSpinBox* self, bool next);
    friend bool QAbstractSpinBox_SuperFocusNextPrevChild(QAbstractSpinBox* self, bool next);
    friend void QAbstractSpinBox_ChildEvent(QAbstractSpinBox* self, QChildEvent* event);
    friend void QAbstractSpinBox_SuperChildEvent(QAbstractSpinBox* self, QChildEvent* event);
    friend void QAbstractSpinBox_CustomEvent(QAbstractSpinBox* self, QEvent* event);
    friend void QAbstractSpinBox_SuperCustomEvent(QAbstractSpinBox* self, QEvent* event);
    friend void QAbstractSpinBox_ConnectNotify(QAbstractSpinBox* self, const QMetaMethod* signal);
    friend void QAbstractSpinBox_SuperConnectNotify(QAbstractSpinBox* self, const QMetaMethod* signal);
    friend void QAbstractSpinBox_DisconnectNotify(QAbstractSpinBox* self, const QMetaMethod* signal);
    friend void QAbstractSpinBox_SuperDisconnectNotify(QAbstractSpinBox* self, const QMetaMethod* signal);
    friend QLineEdit* QAbstractSpinBox_LineEdit(const QAbstractSpinBox* self);
    friend QLineEdit* QAbstractSpinBox_SuperLineEdit(const QAbstractSpinBox* self);
    friend void QAbstractSpinBox_SetLineEdit(QAbstractSpinBox* self, QLineEdit* edit);
    friend void QAbstractSpinBox_SuperSetLineEdit(QAbstractSpinBox* self, QLineEdit* edit);
    friend void QAbstractSpinBox_UpdateMicroFocus(QAbstractSpinBox* self);
    friend void QAbstractSpinBox_SuperUpdateMicroFocus(QAbstractSpinBox* self);
    friend void QAbstractSpinBox_Create(QAbstractSpinBox* self);
    friend void QAbstractSpinBox_SuperCreate(QAbstractSpinBox* self);
    friend void QAbstractSpinBox_Destroy(QAbstractSpinBox* self);
    friend void QAbstractSpinBox_SuperDestroy(QAbstractSpinBox* self);
    friend bool QAbstractSpinBox_FocusNextChild(QAbstractSpinBox* self);
    friend bool QAbstractSpinBox_SuperFocusNextChild(QAbstractSpinBox* self);
    friend bool QAbstractSpinBox_FocusPreviousChild(QAbstractSpinBox* self);
    friend bool QAbstractSpinBox_SuperFocusPreviousChild(QAbstractSpinBox* self);
    friend QObject* QAbstractSpinBox_Sender(const QAbstractSpinBox* self);
    friend QObject* QAbstractSpinBox_SuperSender(const QAbstractSpinBox* self);
    friend int QAbstractSpinBox_SenderSignalIndex(const QAbstractSpinBox* self);
    friend int QAbstractSpinBox_SuperSenderSignalIndex(const QAbstractSpinBox* self);
    friend int QAbstractSpinBox_Receivers(const QAbstractSpinBox* self, const char* signal);
    friend int QAbstractSpinBox_SuperReceivers(const QAbstractSpinBox* self, const char* signal);
    friend bool QAbstractSpinBox_IsSignalConnected(const QAbstractSpinBox* self, const QMetaMethod* signal);
    friend bool QAbstractSpinBox_SuperIsSignalConnected(const QAbstractSpinBox* self, const QMetaMethod* signal);
    friend double QAbstractSpinBox_GetDecodedMetricF(const QAbstractSpinBox* self, int metricA, int metricB);
    friend double QAbstractSpinBox_SuperGetDecodedMetricF(const QAbstractSpinBox* self, int metricA, int metricB);
};

#endif
