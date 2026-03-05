#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKASSISTANTDIALOG_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKASSISTANTDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KAssistantDialog so that we can call protected methods
class VirtualKAssistantDialog final : public KAssistantDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKAssistantDialog = true;

    // Virtual class public types (including callbacks)
    using KAssistantDialog_MetaObject_Callback = QMetaObject* (*)();
    using KAssistantDialog_Metacast_Callback = void* (*)(KAssistantDialog*, const char*);
    using KAssistantDialog_Metacall_Callback = int (*)(KAssistantDialog*, int, int, void**);
    using KAssistantDialog_Back_Callback = void (*)();
    using KAssistantDialog_Next_Callback = void (*)();
    using KAssistantDialog_ShowEvent_Callback = void (*)(KAssistantDialog*, QShowEvent*);
    using KAssistantDialog_SetVisible_Callback = void (*)(KAssistantDialog*, bool);
    using KAssistantDialog_SizeHint_Callback = QSize* (*)();
    using KAssistantDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KAssistantDialog_Open_Callback = void (*)();
    using KAssistantDialog_Exec_Callback = int (*)();
    using KAssistantDialog_Done_Callback = void (*)(KAssistantDialog*, int);
    using KAssistantDialog_Accept_Callback = void (*)();
    using KAssistantDialog_Reject_Callback = void (*)();
    using KAssistantDialog_KeyPressEvent_Callback = void (*)(KAssistantDialog*, QKeyEvent*);
    using KAssistantDialog_CloseEvent_Callback = void (*)(KAssistantDialog*, QCloseEvent*);
    using KAssistantDialog_ResizeEvent_Callback = void (*)(KAssistantDialog*, QResizeEvent*);
    using KAssistantDialog_ContextMenuEvent_Callback = void (*)(KAssistantDialog*, QContextMenuEvent*);
    using KAssistantDialog_EventFilter_Callback = bool (*)(KAssistantDialog*, QObject*, QEvent*);
    using KAssistantDialog_DevType_Callback = int (*)();
    using KAssistantDialog_HeightForWidth_Callback = int (*)(const KAssistantDialog*, int);
    using KAssistantDialog_HasHeightForWidth_Callback = bool (*)();
    using KAssistantDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KAssistantDialog_Event_Callback = bool (*)(KAssistantDialog*, QEvent*);
    using KAssistantDialog_MousePressEvent_Callback = void (*)(KAssistantDialog*, QMouseEvent*);
    using KAssistantDialog_MouseReleaseEvent_Callback = void (*)(KAssistantDialog*, QMouseEvent*);
    using KAssistantDialog_MouseDoubleClickEvent_Callback = void (*)(KAssistantDialog*, QMouseEvent*);
    using KAssistantDialog_MouseMoveEvent_Callback = void (*)(KAssistantDialog*, QMouseEvent*);
    using KAssistantDialog_WheelEvent_Callback = void (*)(KAssistantDialog*, QWheelEvent*);
    using KAssistantDialog_KeyReleaseEvent_Callback = void (*)(KAssistantDialog*, QKeyEvent*);
    using KAssistantDialog_FocusInEvent_Callback = void (*)(KAssistantDialog*, QFocusEvent*);
    using KAssistantDialog_FocusOutEvent_Callback = void (*)(KAssistantDialog*, QFocusEvent*);
    using KAssistantDialog_EnterEvent_Callback = void (*)(KAssistantDialog*, QEnterEvent*);
    using KAssistantDialog_LeaveEvent_Callback = void (*)(KAssistantDialog*, QEvent*);
    using KAssistantDialog_PaintEvent_Callback = void (*)(KAssistantDialog*, QPaintEvent*);
    using KAssistantDialog_MoveEvent_Callback = void (*)(KAssistantDialog*, QMoveEvent*);
    using KAssistantDialog_TabletEvent_Callback = void (*)(KAssistantDialog*, QTabletEvent*);
    using KAssistantDialog_ActionEvent_Callback = void (*)(KAssistantDialog*, QActionEvent*);
    using KAssistantDialog_DragEnterEvent_Callback = void (*)(KAssistantDialog*, QDragEnterEvent*);
    using KAssistantDialog_DragMoveEvent_Callback = void (*)(KAssistantDialog*, QDragMoveEvent*);
    using KAssistantDialog_DragLeaveEvent_Callback = void (*)(KAssistantDialog*, QDragLeaveEvent*);
    using KAssistantDialog_DropEvent_Callback = void (*)(KAssistantDialog*, QDropEvent*);
    using KAssistantDialog_HideEvent_Callback = void (*)(KAssistantDialog*, QHideEvent*);
    using KAssistantDialog_NativeEvent_Callback = bool (*)(KAssistantDialog*, libqt_string, void*, intptr_t*);
    using KAssistantDialog_ChangeEvent_Callback = void (*)(KAssistantDialog*, QEvent*);
    using KAssistantDialog_Metric_Callback = int (*)(const KAssistantDialog*, int);
    using KAssistantDialog_InitPainter_Callback = void (*)(const KAssistantDialog*, QPainter*);
    using KAssistantDialog_Redirected_Callback = QPaintDevice* (*)(const KAssistantDialog*, QPoint*);
    using KAssistantDialog_SharedPainter_Callback = QPainter* (*)();
    using KAssistantDialog_InputMethodEvent_Callback = void (*)(KAssistantDialog*, QInputMethodEvent*);
    using KAssistantDialog_InputMethodQuery_Callback = QVariant* (*)(const KAssistantDialog*, int);
    using KAssistantDialog_FocusNextPrevChild_Callback = bool (*)(KAssistantDialog*, bool);
    using KAssistantDialog_TimerEvent_Callback = void (*)(KAssistantDialog*, QTimerEvent*);
    using KAssistantDialog_ChildEvent_Callback = void (*)(KAssistantDialog*, QChildEvent*);
    using KAssistantDialog_CustomEvent_Callback = void (*)(KAssistantDialog*, QEvent*);
    using KAssistantDialog_ConnectNotify_Callback = void (*)(KAssistantDialog*, QMetaMethod*);
    using KAssistantDialog_DisconnectNotify_Callback = void (*)(KAssistantDialog*, QMetaMethod*);
    using KAssistantDialog_PageWidget_Callback = KPageWidget* (*)();
    using KAssistantDialog_SetPageWidget_Callback = void (*)(KAssistantDialog*, KPageWidget*);
    using KAssistantDialog_ButtonBox_Callback = QDialogButtonBox* (*)();
    using KAssistantDialog_SetButtonBox_Callback = void (*)(KAssistantDialog*, QDialogButtonBox*);
    using KAssistantDialog_AdjustPosition_Callback = void (*)(KAssistantDialog*, QWidget*);
    using KAssistantDialog_UpdateMicroFocus_Callback = void (*)();
    using KAssistantDialog_Create_Callback = void (*)();
    using KAssistantDialog_Destroy_Callback = void (*)();
    using KAssistantDialog_FocusNextChild_Callback = bool (*)();
    using KAssistantDialog_FocusPreviousChild_Callback = bool (*)();
    using KAssistantDialog_Sender_Callback = QObject* (*)();
    using KAssistantDialog_SenderSignalIndex_Callback = int (*)();
    using KAssistantDialog_Receivers_Callback = int (*)(const KAssistantDialog*, const char*);
    using KAssistantDialog_IsSignalConnected_Callback = bool (*)(const KAssistantDialog*, QMetaMethod*);
    using KAssistantDialog_GetDecodedMetricF_Callback = double (*)(const KAssistantDialog*, int, int);

  protected:
    // Instance callback storage
    KAssistantDialog_MetaObject_Callback kassistantdialog_metaobject_callback = nullptr;
    KAssistantDialog_Metacast_Callback kassistantdialog_metacast_callback = nullptr;
    KAssistantDialog_Metacall_Callback kassistantdialog_metacall_callback = nullptr;
    KAssistantDialog_Back_Callback kassistantdialog_back_callback = nullptr;
    KAssistantDialog_Next_Callback kassistantdialog_next_callback = nullptr;
    KAssistantDialog_ShowEvent_Callback kassistantdialog_showevent_callback = nullptr;
    KAssistantDialog_SetVisible_Callback kassistantdialog_setvisible_callback = nullptr;
    KAssistantDialog_SizeHint_Callback kassistantdialog_sizehint_callback = nullptr;
    KAssistantDialog_MinimumSizeHint_Callback kassistantdialog_minimumsizehint_callback = nullptr;
    KAssistantDialog_Open_Callback kassistantdialog_open_callback = nullptr;
    KAssistantDialog_Exec_Callback kassistantdialog_exec_callback = nullptr;
    KAssistantDialog_Done_Callback kassistantdialog_done_callback = nullptr;
    KAssistantDialog_Accept_Callback kassistantdialog_accept_callback = nullptr;
    KAssistantDialog_Reject_Callback kassistantdialog_reject_callback = nullptr;
    KAssistantDialog_KeyPressEvent_Callback kassistantdialog_keypressevent_callback = nullptr;
    KAssistantDialog_CloseEvent_Callback kassistantdialog_closeevent_callback = nullptr;
    KAssistantDialog_ResizeEvent_Callback kassistantdialog_resizeevent_callback = nullptr;
    KAssistantDialog_ContextMenuEvent_Callback kassistantdialog_contextmenuevent_callback = nullptr;
    KAssistantDialog_EventFilter_Callback kassistantdialog_eventfilter_callback = nullptr;
    KAssistantDialog_DevType_Callback kassistantdialog_devtype_callback = nullptr;
    KAssistantDialog_HeightForWidth_Callback kassistantdialog_heightforwidth_callback = nullptr;
    KAssistantDialog_HasHeightForWidth_Callback kassistantdialog_hasheightforwidth_callback = nullptr;
    KAssistantDialog_PaintEngine_Callback kassistantdialog_paintengine_callback = nullptr;
    KAssistantDialog_Event_Callback kassistantdialog_event_callback = nullptr;
    KAssistantDialog_MousePressEvent_Callback kassistantdialog_mousepressevent_callback = nullptr;
    KAssistantDialog_MouseReleaseEvent_Callback kassistantdialog_mousereleaseevent_callback = nullptr;
    KAssistantDialog_MouseDoubleClickEvent_Callback kassistantdialog_mousedoubleclickevent_callback = nullptr;
    KAssistantDialog_MouseMoveEvent_Callback kassistantdialog_mousemoveevent_callback = nullptr;
    KAssistantDialog_WheelEvent_Callback kassistantdialog_wheelevent_callback = nullptr;
    KAssistantDialog_KeyReleaseEvent_Callback kassistantdialog_keyreleaseevent_callback = nullptr;
    KAssistantDialog_FocusInEvent_Callback kassistantdialog_focusinevent_callback = nullptr;
    KAssistantDialog_FocusOutEvent_Callback kassistantdialog_focusoutevent_callback = nullptr;
    KAssistantDialog_EnterEvent_Callback kassistantdialog_enterevent_callback = nullptr;
    KAssistantDialog_LeaveEvent_Callback kassistantdialog_leaveevent_callback = nullptr;
    KAssistantDialog_PaintEvent_Callback kassistantdialog_paintevent_callback = nullptr;
    KAssistantDialog_MoveEvent_Callback kassistantdialog_moveevent_callback = nullptr;
    KAssistantDialog_TabletEvent_Callback kassistantdialog_tabletevent_callback = nullptr;
    KAssistantDialog_ActionEvent_Callback kassistantdialog_actionevent_callback = nullptr;
    KAssistantDialog_DragEnterEvent_Callback kassistantdialog_dragenterevent_callback = nullptr;
    KAssistantDialog_DragMoveEvent_Callback kassistantdialog_dragmoveevent_callback = nullptr;
    KAssistantDialog_DragLeaveEvent_Callback kassistantdialog_dragleaveevent_callback = nullptr;
    KAssistantDialog_DropEvent_Callback kassistantdialog_dropevent_callback = nullptr;
    KAssistantDialog_HideEvent_Callback kassistantdialog_hideevent_callback = nullptr;
    KAssistantDialog_NativeEvent_Callback kassistantdialog_nativeevent_callback = nullptr;
    KAssistantDialog_ChangeEvent_Callback kassistantdialog_changeevent_callback = nullptr;
    KAssistantDialog_Metric_Callback kassistantdialog_metric_callback = nullptr;
    KAssistantDialog_InitPainter_Callback kassistantdialog_initpainter_callback = nullptr;
    KAssistantDialog_Redirected_Callback kassistantdialog_redirected_callback = nullptr;
    KAssistantDialog_SharedPainter_Callback kassistantdialog_sharedpainter_callback = nullptr;
    KAssistantDialog_InputMethodEvent_Callback kassistantdialog_inputmethodevent_callback = nullptr;
    KAssistantDialog_InputMethodQuery_Callback kassistantdialog_inputmethodquery_callback = nullptr;
    KAssistantDialog_FocusNextPrevChild_Callback kassistantdialog_focusnextprevchild_callback = nullptr;
    KAssistantDialog_TimerEvent_Callback kassistantdialog_timerevent_callback = nullptr;
    KAssistantDialog_ChildEvent_Callback kassistantdialog_childevent_callback = nullptr;
    KAssistantDialog_CustomEvent_Callback kassistantdialog_customevent_callback = nullptr;
    KAssistantDialog_ConnectNotify_Callback kassistantdialog_connectnotify_callback = nullptr;
    KAssistantDialog_DisconnectNotify_Callback kassistantdialog_disconnectnotify_callback = nullptr;
    KAssistantDialog_PageWidget_Callback kassistantdialog_pagewidget_callback = nullptr;
    KAssistantDialog_SetPageWidget_Callback kassistantdialog_setpagewidget_callback = nullptr;
    KAssistantDialog_ButtonBox_Callback kassistantdialog_buttonbox_callback = nullptr;
    KAssistantDialog_SetButtonBox_Callback kassistantdialog_setbuttonbox_callback = nullptr;
    KAssistantDialog_AdjustPosition_Callback kassistantdialog_adjustposition_callback = nullptr;
    KAssistantDialog_UpdateMicroFocus_Callback kassistantdialog_updatemicrofocus_callback = nullptr;
    KAssistantDialog_Create_Callback kassistantdialog_create_callback = nullptr;
    KAssistantDialog_Destroy_Callback kassistantdialog_destroy_callback = nullptr;
    KAssistantDialog_FocusNextChild_Callback kassistantdialog_focusnextchild_callback = nullptr;
    KAssistantDialog_FocusPreviousChild_Callback kassistantdialog_focuspreviouschild_callback = nullptr;
    KAssistantDialog_Sender_Callback kassistantdialog_sender_callback = nullptr;
    KAssistantDialog_SenderSignalIndex_Callback kassistantdialog_sendersignalindex_callback = nullptr;
    KAssistantDialog_Receivers_Callback kassistantdialog_receivers_callback = nullptr;
    KAssistantDialog_IsSignalConnected_Callback kassistantdialog_issignalconnected_callback = nullptr;
    KAssistantDialog_GetDecodedMetricF_Callback kassistantdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kassistantdialog_metaobject_isbase = false;
    mutable bool kassistantdialog_metacast_isbase = false;
    mutable bool kassistantdialog_metacall_isbase = false;
    mutable bool kassistantdialog_back_isbase = false;
    mutable bool kassistantdialog_next_isbase = false;
    mutable bool kassistantdialog_showevent_isbase = false;
    mutable bool kassistantdialog_setvisible_isbase = false;
    mutable bool kassistantdialog_sizehint_isbase = false;
    mutable bool kassistantdialog_minimumsizehint_isbase = false;
    mutable bool kassistantdialog_open_isbase = false;
    mutable bool kassistantdialog_exec_isbase = false;
    mutable bool kassistantdialog_done_isbase = false;
    mutable bool kassistantdialog_accept_isbase = false;
    mutable bool kassistantdialog_reject_isbase = false;
    mutable bool kassistantdialog_keypressevent_isbase = false;
    mutable bool kassistantdialog_closeevent_isbase = false;
    mutable bool kassistantdialog_resizeevent_isbase = false;
    mutable bool kassistantdialog_contextmenuevent_isbase = false;
    mutable bool kassistantdialog_eventfilter_isbase = false;
    mutable bool kassistantdialog_devtype_isbase = false;
    mutable bool kassistantdialog_heightforwidth_isbase = false;
    mutable bool kassistantdialog_hasheightforwidth_isbase = false;
    mutable bool kassistantdialog_paintengine_isbase = false;
    mutable bool kassistantdialog_event_isbase = false;
    mutable bool kassistantdialog_mousepressevent_isbase = false;
    mutable bool kassistantdialog_mousereleaseevent_isbase = false;
    mutable bool kassistantdialog_mousedoubleclickevent_isbase = false;
    mutable bool kassistantdialog_mousemoveevent_isbase = false;
    mutable bool kassistantdialog_wheelevent_isbase = false;
    mutable bool kassistantdialog_keyreleaseevent_isbase = false;
    mutable bool kassistantdialog_focusinevent_isbase = false;
    mutable bool kassistantdialog_focusoutevent_isbase = false;
    mutable bool kassistantdialog_enterevent_isbase = false;
    mutable bool kassistantdialog_leaveevent_isbase = false;
    mutable bool kassistantdialog_paintevent_isbase = false;
    mutable bool kassistantdialog_moveevent_isbase = false;
    mutable bool kassistantdialog_tabletevent_isbase = false;
    mutable bool kassistantdialog_actionevent_isbase = false;
    mutable bool kassistantdialog_dragenterevent_isbase = false;
    mutable bool kassistantdialog_dragmoveevent_isbase = false;
    mutable bool kassistantdialog_dragleaveevent_isbase = false;
    mutable bool kassistantdialog_dropevent_isbase = false;
    mutable bool kassistantdialog_hideevent_isbase = false;
    mutable bool kassistantdialog_nativeevent_isbase = false;
    mutable bool kassistantdialog_changeevent_isbase = false;
    mutable bool kassistantdialog_metric_isbase = false;
    mutable bool kassistantdialog_initpainter_isbase = false;
    mutable bool kassistantdialog_redirected_isbase = false;
    mutable bool kassistantdialog_sharedpainter_isbase = false;
    mutable bool kassistantdialog_inputmethodevent_isbase = false;
    mutable bool kassistantdialog_inputmethodquery_isbase = false;
    mutable bool kassistantdialog_focusnextprevchild_isbase = false;
    mutable bool kassistantdialog_timerevent_isbase = false;
    mutable bool kassistantdialog_childevent_isbase = false;
    mutable bool kassistantdialog_customevent_isbase = false;
    mutable bool kassistantdialog_connectnotify_isbase = false;
    mutable bool kassistantdialog_disconnectnotify_isbase = false;
    mutable bool kassistantdialog_pagewidget_isbase = false;
    mutable bool kassistantdialog_setpagewidget_isbase = false;
    mutable bool kassistantdialog_buttonbox_isbase = false;
    mutable bool kassistantdialog_setbuttonbox_isbase = false;
    mutable bool kassistantdialog_adjustposition_isbase = false;
    mutable bool kassistantdialog_updatemicrofocus_isbase = false;
    mutable bool kassistantdialog_create_isbase = false;
    mutable bool kassistantdialog_destroy_isbase = false;
    mutable bool kassistantdialog_focusnextchild_isbase = false;
    mutable bool kassistantdialog_focuspreviouschild_isbase = false;
    mutable bool kassistantdialog_sender_isbase = false;
    mutable bool kassistantdialog_sendersignalindex_isbase = false;
    mutable bool kassistantdialog_receivers_isbase = false;
    mutable bool kassistantdialog_issignalconnected_isbase = false;
    mutable bool kassistantdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKAssistantDialog(QWidget* parent) : KAssistantDialog(parent) {};
    VirtualKAssistantDialog() : KAssistantDialog() {};
    VirtualKAssistantDialog(QWidget* parent, Qt::WindowFlags flags) : KAssistantDialog(parent, flags) {};

    // Callback setters
    inline void setKAssistantDialog_MetaObject_Callback(KAssistantDialog_MetaObject_Callback cb) { kassistantdialog_metaobject_callback = cb; }
    inline void setKAssistantDialog_Metacast_Callback(KAssistantDialog_Metacast_Callback cb) { kassistantdialog_metacast_callback = cb; }
    inline void setKAssistantDialog_Metacall_Callback(KAssistantDialog_Metacall_Callback cb) { kassistantdialog_metacall_callback = cb; }
    inline void setKAssistantDialog_Back_Callback(KAssistantDialog_Back_Callback cb) { kassistantdialog_back_callback = cb; }
    inline void setKAssistantDialog_Next_Callback(KAssistantDialog_Next_Callback cb) { kassistantdialog_next_callback = cb; }
    inline void setKAssistantDialog_ShowEvent_Callback(KAssistantDialog_ShowEvent_Callback cb) { kassistantdialog_showevent_callback = cb; }
    inline void setKAssistantDialog_SetVisible_Callback(KAssistantDialog_SetVisible_Callback cb) { kassistantdialog_setvisible_callback = cb; }
    inline void setKAssistantDialog_SizeHint_Callback(KAssistantDialog_SizeHint_Callback cb) { kassistantdialog_sizehint_callback = cb; }
    inline void setKAssistantDialog_MinimumSizeHint_Callback(KAssistantDialog_MinimumSizeHint_Callback cb) { kassistantdialog_minimumsizehint_callback = cb; }
    inline void setKAssistantDialog_Open_Callback(KAssistantDialog_Open_Callback cb) { kassistantdialog_open_callback = cb; }
    inline void setKAssistantDialog_Exec_Callback(KAssistantDialog_Exec_Callback cb) { kassistantdialog_exec_callback = cb; }
    inline void setKAssistantDialog_Done_Callback(KAssistantDialog_Done_Callback cb) { kassistantdialog_done_callback = cb; }
    inline void setKAssistantDialog_Accept_Callback(KAssistantDialog_Accept_Callback cb) { kassistantdialog_accept_callback = cb; }
    inline void setKAssistantDialog_Reject_Callback(KAssistantDialog_Reject_Callback cb) { kassistantdialog_reject_callback = cb; }
    inline void setKAssistantDialog_KeyPressEvent_Callback(KAssistantDialog_KeyPressEvent_Callback cb) { kassistantdialog_keypressevent_callback = cb; }
    inline void setKAssistantDialog_CloseEvent_Callback(KAssistantDialog_CloseEvent_Callback cb) { kassistantdialog_closeevent_callback = cb; }
    inline void setKAssistantDialog_ResizeEvent_Callback(KAssistantDialog_ResizeEvent_Callback cb) { kassistantdialog_resizeevent_callback = cb; }
    inline void setKAssistantDialog_ContextMenuEvent_Callback(KAssistantDialog_ContextMenuEvent_Callback cb) { kassistantdialog_contextmenuevent_callback = cb; }
    inline void setKAssistantDialog_EventFilter_Callback(KAssistantDialog_EventFilter_Callback cb) { kassistantdialog_eventfilter_callback = cb; }
    inline void setKAssistantDialog_DevType_Callback(KAssistantDialog_DevType_Callback cb) { kassistantdialog_devtype_callback = cb; }
    inline void setKAssistantDialog_HeightForWidth_Callback(KAssistantDialog_HeightForWidth_Callback cb) { kassistantdialog_heightforwidth_callback = cb; }
    inline void setKAssistantDialog_HasHeightForWidth_Callback(KAssistantDialog_HasHeightForWidth_Callback cb) { kassistantdialog_hasheightforwidth_callback = cb; }
    inline void setKAssistantDialog_PaintEngine_Callback(KAssistantDialog_PaintEngine_Callback cb) { kassistantdialog_paintengine_callback = cb; }
    inline void setKAssistantDialog_Event_Callback(KAssistantDialog_Event_Callback cb) { kassistantdialog_event_callback = cb; }
    inline void setKAssistantDialog_MousePressEvent_Callback(KAssistantDialog_MousePressEvent_Callback cb) { kassistantdialog_mousepressevent_callback = cb; }
    inline void setKAssistantDialog_MouseReleaseEvent_Callback(KAssistantDialog_MouseReleaseEvent_Callback cb) { kassistantdialog_mousereleaseevent_callback = cb; }
    inline void setKAssistantDialog_MouseDoubleClickEvent_Callback(KAssistantDialog_MouseDoubleClickEvent_Callback cb) { kassistantdialog_mousedoubleclickevent_callback = cb; }
    inline void setKAssistantDialog_MouseMoveEvent_Callback(KAssistantDialog_MouseMoveEvent_Callback cb) { kassistantdialog_mousemoveevent_callback = cb; }
    inline void setKAssistantDialog_WheelEvent_Callback(KAssistantDialog_WheelEvent_Callback cb) { kassistantdialog_wheelevent_callback = cb; }
    inline void setKAssistantDialog_KeyReleaseEvent_Callback(KAssistantDialog_KeyReleaseEvent_Callback cb) { kassistantdialog_keyreleaseevent_callback = cb; }
    inline void setKAssistantDialog_FocusInEvent_Callback(KAssistantDialog_FocusInEvent_Callback cb) { kassistantdialog_focusinevent_callback = cb; }
    inline void setKAssistantDialog_FocusOutEvent_Callback(KAssistantDialog_FocusOutEvent_Callback cb) { kassistantdialog_focusoutevent_callback = cb; }
    inline void setKAssistantDialog_EnterEvent_Callback(KAssistantDialog_EnterEvent_Callback cb) { kassistantdialog_enterevent_callback = cb; }
    inline void setKAssistantDialog_LeaveEvent_Callback(KAssistantDialog_LeaveEvent_Callback cb) { kassistantdialog_leaveevent_callback = cb; }
    inline void setKAssistantDialog_PaintEvent_Callback(KAssistantDialog_PaintEvent_Callback cb) { kassistantdialog_paintevent_callback = cb; }
    inline void setKAssistantDialog_MoveEvent_Callback(KAssistantDialog_MoveEvent_Callback cb) { kassistantdialog_moveevent_callback = cb; }
    inline void setKAssistantDialog_TabletEvent_Callback(KAssistantDialog_TabletEvent_Callback cb) { kassistantdialog_tabletevent_callback = cb; }
    inline void setKAssistantDialog_ActionEvent_Callback(KAssistantDialog_ActionEvent_Callback cb) { kassistantdialog_actionevent_callback = cb; }
    inline void setKAssistantDialog_DragEnterEvent_Callback(KAssistantDialog_DragEnterEvent_Callback cb) { kassistantdialog_dragenterevent_callback = cb; }
    inline void setKAssistantDialog_DragMoveEvent_Callback(KAssistantDialog_DragMoveEvent_Callback cb) { kassistantdialog_dragmoveevent_callback = cb; }
    inline void setKAssistantDialog_DragLeaveEvent_Callback(KAssistantDialog_DragLeaveEvent_Callback cb) { kassistantdialog_dragleaveevent_callback = cb; }
    inline void setKAssistantDialog_DropEvent_Callback(KAssistantDialog_DropEvent_Callback cb) { kassistantdialog_dropevent_callback = cb; }
    inline void setKAssistantDialog_HideEvent_Callback(KAssistantDialog_HideEvent_Callback cb) { kassistantdialog_hideevent_callback = cb; }
    inline void setKAssistantDialog_NativeEvent_Callback(KAssistantDialog_NativeEvent_Callback cb) { kassistantdialog_nativeevent_callback = cb; }
    inline void setKAssistantDialog_ChangeEvent_Callback(KAssistantDialog_ChangeEvent_Callback cb) { kassistantdialog_changeevent_callback = cb; }
    inline void setKAssistantDialog_Metric_Callback(KAssistantDialog_Metric_Callback cb) { kassistantdialog_metric_callback = cb; }
    inline void setKAssistantDialog_InitPainter_Callback(KAssistantDialog_InitPainter_Callback cb) { kassistantdialog_initpainter_callback = cb; }
    inline void setKAssistantDialog_Redirected_Callback(KAssistantDialog_Redirected_Callback cb) { kassistantdialog_redirected_callback = cb; }
    inline void setKAssistantDialog_SharedPainter_Callback(KAssistantDialog_SharedPainter_Callback cb) { kassistantdialog_sharedpainter_callback = cb; }
    inline void setKAssistantDialog_InputMethodEvent_Callback(KAssistantDialog_InputMethodEvent_Callback cb) { kassistantdialog_inputmethodevent_callback = cb; }
    inline void setKAssistantDialog_InputMethodQuery_Callback(KAssistantDialog_InputMethodQuery_Callback cb) { kassistantdialog_inputmethodquery_callback = cb; }
    inline void setKAssistantDialog_FocusNextPrevChild_Callback(KAssistantDialog_FocusNextPrevChild_Callback cb) { kassistantdialog_focusnextprevchild_callback = cb; }
    inline void setKAssistantDialog_TimerEvent_Callback(KAssistantDialog_TimerEvent_Callback cb) { kassistantdialog_timerevent_callback = cb; }
    inline void setKAssistantDialog_ChildEvent_Callback(KAssistantDialog_ChildEvent_Callback cb) { kassistantdialog_childevent_callback = cb; }
    inline void setKAssistantDialog_CustomEvent_Callback(KAssistantDialog_CustomEvent_Callback cb) { kassistantdialog_customevent_callback = cb; }
    inline void setKAssistantDialog_ConnectNotify_Callback(KAssistantDialog_ConnectNotify_Callback cb) { kassistantdialog_connectnotify_callback = cb; }
    inline void setKAssistantDialog_DisconnectNotify_Callback(KAssistantDialog_DisconnectNotify_Callback cb) { kassistantdialog_disconnectnotify_callback = cb; }
    inline void setKAssistantDialog_PageWidget_Callback(KAssistantDialog_PageWidget_Callback cb) { kassistantdialog_pagewidget_callback = cb; }
    inline void setKAssistantDialog_SetPageWidget_Callback(KAssistantDialog_SetPageWidget_Callback cb) { kassistantdialog_setpagewidget_callback = cb; }
    inline void setKAssistantDialog_ButtonBox_Callback(KAssistantDialog_ButtonBox_Callback cb) { kassistantdialog_buttonbox_callback = cb; }
    inline void setKAssistantDialog_SetButtonBox_Callback(KAssistantDialog_SetButtonBox_Callback cb) { kassistantdialog_setbuttonbox_callback = cb; }
    inline void setKAssistantDialog_AdjustPosition_Callback(KAssistantDialog_AdjustPosition_Callback cb) { kassistantdialog_adjustposition_callback = cb; }
    inline void setKAssistantDialog_UpdateMicroFocus_Callback(KAssistantDialog_UpdateMicroFocus_Callback cb) { kassistantdialog_updatemicrofocus_callback = cb; }
    inline void setKAssistantDialog_Create_Callback(KAssistantDialog_Create_Callback cb) { kassistantdialog_create_callback = cb; }
    inline void setKAssistantDialog_Destroy_Callback(KAssistantDialog_Destroy_Callback cb) { kassistantdialog_destroy_callback = cb; }
    inline void setKAssistantDialog_FocusNextChild_Callback(KAssistantDialog_FocusNextChild_Callback cb) { kassistantdialog_focusnextchild_callback = cb; }
    inline void setKAssistantDialog_FocusPreviousChild_Callback(KAssistantDialog_FocusPreviousChild_Callback cb) { kassistantdialog_focuspreviouschild_callback = cb; }
    inline void setKAssistantDialog_Sender_Callback(KAssistantDialog_Sender_Callback cb) { kassistantdialog_sender_callback = cb; }
    inline void setKAssistantDialog_SenderSignalIndex_Callback(KAssistantDialog_SenderSignalIndex_Callback cb) { kassistantdialog_sendersignalindex_callback = cb; }
    inline void setKAssistantDialog_Receivers_Callback(KAssistantDialog_Receivers_Callback cb) { kassistantdialog_receivers_callback = cb; }
    inline void setKAssistantDialog_IsSignalConnected_Callback(KAssistantDialog_IsSignalConnected_Callback cb) { kassistantdialog_issignalconnected_callback = cb; }
    inline void setKAssistantDialog_GetDecodedMetricF_Callback(KAssistantDialog_GetDecodedMetricF_Callback cb) { kassistantdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKAssistantDialog_MetaObject_IsBase(bool value) const { kassistantdialog_metaobject_isbase = value; }
    inline void setKAssistantDialog_Metacast_IsBase(bool value) const { kassistantdialog_metacast_isbase = value; }
    inline void setKAssistantDialog_Metacall_IsBase(bool value) const { kassistantdialog_metacall_isbase = value; }
    inline void setKAssistantDialog_Back_IsBase(bool value) const { kassistantdialog_back_isbase = value; }
    inline void setKAssistantDialog_Next_IsBase(bool value) const { kassistantdialog_next_isbase = value; }
    inline void setKAssistantDialog_ShowEvent_IsBase(bool value) const { kassistantdialog_showevent_isbase = value; }
    inline void setKAssistantDialog_SetVisible_IsBase(bool value) const { kassistantdialog_setvisible_isbase = value; }
    inline void setKAssistantDialog_SizeHint_IsBase(bool value) const { kassistantdialog_sizehint_isbase = value; }
    inline void setKAssistantDialog_MinimumSizeHint_IsBase(bool value) const { kassistantdialog_minimumsizehint_isbase = value; }
    inline void setKAssistantDialog_Open_IsBase(bool value) const { kassistantdialog_open_isbase = value; }
    inline void setKAssistantDialog_Exec_IsBase(bool value) const { kassistantdialog_exec_isbase = value; }
    inline void setKAssistantDialog_Done_IsBase(bool value) const { kassistantdialog_done_isbase = value; }
    inline void setKAssistantDialog_Accept_IsBase(bool value) const { kassistantdialog_accept_isbase = value; }
    inline void setKAssistantDialog_Reject_IsBase(bool value) const { kassistantdialog_reject_isbase = value; }
    inline void setKAssistantDialog_KeyPressEvent_IsBase(bool value) const { kassistantdialog_keypressevent_isbase = value; }
    inline void setKAssistantDialog_CloseEvent_IsBase(bool value) const { kassistantdialog_closeevent_isbase = value; }
    inline void setKAssistantDialog_ResizeEvent_IsBase(bool value) const { kassistantdialog_resizeevent_isbase = value; }
    inline void setKAssistantDialog_ContextMenuEvent_IsBase(bool value) const { kassistantdialog_contextmenuevent_isbase = value; }
    inline void setKAssistantDialog_EventFilter_IsBase(bool value) const { kassistantdialog_eventfilter_isbase = value; }
    inline void setKAssistantDialog_DevType_IsBase(bool value) const { kassistantdialog_devtype_isbase = value; }
    inline void setKAssistantDialog_HeightForWidth_IsBase(bool value) const { kassistantdialog_heightforwidth_isbase = value; }
    inline void setKAssistantDialog_HasHeightForWidth_IsBase(bool value) const { kassistantdialog_hasheightforwidth_isbase = value; }
    inline void setKAssistantDialog_PaintEngine_IsBase(bool value) const { kassistantdialog_paintengine_isbase = value; }
    inline void setKAssistantDialog_Event_IsBase(bool value) const { kassistantdialog_event_isbase = value; }
    inline void setKAssistantDialog_MousePressEvent_IsBase(bool value) const { kassistantdialog_mousepressevent_isbase = value; }
    inline void setKAssistantDialog_MouseReleaseEvent_IsBase(bool value) const { kassistantdialog_mousereleaseevent_isbase = value; }
    inline void setKAssistantDialog_MouseDoubleClickEvent_IsBase(bool value) const { kassistantdialog_mousedoubleclickevent_isbase = value; }
    inline void setKAssistantDialog_MouseMoveEvent_IsBase(bool value) const { kassistantdialog_mousemoveevent_isbase = value; }
    inline void setKAssistantDialog_WheelEvent_IsBase(bool value) const { kassistantdialog_wheelevent_isbase = value; }
    inline void setKAssistantDialog_KeyReleaseEvent_IsBase(bool value) const { kassistantdialog_keyreleaseevent_isbase = value; }
    inline void setKAssistantDialog_FocusInEvent_IsBase(bool value) const { kassistantdialog_focusinevent_isbase = value; }
    inline void setKAssistantDialog_FocusOutEvent_IsBase(bool value) const { kassistantdialog_focusoutevent_isbase = value; }
    inline void setKAssistantDialog_EnterEvent_IsBase(bool value) const { kassistantdialog_enterevent_isbase = value; }
    inline void setKAssistantDialog_LeaveEvent_IsBase(bool value) const { kassistantdialog_leaveevent_isbase = value; }
    inline void setKAssistantDialog_PaintEvent_IsBase(bool value) const { kassistantdialog_paintevent_isbase = value; }
    inline void setKAssistantDialog_MoveEvent_IsBase(bool value) const { kassistantdialog_moveevent_isbase = value; }
    inline void setKAssistantDialog_TabletEvent_IsBase(bool value) const { kassistantdialog_tabletevent_isbase = value; }
    inline void setKAssistantDialog_ActionEvent_IsBase(bool value) const { kassistantdialog_actionevent_isbase = value; }
    inline void setKAssistantDialog_DragEnterEvent_IsBase(bool value) const { kassistantdialog_dragenterevent_isbase = value; }
    inline void setKAssistantDialog_DragMoveEvent_IsBase(bool value) const { kassistantdialog_dragmoveevent_isbase = value; }
    inline void setKAssistantDialog_DragLeaveEvent_IsBase(bool value) const { kassistantdialog_dragleaveevent_isbase = value; }
    inline void setKAssistantDialog_DropEvent_IsBase(bool value) const { kassistantdialog_dropevent_isbase = value; }
    inline void setKAssistantDialog_HideEvent_IsBase(bool value) const { kassistantdialog_hideevent_isbase = value; }
    inline void setKAssistantDialog_NativeEvent_IsBase(bool value) const { kassistantdialog_nativeevent_isbase = value; }
    inline void setKAssistantDialog_ChangeEvent_IsBase(bool value) const { kassistantdialog_changeevent_isbase = value; }
    inline void setKAssistantDialog_Metric_IsBase(bool value) const { kassistantdialog_metric_isbase = value; }
    inline void setKAssistantDialog_InitPainter_IsBase(bool value) const { kassistantdialog_initpainter_isbase = value; }
    inline void setKAssistantDialog_Redirected_IsBase(bool value) const { kassistantdialog_redirected_isbase = value; }
    inline void setKAssistantDialog_SharedPainter_IsBase(bool value) const { kassistantdialog_sharedpainter_isbase = value; }
    inline void setKAssistantDialog_InputMethodEvent_IsBase(bool value) const { kassistantdialog_inputmethodevent_isbase = value; }
    inline void setKAssistantDialog_InputMethodQuery_IsBase(bool value) const { kassistantdialog_inputmethodquery_isbase = value; }
    inline void setKAssistantDialog_FocusNextPrevChild_IsBase(bool value) const { kassistantdialog_focusnextprevchild_isbase = value; }
    inline void setKAssistantDialog_TimerEvent_IsBase(bool value) const { kassistantdialog_timerevent_isbase = value; }
    inline void setKAssistantDialog_ChildEvent_IsBase(bool value) const { kassistantdialog_childevent_isbase = value; }
    inline void setKAssistantDialog_CustomEvent_IsBase(bool value) const { kassistantdialog_customevent_isbase = value; }
    inline void setKAssistantDialog_ConnectNotify_IsBase(bool value) const { kassistantdialog_connectnotify_isbase = value; }
    inline void setKAssistantDialog_DisconnectNotify_IsBase(bool value) const { kassistantdialog_disconnectnotify_isbase = value; }
    inline void setKAssistantDialog_PageWidget_IsBase(bool value) const { kassistantdialog_pagewidget_isbase = value; }
    inline void setKAssistantDialog_SetPageWidget_IsBase(bool value) const { kassistantdialog_setpagewidget_isbase = value; }
    inline void setKAssistantDialog_ButtonBox_IsBase(bool value) const { kassistantdialog_buttonbox_isbase = value; }
    inline void setKAssistantDialog_SetButtonBox_IsBase(bool value) const { kassistantdialog_setbuttonbox_isbase = value; }
    inline void setKAssistantDialog_AdjustPosition_IsBase(bool value) const { kassistantdialog_adjustposition_isbase = value; }
    inline void setKAssistantDialog_UpdateMicroFocus_IsBase(bool value) const { kassistantdialog_updatemicrofocus_isbase = value; }
    inline void setKAssistantDialog_Create_IsBase(bool value) const { kassistantdialog_create_isbase = value; }
    inline void setKAssistantDialog_Destroy_IsBase(bool value) const { kassistantdialog_destroy_isbase = value; }
    inline void setKAssistantDialog_FocusNextChild_IsBase(bool value) const { kassistantdialog_focusnextchild_isbase = value; }
    inline void setKAssistantDialog_FocusPreviousChild_IsBase(bool value) const { kassistantdialog_focuspreviouschild_isbase = value; }
    inline void setKAssistantDialog_Sender_IsBase(bool value) const { kassistantdialog_sender_isbase = value; }
    inline void setKAssistantDialog_SenderSignalIndex_IsBase(bool value) const { kassistantdialog_sendersignalindex_isbase = value; }
    inline void setKAssistantDialog_Receivers_IsBase(bool value) const { kassistantdialog_receivers_isbase = value; }
    inline void setKAssistantDialog_IsSignalConnected_IsBase(bool value) const { kassistantdialog_issignalconnected_isbase = value; }
    inline void setKAssistantDialog_GetDecodedMetricF_IsBase(bool value) const { kassistantdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kassistantdialog_metaobject_isbase) {
            kassistantdialog_metaobject_isbase = false;
            return KAssistantDialog::metaObject();
        }
        auto metaobject_cb = kassistantdialog_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KAssistantDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kassistantdialog_metacast_isbase) {
            kassistantdialog_metacast_isbase = false;
            return KAssistantDialog::qt_metacast(param1);
        }
        auto metacast_cb = kassistantdialog_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KAssistantDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kassistantdialog_metacall_isbase) {
            kassistantdialog_metacall_isbase = false;
            return KAssistantDialog::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kassistantdialog_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KAssistantDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void back() override {
        if (kassistantdialog_back_isbase) {
            kassistantdialog_back_isbase = false;
            KAssistantDialog::back();
            return;
        }
        auto back_cb = kassistantdialog_back_callback;
        if (back_cb) {
            back_cb();
            return;
        }
        KAssistantDialog::back();
    }

    // Virtual method for C ABI access and custom callback
    virtual void next() override {
        if (kassistantdialog_next_isbase) {
            kassistantdialog_next_isbase = false;
            KAssistantDialog::next();
            return;
        }
        auto next_cb = kassistantdialog_next_callback;
        if (next_cb) {
            next_cb();
            return;
        }
        KAssistantDialog::next();
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kassistantdialog_showevent_isbase) {
            kassistantdialog_showevent_isbase = false;
            KAssistantDialog::showEvent(event);
            return;
        }
        auto showevent_cb = kassistantdialog_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kassistantdialog_setvisible_isbase) {
            kassistantdialog_setvisible_isbase = false;
            KAssistantDialog::setVisible(visible);
            return;
        }
        auto setvisible_cb = kassistantdialog_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KAssistantDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kassistantdialog_sizehint_isbase) {
            kassistantdialog_sizehint_isbase = false;
            return KAssistantDialog::sizeHint();
        }
        auto sizehint_cb = kassistantdialog_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KAssistantDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kassistantdialog_minimumsizehint_isbase) {
            kassistantdialog_minimumsizehint_isbase = false;
            return KAssistantDialog::minimumSizeHint();
        }
        auto minimumsizehint_cb = kassistantdialog_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KAssistantDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kassistantdialog_open_isbase) {
            kassistantdialog_open_isbase = false;
            KAssistantDialog::open();
            return;
        }
        auto open_cb = kassistantdialog_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        KAssistantDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kassistantdialog_exec_isbase) {
            kassistantdialog_exec_isbase = false;
            return KAssistantDialog::exec();
        }
        auto exec_cb = kassistantdialog_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return KAssistantDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kassistantdialog_done_isbase) {
            kassistantdialog_done_isbase = false;
            KAssistantDialog::done(param1);
            return;
        }
        auto done_cb = kassistantdialog_done_callback;
        if (done_cb) {
            int cbval1 = param1;

            done_cb(this, cbval1);
            return;
        }
        KAssistantDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kassistantdialog_accept_isbase) {
            kassistantdialog_accept_isbase = false;
            KAssistantDialog::accept();
            return;
        }
        auto accept_cb = kassistantdialog_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        KAssistantDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kassistantdialog_reject_isbase) {
            kassistantdialog_reject_isbase = false;
            KAssistantDialog::reject();
            return;
        }
        auto reject_cb = kassistantdialog_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        KAssistantDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kassistantdialog_keypressevent_isbase) {
            kassistantdialog_keypressevent_isbase = false;
            KAssistantDialog::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = kassistantdialog_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kassistantdialog_closeevent_isbase) {
            kassistantdialog_closeevent_isbase = false;
            KAssistantDialog::closeEvent(param1);
            return;
        }
        auto closeevent_cb = kassistantdialog_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kassistantdialog_resizeevent_isbase) {
            kassistantdialog_resizeevent_isbase = false;
            KAssistantDialog::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = kassistantdialog_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kassistantdialog_contextmenuevent_isbase) {
            kassistantdialog_contextmenuevent_isbase = false;
            KAssistantDialog::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = kassistantdialog_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kassistantdialog_eventfilter_isbase) {
            kassistantdialog_eventfilter_isbase = false;
            return KAssistantDialog::eventFilter(param1, param2);
        }
        auto eventfilter_cb = kassistantdialog_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KAssistantDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kassistantdialog_devtype_isbase) {
            kassistantdialog_devtype_isbase = false;
            return KAssistantDialog::devType();
        }
        auto devtype_cb = kassistantdialog_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KAssistantDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kassistantdialog_heightforwidth_isbase) {
            kassistantdialog_heightforwidth_isbase = false;
            return KAssistantDialog::heightForWidth(param1);
        }
        auto heightforwidth_cb = kassistantdialog_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KAssistantDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kassistantdialog_hasheightforwidth_isbase) {
            kassistantdialog_hasheightforwidth_isbase = false;
            return KAssistantDialog::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kassistantdialog_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KAssistantDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kassistantdialog_paintengine_isbase) {
            kassistantdialog_paintengine_isbase = false;
            return KAssistantDialog::paintEngine();
        }
        auto paintengine_cb = kassistantdialog_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KAssistantDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kassistantdialog_event_isbase) {
            kassistantdialog_event_isbase = false;
            return KAssistantDialog::event(event);
        }
        auto event_cb = kassistantdialog_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KAssistantDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kassistantdialog_mousepressevent_isbase) {
            kassistantdialog_mousepressevent_isbase = false;
            KAssistantDialog::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kassistantdialog_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kassistantdialog_mousereleaseevent_isbase) {
            kassistantdialog_mousereleaseevent_isbase = false;
            KAssistantDialog::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kassistantdialog_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kassistantdialog_mousedoubleclickevent_isbase) {
            kassistantdialog_mousedoubleclickevent_isbase = false;
            KAssistantDialog::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kassistantdialog_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kassistantdialog_mousemoveevent_isbase) {
            kassistantdialog_mousemoveevent_isbase = false;
            KAssistantDialog::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kassistantdialog_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kassistantdialog_wheelevent_isbase) {
            kassistantdialog_wheelevent_isbase = false;
            KAssistantDialog::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kassistantdialog_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kassistantdialog_keyreleaseevent_isbase) {
            kassistantdialog_keyreleaseevent_isbase = false;
            KAssistantDialog::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kassistantdialog_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kassistantdialog_focusinevent_isbase) {
            kassistantdialog_focusinevent_isbase = false;
            KAssistantDialog::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kassistantdialog_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kassistantdialog_focusoutevent_isbase) {
            kassistantdialog_focusoutevent_isbase = false;
            KAssistantDialog::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kassistantdialog_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kassistantdialog_enterevent_isbase) {
            kassistantdialog_enterevent_isbase = false;
            KAssistantDialog::enterEvent(event);
            return;
        }
        auto enterevent_cb = kassistantdialog_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kassistantdialog_leaveevent_isbase) {
            kassistantdialog_leaveevent_isbase = false;
            KAssistantDialog::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kassistantdialog_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kassistantdialog_paintevent_isbase) {
            kassistantdialog_paintevent_isbase = false;
            KAssistantDialog::paintEvent(event);
            return;
        }
        auto paintevent_cb = kassistantdialog_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kassistantdialog_moveevent_isbase) {
            kassistantdialog_moveevent_isbase = false;
            KAssistantDialog::moveEvent(event);
            return;
        }
        auto moveevent_cb = kassistantdialog_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kassistantdialog_tabletevent_isbase) {
            kassistantdialog_tabletevent_isbase = false;
            KAssistantDialog::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kassistantdialog_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kassistantdialog_actionevent_isbase) {
            kassistantdialog_actionevent_isbase = false;
            KAssistantDialog::actionEvent(event);
            return;
        }
        auto actionevent_cb = kassistantdialog_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kassistantdialog_dragenterevent_isbase) {
            kassistantdialog_dragenterevent_isbase = false;
            KAssistantDialog::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kassistantdialog_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kassistantdialog_dragmoveevent_isbase) {
            kassistantdialog_dragmoveevent_isbase = false;
            KAssistantDialog::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kassistantdialog_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kassistantdialog_dragleaveevent_isbase) {
            kassistantdialog_dragleaveevent_isbase = false;
            KAssistantDialog::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kassistantdialog_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kassistantdialog_dropevent_isbase) {
            kassistantdialog_dropevent_isbase = false;
            KAssistantDialog::dropEvent(event);
            return;
        }
        auto dropevent_cb = kassistantdialog_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kassistantdialog_hideevent_isbase) {
            kassistantdialog_hideevent_isbase = false;
            KAssistantDialog::hideEvent(event);
            return;
        }
        auto hideevent_cb = kassistantdialog_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kassistantdialog_nativeevent_isbase) {
            kassistantdialog_nativeevent_isbase = false;
            return KAssistantDialog::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kassistantdialog_nativeevent_callback;
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
        return KAssistantDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kassistantdialog_changeevent_isbase) {
            kassistantdialog_changeevent_isbase = false;
            KAssistantDialog::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kassistantdialog_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kassistantdialog_metric_isbase) {
            kassistantdialog_metric_isbase = false;
            return KAssistantDialog::metric(param1);
        }
        auto metric_cb = kassistantdialog_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KAssistantDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kassistantdialog_initpainter_isbase) {
            kassistantdialog_initpainter_isbase = false;
            KAssistantDialog::initPainter(painter);
            return;
        }
        auto initpainter_cb = kassistantdialog_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KAssistantDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kassistantdialog_redirected_isbase) {
            kassistantdialog_redirected_isbase = false;
            return KAssistantDialog::redirected(offset);
        }
        auto redirected_cb = kassistantdialog_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KAssistantDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kassistantdialog_sharedpainter_isbase) {
            kassistantdialog_sharedpainter_isbase = false;
            return KAssistantDialog::sharedPainter();
        }
        auto sharedpainter_cb = kassistantdialog_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KAssistantDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kassistantdialog_inputmethodevent_isbase) {
            kassistantdialog_inputmethodevent_isbase = false;
            KAssistantDialog::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kassistantdialog_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kassistantdialog_inputmethodquery_isbase) {
            kassistantdialog_inputmethodquery_isbase = false;
            return KAssistantDialog::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kassistantdialog_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KAssistantDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kassistantdialog_focusnextprevchild_isbase) {
            kassistantdialog_focusnextprevchild_isbase = false;
            return KAssistantDialog::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kassistantdialog_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KAssistantDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kassistantdialog_timerevent_isbase) {
            kassistantdialog_timerevent_isbase = false;
            KAssistantDialog::timerEvent(event);
            return;
        }
        auto timerevent_cb = kassistantdialog_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kassistantdialog_childevent_isbase) {
            kassistantdialog_childevent_isbase = false;
            KAssistantDialog::childEvent(event);
            return;
        }
        auto childevent_cb = kassistantdialog_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kassistantdialog_customevent_isbase) {
            kassistantdialog_customevent_isbase = false;
            KAssistantDialog::customEvent(event);
            return;
        }
        auto customevent_cb = kassistantdialog_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KAssistantDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kassistantdialog_connectnotify_isbase) {
            kassistantdialog_connectnotify_isbase = false;
            KAssistantDialog::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kassistantdialog_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KAssistantDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kassistantdialog_disconnectnotify_isbase) {
            kassistantdialog_disconnectnotify_isbase = false;
            KAssistantDialog::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kassistantdialog_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KAssistantDialog::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    KPageWidget* pageWidget() {
        if (kassistantdialog_pagewidget_isbase) {
            kassistantdialog_pagewidget_isbase = false;
            return KAssistantDialog::pageWidget();
        }
        auto pagewidget_cb = kassistantdialog_pagewidget_callback;
        if (pagewidget_cb) {
            KPageWidget* callback_ret = pagewidget_cb();
            return callback_ret;
        }
        return KAssistantDialog::pageWidget();
    }

    // Virtual method for C ABI access and custom callback
    void setPageWidget(KPageWidget* widget) {
        if (kassistantdialog_setpagewidget_isbase) {
            kassistantdialog_setpagewidget_isbase = false;
            KAssistantDialog::setPageWidget(widget);
            return;
        }
        auto setpagewidget_cb = kassistantdialog_setpagewidget_callback;
        if (setpagewidget_cb) {
            KPageWidget* cbval1 = widget;

            setpagewidget_cb(this, cbval1);
            return;
        }
        KAssistantDialog::setPageWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    QDialogButtonBox* buttonBox() {
        if (kassistantdialog_buttonbox_isbase) {
            kassistantdialog_buttonbox_isbase = false;
            return KAssistantDialog::buttonBox();
        }
        auto buttonbox_cb = kassistantdialog_buttonbox_callback;
        if (buttonbox_cb) {
            QDialogButtonBox* callback_ret = buttonbox_cb();
            return callback_ret;
        }
        return KAssistantDialog::buttonBox();
    }

    // Virtual method for C ABI access and custom callback
    void setButtonBox(QDialogButtonBox* box) {
        if (kassistantdialog_setbuttonbox_isbase) {
            kassistantdialog_setbuttonbox_isbase = false;
            KAssistantDialog::setButtonBox(box);
            return;
        }
        auto setbuttonbox_cb = kassistantdialog_setbuttonbox_callback;
        if (setbuttonbox_cb) {
            QDialogButtonBox* cbval1 = box;

            setbuttonbox_cb(this, cbval1);
            return;
        }
        KAssistantDialog::setButtonBox(box);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kassistantdialog_adjustposition_isbase) {
            kassistantdialog_adjustposition_isbase = false;
            KAssistantDialog::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = kassistantdialog_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        KAssistantDialog::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kassistantdialog_updatemicrofocus_isbase) {
            kassistantdialog_updatemicrofocus_isbase = false;
            KAssistantDialog::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kassistantdialog_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KAssistantDialog::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kassistantdialog_create_isbase) {
            kassistantdialog_create_isbase = false;
            KAssistantDialog::create();
            return;
        }
        auto create_cb = kassistantdialog_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KAssistantDialog::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kassistantdialog_destroy_isbase) {
            kassistantdialog_destroy_isbase = false;
            KAssistantDialog::destroy();
            return;
        }
        auto destroy_cb = kassistantdialog_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KAssistantDialog::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kassistantdialog_focusnextchild_isbase) {
            kassistantdialog_focusnextchild_isbase = false;
            return KAssistantDialog::focusNextChild();
        }
        auto focusnextchild_cb = kassistantdialog_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KAssistantDialog::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kassistantdialog_focuspreviouschild_isbase) {
            kassistantdialog_focuspreviouschild_isbase = false;
            return KAssistantDialog::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kassistantdialog_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KAssistantDialog::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kassistantdialog_sender_isbase) {
            kassistantdialog_sender_isbase = false;
            return KAssistantDialog::sender();
        }
        auto sender_cb = kassistantdialog_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KAssistantDialog::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kassistantdialog_sendersignalindex_isbase) {
            kassistantdialog_sendersignalindex_isbase = false;
            return KAssistantDialog::senderSignalIndex();
        }
        auto sendersignalindex_cb = kassistantdialog_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KAssistantDialog::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kassistantdialog_receivers_isbase) {
            kassistantdialog_receivers_isbase = false;
            return KAssistantDialog::receivers(signal);
        }
        auto receivers_cb = kassistantdialog_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KAssistantDialog::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kassistantdialog_issignalconnected_isbase) {
            kassistantdialog_issignalconnected_isbase = false;
            return KAssistantDialog::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kassistantdialog_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KAssistantDialog::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kassistantdialog_getdecodedmetricf_isbase) {
            kassistantdialog_getdecodedmetricf_isbase = false;
            return KAssistantDialog::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kassistantdialog_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KAssistantDialog::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KAssistantDialog_ShowEvent(KAssistantDialog* self, QShowEvent* event);
    friend void KAssistantDialog_SuperShowEvent(KAssistantDialog* self, QShowEvent* event);
    friend void KAssistantDialog_KeyPressEvent(KAssistantDialog* self, QKeyEvent* param1);
    friend void KAssistantDialog_SuperKeyPressEvent(KAssistantDialog* self, QKeyEvent* param1);
    friend void KAssistantDialog_CloseEvent(KAssistantDialog* self, QCloseEvent* param1);
    friend void KAssistantDialog_SuperCloseEvent(KAssistantDialog* self, QCloseEvent* param1);
    friend void KAssistantDialog_ResizeEvent(KAssistantDialog* self, QResizeEvent* param1);
    friend void KAssistantDialog_SuperResizeEvent(KAssistantDialog* self, QResizeEvent* param1);
    friend void KAssistantDialog_ContextMenuEvent(KAssistantDialog* self, QContextMenuEvent* param1);
    friend void KAssistantDialog_SuperContextMenuEvent(KAssistantDialog* self, QContextMenuEvent* param1);
    friend bool KAssistantDialog_EventFilter(KAssistantDialog* self, QObject* param1, QEvent* param2);
    friend bool KAssistantDialog_SuperEventFilter(KAssistantDialog* self, QObject* param1, QEvent* param2);
    friend bool KAssistantDialog_Event(KAssistantDialog* self, QEvent* event);
    friend bool KAssistantDialog_SuperEvent(KAssistantDialog* self, QEvent* event);
    friend void KAssistantDialog_MousePressEvent(KAssistantDialog* self, QMouseEvent* event);
    friend void KAssistantDialog_SuperMousePressEvent(KAssistantDialog* self, QMouseEvent* event);
    friend void KAssistantDialog_MouseReleaseEvent(KAssistantDialog* self, QMouseEvent* event);
    friend void KAssistantDialog_SuperMouseReleaseEvent(KAssistantDialog* self, QMouseEvent* event);
    friend void KAssistantDialog_MouseDoubleClickEvent(KAssistantDialog* self, QMouseEvent* event);
    friend void KAssistantDialog_SuperMouseDoubleClickEvent(KAssistantDialog* self, QMouseEvent* event);
    friend void KAssistantDialog_MouseMoveEvent(KAssistantDialog* self, QMouseEvent* event);
    friend void KAssistantDialog_SuperMouseMoveEvent(KAssistantDialog* self, QMouseEvent* event);
    friend void KAssistantDialog_WheelEvent(KAssistantDialog* self, QWheelEvent* event);
    friend void KAssistantDialog_SuperWheelEvent(KAssistantDialog* self, QWheelEvent* event);
    friend void KAssistantDialog_KeyReleaseEvent(KAssistantDialog* self, QKeyEvent* event);
    friend void KAssistantDialog_SuperKeyReleaseEvent(KAssistantDialog* self, QKeyEvent* event);
    friend void KAssistantDialog_FocusInEvent(KAssistantDialog* self, QFocusEvent* event);
    friend void KAssistantDialog_SuperFocusInEvent(KAssistantDialog* self, QFocusEvent* event);
    friend void KAssistantDialog_FocusOutEvent(KAssistantDialog* self, QFocusEvent* event);
    friend void KAssistantDialog_SuperFocusOutEvent(KAssistantDialog* self, QFocusEvent* event);
    friend void KAssistantDialog_EnterEvent(KAssistantDialog* self, QEnterEvent* event);
    friend void KAssistantDialog_SuperEnterEvent(KAssistantDialog* self, QEnterEvent* event);
    friend void KAssistantDialog_LeaveEvent(KAssistantDialog* self, QEvent* event);
    friend void KAssistantDialog_SuperLeaveEvent(KAssistantDialog* self, QEvent* event);
    friend void KAssistantDialog_PaintEvent(KAssistantDialog* self, QPaintEvent* event);
    friend void KAssistantDialog_SuperPaintEvent(KAssistantDialog* self, QPaintEvent* event);
    friend void KAssistantDialog_MoveEvent(KAssistantDialog* self, QMoveEvent* event);
    friend void KAssistantDialog_SuperMoveEvent(KAssistantDialog* self, QMoveEvent* event);
    friend void KAssistantDialog_TabletEvent(KAssistantDialog* self, QTabletEvent* event);
    friend void KAssistantDialog_SuperTabletEvent(KAssistantDialog* self, QTabletEvent* event);
    friend void KAssistantDialog_ActionEvent(KAssistantDialog* self, QActionEvent* event);
    friend void KAssistantDialog_SuperActionEvent(KAssistantDialog* self, QActionEvent* event);
    friend void KAssistantDialog_DragEnterEvent(KAssistantDialog* self, QDragEnterEvent* event);
    friend void KAssistantDialog_SuperDragEnterEvent(KAssistantDialog* self, QDragEnterEvent* event);
    friend void KAssistantDialog_DragMoveEvent(KAssistantDialog* self, QDragMoveEvent* event);
    friend void KAssistantDialog_SuperDragMoveEvent(KAssistantDialog* self, QDragMoveEvent* event);
    friend void KAssistantDialog_DragLeaveEvent(KAssistantDialog* self, QDragLeaveEvent* event);
    friend void KAssistantDialog_SuperDragLeaveEvent(KAssistantDialog* self, QDragLeaveEvent* event);
    friend void KAssistantDialog_DropEvent(KAssistantDialog* self, QDropEvent* event);
    friend void KAssistantDialog_SuperDropEvent(KAssistantDialog* self, QDropEvent* event);
    friend void KAssistantDialog_HideEvent(KAssistantDialog* self, QHideEvent* event);
    friend void KAssistantDialog_SuperHideEvent(KAssistantDialog* self, QHideEvent* event);
    friend bool KAssistantDialog_NativeEvent(KAssistantDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KAssistantDialog_SuperNativeEvent(KAssistantDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KAssistantDialog_ChangeEvent(KAssistantDialog* self, QEvent* param1);
    friend void KAssistantDialog_SuperChangeEvent(KAssistantDialog* self, QEvent* param1);
    friend int KAssistantDialog_Metric(const KAssistantDialog* self, int param1);
    friend int KAssistantDialog_SuperMetric(const KAssistantDialog* self, int param1);
    friend void KAssistantDialog_InitPainter(const KAssistantDialog* self, QPainter* painter);
    friend void KAssistantDialog_SuperInitPainter(const KAssistantDialog* self, QPainter* painter);
    friend QPaintDevice* KAssistantDialog_Redirected(const KAssistantDialog* self, QPoint* offset);
    friend QPaintDevice* KAssistantDialog_SuperRedirected(const KAssistantDialog* self, QPoint* offset);
    friend QPainter* KAssistantDialog_SharedPainter(const KAssistantDialog* self);
    friend QPainter* KAssistantDialog_SuperSharedPainter(const KAssistantDialog* self);
    friend void KAssistantDialog_InputMethodEvent(KAssistantDialog* self, QInputMethodEvent* param1);
    friend void KAssistantDialog_SuperInputMethodEvent(KAssistantDialog* self, QInputMethodEvent* param1);
    friend bool KAssistantDialog_FocusNextPrevChild(KAssistantDialog* self, bool next);
    friend bool KAssistantDialog_SuperFocusNextPrevChild(KAssistantDialog* self, bool next);
    friend void KAssistantDialog_TimerEvent(KAssistantDialog* self, QTimerEvent* event);
    friend void KAssistantDialog_SuperTimerEvent(KAssistantDialog* self, QTimerEvent* event);
    friend void KAssistantDialog_ChildEvent(KAssistantDialog* self, QChildEvent* event);
    friend void KAssistantDialog_SuperChildEvent(KAssistantDialog* self, QChildEvent* event);
    friend void KAssistantDialog_CustomEvent(KAssistantDialog* self, QEvent* event);
    friend void KAssistantDialog_SuperCustomEvent(KAssistantDialog* self, QEvent* event);
    friend void KAssistantDialog_ConnectNotify(KAssistantDialog* self, const QMetaMethod* signal);
    friend void KAssistantDialog_SuperConnectNotify(KAssistantDialog* self, const QMetaMethod* signal);
    friend void KAssistantDialog_DisconnectNotify(KAssistantDialog* self, const QMetaMethod* signal);
    friend void KAssistantDialog_SuperDisconnectNotify(KAssistantDialog* self, const QMetaMethod* signal);
    friend KPageWidget* KAssistantDialog_PageWidget(KAssistantDialog* self);
    friend KPageWidget* KAssistantDialog_SuperPageWidget(KAssistantDialog* self);
    friend void KAssistantDialog_SetPageWidget(KAssistantDialog* self, KPageWidget* widget);
    friend void KAssistantDialog_SuperSetPageWidget(KAssistantDialog* self, KPageWidget* widget);
    friend QDialogButtonBox* KAssistantDialog_ButtonBox(KAssistantDialog* self);
    friend QDialogButtonBox* KAssistantDialog_SuperButtonBox(KAssistantDialog* self);
    friend void KAssistantDialog_SetButtonBox(KAssistantDialog* self, QDialogButtonBox* box);
    friend void KAssistantDialog_SuperSetButtonBox(KAssistantDialog* self, QDialogButtonBox* box);
    friend void KAssistantDialog_AdjustPosition(KAssistantDialog* self, QWidget* param1);
    friend void KAssistantDialog_SuperAdjustPosition(KAssistantDialog* self, QWidget* param1);
    friend void KAssistantDialog_UpdateMicroFocus(KAssistantDialog* self);
    friend void KAssistantDialog_SuperUpdateMicroFocus(KAssistantDialog* self);
    friend void KAssistantDialog_Create(KAssistantDialog* self);
    friend void KAssistantDialog_SuperCreate(KAssistantDialog* self);
    friend void KAssistantDialog_Destroy(KAssistantDialog* self);
    friend void KAssistantDialog_SuperDestroy(KAssistantDialog* self);
    friend bool KAssistantDialog_FocusNextChild(KAssistantDialog* self);
    friend bool KAssistantDialog_SuperFocusNextChild(KAssistantDialog* self);
    friend bool KAssistantDialog_FocusPreviousChild(KAssistantDialog* self);
    friend bool KAssistantDialog_SuperFocusPreviousChild(KAssistantDialog* self);
    friend QObject* KAssistantDialog_Sender(const KAssistantDialog* self);
    friend QObject* KAssistantDialog_SuperSender(const KAssistantDialog* self);
    friend int KAssistantDialog_SenderSignalIndex(const KAssistantDialog* self);
    friend int KAssistantDialog_SuperSenderSignalIndex(const KAssistantDialog* self);
    friend int KAssistantDialog_Receivers(const KAssistantDialog* self, const char* signal);
    friend int KAssistantDialog_SuperReceivers(const KAssistantDialog* self, const char* signal);
    friend bool KAssistantDialog_IsSignalConnected(const KAssistantDialog* self, const QMetaMethod* signal);
    friend bool KAssistantDialog_SuperIsSignalConnected(const KAssistantDialog* self, const QMetaMethod* signal);
    friend double KAssistantDialog_GetDecodedMetricF(const KAssistantDialog* self, int metricA, int metricB);
    friend double KAssistantDialog_SuperGetDecodedMetricF(const KAssistantDialog* self, int metricA, int metricB);
};

#endif
