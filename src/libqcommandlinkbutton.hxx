#pragma once
#ifndef SRCC_LIBVIRTUALQCOMMANDLINKBUTTON_H
#define SRCC_LIBVIRTUALQCOMMANDLINKBUTTON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QCommandLinkButton so that we can call protected methods
class VirtualQCommandLinkButton final : public QCommandLinkButton {

  public:
    // Virtual class boolean flag
    bool isVirtualQCommandLinkButton = true;

    // Virtual class public types (including callbacks)
    using QCommandLinkButton_Metacall_Callback = int (*)(QCommandLinkButton*, int, int, void**);
    using QCommandLinkButton_SizeHint_Callback = QSize* (*)();
    using QCommandLinkButton_HeightForWidth_Callback = int (*)(const QCommandLinkButton*, int);
    using QCommandLinkButton_MinimumSizeHint_Callback = QSize* (*)();
    using QCommandLinkButton_InitStyleOption_Callback = void (*)(const QCommandLinkButton*, QStyleOptionButton*);
    using QCommandLinkButton_Event_Callback = bool (*)(QCommandLinkButton*, QEvent*);
    using QCommandLinkButton_PaintEvent_Callback = void (*)(QCommandLinkButton*, QPaintEvent*);
    using QCommandLinkButton_KeyPressEvent_Callback = void (*)(QCommandLinkButton*, QKeyEvent*);
    using QCommandLinkButton_FocusInEvent_Callback = void (*)(QCommandLinkButton*, QFocusEvent*);
    using QCommandLinkButton_FocusOutEvent_Callback = void (*)(QCommandLinkButton*, QFocusEvent*);
    using QCommandLinkButton_MouseMoveEvent_Callback = void (*)(QCommandLinkButton*, QMouseEvent*);
    using QCommandLinkButton_HitButton_Callback = bool (*)(const QCommandLinkButton*, QPoint*);
    using QCommandLinkButton_CheckStateSet_Callback = void (*)();
    using QCommandLinkButton_NextCheckState_Callback = void (*)();
    using QCommandLinkButton_KeyReleaseEvent_Callback = void (*)(QCommandLinkButton*, QKeyEvent*);
    using QCommandLinkButton_MousePressEvent_Callback = void (*)(QCommandLinkButton*, QMouseEvent*);
    using QCommandLinkButton_MouseReleaseEvent_Callback = void (*)(QCommandLinkButton*, QMouseEvent*);
    using QCommandLinkButton_ChangeEvent_Callback = void (*)(QCommandLinkButton*, QEvent*);
    using QCommandLinkButton_TimerEvent_Callback = void (*)(QCommandLinkButton*, QTimerEvent*);
    using QCommandLinkButton_DevType_Callback = int (*)();
    using QCommandLinkButton_SetVisible_Callback = void (*)(QCommandLinkButton*, bool);
    using QCommandLinkButton_HasHeightForWidth_Callback = bool (*)();
    using QCommandLinkButton_PaintEngine_Callback = QPaintEngine* (*)();
    using QCommandLinkButton_MouseDoubleClickEvent_Callback = void (*)(QCommandLinkButton*, QMouseEvent*);
    using QCommandLinkButton_WheelEvent_Callback = void (*)(QCommandLinkButton*, QWheelEvent*);
    using QCommandLinkButton_EnterEvent_Callback = void (*)(QCommandLinkButton*, QEnterEvent*);
    using QCommandLinkButton_LeaveEvent_Callback = void (*)(QCommandLinkButton*, QEvent*);
    using QCommandLinkButton_MoveEvent_Callback = void (*)(QCommandLinkButton*, QMoveEvent*);
    using QCommandLinkButton_ResizeEvent_Callback = void (*)(QCommandLinkButton*, QResizeEvent*);
    using QCommandLinkButton_CloseEvent_Callback = void (*)(QCommandLinkButton*, QCloseEvent*);
    using QCommandLinkButton_ContextMenuEvent_Callback = void (*)(QCommandLinkButton*, QContextMenuEvent*);
    using QCommandLinkButton_TabletEvent_Callback = void (*)(QCommandLinkButton*, QTabletEvent*);
    using QCommandLinkButton_ActionEvent_Callback = void (*)(QCommandLinkButton*, QActionEvent*);
    using QCommandLinkButton_DragEnterEvent_Callback = void (*)(QCommandLinkButton*, QDragEnterEvent*);
    using QCommandLinkButton_DragMoveEvent_Callback = void (*)(QCommandLinkButton*, QDragMoveEvent*);
    using QCommandLinkButton_DragLeaveEvent_Callback = void (*)(QCommandLinkButton*, QDragLeaveEvent*);
    using QCommandLinkButton_DropEvent_Callback = void (*)(QCommandLinkButton*, QDropEvent*);
    using QCommandLinkButton_ShowEvent_Callback = void (*)(QCommandLinkButton*, QShowEvent*);
    using QCommandLinkButton_HideEvent_Callback = void (*)(QCommandLinkButton*, QHideEvent*);
    using QCommandLinkButton_NativeEvent_Callback = bool (*)(QCommandLinkButton*, libqt_string, void*, intptr_t*);
    using QCommandLinkButton_Metric_Callback = int (*)(const QCommandLinkButton*, int);
    using QCommandLinkButton_InitPainter_Callback = void (*)(const QCommandLinkButton*, QPainter*);
    using QCommandLinkButton_Redirected_Callback = QPaintDevice* (*)(const QCommandLinkButton*, QPoint*);
    using QCommandLinkButton_SharedPainter_Callback = QPainter* (*)();
    using QCommandLinkButton_InputMethodEvent_Callback = void (*)(QCommandLinkButton*, QInputMethodEvent*);
    using QCommandLinkButton_InputMethodQuery_Callback = QVariant* (*)(const QCommandLinkButton*, int);
    using QCommandLinkButton_FocusNextPrevChild_Callback = bool (*)(QCommandLinkButton*, bool);
    using QCommandLinkButton_EventFilter_Callback = bool (*)(QCommandLinkButton*, QObject*, QEvent*);
    using QCommandLinkButton_ChildEvent_Callback = void (*)(QCommandLinkButton*, QChildEvent*);
    using QCommandLinkButton_CustomEvent_Callback = void (*)(QCommandLinkButton*, QEvent*);
    using QCommandLinkButton_ConnectNotify_Callback = void (*)(QCommandLinkButton*, QMetaMethod*);
    using QCommandLinkButton_DisconnectNotify_Callback = void (*)(QCommandLinkButton*, QMetaMethod*);
    using QCommandLinkButton_UpdateMicroFocus_Callback = void (*)();
    using QCommandLinkButton_Create_Callback = void (*)();
    using QCommandLinkButton_Destroy_Callback = void (*)();
    using QCommandLinkButton_FocusNextChild_Callback = bool (*)();
    using QCommandLinkButton_FocusPreviousChild_Callback = bool (*)();
    using QCommandLinkButton_Sender_Callback = QObject* (*)();
    using QCommandLinkButton_SenderSignalIndex_Callback = int (*)();
    using QCommandLinkButton_Receivers_Callback = int (*)(const QCommandLinkButton*, const char*);
    using QCommandLinkButton_IsSignalConnected_Callback = bool (*)(const QCommandLinkButton*, QMetaMethod*);
    using QCommandLinkButton_GetDecodedMetricF_Callback = double (*)(const QCommandLinkButton*, int, int);

  protected:
    // Instance callback storage
    QCommandLinkButton_Metacall_Callback qcommandlinkbutton_metacall_callback = nullptr;
    QCommandLinkButton_SizeHint_Callback qcommandlinkbutton_sizehint_callback = nullptr;
    QCommandLinkButton_HeightForWidth_Callback qcommandlinkbutton_heightforwidth_callback = nullptr;
    QCommandLinkButton_MinimumSizeHint_Callback qcommandlinkbutton_minimumsizehint_callback = nullptr;
    QCommandLinkButton_InitStyleOption_Callback qcommandlinkbutton_initstyleoption_callback = nullptr;
    QCommandLinkButton_Event_Callback qcommandlinkbutton_event_callback = nullptr;
    QCommandLinkButton_PaintEvent_Callback qcommandlinkbutton_paintevent_callback = nullptr;
    QCommandLinkButton_KeyPressEvent_Callback qcommandlinkbutton_keypressevent_callback = nullptr;
    QCommandLinkButton_FocusInEvent_Callback qcommandlinkbutton_focusinevent_callback = nullptr;
    QCommandLinkButton_FocusOutEvent_Callback qcommandlinkbutton_focusoutevent_callback = nullptr;
    QCommandLinkButton_MouseMoveEvent_Callback qcommandlinkbutton_mousemoveevent_callback = nullptr;
    QCommandLinkButton_HitButton_Callback qcommandlinkbutton_hitbutton_callback = nullptr;
    QCommandLinkButton_CheckStateSet_Callback qcommandlinkbutton_checkstateset_callback = nullptr;
    QCommandLinkButton_NextCheckState_Callback qcommandlinkbutton_nextcheckstate_callback = nullptr;
    QCommandLinkButton_KeyReleaseEvent_Callback qcommandlinkbutton_keyreleaseevent_callback = nullptr;
    QCommandLinkButton_MousePressEvent_Callback qcommandlinkbutton_mousepressevent_callback = nullptr;
    QCommandLinkButton_MouseReleaseEvent_Callback qcommandlinkbutton_mousereleaseevent_callback = nullptr;
    QCommandLinkButton_ChangeEvent_Callback qcommandlinkbutton_changeevent_callback = nullptr;
    QCommandLinkButton_TimerEvent_Callback qcommandlinkbutton_timerevent_callback = nullptr;
    QCommandLinkButton_DevType_Callback qcommandlinkbutton_devtype_callback = nullptr;
    QCommandLinkButton_SetVisible_Callback qcommandlinkbutton_setvisible_callback = nullptr;
    QCommandLinkButton_HasHeightForWidth_Callback qcommandlinkbutton_hasheightforwidth_callback = nullptr;
    QCommandLinkButton_PaintEngine_Callback qcommandlinkbutton_paintengine_callback = nullptr;
    QCommandLinkButton_MouseDoubleClickEvent_Callback qcommandlinkbutton_mousedoubleclickevent_callback = nullptr;
    QCommandLinkButton_WheelEvent_Callback qcommandlinkbutton_wheelevent_callback = nullptr;
    QCommandLinkButton_EnterEvent_Callback qcommandlinkbutton_enterevent_callback = nullptr;
    QCommandLinkButton_LeaveEvent_Callback qcommandlinkbutton_leaveevent_callback = nullptr;
    QCommandLinkButton_MoveEvent_Callback qcommandlinkbutton_moveevent_callback = nullptr;
    QCommandLinkButton_ResizeEvent_Callback qcommandlinkbutton_resizeevent_callback = nullptr;
    QCommandLinkButton_CloseEvent_Callback qcommandlinkbutton_closeevent_callback = nullptr;
    QCommandLinkButton_ContextMenuEvent_Callback qcommandlinkbutton_contextmenuevent_callback = nullptr;
    QCommandLinkButton_TabletEvent_Callback qcommandlinkbutton_tabletevent_callback = nullptr;
    QCommandLinkButton_ActionEvent_Callback qcommandlinkbutton_actionevent_callback = nullptr;
    QCommandLinkButton_DragEnterEvent_Callback qcommandlinkbutton_dragenterevent_callback = nullptr;
    QCommandLinkButton_DragMoveEvent_Callback qcommandlinkbutton_dragmoveevent_callback = nullptr;
    QCommandLinkButton_DragLeaveEvent_Callback qcommandlinkbutton_dragleaveevent_callback = nullptr;
    QCommandLinkButton_DropEvent_Callback qcommandlinkbutton_dropevent_callback = nullptr;
    QCommandLinkButton_ShowEvent_Callback qcommandlinkbutton_showevent_callback = nullptr;
    QCommandLinkButton_HideEvent_Callback qcommandlinkbutton_hideevent_callback = nullptr;
    QCommandLinkButton_NativeEvent_Callback qcommandlinkbutton_nativeevent_callback = nullptr;
    QCommandLinkButton_Metric_Callback qcommandlinkbutton_metric_callback = nullptr;
    QCommandLinkButton_InitPainter_Callback qcommandlinkbutton_initpainter_callback = nullptr;
    QCommandLinkButton_Redirected_Callback qcommandlinkbutton_redirected_callback = nullptr;
    QCommandLinkButton_SharedPainter_Callback qcommandlinkbutton_sharedpainter_callback = nullptr;
    QCommandLinkButton_InputMethodEvent_Callback qcommandlinkbutton_inputmethodevent_callback = nullptr;
    QCommandLinkButton_InputMethodQuery_Callback qcommandlinkbutton_inputmethodquery_callback = nullptr;
    QCommandLinkButton_FocusNextPrevChild_Callback qcommandlinkbutton_focusnextprevchild_callback = nullptr;
    QCommandLinkButton_EventFilter_Callback qcommandlinkbutton_eventfilter_callback = nullptr;
    QCommandLinkButton_ChildEvent_Callback qcommandlinkbutton_childevent_callback = nullptr;
    QCommandLinkButton_CustomEvent_Callback qcommandlinkbutton_customevent_callback = nullptr;
    QCommandLinkButton_ConnectNotify_Callback qcommandlinkbutton_connectnotify_callback = nullptr;
    QCommandLinkButton_DisconnectNotify_Callback qcommandlinkbutton_disconnectnotify_callback = nullptr;
    QCommandLinkButton_UpdateMicroFocus_Callback qcommandlinkbutton_updatemicrofocus_callback = nullptr;
    QCommandLinkButton_Create_Callback qcommandlinkbutton_create_callback = nullptr;
    QCommandLinkButton_Destroy_Callback qcommandlinkbutton_destroy_callback = nullptr;
    QCommandLinkButton_FocusNextChild_Callback qcommandlinkbutton_focusnextchild_callback = nullptr;
    QCommandLinkButton_FocusPreviousChild_Callback qcommandlinkbutton_focuspreviouschild_callback = nullptr;
    QCommandLinkButton_Sender_Callback qcommandlinkbutton_sender_callback = nullptr;
    QCommandLinkButton_SenderSignalIndex_Callback qcommandlinkbutton_sendersignalindex_callback = nullptr;
    QCommandLinkButton_Receivers_Callback qcommandlinkbutton_receivers_callback = nullptr;
    QCommandLinkButton_IsSignalConnected_Callback qcommandlinkbutton_issignalconnected_callback = nullptr;
    QCommandLinkButton_GetDecodedMetricF_Callback qcommandlinkbutton_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool qcommandlinkbutton_metacall_isbase = false;
    mutable bool qcommandlinkbutton_sizehint_isbase = false;
    mutable bool qcommandlinkbutton_heightforwidth_isbase = false;
    mutable bool qcommandlinkbutton_minimumsizehint_isbase = false;
    mutable bool qcommandlinkbutton_initstyleoption_isbase = false;
    mutable bool qcommandlinkbutton_event_isbase = false;
    mutable bool qcommandlinkbutton_paintevent_isbase = false;
    mutable bool qcommandlinkbutton_keypressevent_isbase = false;
    mutable bool qcommandlinkbutton_focusinevent_isbase = false;
    mutable bool qcommandlinkbutton_focusoutevent_isbase = false;
    mutable bool qcommandlinkbutton_mousemoveevent_isbase = false;
    mutable bool qcommandlinkbutton_hitbutton_isbase = false;
    mutable bool qcommandlinkbutton_checkstateset_isbase = false;
    mutable bool qcommandlinkbutton_nextcheckstate_isbase = false;
    mutable bool qcommandlinkbutton_keyreleaseevent_isbase = false;
    mutable bool qcommandlinkbutton_mousepressevent_isbase = false;
    mutable bool qcommandlinkbutton_mousereleaseevent_isbase = false;
    mutable bool qcommandlinkbutton_changeevent_isbase = false;
    mutable bool qcommandlinkbutton_timerevent_isbase = false;
    mutable bool qcommandlinkbutton_devtype_isbase = false;
    mutable bool qcommandlinkbutton_setvisible_isbase = false;
    mutable bool qcommandlinkbutton_hasheightforwidth_isbase = false;
    mutable bool qcommandlinkbutton_paintengine_isbase = false;
    mutable bool qcommandlinkbutton_mousedoubleclickevent_isbase = false;
    mutable bool qcommandlinkbutton_wheelevent_isbase = false;
    mutable bool qcommandlinkbutton_enterevent_isbase = false;
    mutable bool qcommandlinkbutton_leaveevent_isbase = false;
    mutable bool qcommandlinkbutton_moveevent_isbase = false;
    mutable bool qcommandlinkbutton_resizeevent_isbase = false;
    mutable bool qcommandlinkbutton_closeevent_isbase = false;
    mutable bool qcommandlinkbutton_contextmenuevent_isbase = false;
    mutable bool qcommandlinkbutton_tabletevent_isbase = false;
    mutable bool qcommandlinkbutton_actionevent_isbase = false;
    mutable bool qcommandlinkbutton_dragenterevent_isbase = false;
    mutable bool qcommandlinkbutton_dragmoveevent_isbase = false;
    mutable bool qcommandlinkbutton_dragleaveevent_isbase = false;
    mutable bool qcommandlinkbutton_dropevent_isbase = false;
    mutable bool qcommandlinkbutton_showevent_isbase = false;
    mutable bool qcommandlinkbutton_hideevent_isbase = false;
    mutable bool qcommandlinkbutton_nativeevent_isbase = false;
    mutable bool qcommandlinkbutton_metric_isbase = false;
    mutable bool qcommandlinkbutton_initpainter_isbase = false;
    mutable bool qcommandlinkbutton_redirected_isbase = false;
    mutable bool qcommandlinkbutton_sharedpainter_isbase = false;
    mutable bool qcommandlinkbutton_inputmethodevent_isbase = false;
    mutable bool qcommandlinkbutton_inputmethodquery_isbase = false;
    mutable bool qcommandlinkbutton_focusnextprevchild_isbase = false;
    mutable bool qcommandlinkbutton_eventfilter_isbase = false;
    mutable bool qcommandlinkbutton_childevent_isbase = false;
    mutable bool qcommandlinkbutton_customevent_isbase = false;
    mutable bool qcommandlinkbutton_connectnotify_isbase = false;
    mutable bool qcommandlinkbutton_disconnectnotify_isbase = false;
    mutable bool qcommandlinkbutton_updatemicrofocus_isbase = false;
    mutable bool qcommandlinkbutton_create_isbase = false;
    mutable bool qcommandlinkbutton_destroy_isbase = false;
    mutable bool qcommandlinkbutton_focusnextchild_isbase = false;
    mutable bool qcommandlinkbutton_focuspreviouschild_isbase = false;
    mutable bool qcommandlinkbutton_sender_isbase = false;
    mutable bool qcommandlinkbutton_sendersignalindex_isbase = false;
    mutable bool qcommandlinkbutton_receivers_isbase = false;
    mutable bool qcommandlinkbutton_issignalconnected_isbase = false;
    mutable bool qcommandlinkbutton_getdecodedmetricf_isbase = false;

  public:
    VirtualQCommandLinkButton(QWidget* parent) : QCommandLinkButton(parent) {};
    VirtualQCommandLinkButton() : QCommandLinkButton() {};
    VirtualQCommandLinkButton(const QString& text) : QCommandLinkButton(text) {};
    VirtualQCommandLinkButton(const QString& text, const QString& description) : QCommandLinkButton(text, description) {};
    VirtualQCommandLinkButton(const QString& text, QWidget* parent) : QCommandLinkButton(text, parent) {};
    VirtualQCommandLinkButton(const QString& text, const QString& description, QWidget* parent) : QCommandLinkButton(text, description, parent) {};

    ~VirtualQCommandLinkButton() {
        qcommandlinkbutton_metacall_callback = nullptr;
        qcommandlinkbutton_sizehint_callback = nullptr;
        qcommandlinkbutton_heightforwidth_callback = nullptr;
        qcommandlinkbutton_minimumsizehint_callback = nullptr;
        qcommandlinkbutton_initstyleoption_callback = nullptr;
        qcommandlinkbutton_event_callback = nullptr;
        qcommandlinkbutton_paintevent_callback = nullptr;
        qcommandlinkbutton_keypressevent_callback = nullptr;
        qcommandlinkbutton_focusinevent_callback = nullptr;
        qcommandlinkbutton_focusoutevent_callback = nullptr;
        qcommandlinkbutton_mousemoveevent_callback = nullptr;
        qcommandlinkbutton_hitbutton_callback = nullptr;
        qcommandlinkbutton_checkstateset_callback = nullptr;
        qcommandlinkbutton_nextcheckstate_callback = nullptr;
        qcommandlinkbutton_keyreleaseevent_callback = nullptr;
        qcommandlinkbutton_mousepressevent_callback = nullptr;
        qcommandlinkbutton_mousereleaseevent_callback = nullptr;
        qcommandlinkbutton_changeevent_callback = nullptr;
        qcommandlinkbutton_timerevent_callback = nullptr;
        qcommandlinkbutton_devtype_callback = nullptr;
        qcommandlinkbutton_setvisible_callback = nullptr;
        qcommandlinkbutton_hasheightforwidth_callback = nullptr;
        qcommandlinkbutton_paintengine_callback = nullptr;
        qcommandlinkbutton_mousedoubleclickevent_callback = nullptr;
        qcommandlinkbutton_wheelevent_callback = nullptr;
        qcommandlinkbutton_enterevent_callback = nullptr;
        qcommandlinkbutton_leaveevent_callback = nullptr;
        qcommandlinkbutton_moveevent_callback = nullptr;
        qcommandlinkbutton_resizeevent_callback = nullptr;
        qcommandlinkbutton_closeevent_callback = nullptr;
        qcommandlinkbutton_contextmenuevent_callback = nullptr;
        qcommandlinkbutton_tabletevent_callback = nullptr;
        qcommandlinkbutton_actionevent_callback = nullptr;
        qcommandlinkbutton_dragenterevent_callback = nullptr;
        qcommandlinkbutton_dragmoveevent_callback = nullptr;
        qcommandlinkbutton_dragleaveevent_callback = nullptr;
        qcommandlinkbutton_dropevent_callback = nullptr;
        qcommandlinkbutton_showevent_callback = nullptr;
        qcommandlinkbutton_hideevent_callback = nullptr;
        qcommandlinkbutton_nativeevent_callback = nullptr;
        qcommandlinkbutton_metric_callback = nullptr;
        qcommandlinkbutton_initpainter_callback = nullptr;
        qcommandlinkbutton_redirected_callback = nullptr;
        qcommandlinkbutton_sharedpainter_callback = nullptr;
        qcommandlinkbutton_inputmethodevent_callback = nullptr;
        qcommandlinkbutton_inputmethodquery_callback = nullptr;
        qcommandlinkbutton_focusnextprevchild_callback = nullptr;
        qcommandlinkbutton_eventfilter_callback = nullptr;
        qcommandlinkbutton_childevent_callback = nullptr;
        qcommandlinkbutton_customevent_callback = nullptr;
        qcommandlinkbutton_connectnotify_callback = nullptr;
        qcommandlinkbutton_disconnectnotify_callback = nullptr;
        qcommandlinkbutton_updatemicrofocus_callback = nullptr;
        qcommandlinkbutton_create_callback = nullptr;
        qcommandlinkbutton_destroy_callback = nullptr;
        qcommandlinkbutton_focusnextchild_callback = nullptr;
        qcommandlinkbutton_focuspreviouschild_callback = nullptr;
        qcommandlinkbutton_sender_callback = nullptr;
        qcommandlinkbutton_sendersignalindex_callback = nullptr;
        qcommandlinkbutton_receivers_callback = nullptr;
        qcommandlinkbutton_issignalconnected_callback = nullptr;
        qcommandlinkbutton_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setQCommandLinkButton_Metacall_Callback(QCommandLinkButton_Metacall_Callback cb) { qcommandlinkbutton_metacall_callback = cb; }
    inline void setQCommandLinkButton_SizeHint_Callback(QCommandLinkButton_SizeHint_Callback cb) { qcommandlinkbutton_sizehint_callback = cb; }
    inline void setQCommandLinkButton_HeightForWidth_Callback(QCommandLinkButton_HeightForWidth_Callback cb) { qcommandlinkbutton_heightforwidth_callback = cb; }
    inline void setQCommandLinkButton_MinimumSizeHint_Callback(QCommandLinkButton_MinimumSizeHint_Callback cb) { qcommandlinkbutton_minimumsizehint_callback = cb; }
    inline void setQCommandLinkButton_InitStyleOption_Callback(QCommandLinkButton_InitStyleOption_Callback cb) { qcommandlinkbutton_initstyleoption_callback = cb; }
    inline void setQCommandLinkButton_Event_Callback(QCommandLinkButton_Event_Callback cb) { qcommandlinkbutton_event_callback = cb; }
    inline void setQCommandLinkButton_PaintEvent_Callback(QCommandLinkButton_PaintEvent_Callback cb) { qcommandlinkbutton_paintevent_callback = cb; }
    inline void setQCommandLinkButton_KeyPressEvent_Callback(QCommandLinkButton_KeyPressEvent_Callback cb) { qcommandlinkbutton_keypressevent_callback = cb; }
    inline void setQCommandLinkButton_FocusInEvent_Callback(QCommandLinkButton_FocusInEvent_Callback cb) { qcommandlinkbutton_focusinevent_callback = cb; }
    inline void setQCommandLinkButton_FocusOutEvent_Callback(QCommandLinkButton_FocusOutEvent_Callback cb) { qcommandlinkbutton_focusoutevent_callback = cb; }
    inline void setQCommandLinkButton_MouseMoveEvent_Callback(QCommandLinkButton_MouseMoveEvent_Callback cb) { qcommandlinkbutton_mousemoveevent_callback = cb; }
    inline void setQCommandLinkButton_HitButton_Callback(QCommandLinkButton_HitButton_Callback cb) { qcommandlinkbutton_hitbutton_callback = cb; }
    inline void setQCommandLinkButton_CheckStateSet_Callback(QCommandLinkButton_CheckStateSet_Callback cb) { qcommandlinkbutton_checkstateset_callback = cb; }
    inline void setQCommandLinkButton_NextCheckState_Callback(QCommandLinkButton_NextCheckState_Callback cb) { qcommandlinkbutton_nextcheckstate_callback = cb; }
    inline void setQCommandLinkButton_KeyReleaseEvent_Callback(QCommandLinkButton_KeyReleaseEvent_Callback cb) { qcommandlinkbutton_keyreleaseevent_callback = cb; }
    inline void setQCommandLinkButton_MousePressEvent_Callback(QCommandLinkButton_MousePressEvent_Callback cb) { qcommandlinkbutton_mousepressevent_callback = cb; }
    inline void setQCommandLinkButton_MouseReleaseEvent_Callback(QCommandLinkButton_MouseReleaseEvent_Callback cb) { qcommandlinkbutton_mousereleaseevent_callback = cb; }
    inline void setQCommandLinkButton_ChangeEvent_Callback(QCommandLinkButton_ChangeEvent_Callback cb) { qcommandlinkbutton_changeevent_callback = cb; }
    inline void setQCommandLinkButton_TimerEvent_Callback(QCommandLinkButton_TimerEvent_Callback cb) { qcommandlinkbutton_timerevent_callback = cb; }
    inline void setQCommandLinkButton_DevType_Callback(QCommandLinkButton_DevType_Callback cb) { qcommandlinkbutton_devtype_callback = cb; }
    inline void setQCommandLinkButton_SetVisible_Callback(QCommandLinkButton_SetVisible_Callback cb) { qcommandlinkbutton_setvisible_callback = cb; }
    inline void setQCommandLinkButton_HasHeightForWidth_Callback(QCommandLinkButton_HasHeightForWidth_Callback cb) { qcommandlinkbutton_hasheightforwidth_callback = cb; }
    inline void setQCommandLinkButton_PaintEngine_Callback(QCommandLinkButton_PaintEngine_Callback cb) { qcommandlinkbutton_paintengine_callback = cb; }
    inline void setQCommandLinkButton_MouseDoubleClickEvent_Callback(QCommandLinkButton_MouseDoubleClickEvent_Callback cb) { qcommandlinkbutton_mousedoubleclickevent_callback = cb; }
    inline void setQCommandLinkButton_WheelEvent_Callback(QCommandLinkButton_WheelEvent_Callback cb) { qcommandlinkbutton_wheelevent_callback = cb; }
    inline void setQCommandLinkButton_EnterEvent_Callback(QCommandLinkButton_EnterEvent_Callback cb) { qcommandlinkbutton_enterevent_callback = cb; }
    inline void setQCommandLinkButton_LeaveEvent_Callback(QCommandLinkButton_LeaveEvent_Callback cb) { qcommandlinkbutton_leaveevent_callback = cb; }
    inline void setQCommandLinkButton_MoveEvent_Callback(QCommandLinkButton_MoveEvent_Callback cb) { qcommandlinkbutton_moveevent_callback = cb; }
    inline void setQCommandLinkButton_ResizeEvent_Callback(QCommandLinkButton_ResizeEvent_Callback cb) { qcommandlinkbutton_resizeevent_callback = cb; }
    inline void setQCommandLinkButton_CloseEvent_Callback(QCommandLinkButton_CloseEvent_Callback cb) { qcommandlinkbutton_closeevent_callback = cb; }
    inline void setQCommandLinkButton_ContextMenuEvent_Callback(QCommandLinkButton_ContextMenuEvent_Callback cb) { qcommandlinkbutton_contextmenuevent_callback = cb; }
    inline void setQCommandLinkButton_TabletEvent_Callback(QCommandLinkButton_TabletEvent_Callback cb) { qcommandlinkbutton_tabletevent_callback = cb; }
    inline void setQCommandLinkButton_ActionEvent_Callback(QCommandLinkButton_ActionEvent_Callback cb) { qcommandlinkbutton_actionevent_callback = cb; }
    inline void setQCommandLinkButton_DragEnterEvent_Callback(QCommandLinkButton_DragEnterEvent_Callback cb) { qcommandlinkbutton_dragenterevent_callback = cb; }
    inline void setQCommandLinkButton_DragMoveEvent_Callback(QCommandLinkButton_DragMoveEvent_Callback cb) { qcommandlinkbutton_dragmoveevent_callback = cb; }
    inline void setQCommandLinkButton_DragLeaveEvent_Callback(QCommandLinkButton_DragLeaveEvent_Callback cb) { qcommandlinkbutton_dragleaveevent_callback = cb; }
    inline void setQCommandLinkButton_DropEvent_Callback(QCommandLinkButton_DropEvent_Callback cb) { qcommandlinkbutton_dropevent_callback = cb; }
    inline void setQCommandLinkButton_ShowEvent_Callback(QCommandLinkButton_ShowEvent_Callback cb) { qcommandlinkbutton_showevent_callback = cb; }
    inline void setQCommandLinkButton_HideEvent_Callback(QCommandLinkButton_HideEvent_Callback cb) { qcommandlinkbutton_hideevent_callback = cb; }
    inline void setQCommandLinkButton_NativeEvent_Callback(QCommandLinkButton_NativeEvent_Callback cb) { qcommandlinkbutton_nativeevent_callback = cb; }
    inline void setQCommandLinkButton_Metric_Callback(QCommandLinkButton_Metric_Callback cb) { qcommandlinkbutton_metric_callback = cb; }
    inline void setQCommandLinkButton_InitPainter_Callback(QCommandLinkButton_InitPainter_Callback cb) { qcommandlinkbutton_initpainter_callback = cb; }
    inline void setQCommandLinkButton_Redirected_Callback(QCommandLinkButton_Redirected_Callback cb) { qcommandlinkbutton_redirected_callback = cb; }
    inline void setQCommandLinkButton_SharedPainter_Callback(QCommandLinkButton_SharedPainter_Callback cb) { qcommandlinkbutton_sharedpainter_callback = cb; }
    inline void setQCommandLinkButton_InputMethodEvent_Callback(QCommandLinkButton_InputMethodEvent_Callback cb) { qcommandlinkbutton_inputmethodevent_callback = cb; }
    inline void setQCommandLinkButton_InputMethodQuery_Callback(QCommandLinkButton_InputMethodQuery_Callback cb) { qcommandlinkbutton_inputmethodquery_callback = cb; }
    inline void setQCommandLinkButton_FocusNextPrevChild_Callback(QCommandLinkButton_FocusNextPrevChild_Callback cb) { qcommandlinkbutton_focusnextprevchild_callback = cb; }
    inline void setQCommandLinkButton_EventFilter_Callback(QCommandLinkButton_EventFilter_Callback cb) { qcommandlinkbutton_eventfilter_callback = cb; }
    inline void setQCommandLinkButton_ChildEvent_Callback(QCommandLinkButton_ChildEvent_Callback cb) { qcommandlinkbutton_childevent_callback = cb; }
    inline void setQCommandLinkButton_CustomEvent_Callback(QCommandLinkButton_CustomEvent_Callback cb) { qcommandlinkbutton_customevent_callback = cb; }
    inline void setQCommandLinkButton_ConnectNotify_Callback(QCommandLinkButton_ConnectNotify_Callback cb) { qcommandlinkbutton_connectnotify_callback = cb; }
    inline void setQCommandLinkButton_DisconnectNotify_Callback(QCommandLinkButton_DisconnectNotify_Callback cb) { qcommandlinkbutton_disconnectnotify_callback = cb; }
    inline void setQCommandLinkButton_UpdateMicroFocus_Callback(QCommandLinkButton_UpdateMicroFocus_Callback cb) { qcommandlinkbutton_updatemicrofocus_callback = cb; }
    inline void setQCommandLinkButton_Create_Callback(QCommandLinkButton_Create_Callback cb) { qcommandlinkbutton_create_callback = cb; }
    inline void setQCommandLinkButton_Destroy_Callback(QCommandLinkButton_Destroy_Callback cb) { qcommandlinkbutton_destroy_callback = cb; }
    inline void setQCommandLinkButton_FocusNextChild_Callback(QCommandLinkButton_FocusNextChild_Callback cb) { qcommandlinkbutton_focusnextchild_callback = cb; }
    inline void setQCommandLinkButton_FocusPreviousChild_Callback(QCommandLinkButton_FocusPreviousChild_Callback cb) { qcommandlinkbutton_focuspreviouschild_callback = cb; }
    inline void setQCommandLinkButton_Sender_Callback(QCommandLinkButton_Sender_Callback cb) { qcommandlinkbutton_sender_callback = cb; }
    inline void setQCommandLinkButton_SenderSignalIndex_Callback(QCommandLinkButton_SenderSignalIndex_Callback cb) { qcommandlinkbutton_sendersignalindex_callback = cb; }
    inline void setQCommandLinkButton_Receivers_Callback(QCommandLinkButton_Receivers_Callback cb) { qcommandlinkbutton_receivers_callback = cb; }
    inline void setQCommandLinkButton_IsSignalConnected_Callback(QCommandLinkButton_IsSignalConnected_Callback cb) { qcommandlinkbutton_issignalconnected_callback = cb; }
    inline void setQCommandLinkButton_GetDecodedMetricF_Callback(QCommandLinkButton_GetDecodedMetricF_Callback cb) { qcommandlinkbutton_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setQCommandLinkButton_Metacall_IsBase(bool value) const { qcommandlinkbutton_metacall_isbase = value; }
    inline void setQCommandLinkButton_SizeHint_IsBase(bool value) const { qcommandlinkbutton_sizehint_isbase = value; }
    inline void setQCommandLinkButton_HeightForWidth_IsBase(bool value) const { qcommandlinkbutton_heightforwidth_isbase = value; }
    inline void setQCommandLinkButton_MinimumSizeHint_IsBase(bool value) const { qcommandlinkbutton_minimumsizehint_isbase = value; }
    inline void setQCommandLinkButton_InitStyleOption_IsBase(bool value) const { qcommandlinkbutton_initstyleoption_isbase = value; }
    inline void setQCommandLinkButton_Event_IsBase(bool value) const { qcommandlinkbutton_event_isbase = value; }
    inline void setQCommandLinkButton_PaintEvent_IsBase(bool value) const { qcommandlinkbutton_paintevent_isbase = value; }
    inline void setQCommandLinkButton_KeyPressEvent_IsBase(bool value) const { qcommandlinkbutton_keypressevent_isbase = value; }
    inline void setQCommandLinkButton_FocusInEvent_IsBase(bool value) const { qcommandlinkbutton_focusinevent_isbase = value; }
    inline void setQCommandLinkButton_FocusOutEvent_IsBase(bool value) const { qcommandlinkbutton_focusoutevent_isbase = value; }
    inline void setQCommandLinkButton_MouseMoveEvent_IsBase(bool value) const { qcommandlinkbutton_mousemoveevent_isbase = value; }
    inline void setQCommandLinkButton_HitButton_IsBase(bool value) const { qcommandlinkbutton_hitbutton_isbase = value; }
    inline void setQCommandLinkButton_CheckStateSet_IsBase(bool value) const { qcommandlinkbutton_checkstateset_isbase = value; }
    inline void setQCommandLinkButton_NextCheckState_IsBase(bool value) const { qcommandlinkbutton_nextcheckstate_isbase = value; }
    inline void setQCommandLinkButton_KeyReleaseEvent_IsBase(bool value) const { qcommandlinkbutton_keyreleaseevent_isbase = value; }
    inline void setQCommandLinkButton_MousePressEvent_IsBase(bool value) const { qcommandlinkbutton_mousepressevent_isbase = value; }
    inline void setQCommandLinkButton_MouseReleaseEvent_IsBase(bool value) const { qcommandlinkbutton_mousereleaseevent_isbase = value; }
    inline void setQCommandLinkButton_ChangeEvent_IsBase(bool value) const { qcommandlinkbutton_changeevent_isbase = value; }
    inline void setQCommandLinkButton_TimerEvent_IsBase(bool value) const { qcommandlinkbutton_timerevent_isbase = value; }
    inline void setQCommandLinkButton_DevType_IsBase(bool value) const { qcommandlinkbutton_devtype_isbase = value; }
    inline void setQCommandLinkButton_SetVisible_IsBase(bool value) const { qcommandlinkbutton_setvisible_isbase = value; }
    inline void setQCommandLinkButton_HasHeightForWidth_IsBase(bool value) const { qcommandlinkbutton_hasheightforwidth_isbase = value; }
    inline void setQCommandLinkButton_PaintEngine_IsBase(bool value) const { qcommandlinkbutton_paintengine_isbase = value; }
    inline void setQCommandLinkButton_MouseDoubleClickEvent_IsBase(bool value) const { qcommandlinkbutton_mousedoubleclickevent_isbase = value; }
    inline void setQCommandLinkButton_WheelEvent_IsBase(bool value) const { qcommandlinkbutton_wheelevent_isbase = value; }
    inline void setQCommandLinkButton_EnterEvent_IsBase(bool value) const { qcommandlinkbutton_enterevent_isbase = value; }
    inline void setQCommandLinkButton_LeaveEvent_IsBase(bool value) const { qcommandlinkbutton_leaveevent_isbase = value; }
    inline void setQCommandLinkButton_MoveEvent_IsBase(bool value) const { qcommandlinkbutton_moveevent_isbase = value; }
    inline void setQCommandLinkButton_ResizeEvent_IsBase(bool value) const { qcommandlinkbutton_resizeevent_isbase = value; }
    inline void setQCommandLinkButton_CloseEvent_IsBase(bool value) const { qcommandlinkbutton_closeevent_isbase = value; }
    inline void setQCommandLinkButton_ContextMenuEvent_IsBase(bool value) const { qcommandlinkbutton_contextmenuevent_isbase = value; }
    inline void setQCommandLinkButton_TabletEvent_IsBase(bool value) const { qcommandlinkbutton_tabletevent_isbase = value; }
    inline void setQCommandLinkButton_ActionEvent_IsBase(bool value) const { qcommandlinkbutton_actionevent_isbase = value; }
    inline void setQCommandLinkButton_DragEnterEvent_IsBase(bool value) const { qcommandlinkbutton_dragenterevent_isbase = value; }
    inline void setQCommandLinkButton_DragMoveEvent_IsBase(bool value) const { qcommandlinkbutton_dragmoveevent_isbase = value; }
    inline void setQCommandLinkButton_DragLeaveEvent_IsBase(bool value) const { qcommandlinkbutton_dragleaveevent_isbase = value; }
    inline void setQCommandLinkButton_DropEvent_IsBase(bool value) const { qcommandlinkbutton_dropevent_isbase = value; }
    inline void setQCommandLinkButton_ShowEvent_IsBase(bool value) const { qcommandlinkbutton_showevent_isbase = value; }
    inline void setQCommandLinkButton_HideEvent_IsBase(bool value) const { qcommandlinkbutton_hideevent_isbase = value; }
    inline void setQCommandLinkButton_NativeEvent_IsBase(bool value) const { qcommandlinkbutton_nativeevent_isbase = value; }
    inline void setQCommandLinkButton_Metric_IsBase(bool value) const { qcommandlinkbutton_metric_isbase = value; }
    inline void setQCommandLinkButton_InitPainter_IsBase(bool value) const { qcommandlinkbutton_initpainter_isbase = value; }
    inline void setQCommandLinkButton_Redirected_IsBase(bool value) const { qcommandlinkbutton_redirected_isbase = value; }
    inline void setQCommandLinkButton_SharedPainter_IsBase(bool value) const { qcommandlinkbutton_sharedpainter_isbase = value; }
    inline void setQCommandLinkButton_InputMethodEvent_IsBase(bool value) const { qcommandlinkbutton_inputmethodevent_isbase = value; }
    inline void setQCommandLinkButton_InputMethodQuery_IsBase(bool value) const { qcommandlinkbutton_inputmethodquery_isbase = value; }
    inline void setQCommandLinkButton_FocusNextPrevChild_IsBase(bool value) const { qcommandlinkbutton_focusnextprevchild_isbase = value; }
    inline void setQCommandLinkButton_EventFilter_IsBase(bool value) const { qcommandlinkbutton_eventfilter_isbase = value; }
    inline void setQCommandLinkButton_ChildEvent_IsBase(bool value) const { qcommandlinkbutton_childevent_isbase = value; }
    inline void setQCommandLinkButton_CustomEvent_IsBase(bool value) const { qcommandlinkbutton_customevent_isbase = value; }
    inline void setQCommandLinkButton_ConnectNotify_IsBase(bool value) const { qcommandlinkbutton_connectnotify_isbase = value; }
    inline void setQCommandLinkButton_DisconnectNotify_IsBase(bool value) const { qcommandlinkbutton_disconnectnotify_isbase = value; }
    inline void setQCommandLinkButton_UpdateMicroFocus_IsBase(bool value) const { qcommandlinkbutton_updatemicrofocus_isbase = value; }
    inline void setQCommandLinkButton_Create_IsBase(bool value) const { qcommandlinkbutton_create_isbase = value; }
    inline void setQCommandLinkButton_Destroy_IsBase(bool value) const { qcommandlinkbutton_destroy_isbase = value; }
    inline void setQCommandLinkButton_FocusNextChild_IsBase(bool value) const { qcommandlinkbutton_focusnextchild_isbase = value; }
    inline void setQCommandLinkButton_FocusPreviousChild_IsBase(bool value) const { qcommandlinkbutton_focuspreviouschild_isbase = value; }
    inline void setQCommandLinkButton_Sender_IsBase(bool value) const { qcommandlinkbutton_sender_isbase = value; }
    inline void setQCommandLinkButton_SenderSignalIndex_IsBase(bool value) const { qcommandlinkbutton_sendersignalindex_isbase = value; }
    inline void setQCommandLinkButton_Receivers_IsBase(bool value) const { qcommandlinkbutton_receivers_isbase = value; }
    inline void setQCommandLinkButton_IsSignalConnected_IsBase(bool value) const { qcommandlinkbutton_issignalconnected_isbase = value; }
    inline void setQCommandLinkButton_GetDecodedMetricF_IsBase(bool value) const { qcommandlinkbutton_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcommandlinkbutton_metacall_isbase) {
            qcommandlinkbutton_metacall_isbase = false;
            return QCommandLinkButton::qt_metacall(param1, param2, param3);
        } else if (qcommandlinkbutton_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qcommandlinkbutton_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QCommandLinkButton::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qcommandlinkbutton_sizehint_isbase) {
            qcommandlinkbutton_sizehint_isbase = false;
            return QCommandLinkButton::sizeHint();
        } else if (qcommandlinkbutton_sizehint_callback != nullptr) {
            QSize* callback_ret = qcommandlinkbutton_sizehint_callback();
            return *callback_ret;
        } else {
            return QCommandLinkButton::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qcommandlinkbutton_heightforwidth_isbase) {
            qcommandlinkbutton_heightforwidth_isbase = false;
            return QCommandLinkButton::heightForWidth(param1);
        } else if (qcommandlinkbutton_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qcommandlinkbutton_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QCommandLinkButton::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qcommandlinkbutton_minimumsizehint_isbase) {
            qcommandlinkbutton_minimumsizehint_isbase = false;
            return QCommandLinkButton::minimumSizeHint();
        } else if (qcommandlinkbutton_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qcommandlinkbutton_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QCommandLinkButton::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionButton* option) const override {
        if (qcommandlinkbutton_initstyleoption_isbase) {
            qcommandlinkbutton_initstyleoption_isbase = false;
            QCommandLinkButton::initStyleOption(option);
        } else if (qcommandlinkbutton_initstyleoption_callback != nullptr) {
            QStyleOptionButton* cbval1 = option;

            qcommandlinkbutton_initstyleoption_callback(this, cbval1);
        } else {
            QCommandLinkButton::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qcommandlinkbutton_event_isbase) {
            qcommandlinkbutton_event_isbase = false;
            return QCommandLinkButton::event(e);
        } else if (qcommandlinkbutton_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = qcommandlinkbutton_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCommandLinkButton::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qcommandlinkbutton_paintevent_isbase) {
            qcommandlinkbutton_paintevent_isbase = false;
            QCommandLinkButton::paintEvent(param1);
        } else if (qcommandlinkbutton_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            qcommandlinkbutton_paintevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qcommandlinkbutton_keypressevent_isbase) {
            qcommandlinkbutton_keypressevent_isbase = false;
            QCommandLinkButton::keyPressEvent(param1);
        } else if (qcommandlinkbutton_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            qcommandlinkbutton_keypressevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qcommandlinkbutton_focusinevent_isbase) {
            qcommandlinkbutton_focusinevent_isbase = false;
            QCommandLinkButton::focusInEvent(param1);
        } else if (qcommandlinkbutton_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            qcommandlinkbutton_focusinevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::focusInEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qcommandlinkbutton_focusoutevent_isbase) {
            qcommandlinkbutton_focusoutevent_isbase = false;
            QCommandLinkButton::focusOutEvent(param1);
        } else if (qcommandlinkbutton_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            qcommandlinkbutton_focusoutevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::focusOutEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qcommandlinkbutton_mousemoveevent_isbase) {
            qcommandlinkbutton_mousemoveevent_isbase = false;
            QCommandLinkButton::mouseMoveEvent(param1);
        } else if (qcommandlinkbutton_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            qcommandlinkbutton_mousemoveevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (qcommandlinkbutton_hitbutton_isbase) {
            qcommandlinkbutton_hitbutton_isbase = false;
            return QCommandLinkButton::hitButton(pos);
        } else if (qcommandlinkbutton_hitbutton_callback != nullptr) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);

            bool callback_ret = qcommandlinkbutton_hitbutton_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCommandLinkButton::hitButton(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (qcommandlinkbutton_checkstateset_isbase) {
            qcommandlinkbutton_checkstateset_isbase = false;
            QCommandLinkButton::checkStateSet();
        } else if (qcommandlinkbutton_checkstateset_callback != nullptr) {
            qcommandlinkbutton_checkstateset_callback();
        } else {
            QCommandLinkButton::checkStateSet();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (qcommandlinkbutton_nextcheckstate_isbase) {
            qcommandlinkbutton_nextcheckstate_isbase = false;
            QCommandLinkButton::nextCheckState();
        } else if (qcommandlinkbutton_nextcheckstate_callback != nullptr) {
            qcommandlinkbutton_nextcheckstate_callback();
        } else {
            QCommandLinkButton::nextCheckState();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qcommandlinkbutton_keyreleaseevent_isbase) {
            qcommandlinkbutton_keyreleaseevent_isbase = false;
            QCommandLinkButton::keyReleaseEvent(e);
        } else if (qcommandlinkbutton_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            qcommandlinkbutton_keyreleaseevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qcommandlinkbutton_mousepressevent_isbase) {
            qcommandlinkbutton_mousepressevent_isbase = false;
            QCommandLinkButton::mousePressEvent(e);
        } else if (qcommandlinkbutton_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            qcommandlinkbutton_mousepressevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qcommandlinkbutton_mousereleaseevent_isbase) {
            qcommandlinkbutton_mousereleaseevent_isbase = false;
            QCommandLinkButton::mouseReleaseEvent(e);
        } else if (qcommandlinkbutton_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            qcommandlinkbutton_mousereleaseevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qcommandlinkbutton_changeevent_isbase) {
            qcommandlinkbutton_changeevent_isbase = false;
            QCommandLinkButton::changeEvent(e);
        } else if (qcommandlinkbutton_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            qcommandlinkbutton_changeevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qcommandlinkbutton_timerevent_isbase) {
            qcommandlinkbutton_timerevent_isbase = false;
            QCommandLinkButton::timerEvent(e);
        } else if (qcommandlinkbutton_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = e;

            qcommandlinkbutton_timerevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::timerEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qcommandlinkbutton_devtype_isbase) {
            qcommandlinkbutton_devtype_isbase = false;
            return QCommandLinkButton::devType();
        } else if (qcommandlinkbutton_devtype_callback != nullptr) {
            int callback_ret = qcommandlinkbutton_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QCommandLinkButton::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qcommandlinkbutton_setvisible_isbase) {
            qcommandlinkbutton_setvisible_isbase = false;
            QCommandLinkButton::setVisible(visible);
        } else if (qcommandlinkbutton_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qcommandlinkbutton_setvisible_callback(this, cbval1);
        } else {
            QCommandLinkButton::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qcommandlinkbutton_hasheightforwidth_isbase) {
            qcommandlinkbutton_hasheightforwidth_isbase = false;
            return QCommandLinkButton::hasHeightForWidth();
        } else if (qcommandlinkbutton_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qcommandlinkbutton_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QCommandLinkButton::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qcommandlinkbutton_paintengine_isbase) {
            qcommandlinkbutton_paintengine_isbase = false;
            return QCommandLinkButton::paintEngine();
        } else if (qcommandlinkbutton_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qcommandlinkbutton_paintengine_callback();
            return callback_ret;
        } else {
            return QCommandLinkButton::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qcommandlinkbutton_mousedoubleclickevent_isbase) {
            qcommandlinkbutton_mousedoubleclickevent_isbase = false;
            QCommandLinkButton::mouseDoubleClickEvent(event);
        } else if (qcommandlinkbutton_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qcommandlinkbutton_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qcommandlinkbutton_wheelevent_isbase) {
            qcommandlinkbutton_wheelevent_isbase = false;
            QCommandLinkButton::wheelEvent(event);
        } else if (qcommandlinkbutton_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qcommandlinkbutton_wheelevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qcommandlinkbutton_enterevent_isbase) {
            qcommandlinkbutton_enterevent_isbase = false;
            QCommandLinkButton::enterEvent(event);
        } else if (qcommandlinkbutton_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qcommandlinkbutton_enterevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qcommandlinkbutton_leaveevent_isbase) {
            qcommandlinkbutton_leaveevent_isbase = false;
            QCommandLinkButton::leaveEvent(event);
        } else if (qcommandlinkbutton_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qcommandlinkbutton_leaveevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qcommandlinkbutton_moveevent_isbase) {
            qcommandlinkbutton_moveevent_isbase = false;
            QCommandLinkButton::moveEvent(event);
        } else if (qcommandlinkbutton_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qcommandlinkbutton_moveevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qcommandlinkbutton_resizeevent_isbase) {
            qcommandlinkbutton_resizeevent_isbase = false;
            QCommandLinkButton::resizeEvent(event);
        } else if (qcommandlinkbutton_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qcommandlinkbutton_resizeevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qcommandlinkbutton_closeevent_isbase) {
            qcommandlinkbutton_closeevent_isbase = false;
            QCommandLinkButton::closeEvent(event);
        } else if (qcommandlinkbutton_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qcommandlinkbutton_closeevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qcommandlinkbutton_contextmenuevent_isbase) {
            qcommandlinkbutton_contextmenuevent_isbase = false;
            QCommandLinkButton::contextMenuEvent(event);
        } else if (qcommandlinkbutton_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qcommandlinkbutton_contextmenuevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qcommandlinkbutton_tabletevent_isbase) {
            qcommandlinkbutton_tabletevent_isbase = false;
            QCommandLinkButton::tabletEvent(event);
        } else if (qcommandlinkbutton_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qcommandlinkbutton_tabletevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qcommandlinkbutton_actionevent_isbase) {
            qcommandlinkbutton_actionevent_isbase = false;
            QCommandLinkButton::actionEvent(event);
        } else if (qcommandlinkbutton_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qcommandlinkbutton_actionevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qcommandlinkbutton_dragenterevent_isbase) {
            qcommandlinkbutton_dragenterevent_isbase = false;
            QCommandLinkButton::dragEnterEvent(event);
        } else if (qcommandlinkbutton_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qcommandlinkbutton_dragenterevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qcommandlinkbutton_dragmoveevent_isbase) {
            qcommandlinkbutton_dragmoveevent_isbase = false;
            QCommandLinkButton::dragMoveEvent(event);
        } else if (qcommandlinkbutton_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qcommandlinkbutton_dragmoveevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qcommandlinkbutton_dragleaveevent_isbase) {
            qcommandlinkbutton_dragleaveevent_isbase = false;
            QCommandLinkButton::dragLeaveEvent(event);
        } else if (qcommandlinkbutton_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qcommandlinkbutton_dragleaveevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qcommandlinkbutton_dropevent_isbase) {
            qcommandlinkbutton_dropevent_isbase = false;
            QCommandLinkButton::dropEvent(event);
        } else if (qcommandlinkbutton_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qcommandlinkbutton_dropevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qcommandlinkbutton_showevent_isbase) {
            qcommandlinkbutton_showevent_isbase = false;
            QCommandLinkButton::showEvent(event);
        } else if (qcommandlinkbutton_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            qcommandlinkbutton_showevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qcommandlinkbutton_hideevent_isbase) {
            qcommandlinkbutton_hideevent_isbase = false;
            QCommandLinkButton::hideEvent(event);
        } else if (qcommandlinkbutton_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qcommandlinkbutton_hideevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qcommandlinkbutton_nativeevent_isbase) {
            qcommandlinkbutton_nativeevent_isbase = false;
            return QCommandLinkButton::nativeEvent(eventType, message, result);
        } else if (qcommandlinkbutton_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<const char*>(malloc(eventType_str.len + 1));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            ((char*)eventType_str.data)[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = qcommandlinkbutton_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QCommandLinkButton::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qcommandlinkbutton_metric_isbase) {
            qcommandlinkbutton_metric_isbase = false;
            return QCommandLinkButton::metric(param1);
        } else if (qcommandlinkbutton_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qcommandlinkbutton_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QCommandLinkButton::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qcommandlinkbutton_initpainter_isbase) {
            qcommandlinkbutton_initpainter_isbase = false;
            QCommandLinkButton::initPainter(painter);
        } else if (qcommandlinkbutton_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qcommandlinkbutton_initpainter_callback(this, cbval1);
        } else {
            QCommandLinkButton::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qcommandlinkbutton_redirected_isbase) {
            qcommandlinkbutton_redirected_isbase = false;
            return QCommandLinkButton::redirected(offset);
        } else if (qcommandlinkbutton_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qcommandlinkbutton_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCommandLinkButton::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qcommandlinkbutton_sharedpainter_isbase) {
            qcommandlinkbutton_sharedpainter_isbase = false;
            return QCommandLinkButton::sharedPainter();
        } else if (qcommandlinkbutton_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qcommandlinkbutton_sharedpainter_callback();
            return callback_ret;
        } else {
            return QCommandLinkButton::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qcommandlinkbutton_inputmethodevent_isbase) {
            qcommandlinkbutton_inputmethodevent_isbase = false;
            QCommandLinkButton::inputMethodEvent(param1);
        } else if (qcommandlinkbutton_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qcommandlinkbutton_inputmethodevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qcommandlinkbutton_inputmethodquery_isbase) {
            qcommandlinkbutton_inputmethodquery_isbase = false;
            return QCommandLinkButton::inputMethodQuery(param1);
        } else if (qcommandlinkbutton_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qcommandlinkbutton_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QCommandLinkButton::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qcommandlinkbutton_focusnextprevchild_isbase) {
            qcommandlinkbutton_focusnextprevchild_isbase = false;
            return QCommandLinkButton::focusNextPrevChild(next);
        } else if (qcommandlinkbutton_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qcommandlinkbutton_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCommandLinkButton::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcommandlinkbutton_eventfilter_isbase) {
            qcommandlinkbutton_eventfilter_isbase = false;
            return QCommandLinkButton::eventFilter(watched, event);
        } else if (qcommandlinkbutton_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qcommandlinkbutton_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QCommandLinkButton::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcommandlinkbutton_childevent_isbase) {
            qcommandlinkbutton_childevent_isbase = false;
            QCommandLinkButton::childEvent(event);
        } else if (qcommandlinkbutton_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qcommandlinkbutton_childevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcommandlinkbutton_customevent_isbase) {
            qcommandlinkbutton_customevent_isbase = false;
            QCommandLinkButton::customEvent(event);
        } else if (qcommandlinkbutton_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qcommandlinkbutton_customevent_callback(this, cbval1);
        } else {
            QCommandLinkButton::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcommandlinkbutton_connectnotify_isbase) {
            qcommandlinkbutton_connectnotify_isbase = false;
            QCommandLinkButton::connectNotify(signal);
        } else if (qcommandlinkbutton_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qcommandlinkbutton_connectnotify_callback(this, cbval1);
        } else {
            QCommandLinkButton::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcommandlinkbutton_disconnectnotify_isbase) {
            qcommandlinkbutton_disconnectnotify_isbase = false;
            QCommandLinkButton::disconnectNotify(signal);
        } else if (qcommandlinkbutton_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qcommandlinkbutton_disconnectnotify_callback(this, cbval1);
        } else {
            QCommandLinkButton::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qcommandlinkbutton_updatemicrofocus_isbase) {
            qcommandlinkbutton_updatemicrofocus_isbase = false;
            QCommandLinkButton::updateMicroFocus();
        } else if (qcommandlinkbutton_updatemicrofocus_callback != nullptr) {
            qcommandlinkbutton_updatemicrofocus_callback();
        } else {
            QCommandLinkButton::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qcommandlinkbutton_create_isbase) {
            qcommandlinkbutton_create_isbase = false;
            QCommandLinkButton::create();
        } else if (qcommandlinkbutton_create_callback != nullptr) {
            qcommandlinkbutton_create_callback();
        } else {
            QCommandLinkButton::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qcommandlinkbutton_destroy_isbase) {
            qcommandlinkbutton_destroy_isbase = false;
            QCommandLinkButton::destroy();
        } else if (qcommandlinkbutton_destroy_callback != nullptr) {
            qcommandlinkbutton_destroy_callback();
        } else {
            QCommandLinkButton::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qcommandlinkbutton_focusnextchild_isbase) {
            qcommandlinkbutton_focusnextchild_isbase = false;
            return QCommandLinkButton::focusNextChild();
        } else if (qcommandlinkbutton_focusnextchild_callback != nullptr) {
            bool callback_ret = qcommandlinkbutton_focusnextchild_callback();
            return callback_ret;
        } else {
            return QCommandLinkButton::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qcommandlinkbutton_focuspreviouschild_isbase) {
            qcommandlinkbutton_focuspreviouschild_isbase = false;
            return QCommandLinkButton::focusPreviousChild();
        } else if (qcommandlinkbutton_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qcommandlinkbutton_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QCommandLinkButton::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcommandlinkbutton_sender_isbase) {
            qcommandlinkbutton_sender_isbase = false;
            return QCommandLinkButton::sender();
        } else if (qcommandlinkbutton_sender_callback != nullptr) {
            QObject* callback_ret = qcommandlinkbutton_sender_callback();
            return callback_ret;
        } else {
            return QCommandLinkButton::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcommandlinkbutton_sendersignalindex_isbase) {
            qcommandlinkbutton_sendersignalindex_isbase = false;
            return QCommandLinkButton::senderSignalIndex();
        } else if (qcommandlinkbutton_sendersignalindex_callback != nullptr) {
            int callback_ret = qcommandlinkbutton_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QCommandLinkButton::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcommandlinkbutton_receivers_isbase) {
            qcommandlinkbutton_receivers_isbase = false;
            return QCommandLinkButton::receivers(signal);
        } else if (qcommandlinkbutton_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qcommandlinkbutton_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QCommandLinkButton::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcommandlinkbutton_issignalconnected_isbase) {
            qcommandlinkbutton_issignalconnected_isbase = false;
            return QCommandLinkButton::isSignalConnected(signal);
        } else if (qcommandlinkbutton_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qcommandlinkbutton_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QCommandLinkButton::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (qcommandlinkbutton_getdecodedmetricf_isbase) {
            qcommandlinkbutton_getdecodedmetricf_isbase = false;
            return QCommandLinkButton::getDecodedMetricF(metricA, metricB);
        } else if (qcommandlinkbutton_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = qcommandlinkbutton_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return QCommandLinkButton::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool QCommandLinkButton_Event(QCommandLinkButton* self, QEvent* e);
    friend bool QCommandLinkButton_QBaseEvent(QCommandLinkButton* self, QEvent* e);
    friend void QCommandLinkButton_PaintEvent(QCommandLinkButton* self, QPaintEvent* param1);
    friend void QCommandLinkButton_QBasePaintEvent(QCommandLinkButton* self, QPaintEvent* param1);
    friend void QCommandLinkButton_KeyPressEvent(QCommandLinkButton* self, QKeyEvent* param1);
    friend void QCommandLinkButton_QBaseKeyPressEvent(QCommandLinkButton* self, QKeyEvent* param1);
    friend void QCommandLinkButton_FocusInEvent(QCommandLinkButton* self, QFocusEvent* param1);
    friend void QCommandLinkButton_QBaseFocusInEvent(QCommandLinkButton* self, QFocusEvent* param1);
    friend void QCommandLinkButton_FocusOutEvent(QCommandLinkButton* self, QFocusEvent* param1);
    friend void QCommandLinkButton_QBaseFocusOutEvent(QCommandLinkButton* self, QFocusEvent* param1);
    friend void QCommandLinkButton_MouseMoveEvent(QCommandLinkButton* self, QMouseEvent* param1);
    friend void QCommandLinkButton_QBaseMouseMoveEvent(QCommandLinkButton* self, QMouseEvent* param1);
    friend bool QCommandLinkButton_HitButton(const QCommandLinkButton* self, const QPoint* pos);
    friend bool QCommandLinkButton_QBaseHitButton(const QCommandLinkButton* self, const QPoint* pos);
    friend void QCommandLinkButton_CheckStateSet(QCommandLinkButton* self);
    friend void QCommandLinkButton_QBaseCheckStateSet(QCommandLinkButton* self);
    friend void QCommandLinkButton_NextCheckState(QCommandLinkButton* self);
    friend void QCommandLinkButton_QBaseNextCheckState(QCommandLinkButton* self);
    friend void QCommandLinkButton_KeyReleaseEvent(QCommandLinkButton* self, QKeyEvent* e);
    friend void QCommandLinkButton_QBaseKeyReleaseEvent(QCommandLinkButton* self, QKeyEvent* e);
    friend void QCommandLinkButton_MousePressEvent(QCommandLinkButton* self, QMouseEvent* e);
    friend void QCommandLinkButton_QBaseMousePressEvent(QCommandLinkButton* self, QMouseEvent* e);
    friend void QCommandLinkButton_MouseReleaseEvent(QCommandLinkButton* self, QMouseEvent* e);
    friend void QCommandLinkButton_QBaseMouseReleaseEvent(QCommandLinkButton* self, QMouseEvent* e);
    friend void QCommandLinkButton_ChangeEvent(QCommandLinkButton* self, QEvent* e);
    friend void QCommandLinkButton_QBaseChangeEvent(QCommandLinkButton* self, QEvent* e);
    friend void QCommandLinkButton_TimerEvent(QCommandLinkButton* self, QTimerEvent* e);
    friend void QCommandLinkButton_QBaseTimerEvent(QCommandLinkButton* self, QTimerEvent* e);
    friend void QCommandLinkButton_MouseDoubleClickEvent(QCommandLinkButton* self, QMouseEvent* event);
    friend void QCommandLinkButton_QBaseMouseDoubleClickEvent(QCommandLinkButton* self, QMouseEvent* event);
    friend void QCommandLinkButton_WheelEvent(QCommandLinkButton* self, QWheelEvent* event);
    friend void QCommandLinkButton_QBaseWheelEvent(QCommandLinkButton* self, QWheelEvent* event);
    friend void QCommandLinkButton_EnterEvent(QCommandLinkButton* self, QEnterEvent* event);
    friend void QCommandLinkButton_QBaseEnterEvent(QCommandLinkButton* self, QEnterEvent* event);
    friend void QCommandLinkButton_LeaveEvent(QCommandLinkButton* self, QEvent* event);
    friend void QCommandLinkButton_QBaseLeaveEvent(QCommandLinkButton* self, QEvent* event);
    friend void QCommandLinkButton_MoveEvent(QCommandLinkButton* self, QMoveEvent* event);
    friend void QCommandLinkButton_QBaseMoveEvent(QCommandLinkButton* self, QMoveEvent* event);
    friend void QCommandLinkButton_ResizeEvent(QCommandLinkButton* self, QResizeEvent* event);
    friend void QCommandLinkButton_QBaseResizeEvent(QCommandLinkButton* self, QResizeEvent* event);
    friend void QCommandLinkButton_CloseEvent(QCommandLinkButton* self, QCloseEvent* event);
    friend void QCommandLinkButton_QBaseCloseEvent(QCommandLinkButton* self, QCloseEvent* event);
    friend void QCommandLinkButton_ContextMenuEvent(QCommandLinkButton* self, QContextMenuEvent* event);
    friend void QCommandLinkButton_QBaseContextMenuEvent(QCommandLinkButton* self, QContextMenuEvent* event);
    friend void QCommandLinkButton_TabletEvent(QCommandLinkButton* self, QTabletEvent* event);
    friend void QCommandLinkButton_QBaseTabletEvent(QCommandLinkButton* self, QTabletEvent* event);
    friend void QCommandLinkButton_ActionEvent(QCommandLinkButton* self, QActionEvent* event);
    friend void QCommandLinkButton_QBaseActionEvent(QCommandLinkButton* self, QActionEvent* event);
    friend void QCommandLinkButton_DragEnterEvent(QCommandLinkButton* self, QDragEnterEvent* event);
    friend void QCommandLinkButton_QBaseDragEnterEvent(QCommandLinkButton* self, QDragEnterEvent* event);
    friend void QCommandLinkButton_DragMoveEvent(QCommandLinkButton* self, QDragMoveEvent* event);
    friend void QCommandLinkButton_QBaseDragMoveEvent(QCommandLinkButton* self, QDragMoveEvent* event);
    friend void QCommandLinkButton_DragLeaveEvent(QCommandLinkButton* self, QDragLeaveEvent* event);
    friend void QCommandLinkButton_QBaseDragLeaveEvent(QCommandLinkButton* self, QDragLeaveEvent* event);
    friend void QCommandLinkButton_DropEvent(QCommandLinkButton* self, QDropEvent* event);
    friend void QCommandLinkButton_QBaseDropEvent(QCommandLinkButton* self, QDropEvent* event);
    friend void QCommandLinkButton_ShowEvent(QCommandLinkButton* self, QShowEvent* event);
    friend void QCommandLinkButton_QBaseShowEvent(QCommandLinkButton* self, QShowEvent* event);
    friend void QCommandLinkButton_HideEvent(QCommandLinkButton* self, QHideEvent* event);
    friend void QCommandLinkButton_QBaseHideEvent(QCommandLinkButton* self, QHideEvent* event);
    friend bool QCommandLinkButton_NativeEvent(QCommandLinkButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QCommandLinkButton_QBaseNativeEvent(QCommandLinkButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QCommandLinkButton_Metric(const QCommandLinkButton* self, int param1);
    friend int QCommandLinkButton_QBaseMetric(const QCommandLinkButton* self, int param1);
    friend void QCommandLinkButton_InitPainter(const QCommandLinkButton* self, QPainter* painter);
    friend void QCommandLinkButton_QBaseInitPainter(const QCommandLinkButton* self, QPainter* painter);
    friend QPaintDevice* QCommandLinkButton_Redirected(const QCommandLinkButton* self, QPoint* offset);
    friend QPaintDevice* QCommandLinkButton_QBaseRedirected(const QCommandLinkButton* self, QPoint* offset);
    friend QPainter* QCommandLinkButton_SharedPainter(const QCommandLinkButton* self);
    friend QPainter* QCommandLinkButton_QBaseSharedPainter(const QCommandLinkButton* self);
    friend void QCommandLinkButton_InputMethodEvent(QCommandLinkButton* self, QInputMethodEvent* param1);
    friend void QCommandLinkButton_QBaseInputMethodEvent(QCommandLinkButton* self, QInputMethodEvent* param1);
    friend bool QCommandLinkButton_FocusNextPrevChild(QCommandLinkButton* self, bool next);
    friend bool QCommandLinkButton_QBaseFocusNextPrevChild(QCommandLinkButton* self, bool next);
    friend void QCommandLinkButton_ChildEvent(QCommandLinkButton* self, QChildEvent* event);
    friend void QCommandLinkButton_QBaseChildEvent(QCommandLinkButton* self, QChildEvent* event);
    friend void QCommandLinkButton_CustomEvent(QCommandLinkButton* self, QEvent* event);
    friend void QCommandLinkButton_QBaseCustomEvent(QCommandLinkButton* self, QEvent* event);
    friend void QCommandLinkButton_ConnectNotify(QCommandLinkButton* self, const QMetaMethod* signal);
    friend void QCommandLinkButton_QBaseConnectNotify(QCommandLinkButton* self, const QMetaMethod* signal);
    friend void QCommandLinkButton_DisconnectNotify(QCommandLinkButton* self, const QMetaMethod* signal);
    friend void QCommandLinkButton_QBaseDisconnectNotify(QCommandLinkButton* self, const QMetaMethod* signal);
    friend void QCommandLinkButton_UpdateMicroFocus(QCommandLinkButton* self);
    friend void QCommandLinkButton_QBaseUpdateMicroFocus(QCommandLinkButton* self);
    friend void QCommandLinkButton_Create(QCommandLinkButton* self);
    friend void QCommandLinkButton_QBaseCreate(QCommandLinkButton* self);
    friend void QCommandLinkButton_Destroy(QCommandLinkButton* self);
    friend void QCommandLinkButton_QBaseDestroy(QCommandLinkButton* self);
    friend bool QCommandLinkButton_FocusNextChild(QCommandLinkButton* self);
    friend bool QCommandLinkButton_QBaseFocusNextChild(QCommandLinkButton* self);
    friend bool QCommandLinkButton_FocusPreviousChild(QCommandLinkButton* self);
    friend bool QCommandLinkButton_QBaseFocusPreviousChild(QCommandLinkButton* self);
    friend QObject* QCommandLinkButton_Sender(const QCommandLinkButton* self);
    friend QObject* QCommandLinkButton_QBaseSender(const QCommandLinkButton* self);
    friend int QCommandLinkButton_SenderSignalIndex(const QCommandLinkButton* self);
    friend int QCommandLinkButton_QBaseSenderSignalIndex(const QCommandLinkButton* self);
    friend int QCommandLinkButton_Receivers(const QCommandLinkButton* self, const char* signal);
    friend int QCommandLinkButton_QBaseReceivers(const QCommandLinkButton* self, const char* signal);
    friend bool QCommandLinkButton_IsSignalConnected(const QCommandLinkButton* self, const QMetaMethod* signal);
    friend bool QCommandLinkButton_QBaseIsSignalConnected(const QCommandLinkButton* self, const QMetaMethod* signal);
    friend double QCommandLinkButton_GetDecodedMetricF(const QCommandLinkButton* self, int metricA, int metricB);
    friend double QCommandLinkButton_QBaseGetDecodedMetricF(const QCommandLinkButton* self, int metricA, int metricB);
};

#endif
