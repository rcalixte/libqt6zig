#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKDATEPICKER_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKDATEPICKER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDatePicker so that we can call protected methods
class VirtualKDatePicker final : public KDatePicker {

  public:
    // Virtual class boolean flag
    bool isVirtualKDatePicker = true;

    // Virtual class public types (including callbacks)
    using KDatePicker_Metacall_Callback = int (*)(KDatePicker*, int, int, void**);
    using KDatePicker_SizeHint_Callback = QSize* (*)();
    using KDatePicker_EventFilter_Callback = bool (*)(KDatePicker*, QObject*, QEvent*);
    using KDatePicker_ResizeEvent_Callback = void (*)(KDatePicker*, QResizeEvent*);
    using KDatePicker_ChangeEvent_Callback = void (*)(KDatePicker*, QEvent*);
    using KDatePicker_Event_Callback = bool (*)(KDatePicker*, QEvent*);
    using KDatePicker_PaintEvent_Callback = void (*)(KDatePicker*, QPaintEvent*);
    using KDatePicker_InitStyleOption_Callback = void (*)(const KDatePicker*, QStyleOptionFrame*);
    using KDatePicker_DevType_Callback = int (*)();
    using KDatePicker_SetVisible_Callback = void (*)(KDatePicker*, bool);
    using KDatePicker_MinimumSizeHint_Callback = QSize* (*)();
    using KDatePicker_HeightForWidth_Callback = int (*)(const KDatePicker*, int);
    using KDatePicker_HasHeightForWidth_Callback = bool (*)();
    using KDatePicker_PaintEngine_Callback = QPaintEngine* (*)();
    using KDatePicker_MousePressEvent_Callback = void (*)(KDatePicker*, QMouseEvent*);
    using KDatePicker_MouseReleaseEvent_Callback = void (*)(KDatePicker*, QMouseEvent*);
    using KDatePicker_MouseDoubleClickEvent_Callback = void (*)(KDatePicker*, QMouseEvent*);
    using KDatePicker_MouseMoveEvent_Callback = void (*)(KDatePicker*, QMouseEvent*);
    using KDatePicker_WheelEvent_Callback = void (*)(KDatePicker*, QWheelEvent*);
    using KDatePicker_KeyPressEvent_Callback = void (*)(KDatePicker*, QKeyEvent*);
    using KDatePicker_KeyReleaseEvent_Callback = void (*)(KDatePicker*, QKeyEvent*);
    using KDatePicker_FocusInEvent_Callback = void (*)(KDatePicker*, QFocusEvent*);
    using KDatePicker_FocusOutEvent_Callback = void (*)(KDatePicker*, QFocusEvent*);
    using KDatePicker_EnterEvent_Callback = void (*)(KDatePicker*, QEnterEvent*);
    using KDatePicker_LeaveEvent_Callback = void (*)(KDatePicker*, QEvent*);
    using KDatePicker_MoveEvent_Callback = void (*)(KDatePicker*, QMoveEvent*);
    using KDatePicker_CloseEvent_Callback = void (*)(KDatePicker*, QCloseEvent*);
    using KDatePicker_ContextMenuEvent_Callback = void (*)(KDatePicker*, QContextMenuEvent*);
    using KDatePicker_TabletEvent_Callback = void (*)(KDatePicker*, QTabletEvent*);
    using KDatePicker_ActionEvent_Callback = void (*)(KDatePicker*, QActionEvent*);
    using KDatePicker_DragEnterEvent_Callback = void (*)(KDatePicker*, QDragEnterEvent*);
    using KDatePicker_DragMoveEvent_Callback = void (*)(KDatePicker*, QDragMoveEvent*);
    using KDatePicker_DragLeaveEvent_Callback = void (*)(KDatePicker*, QDragLeaveEvent*);
    using KDatePicker_DropEvent_Callback = void (*)(KDatePicker*, QDropEvent*);
    using KDatePicker_ShowEvent_Callback = void (*)(KDatePicker*, QShowEvent*);
    using KDatePicker_HideEvent_Callback = void (*)(KDatePicker*, QHideEvent*);
    using KDatePicker_NativeEvent_Callback = bool (*)(KDatePicker*, libqt_string, void*, intptr_t*);
    using KDatePicker_Metric_Callback = int (*)(const KDatePicker*, int);
    using KDatePicker_InitPainter_Callback = void (*)(const KDatePicker*, QPainter*);
    using KDatePicker_Redirected_Callback = QPaintDevice* (*)(const KDatePicker*, QPoint*);
    using KDatePicker_SharedPainter_Callback = QPainter* (*)();
    using KDatePicker_InputMethodEvent_Callback = void (*)(KDatePicker*, QInputMethodEvent*);
    using KDatePicker_InputMethodQuery_Callback = QVariant* (*)(const KDatePicker*, int);
    using KDatePicker_FocusNextPrevChild_Callback = bool (*)(KDatePicker*, bool);
    using KDatePicker_TimerEvent_Callback = void (*)(KDatePicker*, QTimerEvent*);
    using KDatePicker_ChildEvent_Callback = void (*)(KDatePicker*, QChildEvent*);
    using KDatePicker_CustomEvent_Callback = void (*)(KDatePicker*, QEvent*);
    using KDatePicker_ConnectNotify_Callback = void (*)(KDatePicker*, QMetaMethod*);
    using KDatePicker_DisconnectNotify_Callback = void (*)(KDatePicker*, QMetaMethod*);
    using KDatePicker_DateChangedSlot_Callback = void (*)(KDatePicker*, QDate*);
    using KDatePicker_TableClickedSlot_Callback = void (*)();
    using KDatePicker_MonthForwardClicked_Callback = void (*)();
    using KDatePicker_MonthBackwardClicked_Callback = void (*)();
    using KDatePicker_YearForwardClicked_Callback = void (*)();
    using KDatePicker_YearBackwardClicked_Callback = void (*)();
    using KDatePicker_SelectMonthClicked_Callback = void (*)();
    using KDatePicker_SelectYearClicked_Callback = void (*)();
    using KDatePicker_UncheckYearSelector_Callback = void (*)();
    using KDatePicker_LineEnterPressed_Callback = void (*)();
    using KDatePicker_TodayButtonClicked_Callback = void (*)();
    using KDatePicker_WeekSelected_Callback = void (*)(KDatePicker*, int);
    using KDatePicker_DrawFrame_Callback = void (*)(KDatePicker*, QPainter*);
    using KDatePicker_UpdateMicroFocus_Callback = void (*)();
    using KDatePicker_Create_Callback = void (*)();
    using KDatePicker_Destroy_Callback = void (*)();
    using KDatePicker_FocusNextChild_Callback = bool (*)();
    using KDatePicker_FocusPreviousChild_Callback = bool (*)();
    using KDatePicker_Sender_Callback = QObject* (*)();
    using KDatePicker_SenderSignalIndex_Callback = int (*)();
    using KDatePicker_Receivers_Callback = int (*)(const KDatePicker*, const char*);
    using KDatePicker_IsSignalConnected_Callback = bool (*)(const KDatePicker*, QMetaMethod*);
    using KDatePicker_GetDecodedMetricF_Callback = double (*)(const KDatePicker*, int, int);

  protected:
    // Instance callback storage
    KDatePicker_Metacall_Callback kdatepicker_metacall_callback = nullptr;
    KDatePicker_SizeHint_Callback kdatepicker_sizehint_callback = nullptr;
    KDatePicker_EventFilter_Callback kdatepicker_eventfilter_callback = nullptr;
    KDatePicker_ResizeEvent_Callback kdatepicker_resizeevent_callback = nullptr;
    KDatePicker_ChangeEvent_Callback kdatepicker_changeevent_callback = nullptr;
    KDatePicker_Event_Callback kdatepicker_event_callback = nullptr;
    KDatePicker_PaintEvent_Callback kdatepicker_paintevent_callback = nullptr;
    KDatePicker_InitStyleOption_Callback kdatepicker_initstyleoption_callback = nullptr;
    KDatePicker_DevType_Callback kdatepicker_devtype_callback = nullptr;
    KDatePicker_SetVisible_Callback kdatepicker_setvisible_callback = nullptr;
    KDatePicker_MinimumSizeHint_Callback kdatepicker_minimumsizehint_callback = nullptr;
    KDatePicker_HeightForWidth_Callback kdatepicker_heightforwidth_callback = nullptr;
    KDatePicker_HasHeightForWidth_Callback kdatepicker_hasheightforwidth_callback = nullptr;
    KDatePicker_PaintEngine_Callback kdatepicker_paintengine_callback = nullptr;
    KDatePicker_MousePressEvent_Callback kdatepicker_mousepressevent_callback = nullptr;
    KDatePicker_MouseReleaseEvent_Callback kdatepicker_mousereleaseevent_callback = nullptr;
    KDatePicker_MouseDoubleClickEvent_Callback kdatepicker_mousedoubleclickevent_callback = nullptr;
    KDatePicker_MouseMoveEvent_Callback kdatepicker_mousemoveevent_callback = nullptr;
    KDatePicker_WheelEvent_Callback kdatepicker_wheelevent_callback = nullptr;
    KDatePicker_KeyPressEvent_Callback kdatepicker_keypressevent_callback = nullptr;
    KDatePicker_KeyReleaseEvent_Callback kdatepicker_keyreleaseevent_callback = nullptr;
    KDatePicker_FocusInEvent_Callback kdatepicker_focusinevent_callback = nullptr;
    KDatePicker_FocusOutEvent_Callback kdatepicker_focusoutevent_callback = nullptr;
    KDatePicker_EnterEvent_Callback kdatepicker_enterevent_callback = nullptr;
    KDatePicker_LeaveEvent_Callback kdatepicker_leaveevent_callback = nullptr;
    KDatePicker_MoveEvent_Callback kdatepicker_moveevent_callback = nullptr;
    KDatePicker_CloseEvent_Callback kdatepicker_closeevent_callback = nullptr;
    KDatePicker_ContextMenuEvent_Callback kdatepicker_contextmenuevent_callback = nullptr;
    KDatePicker_TabletEvent_Callback kdatepicker_tabletevent_callback = nullptr;
    KDatePicker_ActionEvent_Callback kdatepicker_actionevent_callback = nullptr;
    KDatePicker_DragEnterEvent_Callback kdatepicker_dragenterevent_callback = nullptr;
    KDatePicker_DragMoveEvent_Callback kdatepicker_dragmoveevent_callback = nullptr;
    KDatePicker_DragLeaveEvent_Callback kdatepicker_dragleaveevent_callback = nullptr;
    KDatePicker_DropEvent_Callback kdatepicker_dropevent_callback = nullptr;
    KDatePicker_ShowEvent_Callback kdatepicker_showevent_callback = nullptr;
    KDatePicker_HideEvent_Callback kdatepicker_hideevent_callback = nullptr;
    KDatePicker_NativeEvent_Callback kdatepicker_nativeevent_callback = nullptr;
    KDatePicker_Metric_Callback kdatepicker_metric_callback = nullptr;
    KDatePicker_InitPainter_Callback kdatepicker_initpainter_callback = nullptr;
    KDatePicker_Redirected_Callback kdatepicker_redirected_callback = nullptr;
    KDatePicker_SharedPainter_Callback kdatepicker_sharedpainter_callback = nullptr;
    KDatePicker_InputMethodEvent_Callback kdatepicker_inputmethodevent_callback = nullptr;
    KDatePicker_InputMethodQuery_Callback kdatepicker_inputmethodquery_callback = nullptr;
    KDatePicker_FocusNextPrevChild_Callback kdatepicker_focusnextprevchild_callback = nullptr;
    KDatePicker_TimerEvent_Callback kdatepicker_timerevent_callback = nullptr;
    KDatePicker_ChildEvent_Callback kdatepicker_childevent_callback = nullptr;
    KDatePicker_CustomEvent_Callback kdatepicker_customevent_callback = nullptr;
    KDatePicker_ConnectNotify_Callback kdatepicker_connectnotify_callback = nullptr;
    KDatePicker_DisconnectNotify_Callback kdatepicker_disconnectnotify_callback = nullptr;
    KDatePicker_DateChangedSlot_Callback kdatepicker_datechangedslot_callback = nullptr;
    KDatePicker_TableClickedSlot_Callback kdatepicker_tableclickedslot_callback = nullptr;
    KDatePicker_MonthForwardClicked_Callback kdatepicker_monthforwardclicked_callback = nullptr;
    KDatePicker_MonthBackwardClicked_Callback kdatepicker_monthbackwardclicked_callback = nullptr;
    KDatePicker_YearForwardClicked_Callback kdatepicker_yearforwardclicked_callback = nullptr;
    KDatePicker_YearBackwardClicked_Callback kdatepicker_yearbackwardclicked_callback = nullptr;
    KDatePicker_SelectMonthClicked_Callback kdatepicker_selectmonthclicked_callback = nullptr;
    KDatePicker_SelectYearClicked_Callback kdatepicker_selectyearclicked_callback = nullptr;
    KDatePicker_UncheckYearSelector_Callback kdatepicker_uncheckyearselector_callback = nullptr;
    KDatePicker_LineEnterPressed_Callback kdatepicker_lineenterpressed_callback = nullptr;
    KDatePicker_TodayButtonClicked_Callback kdatepicker_todaybuttonclicked_callback = nullptr;
    KDatePicker_WeekSelected_Callback kdatepicker_weekselected_callback = nullptr;
    KDatePicker_DrawFrame_Callback kdatepicker_drawframe_callback = nullptr;
    KDatePicker_UpdateMicroFocus_Callback kdatepicker_updatemicrofocus_callback = nullptr;
    KDatePicker_Create_Callback kdatepicker_create_callback = nullptr;
    KDatePicker_Destroy_Callback kdatepicker_destroy_callback = nullptr;
    KDatePicker_FocusNextChild_Callback kdatepicker_focusnextchild_callback = nullptr;
    KDatePicker_FocusPreviousChild_Callback kdatepicker_focuspreviouschild_callback = nullptr;
    KDatePicker_Sender_Callback kdatepicker_sender_callback = nullptr;
    KDatePicker_SenderSignalIndex_Callback kdatepicker_sendersignalindex_callback = nullptr;
    KDatePicker_Receivers_Callback kdatepicker_receivers_callback = nullptr;
    KDatePicker_IsSignalConnected_Callback kdatepicker_issignalconnected_callback = nullptr;
    KDatePicker_GetDecodedMetricF_Callback kdatepicker_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kdatepicker_metacall_isbase = false;
    mutable bool kdatepicker_sizehint_isbase = false;
    mutable bool kdatepicker_eventfilter_isbase = false;
    mutable bool kdatepicker_resizeevent_isbase = false;
    mutable bool kdatepicker_changeevent_isbase = false;
    mutable bool kdatepicker_event_isbase = false;
    mutable bool kdatepicker_paintevent_isbase = false;
    mutable bool kdatepicker_initstyleoption_isbase = false;
    mutable bool kdatepicker_devtype_isbase = false;
    mutable bool kdatepicker_setvisible_isbase = false;
    mutable bool kdatepicker_minimumsizehint_isbase = false;
    mutable bool kdatepicker_heightforwidth_isbase = false;
    mutable bool kdatepicker_hasheightforwidth_isbase = false;
    mutable bool kdatepicker_paintengine_isbase = false;
    mutable bool kdatepicker_mousepressevent_isbase = false;
    mutable bool kdatepicker_mousereleaseevent_isbase = false;
    mutable bool kdatepicker_mousedoubleclickevent_isbase = false;
    mutable bool kdatepicker_mousemoveevent_isbase = false;
    mutable bool kdatepicker_wheelevent_isbase = false;
    mutable bool kdatepicker_keypressevent_isbase = false;
    mutable bool kdatepicker_keyreleaseevent_isbase = false;
    mutable bool kdatepicker_focusinevent_isbase = false;
    mutable bool kdatepicker_focusoutevent_isbase = false;
    mutable bool kdatepicker_enterevent_isbase = false;
    mutable bool kdatepicker_leaveevent_isbase = false;
    mutable bool kdatepicker_moveevent_isbase = false;
    mutable bool kdatepicker_closeevent_isbase = false;
    mutable bool kdatepicker_contextmenuevent_isbase = false;
    mutable bool kdatepicker_tabletevent_isbase = false;
    mutable bool kdatepicker_actionevent_isbase = false;
    mutable bool kdatepicker_dragenterevent_isbase = false;
    mutable bool kdatepicker_dragmoveevent_isbase = false;
    mutable bool kdatepicker_dragleaveevent_isbase = false;
    mutable bool kdatepicker_dropevent_isbase = false;
    mutable bool kdatepicker_showevent_isbase = false;
    mutable bool kdatepicker_hideevent_isbase = false;
    mutable bool kdatepicker_nativeevent_isbase = false;
    mutable bool kdatepicker_metric_isbase = false;
    mutable bool kdatepicker_initpainter_isbase = false;
    mutable bool kdatepicker_redirected_isbase = false;
    mutable bool kdatepicker_sharedpainter_isbase = false;
    mutable bool kdatepicker_inputmethodevent_isbase = false;
    mutable bool kdatepicker_inputmethodquery_isbase = false;
    mutable bool kdatepicker_focusnextprevchild_isbase = false;
    mutable bool kdatepicker_timerevent_isbase = false;
    mutable bool kdatepicker_childevent_isbase = false;
    mutable bool kdatepicker_customevent_isbase = false;
    mutable bool kdatepicker_connectnotify_isbase = false;
    mutable bool kdatepicker_disconnectnotify_isbase = false;
    mutable bool kdatepicker_datechangedslot_isbase = false;
    mutable bool kdatepicker_tableclickedslot_isbase = false;
    mutable bool kdatepicker_monthforwardclicked_isbase = false;
    mutable bool kdatepicker_monthbackwardclicked_isbase = false;
    mutable bool kdatepicker_yearforwardclicked_isbase = false;
    mutable bool kdatepicker_yearbackwardclicked_isbase = false;
    mutable bool kdatepicker_selectmonthclicked_isbase = false;
    mutable bool kdatepicker_selectyearclicked_isbase = false;
    mutable bool kdatepicker_uncheckyearselector_isbase = false;
    mutable bool kdatepicker_lineenterpressed_isbase = false;
    mutable bool kdatepicker_todaybuttonclicked_isbase = false;
    mutable bool kdatepicker_weekselected_isbase = false;
    mutable bool kdatepicker_drawframe_isbase = false;
    mutable bool kdatepicker_updatemicrofocus_isbase = false;
    mutable bool kdatepicker_create_isbase = false;
    mutable bool kdatepicker_destroy_isbase = false;
    mutable bool kdatepicker_focusnextchild_isbase = false;
    mutable bool kdatepicker_focuspreviouschild_isbase = false;
    mutable bool kdatepicker_sender_isbase = false;
    mutable bool kdatepicker_sendersignalindex_isbase = false;
    mutable bool kdatepicker_receivers_isbase = false;
    mutable bool kdatepicker_issignalconnected_isbase = false;
    mutable bool kdatepicker_getdecodedmetricf_isbase = false;

  public:
    VirtualKDatePicker(QWidget* parent) : KDatePicker(parent) {};
    VirtualKDatePicker() : KDatePicker() {};
    VirtualKDatePicker(const QDate& dt) : KDatePicker(dt) {};
    VirtualKDatePicker(const QDate& dt, QWidget* parent) : KDatePicker(dt, parent) {};

    ~VirtualKDatePicker() {
        kdatepicker_metacall_callback = nullptr;
        kdatepicker_sizehint_callback = nullptr;
        kdatepicker_eventfilter_callback = nullptr;
        kdatepicker_resizeevent_callback = nullptr;
        kdatepicker_changeevent_callback = nullptr;
        kdatepicker_event_callback = nullptr;
        kdatepicker_paintevent_callback = nullptr;
        kdatepicker_initstyleoption_callback = nullptr;
        kdatepicker_devtype_callback = nullptr;
        kdatepicker_setvisible_callback = nullptr;
        kdatepicker_minimumsizehint_callback = nullptr;
        kdatepicker_heightforwidth_callback = nullptr;
        kdatepicker_hasheightforwidth_callback = nullptr;
        kdatepicker_paintengine_callback = nullptr;
        kdatepicker_mousepressevent_callback = nullptr;
        kdatepicker_mousereleaseevent_callback = nullptr;
        kdatepicker_mousedoubleclickevent_callback = nullptr;
        kdatepicker_mousemoveevent_callback = nullptr;
        kdatepicker_wheelevent_callback = nullptr;
        kdatepicker_keypressevent_callback = nullptr;
        kdatepicker_keyreleaseevent_callback = nullptr;
        kdatepicker_focusinevent_callback = nullptr;
        kdatepicker_focusoutevent_callback = nullptr;
        kdatepicker_enterevent_callback = nullptr;
        kdatepicker_leaveevent_callback = nullptr;
        kdatepicker_moveevent_callback = nullptr;
        kdatepicker_closeevent_callback = nullptr;
        kdatepicker_contextmenuevent_callback = nullptr;
        kdatepicker_tabletevent_callback = nullptr;
        kdatepicker_actionevent_callback = nullptr;
        kdatepicker_dragenterevent_callback = nullptr;
        kdatepicker_dragmoveevent_callback = nullptr;
        kdatepicker_dragleaveevent_callback = nullptr;
        kdatepicker_dropevent_callback = nullptr;
        kdatepicker_showevent_callback = nullptr;
        kdatepicker_hideevent_callback = nullptr;
        kdatepicker_nativeevent_callback = nullptr;
        kdatepicker_metric_callback = nullptr;
        kdatepicker_initpainter_callback = nullptr;
        kdatepicker_redirected_callback = nullptr;
        kdatepicker_sharedpainter_callback = nullptr;
        kdatepicker_inputmethodevent_callback = nullptr;
        kdatepicker_inputmethodquery_callback = nullptr;
        kdatepicker_focusnextprevchild_callback = nullptr;
        kdatepicker_timerevent_callback = nullptr;
        kdatepicker_childevent_callback = nullptr;
        kdatepicker_customevent_callback = nullptr;
        kdatepicker_connectnotify_callback = nullptr;
        kdatepicker_disconnectnotify_callback = nullptr;
        kdatepicker_datechangedslot_callback = nullptr;
        kdatepicker_tableclickedslot_callback = nullptr;
        kdatepicker_monthforwardclicked_callback = nullptr;
        kdatepicker_monthbackwardclicked_callback = nullptr;
        kdatepicker_yearforwardclicked_callback = nullptr;
        kdatepicker_yearbackwardclicked_callback = nullptr;
        kdatepicker_selectmonthclicked_callback = nullptr;
        kdatepicker_selectyearclicked_callback = nullptr;
        kdatepicker_uncheckyearselector_callback = nullptr;
        kdatepicker_lineenterpressed_callback = nullptr;
        kdatepicker_todaybuttonclicked_callback = nullptr;
        kdatepicker_weekselected_callback = nullptr;
        kdatepicker_drawframe_callback = nullptr;
        kdatepicker_updatemicrofocus_callback = nullptr;
        kdatepicker_create_callback = nullptr;
        kdatepicker_destroy_callback = nullptr;
        kdatepicker_focusnextchild_callback = nullptr;
        kdatepicker_focuspreviouschild_callback = nullptr;
        kdatepicker_sender_callback = nullptr;
        kdatepicker_sendersignalindex_callback = nullptr;
        kdatepicker_receivers_callback = nullptr;
        kdatepicker_issignalconnected_callback = nullptr;
        kdatepicker_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKDatePicker_Metacall_Callback(KDatePicker_Metacall_Callback cb) { kdatepicker_metacall_callback = cb; }
    inline void setKDatePicker_SizeHint_Callback(KDatePicker_SizeHint_Callback cb) { kdatepicker_sizehint_callback = cb; }
    inline void setKDatePicker_EventFilter_Callback(KDatePicker_EventFilter_Callback cb) { kdatepicker_eventfilter_callback = cb; }
    inline void setKDatePicker_ResizeEvent_Callback(KDatePicker_ResizeEvent_Callback cb) { kdatepicker_resizeevent_callback = cb; }
    inline void setKDatePicker_ChangeEvent_Callback(KDatePicker_ChangeEvent_Callback cb) { kdatepicker_changeevent_callback = cb; }
    inline void setKDatePicker_Event_Callback(KDatePicker_Event_Callback cb) { kdatepicker_event_callback = cb; }
    inline void setKDatePicker_PaintEvent_Callback(KDatePicker_PaintEvent_Callback cb) { kdatepicker_paintevent_callback = cb; }
    inline void setKDatePicker_InitStyleOption_Callback(KDatePicker_InitStyleOption_Callback cb) { kdatepicker_initstyleoption_callback = cb; }
    inline void setKDatePicker_DevType_Callback(KDatePicker_DevType_Callback cb) { kdatepicker_devtype_callback = cb; }
    inline void setKDatePicker_SetVisible_Callback(KDatePicker_SetVisible_Callback cb) { kdatepicker_setvisible_callback = cb; }
    inline void setKDatePicker_MinimumSizeHint_Callback(KDatePicker_MinimumSizeHint_Callback cb) { kdatepicker_minimumsizehint_callback = cb; }
    inline void setKDatePicker_HeightForWidth_Callback(KDatePicker_HeightForWidth_Callback cb) { kdatepicker_heightforwidth_callback = cb; }
    inline void setKDatePicker_HasHeightForWidth_Callback(KDatePicker_HasHeightForWidth_Callback cb) { kdatepicker_hasheightforwidth_callback = cb; }
    inline void setKDatePicker_PaintEngine_Callback(KDatePicker_PaintEngine_Callback cb) { kdatepicker_paintengine_callback = cb; }
    inline void setKDatePicker_MousePressEvent_Callback(KDatePicker_MousePressEvent_Callback cb) { kdatepicker_mousepressevent_callback = cb; }
    inline void setKDatePicker_MouseReleaseEvent_Callback(KDatePicker_MouseReleaseEvent_Callback cb) { kdatepicker_mousereleaseevent_callback = cb; }
    inline void setKDatePicker_MouseDoubleClickEvent_Callback(KDatePicker_MouseDoubleClickEvent_Callback cb) { kdatepicker_mousedoubleclickevent_callback = cb; }
    inline void setKDatePicker_MouseMoveEvent_Callback(KDatePicker_MouseMoveEvent_Callback cb) { kdatepicker_mousemoveevent_callback = cb; }
    inline void setKDatePicker_WheelEvent_Callback(KDatePicker_WheelEvent_Callback cb) { kdatepicker_wheelevent_callback = cb; }
    inline void setKDatePicker_KeyPressEvent_Callback(KDatePicker_KeyPressEvent_Callback cb) { kdatepicker_keypressevent_callback = cb; }
    inline void setKDatePicker_KeyReleaseEvent_Callback(KDatePicker_KeyReleaseEvent_Callback cb) { kdatepicker_keyreleaseevent_callback = cb; }
    inline void setKDatePicker_FocusInEvent_Callback(KDatePicker_FocusInEvent_Callback cb) { kdatepicker_focusinevent_callback = cb; }
    inline void setKDatePicker_FocusOutEvent_Callback(KDatePicker_FocusOutEvent_Callback cb) { kdatepicker_focusoutevent_callback = cb; }
    inline void setKDatePicker_EnterEvent_Callback(KDatePicker_EnterEvent_Callback cb) { kdatepicker_enterevent_callback = cb; }
    inline void setKDatePicker_LeaveEvent_Callback(KDatePicker_LeaveEvent_Callback cb) { kdatepicker_leaveevent_callback = cb; }
    inline void setKDatePicker_MoveEvent_Callback(KDatePicker_MoveEvent_Callback cb) { kdatepicker_moveevent_callback = cb; }
    inline void setKDatePicker_CloseEvent_Callback(KDatePicker_CloseEvent_Callback cb) { kdatepicker_closeevent_callback = cb; }
    inline void setKDatePicker_ContextMenuEvent_Callback(KDatePicker_ContextMenuEvent_Callback cb) { kdatepicker_contextmenuevent_callback = cb; }
    inline void setKDatePicker_TabletEvent_Callback(KDatePicker_TabletEvent_Callback cb) { kdatepicker_tabletevent_callback = cb; }
    inline void setKDatePicker_ActionEvent_Callback(KDatePicker_ActionEvent_Callback cb) { kdatepicker_actionevent_callback = cb; }
    inline void setKDatePicker_DragEnterEvent_Callback(KDatePicker_DragEnterEvent_Callback cb) { kdatepicker_dragenterevent_callback = cb; }
    inline void setKDatePicker_DragMoveEvent_Callback(KDatePicker_DragMoveEvent_Callback cb) { kdatepicker_dragmoveevent_callback = cb; }
    inline void setKDatePicker_DragLeaveEvent_Callback(KDatePicker_DragLeaveEvent_Callback cb) { kdatepicker_dragleaveevent_callback = cb; }
    inline void setKDatePicker_DropEvent_Callback(KDatePicker_DropEvent_Callback cb) { kdatepicker_dropevent_callback = cb; }
    inline void setKDatePicker_ShowEvent_Callback(KDatePicker_ShowEvent_Callback cb) { kdatepicker_showevent_callback = cb; }
    inline void setKDatePicker_HideEvent_Callback(KDatePicker_HideEvent_Callback cb) { kdatepicker_hideevent_callback = cb; }
    inline void setKDatePicker_NativeEvent_Callback(KDatePicker_NativeEvent_Callback cb) { kdatepicker_nativeevent_callback = cb; }
    inline void setKDatePicker_Metric_Callback(KDatePicker_Metric_Callback cb) { kdatepicker_metric_callback = cb; }
    inline void setKDatePicker_InitPainter_Callback(KDatePicker_InitPainter_Callback cb) { kdatepicker_initpainter_callback = cb; }
    inline void setKDatePicker_Redirected_Callback(KDatePicker_Redirected_Callback cb) { kdatepicker_redirected_callback = cb; }
    inline void setKDatePicker_SharedPainter_Callback(KDatePicker_SharedPainter_Callback cb) { kdatepicker_sharedpainter_callback = cb; }
    inline void setKDatePicker_InputMethodEvent_Callback(KDatePicker_InputMethodEvent_Callback cb) { kdatepicker_inputmethodevent_callback = cb; }
    inline void setKDatePicker_InputMethodQuery_Callback(KDatePicker_InputMethodQuery_Callback cb) { kdatepicker_inputmethodquery_callback = cb; }
    inline void setKDatePicker_FocusNextPrevChild_Callback(KDatePicker_FocusNextPrevChild_Callback cb) { kdatepicker_focusnextprevchild_callback = cb; }
    inline void setKDatePicker_TimerEvent_Callback(KDatePicker_TimerEvent_Callback cb) { kdatepicker_timerevent_callback = cb; }
    inline void setKDatePicker_ChildEvent_Callback(KDatePicker_ChildEvent_Callback cb) { kdatepicker_childevent_callback = cb; }
    inline void setKDatePicker_CustomEvent_Callback(KDatePicker_CustomEvent_Callback cb) { kdatepicker_customevent_callback = cb; }
    inline void setKDatePicker_ConnectNotify_Callback(KDatePicker_ConnectNotify_Callback cb) { kdatepicker_connectnotify_callback = cb; }
    inline void setKDatePicker_DisconnectNotify_Callback(KDatePicker_DisconnectNotify_Callback cb) { kdatepicker_disconnectnotify_callback = cb; }
    inline void setKDatePicker_DateChangedSlot_Callback(KDatePicker_DateChangedSlot_Callback cb) { kdatepicker_datechangedslot_callback = cb; }
    inline void setKDatePicker_TableClickedSlot_Callback(KDatePicker_TableClickedSlot_Callback cb) { kdatepicker_tableclickedslot_callback = cb; }
    inline void setKDatePicker_MonthForwardClicked_Callback(KDatePicker_MonthForwardClicked_Callback cb) { kdatepicker_monthforwardclicked_callback = cb; }
    inline void setKDatePicker_MonthBackwardClicked_Callback(KDatePicker_MonthBackwardClicked_Callback cb) { kdatepicker_monthbackwardclicked_callback = cb; }
    inline void setKDatePicker_YearForwardClicked_Callback(KDatePicker_YearForwardClicked_Callback cb) { kdatepicker_yearforwardclicked_callback = cb; }
    inline void setKDatePicker_YearBackwardClicked_Callback(KDatePicker_YearBackwardClicked_Callback cb) { kdatepicker_yearbackwardclicked_callback = cb; }
    inline void setKDatePicker_SelectMonthClicked_Callback(KDatePicker_SelectMonthClicked_Callback cb) { kdatepicker_selectmonthclicked_callback = cb; }
    inline void setKDatePicker_SelectYearClicked_Callback(KDatePicker_SelectYearClicked_Callback cb) { kdatepicker_selectyearclicked_callback = cb; }
    inline void setKDatePicker_UncheckYearSelector_Callback(KDatePicker_UncheckYearSelector_Callback cb) { kdatepicker_uncheckyearselector_callback = cb; }
    inline void setKDatePicker_LineEnterPressed_Callback(KDatePicker_LineEnterPressed_Callback cb) { kdatepicker_lineenterpressed_callback = cb; }
    inline void setKDatePicker_TodayButtonClicked_Callback(KDatePicker_TodayButtonClicked_Callback cb) { kdatepicker_todaybuttonclicked_callback = cb; }
    inline void setKDatePicker_WeekSelected_Callback(KDatePicker_WeekSelected_Callback cb) { kdatepicker_weekselected_callback = cb; }
    inline void setKDatePicker_DrawFrame_Callback(KDatePicker_DrawFrame_Callback cb) { kdatepicker_drawframe_callback = cb; }
    inline void setKDatePicker_UpdateMicroFocus_Callback(KDatePicker_UpdateMicroFocus_Callback cb) { kdatepicker_updatemicrofocus_callback = cb; }
    inline void setKDatePicker_Create_Callback(KDatePicker_Create_Callback cb) { kdatepicker_create_callback = cb; }
    inline void setKDatePicker_Destroy_Callback(KDatePicker_Destroy_Callback cb) { kdatepicker_destroy_callback = cb; }
    inline void setKDatePicker_FocusNextChild_Callback(KDatePicker_FocusNextChild_Callback cb) { kdatepicker_focusnextchild_callback = cb; }
    inline void setKDatePicker_FocusPreviousChild_Callback(KDatePicker_FocusPreviousChild_Callback cb) { kdatepicker_focuspreviouschild_callback = cb; }
    inline void setKDatePicker_Sender_Callback(KDatePicker_Sender_Callback cb) { kdatepicker_sender_callback = cb; }
    inline void setKDatePicker_SenderSignalIndex_Callback(KDatePicker_SenderSignalIndex_Callback cb) { kdatepicker_sendersignalindex_callback = cb; }
    inline void setKDatePicker_Receivers_Callback(KDatePicker_Receivers_Callback cb) { kdatepicker_receivers_callback = cb; }
    inline void setKDatePicker_IsSignalConnected_Callback(KDatePicker_IsSignalConnected_Callback cb) { kdatepicker_issignalconnected_callback = cb; }
    inline void setKDatePicker_GetDecodedMetricF_Callback(KDatePicker_GetDecodedMetricF_Callback cb) { kdatepicker_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKDatePicker_Metacall_IsBase(bool value) const { kdatepicker_metacall_isbase = value; }
    inline void setKDatePicker_SizeHint_IsBase(bool value) const { kdatepicker_sizehint_isbase = value; }
    inline void setKDatePicker_EventFilter_IsBase(bool value) const { kdatepicker_eventfilter_isbase = value; }
    inline void setKDatePicker_ResizeEvent_IsBase(bool value) const { kdatepicker_resizeevent_isbase = value; }
    inline void setKDatePicker_ChangeEvent_IsBase(bool value) const { kdatepicker_changeevent_isbase = value; }
    inline void setKDatePicker_Event_IsBase(bool value) const { kdatepicker_event_isbase = value; }
    inline void setKDatePicker_PaintEvent_IsBase(bool value) const { kdatepicker_paintevent_isbase = value; }
    inline void setKDatePicker_InitStyleOption_IsBase(bool value) const { kdatepicker_initstyleoption_isbase = value; }
    inline void setKDatePicker_DevType_IsBase(bool value) const { kdatepicker_devtype_isbase = value; }
    inline void setKDatePicker_SetVisible_IsBase(bool value) const { kdatepicker_setvisible_isbase = value; }
    inline void setKDatePicker_MinimumSizeHint_IsBase(bool value) const { kdatepicker_minimumsizehint_isbase = value; }
    inline void setKDatePicker_HeightForWidth_IsBase(bool value) const { kdatepicker_heightforwidth_isbase = value; }
    inline void setKDatePicker_HasHeightForWidth_IsBase(bool value) const { kdatepicker_hasheightforwidth_isbase = value; }
    inline void setKDatePicker_PaintEngine_IsBase(bool value) const { kdatepicker_paintengine_isbase = value; }
    inline void setKDatePicker_MousePressEvent_IsBase(bool value) const { kdatepicker_mousepressevent_isbase = value; }
    inline void setKDatePicker_MouseReleaseEvent_IsBase(bool value) const { kdatepicker_mousereleaseevent_isbase = value; }
    inline void setKDatePicker_MouseDoubleClickEvent_IsBase(bool value) const { kdatepicker_mousedoubleclickevent_isbase = value; }
    inline void setKDatePicker_MouseMoveEvent_IsBase(bool value) const { kdatepicker_mousemoveevent_isbase = value; }
    inline void setKDatePicker_WheelEvent_IsBase(bool value) const { kdatepicker_wheelevent_isbase = value; }
    inline void setKDatePicker_KeyPressEvent_IsBase(bool value) const { kdatepicker_keypressevent_isbase = value; }
    inline void setKDatePicker_KeyReleaseEvent_IsBase(bool value) const { kdatepicker_keyreleaseevent_isbase = value; }
    inline void setKDatePicker_FocusInEvent_IsBase(bool value) const { kdatepicker_focusinevent_isbase = value; }
    inline void setKDatePicker_FocusOutEvent_IsBase(bool value) const { kdatepicker_focusoutevent_isbase = value; }
    inline void setKDatePicker_EnterEvent_IsBase(bool value) const { kdatepicker_enterevent_isbase = value; }
    inline void setKDatePicker_LeaveEvent_IsBase(bool value) const { kdatepicker_leaveevent_isbase = value; }
    inline void setKDatePicker_MoveEvent_IsBase(bool value) const { kdatepicker_moveevent_isbase = value; }
    inline void setKDatePicker_CloseEvent_IsBase(bool value) const { kdatepicker_closeevent_isbase = value; }
    inline void setKDatePicker_ContextMenuEvent_IsBase(bool value) const { kdatepicker_contextmenuevent_isbase = value; }
    inline void setKDatePicker_TabletEvent_IsBase(bool value) const { kdatepicker_tabletevent_isbase = value; }
    inline void setKDatePicker_ActionEvent_IsBase(bool value) const { kdatepicker_actionevent_isbase = value; }
    inline void setKDatePicker_DragEnterEvent_IsBase(bool value) const { kdatepicker_dragenterevent_isbase = value; }
    inline void setKDatePicker_DragMoveEvent_IsBase(bool value) const { kdatepicker_dragmoveevent_isbase = value; }
    inline void setKDatePicker_DragLeaveEvent_IsBase(bool value) const { kdatepicker_dragleaveevent_isbase = value; }
    inline void setKDatePicker_DropEvent_IsBase(bool value) const { kdatepicker_dropevent_isbase = value; }
    inline void setKDatePicker_ShowEvent_IsBase(bool value) const { kdatepicker_showevent_isbase = value; }
    inline void setKDatePicker_HideEvent_IsBase(bool value) const { kdatepicker_hideevent_isbase = value; }
    inline void setKDatePicker_NativeEvent_IsBase(bool value) const { kdatepicker_nativeevent_isbase = value; }
    inline void setKDatePicker_Metric_IsBase(bool value) const { kdatepicker_metric_isbase = value; }
    inline void setKDatePicker_InitPainter_IsBase(bool value) const { kdatepicker_initpainter_isbase = value; }
    inline void setKDatePicker_Redirected_IsBase(bool value) const { kdatepicker_redirected_isbase = value; }
    inline void setKDatePicker_SharedPainter_IsBase(bool value) const { kdatepicker_sharedpainter_isbase = value; }
    inline void setKDatePicker_InputMethodEvent_IsBase(bool value) const { kdatepicker_inputmethodevent_isbase = value; }
    inline void setKDatePicker_InputMethodQuery_IsBase(bool value) const { kdatepicker_inputmethodquery_isbase = value; }
    inline void setKDatePicker_FocusNextPrevChild_IsBase(bool value) const { kdatepicker_focusnextprevchild_isbase = value; }
    inline void setKDatePicker_TimerEvent_IsBase(bool value) const { kdatepicker_timerevent_isbase = value; }
    inline void setKDatePicker_ChildEvent_IsBase(bool value) const { kdatepicker_childevent_isbase = value; }
    inline void setKDatePicker_CustomEvent_IsBase(bool value) const { kdatepicker_customevent_isbase = value; }
    inline void setKDatePicker_ConnectNotify_IsBase(bool value) const { kdatepicker_connectnotify_isbase = value; }
    inline void setKDatePicker_DisconnectNotify_IsBase(bool value) const { kdatepicker_disconnectnotify_isbase = value; }
    inline void setKDatePicker_DateChangedSlot_IsBase(bool value) const { kdatepicker_datechangedslot_isbase = value; }
    inline void setKDatePicker_TableClickedSlot_IsBase(bool value) const { kdatepicker_tableclickedslot_isbase = value; }
    inline void setKDatePicker_MonthForwardClicked_IsBase(bool value) const { kdatepicker_monthforwardclicked_isbase = value; }
    inline void setKDatePicker_MonthBackwardClicked_IsBase(bool value) const { kdatepicker_monthbackwardclicked_isbase = value; }
    inline void setKDatePicker_YearForwardClicked_IsBase(bool value) const { kdatepicker_yearforwardclicked_isbase = value; }
    inline void setKDatePicker_YearBackwardClicked_IsBase(bool value) const { kdatepicker_yearbackwardclicked_isbase = value; }
    inline void setKDatePicker_SelectMonthClicked_IsBase(bool value) const { kdatepicker_selectmonthclicked_isbase = value; }
    inline void setKDatePicker_SelectYearClicked_IsBase(bool value) const { kdatepicker_selectyearclicked_isbase = value; }
    inline void setKDatePicker_UncheckYearSelector_IsBase(bool value) const { kdatepicker_uncheckyearselector_isbase = value; }
    inline void setKDatePicker_LineEnterPressed_IsBase(bool value) const { kdatepicker_lineenterpressed_isbase = value; }
    inline void setKDatePicker_TodayButtonClicked_IsBase(bool value) const { kdatepicker_todaybuttonclicked_isbase = value; }
    inline void setKDatePicker_WeekSelected_IsBase(bool value) const { kdatepicker_weekselected_isbase = value; }
    inline void setKDatePicker_DrawFrame_IsBase(bool value) const { kdatepicker_drawframe_isbase = value; }
    inline void setKDatePicker_UpdateMicroFocus_IsBase(bool value) const { kdatepicker_updatemicrofocus_isbase = value; }
    inline void setKDatePicker_Create_IsBase(bool value) const { kdatepicker_create_isbase = value; }
    inline void setKDatePicker_Destroy_IsBase(bool value) const { kdatepicker_destroy_isbase = value; }
    inline void setKDatePicker_FocusNextChild_IsBase(bool value) const { kdatepicker_focusnextchild_isbase = value; }
    inline void setKDatePicker_FocusPreviousChild_IsBase(bool value) const { kdatepicker_focuspreviouschild_isbase = value; }
    inline void setKDatePicker_Sender_IsBase(bool value) const { kdatepicker_sender_isbase = value; }
    inline void setKDatePicker_SenderSignalIndex_IsBase(bool value) const { kdatepicker_sendersignalindex_isbase = value; }
    inline void setKDatePicker_Receivers_IsBase(bool value) const { kdatepicker_receivers_isbase = value; }
    inline void setKDatePicker_IsSignalConnected_IsBase(bool value) const { kdatepicker_issignalconnected_isbase = value; }
    inline void setKDatePicker_GetDecodedMetricF_IsBase(bool value) const { kdatepicker_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdatepicker_metacall_isbase) {
            kdatepicker_metacall_isbase = false;
            return KDatePicker::qt_metacall(param1, param2, param3);
        } else if (kdatepicker_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kdatepicker_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KDatePicker::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kdatepicker_sizehint_isbase) {
            kdatepicker_sizehint_isbase = false;
            return KDatePicker::sizeHint();
        } else if (kdatepicker_sizehint_callback != nullptr) {
            QSize* callback_ret = kdatepicker_sizehint_callback();
            return *callback_ret;
        } else {
            return KDatePicker::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* o, QEvent* e) override {
        if (kdatepicker_eventfilter_isbase) {
            kdatepicker_eventfilter_isbase = false;
            return KDatePicker::eventFilter(o, e);
        } else if (kdatepicker_eventfilter_callback != nullptr) {
            QObject* cbval1 = o;
            QEvent* cbval2 = e;

            bool callback_ret = kdatepicker_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KDatePicker::eventFilter(o, e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kdatepicker_resizeevent_isbase) {
            kdatepicker_resizeevent_isbase = false;
            KDatePicker::resizeEvent(param1);
        } else if (kdatepicker_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            kdatepicker_resizeevent_callback(this, cbval1);
        } else {
            KDatePicker::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (kdatepicker_changeevent_isbase) {
            kdatepicker_changeevent_isbase = false;
            KDatePicker::changeEvent(event);
        } else if (kdatepicker_changeevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kdatepicker_changeevent_callback(this, cbval1);
        } else {
            KDatePicker::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kdatepicker_event_isbase) {
            kdatepicker_event_isbase = false;
            return KDatePicker::event(e);
        } else if (kdatepicker_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = kdatepicker_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDatePicker::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kdatepicker_paintevent_isbase) {
            kdatepicker_paintevent_isbase = false;
            KDatePicker::paintEvent(param1);
        } else if (kdatepicker_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            kdatepicker_paintevent_callback(this, cbval1);
        } else {
            KDatePicker::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kdatepicker_initstyleoption_isbase) {
            kdatepicker_initstyleoption_isbase = false;
            KDatePicker::initStyleOption(option);
        } else if (kdatepicker_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            kdatepicker_initstyleoption_callback(this, cbval1);
        } else {
            KDatePicker::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kdatepicker_devtype_isbase) {
            kdatepicker_devtype_isbase = false;
            return KDatePicker::devType();
        } else if (kdatepicker_devtype_callback != nullptr) {
            int callback_ret = kdatepicker_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KDatePicker::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kdatepicker_setvisible_isbase) {
            kdatepicker_setvisible_isbase = false;
            KDatePicker::setVisible(visible);
        } else if (kdatepicker_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kdatepicker_setvisible_callback(this, cbval1);
        } else {
            KDatePicker::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kdatepicker_minimumsizehint_isbase) {
            kdatepicker_minimumsizehint_isbase = false;
            return KDatePicker::minimumSizeHint();
        } else if (kdatepicker_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kdatepicker_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KDatePicker::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kdatepicker_heightforwidth_isbase) {
            kdatepicker_heightforwidth_isbase = false;
            return KDatePicker::heightForWidth(param1);
        } else if (kdatepicker_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kdatepicker_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDatePicker::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kdatepicker_hasheightforwidth_isbase) {
            kdatepicker_hasheightforwidth_isbase = false;
            return KDatePicker::hasHeightForWidth();
        } else if (kdatepicker_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kdatepicker_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KDatePicker::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kdatepicker_paintengine_isbase) {
            kdatepicker_paintengine_isbase = false;
            return KDatePicker::paintEngine();
        } else if (kdatepicker_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kdatepicker_paintengine_callback();
            return callback_ret;
        } else {
            return KDatePicker::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kdatepicker_mousepressevent_isbase) {
            kdatepicker_mousepressevent_isbase = false;
            KDatePicker::mousePressEvent(event);
        } else if (kdatepicker_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kdatepicker_mousepressevent_callback(this, cbval1);
        } else {
            KDatePicker::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kdatepicker_mousereleaseevent_isbase) {
            kdatepicker_mousereleaseevent_isbase = false;
            KDatePicker::mouseReleaseEvent(event);
        } else if (kdatepicker_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kdatepicker_mousereleaseevent_callback(this, cbval1);
        } else {
            KDatePicker::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kdatepicker_mousedoubleclickevent_isbase) {
            kdatepicker_mousedoubleclickevent_isbase = false;
            KDatePicker::mouseDoubleClickEvent(event);
        } else if (kdatepicker_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kdatepicker_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KDatePicker::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kdatepicker_mousemoveevent_isbase) {
            kdatepicker_mousemoveevent_isbase = false;
            KDatePicker::mouseMoveEvent(event);
        } else if (kdatepicker_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kdatepicker_mousemoveevent_callback(this, cbval1);
        } else {
            KDatePicker::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kdatepicker_wheelevent_isbase) {
            kdatepicker_wheelevent_isbase = false;
            KDatePicker::wheelEvent(event);
        } else if (kdatepicker_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kdatepicker_wheelevent_callback(this, cbval1);
        } else {
            KDatePicker::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kdatepicker_keypressevent_isbase) {
            kdatepicker_keypressevent_isbase = false;
            KDatePicker::keyPressEvent(event);
        } else if (kdatepicker_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kdatepicker_keypressevent_callback(this, cbval1);
        } else {
            KDatePicker::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kdatepicker_keyreleaseevent_isbase) {
            kdatepicker_keyreleaseevent_isbase = false;
            KDatePicker::keyReleaseEvent(event);
        } else if (kdatepicker_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kdatepicker_keyreleaseevent_callback(this, cbval1);
        } else {
            KDatePicker::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kdatepicker_focusinevent_isbase) {
            kdatepicker_focusinevent_isbase = false;
            KDatePicker::focusInEvent(event);
        } else if (kdatepicker_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kdatepicker_focusinevent_callback(this, cbval1);
        } else {
            KDatePicker::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kdatepicker_focusoutevent_isbase) {
            kdatepicker_focusoutevent_isbase = false;
            KDatePicker::focusOutEvent(event);
        } else if (kdatepicker_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kdatepicker_focusoutevent_callback(this, cbval1);
        } else {
            KDatePicker::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kdatepicker_enterevent_isbase) {
            kdatepicker_enterevent_isbase = false;
            KDatePicker::enterEvent(event);
        } else if (kdatepicker_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kdatepicker_enterevent_callback(this, cbval1);
        } else {
            KDatePicker::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kdatepicker_leaveevent_isbase) {
            kdatepicker_leaveevent_isbase = false;
            KDatePicker::leaveEvent(event);
        } else if (kdatepicker_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kdatepicker_leaveevent_callback(this, cbval1);
        } else {
            KDatePicker::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kdatepicker_moveevent_isbase) {
            kdatepicker_moveevent_isbase = false;
            KDatePicker::moveEvent(event);
        } else if (kdatepicker_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kdatepicker_moveevent_callback(this, cbval1);
        } else {
            KDatePicker::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kdatepicker_closeevent_isbase) {
            kdatepicker_closeevent_isbase = false;
            KDatePicker::closeEvent(event);
        } else if (kdatepicker_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kdatepicker_closeevent_callback(this, cbval1);
        } else {
            KDatePicker::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kdatepicker_contextmenuevent_isbase) {
            kdatepicker_contextmenuevent_isbase = false;
            KDatePicker::contextMenuEvent(event);
        } else if (kdatepicker_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kdatepicker_contextmenuevent_callback(this, cbval1);
        } else {
            KDatePicker::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kdatepicker_tabletevent_isbase) {
            kdatepicker_tabletevent_isbase = false;
            KDatePicker::tabletEvent(event);
        } else if (kdatepicker_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kdatepicker_tabletevent_callback(this, cbval1);
        } else {
            KDatePicker::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kdatepicker_actionevent_isbase) {
            kdatepicker_actionevent_isbase = false;
            KDatePicker::actionEvent(event);
        } else if (kdatepicker_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kdatepicker_actionevent_callback(this, cbval1);
        } else {
            KDatePicker::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kdatepicker_dragenterevent_isbase) {
            kdatepicker_dragenterevent_isbase = false;
            KDatePicker::dragEnterEvent(event);
        } else if (kdatepicker_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kdatepicker_dragenterevent_callback(this, cbval1);
        } else {
            KDatePicker::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kdatepicker_dragmoveevent_isbase) {
            kdatepicker_dragmoveevent_isbase = false;
            KDatePicker::dragMoveEvent(event);
        } else if (kdatepicker_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kdatepicker_dragmoveevent_callback(this, cbval1);
        } else {
            KDatePicker::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kdatepicker_dragleaveevent_isbase) {
            kdatepicker_dragleaveevent_isbase = false;
            KDatePicker::dragLeaveEvent(event);
        } else if (kdatepicker_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kdatepicker_dragleaveevent_callback(this, cbval1);
        } else {
            KDatePicker::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kdatepicker_dropevent_isbase) {
            kdatepicker_dropevent_isbase = false;
            KDatePicker::dropEvent(event);
        } else if (kdatepicker_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kdatepicker_dropevent_callback(this, cbval1);
        } else {
            KDatePicker::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kdatepicker_showevent_isbase) {
            kdatepicker_showevent_isbase = false;
            KDatePicker::showEvent(event);
        } else if (kdatepicker_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kdatepicker_showevent_callback(this, cbval1);
        } else {
            KDatePicker::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kdatepicker_hideevent_isbase) {
            kdatepicker_hideevent_isbase = false;
            KDatePicker::hideEvent(event);
        } else if (kdatepicker_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kdatepicker_hideevent_callback(this, cbval1);
        } else {
            KDatePicker::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kdatepicker_nativeevent_isbase) {
            kdatepicker_nativeevent_isbase = false;
            return KDatePicker::nativeEvent(eventType, message, result);
        } else if (kdatepicker_nativeevent_callback != nullptr) {
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

            bool callback_ret = kdatepicker_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KDatePicker::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kdatepicker_metric_isbase) {
            kdatepicker_metric_isbase = false;
            return KDatePicker::metric(param1);
        } else if (kdatepicker_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kdatepicker_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDatePicker::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kdatepicker_initpainter_isbase) {
            kdatepicker_initpainter_isbase = false;
            KDatePicker::initPainter(painter);
        } else if (kdatepicker_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kdatepicker_initpainter_callback(this, cbval1);
        } else {
            KDatePicker::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kdatepicker_redirected_isbase) {
            kdatepicker_redirected_isbase = false;
            return KDatePicker::redirected(offset);
        } else if (kdatepicker_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kdatepicker_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDatePicker::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kdatepicker_sharedpainter_isbase) {
            kdatepicker_sharedpainter_isbase = false;
            return KDatePicker::sharedPainter();
        } else if (kdatepicker_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kdatepicker_sharedpainter_callback();
            return callback_ret;
        } else {
            return KDatePicker::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kdatepicker_inputmethodevent_isbase) {
            kdatepicker_inputmethodevent_isbase = false;
            KDatePicker::inputMethodEvent(param1);
        } else if (kdatepicker_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kdatepicker_inputmethodevent_callback(this, cbval1);
        } else {
            KDatePicker::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kdatepicker_inputmethodquery_isbase) {
            kdatepicker_inputmethodquery_isbase = false;
            return KDatePicker::inputMethodQuery(param1);
        } else if (kdatepicker_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kdatepicker_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KDatePicker::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kdatepicker_focusnextprevchild_isbase) {
            kdatepicker_focusnextprevchild_isbase = false;
            return KDatePicker::focusNextPrevChild(next);
        } else if (kdatepicker_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kdatepicker_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDatePicker::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdatepicker_timerevent_isbase) {
            kdatepicker_timerevent_isbase = false;
            KDatePicker::timerEvent(event);
        } else if (kdatepicker_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kdatepicker_timerevent_callback(this, cbval1);
        } else {
            KDatePicker::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdatepicker_childevent_isbase) {
            kdatepicker_childevent_isbase = false;
            KDatePicker::childEvent(event);
        } else if (kdatepicker_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kdatepicker_childevent_callback(this, cbval1);
        } else {
            KDatePicker::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdatepicker_customevent_isbase) {
            kdatepicker_customevent_isbase = false;
            KDatePicker::customEvent(event);
        } else if (kdatepicker_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kdatepicker_customevent_callback(this, cbval1);
        } else {
            KDatePicker::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdatepicker_connectnotify_isbase) {
            kdatepicker_connectnotify_isbase = false;
            KDatePicker::connectNotify(signal);
        } else if (kdatepicker_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdatepicker_connectnotify_callback(this, cbval1);
        } else {
            KDatePicker::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdatepicker_disconnectnotify_isbase) {
            kdatepicker_disconnectnotify_isbase = false;
            KDatePicker::disconnectNotify(signal);
        } else if (kdatepicker_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdatepicker_disconnectnotify_callback(this, cbval1);
        } else {
            KDatePicker::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void dateChangedSlot(const QDate& date) {
        if (kdatepicker_datechangedslot_isbase) {
            kdatepicker_datechangedslot_isbase = false;
            KDatePicker::dateChangedSlot(date);
        } else if (kdatepicker_datechangedslot_callback != nullptr) {
            const QDate& date_ret = date;
            // Cast returned reference into pointer
            QDate* cbval1 = const_cast<QDate*>(&date_ret);

            kdatepicker_datechangedslot_callback(this, cbval1);
        } else {
            KDatePicker::dateChangedSlot(date);
        }
    }

    // Virtual method for C ABI access and custom callback
    void tableClickedSlot() {
        if (kdatepicker_tableclickedslot_isbase) {
            kdatepicker_tableclickedslot_isbase = false;
            KDatePicker::tableClickedSlot();
        } else if (kdatepicker_tableclickedslot_callback != nullptr) {
            kdatepicker_tableclickedslot_callback();
        } else {
            KDatePicker::tableClickedSlot();
        }
    }

    // Virtual method for C ABI access and custom callback
    void monthForwardClicked() {
        if (kdatepicker_monthforwardclicked_isbase) {
            kdatepicker_monthforwardclicked_isbase = false;
            KDatePicker::monthForwardClicked();
        } else if (kdatepicker_monthforwardclicked_callback != nullptr) {
            kdatepicker_monthforwardclicked_callback();
        } else {
            KDatePicker::monthForwardClicked();
        }
    }

    // Virtual method for C ABI access and custom callback
    void monthBackwardClicked() {
        if (kdatepicker_monthbackwardclicked_isbase) {
            kdatepicker_monthbackwardclicked_isbase = false;
            KDatePicker::monthBackwardClicked();
        } else if (kdatepicker_monthbackwardclicked_callback != nullptr) {
            kdatepicker_monthbackwardclicked_callback();
        } else {
            KDatePicker::monthBackwardClicked();
        }
    }

    // Virtual method for C ABI access and custom callback
    void yearForwardClicked() {
        if (kdatepicker_yearforwardclicked_isbase) {
            kdatepicker_yearforwardclicked_isbase = false;
            KDatePicker::yearForwardClicked();
        } else if (kdatepicker_yearforwardclicked_callback != nullptr) {
            kdatepicker_yearforwardclicked_callback();
        } else {
            KDatePicker::yearForwardClicked();
        }
    }

    // Virtual method for C ABI access and custom callback
    void yearBackwardClicked() {
        if (kdatepicker_yearbackwardclicked_isbase) {
            kdatepicker_yearbackwardclicked_isbase = false;
            KDatePicker::yearBackwardClicked();
        } else if (kdatepicker_yearbackwardclicked_callback != nullptr) {
            kdatepicker_yearbackwardclicked_callback();
        } else {
            KDatePicker::yearBackwardClicked();
        }
    }

    // Virtual method for C ABI access and custom callback
    void selectMonthClicked() {
        if (kdatepicker_selectmonthclicked_isbase) {
            kdatepicker_selectmonthclicked_isbase = false;
            KDatePicker::selectMonthClicked();
        } else if (kdatepicker_selectmonthclicked_callback != nullptr) {
            kdatepicker_selectmonthclicked_callback();
        } else {
            KDatePicker::selectMonthClicked();
        }
    }

    // Virtual method for C ABI access and custom callback
    void selectYearClicked() {
        if (kdatepicker_selectyearclicked_isbase) {
            kdatepicker_selectyearclicked_isbase = false;
            KDatePicker::selectYearClicked();
        } else if (kdatepicker_selectyearclicked_callback != nullptr) {
            kdatepicker_selectyearclicked_callback();
        } else {
            KDatePicker::selectYearClicked();
        }
    }

    // Virtual method for C ABI access and custom callback
    void uncheckYearSelector() {
        if (kdatepicker_uncheckyearselector_isbase) {
            kdatepicker_uncheckyearselector_isbase = false;
            KDatePicker::uncheckYearSelector();
        } else if (kdatepicker_uncheckyearselector_callback != nullptr) {
            kdatepicker_uncheckyearselector_callback();
        } else {
            KDatePicker::uncheckYearSelector();
        }
    }

    // Virtual method for C ABI access and custom callback
    void lineEnterPressed() {
        if (kdatepicker_lineenterpressed_isbase) {
            kdatepicker_lineenterpressed_isbase = false;
            KDatePicker::lineEnterPressed();
        } else if (kdatepicker_lineenterpressed_callback != nullptr) {
            kdatepicker_lineenterpressed_callback();
        } else {
            KDatePicker::lineEnterPressed();
        }
    }

    // Virtual method for C ABI access and custom callback
    void todayButtonClicked() {
        if (kdatepicker_todaybuttonclicked_isbase) {
            kdatepicker_todaybuttonclicked_isbase = false;
            KDatePicker::todayButtonClicked();
        } else if (kdatepicker_todaybuttonclicked_callback != nullptr) {
            kdatepicker_todaybuttonclicked_callback();
        } else {
            KDatePicker::todayButtonClicked();
        }
    }

    // Virtual method for C ABI access and custom callback
    void weekSelected(int param1) {
        if (kdatepicker_weekselected_isbase) {
            kdatepicker_weekselected_isbase = false;
            KDatePicker::weekSelected(param1);
        } else if (kdatepicker_weekselected_callback != nullptr) {
            int cbval1 = param1;

            kdatepicker_weekselected_callback(this, cbval1);
        } else {
            KDatePicker::weekSelected(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (kdatepicker_drawframe_isbase) {
            kdatepicker_drawframe_isbase = false;
            KDatePicker::drawFrame(param1);
        } else if (kdatepicker_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            kdatepicker_drawframe_callback(this, cbval1);
        } else {
            KDatePicker::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kdatepicker_updatemicrofocus_isbase) {
            kdatepicker_updatemicrofocus_isbase = false;
            KDatePicker::updateMicroFocus();
        } else if (kdatepicker_updatemicrofocus_callback != nullptr) {
            kdatepicker_updatemicrofocus_callback();
        } else {
            KDatePicker::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kdatepicker_create_isbase) {
            kdatepicker_create_isbase = false;
            KDatePicker::create();
        } else if (kdatepicker_create_callback != nullptr) {
            kdatepicker_create_callback();
        } else {
            KDatePicker::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kdatepicker_destroy_isbase) {
            kdatepicker_destroy_isbase = false;
            KDatePicker::destroy();
        } else if (kdatepicker_destroy_callback != nullptr) {
            kdatepicker_destroy_callback();
        } else {
            KDatePicker::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kdatepicker_focusnextchild_isbase) {
            kdatepicker_focusnextchild_isbase = false;
            return KDatePicker::focusNextChild();
        } else if (kdatepicker_focusnextchild_callback != nullptr) {
            bool callback_ret = kdatepicker_focusnextchild_callback();
            return callback_ret;
        } else {
            return KDatePicker::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kdatepicker_focuspreviouschild_isbase) {
            kdatepicker_focuspreviouschild_isbase = false;
            return KDatePicker::focusPreviousChild();
        } else if (kdatepicker_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kdatepicker_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KDatePicker::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kdatepicker_sender_isbase) {
            kdatepicker_sender_isbase = false;
            return KDatePicker::sender();
        } else if (kdatepicker_sender_callback != nullptr) {
            QObject* callback_ret = kdatepicker_sender_callback();
            return callback_ret;
        } else {
            return KDatePicker::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kdatepicker_sendersignalindex_isbase) {
            kdatepicker_sendersignalindex_isbase = false;
            return KDatePicker::senderSignalIndex();
        } else if (kdatepicker_sendersignalindex_callback != nullptr) {
            int callback_ret = kdatepicker_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KDatePicker::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kdatepicker_receivers_isbase) {
            kdatepicker_receivers_isbase = false;
            return KDatePicker::receivers(signal);
        } else if (kdatepicker_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kdatepicker_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDatePicker::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kdatepicker_issignalconnected_isbase) {
            kdatepicker_issignalconnected_isbase = false;
            return KDatePicker::isSignalConnected(signal);
        } else if (kdatepicker_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kdatepicker_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDatePicker::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kdatepicker_getdecodedmetricf_isbase) {
            kdatepicker_getdecodedmetricf_isbase = false;
            return KDatePicker::getDecodedMetricF(metricA, metricB);
        } else if (kdatepicker_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kdatepicker_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KDatePicker::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KDatePicker_EventFilter(KDatePicker* self, QObject* o, QEvent* e);
    friend bool KDatePicker_QBaseEventFilter(KDatePicker* self, QObject* o, QEvent* e);
    friend void KDatePicker_ResizeEvent(KDatePicker* self, QResizeEvent* param1);
    friend void KDatePicker_QBaseResizeEvent(KDatePicker* self, QResizeEvent* param1);
    friend void KDatePicker_ChangeEvent(KDatePicker* self, QEvent* event);
    friend void KDatePicker_QBaseChangeEvent(KDatePicker* self, QEvent* event);
    friend bool KDatePicker_Event(KDatePicker* self, QEvent* e);
    friend bool KDatePicker_QBaseEvent(KDatePicker* self, QEvent* e);
    friend void KDatePicker_PaintEvent(KDatePicker* self, QPaintEvent* param1);
    friend void KDatePicker_QBasePaintEvent(KDatePicker* self, QPaintEvent* param1);
    friend void KDatePicker_InitStyleOption(const KDatePicker* self, QStyleOptionFrame* option);
    friend void KDatePicker_QBaseInitStyleOption(const KDatePicker* self, QStyleOptionFrame* option);
    friend void KDatePicker_MousePressEvent(KDatePicker* self, QMouseEvent* event);
    friend void KDatePicker_QBaseMousePressEvent(KDatePicker* self, QMouseEvent* event);
    friend void KDatePicker_MouseReleaseEvent(KDatePicker* self, QMouseEvent* event);
    friend void KDatePicker_QBaseMouseReleaseEvent(KDatePicker* self, QMouseEvent* event);
    friend void KDatePicker_MouseDoubleClickEvent(KDatePicker* self, QMouseEvent* event);
    friend void KDatePicker_QBaseMouseDoubleClickEvent(KDatePicker* self, QMouseEvent* event);
    friend void KDatePicker_MouseMoveEvent(KDatePicker* self, QMouseEvent* event);
    friend void KDatePicker_QBaseMouseMoveEvent(KDatePicker* self, QMouseEvent* event);
    friend void KDatePicker_WheelEvent(KDatePicker* self, QWheelEvent* event);
    friend void KDatePicker_QBaseWheelEvent(KDatePicker* self, QWheelEvent* event);
    friend void KDatePicker_KeyPressEvent(KDatePicker* self, QKeyEvent* event);
    friend void KDatePicker_QBaseKeyPressEvent(KDatePicker* self, QKeyEvent* event);
    friend void KDatePicker_KeyReleaseEvent(KDatePicker* self, QKeyEvent* event);
    friend void KDatePicker_QBaseKeyReleaseEvent(KDatePicker* self, QKeyEvent* event);
    friend void KDatePicker_FocusInEvent(KDatePicker* self, QFocusEvent* event);
    friend void KDatePicker_QBaseFocusInEvent(KDatePicker* self, QFocusEvent* event);
    friend void KDatePicker_FocusOutEvent(KDatePicker* self, QFocusEvent* event);
    friend void KDatePicker_QBaseFocusOutEvent(KDatePicker* self, QFocusEvent* event);
    friend void KDatePicker_EnterEvent(KDatePicker* self, QEnterEvent* event);
    friend void KDatePicker_QBaseEnterEvent(KDatePicker* self, QEnterEvent* event);
    friend void KDatePicker_LeaveEvent(KDatePicker* self, QEvent* event);
    friend void KDatePicker_QBaseLeaveEvent(KDatePicker* self, QEvent* event);
    friend void KDatePicker_MoveEvent(KDatePicker* self, QMoveEvent* event);
    friend void KDatePicker_QBaseMoveEvent(KDatePicker* self, QMoveEvent* event);
    friend void KDatePicker_CloseEvent(KDatePicker* self, QCloseEvent* event);
    friend void KDatePicker_QBaseCloseEvent(KDatePicker* self, QCloseEvent* event);
    friend void KDatePicker_ContextMenuEvent(KDatePicker* self, QContextMenuEvent* event);
    friend void KDatePicker_QBaseContextMenuEvent(KDatePicker* self, QContextMenuEvent* event);
    friend void KDatePicker_TabletEvent(KDatePicker* self, QTabletEvent* event);
    friend void KDatePicker_QBaseTabletEvent(KDatePicker* self, QTabletEvent* event);
    friend void KDatePicker_ActionEvent(KDatePicker* self, QActionEvent* event);
    friend void KDatePicker_QBaseActionEvent(KDatePicker* self, QActionEvent* event);
    friend void KDatePicker_DragEnterEvent(KDatePicker* self, QDragEnterEvent* event);
    friend void KDatePicker_QBaseDragEnterEvent(KDatePicker* self, QDragEnterEvent* event);
    friend void KDatePicker_DragMoveEvent(KDatePicker* self, QDragMoveEvent* event);
    friend void KDatePicker_QBaseDragMoveEvent(KDatePicker* self, QDragMoveEvent* event);
    friend void KDatePicker_DragLeaveEvent(KDatePicker* self, QDragLeaveEvent* event);
    friend void KDatePicker_QBaseDragLeaveEvent(KDatePicker* self, QDragLeaveEvent* event);
    friend void KDatePicker_DropEvent(KDatePicker* self, QDropEvent* event);
    friend void KDatePicker_QBaseDropEvent(KDatePicker* self, QDropEvent* event);
    friend void KDatePicker_ShowEvent(KDatePicker* self, QShowEvent* event);
    friend void KDatePicker_QBaseShowEvent(KDatePicker* self, QShowEvent* event);
    friend void KDatePicker_HideEvent(KDatePicker* self, QHideEvent* event);
    friend void KDatePicker_QBaseHideEvent(KDatePicker* self, QHideEvent* event);
    friend bool KDatePicker_NativeEvent(KDatePicker* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KDatePicker_QBaseNativeEvent(KDatePicker* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KDatePicker_Metric(const KDatePicker* self, int param1);
    friend int KDatePicker_QBaseMetric(const KDatePicker* self, int param1);
    friend void KDatePicker_InitPainter(const KDatePicker* self, QPainter* painter);
    friend void KDatePicker_QBaseInitPainter(const KDatePicker* self, QPainter* painter);
    friend QPaintDevice* KDatePicker_Redirected(const KDatePicker* self, QPoint* offset);
    friend QPaintDevice* KDatePicker_QBaseRedirected(const KDatePicker* self, QPoint* offset);
    friend QPainter* KDatePicker_SharedPainter(const KDatePicker* self);
    friend QPainter* KDatePicker_QBaseSharedPainter(const KDatePicker* self);
    friend void KDatePicker_InputMethodEvent(KDatePicker* self, QInputMethodEvent* param1);
    friend void KDatePicker_QBaseInputMethodEvent(KDatePicker* self, QInputMethodEvent* param1);
    friend bool KDatePicker_FocusNextPrevChild(KDatePicker* self, bool next);
    friend bool KDatePicker_QBaseFocusNextPrevChild(KDatePicker* self, bool next);
    friend void KDatePicker_TimerEvent(KDatePicker* self, QTimerEvent* event);
    friend void KDatePicker_QBaseTimerEvent(KDatePicker* self, QTimerEvent* event);
    friend void KDatePicker_ChildEvent(KDatePicker* self, QChildEvent* event);
    friend void KDatePicker_QBaseChildEvent(KDatePicker* self, QChildEvent* event);
    friend void KDatePicker_CustomEvent(KDatePicker* self, QEvent* event);
    friend void KDatePicker_QBaseCustomEvent(KDatePicker* self, QEvent* event);
    friend void KDatePicker_ConnectNotify(KDatePicker* self, const QMetaMethod* signal);
    friend void KDatePicker_QBaseConnectNotify(KDatePicker* self, const QMetaMethod* signal);
    friend void KDatePicker_DisconnectNotify(KDatePicker* self, const QMetaMethod* signal);
    friend void KDatePicker_QBaseDisconnectNotify(KDatePicker* self, const QMetaMethod* signal);
    friend void KDatePicker_DateChangedSlot(KDatePicker* self, const QDate* date);
    friend void KDatePicker_QBaseDateChangedSlot(KDatePicker* self, const QDate* date);
    friend void KDatePicker_TableClickedSlot(KDatePicker* self);
    friend void KDatePicker_QBaseTableClickedSlot(KDatePicker* self);
    friend void KDatePicker_MonthForwardClicked(KDatePicker* self);
    friend void KDatePicker_QBaseMonthForwardClicked(KDatePicker* self);
    friend void KDatePicker_MonthBackwardClicked(KDatePicker* self);
    friend void KDatePicker_QBaseMonthBackwardClicked(KDatePicker* self);
    friend void KDatePicker_YearForwardClicked(KDatePicker* self);
    friend void KDatePicker_QBaseYearForwardClicked(KDatePicker* self);
    friend void KDatePicker_YearBackwardClicked(KDatePicker* self);
    friend void KDatePicker_QBaseYearBackwardClicked(KDatePicker* self);
    friend void KDatePicker_SelectMonthClicked(KDatePicker* self);
    friend void KDatePicker_QBaseSelectMonthClicked(KDatePicker* self);
    friend void KDatePicker_SelectYearClicked(KDatePicker* self);
    friend void KDatePicker_QBaseSelectYearClicked(KDatePicker* self);
    friend void KDatePicker_UncheckYearSelector(KDatePicker* self);
    friend void KDatePicker_QBaseUncheckYearSelector(KDatePicker* self);
    friend void KDatePicker_LineEnterPressed(KDatePicker* self);
    friend void KDatePicker_QBaseLineEnterPressed(KDatePicker* self);
    friend void KDatePicker_TodayButtonClicked(KDatePicker* self);
    friend void KDatePicker_QBaseTodayButtonClicked(KDatePicker* self);
    friend void KDatePicker_WeekSelected(KDatePicker* self, int param1);
    friend void KDatePicker_QBaseWeekSelected(KDatePicker* self, int param1);
    friend void KDatePicker_DrawFrame(KDatePicker* self, QPainter* param1);
    friend void KDatePicker_QBaseDrawFrame(KDatePicker* self, QPainter* param1);
    friend void KDatePicker_UpdateMicroFocus(KDatePicker* self);
    friend void KDatePicker_QBaseUpdateMicroFocus(KDatePicker* self);
    friend void KDatePicker_Create(KDatePicker* self);
    friend void KDatePicker_QBaseCreate(KDatePicker* self);
    friend void KDatePicker_Destroy(KDatePicker* self);
    friend void KDatePicker_QBaseDestroy(KDatePicker* self);
    friend bool KDatePicker_FocusNextChild(KDatePicker* self);
    friend bool KDatePicker_QBaseFocusNextChild(KDatePicker* self);
    friend bool KDatePicker_FocusPreviousChild(KDatePicker* self);
    friend bool KDatePicker_QBaseFocusPreviousChild(KDatePicker* self);
    friend QObject* KDatePicker_Sender(const KDatePicker* self);
    friend QObject* KDatePicker_QBaseSender(const KDatePicker* self);
    friend int KDatePicker_SenderSignalIndex(const KDatePicker* self);
    friend int KDatePicker_QBaseSenderSignalIndex(const KDatePicker* self);
    friend int KDatePicker_Receivers(const KDatePicker* self, const char* signal);
    friend int KDatePicker_QBaseReceivers(const KDatePicker* self, const char* signal);
    friend bool KDatePicker_IsSignalConnected(const KDatePicker* self, const QMetaMethod* signal);
    friend bool KDatePicker_QBaseIsSignalConnected(const KDatePicker* self, const QMetaMethod* signal);
    friend double KDatePicker_GetDecodedMetricF(const KDatePicker* self, int metricA, int metricB);
    friend double KDatePicker_QBaseGetDecodedMetricF(const KDatePicker* self, int metricA, int metricB);
};

#endif
