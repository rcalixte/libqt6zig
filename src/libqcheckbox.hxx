#pragma once
#ifndef SRCC_LIBVIRTUALQCHECKBOX_H
#define SRCC_LIBVIRTUALQCHECKBOX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QCheckBox so that we can call protected methods
class VirtualQCheckBox final : public QCheckBox {

  public:
    // Virtual class boolean flag
    bool isVirtualQCheckBox = true;

    // Virtual class public types (including callbacks)
    using QCheckBox_MetaObject_Callback = QMetaObject* (*)();
    using QCheckBox_Metacast_Callback = void* (*)(QCheckBox*, const char*);
    using QCheckBox_Metacall_Callback = int (*)(QCheckBox*, int, int, void**);
    using QCheckBox_SizeHint_Callback = QSize* (*)();
    using QCheckBox_MinimumSizeHint_Callback = QSize* (*)();
    using QCheckBox_Event_Callback = bool (*)(QCheckBox*, QEvent*);
    using QCheckBox_HitButton_Callback = bool (*)(const QCheckBox*, QPoint*);
    using QCheckBox_CheckStateSet_Callback = void (*)();
    using QCheckBox_NextCheckState_Callback = void (*)();
    using QCheckBox_PaintEvent_Callback = void (*)(QCheckBox*, QPaintEvent*);
    using QCheckBox_MouseMoveEvent_Callback = void (*)(QCheckBox*, QMouseEvent*);
    using QCheckBox_InitStyleOption_Callback = void (*)(const QCheckBox*, QStyleOptionButton*);
    using QCheckBox_KeyPressEvent_Callback = void (*)(QCheckBox*, QKeyEvent*);
    using QCheckBox_KeyReleaseEvent_Callback = void (*)(QCheckBox*, QKeyEvent*);
    using QCheckBox_MousePressEvent_Callback = void (*)(QCheckBox*, QMouseEvent*);
    using QCheckBox_MouseReleaseEvent_Callback = void (*)(QCheckBox*, QMouseEvent*);
    using QCheckBox_FocusInEvent_Callback = void (*)(QCheckBox*, QFocusEvent*);
    using QCheckBox_FocusOutEvent_Callback = void (*)(QCheckBox*, QFocusEvent*);
    using QCheckBox_ChangeEvent_Callback = void (*)(QCheckBox*, QEvent*);
    using QCheckBox_TimerEvent_Callback = void (*)(QCheckBox*, QTimerEvent*);
    using QCheckBox_DevType_Callback = int (*)();
    using QCheckBox_SetVisible_Callback = void (*)(QCheckBox*, bool);
    using QCheckBox_HeightForWidth_Callback = int (*)(const QCheckBox*, int);
    using QCheckBox_HasHeightForWidth_Callback = bool (*)();
    using QCheckBox_PaintEngine_Callback = QPaintEngine* (*)();
    using QCheckBox_MouseDoubleClickEvent_Callback = void (*)(QCheckBox*, QMouseEvent*);
    using QCheckBox_WheelEvent_Callback = void (*)(QCheckBox*, QWheelEvent*);
    using QCheckBox_EnterEvent_Callback = void (*)(QCheckBox*, QEnterEvent*);
    using QCheckBox_LeaveEvent_Callback = void (*)(QCheckBox*, QEvent*);
    using QCheckBox_MoveEvent_Callback = void (*)(QCheckBox*, QMoveEvent*);
    using QCheckBox_ResizeEvent_Callback = void (*)(QCheckBox*, QResizeEvent*);
    using QCheckBox_CloseEvent_Callback = void (*)(QCheckBox*, QCloseEvent*);
    using QCheckBox_ContextMenuEvent_Callback = void (*)(QCheckBox*, QContextMenuEvent*);
    using QCheckBox_TabletEvent_Callback = void (*)(QCheckBox*, QTabletEvent*);
    using QCheckBox_ActionEvent_Callback = void (*)(QCheckBox*, QActionEvent*);
    using QCheckBox_DragEnterEvent_Callback = void (*)(QCheckBox*, QDragEnterEvent*);
    using QCheckBox_DragMoveEvent_Callback = void (*)(QCheckBox*, QDragMoveEvent*);
    using QCheckBox_DragLeaveEvent_Callback = void (*)(QCheckBox*, QDragLeaveEvent*);
    using QCheckBox_DropEvent_Callback = void (*)(QCheckBox*, QDropEvent*);
    using QCheckBox_ShowEvent_Callback = void (*)(QCheckBox*, QShowEvent*);
    using QCheckBox_HideEvent_Callback = void (*)(QCheckBox*, QHideEvent*);
    using QCheckBox_NativeEvent_Callback = bool (*)(QCheckBox*, libqt_string, void*, intptr_t*);
    using QCheckBox_Metric_Callback = int (*)(const QCheckBox*, int);
    using QCheckBox_InitPainter_Callback = void (*)(const QCheckBox*, QPainter*);
    using QCheckBox_Redirected_Callback = QPaintDevice* (*)(const QCheckBox*, QPoint*);
    using QCheckBox_SharedPainter_Callback = QPainter* (*)();
    using QCheckBox_InputMethodEvent_Callback = void (*)(QCheckBox*, QInputMethodEvent*);
    using QCheckBox_InputMethodQuery_Callback = QVariant* (*)(const QCheckBox*, int);
    using QCheckBox_FocusNextPrevChild_Callback = bool (*)(QCheckBox*, bool);
    using QCheckBox_EventFilter_Callback = bool (*)(QCheckBox*, QObject*, QEvent*);
    using QCheckBox_ChildEvent_Callback = void (*)(QCheckBox*, QChildEvent*);
    using QCheckBox_CustomEvent_Callback = void (*)(QCheckBox*, QEvent*);
    using QCheckBox_ConnectNotify_Callback = void (*)(QCheckBox*, QMetaMethod*);
    using QCheckBox_DisconnectNotify_Callback = void (*)(QCheckBox*, QMetaMethod*);
    using QCheckBox_UpdateMicroFocus_Callback = void (*)();
    using QCheckBox_Create_Callback = void (*)();
    using QCheckBox_Destroy_Callback = void (*)();
    using QCheckBox_FocusNextChild_Callback = bool (*)();
    using QCheckBox_FocusPreviousChild_Callback = bool (*)();
    using QCheckBox_Sender_Callback = QObject* (*)();
    using QCheckBox_SenderSignalIndex_Callback = int (*)();
    using QCheckBox_Receivers_Callback = int (*)(const QCheckBox*, const char*);
    using QCheckBox_IsSignalConnected_Callback = bool (*)(const QCheckBox*, QMetaMethod*);
    using QCheckBox_GetDecodedMetricF_Callback = double (*)(const QCheckBox*, int, int);

  protected:
    // Instance callback storage
    QCheckBox_MetaObject_Callback qcheckbox_metaobject_callback = nullptr;
    QCheckBox_Metacast_Callback qcheckbox_metacast_callback = nullptr;
    QCheckBox_Metacall_Callback qcheckbox_metacall_callback = nullptr;
    QCheckBox_SizeHint_Callback qcheckbox_sizehint_callback = nullptr;
    QCheckBox_MinimumSizeHint_Callback qcheckbox_minimumsizehint_callback = nullptr;
    QCheckBox_Event_Callback qcheckbox_event_callback = nullptr;
    QCheckBox_HitButton_Callback qcheckbox_hitbutton_callback = nullptr;
    QCheckBox_CheckStateSet_Callback qcheckbox_checkstateset_callback = nullptr;
    QCheckBox_NextCheckState_Callback qcheckbox_nextcheckstate_callback = nullptr;
    QCheckBox_PaintEvent_Callback qcheckbox_paintevent_callback = nullptr;
    QCheckBox_MouseMoveEvent_Callback qcheckbox_mousemoveevent_callback = nullptr;
    QCheckBox_InitStyleOption_Callback qcheckbox_initstyleoption_callback = nullptr;
    QCheckBox_KeyPressEvent_Callback qcheckbox_keypressevent_callback = nullptr;
    QCheckBox_KeyReleaseEvent_Callback qcheckbox_keyreleaseevent_callback = nullptr;
    QCheckBox_MousePressEvent_Callback qcheckbox_mousepressevent_callback = nullptr;
    QCheckBox_MouseReleaseEvent_Callback qcheckbox_mousereleaseevent_callback = nullptr;
    QCheckBox_FocusInEvent_Callback qcheckbox_focusinevent_callback = nullptr;
    QCheckBox_FocusOutEvent_Callback qcheckbox_focusoutevent_callback = nullptr;
    QCheckBox_ChangeEvent_Callback qcheckbox_changeevent_callback = nullptr;
    QCheckBox_TimerEvent_Callback qcheckbox_timerevent_callback = nullptr;
    QCheckBox_DevType_Callback qcheckbox_devtype_callback = nullptr;
    QCheckBox_SetVisible_Callback qcheckbox_setvisible_callback = nullptr;
    QCheckBox_HeightForWidth_Callback qcheckbox_heightforwidth_callback = nullptr;
    QCheckBox_HasHeightForWidth_Callback qcheckbox_hasheightforwidth_callback = nullptr;
    QCheckBox_PaintEngine_Callback qcheckbox_paintengine_callback = nullptr;
    QCheckBox_MouseDoubleClickEvent_Callback qcheckbox_mousedoubleclickevent_callback = nullptr;
    QCheckBox_WheelEvent_Callback qcheckbox_wheelevent_callback = nullptr;
    QCheckBox_EnterEvent_Callback qcheckbox_enterevent_callback = nullptr;
    QCheckBox_LeaveEvent_Callback qcheckbox_leaveevent_callback = nullptr;
    QCheckBox_MoveEvent_Callback qcheckbox_moveevent_callback = nullptr;
    QCheckBox_ResizeEvent_Callback qcheckbox_resizeevent_callback = nullptr;
    QCheckBox_CloseEvent_Callback qcheckbox_closeevent_callback = nullptr;
    QCheckBox_ContextMenuEvent_Callback qcheckbox_contextmenuevent_callback = nullptr;
    QCheckBox_TabletEvent_Callback qcheckbox_tabletevent_callback = nullptr;
    QCheckBox_ActionEvent_Callback qcheckbox_actionevent_callback = nullptr;
    QCheckBox_DragEnterEvent_Callback qcheckbox_dragenterevent_callback = nullptr;
    QCheckBox_DragMoveEvent_Callback qcheckbox_dragmoveevent_callback = nullptr;
    QCheckBox_DragLeaveEvent_Callback qcheckbox_dragleaveevent_callback = nullptr;
    QCheckBox_DropEvent_Callback qcheckbox_dropevent_callback = nullptr;
    QCheckBox_ShowEvent_Callback qcheckbox_showevent_callback = nullptr;
    QCheckBox_HideEvent_Callback qcheckbox_hideevent_callback = nullptr;
    QCheckBox_NativeEvent_Callback qcheckbox_nativeevent_callback = nullptr;
    QCheckBox_Metric_Callback qcheckbox_metric_callback = nullptr;
    QCheckBox_InitPainter_Callback qcheckbox_initpainter_callback = nullptr;
    QCheckBox_Redirected_Callback qcheckbox_redirected_callback = nullptr;
    QCheckBox_SharedPainter_Callback qcheckbox_sharedpainter_callback = nullptr;
    QCheckBox_InputMethodEvent_Callback qcheckbox_inputmethodevent_callback = nullptr;
    QCheckBox_InputMethodQuery_Callback qcheckbox_inputmethodquery_callback = nullptr;
    QCheckBox_FocusNextPrevChild_Callback qcheckbox_focusnextprevchild_callback = nullptr;
    QCheckBox_EventFilter_Callback qcheckbox_eventfilter_callback = nullptr;
    QCheckBox_ChildEvent_Callback qcheckbox_childevent_callback = nullptr;
    QCheckBox_CustomEvent_Callback qcheckbox_customevent_callback = nullptr;
    QCheckBox_ConnectNotify_Callback qcheckbox_connectnotify_callback = nullptr;
    QCheckBox_DisconnectNotify_Callback qcheckbox_disconnectnotify_callback = nullptr;
    QCheckBox_UpdateMicroFocus_Callback qcheckbox_updatemicrofocus_callback = nullptr;
    QCheckBox_Create_Callback qcheckbox_create_callback = nullptr;
    QCheckBox_Destroy_Callback qcheckbox_destroy_callback = nullptr;
    QCheckBox_FocusNextChild_Callback qcheckbox_focusnextchild_callback = nullptr;
    QCheckBox_FocusPreviousChild_Callback qcheckbox_focuspreviouschild_callback = nullptr;
    QCheckBox_Sender_Callback qcheckbox_sender_callback = nullptr;
    QCheckBox_SenderSignalIndex_Callback qcheckbox_sendersignalindex_callback = nullptr;
    QCheckBox_Receivers_Callback qcheckbox_receivers_callback = nullptr;
    QCheckBox_IsSignalConnected_Callback qcheckbox_issignalconnected_callback = nullptr;
    QCheckBox_GetDecodedMetricF_Callback qcheckbox_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qcheckbox_metaobject_isbase = false;
    mutable bool qcheckbox_metacast_isbase = false;
    mutable bool qcheckbox_metacall_isbase = false;
    mutable bool qcheckbox_sizehint_isbase = false;
    mutable bool qcheckbox_minimumsizehint_isbase = false;
    mutable bool qcheckbox_event_isbase = false;
    mutable bool qcheckbox_hitbutton_isbase = false;
    mutable bool qcheckbox_checkstateset_isbase = false;
    mutable bool qcheckbox_nextcheckstate_isbase = false;
    mutable bool qcheckbox_paintevent_isbase = false;
    mutable bool qcheckbox_mousemoveevent_isbase = false;
    mutable bool qcheckbox_initstyleoption_isbase = false;
    mutable bool qcheckbox_keypressevent_isbase = false;
    mutable bool qcheckbox_keyreleaseevent_isbase = false;
    mutable bool qcheckbox_mousepressevent_isbase = false;
    mutable bool qcheckbox_mousereleaseevent_isbase = false;
    mutable bool qcheckbox_focusinevent_isbase = false;
    mutable bool qcheckbox_focusoutevent_isbase = false;
    mutable bool qcheckbox_changeevent_isbase = false;
    mutable bool qcheckbox_timerevent_isbase = false;
    mutable bool qcheckbox_devtype_isbase = false;
    mutable bool qcheckbox_setvisible_isbase = false;
    mutable bool qcheckbox_heightforwidth_isbase = false;
    mutable bool qcheckbox_hasheightforwidth_isbase = false;
    mutable bool qcheckbox_paintengine_isbase = false;
    mutable bool qcheckbox_mousedoubleclickevent_isbase = false;
    mutable bool qcheckbox_wheelevent_isbase = false;
    mutable bool qcheckbox_enterevent_isbase = false;
    mutable bool qcheckbox_leaveevent_isbase = false;
    mutable bool qcheckbox_moveevent_isbase = false;
    mutable bool qcheckbox_resizeevent_isbase = false;
    mutable bool qcheckbox_closeevent_isbase = false;
    mutable bool qcheckbox_contextmenuevent_isbase = false;
    mutable bool qcheckbox_tabletevent_isbase = false;
    mutable bool qcheckbox_actionevent_isbase = false;
    mutable bool qcheckbox_dragenterevent_isbase = false;
    mutable bool qcheckbox_dragmoveevent_isbase = false;
    mutable bool qcheckbox_dragleaveevent_isbase = false;
    mutable bool qcheckbox_dropevent_isbase = false;
    mutable bool qcheckbox_showevent_isbase = false;
    mutable bool qcheckbox_hideevent_isbase = false;
    mutable bool qcheckbox_nativeevent_isbase = false;
    mutable bool qcheckbox_metric_isbase = false;
    mutable bool qcheckbox_initpainter_isbase = false;
    mutable bool qcheckbox_redirected_isbase = false;
    mutable bool qcheckbox_sharedpainter_isbase = false;
    mutable bool qcheckbox_inputmethodevent_isbase = false;
    mutable bool qcheckbox_inputmethodquery_isbase = false;
    mutable bool qcheckbox_focusnextprevchild_isbase = false;
    mutable bool qcheckbox_eventfilter_isbase = false;
    mutable bool qcheckbox_childevent_isbase = false;
    mutable bool qcheckbox_customevent_isbase = false;
    mutable bool qcheckbox_connectnotify_isbase = false;
    mutable bool qcheckbox_disconnectnotify_isbase = false;
    mutable bool qcheckbox_updatemicrofocus_isbase = false;
    mutable bool qcheckbox_create_isbase = false;
    mutable bool qcheckbox_destroy_isbase = false;
    mutable bool qcheckbox_focusnextchild_isbase = false;
    mutable bool qcheckbox_focuspreviouschild_isbase = false;
    mutable bool qcheckbox_sender_isbase = false;
    mutable bool qcheckbox_sendersignalindex_isbase = false;
    mutable bool qcheckbox_receivers_isbase = false;
    mutable bool qcheckbox_issignalconnected_isbase = false;
    mutable bool qcheckbox_getdecodedmetricf_isbase = false;

  public:
    VirtualQCheckBox(QWidget* parent) : QCheckBox(parent) {};
    VirtualQCheckBox() : QCheckBox() {};
    VirtualQCheckBox(const QString& text) : QCheckBox(text) {};
    VirtualQCheckBox(const QString& text, QWidget* parent) : QCheckBox(text, parent) {};

    // Callback setters
    inline void setQCheckBox_MetaObject_Callback(QCheckBox_MetaObject_Callback cb) { qcheckbox_metaobject_callback = cb; }
    inline void setQCheckBox_Metacast_Callback(QCheckBox_Metacast_Callback cb) { qcheckbox_metacast_callback = cb; }
    inline void setQCheckBox_Metacall_Callback(QCheckBox_Metacall_Callback cb) { qcheckbox_metacall_callback = cb; }
    inline void setQCheckBox_SizeHint_Callback(QCheckBox_SizeHint_Callback cb) { qcheckbox_sizehint_callback = cb; }
    inline void setQCheckBox_MinimumSizeHint_Callback(QCheckBox_MinimumSizeHint_Callback cb) { qcheckbox_minimumsizehint_callback = cb; }
    inline void setQCheckBox_Event_Callback(QCheckBox_Event_Callback cb) { qcheckbox_event_callback = cb; }
    inline void setQCheckBox_HitButton_Callback(QCheckBox_HitButton_Callback cb) { qcheckbox_hitbutton_callback = cb; }
    inline void setQCheckBox_CheckStateSet_Callback(QCheckBox_CheckStateSet_Callback cb) { qcheckbox_checkstateset_callback = cb; }
    inline void setQCheckBox_NextCheckState_Callback(QCheckBox_NextCheckState_Callback cb) { qcheckbox_nextcheckstate_callback = cb; }
    inline void setQCheckBox_PaintEvent_Callback(QCheckBox_PaintEvent_Callback cb) { qcheckbox_paintevent_callback = cb; }
    inline void setQCheckBox_MouseMoveEvent_Callback(QCheckBox_MouseMoveEvent_Callback cb) { qcheckbox_mousemoveevent_callback = cb; }
    inline void setQCheckBox_InitStyleOption_Callback(QCheckBox_InitStyleOption_Callback cb) { qcheckbox_initstyleoption_callback = cb; }
    inline void setQCheckBox_KeyPressEvent_Callback(QCheckBox_KeyPressEvent_Callback cb) { qcheckbox_keypressevent_callback = cb; }
    inline void setQCheckBox_KeyReleaseEvent_Callback(QCheckBox_KeyReleaseEvent_Callback cb) { qcheckbox_keyreleaseevent_callback = cb; }
    inline void setQCheckBox_MousePressEvent_Callback(QCheckBox_MousePressEvent_Callback cb) { qcheckbox_mousepressevent_callback = cb; }
    inline void setQCheckBox_MouseReleaseEvent_Callback(QCheckBox_MouseReleaseEvent_Callback cb) { qcheckbox_mousereleaseevent_callback = cb; }
    inline void setQCheckBox_FocusInEvent_Callback(QCheckBox_FocusInEvent_Callback cb) { qcheckbox_focusinevent_callback = cb; }
    inline void setQCheckBox_FocusOutEvent_Callback(QCheckBox_FocusOutEvent_Callback cb) { qcheckbox_focusoutevent_callback = cb; }
    inline void setQCheckBox_ChangeEvent_Callback(QCheckBox_ChangeEvent_Callback cb) { qcheckbox_changeevent_callback = cb; }
    inline void setQCheckBox_TimerEvent_Callback(QCheckBox_TimerEvent_Callback cb) { qcheckbox_timerevent_callback = cb; }
    inline void setQCheckBox_DevType_Callback(QCheckBox_DevType_Callback cb) { qcheckbox_devtype_callback = cb; }
    inline void setQCheckBox_SetVisible_Callback(QCheckBox_SetVisible_Callback cb) { qcheckbox_setvisible_callback = cb; }
    inline void setQCheckBox_HeightForWidth_Callback(QCheckBox_HeightForWidth_Callback cb) { qcheckbox_heightforwidth_callback = cb; }
    inline void setQCheckBox_HasHeightForWidth_Callback(QCheckBox_HasHeightForWidth_Callback cb) { qcheckbox_hasheightforwidth_callback = cb; }
    inline void setQCheckBox_PaintEngine_Callback(QCheckBox_PaintEngine_Callback cb) { qcheckbox_paintengine_callback = cb; }
    inline void setQCheckBox_MouseDoubleClickEvent_Callback(QCheckBox_MouseDoubleClickEvent_Callback cb) { qcheckbox_mousedoubleclickevent_callback = cb; }
    inline void setQCheckBox_WheelEvent_Callback(QCheckBox_WheelEvent_Callback cb) { qcheckbox_wheelevent_callback = cb; }
    inline void setQCheckBox_EnterEvent_Callback(QCheckBox_EnterEvent_Callback cb) { qcheckbox_enterevent_callback = cb; }
    inline void setQCheckBox_LeaveEvent_Callback(QCheckBox_LeaveEvent_Callback cb) { qcheckbox_leaveevent_callback = cb; }
    inline void setQCheckBox_MoveEvent_Callback(QCheckBox_MoveEvent_Callback cb) { qcheckbox_moveevent_callback = cb; }
    inline void setQCheckBox_ResizeEvent_Callback(QCheckBox_ResizeEvent_Callback cb) { qcheckbox_resizeevent_callback = cb; }
    inline void setQCheckBox_CloseEvent_Callback(QCheckBox_CloseEvent_Callback cb) { qcheckbox_closeevent_callback = cb; }
    inline void setQCheckBox_ContextMenuEvent_Callback(QCheckBox_ContextMenuEvent_Callback cb) { qcheckbox_contextmenuevent_callback = cb; }
    inline void setQCheckBox_TabletEvent_Callback(QCheckBox_TabletEvent_Callback cb) { qcheckbox_tabletevent_callback = cb; }
    inline void setQCheckBox_ActionEvent_Callback(QCheckBox_ActionEvent_Callback cb) { qcheckbox_actionevent_callback = cb; }
    inline void setQCheckBox_DragEnterEvent_Callback(QCheckBox_DragEnterEvent_Callback cb) { qcheckbox_dragenterevent_callback = cb; }
    inline void setQCheckBox_DragMoveEvent_Callback(QCheckBox_DragMoveEvent_Callback cb) { qcheckbox_dragmoveevent_callback = cb; }
    inline void setQCheckBox_DragLeaveEvent_Callback(QCheckBox_DragLeaveEvent_Callback cb) { qcheckbox_dragleaveevent_callback = cb; }
    inline void setQCheckBox_DropEvent_Callback(QCheckBox_DropEvent_Callback cb) { qcheckbox_dropevent_callback = cb; }
    inline void setQCheckBox_ShowEvent_Callback(QCheckBox_ShowEvent_Callback cb) { qcheckbox_showevent_callback = cb; }
    inline void setQCheckBox_HideEvent_Callback(QCheckBox_HideEvent_Callback cb) { qcheckbox_hideevent_callback = cb; }
    inline void setQCheckBox_NativeEvent_Callback(QCheckBox_NativeEvent_Callback cb) { qcheckbox_nativeevent_callback = cb; }
    inline void setQCheckBox_Metric_Callback(QCheckBox_Metric_Callback cb) { qcheckbox_metric_callback = cb; }
    inline void setQCheckBox_InitPainter_Callback(QCheckBox_InitPainter_Callback cb) { qcheckbox_initpainter_callback = cb; }
    inline void setQCheckBox_Redirected_Callback(QCheckBox_Redirected_Callback cb) { qcheckbox_redirected_callback = cb; }
    inline void setQCheckBox_SharedPainter_Callback(QCheckBox_SharedPainter_Callback cb) { qcheckbox_sharedpainter_callback = cb; }
    inline void setQCheckBox_InputMethodEvent_Callback(QCheckBox_InputMethodEvent_Callback cb) { qcheckbox_inputmethodevent_callback = cb; }
    inline void setQCheckBox_InputMethodQuery_Callback(QCheckBox_InputMethodQuery_Callback cb) { qcheckbox_inputmethodquery_callback = cb; }
    inline void setQCheckBox_FocusNextPrevChild_Callback(QCheckBox_FocusNextPrevChild_Callback cb) { qcheckbox_focusnextprevchild_callback = cb; }
    inline void setQCheckBox_EventFilter_Callback(QCheckBox_EventFilter_Callback cb) { qcheckbox_eventfilter_callback = cb; }
    inline void setQCheckBox_ChildEvent_Callback(QCheckBox_ChildEvent_Callback cb) { qcheckbox_childevent_callback = cb; }
    inline void setQCheckBox_CustomEvent_Callback(QCheckBox_CustomEvent_Callback cb) { qcheckbox_customevent_callback = cb; }
    inline void setQCheckBox_ConnectNotify_Callback(QCheckBox_ConnectNotify_Callback cb) { qcheckbox_connectnotify_callback = cb; }
    inline void setQCheckBox_DisconnectNotify_Callback(QCheckBox_DisconnectNotify_Callback cb) { qcheckbox_disconnectnotify_callback = cb; }
    inline void setQCheckBox_UpdateMicroFocus_Callback(QCheckBox_UpdateMicroFocus_Callback cb) { qcheckbox_updatemicrofocus_callback = cb; }
    inline void setQCheckBox_Create_Callback(QCheckBox_Create_Callback cb) { qcheckbox_create_callback = cb; }
    inline void setQCheckBox_Destroy_Callback(QCheckBox_Destroy_Callback cb) { qcheckbox_destroy_callback = cb; }
    inline void setQCheckBox_FocusNextChild_Callback(QCheckBox_FocusNextChild_Callback cb) { qcheckbox_focusnextchild_callback = cb; }
    inline void setQCheckBox_FocusPreviousChild_Callback(QCheckBox_FocusPreviousChild_Callback cb) { qcheckbox_focuspreviouschild_callback = cb; }
    inline void setQCheckBox_Sender_Callback(QCheckBox_Sender_Callback cb) { qcheckbox_sender_callback = cb; }
    inline void setQCheckBox_SenderSignalIndex_Callback(QCheckBox_SenderSignalIndex_Callback cb) { qcheckbox_sendersignalindex_callback = cb; }
    inline void setQCheckBox_Receivers_Callback(QCheckBox_Receivers_Callback cb) { qcheckbox_receivers_callback = cb; }
    inline void setQCheckBox_IsSignalConnected_Callback(QCheckBox_IsSignalConnected_Callback cb) { qcheckbox_issignalconnected_callback = cb; }
    inline void setQCheckBox_GetDecodedMetricF_Callback(QCheckBox_GetDecodedMetricF_Callback cb) { qcheckbox_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQCheckBox_MetaObject_IsBase(bool value) const { qcheckbox_metaobject_isbase = value; }
    inline void setQCheckBox_Metacast_IsBase(bool value) const { qcheckbox_metacast_isbase = value; }
    inline void setQCheckBox_Metacall_IsBase(bool value) const { qcheckbox_metacall_isbase = value; }
    inline void setQCheckBox_SizeHint_IsBase(bool value) const { qcheckbox_sizehint_isbase = value; }
    inline void setQCheckBox_MinimumSizeHint_IsBase(bool value) const { qcheckbox_minimumsizehint_isbase = value; }
    inline void setQCheckBox_Event_IsBase(bool value) const { qcheckbox_event_isbase = value; }
    inline void setQCheckBox_HitButton_IsBase(bool value) const { qcheckbox_hitbutton_isbase = value; }
    inline void setQCheckBox_CheckStateSet_IsBase(bool value) const { qcheckbox_checkstateset_isbase = value; }
    inline void setQCheckBox_NextCheckState_IsBase(bool value) const { qcheckbox_nextcheckstate_isbase = value; }
    inline void setQCheckBox_PaintEvent_IsBase(bool value) const { qcheckbox_paintevent_isbase = value; }
    inline void setQCheckBox_MouseMoveEvent_IsBase(bool value) const { qcheckbox_mousemoveevent_isbase = value; }
    inline void setQCheckBox_InitStyleOption_IsBase(bool value) const { qcheckbox_initstyleoption_isbase = value; }
    inline void setQCheckBox_KeyPressEvent_IsBase(bool value) const { qcheckbox_keypressevent_isbase = value; }
    inline void setQCheckBox_KeyReleaseEvent_IsBase(bool value) const { qcheckbox_keyreleaseevent_isbase = value; }
    inline void setQCheckBox_MousePressEvent_IsBase(bool value) const { qcheckbox_mousepressevent_isbase = value; }
    inline void setQCheckBox_MouseReleaseEvent_IsBase(bool value) const { qcheckbox_mousereleaseevent_isbase = value; }
    inline void setQCheckBox_FocusInEvent_IsBase(bool value) const { qcheckbox_focusinevent_isbase = value; }
    inline void setQCheckBox_FocusOutEvent_IsBase(bool value) const { qcheckbox_focusoutevent_isbase = value; }
    inline void setQCheckBox_ChangeEvent_IsBase(bool value) const { qcheckbox_changeevent_isbase = value; }
    inline void setQCheckBox_TimerEvent_IsBase(bool value) const { qcheckbox_timerevent_isbase = value; }
    inline void setQCheckBox_DevType_IsBase(bool value) const { qcheckbox_devtype_isbase = value; }
    inline void setQCheckBox_SetVisible_IsBase(bool value) const { qcheckbox_setvisible_isbase = value; }
    inline void setQCheckBox_HeightForWidth_IsBase(bool value) const { qcheckbox_heightforwidth_isbase = value; }
    inline void setQCheckBox_HasHeightForWidth_IsBase(bool value) const { qcheckbox_hasheightforwidth_isbase = value; }
    inline void setQCheckBox_PaintEngine_IsBase(bool value) const { qcheckbox_paintengine_isbase = value; }
    inline void setQCheckBox_MouseDoubleClickEvent_IsBase(bool value) const { qcheckbox_mousedoubleclickevent_isbase = value; }
    inline void setQCheckBox_WheelEvent_IsBase(bool value) const { qcheckbox_wheelevent_isbase = value; }
    inline void setQCheckBox_EnterEvent_IsBase(bool value) const { qcheckbox_enterevent_isbase = value; }
    inline void setQCheckBox_LeaveEvent_IsBase(bool value) const { qcheckbox_leaveevent_isbase = value; }
    inline void setQCheckBox_MoveEvent_IsBase(bool value) const { qcheckbox_moveevent_isbase = value; }
    inline void setQCheckBox_ResizeEvent_IsBase(bool value) const { qcheckbox_resizeevent_isbase = value; }
    inline void setQCheckBox_CloseEvent_IsBase(bool value) const { qcheckbox_closeevent_isbase = value; }
    inline void setQCheckBox_ContextMenuEvent_IsBase(bool value) const { qcheckbox_contextmenuevent_isbase = value; }
    inline void setQCheckBox_TabletEvent_IsBase(bool value) const { qcheckbox_tabletevent_isbase = value; }
    inline void setQCheckBox_ActionEvent_IsBase(bool value) const { qcheckbox_actionevent_isbase = value; }
    inline void setQCheckBox_DragEnterEvent_IsBase(bool value) const { qcheckbox_dragenterevent_isbase = value; }
    inline void setQCheckBox_DragMoveEvent_IsBase(bool value) const { qcheckbox_dragmoveevent_isbase = value; }
    inline void setQCheckBox_DragLeaveEvent_IsBase(bool value) const { qcheckbox_dragleaveevent_isbase = value; }
    inline void setQCheckBox_DropEvent_IsBase(bool value) const { qcheckbox_dropevent_isbase = value; }
    inline void setQCheckBox_ShowEvent_IsBase(bool value) const { qcheckbox_showevent_isbase = value; }
    inline void setQCheckBox_HideEvent_IsBase(bool value) const { qcheckbox_hideevent_isbase = value; }
    inline void setQCheckBox_NativeEvent_IsBase(bool value) const { qcheckbox_nativeevent_isbase = value; }
    inline void setQCheckBox_Metric_IsBase(bool value) const { qcheckbox_metric_isbase = value; }
    inline void setQCheckBox_InitPainter_IsBase(bool value) const { qcheckbox_initpainter_isbase = value; }
    inline void setQCheckBox_Redirected_IsBase(bool value) const { qcheckbox_redirected_isbase = value; }
    inline void setQCheckBox_SharedPainter_IsBase(bool value) const { qcheckbox_sharedpainter_isbase = value; }
    inline void setQCheckBox_InputMethodEvent_IsBase(bool value) const { qcheckbox_inputmethodevent_isbase = value; }
    inline void setQCheckBox_InputMethodQuery_IsBase(bool value) const { qcheckbox_inputmethodquery_isbase = value; }
    inline void setQCheckBox_FocusNextPrevChild_IsBase(bool value) const { qcheckbox_focusnextprevchild_isbase = value; }
    inline void setQCheckBox_EventFilter_IsBase(bool value) const { qcheckbox_eventfilter_isbase = value; }
    inline void setQCheckBox_ChildEvent_IsBase(bool value) const { qcheckbox_childevent_isbase = value; }
    inline void setQCheckBox_CustomEvent_IsBase(bool value) const { qcheckbox_customevent_isbase = value; }
    inline void setQCheckBox_ConnectNotify_IsBase(bool value) const { qcheckbox_connectnotify_isbase = value; }
    inline void setQCheckBox_DisconnectNotify_IsBase(bool value) const { qcheckbox_disconnectnotify_isbase = value; }
    inline void setQCheckBox_UpdateMicroFocus_IsBase(bool value) const { qcheckbox_updatemicrofocus_isbase = value; }
    inline void setQCheckBox_Create_IsBase(bool value) const { qcheckbox_create_isbase = value; }
    inline void setQCheckBox_Destroy_IsBase(bool value) const { qcheckbox_destroy_isbase = value; }
    inline void setQCheckBox_FocusNextChild_IsBase(bool value) const { qcheckbox_focusnextchild_isbase = value; }
    inline void setQCheckBox_FocusPreviousChild_IsBase(bool value) const { qcheckbox_focuspreviouschild_isbase = value; }
    inline void setQCheckBox_Sender_IsBase(bool value) const { qcheckbox_sender_isbase = value; }
    inline void setQCheckBox_SenderSignalIndex_IsBase(bool value) const { qcheckbox_sendersignalindex_isbase = value; }
    inline void setQCheckBox_Receivers_IsBase(bool value) const { qcheckbox_receivers_isbase = value; }
    inline void setQCheckBox_IsSignalConnected_IsBase(bool value) const { qcheckbox_issignalconnected_isbase = value; }
    inline void setQCheckBox_GetDecodedMetricF_IsBase(bool value) const { qcheckbox_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcheckbox_metaobject_isbase) {
            qcheckbox_metaobject_isbase = false;
            return QCheckBox::metaObject();
        }
        auto metaobject_cb = qcheckbox_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QCheckBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcheckbox_metacast_isbase) {
            qcheckbox_metacast_isbase = false;
            return QCheckBox::qt_metacast(param1);
        }
        auto metacast_cb = qcheckbox_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QCheckBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcheckbox_metacall_isbase) {
            qcheckbox_metacall_isbase = false;
            return QCheckBox::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qcheckbox_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QCheckBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qcheckbox_sizehint_isbase) {
            qcheckbox_sizehint_isbase = false;
            return QCheckBox::sizeHint();
        }
        auto sizehint_cb = qcheckbox_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QCheckBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qcheckbox_minimumsizehint_isbase) {
            qcheckbox_minimumsizehint_isbase = false;
            return QCheckBox::minimumSizeHint();
        }
        auto minimumsizehint_cb = qcheckbox_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QCheckBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qcheckbox_event_isbase) {
            qcheckbox_event_isbase = false;
            return QCheckBox::event(e);
        }
        auto event_cb = qcheckbox_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QCheckBox::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (qcheckbox_hitbutton_isbase) {
            qcheckbox_hitbutton_isbase = false;
            return QCheckBox::hitButton(pos);
        }
        auto hitbutton_cb = qcheckbox_hitbutton_callback;
        if (hitbutton_cb) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);

            bool callback_ret = hitbutton_cb(this, cbval1);
            return callback_ret;
        }
        return QCheckBox::hitButton(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (qcheckbox_checkstateset_isbase) {
            qcheckbox_checkstateset_isbase = false;
            QCheckBox::checkStateSet();
            return;
        }
        auto checkstateset_cb = qcheckbox_checkstateset_callback;
        if (checkstateset_cb) {
            checkstateset_cb();
            return;
        }
        QCheckBox::checkStateSet();
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (qcheckbox_nextcheckstate_isbase) {
            qcheckbox_nextcheckstate_isbase = false;
            QCheckBox::nextCheckState();
            return;
        }
        auto nextcheckstate_cb = qcheckbox_nextcheckstate_callback;
        if (nextcheckstate_cb) {
            nextcheckstate_cb();
            return;
        }
        QCheckBox::nextCheckState();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qcheckbox_paintevent_isbase) {
            qcheckbox_paintevent_isbase = false;
            QCheckBox::paintEvent(param1);
            return;
        }
        auto paintevent_cb = qcheckbox_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;

            paintevent_cb(this, cbval1);
            return;
        }
        QCheckBox::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qcheckbox_mousemoveevent_isbase) {
            qcheckbox_mousemoveevent_isbase = false;
            QCheckBox::mouseMoveEvent(param1);
            return;
        }
        auto mousemoveevent_cb = qcheckbox_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QCheckBox::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionButton* option) const override {
        if (qcheckbox_initstyleoption_isbase) {
            qcheckbox_initstyleoption_isbase = false;
            QCheckBox::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qcheckbox_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionButton* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QCheckBox::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qcheckbox_keypressevent_isbase) {
            qcheckbox_keypressevent_isbase = false;
            QCheckBox::keyPressEvent(e);
            return;
        }
        auto keypressevent_cb = qcheckbox_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = e;

            keypressevent_cb(this, cbval1);
            return;
        }
        QCheckBox::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qcheckbox_keyreleaseevent_isbase) {
            qcheckbox_keyreleaseevent_isbase = false;
            QCheckBox::keyReleaseEvent(e);
            return;
        }
        auto keyreleaseevent_cb = qcheckbox_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = e;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QCheckBox::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qcheckbox_mousepressevent_isbase) {
            qcheckbox_mousepressevent_isbase = false;
            QCheckBox::mousePressEvent(e);
            return;
        }
        auto mousepressevent_cb = qcheckbox_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = e;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QCheckBox::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qcheckbox_mousereleaseevent_isbase) {
            qcheckbox_mousereleaseevent_isbase = false;
            QCheckBox::mouseReleaseEvent(e);
            return;
        }
        auto mousereleaseevent_cb = qcheckbox_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = e;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QCheckBox::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qcheckbox_focusinevent_isbase) {
            qcheckbox_focusinevent_isbase = false;
            QCheckBox::focusInEvent(e);
            return;
        }
        auto focusinevent_cb = qcheckbox_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = e;

            focusinevent_cb(this, cbval1);
            return;
        }
        QCheckBox::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qcheckbox_focusoutevent_isbase) {
            qcheckbox_focusoutevent_isbase = false;
            QCheckBox::focusOutEvent(e);
            return;
        }
        auto focusoutevent_cb = qcheckbox_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = e;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QCheckBox::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qcheckbox_changeevent_isbase) {
            qcheckbox_changeevent_isbase = false;
            QCheckBox::changeEvent(e);
            return;
        }
        auto changeevent_cb = qcheckbox_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = e;

            changeevent_cb(this, cbval1);
            return;
        }
        QCheckBox::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qcheckbox_timerevent_isbase) {
            qcheckbox_timerevent_isbase = false;
            QCheckBox::timerEvent(e);
            return;
        }
        auto timerevent_cb = qcheckbox_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = e;

            timerevent_cb(this, cbval1);
            return;
        }
        QCheckBox::timerEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qcheckbox_devtype_isbase) {
            qcheckbox_devtype_isbase = false;
            return QCheckBox::devType();
        }
        auto devtype_cb = qcheckbox_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QCheckBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qcheckbox_setvisible_isbase) {
            qcheckbox_setvisible_isbase = false;
            QCheckBox::setVisible(visible);
            return;
        }
        auto setvisible_cb = qcheckbox_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QCheckBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qcheckbox_heightforwidth_isbase) {
            qcheckbox_heightforwidth_isbase = false;
            return QCheckBox::heightForWidth(param1);
        }
        auto heightforwidth_cb = qcheckbox_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QCheckBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qcheckbox_hasheightforwidth_isbase) {
            qcheckbox_hasheightforwidth_isbase = false;
            return QCheckBox::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qcheckbox_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QCheckBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qcheckbox_paintengine_isbase) {
            qcheckbox_paintengine_isbase = false;
            return QCheckBox::paintEngine();
        }
        auto paintengine_cb = qcheckbox_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QCheckBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qcheckbox_mousedoubleclickevent_isbase) {
            qcheckbox_mousedoubleclickevent_isbase = false;
            QCheckBox::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qcheckbox_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QCheckBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qcheckbox_wheelevent_isbase) {
            qcheckbox_wheelevent_isbase = false;
            QCheckBox::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = qcheckbox_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        QCheckBox::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qcheckbox_enterevent_isbase) {
            qcheckbox_enterevent_isbase = false;
            QCheckBox::enterEvent(event);
            return;
        }
        auto enterevent_cb = qcheckbox_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QCheckBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qcheckbox_leaveevent_isbase) {
            qcheckbox_leaveevent_isbase = false;
            QCheckBox::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qcheckbox_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QCheckBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qcheckbox_moveevent_isbase) {
            qcheckbox_moveevent_isbase = false;
            QCheckBox::moveEvent(event);
            return;
        }
        auto moveevent_cb = qcheckbox_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QCheckBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qcheckbox_resizeevent_isbase) {
            qcheckbox_resizeevent_isbase = false;
            QCheckBox::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = qcheckbox_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        QCheckBox::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qcheckbox_closeevent_isbase) {
            qcheckbox_closeevent_isbase = false;
            QCheckBox::closeEvent(event);
            return;
        }
        auto closeevent_cb = qcheckbox_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QCheckBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qcheckbox_contextmenuevent_isbase) {
            qcheckbox_contextmenuevent_isbase = false;
            QCheckBox::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = qcheckbox_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QCheckBox::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qcheckbox_tabletevent_isbase) {
            qcheckbox_tabletevent_isbase = false;
            QCheckBox::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qcheckbox_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QCheckBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qcheckbox_actionevent_isbase) {
            qcheckbox_actionevent_isbase = false;
            QCheckBox::actionEvent(event);
            return;
        }
        auto actionevent_cb = qcheckbox_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QCheckBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qcheckbox_dragenterevent_isbase) {
            qcheckbox_dragenterevent_isbase = false;
            QCheckBox::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qcheckbox_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QCheckBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qcheckbox_dragmoveevent_isbase) {
            qcheckbox_dragmoveevent_isbase = false;
            QCheckBox::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qcheckbox_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QCheckBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qcheckbox_dragleaveevent_isbase) {
            qcheckbox_dragleaveevent_isbase = false;
            QCheckBox::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qcheckbox_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QCheckBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qcheckbox_dropevent_isbase) {
            qcheckbox_dropevent_isbase = false;
            QCheckBox::dropEvent(event);
            return;
        }
        auto dropevent_cb = qcheckbox_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QCheckBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qcheckbox_showevent_isbase) {
            qcheckbox_showevent_isbase = false;
            QCheckBox::showEvent(event);
            return;
        }
        auto showevent_cb = qcheckbox_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        QCheckBox::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qcheckbox_hideevent_isbase) {
            qcheckbox_hideevent_isbase = false;
            QCheckBox::hideEvent(event);
            return;
        }
        auto hideevent_cb = qcheckbox_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        QCheckBox::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qcheckbox_nativeevent_isbase) {
            qcheckbox_nativeevent_isbase = false;
            return QCheckBox::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qcheckbox_nativeevent_callback;
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
        return QCheckBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qcheckbox_metric_isbase) {
            qcheckbox_metric_isbase = false;
            return QCheckBox::metric(param1);
        }
        auto metric_cb = qcheckbox_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QCheckBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qcheckbox_initpainter_isbase) {
            qcheckbox_initpainter_isbase = false;
            QCheckBox::initPainter(painter);
            return;
        }
        auto initpainter_cb = qcheckbox_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QCheckBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qcheckbox_redirected_isbase) {
            qcheckbox_redirected_isbase = false;
            return QCheckBox::redirected(offset);
        }
        auto redirected_cb = qcheckbox_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QCheckBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qcheckbox_sharedpainter_isbase) {
            qcheckbox_sharedpainter_isbase = false;
            return QCheckBox::sharedPainter();
        }
        auto sharedpainter_cb = qcheckbox_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QCheckBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qcheckbox_inputmethodevent_isbase) {
            qcheckbox_inputmethodevent_isbase = false;
            QCheckBox::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qcheckbox_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QCheckBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qcheckbox_inputmethodquery_isbase) {
            qcheckbox_inputmethodquery_isbase = false;
            return QCheckBox::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qcheckbox_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QCheckBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qcheckbox_focusnextprevchild_isbase) {
            qcheckbox_focusnextprevchild_isbase = false;
            return QCheckBox::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qcheckbox_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QCheckBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcheckbox_eventfilter_isbase) {
            qcheckbox_eventfilter_isbase = false;
            return QCheckBox::eventFilter(watched, event);
        }
        auto eventfilter_cb = qcheckbox_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QCheckBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcheckbox_childevent_isbase) {
            qcheckbox_childevent_isbase = false;
            QCheckBox::childEvent(event);
            return;
        }
        auto childevent_cb = qcheckbox_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QCheckBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcheckbox_customevent_isbase) {
            qcheckbox_customevent_isbase = false;
            QCheckBox::customEvent(event);
            return;
        }
        auto customevent_cb = qcheckbox_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QCheckBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcheckbox_connectnotify_isbase) {
            qcheckbox_connectnotify_isbase = false;
            QCheckBox::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qcheckbox_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QCheckBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcheckbox_disconnectnotify_isbase) {
            qcheckbox_disconnectnotify_isbase = false;
            QCheckBox::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qcheckbox_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QCheckBox::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qcheckbox_updatemicrofocus_isbase) {
            qcheckbox_updatemicrofocus_isbase = false;
            QCheckBox::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qcheckbox_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QCheckBox::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qcheckbox_create_isbase) {
            qcheckbox_create_isbase = false;
            QCheckBox::create();
            return;
        }
        auto create_cb = qcheckbox_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QCheckBox::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qcheckbox_destroy_isbase) {
            qcheckbox_destroy_isbase = false;
            QCheckBox::destroy();
            return;
        }
        auto destroy_cb = qcheckbox_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QCheckBox::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qcheckbox_focusnextchild_isbase) {
            qcheckbox_focusnextchild_isbase = false;
            return QCheckBox::focusNextChild();
        }
        auto focusnextchild_cb = qcheckbox_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QCheckBox::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qcheckbox_focuspreviouschild_isbase) {
            qcheckbox_focuspreviouschild_isbase = false;
            return QCheckBox::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qcheckbox_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QCheckBox::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcheckbox_sender_isbase) {
            qcheckbox_sender_isbase = false;
            return QCheckBox::sender();
        }
        auto sender_cb = qcheckbox_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QCheckBox::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcheckbox_sendersignalindex_isbase) {
            qcheckbox_sendersignalindex_isbase = false;
            return QCheckBox::senderSignalIndex();
        }
        auto sendersignalindex_cb = qcheckbox_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QCheckBox::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcheckbox_receivers_isbase) {
            qcheckbox_receivers_isbase = false;
            return QCheckBox::receivers(signal);
        }
        auto receivers_cb = qcheckbox_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QCheckBox::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcheckbox_issignalconnected_isbase) {
            qcheckbox_issignalconnected_isbase = false;
            return QCheckBox::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qcheckbox_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QCheckBox::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qcheckbox_getdecodedmetricf_isbase) {
            qcheckbox_getdecodedmetricf_isbase = false;
            return QCheckBox::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qcheckbox_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QCheckBox::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool QCheckBox_Event(QCheckBox* self, QEvent* e);
    friend bool QCheckBox_SuperEvent(QCheckBox* self, QEvent* e);
    friend bool QCheckBox_HitButton(const QCheckBox* self, const QPoint* pos);
    friend bool QCheckBox_SuperHitButton(const QCheckBox* self, const QPoint* pos);
    friend void QCheckBox_CheckStateSet(QCheckBox* self);
    friend void QCheckBox_SuperCheckStateSet(QCheckBox* self);
    friend void QCheckBox_NextCheckState(QCheckBox* self);
    friend void QCheckBox_SuperNextCheckState(QCheckBox* self);
    friend void QCheckBox_PaintEvent(QCheckBox* self, QPaintEvent* param1);
    friend void QCheckBox_SuperPaintEvent(QCheckBox* self, QPaintEvent* param1);
    friend void QCheckBox_MouseMoveEvent(QCheckBox* self, QMouseEvent* param1);
    friend void QCheckBox_SuperMouseMoveEvent(QCheckBox* self, QMouseEvent* param1);
    friend void QCheckBox_InitStyleOption(const QCheckBox* self, QStyleOptionButton* option);
    friend void QCheckBox_SuperInitStyleOption(const QCheckBox* self, QStyleOptionButton* option);
    friend void QCheckBox_KeyPressEvent(QCheckBox* self, QKeyEvent* e);
    friend void QCheckBox_SuperKeyPressEvent(QCheckBox* self, QKeyEvent* e);
    friend void QCheckBox_KeyReleaseEvent(QCheckBox* self, QKeyEvent* e);
    friend void QCheckBox_SuperKeyReleaseEvent(QCheckBox* self, QKeyEvent* e);
    friend void QCheckBox_MousePressEvent(QCheckBox* self, QMouseEvent* e);
    friend void QCheckBox_SuperMousePressEvent(QCheckBox* self, QMouseEvent* e);
    friend void QCheckBox_MouseReleaseEvent(QCheckBox* self, QMouseEvent* e);
    friend void QCheckBox_SuperMouseReleaseEvent(QCheckBox* self, QMouseEvent* e);
    friend void QCheckBox_FocusInEvent(QCheckBox* self, QFocusEvent* e);
    friend void QCheckBox_SuperFocusInEvent(QCheckBox* self, QFocusEvent* e);
    friend void QCheckBox_FocusOutEvent(QCheckBox* self, QFocusEvent* e);
    friend void QCheckBox_SuperFocusOutEvent(QCheckBox* self, QFocusEvent* e);
    friend void QCheckBox_ChangeEvent(QCheckBox* self, QEvent* e);
    friend void QCheckBox_SuperChangeEvent(QCheckBox* self, QEvent* e);
    friend void QCheckBox_TimerEvent(QCheckBox* self, QTimerEvent* e);
    friend void QCheckBox_SuperTimerEvent(QCheckBox* self, QTimerEvent* e);
    friend void QCheckBox_MouseDoubleClickEvent(QCheckBox* self, QMouseEvent* event);
    friend void QCheckBox_SuperMouseDoubleClickEvent(QCheckBox* self, QMouseEvent* event);
    friend void QCheckBox_WheelEvent(QCheckBox* self, QWheelEvent* event);
    friend void QCheckBox_SuperWheelEvent(QCheckBox* self, QWheelEvent* event);
    friend void QCheckBox_EnterEvent(QCheckBox* self, QEnterEvent* event);
    friend void QCheckBox_SuperEnterEvent(QCheckBox* self, QEnterEvent* event);
    friend void QCheckBox_LeaveEvent(QCheckBox* self, QEvent* event);
    friend void QCheckBox_SuperLeaveEvent(QCheckBox* self, QEvent* event);
    friend void QCheckBox_MoveEvent(QCheckBox* self, QMoveEvent* event);
    friend void QCheckBox_SuperMoveEvent(QCheckBox* self, QMoveEvent* event);
    friend void QCheckBox_ResizeEvent(QCheckBox* self, QResizeEvent* event);
    friend void QCheckBox_SuperResizeEvent(QCheckBox* self, QResizeEvent* event);
    friend void QCheckBox_CloseEvent(QCheckBox* self, QCloseEvent* event);
    friend void QCheckBox_SuperCloseEvent(QCheckBox* self, QCloseEvent* event);
    friend void QCheckBox_ContextMenuEvent(QCheckBox* self, QContextMenuEvent* event);
    friend void QCheckBox_SuperContextMenuEvent(QCheckBox* self, QContextMenuEvent* event);
    friend void QCheckBox_TabletEvent(QCheckBox* self, QTabletEvent* event);
    friend void QCheckBox_SuperTabletEvent(QCheckBox* self, QTabletEvent* event);
    friend void QCheckBox_ActionEvent(QCheckBox* self, QActionEvent* event);
    friend void QCheckBox_SuperActionEvent(QCheckBox* self, QActionEvent* event);
    friend void QCheckBox_DragEnterEvent(QCheckBox* self, QDragEnterEvent* event);
    friend void QCheckBox_SuperDragEnterEvent(QCheckBox* self, QDragEnterEvent* event);
    friend void QCheckBox_DragMoveEvent(QCheckBox* self, QDragMoveEvent* event);
    friend void QCheckBox_SuperDragMoveEvent(QCheckBox* self, QDragMoveEvent* event);
    friend void QCheckBox_DragLeaveEvent(QCheckBox* self, QDragLeaveEvent* event);
    friend void QCheckBox_SuperDragLeaveEvent(QCheckBox* self, QDragLeaveEvent* event);
    friend void QCheckBox_DropEvent(QCheckBox* self, QDropEvent* event);
    friend void QCheckBox_SuperDropEvent(QCheckBox* self, QDropEvent* event);
    friend void QCheckBox_ShowEvent(QCheckBox* self, QShowEvent* event);
    friend void QCheckBox_SuperShowEvent(QCheckBox* self, QShowEvent* event);
    friend void QCheckBox_HideEvent(QCheckBox* self, QHideEvent* event);
    friend void QCheckBox_SuperHideEvent(QCheckBox* self, QHideEvent* event);
    friend bool QCheckBox_NativeEvent(QCheckBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QCheckBox_SuperNativeEvent(QCheckBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QCheckBox_Metric(const QCheckBox* self, int param1);
    friend int QCheckBox_SuperMetric(const QCheckBox* self, int param1);
    friend void QCheckBox_InitPainter(const QCheckBox* self, QPainter* painter);
    friend void QCheckBox_SuperInitPainter(const QCheckBox* self, QPainter* painter);
    friend QPaintDevice* QCheckBox_Redirected(const QCheckBox* self, QPoint* offset);
    friend QPaintDevice* QCheckBox_SuperRedirected(const QCheckBox* self, QPoint* offset);
    friend QPainter* QCheckBox_SharedPainter(const QCheckBox* self);
    friend QPainter* QCheckBox_SuperSharedPainter(const QCheckBox* self);
    friend void QCheckBox_InputMethodEvent(QCheckBox* self, QInputMethodEvent* param1);
    friend void QCheckBox_SuperInputMethodEvent(QCheckBox* self, QInputMethodEvent* param1);
    friend bool QCheckBox_FocusNextPrevChild(QCheckBox* self, bool next);
    friend bool QCheckBox_SuperFocusNextPrevChild(QCheckBox* self, bool next);
    friend void QCheckBox_ChildEvent(QCheckBox* self, QChildEvent* event);
    friend void QCheckBox_SuperChildEvent(QCheckBox* self, QChildEvent* event);
    friend void QCheckBox_CustomEvent(QCheckBox* self, QEvent* event);
    friend void QCheckBox_SuperCustomEvent(QCheckBox* self, QEvent* event);
    friend void QCheckBox_ConnectNotify(QCheckBox* self, const QMetaMethod* signal);
    friend void QCheckBox_SuperConnectNotify(QCheckBox* self, const QMetaMethod* signal);
    friend void QCheckBox_DisconnectNotify(QCheckBox* self, const QMetaMethod* signal);
    friend void QCheckBox_SuperDisconnectNotify(QCheckBox* self, const QMetaMethod* signal);
    friend void QCheckBox_UpdateMicroFocus(QCheckBox* self);
    friend void QCheckBox_SuperUpdateMicroFocus(QCheckBox* self);
    friend void QCheckBox_Create(QCheckBox* self);
    friend void QCheckBox_SuperCreate(QCheckBox* self);
    friend void QCheckBox_Destroy(QCheckBox* self);
    friend void QCheckBox_SuperDestroy(QCheckBox* self);
    friend bool QCheckBox_FocusNextChild(QCheckBox* self);
    friend bool QCheckBox_SuperFocusNextChild(QCheckBox* self);
    friend bool QCheckBox_FocusPreviousChild(QCheckBox* self);
    friend bool QCheckBox_SuperFocusPreviousChild(QCheckBox* self);
    friend QObject* QCheckBox_Sender(const QCheckBox* self);
    friend QObject* QCheckBox_SuperSender(const QCheckBox* self);
    friend int QCheckBox_SenderSignalIndex(const QCheckBox* self);
    friend int QCheckBox_SuperSenderSignalIndex(const QCheckBox* self);
    friend int QCheckBox_Receivers(const QCheckBox* self, const char* signal);
    friend int QCheckBox_SuperReceivers(const QCheckBox* self, const char* signal);
    friend bool QCheckBox_IsSignalConnected(const QCheckBox* self, const QMetaMethod* signal);
    friend bool QCheckBox_SuperIsSignalConnected(const QCheckBox* self, const QMetaMethod* signal);
    friend double QCheckBox_GetDecodedMetricF(const QCheckBox* self, int metricA, int metricB);
    friend double QCheckBox_SuperGetDecodedMetricF(const QCheckBox* self, int metricA, int metricB);
};

#endif
