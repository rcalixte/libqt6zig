#pragma once
#ifndef SRC_EXTRAS_KITEMVIEWSC_LIBVIRTUALKTREEWIDGETSEARCHLINE_H
#define SRC_EXTRAS_KITEMVIEWSC_LIBVIRTUALKTREEWIDGETSEARCHLINE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTreeWidgetSearchLine so that we can call protected methods
class VirtualKTreeWidgetSearchLine final : public KTreeWidgetSearchLine {

  public:
    // Virtual class boolean flag
    bool isVirtualKTreeWidgetSearchLine = true;

    // Virtual class public types (including callbacks)
    using KTreeWidgetSearchLine_Metacall_Callback = int (*)(KTreeWidgetSearchLine*, int, int, void**);
    using KTreeWidgetSearchLine_UpdateSearch_Callback = void (*)(KTreeWidgetSearchLine*, libqt_string);
    using KTreeWidgetSearchLine_ItemMatches_Callback = bool (*)(const KTreeWidgetSearchLine*, QTreeWidgetItem*, libqt_string);
    using KTreeWidgetSearchLine_ContextMenuEvent_Callback = void (*)(KTreeWidgetSearchLine*, QContextMenuEvent*);
    using KTreeWidgetSearchLine_UpdateSearch2_Callback = void (*)(KTreeWidgetSearchLine*, QTreeWidget*);
    using KTreeWidgetSearchLine_ConnectTreeWidget_Callback = void (*)(KTreeWidgetSearchLine*, QTreeWidget*);
    using KTreeWidgetSearchLine_DisconnectTreeWidget_Callback = void (*)(KTreeWidgetSearchLine*, QTreeWidget*);
    using KTreeWidgetSearchLine_CanChooseColumnsCheck_Callback = bool (*)();
    using KTreeWidgetSearchLine_Event_Callback = bool (*)(KTreeWidgetSearchLine*, QEvent*);
    using KTreeWidgetSearchLine_SizeHint_Callback = QSize* (*)();
    using KTreeWidgetSearchLine_MinimumSizeHint_Callback = QSize* (*)();
    using KTreeWidgetSearchLine_MousePressEvent_Callback = void (*)(KTreeWidgetSearchLine*, QMouseEvent*);
    using KTreeWidgetSearchLine_MouseMoveEvent_Callback = void (*)(KTreeWidgetSearchLine*, QMouseEvent*);
    using KTreeWidgetSearchLine_MouseReleaseEvent_Callback = void (*)(KTreeWidgetSearchLine*, QMouseEvent*);
    using KTreeWidgetSearchLine_MouseDoubleClickEvent_Callback = void (*)(KTreeWidgetSearchLine*, QMouseEvent*);
    using KTreeWidgetSearchLine_KeyPressEvent_Callback = void (*)(KTreeWidgetSearchLine*, QKeyEvent*);
    using KTreeWidgetSearchLine_KeyReleaseEvent_Callback = void (*)(KTreeWidgetSearchLine*, QKeyEvent*);
    using KTreeWidgetSearchLine_FocusInEvent_Callback = void (*)(KTreeWidgetSearchLine*, QFocusEvent*);
    using KTreeWidgetSearchLine_FocusOutEvent_Callback = void (*)(KTreeWidgetSearchLine*, QFocusEvent*);
    using KTreeWidgetSearchLine_PaintEvent_Callback = void (*)(KTreeWidgetSearchLine*, QPaintEvent*);
    using KTreeWidgetSearchLine_DragEnterEvent_Callback = void (*)(KTreeWidgetSearchLine*, QDragEnterEvent*);
    using KTreeWidgetSearchLine_DragMoveEvent_Callback = void (*)(KTreeWidgetSearchLine*, QDragMoveEvent*);
    using KTreeWidgetSearchLine_DragLeaveEvent_Callback = void (*)(KTreeWidgetSearchLine*, QDragLeaveEvent*);
    using KTreeWidgetSearchLine_DropEvent_Callback = void (*)(KTreeWidgetSearchLine*, QDropEvent*);
    using KTreeWidgetSearchLine_ChangeEvent_Callback = void (*)(KTreeWidgetSearchLine*, QEvent*);
    using KTreeWidgetSearchLine_InputMethodEvent_Callback = void (*)(KTreeWidgetSearchLine*, QInputMethodEvent*);
    using KTreeWidgetSearchLine_InitStyleOption_Callback = void (*)(const KTreeWidgetSearchLine*, QStyleOptionFrame*);
    using KTreeWidgetSearchLine_InputMethodQuery_Callback = QVariant* (*)(const KTreeWidgetSearchLine*, int);
    using KTreeWidgetSearchLine_TimerEvent_Callback = void (*)(KTreeWidgetSearchLine*, QTimerEvent*);
    using KTreeWidgetSearchLine_DevType_Callback = int (*)();
    using KTreeWidgetSearchLine_SetVisible_Callback = void (*)(KTreeWidgetSearchLine*, bool);
    using KTreeWidgetSearchLine_HeightForWidth_Callback = int (*)(const KTreeWidgetSearchLine*, int);
    using KTreeWidgetSearchLine_HasHeightForWidth_Callback = bool (*)();
    using KTreeWidgetSearchLine_PaintEngine_Callback = QPaintEngine* (*)();
    using KTreeWidgetSearchLine_WheelEvent_Callback = void (*)(KTreeWidgetSearchLine*, QWheelEvent*);
    using KTreeWidgetSearchLine_EnterEvent_Callback = void (*)(KTreeWidgetSearchLine*, QEnterEvent*);
    using KTreeWidgetSearchLine_LeaveEvent_Callback = void (*)(KTreeWidgetSearchLine*, QEvent*);
    using KTreeWidgetSearchLine_MoveEvent_Callback = void (*)(KTreeWidgetSearchLine*, QMoveEvent*);
    using KTreeWidgetSearchLine_ResizeEvent_Callback = void (*)(KTreeWidgetSearchLine*, QResizeEvent*);
    using KTreeWidgetSearchLine_CloseEvent_Callback = void (*)(KTreeWidgetSearchLine*, QCloseEvent*);
    using KTreeWidgetSearchLine_TabletEvent_Callback = void (*)(KTreeWidgetSearchLine*, QTabletEvent*);
    using KTreeWidgetSearchLine_ActionEvent_Callback = void (*)(KTreeWidgetSearchLine*, QActionEvent*);
    using KTreeWidgetSearchLine_ShowEvent_Callback = void (*)(KTreeWidgetSearchLine*, QShowEvent*);
    using KTreeWidgetSearchLine_HideEvent_Callback = void (*)(KTreeWidgetSearchLine*, QHideEvent*);
    using KTreeWidgetSearchLine_NativeEvent_Callback = bool (*)(KTreeWidgetSearchLine*, libqt_string, void*, intptr_t*);
    using KTreeWidgetSearchLine_Metric_Callback = int (*)(const KTreeWidgetSearchLine*, int);
    using KTreeWidgetSearchLine_InitPainter_Callback = void (*)(const KTreeWidgetSearchLine*, QPainter*);
    using KTreeWidgetSearchLine_Redirected_Callback = QPaintDevice* (*)(const KTreeWidgetSearchLine*, QPoint*);
    using KTreeWidgetSearchLine_SharedPainter_Callback = QPainter* (*)();
    using KTreeWidgetSearchLine_FocusNextPrevChild_Callback = bool (*)(KTreeWidgetSearchLine*, bool);
    using KTreeWidgetSearchLine_EventFilter_Callback = bool (*)(KTreeWidgetSearchLine*, QObject*, QEvent*);
    using KTreeWidgetSearchLine_ChildEvent_Callback = void (*)(KTreeWidgetSearchLine*, QChildEvent*);
    using KTreeWidgetSearchLine_CustomEvent_Callback = void (*)(KTreeWidgetSearchLine*, QEvent*);
    using KTreeWidgetSearchLine_ConnectNotify_Callback = void (*)(KTreeWidgetSearchLine*, QMetaMethod*);
    using KTreeWidgetSearchLine_DisconnectNotify_Callback = void (*)(KTreeWidgetSearchLine*, QMetaMethod*);
    using KTreeWidgetSearchLine_CursorRect_Callback = QRect* (*)();
    using KTreeWidgetSearchLine_UpdateMicroFocus_Callback = void (*)();
    using KTreeWidgetSearchLine_Create_Callback = void (*)();
    using KTreeWidgetSearchLine_Destroy_Callback = void (*)();
    using KTreeWidgetSearchLine_FocusNextChild_Callback = bool (*)();
    using KTreeWidgetSearchLine_FocusPreviousChild_Callback = bool (*)();
    using KTreeWidgetSearchLine_Sender_Callback = QObject* (*)();
    using KTreeWidgetSearchLine_SenderSignalIndex_Callback = int (*)();
    using KTreeWidgetSearchLine_Receivers_Callback = int (*)(const KTreeWidgetSearchLine*, const char*);
    using KTreeWidgetSearchLine_IsSignalConnected_Callback = bool (*)(const KTreeWidgetSearchLine*, QMetaMethod*);
    using KTreeWidgetSearchLine_GetDecodedMetricF_Callback = double (*)(const KTreeWidgetSearchLine*, int, int);

  protected:
    // Instance callback storage
    KTreeWidgetSearchLine_Metacall_Callback ktreewidgetsearchline_metacall_callback = nullptr;
    KTreeWidgetSearchLine_UpdateSearch_Callback ktreewidgetsearchline_updatesearch_callback = nullptr;
    KTreeWidgetSearchLine_ItemMatches_Callback ktreewidgetsearchline_itemmatches_callback = nullptr;
    KTreeWidgetSearchLine_ContextMenuEvent_Callback ktreewidgetsearchline_contextmenuevent_callback = nullptr;
    KTreeWidgetSearchLine_UpdateSearch2_Callback ktreewidgetsearchline_updatesearch2_callback = nullptr;
    KTreeWidgetSearchLine_ConnectTreeWidget_Callback ktreewidgetsearchline_connecttreewidget_callback = nullptr;
    KTreeWidgetSearchLine_DisconnectTreeWidget_Callback ktreewidgetsearchline_disconnecttreewidget_callback = nullptr;
    KTreeWidgetSearchLine_CanChooseColumnsCheck_Callback ktreewidgetsearchline_canchoosecolumnscheck_callback = nullptr;
    KTreeWidgetSearchLine_Event_Callback ktreewidgetsearchline_event_callback = nullptr;
    KTreeWidgetSearchLine_SizeHint_Callback ktreewidgetsearchline_sizehint_callback = nullptr;
    KTreeWidgetSearchLine_MinimumSizeHint_Callback ktreewidgetsearchline_minimumsizehint_callback = nullptr;
    KTreeWidgetSearchLine_MousePressEvent_Callback ktreewidgetsearchline_mousepressevent_callback = nullptr;
    KTreeWidgetSearchLine_MouseMoveEvent_Callback ktreewidgetsearchline_mousemoveevent_callback = nullptr;
    KTreeWidgetSearchLine_MouseReleaseEvent_Callback ktreewidgetsearchline_mousereleaseevent_callback = nullptr;
    KTreeWidgetSearchLine_MouseDoubleClickEvent_Callback ktreewidgetsearchline_mousedoubleclickevent_callback = nullptr;
    KTreeWidgetSearchLine_KeyPressEvent_Callback ktreewidgetsearchline_keypressevent_callback = nullptr;
    KTreeWidgetSearchLine_KeyReleaseEvent_Callback ktreewidgetsearchline_keyreleaseevent_callback = nullptr;
    KTreeWidgetSearchLine_FocusInEvent_Callback ktreewidgetsearchline_focusinevent_callback = nullptr;
    KTreeWidgetSearchLine_FocusOutEvent_Callback ktreewidgetsearchline_focusoutevent_callback = nullptr;
    KTreeWidgetSearchLine_PaintEvent_Callback ktreewidgetsearchline_paintevent_callback = nullptr;
    KTreeWidgetSearchLine_DragEnterEvent_Callback ktreewidgetsearchline_dragenterevent_callback = nullptr;
    KTreeWidgetSearchLine_DragMoveEvent_Callback ktreewidgetsearchline_dragmoveevent_callback = nullptr;
    KTreeWidgetSearchLine_DragLeaveEvent_Callback ktreewidgetsearchline_dragleaveevent_callback = nullptr;
    KTreeWidgetSearchLine_DropEvent_Callback ktreewidgetsearchline_dropevent_callback = nullptr;
    KTreeWidgetSearchLine_ChangeEvent_Callback ktreewidgetsearchline_changeevent_callback = nullptr;
    KTreeWidgetSearchLine_InputMethodEvent_Callback ktreewidgetsearchline_inputmethodevent_callback = nullptr;
    KTreeWidgetSearchLine_InitStyleOption_Callback ktreewidgetsearchline_initstyleoption_callback = nullptr;
    KTreeWidgetSearchLine_InputMethodQuery_Callback ktreewidgetsearchline_inputmethodquery_callback = nullptr;
    KTreeWidgetSearchLine_TimerEvent_Callback ktreewidgetsearchline_timerevent_callback = nullptr;
    KTreeWidgetSearchLine_DevType_Callback ktreewidgetsearchline_devtype_callback = nullptr;
    KTreeWidgetSearchLine_SetVisible_Callback ktreewidgetsearchline_setvisible_callback = nullptr;
    KTreeWidgetSearchLine_HeightForWidth_Callback ktreewidgetsearchline_heightforwidth_callback = nullptr;
    KTreeWidgetSearchLine_HasHeightForWidth_Callback ktreewidgetsearchline_hasheightforwidth_callback = nullptr;
    KTreeWidgetSearchLine_PaintEngine_Callback ktreewidgetsearchline_paintengine_callback = nullptr;
    KTreeWidgetSearchLine_WheelEvent_Callback ktreewidgetsearchline_wheelevent_callback = nullptr;
    KTreeWidgetSearchLine_EnterEvent_Callback ktreewidgetsearchline_enterevent_callback = nullptr;
    KTreeWidgetSearchLine_LeaveEvent_Callback ktreewidgetsearchline_leaveevent_callback = nullptr;
    KTreeWidgetSearchLine_MoveEvent_Callback ktreewidgetsearchline_moveevent_callback = nullptr;
    KTreeWidgetSearchLine_ResizeEvent_Callback ktreewidgetsearchline_resizeevent_callback = nullptr;
    KTreeWidgetSearchLine_CloseEvent_Callback ktreewidgetsearchline_closeevent_callback = nullptr;
    KTreeWidgetSearchLine_TabletEvent_Callback ktreewidgetsearchline_tabletevent_callback = nullptr;
    KTreeWidgetSearchLine_ActionEvent_Callback ktreewidgetsearchline_actionevent_callback = nullptr;
    KTreeWidgetSearchLine_ShowEvent_Callback ktreewidgetsearchline_showevent_callback = nullptr;
    KTreeWidgetSearchLine_HideEvent_Callback ktreewidgetsearchline_hideevent_callback = nullptr;
    KTreeWidgetSearchLine_NativeEvent_Callback ktreewidgetsearchline_nativeevent_callback = nullptr;
    KTreeWidgetSearchLine_Metric_Callback ktreewidgetsearchline_metric_callback = nullptr;
    KTreeWidgetSearchLine_InitPainter_Callback ktreewidgetsearchline_initpainter_callback = nullptr;
    KTreeWidgetSearchLine_Redirected_Callback ktreewidgetsearchline_redirected_callback = nullptr;
    KTreeWidgetSearchLine_SharedPainter_Callback ktreewidgetsearchline_sharedpainter_callback = nullptr;
    KTreeWidgetSearchLine_FocusNextPrevChild_Callback ktreewidgetsearchline_focusnextprevchild_callback = nullptr;
    KTreeWidgetSearchLine_EventFilter_Callback ktreewidgetsearchline_eventfilter_callback = nullptr;
    KTreeWidgetSearchLine_ChildEvent_Callback ktreewidgetsearchline_childevent_callback = nullptr;
    KTreeWidgetSearchLine_CustomEvent_Callback ktreewidgetsearchline_customevent_callback = nullptr;
    KTreeWidgetSearchLine_ConnectNotify_Callback ktreewidgetsearchline_connectnotify_callback = nullptr;
    KTreeWidgetSearchLine_DisconnectNotify_Callback ktreewidgetsearchline_disconnectnotify_callback = nullptr;
    KTreeWidgetSearchLine_CursorRect_Callback ktreewidgetsearchline_cursorrect_callback = nullptr;
    KTreeWidgetSearchLine_UpdateMicroFocus_Callback ktreewidgetsearchline_updatemicrofocus_callback = nullptr;
    KTreeWidgetSearchLine_Create_Callback ktreewidgetsearchline_create_callback = nullptr;
    KTreeWidgetSearchLine_Destroy_Callback ktreewidgetsearchline_destroy_callback = nullptr;
    KTreeWidgetSearchLine_FocusNextChild_Callback ktreewidgetsearchline_focusnextchild_callback = nullptr;
    KTreeWidgetSearchLine_FocusPreviousChild_Callback ktreewidgetsearchline_focuspreviouschild_callback = nullptr;
    KTreeWidgetSearchLine_Sender_Callback ktreewidgetsearchline_sender_callback = nullptr;
    KTreeWidgetSearchLine_SenderSignalIndex_Callback ktreewidgetsearchline_sendersignalindex_callback = nullptr;
    KTreeWidgetSearchLine_Receivers_Callback ktreewidgetsearchline_receivers_callback = nullptr;
    KTreeWidgetSearchLine_IsSignalConnected_Callback ktreewidgetsearchline_issignalconnected_callback = nullptr;
    KTreeWidgetSearchLine_GetDecodedMetricF_Callback ktreewidgetsearchline_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool ktreewidgetsearchline_metacall_isbase = false;
    mutable bool ktreewidgetsearchline_updatesearch_isbase = false;
    mutable bool ktreewidgetsearchline_itemmatches_isbase = false;
    mutable bool ktreewidgetsearchline_contextmenuevent_isbase = false;
    mutable bool ktreewidgetsearchline_updatesearch2_isbase = false;
    mutable bool ktreewidgetsearchline_connecttreewidget_isbase = false;
    mutable bool ktreewidgetsearchline_disconnecttreewidget_isbase = false;
    mutable bool ktreewidgetsearchline_canchoosecolumnscheck_isbase = false;
    mutable bool ktreewidgetsearchline_event_isbase = false;
    mutable bool ktreewidgetsearchline_sizehint_isbase = false;
    mutable bool ktreewidgetsearchline_minimumsizehint_isbase = false;
    mutable bool ktreewidgetsearchline_mousepressevent_isbase = false;
    mutable bool ktreewidgetsearchline_mousemoveevent_isbase = false;
    mutable bool ktreewidgetsearchline_mousereleaseevent_isbase = false;
    mutable bool ktreewidgetsearchline_mousedoubleclickevent_isbase = false;
    mutable bool ktreewidgetsearchline_keypressevent_isbase = false;
    mutable bool ktreewidgetsearchline_keyreleaseevent_isbase = false;
    mutable bool ktreewidgetsearchline_focusinevent_isbase = false;
    mutable bool ktreewidgetsearchline_focusoutevent_isbase = false;
    mutable bool ktreewidgetsearchline_paintevent_isbase = false;
    mutable bool ktreewidgetsearchline_dragenterevent_isbase = false;
    mutable bool ktreewidgetsearchline_dragmoveevent_isbase = false;
    mutable bool ktreewidgetsearchline_dragleaveevent_isbase = false;
    mutable bool ktreewidgetsearchline_dropevent_isbase = false;
    mutable bool ktreewidgetsearchline_changeevent_isbase = false;
    mutable bool ktreewidgetsearchline_inputmethodevent_isbase = false;
    mutable bool ktreewidgetsearchline_initstyleoption_isbase = false;
    mutable bool ktreewidgetsearchline_inputmethodquery_isbase = false;
    mutable bool ktreewidgetsearchline_timerevent_isbase = false;
    mutable bool ktreewidgetsearchline_devtype_isbase = false;
    mutable bool ktreewidgetsearchline_setvisible_isbase = false;
    mutable bool ktreewidgetsearchline_heightforwidth_isbase = false;
    mutable bool ktreewidgetsearchline_hasheightforwidth_isbase = false;
    mutable bool ktreewidgetsearchline_paintengine_isbase = false;
    mutable bool ktreewidgetsearchline_wheelevent_isbase = false;
    mutable bool ktreewidgetsearchline_enterevent_isbase = false;
    mutable bool ktreewidgetsearchline_leaveevent_isbase = false;
    mutable bool ktreewidgetsearchline_moveevent_isbase = false;
    mutable bool ktreewidgetsearchline_resizeevent_isbase = false;
    mutable bool ktreewidgetsearchline_closeevent_isbase = false;
    mutable bool ktreewidgetsearchline_tabletevent_isbase = false;
    mutable bool ktreewidgetsearchline_actionevent_isbase = false;
    mutable bool ktreewidgetsearchline_showevent_isbase = false;
    mutable bool ktreewidgetsearchline_hideevent_isbase = false;
    mutable bool ktreewidgetsearchline_nativeevent_isbase = false;
    mutable bool ktreewidgetsearchline_metric_isbase = false;
    mutable bool ktreewidgetsearchline_initpainter_isbase = false;
    mutable bool ktreewidgetsearchline_redirected_isbase = false;
    mutable bool ktreewidgetsearchline_sharedpainter_isbase = false;
    mutable bool ktreewidgetsearchline_focusnextprevchild_isbase = false;
    mutable bool ktreewidgetsearchline_eventfilter_isbase = false;
    mutable bool ktreewidgetsearchline_childevent_isbase = false;
    mutable bool ktreewidgetsearchline_customevent_isbase = false;
    mutable bool ktreewidgetsearchline_connectnotify_isbase = false;
    mutable bool ktreewidgetsearchline_disconnectnotify_isbase = false;
    mutable bool ktreewidgetsearchline_cursorrect_isbase = false;
    mutable bool ktreewidgetsearchline_updatemicrofocus_isbase = false;
    mutable bool ktreewidgetsearchline_create_isbase = false;
    mutable bool ktreewidgetsearchline_destroy_isbase = false;
    mutable bool ktreewidgetsearchline_focusnextchild_isbase = false;
    mutable bool ktreewidgetsearchline_focuspreviouschild_isbase = false;
    mutable bool ktreewidgetsearchline_sender_isbase = false;
    mutable bool ktreewidgetsearchline_sendersignalindex_isbase = false;
    mutable bool ktreewidgetsearchline_receivers_isbase = false;
    mutable bool ktreewidgetsearchline_issignalconnected_isbase = false;
    mutable bool ktreewidgetsearchline_getdecodedmetricf_isbase = false;

  public:
    VirtualKTreeWidgetSearchLine(QWidget* parent) : KTreeWidgetSearchLine(parent) {};
    VirtualKTreeWidgetSearchLine() : KTreeWidgetSearchLine() {};
    VirtualKTreeWidgetSearchLine(QWidget* parent, const QList<QTreeWidget*>& treeWidgets) : KTreeWidgetSearchLine(parent, treeWidgets) {};
    VirtualKTreeWidgetSearchLine(QWidget* parent, QTreeWidget* treeWidget) : KTreeWidgetSearchLine(parent, treeWidget) {};

    ~VirtualKTreeWidgetSearchLine() {
        ktreewidgetsearchline_metacall_callback = nullptr;
        ktreewidgetsearchline_updatesearch_callback = nullptr;
        ktreewidgetsearchline_itemmatches_callback = nullptr;
        ktreewidgetsearchline_contextmenuevent_callback = nullptr;
        ktreewidgetsearchline_updatesearch2_callback = nullptr;
        ktreewidgetsearchline_connecttreewidget_callback = nullptr;
        ktreewidgetsearchline_disconnecttreewidget_callback = nullptr;
        ktreewidgetsearchline_canchoosecolumnscheck_callback = nullptr;
        ktreewidgetsearchline_event_callback = nullptr;
        ktreewidgetsearchline_sizehint_callback = nullptr;
        ktreewidgetsearchline_minimumsizehint_callback = nullptr;
        ktreewidgetsearchline_mousepressevent_callback = nullptr;
        ktreewidgetsearchline_mousemoveevent_callback = nullptr;
        ktreewidgetsearchline_mousereleaseevent_callback = nullptr;
        ktreewidgetsearchline_mousedoubleclickevent_callback = nullptr;
        ktreewidgetsearchline_keypressevent_callback = nullptr;
        ktreewidgetsearchline_keyreleaseevent_callback = nullptr;
        ktreewidgetsearchline_focusinevent_callback = nullptr;
        ktreewidgetsearchline_focusoutevent_callback = nullptr;
        ktreewidgetsearchline_paintevent_callback = nullptr;
        ktreewidgetsearchline_dragenterevent_callback = nullptr;
        ktreewidgetsearchline_dragmoveevent_callback = nullptr;
        ktreewidgetsearchline_dragleaveevent_callback = nullptr;
        ktreewidgetsearchline_dropevent_callback = nullptr;
        ktreewidgetsearchline_changeevent_callback = nullptr;
        ktreewidgetsearchline_inputmethodevent_callback = nullptr;
        ktreewidgetsearchline_initstyleoption_callback = nullptr;
        ktreewidgetsearchline_inputmethodquery_callback = nullptr;
        ktreewidgetsearchline_timerevent_callback = nullptr;
        ktreewidgetsearchline_devtype_callback = nullptr;
        ktreewidgetsearchline_setvisible_callback = nullptr;
        ktreewidgetsearchline_heightforwidth_callback = nullptr;
        ktreewidgetsearchline_hasheightforwidth_callback = nullptr;
        ktreewidgetsearchline_paintengine_callback = nullptr;
        ktreewidgetsearchline_wheelevent_callback = nullptr;
        ktreewidgetsearchline_enterevent_callback = nullptr;
        ktreewidgetsearchline_leaveevent_callback = nullptr;
        ktreewidgetsearchline_moveevent_callback = nullptr;
        ktreewidgetsearchline_resizeevent_callback = nullptr;
        ktreewidgetsearchline_closeevent_callback = nullptr;
        ktreewidgetsearchline_tabletevent_callback = nullptr;
        ktreewidgetsearchline_actionevent_callback = nullptr;
        ktreewidgetsearchline_showevent_callback = nullptr;
        ktreewidgetsearchline_hideevent_callback = nullptr;
        ktreewidgetsearchline_nativeevent_callback = nullptr;
        ktreewidgetsearchline_metric_callback = nullptr;
        ktreewidgetsearchline_initpainter_callback = nullptr;
        ktreewidgetsearchline_redirected_callback = nullptr;
        ktreewidgetsearchline_sharedpainter_callback = nullptr;
        ktreewidgetsearchline_focusnextprevchild_callback = nullptr;
        ktreewidgetsearchline_eventfilter_callback = nullptr;
        ktreewidgetsearchline_childevent_callback = nullptr;
        ktreewidgetsearchline_customevent_callback = nullptr;
        ktreewidgetsearchline_connectnotify_callback = nullptr;
        ktreewidgetsearchline_disconnectnotify_callback = nullptr;
        ktreewidgetsearchline_cursorrect_callback = nullptr;
        ktreewidgetsearchline_updatemicrofocus_callback = nullptr;
        ktreewidgetsearchline_create_callback = nullptr;
        ktreewidgetsearchline_destroy_callback = nullptr;
        ktreewidgetsearchline_focusnextchild_callback = nullptr;
        ktreewidgetsearchline_focuspreviouschild_callback = nullptr;
        ktreewidgetsearchline_sender_callback = nullptr;
        ktreewidgetsearchline_sendersignalindex_callback = nullptr;
        ktreewidgetsearchline_receivers_callback = nullptr;
        ktreewidgetsearchline_issignalconnected_callback = nullptr;
        ktreewidgetsearchline_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKTreeWidgetSearchLine_Metacall_Callback(KTreeWidgetSearchLine_Metacall_Callback cb) { ktreewidgetsearchline_metacall_callback = cb; }
    inline void setKTreeWidgetSearchLine_UpdateSearch_Callback(KTreeWidgetSearchLine_UpdateSearch_Callback cb) { ktreewidgetsearchline_updatesearch_callback = cb; }
    inline void setKTreeWidgetSearchLine_ItemMatches_Callback(KTreeWidgetSearchLine_ItemMatches_Callback cb) { ktreewidgetsearchline_itemmatches_callback = cb; }
    inline void setKTreeWidgetSearchLine_ContextMenuEvent_Callback(KTreeWidgetSearchLine_ContextMenuEvent_Callback cb) { ktreewidgetsearchline_contextmenuevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_UpdateSearch2_Callback(KTreeWidgetSearchLine_UpdateSearch2_Callback cb) { ktreewidgetsearchline_updatesearch2_callback = cb; }
    inline void setKTreeWidgetSearchLine_ConnectTreeWidget_Callback(KTreeWidgetSearchLine_ConnectTreeWidget_Callback cb) { ktreewidgetsearchline_connecttreewidget_callback = cb; }
    inline void setKTreeWidgetSearchLine_DisconnectTreeWidget_Callback(KTreeWidgetSearchLine_DisconnectTreeWidget_Callback cb) { ktreewidgetsearchline_disconnecttreewidget_callback = cb; }
    inline void setKTreeWidgetSearchLine_CanChooseColumnsCheck_Callback(KTreeWidgetSearchLine_CanChooseColumnsCheck_Callback cb) { ktreewidgetsearchline_canchoosecolumnscheck_callback = cb; }
    inline void setKTreeWidgetSearchLine_Event_Callback(KTreeWidgetSearchLine_Event_Callback cb) { ktreewidgetsearchline_event_callback = cb; }
    inline void setKTreeWidgetSearchLine_SizeHint_Callback(KTreeWidgetSearchLine_SizeHint_Callback cb) { ktreewidgetsearchline_sizehint_callback = cb; }
    inline void setKTreeWidgetSearchLine_MinimumSizeHint_Callback(KTreeWidgetSearchLine_MinimumSizeHint_Callback cb) { ktreewidgetsearchline_minimumsizehint_callback = cb; }
    inline void setKTreeWidgetSearchLine_MousePressEvent_Callback(KTreeWidgetSearchLine_MousePressEvent_Callback cb) { ktreewidgetsearchline_mousepressevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_MouseMoveEvent_Callback(KTreeWidgetSearchLine_MouseMoveEvent_Callback cb) { ktreewidgetsearchline_mousemoveevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_MouseReleaseEvent_Callback(KTreeWidgetSearchLine_MouseReleaseEvent_Callback cb) { ktreewidgetsearchline_mousereleaseevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_MouseDoubleClickEvent_Callback(KTreeWidgetSearchLine_MouseDoubleClickEvent_Callback cb) { ktreewidgetsearchline_mousedoubleclickevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_KeyPressEvent_Callback(KTreeWidgetSearchLine_KeyPressEvent_Callback cb) { ktreewidgetsearchline_keypressevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_KeyReleaseEvent_Callback(KTreeWidgetSearchLine_KeyReleaseEvent_Callback cb) { ktreewidgetsearchline_keyreleaseevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_FocusInEvent_Callback(KTreeWidgetSearchLine_FocusInEvent_Callback cb) { ktreewidgetsearchline_focusinevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_FocusOutEvent_Callback(KTreeWidgetSearchLine_FocusOutEvent_Callback cb) { ktreewidgetsearchline_focusoutevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_PaintEvent_Callback(KTreeWidgetSearchLine_PaintEvent_Callback cb) { ktreewidgetsearchline_paintevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_DragEnterEvent_Callback(KTreeWidgetSearchLine_DragEnterEvent_Callback cb) { ktreewidgetsearchline_dragenterevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_DragMoveEvent_Callback(KTreeWidgetSearchLine_DragMoveEvent_Callback cb) { ktreewidgetsearchline_dragmoveevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_DragLeaveEvent_Callback(KTreeWidgetSearchLine_DragLeaveEvent_Callback cb) { ktreewidgetsearchline_dragleaveevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_DropEvent_Callback(KTreeWidgetSearchLine_DropEvent_Callback cb) { ktreewidgetsearchline_dropevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_ChangeEvent_Callback(KTreeWidgetSearchLine_ChangeEvent_Callback cb) { ktreewidgetsearchline_changeevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_InputMethodEvent_Callback(KTreeWidgetSearchLine_InputMethodEvent_Callback cb) { ktreewidgetsearchline_inputmethodevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_InitStyleOption_Callback(KTreeWidgetSearchLine_InitStyleOption_Callback cb) { ktreewidgetsearchline_initstyleoption_callback = cb; }
    inline void setKTreeWidgetSearchLine_InputMethodQuery_Callback(KTreeWidgetSearchLine_InputMethodQuery_Callback cb) { ktreewidgetsearchline_inputmethodquery_callback = cb; }
    inline void setKTreeWidgetSearchLine_TimerEvent_Callback(KTreeWidgetSearchLine_TimerEvent_Callback cb) { ktreewidgetsearchline_timerevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_DevType_Callback(KTreeWidgetSearchLine_DevType_Callback cb) { ktreewidgetsearchline_devtype_callback = cb; }
    inline void setKTreeWidgetSearchLine_SetVisible_Callback(KTreeWidgetSearchLine_SetVisible_Callback cb) { ktreewidgetsearchline_setvisible_callback = cb; }
    inline void setKTreeWidgetSearchLine_HeightForWidth_Callback(KTreeWidgetSearchLine_HeightForWidth_Callback cb) { ktreewidgetsearchline_heightforwidth_callback = cb; }
    inline void setKTreeWidgetSearchLine_HasHeightForWidth_Callback(KTreeWidgetSearchLine_HasHeightForWidth_Callback cb) { ktreewidgetsearchline_hasheightforwidth_callback = cb; }
    inline void setKTreeWidgetSearchLine_PaintEngine_Callback(KTreeWidgetSearchLine_PaintEngine_Callback cb) { ktreewidgetsearchline_paintengine_callback = cb; }
    inline void setKTreeWidgetSearchLine_WheelEvent_Callback(KTreeWidgetSearchLine_WheelEvent_Callback cb) { ktreewidgetsearchline_wheelevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_EnterEvent_Callback(KTreeWidgetSearchLine_EnterEvent_Callback cb) { ktreewidgetsearchline_enterevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_LeaveEvent_Callback(KTreeWidgetSearchLine_LeaveEvent_Callback cb) { ktreewidgetsearchline_leaveevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_MoveEvent_Callback(KTreeWidgetSearchLine_MoveEvent_Callback cb) { ktreewidgetsearchline_moveevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_ResizeEvent_Callback(KTreeWidgetSearchLine_ResizeEvent_Callback cb) { ktreewidgetsearchline_resizeevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_CloseEvent_Callback(KTreeWidgetSearchLine_CloseEvent_Callback cb) { ktreewidgetsearchline_closeevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_TabletEvent_Callback(KTreeWidgetSearchLine_TabletEvent_Callback cb) { ktreewidgetsearchline_tabletevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_ActionEvent_Callback(KTreeWidgetSearchLine_ActionEvent_Callback cb) { ktreewidgetsearchline_actionevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_ShowEvent_Callback(KTreeWidgetSearchLine_ShowEvent_Callback cb) { ktreewidgetsearchline_showevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_HideEvent_Callback(KTreeWidgetSearchLine_HideEvent_Callback cb) { ktreewidgetsearchline_hideevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_NativeEvent_Callback(KTreeWidgetSearchLine_NativeEvent_Callback cb) { ktreewidgetsearchline_nativeevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_Metric_Callback(KTreeWidgetSearchLine_Metric_Callback cb) { ktreewidgetsearchline_metric_callback = cb; }
    inline void setKTreeWidgetSearchLine_InitPainter_Callback(KTreeWidgetSearchLine_InitPainter_Callback cb) { ktreewidgetsearchline_initpainter_callback = cb; }
    inline void setKTreeWidgetSearchLine_Redirected_Callback(KTreeWidgetSearchLine_Redirected_Callback cb) { ktreewidgetsearchline_redirected_callback = cb; }
    inline void setKTreeWidgetSearchLine_SharedPainter_Callback(KTreeWidgetSearchLine_SharedPainter_Callback cb) { ktreewidgetsearchline_sharedpainter_callback = cb; }
    inline void setKTreeWidgetSearchLine_FocusNextPrevChild_Callback(KTreeWidgetSearchLine_FocusNextPrevChild_Callback cb) { ktreewidgetsearchline_focusnextprevchild_callback = cb; }
    inline void setKTreeWidgetSearchLine_EventFilter_Callback(KTreeWidgetSearchLine_EventFilter_Callback cb) { ktreewidgetsearchline_eventfilter_callback = cb; }
    inline void setKTreeWidgetSearchLine_ChildEvent_Callback(KTreeWidgetSearchLine_ChildEvent_Callback cb) { ktreewidgetsearchline_childevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_CustomEvent_Callback(KTreeWidgetSearchLine_CustomEvent_Callback cb) { ktreewidgetsearchline_customevent_callback = cb; }
    inline void setKTreeWidgetSearchLine_ConnectNotify_Callback(KTreeWidgetSearchLine_ConnectNotify_Callback cb) { ktreewidgetsearchline_connectnotify_callback = cb; }
    inline void setKTreeWidgetSearchLine_DisconnectNotify_Callback(KTreeWidgetSearchLine_DisconnectNotify_Callback cb) { ktreewidgetsearchline_disconnectnotify_callback = cb; }
    inline void setKTreeWidgetSearchLine_CursorRect_Callback(KTreeWidgetSearchLine_CursorRect_Callback cb) { ktreewidgetsearchline_cursorrect_callback = cb; }
    inline void setKTreeWidgetSearchLine_UpdateMicroFocus_Callback(KTreeWidgetSearchLine_UpdateMicroFocus_Callback cb) { ktreewidgetsearchline_updatemicrofocus_callback = cb; }
    inline void setKTreeWidgetSearchLine_Create_Callback(KTreeWidgetSearchLine_Create_Callback cb) { ktreewidgetsearchline_create_callback = cb; }
    inline void setKTreeWidgetSearchLine_Destroy_Callback(KTreeWidgetSearchLine_Destroy_Callback cb) { ktreewidgetsearchline_destroy_callback = cb; }
    inline void setKTreeWidgetSearchLine_FocusNextChild_Callback(KTreeWidgetSearchLine_FocusNextChild_Callback cb) { ktreewidgetsearchline_focusnextchild_callback = cb; }
    inline void setKTreeWidgetSearchLine_FocusPreviousChild_Callback(KTreeWidgetSearchLine_FocusPreviousChild_Callback cb) { ktreewidgetsearchline_focuspreviouschild_callback = cb; }
    inline void setKTreeWidgetSearchLine_Sender_Callback(KTreeWidgetSearchLine_Sender_Callback cb) { ktreewidgetsearchline_sender_callback = cb; }
    inline void setKTreeWidgetSearchLine_SenderSignalIndex_Callback(KTreeWidgetSearchLine_SenderSignalIndex_Callback cb) { ktreewidgetsearchline_sendersignalindex_callback = cb; }
    inline void setKTreeWidgetSearchLine_Receivers_Callback(KTreeWidgetSearchLine_Receivers_Callback cb) { ktreewidgetsearchline_receivers_callback = cb; }
    inline void setKTreeWidgetSearchLine_IsSignalConnected_Callback(KTreeWidgetSearchLine_IsSignalConnected_Callback cb) { ktreewidgetsearchline_issignalconnected_callback = cb; }
    inline void setKTreeWidgetSearchLine_GetDecodedMetricF_Callback(KTreeWidgetSearchLine_GetDecodedMetricF_Callback cb) { ktreewidgetsearchline_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKTreeWidgetSearchLine_Metacall_IsBase(bool value) const { ktreewidgetsearchline_metacall_isbase = value; }
    inline void setKTreeWidgetSearchLine_UpdateSearch_IsBase(bool value) const { ktreewidgetsearchline_updatesearch_isbase = value; }
    inline void setKTreeWidgetSearchLine_ItemMatches_IsBase(bool value) const { ktreewidgetsearchline_itemmatches_isbase = value; }
    inline void setKTreeWidgetSearchLine_ContextMenuEvent_IsBase(bool value) const { ktreewidgetsearchline_contextmenuevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_UpdateSearch2_IsBase(bool value) const { ktreewidgetsearchline_updatesearch2_isbase = value; }
    inline void setKTreeWidgetSearchLine_ConnectTreeWidget_IsBase(bool value) const { ktreewidgetsearchline_connecttreewidget_isbase = value; }
    inline void setKTreeWidgetSearchLine_DisconnectTreeWidget_IsBase(bool value) const { ktreewidgetsearchline_disconnecttreewidget_isbase = value; }
    inline void setKTreeWidgetSearchLine_CanChooseColumnsCheck_IsBase(bool value) const { ktreewidgetsearchline_canchoosecolumnscheck_isbase = value; }
    inline void setKTreeWidgetSearchLine_Event_IsBase(bool value) const { ktreewidgetsearchline_event_isbase = value; }
    inline void setKTreeWidgetSearchLine_SizeHint_IsBase(bool value) const { ktreewidgetsearchline_sizehint_isbase = value; }
    inline void setKTreeWidgetSearchLine_MinimumSizeHint_IsBase(bool value) const { ktreewidgetsearchline_minimumsizehint_isbase = value; }
    inline void setKTreeWidgetSearchLine_MousePressEvent_IsBase(bool value) const { ktreewidgetsearchline_mousepressevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_MouseMoveEvent_IsBase(bool value) const { ktreewidgetsearchline_mousemoveevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_MouseReleaseEvent_IsBase(bool value) const { ktreewidgetsearchline_mousereleaseevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_MouseDoubleClickEvent_IsBase(bool value) const { ktreewidgetsearchline_mousedoubleclickevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_KeyPressEvent_IsBase(bool value) const { ktreewidgetsearchline_keypressevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_KeyReleaseEvent_IsBase(bool value) const { ktreewidgetsearchline_keyreleaseevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_FocusInEvent_IsBase(bool value) const { ktreewidgetsearchline_focusinevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_FocusOutEvent_IsBase(bool value) const { ktreewidgetsearchline_focusoutevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_PaintEvent_IsBase(bool value) const { ktreewidgetsearchline_paintevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_DragEnterEvent_IsBase(bool value) const { ktreewidgetsearchline_dragenterevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_DragMoveEvent_IsBase(bool value) const { ktreewidgetsearchline_dragmoveevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_DragLeaveEvent_IsBase(bool value) const { ktreewidgetsearchline_dragleaveevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_DropEvent_IsBase(bool value) const { ktreewidgetsearchline_dropevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_ChangeEvent_IsBase(bool value) const { ktreewidgetsearchline_changeevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_InputMethodEvent_IsBase(bool value) const { ktreewidgetsearchline_inputmethodevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_InitStyleOption_IsBase(bool value) const { ktreewidgetsearchline_initstyleoption_isbase = value; }
    inline void setKTreeWidgetSearchLine_InputMethodQuery_IsBase(bool value) const { ktreewidgetsearchline_inputmethodquery_isbase = value; }
    inline void setKTreeWidgetSearchLine_TimerEvent_IsBase(bool value) const { ktreewidgetsearchline_timerevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_DevType_IsBase(bool value) const { ktreewidgetsearchline_devtype_isbase = value; }
    inline void setKTreeWidgetSearchLine_SetVisible_IsBase(bool value) const { ktreewidgetsearchline_setvisible_isbase = value; }
    inline void setKTreeWidgetSearchLine_HeightForWidth_IsBase(bool value) const { ktreewidgetsearchline_heightforwidth_isbase = value; }
    inline void setKTreeWidgetSearchLine_HasHeightForWidth_IsBase(bool value) const { ktreewidgetsearchline_hasheightforwidth_isbase = value; }
    inline void setKTreeWidgetSearchLine_PaintEngine_IsBase(bool value) const { ktreewidgetsearchline_paintengine_isbase = value; }
    inline void setKTreeWidgetSearchLine_WheelEvent_IsBase(bool value) const { ktreewidgetsearchline_wheelevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_EnterEvent_IsBase(bool value) const { ktreewidgetsearchline_enterevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_LeaveEvent_IsBase(bool value) const { ktreewidgetsearchline_leaveevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_MoveEvent_IsBase(bool value) const { ktreewidgetsearchline_moveevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_ResizeEvent_IsBase(bool value) const { ktreewidgetsearchline_resizeevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_CloseEvent_IsBase(bool value) const { ktreewidgetsearchline_closeevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_TabletEvent_IsBase(bool value) const { ktreewidgetsearchline_tabletevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_ActionEvent_IsBase(bool value) const { ktreewidgetsearchline_actionevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_ShowEvent_IsBase(bool value) const { ktreewidgetsearchline_showevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_HideEvent_IsBase(bool value) const { ktreewidgetsearchline_hideevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_NativeEvent_IsBase(bool value) const { ktreewidgetsearchline_nativeevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_Metric_IsBase(bool value) const { ktreewidgetsearchline_metric_isbase = value; }
    inline void setKTreeWidgetSearchLine_InitPainter_IsBase(bool value) const { ktreewidgetsearchline_initpainter_isbase = value; }
    inline void setKTreeWidgetSearchLine_Redirected_IsBase(bool value) const { ktreewidgetsearchline_redirected_isbase = value; }
    inline void setKTreeWidgetSearchLine_SharedPainter_IsBase(bool value) const { ktreewidgetsearchline_sharedpainter_isbase = value; }
    inline void setKTreeWidgetSearchLine_FocusNextPrevChild_IsBase(bool value) const { ktreewidgetsearchline_focusnextprevchild_isbase = value; }
    inline void setKTreeWidgetSearchLine_EventFilter_IsBase(bool value) const { ktreewidgetsearchline_eventfilter_isbase = value; }
    inline void setKTreeWidgetSearchLine_ChildEvent_IsBase(bool value) const { ktreewidgetsearchline_childevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_CustomEvent_IsBase(bool value) const { ktreewidgetsearchline_customevent_isbase = value; }
    inline void setKTreeWidgetSearchLine_ConnectNotify_IsBase(bool value) const { ktreewidgetsearchline_connectnotify_isbase = value; }
    inline void setKTreeWidgetSearchLine_DisconnectNotify_IsBase(bool value) const { ktreewidgetsearchline_disconnectnotify_isbase = value; }
    inline void setKTreeWidgetSearchLine_CursorRect_IsBase(bool value) const { ktreewidgetsearchline_cursorrect_isbase = value; }
    inline void setKTreeWidgetSearchLine_UpdateMicroFocus_IsBase(bool value) const { ktreewidgetsearchline_updatemicrofocus_isbase = value; }
    inline void setKTreeWidgetSearchLine_Create_IsBase(bool value) const { ktreewidgetsearchline_create_isbase = value; }
    inline void setKTreeWidgetSearchLine_Destroy_IsBase(bool value) const { ktreewidgetsearchline_destroy_isbase = value; }
    inline void setKTreeWidgetSearchLine_FocusNextChild_IsBase(bool value) const { ktreewidgetsearchline_focusnextchild_isbase = value; }
    inline void setKTreeWidgetSearchLine_FocusPreviousChild_IsBase(bool value) const { ktreewidgetsearchline_focuspreviouschild_isbase = value; }
    inline void setKTreeWidgetSearchLine_Sender_IsBase(bool value) const { ktreewidgetsearchline_sender_isbase = value; }
    inline void setKTreeWidgetSearchLine_SenderSignalIndex_IsBase(bool value) const { ktreewidgetsearchline_sendersignalindex_isbase = value; }
    inline void setKTreeWidgetSearchLine_Receivers_IsBase(bool value) const { ktreewidgetsearchline_receivers_isbase = value; }
    inline void setKTreeWidgetSearchLine_IsSignalConnected_IsBase(bool value) const { ktreewidgetsearchline_issignalconnected_isbase = value; }
    inline void setKTreeWidgetSearchLine_GetDecodedMetricF_IsBase(bool value) const { ktreewidgetsearchline_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktreewidgetsearchline_metacall_isbase) {
            ktreewidgetsearchline_metacall_isbase = false;
            return KTreeWidgetSearchLine::qt_metacall(param1, param2, param3);
        } else if (ktreewidgetsearchline_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ktreewidgetsearchline_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KTreeWidgetSearchLine::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateSearch(const QString& pattern) override {
        if (ktreewidgetsearchline_updatesearch_isbase) {
            ktreewidgetsearchline_updatesearch_isbase = false;
            KTreeWidgetSearchLine::updateSearch(pattern);
        } else if (ktreewidgetsearchline_updatesearch_callback != nullptr) {
            const QString pattern_ret = pattern;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray pattern_b = pattern_ret.toUtf8();
            libqt_string pattern_str;
            pattern_str.len = pattern_b.length();
            pattern_str.data = static_cast<const char*>(malloc(pattern_str.len + 1));
            memcpy((void*)pattern_str.data, pattern_b.data(), pattern_str.len);
            ((char*)pattern_str.data)[pattern_str.len] = '\0';
            libqt_string cbval1 = pattern_str;

            ktreewidgetsearchline_updatesearch_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::updateSearch(pattern);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool itemMatches(const QTreeWidgetItem* item, const QString& pattern) const override {
        if (ktreewidgetsearchline_itemmatches_isbase) {
            ktreewidgetsearchline_itemmatches_isbase = false;
            return KTreeWidgetSearchLine::itemMatches(item, pattern);
        } else if (ktreewidgetsearchline_itemmatches_callback != nullptr) {
            QTreeWidgetItem* cbval1 = (QTreeWidgetItem*)item;
            const QString pattern_ret = pattern;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray pattern_b = pattern_ret.toUtf8();
            libqt_string pattern_str;
            pattern_str.len = pattern_b.length();
            pattern_str.data = static_cast<const char*>(malloc(pattern_str.len + 1));
            memcpy((void*)pattern_str.data, pattern_b.data(), pattern_str.len);
            ((char*)pattern_str.data)[pattern_str.len] = '\0';
            libqt_string cbval2 = pattern_str;

            bool callback_ret = ktreewidgetsearchline_itemmatches_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KTreeWidgetSearchLine::itemMatches(item, pattern);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (ktreewidgetsearchline_contextmenuevent_isbase) {
            ktreewidgetsearchline_contextmenuevent_isbase = false;
            KTreeWidgetSearchLine::contextMenuEvent(param1);
        } else if (ktreewidgetsearchline_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            ktreewidgetsearchline_contextmenuevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateSearch(QTreeWidget* treeWidget) override {
        if (ktreewidgetsearchline_updatesearch2_isbase) {
            ktreewidgetsearchline_updatesearch2_isbase = false;
            KTreeWidgetSearchLine::updateSearch(treeWidget);
        } else if (ktreewidgetsearchline_updatesearch2_callback != nullptr) {
            QTreeWidget* cbval1 = treeWidget;

            ktreewidgetsearchline_updatesearch2_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::updateSearch(treeWidget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectTreeWidget(QTreeWidget* param1) override {
        if (ktreewidgetsearchline_connecttreewidget_isbase) {
            ktreewidgetsearchline_connecttreewidget_isbase = false;
            KTreeWidgetSearchLine::connectTreeWidget(param1);
        } else if (ktreewidgetsearchline_connecttreewidget_callback != nullptr) {
            QTreeWidget* cbval1 = param1;

            ktreewidgetsearchline_connecttreewidget_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::connectTreeWidget(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectTreeWidget(QTreeWidget* param1) override {
        if (ktreewidgetsearchline_disconnecttreewidget_isbase) {
            ktreewidgetsearchline_disconnecttreewidget_isbase = false;
            KTreeWidgetSearchLine::disconnectTreeWidget(param1);
        } else if (ktreewidgetsearchline_disconnecttreewidget_callback != nullptr) {
            QTreeWidget* cbval1 = param1;

            ktreewidgetsearchline_disconnecttreewidget_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::disconnectTreeWidget(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canChooseColumnsCheck() override {
        if (ktreewidgetsearchline_canchoosecolumnscheck_isbase) {
            ktreewidgetsearchline_canchoosecolumnscheck_isbase = false;
            return KTreeWidgetSearchLine::canChooseColumnsCheck();
        } else if (ktreewidgetsearchline_canchoosecolumnscheck_callback != nullptr) {
            bool callback_ret = ktreewidgetsearchline_canchoosecolumnscheck_callback();
            return callback_ret;
        } else {
            return KTreeWidgetSearchLine::canChooseColumnsCheck();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktreewidgetsearchline_event_isbase) {
            ktreewidgetsearchline_event_isbase = false;
            return KTreeWidgetSearchLine::event(event);
        } else if (ktreewidgetsearchline_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = ktreewidgetsearchline_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTreeWidgetSearchLine::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ktreewidgetsearchline_sizehint_isbase) {
            ktreewidgetsearchline_sizehint_isbase = false;
            return KTreeWidgetSearchLine::sizeHint();
        } else if (ktreewidgetsearchline_sizehint_callback != nullptr) {
            QSize* callback_ret = ktreewidgetsearchline_sizehint_callback();
            return *callback_ret;
        } else {
            return KTreeWidgetSearchLine::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ktreewidgetsearchline_minimumsizehint_isbase) {
            ktreewidgetsearchline_minimumsizehint_isbase = false;
            return KTreeWidgetSearchLine::minimumSizeHint();
        } else if (ktreewidgetsearchline_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = ktreewidgetsearchline_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KTreeWidgetSearchLine::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (ktreewidgetsearchline_mousepressevent_isbase) {
            ktreewidgetsearchline_mousepressevent_isbase = false;
            KTreeWidgetSearchLine::mousePressEvent(param1);
        } else if (ktreewidgetsearchline_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            ktreewidgetsearchline_mousepressevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (ktreewidgetsearchline_mousemoveevent_isbase) {
            ktreewidgetsearchline_mousemoveevent_isbase = false;
            KTreeWidgetSearchLine::mouseMoveEvent(param1);
        } else if (ktreewidgetsearchline_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            ktreewidgetsearchline_mousemoveevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (ktreewidgetsearchline_mousereleaseevent_isbase) {
            ktreewidgetsearchline_mousereleaseevent_isbase = false;
            KTreeWidgetSearchLine::mouseReleaseEvent(param1);
        } else if (ktreewidgetsearchline_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            ktreewidgetsearchline_mousereleaseevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (ktreewidgetsearchline_mousedoubleclickevent_isbase) {
            ktreewidgetsearchline_mousedoubleclickevent_isbase = false;
            KTreeWidgetSearchLine::mouseDoubleClickEvent(param1);
        } else if (ktreewidgetsearchline_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            ktreewidgetsearchline_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::mouseDoubleClickEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (ktreewidgetsearchline_keypressevent_isbase) {
            ktreewidgetsearchline_keypressevent_isbase = false;
            KTreeWidgetSearchLine::keyPressEvent(param1);
        } else if (ktreewidgetsearchline_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            ktreewidgetsearchline_keypressevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (ktreewidgetsearchline_keyreleaseevent_isbase) {
            ktreewidgetsearchline_keyreleaseevent_isbase = false;
            KTreeWidgetSearchLine::keyReleaseEvent(param1);
        } else if (ktreewidgetsearchline_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            ktreewidgetsearchline_keyreleaseevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::keyReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (ktreewidgetsearchline_focusinevent_isbase) {
            ktreewidgetsearchline_focusinevent_isbase = false;
            KTreeWidgetSearchLine::focusInEvent(param1);
        } else if (ktreewidgetsearchline_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            ktreewidgetsearchline_focusinevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::focusInEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (ktreewidgetsearchline_focusoutevent_isbase) {
            ktreewidgetsearchline_focusoutevent_isbase = false;
            KTreeWidgetSearchLine::focusOutEvent(param1);
        } else if (ktreewidgetsearchline_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            ktreewidgetsearchline_focusoutevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::focusOutEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (ktreewidgetsearchline_paintevent_isbase) {
            ktreewidgetsearchline_paintevent_isbase = false;
            KTreeWidgetSearchLine::paintEvent(param1);
        } else if (ktreewidgetsearchline_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            ktreewidgetsearchline_paintevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (ktreewidgetsearchline_dragenterevent_isbase) {
            ktreewidgetsearchline_dragenterevent_isbase = false;
            KTreeWidgetSearchLine::dragEnterEvent(param1);
        } else if (ktreewidgetsearchline_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = param1;

            ktreewidgetsearchline_dragenterevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::dragEnterEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (ktreewidgetsearchline_dragmoveevent_isbase) {
            ktreewidgetsearchline_dragmoveevent_isbase = false;
            KTreeWidgetSearchLine::dragMoveEvent(e);
        } else if (ktreewidgetsearchline_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = e;

            ktreewidgetsearchline_dragmoveevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::dragMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (ktreewidgetsearchline_dragleaveevent_isbase) {
            ktreewidgetsearchline_dragleaveevent_isbase = false;
            KTreeWidgetSearchLine::dragLeaveEvent(e);
        } else if (ktreewidgetsearchline_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = e;

            ktreewidgetsearchline_dragleaveevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::dragLeaveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (ktreewidgetsearchline_dropevent_isbase) {
            ktreewidgetsearchline_dropevent_isbase = false;
            KTreeWidgetSearchLine::dropEvent(param1);
        } else if (ktreewidgetsearchline_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = param1;

            ktreewidgetsearchline_dropevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::dropEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (ktreewidgetsearchline_changeevent_isbase) {
            ktreewidgetsearchline_changeevent_isbase = false;
            KTreeWidgetSearchLine::changeEvent(param1);
        } else if (ktreewidgetsearchline_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            ktreewidgetsearchline_changeevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ktreewidgetsearchline_inputmethodevent_isbase) {
            ktreewidgetsearchline_inputmethodevent_isbase = false;
            KTreeWidgetSearchLine::inputMethodEvent(param1);
        } else if (ktreewidgetsearchline_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            ktreewidgetsearchline_inputmethodevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (ktreewidgetsearchline_initstyleoption_isbase) {
            ktreewidgetsearchline_initstyleoption_isbase = false;
            KTreeWidgetSearchLine::initStyleOption(option);
        } else if (ktreewidgetsearchline_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            ktreewidgetsearchline_initstyleoption_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ktreewidgetsearchline_inputmethodquery_isbase) {
            ktreewidgetsearchline_inputmethodquery_isbase = false;
            return KTreeWidgetSearchLine::inputMethodQuery(param1);
        } else if (ktreewidgetsearchline_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = ktreewidgetsearchline_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KTreeWidgetSearchLine::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (ktreewidgetsearchline_timerevent_isbase) {
            ktreewidgetsearchline_timerevent_isbase = false;
            KTreeWidgetSearchLine::timerEvent(param1);
        } else if (ktreewidgetsearchline_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = param1;

            ktreewidgetsearchline_timerevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::timerEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ktreewidgetsearchline_devtype_isbase) {
            ktreewidgetsearchline_devtype_isbase = false;
            return KTreeWidgetSearchLine::devType();
        } else if (ktreewidgetsearchline_devtype_callback != nullptr) {
            int callback_ret = ktreewidgetsearchline_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KTreeWidgetSearchLine::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ktreewidgetsearchline_setvisible_isbase) {
            ktreewidgetsearchline_setvisible_isbase = false;
            KTreeWidgetSearchLine::setVisible(visible);
        } else if (ktreewidgetsearchline_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            ktreewidgetsearchline_setvisible_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ktreewidgetsearchline_heightforwidth_isbase) {
            ktreewidgetsearchline_heightforwidth_isbase = false;
            return KTreeWidgetSearchLine::heightForWidth(param1);
        } else if (ktreewidgetsearchline_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = ktreewidgetsearchline_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTreeWidgetSearchLine::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ktreewidgetsearchline_hasheightforwidth_isbase) {
            ktreewidgetsearchline_hasheightforwidth_isbase = false;
            return KTreeWidgetSearchLine::hasHeightForWidth();
        } else if (ktreewidgetsearchline_hasheightforwidth_callback != nullptr) {
            bool callback_ret = ktreewidgetsearchline_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KTreeWidgetSearchLine::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ktreewidgetsearchline_paintengine_isbase) {
            ktreewidgetsearchline_paintengine_isbase = false;
            return KTreeWidgetSearchLine::paintEngine();
        } else if (ktreewidgetsearchline_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = ktreewidgetsearchline_paintengine_callback();
            return callback_ret;
        } else {
            return KTreeWidgetSearchLine::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ktreewidgetsearchline_wheelevent_isbase) {
            ktreewidgetsearchline_wheelevent_isbase = false;
            KTreeWidgetSearchLine::wheelEvent(event);
        } else if (ktreewidgetsearchline_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            ktreewidgetsearchline_wheelevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ktreewidgetsearchline_enterevent_isbase) {
            ktreewidgetsearchline_enterevent_isbase = false;
            KTreeWidgetSearchLine::enterEvent(event);
        } else if (ktreewidgetsearchline_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            ktreewidgetsearchline_enterevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ktreewidgetsearchline_leaveevent_isbase) {
            ktreewidgetsearchline_leaveevent_isbase = false;
            KTreeWidgetSearchLine::leaveEvent(event);
        } else if (ktreewidgetsearchline_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktreewidgetsearchline_leaveevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ktreewidgetsearchline_moveevent_isbase) {
            ktreewidgetsearchline_moveevent_isbase = false;
            KTreeWidgetSearchLine::moveEvent(event);
        } else if (ktreewidgetsearchline_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            ktreewidgetsearchline_moveevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (ktreewidgetsearchline_resizeevent_isbase) {
            ktreewidgetsearchline_resizeevent_isbase = false;
            KTreeWidgetSearchLine::resizeEvent(event);
        } else if (ktreewidgetsearchline_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            ktreewidgetsearchline_resizeevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ktreewidgetsearchline_closeevent_isbase) {
            ktreewidgetsearchline_closeevent_isbase = false;
            KTreeWidgetSearchLine::closeEvent(event);
        } else if (ktreewidgetsearchline_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            ktreewidgetsearchline_closeevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ktreewidgetsearchline_tabletevent_isbase) {
            ktreewidgetsearchline_tabletevent_isbase = false;
            KTreeWidgetSearchLine::tabletEvent(event);
        } else if (ktreewidgetsearchline_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            ktreewidgetsearchline_tabletevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (ktreewidgetsearchline_actionevent_isbase) {
            ktreewidgetsearchline_actionevent_isbase = false;
            KTreeWidgetSearchLine::actionEvent(event);
        } else if (ktreewidgetsearchline_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            ktreewidgetsearchline_actionevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (ktreewidgetsearchline_showevent_isbase) {
            ktreewidgetsearchline_showevent_isbase = false;
            KTreeWidgetSearchLine::showEvent(event);
        } else if (ktreewidgetsearchline_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            ktreewidgetsearchline_showevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (ktreewidgetsearchline_hideevent_isbase) {
            ktreewidgetsearchline_hideevent_isbase = false;
            KTreeWidgetSearchLine::hideEvent(event);
        } else if (ktreewidgetsearchline_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            ktreewidgetsearchline_hideevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ktreewidgetsearchline_nativeevent_isbase) {
            ktreewidgetsearchline_nativeevent_isbase = false;
            return KTreeWidgetSearchLine::nativeEvent(eventType, message, result);
        } else if (ktreewidgetsearchline_nativeevent_callback != nullptr) {
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

            bool callback_ret = ktreewidgetsearchline_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KTreeWidgetSearchLine::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ktreewidgetsearchline_metric_isbase) {
            ktreewidgetsearchline_metric_isbase = false;
            return KTreeWidgetSearchLine::metric(param1);
        } else if (ktreewidgetsearchline_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = ktreewidgetsearchline_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTreeWidgetSearchLine::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ktreewidgetsearchline_initpainter_isbase) {
            ktreewidgetsearchline_initpainter_isbase = false;
            KTreeWidgetSearchLine::initPainter(painter);
        } else if (ktreewidgetsearchline_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            ktreewidgetsearchline_initpainter_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ktreewidgetsearchline_redirected_isbase) {
            ktreewidgetsearchline_redirected_isbase = false;
            return KTreeWidgetSearchLine::redirected(offset);
        } else if (ktreewidgetsearchline_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = ktreewidgetsearchline_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTreeWidgetSearchLine::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ktreewidgetsearchline_sharedpainter_isbase) {
            ktreewidgetsearchline_sharedpainter_isbase = false;
            return KTreeWidgetSearchLine::sharedPainter();
        } else if (ktreewidgetsearchline_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = ktreewidgetsearchline_sharedpainter_callback();
            return callback_ret;
        } else {
            return KTreeWidgetSearchLine::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ktreewidgetsearchline_focusnextprevchild_isbase) {
            ktreewidgetsearchline_focusnextprevchild_isbase = false;
            return KTreeWidgetSearchLine::focusNextPrevChild(next);
        } else if (ktreewidgetsearchline_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = ktreewidgetsearchline_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTreeWidgetSearchLine::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktreewidgetsearchline_eventfilter_isbase) {
            ktreewidgetsearchline_eventfilter_isbase = false;
            return KTreeWidgetSearchLine::eventFilter(watched, event);
        } else if (ktreewidgetsearchline_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = ktreewidgetsearchline_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KTreeWidgetSearchLine::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktreewidgetsearchline_childevent_isbase) {
            ktreewidgetsearchline_childevent_isbase = false;
            KTreeWidgetSearchLine::childEvent(event);
        } else if (ktreewidgetsearchline_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ktreewidgetsearchline_childevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktreewidgetsearchline_customevent_isbase) {
            ktreewidgetsearchline_customevent_isbase = false;
            KTreeWidgetSearchLine::customEvent(event);
        } else if (ktreewidgetsearchline_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktreewidgetsearchline_customevent_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktreewidgetsearchline_connectnotify_isbase) {
            ktreewidgetsearchline_connectnotify_isbase = false;
            KTreeWidgetSearchLine::connectNotify(signal);
        } else if (ktreewidgetsearchline_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktreewidgetsearchline_connectnotify_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktreewidgetsearchline_disconnectnotify_isbase) {
            ktreewidgetsearchline_disconnectnotify_isbase = false;
            KTreeWidgetSearchLine::disconnectNotify(signal);
        } else if (ktreewidgetsearchline_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktreewidgetsearchline_disconnectnotify_callback(this, cbval1);
        } else {
            KTreeWidgetSearchLine::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QRect cursorRect() const {
        if (ktreewidgetsearchline_cursorrect_isbase) {
            ktreewidgetsearchline_cursorrect_isbase = false;
            return KTreeWidgetSearchLine::cursorRect();
        } else if (ktreewidgetsearchline_cursorrect_callback != nullptr) {
            QRect* callback_ret = ktreewidgetsearchline_cursorrect_callback();
            return *callback_ret;
        } else {
            return KTreeWidgetSearchLine::cursorRect();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (ktreewidgetsearchline_updatemicrofocus_isbase) {
            ktreewidgetsearchline_updatemicrofocus_isbase = false;
            KTreeWidgetSearchLine::updateMicroFocus();
        } else if (ktreewidgetsearchline_updatemicrofocus_callback != nullptr) {
            ktreewidgetsearchline_updatemicrofocus_callback();
        } else {
            KTreeWidgetSearchLine::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (ktreewidgetsearchline_create_isbase) {
            ktreewidgetsearchline_create_isbase = false;
            KTreeWidgetSearchLine::create();
        } else if (ktreewidgetsearchline_create_callback != nullptr) {
            ktreewidgetsearchline_create_callback();
        } else {
            KTreeWidgetSearchLine::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (ktreewidgetsearchline_destroy_isbase) {
            ktreewidgetsearchline_destroy_isbase = false;
            KTreeWidgetSearchLine::destroy();
        } else if (ktreewidgetsearchline_destroy_callback != nullptr) {
            ktreewidgetsearchline_destroy_callback();
        } else {
            KTreeWidgetSearchLine::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (ktreewidgetsearchline_focusnextchild_isbase) {
            ktreewidgetsearchline_focusnextchild_isbase = false;
            return KTreeWidgetSearchLine::focusNextChild();
        } else if (ktreewidgetsearchline_focusnextchild_callback != nullptr) {
            bool callback_ret = ktreewidgetsearchline_focusnextchild_callback();
            return callback_ret;
        } else {
            return KTreeWidgetSearchLine::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (ktreewidgetsearchline_focuspreviouschild_isbase) {
            ktreewidgetsearchline_focuspreviouschild_isbase = false;
            return KTreeWidgetSearchLine::focusPreviousChild();
        } else if (ktreewidgetsearchline_focuspreviouschild_callback != nullptr) {
            bool callback_ret = ktreewidgetsearchline_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KTreeWidgetSearchLine::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktreewidgetsearchline_sender_isbase) {
            ktreewidgetsearchline_sender_isbase = false;
            return KTreeWidgetSearchLine::sender();
        } else if (ktreewidgetsearchline_sender_callback != nullptr) {
            QObject* callback_ret = ktreewidgetsearchline_sender_callback();
            return callback_ret;
        } else {
            return KTreeWidgetSearchLine::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktreewidgetsearchline_sendersignalindex_isbase) {
            ktreewidgetsearchline_sendersignalindex_isbase = false;
            return KTreeWidgetSearchLine::senderSignalIndex();
        } else if (ktreewidgetsearchline_sendersignalindex_callback != nullptr) {
            int callback_ret = ktreewidgetsearchline_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KTreeWidgetSearchLine::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktreewidgetsearchline_receivers_isbase) {
            ktreewidgetsearchline_receivers_isbase = false;
            return KTreeWidgetSearchLine::receivers(signal);
        } else if (ktreewidgetsearchline_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ktreewidgetsearchline_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTreeWidgetSearchLine::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktreewidgetsearchline_issignalconnected_isbase) {
            ktreewidgetsearchline_issignalconnected_isbase = false;
            return KTreeWidgetSearchLine::isSignalConnected(signal);
        } else if (ktreewidgetsearchline_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ktreewidgetsearchline_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTreeWidgetSearchLine::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (ktreewidgetsearchline_getdecodedmetricf_isbase) {
            ktreewidgetsearchline_getdecodedmetricf_isbase = false;
            return KTreeWidgetSearchLine::getDecodedMetricF(metricA, metricB);
        } else if (ktreewidgetsearchline_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = ktreewidgetsearchline_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KTreeWidgetSearchLine::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KTreeWidgetSearchLine_ItemMatches(const KTreeWidgetSearchLine* self, const QTreeWidgetItem* item, const libqt_string pattern);
    friend bool KTreeWidgetSearchLine_QBaseItemMatches(const KTreeWidgetSearchLine* self, const QTreeWidgetItem* item, const libqt_string pattern);
    friend void KTreeWidgetSearchLine_ContextMenuEvent(KTreeWidgetSearchLine* self, QContextMenuEvent* param1);
    friend void KTreeWidgetSearchLine_QBaseContextMenuEvent(KTreeWidgetSearchLine* self, QContextMenuEvent* param1);
    friend void KTreeWidgetSearchLine_UpdateSearch2(KTreeWidgetSearchLine* self, QTreeWidget* treeWidget);
    friend void KTreeWidgetSearchLine_QBaseUpdateSearch2(KTreeWidgetSearchLine* self, QTreeWidget* treeWidget);
    friend void KTreeWidgetSearchLine_ConnectTreeWidget(KTreeWidgetSearchLine* self, QTreeWidget* param1);
    friend void KTreeWidgetSearchLine_QBaseConnectTreeWidget(KTreeWidgetSearchLine* self, QTreeWidget* param1);
    friend void KTreeWidgetSearchLine_DisconnectTreeWidget(KTreeWidgetSearchLine* self, QTreeWidget* param1);
    friend void KTreeWidgetSearchLine_QBaseDisconnectTreeWidget(KTreeWidgetSearchLine* self, QTreeWidget* param1);
    friend bool KTreeWidgetSearchLine_CanChooseColumnsCheck(KTreeWidgetSearchLine* self);
    friend bool KTreeWidgetSearchLine_QBaseCanChooseColumnsCheck(KTreeWidgetSearchLine* self);
    friend bool KTreeWidgetSearchLine_Event(KTreeWidgetSearchLine* self, QEvent* event);
    friend bool KTreeWidgetSearchLine_QBaseEvent(KTreeWidgetSearchLine* self, QEvent* event);
    friend void KTreeWidgetSearchLine_MousePressEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1);
    friend void KTreeWidgetSearchLine_QBaseMousePressEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1);
    friend void KTreeWidgetSearchLine_MouseMoveEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1);
    friend void KTreeWidgetSearchLine_QBaseMouseMoveEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1);
    friend void KTreeWidgetSearchLine_MouseReleaseEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1);
    friend void KTreeWidgetSearchLine_QBaseMouseReleaseEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1);
    friend void KTreeWidgetSearchLine_MouseDoubleClickEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1);
    friend void KTreeWidgetSearchLine_QBaseMouseDoubleClickEvent(KTreeWidgetSearchLine* self, QMouseEvent* param1);
    friend void KTreeWidgetSearchLine_KeyPressEvent(KTreeWidgetSearchLine* self, QKeyEvent* param1);
    friend void KTreeWidgetSearchLine_QBaseKeyPressEvent(KTreeWidgetSearchLine* self, QKeyEvent* param1);
    friend void KTreeWidgetSearchLine_KeyReleaseEvent(KTreeWidgetSearchLine* self, QKeyEvent* param1);
    friend void KTreeWidgetSearchLine_QBaseKeyReleaseEvent(KTreeWidgetSearchLine* self, QKeyEvent* param1);
    friend void KTreeWidgetSearchLine_FocusInEvent(KTreeWidgetSearchLine* self, QFocusEvent* param1);
    friend void KTreeWidgetSearchLine_QBaseFocusInEvent(KTreeWidgetSearchLine* self, QFocusEvent* param1);
    friend void KTreeWidgetSearchLine_FocusOutEvent(KTreeWidgetSearchLine* self, QFocusEvent* param1);
    friend void KTreeWidgetSearchLine_QBaseFocusOutEvent(KTreeWidgetSearchLine* self, QFocusEvent* param1);
    friend void KTreeWidgetSearchLine_PaintEvent(KTreeWidgetSearchLine* self, QPaintEvent* param1);
    friend void KTreeWidgetSearchLine_QBasePaintEvent(KTreeWidgetSearchLine* self, QPaintEvent* param1);
    friend void KTreeWidgetSearchLine_DragEnterEvent(KTreeWidgetSearchLine* self, QDragEnterEvent* param1);
    friend void KTreeWidgetSearchLine_QBaseDragEnterEvent(KTreeWidgetSearchLine* self, QDragEnterEvent* param1);
    friend void KTreeWidgetSearchLine_DragMoveEvent(KTreeWidgetSearchLine* self, QDragMoveEvent* e);
    friend void KTreeWidgetSearchLine_QBaseDragMoveEvent(KTreeWidgetSearchLine* self, QDragMoveEvent* e);
    friend void KTreeWidgetSearchLine_DragLeaveEvent(KTreeWidgetSearchLine* self, QDragLeaveEvent* e);
    friend void KTreeWidgetSearchLine_QBaseDragLeaveEvent(KTreeWidgetSearchLine* self, QDragLeaveEvent* e);
    friend void KTreeWidgetSearchLine_DropEvent(KTreeWidgetSearchLine* self, QDropEvent* param1);
    friend void KTreeWidgetSearchLine_QBaseDropEvent(KTreeWidgetSearchLine* self, QDropEvent* param1);
    friend void KTreeWidgetSearchLine_ChangeEvent(KTreeWidgetSearchLine* self, QEvent* param1);
    friend void KTreeWidgetSearchLine_QBaseChangeEvent(KTreeWidgetSearchLine* self, QEvent* param1);
    friend void KTreeWidgetSearchLine_InputMethodEvent(KTreeWidgetSearchLine* self, QInputMethodEvent* param1);
    friend void KTreeWidgetSearchLine_QBaseInputMethodEvent(KTreeWidgetSearchLine* self, QInputMethodEvent* param1);
    friend void KTreeWidgetSearchLine_InitStyleOption(const KTreeWidgetSearchLine* self, QStyleOptionFrame* option);
    friend void KTreeWidgetSearchLine_QBaseInitStyleOption(const KTreeWidgetSearchLine* self, QStyleOptionFrame* option);
    friend void KTreeWidgetSearchLine_WheelEvent(KTreeWidgetSearchLine* self, QWheelEvent* event);
    friend void KTreeWidgetSearchLine_QBaseWheelEvent(KTreeWidgetSearchLine* self, QWheelEvent* event);
    friend void KTreeWidgetSearchLine_EnterEvent(KTreeWidgetSearchLine* self, QEnterEvent* event);
    friend void KTreeWidgetSearchLine_QBaseEnterEvent(KTreeWidgetSearchLine* self, QEnterEvent* event);
    friend void KTreeWidgetSearchLine_LeaveEvent(KTreeWidgetSearchLine* self, QEvent* event);
    friend void KTreeWidgetSearchLine_QBaseLeaveEvent(KTreeWidgetSearchLine* self, QEvent* event);
    friend void KTreeWidgetSearchLine_MoveEvent(KTreeWidgetSearchLine* self, QMoveEvent* event);
    friend void KTreeWidgetSearchLine_QBaseMoveEvent(KTreeWidgetSearchLine* self, QMoveEvent* event);
    friend void KTreeWidgetSearchLine_ResizeEvent(KTreeWidgetSearchLine* self, QResizeEvent* event);
    friend void KTreeWidgetSearchLine_QBaseResizeEvent(KTreeWidgetSearchLine* self, QResizeEvent* event);
    friend void KTreeWidgetSearchLine_CloseEvent(KTreeWidgetSearchLine* self, QCloseEvent* event);
    friend void KTreeWidgetSearchLine_QBaseCloseEvent(KTreeWidgetSearchLine* self, QCloseEvent* event);
    friend void KTreeWidgetSearchLine_TabletEvent(KTreeWidgetSearchLine* self, QTabletEvent* event);
    friend void KTreeWidgetSearchLine_QBaseTabletEvent(KTreeWidgetSearchLine* self, QTabletEvent* event);
    friend void KTreeWidgetSearchLine_ActionEvent(KTreeWidgetSearchLine* self, QActionEvent* event);
    friend void KTreeWidgetSearchLine_QBaseActionEvent(KTreeWidgetSearchLine* self, QActionEvent* event);
    friend void KTreeWidgetSearchLine_ShowEvent(KTreeWidgetSearchLine* self, QShowEvent* event);
    friend void KTreeWidgetSearchLine_QBaseShowEvent(KTreeWidgetSearchLine* self, QShowEvent* event);
    friend void KTreeWidgetSearchLine_HideEvent(KTreeWidgetSearchLine* self, QHideEvent* event);
    friend void KTreeWidgetSearchLine_QBaseHideEvent(KTreeWidgetSearchLine* self, QHideEvent* event);
    friend bool KTreeWidgetSearchLine_NativeEvent(KTreeWidgetSearchLine* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KTreeWidgetSearchLine_QBaseNativeEvent(KTreeWidgetSearchLine* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KTreeWidgetSearchLine_Metric(const KTreeWidgetSearchLine* self, int param1);
    friend int KTreeWidgetSearchLine_QBaseMetric(const KTreeWidgetSearchLine* self, int param1);
    friend void KTreeWidgetSearchLine_InitPainter(const KTreeWidgetSearchLine* self, QPainter* painter);
    friend void KTreeWidgetSearchLine_QBaseInitPainter(const KTreeWidgetSearchLine* self, QPainter* painter);
    friend QPaintDevice* KTreeWidgetSearchLine_Redirected(const KTreeWidgetSearchLine* self, QPoint* offset);
    friend QPaintDevice* KTreeWidgetSearchLine_QBaseRedirected(const KTreeWidgetSearchLine* self, QPoint* offset);
    friend QPainter* KTreeWidgetSearchLine_SharedPainter(const KTreeWidgetSearchLine* self);
    friend QPainter* KTreeWidgetSearchLine_QBaseSharedPainter(const KTreeWidgetSearchLine* self);
    friend bool KTreeWidgetSearchLine_FocusNextPrevChild(KTreeWidgetSearchLine* self, bool next);
    friend bool KTreeWidgetSearchLine_QBaseFocusNextPrevChild(KTreeWidgetSearchLine* self, bool next);
    friend void KTreeWidgetSearchLine_ChildEvent(KTreeWidgetSearchLine* self, QChildEvent* event);
    friend void KTreeWidgetSearchLine_QBaseChildEvent(KTreeWidgetSearchLine* self, QChildEvent* event);
    friend void KTreeWidgetSearchLine_CustomEvent(KTreeWidgetSearchLine* self, QEvent* event);
    friend void KTreeWidgetSearchLine_QBaseCustomEvent(KTreeWidgetSearchLine* self, QEvent* event);
    friend void KTreeWidgetSearchLine_ConnectNotify(KTreeWidgetSearchLine* self, const QMetaMethod* signal);
    friend void KTreeWidgetSearchLine_QBaseConnectNotify(KTreeWidgetSearchLine* self, const QMetaMethod* signal);
    friend void KTreeWidgetSearchLine_DisconnectNotify(KTreeWidgetSearchLine* self, const QMetaMethod* signal);
    friend void KTreeWidgetSearchLine_QBaseDisconnectNotify(KTreeWidgetSearchLine* self, const QMetaMethod* signal);
    friend QRect* KTreeWidgetSearchLine_CursorRect(const KTreeWidgetSearchLine* self);
    friend QRect* KTreeWidgetSearchLine_QBaseCursorRect(const KTreeWidgetSearchLine* self);
    friend void KTreeWidgetSearchLine_UpdateMicroFocus(KTreeWidgetSearchLine* self);
    friend void KTreeWidgetSearchLine_QBaseUpdateMicroFocus(KTreeWidgetSearchLine* self);
    friend void KTreeWidgetSearchLine_Create(KTreeWidgetSearchLine* self);
    friend void KTreeWidgetSearchLine_QBaseCreate(KTreeWidgetSearchLine* self);
    friend void KTreeWidgetSearchLine_Destroy(KTreeWidgetSearchLine* self);
    friend void KTreeWidgetSearchLine_QBaseDestroy(KTreeWidgetSearchLine* self);
    friend bool KTreeWidgetSearchLine_FocusNextChild(KTreeWidgetSearchLine* self);
    friend bool KTreeWidgetSearchLine_QBaseFocusNextChild(KTreeWidgetSearchLine* self);
    friend bool KTreeWidgetSearchLine_FocusPreviousChild(KTreeWidgetSearchLine* self);
    friend bool KTreeWidgetSearchLine_QBaseFocusPreviousChild(KTreeWidgetSearchLine* self);
    friend QObject* KTreeWidgetSearchLine_Sender(const KTreeWidgetSearchLine* self);
    friend QObject* KTreeWidgetSearchLine_QBaseSender(const KTreeWidgetSearchLine* self);
    friend int KTreeWidgetSearchLine_SenderSignalIndex(const KTreeWidgetSearchLine* self);
    friend int KTreeWidgetSearchLine_QBaseSenderSignalIndex(const KTreeWidgetSearchLine* self);
    friend int KTreeWidgetSearchLine_Receivers(const KTreeWidgetSearchLine* self, const char* signal);
    friend int KTreeWidgetSearchLine_QBaseReceivers(const KTreeWidgetSearchLine* self, const char* signal);
    friend bool KTreeWidgetSearchLine_IsSignalConnected(const KTreeWidgetSearchLine* self, const QMetaMethod* signal);
    friend bool KTreeWidgetSearchLine_QBaseIsSignalConnected(const KTreeWidgetSearchLine* self, const QMetaMethod* signal);
    friend double KTreeWidgetSearchLine_GetDecodedMetricF(const KTreeWidgetSearchLine* self, int metricA, int metricB);
    friend double KTreeWidgetSearchLine_QBaseGetDecodedMetricF(const KTreeWidgetSearchLine* self, int metricA, int metricB);
};

#endif
