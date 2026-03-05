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
    using KColorCombo_MetaObject_Callback = QMetaObject* (*)();
    using KColorCombo_Metacast_Callback = void* (*)(KColorCombo*, const char*);
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
    KColorCombo_MetaObject_Callback kcolorcombo_metaobject_callback = nullptr;
    KColorCombo_Metacast_Callback kcolorcombo_metacast_callback = nullptr;
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
    mutable bool kcolorcombo_metaobject_isbase = false;
    mutable bool kcolorcombo_metacast_isbase = false;
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

    // Callback setters
    inline void setKColorCombo_MetaObject_Callback(KColorCombo_MetaObject_Callback cb) { kcolorcombo_metaobject_callback = cb; }
    inline void setKColorCombo_Metacast_Callback(KColorCombo_Metacast_Callback cb) { kcolorcombo_metacast_callback = cb; }
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
    inline void setKColorCombo_MetaObject_IsBase(bool value) const { kcolorcombo_metaobject_isbase = value; }
    inline void setKColorCombo_Metacast_IsBase(bool value) const { kcolorcombo_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (kcolorcombo_metaobject_isbase) {
            kcolorcombo_metaobject_isbase = false;
            return KColorCombo::metaObject();
        }
        auto metaobject_cb = kcolorcombo_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KColorCombo::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcolorcombo_metacast_isbase) {
            kcolorcombo_metacast_isbase = false;
            return KColorCombo::qt_metacast(param1);
        }
        auto metacast_cb = kcolorcombo_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KColorCombo::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcolorcombo_metacall_isbase) {
            kcolorcombo_metacall_isbase = false;
            return KColorCombo::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kcolorcombo_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KColorCombo::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kcolorcombo_paintevent_isbase) {
            kcolorcombo_paintevent_isbase = false;
            KColorCombo::paintEvent(event);
            return;
        }
        auto paintevent_cb = kcolorcombo_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KColorCombo::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (kcolorcombo_setmodel_isbase) {
            kcolorcombo_setmodel_isbase = false;
            KColorCombo::setModel(model);
            return;
        }
        auto setmodel_cb = kcolorcombo_setmodel_callback;
        if (setmodel_cb) {
            QAbstractItemModel* cbval1 = model;

            setmodel_cb(this, cbval1);
            return;
        }
        KColorCombo::setModel(model);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kcolorcombo_sizehint_isbase) {
            kcolorcombo_sizehint_isbase = false;
            return KColorCombo::sizeHint();
        }
        auto sizehint_cb = kcolorcombo_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KColorCombo::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kcolorcombo_minimumsizehint_isbase) {
            kcolorcombo_minimumsizehint_isbase = false;
            return KColorCombo::minimumSizeHint();
        }
        auto minimumsizehint_cb = kcolorcombo_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KColorCombo::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (kcolorcombo_showpopup_isbase) {
            kcolorcombo_showpopup_isbase = false;
            KColorCombo::showPopup();
            return;
        }
        auto showpopup_cb = kcolorcombo_showpopup_callback;
        if (showpopup_cb) {
            showpopup_cb();
            return;
        }
        KColorCombo::showPopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (kcolorcombo_hidepopup_isbase) {
            kcolorcombo_hidepopup_isbase = false;
            KColorCombo::hidePopup();
            return;
        }
        auto hidepopup_cb = kcolorcombo_hidepopup_callback;
        if (hidepopup_cb) {
            hidepopup_cb();
            return;
        }
        KColorCombo::hidePopup();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcolorcombo_event_isbase) {
            kcolorcombo_event_isbase = false;
            return KColorCombo::event(event);
        }
        auto event_cb = kcolorcombo_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KColorCombo::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kcolorcombo_inputmethodquery_isbase) {
            kcolorcombo_inputmethodquery_isbase = false;
            return KColorCombo::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kcolorcombo_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KColorCombo::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (kcolorcombo_focusinevent_isbase) {
            kcolorcombo_focusinevent_isbase = false;
            KColorCombo::focusInEvent(e);
            return;
        }
        auto focusinevent_cb = kcolorcombo_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = e;

            focusinevent_cb(this, cbval1);
            return;
        }
        KColorCombo::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (kcolorcombo_focusoutevent_isbase) {
            kcolorcombo_focusoutevent_isbase = false;
            KColorCombo::focusOutEvent(e);
            return;
        }
        auto focusoutevent_cb = kcolorcombo_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = e;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KColorCombo::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kcolorcombo_changeevent_isbase) {
            kcolorcombo_changeevent_isbase = false;
            KColorCombo::changeEvent(e);
            return;
        }
        auto changeevent_cb = kcolorcombo_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = e;

            changeevent_cb(this, cbval1);
            return;
        }
        KColorCombo::changeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (kcolorcombo_resizeevent_isbase) {
            kcolorcombo_resizeevent_isbase = false;
            KColorCombo::resizeEvent(e);
            return;
        }
        auto resizeevent_cb = kcolorcombo_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = e;

            resizeevent_cb(this, cbval1);
            return;
        }
        KColorCombo::resizeEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (kcolorcombo_showevent_isbase) {
            kcolorcombo_showevent_isbase = false;
            KColorCombo::showEvent(e);
            return;
        }
        auto showevent_cb = kcolorcombo_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = e;

            showevent_cb(this, cbval1);
            return;
        }
        KColorCombo::showEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (kcolorcombo_hideevent_isbase) {
            kcolorcombo_hideevent_isbase = false;
            KColorCombo::hideEvent(e);
            return;
        }
        auto hideevent_cb = kcolorcombo_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = e;

            hideevent_cb(this, cbval1);
            return;
        }
        KColorCombo::hideEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (kcolorcombo_mousepressevent_isbase) {
            kcolorcombo_mousepressevent_isbase = false;
            KColorCombo::mousePressEvent(e);
            return;
        }
        auto mousepressevent_cb = kcolorcombo_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = e;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KColorCombo::mousePressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kcolorcombo_mousereleaseevent_isbase) {
            kcolorcombo_mousereleaseevent_isbase = false;
            KColorCombo::mouseReleaseEvent(e);
            return;
        }
        auto mousereleaseevent_cb = kcolorcombo_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = e;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KColorCombo::mouseReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (kcolorcombo_keypressevent_isbase) {
            kcolorcombo_keypressevent_isbase = false;
            KColorCombo::keyPressEvent(e);
            return;
        }
        auto keypressevent_cb = kcolorcombo_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = e;

            keypressevent_cb(this, cbval1);
            return;
        }
        KColorCombo::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (kcolorcombo_keyreleaseevent_isbase) {
            kcolorcombo_keyreleaseevent_isbase = false;
            KColorCombo::keyReleaseEvent(e);
            return;
        }
        auto keyreleaseevent_cb = kcolorcombo_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = e;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KColorCombo::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (kcolorcombo_wheelevent_isbase) {
            kcolorcombo_wheelevent_isbase = false;
            KColorCombo::wheelEvent(e);
            return;
        }
        auto wheelevent_cb = kcolorcombo_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = e;

            wheelevent_cb(this, cbval1);
            return;
        }
        KColorCombo::wheelEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (kcolorcombo_contextmenuevent_isbase) {
            kcolorcombo_contextmenuevent_isbase = false;
            KColorCombo::contextMenuEvent(e);
            return;
        }
        auto contextmenuevent_cb = kcolorcombo_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = e;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KColorCombo::contextMenuEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kcolorcombo_inputmethodevent_isbase) {
            kcolorcombo_inputmethodevent_isbase = false;
            KColorCombo::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kcolorcombo_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KColorCombo::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (kcolorcombo_initstyleoption_isbase) {
            kcolorcombo_initstyleoption_isbase = false;
            KColorCombo::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = kcolorcombo_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionComboBox* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        KColorCombo::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kcolorcombo_devtype_isbase) {
            kcolorcombo_devtype_isbase = false;
            return KColorCombo::devType();
        }
        auto devtype_cb = kcolorcombo_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KColorCombo::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kcolorcombo_setvisible_isbase) {
            kcolorcombo_setvisible_isbase = false;
            KColorCombo::setVisible(visible);
            return;
        }
        auto setvisible_cb = kcolorcombo_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KColorCombo::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kcolorcombo_heightforwidth_isbase) {
            kcolorcombo_heightforwidth_isbase = false;
            return KColorCombo::heightForWidth(param1);
        }
        auto heightforwidth_cb = kcolorcombo_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KColorCombo::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kcolorcombo_hasheightforwidth_isbase) {
            kcolorcombo_hasheightforwidth_isbase = false;
            return KColorCombo::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kcolorcombo_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KColorCombo::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kcolorcombo_paintengine_isbase) {
            kcolorcombo_paintengine_isbase = false;
            return KColorCombo::paintEngine();
        }
        auto paintengine_cb = kcolorcombo_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KColorCombo::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kcolorcombo_mousedoubleclickevent_isbase) {
            kcolorcombo_mousedoubleclickevent_isbase = false;
            KColorCombo::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kcolorcombo_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KColorCombo::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kcolorcombo_mousemoveevent_isbase) {
            kcolorcombo_mousemoveevent_isbase = false;
            KColorCombo::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kcolorcombo_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KColorCombo::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kcolorcombo_enterevent_isbase) {
            kcolorcombo_enterevent_isbase = false;
            KColorCombo::enterEvent(event);
            return;
        }
        auto enterevent_cb = kcolorcombo_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KColorCombo::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kcolorcombo_leaveevent_isbase) {
            kcolorcombo_leaveevent_isbase = false;
            KColorCombo::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kcolorcombo_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KColorCombo::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kcolorcombo_moveevent_isbase) {
            kcolorcombo_moveevent_isbase = false;
            KColorCombo::moveEvent(event);
            return;
        }
        auto moveevent_cb = kcolorcombo_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KColorCombo::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kcolorcombo_closeevent_isbase) {
            kcolorcombo_closeevent_isbase = false;
            KColorCombo::closeEvent(event);
            return;
        }
        auto closeevent_cb = kcolorcombo_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KColorCombo::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kcolorcombo_tabletevent_isbase) {
            kcolorcombo_tabletevent_isbase = false;
            KColorCombo::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kcolorcombo_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KColorCombo::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kcolorcombo_actionevent_isbase) {
            kcolorcombo_actionevent_isbase = false;
            KColorCombo::actionEvent(event);
            return;
        }
        auto actionevent_cb = kcolorcombo_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KColorCombo::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kcolorcombo_dragenterevent_isbase) {
            kcolorcombo_dragenterevent_isbase = false;
            KColorCombo::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kcolorcombo_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KColorCombo::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kcolorcombo_dragmoveevent_isbase) {
            kcolorcombo_dragmoveevent_isbase = false;
            KColorCombo::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kcolorcombo_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KColorCombo::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kcolorcombo_dragleaveevent_isbase) {
            kcolorcombo_dragleaveevent_isbase = false;
            KColorCombo::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kcolorcombo_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KColorCombo::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kcolorcombo_dropevent_isbase) {
            kcolorcombo_dropevent_isbase = false;
            KColorCombo::dropEvent(event);
            return;
        }
        auto dropevent_cb = kcolorcombo_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KColorCombo::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kcolorcombo_nativeevent_isbase) {
            kcolorcombo_nativeevent_isbase = false;
            return KColorCombo::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kcolorcombo_nativeevent_callback;
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
        return KColorCombo::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kcolorcombo_metric_isbase) {
            kcolorcombo_metric_isbase = false;
            return KColorCombo::metric(param1);
        }
        auto metric_cb = kcolorcombo_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KColorCombo::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kcolorcombo_initpainter_isbase) {
            kcolorcombo_initpainter_isbase = false;
            KColorCombo::initPainter(painter);
            return;
        }
        auto initpainter_cb = kcolorcombo_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KColorCombo::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kcolorcombo_redirected_isbase) {
            kcolorcombo_redirected_isbase = false;
            return KColorCombo::redirected(offset);
        }
        auto redirected_cb = kcolorcombo_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KColorCombo::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kcolorcombo_sharedpainter_isbase) {
            kcolorcombo_sharedpainter_isbase = false;
            return KColorCombo::sharedPainter();
        }
        auto sharedpainter_cb = kcolorcombo_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KColorCombo::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kcolorcombo_focusnextprevchild_isbase) {
            kcolorcombo_focusnextprevchild_isbase = false;
            return KColorCombo::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kcolorcombo_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KColorCombo::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcolorcombo_eventfilter_isbase) {
            kcolorcombo_eventfilter_isbase = false;
            return KColorCombo::eventFilter(watched, event);
        }
        auto eventfilter_cb = kcolorcombo_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KColorCombo::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcolorcombo_timerevent_isbase) {
            kcolorcombo_timerevent_isbase = false;
            KColorCombo::timerEvent(event);
            return;
        }
        auto timerevent_cb = kcolorcombo_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KColorCombo::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcolorcombo_childevent_isbase) {
            kcolorcombo_childevent_isbase = false;
            KColorCombo::childEvent(event);
            return;
        }
        auto childevent_cb = kcolorcombo_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KColorCombo::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcolorcombo_customevent_isbase) {
            kcolorcombo_customevent_isbase = false;
            KColorCombo::customEvent(event);
            return;
        }
        auto customevent_cb = kcolorcombo_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KColorCombo::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcolorcombo_connectnotify_isbase) {
            kcolorcombo_connectnotify_isbase = false;
            KColorCombo::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kcolorcombo_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KColorCombo::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcolorcombo_disconnectnotify_isbase) {
            kcolorcombo_disconnectnotify_isbase = false;
            KColorCombo::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kcolorcombo_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KColorCombo::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kcolorcombo_updatemicrofocus_isbase) {
            kcolorcombo_updatemicrofocus_isbase = false;
            KColorCombo::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kcolorcombo_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KColorCombo::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kcolorcombo_create_isbase) {
            kcolorcombo_create_isbase = false;
            KColorCombo::create();
            return;
        }
        auto create_cb = kcolorcombo_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KColorCombo::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kcolorcombo_destroy_isbase) {
            kcolorcombo_destroy_isbase = false;
            KColorCombo::destroy();
            return;
        }
        auto destroy_cb = kcolorcombo_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KColorCombo::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kcolorcombo_focusnextchild_isbase) {
            kcolorcombo_focusnextchild_isbase = false;
            return KColorCombo::focusNextChild();
        }
        auto focusnextchild_cb = kcolorcombo_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KColorCombo::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kcolorcombo_focuspreviouschild_isbase) {
            kcolorcombo_focuspreviouschild_isbase = false;
            return KColorCombo::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kcolorcombo_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KColorCombo::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcolorcombo_sender_isbase) {
            kcolorcombo_sender_isbase = false;
            return KColorCombo::sender();
        }
        auto sender_cb = kcolorcombo_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KColorCombo::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcolorcombo_sendersignalindex_isbase) {
            kcolorcombo_sendersignalindex_isbase = false;
            return KColorCombo::senderSignalIndex();
        }
        auto sendersignalindex_cb = kcolorcombo_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KColorCombo::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcolorcombo_receivers_isbase) {
            kcolorcombo_receivers_isbase = false;
            return KColorCombo::receivers(signal);
        }
        auto receivers_cb = kcolorcombo_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KColorCombo::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcolorcombo_issignalconnected_isbase) {
            kcolorcombo_issignalconnected_isbase = false;
            return KColorCombo::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kcolorcombo_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KColorCombo::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kcolorcombo_getdecodedmetricf_isbase) {
            kcolorcombo_getdecodedmetricf_isbase = false;
            return KColorCombo::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kcolorcombo_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KColorCombo::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KColorCombo_PaintEvent(KColorCombo* self, QPaintEvent* event);
    friend void KColorCombo_SuperPaintEvent(KColorCombo* self, QPaintEvent* event);
    friend void KColorCombo_FocusInEvent(KColorCombo* self, QFocusEvent* e);
    friend void KColorCombo_SuperFocusInEvent(KColorCombo* self, QFocusEvent* e);
    friend void KColorCombo_FocusOutEvent(KColorCombo* self, QFocusEvent* e);
    friend void KColorCombo_SuperFocusOutEvent(KColorCombo* self, QFocusEvent* e);
    friend void KColorCombo_ChangeEvent(KColorCombo* self, QEvent* e);
    friend void KColorCombo_SuperChangeEvent(KColorCombo* self, QEvent* e);
    friend void KColorCombo_ResizeEvent(KColorCombo* self, QResizeEvent* e);
    friend void KColorCombo_SuperResizeEvent(KColorCombo* self, QResizeEvent* e);
    friend void KColorCombo_ShowEvent(KColorCombo* self, QShowEvent* e);
    friend void KColorCombo_SuperShowEvent(KColorCombo* self, QShowEvent* e);
    friend void KColorCombo_HideEvent(KColorCombo* self, QHideEvent* e);
    friend void KColorCombo_SuperHideEvent(KColorCombo* self, QHideEvent* e);
    friend void KColorCombo_MousePressEvent(KColorCombo* self, QMouseEvent* e);
    friend void KColorCombo_SuperMousePressEvent(KColorCombo* self, QMouseEvent* e);
    friend void KColorCombo_MouseReleaseEvent(KColorCombo* self, QMouseEvent* e);
    friend void KColorCombo_SuperMouseReleaseEvent(KColorCombo* self, QMouseEvent* e);
    friend void KColorCombo_KeyPressEvent(KColorCombo* self, QKeyEvent* e);
    friend void KColorCombo_SuperKeyPressEvent(KColorCombo* self, QKeyEvent* e);
    friend void KColorCombo_KeyReleaseEvent(KColorCombo* self, QKeyEvent* e);
    friend void KColorCombo_SuperKeyReleaseEvent(KColorCombo* self, QKeyEvent* e);
    friend void KColorCombo_WheelEvent(KColorCombo* self, QWheelEvent* e);
    friend void KColorCombo_SuperWheelEvent(KColorCombo* self, QWheelEvent* e);
    friend void KColorCombo_ContextMenuEvent(KColorCombo* self, QContextMenuEvent* e);
    friend void KColorCombo_SuperContextMenuEvent(KColorCombo* self, QContextMenuEvent* e);
    friend void KColorCombo_InputMethodEvent(KColorCombo* self, QInputMethodEvent* param1);
    friend void KColorCombo_SuperInputMethodEvent(KColorCombo* self, QInputMethodEvent* param1);
    friend void KColorCombo_InitStyleOption(const KColorCombo* self, QStyleOptionComboBox* option);
    friend void KColorCombo_SuperInitStyleOption(const KColorCombo* self, QStyleOptionComboBox* option);
    friend void KColorCombo_MouseDoubleClickEvent(KColorCombo* self, QMouseEvent* event);
    friend void KColorCombo_SuperMouseDoubleClickEvent(KColorCombo* self, QMouseEvent* event);
    friend void KColorCombo_MouseMoveEvent(KColorCombo* self, QMouseEvent* event);
    friend void KColorCombo_SuperMouseMoveEvent(KColorCombo* self, QMouseEvent* event);
    friend void KColorCombo_EnterEvent(KColorCombo* self, QEnterEvent* event);
    friend void KColorCombo_SuperEnterEvent(KColorCombo* self, QEnterEvent* event);
    friend void KColorCombo_LeaveEvent(KColorCombo* self, QEvent* event);
    friend void KColorCombo_SuperLeaveEvent(KColorCombo* self, QEvent* event);
    friend void KColorCombo_MoveEvent(KColorCombo* self, QMoveEvent* event);
    friend void KColorCombo_SuperMoveEvent(KColorCombo* self, QMoveEvent* event);
    friend void KColorCombo_CloseEvent(KColorCombo* self, QCloseEvent* event);
    friend void KColorCombo_SuperCloseEvent(KColorCombo* self, QCloseEvent* event);
    friend void KColorCombo_TabletEvent(KColorCombo* self, QTabletEvent* event);
    friend void KColorCombo_SuperTabletEvent(KColorCombo* self, QTabletEvent* event);
    friend void KColorCombo_ActionEvent(KColorCombo* self, QActionEvent* event);
    friend void KColorCombo_SuperActionEvent(KColorCombo* self, QActionEvent* event);
    friend void KColorCombo_DragEnterEvent(KColorCombo* self, QDragEnterEvent* event);
    friend void KColorCombo_SuperDragEnterEvent(KColorCombo* self, QDragEnterEvent* event);
    friend void KColorCombo_DragMoveEvent(KColorCombo* self, QDragMoveEvent* event);
    friend void KColorCombo_SuperDragMoveEvent(KColorCombo* self, QDragMoveEvent* event);
    friend void KColorCombo_DragLeaveEvent(KColorCombo* self, QDragLeaveEvent* event);
    friend void KColorCombo_SuperDragLeaveEvent(KColorCombo* self, QDragLeaveEvent* event);
    friend void KColorCombo_DropEvent(KColorCombo* self, QDropEvent* event);
    friend void KColorCombo_SuperDropEvent(KColorCombo* self, QDropEvent* event);
    friend bool KColorCombo_NativeEvent(KColorCombo* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KColorCombo_SuperNativeEvent(KColorCombo* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KColorCombo_Metric(const KColorCombo* self, int param1);
    friend int KColorCombo_SuperMetric(const KColorCombo* self, int param1);
    friend void KColorCombo_InitPainter(const KColorCombo* self, QPainter* painter);
    friend void KColorCombo_SuperInitPainter(const KColorCombo* self, QPainter* painter);
    friend QPaintDevice* KColorCombo_Redirected(const KColorCombo* self, QPoint* offset);
    friend QPaintDevice* KColorCombo_SuperRedirected(const KColorCombo* self, QPoint* offset);
    friend QPainter* KColorCombo_SharedPainter(const KColorCombo* self);
    friend QPainter* KColorCombo_SuperSharedPainter(const KColorCombo* self);
    friend bool KColorCombo_FocusNextPrevChild(KColorCombo* self, bool next);
    friend bool KColorCombo_SuperFocusNextPrevChild(KColorCombo* self, bool next);
    friend void KColorCombo_TimerEvent(KColorCombo* self, QTimerEvent* event);
    friend void KColorCombo_SuperTimerEvent(KColorCombo* self, QTimerEvent* event);
    friend void KColorCombo_ChildEvent(KColorCombo* self, QChildEvent* event);
    friend void KColorCombo_SuperChildEvent(KColorCombo* self, QChildEvent* event);
    friend void KColorCombo_CustomEvent(KColorCombo* self, QEvent* event);
    friend void KColorCombo_SuperCustomEvent(KColorCombo* self, QEvent* event);
    friend void KColorCombo_ConnectNotify(KColorCombo* self, const QMetaMethod* signal);
    friend void KColorCombo_SuperConnectNotify(KColorCombo* self, const QMetaMethod* signal);
    friend void KColorCombo_DisconnectNotify(KColorCombo* self, const QMetaMethod* signal);
    friend void KColorCombo_SuperDisconnectNotify(KColorCombo* self, const QMetaMethod* signal);
    friend void KColorCombo_UpdateMicroFocus(KColorCombo* self);
    friend void KColorCombo_SuperUpdateMicroFocus(KColorCombo* self);
    friend void KColorCombo_Create(KColorCombo* self);
    friend void KColorCombo_SuperCreate(KColorCombo* self);
    friend void KColorCombo_Destroy(KColorCombo* self);
    friend void KColorCombo_SuperDestroy(KColorCombo* self);
    friend bool KColorCombo_FocusNextChild(KColorCombo* self);
    friend bool KColorCombo_SuperFocusNextChild(KColorCombo* self);
    friend bool KColorCombo_FocusPreviousChild(KColorCombo* self);
    friend bool KColorCombo_SuperFocusPreviousChild(KColorCombo* self);
    friend QObject* KColorCombo_Sender(const KColorCombo* self);
    friend QObject* KColorCombo_SuperSender(const KColorCombo* self);
    friend int KColorCombo_SenderSignalIndex(const KColorCombo* self);
    friend int KColorCombo_SuperSenderSignalIndex(const KColorCombo* self);
    friend int KColorCombo_Receivers(const KColorCombo* self, const char* signal);
    friend int KColorCombo_SuperReceivers(const KColorCombo* self, const char* signal);
    friend bool KColorCombo_IsSignalConnected(const KColorCombo* self, const QMetaMethod* signal);
    friend bool KColorCombo_SuperIsSignalConnected(const KColorCombo* self, const QMetaMethod* signal);
    friend double KColorCombo_GetDecodedMetricF(const KColorCombo* self, int metricA, int metricB);
    friend double KColorCombo_SuperGetDecodedMetricF(const KColorCombo* self, int metricA, int metricB);
};

#endif
