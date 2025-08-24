#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTIMECOMBOBOX_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKTIMECOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTimeComboBox so that we can call protected methods
class VirtualKTimeComboBox final : public KTimeComboBox {

  public:
    // Virtual class boolean flag
    bool isVirtualKTimeComboBox = true;

    // Virtual class public types (including callbacks)
    using KTimeComboBox_Metacall_Callback = int (*)(KTimeComboBox*, int, int, void**);
    using KTimeComboBox_EventFilter_Callback = bool (*)(KTimeComboBox*, QObject*, QEvent*);
    using KTimeComboBox_ShowPopup_Callback = void (*)();
    using KTimeComboBox_HidePopup_Callback = void (*)();
    using KTimeComboBox_MousePressEvent_Callback = void (*)(KTimeComboBox*, QMouseEvent*);
    using KTimeComboBox_WheelEvent_Callback = void (*)(KTimeComboBox*, QWheelEvent*);
    using KTimeComboBox_KeyPressEvent_Callback = void (*)(KTimeComboBox*, QKeyEvent*);
    using KTimeComboBox_FocusInEvent_Callback = void (*)(KTimeComboBox*, QFocusEvent*);
    using KTimeComboBox_FocusOutEvent_Callback = void (*)(KTimeComboBox*, QFocusEvent*);
    using KTimeComboBox_ResizeEvent_Callback = void (*)(KTimeComboBox*, QResizeEvent*);
    using KTimeComboBox_AssignTime_Callback = void (*)(KTimeComboBox*, QTime*);
    using KTimeComboBox_SetModel_Callback = void (*)(KTimeComboBox*, QAbstractItemModel*);
    using KTimeComboBox_SizeHint_Callback = QSize* (*)();
    using KTimeComboBox_MinimumSizeHint_Callback = QSize* (*)();
    using KTimeComboBox_Event_Callback = bool (*)(KTimeComboBox*, QEvent*);
    using KTimeComboBox_InputMethodQuery_Callback = QVariant* (*)(const KTimeComboBox*, int);
    using KTimeComboBox_ChangeEvent_Callback = void (*)(KTimeComboBox*, QEvent*);
    using KTimeComboBox_PaintEvent_Callback = void (*)(KTimeComboBox*, QPaintEvent*);
    using KTimeComboBox_ShowEvent_Callback = void (*)(KTimeComboBox*, QShowEvent*);
    using KTimeComboBox_HideEvent_Callback = void (*)(KTimeComboBox*, QHideEvent*);
    using KTimeComboBox_MouseReleaseEvent_Callback = void (*)(KTimeComboBox*, QMouseEvent*);
    using KTimeComboBox_KeyReleaseEvent_Callback = void (*)(KTimeComboBox*, QKeyEvent*);
    using KTimeComboBox_ContextMenuEvent_Callback = void (*)(KTimeComboBox*, QContextMenuEvent*);
    using KTimeComboBox_InputMethodEvent_Callback = void (*)(KTimeComboBox*, QInputMethodEvent*);
    using KTimeComboBox_InitStyleOption_Callback = void (*)(const KTimeComboBox*, QStyleOptionComboBox*);
    using KTimeComboBox_DevType_Callback = int (*)();
    using KTimeComboBox_SetVisible_Callback = void (*)(KTimeComboBox*, bool);
    using KTimeComboBox_HeightForWidth_Callback = int (*)(const KTimeComboBox*, int);
    using KTimeComboBox_HasHeightForWidth_Callback = bool (*)();
    using KTimeComboBox_PaintEngine_Callback = QPaintEngine* (*)();
    using KTimeComboBox_MouseDoubleClickEvent_Callback = void (*)(KTimeComboBox*, QMouseEvent*);
    using KTimeComboBox_MouseMoveEvent_Callback = void (*)(KTimeComboBox*, QMouseEvent*);
    using KTimeComboBox_EnterEvent_Callback = void (*)(KTimeComboBox*, QEnterEvent*);
    using KTimeComboBox_LeaveEvent_Callback = void (*)(KTimeComboBox*, QEvent*);
    using KTimeComboBox_MoveEvent_Callback = void (*)(KTimeComboBox*, QMoveEvent*);
    using KTimeComboBox_CloseEvent_Callback = void (*)(KTimeComboBox*, QCloseEvent*);
    using KTimeComboBox_TabletEvent_Callback = void (*)(KTimeComboBox*, QTabletEvent*);
    using KTimeComboBox_ActionEvent_Callback = void (*)(KTimeComboBox*, QActionEvent*);
    using KTimeComboBox_DragEnterEvent_Callback = void (*)(KTimeComboBox*, QDragEnterEvent*);
    using KTimeComboBox_DragMoveEvent_Callback = void (*)(KTimeComboBox*, QDragMoveEvent*);
    using KTimeComboBox_DragLeaveEvent_Callback = void (*)(KTimeComboBox*, QDragLeaveEvent*);
    using KTimeComboBox_DropEvent_Callback = void (*)(KTimeComboBox*, QDropEvent*);
    using KTimeComboBox_NativeEvent_Callback = bool (*)(KTimeComboBox*, libqt_string, void*, intptr_t*);
    using KTimeComboBox_Metric_Callback = int (*)(const KTimeComboBox*, int);
    using KTimeComboBox_InitPainter_Callback = void (*)(const KTimeComboBox*, QPainter*);
    using KTimeComboBox_Redirected_Callback = QPaintDevice* (*)(const KTimeComboBox*, QPoint*);
    using KTimeComboBox_SharedPainter_Callback = QPainter* (*)();
    using KTimeComboBox_FocusNextPrevChild_Callback = bool (*)(KTimeComboBox*, bool);
    using KTimeComboBox_TimerEvent_Callback = void (*)(KTimeComboBox*, QTimerEvent*);
    using KTimeComboBox_ChildEvent_Callback = void (*)(KTimeComboBox*, QChildEvent*);
    using KTimeComboBox_CustomEvent_Callback = void (*)(KTimeComboBox*, QEvent*);
    using KTimeComboBox_ConnectNotify_Callback = void (*)(KTimeComboBox*, QMetaMethod*);
    using KTimeComboBox_DisconnectNotify_Callback = void (*)(KTimeComboBox*, QMetaMethod*);
    using KTimeComboBox_UpdateMicroFocus_Callback = void (*)();
    using KTimeComboBox_Create_Callback = void (*)();
    using KTimeComboBox_Destroy_Callback = void (*)();
    using KTimeComboBox_FocusNextChild_Callback = bool (*)();
    using KTimeComboBox_FocusPreviousChild_Callback = bool (*)();
    using KTimeComboBox_Sender_Callback = QObject* (*)();
    using KTimeComboBox_SenderSignalIndex_Callback = int (*)();
    using KTimeComboBox_Receivers_Callback = int (*)(const KTimeComboBox*, const char*);
    using KTimeComboBox_IsSignalConnected_Callback = bool (*)(const KTimeComboBox*, QMetaMethod*);
    using KTimeComboBox_GetDecodedMetricF_Callback = double (*)(const KTimeComboBox*, int, int);

  protected:
    // Instance callback storage
    KTimeComboBox_Metacall_Callback ktimecombobox_metacall_callback = nullptr;
    KTimeComboBox_EventFilter_Callback ktimecombobox_eventfilter_callback = nullptr;
    KTimeComboBox_ShowPopup_Callback ktimecombobox_showpopup_callback = nullptr;
    KTimeComboBox_HidePopup_Callback ktimecombobox_hidepopup_callback = nullptr;
    KTimeComboBox_MousePressEvent_Callback ktimecombobox_mousepressevent_callback = nullptr;
    KTimeComboBox_WheelEvent_Callback ktimecombobox_wheelevent_callback = nullptr;
    KTimeComboBox_KeyPressEvent_Callback ktimecombobox_keypressevent_callback = nullptr;
    KTimeComboBox_FocusInEvent_Callback ktimecombobox_focusinevent_callback = nullptr;
    KTimeComboBox_FocusOutEvent_Callback ktimecombobox_focusoutevent_callback = nullptr;
    KTimeComboBox_ResizeEvent_Callback ktimecombobox_resizeevent_callback = nullptr;
    KTimeComboBox_AssignTime_Callback ktimecombobox_assigntime_callback = nullptr;
    KTimeComboBox_SetModel_Callback ktimecombobox_setmodel_callback = nullptr;
    KTimeComboBox_SizeHint_Callback ktimecombobox_sizehint_callback = nullptr;
    KTimeComboBox_MinimumSizeHint_Callback ktimecombobox_minimumsizehint_callback = nullptr;
    KTimeComboBox_Event_Callback ktimecombobox_event_callback = nullptr;
    KTimeComboBox_InputMethodQuery_Callback ktimecombobox_inputmethodquery_callback = nullptr;
    KTimeComboBox_ChangeEvent_Callback ktimecombobox_changeevent_callback = nullptr;
    KTimeComboBox_PaintEvent_Callback ktimecombobox_paintevent_callback = nullptr;
    KTimeComboBox_ShowEvent_Callback ktimecombobox_showevent_callback = nullptr;
    KTimeComboBox_HideEvent_Callback ktimecombobox_hideevent_callback = nullptr;
    KTimeComboBox_MouseReleaseEvent_Callback ktimecombobox_mousereleaseevent_callback = nullptr;
    KTimeComboBox_KeyReleaseEvent_Callback ktimecombobox_keyreleaseevent_callback = nullptr;
    KTimeComboBox_ContextMenuEvent_Callback ktimecombobox_contextmenuevent_callback = nullptr;
    KTimeComboBox_InputMethodEvent_Callback ktimecombobox_inputmethodevent_callback = nullptr;
    KTimeComboBox_InitStyleOption_Callback ktimecombobox_initstyleoption_callback = nullptr;
    KTimeComboBox_DevType_Callback ktimecombobox_devtype_callback = nullptr;
    KTimeComboBox_SetVisible_Callback ktimecombobox_setvisible_callback = nullptr;
    KTimeComboBox_HeightForWidth_Callback ktimecombobox_heightforwidth_callback = nullptr;
    KTimeComboBox_HasHeightForWidth_Callback ktimecombobox_hasheightforwidth_callback = nullptr;
    KTimeComboBox_PaintEngine_Callback ktimecombobox_paintengine_callback = nullptr;
    KTimeComboBox_MouseDoubleClickEvent_Callback ktimecombobox_mousedoubleclickevent_callback = nullptr;
    KTimeComboBox_MouseMoveEvent_Callback ktimecombobox_mousemoveevent_callback = nullptr;
    KTimeComboBox_EnterEvent_Callback ktimecombobox_enterevent_callback = nullptr;
    KTimeComboBox_LeaveEvent_Callback ktimecombobox_leaveevent_callback = nullptr;
    KTimeComboBox_MoveEvent_Callback ktimecombobox_moveevent_callback = nullptr;
    KTimeComboBox_CloseEvent_Callback ktimecombobox_closeevent_callback = nullptr;
    KTimeComboBox_TabletEvent_Callback ktimecombobox_tabletevent_callback = nullptr;
    KTimeComboBox_ActionEvent_Callback ktimecombobox_actionevent_callback = nullptr;
    KTimeComboBox_DragEnterEvent_Callback ktimecombobox_dragenterevent_callback = nullptr;
    KTimeComboBox_DragMoveEvent_Callback ktimecombobox_dragmoveevent_callback = nullptr;
    KTimeComboBox_DragLeaveEvent_Callback ktimecombobox_dragleaveevent_callback = nullptr;
    KTimeComboBox_DropEvent_Callback ktimecombobox_dropevent_callback = nullptr;
    KTimeComboBox_NativeEvent_Callback ktimecombobox_nativeevent_callback = nullptr;
    KTimeComboBox_Metric_Callback ktimecombobox_metric_callback = nullptr;
    KTimeComboBox_InitPainter_Callback ktimecombobox_initpainter_callback = nullptr;
    KTimeComboBox_Redirected_Callback ktimecombobox_redirected_callback = nullptr;
    KTimeComboBox_SharedPainter_Callback ktimecombobox_sharedpainter_callback = nullptr;
    KTimeComboBox_FocusNextPrevChild_Callback ktimecombobox_focusnextprevchild_callback = nullptr;
    KTimeComboBox_TimerEvent_Callback ktimecombobox_timerevent_callback = nullptr;
    KTimeComboBox_ChildEvent_Callback ktimecombobox_childevent_callback = nullptr;
    KTimeComboBox_CustomEvent_Callback ktimecombobox_customevent_callback = nullptr;
    KTimeComboBox_ConnectNotify_Callback ktimecombobox_connectnotify_callback = nullptr;
    KTimeComboBox_DisconnectNotify_Callback ktimecombobox_disconnectnotify_callback = nullptr;
    KTimeComboBox_UpdateMicroFocus_Callback ktimecombobox_updatemicrofocus_callback = nullptr;
    KTimeComboBox_Create_Callback ktimecombobox_create_callback = nullptr;
    KTimeComboBox_Destroy_Callback ktimecombobox_destroy_callback = nullptr;
    KTimeComboBox_FocusNextChild_Callback ktimecombobox_focusnextchild_callback = nullptr;
    KTimeComboBox_FocusPreviousChild_Callback ktimecombobox_focuspreviouschild_callback = nullptr;
    KTimeComboBox_Sender_Callback ktimecombobox_sender_callback = nullptr;
    KTimeComboBox_SenderSignalIndex_Callback ktimecombobox_sendersignalindex_callback = nullptr;
    KTimeComboBox_Receivers_Callback ktimecombobox_receivers_callback = nullptr;
    KTimeComboBox_IsSignalConnected_Callback ktimecombobox_issignalconnected_callback = nullptr;
    KTimeComboBox_GetDecodedMetricF_Callback ktimecombobox_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool ktimecombobox_metacall_isbase = false;
    mutable bool ktimecombobox_eventfilter_isbase = false;
    mutable bool ktimecombobox_showpopup_isbase = false;
    mutable bool ktimecombobox_hidepopup_isbase = false;
    mutable bool ktimecombobox_mousepressevent_isbase = false;
    mutable bool ktimecombobox_wheelevent_isbase = false;
    mutable bool ktimecombobox_keypressevent_isbase = false;
    mutable bool ktimecombobox_focusinevent_isbase = false;
    mutable bool ktimecombobox_focusoutevent_isbase = false;
    mutable bool ktimecombobox_resizeevent_isbase = false;
    mutable bool ktimecombobox_assigntime_isbase = false;
    mutable bool ktimecombobox_setmodel_isbase = false;
    mutable bool ktimecombobox_sizehint_isbase = false;
    mutable bool ktimecombobox_minimumsizehint_isbase = false;
    mutable bool ktimecombobox_event_isbase = false;
    mutable bool ktimecombobox_inputmethodquery_isbase = false;
    mutable bool ktimecombobox_changeevent_isbase = false;
    mutable bool ktimecombobox_paintevent_isbase = false;
    mutable bool ktimecombobox_showevent_isbase = false;
    mutable bool ktimecombobox_hideevent_isbase = false;
    mutable bool ktimecombobox_mousereleaseevent_isbase = false;
    mutable bool ktimecombobox_keyreleaseevent_isbase = false;
    mutable bool ktimecombobox_contextmenuevent_isbase = false;
    mutable bool ktimecombobox_inputmethodevent_isbase = false;
    mutable bool ktimecombobox_initstyleoption_isbase = false;
    mutable bool ktimecombobox_devtype_isbase = false;
    mutable bool ktimecombobox_setvisible_isbase = false;
    mutable bool ktimecombobox_heightforwidth_isbase = false;
    mutable bool ktimecombobox_hasheightforwidth_isbase = false;
    mutable bool ktimecombobox_paintengine_isbase = false;
    mutable bool ktimecombobox_mousedoubleclickevent_isbase = false;
    mutable bool ktimecombobox_mousemoveevent_isbase = false;
    mutable bool ktimecombobox_enterevent_isbase = false;
    mutable bool ktimecombobox_leaveevent_isbase = false;
    mutable bool ktimecombobox_moveevent_isbase = false;
    mutable bool ktimecombobox_closeevent_isbase = false;
    mutable bool ktimecombobox_tabletevent_isbase = false;
    mutable bool ktimecombobox_actionevent_isbase = false;
    mutable bool ktimecombobox_dragenterevent_isbase = false;
    mutable bool ktimecombobox_dragmoveevent_isbase = false;
    mutable bool ktimecombobox_dragleaveevent_isbase = false;
    mutable bool ktimecombobox_dropevent_isbase = false;
    mutable bool ktimecombobox_nativeevent_isbase = false;
    mutable bool ktimecombobox_metric_isbase = false;
    mutable bool ktimecombobox_initpainter_isbase = false;
    mutable bool ktimecombobox_redirected_isbase = false;
    mutable bool ktimecombobox_sharedpainter_isbase = false;
    mutable bool ktimecombobox_focusnextprevchild_isbase = false;
    mutable bool ktimecombobox_timerevent_isbase = false;
    mutable bool ktimecombobox_childevent_isbase = false;
    mutable bool ktimecombobox_customevent_isbase = false;
    mutable bool ktimecombobox_connectnotify_isbase = false;
    mutable bool ktimecombobox_disconnectnotify_isbase = false;
    mutable bool ktimecombobox_updatemicrofocus_isbase = false;
    mutable bool ktimecombobox_create_isbase = false;
    mutable bool ktimecombobox_destroy_isbase = false;
    mutable bool ktimecombobox_focusnextchild_isbase = false;
    mutable bool ktimecombobox_focuspreviouschild_isbase = false;
    mutable bool ktimecombobox_sender_isbase = false;
    mutable bool ktimecombobox_sendersignalindex_isbase = false;
    mutable bool ktimecombobox_receivers_isbase = false;
    mutable bool ktimecombobox_issignalconnected_isbase = false;
    mutable bool ktimecombobox_getdecodedmetricf_isbase = false;

  public:
    VirtualKTimeComboBox(QWidget* parent) : KTimeComboBox(parent) {};
    VirtualKTimeComboBox() : KTimeComboBox() {};

    ~VirtualKTimeComboBox() {
        ktimecombobox_metacall_callback = nullptr;
        ktimecombobox_eventfilter_callback = nullptr;
        ktimecombobox_showpopup_callback = nullptr;
        ktimecombobox_hidepopup_callback = nullptr;
        ktimecombobox_mousepressevent_callback = nullptr;
        ktimecombobox_wheelevent_callback = nullptr;
        ktimecombobox_keypressevent_callback = nullptr;
        ktimecombobox_focusinevent_callback = nullptr;
        ktimecombobox_focusoutevent_callback = nullptr;
        ktimecombobox_resizeevent_callback = nullptr;
        ktimecombobox_assigntime_callback = nullptr;
        ktimecombobox_setmodel_callback = nullptr;
        ktimecombobox_sizehint_callback = nullptr;
        ktimecombobox_minimumsizehint_callback = nullptr;
        ktimecombobox_event_callback = nullptr;
        ktimecombobox_inputmethodquery_callback = nullptr;
        ktimecombobox_changeevent_callback = nullptr;
        ktimecombobox_paintevent_callback = nullptr;
        ktimecombobox_showevent_callback = nullptr;
        ktimecombobox_hideevent_callback = nullptr;
        ktimecombobox_mousereleaseevent_callback = nullptr;
        ktimecombobox_keyreleaseevent_callback = nullptr;
        ktimecombobox_contextmenuevent_callback = nullptr;
        ktimecombobox_inputmethodevent_callback = nullptr;
        ktimecombobox_initstyleoption_callback = nullptr;
        ktimecombobox_devtype_callback = nullptr;
        ktimecombobox_setvisible_callback = nullptr;
        ktimecombobox_heightforwidth_callback = nullptr;
        ktimecombobox_hasheightforwidth_callback = nullptr;
        ktimecombobox_paintengine_callback = nullptr;
        ktimecombobox_mousedoubleclickevent_callback = nullptr;
        ktimecombobox_mousemoveevent_callback = nullptr;
        ktimecombobox_enterevent_callback = nullptr;
        ktimecombobox_leaveevent_callback = nullptr;
        ktimecombobox_moveevent_callback = nullptr;
        ktimecombobox_closeevent_callback = nullptr;
        ktimecombobox_tabletevent_callback = nullptr;
        ktimecombobox_actionevent_callback = nullptr;
        ktimecombobox_dragenterevent_callback = nullptr;
        ktimecombobox_dragmoveevent_callback = nullptr;
        ktimecombobox_dragleaveevent_callback = nullptr;
        ktimecombobox_dropevent_callback = nullptr;
        ktimecombobox_nativeevent_callback = nullptr;
        ktimecombobox_metric_callback = nullptr;
        ktimecombobox_initpainter_callback = nullptr;
        ktimecombobox_redirected_callback = nullptr;
        ktimecombobox_sharedpainter_callback = nullptr;
        ktimecombobox_focusnextprevchild_callback = nullptr;
        ktimecombobox_timerevent_callback = nullptr;
        ktimecombobox_childevent_callback = nullptr;
        ktimecombobox_customevent_callback = nullptr;
        ktimecombobox_connectnotify_callback = nullptr;
        ktimecombobox_disconnectnotify_callback = nullptr;
        ktimecombobox_updatemicrofocus_callback = nullptr;
        ktimecombobox_create_callback = nullptr;
        ktimecombobox_destroy_callback = nullptr;
        ktimecombobox_focusnextchild_callback = nullptr;
        ktimecombobox_focuspreviouschild_callback = nullptr;
        ktimecombobox_sender_callback = nullptr;
        ktimecombobox_sendersignalindex_callback = nullptr;
        ktimecombobox_receivers_callback = nullptr;
        ktimecombobox_issignalconnected_callback = nullptr;
        ktimecombobox_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKTimeComboBox_Metacall_Callback(KTimeComboBox_Metacall_Callback cb) { ktimecombobox_metacall_callback = cb; }
    inline void setKTimeComboBox_EventFilter_Callback(KTimeComboBox_EventFilter_Callback cb) { ktimecombobox_eventfilter_callback = cb; }
    inline void setKTimeComboBox_ShowPopup_Callback(KTimeComboBox_ShowPopup_Callback cb) { ktimecombobox_showpopup_callback = cb; }
    inline void setKTimeComboBox_HidePopup_Callback(KTimeComboBox_HidePopup_Callback cb) { ktimecombobox_hidepopup_callback = cb; }
    inline void setKTimeComboBox_MousePressEvent_Callback(KTimeComboBox_MousePressEvent_Callback cb) { ktimecombobox_mousepressevent_callback = cb; }
    inline void setKTimeComboBox_WheelEvent_Callback(KTimeComboBox_WheelEvent_Callback cb) { ktimecombobox_wheelevent_callback = cb; }
    inline void setKTimeComboBox_KeyPressEvent_Callback(KTimeComboBox_KeyPressEvent_Callback cb) { ktimecombobox_keypressevent_callback = cb; }
    inline void setKTimeComboBox_FocusInEvent_Callback(KTimeComboBox_FocusInEvent_Callback cb) { ktimecombobox_focusinevent_callback = cb; }
    inline void setKTimeComboBox_FocusOutEvent_Callback(KTimeComboBox_FocusOutEvent_Callback cb) { ktimecombobox_focusoutevent_callback = cb; }
    inline void setKTimeComboBox_ResizeEvent_Callback(KTimeComboBox_ResizeEvent_Callback cb) { ktimecombobox_resizeevent_callback = cb; }
    inline void setKTimeComboBox_AssignTime_Callback(KTimeComboBox_AssignTime_Callback cb) { ktimecombobox_assigntime_callback = cb; }
    inline void setKTimeComboBox_SetModel_Callback(KTimeComboBox_SetModel_Callback cb) { ktimecombobox_setmodel_callback = cb; }
    inline void setKTimeComboBox_SizeHint_Callback(KTimeComboBox_SizeHint_Callback cb) { ktimecombobox_sizehint_callback = cb; }
    inline void setKTimeComboBox_MinimumSizeHint_Callback(KTimeComboBox_MinimumSizeHint_Callback cb) { ktimecombobox_minimumsizehint_callback = cb; }
    inline void setKTimeComboBox_Event_Callback(KTimeComboBox_Event_Callback cb) { ktimecombobox_event_callback = cb; }
    inline void setKTimeComboBox_InputMethodQuery_Callback(KTimeComboBox_InputMethodQuery_Callback cb) { ktimecombobox_inputmethodquery_callback = cb; }
    inline void setKTimeComboBox_ChangeEvent_Callback(KTimeComboBox_ChangeEvent_Callback cb) { ktimecombobox_changeevent_callback = cb; }
    inline void setKTimeComboBox_PaintEvent_Callback(KTimeComboBox_PaintEvent_Callback cb) { ktimecombobox_paintevent_callback = cb; }
    inline void setKTimeComboBox_ShowEvent_Callback(KTimeComboBox_ShowEvent_Callback cb) { ktimecombobox_showevent_callback = cb; }
    inline void setKTimeComboBox_HideEvent_Callback(KTimeComboBox_HideEvent_Callback cb) { ktimecombobox_hideevent_callback = cb; }
    inline void setKTimeComboBox_MouseReleaseEvent_Callback(KTimeComboBox_MouseReleaseEvent_Callback cb) { ktimecombobox_mousereleaseevent_callback = cb; }
    inline void setKTimeComboBox_KeyReleaseEvent_Callback(KTimeComboBox_KeyReleaseEvent_Callback cb) { ktimecombobox_keyreleaseevent_callback = cb; }
    inline void setKTimeComboBox_ContextMenuEvent_Callback(KTimeComboBox_ContextMenuEvent_Callback cb) { ktimecombobox_contextmenuevent_callback = cb; }
    inline void setKTimeComboBox_InputMethodEvent_Callback(KTimeComboBox_InputMethodEvent_Callback cb) { ktimecombobox_inputmethodevent_callback = cb; }
    inline void setKTimeComboBox_InitStyleOption_Callback(KTimeComboBox_InitStyleOption_Callback cb) { ktimecombobox_initstyleoption_callback = cb; }
    inline void setKTimeComboBox_DevType_Callback(KTimeComboBox_DevType_Callback cb) { ktimecombobox_devtype_callback = cb; }
    inline void setKTimeComboBox_SetVisible_Callback(KTimeComboBox_SetVisible_Callback cb) { ktimecombobox_setvisible_callback = cb; }
    inline void setKTimeComboBox_HeightForWidth_Callback(KTimeComboBox_HeightForWidth_Callback cb) { ktimecombobox_heightforwidth_callback = cb; }
    inline void setKTimeComboBox_HasHeightForWidth_Callback(KTimeComboBox_HasHeightForWidth_Callback cb) { ktimecombobox_hasheightforwidth_callback = cb; }
    inline void setKTimeComboBox_PaintEngine_Callback(KTimeComboBox_PaintEngine_Callback cb) { ktimecombobox_paintengine_callback = cb; }
    inline void setKTimeComboBox_MouseDoubleClickEvent_Callback(KTimeComboBox_MouseDoubleClickEvent_Callback cb) { ktimecombobox_mousedoubleclickevent_callback = cb; }
    inline void setKTimeComboBox_MouseMoveEvent_Callback(KTimeComboBox_MouseMoveEvent_Callback cb) { ktimecombobox_mousemoveevent_callback = cb; }
    inline void setKTimeComboBox_EnterEvent_Callback(KTimeComboBox_EnterEvent_Callback cb) { ktimecombobox_enterevent_callback = cb; }
    inline void setKTimeComboBox_LeaveEvent_Callback(KTimeComboBox_LeaveEvent_Callback cb) { ktimecombobox_leaveevent_callback = cb; }
    inline void setKTimeComboBox_MoveEvent_Callback(KTimeComboBox_MoveEvent_Callback cb) { ktimecombobox_moveevent_callback = cb; }
    inline void setKTimeComboBox_CloseEvent_Callback(KTimeComboBox_CloseEvent_Callback cb) { ktimecombobox_closeevent_callback = cb; }
    inline void setKTimeComboBox_TabletEvent_Callback(KTimeComboBox_TabletEvent_Callback cb) { ktimecombobox_tabletevent_callback = cb; }
    inline void setKTimeComboBox_ActionEvent_Callback(KTimeComboBox_ActionEvent_Callback cb) { ktimecombobox_actionevent_callback = cb; }
    inline void setKTimeComboBox_DragEnterEvent_Callback(KTimeComboBox_DragEnterEvent_Callback cb) { ktimecombobox_dragenterevent_callback = cb; }
    inline void setKTimeComboBox_DragMoveEvent_Callback(KTimeComboBox_DragMoveEvent_Callback cb) { ktimecombobox_dragmoveevent_callback = cb; }
    inline void setKTimeComboBox_DragLeaveEvent_Callback(KTimeComboBox_DragLeaveEvent_Callback cb) { ktimecombobox_dragleaveevent_callback = cb; }
    inline void setKTimeComboBox_DropEvent_Callback(KTimeComboBox_DropEvent_Callback cb) { ktimecombobox_dropevent_callback = cb; }
    inline void setKTimeComboBox_NativeEvent_Callback(KTimeComboBox_NativeEvent_Callback cb) { ktimecombobox_nativeevent_callback = cb; }
    inline void setKTimeComboBox_Metric_Callback(KTimeComboBox_Metric_Callback cb) { ktimecombobox_metric_callback = cb; }
    inline void setKTimeComboBox_InitPainter_Callback(KTimeComboBox_InitPainter_Callback cb) { ktimecombobox_initpainter_callback = cb; }
    inline void setKTimeComboBox_Redirected_Callback(KTimeComboBox_Redirected_Callback cb) { ktimecombobox_redirected_callback = cb; }
    inline void setKTimeComboBox_SharedPainter_Callback(KTimeComboBox_SharedPainter_Callback cb) { ktimecombobox_sharedpainter_callback = cb; }
    inline void setKTimeComboBox_FocusNextPrevChild_Callback(KTimeComboBox_FocusNextPrevChild_Callback cb) { ktimecombobox_focusnextprevchild_callback = cb; }
    inline void setKTimeComboBox_TimerEvent_Callback(KTimeComboBox_TimerEvent_Callback cb) { ktimecombobox_timerevent_callback = cb; }
    inline void setKTimeComboBox_ChildEvent_Callback(KTimeComboBox_ChildEvent_Callback cb) { ktimecombobox_childevent_callback = cb; }
    inline void setKTimeComboBox_CustomEvent_Callback(KTimeComboBox_CustomEvent_Callback cb) { ktimecombobox_customevent_callback = cb; }
    inline void setKTimeComboBox_ConnectNotify_Callback(KTimeComboBox_ConnectNotify_Callback cb) { ktimecombobox_connectnotify_callback = cb; }
    inline void setKTimeComboBox_DisconnectNotify_Callback(KTimeComboBox_DisconnectNotify_Callback cb) { ktimecombobox_disconnectnotify_callback = cb; }
    inline void setKTimeComboBox_UpdateMicroFocus_Callback(KTimeComboBox_UpdateMicroFocus_Callback cb) { ktimecombobox_updatemicrofocus_callback = cb; }
    inline void setKTimeComboBox_Create_Callback(KTimeComboBox_Create_Callback cb) { ktimecombobox_create_callback = cb; }
    inline void setKTimeComboBox_Destroy_Callback(KTimeComboBox_Destroy_Callback cb) { ktimecombobox_destroy_callback = cb; }
    inline void setKTimeComboBox_FocusNextChild_Callback(KTimeComboBox_FocusNextChild_Callback cb) { ktimecombobox_focusnextchild_callback = cb; }
    inline void setKTimeComboBox_FocusPreviousChild_Callback(KTimeComboBox_FocusPreviousChild_Callback cb) { ktimecombobox_focuspreviouschild_callback = cb; }
    inline void setKTimeComboBox_Sender_Callback(KTimeComboBox_Sender_Callback cb) { ktimecombobox_sender_callback = cb; }
    inline void setKTimeComboBox_SenderSignalIndex_Callback(KTimeComboBox_SenderSignalIndex_Callback cb) { ktimecombobox_sendersignalindex_callback = cb; }
    inline void setKTimeComboBox_Receivers_Callback(KTimeComboBox_Receivers_Callback cb) { ktimecombobox_receivers_callback = cb; }
    inline void setKTimeComboBox_IsSignalConnected_Callback(KTimeComboBox_IsSignalConnected_Callback cb) { ktimecombobox_issignalconnected_callback = cb; }
    inline void setKTimeComboBox_GetDecodedMetricF_Callback(KTimeComboBox_GetDecodedMetricF_Callback cb) { ktimecombobox_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKTimeComboBox_Metacall_IsBase(bool value) const { ktimecombobox_metacall_isbase = value; }
    inline void setKTimeComboBox_EventFilter_IsBase(bool value) const { ktimecombobox_eventfilter_isbase = value; }
    inline void setKTimeComboBox_ShowPopup_IsBase(bool value) const { ktimecombobox_showpopup_isbase = value; }
    inline void setKTimeComboBox_HidePopup_IsBase(bool value) const { ktimecombobox_hidepopup_isbase = value; }
    inline void setKTimeComboBox_MousePressEvent_IsBase(bool value) const { ktimecombobox_mousepressevent_isbase = value; }
    inline void setKTimeComboBox_WheelEvent_IsBase(bool value) const { ktimecombobox_wheelevent_isbase = value; }
    inline void setKTimeComboBox_KeyPressEvent_IsBase(bool value) const { ktimecombobox_keypressevent_isbase = value; }
    inline void setKTimeComboBox_FocusInEvent_IsBase(bool value) const { ktimecombobox_focusinevent_isbase = value; }
    inline void setKTimeComboBox_FocusOutEvent_IsBase(bool value) const { ktimecombobox_focusoutevent_isbase = value; }
    inline void setKTimeComboBox_ResizeEvent_IsBase(bool value) const { ktimecombobox_resizeevent_isbase = value; }
    inline void setKTimeComboBox_AssignTime_IsBase(bool value) const { ktimecombobox_assigntime_isbase = value; }
    inline void setKTimeComboBox_SetModel_IsBase(bool value) const { ktimecombobox_setmodel_isbase = value; }
    inline void setKTimeComboBox_SizeHint_IsBase(bool value) const { ktimecombobox_sizehint_isbase = value; }
    inline void setKTimeComboBox_MinimumSizeHint_IsBase(bool value) const { ktimecombobox_minimumsizehint_isbase = value; }
    inline void setKTimeComboBox_Event_IsBase(bool value) const { ktimecombobox_event_isbase = value; }
    inline void setKTimeComboBox_InputMethodQuery_IsBase(bool value) const { ktimecombobox_inputmethodquery_isbase = value; }
    inline void setKTimeComboBox_ChangeEvent_IsBase(bool value) const { ktimecombobox_changeevent_isbase = value; }
    inline void setKTimeComboBox_PaintEvent_IsBase(bool value) const { ktimecombobox_paintevent_isbase = value; }
    inline void setKTimeComboBox_ShowEvent_IsBase(bool value) const { ktimecombobox_showevent_isbase = value; }
    inline void setKTimeComboBox_HideEvent_IsBase(bool value) const { ktimecombobox_hideevent_isbase = value; }
    inline void setKTimeComboBox_MouseReleaseEvent_IsBase(bool value) const { ktimecombobox_mousereleaseevent_isbase = value; }
    inline void setKTimeComboBox_KeyReleaseEvent_IsBase(bool value) const { ktimecombobox_keyreleaseevent_isbase = value; }
    inline void setKTimeComboBox_ContextMenuEvent_IsBase(bool value) const { ktimecombobox_contextmenuevent_isbase = value; }
    inline void setKTimeComboBox_InputMethodEvent_IsBase(bool value) const { ktimecombobox_inputmethodevent_isbase = value; }
    inline void setKTimeComboBox_InitStyleOption_IsBase(bool value) const { ktimecombobox_initstyleoption_isbase = value; }
    inline void setKTimeComboBox_DevType_IsBase(bool value) const { ktimecombobox_devtype_isbase = value; }
    inline void setKTimeComboBox_SetVisible_IsBase(bool value) const { ktimecombobox_setvisible_isbase = value; }
    inline void setKTimeComboBox_HeightForWidth_IsBase(bool value) const { ktimecombobox_heightforwidth_isbase = value; }
    inline void setKTimeComboBox_HasHeightForWidth_IsBase(bool value) const { ktimecombobox_hasheightforwidth_isbase = value; }
    inline void setKTimeComboBox_PaintEngine_IsBase(bool value) const { ktimecombobox_paintengine_isbase = value; }
    inline void setKTimeComboBox_MouseDoubleClickEvent_IsBase(bool value) const { ktimecombobox_mousedoubleclickevent_isbase = value; }
    inline void setKTimeComboBox_MouseMoveEvent_IsBase(bool value) const { ktimecombobox_mousemoveevent_isbase = value; }
    inline void setKTimeComboBox_EnterEvent_IsBase(bool value) const { ktimecombobox_enterevent_isbase = value; }
    inline void setKTimeComboBox_LeaveEvent_IsBase(bool value) const { ktimecombobox_leaveevent_isbase = value; }
    inline void setKTimeComboBox_MoveEvent_IsBase(bool value) const { ktimecombobox_moveevent_isbase = value; }
    inline void setKTimeComboBox_CloseEvent_IsBase(bool value) const { ktimecombobox_closeevent_isbase = value; }
    inline void setKTimeComboBox_TabletEvent_IsBase(bool value) const { ktimecombobox_tabletevent_isbase = value; }
    inline void setKTimeComboBox_ActionEvent_IsBase(bool value) const { ktimecombobox_actionevent_isbase = value; }
    inline void setKTimeComboBox_DragEnterEvent_IsBase(bool value) const { ktimecombobox_dragenterevent_isbase = value; }
    inline void setKTimeComboBox_DragMoveEvent_IsBase(bool value) const { ktimecombobox_dragmoveevent_isbase = value; }
    inline void setKTimeComboBox_DragLeaveEvent_IsBase(bool value) const { ktimecombobox_dragleaveevent_isbase = value; }
    inline void setKTimeComboBox_DropEvent_IsBase(bool value) const { ktimecombobox_dropevent_isbase = value; }
    inline void setKTimeComboBox_NativeEvent_IsBase(bool value) const { ktimecombobox_nativeevent_isbase = value; }
    inline void setKTimeComboBox_Metric_IsBase(bool value) const { ktimecombobox_metric_isbase = value; }
    inline void setKTimeComboBox_InitPainter_IsBase(bool value) const { ktimecombobox_initpainter_isbase = value; }
    inline void setKTimeComboBox_Redirected_IsBase(bool value) const { ktimecombobox_redirected_isbase = value; }
    inline void setKTimeComboBox_SharedPainter_IsBase(bool value) const { ktimecombobox_sharedpainter_isbase = value; }
    inline void setKTimeComboBox_FocusNextPrevChild_IsBase(bool value) const { ktimecombobox_focusnextprevchild_isbase = value; }
    inline void setKTimeComboBox_TimerEvent_IsBase(bool value) const { ktimecombobox_timerevent_isbase = value; }
    inline void setKTimeComboBox_ChildEvent_IsBase(bool value) const { ktimecombobox_childevent_isbase = value; }
    inline void setKTimeComboBox_CustomEvent_IsBase(bool value) const { ktimecombobox_customevent_isbase = value; }
    inline void setKTimeComboBox_ConnectNotify_IsBase(bool value) const { ktimecombobox_connectnotify_isbase = value; }
    inline void setKTimeComboBox_DisconnectNotify_IsBase(bool value) const { ktimecombobox_disconnectnotify_isbase = value; }
    inline void setKTimeComboBox_UpdateMicroFocus_IsBase(bool value) const { ktimecombobox_updatemicrofocus_isbase = value; }
    inline void setKTimeComboBox_Create_IsBase(bool value) const { ktimecombobox_create_isbase = value; }
    inline void setKTimeComboBox_Destroy_IsBase(bool value) const { ktimecombobox_destroy_isbase = value; }
    inline void setKTimeComboBox_FocusNextChild_IsBase(bool value) const { ktimecombobox_focusnextchild_isbase = value; }
    inline void setKTimeComboBox_FocusPreviousChild_IsBase(bool value) const { ktimecombobox_focuspreviouschild_isbase = value; }
    inline void setKTimeComboBox_Sender_IsBase(bool value) const { ktimecombobox_sender_isbase = value; }
    inline void setKTimeComboBox_SenderSignalIndex_IsBase(bool value) const { ktimecombobox_sendersignalindex_isbase = value; }
    inline void setKTimeComboBox_Receivers_IsBase(bool value) const { ktimecombobox_receivers_isbase = value; }
    inline void setKTimeComboBox_IsSignalConnected_IsBase(bool value) const { ktimecombobox_issignalconnected_isbase = value; }
    inline void setKTimeComboBox_GetDecodedMetricF_IsBase(bool value) const { ktimecombobox_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktimecombobox_metacall_isbase) {
            ktimecombobox_metacall_isbase = false;
            return KTimeComboBox::qt_metacall(param1, param2, param3);
        } else if (ktimecombobox_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ktimecombobox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KTimeComboBox::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (ktimecombobox_eventfilter_isbase) {
            ktimecombobox_eventfilter_isbase = false;
            return KTimeComboBox::eventFilter(object, event);
        } else if (ktimecombobox_eventfilter_callback != nullptr) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = ktimecombobox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KTimeComboBox::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (ktimecombobox_showpopup_isbase) {
            ktimecombobox_showpopup_isbase = false;
            KTimeComboBox::showPopup();
        } else if (ktimecombobox_showpopup_callback != nullptr) {
            ktimecombobox_showpopup_callback();
        } else {
            KTimeComboBox::showPopup();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (ktimecombobox_hidepopup_isbase) {
            ktimecombobox_hidepopup_isbase = false;
            KTimeComboBox::hidePopup();
        } else if (ktimecombobox_hidepopup_callback != nullptr) {
            ktimecombobox_hidepopup_callback();
        } else {
            KTimeComboBox::hidePopup();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (ktimecombobox_mousepressevent_isbase) {
            ktimecombobox_mousepressevent_isbase = false;
            KTimeComboBox::mousePressEvent(event);
        } else if (ktimecombobox_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ktimecombobox_mousepressevent_callback(this, cbval1);
        } else {
            KTimeComboBox::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ktimecombobox_wheelevent_isbase) {
            ktimecombobox_wheelevent_isbase = false;
            KTimeComboBox::wheelEvent(event);
        } else if (ktimecombobox_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            ktimecombobox_wheelevent_callback(this, cbval1);
        } else {
            KTimeComboBox::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (ktimecombobox_keypressevent_isbase) {
            ktimecombobox_keypressevent_isbase = false;
            KTimeComboBox::keyPressEvent(event);
        } else if (ktimecombobox_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            ktimecombobox_keypressevent_callback(this, cbval1);
        } else {
            KTimeComboBox::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (ktimecombobox_focusinevent_isbase) {
            ktimecombobox_focusinevent_isbase = false;
            KTimeComboBox::focusInEvent(event);
        } else if (ktimecombobox_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            ktimecombobox_focusinevent_callback(this, cbval1);
        } else {
            KTimeComboBox::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (ktimecombobox_focusoutevent_isbase) {
            ktimecombobox_focusoutevent_isbase = false;
            KTimeComboBox::focusOutEvent(event);
        } else if (ktimecombobox_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            ktimecombobox_focusoutevent_callback(this, cbval1);
        } else {
            KTimeComboBox::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (ktimecombobox_resizeevent_isbase) {
            ktimecombobox_resizeevent_isbase = false;
            KTimeComboBox::resizeEvent(event);
        } else if (ktimecombobox_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            ktimecombobox_resizeevent_callback(this, cbval1);
        } else {
            KTimeComboBox::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void assignTime(const QTime& time) override {
        if (ktimecombobox_assigntime_isbase) {
            ktimecombobox_assigntime_isbase = false;
            KTimeComboBox::assignTime(time);
        } else if (ktimecombobox_assigntime_callback != nullptr) {
            const QTime& time_ret = time;
            // Cast returned reference into pointer
            QTime* cbval1 = const_cast<QTime*>(&time_ret);

            ktimecombobox_assigntime_callback(this, cbval1);
        } else {
            KTimeComboBox::assignTime(time);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (ktimecombobox_setmodel_isbase) {
            ktimecombobox_setmodel_isbase = false;
            KTimeComboBox::setModel(model);
        } else if (ktimecombobox_setmodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = model;

            ktimecombobox_setmodel_callback(this, cbval1);
        } else {
            KTimeComboBox::setModel(model);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ktimecombobox_sizehint_isbase) {
            ktimecombobox_sizehint_isbase = false;
            return KTimeComboBox::sizeHint();
        } else if (ktimecombobox_sizehint_callback != nullptr) {
            QSize* callback_ret = ktimecombobox_sizehint_callback();
            return *callback_ret;
        } else {
            return KTimeComboBox::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ktimecombobox_minimumsizehint_isbase) {
            ktimecombobox_minimumsizehint_isbase = false;
            return KTimeComboBox::minimumSizeHint();
        } else if (ktimecombobox_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = ktimecombobox_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KTimeComboBox::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktimecombobox_event_isbase) {
            ktimecombobox_event_isbase = false;
            return KTimeComboBox::event(event);
        } else if (ktimecombobox_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = ktimecombobox_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTimeComboBox::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ktimecombobox_inputmethodquery_isbase) {
            ktimecombobox_inputmethodquery_isbase = false;
            return KTimeComboBox::inputMethodQuery(param1);
        } else if (ktimecombobox_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = ktimecombobox_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KTimeComboBox::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (ktimecombobox_changeevent_isbase) {
            ktimecombobox_changeevent_isbase = false;
            KTimeComboBox::changeEvent(e);
        } else if (ktimecombobox_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            ktimecombobox_changeevent_callback(this, cbval1);
        } else {
            KTimeComboBox::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (ktimecombobox_paintevent_isbase) {
            ktimecombobox_paintevent_isbase = false;
            KTimeComboBox::paintEvent(e);
        } else if (ktimecombobox_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = e;

            ktimecombobox_paintevent_callback(this, cbval1);
        } else {
            KTimeComboBox::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (ktimecombobox_showevent_isbase) {
            ktimecombobox_showevent_isbase = false;
            KTimeComboBox::showEvent(e);
        } else if (ktimecombobox_showevent_callback != nullptr) {
            QShowEvent* cbval1 = e;

            ktimecombobox_showevent_callback(this, cbval1);
        } else {
            KTimeComboBox::showEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (ktimecombobox_hideevent_isbase) {
            ktimecombobox_hideevent_isbase = false;
            KTimeComboBox::hideEvent(e);
        } else if (ktimecombobox_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = e;

            ktimecombobox_hideevent_callback(this, cbval1);
        } else {
            KTimeComboBox::hideEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (ktimecombobox_mousereleaseevent_isbase) {
            ktimecombobox_mousereleaseevent_isbase = false;
            KTimeComboBox::mouseReleaseEvent(e);
        } else if (ktimecombobox_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            ktimecombobox_mousereleaseevent_callback(this, cbval1);
        } else {
            KTimeComboBox::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (ktimecombobox_keyreleaseevent_isbase) {
            ktimecombobox_keyreleaseevent_isbase = false;
            KTimeComboBox::keyReleaseEvent(e);
        } else if (ktimecombobox_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            ktimecombobox_keyreleaseevent_callback(this, cbval1);
        } else {
            KTimeComboBox::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (ktimecombobox_contextmenuevent_isbase) {
            ktimecombobox_contextmenuevent_isbase = false;
            KTimeComboBox::contextMenuEvent(e);
        } else if (ktimecombobox_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = e;

            ktimecombobox_contextmenuevent_callback(this, cbval1);
        } else {
            KTimeComboBox::contextMenuEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ktimecombobox_inputmethodevent_isbase) {
            ktimecombobox_inputmethodevent_isbase = false;
            KTimeComboBox::inputMethodEvent(param1);
        } else if (ktimecombobox_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            ktimecombobox_inputmethodevent_callback(this, cbval1);
        } else {
            KTimeComboBox::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (ktimecombobox_initstyleoption_isbase) {
            ktimecombobox_initstyleoption_isbase = false;
            KTimeComboBox::initStyleOption(option);
        } else if (ktimecombobox_initstyleoption_callback != nullptr) {
            QStyleOptionComboBox* cbval1 = option;

            ktimecombobox_initstyleoption_callback(this, cbval1);
        } else {
            KTimeComboBox::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ktimecombobox_devtype_isbase) {
            ktimecombobox_devtype_isbase = false;
            return KTimeComboBox::devType();
        } else if (ktimecombobox_devtype_callback != nullptr) {
            int callback_ret = ktimecombobox_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KTimeComboBox::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ktimecombobox_setvisible_isbase) {
            ktimecombobox_setvisible_isbase = false;
            KTimeComboBox::setVisible(visible);
        } else if (ktimecombobox_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            ktimecombobox_setvisible_callback(this, cbval1);
        } else {
            KTimeComboBox::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ktimecombobox_heightforwidth_isbase) {
            ktimecombobox_heightforwidth_isbase = false;
            return KTimeComboBox::heightForWidth(param1);
        } else if (ktimecombobox_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = ktimecombobox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTimeComboBox::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ktimecombobox_hasheightforwidth_isbase) {
            ktimecombobox_hasheightforwidth_isbase = false;
            return KTimeComboBox::hasHeightForWidth();
        } else if (ktimecombobox_hasheightforwidth_callback != nullptr) {
            bool callback_ret = ktimecombobox_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KTimeComboBox::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ktimecombobox_paintengine_isbase) {
            ktimecombobox_paintengine_isbase = false;
            return KTimeComboBox::paintEngine();
        } else if (ktimecombobox_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = ktimecombobox_paintengine_callback();
            return callback_ret;
        } else {
            return KTimeComboBox::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (ktimecombobox_mousedoubleclickevent_isbase) {
            ktimecombobox_mousedoubleclickevent_isbase = false;
            KTimeComboBox::mouseDoubleClickEvent(event);
        } else if (ktimecombobox_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ktimecombobox_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KTimeComboBox::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (ktimecombobox_mousemoveevent_isbase) {
            ktimecombobox_mousemoveevent_isbase = false;
            KTimeComboBox::mouseMoveEvent(event);
        } else if (ktimecombobox_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ktimecombobox_mousemoveevent_callback(this, cbval1);
        } else {
            KTimeComboBox::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ktimecombobox_enterevent_isbase) {
            ktimecombobox_enterevent_isbase = false;
            KTimeComboBox::enterEvent(event);
        } else if (ktimecombobox_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            ktimecombobox_enterevent_callback(this, cbval1);
        } else {
            KTimeComboBox::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ktimecombobox_leaveevent_isbase) {
            ktimecombobox_leaveevent_isbase = false;
            KTimeComboBox::leaveEvent(event);
        } else if (ktimecombobox_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktimecombobox_leaveevent_callback(this, cbval1);
        } else {
            KTimeComboBox::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ktimecombobox_moveevent_isbase) {
            ktimecombobox_moveevent_isbase = false;
            KTimeComboBox::moveEvent(event);
        } else if (ktimecombobox_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            ktimecombobox_moveevent_callback(this, cbval1);
        } else {
            KTimeComboBox::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ktimecombobox_closeevent_isbase) {
            ktimecombobox_closeevent_isbase = false;
            KTimeComboBox::closeEvent(event);
        } else if (ktimecombobox_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            ktimecombobox_closeevent_callback(this, cbval1);
        } else {
            KTimeComboBox::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ktimecombobox_tabletevent_isbase) {
            ktimecombobox_tabletevent_isbase = false;
            KTimeComboBox::tabletEvent(event);
        } else if (ktimecombobox_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            ktimecombobox_tabletevent_callback(this, cbval1);
        } else {
            KTimeComboBox::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (ktimecombobox_actionevent_isbase) {
            ktimecombobox_actionevent_isbase = false;
            KTimeComboBox::actionEvent(event);
        } else if (ktimecombobox_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            ktimecombobox_actionevent_callback(this, cbval1);
        } else {
            KTimeComboBox::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (ktimecombobox_dragenterevent_isbase) {
            ktimecombobox_dragenterevent_isbase = false;
            KTimeComboBox::dragEnterEvent(event);
        } else if (ktimecombobox_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            ktimecombobox_dragenterevent_callback(this, cbval1);
        } else {
            KTimeComboBox::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (ktimecombobox_dragmoveevent_isbase) {
            ktimecombobox_dragmoveevent_isbase = false;
            KTimeComboBox::dragMoveEvent(event);
        } else if (ktimecombobox_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            ktimecombobox_dragmoveevent_callback(this, cbval1);
        } else {
            KTimeComboBox::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (ktimecombobox_dragleaveevent_isbase) {
            ktimecombobox_dragleaveevent_isbase = false;
            KTimeComboBox::dragLeaveEvent(event);
        } else if (ktimecombobox_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            ktimecombobox_dragleaveevent_callback(this, cbval1);
        } else {
            KTimeComboBox::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (ktimecombobox_dropevent_isbase) {
            ktimecombobox_dropevent_isbase = false;
            KTimeComboBox::dropEvent(event);
        } else if (ktimecombobox_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            ktimecombobox_dropevent_callback(this, cbval1);
        } else {
            KTimeComboBox::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ktimecombobox_nativeevent_isbase) {
            ktimecombobox_nativeevent_isbase = false;
            return KTimeComboBox::nativeEvent(eventType, message, result);
        } else if (ktimecombobox_nativeevent_callback != nullptr) {
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

            bool callback_ret = ktimecombobox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KTimeComboBox::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ktimecombobox_metric_isbase) {
            ktimecombobox_metric_isbase = false;
            return KTimeComboBox::metric(param1);
        } else if (ktimecombobox_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = ktimecombobox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTimeComboBox::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ktimecombobox_initpainter_isbase) {
            ktimecombobox_initpainter_isbase = false;
            KTimeComboBox::initPainter(painter);
        } else if (ktimecombobox_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            ktimecombobox_initpainter_callback(this, cbval1);
        } else {
            KTimeComboBox::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ktimecombobox_redirected_isbase) {
            ktimecombobox_redirected_isbase = false;
            return KTimeComboBox::redirected(offset);
        } else if (ktimecombobox_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = ktimecombobox_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTimeComboBox::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ktimecombobox_sharedpainter_isbase) {
            ktimecombobox_sharedpainter_isbase = false;
            return KTimeComboBox::sharedPainter();
        } else if (ktimecombobox_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = ktimecombobox_sharedpainter_callback();
            return callback_ret;
        } else {
            return KTimeComboBox::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ktimecombobox_focusnextprevchild_isbase) {
            ktimecombobox_focusnextprevchild_isbase = false;
            return KTimeComboBox::focusNextPrevChild(next);
        } else if (ktimecombobox_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = ktimecombobox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTimeComboBox::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktimecombobox_timerevent_isbase) {
            ktimecombobox_timerevent_isbase = false;
            KTimeComboBox::timerEvent(event);
        } else if (ktimecombobox_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ktimecombobox_timerevent_callback(this, cbval1);
        } else {
            KTimeComboBox::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktimecombobox_childevent_isbase) {
            ktimecombobox_childevent_isbase = false;
            KTimeComboBox::childEvent(event);
        } else if (ktimecombobox_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ktimecombobox_childevent_callback(this, cbval1);
        } else {
            KTimeComboBox::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktimecombobox_customevent_isbase) {
            ktimecombobox_customevent_isbase = false;
            KTimeComboBox::customEvent(event);
        } else if (ktimecombobox_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktimecombobox_customevent_callback(this, cbval1);
        } else {
            KTimeComboBox::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktimecombobox_connectnotify_isbase) {
            ktimecombobox_connectnotify_isbase = false;
            KTimeComboBox::connectNotify(signal);
        } else if (ktimecombobox_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktimecombobox_connectnotify_callback(this, cbval1);
        } else {
            KTimeComboBox::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktimecombobox_disconnectnotify_isbase) {
            ktimecombobox_disconnectnotify_isbase = false;
            KTimeComboBox::disconnectNotify(signal);
        } else if (ktimecombobox_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktimecombobox_disconnectnotify_callback(this, cbval1);
        } else {
            KTimeComboBox::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (ktimecombobox_updatemicrofocus_isbase) {
            ktimecombobox_updatemicrofocus_isbase = false;
            KTimeComboBox::updateMicroFocus();
        } else if (ktimecombobox_updatemicrofocus_callback != nullptr) {
            ktimecombobox_updatemicrofocus_callback();
        } else {
            KTimeComboBox::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (ktimecombobox_create_isbase) {
            ktimecombobox_create_isbase = false;
            KTimeComboBox::create();
        } else if (ktimecombobox_create_callback != nullptr) {
            ktimecombobox_create_callback();
        } else {
            KTimeComboBox::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (ktimecombobox_destroy_isbase) {
            ktimecombobox_destroy_isbase = false;
            KTimeComboBox::destroy();
        } else if (ktimecombobox_destroy_callback != nullptr) {
            ktimecombobox_destroy_callback();
        } else {
            KTimeComboBox::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (ktimecombobox_focusnextchild_isbase) {
            ktimecombobox_focusnextchild_isbase = false;
            return KTimeComboBox::focusNextChild();
        } else if (ktimecombobox_focusnextchild_callback != nullptr) {
            bool callback_ret = ktimecombobox_focusnextchild_callback();
            return callback_ret;
        } else {
            return KTimeComboBox::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (ktimecombobox_focuspreviouschild_isbase) {
            ktimecombobox_focuspreviouschild_isbase = false;
            return KTimeComboBox::focusPreviousChild();
        } else if (ktimecombobox_focuspreviouschild_callback != nullptr) {
            bool callback_ret = ktimecombobox_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KTimeComboBox::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktimecombobox_sender_isbase) {
            ktimecombobox_sender_isbase = false;
            return KTimeComboBox::sender();
        } else if (ktimecombobox_sender_callback != nullptr) {
            QObject* callback_ret = ktimecombobox_sender_callback();
            return callback_ret;
        } else {
            return KTimeComboBox::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktimecombobox_sendersignalindex_isbase) {
            ktimecombobox_sendersignalindex_isbase = false;
            return KTimeComboBox::senderSignalIndex();
        } else if (ktimecombobox_sendersignalindex_callback != nullptr) {
            int callback_ret = ktimecombobox_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KTimeComboBox::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktimecombobox_receivers_isbase) {
            ktimecombobox_receivers_isbase = false;
            return KTimeComboBox::receivers(signal);
        } else if (ktimecombobox_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ktimecombobox_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTimeComboBox::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktimecombobox_issignalconnected_isbase) {
            ktimecombobox_issignalconnected_isbase = false;
            return KTimeComboBox::isSignalConnected(signal);
        } else if (ktimecombobox_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ktimecombobox_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTimeComboBox::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (ktimecombobox_getdecodedmetricf_isbase) {
            ktimecombobox_getdecodedmetricf_isbase = false;
            return KTimeComboBox::getDecodedMetricF(metricA, metricB);
        } else if (ktimecombobox_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = ktimecombobox_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KTimeComboBox::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KTimeComboBox_EventFilter(KTimeComboBox* self, QObject* object, QEvent* event);
    friend bool KTimeComboBox_QBaseEventFilter(KTimeComboBox* self, QObject* object, QEvent* event);
    friend void KTimeComboBox_ShowPopup(KTimeComboBox* self);
    friend void KTimeComboBox_QBaseShowPopup(KTimeComboBox* self);
    friend void KTimeComboBox_HidePopup(KTimeComboBox* self);
    friend void KTimeComboBox_QBaseHidePopup(KTimeComboBox* self);
    friend void KTimeComboBox_MousePressEvent(KTimeComboBox* self, QMouseEvent* event);
    friend void KTimeComboBox_QBaseMousePressEvent(KTimeComboBox* self, QMouseEvent* event);
    friend void KTimeComboBox_WheelEvent(KTimeComboBox* self, QWheelEvent* event);
    friend void KTimeComboBox_QBaseWheelEvent(KTimeComboBox* self, QWheelEvent* event);
    friend void KTimeComboBox_KeyPressEvent(KTimeComboBox* self, QKeyEvent* event);
    friend void KTimeComboBox_QBaseKeyPressEvent(KTimeComboBox* self, QKeyEvent* event);
    friend void KTimeComboBox_FocusInEvent(KTimeComboBox* self, QFocusEvent* event);
    friend void KTimeComboBox_QBaseFocusInEvent(KTimeComboBox* self, QFocusEvent* event);
    friend void KTimeComboBox_FocusOutEvent(KTimeComboBox* self, QFocusEvent* event);
    friend void KTimeComboBox_QBaseFocusOutEvent(KTimeComboBox* self, QFocusEvent* event);
    friend void KTimeComboBox_ResizeEvent(KTimeComboBox* self, QResizeEvent* event);
    friend void KTimeComboBox_QBaseResizeEvent(KTimeComboBox* self, QResizeEvent* event);
    friend void KTimeComboBox_AssignTime(KTimeComboBox* self, const QTime* time);
    friend void KTimeComboBox_QBaseAssignTime(KTimeComboBox* self, const QTime* time);
    friend void KTimeComboBox_ChangeEvent(KTimeComboBox* self, QEvent* e);
    friend void KTimeComboBox_QBaseChangeEvent(KTimeComboBox* self, QEvent* e);
    friend void KTimeComboBox_PaintEvent(KTimeComboBox* self, QPaintEvent* e);
    friend void KTimeComboBox_QBasePaintEvent(KTimeComboBox* self, QPaintEvent* e);
    friend void KTimeComboBox_ShowEvent(KTimeComboBox* self, QShowEvent* e);
    friend void KTimeComboBox_QBaseShowEvent(KTimeComboBox* self, QShowEvent* e);
    friend void KTimeComboBox_HideEvent(KTimeComboBox* self, QHideEvent* e);
    friend void KTimeComboBox_QBaseHideEvent(KTimeComboBox* self, QHideEvent* e);
    friend void KTimeComboBox_MouseReleaseEvent(KTimeComboBox* self, QMouseEvent* e);
    friend void KTimeComboBox_QBaseMouseReleaseEvent(KTimeComboBox* self, QMouseEvent* e);
    friend void KTimeComboBox_KeyReleaseEvent(KTimeComboBox* self, QKeyEvent* e);
    friend void KTimeComboBox_QBaseKeyReleaseEvent(KTimeComboBox* self, QKeyEvent* e);
    friend void KTimeComboBox_ContextMenuEvent(KTimeComboBox* self, QContextMenuEvent* e);
    friend void KTimeComboBox_QBaseContextMenuEvent(KTimeComboBox* self, QContextMenuEvent* e);
    friend void KTimeComboBox_InputMethodEvent(KTimeComboBox* self, QInputMethodEvent* param1);
    friend void KTimeComboBox_QBaseInputMethodEvent(KTimeComboBox* self, QInputMethodEvent* param1);
    friend void KTimeComboBox_InitStyleOption(const KTimeComboBox* self, QStyleOptionComboBox* option);
    friend void KTimeComboBox_QBaseInitStyleOption(const KTimeComboBox* self, QStyleOptionComboBox* option);
    friend void KTimeComboBox_MouseDoubleClickEvent(KTimeComboBox* self, QMouseEvent* event);
    friend void KTimeComboBox_QBaseMouseDoubleClickEvent(KTimeComboBox* self, QMouseEvent* event);
    friend void KTimeComboBox_MouseMoveEvent(KTimeComboBox* self, QMouseEvent* event);
    friend void KTimeComboBox_QBaseMouseMoveEvent(KTimeComboBox* self, QMouseEvent* event);
    friend void KTimeComboBox_EnterEvent(KTimeComboBox* self, QEnterEvent* event);
    friend void KTimeComboBox_QBaseEnterEvent(KTimeComboBox* self, QEnterEvent* event);
    friend void KTimeComboBox_LeaveEvent(KTimeComboBox* self, QEvent* event);
    friend void KTimeComboBox_QBaseLeaveEvent(KTimeComboBox* self, QEvent* event);
    friend void KTimeComboBox_MoveEvent(KTimeComboBox* self, QMoveEvent* event);
    friend void KTimeComboBox_QBaseMoveEvent(KTimeComboBox* self, QMoveEvent* event);
    friend void KTimeComboBox_CloseEvent(KTimeComboBox* self, QCloseEvent* event);
    friend void KTimeComboBox_QBaseCloseEvent(KTimeComboBox* self, QCloseEvent* event);
    friend void KTimeComboBox_TabletEvent(KTimeComboBox* self, QTabletEvent* event);
    friend void KTimeComboBox_QBaseTabletEvent(KTimeComboBox* self, QTabletEvent* event);
    friend void KTimeComboBox_ActionEvent(KTimeComboBox* self, QActionEvent* event);
    friend void KTimeComboBox_QBaseActionEvent(KTimeComboBox* self, QActionEvent* event);
    friend void KTimeComboBox_DragEnterEvent(KTimeComboBox* self, QDragEnterEvent* event);
    friend void KTimeComboBox_QBaseDragEnterEvent(KTimeComboBox* self, QDragEnterEvent* event);
    friend void KTimeComboBox_DragMoveEvent(KTimeComboBox* self, QDragMoveEvent* event);
    friend void KTimeComboBox_QBaseDragMoveEvent(KTimeComboBox* self, QDragMoveEvent* event);
    friend void KTimeComboBox_DragLeaveEvent(KTimeComboBox* self, QDragLeaveEvent* event);
    friend void KTimeComboBox_QBaseDragLeaveEvent(KTimeComboBox* self, QDragLeaveEvent* event);
    friend void KTimeComboBox_DropEvent(KTimeComboBox* self, QDropEvent* event);
    friend void KTimeComboBox_QBaseDropEvent(KTimeComboBox* self, QDropEvent* event);
    friend bool KTimeComboBox_NativeEvent(KTimeComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KTimeComboBox_QBaseNativeEvent(KTimeComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KTimeComboBox_Metric(const KTimeComboBox* self, int param1);
    friend int KTimeComboBox_QBaseMetric(const KTimeComboBox* self, int param1);
    friend void KTimeComboBox_InitPainter(const KTimeComboBox* self, QPainter* painter);
    friend void KTimeComboBox_QBaseInitPainter(const KTimeComboBox* self, QPainter* painter);
    friend QPaintDevice* KTimeComboBox_Redirected(const KTimeComboBox* self, QPoint* offset);
    friend QPaintDevice* KTimeComboBox_QBaseRedirected(const KTimeComboBox* self, QPoint* offset);
    friend QPainter* KTimeComboBox_SharedPainter(const KTimeComboBox* self);
    friend QPainter* KTimeComboBox_QBaseSharedPainter(const KTimeComboBox* self);
    friend bool KTimeComboBox_FocusNextPrevChild(KTimeComboBox* self, bool next);
    friend bool KTimeComboBox_QBaseFocusNextPrevChild(KTimeComboBox* self, bool next);
    friend void KTimeComboBox_TimerEvent(KTimeComboBox* self, QTimerEvent* event);
    friend void KTimeComboBox_QBaseTimerEvent(KTimeComboBox* self, QTimerEvent* event);
    friend void KTimeComboBox_ChildEvent(KTimeComboBox* self, QChildEvent* event);
    friend void KTimeComboBox_QBaseChildEvent(KTimeComboBox* self, QChildEvent* event);
    friend void KTimeComboBox_CustomEvent(KTimeComboBox* self, QEvent* event);
    friend void KTimeComboBox_QBaseCustomEvent(KTimeComboBox* self, QEvent* event);
    friend void KTimeComboBox_ConnectNotify(KTimeComboBox* self, const QMetaMethod* signal);
    friend void KTimeComboBox_QBaseConnectNotify(KTimeComboBox* self, const QMetaMethod* signal);
    friend void KTimeComboBox_DisconnectNotify(KTimeComboBox* self, const QMetaMethod* signal);
    friend void KTimeComboBox_QBaseDisconnectNotify(KTimeComboBox* self, const QMetaMethod* signal);
    friend void KTimeComboBox_UpdateMicroFocus(KTimeComboBox* self);
    friend void KTimeComboBox_QBaseUpdateMicroFocus(KTimeComboBox* self);
    friend void KTimeComboBox_Create(KTimeComboBox* self);
    friend void KTimeComboBox_QBaseCreate(KTimeComboBox* self);
    friend void KTimeComboBox_Destroy(KTimeComboBox* self);
    friend void KTimeComboBox_QBaseDestroy(KTimeComboBox* self);
    friend bool KTimeComboBox_FocusNextChild(KTimeComboBox* self);
    friend bool KTimeComboBox_QBaseFocusNextChild(KTimeComboBox* self);
    friend bool KTimeComboBox_FocusPreviousChild(KTimeComboBox* self);
    friend bool KTimeComboBox_QBaseFocusPreviousChild(KTimeComboBox* self);
    friend QObject* KTimeComboBox_Sender(const KTimeComboBox* self);
    friend QObject* KTimeComboBox_QBaseSender(const KTimeComboBox* self);
    friend int KTimeComboBox_SenderSignalIndex(const KTimeComboBox* self);
    friend int KTimeComboBox_QBaseSenderSignalIndex(const KTimeComboBox* self);
    friend int KTimeComboBox_Receivers(const KTimeComboBox* self, const char* signal);
    friend int KTimeComboBox_QBaseReceivers(const KTimeComboBox* self, const char* signal);
    friend bool KTimeComboBox_IsSignalConnected(const KTimeComboBox* self, const QMetaMethod* signal);
    friend bool KTimeComboBox_QBaseIsSignalConnected(const KTimeComboBox* self, const QMetaMethod* signal);
    friend double KTimeComboBox_GetDecodedMetricF(const KTimeComboBox* self, int metricA, int metricB);
    friend double KTimeComboBox_QBaseGetDecodedMetricF(const KTimeComboBox* self, int metricA, int metricB);
};

#endif
