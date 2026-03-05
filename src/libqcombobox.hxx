#pragma once
#ifndef SRCC_LIBVIRTUALQCOMBOBOX_H
#define SRCC_LIBVIRTUALQCOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QComboBox so that we can call protected methods
class VirtualQComboBox final : public QComboBox {

  public:
    // Virtual class boolean flag
    bool isVirtualQComboBox = true;

    // Virtual class public types (including callbacks)
    using QComboBox_MetaObject_Callback = QMetaObject* (*)();
    using QComboBox_Metacast_Callback = void* (*)(QComboBox*, const char*);
    using QComboBox_Metacall_Callback = int (*)(QComboBox*, int, int, void**);
    using QComboBox_SetModel_Callback = void (*)(QComboBox*, QAbstractItemModel*);
    using QComboBox_SizeHint_Callback = QSize* (*)();
    using QComboBox_MinimumSizeHint_Callback = QSize* (*)();
    using QComboBox_ShowPopup_Callback = void (*)();
    using QComboBox_HidePopup_Callback = void (*)();
    using QComboBox_Event_Callback = bool (*)(QComboBox*, QEvent*);
    using QComboBox_InputMethodQuery_Callback = QVariant* (*)(const QComboBox*, int);
    using QComboBox_FocusInEvent_Callback = void (*)(QComboBox*, QFocusEvent*);
    using QComboBox_FocusOutEvent_Callback = void (*)(QComboBox*, QFocusEvent*);
    using QComboBox_ChangeEvent_Callback = void (*)(QComboBox*, QEvent*);
    using QComboBox_ResizeEvent_Callback = void (*)(QComboBox*, QResizeEvent*);
    using QComboBox_PaintEvent_Callback = void (*)(QComboBox*, QPaintEvent*);
    using QComboBox_ShowEvent_Callback = void (*)(QComboBox*, QShowEvent*);
    using QComboBox_HideEvent_Callback = void (*)(QComboBox*, QHideEvent*);
    using QComboBox_MousePressEvent_Callback = void (*)(QComboBox*, QMouseEvent*);
    using QComboBox_MouseReleaseEvent_Callback = void (*)(QComboBox*, QMouseEvent*);
    using QComboBox_KeyPressEvent_Callback = void (*)(QComboBox*, QKeyEvent*);
    using QComboBox_KeyReleaseEvent_Callback = void (*)(QComboBox*, QKeyEvent*);
    using QComboBox_WheelEvent_Callback = void (*)(QComboBox*, QWheelEvent*);
    using QComboBox_ContextMenuEvent_Callback = void (*)(QComboBox*, QContextMenuEvent*);
    using QComboBox_InputMethodEvent_Callback = void (*)(QComboBox*, QInputMethodEvent*);
    using QComboBox_InitStyleOption_Callback = void (*)(const QComboBox*, QStyleOptionComboBox*);
    using QComboBox_DevType_Callback = int (*)();
    using QComboBox_SetVisible_Callback = void (*)(QComboBox*, bool);
    using QComboBox_HeightForWidth_Callback = int (*)(const QComboBox*, int);
    using QComboBox_HasHeightForWidth_Callback = bool (*)();
    using QComboBox_PaintEngine_Callback = QPaintEngine* (*)();
    using QComboBox_MouseDoubleClickEvent_Callback = void (*)(QComboBox*, QMouseEvent*);
    using QComboBox_MouseMoveEvent_Callback = void (*)(QComboBox*, QMouseEvent*);
    using QComboBox_EnterEvent_Callback = void (*)(QComboBox*, QEnterEvent*);
    using QComboBox_LeaveEvent_Callback = void (*)(QComboBox*, QEvent*);
    using QComboBox_MoveEvent_Callback = void (*)(QComboBox*, QMoveEvent*);
    using QComboBox_CloseEvent_Callback = void (*)(QComboBox*, QCloseEvent*);
    using QComboBox_TabletEvent_Callback = void (*)(QComboBox*, QTabletEvent*);
    using QComboBox_ActionEvent_Callback = void (*)(QComboBox*, QActionEvent*);
    using QComboBox_DragEnterEvent_Callback = void (*)(QComboBox*, QDragEnterEvent*);
    using QComboBox_DragMoveEvent_Callback = void (*)(QComboBox*, QDragMoveEvent*);
    using QComboBox_DragLeaveEvent_Callback = void (*)(QComboBox*, QDragLeaveEvent*);
    using QComboBox_DropEvent_Callback = void (*)(QComboBox*, QDropEvent*);
    using QComboBox_NativeEvent_Callback = bool (*)(QComboBox*, libqt_string, void*, intptr_t*);
    using QComboBox_Metric_Callback = int (*)(const QComboBox*, int);
    using QComboBox_InitPainter_Callback = void (*)(const QComboBox*, QPainter*);
    using QComboBox_Redirected_Callback = QPaintDevice* (*)(const QComboBox*, QPoint*);
    using QComboBox_SharedPainter_Callback = QPainter* (*)();
    using QComboBox_FocusNextPrevChild_Callback = bool (*)(QComboBox*, bool);
    using QComboBox_EventFilter_Callback = bool (*)(QComboBox*, QObject*, QEvent*);
    using QComboBox_TimerEvent_Callback = void (*)(QComboBox*, QTimerEvent*);
    using QComboBox_ChildEvent_Callback = void (*)(QComboBox*, QChildEvent*);
    using QComboBox_CustomEvent_Callback = void (*)(QComboBox*, QEvent*);
    using QComboBox_ConnectNotify_Callback = void (*)(QComboBox*, QMetaMethod*);
    using QComboBox_DisconnectNotify_Callback = void (*)(QComboBox*, QMetaMethod*);
    using QComboBox_UpdateMicroFocus_Callback = void (*)();
    using QComboBox_Create_Callback = void (*)();
    using QComboBox_Destroy_Callback = void (*)();
    using QComboBox_FocusNextChild_Callback = bool (*)();
    using QComboBox_FocusPreviousChild_Callback = bool (*)();
    using QComboBox_Sender_Callback = QObject* (*)();
    using QComboBox_SenderSignalIndex_Callback = int (*)();
    using QComboBox_Receivers_Callback = int (*)(const QComboBox*, const char*);
    using QComboBox_IsSignalConnected_Callback = bool (*)(const QComboBox*, QMetaMethod*);
    using QComboBox_GetDecodedMetricF_Callback = double (*)(const QComboBox*, int, int);

  protected:
    // Instance callback storage
    QComboBox_MetaObject_Callback qcombobox_metaobject_callback = nullptr;
    QComboBox_Metacast_Callback qcombobox_metacast_callback = nullptr;
    QComboBox_Metacall_Callback qcombobox_metacall_callback = nullptr;
    QComboBox_SetModel_Callback qcombobox_setmodel_callback = nullptr;
    QComboBox_SizeHint_Callback qcombobox_sizehint_callback = nullptr;
    QComboBox_MinimumSizeHint_Callback qcombobox_minimumsizehint_callback = nullptr;
    QComboBox_ShowPopup_Callback qcombobox_showpopup_callback = nullptr;
    QComboBox_HidePopup_Callback qcombobox_hidepopup_callback = nullptr;
    QComboBox_Event_Callback qcombobox_event_callback = nullptr;
    QComboBox_InputMethodQuery_Callback qcombobox_inputmethodquery_callback = nullptr;
    QComboBox_FocusInEvent_Callback qcombobox_focusinevent_callback = nullptr;
    QComboBox_FocusOutEvent_Callback qcombobox_focusoutevent_callback = nullptr;
    QComboBox_ChangeEvent_Callback qcombobox_changeevent_callback = nullptr;
    QComboBox_ResizeEvent_Callback qcombobox_resizeevent_callback = nullptr;
    QComboBox_PaintEvent_Callback qcombobox_paintevent_callback = nullptr;
    QComboBox_ShowEvent_Callback qcombobox_showevent_callback = nullptr;
    QComboBox_HideEvent_Callback qcombobox_hideevent_callback = nullptr;
    QComboBox_MousePressEvent_Callback qcombobox_mousepressevent_callback = nullptr;
    QComboBox_MouseReleaseEvent_Callback qcombobox_mousereleaseevent_callback = nullptr;
    QComboBox_KeyPressEvent_Callback qcombobox_keypressevent_callback = nullptr;
    QComboBox_KeyReleaseEvent_Callback qcombobox_keyreleaseevent_callback = nullptr;
    QComboBox_WheelEvent_Callback qcombobox_wheelevent_callback = nullptr;
    QComboBox_ContextMenuEvent_Callback qcombobox_contextmenuevent_callback = nullptr;
    QComboBox_InputMethodEvent_Callback qcombobox_inputmethodevent_callback = nullptr;
    QComboBox_InitStyleOption_Callback qcombobox_initstyleoption_callback = nullptr;
    QComboBox_DevType_Callback qcombobox_devtype_callback = nullptr;
    QComboBox_SetVisible_Callback qcombobox_setvisible_callback = nullptr;
    QComboBox_HeightForWidth_Callback qcombobox_heightforwidth_callback = nullptr;
    QComboBox_HasHeightForWidth_Callback qcombobox_hasheightforwidth_callback = nullptr;
    QComboBox_PaintEngine_Callback qcombobox_paintengine_callback = nullptr;
    QComboBox_MouseDoubleClickEvent_Callback qcombobox_mousedoubleclickevent_callback = nullptr;
    QComboBox_MouseMoveEvent_Callback qcombobox_mousemoveevent_callback = nullptr;
    QComboBox_EnterEvent_Callback qcombobox_enterevent_callback = nullptr;
    QComboBox_LeaveEvent_Callback qcombobox_leaveevent_callback = nullptr;
    QComboBox_MoveEvent_Callback qcombobox_moveevent_callback = nullptr;
    QComboBox_CloseEvent_Callback qcombobox_closeevent_callback = nullptr;
    QComboBox_TabletEvent_Callback qcombobox_tabletevent_callback = nullptr;
    QComboBox_ActionEvent_Callback qcombobox_actionevent_callback = nullptr;
    QComboBox_DragEnterEvent_Callback qcombobox_dragenterevent_callback = nullptr;
    QComboBox_DragMoveEvent_Callback qcombobox_dragmoveevent_callback = nullptr;
    QComboBox_DragLeaveEvent_Callback qcombobox_dragleaveevent_callback = nullptr;
    QComboBox_DropEvent_Callback qcombobox_dropevent_callback = nullptr;
    QComboBox_NativeEvent_Callback qcombobox_nativeevent_callback = nullptr;
    QComboBox_Metric_Callback qcombobox_metric_callback = nullptr;
    QComboBox_InitPainter_Callback qcombobox_initpainter_callback = nullptr;
    QComboBox_Redirected_Callback qcombobox_redirected_callback = nullptr;
    QComboBox_SharedPainter_Callback qcombobox_sharedpainter_callback = nullptr;
    QComboBox_FocusNextPrevChild_Callback qcombobox_focusnextprevchild_callback = nullptr;
    QComboBox_EventFilter_Callback qcombobox_eventfilter_callback = nullptr;
    QComboBox_TimerEvent_Callback qcombobox_timerevent_callback = nullptr;
    QComboBox_ChildEvent_Callback qcombobox_childevent_callback = nullptr;
    QComboBox_CustomEvent_Callback qcombobox_customevent_callback = nullptr;
    QComboBox_ConnectNotify_Callback qcombobox_connectnotify_callback = nullptr;
    QComboBox_DisconnectNotify_Callback qcombobox_disconnectnotify_callback = nullptr;
    QComboBox_UpdateMicroFocus_Callback qcombobox_updatemicrofocus_callback = nullptr;
    QComboBox_Create_Callback qcombobox_create_callback = nullptr;
    QComboBox_Destroy_Callback qcombobox_destroy_callback = nullptr;
    QComboBox_FocusNextChild_Callback qcombobox_focusnextchild_callback = nullptr;
    QComboBox_FocusPreviousChild_Callback qcombobox_focuspreviouschild_callback = nullptr;
    QComboBox_Sender_Callback qcombobox_sender_callback = nullptr;
    QComboBox_SenderSignalIndex_Callback qcombobox_sendersignalindex_callback = nullptr;
    QComboBox_Receivers_Callback qcombobox_receivers_callback = nullptr;
    QComboBox_IsSignalConnected_Callback qcombobox_issignalconnected_callback = nullptr;
    QComboBox_GetDecodedMetricF_Callback qcombobox_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qcombobox_metaobject_isbase = false;
    mutable bool qcombobox_metacast_isbase = false;
    mutable bool qcombobox_metacall_isbase = false;
    mutable bool qcombobox_setmodel_isbase = false;
    mutable bool qcombobox_sizehint_isbase = false;
    mutable bool qcombobox_minimumsizehint_isbase = false;
    mutable bool qcombobox_showpopup_isbase = false;
    mutable bool qcombobox_hidepopup_isbase = false;
    mutable bool qcombobox_event_isbase = false;
    mutable bool qcombobox_inputmethodquery_isbase = false;
    mutable bool qcombobox_focusinevent_isbase = false;
    mutable bool qcombobox_focusoutevent_isbase = false;
    mutable bool qcombobox_changeevent_isbase = false;
    mutable bool qcombobox_resizeevent_isbase = false;
    mutable bool qcombobox_paintevent_isbase = false;
    mutable bool qcombobox_showevent_isbase = false;
    mutable bool qcombobox_hideevent_isbase = false;
    mutable bool qcombobox_mousepressevent_isbase = false;
    mutable bool qcombobox_mousereleaseevent_isbase = false;
    mutable bool qcombobox_keypressevent_isbase = false;
    mutable bool qcombobox_keyreleaseevent_isbase = false;
    mutable bool qcombobox_wheelevent_isbase = false;
    mutable bool qcombobox_contextmenuevent_isbase = false;
    mutable bool qcombobox_inputmethodevent_isbase = false;
    mutable bool qcombobox_initstyleoption_isbase = false;
    mutable bool qcombobox_devtype_isbase = false;
    mutable bool qcombobox_setvisible_isbase = false;
    mutable bool qcombobox_heightforwidth_isbase = false;
    mutable bool qcombobox_hasheightforwidth_isbase = false;
    mutable bool qcombobox_paintengine_isbase = false;
    mutable bool qcombobox_mousedoubleclickevent_isbase = false;
    mutable bool qcombobox_mousemoveevent_isbase = false;
    mutable bool qcombobox_enterevent_isbase = false;
    mutable bool qcombobox_leaveevent_isbase = false;
    mutable bool qcombobox_moveevent_isbase = false;
    mutable bool qcombobox_closeevent_isbase = false;
    mutable bool qcombobox_tabletevent_isbase = false;
    mutable bool qcombobox_actionevent_isbase = false;
    mutable bool qcombobox_dragenterevent_isbase = false;
    mutable bool qcombobox_dragmoveevent_isbase = false;
    mutable bool qcombobox_dragleaveevent_isbase = false;
    mutable bool qcombobox_dropevent_isbase = false;
    mutable bool qcombobox_nativeevent_isbase = false;
    mutable bool qcombobox_metric_isbase = false;
    mutable bool qcombobox_initpainter_isbase = false;
    mutable bool qcombobox_redirected_isbase = false;
    mutable bool qcombobox_sharedpainter_isbase = false;
    mutable bool qcombobox_focusnextprevchild_isbase = false;
    mutable bool qcombobox_eventfilter_isbase = false;
    mutable bool qcombobox_timerevent_isbase = false;
    mutable bool qcombobox_childevent_isbase = false;
    mutable bool qcombobox_customevent_isbase = false;
    mutable bool qcombobox_connectnotify_isbase = false;
    mutable bool qcombobox_disconnectnotify_isbase = false;
    mutable bool qcombobox_updatemicrofocus_isbase = false;
    mutable bool qcombobox_create_isbase = false;
    mutable bool qcombobox_destroy_isbase = false;
    mutable bool qcombobox_focusnextchild_isbase = false;
    mutable bool qcombobox_focuspreviouschild_isbase = false;
    mutable bool qcombobox_sender_isbase = false;
    mutable bool qcombobox_sendersignalindex_isbase = false;
    mutable bool qcombobox_receivers_isbase = false;
    mutable bool qcombobox_issignalconnected_isbase = false;
    mutable bool qcombobox_getdecodedmetricf_isbase = false;

  public:
    VirtualQComboBox(QWidget* parent) : QComboBox(parent) {};
    VirtualQComboBox() : QComboBox() {};

    // Callback setters
    inline void setQComboBox_MetaObject_Callback(QComboBox_MetaObject_Callback cb) { qcombobox_metaobject_callback = cb; }
    inline void setQComboBox_Metacast_Callback(QComboBox_Metacast_Callback cb) { qcombobox_metacast_callback = cb; }
    inline void setQComboBox_Metacall_Callback(QComboBox_Metacall_Callback cb) { qcombobox_metacall_callback = cb; }
    inline void setQComboBox_SetModel_Callback(QComboBox_SetModel_Callback cb) { qcombobox_setmodel_callback = cb; }
    inline void setQComboBox_SizeHint_Callback(QComboBox_SizeHint_Callback cb) { qcombobox_sizehint_callback = cb; }
    inline void setQComboBox_MinimumSizeHint_Callback(QComboBox_MinimumSizeHint_Callback cb) { qcombobox_minimumsizehint_callback = cb; }
    inline void setQComboBox_ShowPopup_Callback(QComboBox_ShowPopup_Callback cb) { qcombobox_showpopup_callback = cb; }
    inline void setQComboBox_HidePopup_Callback(QComboBox_HidePopup_Callback cb) { qcombobox_hidepopup_callback = cb; }
    inline void setQComboBox_Event_Callback(QComboBox_Event_Callback cb) { qcombobox_event_callback = cb; }
    inline void setQComboBox_InputMethodQuery_Callback(QComboBox_InputMethodQuery_Callback cb) { qcombobox_inputmethodquery_callback = cb; }
    inline void setQComboBox_FocusInEvent_Callback(QComboBox_FocusInEvent_Callback cb) { qcombobox_focusinevent_callback = cb; }
    inline void setQComboBox_FocusOutEvent_Callback(QComboBox_FocusOutEvent_Callback cb) { qcombobox_focusoutevent_callback = cb; }
    inline void setQComboBox_ChangeEvent_Callback(QComboBox_ChangeEvent_Callback cb) { qcombobox_changeevent_callback = cb; }
    inline void setQComboBox_ResizeEvent_Callback(QComboBox_ResizeEvent_Callback cb) { qcombobox_resizeevent_callback = cb; }
    inline void setQComboBox_PaintEvent_Callback(QComboBox_PaintEvent_Callback cb) { qcombobox_paintevent_callback = cb; }
    inline void setQComboBox_ShowEvent_Callback(QComboBox_ShowEvent_Callback cb) { qcombobox_showevent_callback = cb; }
    inline void setQComboBox_HideEvent_Callback(QComboBox_HideEvent_Callback cb) { qcombobox_hideevent_callback = cb; }
    inline void setQComboBox_MousePressEvent_Callback(QComboBox_MousePressEvent_Callback cb) { qcombobox_mousepressevent_callback = cb; }
    inline void setQComboBox_MouseReleaseEvent_Callback(QComboBox_MouseReleaseEvent_Callback cb) { qcombobox_mousereleaseevent_callback = cb; }
    inline void setQComboBox_KeyPressEvent_Callback(QComboBox_KeyPressEvent_Callback cb) { qcombobox_keypressevent_callback = cb; }
    inline void setQComboBox_KeyReleaseEvent_Callback(QComboBox_KeyReleaseEvent_Callback cb) { qcombobox_keyreleaseevent_callback = cb; }
    inline void setQComboBox_WheelEvent_Callback(QComboBox_WheelEvent_Callback cb) { qcombobox_wheelevent_callback = cb; }
    inline void setQComboBox_ContextMenuEvent_Callback(QComboBox_ContextMenuEvent_Callback cb) { qcombobox_contextmenuevent_callback = cb; }
    inline void setQComboBox_InputMethodEvent_Callback(QComboBox_InputMethodEvent_Callback cb) { qcombobox_inputmethodevent_callback = cb; }
    inline void setQComboBox_InitStyleOption_Callback(QComboBox_InitStyleOption_Callback cb) { qcombobox_initstyleoption_callback = cb; }
    inline void setQComboBox_DevType_Callback(QComboBox_DevType_Callback cb) { qcombobox_devtype_callback = cb; }
    inline void setQComboBox_SetVisible_Callback(QComboBox_SetVisible_Callback cb) { qcombobox_setvisible_callback = cb; }
    inline void setQComboBox_HeightForWidth_Callback(QComboBox_HeightForWidth_Callback cb) { qcombobox_heightforwidth_callback = cb; }
    inline void setQComboBox_HasHeightForWidth_Callback(QComboBox_HasHeightForWidth_Callback cb) { qcombobox_hasheightforwidth_callback = cb; }
    inline void setQComboBox_PaintEngine_Callback(QComboBox_PaintEngine_Callback cb) { qcombobox_paintengine_callback = cb; }
    inline void setQComboBox_MouseDoubleClickEvent_Callback(QComboBox_MouseDoubleClickEvent_Callback cb) { qcombobox_mousedoubleclickevent_callback = cb; }
    inline void setQComboBox_MouseMoveEvent_Callback(QComboBox_MouseMoveEvent_Callback cb) { qcombobox_mousemoveevent_callback = cb; }
    inline void setQComboBox_EnterEvent_Callback(QComboBox_EnterEvent_Callback cb) { qcombobox_enterevent_callback = cb; }
    inline void setQComboBox_LeaveEvent_Callback(QComboBox_LeaveEvent_Callback cb) { qcombobox_leaveevent_callback = cb; }
    inline void setQComboBox_MoveEvent_Callback(QComboBox_MoveEvent_Callback cb) { qcombobox_moveevent_callback = cb; }
    inline void setQComboBox_CloseEvent_Callback(QComboBox_CloseEvent_Callback cb) { qcombobox_closeevent_callback = cb; }
    inline void setQComboBox_TabletEvent_Callback(QComboBox_TabletEvent_Callback cb) { qcombobox_tabletevent_callback = cb; }
    inline void setQComboBox_ActionEvent_Callback(QComboBox_ActionEvent_Callback cb) { qcombobox_actionevent_callback = cb; }
    inline void setQComboBox_DragEnterEvent_Callback(QComboBox_DragEnterEvent_Callback cb) { qcombobox_dragenterevent_callback = cb; }
    inline void setQComboBox_DragMoveEvent_Callback(QComboBox_DragMoveEvent_Callback cb) { qcombobox_dragmoveevent_callback = cb; }
    inline void setQComboBox_DragLeaveEvent_Callback(QComboBox_DragLeaveEvent_Callback cb) { qcombobox_dragleaveevent_callback = cb; }
    inline void setQComboBox_DropEvent_Callback(QComboBox_DropEvent_Callback cb) { qcombobox_dropevent_callback = cb; }
    inline void setQComboBox_NativeEvent_Callback(QComboBox_NativeEvent_Callback cb) { qcombobox_nativeevent_callback = cb; }
    inline void setQComboBox_Metric_Callback(QComboBox_Metric_Callback cb) { qcombobox_metric_callback = cb; }
    inline void setQComboBox_InitPainter_Callback(QComboBox_InitPainter_Callback cb) { qcombobox_initpainter_callback = cb; }
    inline void setQComboBox_Redirected_Callback(QComboBox_Redirected_Callback cb) { qcombobox_redirected_callback = cb; }
    inline void setQComboBox_SharedPainter_Callback(QComboBox_SharedPainter_Callback cb) { qcombobox_sharedpainter_callback = cb; }
    inline void setQComboBox_FocusNextPrevChild_Callback(QComboBox_FocusNextPrevChild_Callback cb) { qcombobox_focusnextprevchild_callback = cb; }
    inline void setQComboBox_EventFilter_Callback(QComboBox_EventFilter_Callback cb) { qcombobox_eventfilter_callback = cb; }
    inline void setQComboBox_TimerEvent_Callback(QComboBox_TimerEvent_Callback cb) { qcombobox_timerevent_callback = cb; }
    inline void setQComboBox_ChildEvent_Callback(QComboBox_ChildEvent_Callback cb) { qcombobox_childevent_callback = cb; }
    inline void setQComboBox_CustomEvent_Callback(QComboBox_CustomEvent_Callback cb) { qcombobox_customevent_callback = cb; }
    inline void setQComboBox_ConnectNotify_Callback(QComboBox_ConnectNotify_Callback cb) { qcombobox_connectnotify_callback = cb; }
    inline void setQComboBox_DisconnectNotify_Callback(QComboBox_DisconnectNotify_Callback cb) { qcombobox_disconnectnotify_callback = cb; }
    inline void setQComboBox_UpdateMicroFocus_Callback(QComboBox_UpdateMicroFocus_Callback cb) { qcombobox_updatemicrofocus_callback = cb; }
    inline void setQComboBox_Create_Callback(QComboBox_Create_Callback cb) { qcombobox_create_callback = cb; }
    inline void setQComboBox_Destroy_Callback(QComboBox_Destroy_Callback cb) { qcombobox_destroy_callback = cb; }
    inline void setQComboBox_FocusNextChild_Callback(QComboBox_FocusNextChild_Callback cb) { qcombobox_focusnextchild_callback = cb; }
    inline void setQComboBox_FocusPreviousChild_Callback(QComboBox_FocusPreviousChild_Callback cb) { qcombobox_focuspreviouschild_callback = cb; }
    inline void setQComboBox_Sender_Callback(QComboBox_Sender_Callback cb) { qcombobox_sender_callback = cb; }
    inline void setQComboBox_SenderSignalIndex_Callback(QComboBox_SenderSignalIndex_Callback cb) { qcombobox_sendersignalindex_callback = cb; }
    inline void setQComboBox_Receivers_Callback(QComboBox_Receivers_Callback cb) { qcombobox_receivers_callback = cb; }
    inline void setQComboBox_IsSignalConnected_Callback(QComboBox_IsSignalConnected_Callback cb) { qcombobox_issignalconnected_callback = cb; }
    inline void setQComboBox_GetDecodedMetricF_Callback(QComboBox_GetDecodedMetricF_Callback cb) { qcombobox_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQComboBox_MetaObject_IsBase(bool value) const { qcombobox_metaobject_isbase = value; }
    inline void setQComboBox_Metacast_IsBase(bool value) const { qcombobox_metacast_isbase = value; }
    inline void setQComboBox_Metacall_IsBase(bool value) const { qcombobox_metacall_isbase = value; }
    inline void setQComboBox_SetModel_IsBase(bool value) const { qcombobox_setmodel_isbase = value; }
    inline void setQComboBox_SizeHint_IsBase(bool value) const { qcombobox_sizehint_isbase = value; }
    inline void setQComboBox_MinimumSizeHint_IsBase(bool value) const { qcombobox_minimumsizehint_isbase = value; }
    inline void setQComboBox_ShowPopup_IsBase(bool value) const { qcombobox_showpopup_isbase = value; }
    inline void setQComboBox_HidePopup_IsBase(bool value) const { qcombobox_hidepopup_isbase = value; }
    inline void setQComboBox_Event_IsBase(bool value) const { qcombobox_event_isbase = value; }
    inline void setQComboBox_InputMethodQuery_IsBase(bool value) const { qcombobox_inputmethodquery_isbase = value; }
    inline void setQComboBox_FocusInEvent_IsBase(bool value) const { qcombobox_focusinevent_isbase = value; }
    inline void setQComboBox_FocusOutEvent_IsBase(bool value) const { qcombobox_focusoutevent_isbase = value; }
    inline void setQComboBox_ChangeEvent_IsBase(bool value) const { qcombobox_changeevent_isbase = value; }
    inline void setQComboBox_ResizeEvent_IsBase(bool value) const { qcombobox_resizeevent_isbase = value; }
    inline void setQComboBox_PaintEvent_IsBase(bool value) const { qcombobox_paintevent_isbase = value; }
    inline void setQComboBox_ShowEvent_IsBase(bool value) const { qcombobox_showevent_isbase = value; }
    inline void setQComboBox_HideEvent_IsBase(bool value) const { qcombobox_hideevent_isbase = value; }
    inline void setQComboBox_MousePressEvent_IsBase(bool value) const { qcombobox_mousepressevent_isbase = value; }
    inline void setQComboBox_MouseReleaseEvent_IsBase(bool value) const { qcombobox_mousereleaseevent_isbase = value; }
    inline void setQComboBox_KeyPressEvent_IsBase(bool value) const { qcombobox_keypressevent_isbase = value; }
    inline void setQComboBox_KeyReleaseEvent_IsBase(bool value) const { qcombobox_keyreleaseevent_isbase = value; }
    inline void setQComboBox_WheelEvent_IsBase(bool value) const { qcombobox_wheelevent_isbase = value; }
    inline void setQComboBox_ContextMenuEvent_IsBase(bool value) const { qcombobox_contextmenuevent_isbase = value; }
    inline void setQComboBox_InputMethodEvent_IsBase(bool value) const { qcombobox_inputmethodevent_isbase = value; }
    inline void setQComboBox_InitStyleOption_IsBase(bool value) const { qcombobox_initstyleoption_isbase = value; }
    inline void setQComboBox_DevType_IsBase(bool value) const { qcombobox_devtype_isbase = value; }
    inline void setQComboBox_SetVisible_IsBase(bool value) const { qcombobox_setvisible_isbase = value; }
    inline void setQComboBox_HeightForWidth_IsBase(bool value) const { qcombobox_heightforwidth_isbase = value; }
    inline void setQComboBox_HasHeightForWidth_IsBase(bool value) const { qcombobox_hasheightforwidth_isbase = value; }
    inline void setQComboBox_PaintEngine_IsBase(bool value) const { qcombobox_paintengine_isbase = value; }
    inline void setQComboBox_MouseDoubleClickEvent_IsBase(bool value) const { qcombobox_mousedoubleclickevent_isbase = value; }
    inline void setQComboBox_MouseMoveEvent_IsBase(bool value) const { qcombobox_mousemoveevent_isbase = value; }
    inline void setQComboBox_EnterEvent_IsBase(bool value) const { qcombobox_enterevent_isbase = value; }
    inline void setQComboBox_LeaveEvent_IsBase(bool value) const { qcombobox_leaveevent_isbase = value; }
    inline void setQComboBox_MoveEvent_IsBase(bool value) const { qcombobox_moveevent_isbase = value; }
    inline void setQComboBox_CloseEvent_IsBase(bool value) const { qcombobox_closeevent_isbase = value; }
    inline void setQComboBox_TabletEvent_IsBase(bool value) const { qcombobox_tabletevent_isbase = value; }
    inline void setQComboBox_ActionEvent_IsBase(bool value) const { qcombobox_actionevent_isbase = value; }
    inline void setQComboBox_DragEnterEvent_IsBase(bool value) const { qcombobox_dragenterevent_isbase = value; }
    inline void setQComboBox_DragMoveEvent_IsBase(bool value) const { qcombobox_dragmoveevent_isbase = value; }
    inline void setQComboBox_DragLeaveEvent_IsBase(bool value) const { qcombobox_dragleaveevent_isbase = value; }
    inline void setQComboBox_DropEvent_IsBase(bool value) const { qcombobox_dropevent_isbase = value; }
    inline void setQComboBox_NativeEvent_IsBase(bool value) const { qcombobox_nativeevent_isbase = value; }
    inline void setQComboBox_Metric_IsBase(bool value) const { qcombobox_metric_isbase = value; }
    inline void setQComboBox_InitPainter_IsBase(bool value) const { qcombobox_initpainter_isbase = value; }
    inline void setQComboBox_Redirected_IsBase(bool value) const { qcombobox_redirected_isbase = value; }
    inline void setQComboBox_SharedPainter_IsBase(bool value) const { qcombobox_sharedpainter_isbase = value; }
    inline void setQComboBox_FocusNextPrevChild_IsBase(bool value) const { qcombobox_focusnextprevchild_isbase = value; }
    inline void setQComboBox_EventFilter_IsBase(bool value) const { qcombobox_eventfilter_isbase = value; }
    inline void setQComboBox_TimerEvent_IsBase(bool value) const { qcombobox_timerevent_isbase = value; }
    inline void setQComboBox_ChildEvent_IsBase(bool value) const { qcombobox_childevent_isbase = value; }
    inline void setQComboBox_CustomEvent_IsBase(bool value) const { qcombobox_customevent_isbase = value; }
    inline void setQComboBox_ConnectNotify_IsBase(bool value) const { qcombobox_connectnotify_isbase = value; }
    inline void setQComboBox_DisconnectNotify_IsBase(bool value) const { qcombobox_disconnectnotify_isbase = value; }
    inline void setQComboBox_UpdateMicroFocus_IsBase(bool value) const { qcombobox_updatemicrofocus_isbase = value; }
    inline void setQComboBox_Create_IsBase(bool value) const { qcombobox_create_isbase = value; }
    inline void setQComboBox_Destroy_IsBase(bool value) const { qcombobox_destroy_isbase = value; }
    inline void setQComboBox_FocusNextChild_IsBase(bool value) const { qcombobox_focusnextchild_isbase = value; }
    inline void setQComboBox_FocusPreviousChild_IsBase(bool value) const { qcombobox_focuspreviouschild_isbase = value; }
    inline void setQComboBox_Sender_IsBase(bool value) const { qcombobox_sender_isbase = value; }
    inline void setQComboBox_SenderSignalIndex_IsBase(bool value) const { qcombobox_sendersignalindex_isbase = value; }
    inline void setQComboBox_Receivers_IsBase(bool value) const { qcombobox_receivers_isbase = value; }
    inline void setQComboBox_IsSignalConnected_IsBase(bool value) const { qcombobox_issignalconnected_isbase = value; }
    inline void setQComboBox_GetDecodedMetricF_IsBase(bool value) const { qcombobox_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcombobox_metaobject_isbase) {
            qcombobox_metaobject_isbase = false;
            return QComboBox::metaObject();
        }
        auto metaobject_cb = qcombobox_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QComboBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcombobox_metacast_isbase) {
            qcombobox_metacast_isbase = false;
            return QComboBox::qt_metacast(param1);
        }
        auto metacast_cb = qcombobox_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QComboBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcombobox_metacall_isbase) {
            qcombobox_metacall_isbase = false;
            return QComboBox::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qcombobox_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QComboBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qcombobox_setmodel_isbase) {
            qcombobox_setmodel_isbase = false;
            QComboBox::setModel(model);
            return;
        }
        auto setmodel_cb = qcombobox_setmodel_callback;
        if (setmodel_cb) {
            QAbstractItemModel* cbval1 = model;

            setmodel_cb(this, cbval1);
            return;
        }
        QComboBox::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qcombobox_sizehint_isbase) {
            qcombobox_sizehint_isbase = false;
            return QComboBox::sizeHint();
        }
        auto sizehint_cb = qcombobox_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return QComboBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qcombobox_minimumsizehint_isbase) {
            qcombobox_minimumsizehint_isbase = false;
            return QComboBox::minimumSizeHint();
        }
        auto minimumsizehint_cb = qcombobox_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return QComboBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (qcombobox_showpopup_isbase) {
            qcombobox_showpopup_isbase = false;
            QComboBox::showPopup();
            return;
        }
        auto showpopup_cb = qcombobox_showpopup_callback;
        if (showpopup_cb) {
            showpopup_cb();
            return;
        }
        QComboBox::showPopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (qcombobox_hidepopup_isbase) {
            qcombobox_hidepopup_isbase = false;
            QComboBox::hidePopup();
            return;
        }
        auto hidepopup_cb = qcombobox_hidepopup_callback;
        if (hidepopup_cb) {
            hidepopup_cb();
            return;
        }
        QComboBox::hidePopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcombobox_event_isbase) {
            qcombobox_event_isbase = false;
            return QComboBox::event(event);
        }
        auto event_cb = qcombobox_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QComboBox::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qcombobox_inputmethodquery_isbase) {
            qcombobox_inputmethodquery_isbase = false;
            return QComboBox::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = qcombobox_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return QComboBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qcombobox_focusinevent_isbase) {
            qcombobox_focusinevent_isbase = false;
            QComboBox::focusInEvent(e);
            return;
        }
        auto focusinevent_cb = qcombobox_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = e;

            focusinevent_cb(this, cbval1);
            return;
        }
        QComboBox::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qcombobox_focusoutevent_isbase) {
            qcombobox_focusoutevent_isbase = false;
            QComboBox::focusOutEvent(e);
            return;
        }
        auto focusoutevent_cb = qcombobox_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = e;

            focusoutevent_cb(this, cbval1);
            return;
        }
        QComboBox::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qcombobox_changeevent_isbase) {
            qcombobox_changeevent_isbase = false;
            QComboBox::changeEvent(e);
            return;
        }
        auto changeevent_cb = qcombobox_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = e;

            changeevent_cb(this, cbval1);
            return;
        }
        QComboBox::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qcombobox_resizeevent_isbase) {
            qcombobox_resizeevent_isbase = false;
            QComboBox::resizeEvent(e);
            return;
        }
        auto resizeevent_cb = qcombobox_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = e;

            resizeevent_cb(this, cbval1);
            return;
        }
        QComboBox::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qcombobox_paintevent_isbase) {
            qcombobox_paintevent_isbase = false;
            QComboBox::paintEvent(e);
            return;
        }
        auto paintevent_cb = qcombobox_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = e;

            paintevent_cb(this, cbval1);
            return;
        }
        QComboBox::paintEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (qcombobox_showevent_isbase) {
            qcombobox_showevent_isbase = false;
            QComboBox::showEvent(e);
            return;
        }
        auto showevent_cb = qcombobox_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = e;

            showevent_cb(this, cbval1);
            return;
        }
        QComboBox::showEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (qcombobox_hideevent_isbase) {
            qcombobox_hideevent_isbase = false;
            QComboBox::hideEvent(e);
            return;
        }
        auto hideevent_cb = qcombobox_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = e;

            hideevent_cb(this, cbval1);
            return;
        }
        QComboBox::hideEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qcombobox_mousepressevent_isbase) {
            qcombobox_mousepressevent_isbase = false;
            QComboBox::mousePressEvent(e);
            return;
        }
        auto mousepressevent_cb = qcombobox_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = e;

            mousepressevent_cb(this, cbval1);
            return;
        }
        QComboBox::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qcombobox_mousereleaseevent_isbase) {
            qcombobox_mousereleaseevent_isbase = false;
            QComboBox::mouseReleaseEvent(e);
            return;
        }
        auto mousereleaseevent_cb = qcombobox_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = e;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        QComboBox::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qcombobox_keypressevent_isbase) {
            qcombobox_keypressevent_isbase = false;
            QComboBox::keyPressEvent(e);
            return;
        }
        auto keypressevent_cb = qcombobox_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = e;

            keypressevent_cb(this, cbval1);
            return;
        }
        QComboBox::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qcombobox_keyreleaseevent_isbase) {
            qcombobox_keyreleaseevent_isbase = false;
            QComboBox::keyReleaseEvent(e);
            return;
        }
        auto keyreleaseevent_cb = qcombobox_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = e;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        QComboBox::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qcombobox_wheelevent_isbase) {
            qcombobox_wheelevent_isbase = false;
            QComboBox::wheelEvent(e);
            return;
        }
        auto wheelevent_cb = qcombobox_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = e;

            wheelevent_cb(this, cbval1);
            return;
        }
        QComboBox::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (qcombobox_contextmenuevent_isbase) {
            qcombobox_contextmenuevent_isbase = false;
            QComboBox::contextMenuEvent(e);
            return;
        }
        auto contextmenuevent_cb = qcombobox_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = e;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        QComboBox::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qcombobox_inputmethodevent_isbase) {
            qcombobox_inputmethodevent_isbase = false;
            QComboBox::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = qcombobox_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        QComboBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (qcombobox_initstyleoption_isbase) {
            qcombobox_initstyleoption_isbase = false;
            QComboBox::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = qcombobox_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionComboBox* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        QComboBox::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qcombobox_devtype_isbase) {
            qcombobox_devtype_isbase = false;
            return QComboBox::devType();
        }
        auto devtype_cb = qcombobox_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return QComboBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qcombobox_setvisible_isbase) {
            qcombobox_setvisible_isbase = false;
            QComboBox::setVisible(visible);
            return;
        }
        auto setvisible_cb = qcombobox_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        QComboBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qcombobox_heightforwidth_isbase) {
            qcombobox_heightforwidth_isbase = false;
            return QComboBox::heightForWidth(param1);
        }
        auto heightforwidth_cb = qcombobox_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QComboBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qcombobox_hasheightforwidth_isbase) {
            qcombobox_hasheightforwidth_isbase = false;
            return QComboBox::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = qcombobox_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return QComboBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qcombobox_paintengine_isbase) {
            qcombobox_paintengine_isbase = false;
            return QComboBox::paintEngine();
        }
        auto paintengine_cb = qcombobox_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return QComboBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qcombobox_mousedoubleclickevent_isbase) {
            qcombobox_mousedoubleclickevent_isbase = false;
            QComboBox::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = qcombobox_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        QComboBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qcombobox_mousemoveevent_isbase) {
            qcombobox_mousemoveevent_isbase = false;
            QComboBox::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = qcombobox_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        QComboBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qcombobox_enterevent_isbase) {
            qcombobox_enterevent_isbase = false;
            QComboBox::enterEvent(event);
            return;
        }
        auto enterevent_cb = qcombobox_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        QComboBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qcombobox_leaveevent_isbase) {
            qcombobox_leaveevent_isbase = false;
            QComboBox::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = qcombobox_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        QComboBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qcombobox_moveevent_isbase) {
            qcombobox_moveevent_isbase = false;
            QComboBox::moveEvent(event);
            return;
        }
        auto moveevent_cb = qcombobox_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        QComboBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qcombobox_closeevent_isbase) {
            qcombobox_closeevent_isbase = false;
            QComboBox::closeEvent(event);
            return;
        }
        auto closeevent_cb = qcombobox_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        QComboBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qcombobox_tabletevent_isbase) {
            qcombobox_tabletevent_isbase = false;
            QComboBox::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = qcombobox_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        QComboBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qcombobox_actionevent_isbase) {
            qcombobox_actionevent_isbase = false;
            QComboBox::actionEvent(event);
            return;
        }
        auto actionevent_cb = qcombobox_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        QComboBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qcombobox_dragenterevent_isbase) {
            qcombobox_dragenterevent_isbase = false;
            QComboBox::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = qcombobox_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        QComboBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qcombobox_dragmoveevent_isbase) {
            qcombobox_dragmoveevent_isbase = false;
            QComboBox::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = qcombobox_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        QComboBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qcombobox_dragleaveevent_isbase) {
            qcombobox_dragleaveevent_isbase = false;
            QComboBox::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = qcombobox_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        QComboBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qcombobox_dropevent_isbase) {
            qcombobox_dropevent_isbase = false;
            QComboBox::dropEvent(event);
            return;
        }
        auto dropevent_cb = qcombobox_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        QComboBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qcombobox_nativeevent_isbase) {
            qcombobox_nativeevent_isbase = false;
            return QComboBox::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = qcombobox_nativeevent_callback;
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
        return QComboBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qcombobox_metric_isbase) {
            qcombobox_metric_isbase = false;
            return QComboBox::metric(param1);
        }
        auto metric_cb = qcombobox_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QComboBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qcombobox_initpainter_isbase) {
            qcombobox_initpainter_isbase = false;
            QComboBox::initPainter(painter);
            return;
        }
        auto initpainter_cb = qcombobox_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        QComboBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qcombobox_redirected_isbase) {
            qcombobox_redirected_isbase = false;
            return QComboBox::redirected(offset);
        }
        auto redirected_cb = qcombobox_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return QComboBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qcombobox_sharedpainter_isbase) {
            qcombobox_sharedpainter_isbase = false;
            return QComboBox::sharedPainter();
        }
        auto sharedpainter_cb = qcombobox_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return QComboBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qcombobox_focusnextprevchild_isbase) {
            qcombobox_focusnextprevchild_isbase = false;
            return QComboBox::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = qcombobox_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return QComboBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcombobox_eventfilter_isbase) {
            qcombobox_eventfilter_isbase = false;
            return QComboBox::eventFilter(watched, event);
        }
        auto eventfilter_cb = qcombobox_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QComboBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcombobox_timerevent_isbase) {
            qcombobox_timerevent_isbase = false;
            QComboBox::timerEvent(event);
            return;
        }
        auto timerevent_cb = qcombobox_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QComboBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcombobox_childevent_isbase) {
            qcombobox_childevent_isbase = false;
            QComboBox::childEvent(event);
            return;
        }
        auto childevent_cb = qcombobox_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QComboBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcombobox_customevent_isbase) {
            qcombobox_customevent_isbase = false;
            QComboBox::customEvent(event);
            return;
        }
        auto customevent_cb = qcombobox_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QComboBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcombobox_connectnotify_isbase) {
            qcombobox_connectnotify_isbase = false;
            QComboBox::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qcombobox_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QComboBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcombobox_disconnectnotify_isbase) {
            qcombobox_disconnectnotify_isbase = false;
            QComboBox::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qcombobox_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QComboBox::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qcombobox_updatemicrofocus_isbase) {
            qcombobox_updatemicrofocus_isbase = false;
            QComboBox::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = qcombobox_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        QComboBox::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qcombobox_create_isbase) {
            qcombobox_create_isbase = false;
            QComboBox::create();
            return;
        }
        auto create_cb = qcombobox_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        QComboBox::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qcombobox_destroy_isbase) {
            qcombobox_destroy_isbase = false;
            QComboBox::destroy();
            return;
        }
        auto destroy_cb = qcombobox_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        QComboBox::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qcombobox_focusnextchild_isbase) {
            qcombobox_focusnextchild_isbase = false;
            return QComboBox::focusNextChild();
        }
        auto focusnextchild_cb = qcombobox_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return QComboBox::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qcombobox_focuspreviouschild_isbase) {
            qcombobox_focuspreviouschild_isbase = false;
            return QComboBox::focusPreviousChild();
        }
        auto focuspreviouschild_cb = qcombobox_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return QComboBox::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcombobox_sender_isbase) {
            qcombobox_sender_isbase = false;
            return QComboBox::sender();
        }
        auto sender_cb = qcombobox_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QComboBox::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcombobox_sendersignalindex_isbase) {
            qcombobox_sendersignalindex_isbase = false;
            return QComboBox::senderSignalIndex();
        }
        auto sendersignalindex_cb = qcombobox_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QComboBox::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcombobox_receivers_isbase) {
            qcombobox_receivers_isbase = false;
            return QComboBox::receivers(signal);
        }
        auto receivers_cb = qcombobox_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QComboBox::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcombobox_issignalconnected_isbase) {
            qcombobox_issignalconnected_isbase = false;
            return QComboBox::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qcombobox_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QComboBox::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qcombobox_getdecodedmetricf_isbase) {
            qcombobox_getdecodedmetricf_isbase = false;
            return QComboBox::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = qcombobox_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return QComboBox::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void QComboBox_FocusInEvent(QComboBox* self, QFocusEvent* e);
    friend void QComboBox_SuperFocusInEvent(QComboBox* self, QFocusEvent* e);
    friend void QComboBox_FocusOutEvent(QComboBox* self, QFocusEvent* e);
    friend void QComboBox_SuperFocusOutEvent(QComboBox* self, QFocusEvent* e);
    friend void QComboBox_ChangeEvent(QComboBox* self, QEvent* e);
    friend void QComboBox_SuperChangeEvent(QComboBox* self, QEvent* e);
    friend void QComboBox_ResizeEvent(QComboBox* self, QResizeEvent* e);
    friend void QComboBox_SuperResizeEvent(QComboBox* self, QResizeEvent* e);
    friend void QComboBox_PaintEvent(QComboBox* self, QPaintEvent* e);
    friend void QComboBox_SuperPaintEvent(QComboBox* self, QPaintEvent* e);
    friend void QComboBox_ShowEvent(QComboBox* self, QShowEvent* e);
    friend void QComboBox_SuperShowEvent(QComboBox* self, QShowEvent* e);
    friend void QComboBox_HideEvent(QComboBox* self, QHideEvent* e);
    friend void QComboBox_SuperHideEvent(QComboBox* self, QHideEvent* e);
    friend void QComboBox_MousePressEvent(QComboBox* self, QMouseEvent* e);
    friend void QComboBox_SuperMousePressEvent(QComboBox* self, QMouseEvent* e);
    friend void QComboBox_MouseReleaseEvent(QComboBox* self, QMouseEvent* e);
    friend void QComboBox_SuperMouseReleaseEvent(QComboBox* self, QMouseEvent* e);
    friend void QComboBox_KeyPressEvent(QComboBox* self, QKeyEvent* e);
    friend void QComboBox_SuperKeyPressEvent(QComboBox* self, QKeyEvent* e);
    friend void QComboBox_KeyReleaseEvent(QComboBox* self, QKeyEvent* e);
    friend void QComboBox_SuperKeyReleaseEvent(QComboBox* self, QKeyEvent* e);
    friend void QComboBox_WheelEvent(QComboBox* self, QWheelEvent* e);
    friend void QComboBox_SuperWheelEvent(QComboBox* self, QWheelEvent* e);
    friend void QComboBox_ContextMenuEvent(QComboBox* self, QContextMenuEvent* e);
    friend void QComboBox_SuperContextMenuEvent(QComboBox* self, QContextMenuEvent* e);
    friend void QComboBox_InputMethodEvent(QComboBox* self, QInputMethodEvent* param1);
    friend void QComboBox_SuperInputMethodEvent(QComboBox* self, QInputMethodEvent* param1);
    friend void QComboBox_InitStyleOption(const QComboBox* self, QStyleOptionComboBox* option);
    friend void QComboBox_SuperInitStyleOption(const QComboBox* self, QStyleOptionComboBox* option);
    friend void QComboBox_MouseDoubleClickEvent(QComboBox* self, QMouseEvent* event);
    friend void QComboBox_SuperMouseDoubleClickEvent(QComboBox* self, QMouseEvent* event);
    friend void QComboBox_MouseMoveEvent(QComboBox* self, QMouseEvent* event);
    friend void QComboBox_SuperMouseMoveEvent(QComboBox* self, QMouseEvent* event);
    friend void QComboBox_EnterEvent(QComboBox* self, QEnterEvent* event);
    friend void QComboBox_SuperEnterEvent(QComboBox* self, QEnterEvent* event);
    friend void QComboBox_LeaveEvent(QComboBox* self, QEvent* event);
    friend void QComboBox_SuperLeaveEvent(QComboBox* self, QEvent* event);
    friend void QComboBox_MoveEvent(QComboBox* self, QMoveEvent* event);
    friend void QComboBox_SuperMoveEvent(QComboBox* self, QMoveEvent* event);
    friend void QComboBox_CloseEvent(QComboBox* self, QCloseEvent* event);
    friend void QComboBox_SuperCloseEvent(QComboBox* self, QCloseEvent* event);
    friend void QComboBox_TabletEvent(QComboBox* self, QTabletEvent* event);
    friend void QComboBox_SuperTabletEvent(QComboBox* self, QTabletEvent* event);
    friend void QComboBox_ActionEvent(QComboBox* self, QActionEvent* event);
    friend void QComboBox_SuperActionEvent(QComboBox* self, QActionEvent* event);
    friend void QComboBox_DragEnterEvent(QComboBox* self, QDragEnterEvent* event);
    friend void QComboBox_SuperDragEnterEvent(QComboBox* self, QDragEnterEvent* event);
    friend void QComboBox_DragMoveEvent(QComboBox* self, QDragMoveEvent* event);
    friend void QComboBox_SuperDragMoveEvent(QComboBox* self, QDragMoveEvent* event);
    friend void QComboBox_DragLeaveEvent(QComboBox* self, QDragLeaveEvent* event);
    friend void QComboBox_SuperDragLeaveEvent(QComboBox* self, QDragLeaveEvent* event);
    friend void QComboBox_DropEvent(QComboBox* self, QDropEvent* event);
    friend void QComboBox_SuperDropEvent(QComboBox* self, QDropEvent* event);
    friend bool QComboBox_NativeEvent(QComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QComboBox_SuperNativeEvent(QComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QComboBox_Metric(const QComboBox* self, int param1);
    friend int QComboBox_SuperMetric(const QComboBox* self, int param1);
    friend void QComboBox_InitPainter(const QComboBox* self, QPainter* painter);
    friend void QComboBox_SuperInitPainter(const QComboBox* self, QPainter* painter);
    friend QPaintDevice* QComboBox_Redirected(const QComboBox* self, QPoint* offset);
    friend QPaintDevice* QComboBox_SuperRedirected(const QComboBox* self, QPoint* offset);
    friend QPainter* QComboBox_SharedPainter(const QComboBox* self);
    friend QPainter* QComboBox_SuperSharedPainter(const QComboBox* self);
    friend bool QComboBox_FocusNextPrevChild(QComboBox* self, bool next);
    friend bool QComboBox_SuperFocusNextPrevChild(QComboBox* self, bool next);
    friend void QComboBox_TimerEvent(QComboBox* self, QTimerEvent* event);
    friend void QComboBox_SuperTimerEvent(QComboBox* self, QTimerEvent* event);
    friend void QComboBox_ChildEvent(QComboBox* self, QChildEvent* event);
    friend void QComboBox_SuperChildEvent(QComboBox* self, QChildEvent* event);
    friend void QComboBox_CustomEvent(QComboBox* self, QEvent* event);
    friend void QComboBox_SuperCustomEvent(QComboBox* self, QEvent* event);
    friend void QComboBox_ConnectNotify(QComboBox* self, const QMetaMethod* signal);
    friend void QComboBox_SuperConnectNotify(QComboBox* self, const QMetaMethod* signal);
    friend void QComboBox_DisconnectNotify(QComboBox* self, const QMetaMethod* signal);
    friend void QComboBox_SuperDisconnectNotify(QComboBox* self, const QMetaMethod* signal);
    friend void QComboBox_UpdateMicroFocus(QComboBox* self);
    friend void QComboBox_SuperUpdateMicroFocus(QComboBox* self);
    friend void QComboBox_Create(QComboBox* self);
    friend void QComboBox_SuperCreate(QComboBox* self);
    friend void QComboBox_Destroy(QComboBox* self);
    friend void QComboBox_SuperDestroy(QComboBox* self);
    friend bool QComboBox_FocusNextChild(QComboBox* self);
    friend bool QComboBox_SuperFocusNextChild(QComboBox* self);
    friend bool QComboBox_FocusPreviousChild(QComboBox* self);
    friend bool QComboBox_SuperFocusPreviousChild(QComboBox* self);
    friend QObject* QComboBox_Sender(const QComboBox* self);
    friend QObject* QComboBox_SuperSender(const QComboBox* self);
    friend int QComboBox_SenderSignalIndex(const QComboBox* self);
    friend int QComboBox_SuperSenderSignalIndex(const QComboBox* self);
    friend int QComboBox_Receivers(const QComboBox* self, const char* signal);
    friend int QComboBox_SuperReceivers(const QComboBox* self, const char* signal);
    friend bool QComboBox_IsSignalConnected(const QComboBox* self, const QMetaMethod* signal);
    friend bool QComboBox_SuperIsSignalConnected(const QComboBox* self, const QMetaMethod* signal);
    friend double QComboBox_GetDecodedMetricF(const QComboBox* self, int metricA, int metricB);
    friend double QComboBox_SuperGetDecodedMetricF(const QComboBox* self, int metricA, int metricB);
};

#endif
