#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKCOLORCOMBO_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKCOLORCOMBO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KColorCombo so that we can call protected methods
class VirtualKColorCombo final : public KColorCombo {

  public:
    // Virtual class boolean flag
    bool isVirtualKColorCombo = true;

    // Virtual class public types (including callbacks)
    using KColorCombo_Metacall_Callback = int (*)(KColorCombo*, int, int, void**);
    using KColorCombo_PaintEvent_Callback = void (*)(KColorCombo*, QPaintEvent*);
    using KColorCombo_SetModel_Callback = void (*)(KColorCombo*, QAbstractItemModel*);
    using KColorCombo_SizeHint_Callback = QSize* (*)();
    using KColorCombo_MinimumSizeHint_Callback = QSize* (*)();
    using KColorCombo_ShowPopup_Callback = void (*)();
    using KColorCombo_HidePopup_Callback = void (*)();
    using KColorCombo_Event_Callback = bool (*)(KColorCombo*, QEvent*);
    using KColorCombo_InputMethodQuery_Callback = QVariant* (*)(const KColorCombo*, int);
    using KColorCombo_FocusInEvent_Callback = void (*)(KColorCombo*, QFocusEvent*);
    using KColorCombo_FocusOutEvent_Callback = void (*)(KColorCombo*, QFocusEvent*);
    using KColorCombo_ChangeEvent_Callback = void (*)(KColorCombo*, QEvent*);
    using KColorCombo_ResizeEvent_Callback = void (*)(KColorCombo*, QResizeEvent*);
    using KColorCombo_ShowEvent_Callback = void (*)(KColorCombo*, QShowEvent*);
    using KColorCombo_HideEvent_Callback = void (*)(KColorCombo*, QHideEvent*);
    using KColorCombo_MousePressEvent_Callback = void (*)(KColorCombo*, QMouseEvent*);
    using KColorCombo_MouseReleaseEvent_Callback = void (*)(KColorCombo*, QMouseEvent*);
    using KColorCombo_KeyPressEvent_Callback = void (*)(KColorCombo*, QKeyEvent*);
    using KColorCombo_KeyReleaseEvent_Callback = void (*)(KColorCombo*, QKeyEvent*);
    using KColorCombo_WheelEvent_Callback = void (*)(KColorCombo*, QWheelEvent*);
    using KColorCombo_ContextMenuEvent_Callback = void (*)(KColorCombo*, QContextMenuEvent*);
    using KColorCombo_InputMethodEvent_Callback = void (*)(KColorCombo*, QInputMethodEvent*);
    using KColorCombo_InitStyleOption_Callback = void (*)(const KColorCombo*, QStyleOptionComboBox*);
    using KColorCombo_DevType_Callback = int (*)();
    using KColorCombo_SetVisible_Callback = void (*)(KColorCombo*, bool);
    using KColorCombo_HeightForWidth_Callback = int (*)(const KColorCombo*, int);
    using KColorCombo_HasHeightForWidth_Callback = bool (*)();
    using KColorCombo_PaintEngine_Callback = QPaintEngine* (*)();
    using KColorCombo_MouseDoubleClickEvent_Callback = void (*)(KColorCombo*, QMouseEvent*);
    using KColorCombo_MouseMoveEvent_Callback = void (*)(KColorCombo*, QMouseEvent*);
    using KColorCombo_EnterEvent_Callback = void (*)(KColorCombo*, QEnterEvent*);
    using KColorCombo_LeaveEvent_Callback = void (*)(KColorCombo*, QEvent*);
    using KColorCombo_MoveEvent_Callback = void (*)(KColorCombo*, QMoveEvent*);
    using KColorCombo_CloseEvent_Callback = void (*)(KColorCombo*, QCloseEvent*);
    using KColorCombo_TabletEvent_Callback = void (*)(KColorCombo*, QTabletEvent*);
    using KColorCombo_ActionEvent_Callback = void (*)(KColorCombo*, QActionEvent*);
    using KColorCombo_DragEnterEvent_Callback = void (*)(KColorCombo*, QDragEnterEvent*);
    using KColorCombo_DragMoveEvent_Callback = void (*)(KColorCombo*, QDragMoveEvent*);
    using KColorCombo_DragLeaveEvent_Callback = void (*)(KColorCombo*, QDragLeaveEvent*);
    using KColorCombo_DropEvent_Callback = void (*)(KColorCombo*, QDropEvent*);
    using KColorCombo_NativeEvent_Callback = bool (*)(KColorCombo*, libqt_string, void*, intptr_t*);
    using KColorCombo_Metric_Callback = int (*)(const KColorCombo*, int);
    using KColorCombo_InitPainter_Callback = void (*)(const KColorCombo*, QPainter*);
    using KColorCombo_Redirected_Callback = QPaintDevice* (*)(const KColorCombo*, QPoint*);
    using KColorCombo_SharedPainter_Callback = QPainter* (*)();
    using KColorCombo_FocusNextPrevChild_Callback = bool (*)(KColorCombo*, bool);
    using KColorCombo_EventFilter_Callback = bool (*)(KColorCombo*, QObject*, QEvent*);
    using KColorCombo_TimerEvent_Callback = void (*)(KColorCombo*, QTimerEvent*);
    using KColorCombo_ChildEvent_Callback = void (*)(KColorCombo*, QChildEvent*);
    using KColorCombo_CustomEvent_Callback = void (*)(KColorCombo*, QEvent*);
    using KColorCombo_ConnectNotify_Callback = void (*)(KColorCombo*, QMetaMethod*);
    using KColorCombo_DisconnectNotify_Callback = void (*)(KColorCombo*, QMetaMethod*);
    using KColorCombo_UpdateMicroFocus_Callback = void (*)();
    using KColorCombo_Create_Callback = void (*)();
    using KColorCombo_Destroy_Callback = void (*)();
    using KColorCombo_FocusNextChild_Callback = bool (*)();
    using KColorCombo_FocusPreviousChild_Callback = bool (*)();
    using KColorCombo_Sender_Callback = QObject* (*)();
    using KColorCombo_SenderSignalIndex_Callback = int (*)();
    using KColorCombo_Receivers_Callback = int (*)(const KColorCombo*, const char*);
    using KColorCombo_IsSignalConnected_Callback = bool (*)(const KColorCombo*, QMetaMethod*);
    using KColorCombo_GetDecodedMetricF_Callback = double (*)(const KColorCombo*, int, int);

  protected:
    // Instance callback storage
    KColorCombo_Metacall_Callback kcolorcombo_metacall_callback = nullptr;
    KColorCombo_PaintEvent_Callback kcolorcombo_paintevent_callback = nullptr;
    KColorCombo_SetModel_Callback kcolorcombo_setmodel_callback = nullptr;
    KColorCombo_SizeHint_Callback kcolorcombo_sizehint_callback = nullptr;
    KColorCombo_MinimumSizeHint_Callback kcolorcombo_minimumsizehint_callback = nullptr;
    KColorCombo_ShowPopup_Callback kcolorcombo_showpopup_callback = nullptr;
    KColorCombo_HidePopup_Callback kcolorcombo_hidepopup_callback = nullptr;
    KColorCombo_Event_Callback kcolorcombo_event_callback = nullptr;
    KColorCombo_InputMethodQuery_Callback kcolorcombo_inputmethodquery_callback = nullptr;
    KColorCombo_FocusInEvent_Callback kcolorcombo_focusinevent_callback = nullptr;
    KColorCombo_FocusOutEvent_Callback kcolorcombo_focusoutevent_callback = nullptr;
    KColorCombo_ChangeEvent_Callback kcolorcombo_changeevent_callback = nullptr;
    KColorCombo_ResizeEvent_Callback kcolorcombo_resizeevent_callback = nullptr;
    KColorCombo_ShowEvent_Callback kcolorcombo_showevent_callback = nullptr;
    KColorCombo_HideEvent_Callback kcolorcombo_hideevent_callback = nullptr;
    KColorCombo_MousePressEvent_Callback kcolorcombo_mousepressevent_callback = nullptr;
    KColorCombo_MouseReleaseEvent_Callback kcolorcombo_mousereleaseevent_callback = nullptr;
    KColorCombo_KeyPressEvent_Callback kcolorcombo_keypressevent_callback = nullptr;
    KColorCombo_KeyReleaseEvent_Callback kcolorcombo_keyreleaseevent_callback = nullptr;
    KColorCombo_WheelEvent_Callback kcolorcombo_wheelevent_callback = nullptr;
    KColorCombo_ContextMenuEvent_Callback kcolorcombo_contextmenuevent_callback = nullptr;
    KColorCombo_InputMethodEvent_Callback kcolorcombo_inputmethodevent_callback = nullptr;
    KColorCombo_InitStyleOption_Callback kcolorcombo_initstyleoption_callback = nullptr;
    KColorCombo_DevType_Callback kcolorcombo_devtype_callback = nullptr;
    KColorCombo_SetVisible_Callback kcolorcombo_setvisible_callback = nullptr;
    KColorCombo_HeightForWidth_Callback kcolorcombo_heightforwidth_callback = nullptr;
    KColorCombo_HasHeightForWidth_Callback kcolorcombo_hasheightforwidth_callback = nullptr;
    KColorCombo_PaintEngine_Callback kcolorcombo_paintengine_callback = nullptr;
    KColorCombo_MouseDoubleClickEvent_Callback kcolorcombo_mousedoubleclickevent_callback = nullptr;
    KColorCombo_MouseMoveEvent_Callback kcolorcombo_mousemoveevent_callback = nullptr;
    KColorCombo_EnterEvent_Callback kcolorcombo_enterevent_callback = nullptr;
    KColorCombo_LeaveEvent_Callback kcolorcombo_leaveevent_callback = nullptr;
    KColorCombo_MoveEvent_Callback kcolorcombo_moveevent_callback = nullptr;
    KColorCombo_CloseEvent_Callback kcolorcombo_closeevent_callback = nullptr;
    KColorCombo_TabletEvent_Callback kcolorcombo_tabletevent_callback = nullptr;
    KColorCombo_ActionEvent_Callback kcolorcombo_actionevent_callback = nullptr;
    KColorCombo_DragEnterEvent_Callback kcolorcombo_dragenterevent_callback = nullptr;
    KColorCombo_DragMoveEvent_Callback kcolorcombo_dragmoveevent_callback = nullptr;
    KColorCombo_DragLeaveEvent_Callback kcolorcombo_dragleaveevent_callback = nullptr;
    KColorCombo_DropEvent_Callback kcolorcombo_dropevent_callback = nullptr;
    KColorCombo_NativeEvent_Callback kcolorcombo_nativeevent_callback = nullptr;
    KColorCombo_Metric_Callback kcolorcombo_metric_callback = nullptr;
    KColorCombo_InitPainter_Callback kcolorcombo_initpainter_callback = nullptr;
    KColorCombo_Redirected_Callback kcolorcombo_redirected_callback = nullptr;
    KColorCombo_SharedPainter_Callback kcolorcombo_sharedpainter_callback = nullptr;
    KColorCombo_FocusNextPrevChild_Callback kcolorcombo_focusnextprevchild_callback = nullptr;
    KColorCombo_EventFilter_Callback kcolorcombo_eventfilter_callback = nullptr;
    KColorCombo_TimerEvent_Callback kcolorcombo_timerevent_callback = nullptr;
    KColorCombo_ChildEvent_Callback kcolorcombo_childevent_callback = nullptr;
    KColorCombo_CustomEvent_Callback kcolorcombo_customevent_callback = nullptr;
    KColorCombo_ConnectNotify_Callback kcolorcombo_connectnotify_callback = nullptr;
    KColorCombo_DisconnectNotify_Callback kcolorcombo_disconnectnotify_callback = nullptr;
    KColorCombo_UpdateMicroFocus_Callback kcolorcombo_updatemicrofocus_callback = nullptr;
    KColorCombo_Create_Callback kcolorcombo_create_callback = nullptr;
    KColorCombo_Destroy_Callback kcolorcombo_destroy_callback = nullptr;
    KColorCombo_FocusNextChild_Callback kcolorcombo_focusnextchild_callback = nullptr;
    KColorCombo_FocusPreviousChild_Callback kcolorcombo_focuspreviouschild_callback = nullptr;
    KColorCombo_Sender_Callback kcolorcombo_sender_callback = nullptr;
    KColorCombo_SenderSignalIndex_Callback kcolorcombo_sendersignalindex_callback = nullptr;
    KColorCombo_Receivers_Callback kcolorcombo_receivers_callback = nullptr;
    KColorCombo_IsSignalConnected_Callback kcolorcombo_issignalconnected_callback = nullptr;
    KColorCombo_GetDecodedMetricF_Callback kcolorcombo_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kcolorcombo_metacall_isbase = false;
    mutable bool kcolorcombo_paintevent_isbase = false;
    mutable bool kcolorcombo_setmodel_isbase = false;
    mutable bool kcolorcombo_sizehint_isbase = false;
    mutable bool kcolorcombo_minimumsizehint_isbase = false;
    mutable bool kcolorcombo_showpopup_isbase = false;
    mutable bool kcolorcombo_hidepopup_isbase = false;
    mutable bool kcolorcombo_event_isbase = false;
    mutable bool kcolorcombo_inputmethodquery_isbase = false;
    mutable bool kcolorcombo_focusinevent_isbase = false;
    mutable bool kcolorcombo_focusoutevent_isbase = false;
    mutable bool kcolorcombo_changeevent_isbase = false;
    mutable bool kcolorcombo_resizeevent_isbase = false;
    mutable bool kcolorcombo_showevent_isbase = false;
    mutable bool kcolorcombo_hideevent_isbase = false;
    mutable bool kcolorcombo_mousepressevent_isbase = false;
    mutable bool kcolorcombo_mousereleaseevent_isbase = false;
    mutable bool kcolorcombo_keypressevent_isbase = false;
    mutable bool kcolorcombo_keyreleaseevent_isbase = false;
    mutable bool kcolorcombo_wheelevent_isbase = false;
    mutable bool kcolorcombo_contextmenuevent_isbase = false;
    mutable bool kcolorcombo_inputmethodevent_isbase = false;
    mutable bool kcolorcombo_initstyleoption_isbase = false;
    mutable bool kcolorcombo_devtype_isbase = false;
    mutable bool kcolorcombo_setvisible_isbase = false;
    mutable bool kcolorcombo_heightforwidth_isbase = false;
    mutable bool kcolorcombo_hasheightforwidth_isbase = false;
    mutable bool kcolorcombo_paintengine_isbase = false;
    mutable bool kcolorcombo_mousedoubleclickevent_isbase = false;
    mutable bool kcolorcombo_mousemoveevent_isbase = false;
    mutable bool kcolorcombo_enterevent_isbase = false;
    mutable bool kcolorcombo_leaveevent_isbase = false;
    mutable bool kcolorcombo_moveevent_isbase = false;
    mutable bool kcolorcombo_closeevent_isbase = false;
    mutable bool kcolorcombo_tabletevent_isbase = false;
    mutable bool kcolorcombo_actionevent_isbase = false;
    mutable bool kcolorcombo_dragenterevent_isbase = false;
    mutable bool kcolorcombo_dragmoveevent_isbase = false;
    mutable bool kcolorcombo_dragleaveevent_isbase = false;
    mutable bool kcolorcombo_dropevent_isbase = false;
    mutable bool kcolorcombo_nativeevent_isbase = false;
    mutable bool kcolorcombo_metric_isbase = false;
    mutable bool kcolorcombo_initpainter_isbase = false;
    mutable bool kcolorcombo_redirected_isbase = false;
    mutable bool kcolorcombo_sharedpainter_isbase = false;
    mutable bool kcolorcombo_focusnextprevchild_isbase = false;
    mutable bool kcolorcombo_eventfilter_isbase = false;
    mutable bool kcolorcombo_timerevent_isbase = false;
    mutable bool kcolorcombo_childevent_isbase = false;
    mutable bool kcolorcombo_customevent_isbase = false;
    mutable bool kcolorcombo_connectnotify_isbase = false;
    mutable bool kcolorcombo_disconnectnotify_isbase = false;
    mutable bool kcolorcombo_updatemicrofocus_isbase = false;
    mutable bool kcolorcombo_create_isbase = false;
    mutable bool kcolorcombo_destroy_isbase = false;
    mutable bool kcolorcombo_focusnextchild_isbase = false;
    mutable bool kcolorcombo_focuspreviouschild_isbase = false;
    mutable bool kcolorcombo_sender_isbase = false;
    mutable bool kcolorcombo_sendersignalindex_isbase = false;
    mutable bool kcolorcombo_receivers_isbase = false;
    mutable bool kcolorcombo_issignalconnected_isbase = false;
    mutable bool kcolorcombo_getdecodedmetricf_isbase = false;

  public:
    VirtualKColorCombo(QWidget* parent) : KColorCombo(parent) {};
    VirtualKColorCombo() : KColorCombo() {};

    ~VirtualKColorCombo() {
        kcolorcombo_metacall_callback = nullptr;
        kcolorcombo_paintevent_callback = nullptr;
        kcolorcombo_setmodel_callback = nullptr;
        kcolorcombo_sizehint_callback = nullptr;
        kcolorcombo_minimumsizehint_callback = nullptr;
        kcolorcombo_showpopup_callback = nullptr;
        kcolorcombo_hidepopup_callback = nullptr;
        kcolorcombo_event_callback = nullptr;
        kcolorcombo_inputmethodquery_callback = nullptr;
        kcolorcombo_focusinevent_callback = nullptr;
        kcolorcombo_focusoutevent_callback = nullptr;
        kcolorcombo_changeevent_callback = nullptr;
        kcolorcombo_resizeevent_callback = nullptr;
        kcolorcombo_showevent_callback = nullptr;
        kcolorcombo_hideevent_callback = nullptr;
        kcolorcombo_mousepressevent_callback = nullptr;
        kcolorcombo_mousereleaseevent_callback = nullptr;
        kcolorcombo_keypressevent_callback = nullptr;
        kcolorcombo_keyreleaseevent_callback = nullptr;
        kcolorcombo_wheelevent_callback = nullptr;
        kcolorcombo_contextmenuevent_callback = nullptr;
        kcolorcombo_inputmethodevent_callback = nullptr;
        kcolorcombo_initstyleoption_callback = nullptr;
        kcolorcombo_devtype_callback = nullptr;
        kcolorcombo_setvisible_callback = nullptr;
        kcolorcombo_heightforwidth_callback = nullptr;
        kcolorcombo_hasheightforwidth_callback = nullptr;
        kcolorcombo_paintengine_callback = nullptr;
        kcolorcombo_mousedoubleclickevent_callback = nullptr;
        kcolorcombo_mousemoveevent_callback = nullptr;
        kcolorcombo_enterevent_callback = nullptr;
        kcolorcombo_leaveevent_callback = nullptr;
        kcolorcombo_moveevent_callback = nullptr;
        kcolorcombo_closeevent_callback = nullptr;
        kcolorcombo_tabletevent_callback = nullptr;
        kcolorcombo_actionevent_callback = nullptr;
        kcolorcombo_dragenterevent_callback = nullptr;
        kcolorcombo_dragmoveevent_callback = nullptr;
        kcolorcombo_dragleaveevent_callback = nullptr;
        kcolorcombo_dropevent_callback = nullptr;
        kcolorcombo_nativeevent_callback = nullptr;
        kcolorcombo_metric_callback = nullptr;
        kcolorcombo_initpainter_callback = nullptr;
        kcolorcombo_redirected_callback = nullptr;
        kcolorcombo_sharedpainter_callback = nullptr;
        kcolorcombo_focusnextprevchild_callback = nullptr;
        kcolorcombo_eventfilter_callback = nullptr;
        kcolorcombo_timerevent_callback = nullptr;
        kcolorcombo_childevent_callback = nullptr;
        kcolorcombo_customevent_callback = nullptr;
        kcolorcombo_connectnotify_callback = nullptr;
        kcolorcombo_disconnectnotify_callback = nullptr;
        kcolorcombo_updatemicrofocus_callback = nullptr;
        kcolorcombo_create_callback = nullptr;
        kcolorcombo_destroy_callback = nullptr;
        kcolorcombo_focusnextchild_callback = nullptr;
        kcolorcombo_focuspreviouschild_callback = nullptr;
        kcolorcombo_sender_callback = nullptr;
        kcolorcombo_sendersignalindex_callback = nullptr;
        kcolorcombo_receivers_callback = nullptr;
        kcolorcombo_issignalconnected_callback = nullptr;
        kcolorcombo_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKColorCombo_Metacall_Callback(KColorCombo_Metacall_Callback cb) { kcolorcombo_metacall_callback = cb; }
    inline void setKColorCombo_PaintEvent_Callback(KColorCombo_PaintEvent_Callback cb) { kcolorcombo_paintevent_callback = cb; }
    inline void setKColorCombo_SetModel_Callback(KColorCombo_SetModel_Callback cb) { kcolorcombo_setmodel_callback = cb; }
    inline void setKColorCombo_SizeHint_Callback(KColorCombo_SizeHint_Callback cb) { kcolorcombo_sizehint_callback = cb; }
    inline void setKColorCombo_MinimumSizeHint_Callback(KColorCombo_MinimumSizeHint_Callback cb) { kcolorcombo_minimumsizehint_callback = cb; }
    inline void setKColorCombo_ShowPopup_Callback(KColorCombo_ShowPopup_Callback cb) { kcolorcombo_showpopup_callback = cb; }
    inline void setKColorCombo_HidePopup_Callback(KColorCombo_HidePopup_Callback cb) { kcolorcombo_hidepopup_callback = cb; }
    inline void setKColorCombo_Event_Callback(KColorCombo_Event_Callback cb) { kcolorcombo_event_callback = cb; }
    inline void setKColorCombo_InputMethodQuery_Callback(KColorCombo_InputMethodQuery_Callback cb) { kcolorcombo_inputmethodquery_callback = cb; }
    inline void setKColorCombo_FocusInEvent_Callback(KColorCombo_FocusInEvent_Callback cb) { kcolorcombo_focusinevent_callback = cb; }
    inline void setKColorCombo_FocusOutEvent_Callback(KColorCombo_FocusOutEvent_Callback cb) { kcolorcombo_focusoutevent_callback = cb; }
    inline void setKColorCombo_ChangeEvent_Callback(KColorCombo_ChangeEvent_Callback cb) { kcolorcombo_changeevent_callback = cb; }
    inline void setKColorCombo_ResizeEvent_Callback(KColorCombo_ResizeEvent_Callback cb) { kcolorcombo_resizeevent_callback = cb; }
    inline void setKColorCombo_ShowEvent_Callback(KColorCombo_ShowEvent_Callback cb) { kcolorcombo_showevent_callback = cb; }
    inline void setKColorCombo_HideEvent_Callback(KColorCombo_HideEvent_Callback cb) { kcolorcombo_hideevent_callback = cb; }
    inline void setKColorCombo_MousePressEvent_Callback(KColorCombo_MousePressEvent_Callback cb) { kcolorcombo_mousepressevent_callback = cb; }
    inline void setKColorCombo_MouseReleaseEvent_Callback(KColorCombo_MouseReleaseEvent_Callback cb) { kcolorcombo_mousereleaseevent_callback = cb; }
    inline void setKColorCombo_KeyPressEvent_Callback(KColorCombo_KeyPressEvent_Callback cb) { kcolorcombo_keypressevent_callback = cb; }
    inline void setKColorCombo_KeyReleaseEvent_Callback(KColorCombo_KeyReleaseEvent_Callback cb) { kcolorcombo_keyreleaseevent_callback = cb; }
    inline void setKColorCombo_WheelEvent_Callback(KColorCombo_WheelEvent_Callback cb) { kcolorcombo_wheelevent_callback = cb; }
    inline void setKColorCombo_ContextMenuEvent_Callback(KColorCombo_ContextMenuEvent_Callback cb) { kcolorcombo_contextmenuevent_callback = cb; }
    inline void setKColorCombo_InputMethodEvent_Callback(KColorCombo_InputMethodEvent_Callback cb) { kcolorcombo_inputmethodevent_callback = cb; }
    inline void setKColorCombo_InitStyleOption_Callback(KColorCombo_InitStyleOption_Callback cb) { kcolorcombo_initstyleoption_callback = cb; }
    inline void setKColorCombo_DevType_Callback(KColorCombo_DevType_Callback cb) { kcolorcombo_devtype_callback = cb; }
    inline void setKColorCombo_SetVisible_Callback(KColorCombo_SetVisible_Callback cb) { kcolorcombo_setvisible_callback = cb; }
    inline void setKColorCombo_HeightForWidth_Callback(KColorCombo_HeightForWidth_Callback cb) { kcolorcombo_heightforwidth_callback = cb; }
    inline void setKColorCombo_HasHeightForWidth_Callback(KColorCombo_HasHeightForWidth_Callback cb) { kcolorcombo_hasheightforwidth_callback = cb; }
    inline void setKColorCombo_PaintEngine_Callback(KColorCombo_PaintEngine_Callback cb) { kcolorcombo_paintengine_callback = cb; }
    inline void setKColorCombo_MouseDoubleClickEvent_Callback(KColorCombo_MouseDoubleClickEvent_Callback cb) { kcolorcombo_mousedoubleclickevent_callback = cb; }
    inline void setKColorCombo_MouseMoveEvent_Callback(KColorCombo_MouseMoveEvent_Callback cb) { kcolorcombo_mousemoveevent_callback = cb; }
    inline void setKColorCombo_EnterEvent_Callback(KColorCombo_EnterEvent_Callback cb) { kcolorcombo_enterevent_callback = cb; }
    inline void setKColorCombo_LeaveEvent_Callback(KColorCombo_LeaveEvent_Callback cb) { kcolorcombo_leaveevent_callback = cb; }
    inline void setKColorCombo_MoveEvent_Callback(KColorCombo_MoveEvent_Callback cb) { kcolorcombo_moveevent_callback = cb; }
    inline void setKColorCombo_CloseEvent_Callback(KColorCombo_CloseEvent_Callback cb) { kcolorcombo_closeevent_callback = cb; }
    inline void setKColorCombo_TabletEvent_Callback(KColorCombo_TabletEvent_Callback cb) { kcolorcombo_tabletevent_callback = cb; }
    inline void setKColorCombo_ActionEvent_Callback(KColorCombo_ActionEvent_Callback cb) { kcolorcombo_actionevent_callback = cb; }
    inline void setKColorCombo_DragEnterEvent_Callback(KColorCombo_DragEnterEvent_Callback cb) { kcolorcombo_dragenterevent_callback = cb; }
    inline void setKColorCombo_DragMoveEvent_Callback(KColorCombo_DragMoveEvent_Callback cb) { kcolorcombo_dragmoveevent_callback = cb; }
    inline void setKColorCombo_DragLeaveEvent_Callback(KColorCombo_DragLeaveEvent_Callback cb) { kcolorcombo_dragleaveevent_callback = cb; }
    inline void setKColorCombo_DropEvent_Callback(KColorCombo_DropEvent_Callback cb) { kcolorcombo_dropevent_callback = cb; }
    inline void setKColorCombo_NativeEvent_Callback(KColorCombo_NativeEvent_Callback cb) { kcolorcombo_nativeevent_callback = cb; }
    inline void setKColorCombo_Metric_Callback(KColorCombo_Metric_Callback cb) { kcolorcombo_metric_callback = cb; }
    inline void setKColorCombo_InitPainter_Callback(KColorCombo_InitPainter_Callback cb) { kcolorcombo_initpainter_callback = cb; }
    inline void setKColorCombo_Redirected_Callback(KColorCombo_Redirected_Callback cb) { kcolorcombo_redirected_callback = cb; }
    inline void setKColorCombo_SharedPainter_Callback(KColorCombo_SharedPainter_Callback cb) { kcolorcombo_sharedpainter_callback = cb; }
    inline void setKColorCombo_FocusNextPrevChild_Callback(KColorCombo_FocusNextPrevChild_Callback cb) { kcolorcombo_focusnextprevchild_callback = cb; }
    inline void setKColorCombo_EventFilter_Callback(KColorCombo_EventFilter_Callback cb) { kcolorcombo_eventfilter_callback = cb; }
    inline void setKColorCombo_TimerEvent_Callback(KColorCombo_TimerEvent_Callback cb) { kcolorcombo_timerevent_callback = cb; }
    inline void setKColorCombo_ChildEvent_Callback(KColorCombo_ChildEvent_Callback cb) { kcolorcombo_childevent_callback = cb; }
    inline void setKColorCombo_CustomEvent_Callback(KColorCombo_CustomEvent_Callback cb) { kcolorcombo_customevent_callback = cb; }
    inline void setKColorCombo_ConnectNotify_Callback(KColorCombo_ConnectNotify_Callback cb) { kcolorcombo_connectnotify_callback = cb; }
    inline void setKColorCombo_DisconnectNotify_Callback(KColorCombo_DisconnectNotify_Callback cb) { kcolorcombo_disconnectnotify_callback = cb; }
    inline void setKColorCombo_UpdateMicroFocus_Callback(KColorCombo_UpdateMicroFocus_Callback cb) { kcolorcombo_updatemicrofocus_callback = cb; }
    inline void setKColorCombo_Create_Callback(KColorCombo_Create_Callback cb) { kcolorcombo_create_callback = cb; }
    inline void setKColorCombo_Destroy_Callback(KColorCombo_Destroy_Callback cb) { kcolorcombo_destroy_callback = cb; }
    inline void setKColorCombo_FocusNextChild_Callback(KColorCombo_FocusNextChild_Callback cb) { kcolorcombo_focusnextchild_callback = cb; }
    inline void setKColorCombo_FocusPreviousChild_Callback(KColorCombo_FocusPreviousChild_Callback cb) { kcolorcombo_focuspreviouschild_callback = cb; }
    inline void setKColorCombo_Sender_Callback(KColorCombo_Sender_Callback cb) { kcolorcombo_sender_callback = cb; }
    inline void setKColorCombo_SenderSignalIndex_Callback(KColorCombo_SenderSignalIndex_Callback cb) { kcolorcombo_sendersignalindex_callback = cb; }
    inline void setKColorCombo_Receivers_Callback(KColorCombo_Receivers_Callback cb) { kcolorcombo_receivers_callback = cb; }
    inline void setKColorCombo_IsSignalConnected_Callback(KColorCombo_IsSignalConnected_Callback cb) { kcolorcombo_issignalconnected_callback = cb; }
    inline void setKColorCombo_GetDecodedMetricF_Callback(KColorCombo_GetDecodedMetricF_Callback cb) { kcolorcombo_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKColorCombo_Metacall_IsBase(bool value) const { kcolorcombo_metacall_isbase = value; }
    inline void setKColorCombo_PaintEvent_IsBase(bool value) const { kcolorcombo_paintevent_isbase = value; }
    inline void setKColorCombo_SetModel_IsBase(bool value) const { kcolorcombo_setmodel_isbase = value; }
    inline void setKColorCombo_SizeHint_IsBase(bool value) const { kcolorcombo_sizehint_isbase = value; }
    inline void setKColorCombo_MinimumSizeHint_IsBase(bool value) const { kcolorcombo_minimumsizehint_isbase = value; }
    inline void setKColorCombo_ShowPopup_IsBase(bool value) const { kcolorcombo_showpopup_isbase = value; }
    inline void setKColorCombo_HidePopup_IsBase(bool value) const { kcolorcombo_hidepopup_isbase = value; }
    inline void setKColorCombo_Event_IsBase(bool value) const { kcolorcombo_event_isbase = value; }
    inline void setKColorCombo_InputMethodQuery_IsBase(bool value) const { kcolorcombo_inputmethodquery_isbase = value; }
    inline void setKColorCombo_FocusInEvent_IsBase(bool value) const { kcolorcombo_focusinevent_isbase = value; }
    inline void setKColorCombo_FocusOutEvent_IsBase(bool value) const { kcolorcombo_focusoutevent_isbase = value; }
    inline void setKColorCombo_ChangeEvent_IsBase(bool value) const { kcolorcombo_changeevent_isbase = value; }
    inline void setKColorCombo_ResizeEvent_IsBase(bool value) const { kcolorcombo_resizeevent_isbase = value; }
    inline void setKColorCombo_ShowEvent_IsBase(bool value) const { kcolorcombo_showevent_isbase = value; }
    inline void setKColorCombo_HideEvent_IsBase(bool value) const { kcolorcombo_hideevent_isbase = value; }
    inline void setKColorCombo_MousePressEvent_IsBase(bool value) const { kcolorcombo_mousepressevent_isbase = value; }
    inline void setKColorCombo_MouseReleaseEvent_IsBase(bool value) const { kcolorcombo_mousereleaseevent_isbase = value; }
    inline void setKColorCombo_KeyPressEvent_IsBase(bool value) const { kcolorcombo_keypressevent_isbase = value; }
    inline void setKColorCombo_KeyReleaseEvent_IsBase(bool value) const { kcolorcombo_keyreleaseevent_isbase = value; }
    inline void setKColorCombo_WheelEvent_IsBase(bool value) const { kcolorcombo_wheelevent_isbase = value; }
    inline void setKColorCombo_ContextMenuEvent_IsBase(bool value) const { kcolorcombo_contextmenuevent_isbase = value; }
    inline void setKColorCombo_InputMethodEvent_IsBase(bool value) const { kcolorcombo_inputmethodevent_isbase = value; }
    inline void setKColorCombo_InitStyleOption_IsBase(bool value) const { kcolorcombo_initstyleoption_isbase = value; }
    inline void setKColorCombo_DevType_IsBase(bool value) const { kcolorcombo_devtype_isbase = value; }
    inline void setKColorCombo_SetVisible_IsBase(bool value) const { kcolorcombo_setvisible_isbase = value; }
    inline void setKColorCombo_HeightForWidth_IsBase(bool value) const { kcolorcombo_heightforwidth_isbase = value; }
    inline void setKColorCombo_HasHeightForWidth_IsBase(bool value) const { kcolorcombo_hasheightforwidth_isbase = value; }
    inline void setKColorCombo_PaintEngine_IsBase(bool value) const { kcolorcombo_paintengine_isbase = value; }
    inline void setKColorCombo_MouseDoubleClickEvent_IsBase(bool value) const { kcolorcombo_mousedoubleclickevent_isbase = value; }
    inline void setKColorCombo_MouseMoveEvent_IsBase(bool value) const { kcolorcombo_mousemoveevent_isbase = value; }
    inline void setKColorCombo_EnterEvent_IsBase(bool value) const { kcolorcombo_enterevent_isbase = value; }
    inline void setKColorCombo_LeaveEvent_IsBase(bool value) const { kcolorcombo_leaveevent_isbase = value; }
    inline void setKColorCombo_MoveEvent_IsBase(bool value) const { kcolorcombo_moveevent_isbase = value; }
    inline void setKColorCombo_CloseEvent_IsBase(bool value) const { kcolorcombo_closeevent_isbase = value; }
    inline void setKColorCombo_TabletEvent_IsBase(bool value) const { kcolorcombo_tabletevent_isbase = value; }
    inline void setKColorCombo_ActionEvent_IsBase(bool value) const { kcolorcombo_actionevent_isbase = value; }
    inline void setKColorCombo_DragEnterEvent_IsBase(bool value) const { kcolorcombo_dragenterevent_isbase = value; }
    inline void setKColorCombo_DragMoveEvent_IsBase(bool value) const { kcolorcombo_dragmoveevent_isbase = value; }
    inline void setKColorCombo_DragLeaveEvent_IsBase(bool value) const { kcolorcombo_dragleaveevent_isbase = value; }
    inline void setKColorCombo_DropEvent_IsBase(bool value) const { kcolorcombo_dropevent_isbase = value; }
    inline void setKColorCombo_NativeEvent_IsBase(bool value) const { kcolorcombo_nativeevent_isbase = value; }
    inline void setKColorCombo_Metric_IsBase(bool value) const { kcolorcombo_metric_isbase = value; }
    inline void setKColorCombo_InitPainter_IsBase(bool value) const { kcolorcombo_initpainter_isbase = value; }
    inline void setKColorCombo_Redirected_IsBase(bool value) const { kcolorcombo_redirected_isbase = value; }
    inline void setKColorCombo_SharedPainter_IsBase(bool value) const { kcolorcombo_sharedpainter_isbase = value; }
    inline void setKColorCombo_FocusNextPrevChild_IsBase(bool value) const { kcolorcombo_focusnextprevchild_isbase = value; }
    inline void setKColorCombo_EventFilter_IsBase(bool value) const { kcolorcombo_eventfilter_isbase = value; }
    inline void setKColorCombo_TimerEvent_IsBase(bool value) const { kcolorcombo_timerevent_isbase = value; }
    inline void setKColorCombo_ChildEvent_IsBase(bool value) const { kcolorcombo_childevent_isbase = value; }
    inline void setKColorCombo_CustomEvent_IsBase(bool value) const { kcolorcombo_customevent_isbase = value; }
    inline void setKColorCombo_ConnectNotify_IsBase(bool value) const { kcolorcombo_connectnotify_isbase = value; }
    inline void setKColorCombo_DisconnectNotify_IsBase(bool value) const { kcolorcombo_disconnectnotify_isbase = value; }
    inline void setKColorCombo_UpdateMicroFocus_IsBase(bool value) const { kcolorcombo_updatemicrofocus_isbase = value; }
    inline void setKColorCombo_Create_IsBase(bool value) const { kcolorcombo_create_isbase = value; }
    inline void setKColorCombo_Destroy_IsBase(bool value) const { kcolorcombo_destroy_isbase = value; }
    inline void setKColorCombo_FocusNextChild_IsBase(bool value) const { kcolorcombo_focusnextchild_isbase = value; }
    inline void setKColorCombo_FocusPreviousChild_IsBase(bool value) const { kcolorcombo_focuspreviouschild_isbase = value; }
    inline void setKColorCombo_Sender_IsBase(bool value) const { kcolorcombo_sender_isbase = value; }
    inline void setKColorCombo_SenderSignalIndex_IsBase(bool value) const { kcolorcombo_sendersignalindex_isbase = value; }
    inline void setKColorCombo_Receivers_IsBase(bool value) const { kcolorcombo_receivers_isbase = value; }
    inline void setKColorCombo_IsSignalConnected_IsBase(bool value) const { kcolorcombo_issignalconnected_isbase = value; }
    inline void setKColorCombo_GetDecodedMetricF_IsBase(bool value) const { kcolorcombo_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcolorcombo_metacall_isbase) {
            kcolorcombo_metacall_isbase = false;
            return KColorCombo::qt_metacall(param1, param2, param3);
        } else if (kcolorcombo_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kcolorcombo_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KColorCombo::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kcolorcombo_paintevent_isbase) {
            kcolorcombo_paintevent_isbase = false;
            KColorCombo::paintEvent(event);
        } else if (kcolorcombo_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kcolorcombo_paintevent_callback(this, cbval1);
        } else {
            KColorCombo::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (kcolorcombo_setmodel_isbase) {
            kcolorcombo_setmodel_isbase = false;
            KColorCombo::setModel(model);
        } else if (kcolorcombo_setmodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = model;

            kcolorcombo_setmodel_callback(this, cbval1);
        } else {
            KColorCombo::setModel(model);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kcolorcombo_sizehint_isbase) {
            kcolorcombo_sizehint_isbase = false;
            return KColorCombo::sizeHint();
        } else if (kcolorcombo_sizehint_callback != nullptr) {
            QSize* callback_ret = kcolorcombo_sizehint_callback();
            return *callback_ret;
        } else {
            return KColorCombo::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kcolorcombo_minimumsizehint_isbase) {
            kcolorcombo_minimumsizehint_isbase = false;
            return KColorCombo::minimumSizeHint();
        } else if (kcolorcombo_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kcolorcombo_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KColorCombo::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (kcolorcombo_showpopup_isbase) {
            kcolorcombo_showpopup_isbase = false;
            KColorCombo::showPopup();
        } else if (kcolorcombo_showpopup_callback != nullptr) {
            kcolorcombo_showpopup_callback();
        } else {
            KColorCombo::showPopup();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (kcolorcombo_hidepopup_isbase) {
            kcolorcombo_hidepopup_isbase = false;
            KColorCombo::hidePopup();
        } else if (kcolorcombo_hidepopup_callback != nullptr) {
            kcolorcombo_hidepopup_callback();
        } else {
            KColorCombo::hidePopup();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcolorcombo_event_isbase) {
            kcolorcombo_event_isbase = false;
            return KColorCombo::event(event);
        } else if (kcolorcombo_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kcolorcombo_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KColorCombo::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kcolorcombo_inputmethodquery_isbase) {
            kcolorcombo_inputmethodquery_isbase = false;
            return KColorCombo::inputMethodQuery(param1);
        } else if (kcolorcombo_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kcolorcombo_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KColorCombo::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (kcolorcombo_focusinevent_isbase) {
            kcolorcombo_focusinevent_isbase = false;
            KColorCombo::focusInEvent(e);
        } else if (kcolorcombo_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            kcolorcombo_focusinevent_callback(this, cbval1);
        } else {
            KColorCombo::focusInEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (kcolorcombo_focusoutevent_isbase) {
            kcolorcombo_focusoutevent_isbase = false;
            KColorCombo::focusOutEvent(e);
        } else if (kcolorcombo_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            kcolorcombo_focusoutevent_callback(this, cbval1);
        } else {
            KColorCombo::focusOutEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kcolorcombo_changeevent_isbase) {
            kcolorcombo_changeevent_isbase = false;
            KColorCombo::changeEvent(e);
        } else if (kcolorcombo_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            kcolorcombo_changeevent_callback(this, cbval1);
        } else {
            KColorCombo::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (kcolorcombo_resizeevent_isbase) {
            kcolorcombo_resizeevent_isbase = false;
            KColorCombo::resizeEvent(e);
        } else if (kcolorcombo_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = e;

            kcolorcombo_resizeevent_callback(this, cbval1);
        } else {
            KColorCombo::resizeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (kcolorcombo_showevent_isbase) {
            kcolorcombo_showevent_isbase = false;
            KColorCombo::showEvent(e);
        } else if (kcolorcombo_showevent_callback != nullptr) {
            QShowEvent* cbval1 = e;

            kcolorcombo_showevent_callback(this, cbval1);
        } else {
            KColorCombo::showEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (kcolorcombo_hideevent_isbase) {
            kcolorcombo_hideevent_isbase = false;
            KColorCombo::hideEvent(e);
        } else if (kcolorcombo_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = e;

            kcolorcombo_hideevent_callback(this, cbval1);
        } else {
            KColorCombo::hideEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (kcolorcombo_mousepressevent_isbase) {
            kcolorcombo_mousepressevent_isbase = false;
            KColorCombo::mousePressEvent(e);
        } else if (kcolorcombo_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            kcolorcombo_mousepressevent_callback(this, cbval1);
        } else {
            KColorCombo::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kcolorcombo_mousereleaseevent_isbase) {
            kcolorcombo_mousereleaseevent_isbase = false;
            KColorCombo::mouseReleaseEvent(e);
        } else if (kcolorcombo_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            kcolorcombo_mousereleaseevent_callback(this, cbval1);
        } else {
            KColorCombo::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (kcolorcombo_keypressevent_isbase) {
            kcolorcombo_keypressevent_isbase = false;
            KColorCombo::keyPressEvent(e);
        } else if (kcolorcombo_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            kcolorcombo_keypressevent_callback(this, cbval1);
        } else {
            KColorCombo::keyPressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (kcolorcombo_keyreleaseevent_isbase) {
            kcolorcombo_keyreleaseevent_isbase = false;
            KColorCombo::keyReleaseEvent(e);
        } else if (kcolorcombo_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            kcolorcombo_keyreleaseevent_callback(this, cbval1);
        } else {
            KColorCombo::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (kcolorcombo_wheelevent_isbase) {
            kcolorcombo_wheelevent_isbase = false;
            KColorCombo::wheelEvent(e);
        } else if (kcolorcombo_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = e;

            kcolorcombo_wheelevent_callback(this, cbval1);
        } else {
            KColorCombo::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (kcolorcombo_contextmenuevent_isbase) {
            kcolorcombo_contextmenuevent_isbase = false;
            KColorCombo::contextMenuEvent(e);
        } else if (kcolorcombo_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = e;

            kcolorcombo_contextmenuevent_callback(this, cbval1);
        } else {
            KColorCombo::contextMenuEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kcolorcombo_inputmethodevent_isbase) {
            kcolorcombo_inputmethodevent_isbase = false;
            KColorCombo::inputMethodEvent(param1);
        } else if (kcolorcombo_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kcolorcombo_inputmethodevent_callback(this, cbval1);
        } else {
            KColorCombo::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (kcolorcombo_initstyleoption_isbase) {
            kcolorcombo_initstyleoption_isbase = false;
            KColorCombo::initStyleOption(option);
        } else if (kcolorcombo_initstyleoption_callback != nullptr) {
            QStyleOptionComboBox* cbval1 = option;

            kcolorcombo_initstyleoption_callback(this, cbval1);
        } else {
            KColorCombo::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kcolorcombo_devtype_isbase) {
            kcolorcombo_devtype_isbase = false;
            return KColorCombo::devType();
        } else if (kcolorcombo_devtype_callback != nullptr) {
            int callback_ret = kcolorcombo_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KColorCombo::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kcolorcombo_setvisible_isbase) {
            kcolorcombo_setvisible_isbase = false;
            KColorCombo::setVisible(visible);
        } else if (kcolorcombo_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kcolorcombo_setvisible_callback(this, cbval1);
        } else {
            KColorCombo::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kcolorcombo_heightforwidth_isbase) {
            kcolorcombo_heightforwidth_isbase = false;
            return KColorCombo::heightForWidth(param1);
        } else if (kcolorcombo_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kcolorcombo_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KColorCombo::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kcolorcombo_hasheightforwidth_isbase) {
            kcolorcombo_hasheightforwidth_isbase = false;
            return KColorCombo::hasHeightForWidth();
        } else if (kcolorcombo_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kcolorcombo_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KColorCombo::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kcolorcombo_paintengine_isbase) {
            kcolorcombo_paintengine_isbase = false;
            return KColorCombo::paintEngine();
        } else if (kcolorcombo_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kcolorcombo_paintengine_callback();
            return callback_ret;
        } else {
            return KColorCombo::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kcolorcombo_mousedoubleclickevent_isbase) {
            kcolorcombo_mousedoubleclickevent_isbase = false;
            KColorCombo::mouseDoubleClickEvent(event);
        } else if (kcolorcombo_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcolorcombo_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KColorCombo::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kcolorcombo_mousemoveevent_isbase) {
            kcolorcombo_mousemoveevent_isbase = false;
            KColorCombo::mouseMoveEvent(event);
        } else if (kcolorcombo_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcolorcombo_mousemoveevent_callback(this, cbval1);
        } else {
            KColorCombo::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kcolorcombo_enterevent_isbase) {
            kcolorcombo_enterevent_isbase = false;
            KColorCombo::enterEvent(event);
        } else if (kcolorcombo_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kcolorcombo_enterevent_callback(this, cbval1);
        } else {
            KColorCombo::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kcolorcombo_leaveevent_isbase) {
            kcolorcombo_leaveevent_isbase = false;
            KColorCombo::leaveEvent(event);
        } else if (kcolorcombo_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcolorcombo_leaveevent_callback(this, cbval1);
        } else {
            KColorCombo::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kcolorcombo_moveevent_isbase) {
            kcolorcombo_moveevent_isbase = false;
            KColorCombo::moveEvent(event);
        } else if (kcolorcombo_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kcolorcombo_moveevent_callback(this, cbval1);
        } else {
            KColorCombo::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kcolorcombo_closeevent_isbase) {
            kcolorcombo_closeevent_isbase = false;
            KColorCombo::closeEvent(event);
        } else if (kcolorcombo_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kcolorcombo_closeevent_callback(this, cbval1);
        } else {
            KColorCombo::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kcolorcombo_tabletevent_isbase) {
            kcolorcombo_tabletevent_isbase = false;
            KColorCombo::tabletEvent(event);
        } else if (kcolorcombo_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kcolorcombo_tabletevent_callback(this, cbval1);
        } else {
            KColorCombo::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kcolorcombo_actionevent_isbase) {
            kcolorcombo_actionevent_isbase = false;
            KColorCombo::actionEvent(event);
        } else if (kcolorcombo_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kcolorcombo_actionevent_callback(this, cbval1);
        } else {
            KColorCombo::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kcolorcombo_dragenterevent_isbase) {
            kcolorcombo_dragenterevent_isbase = false;
            KColorCombo::dragEnterEvent(event);
        } else if (kcolorcombo_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kcolorcombo_dragenterevent_callback(this, cbval1);
        } else {
            KColorCombo::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kcolorcombo_dragmoveevent_isbase) {
            kcolorcombo_dragmoveevent_isbase = false;
            KColorCombo::dragMoveEvent(event);
        } else if (kcolorcombo_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kcolorcombo_dragmoveevent_callback(this, cbval1);
        } else {
            KColorCombo::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kcolorcombo_dragleaveevent_isbase) {
            kcolorcombo_dragleaveevent_isbase = false;
            KColorCombo::dragLeaveEvent(event);
        } else if (kcolorcombo_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kcolorcombo_dragleaveevent_callback(this, cbval1);
        } else {
            KColorCombo::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kcolorcombo_dropevent_isbase) {
            kcolorcombo_dropevent_isbase = false;
            KColorCombo::dropEvent(event);
        } else if (kcolorcombo_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kcolorcombo_dropevent_callback(this, cbval1);
        } else {
            KColorCombo::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kcolorcombo_nativeevent_isbase) {
            kcolorcombo_nativeevent_isbase = false;
            return KColorCombo::nativeEvent(eventType, message, result);
        } else if (kcolorcombo_nativeevent_callback != nullptr) {
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

            bool callback_ret = kcolorcombo_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KColorCombo::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kcolorcombo_metric_isbase) {
            kcolorcombo_metric_isbase = false;
            return KColorCombo::metric(param1);
        } else if (kcolorcombo_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kcolorcombo_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KColorCombo::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kcolorcombo_initpainter_isbase) {
            kcolorcombo_initpainter_isbase = false;
            KColorCombo::initPainter(painter);
        } else if (kcolorcombo_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kcolorcombo_initpainter_callback(this, cbval1);
        } else {
            KColorCombo::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kcolorcombo_redirected_isbase) {
            kcolorcombo_redirected_isbase = false;
            return KColorCombo::redirected(offset);
        } else if (kcolorcombo_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kcolorcombo_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KColorCombo::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kcolorcombo_sharedpainter_isbase) {
            kcolorcombo_sharedpainter_isbase = false;
            return KColorCombo::sharedPainter();
        } else if (kcolorcombo_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kcolorcombo_sharedpainter_callback();
            return callback_ret;
        } else {
            return KColorCombo::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kcolorcombo_focusnextprevchild_isbase) {
            kcolorcombo_focusnextprevchild_isbase = false;
            return KColorCombo::focusNextPrevChild(next);
        } else if (kcolorcombo_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kcolorcombo_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KColorCombo::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcolorcombo_eventfilter_isbase) {
            kcolorcombo_eventfilter_isbase = false;
            return KColorCombo::eventFilter(watched, event);
        } else if (kcolorcombo_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kcolorcombo_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KColorCombo::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcolorcombo_timerevent_isbase) {
            kcolorcombo_timerevent_isbase = false;
            KColorCombo::timerEvent(event);
        } else if (kcolorcombo_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kcolorcombo_timerevent_callback(this, cbval1);
        } else {
            KColorCombo::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcolorcombo_childevent_isbase) {
            kcolorcombo_childevent_isbase = false;
            KColorCombo::childEvent(event);
        } else if (kcolorcombo_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kcolorcombo_childevent_callback(this, cbval1);
        } else {
            KColorCombo::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcolorcombo_customevent_isbase) {
            kcolorcombo_customevent_isbase = false;
            KColorCombo::customEvent(event);
        } else if (kcolorcombo_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcolorcombo_customevent_callback(this, cbval1);
        } else {
            KColorCombo::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcolorcombo_connectnotify_isbase) {
            kcolorcombo_connectnotify_isbase = false;
            KColorCombo::connectNotify(signal);
        } else if (kcolorcombo_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcolorcombo_connectnotify_callback(this, cbval1);
        } else {
            KColorCombo::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcolorcombo_disconnectnotify_isbase) {
            kcolorcombo_disconnectnotify_isbase = false;
            KColorCombo::disconnectNotify(signal);
        } else if (kcolorcombo_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcolorcombo_disconnectnotify_callback(this, cbval1);
        } else {
            KColorCombo::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kcolorcombo_updatemicrofocus_isbase) {
            kcolorcombo_updatemicrofocus_isbase = false;
            KColorCombo::updateMicroFocus();
        } else if (kcolorcombo_updatemicrofocus_callback != nullptr) {
            kcolorcombo_updatemicrofocus_callback();
        } else {
            KColorCombo::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kcolorcombo_create_isbase) {
            kcolorcombo_create_isbase = false;
            KColorCombo::create();
        } else if (kcolorcombo_create_callback != nullptr) {
            kcolorcombo_create_callback();
        } else {
            KColorCombo::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kcolorcombo_destroy_isbase) {
            kcolorcombo_destroy_isbase = false;
            KColorCombo::destroy();
        } else if (kcolorcombo_destroy_callback != nullptr) {
            kcolorcombo_destroy_callback();
        } else {
            KColorCombo::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kcolorcombo_focusnextchild_isbase) {
            kcolorcombo_focusnextchild_isbase = false;
            return KColorCombo::focusNextChild();
        } else if (kcolorcombo_focusnextchild_callback != nullptr) {
            bool callback_ret = kcolorcombo_focusnextchild_callback();
            return callback_ret;
        } else {
            return KColorCombo::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kcolorcombo_focuspreviouschild_isbase) {
            kcolorcombo_focuspreviouschild_isbase = false;
            return KColorCombo::focusPreviousChild();
        } else if (kcolorcombo_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kcolorcombo_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KColorCombo::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcolorcombo_sender_isbase) {
            kcolorcombo_sender_isbase = false;
            return KColorCombo::sender();
        } else if (kcolorcombo_sender_callback != nullptr) {
            QObject* callback_ret = kcolorcombo_sender_callback();
            return callback_ret;
        } else {
            return KColorCombo::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcolorcombo_sendersignalindex_isbase) {
            kcolorcombo_sendersignalindex_isbase = false;
            return KColorCombo::senderSignalIndex();
        } else if (kcolorcombo_sendersignalindex_callback != nullptr) {
            int callback_ret = kcolorcombo_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KColorCombo::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcolorcombo_receivers_isbase) {
            kcolorcombo_receivers_isbase = false;
            return KColorCombo::receivers(signal);
        } else if (kcolorcombo_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kcolorcombo_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KColorCombo::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcolorcombo_issignalconnected_isbase) {
            kcolorcombo_issignalconnected_isbase = false;
            return KColorCombo::isSignalConnected(signal);
        } else if (kcolorcombo_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kcolorcombo_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KColorCombo::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kcolorcombo_getdecodedmetricf_isbase) {
            kcolorcombo_getdecodedmetricf_isbase = false;
            return KColorCombo::getDecodedMetricF(metricA, metricB);
        } else if (kcolorcombo_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kcolorcombo_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KColorCombo::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KColorCombo_PaintEvent(KColorCombo* self, QPaintEvent* event);
    friend void KColorCombo_QBasePaintEvent(KColorCombo* self, QPaintEvent* event);
    friend void KColorCombo_FocusInEvent(KColorCombo* self, QFocusEvent* e);
    friend void KColorCombo_QBaseFocusInEvent(KColorCombo* self, QFocusEvent* e);
    friend void KColorCombo_FocusOutEvent(KColorCombo* self, QFocusEvent* e);
    friend void KColorCombo_QBaseFocusOutEvent(KColorCombo* self, QFocusEvent* e);
    friend void KColorCombo_ChangeEvent(KColorCombo* self, QEvent* e);
    friend void KColorCombo_QBaseChangeEvent(KColorCombo* self, QEvent* e);
    friend void KColorCombo_ResizeEvent(KColorCombo* self, QResizeEvent* e);
    friend void KColorCombo_QBaseResizeEvent(KColorCombo* self, QResizeEvent* e);
    friend void KColorCombo_ShowEvent(KColorCombo* self, QShowEvent* e);
    friend void KColorCombo_QBaseShowEvent(KColorCombo* self, QShowEvent* e);
    friend void KColorCombo_HideEvent(KColorCombo* self, QHideEvent* e);
    friend void KColorCombo_QBaseHideEvent(KColorCombo* self, QHideEvent* e);
    friend void KColorCombo_MousePressEvent(KColorCombo* self, QMouseEvent* e);
    friend void KColorCombo_QBaseMousePressEvent(KColorCombo* self, QMouseEvent* e);
    friend void KColorCombo_MouseReleaseEvent(KColorCombo* self, QMouseEvent* e);
    friend void KColorCombo_QBaseMouseReleaseEvent(KColorCombo* self, QMouseEvent* e);
    friend void KColorCombo_KeyPressEvent(KColorCombo* self, QKeyEvent* e);
    friend void KColorCombo_QBaseKeyPressEvent(KColorCombo* self, QKeyEvent* e);
    friend void KColorCombo_KeyReleaseEvent(KColorCombo* self, QKeyEvent* e);
    friend void KColorCombo_QBaseKeyReleaseEvent(KColorCombo* self, QKeyEvent* e);
    friend void KColorCombo_WheelEvent(KColorCombo* self, QWheelEvent* e);
    friend void KColorCombo_QBaseWheelEvent(KColorCombo* self, QWheelEvent* e);
    friend void KColorCombo_ContextMenuEvent(KColorCombo* self, QContextMenuEvent* e);
    friend void KColorCombo_QBaseContextMenuEvent(KColorCombo* self, QContextMenuEvent* e);
    friend void KColorCombo_InputMethodEvent(KColorCombo* self, QInputMethodEvent* param1);
    friend void KColorCombo_QBaseInputMethodEvent(KColorCombo* self, QInputMethodEvent* param1);
    friend void KColorCombo_InitStyleOption(const KColorCombo* self, QStyleOptionComboBox* option);
    friend void KColorCombo_QBaseInitStyleOption(const KColorCombo* self, QStyleOptionComboBox* option);
    friend void KColorCombo_MouseDoubleClickEvent(KColorCombo* self, QMouseEvent* event);
    friend void KColorCombo_QBaseMouseDoubleClickEvent(KColorCombo* self, QMouseEvent* event);
    friend void KColorCombo_MouseMoveEvent(KColorCombo* self, QMouseEvent* event);
    friend void KColorCombo_QBaseMouseMoveEvent(KColorCombo* self, QMouseEvent* event);
    friend void KColorCombo_EnterEvent(KColorCombo* self, QEnterEvent* event);
    friend void KColorCombo_QBaseEnterEvent(KColorCombo* self, QEnterEvent* event);
    friend void KColorCombo_LeaveEvent(KColorCombo* self, QEvent* event);
    friend void KColorCombo_QBaseLeaveEvent(KColorCombo* self, QEvent* event);
    friend void KColorCombo_MoveEvent(KColorCombo* self, QMoveEvent* event);
    friend void KColorCombo_QBaseMoveEvent(KColorCombo* self, QMoveEvent* event);
    friend void KColorCombo_CloseEvent(KColorCombo* self, QCloseEvent* event);
    friend void KColorCombo_QBaseCloseEvent(KColorCombo* self, QCloseEvent* event);
    friend void KColorCombo_TabletEvent(KColorCombo* self, QTabletEvent* event);
    friend void KColorCombo_QBaseTabletEvent(KColorCombo* self, QTabletEvent* event);
    friend void KColorCombo_ActionEvent(KColorCombo* self, QActionEvent* event);
    friend void KColorCombo_QBaseActionEvent(KColorCombo* self, QActionEvent* event);
    friend void KColorCombo_DragEnterEvent(KColorCombo* self, QDragEnterEvent* event);
    friend void KColorCombo_QBaseDragEnterEvent(KColorCombo* self, QDragEnterEvent* event);
    friend void KColorCombo_DragMoveEvent(KColorCombo* self, QDragMoveEvent* event);
    friend void KColorCombo_QBaseDragMoveEvent(KColorCombo* self, QDragMoveEvent* event);
    friend void KColorCombo_DragLeaveEvent(KColorCombo* self, QDragLeaveEvent* event);
    friend void KColorCombo_QBaseDragLeaveEvent(KColorCombo* self, QDragLeaveEvent* event);
    friend void KColorCombo_DropEvent(KColorCombo* self, QDropEvent* event);
    friend void KColorCombo_QBaseDropEvent(KColorCombo* self, QDropEvent* event);
    friend bool KColorCombo_NativeEvent(KColorCombo* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KColorCombo_QBaseNativeEvent(KColorCombo* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KColorCombo_Metric(const KColorCombo* self, int param1);
    friend int KColorCombo_QBaseMetric(const KColorCombo* self, int param1);
    friend void KColorCombo_InitPainter(const KColorCombo* self, QPainter* painter);
    friend void KColorCombo_QBaseInitPainter(const KColorCombo* self, QPainter* painter);
    friend QPaintDevice* KColorCombo_Redirected(const KColorCombo* self, QPoint* offset);
    friend QPaintDevice* KColorCombo_QBaseRedirected(const KColorCombo* self, QPoint* offset);
    friend QPainter* KColorCombo_SharedPainter(const KColorCombo* self);
    friend QPainter* KColorCombo_QBaseSharedPainter(const KColorCombo* self);
    friend bool KColorCombo_FocusNextPrevChild(KColorCombo* self, bool next);
    friend bool KColorCombo_QBaseFocusNextPrevChild(KColorCombo* self, bool next);
    friend void KColorCombo_TimerEvent(KColorCombo* self, QTimerEvent* event);
    friend void KColorCombo_QBaseTimerEvent(KColorCombo* self, QTimerEvent* event);
    friend void KColorCombo_ChildEvent(KColorCombo* self, QChildEvent* event);
    friend void KColorCombo_QBaseChildEvent(KColorCombo* self, QChildEvent* event);
    friend void KColorCombo_CustomEvent(KColorCombo* self, QEvent* event);
    friend void KColorCombo_QBaseCustomEvent(KColorCombo* self, QEvent* event);
    friend void KColorCombo_ConnectNotify(KColorCombo* self, const QMetaMethod* signal);
    friend void KColorCombo_QBaseConnectNotify(KColorCombo* self, const QMetaMethod* signal);
    friend void KColorCombo_DisconnectNotify(KColorCombo* self, const QMetaMethod* signal);
    friend void KColorCombo_QBaseDisconnectNotify(KColorCombo* self, const QMetaMethod* signal);
    friend void KColorCombo_UpdateMicroFocus(KColorCombo* self);
    friend void KColorCombo_QBaseUpdateMicroFocus(KColorCombo* self);
    friend void KColorCombo_Create(KColorCombo* self);
    friend void KColorCombo_QBaseCreate(KColorCombo* self);
    friend void KColorCombo_Destroy(KColorCombo* self);
    friend void KColorCombo_QBaseDestroy(KColorCombo* self);
    friend bool KColorCombo_FocusNextChild(KColorCombo* self);
    friend bool KColorCombo_QBaseFocusNextChild(KColorCombo* self);
    friend bool KColorCombo_FocusPreviousChild(KColorCombo* self);
    friend bool KColorCombo_QBaseFocusPreviousChild(KColorCombo* self);
    friend QObject* KColorCombo_Sender(const KColorCombo* self);
    friend QObject* KColorCombo_QBaseSender(const KColorCombo* self);
    friend int KColorCombo_SenderSignalIndex(const KColorCombo* self);
    friend int KColorCombo_QBaseSenderSignalIndex(const KColorCombo* self);
    friend int KColorCombo_Receivers(const KColorCombo* self, const char* signal);
    friend int KColorCombo_QBaseReceivers(const KColorCombo* self, const char* signal);
    friend bool KColorCombo_IsSignalConnected(const KColorCombo* self, const QMetaMethod* signal);
    friend bool KColorCombo_QBaseIsSignalConnected(const KColorCombo* self, const QMetaMethod* signal);
    friend double KColorCombo_GetDecodedMetricF(const KColorCombo* self, int metricA, int metricB);
    friend double KColorCombo_QBaseGetDecodedMetricF(const KColorCombo* self, int metricA, int metricB);
};

#endif
