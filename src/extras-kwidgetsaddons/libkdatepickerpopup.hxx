#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKDATEPICKERPOPUP_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKDATEPICKERPOPUP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDatePickerPopup so that we can call protected methods
class VirtualKDatePickerPopup final : public KDatePickerPopup {

  public:
    // Virtual class boolean flag
    bool isVirtualKDatePickerPopup = true;

    // Virtual class public types (including callbacks)
    using KDatePickerPopup_Metacall_Callback = int (*)(KDatePickerPopup*, int, int, void**);
    using KDatePickerPopup_SizeHint_Callback = QSize* (*)();
    using KDatePickerPopup_ChangeEvent_Callback = void (*)(KDatePickerPopup*, QEvent*);
    using KDatePickerPopup_KeyPressEvent_Callback = void (*)(KDatePickerPopup*, QKeyEvent*);
    using KDatePickerPopup_MouseReleaseEvent_Callback = void (*)(KDatePickerPopup*, QMouseEvent*);
    using KDatePickerPopup_MousePressEvent_Callback = void (*)(KDatePickerPopup*, QMouseEvent*);
    using KDatePickerPopup_MouseMoveEvent_Callback = void (*)(KDatePickerPopup*, QMouseEvent*);
    using KDatePickerPopup_WheelEvent_Callback = void (*)(KDatePickerPopup*, QWheelEvent*);
    using KDatePickerPopup_EnterEvent_Callback = void (*)(KDatePickerPopup*, QEnterEvent*);
    using KDatePickerPopup_LeaveEvent_Callback = void (*)(KDatePickerPopup*, QEvent*);
    using KDatePickerPopup_HideEvent_Callback = void (*)(KDatePickerPopup*, QHideEvent*);
    using KDatePickerPopup_PaintEvent_Callback = void (*)(KDatePickerPopup*, QPaintEvent*);
    using KDatePickerPopup_ActionEvent_Callback = void (*)(KDatePickerPopup*, QActionEvent*);
    using KDatePickerPopup_TimerEvent_Callback = void (*)(KDatePickerPopup*, QTimerEvent*);
    using KDatePickerPopup_Event_Callback = bool (*)(KDatePickerPopup*, QEvent*);
    using KDatePickerPopup_FocusNextPrevChild_Callback = bool (*)(KDatePickerPopup*, bool);
    using KDatePickerPopup_InitStyleOption_Callback = void (*)(const KDatePickerPopup*, QStyleOptionMenuItem*, QAction*);
    using KDatePickerPopup_DevType_Callback = int (*)();
    using KDatePickerPopup_SetVisible_Callback = void (*)(KDatePickerPopup*, bool);
    using KDatePickerPopup_MinimumSizeHint_Callback = QSize* (*)();
    using KDatePickerPopup_HeightForWidth_Callback = int (*)(const KDatePickerPopup*, int);
    using KDatePickerPopup_HasHeightForWidth_Callback = bool (*)();
    using KDatePickerPopup_PaintEngine_Callback = QPaintEngine* (*)();
    using KDatePickerPopup_MouseDoubleClickEvent_Callback = void (*)(KDatePickerPopup*, QMouseEvent*);
    using KDatePickerPopup_KeyReleaseEvent_Callback = void (*)(KDatePickerPopup*, QKeyEvent*);
    using KDatePickerPopup_FocusInEvent_Callback = void (*)(KDatePickerPopup*, QFocusEvent*);
    using KDatePickerPopup_FocusOutEvent_Callback = void (*)(KDatePickerPopup*, QFocusEvent*);
    using KDatePickerPopup_MoveEvent_Callback = void (*)(KDatePickerPopup*, QMoveEvent*);
    using KDatePickerPopup_ResizeEvent_Callback = void (*)(KDatePickerPopup*, QResizeEvent*);
    using KDatePickerPopup_CloseEvent_Callback = void (*)(KDatePickerPopup*, QCloseEvent*);
    using KDatePickerPopup_ContextMenuEvent_Callback = void (*)(KDatePickerPopup*, QContextMenuEvent*);
    using KDatePickerPopup_TabletEvent_Callback = void (*)(KDatePickerPopup*, QTabletEvent*);
    using KDatePickerPopup_DragEnterEvent_Callback = void (*)(KDatePickerPopup*, QDragEnterEvent*);
    using KDatePickerPopup_DragMoveEvent_Callback = void (*)(KDatePickerPopup*, QDragMoveEvent*);
    using KDatePickerPopup_DragLeaveEvent_Callback = void (*)(KDatePickerPopup*, QDragLeaveEvent*);
    using KDatePickerPopup_DropEvent_Callback = void (*)(KDatePickerPopup*, QDropEvent*);
    using KDatePickerPopup_ShowEvent_Callback = void (*)(KDatePickerPopup*, QShowEvent*);
    using KDatePickerPopup_NativeEvent_Callback = bool (*)(KDatePickerPopup*, libqt_string, void*, intptr_t*);
    using KDatePickerPopup_Metric_Callback = int (*)(const KDatePickerPopup*, int);
    using KDatePickerPopup_InitPainter_Callback = void (*)(const KDatePickerPopup*, QPainter*);
    using KDatePickerPopup_Redirected_Callback = QPaintDevice* (*)(const KDatePickerPopup*, QPoint*);
    using KDatePickerPopup_SharedPainter_Callback = QPainter* (*)();
    using KDatePickerPopup_InputMethodEvent_Callback = void (*)(KDatePickerPopup*, QInputMethodEvent*);
    using KDatePickerPopup_InputMethodQuery_Callback = QVariant* (*)(const KDatePickerPopup*, int);
    using KDatePickerPopup_EventFilter_Callback = bool (*)(KDatePickerPopup*, QObject*, QEvent*);
    using KDatePickerPopup_ChildEvent_Callback = void (*)(KDatePickerPopup*, QChildEvent*);
    using KDatePickerPopup_CustomEvent_Callback = void (*)(KDatePickerPopup*, QEvent*);
    using KDatePickerPopup_ConnectNotify_Callback = void (*)(KDatePickerPopup*, QMetaMethod*);
    using KDatePickerPopup_DisconnectNotify_Callback = void (*)(KDatePickerPopup*, QMetaMethod*);
    using KDatePickerPopup_ColumnCount_Callback = int (*)();
    using KDatePickerPopup_UpdateMicroFocus_Callback = void (*)();
    using KDatePickerPopup_Create_Callback = void (*)();
    using KDatePickerPopup_Destroy_Callback = void (*)();
    using KDatePickerPopup_FocusNextChild_Callback = bool (*)();
    using KDatePickerPopup_FocusPreviousChild_Callback = bool (*)();
    using KDatePickerPopup_Sender_Callback = QObject* (*)();
    using KDatePickerPopup_SenderSignalIndex_Callback = int (*)();
    using KDatePickerPopup_Receivers_Callback = int (*)(const KDatePickerPopup*, const char*);
    using KDatePickerPopup_IsSignalConnected_Callback = bool (*)(const KDatePickerPopup*, QMetaMethod*);
    using KDatePickerPopup_GetDecodedMetricF_Callback = double (*)(const KDatePickerPopup*, int, int);

  protected:
    // Instance callback storage
    KDatePickerPopup_Metacall_Callback kdatepickerpopup_metacall_callback = nullptr;
    KDatePickerPopup_SizeHint_Callback kdatepickerpopup_sizehint_callback = nullptr;
    KDatePickerPopup_ChangeEvent_Callback kdatepickerpopup_changeevent_callback = nullptr;
    KDatePickerPopup_KeyPressEvent_Callback kdatepickerpopup_keypressevent_callback = nullptr;
    KDatePickerPopup_MouseReleaseEvent_Callback kdatepickerpopup_mousereleaseevent_callback = nullptr;
    KDatePickerPopup_MousePressEvent_Callback kdatepickerpopup_mousepressevent_callback = nullptr;
    KDatePickerPopup_MouseMoveEvent_Callback kdatepickerpopup_mousemoveevent_callback = nullptr;
    KDatePickerPopup_WheelEvent_Callback kdatepickerpopup_wheelevent_callback = nullptr;
    KDatePickerPopup_EnterEvent_Callback kdatepickerpopup_enterevent_callback = nullptr;
    KDatePickerPopup_LeaveEvent_Callback kdatepickerpopup_leaveevent_callback = nullptr;
    KDatePickerPopup_HideEvent_Callback kdatepickerpopup_hideevent_callback = nullptr;
    KDatePickerPopup_PaintEvent_Callback kdatepickerpopup_paintevent_callback = nullptr;
    KDatePickerPopup_ActionEvent_Callback kdatepickerpopup_actionevent_callback = nullptr;
    KDatePickerPopup_TimerEvent_Callback kdatepickerpopup_timerevent_callback = nullptr;
    KDatePickerPopup_Event_Callback kdatepickerpopup_event_callback = nullptr;
    KDatePickerPopup_FocusNextPrevChild_Callback kdatepickerpopup_focusnextprevchild_callback = nullptr;
    KDatePickerPopup_InitStyleOption_Callback kdatepickerpopup_initstyleoption_callback = nullptr;
    KDatePickerPopup_DevType_Callback kdatepickerpopup_devtype_callback = nullptr;
    KDatePickerPopup_SetVisible_Callback kdatepickerpopup_setvisible_callback = nullptr;
    KDatePickerPopup_MinimumSizeHint_Callback kdatepickerpopup_minimumsizehint_callback = nullptr;
    KDatePickerPopup_HeightForWidth_Callback kdatepickerpopup_heightforwidth_callback = nullptr;
    KDatePickerPopup_HasHeightForWidth_Callback kdatepickerpopup_hasheightforwidth_callback = nullptr;
    KDatePickerPopup_PaintEngine_Callback kdatepickerpopup_paintengine_callback = nullptr;
    KDatePickerPopup_MouseDoubleClickEvent_Callback kdatepickerpopup_mousedoubleclickevent_callback = nullptr;
    KDatePickerPopup_KeyReleaseEvent_Callback kdatepickerpopup_keyreleaseevent_callback = nullptr;
    KDatePickerPopup_FocusInEvent_Callback kdatepickerpopup_focusinevent_callback = nullptr;
    KDatePickerPopup_FocusOutEvent_Callback kdatepickerpopup_focusoutevent_callback = nullptr;
    KDatePickerPopup_MoveEvent_Callback kdatepickerpopup_moveevent_callback = nullptr;
    KDatePickerPopup_ResizeEvent_Callback kdatepickerpopup_resizeevent_callback = nullptr;
    KDatePickerPopup_CloseEvent_Callback kdatepickerpopup_closeevent_callback = nullptr;
    KDatePickerPopup_ContextMenuEvent_Callback kdatepickerpopup_contextmenuevent_callback = nullptr;
    KDatePickerPopup_TabletEvent_Callback kdatepickerpopup_tabletevent_callback = nullptr;
    KDatePickerPopup_DragEnterEvent_Callback kdatepickerpopup_dragenterevent_callback = nullptr;
    KDatePickerPopup_DragMoveEvent_Callback kdatepickerpopup_dragmoveevent_callback = nullptr;
    KDatePickerPopup_DragLeaveEvent_Callback kdatepickerpopup_dragleaveevent_callback = nullptr;
    KDatePickerPopup_DropEvent_Callback kdatepickerpopup_dropevent_callback = nullptr;
    KDatePickerPopup_ShowEvent_Callback kdatepickerpopup_showevent_callback = nullptr;
    KDatePickerPopup_NativeEvent_Callback kdatepickerpopup_nativeevent_callback = nullptr;
    KDatePickerPopup_Metric_Callback kdatepickerpopup_metric_callback = nullptr;
    KDatePickerPopup_InitPainter_Callback kdatepickerpopup_initpainter_callback = nullptr;
    KDatePickerPopup_Redirected_Callback kdatepickerpopup_redirected_callback = nullptr;
    KDatePickerPopup_SharedPainter_Callback kdatepickerpopup_sharedpainter_callback = nullptr;
    KDatePickerPopup_InputMethodEvent_Callback kdatepickerpopup_inputmethodevent_callback = nullptr;
    KDatePickerPopup_InputMethodQuery_Callback kdatepickerpopup_inputmethodquery_callback = nullptr;
    KDatePickerPopup_EventFilter_Callback kdatepickerpopup_eventfilter_callback = nullptr;
    KDatePickerPopup_ChildEvent_Callback kdatepickerpopup_childevent_callback = nullptr;
    KDatePickerPopup_CustomEvent_Callback kdatepickerpopup_customevent_callback = nullptr;
    KDatePickerPopup_ConnectNotify_Callback kdatepickerpopup_connectnotify_callback = nullptr;
    KDatePickerPopup_DisconnectNotify_Callback kdatepickerpopup_disconnectnotify_callback = nullptr;
    KDatePickerPopup_ColumnCount_Callback kdatepickerpopup_columncount_callback = nullptr;
    KDatePickerPopup_UpdateMicroFocus_Callback kdatepickerpopup_updatemicrofocus_callback = nullptr;
    KDatePickerPopup_Create_Callback kdatepickerpopup_create_callback = nullptr;
    KDatePickerPopup_Destroy_Callback kdatepickerpopup_destroy_callback = nullptr;
    KDatePickerPopup_FocusNextChild_Callback kdatepickerpopup_focusnextchild_callback = nullptr;
    KDatePickerPopup_FocusPreviousChild_Callback kdatepickerpopup_focuspreviouschild_callback = nullptr;
    KDatePickerPopup_Sender_Callback kdatepickerpopup_sender_callback = nullptr;
    KDatePickerPopup_SenderSignalIndex_Callback kdatepickerpopup_sendersignalindex_callback = nullptr;
    KDatePickerPopup_Receivers_Callback kdatepickerpopup_receivers_callback = nullptr;
    KDatePickerPopup_IsSignalConnected_Callback kdatepickerpopup_issignalconnected_callback = nullptr;
    KDatePickerPopup_GetDecodedMetricF_Callback kdatepickerpopup_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kdatepickerpopup_metacall_isbase = false;
    mutable bool kdatepickerpopup_sizehint_isbase = false;
    mutable bool kdatepickerpopup_changeevent_isbase = false;
    mutable bool kdatepickerpopup_keypressevent_isbase = false;
    mutable bool kdatepickerpopup_mousereleaseevent_isbase = false;
    mutable bool kdatepickerpopup_mousepressevent_isbase = false;
    mutable bool kdatepickerpopup_mousemoveevent_isbase = false;
    mutable bool kdatepickerpopup_wheelevent_isbase = false;
    mutable bool kdatepickerpopup_enterevent_isbase = false;
    mutable bool kdatepickerpopup_leaveevent_isbase = false;
    mutable bool kdatepickerpopup_hideevent_isbase = false;
    mutable bool kdatepickerpopup_paintevent_isbase = false;
    mutable bool kdatepickerpopup_actionevent_isbase = false;
    mutable bool kdatepickerpopup_timerevent_isbase = false;
    mutable bool kdatepickerpopup_event_isbase = false;
    mutable bool kdatepickerpopup_focusnextprevchild_isbase = false;
    mutable bool kdatepickerpopup_initstyleoption_isbase = false;
    mutable bool kdatepickerpopup_devtype_isbase = false;
    mutable bool kdatepickerpopup_setvisible_isbase = false;
    mutable bool kdatepickerpopup_minimumsizehint_isbase = false;
    mutable bool kdatepickerpopup_heightforwidth_isbase = false;
    mutable bool kdatepickerpopup_hasheightforwidth_isbase = false;
    mutable bool kdatepickerpopup_paintengine_isbase = false;
    mutable bool kdatepickerpopup_mousedoubleclickevent_isbase = false;
    mutable bool kdatepickerpopup_keyreleaseevent_isbase = false;
    mutable bool kdatepickerpopup_focusinevent_isbase = false;
    mutable bool kdatepickerpopup_focusoutevent_isbase = false;
    mutable bool kdatepickerpopup_moveevent_isbase = false;
    mutable bool kdatepickerpopup_resizeevent_isbase = false;
    mutable bool kdatepickerpopup_closeevent_isbase = false;
    mutable bool kdatepickerpopup_contextmenuevent_isbase = false;
    mutable bool kdatepickerpopup_tabletevent_isbase = false;
    mutable bool kdatepickerpopup_dragenterevent_isbase = false;
    mutable bool kdatepickerpopup_dragmoveevent_isbase = false;
    mutable bool kdatepickerpopup_dragleaveevent_isbase = false;
    mutable bool kdatepickerpopup_dropevent_isbase = false;
    mutable bool kdatepickerpopup_showevent_isbase = false;
    mutable bool kdatepickerpopup_nativeevent_isbase = false;
    mutable bool kdatepickerpopup_metric_isbase = false;
    mutable bool kdatepickerpopup_initpainter_isbase = false;
    mutable bool kdatepickerpopup_redirected_isbase = false;
    mutable bool kdatepickerpopup_sharedpainter_isbase = false;
    mutable bool kdatepickerpopup_inputmethodevent_isbase = false;
    mutable bool kdatepickerpopup_inputmethodquery_isbase = false;
    mutable bool kdatepickerpopup_eventfilter_isbase = false;
    mutable bool kdatepickerpopup_childevent_isbase = false;
    mutable bool kdatepickerpopup_customevent_isbase = false;
    mutable bool kdatepickerpopup_connectnotify_isbase = false;
    mutable bool kdatepickerpopup_disconnectnotify_isbase = false;
    mutable bool kdatepickerpopup_columncount_isbase = false;
    mutable bool kdatepickerpopup_updatemicrofocus_isbase = false;
    mutable bool kdatepickerpopup_create_isbase = false;
    mutable bool kdatepickerpopup_destroy_isbase = false;
    mutable bool kdatepickerpopup_focusnextchild_isbase = false;
    mutable bool kdatepickerpopup_focuspreviouschild_isbase = false;
    mutable bool kdatepickerpopup_sender_isbase = false;
    mutable bool kdatepickerpopup_sendersignalindex_isbase = false;
    mutable bool kdatepickerpopup_receivers_isbase = false;
    mutable bool kdatepickerpopup_issignalconnected_isbase = false;
    mutable bool kdatepickerpopup_getdecodedmetricf_isbase = false;

  public:
    VirtualKDatePickerPopup() : KDatePickerPopup() {};
    VirtualKDatePickerPopup(KDatePickerPopup::Modes modes) : KDatePickerPopup(modes) {};
    VirtualKDatePickerPopup(KDatePickerPopup::Modes modes, QDate date) : KDatePickerPopup(modes, date) {};
    VirtualKDatePickerPopup(KDatePickerPopup::Modes modes, QDate date, QWidget* parent) : KDatePickerPopup(modes, date, parent) {};

    ~VirtualKDatePickerPopup() {
        kdatepickerpopup_metacall_callback = nullptr;
        kdatepickerpopup_sizehint_callback = nullptr;
        kdatepickerpopup_changeevent_callback = nullptr;
        kdatepickerpopup_keypressevent_callback = nullptr;
        kdatepickerpopup_mousereleaseevent_callback = nullptr;
        kdatepickerpopup_mousepressevent_callback = nullptr;
        kdatepickerpopup_mousemoveevent_callback = nullptr;
        kdatepickerpopup_wheelevent_callback = nullptr;
        kdatepickerpopup_enterevent_callback = nullptr;
        kdatepickerpopup_leaveevent_callback = nullptr;
        kdatepickerpopup_hideevent_callback = nullptr;
        kdatepickerpopup_paintevent_callback = nullptr;
        kdatepickerpopup_actionevent_callback = nullptr;
        kdatepickerpopup_timerevent_callback = nullptr;
        kdatepickerpopup_event_callback = nullptr;
        kdatepickerpopup_focusnextprevchild_callback = nullptr;
        kdatepickerpopup_initstyleoption_callback = nullptr;
        kdatepickerpopup_devtype_callback = nullptr;
        kdatepickerpopup_setvisible_callback = nullptr;
        kdatepickerpopup_minimumsizehint_callback = nullptr;
        kdatepickerpopup_heightforwidth_callback = nullptr;
        kdatepickerpopup_hasheightforwidth_callback = nullptr;
        kdatepickerpopup_paintengine_callback = nullptr;
        kdatepickerpopup_mousedoubleclickevent_callback = nullptr;
        kdatepickerpopup_keyreleaseevent_callback = nullptr;
        kdatepickerpopup_focusinevent_callback = nullptr;
        kdatepickerpopup_focusoutevent_callback = nullptr;
        kdatepickerpopup_moveevent_callback = nullptr;
        kdatepickerpopup_resizeevent_callback = nullptr;
        kdatepickerpopup_closeevent_callback = nullptr;
        kdatepickerpopup_contextmenuevent_callback = nullptr;
        kdatepickerpopup_tabletevent_callback = nullptr;
        kdatepickerpopup_dragenterevent_callback = nullptr;
        kdatepickerpopup_dragmoveevent_callback = nullptr;
        kdatepickerpopup_dragleaveevent_callback = nullptr;
        kdatepickerpopup_dropevent_callback = nullptr;
        kdatepickerpopup_showevent_callback = nullptr;
        kdatepickerpopup_nativeevent_callback = nullptr;
        kdatepickerpopup_metric_callback = nullptr;
        kdatepickerpopup_initpainter_callback = nullptr;
        kdatepickerpopup_redirected_callback = nullptr;
        kdatepickerpopup_sharedpainter_callback = nullptr;
        kdatepickerpopup_inputmethodevent_callback = nullptr;
        kdatepickerpopup_inputmethodquery_callback = nullptr;
        kdatepickerpopup_eventfilter_callback = nullptr;
        kdatepickerpopup_childevent_callback = nullptr;
        kdatepickerpopup_customevent_callback = nullptr;
        kdatepickerpopup_connectnotify_callback = nullptr;
        kdatepickerpopup_disconnectnotify_callback = nullptr;
        kdatepickerpopup_columncount_callback = nullptr;
        kdatepickerpopup_updatemicrofocus_callback = nullptr;
        kdatepickerpopup_create_callback = nullptr;
        kdatepickerpopup_destroy_callback = nullptr;
        kdatepickerpopup_focusnextchild_callback = nullptr;
        kdatepickerpopup_focuspreviouschild_callback = nullptr;
        kdatepickerpopup_sender_callback = nullptr;
        kdatepickerpopup_sendersignalindex_callback = nullptr;
        kdatepickerpopup_receivers_callback = nullptr;
        kdatepickerpopup_issignalconnected_callback = nullptr;
        kdatepickerpopup_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKDatePickerPopup_Metacall_Callback(KDatePickerPopup_Metacall_Callback cb) { kdatepickerpopup_metacall_callback = cb; }
    inline void setKDatePickerPopup_SizeHint_Callback(KDatePickerPopup_SizeHint_Callback cb) { kdatepickerpopup_sizehint_callback = cb; }
    inline void setKDatePickerPopup_ChangeEvent_Callback(KDatePickerPopup_ChangeEvent_Callback cb) { kdatepickerpopup_changeevent_callback = cb; }
    inline void setKDatePickerPopup_KeyPressEvent_Callback(KDatePickerPopup_KeyPressEvent_Callback cb) { kdatepickerpopup_keypressevent_callback = cb; }
    inline void setKDatePickerPopup_MouseReleaseEvent_Callback(KDatePickerPopup_MouseReleaseEvent_Callback cb) { kdatepickerpopup_mousereleaseevent_callback = cb; }
    inline void setKDatePickerPopup_MousePressEvent_Callback(KDatePickerPopup_MousePressEvent_Callback cb) { kdatepickerpopup_mousepressevent_callback = cb; }
    inline void setKDatePickerPopup_MouseMoveEvent_Callback(KDatePickerPopup_MouseMoveEvent_Callback cb) { kdatepickerpopup_mousemoveevent_callback = cb; }
    inline void setKDatePickerPopup_WheelEvent_Callback(KDatePickerPopup_WheelEvent_Callback cb) { kdatepickerpopup_wheelevent_callback = cb; }
    inline void setKDatePickerPopup_EnterEvent_Callback(KDatePickerPopup_EnterEvent_Callback cb) { kdatepickerpopup_enterevent_callback = cb; }
    inline void setKDatePickerPopup_LeaveEvent_Callback(KDatePickerPopup_LeaveEvent_Callback cb) { kdatepickerpopup_leaveevent_callback = cb; }
    inline void setKDatePickerPopup_HideEvent_Callback(KDatePickerPopup_HideEvent_Callback cb) { kdatepickerpopup_hideevent_callback = cb; }
    inline void setKDatePickerPopup_PaintEvent_Callback(KDatePickerPopup_PaintEvent_Callback cb) { kdatepickerpopup_paintevent_callback = cb; }
    inline void setKDatePickerPopup_ActionEvent_Callback(KDatePickerPopup_ActionEvent_Callback cb) { kdatepickerpopup_actionevent_callback = cb; }
    inline void setKDatePickerPopup_TimerEvent_Callback(KDatePickerPopup_TimerEvent_Callback cb) { kdatepickerpopup_timerevent_callback = cb; }
    inline void setKDatePickerPopup_Event_Callback(KDatePickerPopup_Event_Callback cb) { kdatepickerpopup_event_callback = cb; }
    inline void setKDatePickerPopup_FocusNextPrevChild_Callback(KDatePickerPopup_FocusNextPrevChild_Callback cb) { kdatepickerpopup_focusnextprevchild_callback = cb; }
    inline void setKDatePickerPopup_InitStyleOption_Callback(KDatePickerPopup_InitStyleOption_Callback cb) { kdatepickerpopup_initstyleoption_callback = cb; }
    inline void setKDatePickerPopup_DevType_Callback(KDatePickerPopup_DevType_Callback cb) { kdatepickerpopup_devtype_callback = cb; }
    inline void setKDatePickerPopup_SetVisible_Callback(KDatePickerPopup_SetVisible_Callback cb) { kdatepickerpopup_setvisible_callback = cb; }
    inline void setKDatePickerPopup_MinimumSizeHint_Callback(KDatePickerPopup_MinimumSizeHint_Callback cb) { kdatepickerpopup_minimumsizehint_callback = cb; }
    inline void setKDatePickerPopup_HeightForWidth_Callback(KDatePickerPopup_HeightForWidth_Callback cb) { kdatepickerpopup_heightforwidth_callback = cb; }
    inline void setKDatePickerPopup_HasHeightForWidth_Callback(KDatePickerPopup_HasHeightForWidth_Callback cb) { kdatepickerpopup_hasheightforwidth_callback = cb; }
    inline void setKDatePickerPopup_PaintEngine_Callback(KDatePickerPopup_PaintEngine_Callback cb) { kdatepickerpopup_paintengine_callback = cb; }
    inline void setKDatePickerPopup_MouseDoubleClickEvent_Callback(KDatePickerPopup_MouseDoubleClickEvent_Callback cb) { kdatepickerpopup_mousedoubleclickevent_callback = cb; }
    inline void setKDatePickerPopup_KeyReleaseEvent_Callback(KDatePickerPopup_KeyReleaseEvent_Callback cb) { kdatepickerpopup_keyreleaseevent_callback = cb; }
    inline void setKDatePickerPopup_FocusInEvent_Callback(KDatePickerPopup_FocusInEvent_Callback cb) { kdatepickerpopup_focusinevent_callback = cb; }
    inline void setKDatePickerPopup_FocusOutEvent_Callback(KDatePickerPopup_FocusOutEvent_Callback cb) { kdatepickerpopup_focusoutevent_callback = cb; }
    inline void setKDatePickerPopup_MoveEvent_Callback(KDatePickerPopup_MoveEvent_Callback cb) { kdatepickerpopup_moveevent_callback = cb; }
    inline void setKDatePickerPopup_ResizeEvent_Callback(KDatePickerPopup_ResizeEvent_Callback cb) { kdatepickerpopup_resizeevent_callback = cb; }
    inline void setKDatePickerPopup_CloseEvent_Callback(KDatePickerPopup_CloseEvent_Callback cb) { kdatepickerpopup_closeevent_callback = cb; }
    inline void setKDatePickerPopup_ContextMenuEvent_Callback(KDatePickerPopup_ContextMenuEvent_Callback cb) { kdatepickerpopup_contextmenuevent_callback = cb; }
    inline void setKDatePickerPopup_TabletEvent_Callback(KDatePickerPopup_TabletEvent_Callback cb) { kdatepickerpopup_tabletevent_callback = cb; }
    inline void setKDatePickerPopup_DragEnterEvent_Callback(KDatePickerPopup_DragEnterEvent_Callback cb) { kdatepickerpopup_dragenterevent_callback = cb; }
    inline void setKDatePickerPopup_DragMoveEvent_Callback(KDatePickerPopup_DragMoveEvent_Callback cb) { kdatepickerpopup_dragmoveevent_callback = cb; }
    inline void setKDatePickerPopup_DragLeaveEvent_Callback(KDatePickerPopup_DragLeaveEvent_Callback cb) { kdatepickerpopup_dragleaveevent_callback = cb; }
    inline void setKDatePickerPopup_DropEvent_Callback(KDatePickerPopup_DropEvent_Callback cb) { kdatepickerpopup_dropevent_callback = cb; }
    inline void setKDatePickerPopup_ShowEvent_Callback(KDatePickerPopup_ShowEvent_Callback cb) { kdatepickerpopup_showevent_callback = cb; }
    inline void setKDatePickerPopup_NativeEvent_Callback(KDatePickerPopup_NativeEvent_Callback cb) { kdatepickerpopup_nativeevent_callback = cb; }
    inline void setKDatePickerPopup_Metric_Callback(KDatePickerPopup_Metric_Callback cb) { kdatepickerpopup_metric_callback = cb; }
    inline void setKDatePickerPopup_InitPainter_Callback(KDatePickerPopup_InitPainter_Callback cb) { kdatepickerpopup_initpainter_callback = cb; }
    inline void setKDatePickerPopup_Redirected_Callback(KDatePickerPopup_Redirected_Callback cb) { kdatepickerpopup_redirected_callback = cb; }
    inline void setKDatePickerPopup_SharedPainter_Callback(KDatePickerPopup_SharedPainter_Callback cb) { kdatepickerpopup_sharedpainter_callback = cb; }
    inline void setKDatePickerPopup_InputMethodEvent_Callback(KDatePickerPopup_InputMethodEvent_Callback cb) { kdatepickerpopup_inputmethodevent_callback = cb; }
    inline void setKDatePickerPopup_InputMethodQuery_Callback(KDatePickerPopup_InputMethodQuery_Callback cb) { kdatepickerpopup_inputmethodquery_callback = cb; }
    inline void setKDatePickerPopup_EventFilter_Callback(KDatePickerPopup_EventFilter_Callback cb) { kdatepickerpopup_eventfilter_callback = cb; }
    inline void setKDatePickerPopup_ChildEvent_Callback(KDatePickerPopup_ChildEvent_Callback cb) { kdatepickerpopup_childevent_callback = cb; }
    inline void setKDatePickerPopup_CustomEvent_Callback(KDatePickerPopup_CustomEvent_Callback cb) { kdatepickerpopup_customevent_callback = cb; }
    inline void setKDatePickerPopup_ConnectNotify_Callback(KDatePickerPopup_ConnectNotify_Callback cb) { kdatepickerpopup_connectnotify_callback = cb; }
    inline void setKDatePickerPopup_DisconnectNotify_Callback(KDatePickerPopup_DisconnectNotify_Callback cb) { kdatepickerpopup_disconnectnotify_callback = cb; }
    inline void setKDatePickerPopup_ColumnCount_Callback(KDatePickerPopup_ColumnCount_Callback cb) { kdatepickerpopup_columncount_callback = cb; }
    inline void setKDatePickerPopup_UpdateMicroFocus_Callback(KDatePickerPopup_UpdateMicroFocus_Callback cb) { kdatepickerpopup_updatemicrofocus_callback = cb; }
    inline void setKDatePickerPopup_Create_Callback(KDatePickerPopup_Create_Callback cb) { kdatepickerpopup_create_callback = cb; }
    inline void setKDatePickerPopup_Destroy_Callback(KDatePickerPopup_Destroy_Callback cb) { kdatepickerpopup_destroy_callback = cb; }
    inline void setKDatePickerPopup_FocusNextChild_Callback(KDatePickerPopup_FocusNextChild_Callback cb) { kdatepickerpopup_focusnextchild_callback = cb; }
    inline void setKDatePickerPopup_FocusPreviousChild_Callback(KDatePickerPopup_FocusPreviousChild_Callback cb) { kdatepickerpopup_focuspreviouschild_callback = cb; }
    inline void setKDatePickerPopup_Sender_Callback(KDatePickerPopup_Sender_Callback cb) { kdatepickerpopup_sender_callback = cb; }
    inline void setKDatePickerPopup_SenderSignalIndex_Callback(KDatePickerPopup_SenderSignalIndex_Callback cb) { kdatepickerpopup_sendersignalindex_callback = cb; }
    inline void setKDatePickerPopup_Receivers_Callback(KDatePickerPopup_Receivers_Callback cb) { kdatepickerpopup_receivers_callback = cb; }
    inline void setKDatePickerPopup_IsSignalConnected_Callback(KDatePickerPopup_IsSignalConnected_Callback cb) { kdatepickerpopup_issignalconnected_callback = cb; }
    inline void setKDatePickerPopup_GetDecodedMetricF_Callback(KDatePickerPopup_GetDecodedMetricF_Callback cb) { kdatepickerpopup_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKDatePickerPopup_Metacall_IsBase(bool value) const { kdatepickerpopup_metacall_isbase = value; }
    inline void setKDatePickerPopup_SizeHint_IsBase(bool value) const { kdatepickerpopup_sizehint_isbase = value; }
    inline void setKDatePickerPopup_ChangeEvent_IsBase(bool value) const { kdatepickerpopup_changeevent_isbase = value; }
    inline void setKDatePickerPopup_KeyPressEvent_IsBase(bool value) const { kdatepickerpopup_keypressevent_isbase = value; }
    inline void setKDatePickerPopup_MouseReleaseEvent_IsBase(bool value) const { kdatepickerpopup_mousereleaseevent_isbase = value; }
    inline void setKDatePickerPopup_MousePressEvent_IsBase(bool value) const { kdatepickerpopup_mousepressevent_isbase = value; }
    inline void setKDatePickerPopup_MouseMoveEvent_IsBase(bool value) const { kdatepickerpopup_mousemoveevent_isbase = value; }
    inline void setKDatePickerPopup_WheelEvent_IsBase(bool value) const { kdatepickerpopup_wheelevent_isbase = value; }
    inline void setKDatePickerPopup_EnterEvent_IsBase(bool value) const { kdatepickerpopup_enterevent_isbase = value; }
    inline void setKDatePickerPopup_LeaveEvent_IsBase(bool value) const { kdatepickerpopup_leaveevent_isbase = value; }
    inline void setKDatePickerPopup_HideEvent_IsBase(bool value) const { kdatepickerpopup_hideevent_isbase = value; }
    inline void setKDatePickerPopup_PaintEvent_IsBase(bool value) const { kdatepickerpopup_paintevent_isbase = value; }
    inline void setKDatePickerPopup_ActionEvent_IsBase(bool value) const { kdatepickerpopup_actionevent_isbase = value; }
    inline void setKDatePickerPopup_TimerEvent_IsBase(bool value) const { kdatepickerpopup_timerevent_isbase = value; }
    inline void setKDatePickerPopup_Event_IsBase(bool value) const { kdatepickerpopup_event_isbase = value; }
    inline void setKDatePickerPopup_FocusNextPrevChild_IsBase(bool value) const { kdatepickerpopup_focusnextprevchild_isbase = value; }
    inline void setKDatePickerPopup_InitStyleOption_IsBase(bool value) const { kdatepickerpopup_initstyleoption_isbase = value; }
    inline void setKDatePickerPopup_DevType_IsBase(bool value) const { kdatepickerpopup_devtype_isbase = value; }
    inline void setKDatePickerPopup_SetVisible_IsBase(bool value) const { kdatepickerpopup_setvisible_isbase = value; }
    inline void setKDatePickerPopup_MinimumSizeHint_IsBase(bool value) const { kdatepickerpopup_minimumsizehint_isbase = value; }
    inline void setKDatePickerPopup_HeightForWidth_IsBase(bool value) const { kdatepickerpopup_heightforwidth_isbase = value; }
    inline void setKDatePickerPopup_HasHeightForWidth_IsBase(bool value) const { kdatepickerpopup_hasheightforwidth_isbase = value; }
    inline void setKDatePickerPopup_PaintEngine_IsBase(bool value) const { kdatepickerpopup_paintengine_isbase = value; }
    inline void setKDatePickerPopup_MouseDoubleClickEvent_IsBase(bool value) const { kdatepickerpopup_mousedoubleclickevent_isbase = value; }
    inline void setKDatePickerPopup_KeyReleaseEvent_IsBase(bool value) const { kdatepickerpopup_keyreleaseevent_isbase = value; }
    inline void setKDatePickerPopup_FocusInEvent_IsBase(bool value) const { kdatepickerpopup_focusinevent_isbase = value; }
    inline void setKDatePickerPopup_FocusOutEvent_IsBase(bool value) const { kdatepickerpopup_focusoutevent_isbase = value; }
    inline void setKDatePickerPopup_MoveEvent_IsBase(bool value) const { kdatepickerpopup_moveevent_isbase = value; }
    inline void setKDatePickerPopup_ResizeEvent_IsBase(bool value) const { kdatepickerpopup_resizeevent_isbase = value; }
    inline void setKDatePickerPopup_CloseEvent_IsBase(bool value) const { kdatepickerpopup_closeevent_isbase = value; }
    inline void setKDatePickerPopup_ContextMenuEvent_IsBase(bool value) const { kdatepickerpopup_contextmenuevent_isbase = value; }
    inline void setKDatePickerPopup_TabletEvent_IsBase(bool value) const { kdatepickerpopup_tabletevent_isbase = value; }
    inline void setKDatePickerPopup_DragEnterEvent_IsBase(bool value) const { kdatepickerpopup_dragenterevent_isbase = value; }
    inline void setKDatePickerPopup_DragMoveEvent_IsBase(bool value) const { kdatepickerpopup_dragmoveevent_isbase = value; }
    inline void setKDatePickerPopup_DragLeaveEvent_IsBase(bool value) const { kdatepickerpopup_dragleaveevent_isbase = value; }
    inline void setKDatePickerPopup_DropEvent_IsBase(bool value) const { kdatepickerpopup_dropevent_isbase = value; }
    inline void setKDatePickerPopup_ShowEvent_IsBase(bool value) const { kdatepickerpopup_showevent_isbase = value; }
    inline void setKDatePickerPopup_NativeEvent_IsBase(bool value) const { kdatepickerpopup_nativeevent_isbase = value; }
    inline void setKDatePickerPopup_Metric_IsBase(bool value) const { kdatepickerpopup_metric_isbase = value; }
    inline void setKDatePickerPopup_InitPainter_IsBase(bool value) const { kdatepickerpopup_initpainter_isbase = value; }
    inline void setKDatePickerPopup_Redirected_IsBase(bool value) const { kdatepickerpopup_redirected_isbase = value; }
    inline void setKDatePickerPopup_SharedPainter_IsBase(bool value) const { kdatepickerpopup_sharedpainter_isbase = value; }
    inline void setKDatePickerPopup_InputMethodEvent_IsBase(bool value) const { kdatepickerpopup_inputmethodevent_isbase = value; }
    inline void setKDatePickerPopup_InputMethodQuery_IsBase(bool value) const { kdatepickerpopup_inputmethodquery_isbase = value; }
    inline void setKDatePickerPopup_EventFilter_IsBase(bool value) const { kdatepickerpopup_eventfilter_isbase = value; }
    inline void setKDatePickerPopup_ChildEvent_IsBase(bool value) const { kdatepickerpopup_childevent_isbase = value; }
    inline void setKDatePickerPopup_CustomEvent_IsBase(bool value) const { kdatepickerpopup_customevent_isbase = value; }
    inline void setKDatePickerPopup_ConnectNotify_IsBase(bool value) const { kdatepickerpopup_connectnotify_isbase = value; }
    inline void setKDatePickerPopup_DisconnectNotify_IsBase(bool value) const { kdatepickerpopup_disconnectnotify_isbase = value; }
    inline void setKDatePickerPopup_ColumnCount_IsBase(bool value) const { kdatepickerpopup_columncount_isbase = value; }
    inline void setKDatePickerPopup_UpdateMicroFocus_IsBase(bool value) const { kdatepickerpopup_updatemicrofocus_isbase = value; }
    inline void setKDatePickerPopup_Create_IsBase(bool value) const { kdatepickerpopup_create_isbase = value; }
    inline void setKDatePickerPopup_Destroy_IsBase(bool value) const { kdatepickerpopup_destroy_isbase = value; }
    inline void setKDatePickerPopup_FocusNextChild_IsBase(bool value) const { kdatepickerpopup_focusnextchild_isbase = value; }
    inline void setKDatePickerPopup_FocusPreviousChild_IsBase(bool value) const { kdatepickerpopup_focuspreviouschild_isbase = value; }
    inline void setKDatePickerPopup_Sender_IsBase(bool value) const { kdatepickerpopup_sender_isbase = value; }
    inline void setKDatePickerPopup_SenderSignalIndex_IsBase(bool value) const { kdatepickerpopup_sendersignalindex_isbase = value; }
    inline void setKDatePickerPopup_Receivers_IsBase(bool value) const { kdatepickerpopup_receivers_isbase = value; }
    inline void setKDatePickerPopup_IsSignalConnected_IsBase(bool value) const { kdatepickerpopup_issignalconnected_isbase = value; }
    inline void setKDatePickerPopup_GetDecodedMetricF_IsBase(bool value) const { kdatepickerpopup_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdatepickerpopup_metacall_isbase) {
            kdatepickerpopup_metacall_isbase = false;
            return KDatePickerPopup::qt_metacall(param1, param2, param3);
        } else if (kdatepickerpopup_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kdatepickerpopup_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KDatePickerPopup::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kdatepickerpopup_sizehint_isbase) {
            kdatepickerpopup_sizehint_isbase = false;
            return KDatePickerPopup::sizeHint();
        } else if (kdatepickerpopup_sizehint_callback != nullptr) {
            QSize* callback_ret = kdatepickerpopup_sizehint_callback();
            return *callback_ret;
        } else {
            return KDatePickerPopup::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kdatepickerpopup_changeevent_isbase) {
            kdatepickerpopup_changeevent_isbase = false;
            KDatePickerPopup::changeEvent(param1);
        } else if (kdatepickerpopup_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kdatepickerpopup_changeevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kdatepickerpopup_keypressevent_isbase) {
            kdatepickerpopup_keypressevent_isbase = false;
            KDatePickerPopup::keyPressEvent(param1);
        } else if (kdatepickerpopup_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            kdatepickerpopup_keypressevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (kdatepickerpopup_mousereleaseevent_isbase) {
            kdatepickerpopup_mousereleaseevent_isbase = false;
            KDatePickerPopup::mouseReleaseEvent(param1);
        } else if (kdatepickerpopup_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            kdatepickerpopup_mousereleaseevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (kdatepickerpopup_mousepressevent_isbase) {
            kdatepickerpopup_mousepressevent_isbase = false;
            KDatePickerPopup::mousePressEvent(param1);
        } else if (kdatepickerpopup_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            kdatepickerpopup_mousepressevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (kdatepickerpopup_mousemoveevent_isbase) {
            kdatepickerpopup_mousemoveevent_isbase = false;
            KDatePickerPopup::mouseMoveEvent(param1);
        } else if (kdatepickerpopup_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            kdatepickerpopup_mousemoveevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (kdatepickerpopup_wheelevent_isbase) {
            kdatepickerpopup_wheelevent_isbase = false;
            KDatePickerPopup::wheelEvent(param1);
        } else if (kdatepickerpopup_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = param1;

            kdatepickerpopup_wheelevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::wheelEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* param1) override {
        if (kdatepickerpopup_enterevent_isbase) {
            kdatepickerpopup_enterevent_isbase = false;
            KDatePickerPopup::enterEvent(param1);
        } else if (kdatepickerpopup_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = param1;

            kdatepickerpopup_enterevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::enterEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (kdatepickerpopup_leaveevent_isbase) {
            kdatepickerpopup_leaveevent_isbase = false;
            KDatePickerPopup::leaveEvent(param1);
        } else if (kdatepickerpopup_leaveevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kdatepickerpopup_leaveevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::leaveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (kdatepickerpopup_hideevent_isbase) {
            kdatepickerpopup_hideevent_isbase = false;
            KDatePickerPopup::hideEvent(param1);
        } else if (kdatepickerpopup_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = param1;

            kdatepickerpopup_hideevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::hideEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kdatepickerpopup_paintevent_isbase) {
            kdatepickerpopup_paintevent_isbase = false;
            KDatePickerPopup::paintEvent(param1);
        } else if (kdatepickerpopup_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            kdatepickerpopup_paintevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (kdatepickerpopup_actionevent_isbase) {
            kdatepickerpopup_actionevent_isbase = false;
            KDatePickerPopup::actionEvent(param1);
        } else if (kdatepickerpopup_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = param1;

            kdatepickerpopup_actionevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::actionEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (kdatepickerpopup_timerevent_isbase) {
            kdatepickerpopup_timerevent_isbase = false;
            KDatePickerPopup::timerEvent(param1);
        } else if (kdatepickerpopup_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = param1;

            kdatepickerpopup_timerevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::timerEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (kdatepickerpopup_event_isbase) {
            kdatepickerpopup_event_isbase = false;
            return KDatePickerPopup::event(param1);
        } else if (kdatepickerpopup_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = kdatepickerpopup_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDatePickerPopup::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kdatepickerpopup_focusnextprevchild_isbase) {
            kdatepickerpopup_focusnextprevchild_isbase = false;
            return KDatePickerPopup::focusNextPrevChild(next);
        } else if (kdatepickerpopup_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kdatepickerpopup_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDatePickerPopup::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionMenuItem* option, const QAction* action) const override {
        if (kdatepickerpopup_initstyleoption_isbase) {
            kdatepickerpopup_initstyleoption_isbase = false;
            KDatePickerPopup::initStyleOption(option, action);
        } else if (kdatepickerpopup_initstyleoption_callback != nullptr) {
            QStyleOptionMenuItem* cbval1 = option;
            QAction* cbval2 = (QAction*)action;

            kdatepickerpopup_initstyleoption_callback(this, cbval1, cbval2);
        } else {
            KDatePickerPopup::initStyleOption(option, action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kdatepickerpopup_devtype_isbase) {
            kdatepickerpopup_devtype_isbase = false;
            return KDatePickerPopup::devType();
        } else if (kdatepickerpopup_devtype_callback != nullptr) {
            int callback_ret = kdatepickerpopup_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KDatePickerPopup::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kdatepickerpopup_setvisible_isbase) {
            kdatepickerpopup_setvisible_isbase = false;
            KDatePickerPopup::setVisible(visible);
        } else if (kdatepickerpopup_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kdatepickerpopup_setvisible_callback(this, cbval1);
        } else {
            KDatePickerPopup::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kdatepickerpopup_minimumsizehint_isbase) {
            kdatepickerpopup_minimumsizehint_isbase = false;
            return KDatePickerPopup::minimumSizeHint();
        } else if (kdatepickerpopup_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kdatepickerpopup_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KDatePickerPopup::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kdatepickerpopup_heightforwidth_isbase) {
            kdatepickerpopup_heightforwidth_isbase = false;
            return KDatePickerPopup::heightForWidth(param1);
        } else if (kdatepickerpopup_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kdatepickerpopup_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDatePickerPopup::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kdatepickerpopup_hasheightforwidth_isbase) {
            kdatepickerpopup_hasheightforwidth_isbase = false;
            return KDatePickerPopup::hasHeightForWidth();
        } else if (kdatepickerpopup_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kdatepickerpopup_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KDatePickerPopup::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kdatepickerpopup_paintengine_isbase) {
            kdatepickerpopup_paintengine_isbase = false;
            return KDatePickerPopup::paintEngine();
        } else if (kdatepickerpopup_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kdatepickerpopup_paintengine_callback();
            return callback_ret;
        } else {
            return KDatePickerPopup::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kdatepickerpopup_mousedoubleclickevent_isbase) {
            kdatepickerpopup_mousedoubleclickevent_isbase = false;
            KDatePickerPopup::mouseDoubleClickEvent(event);
        } else if (kdatepickerpopup_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kdatepickerpopup_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kdatepickerpopup_keyreleaseevent_isbase) {
            kdatepickerpopup_keyreleaseevent_isbase = false;
            KDatePickerPopup::keyReleaseEvent(event);
        } else if (kdatepickerpopup_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kdatepickerpopup_keyreleaseevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kdatepickerpopup_focusinevent_isbase) {
            kdatepickerpopup_focusinevent_isbase = false;
            KDatePickerPopup::focusInEvent(event);
        } else if (kdatepickerpopup_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kdatepickerpopup_focusinevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kdatepickerpopup_focusoutevent_isbase) {
            kdatepickerpopup_focusoutevent_isbase = false;
            KDatePickerPopup::focusOutEvent(event);
        } else if (kdatepickerpopup_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kdatepickerpopup_focusoutevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kdatepickerpopup_moveevent_isbase) {
            kdatepickerpopup_moveevent_isbase = false;
            KDatePickerPopup::moveEvent(event);
        } else if (kdatepickerpopup_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kdatepickerpopup_moveevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kdatepickerpopup_resizeevent_isbase) {
            kdatepickerpopup_resizeevent_isbase = false;
            KDatePickerPopup::resizeEvent(event);
        } else if (kdatepickerpopup_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kdatepickerpopup_resizeevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kdatepickerpopup_closeevent_isbase) {
            kdatepickerpopup_closeevent_isbase = false;
            KDatePickerPopup::closeEvent(event);
        } else if (kdatepickerpopup_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kdatepickerpopup_closeevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kdatepickerpopup_contextmenuevent_isbase) {
            kdatepickerpopup_contextmenuevent_isbase = false;
            KDatePickerPopup::contextMenuEvent(event);
        } else if (kdatepickerpopup_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kdatepickerpopup_contextmenuevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kdatepickerpopup_tabletevent_isbase) {
            kdatepickerpopup_tabletevent_isbase = false;
            KDatePickerPopup::tabletEvent(event);
        } else if (kdatepickerpopup_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kdatepickerpopup_tabletevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kdatepickerpopup_dragenterevent_isbase) {
            kdatepickerpopup_dragenterevent_isbase = false;
            KDatePickerPopup::dragEnterEvent(event);
        } else if (kdatepickerpopup_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kdatepickerpopup_dragenterevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kdatepickerpopup_dragmoveevent_isbase) {
            kdatepickerpopup_dragmoveevent_isbase = false;
            KDatePickerPopup::dragMoveEvent(event);
        } else if (kdatepickerpopup_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kdatepickerpopup_dragmoveevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kdatepickerpopup_dragleaveevent_isbase) {
            kdatepickerpopup_dragleaveevent_isbase = false;
            KDatePickerPopup::dragLeaveEvent(event);
        } else if (kdatepickerpopup_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kdatepickerpopup_dragleaveevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kdatepickerpopup_dropevent_isbase) {
            kdatepickerpopup_dropevent_isbase = false;
            KDatePickerPopup::dropEvent(event);
        } else if (kdatepickerpopup_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kdatepickerpopup_dropevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kdatepickerpopup_showevent_isbase) {
            kdatepickerpopup_showevent_isbase = false;
            KDatePickerPopup::showEvent(event);
        } else if (kdatepickerpopup_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kdatepickerpopup_showevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kdatepickerpopup_nativeevent_isbase) {
            kdatepickerpopup_nativeevent_isbase = false;
            return KDatePickerPopup::nativeEvent(eventType, message, result);
        } else if (kdatepickerpopup_nativeevent_callback != nullptr) {
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

            bool callback_ret = kdatepickerpopup_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KDatePickerPopup::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kdatepickerpopup_metric_isbase) {
            kdatepickerpopup_metric_isbase = false;
            return KDatePickerPopup::metric(param1);
        } else if (kdatepickerpopup_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kdatepickerpopup_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDatePickerPopup::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kdatepickerpopup_initpainter_isbase) {
            kdatepickerpopup_initpainter_isbase = false;
            KDatePickerPopup::initPainter(painter);
        } else if (kdatepickerpopup_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kdatepickerpopup_initpainter_callback(this, cbval1);
        } else {
            KDatePickerPopup::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kdatepickerpopup_redirected_isbase) {
            kdatepickerpopup_redirected_isbase = false;
            return KDatePickerPopup::redirected(offset);
        } else if (kdatepickerpopup_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kdatepickerpopup_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDatePickerPopup::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kdatepickerpopup_sharedpainter_isbase) {
            kdatepickerpopup_sharedpainter_isbase = false;
            return KDatePickerPopup::sharedPainter();
        } else if (kdatepickerpopup_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kdatepickerpopup_sharedpainter_callback();
            return callback_ret;
        } else {
            return KDatePickerPopup::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kdatepickerpopup_inputmethodevent_isbase) {
            kdatepickerpopup_inputmethodevent_isbase = false;
            KDatePickerPopup::inputMethodEvent(param1);
        } else if (kdatepickerpopup_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kdatepickerpopup_inputmethodevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kdatepickerpopup_inputmethodquery_isbase) {
            kdatepickerpopup_inputmethodquery_isbase = false;
            return KDatePickerPopup::inputMethodQuery(param1);
        } else if (kdatepickerpopup_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kdatepickerpopup_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KDatePickerPopup::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kdatepickerpopup_eventfilter_isbase) {
            kdatepickerpopup_eventfilter_isbase = false;
            return KDatePickerPopup::eventFilter(watched, event);
        } else if (kdatepickerpopup_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kdatepickerpopup_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KDatePickerPopup::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdatepickerpopup_childevent_isbase) {
            kdatepickerpopup_childevent_isbase = false;
            KDatePickerPopup::childEvent(event);
        } else if (kdatepickerpopup_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kdatepickerpopup_childevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdatepickerpopup_customevent_isbase) {
            kdatepickerpopup_customevent_isbase = false;
            KDatePickerPopup::customEvent(event);
        } else if (kdatepickerpopup_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kdatepickerpopup_customevent_callback(this, cbval1);
        } else {
            KDatePickerPopup::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdatepickerpopup_connectnotify_isbase) {
            kdatepickerpopup_connectnotify_isbase = false;
            KDatePickerPopup::connectNotify(signal);
        } else if (kdatepickerpopup_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdatepickerpopup_connectnotify_callback(this, cbval1);
        } else {
            KDatePickerPopup::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdatepickerpopup_disconnectnotify_isbase) {
            kdatepickerpopup_disconnectnotify_isbase = false;
            KDatePickerPopup::disconnectNotify(signal);
        } else if (kdatepickerpopup_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdatepickerpopup_disconnectnotify_callback(this, cbval1);
        } else {
            KDatePickerPopup::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    int columnCount() const {
        if (kdatepickerpopup_columncount_isbase) {
            kdatepickerpopup_columncount_isbase = false;
            return KDatePickerPopup::columnCount();
        } else if (kdatepickerpopup_columncount_callback != nullptr) {
            int callback_ret = kdatepickerpopup_columncount_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KDatePickerPopup::columnCount();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kdatepickerpopup_updatemicrofocus_isbase) {
            kdatepickerpopup_updatemicrofocus_isbase = false;
            KDatePickerPopup::updateMicroFocus();
        } else if (kdatepickerpopup_updatemicrofocus_callback != nullptr) {
            kdatepickerpopup_updatemicrofocus_callback();
        } else {
            KDatePickerPopup::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kdatepickerpopup_create_isbase) {
            kdatepickerpopup_create_isbase = false;
            KDatePickerPopup::create();
        } else if (kdatepickerpopup_create_callback != nullptr) {
            kdatepickerpopup_create_callback();
        } else {
            KDatePickerPopup::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kdatepickerpopup_destroy_isbase) {
            kdatepickerpopup_destroy_isbase = false;
            KDatePickerPopup::destroy();
        } else if (kdatepickerpopup_destroy_callback != nullptr) {
            kdatepickerpopup_destroy_callback();
        } else {
            KDatePickerPopup::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kdatepickerpopup_focusnextchild_isbase) {
            kdatepickerpopup_focusnextchild_isbase = false;
            return KDatePickerPopup::focusNextChild();
        } else if (kdatepickerpopup_focusnextchild_callback != nullptr) {
            bool callback_ret = kdatepickerpopup_focusnextchild_callback();
            return callback_ret;
        } else {
            return KDatePickerPopup::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kdatepickerpopup_focuspreviouschild_isbase) {
            kdatepickerpopup_focuspreviouschild_isbase = false;
            return KDatePickerPopup::focusPreviousChild();
        } else if (kdatepickerpopup_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kdatepickerpopup_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KDatePickerPopup::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kdatepickerpopup_sender_isbase) {
            kdatepickerpopup_sender_isbase = false;
            return KDatePickerPopup::sender();
        } else if (kdatepickerpopup_sender_callback != nullptr) {
            QObject* callback_ret = kdatepickerpopup_sender_callback();
            return callback_ret;
        } else {
            return KDatePickerPopup::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kdatepickerpopup_sendersignalindex_isbase) {
            kdatepickerpopup_sendersignalindex_isbase = false;
            return KDatePickerPopup::senderSignalIndex();
        } else if (kdatepickerpopup_sendersignalindex_callback != nullptr) {
            int callback_ret = kdatepickerpopup_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KDatePickerPopup::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kdatepickerpopup_receivers_isbase) {
            kdatepickerpopup_receivers_isbase = false;
            return KDatePickerPopup::receivers(signal);
        } else if (kdatepickerpopup_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kdatepickerpopup_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDatePickerPopup::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kdatepickerpopup_issignalconnected_isbase) {
            kdatepickerpopup_issignalconnected_isbase = false;
            return KDatePickerPopup::isSignalConnected(signal);
        } else if (kdatepickerpopup_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kdatepickerpopup_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDatePickerPopup::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kdatepickerpopup_getdecodedmetricf_isbase) {
            kdatepickerpopup_getdecodedmetricf_isbase = false;
            return KDatePickerPopup::getDecodedMetricF(metricA, metricB);
        } else if (kdatepickerpopup_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kdatepickerpopup_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KDatePickerPopup::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KDatePickerPopup_ChangeEvent(KDatePickerPopup* self, QEvent* param1);
    friend void KDatePickerPopup_QBaseChangeEvent(KDatePickerPopup* self, QEvent* param1);
    friend void KDatePickerPopup_KeyPressEvent(KDatePickerPopup* self, QKeyEvent* param1);
    friend void KDatePickerPopup_QBaseKeyPressEvent(KDatePickerPopup* self, QKeyEvent* param1);
    friend void KDatePickerPopup_MouseReleaseEvent(KDatePickerPopup* self, QMouseEvent* param1);
    friend void KDatePickerPopup_QBaseMouseReleaseEvent(KDatePickerPopup* self, QMouseEvent* param1);
    friend void KDatePickerPopup_MousePressEvent(KDatePickerPopup* self, QMouseEvent* param1);
    friend void KDatePickerPopup_QBaseMousePressEvent(KDatePickerPopup* self, QMouseEvent* param1);
    friend void KDatePickerPopup_MouseMoveEvent(KDatePickerPopup* self, QMouseEvent* param1);
    friend void KDatePickerPopup_QBaseMouseMoveEvent(KDatePickerPopup* self, QMouseEvent* param1);
    friend void KDatePickerPopup_WheelEvent(KDatePickerPopup* self, QWheelEvent* param1);
    friend void KDatePickerPopup_QBaseWheelEvent(KDatePickerPopup* self, QWheelEvent* param1);
    friend void KDatePickerPopup_EnterEvent(KDatePickerPopup* self, QEnterEvent* param1);
    friend void KDatePickerPopup_QBaseEnterEvent(KDatePickerPopup* self, QEnterEvent* param1);
    friend void KDatePickerPopup_LeaveEvent(KDatePickerPopup* self, QEvent* param1);
    friend void KDatePickerPopup_QBaseLeaveEvent(KDatePickerPopup* self, QEvent* param1);
    friend void KDatePickerPopup_HideEvent(KDatePickerPopup* self, QHideEvent* param1);
    friend void KDatePickerPopup_QBaseHideEvent(KDatePickerPopup* self, QHideEvent* param1);
    friend void KDatePickerPopup_PaintEvent(KDatePickerPopup* self, QPaintEvent* param1);
    friend void KDatePickerPopup_QBasePaintEvent(KDatePickerPopup* self, QPaintEvent* param1);
    friend void KDatePickerPopup_ActionEvent(KDatePickerPopup* self, QActionEvent* param1);
    friend void KDatePickerPopup_QBaseActionEvent(KDatePickerPopup* self, QActionEvent* param1);
    friend void KDatePickerPopup_TimerEvent(KDatePickerPopup* self, QTimerEvent* param1);
    friend void KDatePickerPopup_QBaseTimerEvent(KDatePickerPopup* self, QTimerEvent* param1);
    friend bool KDatePickerPopup_Event(KDatePickerPopup* self, QEvent* param1);
    friend bool KDatePickerPopup_QBaseEvent(KDatePickerPopup* self, QEvent* param1);
    friend bool KDatePickerPopup_FocusNextPrevChild(KDatePickerPopup* self, bool next);
    friend bool KDatePickerPopup_QBaseFocusNextPrevChild(KDatePickerPopup* self, bool next);
    friend void KDatePickerPopup_InitStyleOption(const KDatePickerPopup* self, QStyleOptionMenuItem* option, const QAction* action);
    friend void KDatePickerPopup_QBaseInitStyleOption(const KDatePickerPopup* self, QStyleOptionMenuItem* option, const QAction* action);
    friend void KDatePickerPopup_MouseDoubleClickEvent(KDatePickerPopup* self, QMouseEvent* event);
    friend void KDatePickerPopup_QBaseMouseDoubleClickEvent(KDatePickerPopup* self, QMouseEvent* event);
    friend void KDatePickerPopup_KeyReleaseEvent(KDatePickerPopup* self, QKeyEvent* event);
    friend void KDatePickerPopup_QBaseKeyReleaseEvent(KDatePickerPopup* self, QKeyEvent* event);
    friend void KDatePickerPopup_FocusInEvent(KDatePickerPopup* self, QFocusEvent* event);
    friend void KDatePickerPopup_QBaseFocusInEvent(KDatePickerPopup* self, QFocusEvent* event);
    friend void KDatePickerPopup_FocusOutEvent(KDatePickerPopup* self, QFocusEvent* event);
    friend void KDatePickerPopup_QBaseFocusOutEvent(KDatePickerPopup* self, QFocusEvent* event);
    friend void KDatePickerPopup_MoveEvent(KDatePickerPopup* self, QMoveEvent* event);
    friend void KDatePickerPopup_QBaseMoveEvent(KDatePickerPopup* self, QMoveEvent* event);
    friend void KDatePickerPopup_ResizeEvent(KDatePickerPopup* self, QResizeEvent* event);
    friend void KDatePickerPopup_QBaseResizeEvent(KDatePickerPopup* self, QResizeEvent* event);
    friend void KDatePickerPopup_CloseEvent(KDatePickerPopup* self, QCloseEvent* event);
    friend void KDatePickerPopup_QBaseCloseEvent(KDatePickerPopup* self, QCloseEvent* event);
    friend void KDatePickerPopup_ContextMenuEvent(KDatePickerPopup* self, QContextMenuEvent* event);
    friend void KDatePickerPopup_QBaseContextMenuEvent(KDatePickerPopup* self, QContextMenuEvent* event);
    friend void KDatePickerPopup_TabletEvent(KDatePickerPopup* self, QTabletEvent* event);
    friend void KDatePickerPopup_QBaseTabletEvent(KDatePickerPopup* self, QTabletEvent* event);
    friend void KDatePickerPopup_DragEnterEvent(KDatePickerPopup* self, QDragEnterEvent* event);
    friend void KDatePickerPopup_QBaseDragEnterEvent(KDatePickerPopup* self, QDragEnterEvent* event);
    friend void KDatePickerPopup_DragMoveEvent(KDatePickerPopup* self, QDragMoveEvent* event);
    friend void KDatePickerPopup_QBaseDragMoveEvent(KDatePickerPopup* self, QDragMoveEvent* event);
    friend void KDatePickerPopup_DragLeaveEvent(KDatePickerPopup* self, QDragLeaveEvent* event);
    friend void KDatePickerPopup_QBaseDragLeaveEvent(KDatePickerPopup* self, QDragLeaveEvent* event);
    friend void KDatePickerPopup_DropEvent(KDatePickerPopup* self, QDropEvent* event);
    friend void KDatePickerPopup_QBaseDropEvent(KDatePickerPopup* self, QDropEvent* event);
    friend void KDatePickerPopup_ShowEvent(KDatePickerPopup* self, QShowEvent* event);
    friend void KDatePickerPopup_QBaseShowEvent(KDatePickerPopup* self, QShowEvent* event);
    friend bool KDatePickerPopup_NativeEvent(KDatePickerPopup* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KDatePickerPopup_QBaseNativeEvent(KDatePickerPopup* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KDatePickerPopup_Metric(const KDatePickerPopup* self, int param1);
    friend int KDatePickerPopup_QBaseMetric(const KDatePickerPopup* self, int param1);
    friend void KDatePickerPopup_InitPainter(const KDatePickerPopup* self, QPainter* painter);
    friend void KDatePickerPopup_QBaseInitPainter(const KDatePickerPopup* self, QPainter* painter);
    friend QPaintDevice* KDatePickerPopup_Redirected(const KDatePickerPopup* self, QPoint* offset);
    friend QPaintDevice* KDatePickerPopup_QBaseRedirected(const KDatePickerPopup* self, QPoint* offset);
    friend QPainter* KDatePickerPopup_SharedPainter(const KDatePickerPopup* self);
    friend QPainter* KDatePickerPopup_QBaseSharedPainter(const KDatePickerPopup* self);
    friend void KDatePickerPopup_InputMethodEvent(KDatePickerPopup* self, QInputMethodEvent* param1);
    friend void KDatePickerPopup_QBaseInputMethodEvent(KDatePickerPopup* self, QInputMethodEvent* param1);
    friend void KDatePickerPopup_ChildEvent(KDatePickerPopup* self, QChildEvent* event);
    friend void KDatePickerPopup_QBaseChildEvent(KDatePickerPopup* self, QChildEvent* event);
    friend void KDatePickerPopup_CustomEvent(KDatePickerPopup* self, QEvent* event);
    friend void KDatePickerPopup_QBaseCustomEvent(KDatePickerPopup* self, QEvent* event);
    friend void KDatePickerPopup_ConnectNotify(KDatePickerPopup* self, const QMetaMethod* signal);
    friend void KDatePickerPopup_QBaseConnectNotify(KDatePickerPopup* self, const QMetaMethod* signal);
    friend void KDatePickerPopup_DisconnectNotify(KDatePickerPopup* self, const QMetaMethod* signal);
    friend void KDatePickerPopup_QBaseDisconnectNotify(KDatePickerPopup* self, const QMetaMethod* signal);
    friend int KDatePickerPopup_ColumnCount(const KDatePickerPopup* self);
    friend int KDatePickerPopup_QBaseColumnCount(const KDatePickerPopup* self);
    friend void KDatePickerPopup_UpdateMicroFocus(KDatePickerPopup* self);
    friend void KDatePickerPopup_QBaseUpdateMicroFocus(KDatePickerPopup* self);
    friend void KDatePickerPopup_Create(KDatePickerPopup* self);
    friend void KDatePickerPopup_QBaseCreate(KDatePickerPopup* self);
    friend void KDatePickerPopup_Destroy(KDatePickerPopup* self);
    friend void KDatePickerPopup_QBaseDestroy(KDatePickerPopup* self);
    friend bool KDatePickerPopup_FocusNextChild(KDatePickerPopup* self);
    friend bool KDatePickerPopup_QBaseFocusNextChild(KDatePickerPopup* self);
    friend bool KDatePickerPopup_FocusPreviousChild(KDatePickerPopup* self);
    friend bool KDatePickerPopup_QBaseFocusPreviousChild(KDatePickerPopup* self);
    friend QObject* KDatePickerPopup_Sender(const KDatePickerPopup* self);
    friend QObject* KDatePickerPopup_QBaseSender(const KDatePickerPopup* self);
    friend int KDatePickerPopup_SenderSignalIndex(const KDatePickerPopup* self);
    friend int KDatePickerPopup_QBaseSenderSignalIndex(const KDatePickerPopup* self);
    friend int KDatePickerPopup_Receivers(const KDatePickerPopup* self, const char* signal);
    friend int KDatePickerPopup_QBaseReceivers(const KDatePickerPopup* self, const char* signal);
    friend bool KDatePickerPopup_IsSignalConnected(const KDatePickerPopup* self, const QMetaMethod* signal);
    friend bool KDatePickerPopup_QBaseIsSignalConnected(const KDatePickerPopup* self, const QMetaMethod* signal);
    friend double KDatePickerPopup_GetDecodedMetricF(const KDatePickerPopup* self, int metricA, int metricB);
    friend double KDatePickerPopup_QBaseGetDecodedMetricF(const KDatePickerPopup* self, int metricA, int metricB);
};

#endif
