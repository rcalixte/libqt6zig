#pragma once
#ifndef SRCC_LIBVIRTUALQDATETIMEEDIT_H
#define SRCC_LIBVIRTUALQDATETIMEEDIT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QDateTimeEdit so that we can call protected methods
class VirtualQDateTimeEdit final : public QDateTimeEdit {

  public:
    // Virtual class boolean flag
    bool isVirtualQDateTimeEdit = true;

    // Virtual class public types (including callbacks)
    using QDateTimeEdit_MetaObject_Callback = QMetaObject* (*)();
    using QDateTimeEdit_Metacast_Callback = void* (*)(QDateTimeEdit*, const char*);
    using QDateTimeEdit_Metacall_Callback = int (*)(QDateTimeEdit*, int, int, void**);
    using QDateTimeEdit_SizeHint_Callback = QSize* (*)();
    using QDateTimeEdit_Clear_Callback = void (*)();
    using QDateTimeEdit_StepBy_Callback = void (*)(QDateTimeEdit*, int);
    using QDateTimeEdit_Event_Callback = bool (*)(QDateTimeEdit*, QEvent*);
    using QDateTimeEdit_KeyPressEvent_Callback = void (*)(QDateTimeEdit*, QKeyEvent*);
    using QDateTimeEdit_WheelEvent_Callback = void (*)(QDateTimeEdit*, QWheelEvent*);
    using QDateTimeEdit_FocusInEvent_Callback = void (*)(QDateTimeEdit*, QFocusEvent*);
    using QDateTimeEdit_FocusNextPrevChild_Callback = bool (*)(QDateTimeEdit*, bool);
    using QDateTimeEdit_Validate_Callback = int (*)(const QDateTimeEdit*, const char*, int*);
    using QDateTimeEdit_Fixup_Callback = void (*)(const QDateTimeEdit*, const char*);
    using QDateTimeEdit_DateTimeFromText_Callback = QDateTime* (*)(const QDateTimeEdit*, const char*);
    using QDateTimeEdit_TextFromDateTime_Callback = const char* (*)(const QDateTimeEdit*, QDateTime*);
    using QDateTimeEdit_StepEnabled_Callback = int (*)();
    using QDateTimeEdit_MousePressEvent_Callback = void (*)(QDateTimeEdit*, QMouseEvent*);
    using QDateTimeEdit_PaintEvent_Callback = void (*)(QDateTimeEdit*, QPaintEvent*);
    using QDateTimeEdit_InitStyleOption_Callback = void (*)(const QDateTimeEdit*, QStyleOptionSpinBox*);
    using QDateTimeEdit_MinimumSizeHint_Callback = QSize* (*)();
    using QDateTimeEdit_InputMethodQuery_Callback = QVariant* (*)(const QDateTimeEdit*, int);
    using QDateTimeEdit_ResizeEvent_Callback = void (*)(QDateTimeEdit*, QResizeEvent*);
    using QDateTimeEdit_KeyReleaseEvent_Callback = void (*)(QDateTimeEdit*, QKeyEvent*);
    using QDateTimeEdit_FocusOutEvent_Callback = void (*)(QDateTimeEdit*, QFocusEvent*);
    using QDateTimeEdit_ContextMenuEvent_Callback = void (*)(QDateTimeEdit*, QContextMenuEvent*);
    using QDateTimeEdit_ChangeEvent_Callback = void (*)(QDateTimeEdit*, QEvent*);
    using QDateTimeEdit_CloseEvent_Callback = void (*)(QDateTimeEdit*, QCloseEvent*);
    using QDateTimeEdit_HideEvent_Callback = void (*)(QDateTimeEdit*, QHideEvent*);
    using QDateTimeEdit_MouseReleaseEvent_Callback = void (*)(QDateTimeEdit*, QMouseEvent*);
    using QDateTimeEdit_MouseMoveEvent_Callback = void (*)(QDateTimeEdit*, QMouseEvent*);
    using QDateTimeEdit_TimerEvent_Callback = void (*)(QDateTimeEdit*, QTimerEvent*);
    using QDateTimeEdit_ShowEvent_Callback = void (*)(QDateTimeEdit*, QShowEvent*);
    using QDateTimeEdit_DevType_Callback = int (*)();
    using QDateTimeEdit_SetVisible_Callback = void (*)(QDateTimeEdit*, bool);
    using QDateTimeEdit_HeightForWidth_Callback = int (*)(const QDateTimeEdit*, int);
    using QDateTimeEdit_HasHeightForWidth_Callback = bool (*)();
    using QDateTimeEdit_PaintEngine_Callback = QPaintEngine* (*)();
    using QDateTimeEdit_MouseDoubleClickEvent_Callback = void (*)(QDateTimeEdit*, QMouseEvent*);
    using QDateTimeEdit_EnterEvent_Callback = void (*)(QDateTimeEdit*, QEnterEvent*);
    using QDateTimeEdit_LeaveEvent_Callback = void (*)(QDateTimeEdit*, QEvent*);
    using QDateTimeEdit_MoveEvent_Callback = void (*)(QDateTimeEdit*, QMoveEvent*);
    using QDateTimeEdit_TabletEvent_Callback = void (*)(QDateTimeEdit*, QTabletEvent*);
    using QDateTimeEdit_ActionEvent_Callback = void (*)(QDateTimeEdit*, QActionEvent*);
    using QDateTimeEdit_DragEnterEvent_Callback = void (*)(QDateTimeEdit*, QDragEnterEvent*);
    using QDateTimeEdit_DragMoveEvent_Callback = void (*)(QDateTimeEdit*, QDragMoveEvent*);
    using QDateTimeEdit_DragLeaveEvent_Callback = void (*)(QDateTimeEdit*, QDragLeaveEvent*);
    using QDateTimeEdit_DropEvent_Callback = void (*)(QDateTimeEdit*, QDropEvent*);
    using QDateTimeEdit_NativeEvent_Callback = bool (*)(QDateTimeEdit*, libqt_string, void*, intptr_t*);
    using QDateTimeEdit_Metric_Callback = int (*)(const QDateTimeEdit*, int);
    using QDateTimeEdit_InitPainter_Callback = void (*)(const QDateTimeEdit*, QPainter*);
    using QDateTimeEdit_Redirected_Callback = QPaintDevice* (*)(const QDateTimeEdit*, QPoint*);
    using QDateTimeEdit_SharedPainter_Callback = QPainter* (*)();
    using QDateTimeEdit_InputMethodEvent_Callback = void (*)(QDateTimeEdit*, QInputMethodEvent*);
    using QDateTimeEdit_EventFilter_Callback = bool (*)(QDateTimeEdit*, QObject*, QEvent*);
    using QDateTimeEdit_ChildEvent_Callback = void (*)(QDateTimeEdit*, QChildEvent*);
    using QDateTimeEdit_CustomEvent_Callback = void (*)(QDateTimeEdit*, QEvent*);
    using QDateTimeEdit_ConnectNotify_Callback = void (*)(QDateTimeEdit*, QMetaMethod*);
    using QDateTimeEdit_DisconnectNotify_Callback = void (*)(QDateTimeEdit*, QMetaMethod*);
    using QDateTimeEdit_LineEdit_Callback = QLineEdit* (*)();
    using QDateTimeEdit_SetLineEdit_Callback = void (*)(QDateTimeEdit*, QLineEdit*);
    using QDateTimeEdit_UpdateMicroFocus_Callback = void (*)();
    using QDateTimeEdit_Create_Callback = void (*)();
    using QDateTimeEdit_Destroy_Callback = void (*)();
    using QDateTimeEdit_FocusNextChild_Callback = bool (*)();
    using QDateTimeEdit_FocusPreviousChild_Callback = bool (*)();
    using QDateTimeEdit_Sender_Callback = QObject* (*)();
    using QDateTimeEdit_SenderSignalIndex_Callback = int (*)();
    using QDateTimeEdit_Receivers_Callback = int (*)(const QDateTimeEdit*, const char*);
    using QDateTimeEdit_IsSignalConnected_Callback = bool (*)(const QDateTimeEdit*, QMetaMethod*);
    using QDateTimeEdit_GetDecodedMetricF_Callback = double (*)(const QDateTimeEdit*, int, int);

  protected:
    // Instance callback storage
    QDateTimeEdit_MetaObject_Callback qdatetimeedit_metaobject_callback = nullptr;
    QDateTimeEdit_Metacast_Callback qdatetimeedit_metacast_callback = nullptr;
    QDateTimeEdit_Metacall_Callback qdatetimeedit_metacall_callback = nullptr;
    QDateTimeEdit_SizeHint_Callback qdatetimeedit_sizehint_callback = nullptr;
    QDateTimeEdit_Clear_Callback qdatetimeedit_clear_callback = nullptr;
    QDateTimeEdit_StepBy_Callback qdatetimeedit_stepby_callback = nullptr;
    QDateTimeEdit_Event_Callback qdatetimeedit_event_callback = nullptr;
    QDateTimeEdit_KeyPressEvent_Callback qdatetimeedit_keypressevent_callback = nullptr;
    QDateTimeEdit_WheelEvent_Callback qdatetimeedit_wheelevent_callback = nullptr;
    QDateTimeEdit_FocusInEvent_Callback qdatetimeedit_focusinevent_callback = nullptr;
    QDateTimeEdit_FocusNextPrevChild_Callback qdatetimeedit_focusnextprevchild_callback = nullptr;
    QDateTimeEdit_Validate_Callback qdatetimeedit_validate_callback = nullptr;
    QDateTimeEdit_Fixup_Callback qdatetimeedit_fixup_callback = nullptr;
    QDateTimeEdit_DateTimeFromText_Callback qdatetimeedit_datetimefromtext_callback = nullptr;
    QDateTimeEdit_TextFromDateTime_Callback qdatetimeedit_textfromdatetime_callback = nullptr;
    QDateTimeEdit_StepEnabled_Callback qdatetimeedit_stepenabled_callback = nullptr;
    QDateTimeEdit_MousePressEvent_Callback qdatetimeedit_mousepressevent_callback = nullptr;
    QDateTimeEdit_PaintEvent_Callback qdatetimeedit_paintevent_callback = nullptr;
    QDateTimeEdit_InitStyleOption_Callback qdatetimeedit_initstyleoption_callback = nullptr;
    QDateTimeEdit_MinimumSizeHint_Callback qdatetimeedit_minimumsizehint_callback = nullptr;
    QDateTimeEdit_InputMethodQuery_Callback qdatetimeedit_inputmethodquery_callback = nullptr;
    QDateTimeEdit_ResizeEvent_Callback qdatetimeedit_resizeevent_callback = nullptr;
    QDateTimeEdit_KeyReleaseEvent_Callback qdatetimeedit_keyreleaseevent_callback = nullptr;
    QDateTimeEdit_FocusOutEvent_Callback qdatetimeedit_focusoutevent_callback = nullptr;
    QDateTimeEdit_ContextMenuEvent_Callback qdatetimeedit_contextmenuevent_callback = nullptr;
    QDateTimeEdit_ChangeEvent_Callback qdatetimeedit_changeevent_callback = nullptr;
    QDateTimeEdit_CloseEvent_Callback qdatetimeedit_closeevent_callback = nullptr;
    QDateTimeEdit_HideEvent_Callback qdatetimeedit_hideevent_callback = nullptr;
    QDateTimeEdit_MouseReleaseEvent_Callback qdatetimeedit_mousereleaseevent_callback = nullptr;
    QDateTimeEdit_MouseMoveEvent_Callback qdatetimeedit_mousemoveevent_callback = nullptr;
    QDateTimeEdit_TimerEvent_Callback qdatetimeedit_timerevent_callback = nullptr;
    QDateTimeEdit_ShowEvent_Callback qdatetimeedit_showevent_callback = nullptr;
    QDateTimeEdit_DevType_Callback qdatetimeedit_devtype_callback = nullptr;
    QDateTimeEdit_SetVisible_Callback qdatetimeedit_setvisible_callback = nullptr;
    QDateTimeEdit_HeightForWidth_Callback qdatetimeedit_heightforwidth_callback = nullptr;
    QDateTimeEdit_HasHeightForWidth_Callback qdatetimeedit_hasheightforwidth_callback = nullptr;
    QDateTimeEdit_PaintEngine_Callback qdatetimeedit_paintengine_callback = nullptr;
    QDateTimeEdit_MouseDoubleClickEvent_Callback qdatetimeedit_mousedoubleclickevent_callback = nullptr;
    QDateTimeEdit_EnterEvent_Callback qdatetimeedit_enterevent_callback = nullptr;
    QDateTimeEdit_LeaveEvent_Callback qdatetimeedit_leaveevent_callback = nullptr;
    QDateTimeEdit_MoveEvent_Callback qdatetimeedit_moveevent_callback = nullptr;
    QDateTimeEdit_TabletEvent_Callback qdatetimeedit_tabletevent_callback = nullptr;
    QDateTimeEdit_ActionEvent_Callback qdatetimeedit_actionevent_callback = nullptr;
    QDateTimeEdit_DragEnterEvent_Callback qdatetimeedit_dragenterevent_callback = nullptr;
    QDateTimeEdit_DragMoveEvent_Callback qdatetimeedit_dragmoveevent_callback = nullptr;
    QDateTimeEdit_DragLeaveEvent_Callback qdatetimeedit_dragleaveevent_callback = nullptr;
    QDateTimeEdit_DropEvent_Callback qdatetimeedit_dropevent_callback = nullptr;
    QDateTimeEdit_NativeEvent_Callback qdatetimeedit_nativeevent_callback = nullptr;
    QDateTimeEdit_Metric_Callback qdatetimeedit_metric_callback = nullptr;
    QDateTimeEdit_InitPainter_Callback qdatetimeedit_initpainter_callback = nullptr;
    QDateTimeEdit_Redirected_Callback qdatetimeedit_redirected_callback = nullptr;
    QDateTimeEdit_SharedPainter_Callback qdatetimeedit_sharedpainter_callback = nullptr;
    QDateTimeEdit_InputMethodEvent_Callback qdatetimeedit_inputmethodevent_callback = nullptr;
    QDateTimeEdit_EventFilter_Callback qdatetimeedit_eventfilter_callback = nullptr;
    QDateTimeEdit_ChildEvent_Callback qdatetimeedit_childevent_callback = nullptr;
    QDateTimeEdit_CustomEvent_Callback qdatetimeedit_customevent_callback = nullptr;
    QDateTimeEdit_ConnectNotify_Callback qdatetimeedit_connectnotify_callback = nullptr;
    QDateTimeEdit_DisconnectNotify_Callback qdatetimeedit_disconnectnotify_callback = nullptr;
    QDateTimeEdit_LineEdit_Callback qdatetimeedit_lineedit_callback = nullptr;
    QDateTimeEdit_SetLineEdit_Callback qdatetimeedit_setlineedit_callback = nullptr;
    QDateTimeEdit_UpdateMicroFocus_Callback qdatetimeedit_updatemicrofocus_callback = nullptr;
    QDateTimeEdit_Create_Callback qdatetimeedit_create_callback = nullptr;
    QDateTimeEdit_Destroy_Callback qdatetimeedit_destroy_callback = nullptr;
    QDateTimeEdit_FocusNextChild_Callback qdatetimeedit_focusnextchild_callback = nullptr;
    QDateTimeEdit_FocusPreviousChild_Callback qdatetimeedit_focuspreviouschild_callback = nullptr;
    QDateTimeEdit_Sender_Callback qdatetimeedit_sender_callback = nullptr;
    QDateTimeEdit_SenderSignalIndex_Callback qdatetimeedit_sendersignalindex_callback = nullptr;
    QDateTimeEdit_Receivers_Callback qdatetimeedit_receivers_callback = nullptr;
    QDateTimeEdit_IsSignalConnected_Callback qdatetimeedit_issignalconnected_callback = nullptr;
    QDateTimeEdit_GetDecodedMetricF_Callback qdatetimeedit_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qdatetimeedit_metaobject_isbase = false;
    mutable bool qdatetimeedit_metacast_isbase = false;
    mutable bool qdatetimeedit_metacall_isbase = false;
    mutable bool qdatetimeedit_sizehint_isbase = false;
    mutable bool qdatetimeedit_clear_isbase = false;
    mutable bool qdatetimeedit_stepby_isbase = false;
    mutable bool qdatetimeedit_event_isbase = false;
    mutable bool qdatetimeedit_keypressevent_isbase = false;
    mutable bool qdatetimeedit_wheelevent_isbase = false;
    mutable bool qdatetimeedit_focusinevent_isbase = false;
    mutable bool qdatetimeedit_focusnextprevchild_isbase = false;
    mutable bool qdatetimeedit_validate_isbase = false;
    mutable bool qdatetimeedit_fixup_isbase = false;
    mutable bool qdatetimeedit_datetimefromtext_isbase = false;
    mutable bool qdatetimeedit_textfromdatetime_isbase = false;
    mutable bool qdatetimeedit_stepenabled_isbase = false;
    mutable bool qdatetimeedit_mousepressevent_isbase = false;
    mutable bool qdatetimeedit_paintevent_isbase = false;
    mutable bool qdatetimeedit_initstyleoption_isbase = false;
    mutable bool qdatetimeedit_minimumsizehint_isbase = false;
    mutable bool qdatetimeedit_inputmethodquery_isbase = false;
    mutable bool qdatetimeedit_resizeevent_isbase = false;
    mutable bool qdatetimeedit_keyreleaseevent_isbase = false;
    mutable bool qdatetimeedit_focusoutevent_isbase = false;
    mutable bool qdatetimeedit_contextmenuevent_isbase = false;
    mutable bool qdatetimeedit_changeevent_isbase = false;
    mutable bool qdatetimeedit_closeevent_isbase = false;
    mutable bool qdatetimeedit_hideevent_isbase = false;
    mutable bool qdatetimeedit_mousereleaseevent_isbase = false;
    mutable bool qdatetimeedit_mousemoveevent_isbase = false;
    mutable bool qdatetimeedit_timerevent_isbase = false;
    mutable bool qdatetimeedit_showevent_isbase = false;
    mutable bool qdatetimeedit_devtype_isbase = false;
    mutable bool qdatetimeedit_setvisible_isbase = false;
    mutable bool qdatetimeedit_heightforwidth_isbase = false;
    mutable bool qdatetimeedit_hasheightforwidth_isbase = false;
    mutable bool qdatetimeedit_paintengine_isbase = false;
    mutable bool qdatetimeedit_mousedoubleclickevent_isbase = false;
    mutable bool qdatetimeedit_enterevent_isbase = false;
    mutable bool qdatetimeedit_leaveevent_isbase = false;
    mutable bool qdatetimeedit_moveevent_isbase = false;
    mutable bool qdatetimeedit_tabletevent_isbase = false;
    mutable bool qdatetimeedit_actionevent_isbase = false;
    mutable bool qdatetimeedit_dragenterevent_isbase = false;
    mutable bool qdatetimeedit_dragmoveevent_isbase = false;
    mutable bool qdatetimeedit_dragleaveevent_isbase = false;
    mutable bool qdatetimeedit_dropevent_isbase = false;
    mutable bool qdatetimeedit_nativeevent_isbase = false;
    mutable bool qdatetimeedit_metric_isbase = false;
    mutable bool qdatetimeedit_initpainter_isbase = false;
    mutable bool qdatetimeedit_redirected_isbase = false;
    mutable bool qdatetimeedit_sharedpainter_isbase = false;
    mutable bool qdatetimeedit_inputmethodevent_isbase = false;
    mutable bool qdatetimeedit_eventfilter_isbase = false;
    mutable bool qdatetimeedit_childevent_isbase = false;
    mutable bool qdatetimeedit_customevent_isbase = false;
    mutable bool qdatetimeedit_connectnotify_isbase = false;
    mutable bool qdatetimeedit_disconnectnotify_isbase = false;
    mutable bool qdatetimeedit_lineedit_isbase = false;
    mutable bool qdatetimeedit_setlineedit_isbase = false;
    mutable bool qdatetimeedit_updatemicrofocus_isbase = false;
    mutable bool qdatetimeedit_create_isbase = false;
    mutable bool qdatetimeedit_destroy_isbase = false;
    mutable bool qdatetimeedit_focusnextchild_isbase = false;
    mutable bool qdatetimeedit_focuspreviouschild_isbase = false;
    mutable bool qdatetimeedit_sender_isbase = false;
    mutable bool qdatetimeedit_sendersignalindex_isbase = false;
    mutable bool qdatetimeedit_receivers_isbase = false;
    mutable bool qdatetimeedit_issignalconnected_isbase = false;
    mutable bool qdatetimeedit_getdecodedmetricf_isbase = false;

  public:
    VirtualQDateTimeEdit(QWidget* parent) : QDateTimeEdit(parent) {};
    VirtualQDateTimeEdit() : QDateTimeEdit() {};
    VirtualQDateTimeEdit(const QDateTime& dt) : QDateTimeEdit(dt) {};
    VirtualQDateTimeEdit(QDate d) : QDateTimeEdit(d) {};
    VirtualQDateTimeEdit(QTime t) : QDateTimeEdit(t) {};
    VirtualQDateTimeEdit(const QDateTime& dt, QWidget* parent) : QDateTimeEdit(dt, parent) {};
    VirtualQDateTimeEdit(QDate d, QWidget* parent) : QDateTimeEdit(d, parent) {};
    VirtualQDateTimeEdit(QTime t, QWidget* parent) : QDateTimeEdit(t, parent) {};

    // Callback setters
    inline void setQDateTimeEdit_MetaObject_Callback(QDateTimeEdit_MetaObject_Callback cb) { qdatetimeedit_metaobject_callback = cb; }
    inline void setQDateTimeEdit_Metacast_Callback(QDateTimeEdit_Metacast_Callback cb) { qdatetimeedit_metacast_callback = cb; }
    inline void setQDateTimeEdit_Metacall_Callback(QDateTimeEdit_Metacall_Callback cb) { qdatetimeedit_metacall_callback = cb; }
    inline void setQDateTimeEdit_SizeHint_Callback(QDateTimeEdit_SizeHint_Callback cb) { qdatetimeedit_sizehint_callback = cb; }
    inline void setQDateTimeEdit_Clear_Callback(QDateTimeEdit_Clear_Callback cb) { qdatetimeedit_clear_callback = cb; }
    inline void setQDateTimeEdit_StepBy_Callback(QDateTimeEdit_StepBy_Callback cb) { qdatetimeedit_stepby_callback = cb; }
    inline void setQDateTimeEdit_Event_Callback(QDateTimeEdit_Event_Callback cb) { qdatetimeedit_event_callback = cb; }
    inline void setQDateTimeEdit_KeyPressEvent_Callback(QDateTimeEdit_KeyPressEvent_Callback cb) { qdatetimeedit_keypressevent_callback = cb; }
    inline void setQDateTimeEdit_WheelEvent_Callback(QDateTimeEdit_WheelEvent_Callback cb) { qdatetimeedit_wheelevent_callback = cb; }
    inline void setQDateTimeEdit_FocusInEvent_Callback(QDateTimeEdit_FocusInEvent_Callback cb) { qdatetimeedit_focusinevent_callback = cb; }
    inline void setQDateTimeEdit_FocusNextPrevChild_Callback(QDateTimeEdit_FocusNextPrevChild_Callback cb) { qdatetimeedit_focusnextprevchild_callback = cb; }
    inline void setQDateTimeEdit_Validate_Callback(QDateTimeEdit_Validate_Callback cb) { qdatetimeedit_validate_callback = cb; }
    inline void setQDateTimeEdit_Fixup_Callback(QDateTimeEdit_Fixup_Callback cb) { qdatetimeedit_fixup_callback = cb; }
    inline void setQDateTimeEdit_DateTimeFromText_Callback(QDateTimeEdit_DateTimeFromText_Callback cb) { qdatetimeedit_datetimefromtext_callback = cb; }
    inline void setQDateTimeEdit_TextFromDateTime_Callback(QDateTimeEdit_TextFromDateTime_Callback cb) { qdatetimeedit_textfromdatetime_callback = cb; }
    inline void setQDateTimeEdit_StepEnabled_Callback(QDateTimeEdit_StepEnabled_Callback cb) { qdatetimeedit_stepenabled_callback = cb; }
    inline void setQDateTimeEdit_MousePressEvent_Callback(QDateTimeEdit_MousePressEvent_Callback cb) { qdatetimeedit_mousepressevent_callback = cb; }
    inline void setQDateTimeEdit_PaintEvent_Callback(QDateTimeEdit_PaintEvent_Callback cb) { qdatetimeedit_paintevent_callback = cb; }
    inline void setQDateTimeEdit_InitStyleOption_Callback(QDateTimeEdit_InitStyleOption_Callback cb) { qdatetimeedit_initstyleoption_callback = cb; }
    inline void setQDateTimeEdit_MinimumSizeHint_Callback(QDateTimeEdit_MinimumSizeHint_Callback cb) { qdatetimeedit_minimumsizehint_callback = cb; }
    inline void setQDateTimeEdit_InputMethodQuery_Callback(QDateTimeEdit_InputMethodQuery_Callback cb) { qdatetimeedit_inputmethodquery_callback = cb; }
    inline void setQDateTimeEdit_ResizeEvent_Callback(QDateTimeEdit_ResizeEvent_Callback cb) { qdatetimeedit_resizeevent_callback = cb; }
    inline void setQDateTimeEdit_KeyReleaseEvent_Callback(QDateTimeEdit_KeyReleaseEvent_Callback cb) { qdatetimeedit_keyreleaseevent_callback = cb; }
    inline void setQDateTimeEdit_FocusOutEvent_Callback(QDateTimeEdit_FocusOutEvent_Callback cb) { qdatetimeedit_focusoutevent_callback = cb; }
    inline void setQDateTimeEdit_ContextMenuEvent_Callback(QDateTimeEdit_ContextMenuEvent_Callback cb) { qdatetimeedit_contextmenuevent_callback = cb; }
    inline void setQDateTimeEdit_ChangeEvent_Callback(QDateTimeEdit_ChangeEvent_Callback cb) { qdatetimeedit_changeevent_callback = cb; }
    inline void setQDateTimeEdit_CloseEvent_Callback(QDateTimeEdit_CloseEvent_Callback cb) { qdatetimeedit_closeevent_callback = cb; }
    inline void setQDateTimeEdit_HideEvent_Callback(QDateTimeEdit_HideEvent_Callback cb) { qdatetimeedit_hideevent_callback = cb; }
    inline void setQDateTimeEdit_MouseReleaseEvent_Callback(QDateTimeEdit_MouseReleaseEvent_Callback cb) { qdatetimeedit_mousereleaseevent_callback = cb; }
    inline void setQDateTimeEdit_MouseMoveEvent_Callback(QDateTimeEdit_MouseMoveEvent_Callback cb) { qdatetimeedit_mousemoveevent_callback = cb; }
    inline void setQDateTimeEdit_TimerEvent_Callback(QDateTimeEdit_TimerEvent_Callback cb) { qdatetimeedit_timerevent_callback = cb; }
    inline void setQDateTimeEdit_ShowEvent_Callback(QDateTimeEdit_ShowEvent_Callback cb) { qdatetimeedit_showevent_callback = cb; }
    inline void setQDateTimeEdit_DevType_Callback(QDateTimeEdit_DevType_Callback cb) { qdatetimeedit_devtype_callback = cb; }
    inline void setQDateTimeEdit_SetVisible_Callback(QDateTimeEdit_SetVisible_Callback cb) { qdatetimeedit_setvisible_callback = cb; }
    inline void setQDateTimeEdit_HeightForWidth_Callback(QDateTimeEdit_HeightForWidth_Callback cb) { qdatetimeedit_heightforwidth_callback = cb; }
    inline void setQDateTimeEdit_HasHeightForWidth_Callback(QDateTimeEdit_HasHeightForWidth_Callback cb) { qdatetimeedit_hasheightforwidth_callback = cb; }
    inline void setQDateTimeEdit_PaintEngine_Callback(QDateTimeEdit_PaintEngine_Callback cb) { qdatetimeedit_paintengine_callback = cb; }
    inline void setQDateTimeEdit_MouseDoubleClickEvent_Callback(QDateTimeEdit_MouseDoubleClickEvent_Callback cb) { qdatetimeedit_mousedoubleclickevent_callback = cb; }
    inline void setQDateTimeEdit_EnterEvent_Callback(QDateTimeEdit_EnterEvent_Callback cb) { qdatetimeedit_enterevent_callback = cb; }
    inline void setQDateTimeEdit_LeaveEvent_Callback(QDateTimeEdit_LeaveEvent_Callback cb) { qdatetimeedit_leaveevent_callback = cb; }
    inline void setQDateTimeEdit_MoveEvent_Callback(QDateTimeEdit_MoveEvent_Callback cb) { qdatetimeedit_moveevent_callback = cb; }
    inline void setQDateTimeEdit_TabletEvent_Callback(QDateTimeEdit_TabletEvent_Callback cb) { qdatetimeedit_tabletevent_callback = cb; }
    inline void setQDateTimeEdit_ActionEvent_Callback(QDateTimeEdit_ActionEvent_Callback cb) { qdatetimeedit_actionevent_callback = cb; }
    inline void setQDateTimeEdit_DragEnterEvent_Callback(QDateTimeEdit_DragEnterEvent_Callback cb) { qdatetimeedit_dragenterevent_callback = cb; }
    inline void setQDateTimeEdit_DragMoveEvent_Callback(QDateTimeEdit_DragMoveEvent_Callback cb) { qdatetimeedit_dragmoveevent_callback = cb; }
    inline void setQDateTimeEdit_DragLeaveEvent_Callback(QDateTimeEdit_DragLeaveEvent_Callback cb) { qdatetimeedit_dragleaveevent_callback = cb; }
    inline void setQDateTimeEdit_DropEvent_Callback(QDateTimeEdit_DropEvent_Callback cb) { qdatetimeedit_dropevent_callback = cb; }
    inline void setQDateTimeEdit_NativeEvent_Callback(QDateTimeEdit_NativeEvent_Callback cb) { qdatetimeedit_nativeevent_callback = cb; }
    inline void setQDateTimeEdit_Metric_Callback(QDateTimeEdit_Metric_Callback cb) { qdatetimeedit_metric_callback = cb; }
    inline void setQDateTimeEdit_InitPainter_Callback(QDateTimeEdit_InitPainter_Callback cb) { qdatetimeedit_initpainter_callback = cb; }
    inline void setQDateTimeEdit_Redirected_Callback(QDateTimeEdit_Redirected_Callback cb) { qdatetimeedit_redirected_callback = cb; }
    inline void setQDateTimeEdit_SharedPainter_Callback(QDateTimeEdit_SharedPainter_Callback cb) { qdatetimeedit_sharedpainter_callback = cb; }
    inline void setQDateTimeEdit_InputMethodEvent_Callback(QDateTimeEdit_InputMethodEvent_Callback cb) { qdatetimeedit_inputmethodevent_callback = cb; }
    inline void setQDateTimeEdit_EventFilter_Callback(QDateTimeEdit_EventFilter_Callback cb) { qdatetimeedit_eventfilter_callback = cb; }
    inline void setQDateTimeEdit_ChildEvent_Callback(QDateTimeEdit_ChildEvent_Callback cb) { qdatetimeedit_childevent_callback = cb; }
    inline void setQDateTimeEdit_CustomEvent_Callback(QDateTimeEdit_CustomEvent_Callback cb) { qdatetimeedit_customevent_callback = cb; }
    inline void setQDateTimeEdit_ConnectNotify_Callback(QDateTimeEdit_ConnectNotify_Callback cb) { qdatetimeedit_connectnotify_callback = cb; }
    inline void setQDateTimeEdit_DisconnectNotify_Callback(QDateTimeEdit_DisconnectNotify_Callback cb) { qdatetimeedit_disconnectnotify_callback = cb; }
    inline void setQDateTimeEdit_LineEdit_Callback(QDateTimeEdit_LineEdit_Callback cb) { qdatetimeedit_lineedit_callback = cb; }
    inline void setQDateTimeEdit_SetLineEdit_Callback(QDateTimeEdit_SetLineEdit_Callback cb) { qdatetimeedit_setlineedit_callback = cb; }
    inline void setQDateTimeEdit_UpdateMicroFocus_Callback(QDateTimeEdit_UpdateMicroFocus_Callback cb) { qdatetimeedit_updatemicrofocus_callback = cb; }
    inline void setQDateTimeEdit_Create_Callback(QDateTimeEdit_Create_Callback cb) { qdatetimeedit_create_callback = cb; }
    inline void setQDateTimeEdit_Destroy_Callback(QDateTimeEdit_Destroy_Callback cb) { qdatetimeedit_destroy_callback = cb; }
    inline void setQDateTimeEdit_FocusNextChild_Callback(QDateTimeEdit_FocusNextChild_Callback cb) { qdatetimeedit_focusnextchild_callback = cb; }
    inline void setQDateTimeEdit_FocusPreviousChild_Callback(QDateTimeEdit_FocusPreviousChild_Callback cb) { qdatetimeedit_focuspreviouschild_callback = cb; }
    inline void setQDateTimeEdit_Sender_Callback(QDateTimeEdit_Sender_Callback cb) { qdatetimeedit_sender_callback = cb; }
    inline void setQDateTimeEdit_SenderSignalIndex_Callback(QDateTimeEdit_SenderSignalIndex_Callback cb) { qdatetimeedit_sendersignalindex_callback = cb; }
    inline void setQDateTimeEdit_Receivers_Callback(QDateTimeEdit_Receivers_Callback cb) { qdatetimeedit_receivers_callback = cb; }
    inline void setQDateTimeEdit_IsSignalConnected_Callback(QDateTimeEdit_IsSignalConnected_Callback cb) { qdatetimeedit_issignalconnected_callback = cb; }
    inline void setQDateTimeEdit_GetDecodedMetricF_Callback(QDateTimeEdit_GetDecodedMetricF_Callback cb) { qdatetimeedit_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQDateTimeEdit_MetaObject_IsBase(bool value) const { qdatetimeedit_metaobject_isbase = value; }
    inline void setQDateTimeEdit_Metacast_IsBase(bool value) const { qdatetimeedit_metacast_isbase = value; }
    inline void setQDateTimeEdit_Metacall_IsBase(bool value) const { qdatetimeedit_metacall_isbase = value; }
    inline void setQDateTimeEdit_SizeHint_IsBase(bool value) const { qdatetimeedit_sizehint_isbase = value; }
    inline void setQDateTimeEdit_Clear_IsBase(bool value) const { qdatetimeedit_clear_isbase = value; }
    inline void setQDateTimeEdit_StepBy_IsBase(bool value) const { qdatetimeedit_stepby_isbase = value; }
    inline void setQDateTimeEdit_Event_IsBase(bool value) const { qdatetimeedit_event_isbase = value; }
    inline void setQDateTimeEdit_KeyPressEvent_IsBase(bool value) const { qdatetimeedit_keypressevent_isbase = value; }
    inline void setQDateTimeEdit_WheelEvent_IsBase(bool value) const { qdatetimeedit_wheelevent_isbase = value; }
    inline void setQDateTimeEdit_FocusInEvent_IsBase(bool value) const { qdatetimeedit_focusinevent_isbase = value; }
    inline void setQDateTimeEdit_FocusNextPrevChild_IsBase(bool value) const { qdatetimeedit_focusnextprevchild_isbase = value; }
    inline void setQDateTimeEdit_Validate_IsBase(bool value) const { qdatetimeedit_validate_isbase = value; }
    inline void setQDateTimeEdit_Fixup_IsBase(bool value) const { qdatetimeedit_fixup_isbase = value; }
    inline void setQDateTimeEdit_DateTimeFromText_IsBase(bool value) const { qdatetimeedit_datetimefromtext_isbase = value; }
    inline void setQDateTimeEdit_TextFromDateTime_IsBase(bool value) const { qdatetimeedit_textfromdatetime_isbase = value; }
    inline void setQDateTimeEdit_StepEnabled_IsBase(bool value) const { qdatetimeedit_stepenabled_isbase = value; }
    inline void setQDateTimeEdit_MousePressEvent_IsBase(bool value) const { qdatetimeedit_mousepressevent_isbase = value; }
    inline void setQDateTimeEdit_PaintEvent_IsBase(bool value) const { qdatetimeedit_paintevent_isbase = value; }
    inline void setQDateTimeEdit_InitStyleOption_IsBase(bool value) const { qdatetimeedit_initstyleoption_isbase = value; }
    inline void setQDateTimeEdit_MinimumSizeHint_IsBase(bool value) const { qdatetimeedit_minimumsizehint_isbase = value; }
    inline void setQDateTimeEdit_InputMethodQuery_IsBase(bool value) const { qdatetimeedit_inputmethodquery_isbase = value; }
    inline void setQDateTimeEdit_ResizeEvent_IsBase(bool value) const { qdatetimeedit_resizeevent_isbase = value; }
    inline void setQDateTimeEdit_KeyReleaseEvent_IsBase(bool value) const { qdatetimeedit_keyreleaseevent_isbase = value; }
    inline void setQDateTimeEdit_FocusOutEvent_IsBase(bool value) const { qdatetimeedit_focusoutevent_isbase = value; }
    inline void setQDateTimeEdit_ContextMenuEvent_IsBase(bool value) const { qdatetimeedit_contextmenuevent_isbase = value; }
    inline void setQDateTimeEdit_ChangeEvent_IsBase(bool value) const { qdatetimeedit_changeevent_isbase = value; }
    inline void setQDateTimeEdit_CloseEvent_IsBase(bool value) const { qdatetimeedit_closeevent_isbase = value; }
    inline void setQDateTimeEdit_HideEvent_IsBase(bool value) const { qdatetimeedit_hideevent_isbase = value; }
    inline void setQDateTimeEdit_MouseReleaseEvent_IsBase(bool value) const { qdatetimeedit_mousereleaseevent_isbase = value; }
    inline void setQDateTimeEdit_MouseMoveEvent_IsBase(bool value) const { qdatetimeedit_mousemoveevent_isbase = value; }
    inline void setQDateTimeEdit_TimerEvent_IsBase(bool value) const { qdatetimeedit_timerevent_isbase = value; }
    inline void setQDateTimeEdit_ShowEvent_IsBase(bool value) const { qdatetimeedit_showevent_isbase = value; }
    inline void setQDateTimeEdit_DevType_IsBase(bool value) const { qdatetimeedit_devtype_isbase = value; }
    inline void setQDateTimeEdit_SetVisible_IsBase(bool value) const { qdatetimeedit_setvisible_isbase = value; }
    inline void setQDateTimeEdit_HeightForWidth_IsBase(bool value) const { qdatetimeedit_heightforwidth_isbase = value; }
    inline void setQDateTimeEdit_HasHeightForWidth_IsBase(bool value) const { qdatetimeedit_hasheightforwidth_isbase = value; }
    inline void setQDateTimeEdit_PaintEngine_IsBase(bool value) const { qdatetimeedit_paintengine_isbase = value; }
    inline void setQDateTimeEdit_MouseDoubleClickEvent_IsBase(bool value) const { qdatetimeedit_mousedoubleclickevent_isbase = value; }
    inline void setQDateTimeEdit_EnterEvent_IsBase(bool value) const { qdatetimeedit_enterevent_isbase = value; }
    inline void setQDateTimeEdit_LeaveEvent_IsBase(bool value) const { qdatetimeedit_leaveevent_isbase = value; }
    inline void setQDateTimeEdit_MoveEvent_IsBase(bool value) const { qdatetimeedit_moveevent_isbase = value; }
    inline void setQDateTimeEdit_TabletEvent_IsBase(bool value) const { qdatetimeedit_tabletevent_isbase = value; }
    inline void setQDateTimeEdit_ActionEvent_IsBase(bool value) const { qdatetimeedit_actionevent_isbase = value; }
    inline void setQDateTimeEdit_DragEnterEvent_IsBase(bool value) const { qdatetimeedit_dragenterevent_isbase = value; }
    inline void setQDateTimeEdit_DragMoveEvent_IsBase(bool value) const { qdatetimeedit_dragmoveevent_isbase = value; }
    inline void setQDateTimeEdit_DragLeaveEvent_IsBase(bool value) const { qdatetimeedit_dragleaveevent_isbase = value; }
    inline void setQDateTimeEdit_DropEvent_IsBase(bool value) const { qdatetimeedit_dropevent_isbase = value; }
    inline void setQDateTimeEdit_NativeEvent_IsBase(bool value) const { qdatetimeedit_nativeevent_isbase = value; }
    inline void setQDateTimeEdit_Metric_IsBase(bool value) const { qdatetimeedit_metric_isbase = value; }
    inline void setQDateTimeEdit_InitPainter_IsBase(bool value) const { qdatetimeedit_initpainter_isbase = value; }
    inline void setQDateTimeEdit_Redirected_IsBase(bool value) const { qdatetimeedit_redirected_isbase = value; }
    inline void setQDateTimeEdit_SharedPainter_IsBase(bool value) const { qdatetimeedit_sharedpainter_isbase = value; }
    inline void setQDateTimeEdit_InputMethodEvent_IsBase(bool value) const { qdatetimeedit_inputmethodevent_isbase = value; }
    inline void setQDateTimeEdit_EventFilter_IsBase(bool value) const { qdatetimeedit_eventfilter_isbase = value; }
    inline void setQDateTimeEdit_ChildEvent_IsBase(bool value) const { qdatetimeedit_childevent_isbase = value; }
    inline void setQDateTimeEdit_CustomEvent_IsBase(bool value) const { qdatetimeedit_customevent_isbase = value; }
    inline void setQDateTimeEdit_ConnectNotify_IsBase(bool value) const { qdatetimeedit_connectnotify_isbase = value; }
    inline void setQDateTimeEdit_DisconnectNotify_IsBase(bool value) const { qdatetimeedit_disconnectnotify_isbase = value; }
    inline void setQDateTimeEdit_LineEdit_IsBase(bool value) const { qdatetimeedit_lineedit_isbase = value; }
    inline void setQDateTimeEdit_SetLineEdit_IsBase(bool value) const { qdatetimeedit_setlineedit_isbase = value; }
    inline void setQDateTimeEdit_UpdateMicroFocus_IsBase(bool value) const { qdatetimeedit_updatemicrofocus_isbase = value; }
    inline void setQDateTimeEdit_Create_IsBase(bool value) const { qdatetimeedit_create_isbase = value; }
    inline void setQDateTimeEdit_Destroy_IsBase(bool value) const { qdatetimeedit_destroy_isbase = value; }
    inline void setQDateTimeEdit_FocusNextChild_IsBase(bool value) const { qdatetimeedit_focusnextchild_isbase = value; }
    inline void setQDateTimeEdit_FocusPreviousChild_IsBase(bool value) const { qdatetimeedit_focuspreviouschild_isbase = value; }
    inline void setQDateTimeEdit_Sender_IsBase(bool value) const { qdatetimeedit_sender_isbase = value; }
    inline void setQDateTimeEdit_SenderSignalIndex_IsBase(bool value) const { qdatetimeedit_sendersignalindex_isbase = value; }
    inline void setQDateTimeEdit_Receivers_IsBase(bool value) const { qdatetimeedit_receivers_isbase = value; }
    inline void setQDateTimeEdit_IsSignalConnected_IsBase(bool value) const { qdatetimeedit_issignalconnected_isbase = value; }
    inline void setQDateTimeEdit_GetDecodedMetricF_IsBase(bool value) const { qdatetimeedit_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdatetimeedit_metaobject_isbase) {
            qdatetimeedit_metaobject_isbase = false;
            return QDateTimeEdit::metaObject();
        }
        auto metaobject_cb = qdatetimeedit_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QDateTimeEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdatetimeedit_metacast_isbase) {
            qdatetimeedit_metacast_isbase = false;
            return QDateTimeEdit::qt_metacast(param1);
        }
        auto metacast_cb = qdatetimeedit_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QDateTimeEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdatetimeedit_metacall_isbase) {
            qdatetimeedit_metacall_isbase = false;
            return QDateTimeEdit::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qdatetimeedit_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDateTimeEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdatetimeedit_sizehint_isbase) {
            qdatetimeedit_sizehint_isbase = false;
            return QDateTimeEdit::sizeHint();
        }
        auto sizehint_cb = qdatetimeedit_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QDateTimeEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qdatetimeedit_clear_isbase) {
            qdatetimeedit_clear_isbase = false;
            QDateTimeEdit::clear();
            return;
        }
        auto clear_cb = qdatetimeedit_clear_callback;
        if (clear_cb) {
            clear_cb();
            return;
        }
        QDateTimeEdit::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual void stepBy(int steps) override {
        if (qdatetimeedit_stepby_isbase) {
            qdatetimeedit_stepby_isbase = false;
            QDateTimeEdit::stepBy(steps);
            return;
        }
        auto stepby_cb = qdatetimeedit_stepby_callback;
        if (stepby_cb) {
            int cbval1 = steps;

            stepby_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::stepBy(steps);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdatetimeedit_event_isbase) {
            qdatetimeedit_event_isbase = false;
            return QDateTimeEdit::event(event);
        }
        auto event_cb = qdatetimeedit_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QDateTimeEdit::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qdatetimeedit_keypressevent_isbase) {
            qdatetimeedit_keypressevent_isbase = false;
            QDateTimeEdit::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qdatetimeedit_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdatetimeedit_wheelevent_isbase) {
            qdatetimeedit_wheelevent_isbase = false;
            QDateTimeEdit::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qdatetimeedit_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdatetimeedit_focusinevent_isbase) {
            qdatetimeedit_focusinevent_isbase = false;
            QDateTimeEdit::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qdatetimeedit_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdatetimeedit_focusnextprevchild_isbase) {
            qdatetimeedit_focusnextprevchild_isbase = false;
            return QDateTimeEdit::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qdatetimeedit_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QDateTimeEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& input, int& pos) const override {
        if (qdatetimeedit_validate_isbase) {
            qdatetimeedit_validate_isbase = false;
            return QDateTimeEdit::validate(input, pos);
        }
        auto validate_cb = qdatetimeedit_validate_callback;
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
        return QDateTimeEdit::validate(input, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& input) const override {
        if (qdatetimeedit_fixup_isbase) {
            qdatetimeedit_fixup_isbase = false;
            QDateTimeEdit::fixup(input);
            return;
        }
        auto fixup_cb = qdatetimeedit_fixup_callback;
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
        QDateTimeEdit::fixup(input);
    }

    // Virtual method for C ABI access and custom callback
    virtual QDateTime dateTimeFromText(const QString& text) const override {
        if (qdatetimeedit_datetimefromtext_isbase) {
            qdatetimeedit_datetimefromtext_isbase = false;
            return QDateTimeEdit::dateTimeFromText(text);
        }
        auto datetimefromtext_cb = qdatetimeedit_datetimefromtext_callback;
        if (datetimefromtext_cb) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;

            QDateTime* callback_ret = datetimefromtext_cb(this, cbval1);
            libqt_free(text_str);
            return *callback_ret;
        }
        return QDateTimeEdit::dateTimeFromText(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString textFromDateTime(const QDateTime& dt) const override {
        if (qdatetimeedit_textfromdatetime_isbase) {
            qdatetimeedit_textfromdatetime_isbase = false;
            return QDateTimeEdit::textFromDateTime(dt);
        }
        auto textfromdatetime_cb = qdatetimeedit_textfromdatetime_callback;
        if (textfromdatetime_cb) {
            const QDateTime& dt_ret = dt;
            // Cast returned reference into pointer
            QDateTime* cbval1 = const_cast<QDateTime*>(&dt_ret);

            const char* callback_ret = textfromdatetime_cb(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QDateTimeEdit::textFromDateTime(dt);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
        if (qdatetimeedit_stepenabled_isbase) {
            qdatetimeedit_stepenabled_isbase = false;
            return QDateTimeEdit::stepEnabled();
        }
        auto stepenabled_cb = qdatetimeedit_stepenabled_callback;
        if (stepenabled_cb) {
            int callback_ret = stepenabled_cb();
            return static_cast<QAbstractSpinBox::StepEnabled>(callback_ret);
        }
        return QDateTimeEdit::stepEnabled();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdatetimeedit_mousepressevent_isbase) {
            qdatetimeedit_mousepressevent_isbase = false;
            QDateTimeEdit::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qdatetimeedit_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdatetimeedit_paintevent_isbase) {
            qdatetimeedit_paintevent_isbase = false;
            QDateTimeEdit::paintEvent(event);
            return;
        }
        auto paintevent_cb = qdatetimeedit_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
        if (qdatetimeedit_initstyleoption_isbase) {
            qdatetimeedit_initstyleoption_isbase = false;
            QDateTimeEdit::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qdatetimeedit_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionSpinBox* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdatetimeedit_minimumsizehint_isbase) {
            qdatetimeedit_minimumsizehint_isbase = false;
            return QDateTimeEdit::minimumSizeHint();
        }
        auto minimumsizehint_cb = qdatetimeedit_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QDateTimeEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdatetimeedit_inputmethodquery_isbase) {
            qdatetimeedit_inputmethodquery_isbase = false;
            return QDateTimeEdit::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qdatetimeedit_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QDateTimeEdit::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qdatetimeedit_resizeevent_isbase) {
            qdatetimeedit_resizeevent_isbase = false;
            QDateTimeEdit::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = qdatetimeedit_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdatetimeedit_keyreleaseevent_isbase) {
            qdatetimeedit_keyreleaseevent_isbase = false;
            QDateTimeEdit::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qdatetimeedit_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdatetimeedit_focusoutevent_isbase) {
            qdatetimeedit_focusoutevent_isbase = false;
            QDateTimeEdit::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qdatetimeedit_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdatetimeedit_contextmenuevent_isbase) {
            qdatetimeedit_contextmenuevent_isbase = false;
            QDateTimeEdit::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qdatetimeedit_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qdatetimeedit_changeevent_isbase) {
            qdatetimeedit_changeevent_isbase = false;
            QDateTimeEdit::changeEvent(event);
            return;
        }
        auto changeevent_cb = qdatetimeedit_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = event;

            changeevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdatetimeedit_closeevent_isbase) {
            qdatetimeedit_closeevent_isbase = false;
            QDateTimeEdit::closeEvent(event);
            return;
        }
        auto closeevent_cb = qdatetimeedit_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdatetimeedit_hideevent_isbase) {
            qdatetimeedit_hideevent_isbase = false;
            QDateTimeEdit::hideEvent(event);
            return;
        }
        auto hideevent_cb = qdatetimeedit_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdatetimeedit_mousereleaseevent_isbase) {
            qdatetimeedit_mousereleaseevent_isbase = false;
            QDateTimeEdit::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qdatetimeedit_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdatetimeedit_mousemoveevent_isbase) {
            qdatetimeedit_mousemoveevent_isbase = false;
            QDateTimeEdit::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qdatetimeedit_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdatetimeedit_timerevent_isbase) {
            qdatetimeedit_timerevent_isbase = false;
            QDateTimeEdit::timerEvent(event);
            return;
        }
        auto timerevent_cb = qdatetimeedit_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdatetimeedit_showevent_isbase) {
            qdatetimeedit_showevent_isbase = false;
            QDateTimeEdit::showEvent(event);
            return;
        }
        auto showevent_cb = qdatetimeedit_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdatetimeedit_devtype_isbase) {
            qdatetimeedit_devtype_isbase = false;
            return QDateTimeEdit::devType();
        }
        auto devtype_cb = qdatetimeedit_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QDateTimeEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdatetimeedit_setvisible_isbase) {
            qdatetimeedit_setvisible_isbase = false;
            QDateTimeEdit::setVisible(visible);
            return;
        }
        auto setvisible_cb = qdatetimeedit_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdatetimeedit_heightforwidth_isbase) {
            qdatetimeedit_heightforwidth_isbase = false;
            return QDateTimeEdit::heightForWidth(param1);
        }
        auto heightforwidth_cb = qdatetimeedit_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDateTimeEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdatetimeedit_hasheightforwidth_isbase) {
            qdatetimeedit_hasheightforwidth_isbase = false;
            return QDateTimeEdit::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qdatetimeedit_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QDateTimeEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdatetimeedit_paintengine_isbase) {
            qdatetimeedit_paintengine_isbase = false;
            return QDateTimeEdit::paintEngine();
        }
        auto paintengine_cb = qdatetimeedit_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QDateTimeEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdatetimeedit_mousedoubleclickevent_isbase) {
            qdatetimeedit_mousedoubleclickevent_isbase = false;
            QDateTimeEdit::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qdatetimeedit_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdatetimeedit_enterevent_isbase) {
            qdatetimeedit_enterevent_isbase = false;
            QDateTimeEdit::enterEvent(event);
            return;
        }
        auto enterevent_cb = qdatetimeedit_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdatetimeedit_leaveevent_isbase) {
            qdatetimeedit_leaveevent_isbase = false;
            QDateTimeEdit::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qdatetimeedit_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdatetimeedit_moveevent_isbase) {
            qdatetimeedit_moveevent_isbase = false;
            QDateTimeEdit::moveEvent(event);
            return;
        }
        auto moveevent_cb = qdatetimeedit_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdatetimeedit_tabletevent_isbase) {
            qdatetimeedit_tabletevent_isbase = false;
            QDateTimeEdit::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qdatetimeedit_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdatetimeedit_actionevent_isbase) {
            qdatetimeedit_actionevent_isbase = false;
            QDateTimeEdit::actionEvent(event);
            return;
        }
        auto actionevent_cb = qdatetimeedit_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdatetimeedit_dragenterevent_isbase) {
            qdatetimeedit_dragenterevent_isbase = false;
            QDateTimeEdit::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qdatetimeedit_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdatetimeedit_dragmoveevent_isbase) {
            qdatetimeedit_dragmoveevent_isbase = false;
            QDateTimeEdit::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qdatetimeedit_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdatetimeedit_dragleaveevent_isbase) {
            qdatetimeedit_dragleaveevent_isbase = false;
            QDateTimeEdit::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qdatetimeedit_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdatetimeedit_dropevent_isbase) {
            qdatetimeedit_dropevent_isbase = false;
            QDateTimeEdit::dropEvent(event);
            return;
        }
        auto dropevent_cb = qdatetimeedit_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdatetimeedit_nativeevent_isbase) {
            qdatetimeedit_nativeevent_isbase = false;
            return QDateTimeEdit::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qdatetimeedit_nativeevent_callback;
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
        return QDateTimeEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdatetimeedit_metric_isbase) {
            qdatetimeedit_metric_isbase = false;
            return QDateTimeEdit::metric(param1);
        }
        auto metric_cb = qdatetimeedit_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDateTimeEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdatetimeedit_initpainter_isbase) {
            qdatetimeedit_initpainter_isbase = false;
            QDateTimeEdit::initPainter(painter);
            return;
        }
        auto initpainter_cb = qdatetimeedit_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdatetimeedit_redirected_isbase) {
            qdatetimeedit_redirected_isbase = false;
            return QDateTimeEdit::redirected(offset);
        }
        auto redirected_cb = qdatetimeedit_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QDateTimeEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdatetimeedit_sharedpainter_isbase) {
            qdatetimeedit_sharedpainter_isbase = false;
            return QDateTimeEdit::sharedPainter();
        }
        auto sharedpainter_cb = qdatetimeedit_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QDateTimeEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdatetimeedit_inputmethodevent_isbase) {
            qdatetimeedit_inputmethodevent_isbase = false;
            QDateTimeEdit::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qdatetimeedit_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdatetimeedit_eventfilter_isbase) {
            qdatetimeedit_eventfilter_isbase = false;
            return QDateTimeEdit::eventFilter(watched, event);
        }
        auto eventfilter_cb = qdatetimeedit_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDateTimeEdit::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdatetimeedit_childevent_isbase) {
            qdatetimeedit_childevent_isbase = false;
            QDateTimeEdit::childEvent(event);
            return;
        }
        auto childevent_cb = qdatetimeedit_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdatetimeedit_customevent_isbase) {
            qdatetimeedit_customevent_isbase = false;
            QDateTimeEdit::customEvent(event);
            return;
        }
        auto customevent_cb = qdatetimeedit_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdatetimeedit_connectnotify_isbase) {
            qdatetimeedit_connectnotify_isbase = false;
            QDateTimeEdit::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qdatetimeedit_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdatetimeedit_disconnectnotify_isbase) {
            qdatetimeedit_disconnectnotify_isbase = false;
            QDateTimeEdit::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qdatetimeedit_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QLineEdit* lineEdit() const {
        if (qdatetimeedit_lineedit_isbase) {
            qdatetimeedit_lineedit_isbase = false;
            return QDateTimeEdit::lineEdit();
        }
        auto lineedit_cb = qdatetimeedit_lineedit_callback;
        if (lineedit_cb) {
            QLineEdit* callback_ret = lineedit_cb();
            return callback_ret;
        }
        return QDateTimeEdit::lineEdit();
    }

    // Virtual method for C ABI access and custom callback
    void setLineEdit(QLineEdit* edit) {
        if (qdatetimeedit_setlineedit_isbase) {
            qdatetimeedit_setlineedit_isbase = false;
            QDateTimeEdit::setLineEdit(edit);
            return;
        }
        auto setlineedit_cb = qdatetimeedit_setlineedit_callback;
        if (setlineedit_cb) {
            QLineEdit* cbval1 = edit;

            setlineedit_cb(this, cbval1);
            return;
        }
        QDateTimeEdit::setLineEdit(edit);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qdatetimeedit_updatemicrofocus_isbase) {
            qdatetimeedit_updatemicrofocus_isbase = false;
            QDateTimeEdit::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qdatetimeedit_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QDateTimeEdit::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qdatetimeedit_create_isbase) {
            qdatetimeedit_create_isbase = false;
            QDateTimeEdit::create();
            return;
        }
        auto create_cb = qdatetimeedit_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QDateTimeEdit::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qdatetimeedit_destroy_isbase) {
            qdatetimeedit_destroy_isbase = false;
            QDateTimeEdit::destroy();
            return;
        }
        auto destroy_cb = qdatetimeedit_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QDateTimeEdit::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qdatetimeedit_focusnextchild_isbase) {
            qdatetimeedit_focusnextchild_isbase = false;
            return QDateTimeEdit::focusNextChild();
        }
        auto focusnextchild_cb = qdatetimeedit_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QDateTimeEdit::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qdatetimeedit_focuspreviouschild_isbase) {
            qdatetimeedit_focuspreviouschild_isbase = false;
            return QDateTimeEdit::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qdatetimeedit_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QDateTimeEdit::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdatetimeedit_sender_isbase) {
            qdatetimeedit_sender_isbase = false;
            return QDateTimeEdit::sender();
        }
        auto sender_cb = qdatetimeedit_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QDateTimeEdit::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdatetimeedit_sendersignalindex_isbase) {
            qdatetimeedit_sendersignalindex_isbase = false;
            return QDateTimeEdit::senderSignalIndex();
        }
        auto sendersignalindex_cb = qdatetimeedit_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QDateTimeEdit::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdatetimeedit_receivers_isbase) {
            qdatetimeedit_receivers_isbase = false;
            return QDateTimeEdit::receivers(signal);
        }
        auto receivers_cb = qdatetimeedit_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDateTimeEdit::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdatetimeedit_issignalconnected_isbase) {
            qdatetimeedit_issignalconnected_isbase = false;
            return QDateTimeEdit::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qdatetimeedit_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QDateTimeEdit::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qdatetimeedit_getdecodedmetricf_isbase) {
            qdatetimeedit_getdecodedmetricf_isbase = false;
            return QDateTimeEdit::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qdatetimeedit_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QDateTimeEdit::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void QDateTimeEdit_KeyPressEvent(QDateTimeEdit* self, QKeyEvent* event);
    friend void QDateTimeEdit_SuperKeyPressEvent(QDateTimeEdit* self, QKeyEvent* event);
    friend void QDateTimeEdit_WheelEvent(QDateTimeEdit* self, QWheelEvent* event);
    friend void QDateTimeEdit_SuperWheelEvent(QDateTimeEdit* self, QWheelEvent* event);
    friend void QDateTimeEdit_FocusInEvent(QDateTimeEdit* self, QFocusEvent* event);
    friend void QDateTimeEdit_SuperFocusInEvent(QDateTimeEdit* self, QFocusEvent* event);
    friend bool QDateTimeEdit_FocusNextPrevChild(QDateTimeEdit* self, bool next);
    friend bool QDateTimeEdit_SuperFocusNextPrevChild(QDateTimeEdit* self, bool next);
    friend int QDateTimeEdit_Validate(const QDateTimeEdit* self, libqt_string input, int* pos);
    friend int QDateTimeEdit_SuperValidate(const QDateTimeEdit* self, libqt_string input, int* pos);
    friend void QDateTimeEdit_Fixup(const QDateTimeEdit* self, libqt_string input);
    friend void QDateTimeEdit_SuperFixup(const QDateTimeEdit* self, libqt_string input);
    friend QDateTime* QDateTimeEdit_DateTimeFromText(const QDateTimeEdit* self, const libqt_string text);
    friend QDateTime* QDateTimeEdit_SuperDateTimeFromText(const QDateTimeEdit* self, const libqt_string text);
    friend libqt_string QDateTimeEdit_TextFromDateTime(const QDateTimeEdit* self, const QDateTime* dt);
    friend libqt_string QDateTimeEdit_SuperTextFromDateTime(const QDateTimeEdit* self, const QDateTime* dt);
    friend int QDateTimeEdit_StepEnabled(const QDateTimeEdit* self);
    friend int QDateTimeEdit_SuperStepEnabled(const QDateTimeEdit* self);
    friend void QDateTimeEdit_MousePressEvent(QDateTimeEdit* self, QMouseEvent* event);
    friend void QDateTimeEdit_SuperMousePressEvent(QDateTimeEdit* self, QMouseEvent* event);
    friend void QDateTimeEdit_PaintEvent(QDateTimeEdit* self, QPaintEvent* event);
    friend void QDateTimeEdit_SuperPaintEvent(QDateTimeEdit* self, QPaintEvent* event);
    friend void QDateTimeEdit_InitStyleOption(const QDateTimeEdit* self, QStyleOptionSpinBox* option);
    friend void QDateTimeEdit_SuperInitStyleOption(const QDateTimeEdit* self, QStyleOptionSpinBox* option);
    friend void QDateTimeEdit_ResizeEvent(QDateTimeEdit* self, QResizeEvent* event);
    friend void QDateTimeEdit_SuperResizeEvent(QDateTimeEdit* self, QResizeEvent* event);
    friend void QDateTimeEdit_KeyReleaseEvent(QDateTimeEdit* self, QKeyEvent* event);
    friend void QDateTimeEdit_SuperKeyReleaseEvent(QDateTimeEdit* self, QKeyEvent* event);
    friend void QDateTimeEdit_FocusOutEvent(QDateTimeEdit* self, QFocusEvent* event);
    friend void QDateTimeEdit_SuperFocusOutEvent(QDateTimeEdit* self, QFocusEvent* event);
    friend void QDateTimeEdit_ContextMenuEvent(QDateTimeEdit* self, QContextMenuEvent* event);
    friend void QDateTimeEdit_SuperContextMenuEvent(QDateTimeEdit* self, QContextMenuEvent* event);
    friend void QDateTimeEdit_ChangeEvent(QDateTimeEdit* self, QEvent* event);
    friend void QDateTimeEdit_SuperChangeEvent(QDateTimeEdit* self, QEvent* event);
    friend void QDateTimeEdit_CloseEvent(QDateTimeEdit* self, QCloseEvent* event);
    friend void QDateTimeEdit_SuperCloseEvent(QDateTimeEdit* self, QCloseEvent* event);
    friend void QDateTimeEdit_HideEvent(QDateTimeEdit* self, QHideEvent* event);
    friend void QDateTimeEdit_SuperHideEvent(QDateTimeEdit* self, QHideEvent* event);
    friend void QDateTimeEdit_MouseReleaseEvent(QDateTimeEdit* self, QMouseEvent* event);
    friend void QDateTimeEdit_SuperMouseReleaseEvent(QDateTimeEdit* self, QMouseEvent* event);
    friend void QDateTimeEdit_MouseMoveEvent(QDateTimeEdit* self, QMouseEvent* event);
    friend void QDateTimeEdit_SuperMouseMoveEvent(QDateTimeEdit* self, QMouseEvent* event);
    friend void QDateTimeEdit_TimerEvent(QDateTimeEdit* self, QTimerEvent* event);
    friend void QDateTimeEdit_SuperTimerEvent(QDateTimeEdit* self, QTimerEvent* event);
    friend void QDateTimeEdit_ShowEvent(QDateTimeEdit* self, QShowEvent* event);
    friend void QDateTimeEdit_SuperShowEvent(QDateTimeEdit* self, QShowEvent* event);
    friend void QDateTimeEdit_MouseDoubleClickEvent(QDateTimeEdit* self, QMouseEvent* event);
    friend void QDateTimeEdit_SuperMouseDoubleClickEvent(QDateTimeEdit* self, QMouseEvent* event);
    friend void QDateTimeEdit_EnterEvent(QDateTimeEdit* self, QEnterEvent* event);
    friend void QDateTimeEdit_SuperEnterEvent(QDateTimeEdit* self, QEnterEvent* event);
    friend void QDateTimeEdit_LeaveEvent(QDateTimeEdit* self, QEvent* event);
    friend void QDateTimeEdit_SuperLeaveEvent(QDateTimeEdit* self, QEvent* event);
    friend void QDateTimeEdit_MoveEvent(QDateTimeEdit* self, QMoveEvent* event);
    friend void QDateTimeEdit_SuperMoveEvent(QDateTimeEdit* self, QMoveEvent* event);
    friend void QDateTimeEdit_TabletEvent(QDateTimeEdit* self, QTabletEvent* event);
    friend void QDateTimeEdit_SuperTabletEvent(QDateTimeEdit* self, QTabletEvent* event);
    friend void QDateTimeEdit_ActionEvent(QDateTimeEdit* self, QActionEvent* event);
    friend void QDateTimeEdit_SuperActionEvent(QDateTimeEdit* self, QActionEvent* event);
    friend void QDateTimeEdit_DragEnterEvent(QDateTimeEdit* self, QDragEnterEvent* event);
    friend void QDateTimeEdit_SuperDragEnterEvent(QDateTimeEdit* self, QDragEnterEvent* event);
    friend void QDateTimeEdit_DragMoveEvent(QDateTimeEdit* self, QDragMoveEvent* event);
    friend void QDateTimeEdit_SuperDragMoveEvent(QDateTimeEdit* self, QDragMoveEvent* event);
    friend void QDateTimeEdit_DragLeaveEvent(QDateTimeEdit* self, QDragLeaveEvent* event);
    friend void QDateTimeEdit_SuperDragLeaveEvent(QDateTimeEdit* self, QDragLeaveEvent* event);
    friend void QDateTimeEdit_DropEvent(QDateTimeEdit* self, QDropEvent* event);
    friend void QDateTimeEdit_SuperDropEvent(QDateTimeEdit* self, QDropEvent* event);
    friend bool QDateTimeEdit_NativeEvent(QDateTimeEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QDateTimeEdit_SuperNativeEvent(QDateTimeEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QDateTimeEdit_Metric(const QDateTimeEdit* self, int param1);
    friend int QDateTimeEdit_SuperMetric(const QDateTimeEdit* self, int param1);
    friend void QDateTimeEdit_InitPainter(const QDateTimeEdit* self, QPainter* painter);
    friend void QDateTimeEdit_SuperInitPainter(const QDateTimeEdit* self, QPainter* painter);
    friend QPaintDevice* QDateTimeEdit_Redirected(const QDateTimeEdit* self, QPoint* offset);
    friend QPaintDevice* QDateTimeEdit_SuperRedirected(const QDateTimeEdit* self, QPoint* offset);
    friend QPainter* QDateTimeEdit_SharedPainter(const QDateTimeEdit* self);
    friend QPainter* QDateTimeEdit_SuperSharedPainter(const QDateTimeEdit* self);
    friend void QDateTimeEdit_InputMethodEvent(QDateTimeEdit* self, QInputMethodEvent* param1);
    friend void QDateTimeEdit_SuperInputMethodEvent(QDateTimeEdit* self, QInputMethodEvent* param1);
    friend void QDateTimeEdit_ChildEvent(QDateTimeEdit* self, QChildEvent* event);
    friend void QDateTimeEdit_SuperChildEvent(QDateTimeEdit* self, QChildEvent* event);
    friend void QDateTimeEdit_CustomEvent(QDateTimeEdit* self, QEvent* event);
    friend void QDateTimeEdit_SuperCustomEvent(QDateTimeEdit* self, QEvent* event);
    friend void QDateTimeEdit_ConnectNotify(QDateTimeEdit* self, const QMetaMethod* signal);
    friend void QDateTimeEdit_SuperConnectNotify(QDateTimeEdit* self, const QMetaMethod* signal);
    friend void QDateTimeEdit_DisconnectNotify(QDateTimeEdit* self, const QMetaMethod* signal);
    friend void QDateTimeEdit_SuperDisconnectNotify(QDateTimeEdit* self, const QMetaMethod* signal);
    friend QLineEdit* QDateTimeEdit_LineEdit(const QDateTimeEdit* self);
    friend QLineEdit* QDateTimeEdit_SuperLineEdit(const QDateTimeEdit* self);
    friend void QDateTimeEdit_SetLineEdit(QDateTimeEdit* self, QLineEdit* edit);
    friend void QDateTimeEdit_SuperSetLineEdit(QDateTimeEdit* self, QLineEdit* edit);
    friend void QDateTimeEdit_UpdateMicroFocus(QDateTimeEdit* self);
    friend void QDateTimeEdit_SuperUpdateMicroFocus(QDateTimeEdit* self);
    friend void QDateTimeEdit_Create(QDateTimeEdit* self);
    friend void QDateTimeEdit_SuperCreate(QDateTimeEdit* self);
    friend void QDateTimeEdit_Destroy(QDateTimeEdit* self);
    friend void QDateTimeEdit_SuperDestroy(QDateTimeEdit* self);
    friend bool QDateTimeEdit_FocusNextChild(QDateTimeEdit* self);
    friend bool QDateTimeEdit_SuperFocusNextChild(QDateTimeEdit* self);
    friend bool QDateTimeEdit_FocusPreviousChild(QDateTimeEdit* self);
    friend bool QDateTimeEdit_SuperFocusPreviousChild(QDateTimeEdit* self);
    friend QObject* QDateTimeEdit_Sender(const QDateTimeEdit* self);
    friend QObject* QDateTimeEdit_SuperSender(const QDateTimeEdit* self);
    friend int QDateTimeEdit_SenderSignalIndex(const QDateTimeEdit* self);
    friend int QDateTimeEdit_SuperSenderSignalIndex(const QDateTimeEdit* self);
    friend int QDateTimeEdit_Receivers(const QDateTimeEdit* self, const char* signal);
    friend int QDateTimeEdit_SuperReceivers(const QDateTimeEdit* self, const char* signal);
    friend bool QDateTimeEdit_IsSignalConnected(const QDateTimeEdit* self, const QMetaMethod* signal);
    friend bool QDateTimeEdit_SuperIsSignalConnected(const QDateTimeEdit* self, const QMetaMethod* signal);
    friend double QDateTimeEdit_GetDecodedMetricF(const QDateTimeEdit* self, int metricA, int metricB);
    friend double QDateTimeEdit_SuperGetDecodedMetricF(const QDateTimeEdit* self, int metricA, int metricB);
};

// This class is a subclass of QTimeEdit so that we can call protected methods
class VirtualQTimeEdit final : public QTimeEdit {

  public:
    // Virtual class boolean flag
    bool isVirtualQTimeEdit = true;

    // Virtual class public types (including callbacks)
    using QTimeEdit_MetaObject_Callback = QMetaObject* (*)();
    using QTimeEdit_Metacast_Callback = void* (*)(QTimeEdit*, const char*);
    using QTimeEdit_Metacall_Callback = int (*)(QTimeEdit*, int, int, void**);
    using QTimeEdit_SizeHint_Callback = QSize* (*)();
    using QTimeEdit_Clear_Callback = void (*)();
    using QTimeEdit_StepBy_Callback = void (*)(QTimeEdit*, int);
    using QTimeEdit_Event_Callback = bool (*)(QTimeEdit*, QEvent*);
    using QTimeEdit_KeyPressEvent_Callback = void (*)(QTimeEdit*, QKeyEvent*);
    using QTimeEdit_WheelEvent_Callback = void (*)(QTimeEdit*, QWheelEvent*);
    using QTimeEdit_FocusInEvent_Callback = void (*)(QTimeEdit*, QFocusEvent*);
    using QTimeEdit_FocusNextPrevChild_Callback = bool (*)(QTimeEdit*, bool);
    using QTimeEdit_Validate_Callback = int (*)(const QTimeEdit*, const char*, int*);
    using QTimeEdit_Fixup_Callback = void (*)(const QTimeEdit*, const char*);
    using QTimeEdit_DateTimeFromText_Callback = QDateTime* (*)(const QTimeEdit*, const char*);
    using QTimeEdit_TextFromDateTime_Callback = const char* (*)(const QTimeEdit*, QDateTime*);
    using QTimeEdit_StepEnabled_Callback = int (*)();
    using QTimeEdit_MousePressEvent_Callback = void (*)(QTimeEdit*, QMouseEvent*);
    using QTimeEdit_PaintEvent_Callback = void (*)(QTimeEdit*, QPaintEvent*);
    using QTimeEdit_InitStyleOption_Callback = void (*)(const QTimeEdit*, QStyleOptionSpinBox*);
    using QTimeEdit_MinimumSizeHint_Callback = QSize* (*)();
    using QTimeEdit_InputMethodQuery_Callback = QVariant* (*)(const QTimeEdit*, int);
    using QTimeEdit_ResizeEvent_Callback = void (*)(QTimeEdit*, QResizeEvent*);
    using QTimeEdit_KeyReleaseEvent_Callback = void (*)(QTimeEdit*, QKeyEvent*);
    using QTimeEdit_FocusOutEvent_Callback = void (*)(QTimeEdit*, QFocusEvent*);
    using QTimeEdit_ContextMenuEvent_Callback = void (*)(QTimeEdit*, QContextMenuEvent*);
    using QTimeEdit_ChangeEvent_Callback = void (*)(QTimeEdit*, QEvent*);
    using QTimeEdit_CloseEvent_Callback = void (*)(QTimeEdit*, QCloseEvent*);
    using QTimeEdit_HideEvent_Callback = void (*)(QTimeEdit*, QHideEvent*);
    using QTimeEdit_MouseReleaseEvent_Callback = void (*)(QTimeEdit*, QMouseEvent*);
    using QTimeEdit_MouseMoveEvent_Callback = void (*)(QTimeEdit*, QMouseEvent*);
    using QTimeEdit_TimerEvent_Callback = void (*)(QTimeEdit*, QTimerEvent*);
    using QTimeEdit_ShowEvent_Callback = void (*)(QTimeEdit*, QShowEvent*);
    using QTimeEdit_DevType_Callback = int (*)();
    using QTimeEdit_SetVisible_Callback = void (*)(QTimeEdit*, bool);
    using QTimeEdit_HeightForWidth_Callback = int (*)(const QTimeEdit*, int);
    using QTimeEdit_HasHeightForWidth_Callback = bool (*)();
    using QTimeEdit_PaintEngine_Callback = QPaintEngine* (*)();
    using QTimeEdit_MouseDoubleClickEvent_Callback = void (*)(QTimeEdit*, QMouseEvent*);
    using QTimeEdit_EnterEvent_Callback = void (*)(QTimeEdit*, QEnterEvent*);
    using QTimeEdit_LeaveEvent_Callback = void (*)(QTimeEdit*, QEvent*);
    using QTimeEdit_MoveEvent_Callback = void (*)(QTimeEdit*, QMoveEvent*);
    using QTimeEdit_TabletEvent_Callback = void (*)(QTimeEdit*, QTabletEvent*);
    using QTimeEdit_ActionEvent_Callback = void (*)(QTimeEdit*, QActionEvent*);
    using QTimeEdit_DragEnterEvent_Callback = void (*)(QTimeEdit*, QDragEnterEvent*);
    using QTimeEdit_DragMoveEvent_Callback = void (*)(QTimeEdit*, QDragMoveEvent*);
    using QTimeEdit_DragLeaveEvent_Callback = void (*)(QTimeEdit*, QDragLeaveEvent*);
    using QTimeEdit_DropEvent_Callback = void (*)(QTimeEdit*, QDropEvent*);
    using QTimeEdit_NativeEvent_Callback = bool (*)(QTimeEdit*, libqt_string, void*, intptr_t*);
    using QTimeEdit_Metric_Callback = int (*)(const QTimeEdit*, int);
    using QTimeEdit_InitPainter_Callback = void (*)(const QTimeEdit*, QPainter*);
    using QTimeEdit_Redirected_Callback = QPaintDevice* (*)(const QTimeEdit*, QPoint*);
    using QTimeEdit_SharedPainter_Callback = QPainter* (*)();
    using QTimeEdit_InputMethodEvent_Callback = void (*)(QTimeEdit*, QInputMethodEvent*);
    using QTimeEdit_EventFilter_Callback = bool (*)(QTimeEdit*, QObject*, QEvent*);
    using QTimeEdit_ChildEvent_Callback = void (*)(QTimeEdit*, QChildEvent*);
    using QTimeEdit_CustomEvent_Callback = void (*)(QTimeEdit*, QEvent*);
    using QTimeEdit_ConnectNotify_Callback = void (*)(QTimeEdit*, QMetaMethod*);
    using QTimeEdit_DisconnectNotify_Callback = void (*)(QTimeEdit*, QMetaMethod*);
    using QTimeEdit_LineEdit_Callback = QLineEdit* (*)();
    using QTimeEdit_SetLineEdit_Callback = void (*)(QTimeEdit*, QLineEdit*);
    using QTimeEdit_UpdateMicroFocus_Callback = void (*)();
    using QTimeEdit_Create_Callback = void (*)();
    using QTimeEdit_Destroy_Callback = void (*)();
    using QTimeEdit_FocusNextChild_Callback = bool (*)();
    using QTimeEdit_FocusPreviousChild_Callback = bool (*)();
    using QTimeEdit_Sender_Callback = QObject* (*)();
    using QTimeEdit_SenderSignalIndex_Callback = int (*)();
    using QTimeEdit_Receivers_Callback = int (*)(const QTimeEdit*, const char*);
    using QTimeEdit_IsSignalConnected_Callback = bool (*)(const QTimeEdit*, QMetaMethod*);
    using QTimeEdit_GetDecodedMetricF_Callback = double (*)(const QTimeEdit*, int, int);

  protected:
    // Instance callback storage
    QTimeEdit_MetaObject_Callback qtimeedit_metaobject_callback = nullptr;
    QTimeEdit_Metacast_Callback qtimeedit_metacast_callback = nullptr;
    QTimeEdit_Metacall_Callback qtimeedit_metacall_callback = nullptr;
    QTimeEdit_SizeHint_Callback qtimeedit_sizehint_callback = nullptr;
    QTimeEdit_Clear_Callback qtimeedit_clear_callback = nullptr;
    QTimeEdit_StepBy_Callback qtimeedit_stepby_callback = nullptr;
    QTimeEdit_Event_Callback qtimeedit_event_callback = nullptr;
    QTimeEdit_KeyPressEvent_Callback qtimeedit_keypressevent_callback = nullptr;
    QTimeEdit_WheelEvent_Callback qtimeedit_wheelevent_callback = nullptr;
    QTimeEdit_FocusInEvent_Callback qtimeedit_focusinevent_callback = nullptr;
    QTimeEdit_FocusNextPrevChild_Callback qtimeedit_focusnextprevchild_callback = nullptr;
    QTimeEdit_Validate_Callback qtimeedit_validate_callback = nullptr;
    QTimeEdit_Fixup_Callback qtimeedit_fixup_callback = nullptr;
    QTimeEdit_DateTimeFromText_Callback qtimeedit_datetimefromtext_callback = nullptr;
    QTimeEdit_TextFromDateTime_Callback qtimeedit_textfromdatetime_callback = nullptr;
    QTimeEdit_StepEnabled_Callback qtimeedit_stepenabled_callback = nullptr;
    QTimeEdit_MousePressEvent_Callback qtimeedit_mousepressevent_callback = nullptr;
    QTimeEdit_PaintEvent_Callback qtimeedit_paintevent_callback = nullptr;
    QTimeEdit_InitStyleOption_Callback qtimeedit_initstyleoption_callback = nullptr;
    QTimeEdit_MinimumSizeHint_Callback qtimeedit_minimumsizehint_callback = nullptr;
    QTimeEdit_InputMethodQuery_Callback qtimeedit_inputmethodquery_callback = nullptr;
    QTimeEdit_ResizeEvent_Callback qtimeedit_resizeevent_callback = nullptr;
    QTimeEdit_KeyReleaseEvent_Callback qtimeedit_keyreleaseevent_callback = nullptr;
    QTimeEdit_FocusOutEvent_Callback qtimeedit_focusoutevent_callback = nullptr;
    QTimeEdit_ContextMenuEvent_Callback qtimeedit_contextmenuevent_callback = nullptr;
    QTimeEdit_ChangeEvent_Callback qtimeedit_changeevent_callback = nullptr;
    QTimeEdit_CloseEvent_Callback qtimeedit_closeevent_callback = nullptr;
    QTimeEdit_HideEvent_Callback qtimeedit_hideevent_callback = nullptr;
    QTimeEdit_MouseReleaseEvent_Callback qtimeedit_mousereleaseevent_callback = nullptr;
    QTimeEdit_MouseMoveEvent_Callback qtimeedit_mousemoveevent_callback = nullptr;
    QTimeEdit_TimerEvent_Callback qtimeedit_timerevent_callback = nullptr;
    QTimeEdit_ShowEvent_Callback qtimeedit_showevent_callback = nullptr;
    QTimeEdit_DevType_Callback qtimeedit_devtype_callback = nullptr;
    QTimeEdit_SetVisible_Callback qtimeedit_setvisible_callback = nullptr;
    QTimeEdit_HeightForWidth_Callback qtimeedit_heightforwidth_callback = nullptr;
    QTimeEdit_HasHeightForWidth_Callback qtimeedit_hasheightforwidth_callback = nullptr;
    QTimeEdit_PaintEngine_Callback qtimeedit_paintengine_callback = nullptr;
    QTimeEdit_MouseDoubleClickEvent_Callback qtimeedit_mousedoubleclickevent_callback = nullptr;
    QTimeEdit_EnterEvent_Callback qtimeedit_enterevent_callback = nullptr;
    QTimeEdit_LeaveEvent_Callback qtimeedit_leaveevent_callback = nullptr;
    QTimeEdit_MoveEvent_Callback qtimeedit_moveevent_callback = nullptr;
    QTimeEdit_TabletEvent_Callback qtimeedit_tabletevent_callback = nullptr;
    QTimeEdit_ActionEvent_Callback qtimeedit_actionevent_callback = nullptr;
    QTimeEdit_DragEnterEvent_Callback qtimeedit_dragenterevent_callback = nullptr;
    QTimeEdit_DragMoveEvent_Callback qtimeedit_dragmoveevent_callback = nullptr;
    QTimeEdit_DragLeaveEvent_Callback qtimeedit_dragleaveevent_callback = nullptr;
    QTimeEdit_DropEvent_Callback qtimeedit_dropevent_callback = nullptr;
    QTimeEdit_NativeEvent_Callback qtimeedit_nativeevent_callback = nullptr;
    QTimeEdit_Metric_Callback qtimeedit_metric_callback = nullptr;
    QTimeEdit_InitPainter_Callback qtimeedit_initpainter_callback = nullptr;
    QTimeEdit_Redirected_Callback qtimeedit_redirected_callback = nullptr;
    QTimeEdit_SharedPainter_Callback qtimeedit_sharedpainter_callback = nullptr;
    QTimeEdit_InputMethodEvent_Callback qtimeedit_inputmethodevent_callback = nullptr;
    QTimeEdit_EventFilter_Callback qtimeedit_eventfilter_callback = nullptr;
    QTimeEdit_ChildEvent_Callback qtimeedit_childevent_callback = nullptr;
    QTimeEdit_CustomEvent_Callback qtimeedit_customevent_callback = nullptr;
    QTimeEdit_ConnectNotify_Callback qtimeedit_connectnotify_callback = nullptr;
    QTimeEdit_DisconnectNotify_Callback qtimeedit_disconnectnotify_callback = nullptr;
    QTimeEdit_LineEdit_Callback qtimeedit_lineedit_callback = nullptr;
    QTimeEdit_SetLineEdit_Callback qtimeedit_setlineedit_callback = nullptr;
    QTimeEdit_UpdateMicroFocus_Callback qtimeedit_updatemicrofocus_callback = nullptr;
    QTimeEdit_Create_Callback qtimeedit_create_callback = nullptr;
    QTimeEdit_Destroy_Callback qtimeedit_destroy_callback = nullptr;
    QTimeEdit_FocusNextChild_Callback qtimeedit_focusnextchild_callback = nullptr;
    QTimeEdit_FocusPreviousChild_Callback qtimeedit_focuspreviouschild_callback = nullptr;
    QTimeEdit_Sender_Callback qtimeedit_sender_callback = nullptr;
    QTimeEdit_SenderSignalIndex_Callback qtimeedit_sendersignalindex_callback = nullptr;
    QTimeEdit_Receivers_Callback qtimeedit_receivers_callback = nullptr;
    QTimeEdit_IsSignalConnected_Callback qtimeedit_issignalconnected_callback = nullptr;
    QTimeEdit_GetDecodedMetricF_Callback qtimeedit_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qtimeedit_metaobject_isbase = false;
    mutable bool qtimeedit_metacast_isbase = false;
    mutable bool qtimeedit_metacall_isbase = false;
    mutable bool qtimeedit_sizehint_isbase = false;
    mutable bool qtimeedit_clear_isbase = false;
    mutable bool qtimeedit_stepby_isbase = false;
    mutable bool qtimeedit_event_isbase = false;
    mutable bool qtimeedit_keypressevent_isbase = false;
    mutable bool qtimeedit_wheelevent_isbase = false;
    mutable bool qtimeedit_focusinevent_isbase = false;
    mutable bool qtimeedit_focusnextprevchild_isbase = false;
    mutable bool qtimeedit_validate_isbase = false;
    mutable bool qtimeedit_fixup_isbase = false;
    mutable bool qtimeedit_datetimefromtext_isbase = false;
    mutable bool qtimeedit_textfromdatetime_isbase = false;
    mutable bool qtimeedit_stepenabled_isbase = false;
    mutable bool qtimeedit_mousepressevent_isbase = false;
    mutable bool qtimeedit_paintevent_isbase = false;
    mutable bool qtimeedit_initstyleoption_isbase = false;
    mutable bool qtimeedit_minimumsizehint_isbase = false;
    mutable bool qtimeedit_inputmethodquery_isbase = false;
    mutable bool qtimeedit_resizeevent_isbase = false;
    mutable bool qtimeedit_keyreleaseevent_isbase = false;
    mutable bool qtimeedit_focusoutevent_isbase = false;
    mutable bool qtimeedit_contextmenuevent_isbase = false;
    mutable bool qtimeedit_changeevent_isbase = false;
    mutable bool qtimeedit_closeevent_isbase = false;
    mutable bool qtimeedit_hideevent_isbase = false;
    mutable bool qtimeedit_mousereleaseevent_isbase = false;
    mutable bool qtimeedit_mousemoveevent_isbase = false;
    mutable bool qtimeedit_timerevent_isbase = false;
    mutable bool qtimeedit_showevent_isbase = false;
    mutable bool qtimeedit_devtype_isbase = false;
    mutable bool qtimeedit_setvisible_isbase = false;
    mutable bool qtimeedit_heightforwidth_isbase = false;
    mutable bool qtimeedit_hasheightforwidth_isbase = false;
    mutable bool qtimeedit_paintengine_isbase = false;
    mutable bool qtimeedit_mousedoubleclickevent_isbase = false;
    mutable bool qtimeedit_enterevent_isbase = false;
    mutable bool qtimeedit_leaveevent_isbase = false;
    mutable bool qtimeedit_moveevent_isbase = false;
    mutable bool qtimeedit_tabletevent_isbase = false;
    mutable bool qtimeedit_actionevent_isbase = false;
    mutable bool qtimeedit_dragenterevent_isbase = false;
    mutable bool qtimeedit_dragmoveevent_isbase = false;
    mutable bool qtimeedit_dragleaveevent_isbase = false;
    mutable bool qtimeedit_dropevent_isbase = false;
    mutable bool qtimeedit_nativeevent_isbase = false;
    mutable bool qtimeedit_metric_isbase = false;
    mutable bool qtimeedit_initpainter_isbase = false;
    mutable bool qtimeedit_redirected_isbase = false;
    mutable bool qtimeedit_sharedpainter_isbase = false;
    mutable bool qtimeedit_inputmethodevent_isbase = false;
    mutable bool qtimeedit_eventfilter_isbase = false;
    mutable bool qtimeedit_childevent_isbase = false;
    mutable bool qtimeedit_customevent_isbase = false;
    mutable bool qtimeedit_connectnotify_isbase = false;
    mutable bool qtimeedit_disconnectnotify_isbase = false;
    mutable bool qtimeedit_lineedit_isbase = false;
    mutable bool qtimeedit_setlineedit_isbase = false;
    mutable bool qtimeedit_updatemicrofocus_isbase = false;
    mutable bool qtimeedit_create_isbase = false;
    mutable bool qtimeedit_destroy_isbase = false;
    mutable bool qtimeedit_focusnextchild_isbase = false;
    mutable bool qtimeedit_focuspreviouschild_isbase = false;
    mutable bool qtimeedit_sender_isbase = false;
    mutable bool qtimeedit_sendersignalindex_isbase = false;
    mutable bool qtimeedit_receivers_isbase = false;
    mutable bool qtimeedit_issignalconnected_isbase = false;
    mutable bool qtimeedit_getdecodedmetricf_isbase = false;

  public:
    VirtualQTimeEdit(QWidget* parent) : QTimeEdit(parent) {};
    VirtualQTimeEdit() : QTimeEdit() {};
    VirtualQTimeEdit(QTime time) : QTimeEdit(time) {};
    VirtualQTimeEdit(QTime time, QWidget* parent) : QTimeEdit(time, parent) {};

    // Callback setters
    inline void setQTimeEdit_MetaObject_Callback(QTimeEdit_MetaObject_Callback cb) { qtimeedit_metaobject_callback = cb; }
    inline void setQTimeEdit_Metacast_Callback(QTimeEdit_Metacast_Callback cb) { qtimeedit_metacast_callback = cb; }
    inline void setQTimeEdit_Metacall_Callback(QTimeEdit_Metacall_Callback cb) { qtimeedit_metacall_callback = cb; }
    inline void setQTimeEdit_SizeHint_Callback(QTimeEdit_SizeHint_Callback cb) { qtimeedit_sizehint_callback = cb; }
    inline void setQTimeEdit_Clear_Callback(QTimeEdit_Clear_Callback cb) { qtimeedit_clear_callback = cb; }
    inline void setQTimeEdit_StepBy_Callback(QTimeEdit_StepBy_Callback cb) { qtimeedit_stepby_callback = cb; }
    inline void setQTimeEdit_Event_Callback(QTimeEdit_Event_Callback cb) { qtimeedit_event_callback = cb; }
    inline void setQTimeEdit_KeyPressEvent_Callback(QTimeEdit_KeyPressEvent_Callback cb) { qtimeedit_keypressevent_callback = cb; }
    inline void setQTimeEdit_WheelEvent_Callback(QTimeEdit_WheelEvent_Callback cb) { qtimeedit_wheelevent_callback = cb; }
    inline void setQTimeEdit_FocusInEvent_Callback(QTimeEdit_FocusInEvent_Callback cb) { qtimeedit_focusinevent_callback = cb; }
    inline void setQTimeEdit_FocusNextPrevChild_Callback(QTimeEdit_FocusNextPrevChild_Callback cb) { qtimeedit_focusnextprevchild_callback = cb; }
    inline void setQTimeEdit_Validate_Callback(QTimeEdit_Validate_Callback cb) { qtimeedit_validate_callback = cb; }
    inline void setQTimeEdit_Fixup_Callback(QTimeEdit_Fixup_Callback cb) { qtimeedit_fixup_callback = cb; }
    inline void setQTimeEdit_DateTimeFromText_Callback(QTimeEdit_DateTimeFromText_Callback cb) { qtimeedit_datetimefromtext_callback = cb; }
    inline void setQTimeEdit_TextFromDateTime_Callback(QTimeEdit_TextFromDateTime_Callback cb) { qtimeedit_textfromdatetime_callback = cb; }
    inline void setQTimeEdit_StepEnabled_Callback(QTimeEdit_StepEnabled_Callback cb) { qtimeedit_stepenabled_callback = cb; }
    inline void setQTimeEdit_MousePressEvent_Callback(QTimeEdit_MousePressEvent_Callback cb) { qtimeedit_mousepressevent_callback = cb; }
    inline void setQTimeEdit_PaintEvent_Callback(QTimeEdit_PaintEvent_Callback cb) { qtimeedit_paintevent_callback = cb; }
    inline void setQTimeEdit_InitStyleOption_Callback(QTimeEdit_InitStyleOption_Callback cb) { qtimeedit_initstyleoption_callback = cb; }
    inline void setQTimeEdit_MinimumSizeHint_Callback(QTimeEdit_MinimumSizeHint_Callback cb) { qtimeedit_minimumsizehint_callback = cb; }
    inline void setQTimeEdit_InputMethodQuery_Callback(QTimeEdit_InputMethodQuery_Callback cb) { qtimeedit_inputmethodquery_callback = cb; }
    inline void setQTimeEdit_ResizeEvent_Callback(QTimeEdit_ResizeEvent_Callback cb) { qtimeedit_resizeevent_callback = cb; }
    inline void setQTimeEdit_KeyReleaseEvent_Callback(QTimeEdit_KeyReleaseEvent_Callback cb) { qtimeedit_keyreleaseevent_callback = cb; }
    inline void setQTimeEdit_FocusOutEvent_Callback(QTimeEdit_FocusOutEvent_Callback cb) { qtimeedit_focusoutevent_callback = cb; }
    inline void setQTimeEdit_ContextMenuEvent_Callback(QTimeEdit_ContextMenuEvent_Callback cb) { qtimeedit_contextmenuevent_callback = cb; }
    inline void setQTimeEdit_ChangeEvent_Callback(QTimeEdit_ChangeEvent_Callback cb) { qtimeedit_changeevent_callback = cb; }
    inline void setQTimeEdit_CloseEvent_Callback(QTimeEdit_CloseEvent_Callback cb) { qtimeedit_closeevent_callback = cb; }
    inline void setQTimeEdit_HideEvent_Callback(QTimeEdit_HideEvent_Callback cb) { qtimeedit_hideevent_callback = cb; }
    inline void setQTimeEdit_MouseReleaseEvent_Callback(QTimeEdit_MouseReleaseEvent_Callback cb) { qtimeedit_mousereleaseevent_callback = cb; }
    inline void setQTimeEdit_MouseMoveEvent_Callback(QTimeEdit_MouseMoveEvent_Callback cb) { qtimeedit_mousemoveevent_callback = cb; }
    inline void setQTimeEdit_TimerEvent_Callback(QTimeEdit_TimerEvent_Callback cb) { qtimeedit_timerevent_callback = cb; }
    inline void setQTimeEdit_ShowEvent_Callback(QTimeEdit_ShowEvent_Callback cb) { qtimeedit_showevent_callback = cb; }
    inline void setQTimeEdit_DevType_Callback(QTimeEdit_DevType_Callback cb) { qtimeedit_devtype_callback = cb; }
    inline void setQTimeEdit_SetVisible_Callback(QTimeEdit_SetVisible_Callback cb) { qtimeedit_setvisible_callback = cb; }
    inline void setQTimeEdit_HeightForWidth_Callback(QTimeEdit_HeightForWidth_Callback cb) { qtimeedit_heightforwidth_callback = cb; }
    inline void setQTimeEdit_HasHeightForWidth_Callback(QTimeEdit_HasHeightForWidth_Callback cb) { qtimeedit_hasheightforwidth_callback = cb; }
    inline void setQTimeEdit_PaintEngine_Callback(QTimeEdit_PaintEngine_Callback cb) { qtimeedit_paintengine_callback = cb; }
    inline void setQTimeEdit_MouseDoubleClickEvent_Callback(QTimeEdit_MouseDoubleClickEvent_Callback cb) { qtimeedit_mousedoubleclickevent_callback = cb; }
    inline void setQTimeEdit_EnterEvent_Callback(QTimeEdit_EnterEvent_Callback cb) { qtimeedit_enterevent_callback = cb; }
    inline void setQTimeEdit_LeaveEvent_Callback(QTimeEdit_LeaveEvent_Callback cb) { qtimeedit_leaveevent_callback = cb; }
    inline void setQTimeEdit_MoveEvent_Callback(QTimeEdit_MoveEvent_Callback cb) { qtimeedit_moveevent_callback = cb; }
    inline void setQTimeEdit_TabletEvent_Callback(QTimeEdit_TabletEvent_Callback cb) { qtimeedit_tabletevent_callback = cb; }
    inline void setQTimeEdit_ActionEvent_Callback(QTimeEdit_ActionEvent_Callback cb) { qtimeedit_actionevent_callback = cb; }
    inline void setQTimeEdit_DragEnterEvent_Callback(QTimeEdit_DragEnterEvent_Callback cb) { qtimeedit_dragenterevent_callback = cb; }
    inline void setQTimeEdit_DragMoveEvent_Callback(QTimeEdit_DragMoveEvent_Callback cb) { qtimeedit_dragmoveevent_callback = cb; }
    inline void setQTimeEdit_DragLeaveEvent_Callback(QTimeEdit_DragLeaveEvent_Callback cb) { qtimeedit_dragleaveevent_callback = cb; }
    inline void setQTimeEdit_DropEvent_Callback(QTimeEdit_DropEvent_Callback cb) { qtimeedit_dropevent_callback = cb; }
    inline void setQTimeEdit_NativeEvent_Callback(QTimeEdit_NativeEvent_Callback cb) { qtimeedit_nativeevent_callback = cb; }
    inline void setQTimeEdit_Metric_Callback(QTimeEdit_Metric_Callback cb) { qtimeedit_metric_callback = cb; }
    inline void setQTimeEdit_InitPainter_Callback(QTimeEdit_InitPainter_Callback cb) { qtimeedit_initpainter_callback = cb; }
    inline void setQTimeEdit_Redirected_Callback(QTimeEdit_Redirected_Callback cb) { qtimeedit_redirected_callback = cb; }
    inline void setQTimeEdit_SharedPainter_Callback(QTimeEdit_SharedPainter_Callback cb) { qtimeedit_sharedpainter_callback = cb; }
    inline void setQTimeEdit_InputMethodEvent_Callback(QTimeEdit_InputMethodEvent_Callback cb) { qtimeedit_inputmethodevent_callback = cb; }
    inline void setQTimeEdit_EventFilter_Callback(QTimeEdit_EventFilter_Callback cb) { qtimeedit_eventfilter_callback = cb; }
    inline void setQTimeEdit_ChildEvent_Callback(QTimeEdit_ChildEvent_Callback cb) { qtimeedit_childevent_callback = cb; }
    inline void setQTimeEdit_CustomEvent_Callback(QTimeEdit_CustomEvent_Callback cb) { qtimeedit_customevent_callback = cb; }
    inline void setQTimeEdit_ConnectNotify_Callback(QTimeEdit_ConnectNotify_Callback cb) { qtimeedit_connectnotify_callback = cb; }
    inline void setQTimeEdit_DisconnectNotify_Callback(QTimeEdit_DisconnectNotify_Callback cb) { qtimeedit_disconnectnotify_callback = cb; }
    inline void setQTimeEdit_LineEdit_Callback(QTimeEdit_LineEdit_Callback cb) { qtimeedit_lineedit_callback = cb; }
    inline void setQTimeEdit_SetLineEdit_Callback(QTimeEdit_SetLineEdit_Callback cb) { qtimeedit_setlineedit_callback = cb; }
    inline void setQTimeEdit_UpdateMicroFocus_Callback(QTimeEdit_UpdateMicroFocus_Callback cb) { qtimeedit_updatemicrofocus_callback = cb; }
    inline void setQTimeEdit_Create_Callback(QTimeEdit_Create_Callback cb) { qtimeedit_create_callback = cb; }
    inline void setQTimeEdit_Destroy_Callback(QTimeEdit_Destroy_Callback cb) { qtimeedit_destroy_callback = cb; }
    inline void setQTimeEdit_FocusNextChild_Callback(QTimeEdit_FocusNextChild_Callback cb) { qtimeedit_focusnextchild_callback = cb; }
    inline void setQTimeEdit_FocusPreviousChild_Callback(QTimeEdit_FocusPreviousChild_Callback cb) { qtimeedit_focuspreviouschild_callback = cb; }
    inline void setQTimeEdit_Sender_Callback(QTimeEdit_Sender_Callback cb) { qtimeedit_sender_callback = cb; }
    inline void setQTimeEdit_SenderSignalIndex_Callback(QTimeEdit_SenderSignalIndex_Callback cb) { qtimeedit_sendersignalindex_callback = cb; }
    inline void setQTimeEdit_Receivers_Callback(QTimeEdit_Receivers_Callback cb) { qtimeedit_receivers_callback = cb; }
    inline void setQTimeEdit_IsSignalConnected_Callback(QTimeEdit_IsSignalConnected_Callback cb) { qtimeedit_issignalconnected_callback = cb; }
    inline void setQTimeEdit_GetDecodedMetricF_Callback(QTimeEdit_GetDecodedMetricF_Callback cb) { qtimeedit_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQTimeEdit_MetaObject_IsBase(bool value) const { qtimeedit_metaobject_isbase = value; }
    inline void setQTimeEdit_Metacast_IsBase(bool value) const { qtimeedit_metacast_isbase = value; }
    inline void setQTimeEdit_Metacall_IsBase(bool value) const { qtimeedit_metacall_isbase = value; }
    inline void setQTimeEdit_SizeHint_IsBase(bool value) const { qtimeedit_sizehint_isbase = value; }
    inline void setQTimeEdit_Clear_IsBase(bool value) const { qtimeedit_clear_isbase = value; }
    inline void setQTimeEdit_StepBy_IsBase(bool value) const { qtimeedit_stepby_isbase = value; }
    inline void setQTimeEdit_Event_IsBase(bool value) const { qtimeedit_event_isbase = value; }
    inline void setQTimeEdit_KeyPressEvent_IsBase(bool value) const { qtimeedit_keypressevent_isbase = value; }
    inline void setQTimeEdit_WheelEvent_IsBase(bool value) const { qtimeedit_wheelevent_isbase = value; }
    inline void setQTimeEdit_FocusInEvent_IsBase(bool value) const { qtimeedit_focusinevent_isbase = value; }
    inline void setQTimeEdit_FocusNextPrevChild_IsBase(bool value) const { qtimeedit_focusnextprevchild_isbase = value; }
    inline void setQTimeEdit_Validate_IsBase(bool value) const { qtimeedit_validate_isbase = value; }
    inline void setQTimeEdit_Fixup_IsBase(bool value) const { qtimeedit_fixup_isbase = value; }
    inline void setQTimeEdit_DateTimeFromText_IsBase(bool value) const { qtimeedit_datetimefromtext_isbase = value; }
    inline void setQTimeEdit_TextFromDateTime_IsBase(bool value) const { qtimeedit_textfromdatetime_isbase = value; }
    inline void setQTimeEdit_StepEnabled_IsBase(bool value) const { qtimeedit_stepenabled_isbase = value; }
    inline void setQTimeEdit_MousePressEvent_IsBase(bool value) const { qtimeedit_mousepressevent_isbase = value; }
    inline void setQTimeEdit_PaintEvent_IsBase(bool value) const { qtimeedit_paintevent_isbase = value; }
    inline void setQTimeEdit_InitStyleOption_IsBase(bool value) const { qtimeedit_initstyleoption_isbase = value; }
    inline void setQTimeEdit_MinimumSizeHint_IsBase(bool value) const { qtimeedit_minimumsizehint_isbase = value; }
    inline void setQTimeEdit_InputMethodQuery_IsBase(bool value) const { qtimeedit_inputmethodquery_isbase = value; }
    inline void setQTimeEdit_ResizeEvent_IsBase(bool value) const { qtimeedit_resizeevent_isbase = value; }
    inline void setQTimeEdit_KeyReleaseEvent_IsBase(bool value) const { qtimeedit_keyreleaseevent_isbase = value; }
    inline void setQTimeEdit_FocusOutEvent_IsBase(bool value) const { qtimeedit_focusoutevent_isbase = value; }
    inline void setQTimeEdit_ContextMenuEvent_IsBase(bool value) const { qtimeedit_contextmenuevent_isbase = value; }
    inline void setQTimeEdit_ChangeEvent_IsBase(bool value) const { qtimeedit_changeevent_isbase = value; }
    inline void setQTimeEdit_CloseEvent_IsBase(bool value) const { qtimeedit_closeevent_isbase = value; }
    inline void setQTimeEdit_HideEvent_IsBase(bool value) const { qtimeedit_hideevent_isbase = value; }
    inline void setQTimeEdit_MouseReleaseEvent_IsBase(bool value) const { qtimeedit_mousereleaseevent_isbase = value; }
    inline void setQTimeEdit_MouseMoveEvent_IsBase(bool value) const { qtimeedit_mousemoveevent_isbase = value; }
    inline void setQTimeEdit_TimerEvent_IsBase(bool value) const { qtimeedit_timerevent_isbase = value; }
    inline void setQTimeEdit_ShowEvent_IsBase(bool value) const { qtimeedit_showevent_isbase = value; }
    inline void setQTimeEdit_DevType_IsBase(bool value) const { qtimeedit_devtype_isbase = value; }
    inline void setQTimeEdit_SetVisible_IsBase(bool value) const { qtimeedit_setvisible_isbase = value; }
    inline void setQTimeEdit_HeightForWidth_IsBase(bool value) const { qtimeedit_heightforwidth_isbase = value; }
    inline void setQTimeEdit_HasHeightForWidth_IsBase(bool value) const { qtimeedit_hasheightforwidth_isbase = value; }
    inline void setQTimeEdit_PaintEngine_IsBase(bool value) const { qtimeedit_paintengine_isbase = value; }
    inline void setQTimeEdit_MouseDoubleClickEvent_IsBase(bool value) const { qtimeedit_mousedoubleclickevent_isbase = value; }
    inline void setQTimeEdit_EnterEvent_IsBase(bool value) const { qtimeedit_enterevent_isbase = value; }
    inline void setQTimeEdit_LeaveEvent_IsBase(bool value) const { qtimeedit_leaveevent_isbase = value; }
    inline void setQTimeEdit_MoveEvent_IsBase(bool value) const { qtimeedit_moveevent_isbase = value; }
    inline void setQTimeEdit_TabletEvent_IsBase(bool value) const { qtimeedit_tabletevent_isbase = value; }
    inline void setQTimeEdit_ActionEvent_IsBase(bool value) const { qtimeedit_actionevent_isbase = value; }
    inline void setQTimeEdit_DragEnterEvent_IsBase(bool value) const { qtimeedit_dragenterevent_isbase = value; }
    inline void setQTimeEdit_DragMoveEvent_IsBase(bool value) const { qtimeedit_dragmoveevent_isbase = value; }
    inline void setQTimeEdit_DragLeaveEvent_IsBase(bool value) const { qtimeedit_dragleaveevent_isbase = value; }
    inline void setQTimeEdit_DropEvent_IsBase(bool value) const { qtimeedit_dropevent_isbase = value; }
    inline void setQTimeEdit_NativeEvent_IsBase(bool value) const { qtimeedit_nativeevent_isbase = value; }
    inline void setQTimeEdit_Metric_IsBase(bool value) const { qtimeedit_metric_isbase = value; }
    inline void setQTimeEdit_InitPainter_IsBase(bool value) const { qtimeedit_initpainter_isbase = value; }
    inline void setQTimeEdit_Redirected_IsBase(bool value) const { qtimeedit_redirected_isbase = value; }
    inline void setQTimeEdit_SharedPainter_IsBase(bool value) const { qtimeedit_sharedpainter_isbase = value; }
    inline void setQTimeEdit_InputMethodEvent_IsBase(bool value) const { qtimeedit_inputmethodevent_isbase = value; }
    inline void setQTimeEdit_EventFilter_IsBase(bool value) const { qtimeedit_eventfilter_isbase = value; }
    inline void setQTimeEdit_ChildEvent_IsBase(bool value) const { qtimeedit_childevent_isbase = value; }
    inline void setQTimeEdit_CustomEvent_IsBase(bool value) const { qtimeedit_customevent_isbase = value; }
    inline void setQTimeEdit_ConnectNotify_IsBase(bool value) const { qtimeedit_connectnotify_isbase = value; }
    inline void setQTimeEdit_DisconnectNotify_IsBase(bool value) const { qtimeedit_disconnectnotify_isbase = value; }
    inline void setQTimeEdit_LineEdit_IsBase(bool value) const { qtimeedit_lineedit_isbase = value; }
    inline void setQTimeEdit_SetLineEdit_IsBase(bool value) const { qtimeedit_setlineedit_isbase = value; }
    inline void setQTimeEdit_UpdateMicroFocus_IsBase(bool value) const { qtimeedit_updatemicrofocus_isbase = value; }
    inline void setQTimeEdit_Create_IsBase(bool value) const { qtimeedit_create_isbase = value; }
    inline void setQTimeEdit_Destroy_IsBase(bool value) const { qtimeedit_destroy_isbase = value; }
    inline void setQTimeEdit_FocusNextChild_IsBase(bool value) const { qtimeedit_focusnextchild_isbase = value; }
    inline void setQTimeEdit_FocusPreviousChild_IsBase(bool value) const { qtimeedit_focuspreviouschild_isbase = value; }
    inline void setQTimeEdit_Sender_IsBase(bool value) const { qtimeedit_sender_isbase = value; }
    inline void setQTimeEdit_SenderSignalIndex_IsBase(bool value) const { qtimeedit_sendersignalindex_isbase = value; }
    inline void setQTimeEdit_Receivers_IsBase(bool value) const { qtimeedit_receivers_isbase = value; }
    inline void setQTimeEdit_IsSignalConnected_IsBase(bool value) const { qtimeedit_issignalconnected_isbase = value; }
    inline void setQTimeEdit_GetDecodedMetricF_IsBase(bool value) const { qtimeedit_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtimeedit_metaobject_isbase) {
            qtimeedit_metaobject_isbase = false;
            return QTimeEdit::metaObject();
        }
        auto metaobject_cb = qtimeedit_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QTimeEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtimeedit_metacast_isbase) {
            qtimeedit_metacast_isbase = false;
            return QTimeEdit::qt_metacast(param1);
        }
        auto metacast_cb = qtimeedit_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QTimeEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtimeedit_metacall_isbase) {
            qtimeedit_metacall_isbase = false;
            return QTimeEdit::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qtimeedit_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTimeEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtimeedit_sizehint_isbase) {
            qtimeedit_sizehint_isbase = false;
            return QTimeEdit::sizeHint();
        }
        auto sizehint_cb = qtimeedit_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QTimeEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qtimeedit_clear_isbase) {
            qtimeedit_clear_isbase = false;
            QTimeEdit::clear();
            return;
        }
        auto clear_cb = qtimeedit_clear_callback;
        if (clear_cb) {
            clear_cb();
            return;
        }
        QTimeEdit::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual void stepBy(int steps) override {
        if (qtimeedit_stepby_isbase) {
            qtimeedit_stepby_isbase = false;
            QTimeEdit::stepBy(steps);
            return;
        }
        auto stepby_cb = qtimeedit_stepby_callback;
        if (stepby_cb) {
            int cbval1 = steps;

            stepby_cb(this, cbval1);
            return;
        }
        QTimeEdit::stepBy(steps);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtimeedit_event_isbase) {
            qtimeedit_event_isbase = false;
            return QTimeEdit::event(event);
        }
        auto event_cb = qtimeedit_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QTimeEdit::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qtimeedit_keypressevent_isbase) {
            qtimeedit_keypressevent_isbase = false;
            QTimeEdit::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qtimeedit_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qtimeedit_wheelevent_isbase) {
            qtimeedit_wheelevent_isbase = false;
            QTimeEdit::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qtimeedit_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtimeedit_focusinevent_isbase) {
            qtimeedit_focusinevent_isbase = false;
            QTimeEdit::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qtimeedit_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtimeedit_focusnextprevchild_isbase) {
            qtimeedit_focusnextprevchild_isbase = false;
            return QTimeEdit::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qtimeedit_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QTimeEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& input, int& pos) const override {
        if (qtimeedit_validate_isbase) {
            qtimeedit_validate_isbase = false;
            return QTimeEdit::validate(input, pos);
        }
        auto validate_cb = qtimeedit_validate_callback;
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
        return QTimeEdit::validate(input, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& input) const override {
        if (qtimeedit_fixup_isbase) {
            qtimeedit_fixup_isbase = false;
            QTimeEdit::fixup(input);
            return;
        }
        auto fixup_cb = qtimeedit_fixup_callback;
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
        QTimeEdit::fixup(input);
    }

    // Virtual method for C ABI access and custom callback
    virtual QDateTime dateTimeFromText(const QString& text) const override {
        if (qtimeedit_datetimefromtext_isbase) {
            qtimeedit_datetimefromtext_isbase = false;
            return QTimeEdit::dateTimeFromText(text);
        }
        auto datetimefromtext_cb = qtimeedit_datetimefromtext_callback;
        if (datetimefromtext_cb) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;

            QDateTime* callback_ret = datetimefromtext_cb(this, cbval1);
            libqt_free(text_str);
            return *callback_ret;
        }
        return QTimeEdit::dateTimeFromText(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString textFromDateTime(const QDateTime& dt) const override {
        if (qtimeedit_textfromdatetime_isbase) {
            qtimeedit_textfromdatetime_isbase = false;
            return QTimeEdit::textFromDateTime(dt);
        }
        auto textfromdatetime_cb = qtimeedit_textfromdatetime_callback;
        if (textfromdatetime_cb) {
            const QDateTime& dt_ret = dt;
            // Cast returned reference into pointer
            QDateTime* cbval1 = const_cast<QDateTime*>(&dt_ret);

            const char* callback_ret = textfromdatetime_cb(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QTimeEdit::textFromDateTime(dt);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
        if (qtimeedit_stepenabled_isbase) {
            qtimeedit_stepenabled_isbase = false;
            return QTimeEdit::stepEnabled();
        }
        auto stepenabled_cb = qtimeedit_stepenabled_callback;
        if (stepenabled_cb) {
            int callback_ret = stepenabled_cb();
            return static_cast<QAbstractSpinBox::StepEnabled>(callback_ret);
        }
        return QTimeEdit::stepEnabled();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtimeedit_mousepressevent_isbase) {
            qtimeedit_mousepressevent_isbase = false;
            QTimeEdit::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qtimeedit_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qtimeedit_paintevent_isbase) {
            qtimeedit_paintevent_isbase = false;
            QTimeEdit::paintEvent(event);
            return;
        }
        auto paintevent_cb = qtimeedit_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
        if (qtimeedit_initstyleoption_isbase) {
            qtimeedit_initstyleoption_isbase = false;
            QTimeEdit::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qtimeedit_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionSpinBox* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QTimeEdit::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtimeedit_minimumsizehint_isbase) {
            qtimeedit_minimumsizehint_isbase = false;
            return QTimeEdit::minimumSizeHint();
        }
        auto minimumsizehint_cb = qtimeedit_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QTimeEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qtimeedit_inputmethodquery_isbase) {
            qtimeedit_inputmethodquery_isbase = false;
            return QTimeEdit::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qtimeedit_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QTimeEdit::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qtimeedit_resizeevent_isbase) {
            qtimeedit_resizeevent_isbase = false;
            QTimeEdit::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = qtimeedit_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtimeedit_keyreleaseevent_isbase) {
            qtimeedit_keyreleaseevent_isbase = false;
            QTimeEdit::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qtimeedit_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtimeedit_focusoutevent_isbase) {
            qtimeedit_focusoutevent_isbase = false;
            QTimeEdit::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qtimeedit_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qtimeedit_contextmenuevent_isbase) {
            qtimeedit_contextmenuevent_isbase = false;
            QTimeEdit::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qtimeedit_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qtimeedit_changeevent_isbase) {
            qtimeedit_changeevent_isbase = false;
            QTimeEdit::changeEvent(event);
            return;
        }
        auto changeevent_cb = qtimeedit_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = event;

            changeevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtimeedit_closeevent_isbase) {
            qtimeedit_closeevent_isbase = false;
            QTimeEdit::closeEvent(event);
            return;
        }
        auto closeevent_cb = qtimeedit_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtimeedit_hideevent_isbase) {
            qtimeedit_hideevent_isbase = false;
            QTimeEdit::hideEvent(event);
            return;
        }
        auto hideevent_cb = qtimeedit_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtimeedit_mousereleaseevent_isbase) {
            qtimeedit_mousereleaseevent_isbase = false;
            QTimeEdit::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qtimeedit_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtimeedit_mousemoveevent_isbase) {
            qtimeedit_mousemoveevent_isbase = false;
            QTimeEdit::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qtimeedit_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtimeedit_timerevent_isbase) {
            qtimeedit_timerevent_isbase = false;
            QTimeEdit::timerEvent(event);
            return;
        }
        auto timerevent_cb = qtimeedit_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qtimeedit_showevent_isbase) {
            qtimeedit_showevent_isbase = false;
            QTimeEdit::showEvent(event);
            return;
        }
        auto showevent_cb = qtimeedit_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtimeedit_devtype_isbase) {
            qtimeedit_devtype_isbase = false;
            return QTimeEdit::devType();
        }
        auto devtype_cb = qtimeedit_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QTimeEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtimeedit_setvisible_isbase) {
            qtimeedit_setvisible_isbase = false;
            QTimeEdit::setVisible(visible);
            return;
        }
        auto setvisible_cb = qtimeedit_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QTimeEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtimeedit_heightforwidth_isbase) {
            qtimeedit_heightforwidth_isbase = false;
            return QTimeEdit::heightForWidth(param1);
        }
        auto heightforwidth_cb = qtimeedit_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTimeEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtimeedit_hasheightforwidth_isbase) {
            qtimeedit_hasheightforwidth_isbase = false;
            return QTimeEdit::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qtimeedit_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QTimeEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtimeedit_paintengine_isbase) {
            qtimeedit_paintengine_isbase = false;
            return QTimeEdit::paintEngine();
        }
        auto paintengine_cb = qtimeedit_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QTimeEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtimeedit_mousedoubleclickevent_isbase) {
            qtimeedit_mousedoubleclickevent_isbase = false;
            QTimeEdit::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qtimeedit_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtimeedit_enterevent_isbase) {
            qtimeedit_enterevent_isbase = false;
            QTimeEdit::enterEvent(event);
            return;
        }
        auto enterevent_cb = qtimeedit_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtimeedit_leaveevent_isbase) {
            qtimeedit_leaveevent_isbase = false;
            QTimeEdit::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qtimeedit_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtimeedit_moveevent_isbase) {
            qtimeedit_moveevent_isbase = false;
            QTimeEdit::moveEvent(event);
            return;
        }
        auto moveevent_cb = qtimeedit_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtimeedit_tabletevent_isbase) {
            qtimeedit_tabletevent_isbase = false;
            QTimeEdit::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qtimeedit_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtimeedit_actionevent_isbase) {
            qtimeedit_actionevent_isbase = false;
            QTimeEdit::actionEvent(event);
            return;
        }
        auto actionevent_cb = qtimeedit_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtimeedit_dragenterevent_isbase) {
            qtimeedit_dragenterevent_isbase = false;
            QTimeEdit::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qtimeedit_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtimeedit_dragmoveevent_isbase) {
            qtimeedit_dragmoveevent_isbase = false;
            QTimeEdit::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qtimeedit_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtimeedit_dragleaveevent_isbase) {
            qtimeedit_dragleaveevent_isbase = false;
            QTimeEdit::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qtimeedit_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtimeedit_dropevent_isbase) {
            qtimeedit_dropevent_isbase = false;
            QTimeEdit::dropEvent(event);
            return;
        }
        auto dropevent_cb = qtimeedit_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtimeedit_nativeevent_isbase) {
            qtimeedit_nativeevent_isbase = false;
            return QTimeEdit::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qtimeedit_nativeevent_callback;
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
        return QTimeEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtimeedit_metric_isbase) {
            qtimeedit_metric_isbase = false;
            return QTimeEdit::metric(param1);
        }
        auto metric_cb = qtimeedit_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTimeEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtimeedit_initpainter_isbase) {
            qtimeedit_initpainter_isbase = false;
            QTimeEdit::initPainter(painter);
            return;
        }
        auto initpainter_cb = qtimeedit_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QTimeEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtimeedit_redirected_isbase) {
            qtimeedit_redirected_isbase = false;
            return QTimeEdit::redirected(offset);
        }
        auto redirected_cb = qtimeedit_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QTimeEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtimeedit_sharedpainter_isbase) {
            qtimeedit_sharedpainter_isbase = false;
            return QTimeEdit::sharedPainter();
        }
        auto sharedpainter_cb = qtimeedit_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QTimeEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qtimeedit_inputmethodevent_isbase) {
            qtimeedit_inputmethodevent_isbase = false;
            QTimeEdit::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qtimeedit_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtimeedit_eventfilter_isbase) {
            qtimeedit_eventfilter_isbase = false;
            return QTimeEdit::eventFilter(watched, event);
        }
        auto eventfilter_cb = qtimeedit_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTimeEdit::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtimeedit_childevent_isbase) {
            qtimeedit_childevent_isbase = false;
            QTimeEdit::childEvent(event);
            return;
        }
        auto childevent_cb = qtimeedit_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtimeedit_customevent_isbase) {
            qtimeedit_customevent_isbase = false;
            QTimeEdit::customEvent(event);
            return;
        }
        auto customevent_cb = qtimeedit_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QTimeEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtimeedit_connectnotify_isbase) {
            qtimeedit_connectnotify_isbase = false;
            QTimeEdit::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qtimeedit_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QTimeEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtimeedit_disconnectnotify_isbase) {
            qtimeedit_disconnectnotify_isbase = false;
            QTimeEdit::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qtimeedit_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QTimeEdit::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QLineEdit* lineEdit() const {
        if (qtimeedit_lineedit_isbase) {
            qtimeedit_lineedit_isbase = false;
            return QTimeEdit::lineEdit();
        }
        auto lineedit_cb = qtimeedit_lineedit_callback;
        if (lineedit_cb) {
            QLineEdit* callback_ret = lineedit_cb();
            return callback_ret;
        }
        return QTimeEdit::lineEdit();
    }

    // Virtual method for C ABI access and custom callback
    void setLineEdit(QLineEdit* edit) {
        if (qtimeedit_setlineedit_isbase) {
            qtimeedit_setlineedit_isbase = false;
            QTimeEdit::setLineEdit(edit);
            return;
        }
        auto setlineedit_cb = qtimeedit_setlineedit_callback;
        if (setlineedit_cb) {
            QLineEdit* cbval1 = edit;

            setlineedit_cb(this, cbval1);
            return;
        }
        QTimeEdit::setLineEdit(edit);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qtimeedit_updatemicrofocus_isbase) {
            qtimeedit_updatemicrofocus_isbase = false;
            QTimeEdit::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qtimeedit_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QTimeEdit::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qtimeedit_create_isbase) {
            qtimeedit_create_isbase = false;
            QTimeEdit::create();
            return;
        }
        auto create_cb = qtimeedit_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QTimeEdit::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qtimeedit_destroy_isbase) {
            qtimeedit_destroy_isbase = false;
            QTimeEdit::destroy();
            return;
        }
        auto destroy_cb = qtimeedit_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QTimeEdit::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qtimeedit_focusnextchild_isbase) {
            qtimeedit_focusnextchild_isbase = false;
            return QTimeEdit::focusNextChild();
        }
        auto focusnextchild_cb = qtimeedit_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QTimeEdit::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qtimeedit_focuspreviouschild_isbase) {
            qtimeedit_focuspreviouschild_isbase = false;
            return QTimeEdit::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qtimeedit_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QTimeEdit::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtimeedit_sender_isbase) {
            qtimeedit_sender_isbase = false;
            return QTimeEdit::sender();
        }
        auto sender_cb = qtimeedit_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QTimeEdit::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtimeedit_sendersignalindex_isbase) {
            qtimeedit_sendersignalindex_isbase = false;
            return QTimeEdit::senderSignalIndex();
        }
        auto sendersignalindex_cb = qtimeedit_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QTimeEdit::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtimeedit_receivers_isbase) {
            qtimeedit_receivers_isbase = false;
            return QTimeEdit::receivers(signal);
        }
        auto receivers_cb = qtimeedit_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTimeEdit::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtimeedit_issignalconnected_isbase) {
            qtimeedit_issignalconnected_isbase = false;
            return QTimeEdit::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qtimeedit_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QTimeEdit::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qtimeedit_getdecodedmetricf_isbase) {
            qtimeedit_getdecodedmetricf_isbase = false;
            return QTimeEdit::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qtimeedit_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QTimeEdit::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void QTimeEdit_KeyPressEvent(QTimeEdit* self, QKeyEvent* event);
    friend void QTimeEdit_SuperKeyPressEvent(QTimeEdit* self, QKeyEvent* event);
    friend void QTimeEdit_WheelEvent(QTimeEdit* self, QWheelEvent* event);
    friend void QTimeEdit_SuperWheelEvent(QTimeEdit* self, QWheelEvent* event);
    friend void QTimeEdit_FocusInEvent(QTimeEdit* self, QFocusEvent* event);
    friend void QTimeEdit_SuperFocusInEvent(QTimeEdit* self, QFocusEvent* event);
    friend bool QTimeEdit_FocusNextPrevChild(QTimeEdit* self, bool next);
    friend bool QTimeEdit_SuperFocusNextPrevChild(QTimeEdit* self, bool next);
    friend int QTimeEdit_Validate(const QTimeEdit* self, libqt_string input, int* pos);
    friend int QTimeEdit_SuperValidate(const QTimeEdit* self, libqt_string input, int* pos);
    friend void QTimeEdit_Fixup(const QTimeEdit* self, libqt_string input);
    friend void QTimeEdit_SuperFixup(const QTimeEdit* self, libqt_string input);
    friend QDateTime* QTimeEdit_DateTimeFromText(const QTimeEdit* self, const libqt_string text);
    friend QDateTime* QTimeEdit_SuperDateTimeFromText(const QTimeEdit* self, const libqt_string text);
    friend libqt_string QTimeEdit_TextFromDateTime(const QTimeEdit* self, const QDateTime* dt);
    friend libqt_string QTimeEdit_SuperTextFromDateTime(const QTimeEdit* self, const QDateTime* dt);
    friend int QTimeEdit_StepEnabled(const QTimeEdit* self);
    friend int QTimeEdit_SuperStepEnabled(const QTimeEdit* self);
    friend void QTimeEdit_MousePressEvent(QTimeEdit* self, QMouseEvent* event);
    friend void QTimeEdit_SuperMousePressEvent(QTimeEdit* self, QMouseEvent* event);
    friend void QTimeEdit_PaintEvent(QTimeEdit* self, QPaintEvent* event);
    friend void QTimeEdit_SuperPaintEvent(QTimeEdit* self, QPaintEvent* event);
    friend void QTimeEdit_InitStyleOption(const QTimeEdit* self, QStyleOptionSpinBox* option);
    friend void QTimeEdit_SuperInitStyleOption(const QTimeEdit* self, QStyleOptionSpinBox* option);
    friend void QTimeEdit_ResizeEvent(QTimeEdit* self, QResizeEvent* event);
    friend void QTimeEdit_SuperResizeEvent(QTimeEdit* self, QResizeEvent* event);
    friend void QTimeEdit_KeyReleaseEvent(QTimeEdit* self, QKeyEvent* event);
    friend void QTimeEdit_SuperKeyReleaseEvent(QTimeEdit* self, QKeyEvent* event);
    friend void QTimeEdit_FocusOutEvent(QTimeEdit* self, QFocusEvent* event);
    friend void QTimeEdit_SuperFocusOutEvent(QTimeEdit* self, QFocusEvent* event);
    friend void QTimeEdit_ContextMenuEvent(QTimeEdit* self, QContextMenuEvent* event);
    friend void QTimeEdit_SuperContextMenuEvent(QTimeEdit* self, QContextMenuEvent* event);
    friend void QTimeEdit_ChangeEvent(QTimeEdit* self, QEvent* event);
    friend void QTimeEdit_SuperChangeEvent(QTimeEdit* self, QEvent* event);
    friend void QTimeEdit_CloseEvent(QTimeEdit* self, QCloseEvent* event);
    friend void QTimeEdit_SuperCloseEvent(QTimeEdit* self, QCloseEvent* event);
    friend void QTimeEdit_HideEvent(QTimeEdit* self, QHideEvent* event);
    friend void QTimeEdit_SuperHideEvent(QTimeEdit* self, QHideEvent* event);
    friend void QTimeEdit_MouseReleaseEvent(QTimeEdit* self, QMouseEvent* event);
    friend void QTimeEdit_SuperMouseReleaseEvent(QTimeEdit* self, QMouseEvent* event);
    friend void QTimeEdit_MouseMoveEvent(QTimeEdit* self, QMouseEvent* event);
    friend void QTimeEdit_SuperMouseMoveEvent(QTimeEdit* self, QMouseEvent* event);
    friend void QTimeEdit_TimerEvent(QTimeEdit* self, QTimerEvent* event);
    friend void QTimeEdit_SuperTimerEvent(QTimeEdit* self, QTimerEvent* event);
    friend void QTimeEdit_ShowEvent(QTimeEdit* self, QShowEvent* event);
    friend void QTimeEdit_SuperShowEvent(QTimeEdit* self, QShowEvent* event);
    friend void QTimeEdit_MouseDoubleClickEvent(QTimeEdit* self, QMouseEvent* event);
    friend void QTimeEdit_SuperMouseDoubleClickEvent(QTimeEdit* self, QMouseEvent* event);
    friend void QTimeEdit_EnterEvent(QTimeEdit* self, QEnterEvent* event);
    friend void QTimeEdit_SuperEnterEvent(QTimeEdit* self, QEnterEvent* event);
    friend void QTimeEdit_LeaveEvent(QTimeEdit* self, QEvent* event);
    friend void QTimeEdit_SuperLeaveEvent(QTimeEdit* self, QEvent* event);
    friend void QTimeEdit_MoveEvent(QTimeEdit* self, QMoveEvent* event);
    friend void QTimeEdit_SuperMoveEvent(QTimeEdit* self, QMoveEvent* event);
    friend void QTimeEdit_TabletEvent(QTimeEdit* self, QTabletEvent* event);
    friend void QTimeEdit_SuperTabletEvent(QTimeEdit* self, QTabletEvent* event);
    friend void QTimeEdit_ActionEvent(QTimeEdit* self, QActionEvent* event);
    friend void QTimeEdit_SuperActionEvent(QTimeEdit* self, QActionEvent* event);
    friend void QTimeEdit_DragEnterEvent(QTimeEdit* self, QDragEnterEvent* event);
    friend void QTimeEdit_SuperDragEnterEvent(QTimeEdit* self, QDragEnterEvent* event);
    friend void QTimeEdit_DragMoveEvent(QTimeEdit* self, QDragMoveEvent* event);
    friend void QTimeEdit_SuperDragMoveEvent(QTimeEdit* self, QDragMoveEvent* event);
    friend void QTimeEdit_DragLeaveEvent(QTimeEdit* self, QDragLeaveEvent* event);
    friend void QTimeEdit_SuperDragLeaveEvent(QTimeEdit* self, QDragLeaveEvent* event);
    friend void QTimeEdit_DropEvent(QTimeEdit* self, QDropEvent* event);
    friend void QTimeEdit_SuperDropEvent(QTimeEdit* self, QDropEvent* event);
    friend bool QTimeEdit_NativeEvent(QTimeEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QTimeEdit_SuperNativeEvent(QTimeEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QTimeEdit_Metric(const QTimeEdit* self, int param1);
    friend int QTimeEdit_SuperMetric(const QTimeEdit* self, int param1);
    friend void QTimeEdit_InitPainter(const QTimeEdit* self, QPainter* painter);
    friend void QTimeEdit_SuperInitPainter(const QTimeEdit* self, QPainter* painter);
    friend QPaintDevice* QTimeEdit_Redirected(const QTimeEdit* self, QPoint* offset);
    friend QPaintDevice* QTimeEdit_SuperRedirected(const QTimeEdit* self, QPoint* offset);
    friend QPainter* QTimeEdit_SharedPainter(const QTimeEdit* self);
    friend QPainter* QTimeEdit_SuperSharedPainter(const QTimeEdit* self);
    friend void QTimeEdit_InputMethodEvent(QTimeEdit* self, QInputMethodEvent* param1);
    friend void QTimeEdit_SuperInputMethodEvent(QTimeEdit* self, QInputMethodEvent* param1);
    friend void QTimeEdit_ChildEvent(QTimeEdit* self, QChildEvent* event);
    friend void QTimeEdit_SuperChildEvent(QTimeEdit* self, QChildEvent* event);
    friend void QTimeEdit_CustomEvent(QTimeEdit* self, QEvent* event);
    friend void QTimeEdit_SuperCustomEvent(QTimeEdit* self, QEvent* event);
    friend void QTimeEdit_ConnectNotify(QTimeEdit* self, const QMetaMethod* signal);
    friend void QTimeEdit_SuperConnectNotify(QTimeEdit* self, const QMetaMethod* signal);
    friend void QTimeEdit_DisconnectNotify(QTimeEdit* self, const QMetaMethod* signal);
    friend void QTimeEdit_SuperDisconnectNotify(QTimeEdit* self, const QMetaMethod* signal);
    friend QLineEdit* QTimeEdit_LineEdit(const QTimeEdit* self);
    friend QLineEdit* QTimeEdit_SuperLineEdit(const QTimeEdit* self);
    friend void QTimeEdit_SetLineEdit(QTimeEdit* self, QLineEdit* edit);
    friend void QTimeEdit_SuperSetLineEdit(QTimeEdit* self, QLineEdit* edit);
    friend void QTimeEdit_UpdateMicroFocus(QTimeEdit* self);
    friend void QTimeEdit_SuperUpdateMicroFocus(QTimeEdit* self);
    friend void QTimeEdit_Create(QTimeEdit* self);
    friend void QTimeEdit_SuperCreate(QTimeEdit* self);
    friend void QTimeEdit_Destroy(QTimeEdit* self);
    friend void QTimeEdit_SuperDestroy(QTimeEdit* self);
    friend bool QTimeEdit_FocusNextChild(QTimeEdit* self);
    friend bool QTimeEdit_SuperFocusNextChild(QTimeEdit* self);
    friend bool QTimeEdit_FocusPreviousChild(QTimeEdit* self);
    friend bool QTimeEdit_SuperFocusPreviousChild(QTimeEdit* self);
    friend QObject* QTimeEdit_Sender(const QTimeEdit* self);
    friend QObject* QTimeEdit_SuperSender(const QTimeEdit* self);
    friend int QTimeEdit_SenderSignalIndex(const QTimeEdit* self);
    friend int QTimeEdit_SuperSenderSignalIndex(const QTimeEdit* self);
    friend int QTimeEdit_Receivers(const QTimeEdit* self, const char* signal);
    friend int QTimeEdit_SuperReceivers(const QTimeEdit* self, const char* signal);
    friend bool QTimeEdit_IsSignalConnected(const QTimeEdit* self, const QMetaMethod* signal);
    friend bool QTimeEdit_SuperIsSignalConnected(const QTimeEdit* self, const QMetaMethod* signal);
    friend double QTimeEdit_GetDecodedMetricF(const QTimeEdit* self, int metricA, int metricB);
    friend double QTimeEdit_SuperGetDecodedMetricF(const QTimeEdit* self, int metricA, int metricB);
};

// This class is a subclass of QDateEdit so that we can call protected methods
class VirtualQDateEdit final : public QDateEdit {

  public:
    // Virtual class boolean flag
    bool isVirtualQDateEdit = true;

    // Virtual class public types (including callbacks)
    using QDateEdit_MetaObject_Callback = QMetaObject* (*)();
    using QDateEdit_Metacast_Callback = void* (*)(QDateEdit*, const char*);
    using QDateEdit_Metacall_Callback = int (*)(QDateEdit*, int, int, void**);
    using QDateEdit_SizeHint_Callback = QSize* (*)();
    using QDateEdit_Clear_Callback = void (*)();
    using QDateEdit_StepBy_Callback = void (*)(QDateEdit*, int);
    using QDateEdit_Event_Callback = bool (*)(QDateEdit*, QEvent*);
    using QDateEdit_KeyPressEvent_Callback = void (*)(QDateEdit*, QKeyEvent*);
    using QDateEdit_WheelEvent_Callback = void (*)(QDateEdit*, QWheelEvent*);
    using QDateEdit_FocusInEvent_Callback = void (*)(QDateEdit*, QFocusEvent*);
    using QDateEdit_FocusNextPrevChild_Callback = bool (*)(QDateEdit*, bool);
    using QDateEdit_Validate_Callback = int (*)(const QDateEdit*, const char*, int*);
    using QDateEdit_Fixup_Callback = void (*)(const QDateEdit*, const char*);
    using QDateEdit_DateTimeFromText_Callback = QDateTime* (*)(const QDateEdit*, const char*);
    using QDateEdit_TextFromDateTime_Callback = const char* (*)(const QDateEdit*, QDateTime*);
    using QDateEdit_StepEnabled_Callback = int (*)();
    using QDateEdit_MousePressEvent_Callback = void (*)(QDateEdit*, QMouseEvent*);
    using QDateEdit_PaintEvent_Callback = void (*)(QDateEdit*, QPaintEvent*);
    using QDateEdit_InitStyleOption_Callback = void (*)(const QDateEdit*, QStyleOptionSpinBox*);
    using QDateEdit_MinimumSizeHint_Callback = QSize* (*)();
    using QDateEdit_InputMethodQuery_Callback = QVariant* (*)(const QDateEdit*, int);
    using QDateEdit_ResizeEvent_Callback = void (*)(QDateEdit*, QResizeEvent*);
    using QDateEdit_KeyReleaseEvent_Callback = void (*)(QDateEdit*, QKeyEvent*);
    using QDateEdit_FocusOutEvent_Callback = void (*)(QDateEdit*, QFocusEvent*);
    using QDateEdit_ContextMenuEvent_Callback = void (*)(QDateEdit*, QContextMenuEvent*);
    using QDateEdit_ChangeEvent_Callback = void (*)(QDateEdit*, QEvent*);
    using QDateEdit_CloseEvent_Callback = void (*)(QDateEdit*, QCloseEvent*);
    using QDateEdit_HideEvent_Callback = void (*)(QDateEdit*, QHideEvent*);
    using QDateEdit_MouseReleaseEvent_Callback = void (*)(QDateEdit*, QMouseEvent*);
    using QDateEdit_MouseMoveEvent_Callback = void (*)(QDateEdit*, QMouseEvent*);
    using QDateEdit_TimerEvent_Callback = void (*)(QDateEdit*, QTimerEvent*);
    using QDateEdit_ShowEvent_Callback = void (*)(QDateEdit*, QShowEvent*);
    using QDateEdit_DevType_Callback = int (*)();
    using QDateEdit_SetVisible_Callback = void (*)(QDateEdit*, bool);
    using QDateEdit_HeightForWidth_Callback = int (*)(const QDateEdit*, int);
    using QDateEdit_HasHeightForWidth_Callback = bool (*)();
    using QDateEdit_PaintEngine_Callback = QPaintEngine* (*)();
    using QDateEdit_MouseDoubleClickEvent_Callback = void (*)(QDateEdit*, QMouseEvent*);
    using QDateEdit_EnterEvent_Callback = void (*)(QDateEdit*, QEnterEvent*);
    using QDateEdit_LeaveEvent_Callback = void (*)(QDateEdit*, QEvent*);
    using QDateEdit_MoveEvent_Callback = void (*)(QDateEdit*, QMoveEvent*);
    using QDateEdit_TabletEvent_Callback = void (*)(QDateEdit*, QTabletEvent*);
    using QDateEdit_ActionEvent_Callback = void (*)(QDateEdit*, QActionEvent*);
    using QDateEdit_DragEnterEvent_Callback = void (*)(QDateEdit*, QDragEnterEvent*);
    using QDateEdit_DragMoveEvent_Callback = void (*)(QDateEdit*, QDragMoveEvent*);
    using QDateEdit_DragLeaveEvent_Callback = void (*)(QDateEdit*, QDragLeaveEvent*);
    using QDateEdit_DropEvent_Callback = void (*)(QDateEdit*, QDropEvent*);
    using QDateEdit_NativeEvent_Callback = bool (*)(QDateEdit*, libqt_string, void*, intptr_t*);
    using QDateEdit_Metric_Callback = int (*)(const QDateEdit*, int);
    using QDateEdit_InitPainter_Callback = void (*)(const QDateEdit*, QPainter*);
    using QDateEdit_Redirected_Callback = QPaintDevice* (*)(const QDateEdit*, QPoint*);
    using QDateEdit_SharedPainter_Callback = QPainter* (*)();
    using QDateEdit_InputMethodEvent_Callback = void (*)(QDateEdit*, QInputMethodEvent*);
    using QDateEdit_EventFilter_Callback = bool (*)(QDateEdit*, QObject*, QEvent*);
    using QDateEdit_ChildEvent_Callback = void (*)(QDateEdit*, QChildEvent*);
    using QDateEdit_CustomEvent_Callback = void (*)(QDateEdit*, QEvent*);
    using QDateEdit_ConnectNotify_Callback = void (*)(QDateEdit*, QMetaMethod*);
    using QDateEdit_DisconnectNotify_Callback = void (*)(QDateEdit*, QMetaMethod*);
    using QDateEdit_LineEdit_Callback = QLineEdit* (*)();
    using QDateEdit_SetLineEdit_Callback = void (*)(QDateEdit*, QLineEdit*);
    using QDateEdit_UpdateMicroFocus_Callback = void (*)();
    using QDateEdit_Create_Callback = void (*)();
    using QDateEdit_Destroy_Callback = void (*)();
    using QDateEdit_FocusNextChild_Callback = bool (*)();
    using QDateEdit_FocusPreviousChild_Callback = bool (*)();
    using QDateEdit_Sender_Callback = QObject* (*)();
    using QDateEdit_SenderSignalIndex_Callback = int (*)();
    using QDateEdit_Receivers_Callback = int (*)(const QDateEdit*, const char*);
    using QDateEdit_IsSignalConnected_Callback = bool (*)(const QDateEdit*, QMetaMethod*);
    using QDateEdit_GetDecodedMetricF_Callback = double (*)(const QDateEdit*, int, int);

  protected:
    // Instance callback storage
    QDateEdit_MetaObject_Callback qdateedit_metaobject_callback = nullptr;
    QDateEdit_Metacast_Callback qdateedit_metacast_callback = nullptr;
    QDateEdit_Metacall_Callback qdateedit_metacall_callback = nullptr;
    QDateEdit_SizeHint_Callback qdateedit_sizehint_callback = nullptr;
    QDateEdit_Clear_Callback qdateedit_clear_callback = nullptr;
    QDateEdit_StepBy_Callback qdateedit_stepby_callback = nullptr;
    QDateEdit_Event_Callback qdateedit_event_callback = nullptr;
    QDateEdit_KeyPressEvent_Callback qdateedit_keypressevent_callback = nullptr;
    QDateEdit_WheelEvent_Callback qdateedit_wheelevent_callback = nullptr;
    QDateEdit_FocusInEvent_Callback qdateedit_focusinevent_callback = nullptr;
    QDateEdit_FocusNextPrevChild_Callback qdateedit_focusnextprevchild_callback = nullptr;
    QDateEdit_Validate_Callback qdateedit_validate_callback = nullptr;
    QDateEdit_Fixup_Callback qdateedit_fixup_callback = nullptr;
    QDateEdit_DateTimeFromText_Callback qdateedit_datetimefromtext_callback = nullptr;
    QDateEdit_TextFromDateTime_Callback qdateedit_textfromdatetime_callback = nullptr;
    QDateEdit_StepEnabled_Callback qdateedit_stepenabled_callback = nullptr;
    QDateEdit_MousePressEvent_Callback qdateedit_mousepressevent_callback = nullptr;
    QDateEdit_PaintEvent_Callback qdateedit_paintevent_callback = nullptr;
    QDateEdit_InitStyleOption_Callback qdateedit_initstyleoption_callback = nullptr;
    QDateEdit_MinimumSizeHint_Callback qdateedit_minimumsizehint_callback = nullptr;
    QDateEdit_InputMethodQuery_Callback qdateedit_inputmethodquery_callback = nullptr;
    QDateEdit_ResizeEvent_Callback qdateedit_resizeevent_callback = nullptr;
    QDateEdit_KeyReleaseEvent_Callback qdateedit_keyreleaseevent_callback = nullptr;
    QDateEdit_FocusOutEvent_Callback qdateedit_focusoutevent_callback = nullptr;
    QDateEdit_ContextMenuEvent_Callback qdateedit_contextmenuevent_callback = nullptr;
    QDateEdit_ChangeEvent_Callback qdateedit_changeevent_callback = nullptr;
    QDateEdit_CloseEvent_Callback qdateedit_closeevent_callback = nullptr;
    QDateEdit_HideEvent_Callback qdateedit_hideevent_callback = nullptr;
    QDateEdit_MouseReleaseEvent_Callback qdateedit_mousereleaseevent_callback = nullptr;
    QDateEdit_MouseMoveEvent_Callback qdateedit_mousemoveevent_callback = nullptr;
    QDateEdit_TimerEvent_Callback qdateedit_timerevent_callback = nullptr;
    QDateEdit_ShowEvent_Callback qdateedit_showevent_callback = nullptr;
    QDateEdit_DevType_Callback qdateedit_devtype_callback = nullptr;
    QDateEdit_SetVisible_Callback qdateedit_setvisible_callback = nullptr;
    QDateEdit_HeightForWidth_Callback qdateedit_heightforwidth_callback = nullptr;
    QDateEdit_HasHeightForWidth_Callback qdateedit_hasheightforwidth_callback = nullptr;
    QDateEdit_PaintEngine_Callback qdateedit_paintengine_callback = nullptr;
    QDateEdit_MouseDoubleClickEvent_Callback qdateedit_mousedoubleclickevent_callback = nullptr;
    QDateEdit_EnterEvent_Callback qdateedit_enterevent_callback = nullptr;
    QDateEdit_LeaveEvent_Callback qdateedit_leaveevent_callback = nullptr;
    QDateEdit_MoveEvent_Callback qdateedit_moveevent_callback = nullptr;
    QDateEdit_TabletEvent_Callback qdateedit_tabletevent_callback = nullptr;
    QDateEdit_ActionEvent_Callback qdateedit_actionevent_callback = nullptr;
    QDateEdit_DragEnterEvent_Callback qdateedit_dragenterevent_callback = nullptr;
    QDateEdit_DragMoveEvent_Callback qdateedit_dragmoveevent_callback = nullptr;
    QDateEdit_DragLeaveEvent_Callback qdateedit_dragleaveevent_callback = nullptr;
    QDateEdit_DropEvent_Callback qdateedit_dropevent_callback = nullptr;
    QDateEdit_NativeEvent_Callback qdateedit_nativeevent_callback = nullptr;
    QDateEdit_Metric_Callback qdateedit_metric_callback = nullptr;
    QDateEdit_InitPainter_Callback qdateedit_initpainter_callback = nullptr;
    QDateEdit_Redirected_Callback qdateedit_redirected_callback = nullptr;
    QDateEdit_SharedPainter_Callback qdateedit_sharedpainter_callback = nullptr;
    QDateEdit_InputMethodEvent_Callback qdateedit_inputmethodevent_callback = nullptr;
    QDateEdit_EventFilter_Callback qdateedit_eventfilter_callback = nullptr;
    QDateEdit_ChildEvent_Callback qdateedit_childevent_callback = nullptr;
    QDateEdit_CustomEvent_Callback qdateedit_customevent_callback = nullptr;
    QDateEdit_ConnectNotify_Callback qdateedit_connectnotify_callback = nullptr;
    QDateEdit_DisconnectNotify_Callback qdateedit_disconnectnotify_callback = nullptr;
    QDateEdit_LineEdit_Callback qdateedit_lineedit_callback = nullptr;
    QDateEdit_SetLineEdit_Callback qdateedit_setlineedit_callback = nullptr;
    QDateEdit_UpdateMicroFocus_Callback qdateedit_updatemicrofocus_callback = nullptr;
    QDateEdit_Create_Callback qdateedit_create_callback = nullptr;
    QDateEdit_Destroy_Callback qdateedit_destroy_callback = nullptr;
    QDateEdit_FocusNextChild_Callback qdateedit_focusnextchild_callback = nullptr;
    QDateEdit_FocusPreviousChild_Callback qdateedit_focuspreviouschild_callback = nullptr;
    QDateEdit_Sender_Callback qdateedit_sender_callback = nullptr;
    QDateEdit_SenderSignalIndex_Callback qdateedit_sendersignalindex_callback = nullptr;
    QDateEdit_Receivers_Callback qdateedit_receivers_callback = nullptr;
    QDateEdit_IsSignalConnected_Callback qdateedit_issignalconnected_callback = nullptr;
    QDateEdit_GetDecodedMetricF_Callback qdateedit_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qdateedit_metaobject_isbase = false;
    mutable bool qdateedit_metacast_isbase = false;
    mutable bool qdateedit_metacall_isbase = false;
    mutable bool qdateedit_sizehint_isbase = false;
    mutable bool qdateedit_clear_isbase = false;
    mutable bool qdateedit_stepby_isbase = false;
    mutable bool qdateedit_event_isbase = false;
    mutable bool qdateedit_keypressevent_isbase = false;
    mutable bool qdateedit_wheelevent_isbase = false;
    mutable bool qdateedit_focusinevent_isbase = false;
    mutable bool qdateedit_focusnextprevchild_isbase = false;
    mutable bool qdateedit_validate_isbase = false;
    mutable bool qdateedit_fixup_isbase = false;
    mutable bool qdateedit_datetimefromtext_isbase = false;
    mutable bool qdateedit_textfromdatetime_isbase = false;
    mutable bool qdateedit_stepenabled_isbase = false;
    mutable bool qdateedit_mousepressevent_isbase = false;
    mutable bool qdateedit_paintevent_isbase = false;
    mutable bool qdateedit_initstyleoption_isbase = false;
    mutable bool qdateedit_minimumsizehint_isbase = false;
    mutable bool qdateedit_inputmethodquery_isbase = false;
    mutable bool qdateedit_resizeevent_isbase = false;
    mutable bool qdateedit_keyreleaseevent_isbase = false;
    mutable bool qdateedit_focusoutevent_isbase = false;
    mutable bool qdateedit_contextmenuevent_isbase = false;
    mutable bool qdateedit_changeevent_isbase = false;
    mutable bool qdateedit_closeevent_isbase = false;
    mutable bool qdateedit_hideevent_isbase = false;
    mutable bool qdateedit_mousereleaseevent_isbase = false;
    mutable bool qdateedit_mousemoveevent_isbase = false;
    mutable bool qdateedit_timerevent_isbase = false;
    mutable bool qdateedit_showevent_isbase = false;
    mutable bool qdateedit_devtype_isbase = false;
    mutable bool qdateedit_setvisible_isbase = false;
    mutable bool qdateedit_heightforwidth_isbase = false;
    mutable bool qdateedit_hasheightforwidth_isbase = false;
    mutable bool qdateedit_paintengine_isbase = false;
    mutable bool qdateedit_mousedoubleclickevent_isbase = false;
    mutable bool qdateedit_enterevent_isbase = false;
    mutable bool qdateedit_leaveevent_isbase = false;
    mutable bool qdateedit_moveevent_isbase = false;
    mutable bool qdateedit_tabletevent_isbase = false;
    mutable bool qdateedit_actionevent_isbase = false;
    mutable bool qdateedit_dragenterevent_isbase = false;
    mutable bool qdateedit_dragmoveevent_isbase = false;
    mutable bool qdateedit_dragleaveevent_isbase = false;
    mutable bool qdateedit_dropevent_isbase = false;
    mutable bool qdateedit_nativeevent_isbase = false;
    mutable bool qdateedit_metric_isbase = false;
    mutable bool qdateedit_initpainter_isbase = false;
    mutable bool qdateedit_redirected_isbase = false;
    mutable bool qdateedit_sharedpainter_isbase = false;
    mutable bool qdateedit_inputmethodevent_isbase = false;
    mutable bool qdateedit_eventfilter_isbase = false;
    mutable bool qdateedit_childevent_isbase = false;
    mutable bool qdateedit_customevent_isbase = false;
    mutable bool qdateedit_connectnotify_isbase = false;
    mutable bool qdateedit_disconnectnotify_isbase = false;
    mutable bool qdateedit_lineedit_isbase = false;
    mutable bool qdateedit_setlineedit_isbase = false;
    mutable bool qdateedit_updatemicrofocus_isbase = false;
    mutable bool qdateedit_create_isbase = false;
    mutable bool qdateedit_destroy_isbase = false;
    mutable bool qdateedit_focusnextchild_isbase = false;
    mutable bool qdateedit_focuspreviouschild_isbase = false;
    mutable bool qdateedit_sender_isbase = false;
    mutable bool qdateedit_sendersignalindex_isbase = false;
    mutable bool qdateedit_receivers_isbase = false;
    mutable bool qdateedit_issignalconnected_isbase = false;
    mutable bool qdateedit_getdecodedmetricf_isbase = false;

  public:
    VirtualQDateEdit(QWidget* parent) : QDateEdit(parent) {};
    VirtualQDateEdit() : QDateEdit() {};
    VirtualQDateEdit(QDate date) : QDateEdit(date) {};
    VirtualQDateEdit(QDate date, QWidget* parent) : QDateEdit(date, parent) {};

    // Callback setters
    inline void setQDateEdit_MetaObject_Callback(QDateEdit_MetaObject_Callback cb) { qdateedit_metaobject_callback = cb; }
    inline void setQDateEdit_Metacast_Callback(QDateEdit_Metacast_Callback cb) { qdateedit_metacast_callback = cb; }
    inline void setQDateEdit_Metacall_Callback(QDateEdit_Metacall_Callback cb) { qdateedit_metacall_callback = cb; }
    inline void setQDateEdit_SizeHint_Callback(QDateEdit_SizeHint_Callback cb) { qdateedit_sizehint_callback = cb; }
    inline void setQDateEdit_Clear_Callback(QDateEdit_Clear_Callback cb) { qdateedit_clear_callback = cb; }
    inline void setQDateEdit_StepBy_Callback(QDateEdit_StepBy_Callback cb) { qdateedit_stepby_callback = cb; }
    inline void setQDateEdit_Event_Callback(QDateEdit_Event_Callback cb) { qdateedit_event_callback = cb; }
    inline void setQDateEdit_KeyPressEvent_Callback(QDateEdit_KeyPressEvent_Callback cb) { qdateedit_keypressevent_callback = cb; }
    inline void setQDateEdit_WheelEvent_Callback(QDateEdit_WheelEvent_Callback cb) { qdateedit_wheelevent_callback = cb; }
    inline void setQDateEdit_FocusInEvent_Callback(QDateEdit_FocusInEvent_Callback cb) { qdateedit_focusinevent_callback = cb; }
    inline void setQDateEdit_FocusNextPrevChild_Callback(QDateEdit_FocusNextPrevChild_Callback cb) { qdateedit_focusnextprevchild_callback = cb; }
    inline void setQDateEdit_Validate_Callback(QDateEdit_Validate_Callback cb) { qdateedit_validate_callback = cb; }
    inline void setQDateEdit_Fixup_Callback(QDateEdit_Fixup_Callback cb) { qdateedit_fixup_callback = cb; }
    inline void setQDateEdit_DateTimeFromText_Callback(QDateEdit_DateTimeFromText_Callback cb) { qdateedit_datetimefromtext_callback = cb; }
    inline void setQDateEdit_TextFromDateTime_Callback(QDateEdit_TextFromDateTime_Callback cb) { qdateedit_textfromdatetime_callback = cb; }
    inline void setQDateEdit_StepEnabled_Callback(QDateEdit_StepEnabled_Callback cb) { qdateedit_stepenabled_callback = cb; }
    inline void setQDateEdit_MousePressEvent_Callback(QDateEdit_MousePressEvent_Callback cb) { qdateedit_mousepressevent_callback = cb; }
    inline void setQDateEdit_PaintEvent_Callback(QDateEdit_PaintEvent_Callback cb) { qdateedit_paintevent_callback = cb; }
    inline void setQDateEdit_InitStyleOption_Callback(QDateEdit_InitStyleOption_Callback cb) { qdateedit_initstyleoption_callback = cb; }
    inline void setQDateEdit_MinimumSizeHint_Callback(QDateEdit_MinimumSizeHint_Callback cb) { qdateedit_minimumsizehint_callback = cb; }
    inline void setQDateEdit_InputMethodQuery_Callback(QDateEdit_InputMethodQuery_Callback cb) { qdateedit_inputmethodquery_callback = cb; }
    inline void setQDateEdit_ResizeEvent_Callback(QDateEdit_ResizeEvent_Callback cb) { qdateedit_resizeevent_callback = cb; }
    inline void setQDateEdit_KeyReleaseEvent_Callback(QDateEdit_KeyReleaseEvent_Callback cb) { qdateedit_keyreleaseevent_callback = cb; }
    inline void setQDateEdit_FocusOutEvent_Callback(QDateEdit_FocusOutEvent_Callback cb) { qdateedit_focusoutevent_callback = cb; }
    inline void setQDateEdit_ContextMenuEvent_Callback(QDateEdit_ContextMenuEvent_Callback cb) { qdateedit_contextmenuevent_callback = cb; }
    inline void setQDateEdit_ChangeEvent_Callback(QDateEdit_ChangeEvent_Callback cb) { qdateedit_changeevent_callback = cb; }
    inline void setQDateEdit_CloseEvent_Callback(QDateEdit_CloseEvent_Callback cb) { qdateedit_closeevent_callback = cb; }
    inline void setQDateEdit_HideEvent_Callback(QDateEdit_HideEvent_Callback cb) { qdateedit_hideevent_callback = cb; }
    inline void setQDateEdit_MouseReleaseEvent_Callback(QDateEdit_MouseReleaseEvent_Callback cb) { qdateedit_mousereleaseevent_callback = cb; }
    inline void setQDateEdit_MouseMoveEvent_Callback(QDateEdit_MouseMoveEvent_Callback cb) { qdateedit_mousemoveevent_callback = cb; }
    inline void setQDateEdit_TimerEvent_Callback(QDateEdit_TimerEvent_Callback cb) { qdateedit_timerevent_callback = cb; }
    inline void setQDateEdit_ShowEvent_Callback(QDateEdit_ShowEvent_Callback cb) { qdateedit_showevent_callback = cb; }
    inline void setQDateEdit_DevType_Callback(QDateEdit_DevType_Callback cb) { qdateedit_devtype_callback = cb; }
    inline void setQDateEdit_SetVisible_Callback(QDateEdit_SetVisible_Callback cb) { qdateedit_setvisible_callback = cb; }
    inline void setQDateEdit_HeightForWidth_Callback(QDateEdit_HeightForWidth_Callback cb) { qdateedit_heightforwidth_callback = cb; }
    inline void setQDateEdit_HasHeightForWidth_Callback(QDateEdit_HasHeightForWidth_Callback cb) { qdateedit_hasheightforwidth_callback = cb; }
    inline void setQDateEdit_PaintEngine_Callback(QDateEdit_PaintEngine_Callback cb) { qdateedit_paintengine_callback = cb; }
    inline void setQDateEdit_MouseDoubleClickEvent_Callback(QDateEdit_MouseDoubleClickEvent_Callback cb) { qdateedit_mousedoubleclickevent_callback = cb; }
    inline void setQDateEdit_EnterEvent_Callback(QDateEdit_EnterEvent_Callback cb) { qdateedit_enterevent_callback = cb; }
    inline void setQDateEdit_LeaveEvent_Callback(QDateEdit_LeaveEvent_Callback cb) { qdateedit_leaveevent_callback = cb; }
    inline void setQDateEdit_MoveEvent_Callback(QDateEdit_MoveEvent_Callback cb) { qdateedit_moveevent_callback = cb; }
    inline void setQDateEdit_TabletEvent_Callback(QDateEdit_TabletEvent_Callback cb) { qdateedit_tabletevent_callback = cb; }
    inline void setQDateEdit_ActionEvent_Callback(QDateEdit_ActionEvent_Callback cb) { qdateedit_actionevent_callback = cb; }
    inline void setQDateEdit_DragEnterEvent_Callback(QDateEdit_DragEnterEvent_Callback cb) { qdateedit_dragenterevent_callback = cb; }
    inline void setQDateEdit_DragMoveEvent_Callback(QDateEdit_DragMoveEvent_Callback cb) { qdateedit_dragmoveevent_callback = cb; }
    inline void setQDateEdit_DragLeaveEvent_Callback(QDateEdit_DragLeaveEvent_Callback cb) { qdateedit_dragleaveevent_callback = cb; }
    inline void setQDateEdit_DropEvent_Callback(QDateEdit_DropEvent_Callback cb) { qdateedit_dropevent_callback = cb; }
    inline void setQDateEdit_NativeEvent_Callback(QDateEdit_NativeEvent_Callback cb) { qdateedit_nativeevent_callback = cb; }
    inline void setQDateEdit_Metric_Callback(QDateEdit_Metric_Callback cb) { qdateedit_metric_callback = cb; }
    inline void setQDateEdit_InitPainter_Callback(QDateEdit_InitPainter_Callback cb) { qdateedit_initpainter_callback = cb; }
    inline void setQDateEdit_Redirected_Callback(QDateEdit_Redirected_Callback cb) { qdateedit_redirected_callback = cb; }
    inline void setQDateEdit_SharedPainter_Callback(QDateEdit_SharedPainter_Callback cb) { qdateedit_sharedpainter_callback = cb; }
    inline void setQDateEdit_InputMethodEvent_Callback(QDateEdit_InputMethodEvent_Callback cb) { qdateedit_inputmethodevent_callback = cb; }
    inline void setQDateEdit_EventFilter_Callback(QDateEdit_EventFilter_Callback cb) { qdateedit_eventfilter_callback = cb; }
    inline void setQDateEdit_ChildEvent_Callback(QDateEdit_ChildEvent_Callback cb) { qdateedit_childevent_callback = cb; }
    inline void setQDateEdit_CustomEvent_Callback(QDateEdit_CustomEvent_Callback cb) { qdateedit_customevent_callback = cb; }
    inline void setQDateEdit_ConnectNotify_Callback(QDateEdit_ConnectNotify_Callback cb) { qdateedit_connectnotify_callback = cb; }
    inline void setQDateEdit_DisconnectNotify_Callback(QDateEdit_DisconnectNotify_Callback cb) { qdateedit_disconnectnotify_callback = cb; }
    inline void setQDateEdit_LineEdit_Callback(QDateEdit_LineEdit_Callback cb) { qdateedit_lineedit_callback = cb; }
    inline void setQDateEdit_SetLineEdit_Callback(QDateEdit_SetLineEdit_Callback cb) { qdateedit_setlineedit_callback = cb; }
    inline void setQDateEdit_UpdateMicroFocus_Callback(QDateEdit_UpdateMicroFocus_Callback cb) { qdateedit_updatemicrofocus_callback = cb; }
    inline void setQDateEdit_Create_Callback(QDateEdit_Create_Callback cb) { qdateedit_create_callback = cb; }
    inline void setQDateEdit_Destroy_Callback(QDateEdit_Destroy_Callback cb) { qdateedit_destroy_callback = cb; }
    inline void setQDateEdit_FocusNextChild_Callback(QDateEdit_FocusNextChild_Callback cb) { qdateedit_focusnextchild_callback = cb; }
    inline void setQDateEdit_FocusPreviousChild_Callback(QDateEdit_FocusPreviousChild_Callback cb) { qdateedit_focuspreviouschild_callback = cb; }
    inline void setQDateEdit_Sender_Callback(QDateEdit_Sender_Callback cb) { qdateedit_sender_callback = cb; }
    inline void setQDateEdit_SenderSignalIndex_Callback(QDateEdit_SenderSignalIndex_Callback cb) { qdateedit_sendersignalindex_callback = cb; }
    inline void setQDateEdit_Receivers_Callback(QDateEdit_Receivers_Callback cb) { qdateedit_receivers_callback = cb; }
    inline void setQDateEdit_IsSignalConnected_Callback(QDateEdit_IsSignalConnected_Callback cb) { qdateedit_issignalconnected_callback = cb; }
    inline void setQDateEdit_GetDecodedMetricF_Callback(QDateEdit_GetDecodedMetricF_Callback cb) { qdateedit_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQDateEdit_MetaObject_IsBase(bool value) const { qdateedit_metaobject_isbase = value; }
    inline void setQDateEdit_Metacast_IsBase(bool value) const { qdateedit_metacast_isbase = value; }
    inline void setQDateEdit_Metacall_IsBase(bool value) const { qdateedit_metacall_isbase = value; }
    inline void setQDateEdit_SizeHint_IsBase(bool value) const { qdateedit_sizehint_isbase = value; }
    inline void setQDateEdit_Clear_IsBase(bool value) const { qdateedit_clear_isbase = value; }
    inline void setQDateEdit_StepBy_IsBase(bool value) const { qdateedit_stepby_isbase = value; }
    inline void setQDateEdit_Event_IsBase(bool value) const { qdateedit_event_isbase = value; }
    inline void setQDateEdit_KeyPressEvent_IsBase(bool value) const { qdateedit_keypressevent_isbase = value; }
    inline void setQDateEdit_WheelEvent_IsBase(bool value) const { qdateedit_wheelevent_isbase = value; }
    inline void setQDateEdit_FocusInEvent_IsBase(bool value) const { qdateedit_focusinevent_isbase = value; }
    inline void setQDateEdit_FocusNextPrevChild_IsBase(bool value) const { qdateedit_focusnextprevchild_isbase = value; }
    inline void setQDateEdit_Validate_IsBase(bool value) const { qdateedit_validate_isbase = value; }
    inline void setQDateEdit_Fixup_IsBase(bool value) const { qdateedit_fixup_isbase = value; }
    inline void setQDateEdit_DateTimeFromText_IsBase(bool value) const { qdateedit_datetimefromtext_isbase = value; }
    inline void setQDateEdit_TextFromDateTime_IsBase(bool value) const { qdateedit_textfromdatetime_isbase = value; }
    inline void setQDateEdit_StepEnabled_IsBase(bool value) const { qdateedit_stepenabled_isbase = value; }
    inline void setQDateEdit_MousePressEvent_IsBase(bool value) const { qdateedit_mousepressevent_isbase = value; }
    inline void setQDateEdit_PaintEvent_IsBase(bool value) const { qdateedit_paintevent_isbase = value; }
    inline void setQDateEdit_InitStyleOption_IsBase(bool value) const { qdateedit_initstyleoption_isbase = value; }
    inline void setQDateEdit_MinimumSizeHint_IsBase(bool value) const { qdateedit_minimumsizehint_isbase = value; }
    inline void setQDateEdit_InputMethodQuery_IsBase(bool value) const { qdateedit_inputmethodquery_isbase = value; }
    inline void setQDateEdit_ResizeEvent_IsBase(bool value) const { qdateedit_resizeevent_isbase = value; }
    inline void setQDateEdit_KeyReleaseEvent_IsBase(bool value) const { qdateedit_keyreleaseevent_isbase = value; }
    inline void setQDateEdit_FocusOutEvent_IsBase(bool value) const { qdateedit_focusoutevent_isbase = value; }
    inline void setQDateEdit_ContextMenuEvent_IsBase(bool value) const { qdateedit_contextmenuevent_isbase = value; }
    inline void setQDateEdit_ChangeEvent_IsBase(bool value) const { qdateedit_changeevent_isbase = value; }
    inline void setQDateEdit_CloseEvent_IsBase(bool value) const { qdateedit_closeevent_isbase = value; }
    inline void setQDateEdit_HideEvent_IsBase(bool value) const { qdateedit_hideevent_isbase = value; }
    inline void setQDateEdit_MouseReleaseEvent_IsBase(bool value) const { qdateedit_mousereleaseevent_isbase = value; }
    inline void setQDateEdit_MouseMoveEvent_IsBase(bool value) const { qdateedit_mousemoveevent_isbase = value; }
    inline void setQDateEdit_TimerEvent_IsBase(bool value) const { qdateedit_timerevent_isbase = value; }
    inline void setQDateEdit_ShowEvent_IsBase(bool value) const { qdateedit_showevent_isbase = value; }
    inline void setQDateEdit_DevType_IsBase(bool value) const { qdateedit_devtype_isbase = value; }
    inline void setQDateEdit_SetVisible_IsBase(bool value) const { qdateedit_setvisible_isbase = value; }
    inline void setQDateEdit_HeightForWidth_IsBase(bool value) const { qdateedit_heightforwidth_isbase = value; }
    inline void setQDateEdit_HasHeightForWidth_IsBase(bool value) const { qdateedit_hasheightforwidth_isbase = value; }
    inline void setQDateEdit_PaintEngine_IsBase(bool value) const { qdateedit_paintengine_isbase = value; }
    inline void setQDateEdit_MouseDoubleClickEvent_IsBase(bool value) const { qdateedit_mousedoubleclickevent_isbase = value; }
    inline void setQDateEdit_EnterEvent_IsBase(bool value) const { qdateedit_enterevent_isbase = value; }
    inline void setQDateEdit_LeaveEvent_IsBase(bool value) const { qdateedit_leaveevent_isbase = value; }
    inline void setQDateEdit_MoveEvent_IsBase(bool value) const { qdateedit_moveevent_isbase = value; }
    inline void setQDateEdit_TabletEvent_IsBase(bool value) const { qdateedit_tabletevent_isbase = value; }
    inline void setQDateEdit_ActionEvent_IsBase(bool value) const { qdateedit_actionevent_isbase = value; }
    inline void setQDateEdit_DragEnterEvent_IsBase(bool value) const { qdateedit_dragenterevent_isbase = value; }
    inline void setQDateEdit_DragMoveEvent_IsBase(bool value) const { qdateedit_dragmoveevent_isbase = value; }
    inline void setQDateEdit_DragLeaveEvent_IsBase(bool value) const { qdateedit_dragleaveevent_isbase = value; }
    inline void setQDateEdit_DropEvent_IsBase(bool value) const { qdateedit_dropevent_isbase = value; }
    inline void setQDateEdit_NativeEvent_IsBase(bool value) const { qdateedit_nativeevent_isbase = value; }
    inline void setQDateEdit_Metric_IsBase(bool value) const { qdateedit_metric_isbase = value; }
    inline void setQDateEdit_InitPainter_IsBase(bool value) const { qdateedit_initpainter_isbase = value; }
    inline void setQDateEdit_Redirected_IsBase(bool value) const { qdateedit_redirected_isbase = value; }
    inline void setQDateEdit_SharedPainter_IsBase(bool value) const { qdateedit_sharedpainter_isbase = value; }
    inline void setQDateEdit_InputMethodEvent_IsBase(bool value) const { qdateedit_inputmethodevent_isbase = value; }
    inline void setQDateEdit_EventFilter_IsBase(bool value) const { qdateedit_eventfilter_isbase = value; }
    inline void setQDateEdit_ChildEvent_IsBase(bool value) const { qdateedit_childevent_isbase = value; }
    inline void setQDateEdit_CustomEvent_IsBase(bool value) const { qdateedit_customevent_isbase = value; }
    inline void setQDateEdit_ConnectNotify_IsBase(bool value) const { qdateedit_connectnotify_isbase = value; }
    inline void setQDateEdit_DisconnectNotify_IsBase(bool value) const { qdateedit_disconnectnotify_isbase = value; }
    inline void setQDateEdit_LineEdit_IsBase(bool value) const { qdateedit_lineedit_isbase = value; }
    inline void setQDateEdit_SetLineEdit_IsBase(bool value) const { qdateedit_setlineedit_isbase = value; }
    inline void setQDateEdit_UpdateMicroFocus_IsBase(bool value) const { qdateedit_updatemicrofocus_isbase = value; }
    inline void setQDateEdit_Create_IsBase(bool value) const { qdateedit_create_isbase = value; }
    inline void setQDateEdit_Destroy_IsBase(bool value) const { qdateedit_destroy_isbase = value; }
    inline void setQDateEdit_FocusNextChild_IsBase(bool value) const { qdateedit_focusnextchild_isbase = value; }
    inline void setQDateEdit_FocusPreviousChild_IsBase(bool value) const { qdateedit_focuspreviouschild_isbase = value; }
    inline void setQDateEdit_Sender_IsBase(bool value) const { qdateedit_sender_isbase = value; }
    inline void setQDateEdit_SenderSignalIndex_IsBase(bool value) const { qdateedit_sendersignalindex_isbase = value; }
    inline void setQDateEdit_Receivers_IsBase(bool value) const { qdateedit_receivers_isbase = value; }
    inline void setQDateEdit_IsSignalConnected_IsBase(bool value) const { qdateedit_issignalconnected_isbase = value; }
    inline void setQDateEdit_GetDecodedMetricF_IsBase(bool value) const { qdateedit_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdateedit_metaobject_isbase) {
            qdateedit_metaobject_isbase = false;
            return QDateEdit::metaObject();
        }
        auto metaobject_cb = qdateedit_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QDateEdit::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdateedit_metacast_isbase) {
            qdateedit_metacast_isbase = false;
            return QDateEdit::qt_metacast(param1);
        }
        auto metacast_cb = qdateedit_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QDateEdit::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdateedit_metacall_isbase) {
            qdateedit_metacall_isbase = false;
            return QDateEdit::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qdateedit_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDateEdit::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdateedit_sizehint_isbase) {
            qdateedit_sizehint_isbase = false;
            return QDateEdit::sizeHint();
        }
        auto sizehint_cb = qdateedit_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QDateEdit::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qdateedit_clear_isbase) {
            qdateedit_clear_isbase = false;
            QDateEdit::clear();
            return;
        }
        auto clear_cb = qdateedit_clear_callback;
        if (clear_cb) {
            clear_cb();
            return;
        }
        QDateEdit::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual void stepBy(int steps) override {
        if (qdateedit_stepby_isbase) {
            qdateedit_stepby_isbase = false;
            QDateEdit::stepBy(steps);
            return;
        }
        auto stepby_cb = qdateedit_stepby_callback;
        if (stepby_cb) {
            int cbval1 = steps;

            stepby_cb(this, cbval1);
            return;
        }
        QDateEdit::stepBy(steps);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdateedit_event_isbase) {
            qdateedit_event_isbase = false;
            return QDateEdit::event(event);
        }
        auto event_cb = qdateedit_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QDateEdit::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qdateedit_keypressevent_isbase) {
            qdateedit_keypressevent_isbase = false;
            QDateEdit::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = qdateedit_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        QDateEdit::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdateedit_wheelevent_isbase) {
            qdateedit_wheelevent_isbase = false;
            QDateEdit::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qdateedit_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QDateEdit::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdateedit_focusinevent_isbase) {
            qdateedit_focusinevent_isbase = false;
            QDateEdit::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = qdateedit_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        QDateEdit::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdateedit_focusnextprevchild_isbase) {
            qdateedit_focusnextprevchild_isbase = false;
            return QDateEdit::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qdateedit_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QDateEdit::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& input, int& pos) const override {
        if (qdateedit_validate_isbase) {
            qdateedit_validate_isbase = false;
            return QDateEdit::validate(input, pos);
        }
        auto validate_cb = qdateedit_validate_callback;
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
        return QDateEdit::validate(input, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& input) const override {
        if (qdateedit_fixup_isbase) {
            qdateedit_fixup_isbase = false;
            QDateEdit::fixup(input);
            return;
        }
        auto fixup_cb = qdateedit_fixup_callback;
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
        QDateEdit::fixup(input);
    }

    // Virtual method for C ABI access and custom callback
    virtual QDateTime dateTimeFromText(const QString& text) const override {
        if (qdateedit_datetimefromtext_isbase) {
            qdateedit_datetimefromtext_isbase = false;
            return QDateEdit::dateTimeFromText(text);
        }
        auto datetimefromtext_cb = qdateedit_datetimefromtext_callback;
        if (datetimefromtext_cb) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;

            QDateTime* callback_ret = datetimefromtext_cb(this, cbval1);
            libqt_free(text_str);
            return *callback_ret;
        }
        return QDateEdit::dateTimeFromText(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString textFromDateTime(const QDateTime& dt) const override {
        if (qdateedit_textfromdatetime_isbase) {
            qdateedit_textfromdatetime_isbase = false;
            return QDateEdit::textFromDateTime(dt);
        }
        auto textfromdatetime_cb = qdateedit_textfromdatetime_callback;
        if (textfromdatetime_cb) {
            const QDateTime& dt_ret = dt;
            // Cast returned reference into pointer
            QDateTime* cbval1 = const_cast<QDateTime*>(&dt_ret);

            const char* callback_ret = textfromdatetime_cb(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QDateEdit::textFromDateTime(dt);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
        if (qdateedit_stepenabled_isbase) {
            qdateedit_stepenabled_isbase = false;
            return QDateEdit::stepEnabled();
        }
        auto stepenabled_cb = qdateedit_stepenabled_callback;
        if (stepenabled_cb) {
            int callback_ret = stepenabled_cb();
            return static_cast<QAbstractSpinBox::StepEnabled>(callback_ret);
        }
        return QDateEdit::stepEnabled();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdateedit_mousepressevent_isbase) {
            qdateedit_mousepressevent_isbase = false;
            QDateEdit::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = qdateedit_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QDateEdit::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdateedit_paintevent_isbase) {
            qdateedit_paintevent_isbase = false;
            QDateEdit::paintEvent(event);
            return;
        }
        auto paintevent_cb = qdateedit_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        QDateEdit::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
        if (qdateedit_initstyleoption_isbase) {
            qdateedit_initstyleoption_isbase = false;
            QDateEdit::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qdateedit_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionSpinBox* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QDateEdit::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdateedit_minimumsizehint_isbase) {
            qdateedit_minimumsizehint_isbase = false;
            return QDateEdit::minimumSizeHint();
        }
        auto minimumsizehint_cb = qdateedit_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QDateEdit::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdateedit_inputmethodquery_isbase) {
            qdateedit_inputmethodquery_isbase = false;
            return QDateEdit::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qdateedit_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QDateEdit::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qdateedit_resizeevent_isbase) {
            qdateedit_resizeevent_isbase = false;
            QDateEdit::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = qdateedit_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        QDateEdit::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdateedit_keyreleaseevent_isbase) {
            qdateedit_keyreleaseevent_isbase = false;
            QDateEdit::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = qdateedit_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QDateEdit::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdateedit_focusoutevent_isbase) {
            qdateedit_focusoutevent_isbase = false;
            QDateEdit::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = qdateedit_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QDateEdit::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdateedit_contextmenuevent_isbase) {
            qdateedit_contextmenuevent_isbase = false;
            QDateEdit::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qdateedit_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QDateEdit::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qdateedit_changeevent_isbase) {
            qdateedit_changeevent_isbase = false;
            QDateEdit::changeEvent(event);
            return;
        }
        auto changeevent_cb = qdateedit_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = event;

            changeevent_cb(this, cbval1);
            return;
        }
        QDateEdit::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdateedit_closeevent_isbase) {
            qdateedit_closeevent_isbase = false;
            QDateEdit::closeEvent(event);
            return;
        }
        auto closeevent_cb = qdateedit_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QDateEdit::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdateedit_hideevent_isbase) {
            qdateedit_hideevent_isbase = false;
            QDateEdit::hideEvent(event);
            return;
        }
        auto hideevent_cb = qdateedit_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QDateEdit::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdateedit_mousereleaseevent_isbase) {
            qdateedit_mousereleaseevent_isbase = false;
            QDateEdit::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = qdateedit_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QDateEdit::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdateedit_mousemoveevent_isbase) {
            qdateedit_mousemoveevent_isbase = false;
            QDateEdit::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qdateedit_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QDateEdit::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdateedit_timerevent_isbase) {
            qdateedit_timerevent_isbase = false;
            QDateEdit::timerEvent(event);
            return;
        }
        auto timerevent_cb = qdateedit_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QDateEdit::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdateedit_showevent_isbase) {
            qdateedit_showevent_isbase = false;
            QDateEdit::showEvent(event);
            return;
        }
        auto showevent_cb = qdateedit_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QDateEdit::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdateedit_devtype_isbase) {
            qdateedit_devtype_isbase = false;
            return QDateEdit::devType();
        }
        auto devtype_cb = qdateedit_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QDateEdit::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdateedit_setvisible_isbase) {
            qdateedit_setvisible_isbase = false;
            QDateEdit::setVisible(visible);
            return;
        }
        auto setvisible_cb = qdateedit_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QDateEdit::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdateedit_heightforwidth_isbase) {
            qdateedit_heightforwidth_isbase = false;
            return QDateEdit::heightForWidth(param1);
        }
        auto heightforwidth_cb = qdateedit_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDateEdit::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdateedit_hasheightforwidth_isbase) {
            qdateedit_hasheightforwidth_isbase = false;
            return QDateEdit::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qdateedit_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QDateEdit::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdateedit_paintengine_isbase) {
            qdateedit_paintengine_isbase = false;
            return QDateEdit::paintEngine();
        }
        auto paintengine_cb = qdateedit_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QDateEdit::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdateedit_mousedoubleclickevent_isbase) {
            qdateedit_mousedoubleclickevent_isbase = false;
            QDateEdit::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qdateedit_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QDateEdit::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdateedit_enterevent_isbase) {
            qdateedit_enterevent_isbase = false;
            QDateEdit::enterEvent(event);
            return;
        }
        auto enterevent_cb = qdateedit_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QDateEdit::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdateedit_leaveevent_isbase) {
            qdateedit_leaveevent_isbase = false;
            QDateEdit::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qdateedit_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QDateEdit::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdateedit_moveevent_isbase) {
            qdateedit_moveevent_isbase = false;
            QDateEdit::moveEvent(event);
            return;
        }
        auto moveevent_cb = qdateedit_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QDateEdit::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdateedit_tabletevent_isbase) {
            qdateedit_tabletevent_isbase = false;
            QDateEdit::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qdateedit_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QDateEdit::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdateedit_actionevent_isbase) {
            qdateedit_actionevent_isbase = false;
            QDateEdit::actionEvent(event);
            return;
        }
        auto actionevent_cb = qdateedit_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QDateEdit::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdateedit_dragenterevent_isbase) {
            qdateedit_dragenterevent_isbase = false;
            QDateEdit::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qdateedit_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QDateEdit::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdateedit_dragmoveevent_isbase) {
            qdateedit_dragmoveevent_isbase = false;
            QDateEdit::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qdateedit_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QDateEdit::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdateedit_dragleaveevent_isbase) {
            qdateedit_dragleaveevent_isbase = false;
            QDateEdit::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qdateedit_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QDateEdit::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdateedit_dropevent_isbase) {
            qdateedit_dropevent_isbase = false;
            QDateEdit::dropEvent(event);
            return;
        }
        auto dropevent_cb = qdateedit_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QDateEdit::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdateedit_nativeevent_isbase) {
            qdateedit_nativeevent_isbase = false;
            return QDateEdit::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qdateedit_nativeevent_callback;
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
        return QDateEdit::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdateedit_metric_isbase) {
            qdateedit_metric_isbase = false;
            return QDateEdit::metric(param1);
        }
        auto metric_cb = qdateedit_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDateEdit::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdateedit_initpainter_isbase) {
            qdateedit_initpainter_isbase = false;
            QDateEdit::initPainter(painter);
            return;
        }
        auto initpainter_cb = qdateedit_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QDateEdit::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdateedit_redirected_isbase) {
            qdateedit_redirected_isbase = false;
            return QDateEdit::redirected(offset);
        }
        auto redirected_cb = qdateedit_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QDateEdit::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdateedit_sharedpainter_isbase) {
            qdateedit_sharedpainter_isbase = false;
            return QDateEdit::sharedPainter();
        }
        auto sharedpainter_cb = qdateedit_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QDateEdit::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdateedit_inputmethodevent_isbase) {
            qdateedit_inputmethodevent_isbase = false;
            QDateEdit::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qdateedit_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QDateEdit::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdateedit_eventfilter_isbase) {
            qdateedit_eventfilter_isbase = false;
            return QDateEdit::eventFilter(watched, event);
        }
        auto eventfilter_cb = qdateedit_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDateEdit::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdateedit_childevent_isbase) {
            qdateedit_childevent_isbase = false;
            QDateEdit::childEvent(event);
            return;
        }
        auto childevent_cb = qdateedit_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QDateEdit::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdateedit_customevent_isbase) {
            qdateedit_customevent_isbase = false;
            QDateEdit::customEvent(event);
            return;
        }
        auto customevent_cb = qdateedit_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QDateEdit::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdateedit_connectnotify_isbase) {
            qdateedit_connectnotify_isbase = false;
            QDateEdit::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qdateedit_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QDateEdit::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdateedit_disconnectnotify_isbase) {
            qdateedit_disconnectnotify_isbase = false;
            QDateEdit::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qdateedit_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QDateEdit::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QLineEdit* lineEdit() const {
        if (qdateedit_lineedit_isbase) {
            qdateedit_lineedit_isbase = false;
            return QDateEdit::lineEdit();
        }
        auto lineedit_cb = qdateedit_lineedit_callback;
        if (lineedit_cb) {
            QLineEdit* callback_ret = lineedit_cb();
            return callback_ret;
        }
        return QDateEdit::lineEdit();
    }

    // Virtual method for C ABI access and custom callback
    void setLineEdit(QLineEdit* edit) {
        if (qdateedit_setlineedit_isbase) {
            qdateedit_setlineedit_isbase = false;
            QDateEdit::setLineEdit(edit);
            return;
        }
        auto setlineedit_cb = qdateedit_setlineedit_callback;
        if (setlineedit_cb) {
            QLineEdit* cbval1 = edit;

            setlineedit_cb(this, cbval1);
            return;
        }
        QDateEdit::setLineEdit(edit);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qdateedit_updatemicrofocus_isbase) {
            qdateedit_updatemicrofocus_isbase = false;
            QDateEdit::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qdateedit_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QDateEdit::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qdateedit_create_isbase) {
            qdateedit_create_isbase = false;
            QDateEdit::create();
            return;
        }
        auto create_cb = qdateedit_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QDateEdit::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qdateedit_destroy_isbase) {
            qdateedit_destroy_isbase = false;
            QDateEdit::destroy();
            return;
        }
        auto destroy_cb = qdateedit_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QDateEdit::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qdateedit_focusnextchild_isbase) {
            qdateedit_focusnextchild_isbase = false;
            return QDateEdit::focusNextChild();
        }
        auto focusnextchild_cb = qdateedit_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QDateEdit::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qdateedit_focuspreviouschild_isbase) {
            qdateedit_focuspreviouschild_isbase = false;
            return QDateEdit::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qdateedit_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QDateEdit::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdateedit_sender_isbase) {
            qdateedit_sender_isbase = false;
            return QDateEdit::sender();
        }
        auto sender_cb = qdateedit_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QDateEdit::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdateedit_sendersignalindex_isbase) {
            qdateedit_sendersignalindex_isbase = false;
            return QDateEdit::senderSignalIndex();
        }
        auto sendersignalindex_cb = qdateedit_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QDateEdit::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdateedit_receivers_isbase) {
            qdateedit_receivers_isbase = false;
            return QDateEdit::receivers(signal);
        }
        auto receivers_cb = qdateedit_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDateEdit::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdateedit_issignalconnected_isbase) {
            qdateedit_issignalconnected_isbase = false;
            return QDateEdit::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qdateedit_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QDateEdit::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qdateedit_getdecodedmetricf_isbase) {
            qdateedit_getdecodedmetricf_isbase = false;
            return QDateEdit::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qdateedit_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QDateEdit::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void QDateEdit_KeyPressEvent(QDateEdit* self, QKeyEvent* event);
    friend void QDateEdit_SuperKeyPressEvent(QDateEdit* self, QKeyEvent* event);
    friend void QDateEdit_WheelEvent(QDateEdit* self, QWheelEvent* event);
    friend void QDateEdit_SuperWheelEvent(QDateEdit* self, QWheelEvent* event);
    friend void QDateEdit_FocusInEvent(QDateEdit* self, QFocusEvent* event);
    friend void QDateEdit_SuperFocusInEvent(QDateEdit* self, QFocusEvent* event);
    friend bool QDateEdit_FocusNextPrevChild(QDateEdit* self, bool next);
    friend bool QDateEdit_SuperFocusNextPrevChild(QDateEdit* self, bool next);
    friend int QDateEdit_Validate(const QDateEdit* self, libqt_string input, int* pos);
    friend int QDateEdit_SuperValidate(const QDateEdit* self, libqt_string input, int* pos);
    friend void QDateEdit_Fixup(const QDateEdit* self, libqt_string input);
    friend void QDateEdit_SuperFixup(const QDateEdit* self, libqt_string input);
    friend QDateTime* QDateEdit_DateTimeFromText(const QDateEdit* self, const libqt_string text);
    friend QDateTime* QDateEdit_SuperDateTimeFromText(const QDateEdit* self, const libqt_string text);
    friend libqt_string QDateEdit_TextFromDateTime(const QDateEdit* self, const QDateTime* dt);
    friend libqt_string QDateEdit_SuperTextFromDateTime(const QDateEdit* self, const QDateTime* dt);
    friend int QDateEdit_StepEnabled(const QDateEdit* self);
    friend int QDateEdit_SuperStepEnabled(const QDateEdit* self);
    friend void QDateEdit_MousePressEvent(QDateEdit* self, QMouseEvent* event);
    friend void QDateEdit_SuperMousePressEvent(QDateEdit* self, QMouseEvent* event);
    friend void QDateEdit_PaintEvent(QDateEdit* self, QPaintEvent* event);
    friend void QDateEdit_SuperPaintEvent(QDateEdit* self, QPaintEvent* event);
    friend void QDateEdit_InitStyleOption(const QDateEdit* self, QStyleOptionSpinBox* option);
    friend void QDateEdit_SuperInitStyleOption(const QDateEdit* self, QStyleOptionSpinBox* option);
    friend void QDateEdit_ResizeEvent(QDateEdit* self, QResizeEvent* event);
    friend void QDateEdit_SuperResizeEvent(QDateEdit* self, QResizeEvent* event);
    friend void QDateEdit_KeyReleaseEvent(QDateEdit* self, QKeyEvent* event);
    friend void QDateEdit_SuperKeyReleaseEvent(QDateEdit* self, QKeyEvent* event);
    friend void QDateEdit_FocusOutEvent(QDateEdit* self, QFocusEvent* event);
    friend void QDateEdit_SuperFocusOutEvent(QDateEdit* self, QFocusEvent* event);
    friend void QDateEdit_ContextMenuEvent(QDateEdit* self, QContextMenuEvent* event);
    friend void QDateEdit_SuperContextMenuEvent(QDateEdit* self, QContextMenuEvent* event);
    friend void QDateEdit_ChangeEvent(QDateEdit* self, QEvent* event);
    friend void QDateEdit_SuperChangeEvent(QDateEdit* self, QEvent* event);
    friend void QDateEdit_CloseEvent(QDateEdit* self, QCloseEvent* event);
    friend void QDateEdit_SuperCloseEvent(QDateEdit* self, QCloseEvent* event);
    friend void QDateEdit_HideEvent(QDateEdit* self, QHideEvent* event);
    friend void QDateEdit_SuperHideEvent(QDateEdit* self, QHideEvent* event);
    friend void QDateEdit_MouseReleaseEvent(QDateEdit* self, QMouseEvent* event);
    friend void QDateEdit_SuperMouseReleaseEvent(QDateEdit* self, QMouseEvent* event);
    friend void QDateEdit_MouseMoveEvent(QDateEdit* self, QMouseEvent* event);
    friend void QDateEdit_SuperMouseMoveEvent(QDateEdit* self, QMouseEvent* event);
    friend void QDateEdit_TimerEvent(QDateEdit* self, QTimerEvent* event);
    friend void QDateEdit_SuperTimerEvent(QDateEdit* self, QTimerEvent* event);
    friend void QDateEdit_ShowEvent(QDateEdit* self, QShowEvent* event);
    friend void QDateEdit_SuperShowEvent(QDateEdit* self, QShowEvent* event);
    friend void QDateEdit_MouseDoubleClickEvent(QDateEdit* self, QMouseEvent* event);
    friend void QDateEdit_SuperMouseDoubleClickEvent(QDateEdit* self, QMouseEvent* event);
    friend void QDateEdit_EnterEvent(QDateEdit* self, QEnterEvent* event);
    friend void QDateEdit_SuperEnterEvent(QDateEdit* self, QEnterEvent* event);
    friend void QDateEdit_LeaveEvent(QDateEdit* self, QEvent* event);
    friend void QDateEdit_SuperLeaveEvent(QDateEdit* self, QEvent* event);
    friend void QDateEdit_MoveEvent(QDateEdit* self, QMoveEvent* event);
    friend void QDateEdit_SuperMoveEvent(QDateEdit* self, QMoveEvent* event);
    friend void QDateEdit_TabletEvent(QDateEdit* self, QTabletEvent* event);
    friend void QDateEdit_SuperTabletEvent(QDateEdit* self, QTabletEvent* event);
    friend void QDateEdit_ActionEvent(QDateEdit* self, QActionEvent* event);
    friend void QDateEdit_SuperActionEvent(QDateEdit* self, QActionEvent* event);
    friend void QDateEdit_DragEnterEvent(QDateEdit* self, QDragEnterEvent* event);
    friend void QDateEdit_SuperDragEnterEvent(QDateEdit* self, QDragEnterEvent* event);
    friend void QDateEdit_DragMoveEvent(QDateEdit* self, QDragMoveEvent* event);
    friend void QDateEdit_SuperDragMoveEvent(QDateEdit* self, QDragMoveEvent* event);
    friend void QDateEdit_DragLeaveEvent(QDateEdit* self, QDragLeaveEvent* event);
    friend void QDateEdit_SuperDragLeaveEvent(QDateEdit* self, QDragLeaveEvent* event);
    friend void QDateEdit_DropEvent(QDateEdit* self, QDropEvent* event);
    friend void QDateEdit_SuperDropEvent(QDateEdit* self, QDropEvent* event);
    friend bool QDateEdit_NativeEvent(QDateEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QDateEdit_SuperNativeEvent(QDateEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QDateEdit_Metric(const QDateEdit* self, int param1);
    friend int QDateEdit_SuperMetric(const QDateEdit* self, int param1);
    friend void QDateEdit_InitPainter(const QDateEdit* self, QPainter* painter);
    friend void QDateEdit_SuperInitPainter(const QDateEdit* self, QPainter* painter);
    friend QPaintDevice* QDateEdit_Redirected(const QDateEdit* self, QPoint* offset);
    friend QPaintDevice* QDateEdit_SuperRedirected(const QDateEdit* self, QPoint* offset);
    friend QPainter* QDateEdit_SharedPainter(const QDateEdit* self);
    friend QPainter* QDateEdit_SuperSharedPainter(const QDateEdit* self);
    friend void QDateEdit_InputMethodEvent(QDateEdit* self, QInputMethodEvent* param1);
    friend void QDateEdit_SuperInputMethodEvent(QDateEdit* self, QInputMethodEvent* param1);
    friend void QDateEdit_ChildEvent(QDateEdit* self, QChildEvent* event);
    friend void QDateEdit_SuperChildEvent(QDateEdit* self, QChildEvent* event);
    friend void QDateEdit_CustomEvent(QDateEdit* self, QEvent* event);
    friend void QDateEdit_SuperCustomEvent(QDateEdit* self, QEvent* event);
    friend void QDateEdit_ConnectNotify(QDateEdit* self, const QMetaMethod* signal);
    friend void QDateEdit_SuperConnectNotify(QDateEdit* self, const QMetaMethod* signal);
    friend void QDateEdit_DisconnectNotify(QDateEdit* self, const QMetaMethod* signal);
    friend void QDateEdit_SuperDisconnectNotify(QDateEdit* self, const QMetaMethod* signal);
    friend QLineEdit* QDateEdit_LineEdit(const QDateEdit* self);
    friend QLineEdit* QDateEdit_SuperLineEdit(const QDateEdit* self);
    friend void QDateEdit_SetLineEdit(QDateEdit* self, QLineEdit* edit);
    friend void QDateEdit_SuperSetLineEdit(QDateEdit* self, QLineEdit* edit);
    friend void QDateEdit_UpdateMicroFocus(QDateEdit* self);
    friend void QDateEdit_SuperUpdateMicroFocus(QDateEdit* self);
    friend void QDateEdit_Create(QDateEdit* self);
    friend void QDateEdit_SuperCreate(QDateEdit* self);
    friend void QDateEdit_Destroy(QDateEdit* self);
    friend void QDateEdit_SuperDestroy(QDateEdit* self);
    friend bool QDateEdit_FocusNextChild(QDateEdit* self);
    friend bool QDateEdit_SuperFocusNextChild(QDateEdit* self);
    friend bool QDateEdit_FocusPreviousChild(QDateEdit* self);
    friend bool QDateEdit_SuperFocusPreviousChild(QDateEdit* self);
    friend QObject* QDateEdit_Sender(const QDateEdit* self);
    friend QObject* QDateEdit_SuperSender(const QDateEdit* self);
    friend int QDateEdit_SenderSignalIndex(const QDateEdit* self);
    friend int QDateEdit_SuperSenderSignalIndex(const QDateEdit* self);
    friend int QDateEdit_Receivers(const QDateEdit* self, const char* signal);
    friend int QDateEdit_SuperReceivers(const QDateEdit* self, const char* signal);
    friend bool QDateEdit_IsSignalConnected(const QDateEdit* self, const QMetaMethod* signal);
    friend bool QDateEdit_SuperIsSignalConnected(const QDateEdit* self, const QMetaMethod* signal);
    friend double QDateEdit_GetDecodedMetricF(const QDateEdit* self, int metricA, int metricB);
    friend double QDateEdit_SuperGetDecodedMetricF(const QDateEdit* self, int metricA, int metricB);
};

#endif
