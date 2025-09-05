#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKTOOLBAR_H
#define SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKTOOLBAR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KToolBar so that we can call protected methods
class VirtualKToolBar final : public KToolBar {

  public:
    // Virtual class boolean flag
    bool isVirtualKToolBar = true;

    // Virtual class public types (including callbacks)
    using KToolBar_Metacall_Callback = int (*)(KToolBar*, int, int, void**);
    using KToolBar_EventFilter_Callback = bool (*)(KToolBar*, QObject*, QEvent*);
    using KToolBar_SlotMovableChanged_Callback = void (*)(KToolBar*, bool);
    using KToolBar_ContextMenuEvent_Callback = void (*)(KToolBar*, QContextMenuEvent*);
    using KToolBar_ActionEvent_Callback = void (*)(KToolBar*, QActionEvent*);
    using KToolBar_DragEnterEvent_Callback = void (*)(KToolBar*, QDragEnterEvent*);
    using KToolBar_DragMoveEvent_Callback = void (*)(KToolBar*, QDragMoveEvent*);
    using KToolBar_DragLeaveEvent_Callback = void (*)(KToolBar*, QDragLeaveEvent*);
    using KToolBar_DropEvent_Callback = void (*)(KToolBar*, QDropEvent*);
    using KToolBar_MousePressEvent_Callback = void (*)(KToolBar*, QMouseEvent*);
    using KToolBar_MouseMoveEvent_Callback = void (*)(KToolBar*, QMouseEvent*);
    using KToolBar_MouseReleaseEvent_Callback = void (*)(KToolBar*, QMouseEvent*);
    using KToolBar_ChangeEvent_Callback = void (*)(KToolBar*, QEvent*);
    using KToolBar_PaintEvent_Callback = void (*)(KToolBar*, QPaintEvent*);
    using KToolBar_Event_Callback = bool (*)(KToolBar*, QEvent*);
    using KToolBar_InitStyleOption_Callback = void (*)(const KToolBar*, QStyleOptionToolBar*);
    using KToolBar_DevType_Callback = int (*)();
    using KToolBar_SetVisible_Callback = void (*)(KToolBar*, bool);
    using KToolBar_SizeHint_Callback = QSize* (*)();
    using KToolBar_MinimumSizeHint_Callback = QSize* (*)();
    using KToolBar_HeightForWidth_Callback = int (*)(const KToolBar*, int);
    using KToolBar_HasHeightForWidth_Callback = bool (*)();
    using KToolBar_PaintEngine_Callback = QPaintEngine* (*)();
    using KToolBar_MouseDoubleClickEvent_Callback = void (*)(KToolBar*, QMouseEvent*);
    using KToolBar_WheelEvent_Callback = void (*)(KToolBar*, QWheelEvent*);
    using KToolBar_KeyPressEvent_Callback = void (*)(KToolBar*, QKeyEvent*);
    using KToolBar_KeyReleaseEvent_Callback = void (*)(KToolBar*, QKeyEvent*);
    using KToolBar_FocusInEvent_Callback = void (*)(KToolBar*, QFocusEvent*);
    using KToolBar_FocusOutEvent_Callback = void (*)(KToolBar*, QFocusEvent*);
    using KToolBar_EnterEvent_Callback = void (*)(KToolBar*, QEnterEvent*);
    using KToolBar_LeaveEvent_Callback = void (*)(KToolBar*, QEvent*);
    using KToolBar_MoveEvent_Callback = void (*)(KToolBar*, QMoveEvent*);
    using KToolBar_ResizeEvent_Callback = void (*)(KToolBar*, QResizeEvent*);
    using KToolBar_CloseEvent_Callback = void (*)(KToolBar*, QCloseEvent*);
    using KToolBar_TabletEvent_Callback = void (*)(KToolBar*, QTabletEvent*);
    using KToolBar_ShowEvent_Callback = void (*)(KToolBar*, QShowEvent*);
    using KToolBar_HideEvent_Callback = void (*)(KToolBar*, QHideEvent*);
    using KToolBar_NativeEvent_Callback = bool (*)(KToolBar*, libqt_string, void*, intptr_t*);
    using KToolBar_Metric_Callback = int (*)(const KToolBar*, int);
    using KToolBar_InitPainter_Callback = void (*)(const KToolBar*, QPainter*);
    using KToolBar_Redirected_Callback = QPaintDevice* (*)(const KToolBar*, QPoint*);
    using KToolBar_SharedPainter_Callback = QPainter* (*)();
    using KToolBar_InputMethodEvent_Callback = void (*)(KToolBar*, QInputMethodEvent*);
    using KToolBar_InputMethodQuery_Callback = QVariant* (*)(const KToolBar*, int);
    using KToolBar_FocusNextPrevChild_Callback = bool (*)(KToolBar*, bool);
    using KToolBar_TimerEvent_Callback = void (*)(KToolBar*, QTimerEvent*);
    using KToolBar_ChildEvent_Callback = void (*)(KToolBar*, QChildEvent*);
    using KToolBar_CustomEvent_Callback = void (*)(KToolBar*, QEvent*);
    using KToolBar_ConnectNotify_Callback = void (*)(KToolBar*, QMetaMethod*);
    using KToolBar_DisconnectNotify_Callback = void (*)(KToolBar*, QMetaMethod*);
    using KToolBar_UpdateMicroFocus_Callback = void (*)();
    using KToolBar_Create_Callback = void (*)();
    using KToolBar_Destroy_Callback = void (*)();
    using KToolBar_FocusNextChild_Callback = bool (*)();
    using KToolBar_FocusPreviousChild_Callback = bool (*)();
    using KToolBar_Sender_Callback = QObject* (*)();
    using KToolBar_SenderSignalIndex_Callback = int (*)();
    using KToolBar_Receivers_Callback = int (*)(const KToolBar*, const char*);
    using KToolBar_IsSignalConnected_Callback = bool (*)(const KToolBar*, QMetaMethod*);
    using KToolBar_GetDecodedMetricF_Callback = double (*)(const KToolBar*, int, int);

  protected:
    // Instance callback storage
    KToolBar_Metacall_Callback ktoolbar_metacall_callback = nullptr;
    KToolBar_EventFilter_Callback ktoolbar_eventfilter_callback = nullptr;
    KToolBar_SlotMovableChanged_Callback ktoolbar_slotmovablechanged_callback = nullptr;
    KToolBar_ContextMenuEvent_Callback ktoolbar_contextmenuevent_callback = nullptr;
    KToolBar_ActionEvent_Callback ktoolbar_actionevent_callback = nullptr;
    KToolBar_DragEnterEvent_Callback ktoolbar_dragenterevent_callback = nullptr;
    KToolBar_DragMoveEvent_Callback ktoolbar_dragmoveevent_callback = nullptr;
    KToolBar_DragLeaveEvent_Callback ktoolbar_dragleaveevent_callback = nullptr;
    KToolBar_DropEvent_Callback ktoolbar_dropevent_callback = nullptr;
    KToolBar_MousePressEvent_Callback ktoolbar_mousepressevent_callback = nullptr;
    KToolBar_MouseMoveEvent_Callback ktoolbar_mousemoveevent_callback = nullptr;
    KToolBar_MouseReleaseEvent_Callback ktoolbar_mousereleaseevent_callback = nullptr;
    KToolBar_ChangeEvent_Callback ktoolbar_changeevent_callback = nullptr;
    KToolBar_PaintEvent_Callback ktoolbar_paintevent_callback = nullptr;
    KToolBar_Event_Callback ktoolbar_event_callback = nullptr;
    KToolBar_InitStyleOption_Callback ktoolbar_initstyleoption_callback = nullptr;
    KToolBar_DevType_Callback ktoolbar_devtype_callback = nullptr;
    KToolBar_SetVisible_Callback ktoolbar_setvisible_callback = nullptr;
    KToolBar_SizeHint_Callback ktoolbar_sizehint_callback = nullptr;
    KToolBar_MinimumSizeHint_Callback ktoolbar_minimumsizehint_callback = nullptr;
    KToolBar_HeightForWidth_Callback ktoolbar_heightforwidth_callback = nullptr;
    KToolBar_HasHeightForWidth_Callback ktoolbar_hasheightforwidth_callback = nullptr;
    KToolBar_PaintEngine_Callback ktoolbar_paintengine_callback = nullptr;
    KToolBar_MouseDoubleClickEvent_Callback ktoolbar_mousedoubleclickevent_callback = nullptr;
    KToolBar_WheelEvent_Callback ktoolbar_wheelevent_callback = nullptr;
    KToolBar_KeyPressEvent_Callback ktoolbar_keypressevent_callback = nullptr;
    KToolBar_KeyReleaseEvent_Callback ktoolbar_keyreleaseevent_callback = nullptr;
    KToolBar_FocusInEvent_Callback ktoolbar_focusinevent_callback = nullptr;
    KToolBar_FocusOutEvent_Callback ktoolbar_focusoutevent_callback = nullptr;
    KToolBar_EnterEvent_Callback ktoolbar_enterevent_callback = nullptr;
    KToolBar_LeaveEvent_Callback ktoolbar_leaveevent_callback = nullptr;
    KToolBar_MoveEvent_Callback ktoolbar_moveevent_callback = nullptr;
    KToolBar_ResizeEvent_Callback ktoolbar_resizeevent_callback = nullptr;
    KToolBar_CloseEvent_Callback ktoolbar_closeevent_callback = nullptr;
    KToolBar_TabletEvent_Callback ktoolbar_tabletevent_callback = nullptr;
    KToolBar_ShowEvent_Callback ktoolbar_showevent_callback = nullptr;
    KToolBar_HideEvent_Callback ktoolbar_hideevent_callback = nullptr;
    KToolBar_NativeEvent_Callback ktoolbar_nativeevent_callback = nullptr;
    KToolBar_Metric_Callback ktoolbar_metric_callback = nullptr;
    KToolBar_InitPainter_Callback ktoolbar_initpainter_callback = nullptr;
    KToolBar_Redirected_Callback ktoolbar_redirected_callback = nullptr;
    KToolBar_SharedPainter_Callback ktoolbar_sharedpainter_callback = nullptr;
    KToolBar_InputMethodEvent_Callback ktoolbar_inputmethodevent_callback = nullptr;
    KToolBar_InputMethodQuery_Callback ktoolbar_inputmethodquery_callback = nullptr;
    KToolBar_FocusNextPrevChild_Callback ktoolbar_focusnextprevchild_callback = nullptr;
    KToolBar_TimerEvent_Callback ktoolbar_timerevent_callback = nullptr;
    KToolBar_ChildEvent_Callback ktoolbar_childevent_callback = nullptr;
    KToolBar_CustomEvent_Callback ktoolbar_customevent_callback = nullptr;
    KToolBar_ConnectNotify_Callback ktoolbar_connectnotify_callback = nullptr;
    KToolBar_DisconnectNotify_Callback ktoolbar_disconnectnotify_callback = nullptr;
    KToolBar_UpdateMicroFocus_Callback ktoolbar_updatemicrofocus_callback = nullptr;
    KToolBar_Create_Callback ktoolbar_create_callback = nullptr;
    KToolBar_Destroy_Callback ktoolbar_destroy_callback = nullptr;
    KToolBar_FocusNextChild_Callback ktoolbar_focusnextchild_callback = nullptr;
    KToolBar_FocusPreviousChild_Callback ktoolbar_focuspreviouschild_callback = nullptr;
    KToolBar_Sender_Callback ktoolbar_sender_callback = nullptr;
    KToolBar_SenderSignalIndex_Callback ktoolbar_sendersignalindex_callback = nullptr;
    KToolBar_Receivers_Callback ktoolbar_receivers_callback = nullptr;
    KToolBar_IsSignalConnected_Callback ktoolbar_issignalconnected_callback = nullptr;
    KToolBar_GetDecodedMetricF_Callback ktoolbar_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool ktoolbar_metacall_isbase = false;
    mutable bool ktoolbar_eventfilter_isbase = false;
    mutable bool ktoolbar_slotmovablechanged_isbase = false;
    mutable bool ktoolbar_contextmenuevent_isbase = false;
    mutable bool ktoolbar_actionevent_isbase = false;
    mutable bool ktoolbar_dragenterevent_isbase = false;
    mutable bool ktoolbar_dragmoveevent_isbase = false;
    mutable bool ktoolbar_dragleaveevent_isbase = false;
    mutable bool ktoolbar_dropevent_isbase = false;
    mutable bool ktoolbar_mousepressevent_isbase = false;
    mutable bool ktoolbar_mousemoveevent_isbase = false;
    mutable bool ktoolbar_mousereleaseevent_isbase = false;
    mutable bool ktoolbar_changeevent_isbase = false;
    mutable bool ktoolbar_paintevent_isbase = false;
    mutable bool ktoolbar_event_isbase = false;
    mutable bool ktoolbar_initstyleoption_isbase = false;
    mutable bool ktoolbar_devtype_isbase = false;
    mutable bool ktoolbar_setvisible_isbase = false;
    mutable bool ktoolbar_sizehint_isbase = false;
    mutable bool ktoolbar_minimumsizehint_isbase = false;
    mutable bool ktoolbar_heightforwidth_isbase = false;
    mutable bool ktoolbar_hasheightforwidth_isbase = false;
    mutable bool ktoolbar_paintengine_isbase = false;
    mutable bool ktoolbar_mousedoubleclickevent_isbase = false;
    mutable bool ktoolbar_wheelevent_isbase = false;
    mutable bool ktoolbar_keypressevent_isbase = false;
    mutable bool ktoolbar_keyreleaseevent_isbase = false;
    mutable bool ktoolbar_focusinevent_isbase = false;
    mutable bool ktoolbar_focusoutevent_isbase = false;
    mutable bool ktoolbar_enterevent_isbase = false;
    mutable bool ktoolbar_leaveevent_isbase = false;
    mutable bool ktoolbar_moveevent_isbase = false;
    mutable bool ktoolbar_resizeevent_isbase = false;
    mutable bool ktoolbar_closeevent_isbase = false;
    mutable bool ktoolbar_tabletevent_isbase = false;
    mutable bool ktoolbar_showevent_isbase = false;
    mutable bool ktoolbar_hideevent_isbase = false;
    mutable bool ktoolbar_nativeevent_isbase = false;
    mutable bool ktoolbar_metric_isbase = false;
    mutable bool ktoolbar_initpainter_isbase = false;
    mutable bool ktoolbar_redirected_isbase = false;
    mutable bool ktoolbar_sharedpainter_isbase = false;
    mutable bool ktoolbar_inputmethodevent_isbase = false;
    mutable bool ktoolbar_inputmethodquery_isbase = false;
    mutable bool ktoolbar_focusnextprevchild_isbase = false;
    mutable bool ktoolbar_timerevent_isbase = false;
    mutable bool ktoolbar_childevent_isbase = false;
    mutable bool ktoolbar_customevent_isbase = false;
    mutable bool ktoolbar_connectnotify_isbase = false;
    mutable bool ktoolbar_disconnectnotify_isbase = false;
    mutable bool ktoolbar_updatemicrofocus_isbase = false;
    mutable bool ktoolbar_create_isbase = false;
    mutable bool ktoolbar_destroy_isbase = false;
    mutable bool ktoolbar_focusnextchild_isbase = false;
    mutable bool ktoolbar_focuspreviouschild_isbase = false;
    mutable bool ktoolbar_sender_isbase = false;
    mutable bool ktoolbar_sendersignalindex_isbase = false;
    mutable bool ktoolbar_receivers_isbase = false;
    mutable bool ktoolbar_issignalconnected_isbase = false;
    mutable bool ktoolbar_getdecodedmetricf_isbase = false;

  public:
    VirtualKToolBar(QWidget* parent) : KToolBar(parent) {};
    VirtualKToolBar(const QString& objectName, QWidget* parent) : KToolBar(objectName, parent) {};
    VirtualKToolBar(const QString& objectName, QMainWindow* parentWindow, Qt::ToolBarArea area) : KToolBar(objectName, parentWindow, area) {};
    VirtualKToolBar(QWidget* parent, bool isMainToolBar) : KToolBar(parent, isMainToolBar) {};
    VirtualKToolBar(QWidget* parent, bool isMainToolBar, bool readConfig) : KToolBar(parent, isMainToolBar, readConfig) {};
    VirtualKToolBar(const QString& objectName, QWidget* parent, bool readConfig) : KToolBar(objectName, parent, readConfig) {};
    VirtualKToolBar(const QString& objectName, QMainWindow* parentWindow, Qt::ToolBarArea area, bool newLine) : KToolBar(objectName, parentWindow, area, newLine) {};
    VirtualKToolBar(const QString& objectName, QMainWindow* parentWindow, Qt::ToolBarArea area, bool newLine, bool isMainToolBar) : KToolBar(objectName, parentWindow, area, newLine, isMainToolBar) {};
    VirtualKToolBar(const QString& objectName, QMainWindow* parentWindow, Qt::ToolBarArea area, bool newLine, bool isMainToolBar, bool readConfig) : KToolBar(objectName, parentWindow, area, newLine, isMainToolBar, readConfig) {};

    ~VirtualKToolBar() {
        ktoolbar_metacall_callback = nullptr;
        ktoolbar_eventfilter_callback = nullptr;
        ktoolbar_slotmovablechanged_callback = nullptr;
        ktoolbar_contextmenuevent_callback = nullptr;
        ktoolbar_actionevent_callback = nullptr;
        ktoolbar_dragenterevent_callback = nullptr;
        ktoolbar_dragmoveevent_callback = nullptr;
        ktoolbar_dragleaveevent_callback = nullptr;
        ktoolbar_dropevent_callback = nullptr;
        ktoolbar_mousepressevent_callback = nullptr;
        ktoolbar_mousemoveevent_callback = nullptr;
        ktoolbar_mousereleaseevent_callback = nullptr;
        ktoolbar_changeevent_callback = nullptr;
        ktoolbar_paintevent_callback = nullptr;
        ktoolbar_event_callback = nullptr;
        ktoolbar_initstyleoption_callback = nullptr;
        ktoolbar_devtype_callback = nullptr;
        ktoolbar_setvisible_callback = nullptr;
        ktoolbar_sizehint_callback = nullptr;
        ktoolbar_minimumsizehint_callback = nullptr;
        ktoolbar_heightforwidth_callback = nullptr;
        ktoolbar_hasheightforwidth_callback = nullptr;
        ktoolbar_paintengine_callback = nullptr;
        ktoolbar_mousedoubleclickevent_callback = nullptr;
        ktoolbar_wheelevent_callback = nullptr;
        ktoolbar_keypressevent_callback = nullptr;
        ktoolbar_keyreleaseevent_callback = nullptr;
        ktoolbar_focusinevent_callback = nullptr;
        ktoolbar_focusoutevent_callback = nullptr;
        ktoolbar_enterevent_callback = nullptr;
        ktoolbar_leaveevent_callback = nullptr;
        ktoolbar_moveevent_callback = nullptr;
        ktoolbar_resizeevent_callback = nullptr;
        ktoolbar_closeevent_callback = nullptr;
        ktoolbar_tabletevent_callback = nullptr;
        ktoolbar_showevent_callback = nullptr;
        ktoolbar_hideevent_callback = nullptr;
        ktoolbar_nativeevent_callback = nullptr;
        ktoolbar_metric_callback = nullptr;
        ktoolbar_initpainter_callback = nullptr;
        ktoolbar_redirected_callback = nullptr;
        ktoolbar_sharedpainter_callback = nullptr;
        ktoolbar_inputmethodevent_callback = nullptr;
        ktoolbar_inputmethodquery_callback = nullptr;
        ktoolbar_focusnextprevchild_callback = nullptr;
        ktoolbar_timerevent_callback = nullptr;
        ktoolbar_childevent_callback = nullptr;
        ktoolbar_customevent_callback = nullptr;
        ktoolbar_connectnotify_callback = nullptr;
        ktoolbar_disconnectnotify_callback = nullptr;
        ktoolbar_updatemicrofocus_callback = nullptr;
        ktoolbar_create_callback = nullptr;
        ktoolbar_destroy_callback = nullptr;
        ktoolbar_focusnextchild_callback = nullptr;
        ktoolbar_focuspreviouschild_callback = nullptr;
        ktoolbar_sender_callback = nullptr;
        ktoolbar_sendersignalindex_callback = nullptr;
        ktoolbar_receivers_callback = nullptr;
        ktoolbar_issignalconnected_callback = nullptr;
        ktoolbar_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKToolBar_Metacall_Callback(KToolBar_Metacall_Callback cb) { ktoolbar_metacall_callback = cb; }
    inline void setKToolBar_EventFilter_Callback(KToolBar_EventFilter_Callback cb) { ktoolbar_eventfilter_callback = cb; }
    inline void setKToolBar_SlotMovableChanged_Callback(KToolBar_SlotMovableChanged_Callback cb) { ktoolbar_slotmovablechanged_callback = cb; }
    inline void setKToolBar_ContextMenuEvent_Callback(KToolBar_ContextMenuEvent_Callback cb) { ktoolbar_contextmenuevent_callback = cb; }
    inline void setKToolBar_ActionEvent_Callback(KToolBar_ActionEvent_Callback cb) { ktoolbar_actionevent_callback = cb; }
    inline void setKToolBar_DragEnterEvent_Callback(KToolBar_DragEnterEvent_Callback cb) { ktoolbar_dragenterevent_callback = cb; }
    inline void setKToolBar_DragMoveEvent_Callback(KToolBar_DragMoveEvent_Callback cb) { ktoolbar_dragmoveevent_callback = cb; }
    inline void setKToolBar_DragLeaveEvent_Callback(KToolBar_DragLeaveEvent_Callback cb) { ktoolbar_dragleaveevent_callback = cb; }
    inline void setKToolBar_DropEvent_Callback(KToolBar_DropEvent_Callback cb) { ktoolbar_dropevent_callback = cb; }
    inline void setKToolBar_MousePressEvent_Callback(KToolBar_MousePressEvent_Callback cb) { ktoolbar_mousepressevent_callback = cb; }
    inline void setKToolBar_MouseMoveEvent_Callback(KToolBar_MouseMoveEvent_Callback cb) { ktoolbar_mousemoveevent_callback = cb; }
    inline void setKToolBar_MouseReleaseEvent_Callback(KToolBar_MouseReleaseEvent_Callback cb) { ktoolbar_mousereleaseevent_callback = cb; }
    inline void setKToolBar_ChangeEvent_Callback(KToolBar_ChangeEvent_Callback cb) { ktoolbar_changeevent_callback = cb; }
    inline void setKToolBar_PaintEvent_Callback(KToolBar_PaintEvent_Callback cb) { ktoolbar_paintevent_callback = cb; }
    inline void setKToolBar_Event_Callback(KToolBar_Event_Callback cb) { ktoolbar_event_callback = cb; }
    inline void setKToolBar_InitStyleOption_Callback(KToolBar_InitStyleOption_Callback cb) { ktoolbar_initstyleoption_callback = cb; }
    inline void setKToolBar_DevType_Callback(KToolBar_DevType_Callback cb) { ktoolbar_devtype_callback = cb; }
    inline void setKToolBar_SetVisible_Callback(KToolBar_SetVisible_Callback cb) { ktoolbar_setvisible_callback = cb; }
    inline void setKToolBar_SizeHint_Callback(KToolBar_SizeHint_Callback cb) { ktoolbar_sizehint_callback = cb; }
    inline void setKToolBar_MinimumSizeHint_Callback(KToolBar_MinimumSizeHint_Callback cb) { ktoolbar_minimumsizehint_callback = cb; }
    inline void setKToolBar_HeightForWidth_Callback(KToolBar_HeightForWidth_Callback cb) { ktoolbar_heightforwidth_callback = cb; }
    inline void setKToolBar_HasHeightForWidth_Callback(KToolBar_HasHeightForWidth_Callback cb) { ktoolbar_hasheightforwidth_callback = cb; }
    inline void setKToolBar_PaintEngine_Callback(KToolBar_PaintEngine_Callback cb) { ktoolbar_paintengine_callback = cb; }
    inline void setKToolBar_MouseDoubleClickEvent_Callback(KToolBar_MouseDoubleClickEvent_Callback cb) { ktoolbar_mousedoubleclickevent_callback = cb; }
    inline void setKToolBar_WheelEvent_Callback(KToolBar_WheelEvent_Callback cb) { ktoolbar_wheelevent_callback = cb; }
    inline void setKToolBar_KeyPressEvent_Callback(KToolBar_KeyPressEvent_Callback cb) { ktoolbar_keypressevent_callback = cb; }
    inline void setKToolBar_KeyReleaseEvent_Callback(KToolBar_KeyReleaseEvent_Callback cb) { ktoolbar_keyreleaseevent_callback = cb; }
    inline void setKToolBar_FocusInEvent_Callback(KToolBar_FocusInEvent_Callback cb) { ktoolbar_focusinevent_callback = cb; }
    inline void setKToolBar_FocusOutEvent_Callback(KToolBar_FocusOutEvent_Callback cb) { ktoolbar_focusoutevent_callback = cb; }
    inline void setKToolBar_EnterEvent_Callback(KToolBar_EnterEvent_Callback cb) { ktoolbar_enterevent_callback = cb; }
    inline void setKToolBar_LeaveEvent_Callback(KToolBar_LeaveEvent_Callback cb) { ktoolbar_leaveevent_callback = cb; }
    inline void setKToolBar_MoveEvent_Callback(KToolBar_MoveEvent_Callback cb) { ktoolbar_moveevent_callback = cb; }
    inline void setKToolBar_ResizeEvent_Callback(KToolBar_ResizeEvent_Callback cb) { ktoolbar_resizeevent_callback = cb; }
    inline void setKToolBar_CloseEvent_Callback(KToolBar_CloseEvent_Callback cb) { ktoolbar_closeevent_callback = cb; }
    inline void setKToolBar_TabletEvent_Callback(KToolBar_TabletEvent_Callback cb) { ktoolbar_tabletevent_callback = cb; }
    inline void setKToolBar_ShowEvent_Callback(KToolBar_ShowEvent_Callback cb) { ktoolbar_showevent_callback = cb; }
    inline void setKToolBar_HideEvent_Callback(KToolBar_HideEvent_Callback cb) { ktoolbar_hideevent_callback = cb; }
    inline void setKToolBar_NativeEvent_Callback(KToolBar_NativeEvent_Callback cb) { ktoolbar_nativeevent_callback = cb; }
    inline void setKToolBar_Metric_Callback(KToolBar_Metric_Callback cb) { ktoolbar_metric_callback = cb; }
    inline void setKToolBar_InitPainter_Callback(KToolBar_InitPainter_Callback cb) { ktoolbar_initpainter_callback = cb; }
    inline void setKToolBar_Redirected_Callback(KToolBar_Redirected_Callback cb) { ktoolbar_redirected_callback = cb; }
    inline void setKToolBar_SharedPainter_Callback(KToolBar_SharedPainter_Callback cb) { ktoolbar_sharedpainter_callback = cb; }
    inline void setKToolBar_InputMethodEvent_Callback(KToolBar_InputMethodEvent_Callback cb) { ktoolbar_inputmethodevent_callback = cb; }
    inline void setKToolBar_InputMethodQuery_Callback(KToolBar_InputMethodQuery_Callback cb) { ktoolbar_inputmethodquery_callback = cb; }
    inline void setKToolBar_FocusNextPrevChild_Callback(KToolBar_FocusNextPrevChild_Callback cb) { ktoolbar_focusnextprevchild_callback = cb; }
    inline void setKToolBar_TimerEvent_Callback(KToolBar_TimerEvent_Callback cb) { ktoolbar_timerevent_callback = cb; }
    inline void setKToolBar_ChildEvent_Callback(KToolBar_ChildEvent_Callback cb) { ktoolbar_childevent_callback = cb; }
    inline void setKToolBar_CustomEvent_Callback(KToolBar_CustomEvent_Callback cb) { ktoolbar_customevent_callback = cb; }
    inline void setKToolBar_ConnectNotify_Callback(KToolBar_ConnectNotify_Callback cb) { ktoolbar_connectnotify_callback = cb; }
    inline void setKToolBar_DisconnectNotify_Callback(KToolBar_DisconnectNotify_Callback cb) { ktoolbar_disconnectnotify_callback = cb; }
    inline void setKToolBar_UpdateMicroFocus_Callback(KToolBar_UpdateMicroFocus_Callback cb) { ktoolbar_updatemicrofocus_callback = cb; }
    inline void setKToolBar_Create_Callback(KToolBar_Create_Callback cb) { ktoolbar_create_callback = cb; }
    inline void setKToolBar_Destroy_Callback(KToolBar_Destroy_Callback cb) { ktoolbar_destroy_callback = cb; }
    inline void setKToolBar_FocusNextChild_Callback(KToolBar_FocusNextChild_Callback cb) { ktoolbar_focusnextchild_callback = cb; }
    inline void setKToolBar_FocusPreviousChild_Callback(KToolBar_FocusPreviousChild_Callback cb) { ktoolbar_focuspreviouschild_callback = cb; }
    inline void setKToolBar_Sender_Callback(KToolBar_Sender_Callback cb) { ktoolbar_sender_callback = cb; }
    inline void setKToolBar_SenderSignalIndex_Callback(KToolBar_SenderSignalIndex_Callback cb) { ktoolbar_sendersignalindex_callback = cb; }
    inline void setKToolBar_Receivers_Callback(KToolBar_Receivers_Callback cb) { ktoolbar_receivers_callback = cb; }
    inline void setKToolBar_IsSignalConnected_Callback(KToolBar_IsSignalConnected_Callback cb) { ktoolbar_issignalconnected_callback = cb; }
    inline void setKToolBar_GetDecodedMetricF_Callback(KToolBar_GetDecodedMetricF_Callback cb) { ktoolbar_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKToolBar_Metacall_IsBase(bool value) const { ktoolbar_metacall_isbase = value; }
    inline void setKToolBar_EventFilter_IsBase(bool value) const { ktoolbar_eventfilter_isbase = value; }
    inline void setKToolBar_SlotMovableChanged_IsBase(bool value) const { ktoolbar_slotmovablechanged_isbase = value; }
    inline void setKToolBar_ContextMenuEvent_IsBase(bool value) const { ktoolbar_contextmenuevent_isbase = value; }
    inline void setKToolBar_ActionEvent_IsBase(bool value) const { ktoolbar_actionevent_isbase = value; }
    inline void setKToolBar_DragEnterEvent_IsBase(bool value) const { ktoolbar_dragenterevent_isbase = value; }
    inline void setKToolBar_DragMoveEvent_IsBase(bool value) const { ktoolbar_dragmoveevent_isbase = value; }
    inline void setKToolBar_DragLeaveEvent_IsBase(bool value) const { ktoolbar_dragleaveevent_isbase = value; }
    inline void setKToolBar_DropEvent_IsBase(bool value) const { ktoolbar_dropevent_isbase = value; }
    inline void setKToolBar_MousePressEvent_IsBase(bool value) const { ktoolbar_mousepressevent_isbase = value; }
    inline void setKToolBar_MouseMoveEvent_IsBase(bool value) const { ktoolbar_mousemoveevent_isbase = value; }
    inline void setKToolBar_MouseReleaseEvent_IsBase(bool value) const { ktoolbar_mousereleaseevent_isbase = value; }
    inline void setKToolBar_ChangeEvent_IsBase(bool value) const { ktoolbar_changeevent_isbase = value; }
    inline void setKToolBar_PaintEvent_IsBase(bool value) const { ktoolbar_paintevent_isbase = value; }
    inline void setKToolBar_Event_IsBase(bool value) const { ktoolbar_event_isbase = value; }
    inline void setKToolBar_InitStyleOption_IsBase(bool value) const { ktoolbar_initstyleoption_isbase = value; }
    inline void setKToolBar_DevType_IsBase(bool value) const { ktoolbar_devtype_isbase = value; }
    inline void setKToolBar_SetVisible_IsBase(bool value) const { ktoolbar_setvisible_isbase = value; }
    inline void setKToolBar_SizeHint_IsBase(bool value) const { ktoolbar_sizehint_isbase = value; }
    inline void setKToolBar_MinimumSizeHint_IsBase(bool value) const { ktoolbar_minimumsizehint_isbase = value; }
    inline void setKToolBar_HeightForWidth_IsBase(bool value) const { ktoolbar_heightforwidth_isbase = value; }
    inline void setKToolBar_HasHeightForWidth_IsBase(bool value) const { ktoolbar_hasheightforwidth_isbase = value; }
    inline void setKToolBar_PaintEngine_IsBase(bool value) const { ktoolbar_paintengine_isbase = value; }
    inline void setKToolBar_MouseDoubleClickEvent_IsBase(bool value) const { ktoolbar_mousedoubleclickevent_isbase = value; }
    inline void setKToolBar_WheelEvent_IsBase(bool value) const { ktoolbar_wheelevent_isbase = value; }
    inline void setKToolBar_KeyPressEvent_IsBase(bool value) const { ktoolbar_keypressevent_isbase = value; }
    inline void setKToolBar_KeyReleaseEvent_IsBase(bool value) const { ktoolbar_keyreleaseevent_isbase = value; }
    inline void setKToolBar_FocusInEvent_IsBase(bool value) const { ktoolbar_focusinevent_isbase = value; }
    inline void setKToolBar_FocusOutEvent_IsBase(bool value) const { ktoolbar_focusoutevent_isbase = value; }
    inline void setKToolBar_EnterEvent_IsBase(bool value) const { ktoolbar_enterevent_isbase = value; }
    inline void setKToolBar_LeaveEvent_IsBase(bool value) const { ktoolbar_leaveevent_isbase = value; }
    inline void setKToolBar_MoveEvent_IsBase(bool value) const { ktoolbar_moveevent_isbase = value; }
    inline void setKToolBar_ResizeEvent_IsBase(bool value) const { ktoolbar_resizeevent_isbase = value; }
    inline void setKToolBar_CloseEvent_IsBase(bool value) const { ktoolbar_closeevent_isbase = value; }
    inline void setKToolBar_TabletEvent_IsBase(bool value) const { ktoolbar_tabletevent_isbase = value; }
    inline void setKToolBar_ShowEvent_IsBase(bool value) const { ktoolbar_showevent_isbase = value; }
    inline void setKToolBar_HideEvent_IsBase(bool value) const { ktoolbar_hideevent_isbase = value; }
    inline void setKToolBar_NativeEvent_IsBase(bool value) const { ktoolbar_nativeevent_isbase = value; }
    inline void setKToolBar_Metric_IsBase(bool value) const { ktoolbar_metric_isbase = value; }
    inline void setKToolBar_InitPainter_IsBase(bool value) const { ktoolbar_initpainter_isbase = value; }
    inline void setKToolBar_Redirected_IsBase(bool value) const { ktoolbar_redirected_isbase = value; }
    inline void setKToolBar_SharedPainter_IsBase(bool value) const { ktoolbar_sharedpainter_isbase = value; }
    inline void setKToolBar_InputMethodEvent_IsBase(bool value) const { ktoolbar_inputmethodevent_isbase = value; }
    inline void setKToolBar_InputMethodQuery_IsBase(bool value) const { ktoolbar_inputmethodquery_isbase = value; }
    inline void setKToolBar_FocusNextPrevChild_IsBase(bool value) const { ktoolbar_focusnextprevchild_isbase = value; }
    inline void setKToolBar_TimerEvent_IsBase(bool value) const { ktoolbar_timerevent_isbase = value; }
    inline void setKToolBar_ChildEvent_IsBase(bool value) const { ktoolbar_childevent_isbase = value; }
    inline void setKToolBar_CustomEvent_IsBase(bool value) const { ktoolbar_customevent_isbase = value; }
    inline void setKToolBar_ConnectNotify_IsBase(bool value) const { ktoolbar_connectnotify_isbase = value; }
    inline void setKToolBar_DisconnectNotify_IsBase(bool value) const { ktoolbar_disconnectnotify_isbase = value; }
    inline void setKToolBar_UpdateMicroFocus_IsBase(bool value) const { ktoolbar_updatemicrofocus_isbase = value; }
    inline void setKToolBar_Create_IsBase(bool value) const { ktoolbar_create_isbase = value; }
    inline void setKToolBar_Destroy_IsBase(bool value) const { ktoolbar_destroy_isbase = value; }
    inline void setKToolBar_FocusNextChild_IsBase(bool value) const { ktoolbar_focusnextchild_isbase = value; }
    inline void setKToolBar_FocusPreviousChild_IsBase(bool value) const { ktoolbar_focuspreviouschild_isbase = value; }
    inline void setKToolBar_Sender_IsBase(bool value) const { ktoolbar_sender_isbase = value; }
    inline void setKToolBar_SenderSignalIndex_IsBase(bool value) const { ktoolbar_sendersignalindex_isbase = value; }
    inline void setKToolBar_Receivers_IsBase(bool value) const { ktoolbar_receivers_isbase = value; }
    inline void setKToolBar_IsSignalConnected_IsBase(bool value) const { ktoolbar_issignalconnected_isbase = value; }
    inline void setKToolBar_GetDecodedMetricF_IsBase(bool value) const { ktoolbar_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktoolbar_metacall_isbase) {
            ktoolbar_metacall_isbase = false;
            return KToolBar::qt_metacall(param1, param2, param3);
        } else if (ktoolbar_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ktoolbar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KToolBar::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktoolbar_eventfilter_isbase) {
            ktoolbar_eventfilter_isbase = false;
            return KToolBar::eventFilter(watched, event);
        } else if (ktoolbar_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = ktoolbar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KToolBar::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotMovableChanged(bool movable) override {
        if (ktoolbar_slotmovablechanged_isbase) {
            ktoolbar_slotmovablechanged_isbase = false;
            KToolBar::slotMovableChanged(movable);
        } else if (ktoolbar_slotmovablechanged_callback != nullptr) {
            bool cbval1 = movable;

            ktoolbar_slotmovablechanged_callback(this, cbval1);
        } else {
            KToolBar::slotMovableChanged(movable);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (ktoolbar_contextmenuevent_isbase) {
            ktoolbar_contextmenuevent_isbase = false;
            KToolBar::contextMenuEvent(param1);
        } else if (ktoolbar_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            ktoolbar_contextmenuevent_callback(this, cbval1);
        } else {
            KToolBar::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (ktoolbar_actionevent_isbase) {
            ktoolbar_actionevent_isbase = false;
            KToolBar::actionEvent(param1);
        } else if (ktoolbar_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = param1;

            ktoolbar_actionevent_callback(this, cbval1);
        } else {
            KToolBar::actionEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (ktoolbar_dragenterevent_isbase) {
            ktoolbar_dragenterevent_isbase = false;
            KToolBar::dragEnterEvent(param1);
        } else if (ktoolbar_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = param1;

            ktoolbar_dragenterevent_callback(this, cbval1);
        } else {
            KToolBar::dragEnterEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* param1) override {
        if (ktoolbar_dragmoveevent_isbase) {
            ktoolbar_dragmoveevent_isbase = false;
            KToolBar::dragMoveEvent(param1);
        } else if (ktoolbar_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = param1;

            ktoolbar_dragmoveevent_callback(this, cbval1);
        } else {
            KToolBar::dragMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
        if (ktoolbar_dragleaveevent_isbase) {
            ktoolbar_dragleaveevent_isbase = false;
            KToolBar::dragLeaveEvent(param1);
        } else if (ktoolbar_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = param1;

            ktoolbar_dragleaveevent_callback(this, cbval1);
        } else {
            KToolBar::dragLeaveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (ktoolbar_dropevent_isbase) {
            ktoolbar_dropevent_isbase = false;
            KToolBar::dropEvent(param1);
        } else if (ktoolbar_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = param1;

            ktoolbar_dropevent_callback(this, cbval1);
        } else {
            KToolBar::dropEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (ktoolbar_mousepressevent_isbase) {
            ktoolbar_mousepressevent_isbase = false;
            KToolBar::mousePressEvent(param1);
        } else if (ktoolbar_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            ktoolbar_mousepressevent_callback(this, cbval1);
        } else {
            KToolBar::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (ktoolbar_mousemoveevent_isbase) {
            ktoolbar_mousemoveevent_isbase = false;
            KToolBar::mouseMoveEvent(param1);
        } else if (ktoolbar_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            ktoolbar_mousemoveevent_callback(this, cbval1);
        } else {
            KToolBar::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (ktoolbar_mousereleaseevent_isbase) {
            ktoolbar_mousereleaseevent_isbase = false;
            KToolBar::mouseReleaseEvent(param1);
        } else if (ktoolbar_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            ktoolbar_mousereleaseevent_callback(this, cbval1);
        } else {
            KToolBar::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (ktoolbar_changeevent_isbase) {
            ktoolbar_changeevent_isbase = false;
            KToolBar::changeEvent(event);
        } else if (ktoolbar_changeevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktoolbar_changeevent_callback(this, cbval1);
        } else {
            KToolBar::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (ktoolbar_paintevent_isbase) {
            ktoolbar_paintevent_isbase = false;
            KToolBar::paintEvent(event);
        } else if (ktoolbar_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            ktoolbar_paintevent_callback(this, cbval1);
        } else {
            KToolBar::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktoolbar_event_isbase) {
            ktoolbar_event_isbase = false;
            return KToolBar::event(event);
        } else if (ktoolbar_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = ktoolbar_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KToolBar::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionToolBar* option) const override {
        if (ktoolbar_initstyleoption_isbase) {
            ktoolbar_initstyleoption_isbase = false;
            KToolBar::initStyleOption(option);
        } else if (ktoolbar_initstyleoption_callback != nullptr) {
            QStyleOptionToolBar* cbval1 = option;

            ktoolbar_initstyleoption_callback(this, cbval1);
        } else {
            KToolBar::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ktoolbar_devtype_isbase) {
            ktoolbar_devtype_isbase = false;
            return KToolBar::devType();
        } else if (ktoolbar_devtype_callback != nullptr) {
            int callback_ret = ktoolbar_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KToolBar::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ktoolbar_setvisible_isbase) {
            ktoolbar_setvisible_isbase = false;
            KToolBar::setVisible(visible);
        } else if (ktoolbar_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            ktoolbar_setvisible_callback(this, cbval1);
        } else {
            KToolBar::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ktoolbar_sizehint_isbase) {
            ktoolbar_sizehint_isbase = false;
            return KToolBar::sizeHint();
        } else if (ktoolbar_sizehint_callback != nullptr) {
            QSize* callback_ret = ktoolbar_sizehint_callback();
            return *callback_ret;
        } else {
            return KToolBar::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ktoolbar_minimumsizehint_isbase) {
            ktoolbar_minimumsizehint_isbase = false;
            return KToolBar::minimumSizeHint();
        } else if (ktoolbar_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = ktoolbar_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KToolBar::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ktoolbar_heightforwidth_isbase) {
            ktoolbar_heightforwidth_isbase = false;
            return KToolBar::heightForWidth(param1);
        } else if (ktoolbar_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = ktoolbar_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KToolBar::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ktoolbar_hasheightforwidth_isbase) {
            ktoolbar_hasheightforwidth_isbase = false;
            return KToolBar::hasHeightForWidth();
        } else if (ktoolbar_hasheightforwidth_callback != nullptr) {
            bool callback_ret = ktoolbar_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KToolBar::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ktoolbar_paintengine_isbase) {
            ktoolbar_paintengine_isbase = false;
            return KToolBar::paintEngine();
        } else if (ktoolbar_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = ktoolbar_paintengine_callback();
            return callback_ret;
        } else {
            return KToolBar::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (ktoolbar_mousedoubleclickevent_isbase) {
            ktoolbar_mousedoubleclickevent_isbase = false;
            KToolBar::mouseDoubleClickEvent(event);
        } else if (ktoolbar_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ktoolbar_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KToolBar::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ktoolbar_wheelevent_isbase) {
            ktoolbar_wheelevent_isbase = false;
            KToolBar::wheelEvent(event);
        } else if (ktoolbar_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            ktoolbar_wheelevent_callback(this, cbval1);
        } else {
            KToolBar::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (ktoolbar_keypressevent_isbase) {
            ktoolbar_keypressevent_isbase = false;
            KToolBar::keyPressEvent(event);
        } else if (ktoolbar_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            ktoolbar_keypressevent_callback(this, cbval1);
        } else {
            KToolBar::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (ktoolbar_keyreleaseevent_isbase) {
            ktoolbar_keyreleaseevent_isbase = false;
            KToolBar::keyReleaseEvent(event);
        } else if (ktoolbar_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            ktoolbar_keyreleaseevent_callback(this, cbval1);
        } else {
            KToolBar::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (ktoolbar_focusinevent_isbase) {
            ktoolbar_focusinevent_isbase = false;
            KToolBar::focusInEvent(event);
        } else if (ktoolbar_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            ktoolbar_focusinevent_callback(this, cbval1);
        } else {
            KToolBar::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (ktoolbar_focusoutevent_isbase) {
            ktoolbar_focusoutevent_isbase = false;
            KToolBar::focusOutEvent(event);
        } else if (ktoolbar_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            ktoolbar_focusoutevent_callback(this, cbval1);
        } else {
            KToolBar::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ktoolbar_enterevent_isbase) {
            ktoolbar_enterevent_isbase = false;
            KToolBar::enterEvent(event);
        } else if (ktoolbar_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            ktoolbar_enterevent_callback(this, cbval1);
        } else {
            KToolBar::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ktoolbar_leaveevent_isbase) {
            ktoolbar_leaveevent_isbase = false;
            KToolBar::leaveEvent(event);
        } else if (ktoolbar_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktoolbar_leaveevent_callback(this, cbval1);
        } else {
            KToolBar::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ktoolbar_moveevent_isbase) {
            ktoolbar_moveevent_isbase = false;
            KToolBar::moveEvent(event);
        } else if (ktoolbar_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            ktoolbar_moveevent_callback(this, cbval1);
        } else {
            KToolBar::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (ktoolbar_resizeevent_isbase) {
            ktoolbar_resizeevent_isbase = false;
            KToolBar::resizeEvent(event);
        } else if (ktoolbar_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            ktoolbar_resizeevent_callback(this, cbval1);
        } else {
            KToolBar::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ktoolbar_closeevent_isbase) {
            ktoolbar_closeevent_isbase = false;
            KToolBar::closeEvent(event);
        } else if (ktoolbar_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            ktoolbar_closeevent_callback(this, cbval1);
        } else {
            KToolBar::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ktoolbar_tabletevent_isbase) {
            ktoolbar_tabletevent_isbase = false;
            KToolBar::tabletEvent(event);
        } else if (ktoolbar_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            ktoolbar_tabletevent_callback(this, cbval1);
        } else {
            KToolBar::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (ktoolbar_showevent_isbase) {
            ktoolbar_showevent_isbase = false;
            KToolBar::showEvent(event);
        } else if (ktoolbar_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            ktoolbar_showevent_callback(this, cbval1);
        } else {
            KToolBar::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (ktoolbar_hideevent_isbase) {
            ktoolbar_hideevent_isbase = false;
            KToolBar::hideEvent(event);
        } else if (ktoolbar_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            ktoolbar_hideevent_callback(this, cbval1);
        } else {
            KToolBar::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ktoolbar_nativeevent_isbase) {
            ktoolbar_nativeevent_isbase = false;
            return KToolBar::nativeEvent(eventType, message, result);
        } else if (ktoolbar_nativeevent_callback != nullptr) {
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

            bool callback_ret = ktoolbar_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KToolBar::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ktoolbar_metric_isbase) {
            ktoolbar_metric_isbase = false;
            return KToolBar::metric(param1);
        } else if (ktoolbar_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = ktoolbar_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KToolBar::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ktoolbar_initpainter_isbase) {
            ktoolbar_initpainter_isbase = false;
            KToolBar::initPainter(painter);
        } else if (ktoolbar_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            ktoolbar_initpainter_callback(this, cbval1);
        } else {
            KToolBar::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ktoolbar_redirected_isbase) {
            ktoolbar_redirected_isbase = false;
            return KToolBar::redirected(offset);
        } else if (ktoolbar_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = ktoolbar_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KToolBar::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ktoolbar_sharedpainter_isbase) {
            ktoolbar_sharedpainter_isbase = false;
            return KToolBar::sharedPainter();
        } else if (ktoolbar_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = ktoolbar_sharedpainter_callback();
            return callback_ret;
        } else {
            return KToolBar::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ktoolbar_inputmethodevent_isbase) {
            ktoolbar_inputmethodevent_isbase = false;
            KToolBar::inputMethodEvent(param1);
        } else if (ktoolbar_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            ktoolbar_inputmethodevent_callback(this, cbval1);
        } else {
            KToolBar::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ktoolbar_inputmethodquery_isbase) {
            ktoolbar_inputmethodquery_isbase = false;
            return KToolBar::inputMethodQuery(param1);
        } else if (ktoolbar_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = ktoolbar_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KToolBar::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ktoolbar_focusnextprevchild_isbase) {
            ktoolbar_focusnextprevchild_isbase = false;
            return KToolBar::focusNextPrevChild(next);
        } else if (ktoolbar_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = ktoolbar_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KToolBar::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktoolbar_timerevent_isbase) {
            ktoolbar_timerevent_isbase = false;
            KToolBar::timerEvent(event);
        } else if (ktoolbar_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ktoolbar_timerevent_callback(this, cbval1);
        } else {
            KToolBar::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktoolbar_childevent_isbase) {
            ktoolbar_childevent_isbase = false;
            KToolBar::childEvent(event);
        } else if (ktoolbar_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ktoolbar_childevent_callback(this, cbval1);
        } else {
            KToolBar::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktoolbar_customevent_isbase) {
            ktoolbar_customevent_isbase = false;
            KToolBar::customEvent(event);
        } else if (ktoolbar_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktoolbar_customevent_callback(this, cbval1);
        } else {
            KToolBar::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktoolbar_connectnotify_isbase) {
            ktoolbar_connectnotify_isbase = false;
            KToolBar::connectNotify(signal);
        } else if (ktoolbar_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktoolbar_connectnotify_callback(this, cbval1);
        } else {
            KToolBar::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktoolbar_disconnectnotify_isbase) {
            ktoolbar_disconnectnotify_isbase = false;
            KToolBar::disconnectNotify(signal);
        } else if (ktoolbar_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktoolbar_disconnectnotify_callback(this, cbval1);
        } else {
            KToolBar::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (ktoolbar_updatemicrofocus_isbase) {
            ktoolbar_updatemicrofocus_isbase = false;
            KToolBar::updateMicroFocus();
        } else if (ktoolbar_updatemicrofocus_callback != nullptr) {
            ktoolbar_updatemicrofocus_callback();
        } else {
            KToolBar::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (ktoolbar_create_isbase) {
            ktoolbar_create_isbase = false;
            KToolBar::create();
        } else if (ktoolbar_create_callback != nullptr) {
            ktoolbar_create_callback();
        } else {
            KToolBar::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (ktoolbar_destroy_isbase) {
            ktoolbar_destroy_isbase = false;
            KToolBar::destroy();
        } else if (ktoolbar_destroy_callback != nullptr) {
            ktoolbar_destroy_callback();
        } else {
            KToolBar::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (ktoolbar_focusnextchild_isbase) {
            ktoolbar_focusnextchild_isbase = false;
            return KToolBar::focusNextChild();
        } else if (ktoolbar_focusnextchild_callback != nullptr) {
            bool callback_ret = ktoolbar_focusnextchild_callback();
            return callback_ret;
        } else {
            return KToolBar::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (ktoolbar_focuspreviouschild_isbase) {
            ktoolbar_focuspreviouschild_isbase = false;
            return KToolBar::focusPreviousChild();
        } else if (ktoolbar_focuspreviouschild_callback != nullptr) {
            bool callback_ret = ktoolbar_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KToolBar::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktoolbar_sender_isbase) {
            ktoolbar_sender_isbase = false;
            return KToolBar::sender();
        } else if (ktoolbar_sender_callback != nullptr) {
            QObject* callback_ret = ktoolbar_sender_callback();
            return callback_ret;
        } else {
            return KToolBar::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktoolbar_sendersignalindex_isbase) {
            ktoolbar_sendersignalindex_isbase = false;
            return KToolBar::senderSignalIndex();
        } else if (ktoolbar_sendersignalindex_callback != nullptr) {
            int callback_ret = ktoolbar_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KToolBar::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktoolbar_receivers_isbase) {
            ktoolbar_receivers_isbase = false;
            return KToolBar::receivers(signal);
        } else if (ktoolbar_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ktoolbar_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KToolBar::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktoolbar_issignalconnected_isbase) {
            ktoolbar_issignalconnected_isbase = false;
            return KToolBar::isSignalConnected(signal);
        } else if (ktoolbar_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ktoolbar_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KToolBar::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (ktoolbar_getdecodedmetricf_isbase) {
            ktoolbar_getdecodedmetricf_isbase = false;
            return KToolBar::getDecodedMetricF(metricA, metricB);
        } else if (ktoolbar_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = ktoolbar_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KToolBar::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KToolBar_SlotMovableChanged(KToolBar* self, bool movable);
    friend void KToolBar_QBaseSlotMovableChanged(KToolBar* self, bool movable);
    friend void KToolBar_ContextMenuEvent(KToolBar* self, QContextMenuEvent* param1);
    friend void KToolBar_QBaseContextMenuEvent(KToolBar* self, QContextMenuEvent* param1);
    friend void KToolBar_ActionEvent(KToolBar* self, QActionEvent* param1);
    friend void KToolBar_QBaseActionEvent(KToolBar* self, QActionEvent* param1);
    friend void KToolBar_DragEnterEvent(KToolBar* self, QDragEnterEvent* param1);
    friend void KToolBar_QBaseDragEnterEvent(KToolBar* self, QDragEnterEvent* param1);
    friend void KToolBar_DragMoveEvent(KToolBar* self, QDragMoveEvent* param1);
    friend void KToolBar_QBaseDragMoveEvent(KToolBar* self, QDragMoveEvent* param1);
    friend void KToolBar_DragLeaveEvent(KToolBar* self, QDragLeaveEvent* param1);
    friend void KToolBar_QBaseDragLeaveEvent(KToolBar* self, QDragLeaveEvent* param1);
    friend void KToolBar_DropEvent(KToolBar* self, QDropEvent* param1);
    friend void KToolBar_QBaseDropEvent(KToolBar* self, QDropEvent* param1);
    friend void KToolBar_MousePressEvent(KToolBar* self, QMouseEvent* param1);
    friend void KToolBar_QBaseMousePressEvent(KToolBar* self, QMouseEvent* param1);
    friend void KToolBar_MouseMoveEvent(KToolBar* self, QMouseEvent* param1);
    friend void KToolBar_QBaseMouseMoveEvent(KToolBar* self, QMouseEvent* param1);
    friend void KToolBar_MouseReleaseEvent(KToolBar* self, QMouseEvent* param1);
    friend void KToolBar_QBaseMouseReleaseEvent(KToolBar* self, QMouseEvent* param1);
    friend void KToolBar_ChangeEvent(KToolBar* self, QEvent* event);
    friend void KToolBar_QBaseChangeEvent(KToolBar* self, QEvent* event);
    friend void KToolBar_PaintEvent(KToolBar* self, QPaintEvent* event);
    friend void KToolBar_QBasePaintEvent(KToolBar* self, QPaintEvent* event);
    friend bool KToolBar_Event(KToolBar* self, QEvent* event);
    friend bool KToolBar_QBaseEvent(KToolBar* self, QEvent* event);
    friend void KToolBar_InitStyleOption(const KToolBar* self, QStyleOptionToolBar* option);
    friend void KToolBar_QBaseInitStyleOption(const KToolBar* self, QStyleOptionToolBar* option);
    friend void KToolBar_MouseDoubleClickEvent(KToolBar* self, QMouseEvent* event);
    friend void KToolBar_QBaseMouseDoubleClickEvent(KToolBar* self, QMouseEvent* event);
    friend void KToolBar_WheelEvent(KToolBar* self, QWheelEvent* event);
    friend void KToolBar_QBaseWheelEvent(KToolBar* self, QWheelEvent* event);
    friend void KToolBar_KeyPressEvent(KToolBar* self, QKeyEvent* event);
    friend void KToolBar_QBaseKeyPressEvent(KToolBar* self, QKeyEvent* event);
    friend void KToolBar_KeyReleaseEvent(KToolBar* self, QKeyEvent* event);
    friend void KToolBar_QBaseKeyReleaseEvent(KToolBar* self, QKeyEvent* event);
    friend void KToolBar_FocusInEvent(KToolBar* self, QFocusEvent* event);
    friend void KToolBar_QBaseFocusInEvent(KToolBar* self, QFocusEvent* event);
    friend void KToolBar_FocusOutEvent(KToolBar* self, QFocusEvent* event);
    friend void KToolBar_QBaseFocusOutEvent(KToolBar* self, QFocusEvent* event);
    friend void KToolBar_EnterEvent(KToolBar* self, QEnterEvent* event);
    friend void KToolBar_QBaseEnterEvent(KToolBar* self, QEnterEvent* event);
    friend void KToolBar_LeaveEvent(KToolBar* self, QEvent* event);
    friend void KToolBar_QBaseLeaveEvent(KToolBar* self, QEvent* event);
    friend void KToolBar_MoveEvent(KToolBar* self, QMoveEvent* event);
    friend void KToolBar_QBaseMoveEvent(KToolBar* self, QMoveEvent* event);
    friend void KToolBar_ResizeEvent(KToolBar* self, QResizeEvent* event);
    friend void KToolBar_QBaseResizeEvent(KToolBar* self, QResizeEvent* event);
    friend void KToolBar_CloseEvent(KToolBar* self, QCloseEvent* event);
    friend void KToolBar_QBaseCloseEvent(KToolBar* self, QCloseEvent* event);
    friend void KToolBar_TabletEvent(KToolBar* self, QTabletEvent* event);
    friend void KToolBar_QBaseTabletEvent(KToolBar* self, QTabletEvent* event);
    friend void KToolBar_ShowEvent(KToolBar* self, QShowEvent* event);
    friend void KToolBar_QBaseShowEvent(KToolBar* self, QShowEvent* event);
    friend void KToolBar_HideEvent(KToolBar* self, QHideEvent* event);
    friend void KToolBar_QBaseHideEvent(KToolBar* self, QHideEvent* event);
    friend bool KToolBar_NativeEvent(KToolBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KToolBar_QBaseNativeEvent(KToolBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KToolBar_Metric(const KToolBar* self, int param1);
    friend int KToolBar_QBaseMetric(const KToolBar* self, int param1);
    friend void KToolBar_InitPainter(const KToolBar* self, QPainter* painter);
    friend void KToolBar_QBaseInitPainter(const KToolBar* self, QPainter* painter);
    friend QPaintDevice* KToolBar_Redirected(const KToolBar* self, QPoint* offset);
    friend QPaintDevice* KToolBar_QBaseRedirected(const KToolBar* self, QPoint* offset);
    friend QPainter* KToolBar_SharedPainter(const KToolBar* self);
    friend QPainter* KToolBar_QBaseSharedPainter(const KToolBar* self);
    friend void KToolBar_InputMethodEvent(KToolBar* self, QInputMethodEvent* param1);
    friend void KToolBar_QBaseInputMethodEvent(KToolBar* self, QInputMethodEvent* param1);
    friend bool KToolBar_FocusNextPrevChild(KToolBar* self, bool next);
    friend bool KToolBar_QBaseFocusNextPrevChild(KToolBar* self, bool next);
    friend void KToolBar_TimerEvent(KToolBar* self, QTimerEvent* event);
    friend void KToolBar_QBaseTimerEvent(KToolBar* self, QTimerEvent* event);
    friend void KToolBar_ChildEvent(KToolBar* self, QChildEvent* event);
    friend void KToolBar_QBaseChildEvent(KToolBar* self, QChildEvent* event);
    friend void KToolBar_CustomEvent(KToolBar* self, QEvent* event);
    friend void KToolBar_QBaseCustomEvent(KToolBar* self, QEvent* event);
    friend void KToolBar_ConnectNotify(KToolBar* self, const QMetaMethod* signal);
    friend void KToolBar_QBaseConnectNotify(KToolBar* self, const QMetaMethod* signal);
    friend void KToolBar_DisconnectNotify(KToolBar* self, const QMetaMethod* signal);
    friend void KToolBar_QBaseDisconnectNotify(KToolBar* self, const QMetaMethod* signal);
    friend void KToolBar_UpdateMicroFocus(KToolBar* self);
    friend void KToolBar_QBaseUpdateMicroFocus(KToolBar* self);
    friend void KToolBar_Create(KToolBar* self);
    friend void KToolBar_QBaseCreate(KToolBar* self);
    friend void KToolBar_Destroy(KToolBar* self);
    friend void KToolBar_QBaseDestroy(KToolBar* self);
    friend bool KToolBar_FocusNextChild(KToolBar* self);
    friend bool KToolBar_QBaseFocusNextChild(KToolBar* self);
    friend bool KToolBar_FocusPreviousChild(KToolBar* self);
    friend bool KToolBar_QBaseFocusPreviousChild(KToolBar* self);
    friend QObject* KToolBar_Sender(const KToolBar* self);
    friend QObject* KToolBar_QBaseSender(const KToolBar* self);
    friend int KToolBar_SenderSignalIndex(const KToolBar* self);
    friend int KToolBar_QBaseSenderSignalIndex(const KToolBar* self);
    friend int KToolBar_Receivers(const KToolBar* self, const char* signal);
    friend int KToolBar_QBaseReceivers(const KToolBar* self, const char* signal);
    friend bool KToolBar_IsSignalConnected(const KToolBar* self, const QMetaMethod* signal);
    friend bool KToolBar_QBaseIsSignalConnected(const KToolBar* self, const QMetaMethod* signal);
    friend double KToolBar_GetDecodedMetricF(const KToolBar* self, int metricA, int metricB);
    friend double KToolBar_QBaseGetDecodedMetricF(const KToolBar* self, int metricA, int metricB);
};

#endif
