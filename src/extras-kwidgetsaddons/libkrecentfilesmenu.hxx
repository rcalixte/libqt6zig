#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKRECENTFILESMENU_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKRECENTFILESMENU_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KRecentFilesMenu so that we can call protected methods
class VirtualKRecentFilesMenu final : public KRecentFilesMenu {

  public:
    // Virtual class boolean flag
    bool isVirtualKRecentFilesMenu = true;

    // Virtual class public types (including callbacks)
    using KRecentFilesMenu_MetaObject_Callback = QMetaObject* (*)();
    using KRecentFilesMenu_Metacast_Callback = void* (*)(KRecentFilesMenu*, const char*);
    using KRecentFilesMenu_Metacall_Callback = int (*)(KRecentFilesMenu*, int, int, void**);
    using KRecentFilesMenu_SizeHint_Callback = QSize* (*)();
    using KRecentFilesMenu_ChangeEvent_Callback = void (*)(KRecentFilesMenu*, QEvent*);
    using KRecentFilesMenu_KeyPressEvent_Callback = void (*)(KRecentFilesMenu*, QKeyEvent*);
    using KRecentFilesMenu_MouseReleaseEvent_Callback = void (*)(KRecentFilesMenu*, QMouseEvent*);
    using KRecentFilesMenu_MousePressEvent_Callback = void (*)(KRecentFilesMenu*, QMouseEvent*);
    using KRecentFilesMenu_MouseMoveEvent_Callback = void (*)(KRecentFilesMenu*, QMouseEvent*);
    using KRecentFilesMenu_WheelEvent_Callback = void (*)(KRecentFilesMenu*, QWheelEvent*);
    using KRecentFilesMenu_EnterEvent_Callback = void (*)(KRecentFilesMenu*, QEnterEvent*);
    using KRecentFilesMenu_LeaveEvent_Callback = void (*)(KRecentFilesMenu*, QEvent*);
    using KRecentFilesMenu_HideEvent_Callback = void (*)(KRecentFilesMenu*, QHideEvent*);
    using KRecentFilesMenu_PaintEvent_Callback = void (*)(KRecentFilesMenu*, QPaintEvent*);
    using KRecentFilesMenu_ActionEvent_Callback = void (*)(KRecentFilesMenu*, QActionEvent*);
    using KRecentFilesMenu_TimerEvent_Callback = void (*)(KRecentFilesMenu*, QTimerEvent*);
    using KRecentFilesMenu_Event_Callback = bool (*)(KRecentFilesMenu*, QEvent*);
    using KRecentFilesMenu_FocusNextPrevChild_Callback = bool (*)(KRecentFilesMenu*, bool);
    using KRecentFilesMenu_InitStyleOption_Callback = void (*)(const KRecentFilesMenu*, QStyleOptionMenuItem*, QAction*);
    using KRecentFilesMenu_DevType_Callback = int (*)();
    using KRecentFilesMenu_SetVisible_Callback = void (*)(KRecentFilesMenu*, bool);
    using KRecentFilesMenu_MinimumSizeHint_Callback = QSize* (*)();
    using KRecentFilesMenu_HeightForWidth_Callback = int (*)(const KRecentFilesMenu*, int);
    using KRecentFilesMenu_HasHeightForWidth_Callback = bool (*)();
    using KRecentFilesMenu_PaintEngine_Callback = QPaintEngine* (*)();
    using KRecentFilesMenu_MouseDoubleClickEvent_Callback = void (*)(KRecentFilesMenu*, QMouseEvent*);
    using KRecentFilesMenu_KeyReleaseEvent_Callback = void (*)(KRecentFilesMenu*, QKeyEvent*);
    using KRecentFilesMenu_FocusInEvent_Callback = void (*)(KRecentFilesMenu*, QFocusEvent*);
    using KRecentFilesMenu_FocusOutEvent_Callback = void (*)(KRecentFilesMenu*, QFocusEvent*);
    using KRecentFilesMenu_MoveEvent_Callback = void (*)(KRecentFilesMenu*, QMoveEvent*);
    using KRecentFilesMenu_ResizeEvent_Callback = void (*)(KRecentFilesMenu*, QResizeEvent*);
    using KRecentFilesMenu_CloseEvent_Callback = void (*)(KRecentFilesMenu*, QCloseEvent*);
    using KRecentFilesMenu_ContextMenuEvent_Callback = void (*)(KRecentFilesMenu*, QContextMenuEvent*);
    using KRecentFilesMenu_TabletEvent_Callback = void (*)(KRecentFilesMenu*, QTabletEvent*);
    using KRecentFilesMenu_DragEnterEvent_Callback = void (*)(KRecentFilesMenu*, QDragEnterEvent*);
    using KRecentFilesMenu_DragMoveEvent_Callback = void (*)(KRecentFilesMenu*, QDragMoveEvent*);
    using KRecentFilesMenu_DragLeaveEvent_Callback = void (*)(KRecentFilesMenu*, QDragLeaveEvent*);
    using KRecentFilesMenu_DropEvent_Callback = void (*)(KRecentFilesMenu*, QDropEvent*);
    using KRecentFilesMenu_ShowEvent_Callback = void (*)(KRecentFilesMenu*, QShowEvent*);
    using KRecentFilesMenu_NativeEvent_Callback = bool (*)(KRecentFilesMenu*, libqt_string, void*, intptr_t*);
    using KRecentFilesMenu_Metric_Callback = int (*)(const KRecentFilesMenu*, int);
    using KRecentFilesMenu_InitPainter_Callback = void (*)(const KRecentFilesMenu*, QPainter*);
    using KRecentFilesMenu_Redirected_Callback = QPaintDevice* (*)(const KRecentFilesMenu*, QPoint*);
    using KRecentFilesMenu_SharedPainter_Callback = QPainter* (*)();
    using KRecentFilesMenu_InputMethodEvent_Callback = void (*)(KRecentFilesMenu*, QInputMethodEvent*);
    using KRecentFilesMenu_InputMethodQuery_Callback = QVariant* (*)(const KRecentFilesMenu*, int);
    using KRecentFilesMenu_EventFilter_Callback = bool (*)(KRecentFilesMenu*, QObject*, QEvent*);
    using KRecentFilesMenu_ChildEvent_Callback = void (*)(KRecentFilesMenu*, QChildEvent*);
    using KRecentFilesMenu_CustomEvent_Callback = void (*)(KRecentFilesMenu*, QEvent*);
    using KRecentFilesMenu_ConnectNotify_Callback = void (*)(KRecentFilesMenu*, QMetaMethod*);
    using KRecentFilesMenu_DisconnectNotify_Callback = void (*)(KRecentFilesMenu*, QMetaMethod*);
    using KRecentFilesMenu_ColumnCount_Callback = int (*)();
    using KRecentFilesMenu_UpdateMicroFocus_Callback = void (*)();
    using KRecentFilesMenu_Create_Callback = void (*)();
    using KRecentFilesMenu_Destroy_Callback = void (*)();
    using KRecentFilesMenu_FocusNextChild_Callback = bool (*)();
    using KRecentFilesMenu_FocusPreviousChild_Callback = bool (*)();
    using KRecentFilesMenu_Sender_Callback = QObject* (*)();
    using KRecentFilesMenu_SenderSignalIndex_Callback = int (*)();
    using KRecentFilesMenu_Receivers_Callback = int (*)(const KRecentFilesMenu*, const char*);
    using KRecentFilesMenu_IsSignalConnected_Callback = bool (*)(const KRecentFilesMenu*, QMetaMethod*);
    using KRecentFilesMenu_GetDecodedMetricF_Callback = double (*)(const KRecentFilesMenu*, int, int);

  protected:
    // Instance callback storage
    KRecentFilesMenu_MetaObject_Callback krecentfilesmenu_metaobject_callback = nullptr;
    KRecentFilesMenu_Metacast_Callback krecentfilesmenu_metacast_callback = nullptr;
    KRecentFilesMenu_Metacall_Callback krecentfilesmenu_metacall_callback = nullptr;
    KRecentFilesMenu_SizeHint_Callback krecentfilesmenu_sizehint_callback = nullptr;
    KRecentFilesMenu_ChangeEvent_Callback krecentfilesmenu_changeevent_callback = nullptr;
    KRecentFilesMenu_KeyPressEvent_Callback krecentfilesmenu_keypressevent_callback = nullptr;
    KRecentFilesMenu_MouseReleaseEvent_Callback krecentfilesmenu_mousereleaseevent_callback = nullptr;
    KRecentFilesMenu_MousePressEvent_Callback krecentfilesmenu_mousepressevent_callback = nullptr;
    KRecentFilesMenu_MouseMoveEvent_Callback krecentfilesmenu_mousemoveevent_callback = nullptr;
    KRecentFilesMenu_WheelEvent_Callback krecentfilesmenu_wheelevent_callback = nullptr;
    KRecentFilesMenu_EnterEvent_Callback krecentfilesmenu_enterevent_callback = nullptr;
    KRecentFilesMenu_LeaveEvent_Callback krecentfilesmenu_leaveevent_callback = nullptr;
    KRecentFilesMenu_HideEvent_Callback krecentfilesmenu_hideevent_callback = nullptr;
    KRecentFilesMenu_PaintEvent_Callback krecentfilesmenu_paintevent_callback = nullptr;
    KRecentFilesMenu_ActionEvent_Callback krecentfilesmenu_actionevent_callback = nullptr;
    KRecentFilesMenu_TimerEvent_Callback krecentfilesmenu_timerevent_callback = nullptr;
    KRecentFilesMenu_Event_Callback krecentfilesmenu_event_callback = nullptr;
    KRecentFilesMenu_FocusNextPrevChild_Callback krecentfilesmenu_focusnextprevchild_callback = nullptr;
    KRecentFilesMenu_InitStyleOption_Callback krecentfilesmenu_initstyleoption_callback = nullptr;
    KRecentFilesMenu_DevType_Callback krecentfilesmenu_devtype_callback = nullptr;
    KRecentFilesMenu_SetVisible_Callback krecentfilesmenu_setvisible_callback = nullptr;
    KRecentFilesMenu_MinimumSizeHint_Callback krecentfilesmenu_minimumsizehint_callback = nullptr;
    KRecentFilesMenu_HeightForWidth_Callback krecentfilesmenu_heightforwidth_callback = nullptr;
    KRecentFilesMenu_HasHeightForWidth_Callback krecentfilesmenu_hasheightforwidth_callback = nullptr;
    KRecentFilesMenu_PaintEngine_Callback krecentfilesmenu_paintengine_callback = nullptr;
    KRecentFilesMenu_MouseDoubleClickEvent_Callback krecentfilesmenu_mousedoubleclickevent_callback = nullptr;
    KRecentFilesMenu_KeyReleaseEvent_Callback krecentfilesmenu_keyreleaseevent_callback = nullptr;
    KRecentFilesMenu_FocusInEvent_Callback krecentfilesmenu_focusinevent_callback = nullptr;
    KRecentFilesMenu_FocusOutEvent_Callback krecentfilesmenu_focusoutevent_callback = nullptr;
    KRecentFilesMenu_MoveEvent_Callback krecentfilesmenu_moveevent_callback = nullptr;
    KRecentFilesMenu_ResizeEvent_Callback krecentfilesmenu_resizeevent_callback = nullptr;
    KRecentFilesMenu_CloseEvent_Callback krecentfilesmenu_closeevent_callback = nullptr;
    KRecentFilesMenu_ContextMenuEvent_Callback krecentfilesmenu_contextmenuevent_callback = nullptr;
    KRecentFilesMenu_TabletEvent_Callback krecentfilesmenu_tabletevent_callback = nullptr;
    KRecentFilesMenu_DragEnterEvent_Callback krecentfilesmenu_dragenterevent_callback = nullptr;
    KRecentFilesMenu_DragMoveEvent_Callback krecentfilesmenu_dragmoveevent_callback = nullptr;
    KRecentFilesMenu_DragLeaveEvent_Callback krecentfilesmenu_dragleaveevent_callback = nullptr;
    KRecentFilesMenu_DropEvent_Callback krecentfilesmenu_dropevent_callback = nullptr;
    KRecentFilesMenu_ShowEvent_Callback krecentfilesmenu_showevent_callback = nullptr;
    KRecentFilesMenu_NativeEvent_Callback krecentfilesmenu_nativeevent_callback = nullptr;
    KRecentFilesMenu_Metric_Callback krecentfilesmenu_metric_callback = nullptr;
    KRecentFilesMenu_InitPainter_Callback krecentfilesmenu_initpainter_callback = nullptr;
    KRecentFilesMenu_Redirected_Callback krecentfilesmenu_redirected_callback = nullptr;
    KRecentFilesMenu_SharedPainter_Callback krecentfilesmenu_sharedpainter_callback = nullptr;
    KRecentFilesMenu_InputMethodEvent_Callback krecentfilesmenu_inputmethodevent_callback = nullptr;
    KRecentFilesMenu_InputMethodQuery_Callback krecentfilesmenu_inputmethodquery_callback = nullptr;
    KRecentFilesMenu_EventFilter_Callback krecentfilesmenu_eventfilter_callback = nullptr;
    KRecentFilesMenu_ChildEvent_Callback krecentfilesmenu_childevent_callback = nullptr;
    KRecentFilesMenu_CustomEvent_Callback krecentfilesmenu_customevent_callback = nullptr;
    KRecentFilesMenu_ConnectNotify_Callback krecentfilesmenu_connectnotify_callback = nullptr;
    KRecentFilesMenu_DisconnectNotify_Callback krecentfilesmenu_disconnectnotify_callback = nullptr;
    KRecentFilesMenu_ColumnCount_Callback krecentfilesmenu_columncount_callback = nullptr;
    KRecentFilesMenu_UpdateMicroFocus_Callback krecentfilesmenu_updatemicrofocus_callback = nullptr;
    KRecentFilesMenu_Create_Callback krecentfilesmenu_create_callback = nullptr;
    KRecentFilesMenu_Destroy_Callback krecentfilesmenu_destroy_callback = nullptr;
    KRecentFilesMenu_FocusNextChild_Callback krecentfilesmenu_focusnextchild_callback = nullptr;
    KRecentFilesMenu_FocusPreviousChild_Callback krecentfilesmenu_focuspreviouschild_callback = nullptr;
    KRecentFilesMenu_Sender_Callback krecentfilesmenu_sender_callback = nullptr;
    KRecentFilesMenu_SenderSignalIndex_Callback krecentfilesmenu_sendersignalindex_callback = nullptr;
    KRecentFilesMenu_Receivers_Callback krecentfilesmenu_receivers_callback = nullptr;
    KRecentFilesMenu_IsSignalConnected_Callback krecentfilesmenu_issignalconnected_callback = nullptr;
    KRecentFilesMenu_GetDecodedMetricF_Callback krecentfilesmenu_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool krecentfilesmenu_metaobject_isbase = false;
    mutable bool krecentfilesmenu_metacast_isbase = false;
    mutable bool krecentfilesmenu_metacall_isbase = false;
    mutable bool krecentfilesmenu_sizehint_isbase = false;
    mutable bool krecentfilesmenu_changeevent_isbase = false;
    mutable bool krecentfilesmenu_keypressevent_isbase = false;
    mutable bool krecentfilesmenu_mousereleaseevent_isbase = false;
    mutable bool krecentfilesmenu_mousepressevent_isbase = false;
    mutable bool krecentfilesmenu_mousemoveevent_isbase = false;
    mutable bool krecentfilesmenu_wheelevent_isbase = false;
    mutable bool krecentfilesmenu_enterevent_isbase = false;
    mutable bool krecentfilesmenu_leaveevent_isbase = false;
    mutable bool krecentfilesmenu_hideevent_isbase = false;
    mutable bool krecentfilesmenu_paintevent_isbase = false;
    mutable bool krecentfilesmenu_actionevent_isbase = false;
    mutable bool krecentfilesmenu_timerevent_isbase = false;
    mutable bool krecentfilesmenu_event_isbase = false;
    mutable bool krecentfilesmenu_focusnextprevchild_isbase = false;
    mutable bool krecentfilesmenu_initstyleoption_isbase = false;
    mutable bool krecentfilesmenu_devtype_isbase = false;
    mutable bool krecentfilesmenu_setvisible_isbase = false;
    mutable bool krecentfilesmenu_minimumsizehint_isbase = false;
    mutable bool krecentfilesmenu_heightforwidth_isbase = false;
    mutable bool krecentfilesmenu_hasheightforwidth_isbase = false;
    mutable bool krecentfilesmenu_paintengine_isbase = false;
    mutable bool krecentfilesmenu_mousedoubleclickevent_isbase = false;
    mutable bool krecentfilesmenu_keyreleaseevent_isbase = false;
    mutable bool krecentfilesmenu_focusinevent_isbase = false;
    mutable bool krecentfilesmenu_focusoutevent_isbase = false;
    mutable bool krecentfilesmenu_moveevent_isbase = false;
    mutable bool krecentfilesmenu_resizeevent_isbase = false;
    mutable bool krecentfilesmenu_closeevent_isbase = false;
    mutable bool krecentfilesmenu_contextmenuevent_isbase = false;
    mutable bool krecentfilesmenu_tabletevent_isbase = false;
    mutable bool krecentfilesmenu_dragenterevent_isbase = false;
    mutable bool krecentfilesmenu_dragmoveevent_isbase = false;
    mutable bool krecentfilesmenu_dragleaveevent_isbase = false;
    mutable bool krecentfilesmenu_dropevent_isbase = false;
    mutable bool krecentfilesmenu_showevent_isbase = false;
    mutable bool krecentfilesmenu_nativeevent_isbase = false;
    mutable bool krecentfilesmenu_metric_isbase = false;
    mutable bool krecentfilesmenu_initpainter_isbase = false;
    mutable bool krecentfilesmenu_redirected_isbase = false;
    mutable bool krecentfilesmenu_sharedpainter_isbase = false;
    mutable bool krecentfilesmenu_inputmethodevent_isbase = false;
    mutable bool krecentfilesmenu_inputmethodquery_isbase = false;
    mutable bool krecentfilesmenu_eventfilter_isbase = false;
    mutable bool krecentfilesmenu_childevent_isbase = false;
    mutable bool krecentfilesmenu_customevent_isbase = false;
    mutable bool krecentfilesmenu_connectnotify_isbase = false;
    mutable bool krecentfilesmenu_disconnectnotify_isbase = false;
    mutable bool krecentfilesmenu_columncount_isbase = false;
    mutable bool krecentfilesmenu_updatemicrofocus_isbase = false;
    mutable bool krecentfilesmenu_create_isbase = false;
    mutable bool krecentfilesmenu_destroy_isbase = false;
    mutable bool krecentfilesmenu_focusnextchild_isbase = false;
    mutable bool krecentfilesmenu_focuspreviouschild_isbase = false;
    mutable bool krecentfilesmenu_sender_isbase = false;
    mutable bool krecentfilesmenu_sendersignalindex_isbase = false;
    mutable bool krecentfilesmenu_receivers_isbase = false;
    mutable bool krecentfilesmenu_issignalconnected_isbase = false;
    mutable bool krecentfilesmenu_getdecodedmetricf_isbase = false;

  public:
    VirtualKRecentFilesMenu(QWidget* parent) : KRecentFilesMenu(parent) {};
    VirtualKRecentFilesMenu(const QString& title) : KRecentFilesMenu(title) {};
    VirtualKRecentFilesMenu() : KRecentFilesMenu() {};
    VirtualKRecentFilesMenu(const QString& title, QWidget* parent) : KRecentFilesMenu(title, parent) {};

    // Callback setters
    inline void setKRecentFilesMenu_MetaObject_Callback(KRecentFilesMenu_MetaObject_Callback cb) { krecentfilesmenu_metaobject_callback = cb; }
    inline void setKRecentFilesMenu_Metacast_Callback(KRecentFilesMenu_Metacast_Callback cb) { krecentfilesmenu_metacast_callback = cb; }
    inline void setKRecentFilesMenu_Metacall_Callback(KRecentFilesMenu_Metacall_Callback cb) { krecentfilesmenu_metacall_callback = cb; }
    inline void setKRecentFilesMenu_SizeHint_Callback(KRecentFilesMenu_SizeHint_Callback cb) { krecentfilesmenu_sizehint_callback = cb; }
    inline void setKRecentFilesMenu_ChangeEvent_Callback(KRecentFilesMenu_ChangeEvent_Callback cb) { krecentfilesmenu_changeevent_callback = cb; }
    inline void setKRecentFilesMenu_KeyPressEvent_Callback(KRecentFilesMenu_KeyPressEvent_Callback cb) { krecentfilesmenu_keypressevent_callback = cb; }
    inline void setKRecentFilesMenu_MouseReleaseEvent_Callback(KRecentFilesMenu_MouseReleaseEvent_Callback cb) { krecentfilesmenu_mousereleaseevent_callback = cb; }
    inline void setKRecentFilesMenu_MousePressEvent_Callback(KRecentFilesMenu_MousePressEvent_Callback cb) { krecentfilesmenu_mousepressevent_callback = cb; }
    inline void setKRecentFilesMenu_MouseMoveEvent_Callback(KRecentFilesMenu_MouseMoveEvent_Callback cb) { krecentfilesmenu_mousemoveevent_callback = cb; }
    inline void setKRecentFilesMenu_WheelEvent_Callback(KRecentFilesMenu_WheelEvent_Callback cb) { krecentfilesmenu_wheelevent_callback = cb; }
    inline void setKRecentFilesMenu_EnterEvent_Callback(KRecentFilesMenu_EnterEvent_Callback cb) { krecentfilesmenu_enterevent_callback = cb; }
    inline void setKRecentFilesMenu_LeaveEvent_Callback(KRecentFilesMenu_LeaveEvent_Callback cb) { krecentfilesmenu_leaveevent_callback = cb; }
    inline void setKRecentFilesMenu_HideEvent_Callback(KRecentFilesMenu_HideEvent_Callback cb) { krecentfilesmenu_hideevent_callback = cb; }
    inline void setKRecentFilesMenu_PaintEvent_Callback(KRecentFilesMenu_PaintEvent_Callback cb) { krecentfilesmenu_paintevent_callback = cb; }
    inline void setKRecentFilesMenu_ActionEvent_Callback(KRecentFilesMenu_ActionEvent_Callback cb) { krecentfilesmenu_actionevent_callback = cb; }
    inline void setKRecentFilesMenu_TimerEvent_Callback(KRecentFilesMenu_TimerEvent_Callback cb) { krecentfilesmenu_timerevent_callback = cb; }
    inline void setKRecentFilesMenu_Event_Callback(KRecentFilesMenu_Event_Callback cb) { krecentfilesmenu_event_callback = cb; }
    inline void setKRecentFilesMenu_FocusNextPrevChild_Callback(KRecentFilesMenu_FocusNextPrevChild_Callback cb) { krecentfilesmenu_focusnextprevchild_callback = cb; }
    inline void setKRecentFilesMenu_InitStyleOption_Callback(KRecentFilesMenu_InitStyleOption_Callback cb) { krecentfilesmenu_initstyleoption_callback = cb; }
    inline void setKRecentFilesMenu_DevType_Callback(KRecentFilesMenu_DevType_Callback cb) { krecentfilesmenu_devtype_callback = cb; }
    inline void setKRecentFilesMenu_SetVisible_Callback(KRecentFilesMenu_SetVisible_Callback cb) { krecentfilesmenu_setvisible_callback = cb; }
    inline void setKRecentFilesMenu_MinimumSizeHint_Callback(KRecentFilesMenu_MinimumSizeHint_Callback cb) { krecentfilesmenu_minimumsizehint_callback = cb; }
    inline void setKRecentFilesMenu_HeightForWidth_Callback(KRecentFilesMenu_HeightForWidth_Callback cb) { krecentfilesmenu_heightforwidth_callback = cb; }
    inline void setKRecentFilesMenu_HasHeightForWidth_Callback(KRecentFilesMenu_HasHeightForWidth_Callback cb) { krecentfilesmenu_hasheightforwidth_callback = cb; }
    inline void setKRecentFilesMenu_PaintEngine_Callback(KRecentFilesMenu_PaintEngine_Callback cb) { krecentfilesmenu_paintengine_callback = cb; }
    inline void setKRecentFilesMenu_MouseDoubleClickEvent_Callback(KRecentFilesMenu_MouseDoubleClickEvent_Callback cb) { krecentfilesmenu_mousedoubleclickevent_callback = cb; }
    inline void setKRecentFilesMenu_KeyReleaseEvent_Callback(KRecentFilesMenu_KeyReleaseEvent_Callback cb) { krecentfilesmenu_keyreleaseevent_callback = cb; }
    inline void setKRecentFilesMenu_FocusInEvent_Callback(KRecentFilesMenu_FocusInEvent_Callback cb) { krecentfilesmenu_focusinevent_callback = cb; }
    inline void setKRecentFilesMenu_FocusOutEvent_Callback(KRecentFilesMenu_FocusOutEvent_Callback cb) { krecentfilesmenu_focusoutevent_callback = cb; }
    inline void setKRecentFilesMenu_MoveEvent_Callback(KRecentFilesMenu_MoveEvent_Callback cb) { krecentfilesmenu_moveevent_callback = cb; }
    inline void setKRecentFilesMenu_ResizeEvent_Callback(KRecentFilesMenu_ResizeEvent_Callback cb) { krecentfilesmenu_resizeevent_callback = cb; }
    inline void setKRecentFilesMenu_CloseEvent_Callback(KRecentFilesMenu_CloseEvent_Callback cb) { krecentfilesmenu_closeevent_callback = cb; }
    inline void setKRecentFilesMenu_ContextMenuEvent_Callback(KRecentFilesMenu_ContextMenuEvent_Callback cb) { krecentfilesmenu_contextmenuevent_callback = cb; }
    inline void setKRecentFilesMenu_TabletEvent_Callback(KRecentFilesMenu_TabletEvent_Callback cb) { krecentfilesmenu_tabletevent_callback = cb; }
    inline void setKRecentFilesMenu_DragEnterEvent_Callback(KRecentFilesMenu_DragEnterEvent_Callback cb) { krecentfilesmenu_dragenterevent_callback = cb; }
    inline void setKRecentFilesMenu_DragMoveEvent_Callback(KRecentFilesMenu_DragMoveEvent_Callback cb) { krecentfilesmenu_dragmoveevent_callback = cb; }
    inline void setKRecentFilesMenu_DragLeaveEvent_Callback(KRecentFilesMenu_DragLeaveEvent_Callback cb) { krecentfilesmenu_dragleaveevent_callback = cb; }
    inline void setKRecentFilesMenu_DropEvent_Callback(KRecentFilesMenu_DropEvent_Callback cb) { krecentfilesmenu_dropevent_callback = cb; }
    inline void setKRecentFilesMenu_ShowEvent_Callback(KRecentFilesMenu_ShowEvent_Callback cb) { krecentfilesmenu_showevent_callback = cb; }
    inline void setKRecentFilesMenu_NativeEvent_Callback(KRecentFilesMenu_NativeEvent_Callback cb) { krecentfilesmenu_nativeevent_callback = cb; }
    inline void setKRecentFilesMenu_Metric_Callback(KRecentFilesMenu_Metric_Callback cb) { krecentfilesmenu_metric_callback = cb; }
    inline void setKRecentFilesMenu_InitPainter_Callback(KRecentFilesMenu_InitPainter_Callback cb) { krecentfilesmenu_initpainter_callback = cb; }
    inline void setKRecentFilesMenu_Redirected_Callback(KRecentFilesMenu_Redirected_Callback cb) { krecentfilesmenu_redirected_callback = cb; }
    inline void setKRecentFilesMenu_SharedPainter_Callback(KRecentFilesMenu_SharedPainter_Callback cb) { krecentfilesmenu_sharedpainter_callback = cb; }
    inline void setKRecentFilesMenu_InputMethodEvent_Callback(KRecentFilesMenu_InputMethodEvent_Callback cb) { krecentfilesmenu_inputmethodevent_callback = cb; }
    inline void setKRecentFilesMenu_InputMethodQuery_Callback(KRecentFilesMenu_InputMethodQuery_Callback cb) { krecentfilesmenu_inputmethodquery_callback = cb; }
    inline void setKRecentFilesMenu_EventFilter_Callback(KRecentFilesMenu_EventFilter_Callback cb) { krecentfilesmenu_eventfilter_callback = cb; }
    inline void setKRecentFilesMenu_ChildEvent_Callback(KRecentFilesMenu_ChildEvent_Callback cb) { krecentfilesmenu_childevent_callback = cb; }
    inline void setKRecentFilesMenu_CustomEvent_Callback(KRecentFilesMenu_CustomEvent_Callback cb) { krecentfilesmenu_customevent_callback = cb; }
    inline void setKRecentFilesMenu_ConnectNotify_Callback(KRecentFilesMenu_ConnectNotify_Callback cb) { krecentfilesmenu_connectnotify_callback = cb; }
    inline void setKRecentFilesMenu_DisconnectNotify_Callback(KRecentFilesMenu_DisconnectNotify_Callback cb) { krecentfilesmenu_disconnectnotify_callback = cb; }
    inline void setKRecentFilesMenu_ColumnCount_Callback(KRecentFilesMenu_ColumnCount_Callback cb) { krecentfilesmenu_columncount_callback = cb; }
    inline void setKRecentFilesMenu_UpdateMicroFocus_Callback(KRecentFilesMenu_UpdateMicroFocus_Callback cb) { krecentfilesmenu_updatemicrofocus_callback = cb; }
    inline void setKRecentFilesMenu_Create_Callback(KRecentFilesMenu_Create_Callback cb) { krecentfilesmenu_create_callback = cb; }
    inline void setKRecentFilesMenu_Destroy_Callback(KRecentFilesMenu_Destroy_Callback cb) { krecentfilesmenu_destroy_callback = cb; }
    inline void setKRecentFilesMenu_FocusNextChild_Callback(KRecentFilesMenu_FocusNextChild_Callback cb) { krecentfilesmenu_focusnextchild_callback = cb; }
    inline void setKRecentFilesMenu_FocusPreviousChild_Callback(KRecentFilesMenu_FocusPreviousChild_Callback cb) { krecentfilesmenu_focuspreviouschild_callback = cb; }
    inline void setKRecentFilesMenu_Sender_Callback(KRecentFilesMenu_Sender_Callback cb) { krecentfilesmenu_sender_callback = cb; }
    inline void setKRecentFilesMenu_SenderSignalIndex_Callback(KRecentFilesMenu_SenderSignalIndex_Callback cb) { krecentfilesmenu_sendersignalindex_callback = cb; }
    inline void setKRecentFilesMenu_Receivers_Callback(KRecentFilesMenu_Receivers_Callback cb) { krecentfilesmenu_receivers_callback = cb; }
    inline void setKRecentFilesMenu_IsSignalConnected_Callback(KRecentFilesMenu_IsSignalConnected_Callback cb) { krecentfilesmenu_issignalconnected_callback = cb; }
    inline void setKRecentFilesMenu_GetDecodedMetricF_Callback(KRecentFilesMenu_GetDecodedMetricF_Callback cb) { krecentfilesmenu_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKRecentFilesMenu_MetaObject_IsBase(bool value) const { krecentfilesmenu_metaobject_isbase = value; }
    inline void setKRecentFilesMenu_Metacast_IsBase(bool value) const { krecentfilesmenu_metacast_isbase = value; }
    inline void setKRecentFilesMenu_Metacall_IsBase(bool value) const { krecentfilesmenu_metacall_isbase = value; }
    inline void setKRecentFilesMenu_SizeHint_IsBase(bool value) const { krecentfilesmenu_sizehint_isbase = value; }
    inline void setKRecentFilesMenu_ChangeEvent_IsBase(bool value) const { krecentfilesmenu_changeevent_isbase = value; }
    inline void setKRecentFilesMenu_KeyPressEvent_IsBase(bool value) const { krecentfilesmenu_keypressevent_isbase = value; }
    inline void setKRecentFilesMenu_MouseReleaseEvent_IsBase(bool value) const { krecentfilesmenu_mousereleaseevent_isbase = value; }
    inline void setKRecentFilesMenu_MousePressEvent_IsBase(bool value) const { krecentfilesmenu_mousepressevent_isbase = value; }
    inline void setKRecentFilesMenu_MouseMoveEvent_IsBase(bool value) const { krecentfilesmenu_mousemoveevent_isbase = value; }
    inline void setKRecentFilesMenu_WheelEvent_IsBase(bool value) const { krecentfilesmenu_wheelevent_isbase = value; }
    inline void setKRecentFilesMenu_EnterEvent_IsBase(bool value) const { krecentfilesmenu_enterevent_isbase = value; }
    inline void setKRecentFilesMenu_LeaveEvent_IsBase(bool value) const { krecentfilesmenu_leaveevent_isbase = value; }
    inline void setKRecentFilesMenu_HideEvent_IsBase(bool value) const { krecentfilesmenu_hideevent_isbase = value; }
    inline void setKRecentFilesMenu_PaintEvent_IsBase(bool value) const { krecentfilesmenu_paintevent_isbase = value; }
    inline void setKRecentFilesMenu_ActionEvent_IsBase(bool value) const { krecentfilesmenu_actionevent_isbase = value; }
    inline void setKRecentFilesMenu_TimerEvent_IsBase(bool value) const { krecentfilesmenu_timerevent_isbase = value; }
    inline void setKRecentFilesMenu_Event_IsBase(bool value) const { krecentfilesmenu_event_isbase = value; }
    inline void setKRecentFilesMenu_FocusNextPrevChild_IsBase(bool value) const { krecentfilesmenu_focusnextprevchild_isbase = value; }
    inline void setKRecentFilesMenu_InitStyleOption_IsBase(bool value) const { krecentfilesmenu_initstyleoption_isbase = value; }
    inline void setKRecentFilesMenu_DevType_IsBase(bool value) const { krecentfilesmenu_devtype_isbase = value; }
    inline void setKRecentFilesMenu_SetVisible_IsBase(bool value) const { krecentfilesmenu_setvisible_isbase = value; }
    inline void setKRecentFilesMenu_MinimumSizeHint_IsBase(bool value) const { krecentfilesmenu_minimumsizehint_isbase = value; }
    inline void setKRecentFilesMenu_HeightForWidth_IsBase(bool value) const { krecentfilesmenu_heightforwidth_isbase = value; }
    inline void setKRecentFilesMenu_HasHeightForWidth_IsBase(bool value) const { krecentfilesmenu_hasheightforwidth_isbase = value; }
    inline void setKRecentFilesMenu_PaintEngine_IsBase(bool value) const { krecentfilesmenu_paintengine_isbase = value; }
    inline void setKRecentFilesMenu_MouseDoubleClickEvent_IsBase(bool value) const { krecentfilesmenu_mousedoubleclickevent_isbase = value; }
    inline void setKRecentFilesMenu_KeyReleaseEvent_IsBase(bool value) const { krecentfilesmenu_keyreleaseevent_isbase = value; }
    inline void setKRecentFilesMenu_FocusInEvent_IsBase(bool value) const { krecentfilesmenu_focusinevent_isbase = value; }
    inline void setKRecentFilesMenu_FocusOutEvent_IsBase(bool value) const { krecentfilesmenu_focusoutevent_isbase = value; }
    inline void setKRecentFilesMenu_MoveEvent_IsBase(bool value) const { krecentfilesmenu_moveevent_isbase = value; }
    inline void setKRecentFilesMenu_ResizeEvent_IsBase(bool value) const { krecentfilesmenu_resizeevent_isbase = value; }
    inline void setKRecentFilesMenu_CloseEvent_IsBase(bool value) const { krecentfilesmenu_closeevent_isbase = value; }
    inline void setKRecentFilesMenu_ContextMenuEvent_IsBase(bool value) const { krecentfilesmenu_contextmenuevent_isbase = value; }
    inline void setKRecentFilesMenu_TabletEvent_IsBase(bool value) const { krecentfilesmenu_tabletevent_isbase = value; }
    inline void setKRecentFilesMenu_DragEnterEvent_IsBase(bool value) const { krecentfilesmenu_dragenterevent_isbase = value; }
    inline void setKRecentFilesMenu_DragMoveEvent_IsBase(bool value) const { krecentfilesmenu_dragmoveevent_isbase = value; }
    inline void setKRecentFilesMenu_DragLeaveEvent_IsBase(bool value) const { krecentfilesmenu_dragleaveevent_isbase = value; }
    inline void setKRecentFilesMenu_DropEvent_IsBase(bool value) const { krecentfilesmenu_dropevent_isbase = value; }
    inline void setKRecentFilesMenu_ShowEvent_IsBase(bool value) const { krecentfilesmenu_showevent_isbase = value; }
    inline void setKRecentFilesMenu_NativeEvent_IsBase(bool value) const { krecentfilesmenu_nativeevent_isbase = value; }
    inline void setKRecentFilesMenu_Metric_IsBase(bool value) const { krecentfilesmenu_metric_isbase = value; }
    inline void setKRecentFilesMenu_InitPainter_IsBase(bool value) const { krecentfilesmenu_initpainter_isbase = value; }
    inline void setKRecentFilesMenu_Redirected_IsBase(bool value) const { krecentfilesmenu_redirected_isbase = value; }
    inline void setKRecentFilesMenu_SharedPainter_IsBase(bool value) const { krecentfilesmenu_sharedpainter_isbase = value; }
    inline void setKRecentFilesMenu_InputMethodEvent_IsBase(bool value) const { krecentfilesmenu_inputmethodevent_isbase = value; }
    inline void setKRecentFilesMenu_InputMethodQuery_IsBase(bool value) const { krecentfilesmenu_inputmethodquery_isbase = value; }
    inline void setKRecentFilesMenu_EventFilter_IsBase(bool value) const { krecentfilesmenu_eventfilter_isbase = value; }
    inline void setKRecentFilesMenu_ChildEvent_IsBase(bool value) const { krecentfilesmenu_childevent_isbase = value; }
    inline void setKRecentFilesMenu_CustomEvent_IsBase(bool value) const { krecentfilesmenu_customevent_isbase = value; }
    inline void setKRecentFilesMenu_ConnectNotify_IsBase(bool value) const { krecentfilesmenu_connectnotify_isbase = value; }
    inline void setKRecentFilesMenu_DisconnectNotify_IsBase(bool value) const { krecentfilesmenu_disconnectnotify_isbase = value; }
    inline void setKRecentFilesMenu_ColumnCount_IsBase(bool value) const { krecentfilesmenu_columncount_isbase = value; }
    inline void setKRecentFilesMenu_UpdateMicroFocus_IsBase(bool value) const { krecentfilesmenu_updatemicrofocus_isbase = value; }
    inline void setKRecentFilesMenu_Create_IsBase(bool value) const { krecentfilesmenu_create_isbase = value; }
    inline void setKRecentFilesMenu_Destroy_IsBase(bool value) const { krecentfilesmenu_destroy_isbase = value; }
    inline void setKRecentFilesMenu_FocusNextChild_IsBase(bool value) const { krecentfilesmenu_focusnextchild_isbase = value; }
    inline void setKRecentFilesMenu_FocusPreviousChild_IsBase(bool value) const { krecentfilesmenu_focuspreviouschild_isbase = value; }
    inline void setKRecentFilesMenu_Sender_IsBase(bool value) const { krecentfilesmenu_sender_isbase = value; }
    inline void setKRecentFilesMenu_SenderSignalIndex_IsBase(bool value) const { krecentfilesmenu_sendersignalindex_isbase = value; }
    inline void setKRecentFilesMenu_Receivers_IsBase(bool value) const { krecentfilesmenu_receivers_isbase = value; }
    inline void setKRecentFilesMenu_IsSignalConnected_IsBase(bool value) const { krecentfilesmenu_issignalconnected_isbase = value; }
    inline void setKRecentFilesMenu_GetDecodedMetricF_IsBase(bool value) const { krecentfilesmenu_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (krecentfilesmenu_metaobject_isbase) {
            krecentfilesmenu_metaobject_isbase = false;
            return KRecentFilesMenu::metaObject();
        }
        auto metaobject_cb = krecentfilesmenu_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KRecentFilesMenu::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (krecentfilesmenu_metacast_isbase) {
            krecentfilesmenu_metacast_isbase = false;
            return KRecentFilesMenu::qt_metacast(param1);
        }
        auto metacast_cb = krecentfilesmenu_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KRecentFilesMenu::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (krecentfilesmenu_metacall_isbase) {
            krecentfilesmenu_metacall_isbase = false;
            return KRecentFilesMenu::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = krecentfilesmenu_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KRecentFilesMenu::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (krecentfilesmenu_sizehint_isbase) {
            krecentfilesmenu_sizehint_isbase = false;
            return KRecentFilesMenu::sizeHint();
        }
        auto sizehint_cb = krecentfilesmenu_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KRecentFilesMenu::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (krecentfilesmenu_changeevent_isbase) {
            krecentfilesmenu_changeevent_isbase = false;
            KRecentFilesMenu::changeEvent(param1);
            return;
        }
        auto changeevent_cb = krecentfilesmenu_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (krecentfilesmenu_keypressevent_isbase) {
            krecentfilesmenu_keypressevent_isbase = false;
            KRecentFilesMenu::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = krecentfilesmenu_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (krecentfilesmenu_mousereleaseevent_isbase) {
            krecentfilesmenu_mousereleaseevent_isbase = false;
            KRecentFilesMenu::mouseReleaseEvent(param1);
            return;
        }
        auto mousereleaseevent_cb = krecentfilesmenu_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (krecentfilesmenu_mousepressevent_isbase) {
            krecentfilesmenu_mousepressevent_isbase = false;
            KRecentFilesMenu::mousePressEvent(param1);
            return;
        }
        auto mousepressevent_cb = krecentfilesmenu_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (krecentfilesmenu_mousemoveevent_isbase) {
            krecentfilesmenu_mousemoveevent_isbase = false;
            KRecentFilesMenu::mouseMoveEvent(param1);
            return;
        }
        auto mousemoveevent_cb = krecentfilesmenu_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (krecentfilesmenu_wheelevent_isbase) {
            krecentfilesmenu_wheelevent_isbase = false;
            KRecentFilesMenu::wheelEvent(param1);
            return;
        }
        auto wheelevent_cb = krecentfilesmenu_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = param1;

            wheelevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* param1) override {
        if (krecentfilesmenu_enterevent_isbase) {
            krecentfilesmenu_enterevent_isbase = false;
            KRecentFilesMenu::enterEvent(param1);
            return;
        }
        auto enterevent_cb = krecentfilesmenu_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = param1;

            enterevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::enterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (krecentfilesmenu_leaveevent_isbase) {
            krecentfilesmenu_leaveevent_isbase = false;
            KRecentFilesMenu::leaveEvent(param1);
            return;
        }
        auto leaveevent_cb = krecentfilesmenu_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = param1;

            leaveevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::leaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (krecentfilesmenu_hideevent_isbase) {
            krecentfilesmenu_hideevent_isbase = false;
            KRecentFilesMenu::hideEvent(param1);
            return;
        }
        auto hideevent_cb = krecentfilesmenu_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = param1;

            hideevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::hideEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (krecentfilesmenu_paintevent_isbase) {
            krecentfilesmenu_paintevent_isbase = false;
            KRecentFilesMenu::paintEvent(param1);
            return;
        }
        auto paintevent_cb = krecentfilesmenu_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;

            paintevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (krecentfilesmenu_actionevent_isbase) {
            krecentfilesmenu_actionevent_isbase = false;
            KRecentFilesMenu::actionEvent(param1);
            return;
        }
        auto actionevent_cb = krecentfilesmenu_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = param1;

            actionevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::actionEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (krecentfilesmenu_timerevent_isbase) {
            krecentfilesmenu_timerevent_isbase = false;
            KRecentFilesMenu::timerEvent(param1);
            return;
        }
        auto timerevent_cb = krecentfilesmenu_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = param1;

            timerevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (krecentfilesmenu_event_isbase) {
            krecentfilesmenu_event_isbase = false;
            return KRecentFilesMenu::event(param1);
        }
        auto event_cb = krecentfilesmenu_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KRecentFilesMenu::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (krecentfilesmenu_focusnextprevchild_isbase) {
            krecentfilesmenu_focusnextprevchild_isbase = false;
            return KRecentFilesMenu::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = krecentfilesmenu_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KRecentFilesMenu::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionMenuItem* option, const QAction* action) const override {
        if (krecentfilesmenu_initstyleoption_isbase) {
            krecentfilesmenu_initstyleoption_isbase = false;
            KRecentFilesMenu::initStyleOption(option, action);
            return;
        }
        auto initstyleoption_cb = krecentfilesmenu_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionMenuItem* cbval1 = option;
            QAction* cbval2 = (QAction*)action;

            initstyleoption_cb(this, cbval1, cbval2);
            return;
        }
        KRecentFilesMenu::initStyleOption(option, action);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (krecentfilesmenu_devtype_isbase) {
            krecentfilesmenu_devtype_isbase = false;
            return KRecentFilesMenu::devType();
        }
        auto devtype_cb = krecentfilesmenu_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KRecentFilesMenu::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (krecentfilesmenu_setvisible_isbase) {
            krecentfilesmenu_setvisible_isbase = false;
            KRecentFilesMenu::setVisible(visible);
            return;
        }
        auto setvisible_cb = krecentfilesmenu_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (krecentfilesmenu_minimumsizehint_isbase) {
            krecentfilesmenu_minimumsizehint_isbase = false;
            return KRecentFilesMenu::minimumSizeHint();
        }
        auto minimumsizehint_cb = krecentfilesmenu_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KRecentFilesMenu::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (krecentfilesmenu_heightforwidth_isbase) {
            krecentfilesmenu_heightforwidth_isbase = false;
            return KRecentFilesMenu::heightForWidth(param1);
        }
        auto heightforwidth_cb = krecentfilesmenu_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KRecentFilesMenu::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (krecentfilesmenu_hasheightforwidth_isbase) {
            krecentfilesmenu_hasheightforwidth_isbase = false;
            return KRecentFilesMenu::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = krecentfilesmenu_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KRecentFilesMenu::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (krecentfilesmenu_paintengine_isbase) {
            krecentfilesmenu_paintengine_isbase = false;
            return KRecentFilesMenu::paintEngine();
        }
        auto paintengine_cb = krecentfilesmenu_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KRecentFilesMenu::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (krecentfilesmenu_mousedoubleclickevent_isbase) {
            krecentfilesmenu_mousedoubleclickevent_isbase = false;
            KRecentFilesMenu::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = krecentfilesmenu_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (krecentfilesmenu_keyreleaseevent_isbase) {
            krecentfilesmenu_keyreleaseevent_isbase = false;
            KRecentFilesMenu::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = krecentfilesmenu_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (krecentfilesmenu_focusinevent_isbase) {
            krecentfilesmenu_focusinevent_isbase = false;
            KRecentFilesMenu::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = krecentfilesmenu_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (krecentfilesmenu_focusoutevent_isbase) {
            krecentfilesmenu_focusoutevent_isbase = false;
            KRecentFilesMenu::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = krecentfilesmenu_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (krecentfilesmenu_moveevent_isbase) {
            krecentfilesmenu_moveevent_isbase = false;
            KRecentFilesMenu::moveEvent(event);
            return;
        }
        auto moveevent_cb = krecentfilesmenu_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (krecentfilesmenu_resizeevent_isbase) {
            krecentfilesmenu_resizeevent_isbase = false;
            KRecentFilesMenu::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = krecentfilesmenu_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (krecentfilesmenu_closeevent_isbase) {
            krecentfilesmenu_closeevent_isbase = false;
            KRecentFilesMenu::closeEvent(event);
            return;
        }
        auto closeevent_cb = krecentfilesmenu_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (krecentfilesmenu_contextmenuevent_isbase) {
            krecentfilesmenu_contextmenuevent_isbase = false;
            KRecentFilesMenu::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = krecentfilesmenu_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (krecentfilesmenu_tabletevent_isbase) {
            krecentfilesmenu_tabletevent_isbase = false;
            KRecentFilesMenu::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = krecentfilesmenu_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (krecentfilesmenu_dragenterevent_isbase) {
            krecentfilesmenu_dragenterevent_isbase = false;
            KRecentFilesMenu::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = krecentfilesmenu_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (krecentfilesmenu_dragmoveevent_isbase) {
            krecentfilesmenu_dragmoveevent_isbase = false;
            KRecentFilesMenu::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = krecentfilesmenu_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (krecentfilesmenu_dragleaveevent_isbase) {
            krecentfilesmenu_dragleaveevent_isbase = false;
            KRecentFilesMenu::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = krecentfilesmenu_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (krecentfilesmenu_dropevent_isbase) {
            krecentfilesmenu_dropevent_isbase = false;
            KRecentFilesMenu::dropEvent(event);
            return;
        }
        auto dropevent_cb = krecentfilesmenu_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (krecentfilesmenu_showevent_isbase) {
            krecentfilesmenu_showevent_isbase = false;
            KRecentFilesMenu::showEvent(event);
            return;
        }
        auto showevent_cb = krecentfilesmenu_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (krecentfilesmenu_nativeevent_isbase) {
            krecentfilesmenu_nativeevent_isbase = false;
            return KRecentFilesMenu::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = krecentfilesmenu_nativeevent_callback;
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
        return KRecentFilesMenu::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (krecentfilesmenu_metric_isbase) {
            krecentfilesmenu_metric_isbase = false;
            return KRecentFilesMenu::metric(param1);
        }
        auto metric_cb = krecentfilesmenu_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KRecentFilesMenu::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (krecentfilesmenu_initpainter_isbase) {
            krecentfilesmenu_initpainter_isbase = false;
            KRecentFilesMenu::initPainter(painter);
            return;
        }
        auto initpainter_cb = krecentfilesmenu_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (krecentfilesmenu_redirected_isbase) {
            krecentfilesmenu_redirected_isbase = false;
            return KRecentFilesMenu::redirected(offset);
        }
        auto redirected_cb = krecentfilesmenu_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KRecentFilesMenu::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (krecentfilesmenu_sharedpainter_isbase) {
            krecentfilesmenu_sharedpainter_isbase = false;
            return KRecentFilesMenu::sharedPainter();
        }
        auto sharedpainter_cb = krecentfilesmenu_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KRecentFilesMenu::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (krecentfilesmenu_inputmethodevent_isbase) {
            krecentfilesmenu_inputmethodevent_isbase = false;
            KRecentFilesMenu::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = krecentfilesmenu_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (krecentfilesmenu_inputmethodquery_isbase) {
            krecentfilesmenu_inputmethodquery_isbase = false;
            return KRecentFilesMenu::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = krecentfilesmenu_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KRecentFilesMenu::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (krecentfilesmenu_eventfilter_isbase) {
            krecentfilesmenu_eventfilter_isbase = false;
            return KRecentFilesMenu::eventFilter(watched, event);
        }
        auto eventfilter_cb = krecentfilesmenu_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KRecentFilesMenu::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (krecentfilesmenu_childevent_isbase) {
            krecentfilesmenu_childevent_isbase = false;
            KRecentFilesMenu::childEvent(event);
            return;
        }
        auto childevent_cb = krecentfilesmenu_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (krecentfilesmenu_customevent_isbase) {
            krecentfilesmenu_customevent_isbase = false;
            KRecentFilesMenu::customEvent(event);
            return;
        }
        auto customevent_cb = krecentfilesmenu_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (krecentfilesmenu_connectnotify_isbase) {
            krecentfilesmenu_connectnotify_isbase = false;
            KRecentFilesMenu::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = krecentfilesmenu_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (krecentfilesmenu_disconnectnotify_isbase) {
            krecentfilesmenu_disconnectnotify_isbase = false;
            KRecentFilesMenu::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = krecentfilesmenu_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KRecentFilesMenu::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    int columnCount() const {
        if (krecentfilesmenu_columncount_isbase) {
            krecentfilesmenu_columncount_isbase = false;
            return KRecentFilesMenu::columnCount();
        }
        auto columncount_cb = krecentfilesmenu_columncount_callback;
        if (columncount_cb) {
            int callback_ret = columncount_cb();
            return static_cast<int>(callback_ret);
        }
        return KRecentFilesMenu::columnCount();
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (krecentfilesmenu_updatemicrofocus_isbase) {
            krecentfilesmenu_updatemicrofocus_isbase = false;
            KRecentFilesMenu::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = krecentfilesmenu_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KRecentFilesMenu::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (krecentfilesmenu_create_isbase) {
            krecentfilesmenu_create_isbase = false;
            KRecentFilesMenu::create();
            return;
        }
        auto create_cb = krecentfilesmenu_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KRecentFilesMenu::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (krecentfilesmenu_destroy_isbase) {
            krecentfilesmenu_destroy_isbase = false;
            KRecentFilesMenu::destroy();
            return;
        }
        auto destroy_cb = krecentfilesmenu_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KRecentFilesMenu::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (krecentfilesmenu_focusnextchild_isbase) {
            krecentfilesmenu_focusnextchild_isbase = false;
            return KRecentFilesMenu::focusNextChild();
        }
        auto focusnextchild_cb = krecentfilesmenu_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KRecentFilesMenu::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (krecentfilesmenu_focuspreviouschild_isbase) {
            krecentfilesmenu_focuspreviouschild_isbase = false;
            return KRecentFilesMenu::focusPreviousChild();
        }
        auto focuspreviouschild_cb = krecentfilesmenu_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KRecentFilesMenu::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (krecentfilesmenu_sender_isbase) {
            krecentfilesmenu_sender_isbase = false;
            return KRecentFilesMenu::sender();
        }
        auto sender_cb = krecentfilesmenu_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KRecentFilesMenu::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (krecentfilesmenu_sendersignalindex_isbase) {
            krecentfilesmenu_sendersignalindex_isbase = false;
            return KRecentFilesMenu::senderSignalIndex();
        }
        auto sendersignalindex_cb = krecentfilesmenu_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KRecentFilesMenu::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (krecentfilesmenu_receivers_isbase) {
            krecentfilesmenu_receivers_isbase = false;
            return KRecentFilesMenu::receivers(signal);
        }
        auto receivers_cb = krecentfilesmenu_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KRecentFilesMenu::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (krecentfilesmenu_issignalconnected_isbase) {
            krecentfilesmenu_issignalconnected_isbase = false;
            return KRecentFilesMenu::isSignalConnected(signal);
        }
        auto issignalconnected_cb = krecentfilesmenu_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KRecentFilesMenu::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (krecentfilesmenu_getdecodedmetricf_isbase) {
            krecentfilesmenu_getdecodedmetricf_isbase = false;
            return KRecentFilesMenu::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = krecentfilesmenu_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KRecentFilesMenu::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KRecentFilesMenu_ChangeEvent(KRecentFilesMenu* self, QEvent* param1);
    friend void KRecentFilesMenu_SuperChangeEvent(KRecentFilesMenu* self, QEvent* param1);
    friend void KRecentFilesMenu_KeyPressEvent(KRecentFilesMenu* self, QKeyEvent* param1);
    friend void KRecentFilesMenu_SuperKeyPressEvent(KRecentFilesMenu* self, QKeyEvent* param1);
    friend void KRecentFilesMenu_MouseReleaseEvent(KRecentFilesMenu* self, QMouseEvent* param1);
    friend void KRecentFilesMenu_SuperMouseReleaseEvent(KRecentFilesMenu* self, QMouseEvent* param1);
    friend void KRecentFilesMenu_MousePressEvent(KRecentFilesMenu* self, QMouseEvent* param1);
    friend void KRecentFilesMenu_SuperMousePressEvent(KRecentFilesMenu* self, QMouseEvent* param1);
    friend void KRecentFilesMenu_MouseMoveEvent(KRecentFilesMenu* self, QMouseEvent* param1);
    friend void KRecentFilesMenu_SuperMouseMoveEvent(KRecentFilesMenu* self, QMouseEvent* param1);
    friend void KRecentFilesMenu_WheelEvent(KRecentFilesMenu* self, QWheelEvent* param1);
    friend void KRecentFilesMenu_SuperWheelEvent(KRecentFilesMenu* self, QWheelEvent* param1);
    friend void KRecentFilesMenu_EnterEvent(KRecentFilesMenu* self, QEnterEvent* param1);
    friend void KRecentFilesMenu_SuperEnterEvent(KRecentFilesMenu* self, QEnterEvent* param1);
    friend void KRecentFilesMenu_LeaveEvent(KRecentFilesMenu* self, QEvent* param1);
    friend void KRecentFilesMenu_SuperLeaveEvent(KRecentFilesMenu* self, QEvent* param1);
    friend void KRecentFilesMenu_HideEvent(KRecentFilesMenu* self, QHideEvent* param1);
    friend void KRecentFilesMenu_SuperHideEvent(KRecentFilesMenu* self, QHideEvent* param1);
    friend void KRecentFilesMenu_PaintEvent(KRecentFilesMenu* self, QPaintEvent* param1);
    friend void KRecentFilesMenu_SuperPaintEvent(KRecentFilesMenu* self, QPaintEvent* param1);
    friend void KRecentFilesMenu_ActionEvent(KRecentFilesMenu* self, QActionEvent* param1);
    friend void KRecentFilesMenu_SuperActionEvent(KRecentFilesMenu* self, QActionEvent* param1);
    friend void KRecentFilesMenu_TimerEvent(KRecentFilesMenu* self, QTimerEvent* param1);
    friend void KRecentFilesMenu_SuperTimerEvent(KRecentFilesMenu* self, QTimerEvent* param1);
    friend bool KRecentFilesMenu_Event(KRecentFilesMenu* self, QEvent* param1);
    friend bool KRecentFilesMenu_SuperEvent(KRecentFilesMenu* self, QEvent* param1);
    friend bool KRecentFilesMenu_FocusNextPrevChild(KRecentFilesMenu* self, bool next);
    friend bool KRecentFilesMenu_SuperFocusNextPrevChild(KRecentFilesMenu* self, bool next);
    friend void KRecentFilesMenu_InitStyleOption(const KRecentFilesMenu* self, QStyleOptionMenuItem* option, const QAction* action);
    friend void KRecentFilesMenu_SuperInitStyleOption(const KRecentFilesMenu* self, QStyleOptionMenuItem* option, const QAction* action);
    friend void KRecentFilesMenu_MouseDoubleClickEvent(KRecentFilesMenu* self, QMouseEvent* event);
    friend void KRecentFilesMenu_SuperMouseDoubleClickEvent(KRecentFilesMenu* self, QMouseEvent* event);
    friend void KRecentFilesMenu_KeyReleaseEvent(KRecentFilesMenu* self, QKeyEvent* event);
    friend void KRecentFilesMenu_SuperKeyReleaseEvent(KRecentFilesMenu* self, QKeyEvent* event);
    friend void KRecentFilesMenu_FocusInEvent(KRecentFilesMenu* self, QFocusEvent* event);
    friend void KRecentFilesMenu_SuperFocusInEvent(KRecentFilesMenu* self, QFocusEvent* event);
    friend void KRecentFilesMenu_FocusOutEvent(KRecentFilesMenu* self, QFocusEvent* event);
    friend void KRecentFilesMenu_SuperFocusOutEvent(KRecentFilesMenu* self, QFocusEvent* event);
    friend void KRecentFilesMenu_MoveEvent(KRecentFilesMenu* self, QMoveEvent* event);
    friend void KRecentFilesMenu_SuperMoveEvent(KRecentFilesMenu* self, QMoveEvent* event);
    friend void KRecentFilesMenu_ResizeEvent(KRecentFilesMenu* self, QResizeEvent* event);
    friend void KRecentFilesMenu_SuperResizeEvent(KRecentFilesMenu* self, QResizeEvent* event);
    friend void KRecentFilesMenu_CloseEvent(KRecentFilesMenu* self, QCloseEvent* event);
    friend void KRecentFilesMenu_SuperCloseEvent(KRecentFilesMenu* self, QCloseEvent* event);
    friend void KRecentFilesMenu_ContextMenuEvent(KRecentFilesMenu* self, QContextMenuEvent* event);
    friend void KRecentFilesMenu_SuperContextMenuEvent(KRecentFilesMenu* self, QContextMenuEvent* event);
    friend void KRecentFilesMenu_TabletEvent(KRecentFilesMenu* self, QTabletEvent* event);
    friend void KRecentFilesMenu_SuperTabletEvent(KRecentFilesMenu* self, QTabletEvent* event);
    friend void KRecentFilesMenu_DragEnterEvent(KRecentFilesMenu* self, QDragEnterEvent* event);
    friend void KRecentFilesMenu_SuperDragEnterEvent(KRecentFilesMenu* self, QDragEnterEvent* event);
    friend void KRecentFilesMenu_DragMoveEvent(KRecentFilesMenu* self, QDragMoveEvent* event);
    friend void KRecentFilesMenu_SuperDragMoveEvent(KRecentFilesMenu* self, QDragMoveEvent* event);
    friend void KRecentFilesMenu_DragLeaveEvent(KRecentFilesMenu* self, QDragLeaveEvent* event);
    friend void KRecentFilesMenu_SuperDragLeaveEvent(KRecentFilesMenu* self, QDragLeaveEvent* event);
    friend void KRecentFilesMenu_DropEvent(KRecentFilesMenu* self, QDropEvent* event);
    friend void KRecentFilesMenu_SuperDropEvent(KRecentFilesMenu* self, QDropEvent* event);
    friend void KRecentFilesMenu_ShowEvent(KRecentFilesMenu* self, QShowEvent* event);
    friend void KRecentFilesMenu_SuperShowEvent(KRecentFilesMenu* self, QShowEvent* event);
    friend bool KRecentFilesMenu_NativeEvent(KRecentFilesMenu* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KRecentFilesMenu_SuperNativeEvent(KRecentFilesMenu* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KRecentFilesMenu_Metric(const KRecentFilesMenu* self, int param1);
    friend int KRecentFilesMenu_SuperMetric(const KRecentFilesMenu* self, int param1);
    friend void KRecentFilesMenu_InitPainter(const KRecentFilesMenu* self, QPainter* painter);
    friend void KRecentFilesMenu_SuperInitPainter(const KRecentFilesMenu* self, QPainter* painter);
    friend QPaintDevice* KRecentFilesMenu_Redirected(const KRecentFilesMenu* self, QPoint* offset);
    friend QPaintDevice* KRecentFilesMenu_SuperRedirected(const KRecentFilesMenu* self, QPoint* offset);
    friend QPainter* KRecentFilesMenu_SharedPainter(const KRecentFilesMenu* self);
    friend QPainter* KRecentFilesMenu_SuperSharedPainter(const KRecentFilesMenu* self);
    friend void KRecentFilesMenu_InputMethodEvent(KRecentFilesMenu* self, QInputMethodEvent* param1);
    friend void KRecentFilesMenu_SuperInputMethodEvent(KRecentFilesMenu* self, QInputMethodEvent* param1);
    friend void KRecentFilesMenu_ChildEvent(KRecentFilesMenu* self, QChildEvent* event);
    friend void KRecentFilesMenu_SuperChildEvent(KRecentFilesMenu* self, QChildEvent* event);
    friend void KRecentFilesMenu_CustomEvent(KRecentFilesMenu* self, QEvent* event);
    friend void KRecentFilesMenu_SuperCustomEvent(KRecentFilesMenu* self, QEvent* event);
    friend void KRecentFilesMenu_ConnectNotify(KRecentFilesMenu* self, const QMetaMethod* signal);
    friend void KRecentFilesMenu_SuperConnectNotify(KRecentFilesMenu* self, const QMetaMethod* signal);
    friend void KRecentFilesMenu_DisconnectNotify(KRecentFilesMenu* self, const QMetaMethod* signal);
    friend void KRecentFilesMenu_SuperDisconnectNotify(KRecentFilesMenu* self, const QMetaMethod* signal);
    friend int KRecentFilesMenu_ColumnCount(const KRecentFilesMenu* self);
    friend int KRecentFilesMenu_SuperColumnCount(const KRecentFilesMenu* self);
    friend void KRecentFilesMenu_UpdateMicroFocus(KRecentFilesMenu* self);
    friend void KRecentFilesMenu_SuperUpdateMicroFocus(KRecentFilesMenu* self);
    friend void KRecentFilesMenu_Create(KRecentFilesMenu* self);
    friend void KRecentFilesMenu_SuperCreate(KRecentFilesMenu* self);
    friend void KRecentFilesMenu_Destroy(KRecentFilesMenu* self);
    friend void KRecentFilesMenu_SuperDestroy(KRecentFilesMenu* self);
    friend bool KRecentFilesMenu_FocusNextChild(KRecentFilesMenu* self);
    friend bool KRecentFilesMenu_SuperFocusNextChild(KRecentFilesMenu* self);
    friend bool KRecentFilesMenu_FocusPreviousChild(KRecentFilesMenu* self);
    friend bool KRecentFilesMenu_SuperFocusPreviousChild(KRecentFilesMenu* self);
    friend QObject* KRecentFilesMenu_Sender(const KRecentFilesMenu* self);
    friend QObject* KRecentFilesMenu_SuperSender(const KRecentFilesMenu* self);
    friend int KRecentFilesMenu_SenderSignalIndex(const KRecentFilesMenu* self);
    friend int KRecentFilesMenu_SuperSenderSignalIndex(const KRecentFilesMenu* self);
    friend int KRecentFilesMenu_Receivers(const KRecentFilesMenu* self, const char* signal);
    friend int KRecentFilesMenu_SuperReceivers(const KRecentFilesMenu* self, const char* signal);
    friend bool KRecentFilesMenu_IsSignalConnected(const KRecentFilesMenu* self, const QMetaMethod* signal);
    friend bool KRecentFilesMenu_SuperIsSignalConnected(const KRecentFilesMenu* self, const QMetaMethod* signal);
    friend double KRecentFilesMenu_GetDecodedMetricF(const KRecentFilesMenu* self, int metricA, int metricB);
    friend double KRecentFilesMenu_SuperGetDecodedMetricF(const KRecentFilesMenu* self, int metricA, int metricB);
};

#endif
