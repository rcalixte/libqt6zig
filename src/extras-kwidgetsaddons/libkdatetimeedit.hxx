#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKDATETIMEEDIT_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKDATETIMEEDIT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDateTimeEdit so that we can call protected methods
class VirtualKDateTimeEdit final : public KDateTimeEdit {

  public:
    // Virtual class boolean flag
    bool isVirtualKDateTimeEdit = true;

    // Virtual class public types (including callbacks)
    using KDateTimeEdit_Metacall_Callback = int (*)(KDateTimeEdit*, int, int, void**);
    using KDateTimeEdit_EventFilter_Callback = bool (*)(KDateTimeEdit*, QObject*, QEvent*);
    using KDateTimeEdit_FocusInEvent_Callback = void (*)(KDateTimeEdit*, QFocusEvent*);
    using KDateTimeEdit_FocusOutEvent_Callback = void (*)(KDateTimeEdit*, QFocusEvent*);
    using KDateTimeEdit_ResizeEvent_Callback = void (*)(KDateTimeEdit*, QResizeEvent*);
    using KDateTimeEdit_AssignDateTime_Callback = void (*)(KDateTimeEdit*, QDateTime*);
    using KDateTimeEdit_AssignDate_Callback = void (*)(KDateTimeEdit*, QDate*);
    using KDateTimeEdit_AssignTime_Callback = void (*)(KDateTimeEdit*, QTime*);
    using KDateTimeEdit_DevType_Callback = int (*)();
    using KDateTimeEdit_SetVisible_Callback = void (*)(KDateTimeEdit*, bool);
    using KDateTimeEdit_SizeHint_Callback = QSize* (*)();
    using KDateTimeEdit_MinimumSizeHint_Callback = QSize* (*)();
    using KDateTimeEdit_HeightForWidth_Callback = int (*)(const KDateTimeEdit*, int);
    using KDateTimeEdit_HasHeightForWidth_Callback = bool (*)();
    using KDateTimeEdit_PaintEngine_Callback = QPaintEngine* (*)();
    using KDateTimeEdit_Event_Callback = bool (*)(KDateTimeEdit*, QEvent*);
    using KDateTimeEdit_MousePressEvent_Callback = void (*)(KDateTimeEdit*, QMouseEvent*);
    using KDateTimeEdit_MouseReleaseEvent_Callback = void (*)(KDateTimeEdit*, QMouseEvent*);
    using KDateTimeEdit_MouseDoubleClickEvent_Callback = void (*)(KDateTimeEdit*, QMouseEvent*);
    using KDateTimeEdit_MouseMoveEvent_Callback = void (*)(KDateTimeEdit*, QMouseEvent*);
    using KDateTimeEdit_WheelEvent_Callback = void (*)(KDateTimeEdit*, QWheelEvent*);
    using KDateTimeEdit_KeyPressEvent_Callback = void (*)(KDateTimeEdit*, QKeyEvent*);
    using KDateTimeEdit_KeyReleaseEvent_Callback = void (*)(KDateTimeEdit*, QKeyEvent*);
    using KDateTimeEdit_EnterEvent_Callback = void (*)(KDateTimeEdit*, QEnterEvent*);
    using KDateTimeEdit_LeaveEvent_Callback = void (*)(KDateTimeEdit*, QEvent*);
    using KDateTimeEdit_PaintEvent_Callback = void (*)(KDateTimeEdit*, QPaintEvent*);
    using KDateTimeEdit_MoveEvent_Callback = void (*)(KDateTimeEdit*, QMoveEvent*);
    using KDateTimeEdit_CloseEvent_Callback = void (*)(KDateTimeEdit*, QCloseEvent*);
    using KDateTimeEdit_ContextMenuEvent_Callback = void (*)(KDateTimeEdit*, QContextMenuEvent*);
    using KDateTimeEdit_TabletEvent_Callback = void (*)(KDateTimeEdit*, QTabletEvent*);
    using KDateTimeEdit_ActionEvent_Callback = void (*)(KDateTimeEdit*, QActionEvent*);
    using KDateTimeEdit_DragEnterEvent_Callback = void (*)(KDateTimeEdit*, QDragEnterEvent*);
    using KDateTimeEdit_DragMoveEvent_Callback = void (*)(KDateTimeEdit*, QDragMoveEvent*);
    using KDateTimeEdit_DragLeaveEvent_Callback = void (*)(KDateTimeEdit*, QDragLeaveEvent*);
    using KDateTimeEdit_DropEvent_Callback = void (*)(KDateTimeEdit*, QDropEvent*);
    using KDateTimeEdit_ShowEvent_Callback = void (*)(KDateTimeEdit*, QShowEvent*);
    using KDateTimeEdit_HideEvent_Callback = void (*)(KDateTimeEdit*, QHideEvent*);
    using KDateTimeEdit_NativeEvent_Callback = bool (*)(KDateTimeEdit*, libqt_string, void*, intptr_t*);
    using KDateTimeEdit_ChangeEvent_Callback = void (*)(KDateTimeEdit*, QEvent*);
    using KDateTimeEdit_Metric_Callback = int (*)(const KDateTimeEdit*, int);
    using KDateTimeEdit_InitPainter_Callback = void (*)(const KDateTimeEdit*, QPainter*);
    using KDateTimeEdit_Redirected_Callback = QPaintDevice* (*)(const KDateTimeEdit*, QPoint*);
    using KDateTimeEdit_SharedPainter_Callback = QPainter* (*)();
    using KDateTimeEdit_InputMethodEvent_Callback = void (*)(KDateTimeEdit*, QInputMethodEvent*);
    using KDateTimeEdit_InputMethodQuery_Callback = QVariant* (*)(const KDateTimeEdit*, int);
    using KDateTimeEdit_FocusNextPrevChild_Callback = bool (*)(KDateTimeEdit*, bool);
    using KDateTimeEdit_TimerEvent_Callback = void (*)(KDateTimeEdit*, QTimerEvent*);
    using KDateTimeEdit_ChildEvent_Callback = void (*)(KDateTimeEdit*, QChildEvent*);
    using KDateTimeEdit_CustomEvent_Callback = void (*)(KDateTimeEdit*, QEvent*);
    using KDateTimeEdit_ConnectNotify_Callback = void (*)(KDateTimeEdit*, QMetaMethod*);
    using KDateTimeEdit_DisconnectNotify_Callback = void (*)(KDateTimeEdit*, QMetaMethod*);
    using KDateTimeEdit_AssignTimeZone_Callback = void (*)(KDateTimeEdit*, QTimeZone*);
    using KDateTimeEdit_UpdateMicroFocus_Callback = void (*)();
    using KDateTimeEdit_Create_Callback = void (*)();
    using KDateTimeEdit_Destroy_Callback = void (*)();
    using KDateTimeEdit_FocusNextChild_Callback = bool (*)();
    using KDateTimeEdit_FocusPreviousChild_Callback = bool (*)();
    using KDateTimeEdit_Sender_Callback = QObject* (*)();
    using KDateTimeEdit_SenderSignalIndex_Callback = int (*)();
    using KDateTimeEdit_Receivers_Callback = int (*)(const KDateTimeEdit*, const char*);
    using KDateTimeEdit_IsSignalConnected_Callback = bool (*)(const KDateTimeEdit*, QMetaMethod*);
    using KDateTimeEdit_GetDecodedMetricF_Callback = double (*)(const KDateTimeEdit*, int, int);

  protected:
    // Instance callback storage
    KDateTimeEdit_Metacall_Callback kdatetimeedit_metacall_callback = nullptr;
    KDateTimeEdit_EventFilter_Callback kdatetimeedit_eventfilter_callback = nullptr;
    KDateTimeEdit_FocusInEvent_Callback kdatetimeedit_focusinevent_callback = nullptr;
    KDateTimeEdit_FocusOutEvent_Callback kdatetimeedit_focusoutevent_callback = nullptr;
    KDateTimeEdit_ResizeEvent_Callback kdatetimeedit_resizeevent_callback = nullptr;
    KDateTimeEdit_AssignDateTime_Callback kdatetimeedit_assigndatetime_callback = nullptr;
    KDateTimeEdit_AssignDate_Callback kdatetimeedit_assigndate_callback = nullptr;
    KDateTimeEdit_AssignTime_Callback kdatetimeedit_assigntime_callback = nullptr;
    KDateTimeEdit_DevType_Callback kdatetimeedit_devtype_callback = nullptr;
    KDateTimeEdit_SetVisible_Callback kdatetimeedit_setvisible_callback = nullptr;
    KDateTimeEdit_SizeHint_Callback kdatetimeedit_sizehint_callback = nullptr;
    KDateTimeEdit_MinimumSizeHint_Callback kdatetimeedit_minimumsizehint_callback = nullptr;
    KDateTimeEdit_HeightForWidth_Callback kdatetimeedit_heightforwidth_callback = nullptr;
    KDateTimeEdit_HasHeightForWidth_Callback kdatetimeedit_hasheightforwidth_callback = nullptr;
    KDateTimeEdit_PaintEngine_Callback kdatetimeedit_paintengine_callback = nullptr;
    KDateTimeEdit_Event_Callback kdatetimeedit_event_callback = nullptr;
    KDateTimeEdit_MousePressEvent_Callback kdatetimeedit_mousepressevent_callback = nullptr;
    KDateTimeEdit_MouseReleaseEvent_Callback kdatetimeedit_mousereleaseevent_callback = nullptr;
    KDateTimeEdit_MouseDoubleClickEvent_Callback kdatetimeedit_mousedoubleclickevent_callback = nullptr;
    KDateTimeEdit_MouseMoveEvent_Callback kdatetimeedit_mousemoveevent_callback = nullptr;
    KDateTimeEdit_WheelEvent_Callback kdatetimeedit_wheelevent_callback = nullptr;
    KDateTimeEdit_KeyPressEvent_Callback kdatetimeedit_keypressevent_callback = nullptr;
    KDateTimeEdit_KeyReleaseEvent_Callback kdatetimeedit_keyreleaseevent_callback = nullptr;
    KDateTimeEdit_EnterEvent_Callback kdatetimeedit_enterevent_callback = nullptr;
    KDateTimeEdit_LeaveEvent_Callback kdatetimeedit_leaveevent_callback = nullptr;
    KDateTimeEdit_PaintEvent_Callback kdatetimeedit_paintevent_callback = nullptr;
    KDateTimeEdit_MoveEvent_Callback kdatetimeedit_moveevent_callback = nullptr;
    KDateTimeEdit_CloseEvent_Callback kdatetimeedit_closeevent_callback = nullptr;
    KDateTimeEdit_ContextMenuEvent_Callback kdatetimeedit_contextmenuevent_callback = nullptr;
    KDateTimeEdit_TabletEvent_Callback kdatetimeedit_tabletevent_callback = nullptr;
    KDateTimeEdit_ActionEvent_Callback kdatetimeedit_actionevent_callback = nullptr;
    KDateTimeEdit_DragEnterEvent_Callback kdatetimeedit_dragenterevent_callback = nullptr;
    KDateTimeEdit_DragMoveEvent_Callback kdatetimeedit_dragmoveevent_callback = nullptr;
    KDateTimeEdit_DragLeaveEvent_Callback kdatetimeedit_dragleaveevent_callback = nullptr;
    KDateTimeEdit_DropEvent_Callback kdatetimeedit_dropevent_callback = nullptr;
    KDateTimeEdit_ShowEvent_Callback kdatetimeedit_showevent_callback = nullptr;
    KDateTimeEdit_HideEvent_Callback kdatetimeedit_hideevent_callback = nullptr;
    KDateTimeEdit_NativeEvent_Callback kdatetimeedit_nativeevent_callback = nullptr;
    KDateTimeEdit_ChangeEvent_Callback kdatetimeedit_changeevent_callback = nullptr;
    KDateTimeEdit_Metric_Callback kdatetimeedit_metric_callback = nullptr;
    KDateTimeEdit_InitPainter_Callback kdatetimeedit_initpainter_callback = nullptr;
    KDateTimeEdit_Redirected_Callback kdatetimeedit_redirected_callback = nullptr;
    KDateTimeEdit_SharedPainter_Callback kdatetimeedit_sharedpainter_callback = nullptr;
    KDateTimeEdit_InputMethodEvent_Callback kdatetimeedit_inputmethodevent_callback = nullptr;
    KDateTimeEdit_InputMethodQuery_Callback kdatetimeedit_inputmethodquery_callback = nullptr;
    KDateTimeEdit_FocusNextPrevChild_Callback kdatetimeedit_focusnextprevchild_callback = nullptr;
    KDateTimeEdit_TimerEvent_Callback kdatetimeedit_timerevent_callback = nullptr;
    KDateTimeEdit_ChildEvent_Callback kdatetimeedit_childevent_callback = nullptr;
    KDateTimeEdit_CustomEvent_Callback kdatetimeedit_customevent_callback = nullptr;
    KDateTimeEdit_ConnectNotify_Callback kdatetimeedit_connectnotify_callback = nullptr;
    KDateTimeEdit_DisconnectNotify_Callback kdatetimeedit_disconnectnotify_callback = nullptr;
    KDateTimeEdit_AssignTimeZone_Callback kdatetimeedit_assigntimezone_callback = nullptr;
    KDateTimeEdit_UpdateMicroFocus_Callback kdatetimeedit_updatemicrofocus_callback = nullptr;
    KDateTimeEdit_Create_Callback kdatetimeedit_create_callback = nullptr;
    KDateTimeEdit_Destroy_Callback kdatetimeedit_destroy_callback = nullptr;
    KDateTimeEdit_FocusNextChild_Callback kdatetimeedit_focusnextchild_callback = nullptr;
    KDateTimeEdit_FocusPreviousChild_Callback kdatetimeedit_focuspreviouschild_callback = nullptr;
    KDateTimeEdit_Sender_Callback kdatetimeedit_sender_callback = nullptr;
    KDateTimeEdit_SenderSignalIndex_Callback kdatetimeedit_sendersignalindex_callback = nullptr;
    KDateTimeEdit_Receivers_Callback kdatetimeedit_receivers_callback = nullptr;
    KDateTimeEdit_IsSignalConnected_Callback kdatetimeedit_issignalconnected_callback = nullptr;
    KDateTimeEdit_GetDecodedMetricF_Callback kdatetimeedit_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kdatetimeedit_metacall_isbase = false;
    mutable bool kdatetimeedit_eventfilter_isbase = false;
    mutable bool kdatetimeedit_focusinevent_isbase = false;
    mutable bool kdatetimeedit_focusoutevent_isbase = false;
    mutable bool kdatetimeedit_resizeevent_isbase = false;
    mutable bool kdatetimeedit_assigndatetime_isbase = false;
    mutable bool kdatetimeedit_assigndate_isbase = false;
    mutable bool kdatetimeedit_assigntime_isbase = false;
    mutable bool kdatetimeedit_devtype_isbase = false;
    mutable bool kdatetimeedit_setvisible_isbase = false;
    mutable bool kdatetimeedit_sizehint_isbase = false;
    mutable bool kdatetimeedit_minimumsizehint_isbase = false;
    mutable bool kdatetimeedit_heightforwidth_isbase = false;
    mutable bool kdatetimeedit_hasheightforwidth_isbase = false;
    mutable bool kdatetimeedit_paintengine_isbase = false;
    mutable bool kdatetimeedit_event_isbase = false;
    mutable bool kdatetimeedit_mousepressevent_isbase = false;
    mutable bool kdatetimeedit_mousereleaseevent_isbase = false;
    mutable bool kdatetimeedit_mousedoubleclickevent_isbase = false;
    mutable bool kdatetimeedit_mousemoveevent_isbase = false;
    mutable bool kdatetimeedit_wheelevent_isbase = false;
    mutable bool kdatetimeedit_keypressevent_isbase = false;
    mutable bool kdatetimeedit_keyreleaseevent_isbase = false;
    mutable bool kdatetimeedit_enterevent_isbase = false;
    mutable bool kdatetimeedit_leaveevent_isbase = false;
    mutable bool kdatetimeedit_paintevent_isbase = false;
    mutable bool kdatetimeedit_moveevent_isbase = false;
    mutable bool kdatetimeedit_closeevent_isbase = false;
    mutable bool kdatetimeedit_contextmenuevent_isbase = false;
    mutable bool kdatetimeedit_tabletevent_isbase = false;
    mutable bool kdatetimeedit_actionevent_isbase = false;
    mutable bool kdatetimeedit_dragenterevent_isbase = false;
    mutable bool kdatetimeedit_dragmoveevent_isbase = false;
    mutable bool kdatetimeedit_dragleaveevent_isbase = false;
    mutable bool kdatetimeedit_dropevent_isbase = false;
    mutable bool kdatetimeedit_showevent_isbase = false;
    mutable bool kdatetimeedit_hideevent_isbase = false;
    mutable bool kdatetimeedit_nativeevent_isbase = false;
    mutable bool kdatetimeedit_changeevent_isbase = false;
    mutable bool kdatetimeedit_metric_isbase = false;
    mutable bool kdatetimeedit_initpainter_isbase = false;
    mutable bool kdatetimeedit_redirected_isbase = false;
    mutable bool kdatetimeedit_sharedpainter_isbase = false;
    mutable bool kdatetimeedit_inputmethodevent_isbase = false;
    mutable bool kdatetimeedit_inputmethodquery_isbase = false;
    mutable bool kdatetimeedit_focusnextprevchild_isbase = false;
    mutable bool kdatetimeedit_timerevent_isbase = false;
    mutable bool kdatetimeedit_childevent_isbase = false;
    mutable bool kdatetimeedit_customevent_isbase = false;
    mutable bool kdatetimeedit_connectnotify_isbase = false;
    mutable bool kdatetimeedit_disconnectnotify_isbase = false;
    mutable bool kdatetimeedit_assigntimezone_isbase = false;
    mutable bool kdatetimeedit_updatemicrofocus_isbase = false;
    mutable bool kdatetimeedit_create_isbase = false;
    mutable bool kdatetimeedit_destroy_isbase = false;
    mutable bool kdatetimeedit_focusnextchild_isbase = false;
    mutable bool kdatetimeedit_focuspreviouschild_isbase = false;
    mutable bool kdatetimeedit_sender_isbase = false;
    mutable bool kdatetimeedit_sendersignalindex_isbase = false;
    mutable bool kdatetimeedit_receivers_isbase = false;
    mutable bool kdatetimeedit_issignalconnected_isbase = false;
    mutable bool kdatetimeedit_getdecodedmetricf_isbase = false;

  public:
    VirtualKDateTimeEdit(QWidget* parent) : KDateTimeEdit(parent) {};
    VirtualKDateTimeEdit() : KDateTimeEdit() {};

    ~VirtualKDateTimeEdit() {
        kdatetimeedit_metacall_callback = nullptr;
        kdatetimeedit_eventfilter_callback = nullptr;
        kdatetimeedit_focusinevent_callback = nullptr;
        kdatetimeedit_focusoutevent_callback = nullptr;
        kdatetimeedit_resizeevent_callback = nullptr;
        kdatetimeedit_assigndatetime_callback = nullptr;
        kdatetimeedit_assigndate_callback = nullptr;
        kdatetimeedit_assigntime_callback = nullptr;
        kdatetimeedit_devtype_callback = nullptr;
        kdatetimeedit_setvisible_callback = nullptr;
        kdatetimeedit_sizehint_callback = nullptr;
        kdatetimeedit_minimumsizehint_callback = nullptr;
        kdatetimeedit_heightforwidth_callback = nullptr;
        kdatetimeedit_hasheightforwidth_callback = nullptr;
        kdatetimeedit_paintengine_callback = nullptr;
        kdatetimeedit_event_callback = nullptr;
        kdatetimeedit_mousepressevent_callback = nullptr;
        kdatetimeedit_mousereleaseevent_callback = nullptr;
        kdatetimeedit_mousedoubleclickevent_callback = nullptr;
        kdatetimeedit_mousemoveevent_callback = nullptr;
        kdatetimeedit_wheelevent_callback = nullptr;
        kdatetimeedit_keypressevent_callback = nullptr;
        kdatetimeedit_keyreleaseevent_callback = nullptr;
        kdatetimeedit_enterevent_callback = nullptr;
        kdatetimeedit_leaveevent_callback = nullptr;
        kdatetimeedit_paintevent_callback = nullptr;
        kdatetimeedit_moveevent_callback = nullptr;
        kdatetimeedit_closeevent_callback = nullptr;
        kdatetimeedit_contextmenuevent_callback = nullptr;
        kdatetimeedit_tabletevent_callback = nullptr;
        kdatetimeedit_actionevent_callback = nullptr;
        kdatetimeedit_dragenterevent_callback = nullptr;
        kdatetimeedit_dragmoveevent_callback = nullptr;
        kdatetimeedit_dragleaveevent_callback = nullptr;
        kdatetimeedit_dropevent_callback = nullptr;
        kdatetimeedit_showevent_callback = nullptr;
        kdatetimeedit_hideevent_callback = nullptr;
        kdatetimeedit_nativeevent_callback = nullptr;
        kdatetimeedit_changeevent_callback = nullptr;
        kdatetimeedit_metric_callback = nullptr;
        kdatetimeedit_initpainter_callback = nullptr;
        kdatetimeedit_redirected_callback = nullptr;
        kdatetimeedit_sharedpainter_callback = nullptr;
        kdatetimeedit_inputmethodevent_callback = nullptr;
        kdatetimeedit_inputmethodquery_callback = nullptr;
        kdatetimeedit_focusnextprevchild_callback = nullptr;
        kdatetimeedit_timerevent_callback = nullptr;
        kdatetimeedit_childevent_callback = nullptr;
        kdatetimeedit_customevent_callback = nullptr;
        kdatetimeedit_connectnotify_callback = nullptr;
        kdatetimeedit_disconnectnotify_callback = nullptr;
        kdatetimeedit_assigntimezone_callback = nullptr;
        kdatetimeedit_updatemicrofocus_callback = nullptr;
        kdatetimeedit_create_callback = nullptr;
        kdatetimeedit_destroy_callback = nullptr;
        kdatetimeedit_focusnextchild_callback = nullptr;
        kdatetimeedit_focuspreviouschild_callback = nullptr;
        kdatetimeedit_sender_callback = nullptr;
        kdatetimeedit_sendersignalindex_callback = nullptr;
        kdatetimeedit_receivers_callback = nullptr;
        kdatetimeedit_issignalconnected_callback = nullptr;
        kdatetimeedit_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKDateTimeEdit_Metacall_Callback(KDateTimeEdit_Metacall_Callback cb) { kdatetimeedit_metacall_callback = cb; }
    inline void setKDateTimeEdit_EventFilter_Callback(KDateTimeEdit_EventFilter_Callback cb) { kdatetimeedit_eventfilter_callback = cb; }
    inline void setKDateTimeEdit_FocusInEvent_Callback(KDateTimeEdit_FocusInEvent_Callback cb) { kdatetimeedit_focusinevent_callback = cb; }
    inline void setKDateTimeEdit_FocusOutEvent_Callback(KDateTimeEdit_FocusOutEvent_Callback cb) { kdatetimeedit_focusoutevent_callback = cb; }
    inline void setKDateTimeEdit_ResizeEvent_Callback(KDateTimeEdit_ResizeEvent_Callback cb) { kdatetimeedit_resizeevent_callback = cb; }
    inline void setKDateTimeEdit_AssignDateTime_Callback(KDateTimeEdit_AssignDateTime_Callback cb) { kdatetimeedit_assigndatetime_callback = cb; }
    inline void setKDateTimeEdit_AssignDate_Callback(KDateTimeEdit_AssignDate_Callback cb) { kdatetimeedit_assigndate_callback = cb; }
    inline void setKDateTimeEdit_AssignTime_Callback(KDateTimeEdit_AssignTime_Callback cb) { kdatetimeedit_assigntime_callback = cb; }
    inline void setKDateTimeEdit_DevType_Callback(KDateTimeEdit_DevType_Callback cb) { kdatetimeedit_devtype_callback = cb; }
    inline void setKDateTimeEdit_SetVisible_Callback(KDateTimeEdit_SetVisible_Callback cb) { kdatetimeedit_setvisible_callback = cb; }
    inline void setKDateTimeEdit_SizeHint_Callback(KDateTimeEdit_SizeHint_Callback cb) { kdatetimeedit_sizehint_callback = cb; }
    inline void setKDateTimeEdit_MinimumSizeHint_Callback(KDateTimeEdit_MinimumSizeHint_Callback cb) { kdatetimeedit_minimumsizehint_callback = cb; }
    inline void setKDateTimeEdit_HeightForWidth_Callback(KDateTimeEdit_HeightForWidth_Callback cb) { kdatetimeedit_heightforwidth_callback = cb; }
    inline void setKDateTimeEdit_HasHeightForWidth_Callback(KDateTimeEdit_HasHeightForWidth_Callback cb) { kdatetimeedit_hasheightforwidth_callback = cb; }
    inline void setKDateTimeEdit_PaintEngine_Callback(KDateTimeEdit_PaintEngine_Callback cb) { kdatetimeedit_paintengine_callback = cb; }
    inline void setKDateTimeEdit_Event_Callback(KDateTimeEdit_Event_Callback cb) { kdatetimeedit_event_callback = cb; }
    inline void setKDateTimeEdit_MousePressEvent_Callback(KDateTimeEdit_MousePressEvent_Callback cb) { kdatetimeedit_mousepressevent_callback = cb; }
    inline void setKDateTimeEdit_MouseReleaseEvent_Callback(KDateTimeEdit_MouseReleaseEvent_Callback cb) { kdatetimeedit_mousereleaseevent_callback = cb; }
    inline void setKDateTimeEdit_MouseDoubleClickEvent_Callback(KDateTimeEdit_MouseDoubleClickEvent_Callback cb) { kdatetimeedit_mousedoubleclickevent_callback = cb; }
    inline void setKDateTimeEdit_MouseMoveEvent_Callback(KDateTimeEdit_MouseMoveEvent_Callback cb) { kdatetimeedit_mousemoveevent_callback = cb; }
    inline void setKDateTimeEdit_WheelEvent_Callback(KDateTimeEdit_WheelEvent_Callback cb) { kdatetimeedit_wheelevent_callback = cb; }
    inline void setKDateTimeEdit_KeyPressEvent_Callback(KDateTimeEdit_KeyPressEvent_Callback cb) { kdatetimeedit_keypressevent_callback = cb; }
    inline void setKDateTimeEdit_KeyReleaseEvent_Callback(KDateTimeEdit_KeyReleaseEvent_Callback cb) { kdatetimeedit_keyreleaseevent_callback = cb; }
    inline void setKDateTimeEdit_EnterEvent_Callback(KDateTimeEdit_EnterEvent_Callback cb) { kdatetimeedit_enterevent_callback = cb; }
    inline void setKDateTimeEdit_LeaveEvent_Callback(KDateTimeEdit_LeaveEvent_Callback cb) { kdatetimeedit_leaveevent_callback = cb; }
    inline void setKDateTimeEdit_PaintEvent_Callback(KDateTimeEdit_PaintEvent_Callback cb) { kdatetimeedit_paintevent_callback = cb; }
    inline void setKDateTimeEdit_MoveEvent_Callback(KDateTimeEdit_MoveEvent_Callback cb) { kdatetimeedit_moveevent_callback = cb; }
    inline void setKDateTimeEdit_CloseEvent_Callback(KDateTimeEdit_CloseEvent_Callback cb) { kdatetimeedit_closeevent_callback = cb; }
    inline void setKDateTimeEdit_ContextMenuEvent_Callback(KDateTimeEdit_ContextMenuEvent_Callback cb) { kdatetimeedit_contextmenuevent_callback = cb; }
    inline void setKDateTimeEdit_TabletEvent_Callback(KDateTimeEdit_TabletEvent_Callback cb) { kdatetimeedit_tabletevent_callback = cb; }
    inline void setKDateTimeEdit_ActionEvent_Callback(KDateTimeEdit_ActionEvent_Callback cb) { kdatetimeedit_actionevent_callback = cb; }
    inline void setKDateTimeEdit_DragEnterEvent_Callback(KDateTimeEdit_DragEnterEvent_Callback cb) { kdatetimeedit_dragenterevent_callback = cb; }
    inline void setKDateTimeEdit_DragMoveEvent_Callback(KDateTimeEdit_DragMoveEvent_Callback cb) { kdatetimeedit_dragmoveevent_callback = cb; }
    inline void setKDateTimeEdit_DragLeaveEvent_Callback(KDateTimeEdit_DragLeaveEvent_Callback cb) { kdatetimeedit_dragleaveevent_callback = cb; }
    inline void setKDateTimeEdit_DropEvent_Callback(KDateTimeEdit_DropEvent_Callback cb) { kdatetimeedit_dropevent_callback = cb; }
    inline void setKDateTimeEdit_ShowEvent_Callback(KDateTimeEdit_ShowEvent_Callback cb) { kdatetimeedit_showevent_callback = cb; }
    inline void setKDateTimeEdit_HideEvent_Callback(KDateTimeEdit_HideEvent_Callback cb) { kdatetimeedit_hideevent_callback = cb; }
    inline void setKDateTimeEdit_NativeEvent_Callback(KDateTimeEdit_NativeEvent_Callback cb) { kdatetimeedit_nativeevent_callback = cb; }
    inline void setKDateTimeEdit_ChangeEvent_Callback(KDateTimeEdit_ChangeEvent_Callback cb) { kdatetimeedit_changeevent_callback = cb; }
    inline void setKDateTimeEdit_Metric_Callback(KDateTimeEdit_Metric_Callback cb) { kdatetimeedit_metric_callback = cb; }
    inline void setKDateTimeEdit_InitPainter_Callback(KDateTimeEdit_InitPainter_Callback cb) { kdatetimeedit_initpainter_callback = cb; }
    inline void setKDateTimeEdit_Redirected_Callback(KDateTimeEdit_Redirected_Callback cb) { kdatetimeedit_redirected_callback = cb; }
    inline void setKDateTimeEdit_SharedPainter_Callback(KDateTimeEdit_SharedPainter_Callback cb) { kdatetimeedit_sharedpainter_callback = cb; }
    inline void setKDateTimeEdit_InputMethodEvent_Callback(KDateTimeEdit_InputMethodEvent_Callback cb) { kdatetimeedit_inputmethodevent_callback = cb; }
    inline void setKDateTimeEdit_InputMethodQuery_Callback(KDateTimeEdit_InputMethodQuery_Callback cb) { kdatetimeedit_inputmethodquery_callback = cb; }
    inline void setKDateTimeEdit_FocusNextPrevChild_Callback(KDateTimeEdit_FocusNextPrevChild_Callback cb) { kdatetimeedit_focusnextprevchild_callback = cb; }
    inline void setKDateTimeEdit_TimerEvent_Callback(KDateTimeEdit_TimerEvent_Callback cb) { kdatetimeedit_timerevent_callback = cb; }
    inline void setKDateTimeEdit_ChildEvent_Callback(KDateTimeEdit_ChildEvent_Callback cb) { kdatetimeedit_childevent_callback = cb; }
    inline void setKDateTimeEdit_CustomEvent_Callback(KDateTimeEdit_CustomEvent_Callback cb) { kdatetimeedit_customevent_callback = cb; }
    inline void setKDateTimeEdit_ConnectNotify_Callback(KDateTimeEdit_ConnectNotify_Callback cb) { kdatetimeedit_connectnotify_callback = cb; }
    inline void setKDateTimeEdit_DisconnectNotify_Callback(KDateTimeEdit_DisconnectNotify_Callback cb) { kdatetimeedit_disconnectnotify_callback = cb; }
    inline void setKDateTimeEdit_AssignTimeZone_Callback(KDateTimeEdit_AssignTimeZone_Callback cb) { kdatetimeedit_assigntimezone_callback = cb; }
    inline void setKDateTimeEdit_UpdateMicroFocus_Callback(KDateTimeEdit_UpdateMicroFocus_Callback cb) { kdatetimeedit_updatemicrofocus_callback = cb; }
    inline void setKDateTimeEdit_Create_Callback(KDateTimeEdit_Create_Callback cb) { kdatetimeedit_create_callback = cb; }
    inline void setKDateTimeEdit_Destroy_Callback(KDateTimeEdit_Destroy_Callback cb) { kdatetimeedit_destroy_callback = cb; }
    inline void setKDateTimeEdit_FocusNextChild_Callback(KDateTimeEdit_FocusNextChild_Callback cb) { kdatetimeedit_focusnextchild_callback = cb; }
    inline void setKDateTimeEdit_FocusPreviousChild_Callback(KDateTimeEdit_FocusPreviousChild_Callback cb) { kdatetimeedit_focuspreviouschild_callback = cb; }
    inline void setKDateTimeEdit_Sender_Callback(KDateTimeEdit_Sender_Callback cb) { kdatetimeedit_sender_callback = cb; }
    inline void setKDateTimeEdit_SenderSignalIndex_Callback(KDateTimeEdit_SenderSignalIndex_Callback cb) { kdatetimeedit_sendersignalindex_callback = cb; }
    inline void setKDateTimeEdit_Receivers_Callback(KDateTimeEdit_Receivers_Callback cb) { kdatetimeedit_receivers_callback = cb; }
    inline void setKDateTimeEdit_IsSignalConnected_Callback(KDateTimeEdit_IsSignalConnected_Callback cb) { kdatetimeedit_issignalconnected_callback = cb; }
    inline void setKDateTimeEdit_GetDecodedMetricF_Callback(KDateTimeEdit_GetDecodedMetricF_Callback cb) { kdatetimeedit_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKDateTimeEdit_Metacall_IsBase(bool value) const { kdatetimeedit_metacall_isbase = value; }
    inline void setKDateTimeEdit_EventFilter_IsBase(bool value) const { kdatetimeedit_eventfilter_isbase = value; }
    inline void setKDateTimeEdit_FocusInEvent_IsBase(bool value) const { kdatetimeedit_focusinevent_isbase = value; }
    inline void setKDateTimeEdit_FocusOutEvent_IsBase(bool value) const { kdatetimeedit_focusoutevent_isbase = value; }
    inline void setKDateTimeEdit_ResizeEvent_IsBase(bool value) const { kdatetimeedit_resizeevent_isbase = value; }
    inline void setKDateTimeEdit_AssignDateTime_IsBase(bool value) const { kdatetimeedit_assigndatetime_isbase = value; }
    inline void setKDateTimeEdit_AssignDate_IsBase(bool value) const { kdatetimeedit_assigndate_isbase = value; }
    inline void setKDateTimeEdit_AssignTime_IsBase(bool value) const { kdatetimeedit_assigntime_isbase = value; }
    inline void setKDateTimeEdit_DevType_IsBase(bool value) const { kdatetimeedit_devtype_isbase = value; }
    inline void setKDateTimeEdit_SetVisible_IsBase(bool value) const { kdatetimeedit_setvisible_isbase = value; }
    inline void setKDateTimeEdit_SizeHint_IsBase(bool value) const { kdatetimeedit_sizehint_isbase = value; }
    inline void setKDateTimeEdit_MinimumSizeHint_IsBase(bool value) const { kdatetimeedit_minimumsizehint_isbase = value; }
    inline void setKDateTimeEdit_HeightForWidth_IsBase(bool value) const { kdatetimeedit_heightforwidth_isbase = value; }
    inline void setKDateTimeEdit_HasHeightForWidth_IsBase(bool value) const { kdatetimeedit_hasheightforwidth_isbase = value; }
    inline void setKDateTimeEdit_PaintEngine_IsBase(bool value) const { kdatetimeedit_paintengine_isbase = value; }
    inline void setKDateTimeEdit_Event_IsBase(bool value) const { kdatetimeedit_event_isbase = value; }
    inline void setKDateTimeEdit_MousePressEvent_IsBase(bool value) const { kdatetimeedit_mousepressevent_isbase = value; }
    inline void setKDateTimeEdit_MouseReleaseEvent_IsBase(bool value) const { kdatetimeedit_mousereleaseevent_isbase = value; }
    inline void setKDateTimeEdit_MouseDoubleClickEvent_IsBase(bool value) const { kdatetimeedit_mousedoubleclickevent_isbase = value; }
    inline void setKDateTimeEdit_MouseMoveEvent_IsBase(bool value) const { kdatetimeedit_mousemoveevent_isbase = value; }
    inline void setKDateTimeEdit_WheelEvent_IsBase(bool value) const { kdatetimeedit_wheelevent_isbase = value; }
    inline void setKDateTimeEdit_KeyPressEvent_IsBase(bool value) const { kdatetimeedit_keypressevent_isbase = value; }
    inline void setKDateTimeEdit_KeyReleaseEvent_IsBase(bool value) const { kdatetimeedit_keyreleaseevent_isbase = value; }
    inline void setKDateTimeEdit_EnterEvent_IsBase(bool value) const { kdatetimeedit_enterevent_isbase = value; }
    inline void setKDateTimeEdit_LeaveEvent_IsBase(bool value) const { kdatetimeedit_leaveevent_isbase = value; }
    inline void setKDateTimeEdit_PaintEvent_IsBase(bool value) const { kdatetimeedit_paintevent_isbase = value; }
    inline void setKDateTimeEdit_MoveEvent_IsBase(bool value) const { kdatetimeedit_moveevent_isbase = value; }
    inline void setKDateTimeEdit_CloseEvent_IsBase(bool value) const { kdatetimeedit_closeevent_isbase = value; }
    inline void setKDateTimeEdit_ContextMenuEvent_IsBase(bool value) const { kdatetimeedit_contextmenuevent_isbase = value; }
    inline void setKDateTimeEdit_TabletEvent_IsBase(bool value) const { kdatetimeedit_tabletevent_isbase = value; }
    inline void setKDateTimeEdit_ActionEvent_IsBase(bool value) const { kdatetimeedit_actionevent_isbase = value; }
    inline void setKDateTimeEdit_DragEnterEvent_IsBase(bool value) const { kdatetimeedit_dragenterevent_isbase = value; }
    inline void setKDateTimeEdit_DragMoveEvent_IsBase(bool value) const { kdatetimeedit_dragmoveevent_isbase = value; }
    inline void setKDateTimeEdit_DragLeaveEvent_IsBase(bool value) const { kdatetimeedit_dragleaveevent_isbase = value; }
    inline void setKDateTimeEdit_DropEvent_IsBase(bool value) const { kdatetimeedit_dropevent_isbase = value; }
    inline void setKDateTimeEdit_ShowEvent_IsBase(bool value) const { kdatetimeedit_showevent_isbase = value; }
    inline void setKDateTimeEdit_HideEvent_IsBase(bool value) const { kdatetimeedit_hideevent_isbase = value; }
    inline void setKDateTimeEdit_NativeEvent_IsBase(bool value) const { kdatetimeedit_nativeevent_isbase = value; }
    inline void setKDateTimeEdit_ChangeEvent_IsBase(bool value) const { kdatetimeedit_changeevent_isbase = value; }
    inline void setKDateTimeEdit_Metric_IsBase(bool value) const { kdatetimeedit_metric_isbase = value; }
    inline void setKDateTimeEdit_InitPainter_IsBase(bool value) const { kdatetimeedit_initpainter_isbase = value; }
    inline void setKDateTimeEdit_Redirected_IsBase(bool value) const { kdatetimeedit_redirected_isbase = value; }
    inline void setKDateTimeEdit_SharedPainter_IsBase(bool value) const { kdatetimeedit_sharedpainter_isbase = value; }
    inline void setKDateTimeEdit_InputMethodEvent_IsBase(bool value) const { kdatetimeedit_inputmethodevent_isbase = value; }
    inline void setKDateTimeEdit_InputMethodQuery_IsBase(bool value) const { kdatetimeedit_inputmethodquery_isbase = value; }
    inline void setKDateTimeEdit_FocusNextPrevChild_IsBase(bool value) const { kdatetimeedit_focusnextprevchild_isbase = value; }
    inline void setKDateTimeEdit_TimerEvent_IsBase(bool value) const { kdatetimeedit_timerevent_isbase = value; }
    inline void setKDateTimeEdit_ChildEvent_IsBase(bool value) const { kdatetimeedit_childevent_isbase = value; }
    inline void setKDateTimeEdit_CustomEvent_IsBase(bool value) const { kdatetimeedit_customevent_isbase = value; }
    inline void setKDateTimeEdit_ConnectNotify_IsBase(bool value) const { kdatetimeedit_connectnotify_isbase = value; }
    inline void setKDateTimeEdit_DisconnectNotify_IsBase(bool value) const { kdatetimeedit_disconnectnotify_isbase = value; }
    inline void setKDateTimeEdit_AssignTimeZone_IsBase(bool value) const { kdatetimeedit_assigntimezone_isbase = value; }
    inline void setKDateTimeEdit_UpdateMicroFocus_IsBase(bool value) const { kdatetimeedit_updatemicrofocus_isbase = value; }
    inline void setKDateTimeEdit_Create_IsBase(bool value) const { kdatetimeedit_create_isbase = value; }
    inline void setKDateTimeEdit_Destroy_IsBase(bool value) const { kdatetimeedit_destroy_isbase = value; }
    inline void setKDateTimeEdit_FocusNextChild_IsBase(bool value) const { kdatetimeedit_focusnextchild_isbase = value; }
    inline void setKDateTimeEdit_FocusPreviousChild_IsBase(bool value) const { kdatetimeedit_focuspreviouschild_isbase = value; }
    inline void setKDateTimeEdit_Sender_IsBase(bool value) const { kdatetimeedit_sender_isbase = value; }
    inline void setKDateTimeEdit_SenderSignalIndex_IsBase(bool value) const { kdatetimeedit_sendersignalindex_isbase = value; }
    inline void setKDateTimeEdit_Receivers_IsBase(bool value) const { kdatetimeedit_receivers_isbase = value; }
    inline void setKDateTimeEdit_IsSignalConnected_IsBase(bool value) const { kdatetimeedit_issignalconnected_isbase = value; }
    inline void setKDateTimeEdit_GetDecodedMetricF_IsBase(bool value) const { kdatetimeedit_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdatetimeedit_metacall_isbase) {
            kdatetimeedit_metacall_isbase = false;
            return KDateTimeEdit::qt_metacall(param1, param2, param3);
        } else if (kdatetimeedit_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kdatetimeedit_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KDateTimeEdit::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (kdatetimeedit_eventfilter_isbase) {
            kdatetimeedit_eventfilter_isbase = false;
            return KDateTimeEdit::eventFilter(object, event);
        } else if (kdatetimeedit_eventfilter_callback != nullptr) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = kdatetimeedit_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KDateTimeEdit::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kdatetimeedit_focusinevent_isbase) {
            kdatetimeedit_focusinevent_isbase = false;
            KDateTimeEdit::focusInEvent(event);
        } else if (kdatetimeedit_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kdatetimeedit_focusinevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kdatetimeedit_focusoutevent_isbase) {
            kdatetimeedit_focusoutevent_isbase = false;
            KDateTimeEdit::focusOutEvent(event);
        } else if (kdatetimeedit_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kdatetimeedit_focusoutevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kdatetimeedit_resizeevent_isbase) {
            kdatetimeedit_resizeevent_isbase = false;
            KDateTimeEdit::resizeEvent(event);
        } else if (kdatetimeedit_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kdatetimeedit_resizeevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void assignDateTime(const QDateTime& dateTime) override {
        if (kdatetimeedit_assigndatetime_isbase) {
            kdatetimeedit_assigndatetime_isbase = false;
            KDateTimeEdit::assignDateTime(dateTime);
        } else if (kdatetimeedit_assigndatetime_callback != nullptr) {
            const QDateTime& dateTime_ret = dateTime;
            // Cast returned reference into pointer
            QDateTime* cbval1 = const_cast<QDateTime*>(&dateTime_ret);

            kdatetimeedit_assigndatetime_callback(this, cbval1);
        } else {
            KDateTimeEdit::assignDateTime(dateTime);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void assignDate(const QDate& date) override {
        if (kdatetimeedit_assigndate_isbase) {
            kdatetimeedit_assigndate_isbase = false;
            KDateTimeEdit::assignDate(date);
        } else if (kdatetimeedit_assigndate_callback != nullptr) {
            const QDate& date_ret = date;
            // Cast returned reference into pointer
            QDate* cbval1 = const_cast<QDate*>(&date_ret);

            kdatetimeedit_assigndate_callback(this, cbval1);
        } else {
            KDateTimeEdit::assignDate(date);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void assignTime(const QTime& time) override {
        if (kdatetimeedit_assigntime_isbase) {
            kdatetimeedit_assigntime_isbase = false;
            KDateTimeEdit::assignTime(time);
        } else if (kdatetimeedit_assigntime_callback != nullptr) {
            const QTime& time_ret = time;
            // Cast returned reference into pointer
            QTime* cbval1 = const_cast<QTime*>(&time_ret);

            kdatetimeedit_assigntime_callback(this, cbval1);
        } else {
            KDateTimeEdit::assignTime(time);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kdatetimeedit_devtype_isbase) {
            kdatetimeedit_devtype_isbase = false;
            return KDateTimeEdit::devType();
        } else if (kdatetimeedit_devtype_callback != nullptr) {
            int callback_ret = kdatetimeedit_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KDateTimeEdit::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kdatetimeedit_setvisible_isbase) {
            kdatetimeedit_setvisible_isbase = false;
            KDateTimeEdit::setVisible(visible);
        } else if (kdatetimeedit_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kdatetimeedit_setvisible_callback(this, cbval1);
        } else {
            KDateTimeEdit::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kdatetimeedit_sizehint_isbase) {
            kdatetimeedit_sizehint_isbase = false;
            return KDateTimeEdit::sizeHint();
        } else if (kdatetimeedit_sizehint_callback != nullptr) {
            QSize* callback_ret = kdatetimeedit_sizehint_callback();
            return *callback_ret;
        } else {
            return KDateTimeEdit::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kdatetimeedit_minimumsizehint_isbase) {
            kdatetimeedit_minimumsizehint_isbase = false;
            return KDateTimeEdit::minimumSizeHint();
        } else if (kdatetimeedit_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kdatetimeedit_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KDateTimeEdit::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kdatetimeedit_heightforwidth_isbase) {
            kdatetimeedit_heightforwidth_isbase = false;
            return KDateTimeEdit::heightForWidth(param1);
        } else if (kdatetimeedit_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kdatetimeedit_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDateTimeEdit::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kdatetimeedit_hasheightforwidth_isbase) {
            kdatetimeedit_hasheightforwidth_isbase = false;
            return KDateTimeEdit::hasHeightForWidth();
        } else if (kdatetimeedit_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kdatetimeedit_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KDateTimeEdit::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kdatetimeedit_paintengine_isbase) {
            kdatetimeedit_paintengine_isbase = false;
            return KDateTimeEdit::paintEngine();
        } else if (kdatetimeedit_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kdatetimeedit_paintengine_callback();
            return callback_ret;
        } else {
            return KDateTimeEdit::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kdatetimeedit_event_isbase) {
            kdatetimeedit_event_isbase = false;
            return KDateTimeEdit::event(event);
        } else if (kdatetimeedit_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kdatetimeedit_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDateTimeEdit::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kdatetimeedit_mousepressevent_isbase) {
            kdatetimeedit_mousepressevent_isbase = false;
            KDateTimeEdit::mousePressEvent(event);
        } else if (kdatetimeedit_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kdatetimeedit_mousepressevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kdatetimeedit_mousereleaseevent_isbase) {
            kdatetimeedit_mousereleaseevent_isbase = false;
            KDateTimeEdit::mouseReleaseEvent(event);
        } else if (kdatetimeedit_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kdatetimeedit_mousereleaseevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kdatetimeedit_mousedoubleclickevent_isbase) {
            kdatetimeedit_mousedoubleclickevent_isbase = false;
            KDateTimeEdit::mouseDoubleClickEvent(event);
        } else if (kdatetimeedit_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kdatetimeedit_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kdatetimeedit_mousemoveevent_isbase) {
            kdatetimeedit_mousemoveevent_isbase = false;
            KDateTimeEdit::mouseMoveEvent(event);
        } else if (kdatetimeedit_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kdatetimeedit_mousemoveevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kdatetimeedit_wheelevent_isbase) {
            kdatetimeedit_wheelevent_isbase = false;
            KDateTimeEdit::wheelEvent(event);
        } else if (kdatetimeedit_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kdatetimeedit_wheelevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kdatetimeedit_keypressevent_isbase) {
            kdatetimeedit_keypressevent_isbase = false;
            KDateTimeEdit::keyPressEvent(event);
        } else if (kdatetimeedit_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kdatetimeedit_keypressevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kdatetimeedit_keyreleaseevent_isbase) {
            kdatetimeedit_keyreleaseevent_isbase = false;
            KDateTimeEdit::keyReleaseEvent(event);
        } else if (kdatetimeedit_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kdatetimeedit_keyreleaseevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kdatetimeedit_enterevent_isbase) {
            kdatetimeedit_enterevent_isbase = false;
            KDateTimeEdit::enterEvent(event);
        } else if (kdatetimeedit_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kdatetimeedit_enterevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kdatetimeedit_leaveevent_isbase) {
            kdatetimeedit_leaveevent_isbase = false;
            KDateTimeEdit::leaveEvent(event);
        } else if (kdatetimeedit_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kdatetimeedit_leaveevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kdatetimeedit_paintevent_isbase) {
            kdatetimeedit_paintevent_isbase = false;
            KDateTimeEdit::paintEvent(event);
        } else if (kdatetimeedit_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kdatetimeedit_paintevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kdatetimeedit_moveevent_isbase) {
            kdatetimeedit_moveevent_isbase = false;
            KDateTimeEdit::moveEvent(event);
        } else if (kdatetimeedit_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kdatetimeedit_moveevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kdatetimeedit_closeevent_isbase) {
            kdatetimeedit_closeevent_isbase = false;
            KDateTimeEdit::closeEvent(event);
        } else if (kdatetimeedit_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kdatetimeedit_closeevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kdatetimeedit_contextmenuevent_isbase) {
            kdatetimeedit_contextmenuevent_isbase = false;
            KDateTimeEdit::contextMenuEvent(event);
        } else if (kdatetimeedit_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kdatetimeedit_contextmenuevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kdatetimeedit_tabletevent_isbase) {
            kdatetimeedit_tabletevent_isbase = false;
            KDateTimeEdit::tabletEvent(event);
        } else if (kdatetimeedit_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kdatetimeedit_tabletevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kdatetimeedit_actionevent_isbase) {
            kdatetimeedit_actionevent_isbase = false;
            KDateTimeEdit::actionEvent(event);
        } else if (kdatetimeedit_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kdatetimeedit_actionevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kdatetimeedit_dragenterevent_isbase) {
            kdatetimeedit_dragenterevent_isbase = false;
            KDateTimeEdit::dragEnterEvent(event);
        } else if (kdatetimeedit_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kdatetimeedit_dragenterevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kdatetimeedit_dragmoveevent_isbase) {
            kdatetimeedit_dragmoveevent_isbase = false;
            KDateTimeEdit::dragMoveEvent(event);
        } else if (kdatetimeedit_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kdatetimeedit_dragmoveevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kdatetimeedit_dragleaveevent_isbase) {
            kdatetimeedit_dragleaveevent_isbase = false;
            KDateTimeEdit::dragLeaveEvent(event);
        } else if (kdatetimeedit_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kdatetimeedit_dragleaveevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kdatetimeedit_dropevent_isbase) {
            kdatetimeedit_dropevent_isbase = false;
            KDateTimeEdit::dropEvent(event);
        } else if (kdatetimeedit_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kdatetimeedit_dropevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kdatetimeedit_showevent_isbase) {
            kdatetimeedit_showevent_isbase = false;
            KDateTimeEdit::showEvent(event);
        } else if (kdatetimeedit_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kdatetimeedit_showevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kdatetimeedit_hideevent_isbase) {
            kdatetimeedit_hideevent_isbase = false;
            KDateTimeEdit::hideEvent(event);
        } else if (kdatetimeedit_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kdatetimeedit_hideevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kdatetimeedit_nativeevent_isbase) {
            kdatetimeedit_nativeevent_isbase = false;
            return KDateTimeEdit::nativeEvent(eventType, message, result);
        } else if (kdatetimeedit_nativeevent_callback != nullptr) {
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

            bool callback_ret = kdatetimeedit_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KDateTimeEdit::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kdatetimeedit_changeevent_isbase) {
            kdatetimeedit_changeevent_isbase = false;
            KDateTimeEdit::changeEvent(param1);
        } else if (kdatetimeedit_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kdatetimeedit_changeevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kdatetimeedit_metric_isbase) {
            kdatetimeedit_metric_isbase = false;
            return KDateTimeEdit::metric(param1);
        } else if (kdatetimeedit_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kdatetimeedit_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDateTimeEdit::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kdatetimeedit_initpainter_isbase) {
            kdatetimeedit_initpainter_isbase = false;
            KDateTimeEdit::initPainter(painter);
        } else if (kdatetimeedit_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kdatetimeedit_initpainter_callback(this, cbval1);
        } else {
            KDateTimeEdit::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kdatetimeedit_redirected_isbase) {
            kdatetimeedit_redirected_isbase = false;
            return KDateTimeEdit::redirected(offset);
        } else if (kdatetimeedit_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kdatetimeedit_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDateTimeEdit::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kdatetimeedit_sharedpainter_isbase) {
            kdatetimeedit_sharedpainter_isbase = false;
            return KDateTimeEdit::sharedPainter();
        } else if (kdatetimeedit_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kdatetimeedit_sharedpainter_callback();
            return callback_ret;
        } else {
            return KDateTimeEdit::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kdatetimeedit_inputmethodevent_isbase) {
            kdatetimeedit_inputmethodevent_isbase = false;
            KDateTimeEdit::inputMethodEvent(param1);
        } else if (kdatetimeedit_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kdatetimeedit_inputmethodevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kdatetimeedit_inputmethodquery_isbase) {
            kdatetimeedit_inputmethodquery_isbase = false;
            return KDateTimeEdit::inputMethodQuery(param1);
        } else if (kdatetimeedit_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kdatetimeedit_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KDateTimeEdit::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kdatetimeedit_focusnextprevchild_isbase) {
            kdatetimeedit_focusnextprevchild_isbase = false;
            return KDateTimeEdit::focusNextPrevChild(next);
        } else if (kdatetimeedit_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kdatetimeedit_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDateTimeEdit::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdatetimeedit_timerevent_isbase) {
            kdatetimeedit_timerevent_isbase = false;
            KDateTimeEdit::timerEvent(event);
        } else if (kdatetimeedit_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kdatetimeedit_timerevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdatetimeedit_childevent_isbase) {
            kdatetimeedit_childevent_isbase = false;
            KDateTimeEdit::childEvent(event);
        } else if (kdatetimeedit_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kdatetimeedit_childevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdatetimeedit_customevent_isbase) {
            kdatetimeedit_customevent_isbase = false;
            KDateTimeEdit::customEvent(event);
        } else if (kdatetimeedit_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kdatetimeedit_customevent_callback(this, cbval1);
        } else {
            KDateTimeEdit::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdatetimeedit_connectnotify_isbase) {
            kdatetimeedit_connectnotify_isbase = false;
            KDateTimeEdit::connectNotify(signal);
        } else if (kdatetimeedit_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdatetimeedit_connectnotify_callback(this, cbval1);
        } else {
            KDateTimeEdit::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdatetimeedit_disconnectnotify_isbase) {
            kdatetimeedit_disconnectnotify_isbase = false;
            KDateTimeEdit::disconnectNotify(signal);
        } else if (kdatetimeedit_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdatetimeedit_disconnectnotify_callback(this, cbval1);
        } else {
            KDateTimeEdit::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void assignTimeZone(const QTimeZone& zone) {
        if (kdatetimeedit_assigntimezone_isbase) {
            kdatetimeedit_assigntimezone_isbase = false;
            KDateTimeEdit::assignTimeZone(zone);
        } else if (kdatetimeedit_assigntimezone_callback != nullptr) {
            const QTimeZone& zone_ret = zone;
            // Cast returned reference into pointer
            QTimeZone* cbval1 = const_cast<QTimeZone*>(&zone_ret);

            kdatetimeedit_assigntimezone_callback(this, cbval1);
        } else {
            KDateTimeEdit::assignTimeZone(zone);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kdatetimeedit_updatemicrofocus_isbase) {
            kdatetimeedit_updatemicrofocus_isbase = false;
            KDateTimeEdit::updateMicroFocus();
        } else if (kdatetimeedit_updatemicrofocus_callback != nullptr) {
            kdatetimeedit_updatemicrofocus_callback();
        } else {
            KDateTimeEdit::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kdatetimeedit_create_isbase) {
            kdatetimeedit_create_isbase = false;
            KDateTimeEdit::create();
        } else if (kdatetimeedit_create_callback != nullptr) {
            kdatetimeedit_create_callback();
        } else {
            KDateTimeEdit::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kdatetimeedit_destroy_isbase) {
            kdatetimeedit_destroy_isbase = false;
            KDateTimeEdit::destroy();
        } else if (kdatetimeedit_destroy_callback != nullptr) {
            kdatetimeedit_destroy_callback();
        } else {
            KDateTimeEdit::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kdatetimeedit_focusnextchild_isbase) {
            kdatetimeedit_focusnextchild_isbase = false;
            return KDateTimeEdit::focusNextChild();
        } else if (kdatetimeedit_focusnextchild_callback != nullptr) {
            bool callback_ret = kdatetimeedit_focusnextchild_callback();
            return callback_ret;
        } else {
            return KDateTimeEdit::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kdatetimeedit_focuspreviouschild_isbase) {
            kdatetimeedit_focuspreviouschild_isbase = false;
            return KDateTimeEdit::focusPreviousChild();
        } else if (kdatetimeedit_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kdatetimeedit_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KDateTimeEdit::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kdatetimeedit_sender_isbase) {
            kdatetimeedit_sender_isbase = false;
            return KDateTimeEdit::sender();
        } else if (kdatetimeedit_sender_callback != nullptr) {
            QObject* callback_ret = kdatetimeedit_sender_callback();
            return callback_ret;
        } else {
            return KDateTimeEdit::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kdatetimeedit_sendersignalindex_isbase) {
            kdatetimeedit_sendersignalindex_isbase = false;
            return KDateTimeEdit::senderSignalIndex();
        } else if (kdatetimeedit_sendersignalindex_callback != nullptr) {
            int callback_ret = kdatetimeedit_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KDateTimeEdit::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kdatetimeedit_receivers_isbase) {
            kdatetimeedit_receivers_isbase = false;
            return KDateTimeEdit::receivers(signal);
        } else if (kdatetimeedit_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kdatetimeedit_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDateTimeEdit::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kdatetimeedit_issignalconnected_isbase) {
            kdatetimeedit_issignalconnected_isbase = false;
            return KDateTimeEdit::isSignalConnected(signal);
        } else if (kdatetimeedit_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kdatetimeedit_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDateTimeEdit::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kdatetimeedit_getdecodedmetricf_isbase) {
            kdatetimeedit_getdecodedmetricf_isbase = false;
            return KDateTimeEdit::getDecodedMetricF(metricA, metricB);
        } else if (kdatetimeedit_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kdatetimeedit_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KDateTimeEdit::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KDateTimeEdit_EventFilter(KDateTimeEdit* self, QObject* object, QEvent* event);
    friend bool KDateTimeEdit_QBaseEventFilter(KDateTimeEdit* self, QObject* object, QEvent* event);
    friend void KDateTimeEdit_FocusInEvent(KDateTimeEdit* self, QFocusEvent* event);
    friend void KDateTimeEdit_QBaseFocusInEvent(KDateTimeEdit* self, QFocusEvent* event);
    friend void KDateTimeEdit_FocusOutEvent(KDateTimeEdit* self, QFocusEvent* event);
    friend void KDateTimeEdit_QBaseFocusOutEvent(KDateTimeEdit* self, QFocusEvent* event);
    friend void KDateTimeEdit_ResizeEvent(KDateTimeEdit* self, QResizeEvent* event);
    friend void KDateTimeEdit_QBaseResizeEvent(KDateTimeEdit* self, QResizeEvent* event);
    friend void KDateTimeEdit_AssignDateTime(KDateTimeEdit* self, const QDateTime* dateTime);
    friend void KDateTimeEdit_QBaseAssignDateTime(KDateTimeEdit* self, const QDateTime* dateTime);
    friend void KDateTimeEdit_AssignDate(KDateTimeEdit* self, const QDate* date);
    friend void KDateTimeEdit_QBaseAssignDate(KDateTimeEdit* self, const QDate* date);
    friend void KDateTimeEdit_AssignTime(KDateTimeEdit* self, const QTime* time);
    friend void KDateTimeEdit_QBaseAssignTime(KDateTimeEdit* self, const QTime* time);
    friend bool KDateTimeEdit_Event(KDateTimeEdit* self, QEvent* event);
    friend bool KDateTimeEdit_QBaseEvent(KDateTimeEdit* self, QEvent* event);
    friend void KDateTimeEdit_MousePressEvent(KDateTimeEdit* self, QMouseEvent* event);
    friend void KDateTimeEdit_QBaseMousePressEvent(KDateTimeEdit* self, QMouseEvent* event);
    friend void KDateTimeEdit_MouseReleaseEvent(KDateTimeEdit* self, QMouseEvent* event);
    friend void KDateTimeEdit_QBaseMouseReleaseEvent(KDateTimeEdit* self, QMouseEvent* event);
    friend void KDateTimeEdit_MouseDoubleClickEvent(KDateTimeEdit* self, QMouseEvent* event);
    friend void KDateTimeEdit_QBaseMouseDoubleClickEvent(KDateTimeEdit* self, QMouseEvent* event);
    friend void KDateTimeEdit_MouseMoveEvent(KDateTimeEdit* self, QMouseEvent* event);
    friend void KDateTimeEdit_QBaseMouseMoveEvent(KDateTimeEdit* self, QMouseEvent* event);
    friend void KDateTimeEdit_WheelEvent(KDateTimeEdit* self, QWheelEvent* event);
    friend void KDateTimeEdit_QBaseWheelEvent(KDateTimeEdit* self, QWheelEvent* event);
    friend void KDateTimeEdit_KeyPressEvent(KDateTimeEdit* self, QKeyEvent* event);
    friend void KDateTimeEdit_QBaseKeyPressEvent(KDateTimeEdit* self, QKeyEvent* event);
    friend void KDateTimeEdit_KeyReleaseEvent(KDateTimeEdit* self, QKeyEvent* event);
    friend void KDateTimeEdit_QBaseKeyReleaseEvent(KDateTimeEdit* self, QKeyEvent* event);
    friend void KDateTimeEdit_EnterEvent(KDateTimeEdit* self, QEnterEvent* event);
    friend void KDateTimeEdit_QBaseEnterEvent(KDateTimeEdit* self, QEnterEvent* event);
    friend void KDateTimeEdit_LeaveEvent(KDateTimeEdit* self, QEvent* event);
    friend void KDateTimeEdit_QBaseLeaveEvent(KDateTimeEdit* self, QEvent* event);
    friend void KDateTimeEdit_PaintEvent(KDateTimeEdit* self, QPaintEvent* event);
    friend void KDateTimeEdit_QBasePaintEvent(KDateTimeEdit* self, QPaintEvent* event);
    friend void KDateTimeEdit_MoveEvent(KDateTimeEdit* self, QMoveEvent* event);
    friend void KDateTimeEdit_QBaseMoveEvent(KDateTimeEdit* self, QMoveEvent* event);
    friend void KDateTimeEdit_CloseEvent(KDateTimeEdit* self, QCloseEvent* event);
    friend void KDateTimeEdit_QBaseCloseEvent(KDateTimeEdit* self, QCloseEvent* event);
    friend void KDateTimeEdit_ContextMenuEvent(KDateTimeEdit* self, QContextMenuEvent* event);
    friend void KDateTimeEdit_QBaseContextMenuEvent(KDateTimeEdit* self, QContextMenuEvent* event);
    friend void KDateTimeEdit_TabletEvent(KDateTimeEdit* self, QTabletEvent* event);
    friend void KDateTimeEdit_QBaseTabletEvent(KDateTimeEdit* self, QTabletEvent* event);
    friend void KDateTimeEdit_ActionEvent(KDateTimeEdit* self, QActionEvent* event);
    friend void KDateTimeEdit_QBaseActionEvent(KDateTimeEdit* self, QActionEvent* event);
    friend void KDateTimeEdit_DragEnterEvent(KDateTimeEdit* self, QDragEnterEvent* event);
    friend void KDateTimeEdit_QBaseDragEnterEvent(KDateTimeEdit* self, QDragEnterEvent* event);
    friend void KDateTimeEdit_DragMoveEvent(KDateTimeEdit* self, QDragMoveEvent* event);
    friend void KDateTimeEdit_QBaseDragMoveEvent(KDateTimeEdit* self, QDragMoveEvent* event);
    friend void KDateTimeEdit_DragLeaveEvent(KDateTimeEdit* self, QDragLeaveEvent* event);
    friend void KDateTimeEdit_QBaseDragLeaveEvent(KDateTimeEdit* self, QDragLeaveEvent* event);
    friend void KDateTimeEdit_DropEvent(KDateTimeEdit* self, QDropEvent* event);
    friend void KDateTimeEdit_QBaseDropEvent(KDateTimeEdit* self, QDropEvent* event);
    friend void KDateTimeEdit_ShowEvent(KDateTimeEdit* self, QShowEvent* event);
    friend void KDateTimeEdit_QBaseShowEvent(KDateTimeEdit* self, QShowEvent* event);
    friend void KDateTimeEdit_HideEvent(KDateTimeEdit* self, QHideEvent* event);
    friend void KDateTimeEdit_QBaseHideEvent(KDateTimeEdit* self, QHideEvent* event);
    friend bool KDateTimeEdit_NativeEvent(KDateTimeEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KDateTimeEdit_QBaseNativeEvent(KDateTimeEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KDateTimeEdit_ChangeEvent(KDateTimeEdit* self, QEvent* param1);
    friend void KDateTimeEdit_QBaseChangeEvent(KDateTimeEdit* self, QEvent* param1);
    friend int KDateTimeEdit_Metric(const KDateTimeEdit* self, int param1);
    friend int KDateTimeEdit_QBaseMetric(const KDateTimeEdit* self, int param1);
    friend void KDateTimeEdit_InitPainter(const KDateTimeEdit* self, QPainter* painter);
    friend void KDateTimeEdit_QBaseInitPainter(const KDateTimeEdit* self, QPainter* painter);
    friend QPaintDevice* KDateTimeEdit_Redirected(const KDateTimeEdit* self, QPoint* offset);
    friend QPaintDevice* KDateTimeEdit_QBaseRedirected(const KDateTimeEdit* self, QPoint* offset);
    friend QPainter* KDateTimeEdit_SharedPainter(const KDateTimeEdit* self);
    friend QPainter* KDateTimeEdit_QBaseSharedPainter(const KDateTimeEdit* self);
    friend void KDateTimeEdit_InputMethodEvent(KDateTimeEdit* self, QInputMethodEvent* param1);
    friend void KDateTimeEdit_QBaseInputMethodEvent(KDateTimeEdit* self, QInputMethodEvent* param1);
    friend bool KDateTimeEdit_FocusNextPrevChild(KDateTimeEdit* self, bool next);
    friend bool KDateTimeEdit_QBaseFocusNextPrevChild(KDateTimeEdit* self, bool next);
    friend void KDateTimeEdit_TimerEvent(KDateTimeEdit* self, QTimerEvent* event);
    friend void KDateTimeEdit_QBaseTimerEvent(KDateTimeEdit* self, QTimerEvent* event);
    friend void KDateTimeEdit_ChildEvent(KDateTimeEdit* self, QChildEvent* event);
    friend void KDateTimeEdit_QBaseChildEvent(KDateTimeEdit* self, QChildEvent* event);
    friend void KDateTimeEdit_CustomEvent(KDateTimeEdit* self, QEvent* event);
    friend void KDateTimeEdit_QBaseCustomEvent(KDateTimeEdit* self, QEvent* event);
    friend void KDateTimeEdit_ConnectNotify(KDateTimeEdit* self, const QMetaMethod* signal);
    friend void KDateTimeEdit_QBaseConnectNotify(KDateTimeEdit* self, const QMetaMethod* signal);
    friend void KDateTimeEdit_DisconnectNotify(KDateTimeEdit* self, const QMetaMethod* signal);
    friend void KDateTimeEdit_QBaseDisconnectNotify(KDateTimeEdit* self, const QMetaMethod* signal);
    friend void KDateTimeEdit_AssignTimeZone(KDateTimeEdit* self, const QTimeZone* zone);
    friend void KDateTimeEdit_QBaseAssignTimeZone(KDateTimeEdit* self, const QTimeZone* zone);
    friend void KDateTimeEdit_UpdateMicroFocus(KDateTimeEdit* self);
    friend void KDateTimeEdit_QBaseUpdateMicroFocus(KDateTimeEdit* self);
    friend void KDateTimeEdit_Create(KDateTimeEdit* self);
    friend void KDateTimeEdit_QBaseCreate(KDateTimeEdit* self);
    friend void KDateTimeEdit_Destroy(KDateTimeEdit* self);
    friend void KDateTimeEdit_QBaseDestroy(KDateTimeEdit* self);
    friend bool KDateTimeEdit_FocusNextChild(KDateTimeEdit* self);
    friend bool KDateTimeEdit_QBaseFocusNextChild(KDateTimeEdit* self);
    friend bool KDateTimeEdit_FocusPreviousChild(KDateTimeEdit* self);
    friend bool KDateTimeEdit_QBaseFocusPreviousChild(KDateTimeEdit* self);
    friend QObject* KDateTimeEdit_Sender(const KDateTimeEdit* self);
    friend QObject* KDateTimeEdit_QBaseSender(const KDateTimeEdit* self);
    friend int KDateTimeEdit_SenderSignalIndex(const KDateTimeEdit* self);
    friend int KDateTimeEdit_QBaseSenderSignalIndex(const KDateTimeEdit* self);
    friend int KDateTimeEdit_Receivers(const KDateTimeEdit* self, const char* signal);
    friend int KDateTimeEdit_QBaseReceivers(const KDateTimeEdit* self, const char* signal);
    friend bool KDateTimeEdit_IsSignalConnected(const KDateTimeEdit* self, const QMetaMethod* signal);
    friend bool KDateTimeEdit_QBaseIsSignalConnected(const KDateTimeEdit* self, const QMetaMethod* signal);
    friend double KDateTimeEdit_GetDecodedMetricF(const KDateTimeEdit* self, int metricA, int metricB);
    friend double KDateTimeEdit_QBaseGetDecodedMetricF(const KDateTimeEdit* self, int metricA, int metricB);
};

#endif
