#pragma once
#ifndef SRCC_LIBVIRTUALQTOOLBOX_H
#define SRCC_LIBVIRTUALQTOOLBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QToolBox so that we can call protected methods
class VirtualQToolBox final : public QToolBox {

  public:
    // Virtual class boolean flag
    bool isVirtualQToolBox = true;

    // Virtual class public types (including callbacks)
    using QToolBox_Metacall_Callback = int (*)(QToolBox*, int, int, void**);
    using QToolBox_Event_Callback = bool (*)(QToolBox*, QEvent*);
    using QToolBox_ItemInserted_Callback = void (*)(QToolBox*, int);
    using QToolBox_ItemRemoved_Callback = void (*)(QToolBox*, int);
    using QToolBox_ShowEvent_Callback = void (*)(QToolBox*, QShowEvent*);
    using QToolBox_ChangeEvent_Callback = void (*)(QToolBox*, QEvent*);
    using QToolBox_SizeHint_Callback = QSize* (*)();
    using QToolBox_PaintEvent_Callback = void (*)(QToolBox*, QPaintEvent*);
    using QToolBox_InitStyleOption_Callback = void (*)(const QToolBox*, QStyleOptionFrame*);
    using QToolBox_DevType_Callback = int (*)();
    using QToolBox_SetVisible_Callback = void (*)(QToolBox*, bool);
    using QToolBox_MinimumSizeHint_Callback = QSize* (*)();
    using QToolBox_HeightForWidth_Callback = int (*)(const QToolBox*, int);
    using QToolBox_HasHeightForWidth_Callback = bool (*)();
    using QToolBox_PaintEngine_Callback = QPaintEngine* (*)();
    using QToolBox_MousePressEvent_Callback = void (*)(QToolBox*, QMouseEvent*);
    using QToolBox_MouseReleaseEvent_Callback = void (*)(QToolBox*, QMouseEvent*);
    using QToolBox_MouseDoubleClickEvent_Callback = void (*)(QToolBox*, QMouseEvent*);
    using QToolBox_MouseMoveEvent_Callback = void (*)(QToolBox*, QMouseEvent*);
    using QToolBox_WheelEvent_Callback = void (*)(QToolBox*, QWheelEvent*);
    using QToolBox_KeyPressEvent_Callback = void (*)(QToolBox*, QKeyEvent*);
    using QToolBox_KeyReleaseEvent_Callback = void (*)(QToolBox*, QKeyEvent*);
    using QToolBox_FocusInEvent_Callback = void (*)(QToolBox*, QFocusEvent*);
    using QToolBox_FocusOutEvent_Callback = void (*)(QToolBox*, QFocusEvent*);
    using QToolBox_EnterEvent_Callback = void (*)(QToolBox*, QEnterEvent*);
    using QToolBox_LeaveEvent_Callback = void (*)(QToolBox*, QEvent*);
    using QToolBox_MoveEvent_Callback = void (*)(QToolBox*, QMoveEvent*);
    using QToolBox_ResizeEvent_Callback = void (*)(QToolBox*, QResizeEvent*);
    using QToolBox_CloseEvent_Callback = void (*)(QToolBox*, QCloseEvent*);
    using QToolBox_ContextMenuEvent_Callback = void (*)(QToolBox*, QContextMenuEvent*);
    using QToolBox_TabletEvent_Callback = void (*)(QToolBox*, QTabletEvent*);
    using QToolBox_ActionEvent_Callback = void (*)(QToolBox*, QActionEvent*);
    using QToolBox_DragEnterEvent_Callback = void (*)(QToolBox*, QDragEnterEvent*);
    using QToolBox_DragMoveEvent_Callback = void (*)(QToolBox*, QDragMoveEvent*);
    using QToolBox_DragLeaveEvent_Callback = void (*)(QToolBox*, QDragLeaveEvent*);
    using QToolBox_DropEvent_Callback = void (*)(QToolBox*, QDropEvent*);
    using QToolBox_HideEvent_Callback = void (*)(QToolBox*, QHideEvent*);
    using QToolBox_NativeEvent_Callback = bool (*)(QToolBox*, libqt_string, void*, intptr_t*);
    using QToolBox_Metric_Callback = int (*)(const QToolBox*, int);
    using QToolBox_InitPainter_Callback = void (*)(const QToolBox*, QPainter*);
    using QToolBox_Redirected_Callback = QPaintDevice* (*)(const QToolBox*, QPoint*);
    using QToolBox_SharedPainter_Callback = QPainter* (*)();
    using QToolBox_InputMethodEvent_Callback = void (*)(QToolBox*, QInputMethodEvent*);
    using QToolBox_InputMethodQuery_Callback = QVariant* (*)(const QToolBox*, int);
    using QToolBox_FocusNextPrevChild_Callback = bool (*)(QToolBox*, bool);
    using QToolBox_EventFilter_Callback = bool (*)(QToolBox*, QObject*, QEvent*);
    using QToolBox_TimerEvent_Callback = void (*)(QToolBox*, QTimerEvent*);
    using QToolBox_ChildEvent_Callback = void (*)(QToolBox*, QChildEvent*);
    using QToolBox_CustomEvent_Callback = void (*)(QToolBox*, QEvent*);
    using QToolBox_ConnectNotify_Callback = void (*)(QToolBox*, QMetaMethod*);
    using QToolBox_DisconnectNotify_Callback = void (*)(QToolBox*, QMetaMethod*);
    using QToolBox_DrawFrame_Callback = void (*)(QToolBox*, QPainter*);
    using QToolBox_UpdateMicroFocus_Callback = void (*)();
    using QToolBox_Create_Callback = void (*)();
    using QToolBox_Destroy_Callback = void (*)();
    using QToolBox_FocusNextChild_Callback = bool (*)();
    using QToolBox_FocusPreviousChild_Callback = bool (*)();
    using QToolBox_Sender_Callback = QObject* (*)();
    using QToolBox_SenderSignalIndex_Callback = int (*)();
    using QToolBox_Receivers_Callback = int (*)(const QToolBox*, const char*);
    using QToolBox_IsSignalConnected_Callback = bool (*)(const QToolBox*, QMetaMethod*);

  protected:
    // Instance callback storage
    QToolBox_Metacall_Callback qtoolbox_metacall_callback = nullptr;
    QToolBox_Event_Callback qtoolbox_event_callback = nullptr;
    QToolBox_ItemInserted_Callback qtoolbox_iteminserted_callback = nullptr;
    QToolBox_ItemRemoved_Callback qtoolbox_itemremoved_callback = nullptr;
    QToolBox_ShowEvent_Callback qtoolbox_showevent_callback = nullptr;
    QToolBox_ChangeEvent_Callback qtoolbox_changeevent_callback = nullptr;
    QToolBox_SizeHint_Callback qtoolbox_sizehint_callback = nullptr;
    QToolBox_PaintEvent_Callback qtoolbox_paintevent_callback = nullptr;
    QToolBox_InitStyleOption_Callback qtoolbox_initstyleoption_callback = nullptr;
    QToolBox_DevType_Callback qtoolbox_devtype_callback = nullptr;
    QToolBox_SetVisible_Callback qtoolbox_setvisible_callback = nullptr;
    QToolBox_MinimumSizeHint_Callback qtoolbox_minimumsizehint_callback = nullptr;
    QToolBox_HeightForWidth_Callback qtoolbox_heightforwidth_callback = nullptr;
    QToolBox_HasHeightForWidth_Callback qtoolbox_hasheightforwidth_callback = nullptr;
    QToolBox_PaintEngine_Callback qtoolbox_paintengine_callback = nullptr;
    QToolBox_MousePressEvent_Callback qtoolbox_mousepressevent_callback = nullptr;
    QToolBox_MouseReleaseEvent_Callback qtoolbox_mousereleaseevent_callback = nullptr;
    QToolBox_MouseDoubleClickEvent_Callback qtoolbox_mousedoubleclickevent_callback = nullptr;
    QToolBox_MouseMoveEvent_Callback qtoolbox_mousemoveevent_callback = nullptr;
    QToolBox_WheelEvent_Callback qtoolbox_wheelevent_callback = nullptr;
    QToolBox_KeyPressEvent_Callback qtoolbox_keypressevent_callback = nullptr;
    QToolBox_KeyReleaseEvent_Callback qtoolbox_keyreleaseevent_callback = nullptr;
    QToolBox_FocusInEvent_Callback qtoolbox_focusinevent_callback = nullptr;
    QToolBox_FocusOutEvent_Callback qtoolbox_focusoutevent_callback = nullptr;
    QToolBox_EnterEvent_Callback qtoolbox_enterevent_callback = nullptr;
    QToolBox_LeaveEvent_Callback qtoolbox_leaveevent_callback = nullptr;
    QToolBox_MoveEvent_Callback qtoolbox_moveevent_callback = nullptr;
    QToolBox_ResizeEvent_Callback qtoolbox_resizeevent_callback = nullptr;
    QToolBox_CloseEvent_Callback qtoolbox_closeevent_callback = nullptr;
    QToolBox_ContextMenuEvent_Callback qtoolbox_contextmenuevent_callback = nullptr;
    QToolBox_TabletEvent_Callback qtoolbox_tabletevent_callback = nullptr;
    QToolBox_ActionEvent_Callback qtoolbox_actionevent_callback = nullptr;
    QToolBox_DragEnterEvent_Callback qtoolbox_dragenterevent_callback = nullptr;
    QToolBox_DragMoveEvent_Callback qtoolbox_dragmoveevent_callback = nullptr;
    QToolBox_DragLeaveEvent_Callback qtoolbox_dragleaveevent_callback = nullptr;
    QToolBox_DropEvent_Callback qtoolbox_dropevent_callback = nullptr;
    QToolBox_HideEvent_Callback qtoolbox_hideevent_callback = nullptr;
    QToolBox_NativeEvent_Callback qtoolbox_nativeevent_callback = nullptr;
    QToolBox_Metric_Callback qtoolbox_metric_callback = nullptr;
    QToolBox_InitPainter_Callback qtoolbox_initpainter_callback = nullptr;
    QToolBox_Redirected_Callback qtoolbox_redirected_callback = nullptr;
    QToolBox_SharedPainter_Callback qtoolbox_sharedpainter_callback = nullptr;
    QToolBox_InputMethodEvent_Callback qtoolbox_inputmethodevent_callback = nullptr;
    QToolBox_InputMethodQuery_Callback qtoolbox_inputmethodquery_callback = nullptr;
    QToolBox_FocusNextPrevChild_Callback qtoolbox_focusnextprevchild_callback = nullptr;
    QToolBox_EventFilter_Callback qtoolbox_eventfilter_callback = nullptr;
    QToolBox_TimerEvent_Callback qtoolbox_timerevent_callback = nullptr;
    QToolBox_ChildEvent_Callback qtoolbox_childevent_callback = nullptr;
    QToolBox_CustomEvent_Callback qtoolbox_customevent_callback = nullptr;
    QToolBox_ConnectNotify_Callback qtoolbox_connectnotify_callback = nullptr;
    QToolBox_DisconnectNotify_Callback qtoolbox_disconnectnotify_callback = nullptr;
    QToolBox_DrawFrame_Callback qtoolbox_drawframe_callback = nullptr;
    QToolBox_UpdateMicroFocus_Callback qtoolbox_updatemicrofocus_callback = nullptr;
    QToolBox_Create_Callback qtoolbox_create_callback = nullptr;
    QToolBox_Destroy_Callback qtoolbox_destroy_callback = nullptr;
    QToolBox_FocusNextChild_Callback qtoolbox_focusnextchild_callback = nullptr;
    QToolBox_FocusPreviousChild_Callback qtoolbox_focuspreviouschild_callback = nullptr;
    QToolBox_Sender_Callback qtoolbox_sender_callback = nullptr;
    QToolBox_SenderSignalIndex_Callback qtoolbox_sendersignalindex_callback = nullptr;
    QToolBox_Receivers_Callback qtoolbox_receivers_callback = nullptr;
    QToolBox_IsSignalConnected_Callback qtoolbox_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtoolbox_metacall_isbase = false;
    mutable bool qtoolbox_event_isbase = false;
    mutable bool qtoolbox_iteminserted_isbase = false;
    mutable bool qtoolbox_itemremoved_isbase = false;
    mutable bool qtoolbox_showevent_isbase = false;
    mutable bool qtoolbox_changeevent_isbase = false;
    mutable bool qtoolbox_sizehint_isbase = false;
    mutable bool qtoolbox_paintevent_isbase = false;
    mutable bool qtoolbox_initstyleoption_isbase = false;
    mutable bool qtoolbox_devtype_isbase = false;
    mutable bool qtoolbox_setvisible_isbase = false;
    mutable bool qtoolbox_minimumsizehint_isbase = false;
    mutable bool qtoolbox_heightforwidth_isbase = false;
    mutable bool qtoolbox_hasheightforwidth_isbase = false;
    mutable bool qtoolbox_paintengine_isbase = false;
    mutable bool qtoolbox_mousepressevent_isbase = false;
    mutable bool qtoolbox_mousereleaseevent_isbase = false;
    mutable bool qtoolbox_mousedoubleclickevent_isbase = false;
    mutable bool qtoolbox_mousemoveevent_isbase = false;
    mutable bool qtoolbox_wheelevent_isbase = false;
    mutable bool qtoolbox_keypressevent_isbase = false;
    mutable bool qtoolbox_keyreleaseevent_isbase = false;
    mutable bool qtoolbox_focusinevent_isbase = false;
    mutable bool qtoolbox_focusoutevent_isbase = false;
    mutable bool qtoolbox_enterevent_isbase = false;
    mutable bool qtoolbox_leaveevent_isbase = false;
    mutable bool qtoolbox_moveevent_isbase = false;
    mutable bool qtoolbox_resizeevent_isbase = false;
    mutable bool qtoolbox_closeevent_isbase = false;
    mutable bool qtoolbox_contextmenuevent_isbase = false;
    mutable bool qtoolbox_tabletevent_isbase = false;
    mutable bool qtoolbox_actionevent_isbase = false;
    mutable bool qtoolbox_dragenterevent_isbase = false;
    mutable bool qtoolbox_dragmoveevent_isbase = false;
    mutable bool qtoolbox_dragleaveevent_isbase = false;
    mutable bool qtoolbox_dropevent_isbase = false;
    mutable bool qtoolbox_hideevent_isbase = false;
    mutable bool qtoolbox_nativeevent_isbase = false;
    mutable bool qtoolbox_metric_isbase = false;
    mutable bool qtoolbox_initpainter_isbase = false;
    mutable bool qtoolbox_redirected_isbase = false;
    mutable bool qtoolbox_sharedpainter_isbase = false;
    mutable bool qtoolbox_inputmethodevent_isbase = false;
    mutable bool qtoolbox_inputmethodquery_isbase = false;
    mutable bool qtoolbox_focusnextprevchild_isbase = false;
    mutable bool qtoolbox_eventfilter_isbase = false;
    mutable bool qtoolbox_timerevent_isbase = false;
    mutable bool qtoolbox_childevent_isbase = false;
    mutable bool qtoolbox_customevent_isbase = false;
    mutable bool qtoolbox_connectnotify_isbase = false;
    mutable bool qtoolbox_disconnectnotify_isbase = false;
    mutable bool qtoolbox_drawframe_isbase = false;
    mutable bool qtoolbox_updatemicrofocus_isbase = false;
    mutable bool qtoolbox_create_isbase = false;
    mutable bool qtoolbox_destroy_isbase = false;
    mutable bool qtoolbox_focusnextchild_isbase = false;
    mutable bool qtoolbox_focuspreviouschild_isbase = false;
    mutable bool qtoolbox_sender_isbase = false;
    mutable bool qtoolbox_sendersignalindex_isbase = false;
    mutable bool qtoolbox_receivers_isbase = false;
    mutable bool qtoolbox_issignalconnected_isbase = false;

  public:
    VirtualQToolBox(QWidget* parent) : QToolBox(parent){};
    VirtualQToolBox() : QToolBox(){};
    VirtualQToolBox(QWidget* parent, Qt::WindowFlags f) : QToolBox(parent, f){};

    ~VirtualQToolBox() {
        qtoolbox_metacall_callback = nullptr;
        qtoolbox_event_callback = nullptr;
        qtoolbox_iteminserted_callback = nullptr;
        qtoolbox_itemremoved_callback = nullptr;
        qtoolbox_showevent_callback = nullptr;
        qtoolbox_changeevent_callback = nullptr;
        qtoolbox_sizehint_callback = nullptr;
        qtoolbox_paintevent_callback = nullptr;
        qtoolbox_initstyleoption_callback = nullptr;
        qtoolbox_devtype_callback = nullptr;
        qtoolbox_setvisible_callback = nullptr;
        qtoolbox_minimumsizehint_callback = nullptr;
        qtoolbox_heightforwidth_callback = nullptr;
        qtoolbox_hasheightforwidth_callback = nullptr;
        qtoolbox_paintengine_callback = nullptr;
        qtoolbox_mousepressevent_callback = nullptr;
        qtoolbox_mousereleaseevent_callback = nullptr;
        qtoolbox_mousedoubleclickevent_callback = nullptr;
        qtoolbox_mousemoveevent_callback = nullptr;
        qtoolbox_wheelevent_callback = nullptr;
        qtoolbox_keypressevent_callback = nullptr;
        qtoolbox_keyreleaseevent_callback = nullptr;
        qtoolbox_focusinevent_callback = nullptr;
        qtoolbox_focusoutevent_callback = nullptr;
        qtoolbox_enterevent_callback = nullptr;
        qtoolbox_leaveevent_callback = nullptr;
        qtoolbox_moveevent_callback = nullptr;
        qtoolbox_resizeevent_callback = nullptr;
        qtoolbox_closeevent_callback = nullptr;
        qtoolbox_contextmenuevent_callback = nullptr;
        qtoolbox_tabletevent_callback = nullptr;
        qtoolbox_actionevent_callback = nullptr;
        qtoolbox_dragenterevent_callback = nullptr;
        qtoolbox_dragmoveevent_callback = nullptr;
        qtoolbox_dragleaveevent_callback = nullptr;
        qtoolbox_dropevent_callback = nullptr;
        qtoolbox_hideevent_callback = nullptr;
        qtoolbox_nativeevent_callback = nullptr;
        qtoolbox_metric_callback = nullptr;
        qtoolbox_initpainter_callback = nullptr;
        qtoolbox_redirected_callback = nullptr;
        qtoolbox_sharedpainter_callback = nullptr;
        qtoolbox_inputmethodevent_callback = nullptr;
        qtoolbox_inputmethodquery_callback = nullptr;
        qtoolbox_focusnextprevchild_callback = nullptr;
        qtoolbox_eventfilter_callback = nullptr;
        qtoolbox_timerevent_callback = nullptr;
        qtoolbox_childevent_callback = nullptr;
        qtoolbox_customevent_callback = nullptr;
        qtoolbox_connectnotify_callback = nullptr;
        qtoolbox_disconnectnotify_callback = nullptr;
        qtoolbox_drawframe_callback = nullptr;
        qtoolbox_updatemicrofocus_callback = nullptr;
        qtoolbox_create_callback = nullptr;
        qtoolbox_destroy_callback = nullptr;
        qtoolbox_focusnextchild_callback = nullptr;
        qtoolbox_focuspreviouschild_callback = nullptr;
        qtoolbox_sender_callback = nullptr;
        qtoolbox_sendersignalindex_callback = nullptr;
        qtoolbox_receivers_callback = nullptr;
        qtoolbox_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQToolBox_Metacall_Callback(QToolBox_Metacall_Callback cb) { qtoolbox_metacall_callback = cb; }
    inline void setQToolBox_Event_Callback(QToolBox_Event_Callback cb) { qtoolbox_event_callback = cb; }
    inline void setQToolBox_ItemInserted_Callback(QToolBox_ItemInserted_Callback cb) { qtoolbox_iteminserted_callback = cb; }
    inline void setQToolBox_ItemRemoved_Callback(QToolBox_ItemRemoved_Callback cb) { qtoolbox_itemremoved_callback = cb; }
    inline void setQToolBox_ShowEvent_Callback(QToolBox_ShowEvent_Callback cb) { qtoolbox_showevent_callback = cb; }
    inline void setQToolBox_ChangeEvent_Callback(QToolBox_ChangeEvent_Callback cb) { qtoolbox_changeevent_callback = cb; }
    inline void setQToolBox_SizeHint_Callback(QToolBox_SizeHint_Callback cb) { qtoolbox_sizehint_callback = cb; }
    inline void setQToolBox_PaintEvent_Callback(QToolBox_PaintEvent_Callback cb) { qtoolbox_paintevent_callback = cb; }
    inline void setQToolBox_InitStyleOption_Callback(QToolBox_InitStyleOption_Callback cb) { qtoolbox_initstyleoption_callback = cb; }
    inline void setQToolBox_DevType_Callback(QToolBox_DevType_Callback cb) { qtoolbox_devtype_callback = cb; }
    inline void setQToolBox_SetVisible_Callback(QToolBox_SetVisible_Callback cb) { qtoolbox_setvisible_callback = cb; }
    inline void setQToolBox_MinimumSizeHint_Callback(QToolBox_MinimumSizeHint_Callback cb) { qtoolbox_minimumsizehint_callback = cb; }
    inline void setQToolBox_HeightForWidth_Callback(QToolBox_HeightForWidth_Callback cb) { qtoolbox_heightforwidth_callback = cb; }
    inline void setQToolBox_HasHeightForWidth_Callback(QToolBox_HasHeightForWidth_Callback cb) { qtoolbox_hasheightforwidth_callback = cb; }
    inline void setQToolBox_PaintEngine_Callback(QToolBox_PaintEngine_Callback cb) { qtoolbox_paintengine_callback = cb; }
    inline void setQToolBox_MousePressEvent_Callback(QToolBox_MousePressEvent_Callback cb) { qtoolbox_mousepressevent_callback = cb; }
    inline void setQToolBox_MouseReleaseEvent_Callback(QToolBox_MouseReleaseEvent_Callback cb) { qtoolbox_mousereleaseevent_callback = cb; }
    inline void setQToolBox_MouseDoubleClickEvent_Callback(QToolBox_MouseDoubleClickEvent_Callback cb) { qtoolbox_mousedoubleclickevent_callback = cb; }
    inline void setQToolBox_MouseMoveEvent_Callback(QToolBox_MouseMoveEvent_Callback cb) { qtoolbox_mousemoveevent_callback = cb; }
    inline void setQToolBox_WheelEvent_Callback(QToolBox_WheelEvent_Callback cb) { qtoolbox_wheelevent_callback = cb; }
    inline void setQToolBox_KeyPressEvent_Callback(QToolBox_KeyPressEvent_Callback cb) { qtoolbox_keypressevent_callback = cb; }
    inline void setQToolBox_KeyReleaseEvent_Callback(QToolBox_KeyReleaseEvent_Callback cb) { qtoolbox_keyreleaseevent_callback = cb; }
    inline void setQToolBox_FocusInEvent_Callback(QToolBox_FocusInEvent_Callback cb) { qtoolbox_focusinevent_callback = cb; }
    inline void setQToolBox_FocusOutEvent_Callback(QToolBox_FocusOutEvent_Callback cb) { qtoolbox_focusoutevent_callback = cb; }
    inline void setQToolBox_EnterEvent_Callback(QToolBox_EnterEvent_Callback cb) { qtoolbox_enterevent_callback = cb; }
    inline void setQToolBox_LeaveEvent_Callback(QToolBox_LeaveEvent_Callback cb) { qtoolbox_leaveevent_callback = cb; }
    inline void setQToolBox_MoveEvent_Callback(QToolBox_MoveEvent_Callback cb) { qtoolbox_moveevent_callback = cb; }
    inline void setQToolBox_ResizeEvent_Callback(QToolBox_ResizeEvent_Callback cb) { qtoolbox_resizeevent_callback = cb; }
    inline void setQToolBox_CloseEvent_Callback(QToolBox_CloseEvent_Callback cb) { qtoolbox_closeevent_callback = cb; }
    inline void setQToolBox_ContextMenuEvent_Callback(QToolBox_ContextMenuEvent_Callback cb) { qtoolbox_contextmenuevent_callback = cb; }
    inline void setQToolBox_TabletEvent_Callback(QToolBox_TabletEvent_Callback cb) { qtoolbox_tabletevent_callback = cb; }
    inline void setQToolBox_ActionEvent_Callback(QToolBox_ActionEvent_Callback cb) { qtoolbox_actionevent_callback = cb; }
    inline void setQToolBox_DragEnterEvent_Callback(QToolBox_DragEnterEvent_Callback cb) { qtoolbox_dragenterevent_callback = cb; }
    inline void setQToolBox_DragMoveEvent_Callback(QToolBox_DragMoveEvent_Callback cb) { qtoolbox_dragmoveevent_callback = cb; }
    inline void setQToolBox_DragLeaveEvent_Callback(QToolBox_DragLeaveEvent_Callback cb) { qtoolbox_dragleaveevent_callback = cb; }
    inline void setQToolBox_DropEvent_Callback(QToolBox_DropEvent_Callback cb) { qtoolbox_dropevent_callback = cb; }
    inline void setQToolBox_HideEvent_Callback(QToolBox_HideEvent_Callback cb) { qtoolbox_hideevent_callback = cb; }
    inline void setQToolBox_NativeEvent_Callback(QToolBox_NativeEvent_Callback cb) { qtoolbox_nativeevent_callback = cb; }
    inline void setQToolBox_Metric_Callback(QToolBox_Metric_Callback cb) { qtoolbox_metric_callback = cb; }
    inline void setQToolBox_InitPainter_Callback(QToolBox_InitPainter_Callback cb) { qtoolbox_initpainter_callback = cb; }
    inline void setQToolBox_Redirected_Callback(QToolBox_Redirected_Callback cb) { qtoolbox_redirected_callback = cb; }
    inline void setQToolBox_SharedPainter_Callback(QToolBox_SharedPainter_Callback cb) { qtoolbox_sharedpainter_callback = cb; }
    inline void setQToolBox_InputMethodEvent_Callback(QToolBox_InputMethodEvent_Callback cb) { qtoolbox_inputmethodevent_callback = cb; }
    inline void setQToolBox_InputMethodQuery_Callback(QToolBox_InputMethodQuery_Callback cb) { qtoolbox_inputmethodquery_callback = cb; }
    inline void setQToolBox_FocusNextPrevChild_Callback(QToolBox_FocusNextPrevChild_Callback cb) { qtoolbox_focusnextprevchild_callback = cb; }
    inline void setQToolBox_EventFilter_Callback(QToolBox_EventFilter_Callback cb) { qtoolbox_eventfilter_callback = cb; }
    inline void setQToolBox_TimerEvent_Callback(QToolBox_TimerEvent_Callback cb) { qtoolbox_timerevent_callback = cb; }
    inline void setQToolBox_ChildEvent_Callback(QToolBox_ChildEvent_Callback cb) { qtoolbox_childevent_callback = cb; }
    inline void setQToolBox_CustomEvent_Callback(QToolBox_CustomEvent_Callback cb) { qtoolbox_customevent_callback = cb; }
    inline void setQToolBox_ConnectNotify_Callback(QToolBox_ConnectNotify_Callback cb) { qtoolbox_connectnotify_callback = cb; }
    inline void setQToolBox_DisconnectNotify_Callback(QToolBox_DisconnectNotify_Callback cb) { qtoolbox_disconnectnotify_callback = cb; }
    inline void setQToolBox_DrawFrame_Callback(QToolBox_DrawFrame_Callback cb) { qtoolbox_drawframe_callback = cb; }
    inline void setQToolBox_UpdateMicroFocus_Callback(QToolBox_UpdateMicroFocus_Callback cb) { qtoolbox_updatemicrofocus_callback = cb; }
    inline void setQToolBox_Create_Callback(QToolBox_Create_Callback cb) { qtoolbox_create_callback = cb; }
    inline void setQToolBox_Destroy_Callback(QToolBox_Destroy_Callback cb) { qtoolbox_destroy_callback = cb; }
    inline void setQToolBox_FocusNextChild_Callback(QToolBox_FocusNextChild_Callback cb) { qtoolbox_focusnextchild_callback = cb; }
    inline void setQToolBox_FocusPreviousChild_Callback(QToolBox_FocusPreviousChild_Callback cb) { qtoolbox_focuspreviouschild_callback = cb; }
    inline void setQToolBox_Sender_Callback(QToolBox_Sender_Callback cb) { qtoolbox_sender_callback = cb; }
    inline void setQToolBox_SenderSignalIndex_Callback(QToolBox_SenderSignalIndex_Callback cb) { qtoolbox_sendersignalindex_callback = cb; }
    inline void setQToolBox_Receivers_Callback(QToolBox_Receivers_Callback cb) { qtoolbox_receivers_callback = cb; }
    inline void setQToolBox_IsSignalConnected_Callback(QToolBox_IsSignalConnected_Callback cb) { qtoolbox_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQToolBox_Metacall_IsBase(bool value) const { qtoolbox_metacall_isbase = value; }
    inline void setQToolBox_Event_IsBase(bool value) const { qtoolbox_event_isbase = value; }
    inline void setQToolBox_ItemInserted_IsBase(bool value) const { qtoolbox_iteminserted_isbase = value; }
    inline void setQToolBox_ItemRemoved_IsBase(bool value) const { qtoolbox_itemremoved_isbase = value; }
    inline void setQToolBox_ShowEvent_IsBase(bool value) const { qtoolbox_showevent_isbase = value; }
    inline void setQToolBox_ChangeEvent_IsBase(bool value) const { qtoolbox_changeevent_isbase = value; }
    inline void setQToolBox_SizeHint_IsBase(bool value) const { qtoolbox_sizehint_isbase = value; }
    inline void setQToolBox_PaintEvent_IsBase(bool value) const { qtoolbox_paintevent_isbase = value; }
    inline void setQToolBox_InitStyleOption_IsBase(bool value) const { qtoolbox_initstyleoption_isbase = value; }
    inline void setQToolBox_DevType_IsBase(bool value) const { qtoolbox_devtype_isbase = value; }
    inline void setQToolBox_SetVisible_IsBase(bool value) const { qtoolbox_setvisible_isbase = value; }
    inline void setQToolBox_MinimumSizeHint_IsBase(bool value) const { qtoolbox_minimumsizehint_isbase = value; }
    inline void setQToolBox_HeightForWidth_IsBase(bool value) const { qtoolbox_heightforwidth_isbase = value; }
    inline void setQToolBox_HasHeightForWidth_IsBase(bool value) const { qtoolbox_hasheightforwidth_isbase = value; }
    inline void setQToolBox_PaintEngine_IsBase(bool value) const { qtoolbox_paintengine_isbase = value; }
    inline void setQToolBox_MousePressEvent_IsBase(bool value) const { qtoolbox_mousepressevent_isbase = value; }
    inline void setQToolBox_MouseReleaseEvent_IsBase(bool value) const { qtoolbox_mousereleaseevent_isbase = value; }
    inline void setQToolBox_MouseDoubleClickEvent_IsBase(bool value) const { qtoolbox_mousedoubleclickevent_isbase = value; }
    inline void setQToolBox_MouseMoveEvent_IsBase(bool value) const { qtoolbox_mousemoveevent_isbase = value; }
    inline void setQToolBox_WheelEvent_IsBase(bool value) const { qtoolbox_wheelevent_isbase = value; }
    inline void setQToolBox_KeyPressEvent_IsBase(bool value) const { qtoolbox_keypressevent_isbase = value; }
    inline void setQToolBox_KeyReleaseEvent_IsBase(bool value) const { qtoolbox_keyreleaseevent_isbase = value; }
    inline void setQToolBox_FocusInEvent_IsBase(bool value) const { qtoolbox_focusinevent_isbase = value; }
    inline void setQToolBox_FocusOutEvent_IsBase(bool value) const { qtoolbox_focusoutevent_isbase = value; }
    inline void setQToolBox_EnterEvent_IsBase(bool value) const { qtoolbox_enterevent_isbase = value; }
    inline void setQToolBox_LeaveEvent_IsBase(bool value) const { qtoolbox_leaveevent_isbase = value; }
    inline void setQToolBox_MoveEvent_IsBase(bool value) const { qtoolbox_moveevent_isbase = value; }
    inline void setQToolBox_ResizeEvent_IsBase(bool value) const { qtoolbox_resizeevent_isbase = value; }
    inline void setQToolBox_CloseEvent_IsBase(bool value) const { qtoolbox_closeevent_isbase = value; }
    inline void setQToolBox_ContextMenuEvent_IsBase(bool value) const { qtoolbox_contextmenuevent_isbase = value; }
    inline void setQToolBox_TabletEvent_IsBase(bool value) const { qtoolbox_tabletevent_isbase = value; }
    inline void setQToolBox_ActionEvent_IsBase(bool value) const { qtoolbox_actionevent_isbase = value; }
    inline void setQToolBox_DragEnterEvent_IsBase(bool value) const { qtoolbox_dragenterevent_isbase = value; }
    inline void setQToolBox_DragMoveEvent_IsBase(bool value) const { qtoolbox_dragmoveevent_isbase = value; }
    inline void setQToolBox_DragLeaveEvent_IsBase(bool value) const { qtoolbox_dragleaveevent_isbase = value; }
    inline void setQToolBox_DropEvent_IsBase(bool value) const { qtoolbox_dropevent_isbase = value; }
    inline void setQToolBox_HideEvent_IsBase(bool value) const { qtoolbox_hideevent_isbase = value; }
    inline void setQToolBox_NativeEvent_IsBase(bool value) const { qtoolbox_nativeevent_isbase = value; }
    inline void setQToolBox_Metric_IsBase(bool value) const { qtoolbox_metric_isbase = value; }
    inline void setQToolBox_InitPainter_IsBase(bool value) const { qtoolbox_initpainter_isbase = value; }
    inline void setQToolBox_Redirected_IsBase(bool value) const { qtoolbox_redirected_isbase = value; }
    inline void setQToolBox_SharedPainter_IsBase(bool value) const { qtoolbox_sharedpainter_isbase = value; }
    inline void setQToolBox_InputMethodEvent_IsBase(bool value) const { qtoolbox_inputmethodevent_isbase = value; }
    inline void setQToolBox_InputMethodQuery_IsBase(bool value) const { qtoolbox_inputmethodquery_isbase = value; }
    inline void setQToolBox_FocusNextPrevChild_IsBase(bool value) const { qtoolbox_focusnextprevchild_isbase = value; }
    inline void setQToolBox_EventFilter_IsBase(bool value) const { qtoolbox_eventfilter_isbase = value; }
    inline void setQToolBox_TimerEvent_IsBase(bool value) const { qtoolbox_timerevent_isbase = value; }
    inline void setQToolBox_ChildEvent_IsBase(bool value) const { qtoolbox_childevent_isbase = value; }
    inline void setQToolBox_CustomEvent_IsBase(bool value) const { qtoolbox_customevent_isbase = value; }
    inline void setQToolBox_ConnectNotify_IsBase(bool value) const { qtoolbox_connectnotify_isbase = value; }
    inline void setQToolBox_DisconnectNotify_IsBase(bool value) const { qtoolbox_disconnectnotify_isbase = value; }
    inline void setQToolBox_DrawFrame_IsBase(bool value) const { qtoolbox_drawframe_isbase = value; }
    inline void setQToolBox_UpdateMicroFocus_IsBase(bool value) const { qtoolbox_updatemicrofocus_isbase = value; }
    inline void setQToolBox_Create_IsBase(bool value) const { qtoolbox_create_isbase = value; }
    inline void setQToolBox_Destroy_IsBase(bool value) const { qtoolbox_destroy_isbase = value; }
    inline void setQToolBox_FocusNextChild_IsBase(bool value) const { qtoolbox_focusnextchild_isbase = value; }
    inline void setQToolBox_FocusPreviousChild_IsBase(bool value) const { qtoolbox_focuspreviouschild_isbase = value; }
    inline void setQToolBox_Sender_IsBase(bool value) const { qtoolbox_sender_isbase = value; }
    inline void setQToolBox_SenderSignalIndex_IsBase(bool value) const { qtoolbox_sendersignalindex_isbase = value; }
    inline void setQToolBox_Receivers_IsBase(bool value) const { qtoolbox_receivers_isbase = value; }
    inline void setQToolBox_IsSignalConnected_IsBase(bool value) const { qtoolbox_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtoolbox_metacall_isbase) {
            qtoolbox_metacall_isbase = false;
            return QToolBox::qt_metacall(param1, param2, param3);
        } else if (qtoolbox_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qtoolbox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QToolBox::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qtoolbox_event_isbase) {
            qtoolbox_event_isbase = false;
            return QToolBox::event(e);
        } else if (qtoolbox_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = qtoolbox_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QToolBox::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void itemInserted(int index) override {
        if (qtoolbox_iteminserted_isbase) {
            qtoolbox_iteminserted_isbase = false;
            QToolBox::itemInserted(index);
        } else if (qtoolbox_iteminserted_callback != nullptr) {
            int cbval1 = index;

            qtoolbox_iteminserted_callback(this, cbval1);
        } else {
            QToolBox::itemInserted(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void itemRemoved(int index) override {
        if (qtoolbox_itemremoved_isbase) {
            qtoolbox_itemremoved_isbase = false;
            QToolBox::itemRemoved(index);
        } else if (qtoolbox_itemremoved_callback != nullptr) {
            int cbval1 = index;

            qtoolbox_itemremoved_callback(this, cbval1);
        } else {
            QToolBox::itemRemoved(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (qtoolbox_showevent_isbase) {
            qtoolbox_showevent_isbase = false;
            QToolBox::showEvent(e);
        } else if (qtoolbox_showevent_callback != nullptr) {
            QShowEvent* cbval1 = e;

            qtoolbox_showevent_callback(this, cbval1);
        } else {
            QToolBox::showEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qtoolbox_changeevent_isbase) {
            qtoolbox_changeevent_isbase = false;
            QToolBox::changeEvent(param1);
        } else if (qtoolbox_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            qtoolbox_changeevent_callback(this, cbval1);
        } else {
            QToolBox::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtoolbox_sizehint_isbase) {
            qtoolbox_sizehint_isbase = false;
            return QToolBox::sizeHint();
        } else if (qtoolbox_sizehint_callback != nullptr) {
            QSize* callback_ret = qtoolbox_sizehint_callback();
            return *callback_ret;
        } else {
            return QToolBox::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qtoolbox_paintevent_isbase) {
            qtoolbox_paintevent_isbase = false;
            QToolBox::paintEvent(param1);
        } else if (qtoolbox_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            qtoolbox_paintevent_callback(this, cbval1);
        } else {
            QToolBox::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qtoolbox_initstyleoption_isbase) {
            qtoolbox_initstyleoption_isbase = false;
            QToolBox::initStyleOption(option);
        } else if (qtoolbox_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            qtoolbox_initstyleoption_callback(this, cbval1);
        } else {
            QToolBox::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtoolbox_devtype_isbase) {
            qtoolbox_devtype_isbase = false;
            return QToolBox::devType();
        } else if (qtoolbox_devtype_callback != nullptr) {
            int callback_ret = qtoolbox_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QToolBox::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtoolbox_setvisible_isbase) {
            qtoolbox_setvisible_isbase = false;
            QToolBox::setVisible(visible);
        } else if (qtoolbox_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            qtoolbox_setvisible_callback(this, cbval1);
        } else {
            QToolBox::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtoolbox_minimumsizehint_isbase) {
            qtoolbox_minimumsizehint_isbase = false;
            return QToolBox::minimumSizeHint();
        } else if (qtoolbox_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = qtoolbox_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return QToolBox::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtoolbox_heightforwidth_isbase) {
            qtoolbox_heightforwidth_isbase = false;
            return QToolBox::heightForWidth(param1);
        } else if (qtoolbox_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = qtoolbox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QToolBox::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtoolbox_hasheightforwidth_isbase) {
            qtoolbox_hasheightforwidth_isbase = false;
            return QToolBox::hasHeightForWidth();
        } else if (qtoolbox_hasheightforwidth_callback != nullptr) {
            bool callback_ret = qtoolbox_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return QToolBox::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtoolbox_paintengine_isbase) {
            qtoolbox_paintengine_isbase = false;
            return QToolBox::paintEngine();
        } else if (qtoolbox_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = qtoolbox_paintengine_callback();
            return callback_ret;
        } else {
            return QToolBox::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtoolbox_mousepressevent_isbase) {
            qtoolbox_mousepressevent_isbase = false;
            QToolBox::mousePressEvent(event);
        } else if (qtoolbox_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qtoolbox_mousepressevent_callback(this, cbval1);
        } else {
            QToolBox::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtoolbox_mousereleaseevent_isbase) {
            qtoolbox_mousereleaseevent_isbase = false;
            QToolBox::mouseReleaseEvent(event);
        } else if (qtoolbox_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qtoolbox_mousereleaseevent_callback(this, cbval1);
        } else {
            QToolBox::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtoolbox_mousedoubleclickevent_isbase) {
            qtoolbox_mousedoubleclickevent_isbase = false;
            QToolBox::mouseDoubleClickEvent(event);
        } else if (qtoolbox_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qtoolbox_mousedoubleclickevent_callback(this, cbval1);
        } else {
            QToolBox::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtoolbox_mousemoveevent_isbase) {
            qtoolbox_mousemoveevent_isbase = false;
            QToolBox::mouseMoveEvent(event);
        } else if (qtoolbox_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            qtoolbox_mousemoveevent_callback(this, cbval1);
        } else {
            QToolBox::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qtoolbox_wheelevent_isbase) {
            qtoolbox_wheelevent_isbase = false;
            QToolBox::wheelEvent(event);
        } else if (qtoolbox_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            qtoolbox_wheelevent_callback(this, cbval1);
        } else {
            QToolBox::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qtoolbox_keypressevent_isbase) {
            qtoolbox_keypressevent_isbase = false;
            QToolBox::keyPressEvent(event);
        } else if (qtoolbox_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qtoolbox_keypressevent_callback(this, cbval1);
        } else {
            QToolBox::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtoolbox_keyreleaseevent_isbase) {
            qtoolbox_keyreleaseevent_isbase = false;
            QToolBox::keyReleaseEvent(event);
        } else if (qtoolbox_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            qtoolbox_keyreleaseevent_callback(this, cbval1);
        } else {
            QToolBox::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtoolbox_focusinevent_isbase) {
            qtoolbox_focusinevent_isbase = false;
            QToolBox::focusInEvent(event);
        } else if (qtoolbox_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qtoolbox_focusinevent_callback(this, cbval1);
        } else {
            QToolBox::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtoolbox_focusoutevent_isbase) {
            qtoolbox_focusoutevent_isbase = false;
            QToolBox::focusOutEvent(event);
        } else if (qtoolbox_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            qtoolbox_focusoutevent_callback(this, cbval1);
        } else {
            QToolBox::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtoolbox_enterevent_isbase) {
            qtoolbox_enterevent_isbase = false;
            QToolBox::enterEvent(event);
        } else if (qtoolbox_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            qtoolbox_enterevent_callback(this, cbval1);
        } else {
            QToolBox::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtoolbox_leaveevent_isbase) {
            qtoolbox_leaveevent_isbase = false;
            QToolBox::leaveEvent(event);
        } else if (qtoolbox_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qtoolbox_leaveevent_callback(this, cbval1);
        } else {
            QToolBox::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtoolbox_moveevent_isbase) {
            qtoolbox_moveevent_isbase = false;
            QToolBox::moveEvent(event);
        } else if (qtoolbox_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            qtoolbox_moveevent_callback(this, cbval1);
        } else {
            QToolBox::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qtoolbox_resizeevent_isbase) {
            qtoolbox_resizeevent_isbase = false;
            QToolBox::resizeEvent(event);
        } else if (qtoolbox_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            qtoolbox_resizeevent_callback(this, cbval1);
        } else {
            QToolBox::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtoolbox_closeevent_isbase) {
            qtoolbox_closeevent_isbase = false;
            QToolBox::closeEvent(event);
        } else if (qtoolbox_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            qtoolbox_closeevent_callback(this, cbval1);
        } else {
            QToolBox::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qtoolbox_contextmenuevent_isbase) {
            qtoolbox_contextmenuevent_isbase = false;
            QToolBox::contextMenuEvent(event);
        } else if (qtoolbox_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            qtoolbox_contextmenuevent_callback(this, cbval1);
        } else {
            QToolBox::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtoolbox_tabletevent_isbase) {
            qtoolbox_tabletevent_isbase = false;
            QToolBox::tabletEvent(event);
        } else if (qtoolbox_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            qtoolbox_tabletevent_callback(this, cbval1);
        } else {
            QToolBox::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtoolbox_actionevent_isbase) {
            qtoolbox_actionevent_isbase = false;
            QToolBox::actionEvent(event);
        } else if (qtoolbox_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            qtoolbox_actionevent_callback(this, cbval1);
        } else {
            QToolBox::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtoolbox_dragenterevent_isbase) {
            qtoolbox_dragenterevent_isbase = false;
            QToolBox::dragEnterEvent(event);
        } else if (qtoolbox_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            qtoolbox_dragenterevent_callback(this, cbval1);
        } else {
            QToolBox::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtoolbox_dragmoveevent_isbase) {
            qtoolbox_dragmoveevent_isbase = false;
            QToolBox::dragMoveEvent(event);
        } else if (qtoolbox_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            qtoolbox_dragmoveevent_callback(this, cbval1);
        } else {
            QToolBox::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtoolbox_dragleaveevent_isbase) {
            qtoolbox_dragleaveevent_isbase = false;
            QToolBox::dragLeaveEvent(event);
        } else if (qtoolbox_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            qtoolbox_dragleaveevent_callback(this, cbval1);
        } else {
            QToolBox::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtoolbox_dropevent_isbase) {
            qtoolbox_dropevent_isbase = false;
            QToolBox::dropEvent(event);
        } else if (qtoolbox_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            qtoolbox_dropevent_callback(this, cbval1);
        } else {
            QToolBox::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtoolbox_hideevent_isbase) {
            qtoolbox_hideevent_isbase = false;
            QToolBox::hideEvent(event);
        } else if (qtoolbox_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            qtoolbox_hideevent_callback(this, cbval1);
        } else {
            QToolBox::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtoolbox_nativeevent_isbase) {
            qtoolbox_nativeevent_isbase = false;
            return QToolBox::nativeEvent(eventType, message, result);
        } else if (qtoolbox_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc((eventType_str.len + 1) * sizeof(char)));
            memcpy(eventType_str.data, eventType_qb.data(), eventType_str.len);
            eventType_str.data[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = qtoolbox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QToolBox::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtoolbox_metric_isbase) {
            qtoolbox_metric_isbase = false;
            return QToolBox::metric(param1);
        } else if (qtoolbox_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = qtoolbox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QToolBox::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtoolbox_initpainter_isbase) {
            qtoolbox_initpainter_isbase = false;
            QToolBox::initPainter(painter);
        } else if (qtoolbox_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            qtoolbox_initpainter_callback(this, cbval1);
        } else {
            QToolBox::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtoolbox_redirected_isbase) {
            qtoolbox_redirected_isbase = false;
            return QToolBox::redirected(offset);
        } else if (qtoolbox_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = qtoolbox_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QToolBox::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtoolbox_sharedpainter_isbase) {
            qtoolbox_sharedpainter_isbase = false;
            return QToolBox::sharedPainter();
        } else if (qtoolbox_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = qtoolbox_sharedpainter_callback();
            return callback_ret;
        } else {
            return QToolBox::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qtoolbox_inputmethodevent_isbase) {
            qtoolbox_inputmethodevent_isbase = false;
            QToolBox::inputMethodEvent(param1);
        } else if (qtoolbox_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            qtoolbox_inputmethodevent_callback(this, cbval1);
        } else {
            QToolBox::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qtoolbox_inputmethodquery_isbase) {
            qtoolbox_inputmethodquery_isbase = false;
            return QToolBox::inputMethodQuery(param1);
        } else if (qtoolbox_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = qtoolbox_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QToolBox::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtoolbox_focusnextprevchild_isbase) {
            qtoolbox_focusnextprevchild_isbase = false;
            return QToolBox::focusNextPrevChild(next);
        } else if (qtoolbox_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = qtoolbox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return QToolBox::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtoolbox_eventfilter_isbase) {
            qtoolbox_eventfilter_isbase = false;
            return QToolBox::eventFilter(watched, event);
        } else if (qtoolbox_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qtoolbox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QToolBox::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtoolbox_timerevent_isbase) {
            qtoolbox_timerevent_isbase = false;
            QToolBox::timerEvent(event);
        } else if (qtoolbox_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qtoolbox_timerevent_callback(this, cbval1);
        } else {
            QToolBox::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtoolbox_childevent_isbase) {
            qtoolbox_childevent_isbase = false;
            QToolBox::childEvent(event);
        } else if (qtoolbox_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qtoolbox_childevent_callback(this, cbval1);
        } else {
            QToolBox::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtoolbox_customevent_isbase) {
            qtoolbox_customevent_isbase = false;
            QToolBox::customEvent(event);
        } else if (qtoolbox_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qtoolbox_customevent_callback(this, cbval1);
        } else {
            QToolBox::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtoolbox_connectnotify_isbase) {
            qtoolbox_connectnotify_isbase = false;
            QToolBox::connectNotify(signal);
        } else if (qtoolbox_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtoolbox_connectnotify_callback(this, cbval1);
        } else {
            QToolBox::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtoolbox_disconnectnotify_isbase) {
            qtoolbox_disconnectnotify_isbase = false;
            QToolBox::disconnectNotify(signal);
        } else if (qtoolbox_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtoolbox_disconnectnotify_callback(this, cbval1);
        } else {
            QToolBox::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qtoolbox_drawframe_isbase) {
            qtoolbox_drawframe_isbase = false;
            QToolBox::drawFrame(param1);
        } else if (qtoolbox_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            qtoolbox_drawframe_callback(this, cbval1);
        } else {
            QToolBox::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qtoolbox_updatemicrofocus_isbase) {
            qtoolbox_updatemicrofocus_isbase = false;
            QToolBox::updateMicroFocus();
        } else if (qtoolbox_updatemicrofocus_callback != nullptr) {
            qtoolbox_updatemicrofocus_callback();
        } else {
            QToolBox::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qtoolbox_create_isbase) {
            qtoolbox_create_isbase = false;
            QToolBox::create();
        } else if (qtoolbox_create_callback != nullptr) {
            qtoolbox_create_callback();
        } else {
            QToolBox::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qtoolbox_destroy_isbase) {
            qtoolbox_destroy_isbase = false;
            QToolBox::destroy();
        } else if (qtoolbox_destroy_callback != nullptr) {
            qtoolbox_destroy_callback();
        } else {
            QToolBox::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qtoolbox_focusnextchild_isbase) {
            qtoolbox_focusnextchild_isbase = false;
            return QToolBox::focusNextChild();
        } else if (qtoolbox_focusnextchild_callback != nullptr) {
            bool callback_ret = qtoolbox_focusnextchild_callback();
            return callback_ret;
        } else {
            return QToolBox::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qtoolbox_focuspreviouschild_isbase) {
            qtoolbox_focuspreviouschild_isbase = false;
            return QToolBox::focusPreviousChild();
        } else if (qtoolbox_focuspreviouschild_callback != nullptr) {
            bool callback_ret = qtoolbox_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return QToolBox::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtoolbox_sender_isbase) {
            qtoolbox_sender_isbase = false;
            return QToolBox::sender();
        } else if (qtoolbox_sender_callback != nullptr) {
            QObject* callback_ret = qtoolbox_sender_callback();
            return callback_ret;
        } else {
            return QToolBox::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtoolbox_sendersignalindex_isbase) {
            qtoolbox_sendersignalindex_isbase = false;
            return QToolBox::senderSignalIndex();
        } else if (qtoolbox_sendersignalindex_callback != nullptr) {
            int callback_ret = qtoolbox_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QToolBox::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtoolbox_receivers_isbase) {
            qtoolbox_receivers_isbase = false;
            return QToolBox::receivers(signal);
        } else if (qtoolbox_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qtoolbox_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QToolBox::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtoolbox_issignalconnected_isbase) {
            qtoolbox_issignalconnected_isbase = false;
            return QToolBox::isSignalConnected(signal);
        } else if (qtoolbox_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qtoolbox_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QToolBox::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QToolBox_Event(QToolBox* self, QEvent* e);
    friend bool QToolBox_QBaseEvent(QToolBox* self, QEvent* e);
    friend void QToolBox_ItemInserted(QToolBox* self, int index);
    friend void QToolBox_QBaseItemInserted(QToolBox* self, int index);
    friend void QToolBox_ItemRemoved(QToolBox* self, int index);
    friend void QToolBox_QBaseItemRemoved(QToolBox* self, int index);
    friend void QToolBox_ShowEvent(QToolBox* self, QShowEvent* e);
    friend void QToolBox_QBaseShowEvent(QToolBox* self, QShowEvent* e);
    friend void QToolBox_ChangeEvent(QToolBox* self, QEvent* param1);
    friend void QToolBox_QBaseChangeEvent(QToolBox* self, QEvent* param1);
    friend void QToolBox_PaintEvent(QToolBox* self, QPaintEvent* param1);
    friend void QToolBox_QBasePaintEvent(QToolBox* self, QPaintEvent* param1);
    friend void QToolBox_InitStyleOption(const QToolBox* self, QStyleOptionFrame* option);
    friend void QToolBox_QBaseInitStyleOption(const QToolBox* self, QStyleOptionFrame* option);
    friend void QToolBox_MousePressEvent(QToolBox* self, QMouseEvent* event);
    friend void QToolBox_QBaseMousePressEvent(QToolBox* self, QMouseEvent* event);
    friend void QToolBox_MouseReleaseEvent(QToolBox* self, QMouseEvent* event);
    friend void QToolBox_QBaseMouseReleaseEvent(QToolBox* self, QMouseEvent* event);
    friend void QToolBox_MouseDoubleClickEvent(QToolBox* self, QMouseEvent* event);
    friend void QToolBox_QBaseMouseDoubleClickEvent(QToolBox* self, QMouseEvent* event);
    friend void QToolBox_MouseMoveEvent(QToolBox* self, QMouseEvent* event);
    friend void QToolBox_QBaseMouseMoveEvent(QToolBox* self, QMouseEvent* event);
    friend void QToolBox_WheelEvent(QToolBox* self, QWheelEvent* event);
    friend void QToolBox_QBaseWheelEvent(QToolBox* self, QWheelEvent* event);
    friend void QToolBox_KeyPressEvent(QToolBox* self, QKeyEvent* event);
    friend void QToolBox_QBaseKeyPressEvent(QToolBox* self, QKeyEvent* event);
    friend void QToolBox_KeyReleaseEvent(QToolBox* self, QKeyEvent* event);
    friend void QToolBox_QBaseKeyReleaseEvent(QToolBox* self, QKeyEvent* event);
    friend void QToolBox_FocusInEvent(QToolBox* self, QFocusEvent* event);
    friend void QToolBox_QBaseFocusInEvent(QToolBox* self, QFocusEvent* event);
    friend void QToolBox_FocusOutEvent(QToolBox* self, QFocusEvent* event);
    friend void QToolBox_QBaseFocusOutEvent(QToolBox* self, QFocusEvent* event);
    friend void QToolBox_EnterEvent(QToolBox* self, QEnterEvent* event);
    friend void QToolBox_QBaseEnterEvent(QToolBox* self, QEnterEvent* event);
    friend void QToolBox_LeaveEvent(QToolBox* self, QEvent* event);
    friend void QToolBox_QBaseLeaveEvent(QToolBox* self, QEvent* event);
    friend void QToolBox_MoveEvent(QToolBox* self, QMoveEvent* event);
    friend void QToolBox_QBaseMoveEvent(QToolBox* self, QMoveEvent* event);
    friend void QToolBox_ResizeEvent(QToolBox* self, QResizeEvent* event);
    friend void QToolBox_QBaseResizeEvent(QToolBox* self, QResizeEvent* event);
    friend void QToolBox_CloseEvent(QToolBox* self, QCloseEvent* event);
    friend void QToolBox_QBaseCloseEvent(QToolBox* self, QCloseEvent* event);
    friend void QToolBox_ContextMenuEvent(QToolBox* self, QContextMenuEvent* event);
    friend void QToolBox_QBaseContextMenuEvent(QToolBox* self, QContextMenuEvent* event);
    friend void QToolBox_TabletEvent(QToolBox* self, QTabletEvent* event);
    friend void QToolBox_QBaseTabletEvent(QToolBox* self, QTabletEvent* event);
    friend void QToolBox_ActionEvent(QToolBox* self, QActionEvent* event);
    friend void QToolBox_QBaseActionEvent(QToolBox* self, QActionEvent* event);
    friend void QToolBox_DragEnterEvent(QToolBox* self, QDragEnterEvent* event);
    friend void QToolBox_QBaseDragEnterEvent(QToolBox* self, QDragEnterEvent* event);
    friend void QToolBox_DragMoveEvent(QToolBox* self, QDragMoveEvent* event);
    friend void QToolBox_QBaseDragMoveEvent(QToolBox* self, QDragMoveEvent* event);
    friend void QToolBox_DragLeaveEvent(QToolBox* self, QDragLeaveEvent* event);
    friend void QToolBox_QBaseDragLeaveEvent(QToolBox* self, QDragLeaveEvent* event);
    friend void QToolBox_DropEvent(QToolBox* self, QDropEvent* event);
    friend void QToolBox_QBaseDropEvent(QToolBox* self, QDropEvent* event);
    friend void QToolBox_HideEvent(QToolBox* self, QHideEvent* event);
    friend void QToolBox_QBaseHideEvent(QToolBox* self, QHideEvent* event);
    friend bool QToolBox_NativeEvent(QToolBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool QToolBox_QBaseNativeEvent(QToolBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QToolBox_Metric(const QToolBox* self, int param1);
    friend int QToolBox_QBaseMetric(const QToolBox* self, int param1);
    friend void QToolBox_InitPainter(const QToolBox* self, QPainter* painter);
    friend void QToolBox_QBaseInitPainter(const QToolBox* self, QPainter* painter);
    friend QPaintDevice* QToolBox_Redirected(const QToolBox* self, QPoint* offset);
    friend QPaintDevice* QToolBox_QBaseRedirected(const QToolBox* self, QPoint* offset);
    friend QPainter* QToolBox_SharedPainter(const QToolBox* self);
    friend QPainter* QToolBox_QBaseSharedPainter(const QToolBox* self);
    friend void QToolBox_InputMethodEvent(QToolBox* self, QInputMethodEvent* param1);
    friend void QToolBox_QBaseInputMethodEvent(QToolBox* self, QInputMethodEvent* param1);
    friend bool QToolBox_FocusNextPrevChild(QToolBox* self, bool next);
    friend bool QToolBox_QBaseFocusNextPrevChild(QToolBox* self, bool next);
    friend void QToolBox_TimerEvent(QToolBox* self, QTimerEvent* event);
    friend void QToolBox_QBaseTimerEvent(QToolBox* self, QTimerEvent* event);
    friend void QToolBox_ChildEvent(QToolBox* self, QChildEvent* event);
    friend void QToolBox_QBaseChildEvent(QToolBox* self, QChildEvent* event);
    friend void QToolBox_CustomEvent(QToolBox* self, QEvent* event);
    friend void QToolBox_QBaseCustomEvent(QToolBox* self, QEvent* event);
    friend void QToolBox_ConnectNotify(QToolBox* self, const QMetaMethod* signal);
    friend void QToolBox_QBaseConnectNotify(QToolBox* self, const QMetaMethod* signal);
    friend void QToolBox_DisconnectNotify(QToolBox* self, const QMetaMethod* signal);
    friend void QToolBox_QBaseDisconnectNotify(QToolBox* self, const QMetaMethod* signal);
    friend void QToolBox_DrawFrame(QToolBox* self, QPainter* param1);
    friend void QToolBox_QBaseDrawFrame(QToolBox* self, QPainter* param1);
    friend void QToolBox_UpdateMicroFocus(QToolBox* self);
    friend void QToolBox_QBaseUpdateMicroFocus(QToolBox* self);
    friend void QToolBox_Create(QToolBox* self);
    friend void QToolBox_QBaseCreate(QToolBox* self);
    friend void QToolBox_Destroy(QToolBox* self);
    friend void QToolBox_QBaseDestroy(QToolBox* self);
    friend bool QToolBox_FocusNextChild(QToolBox* self);
    friend bool QToolBox_QBaseFocusNextChild(QToolBox* self);
    friend bool QToolBox_FocusPreviousChild(QToolBox* self);
    friend bool QToolBox_QBaseFocusPreviousChild(QToolBox* self);
    friend QObject* QToolBox_Sender(const QToolBox* self);
    friend QObject* QToolBox_QBaseSender(const QToolBox* self);
    friend int QToolBox_SenderSignalIndex(const QToolBox* self);
    friend int QToolBox_QBaseSenderSignalIndex(const QToolBox* self);
    friend int QToolBox_Receivers(const QToolBox* self, const char* signal);
    friend int QToolBox_QBaseReceivers(const QToolBox* self, const char* signal);
    friend bool QToolBox_IsSignalConnected(const QToolBox* self, const QMetaMethod* signal);
    friend bool QToolBox_QBaseIsSignalConnected(const QToolBox* self, const QMetaMethod* signal);
};

#endif
