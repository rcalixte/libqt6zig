#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKDATECOMBOBOX_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKDATECOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KDateComboBox so that we can call protected methods
class VirtualKDateComboBox final : public KDateComboBox {

  public:
    // Virtual class boolean flag
    bool isVirtualKDateComboBox = true;

    // Virtual class public types (including callbacks)
    using KDateComboBox_Metacall_Callback = int (*)(KDateComboBox*, int, int, void**);
    using KDateComboBox_EventFilter_Callback = bool (*)(KDateComboBox*, QObject*, QEvent*);
    using KDateComboBox_ShowPopup_Callback = void (*)();
    using KDateComboBox_HidePopup_Callback = void (*)();
    using KDateComboBox_MousePressEvent_Callback = void (*)(KDateComboBox*, QMouseEvent*);
    using KDateComboBox_WheelEvent_Callback = void (*)(KDateComboBox*, QWheelEvent*);
    using KDateComboBox_KeyPressEvent_Callback = void (*)(KDateComboBox*, QKeyEvent*);
    using KDateComboBox_FocusInEvent_Callback = void (*)(KDateComboBox*, QFocusEvent*);
    using KDateComboBox_FocusOutEvent_Callback = void (*)(KDateComboBox*, QFocusEvent*);
    using KDateComboBox_ResizeEvent_Callback = void (*)(KDateComboBox*, QResizeEvent*);
    using KDateComboBox_AssignDate_Callback = void (*)(KDateComboBox*, QDate*);
    using KDateComboBox_SetModel_Callback = void (*)(KDateComboBox*, QAbstractItemModel*);
    using KDateComboBox_SizeHint_Callback = QSize* (*)();
    using KDateComboBox_MinimumSizeHint_Callback = QSize* (*)();
    using KDateComboBox_Event_Callback = bool (*)(KDateComboBox*, QEvent*);
    using KDateComboBox_InputMethodQuery_Callback = QVariant* (*)(const KDateComboBox*, int);
    using KDateComboBox_ChangeEvent_Callback = void (*)(KDateComboBox*, QEvent*);
    using KDateComboBox_PaintEvent_Callback = void (*)(KDateComboBox*, QPaintEvent*);
    using KDateComboBox_ShowEvent_Callback = void (*)(KDateComboBox*, QShowEvent*);
    using KDateComboBox_HideEvent_Callback = void (*)(KDateComboBox*, QHideEvent*);
    using KDateComboBox_MouseReleaseEvent_Callback = void (*)(KDateComboBox*, QMouseEvent*);
    using KDateComboBox_KeyReleaseEvent_Callback = void (*)(KDateComboBox*, QKeyEvent*);
    using KDateComboBox_ContextMenuEvent_Callback = void (*)(KDateComboBox*, QContextMenuEvent*);
    using KDateComboBox_InputMethodEvent_Callback = void (*)(KDateComboBox*, QInputMethodEvent*);
    using KDateComboBox_InitStyleOption_Callback = void (*)(const KDateComboBox*, QStyleOptionComboBox*);
    using KDateComboBox_DevType_Callback = int (*)();
    using KDateComboBox_SetVisible_Callback = void (*)(KDateComboBox*, bool);
    using KDateComboBox_HeightForWidth_Callback = int (*)(const KDateComboBox*, int);
    using KDateComboBox_HasHeightForWidth_Callback = bool (*)();
    using KDateComboBox_PaintEngine_Callback = QPaintEngine* (*)();
    using KDateComboBox_MouseDoubleClickEvent_Callback = void (*)(KDateComboBox*, QMouseEvent*);
    using KDateComboBox_MouseMoveEvent_Callback = void (*)(KDateComboBox*, QMouseEvent*);
    using KDateComboBox_EnterEvent_Callback = void (*)(KDateComboBox*, QEnterEvent*);
    using KDateComboBox_LeaveEvent_Callback = void (*)(KDateComboBox*, QEvent*);
    using KDateComboBox_MoveEvent_Callback = void (*)(KDateComboBox*, QMoveEvent*);
    using KDateComboBox_CloseEvent_Callback = void (*)(KDateComboBox*, QCloseEvent*);
    using KDateComboBox_TabletEvent_Callback = void (*)(KDateComboBox*, QTabletEvent*);
    using KDateComboBox_ActionEvent_Callback = void (*)(KDateComboBox*, QActionEvent*);
    using KDateComboBox_DragEnterEvent_Callback = void (*)(KDateComboBox*, QDragEnterEvent*);
    using KDateComboBox_DragMoveEvent_Callback = void (*)(KDateComboBox*, QDragMoveEvent*);
    using KDateComboBox_DragLeaveEvent_Callback = void (*)(KDateComboBox*, QDragLeaveEvent*);
    using KDateComboBox_DropEvent_Callback = void (*)(KDateComboBox*, QDropEvent*);
    using KDateComboBox_NativeEvent_Callback = bool (*)(KDateComboBox*, libqt_string, void*, intptr_t*);
    using KDateComboBox_Metric_Callback = int (*)(const KDateComboBox*, int);
    using KDateComboBox_InitPainter_Callback = void (*)(const KDateComboBox*, QPainter*);
    using KDateComboBox_Redirected_Callback = QPaintDevice* (*)(const KDateComboBox*, QPoint*);
    using KDateComboBox_SharedPainter_Callback = QPainter* (*)();
    using KDateComboBox_FocusNextPrevChild_Callback = bool (*)(KDateComboBox*, bool);
    using KDateComboBox_TimerEvent_Callback = void (*)(KDateComboBox*, QTimerEvent*);
    using KDateComboBox_ChildEvent_Callback = void (*)(KDateComboBox*, QChildEvent*);
    using KDateComboBox_CustomEvent_Callback = void (*)(KDateComboBox*, QEvent*);
    using KDateComboBox_ConnectNotify_Callback = void (*)(KDateComboBox*, QMetaMethod*);
    using KDateComboBox_DisconnectNotify_Callback = void (*)(KDateComboBox*, QMetaMethod*);
    using KDateComboBox_UpdateMicroFocus_Callback = void (*)();
    using KDateComboBox_Create_Callback = void (*)();
    using KDateComboBox_Destroy_Callback = void (*)();
    using KDateComboBox_FocusNextChild_Callback = bool (*)();
    using KDateComboBox_FocusPreviousChild_Callback = bool (*)();
    using KDateComboBox_Sender_Callback = QObject* (*)();
    using KDateComboBox_SenderSignalIndex_Callback = int (*)();
    using KDateComboBox_Receivers_Callback = int (*)(const KDateComboBox*, const char*);
    using KDateComboBox_IsSignalConnected_Callback = bool (*)(const KDateComboBox*, QMetaMethod*);
    using KDateComboBox_GetDecodedMetricF_Callback = double (*)(const KDateComboBox*, int, int);

  protected:
    // Instance callback storage
    KDateComboBox_Metacall_Callback kdatecombobox_metacall_callback = nullptr;
    KDateComboBox_EventFilter_Callback kdatecombobox_eventfilter_callback = nullptr;
    KDateComboBox_ShowPopup_Callback kdatecombobox_showpopup_callback = nullptr;
    KDateComboBox_HidePopup_Callback kdatecombobox_hidepopup_callback = nullptr;
    KDateComboBox_MousePressEvent_Callback kdatecombobox_mousepressevent_callback = nullptr;
    KDateComboBox_WheelEvent_Callback kdatecombobox_wheelevent_callback = nullptr;
    KDateComboBox_KeyPressEvent_Callback kdatecombobox_keypressevent_callback = nullptr;
    KDateComboBox_FocusInEvent_Callback kdatecombobox_focusinevent_callback = nullptr;
    KDateComboBox_FocusOutEvent_Callback kdatecombobox_focusoutevent_callback = nullptr;
    KDateComboBox_ResizeEvent_Callback kdatecombobox_resizeevent_callback = nullptr;
    KDateComboBox_AssignDate_Callback kdatecombobox_assigndate_callback = nullptr;
    KDateComboBox_SetModel_Callback kdatecombobox_setmodel_callback = nullptr;
    KDateComboBox_SizeHint_Callback kdatecombobox_sizehint_callback = nullptr;
    KDateComboBox_MinimumSizeHint_Callback kdatecombobox_minimumsizehint_callback = nullptr;
    KDateComboBox_Event_Callback kdatecombobox_event_callback = nullptr;
    KDateComboBox_InputMethodQuery_Callback kdatecombobox_inputmethodquery_callback = nullptr;
    KDateComboBox_ChangeEvent_Callback kdatecombobox_changeevent_callback = nullptr;
    KDateComboBox_PaintEvent_Callback kdatecombobox_paintevent_callback = nullptr;
    KDateComboBox_ShowEvent_Callback kdatecombobox_showevent_callback = nullptr;
    KDateComboBox_HideEvent_Callback kdatecombobox_hideevent_callback = nullptr;
    KDateComboBox_MouseReleaseEvent_Callback kdatecombobox_mousereleaseevent_callback = nullptr;
    KDateComboBox_KeyReleaseEvent_Callback kdatecombobox_keyreleaseevent_callback = nullptr;
    KDateComboBox_ContextMenuEvent_Callback kdatecombobox_contextmenuevent_callback = nullptr;
    KDateComboBox_InputMethodEvent_Callback kdatecombobox_inputmethodevent_callback = nullptr;
    KDateComboBox_InitStyleOption_Callback kdatecombobox_initstyleoption_callback = nullptr;
    KDateComboBox_DevType_Callback kdatecombobox_devtype_callback = nullptr;
    KDateComboBox_SetVisible_Callback kdatecombobox_setvisible_callback = nullptr;
    KDateComboBox_HeightForWidth_Callback kdatecombobox_heightforwidth_callback = nullptr;
    KDateComboBox_HasHeightForWidth_Callback kdatecombobox_hasheightforwidth_callback = nullptr;
    KDateComboBox_PaintEngine_Callback kdatecombobox_paintengine_callback = nullptr;
    KDateComboBox_MouseDoubleClickEvent_Callback kdatecombobox_mousedoubleclickevent_callback = nullptr;
    KDateComboBox_MouseMoveEvent_Callback kdatecombobox_mousemoveevent_callback = nullptr;
    KDateComboBox_EnterEvent_Callback kdatecombobox_enterevent_callback = nullptr;
    KDateComboBox_LeaveEvent_Callback kdatecombobox_leaveevent_callback = nullptr;
    KDateComboBox_MoveEvent_Callback kdatecombobox_moveevent_callback = nullptr;
    KDateComboBox_CloseEvent_Callback kdatecombobox_closeevent_callback = nullptr;
    KDateComboBox_TabletEvent_Callback kdatecombobox_tabletevent_callback = nullptr;
    KDateComboBox_ActionEvent_Callback kdatecombobox_actionevent_callback = nullptr;
    KDateComboBox_DragEnterEvent_Callback kdatecombobox_dragenterevent_callback = nullptr;
    KDateComboBox_DragMoveEvent_Callback kdatecombobox_dragmoveevent_callback = nullptr;
    KDateComboBox_DragLeaveEvent_Callback kdatecombobox_dragleaveevent_callback = nullptr;
    KDateComboBox_DropEvent_Callback kdatecombobox_dropevent_callback = nullptr;
    KDateComboBox_NativeEvent_Callback kdatecombobox_nativeevent_callback = nullptr;
    KDateComboBox_Metric_Callback kdatecombobox_metric_callback = nullptr;
    KDateComboBox_InitPainter_Callback kdatecombobox_initpainter_callback = nullptr;
    KDateComboBox_Redirected_Callback kdatecombobox_redirected_callback = nullptr;
    KDateComboBox_SharedPainter_Callback kdatecombobox_sharedpainter_callback = nullptr;
    KDateComboBox_FocusNextPrevChild_Callback kdatecombobox_focusnextprevchild_callback = nullptr;
    KDateComboBox_TimerEvent_Callback kdatecombobox_timerevent_callback = nullptr;
    KDateComboBox_ChildEvent_Callback kdatecombobox_childevent_callback = nullptr;
    KDateComboBox_CustomEvent_Callback kdatecombobox_customevent_callback = nullptr;
    KDateComboBox_ConnectNotify_Callback kdatecombobox_connectnotify_callback = nullptr;
    KDateComboBox_DisconnectNotify_Callback kdatecombobox_disconnectnotify_callback = nullptr;
    KDateComboBox_UpdateMicroFocus_Callback kdatecombobox_updatemicrofocus_callback = nullptr;
    KDateComboBox_Create_Callback kdatecombobox_create_callback = nullptr;
    KDateComboBox_Destroy_Callback kdatecombobox_destroy_callback = nullptr;
    KDateComboBox_FocusNextChild_Callback kdatecombobox_focusnextchild_callback = nullptr;
    KDateComboBox_FocusPreviousChild_Callback kdatecombobox_focuspreviouschild_callback = nullptr;
    KDateComboBox_Sender_Callback kdatecombobox_sender_callback = nullptr;
    KDateComboBox_SenderSignalIndex_Callback kdatecombobox_sendersignalindex_callback = nullptr;
    KDateComboBox_Receivers_Callback kdatecombobox_receivers_callback = nullptr;
    KDateComboBox_IsSignalConnected_Callback kdatecombobox_issignalconnected_callback = nullptr;
    KDateComboBox_GetDecodedMetricF_Callback kdatecombobox_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kdatecombobox_metacall_isbase = false;
    mutable bool kdatecombobox_eventfilter_isbase = false;
    mutable bool kdatecombobox_showpopup_isbase = false;
    mutable bool kdatecombobox_hidepopup_isbase = false;
    mutable bool kdatecombobox_mousepressevent_isbase = false;
    mutable bool kdatecombobox_wheelevent_isbase = false;
    mutable bool kdatecombobox_keypressevent_isbase = false;
    mutable bool kdatecombobox_focusinevent_isbase = false;
    mutable bool kdatecombobox_focusoutevent_isbase = false;
    mutable bool kdatecombobox_resizeevent_isbase = false;
    mutable bool kdatecombobox_assigndate_isbase = false;
    mutable bool kdatecombobox_setmodel_isbase = false;
    mutable bool kdatecombobox_sizehint_isbase = false;
    mutable bool kdatecombobox_minimumsizehint_isbase = false;
    mutable bool kdatecombobox_event_isbase = false;
    mutable bool kdatecombobox_inputmethodquery_isbase = false;
    mutable bool kdatecombobox_changeevent_isbase = false;
    mutable bool kdatecombobox_paintevent_isbase = false;
    mutable bool kdatecombobox_showevent_isbase = false;
    mutable bool kdatecombobox_hideevent_isbase = false;
    mutable bool kdatecombobox_mousereleaseevent_isbase = false;
    mutable bool kdatecombobox_keyreleaseevent_isbase = false;
    mutable bool kdatecombobox_contextmenuevent_isbase = false;
    mutable bool kdatecombobox_inputmethodevent_isbase = false;
    mutable bool kdatecombobox_initstyleoption_isbase = false;
    mutable bool kdatecombobox_devtype_isbase = false;
    mutable bool kdatecombobox_setvisible_isbase = false;
    mutable bool kdatecombobox_heightforwidth_isbase = false;
    mutable bool kdatecombobox_hasheightforwidth_isbase = false;
    mutable bool kdatecombobox_paintengine_isbase = false;
    mutable bool kdatecombobox_mousedoubleclickevent_isbase = false;
    mutable bool kdatecombobox_mousemoveevent_isbase = false;
    mutable bool kdatecombobox_enterevent_isbase = false;
    mutable bool kdatecombobox_leaveevent_isbase = false;
    mutable bool kdatecombobox_moveevent_isbase = false;
    mutable bool kdatecombobox_closeevent_isbase = false;
    mutable bool kdatecombobox_tabletevent_isbase = false;
    mutable bool kdatecombobox_actionevent_isbase = false;
    mutable bool kdatecombobox_dragenterevent_isbase = false;
    mutable bool kdatecombobox_dragmoveevent_isbase = false;
    mutable bool kdatecombobox_dragleaveevent_isbase = false;
    mutable bool kdatecombobox_dropevent_isbase = false;
    mutable bool kdatecombobox_nativeevent_isbase = false;
    mutable bool kdatecombobox_metric_isbase = false;
    mutable bool kdatecombobox_initpainter_isbase = false;
    mutable bool kdatecombobox_redirected_isbase = false;
    mutable bool kdatecombobox_sharedpainter_isbase = false;
    mutable bool kdatecombobox_focusnextprevchild_isbase = false;
    mutable bool kdatecombobox_timerevent_isbase = false;
    mutable bool kdatecombobox_childevent_isbase = false;
    mutable bool kdatecombobox_customevent_isbase = false;
    mutable bool kdatecombobox_connectnotify_isbase = false;
    mutable bool kdatecombobox_disconnectnotify_isbase = false;
    mutable bool kdatecombobox_updatemicrofocus_isbase = false;
    mutable bool kdatecombobox_create_isbase = false;
    mutable bool kdatecombobox_destroy_isbase = false;
    mutable bool kdatecombobox_focusnextchild_isbase = false;
    mutable bool kdatecombobox_focuspreviouschild_isbase = false;
    mutable bool kdatecombobox_sender_isbase = false;
    mutable bool kdatecombobox_sendersignalindex_isbase = false;
    mutable bool kdatecombobox_receivers_isbase = false;
    mutable bool kdatecombobox_issignalconnected_isbase = false;
    mutable bool kdatecombobox_getdecodedmetricf_isbase = false;

  public:
    VirtualKDateComboBox(QWidget* parent) : KDateComboBox(parent) {};
    VirtualKDateComboBox() : KDateComboBox() {};

    ~VirtualKDateComboBox() {
        kdatecombobox_metacall_callback = nullptr;
        kdatecombobox_eventfilter_callback = nullptr;
        kdatecombobox_showpopup_callback = nullptr;
        kdatecombobox_hidepopup_callback = nullptr;
        kdatecombobox_mousepressevent_callback = nullptr;
        kdatecombobox_wheelevent_callback = nullptr;
        kdatecombobox_keypressevent_callback = nullptr;
        kdatecombobox_focusinevent_callback = nullptr;
        kdatecombobox_focusoutevent_callback = nullptr;
        kdatecombobox_resizeevent_callback = nullptr;
        kdatecombobox_assigndate_callback = nullptr;
        kdatecombobox_setmodel_callback = nullptr;
        kdatecombobox_sizehint_callback = nullptr;
        kdatecombobox_minimumsizehint_callback = nullptr;
        kdatecombobox_event_callback = nullptr;
        kdatecombobox_inputmethodquery_callback = nullptr;
        kdatecombobox_changeevent_callback = nullptr;
        kdatecombobox_paintevent_callback = nullptr;
        kdatecombobox_showevent_callback = nullptr;
        kdatecombobox_hideevent_callback = nullptr;
        kdatecombobox_mousereleaseevent_callback = nullptr;
        kdatecombobox_keyreleaseevent_callback = nullptr;
        kdatecombobox_contextmenuevent_callback = nullptr;
        kdatecombobox_inputmethodevent_callback = nullptr;
        kdatecombobox_initstyleoption_callback = nullptr;
        kdatecombobox_devtype_callback = nullptr;
        kdatecombobox_setvisible_callback = nullptr;
        kdatecombobox_heightforwidth_callback = nullptr;
        kdatecombobox_hasheightforwidth_callback = nullptr;
        kdatecombobox_paintengine_callback = nullptr;
        kdatecombobox_mousedoubleclickevent_callback = nullptr;
        kdatecombobox_mousemoveevent_callback = nullptr;
        kdatecombobox_enterevent_callback = nullptr;
        kdatecombobox_leaveevent_callback = nullptr;
        kdatecombobox_moveevent_callback = nullptr;
        kdatecombobox_closeevent_callback = nullptr;
        kdatecombobox_tabletevent_callback = nullptr;
        kdatecombobox_actionevent_callback = nullptr;
        kdatecombobox_dragenterevent_callback = nullptr;
        kdatecombobox_dragmoveevent_callback = nullptr;
        kdatecombobox_dragleaveevent_callback = nullptr;
        kdatecombobox_dropevent_callback = nullptr;
        kdatecombobox_nativeevent_callback = nullptr;
        kdatecombobox_metric_callback = nullptr;
        kdatecombobox_initpainter_callback = nullptr;
        kdatecombobox_redirected_callback = nullptr;
        kdatecombobox_sharedpainter_callback = nullptr;
        kdatecombobox_focusnextprevchild_callback = nullptr;
        kdatecombobox_timerevent_callback = nullptr;
        kdatecombobox_childevent_callback = nullptr;
        kdatecombobox_customevent_callback = nullptr;
        kdatecombobox_connectnotify_callback = nullptr;
        kdatecombobox_disconnectnotify_callback = nullptr;
        kdatecombobox_updatemicrofocus_callback = nullptr;
        kdatecombobox_create_callback = nullptr;
        kdatecombobox_destroy_callback = nullptr;
        kdatecombobox_focusnextchild_callback = nullptr;
        kdatecombobox_focuspreviouschild_callback = nullptr;
        kdatecombobox_sender_callback = nullptr;
        kdatecombobox_sendersignalindex_callback = nullptr;
        kdatecombobox_receivers_callback = nullptr;
        kdatecombobox_issignalconnected_callback = nullptr;
        kdatecombobox_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKDateComboBox_Metacall_Callback(KDateComboBox_Metacall_Callback cb) { kdatecombobox_metacall_callback = cb; }
    inline void setKDateComboBox_EventFilter_Callback(KDateComboBox_EventFilter_Callback cb) { kdatecombobox_eventfilter_callback = cb; }
    inline void setKDateComboBox_ShowPopup_Callback(KDateComboBox_ShowPopup_Callback cb) { kdatecombobox_showpopup_callback = cb; }
    inline void setKDateComboBox_HidePopup_Callback(KDateComboBox_HidePopup_Callback cb) { kdatecombobox_hidepopup_callback = cb; }
    inline void setKDateComboBox_MousePressEvent_Callback(KDateComboBox_MousePressEvent_Callback cb) { kdatecombobox_mousepressevent_callback = cb; }
    inline void setKDateComboBox_WheelEvent_Callback(KDateComboBox_WheelEvent_Callback cb) { kdatecombobox_wheelevent_callback = cb; }
    inline void setKDateComboBox_KeyPressEvent_Callback(KDateComboBox_KeyPressEvent_Callback cb) { kdatecombobox_keypressevent_callback = cb; }
    inline void setKDateComboBox_FocusInEvent_Callback(KDateComboBox_FocusInEvent_Callback cb) { kdatecombobox_focusinevent_callback = cb; }
    inline void setKDateComboBox_FocusOutEvent_Callback(KDateComboBox_FocusOutEvent_Callback cb) { kdatecombobox_focusoutevent_callback = cb; }
    inline void setKDateComboBox_ResizeEvent_Callback(KDateComboBox_ResizeEvent_Callback cb) { kdatecombobox_resizeevent_callback = cb; }
    inline void setKDateComboBox_AssignDate_Callback(KDateComboBox_AssignDate_Callback cb) { kdatecombobox_assigndate_callback = cb; }
    inline void setKDateComboBox_SetModel_Callback(KDateComboBox_SetModel_Callback cb) { kdatecombobox_setmodel_callback = cb; }
    inline void setKDateComboBox_SizeHint_Callback(KDateComboBox_SizeHint_Callback cb) { kdatecombobox_sizehint_callback = cb; }
    inline void setKDateComboBox_MinimumSizeHint_Callback(KDateComboBox_MinimumSizeHint_Callback cb) { kdatecombobox_minimumsizehint_callback = cb; }
    inline void setKDateComboBox_Event_Callback(KDateComboBox_Event_Callback cb) { kdatecombobox_event_callback = cb; }
    inline void setKDateComboBox_InputMethodQuery_Callback(KDateComboBox_InputMethodQuery_Callback cb) { kdatecombobox_inputmethodquery_callback = cb; }
    inline void setKDateComboBox_ChangeEvent_Callback(KDateComboBox_ChangeEvent_Callback cb) { kdatecombobox_changeevent_callback = cb; }
    inline void setKDateComboBox_PaintEvent_Callback(KDateComboBox_PaintEvent_Callback cb) { kdatecombobox_paintevent_callback = cb; }
    inline void setKDateComboBox_ShowEvent_Callback(KDateComboBox_ShowEvent_Callback cb) { kdatecombobox_showevent_callback = cb; }
    inline void setKDateComboBox_HideEvent_Callback(KDateComboBox_HideEvent_Callback cb) { kdatecombobox_hideevent_callback = cb; }
    inline void setKDateComboBox_MouseReleaseEvent_Callback(KDateComboBox_MouseReleaseEvent_Callback cb) { kdatecombobox_mousereleaseevent_callback = cb; }
    inline void setKDateComboBox_KeyReleaseEvent_Callback(KDateComboBox_KeyReleaseEvent_Callback cb) { kdatecombobox_keyreleaseevent_callback = cb; }
    inline void setKDateComboBox_ContextMenuEvent_Callback(KDateComboBox_ContextMenuEvent_Callback cb) { kdatecombobox_contextmenuevent_callback = cb; }
    inline void setKDateComboBox_InputMethodEvent_Callback(KDateComboBox_InputMethodEvent_Callback cb) { kdatecombobox_inputmethodevent_callback = cb; }
    inline void setKDateComboBox_InitStyleOption_Callback(KDateComboBox_InitStyleOption_Callback cb) { kdatecombobox_initstyleoption_callback = cb; }
    inline void setKDateComboBox_DevType_Callback(KDateComboBox_DevType_Callback cb) { kdatecombobox_devtype_callback = cb; }
    inline void setKDateComboBox_SetVisible_Callback(KDateComboBox_SetVisible_Callback cb) { kdatecombobox_setvisible_callback = cb; }
    inline void setKDateComboBox_HeightForWidth_Callback(KDateComboBox_HeightForWidth_Callback cb) { kdatecombobox_heightforwidth_callback = cb; }
    inline void setKDateComboBox_HasHeightForWidth_Callback(KDateComboBox_HasHeightForWidth_Callback cb) { kdatecombobox_hasheightforwidth_callback = cb; }
    inline void setKDateComboBox_PaintEngine_Callback(KDateComboBox_PaintEngine_Callback cb) { kdatecombobox_paintengine_callback = cb; }
    inline void setKDateComboBox_MouseDoubleClickEvent_Callback(KDateComboBox_MouseDoubleClickEvent_Callback cb) { kdatecombobox_mousedoubleclickevent_callback = cb; }
    inline void setKDateComboBox_MouseMoveEvent_Callback(KDateComboBox_MouseMoveEvent_Callback cb) { kdatecombobox_mousemoveevent_callback = cb; }
    inline void setKDateComboBox_EnterEvent_Callback(KDateComboBox_EnterEvent_Callback cb) { kdatecombobox_enterevent_callback = cb; }
    inline void setKDateComboBox_LeaveEvent_Callback(KDateComboBox_LeaveEvent_Callback cb) { kdatecombobox_leaveevent_callback = cb; }
    inline void setKDateComboBox_MoveEvent_Callback(KDateComboBox_MoveEvent_Callback cb) { kdatecombobox_moveevent_callback = cb; }
    inline void setKDateComboBox_CloseEvent_Callback(KDateComboBox_CloseEvent_Callback cb) { kdatecombobox_closeevent_callback = cb; }
    inline void setKDateComboBox_TabletEvent_Callback(KDateComboBox_TabletEvent_Callback cb) { kdatecombobox_tabletevent_callback = cb; }
    inline void setKDateComboBox_ActionEvent_Callback(KDateComboBox_ActionEvent_Callback cb) { kdatecombobox_actionevent_callback = cb; }
    inline void setKDateComboBox_DragEnterEvent_Callback(KDateComboBox_DragEnterEvent_Callback cb) { kdatecombobox_dragenterevent_callback = cb; }
    inline void setKDateComboBox_DragMoveEvent_Callback(KDateComboBox_DragMoveEvent_Callback cb) { kdatecombobox_dragmoveevent_callback = cb; }
    inline void setKDateComboBox_DragLeaveEvent_Callback(KDateComboBox_DragLeaveEvent_Callback cb) { kdatecombobox_dragleaveevent_callback = cb; }
    inline void setKDateComboBox_DropEvent_Callback(KDateComboBox_DropEvent_Callback cb) { kdatecombobox_dropevent_callback = cb; }
    inline void setKDateComboBox_NativeEvent_Callback(KDateComboBox_NativeEvent_Callback cb) { kdatecombobox_nativeevent_callback = cb; }
    inline void setKDateComboBox_Metric_Callback(KDateComboBox_Metric_Callback cb) { kdatecombobox_metric_callback = cb; }
    inline void setKDateComboBox_InitPainter_Callback(KDateComboBox_InitPainter_Callback cb) { kdatecombobox_initpainter_callback = cb; }
    inline void setKDateComboBox_Redirected_Callback(KDateComboBox_Redirected_Callback cb) { kdatecombobox_redirected_callback = cb; }
    inline void setKDateComboBox_SharedPainter_Callback(KDateComboBox_SharedPainter_Callback cb) { kdatecombobox_sharedpainter_callback = cb; }
    inline void setKDateComboBox_FocusNextPrevChild_Callback(KDateComboBox_FocusNextPrevChild_Callback cb) { kdatecombobox_focusnextprevchild_callback = cb; }
    inline void setKDateComboBox_TimerEvent_Callback(KDateComboBox_TimerEvent_Callback cb) { kdatecombobox_timerevent_callback = cb; }
    inline void setKDateComboBox_ChildEvent_Callback(KDateComboBox_ChildEvent_Callback cb) { kdatecombobox_childevent_callback = cb; }
    inline void setKDateComboBox_CustomEvent_Callback(KDateComboBox_CustomEvent_Callback cb) { kdatecombobox_customevent_callback = cb; }
    inline void setKDateComboBox_ConnectNotify_Callback(KDateComboBox_ConnectNotify_Callback cb) { kdatecombobox_connectnotify_callback = cb; }
    inline void setKDateComboBox_DisconnectNotify_Callback(KDateComboBox_DisconnectNotify_Callback cb) { kdatecombobox_disconnectnotify_callback = cb; }
    inline void setKDateComboBox_UpdateMicroFocus_Callback(KDateComboBox_UpdateMicroFocus_Callback cb) { kdatecombobox_updatemicrofocus_callback = cb; }
    inline void setKDateComboBox_Create_Callback(KDateComboBox_Create_Callback cb) { kdatecombobox_create_callback = cb; }
    inline void setKDateComboBox_Destroy_Callback(KDateComboBox_Destroy_Callback cb) { kdatecombobox_destroy_callback = cb; }
    inline void setKDateComboBox_FocusNextChild_Callback(KDateComboBox_FocusNextChild_Callback cb) { kdatecombobox_focusnextchild_callback = cb; }
    inline void setKDateComboBox_FocusPreviousChild_Callback(KDateComboBox_FocusPreviousChild_Callback cb) { kdatecombobox_focuspreviouschild_callback = cb; }
    inline void setKDateComboBox_Sender_Callback(KDateComboBox_Sender_Callback cb) { kdatecombobox_sender_callback = cb; }
    inline void setKDateComboBox_SenderSignalIndex_Callback(KDateComboBox_SenderSignalIndex_Callback cb) { kdatecombobox_sendersignalindex_callback = cb; }
    inline void setKDateComboBox_Receivers_Callback(KDateComboBox_Receivers_Callback cb) { kdatecombobox_receivers_callback = cb; }
    inline void setKDateComboBox_IsSignalConnected_Callback(KDateComboBox_IsSignalConnected_Callback cb) { kdatecombobox_issignalconnected_callback = cb; }
    inline void setKDateComboBox_GetDecodedMetricF_Callback(KDateComboBox_GetDecodedMetricF_Callback cb) { kdatecombobox_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKDateComboBox_Metacall_IsBase(bool value) const { kdatecombobox_metacall_isbase = value; }
    inline void setKDateComboBox_EventFilter_IsBase(bool value) const { kdatecombobox_eventfilter_isbase = value; }
    inline void setKDateComboBox_ShowPopup_IsBase(bool value) const { kdatecombobox_showpopup_isbase = value; }
    inline void setKDateComboBox_HidePopup_IsBase(bool value) const { kdatecombobox_hidepopup_isbase = value; }
    inline void setKDateComboBox_MousePressEvent_IsBase(bool value) const { kdatecombobox_mousepressevent_isbase = value; }
    inline void setKDateComboBox_WheelEvent_IsBase(bool value) const { kdatecombobox_wheelevent_isbase = value; }
    inline void setKDateComboBox_KeyPressEvent_IsBase(bool value) const { kdatecombobox_keypressevent_isbase = value; }
    inline void setKDateComboBox_FocusInEvent_IsBase(bool value) const { kdatecombobox_focusinevent_isbase = value; }
    inline void setKDateComboBox_FocusOutEvent_IsBase(bool value) const { kdatecombobox_focusoutevent_isbase = value; }
    inline void setKDateComboBox_ResizeEvent_IsBase(bool value) const { kdatecombobox_resizeevent_isbase = value; }
    inline void setKDateComboBox_AssignDate_IsBase(bool value) const { kdatecombobox_assigndate_isbase = value; }
    inline void setKDateComboBox_SetModel_IsBase(bool value) const { kdatecombobox_setmodel_isbase = value; }
    inline void setKDateComboBox_SizeHint_IsBase(bool value) const { kdatecombobox_sizehint_isbase = value; }
    inline void setKDateComboBox_MinimumSizeHint_IsBase(bool value) const { kdatecombobox_minimumsizehint_isbase = value; }
    inline void setKDateComboBox_Event_IsBase(bool value) const { kdatecombobox_event_isbase = value; }
    inline void setKDateComboBox_InputMethodQuery_IsBase(bool value) const { kdatecombobox_inputmethodquery_isbase = value; }
    inline void setKDateComboBox_ChangeEvent_IsBase(bool value) const { kdatecombobox_changeevent_isbase = value; }
    inline void setKDateComboBox_PaintEvent_IsBase(bool value) const { kdatecombobox_paintevent_isbase = value; }
    inline void setKDateComboBox_ShowEvent_IsBase(bool value) const { kdatecombobox_showevent_isbase = value; }
    inline void setKDateComboBox_HideEvent_IsBase(bool value) const { kdatecombobox_hideevent_isbase = value; }
    inline void setKDateComboBox_MouseReleaseEvent_IsBase(bool value) const { kdatecombobox_mousereleaseevent_isbase = value; }
    inline void setKDateComboBox_KeyReleaseEvent_IsBase(bool value) const { kdatecombobox_keyreleaseevent_isbase = value; }
    inline void setKDateComboBox_ContextMenuEvent_IsBase(bool value) const { kdatecombobox_contextmenuevent_isbase = value; }
    inline void setKDateComboBox_InputMethodEvent_IsBase(bool value) const { kdatecombobox_inputmethodevent_isbase = value; }
    inline void setKDateComboBox_InitStyleOption_IsBase(bool value) const { kdatecombobox_initstyleoption_isbase = value; }
    inline void setKDateComboBox_DevType_IsBase(bool value) const { kdatecombobox_devtype_isbase = value; }
    inline void setKDateComboBox_SetVisible_IsBase(bool value) const { kdatecombobox_setvisible_isbase = value; }
    inline void setKDateComboBox_HeightForWidth_IsBase(bool value) const { kdatecombobox_heightforwidth_isbase = value; }
    inline void setKDateComboBox_HasHeightForWidth_IsBase(bool value) const { kdatecombobox_hasheightforwidth_isbase = value; }
    inline void setKDateComboBox_PaintEngine_IsBase(bool value) const { kdatecombobox_paintengine_isbase = value; }
    inline void setKDateComboBox_MouseDoubleClickEvent_IsBase(bool value) const { kdatecombobox_mousedoubleclickevent_isbase = value; }
    inline void setKDateComboBox_MouseMoveEvent_IsBase(bool value) const { kdatecombobox_mousemoveevent_isbase = value; }
    inline void setKDateComboBox_EnterEvent_IsBase(bool value) const { kdatecombobox_enterevent_isbase = value; }
    inline void setKDateComboBox_LeaveEvent_IsBase(bool value) const { kdatecombobox_leaveevent_isbase = value; }
    inline void setKDateComboBox_MoveEvent_IsBase(bool value) const { kdatecombobox_moveevent_isbase = value; }
    inline void setKDateComboBox_CloseEvent_IsBase(bool value) const { kdatecombobox_closeevent_isbase = value; }
    inline void setKDateComboBox_TabletEvent_IsBase(bool value) const { kdatecombobox_tabletevent_isbase = value; }
    inline void setKDateComboBox_ActionEvent_IsBase(bool value) const { kdatecombobox_actionevent_isbase = value; }
    inline void setKDateComboBox_DragEnterEvent_IsBase(bool value) const { kdatecombobox_dragenterevent_isbase = value; }
    inline void setKDateComboBox_DragMoveEvent_IsBase(bool value) const { kdatecombobox_dragmoveevent_isbase = value; }
    inline void setKDateComboBox_DragLeaveEvent_IsBase(bool value) const { kdatecombobox_dragleaveevent_isbase = value; }
    inline void setKDateComboBox_DropEvent_IsBase(bool value) const { kdatecombobox_dropevent_isbase = value; }
    inline void setKDateComboBox_NativeEvent_IsBase(bool value) const { kdatecombobox_nativeevent_isbase = value; }
    inline void setKDateComboBox_Metric_IsBase(bool value) const { kdatecombobox_metric_isbase = value; }
    inline void setKDateComboBox_InitPainter_IsBase(bool value) const { kdatecombobox_initpainter_isbase = value; }
    inline void setKDateComboBox_Redirected_IsBase(bool value) const { kdatecombobox_redirected_isbase = value; }
    inline void setKDateComboBox_SharedPainter_IsBase(bool value) const { kdatecombobox_sharedpainter_isbase = value; }
    inline void setKDateComboBox_FocusNextPrevChild_IsBase(bool value) const { kdatecombobox_focusnextprevchild_isbase = value; }
    inline void setKDateComboBox_TimerEvent_IsBase(bool value) const { kdatecombobox_timerevent_isbase = value; }
    inline void setKDateComboBox_ChildEvent_IsBase(bool value) const { kdatecombobox_childevent_isbase = value; }
    inline void setKDateComboBox_CustomEvent_IsBase(bool value) const { kdatecombobox_customevent_isbase = value; }
    inline void setKDateComboBox_ConnectNotify_IsBase(bool value) const { kdatecombobox_connectnotify_isbase = value; }
    inline void setKDateComboBox_DisconnectNotify_IsBase(bool value) const { kdatecombobox_disconnectnotify_isbase = value; }
    inline void setKDateComboBox_UpdateMicroFocus_IsBase(bool value) const { kdatecombobox_updatemicrofocus_isbase = value; }
    inline void setKDateComboBox_Create_IsBase(bool value) const { kdatecombobox_create_isbase = value; }
    inline void setKDateComboBox_Destroy_IsBase(bool value) const { kdatecombobox_destroy_isbase = value; }
    inline void setKDateComboBox_FocusNextChild_IsBase(bool value) const { kdatecombobox_focusnextchild_isbase = value; }
    inline void setKDateComboBox_FocusPreviousChild_IsBase(bool value) const { kdatecombobox_focuspreviouschild_isbase = value; }
    inline void setKDateComboBox_Sender_IsBase(bool value) const { kdatecombobox_sender_isbase = value; }
    inline void setKDateComboBox_SenderSignalIndex_IsBase(bool value) const { kdatecombobox_sendersignalindex_isbase = value; }
    inline void setKDateComboBox_Receivers_IsBase(bool value) const { kdatecombobox_receivers_isbase = value; }
    inline void setKDateComboBox_IsSignalConnected_IsBase(bool value) const { kdatecombobox_issignalconnected_isbase = value; }
    inline void setKDateComboBox_GetDecodedMetricF_IsBase(bool value) const { kdatecombobox_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kdatecombobox_metacall_isbase) {
            kdatecombobox_metacall_isbase = false;
            return KDateComboBox::qt_metacall(param1, param2, param3);
        } else if (kdatecombobox_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kdatecombobox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KDateComboBox::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (kdatecombobox_eventfilter_isbase) {
            kdatecombobox_eventfilter_isbase = false;
            return KDateComboBox::eventFilter(object, event);
        } else if (kdatecombobox_eventfilter_callback != nullptr) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = kdatecombobox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KDateComboBox::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (kdatecombobox_showpopup_isbase) {
            kdatecombobox_showpopup_isbase = false;
            KDateComboBox::showPopup();
        } else if (kdatecombobox_showpopup_callback != nullptr) {
            kdatecombobox_showpopup_callback();
        } else {
            KDateComboBox::showPopup();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (kdatecombobox_hidepopup_isbase) {
            kdatecombobox_hidepopup_isbase = false;
            KDateComboBox::hidePopup();
        } else if (kdatecombobox_hidepopup_callback != nullptr) {
            kdatecombobox_hidepopup_callback();
        } else {
            KDateComboBox::hidePopup();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kdatecombobox_mousepressevent_isbase) {
            kdatecombobox_mousepressevent_isbase = false;
            KDateComboBox::mousePressEvent(event);
        } else if (kdatecombobox_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kdatecombobox_mousepressevent_callback(this, cbval1);
        } else {
            KDateComboBox::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kdatecombobox_wheelevent_isbase) {
            kdatecombobox_wheelevent_isbase = false;
            KDateComboBox::wheelEvent(event);
        } else if (kdatecombobox_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kdatecombobox_wheelevent_callback(this, cbval1);
        } else {
            KDateComboBox::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kdatecombobox_keypressevent_isbase) {
            kdatecombobox_keypressevent_isbase = false;
            KDateComboBox::keyPressEvent(event);
        } else if (kdatecombobox_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kdatecombobox_keypressevent_callback(this, cbval1);
        } else {
            KDateComboBox::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kdatecombobox_focusinevent_isbase) {
            kdatecombobox_focusinevent_isbase = false;
            KDateComboBox::focusInEvent(event);
        } else if (kdatecombobox_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kdatecombobox_focusinevent_callback(this, cbval1);
        } else {
            KDateComboBox::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kdatecombobox_focusoutevent_isbase) {
            kdatecombobox_focusoutevent_isbase = false;
            KDateComboBox::focusOutEvent(event);
        } else if (kdatecombobox_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kdatecombobox_focusoutevent_callback(this, cbval1);
        } else {
            KDateComboBox::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kdatecombobox_resizeevent_isbase) {
            kdatecombobox_resizeevent_isbase = false;
            KDateComboBox::resizeEvent(event);
        } else if (kdatecombobox_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kdatecombobox_resizeevent_callback(this, cbval1);
        } else {
            KDateComboBox::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void assignDate(const QDate& date) override {
        if (kdatecombobox_assigndate_isbase) {
            kdatecombobox_assigndate_isbase = false;
            KDateComboBox::assignDate(date);
        } else if (kdatecombobox_assigndate_callback != nullptr) {
            const QDate& date_ret = date;
            // Cast returned reference into pointer
            QDate* cbval1 = const_cast<QDate*>(&date_ret);

            kdatecombobox_assigndate_callback(this, cbval1);
        } else {
            KDateComboBox::assignDate(date);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (kdatecombobox_setmodel_isbase) {
            kdatecombobox_setmodel_isbase = false;
            KDateComboBox::setModel(model);
        } else if (kdatecombobox_setmodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = model;

            kdatecombobox_setmodel_callback(this, cbval1);
        } else {
            KDateComboBox::setModel(model);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kdatecombobox_sizehint_isbase) {
            kdatecombobox_sizehint_isbase = false;
            return KDateComboBox::sizeHint();
        } else if (kdatecombobox_sizehint_callback != nullptr) {
            QSize* callback_ret = kdatecombobox_sizehint_callback();
            return *callback_ret;
        } else {
            return KDateComboBox::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kdatecombobox_minimumsizehint_isbase) {
            kdatecombobox_minimumsizehint_isbase = false;
            return KDateComboBox::minimumSizeHint();
        } else if (kdatecombobox_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kdatecombobox_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KDateComboBox::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kdatecombobox_event_isbase) {
            kdatecombobox_event_isbase = false;
            return KDateComboBox::event(event);
        } else if (kdatecombobox_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kdatecombobox_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDateComboBox::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kdatecombobox_inputmethodquery_isbase) {
            kdatecombobox_inputmethodquery_isbase = false;
            return KDateComboBox::inputMethodQuery(param1);
        } else if (kdatecombobox_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kdatecombobox_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KDateComboBox::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kdatecombobox_changeevent_isbase) {
            kdatecombobox_changeevent_isbase = false;
            KDateComboBox::changeEvent(e);
        } else if (kdatecombobox_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            kdatecombobox_changeevent_callback(this, cbval1);
        } else {
            KDateComboBox::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (kdatecombobox_paintevent_isbase) {
            kdatecombobox_paintevent_isbase = false;
            KDateComboBox::paintEvent(e);
        } else if (kdatecombobox_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = e;

            kdatecombobox_paintevent_callback(this, cbval1);
        } else {
            KDateComboBox::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (kdatecombobox_showevent_isbase) {
            kdatecombobox_showevent_isbase = false;
            KDateComboBox::showEvent(e);
        } else if (kdatecombobox_showevent_callback != nullptr) {
            QShowEvent* cbval1 = e;

            kdatecombobox_showevent_callback(this, cbval1);
        } else {
            KDateComboBox::showEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (kdatecombobox_hideevent_isbase) {
            kdatecombobox_hideevent_isbase = false;
            KDateComboBox::hideEvent(e);
        } else if (kdatecombobox_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = e;

            kdatecombobox_hideevent_callback(this, cbval1);
        } else {
            KDateComboBox::hideEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kdatecombobox_mousereleaseevent_isbase) {
            kdatecombobox_mousereleaseevent_isbase = false;
            KDateComboBox::mouseReleaseEvent(e);
        } else if (kdatecombobox_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            kdatecombobox_mousereleaseevent_callback(this, cbval1);
        } else {
            KDateComboBox::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (kdatecombobox_keyreleaseevent_isbase) {
            kdatecombobox_keyreleaseevent_isbase = false;
            KDateComboBox::keyReleaseEvent(e);
        } else if (kdatecombobox_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            kdatecombobox_keyreleaseevent_callback(this, cbval1);
        } else {
            KDateComboBox::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (kdatecombobox_contextmenuevent_isbase) {
            kdatecombobox_contextmenuevent_isbase = false;
            KDateComboBox::contextMenuEvent(e);
        } else if (kdatecombobox_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = e;

            kdatecombobox_contextmenuevent_callback(this, cbval1);
        } else {
            KDateComboBox::contextMenuEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kdatecombobox_inputmethodevent_isbase) {
            kdatecombobox_inputmethodevent_isbase = false;
            KDateComboBox::inputMethodEvent(param1);
        } else if (kdatecombobox_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kdatecombobox_inputmethodevent_callback(this, cbval1);
        } else {
            KDateComboBox::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (kdatecombobox_initstyleoption_isbase) {
            kdatecombobox_initstyleoption_isbase = false;
            KDateComboBox::initStyleOption(option);
        } else if (kdatecombobox_initstyleoption_callback != nullptr) {
            QStyleOptionComboBox* cbval1 = option;

            kdatecombobox_initstyleoption_callback(this, cbval1);
        } else {
            KDateComboBox::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kdatecombobox_devtype_isbase) {
            kdatecombobox_devtype_isbase = false;
            return KDateComboBox::devType();
        } else if (kdatecombobox_devtype_callback != nullptr) {
            int callback_ret = kdatecombobox_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KDateComboBox::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kdatecombobox_setvisible_isbase) {
            kdatecombobox_setvisible_isbase = false;
            KDateComboBox::setVisible(visible);
        } else if (kdatecombobox_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kdatecombobox_setvisible_callback(this, cbval1);
        } else {
            KDateComboBox::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kdatecombobox_heightforwidth_isbase) {
            kdatecombobox_heightforwidth_isbase = false;
            return KDateComboBox::heightForWidth(param1);
        } else if (kdatecombobox_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kdatecombobox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDateComboBox::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kdatecombobox_hasheightforwidth_isbase) {
            kdatecombobox_hasheightforwidth_isbase = false;
            return KDateComboBox::hasHeightForWidth();
        } else if (kdatecombobox_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kdatecombobox_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KDateComboBox::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kdatecombobox_paintengine_isbase) {
            kdatecombobox_paintengine_isbase = false;
            return KDateComboBox::paintEngine();
        } else if (kdatecombobox_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kdatecombobox_paintengine_callback();
            return callback_ret;
        } else {
            return KDateComboBox::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kdatecombobox_mousedoubleclickevent_isbase) {
            kdatecombobox_mousedoubleclickevent_isbase = false;
            KDateComboBox::mouseDoubleClickEvent(event);
        } else if (kdatecombobox_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kdatecombobox_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KDateComboBox::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kdatecombobox_mousemoveevent_isbase) {
            kdatecombobox_mousemoveevent_isbase = false;
            KDateComboBox::mouseMoveEvent(event);
        } else if (kdatecombobox_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kdatecombobox_mousemoveevent_callback(this, cbval1);
        } else {
            KDateComboBox::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kdatecombobox_enterevent_isbase) {
            kdatecombobox_enterevent_isbase = false;
            KDateComboBox::enterEvent(event);
        } else if (kdatecombobox_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kdatecombobox_enterevent_callback(this, cbval1);
        } else {
            KDateComboBox::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kdatecombobox_leaveevent_isbase) {
            kdatecombobox_leaveevent_isbase = false;
            KDateComboBox::leaveEvent(event);
        } else if (kdatecombobox_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kdatecombobox_leaveevent_callback(this, cbval1);
        } else {
            KDateComboBox::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kdatecombobox_moveevent_isbase) {
            kdatecombobox_moveevent_isbase = false;
            KDateComboBox::moveEvent(event);
        } else if (kdatecombobox_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kdatecombobox_moveevent_callback(this, cbval1);
        } else {
            KDateComboBox::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kdatecombobox_closeevent_isbase) {
            kdatecombobox_closeevent_isbase = false;
            KDateComboBox::closeEvent(event);
        } else if (kdatecombobox_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kdatecombobox_closeevent_callback(this, cbval1);
        } else {
            KDateComboBox::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kdatecombobox_tabletevent_isbase) {
            kdatecombobox_tabletevent_isbase = false;
            KDateComboBox::tabletEvent(event);
        } else if (kdatecombobox_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kdatecombobox_tabletevent_callback(this, cbval1);
        } else {
            KDateComboBox::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kdatecombobox_actionevent_isbase) {
            kdatecombobox_actionevent_isbase = false;
            KDateComboBox::actionEvent(event);
        } else if (kdatecombobox_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kdatecombobox_actionevent_callback(this, cbval1);
        } else {
            KDateComboBox::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kdatecombobox_dragenterevent_isbase) {
            kdatecombobox_dragenterevent_isbase = false;
            KDateComboBox::dragEnterEvent(event);
        } else if (kdatecombobox_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kdatecombobox_dragenterevent_callback(this, cbval1);
        } else {
            KDateComboBox::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kdatecombobox_dragmoveevent_isbase) {
            kdatecombobox_dragmoveevent_isbase = false;
            KDateComboBox::dragMoveEvent(event);
        } else if (kdatecombobox_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kdatecombobox_dragmoveevent_callback(this, cbval1);
        } else {
            KDateComboBox::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kdatecombobox_dragleaveevent_isbase) {
            kdatecombobox_dragleaveevent_isbase = false;
            KDateComboBox::dragLeaveEvent(event);
        } else if (kdatecombobox_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kdatecombobox_dragleaveevent_callback(this, cbval1);
        } else {
            KDateComboBox::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kdatecombobox_dropevent_isbase) {
            kdatecombobox_dropevent_isbase = false;
            KDateComboBox::dropEvent(event);
        } else if (kdatecombobox_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kdatecombobox_dropevent_callback(this, cbval1);
        } else {
            KDateComboBox::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kdatecombobox_nativeevent_isbase) {
            kdatecombobox_nativeevent_isbase = false;
            return KDateComboBox::nativeEvent(eventType, message, result);
        } else if (kdatecombobox_nativeevent_callback != nullptr) {
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

            bool callback_ret = kdatecombobox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KDateComboBox::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kdatecombobox_metric_isbase) {
            kdatecombobox_metric_isbase = false;
            return KDateComboBox::metric(param1);
        } else if (kdatecombobox_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kdatecombobox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDateComboBox::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kdatecombobox_initpainter_isbase) {
            kdatecombobox_initpainter_isbase = false;
            KDateComboBox::initPainter(painter);
        } else if (kdatecombobox_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kdatecombobox_initpainter_callback(this, cbval1);
        } else {
            KDateComboBox::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kdatecombobox_redirected_isbase) {
            kdatecombobox_redirected_isbase = false;
            return KDateComboBox::redirected(offset);
        } else if (kdatecombobox_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kdatecombobox_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDateComboBox::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kdatecombobox_sharedpainter_isbase) {
            kdatecombobox_sharedpainter_isbase = false;
            return KDateComboBox::sharedPainter();
        } else if (kdatecombobox_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kdatecombobox_sharedpainter_callback();
            return callback_ret;
        } else {
            return KDateComboBox::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kdatecombobox_focusnextprevchild_isbase) {
            kdatecombobox_focusnextprevchild_isbase = false;
            return KDateComboBox::focusNextPrevChild(next);
        } else if (kdatecombobox_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kdatecombobox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDateComboBox::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kdatecombobox_timerevent_isbase) {
            kdatecombobox_timerevent_isbase = false;
            KDateComboBox::timerEvent(event);
        } else if (kdatecombobox_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kdatecombobox_timerevent_callback(this, cbval1);
        } else {
            KDateComboBox::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kdatecombobox_childevent_isbase) {
            kdatecombobox_childevent_isbase = false;
            KDateComboBox::childEvent(event);
        } else if (kdatecombobox_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kdatecombobox_childevent_callback(this, cbval1);
        } else {
            KDateComboBox::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kdatecombobox_customevent_isbase) {
            kdatecombobox_customevent_isbase = false;
            KDateComboBox::customEvent(event);
        } else if (kdatecombobox_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kdatecombobox_customevent_callback(this, cbval1);
        } else {
            KDateComboBox::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kdatecombobox_connectnotify_isbase) {
            kdatecombobox_connectnotify_isbase = false;
            KDateComboBox::connectNotify(signal);
        } else if (kdatecombobox_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdatecombobox_connectnotify_callback(this, cbval1);
        } else {
            KDateComboBox::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kdatecombobox_disconnectnotify_isbase) {
            kdatecombobox_disconnectnotify_isbase = false;
            KDateComboBox::disconnectNotify(signal);
        } else if (kdatecombobox_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kdatecombobox_disconnectnotify_callback(this, cbval1);
        } else {
            KDateComboBox::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kdatecombobox_updatemicrofocus_isbase) {
            kdatecombobox_updatemicrofocus_isbase = false;
            KDateComboBox::updateMicroFocus();
        } else if (kdatecombobox_updatemicrofocus_callback != nullptr) {
            kdatecombobox_updatemicrofocus_callback();
        } else {
            KDateComboBox::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kdatecombobox_create_isbase) {
            kdatecombobox_create_isbase = false;
            KDateComboBox::create();
        } else if (kdatecombobox_create_callback != nullptr) {
            kdatecombobox_create_callback();
        } else {
            KDateComboBox::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kdatecombobox_destroy_isbase) {
            kdatecombobox_destroy_isbase = false;
            KDateComboBox::destroy();
        } else if (kdatecombobox_destroy_callback != nullptr) {
            kdatecombobox_destroy_callback();
        } else {
            KDateComboBox::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kdatecombobox_focusnextchild_isbase) {
            kdatecombobox_focusnextchild_isbase = false;
            return KDateComboBox::focusNextChild();
        } else if (kdatecombobox_focusnextchild_callback != nullptr) {
            bool callback_ret = kdatecombobox_focusnextchild_callback();
            return callback_ret;
        } else {
            return KDateComboBox::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kdatecombobox_focuspreviouschild_isbase) {
            kdatecombobox_focuspreviouschild_isbase = false;
            return KDateComboBox::focusPreviousChild();
        } else if (kdatecombobox_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kdatecombobox_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KDateComboBox::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kdatecombobox_sender_isbase) {
            kdatecombobox_sender_isbase = false;
            return KDateComboBox::sender();
        } else if (kdatecombobox_sender_callback != nullptr) {
            QObject* callback_ret = kdatecombobox_sender_callback();
            return callback_ret;
        } else {
            return KDateComboBox::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kdatecombobox_sendersignalindex_isbase) {
            kdatecombobox_sendersignalindex_isbase = false;
            return KDateComboBox::senderSignalIndex();
        } else if (kdatecombobox_sendersignalindex_callback != nullptr) {
            int callback_ret = kdatecombobox_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KDateComboBox::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kdatecombobox_receivers_isbase) {
            kdatecombobox_receivers_isbase = false;
            return KDateComboBox::receivers(signal);
        } else if (kdatecombobox_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kdatecombobox_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KDateComboBox::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kdatecombobox_issignalconnected_isbase) {
            kdatecombobox_issignalconnected_isbase = false;
            return KDateComboBox::isSignalConnected(signal);
        } else if (kdatecombobox_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kdatecombobox_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KDateComboBox::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kdatecombobox_getdecodedmetricf_isbase) {
            kdatecombobox_getdecodedmetricf_isbase = false;
            return KDateComboBox::getDecodedMetricF(metricA, metricB);
        } else if (kdatecombobox_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kdatecombobox_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KDateComboBox::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KDateComboBox_EventFilter(KDateComboBox* self, QObject* object, QEvent* event);
    friend bool KDateComboBox_QBaseEventFilter(KDateComboBox* self, QObject* object, QEvent* event);
    friend void KDateComboBox_ShowPopup(KDateComboBox* self);
    friend void KDateComboBox_QBaseShowPopup(KDateComboBox* self);
    friend void KDateComboBox_HidePopup(KDateComboBox* self);
    friend void KDateComboBox_QBaseHidePopup(KDateComboBox* self);
    friend void KDateComboBox_MousePressEvent(KDateComboBox* self, QMouseEvent* event);
    friend void KDateComboBox_QBaseMousePressEvent(KDateComboBox* self, QMouseEvent* event);
    friend void KDateComboBox_WheelEvent(KDateComboBox* self, QWheelEvent* event);
    friend void KDateComboBox_QBaseWheelEvent(KDateComboBox* self, QWheelEvent* event);
    friend void KDateComboBox_KeyPressEvent(KDateComboBox* self, QKeyEvent* event);
    friend void KDateComboBox_QBaseKeyPressEvent(KDateComboBox* self, QKeyEvent* event);
    friend void KDateComboBox_FocusInEvent(KDateComboBox* self, QFocusEvent* event);
    friend void KDateComboBox_QBaseFocusInEvent(KDateComboBox* self, QFocusEvent* event);
    friend void KDateComboBox_FocusOutEvent(KDateComboBox* self, QFocusEvent* event);
    friend void KDateComboBox_QBaseFocusOutEvent(KDateComboBox* self, QFocusEvent* event);
    friend void KDateComboBox_ResizeEvent(KDateComboBox* self, QResizeEvent* event);
    friend void KDateComboBox_QBaseResizeEvent(KDateComboBox* self, QResizeEvent* event);
    friend void KDateComboBox_AssignDate(KDateComboBox* self, const QDate* date);
    friend void KDateComboBox_QBaseAssignDate(KDateComboBox* self, const QDate* date);
    friend void KDateComboBox_ChangeEvent(KDateComboBox* self, QEvent* e);
    friend void KDateComboBox_QBaseChangeEvent(KDateComboBox* self, QEvent* e);
    friend void KDateComboBox_PaintEvent(KDateComboBox* self, QPaintEvent* e);
    friend void KDateComboBox_QBasePaintEvent(KDateComboBox* self, QPaintEvent* e);
    friend void KDateComboBox_ShowEvent(KDateComboBox* self, QShowEvent* e);
    friend void KDateComboBox_QBaseShowEvent(KDateComboBox* self, QShowEvent* e);
    friend void KDateComboBox_HideEvent(KDateComboBox* self, QHideEvent* e);
    friend void KDateComboBox_QBaseHideEvent(KDateComboBox* self, QHideEvent* e);
    friend void KDateComboBox_MouseReleaseEvent(KDateComboBox* self, QMouseEvent* e);
    friend void KDateComboBox_QBaseMouseReleaseEvent(KDateComboBox* self, QMouseEvent* e);
    friend void KDateComboBox_KeyReleaseEvent(KDateComboBox* self, QKeyEvent* e);
    friend void KDateComboBox_QBaseKeyReleaseEvent(KDateComboBox* self, QKeyEvent* e);
    friend void KDateComboBox_ContextMenuEvent(KDateComboBox* self, QContextMenuEvent* e);
    friend void KDateComboBox_QBaseContextMenuEvent(KDateComboBox* self, QContextMenuEvent* e);
    friend void KDateComboBox_InputMethodEvent(KDateComboBox* self, QInputMethodEvent* param1);
    friend void KDateComboBox_QBaseInputMethodEvent(KDateComboBox* self, QInputMethodEvent* param1);
    friend void KDateComboBox_InitStyleOption(const KDateComboBox* self, QStyleOptionComboBox* option);
    friend void KDateComboBox_QBaseInitStyleOption(const KDateComboBox* self, QStyleOptionComboBox* option);
    friend void KDateComboBox_MouseDoubleClickEvent(KDateComboBox* self, QMouseEvent* event);
    friend void KDateComboBox_QBaseMouseDoubleClickEvent(KDateComboBox* self, QMouseEvent* event);
    friend void KDateComboBox_MouseMoveEvent(KDateComboBox* self, QMouseEvent* event);
    friend void KDateComboBox_QBaseMouseMoveEvent(KDateComboBox* self, QMouseEvent* event);
    friend void KDateComboBox_EnterEvent(KDateComboBox* self, QEnterEvent* event);
    friend void KDateComboBox_QBaseEnterEvent(KDateComboBox* self, QEnterEvent* event);
    friend void KDateComboBox_LeaveEvent(KDateComboBox* self, QEvent* event);
    friend void KDateComboBox_QBaseLeaveEvent(KDateComboBox* self, QEvent* event);
    friend void KDateComboBox_MoveEvent(KDateComboBox* self, QMoveEvent* event);
    friend void KDateComboBox_QBaseMoveEvent(KDateComboBox* self, QMoveEvent* event);
    friend void KDateComboBox_CloseEvent(KDateComboBox* self, QCloseEvent* event);
    friend void KDateComboBox_QBaseCloseEvent(KDateComboBox* self, QCloseEvent* event);
    friend void KDateComboBox_TabletEvent(KDateComboBox* self, QTabletEvent* event);
    friend void KDateComboBox_QBaseTabletEvent(KDateComboBox* self, QTabletEvent* event);
    friend void KDateComboBox_ActionEvent(KDateComboBox* self, QActionEvent* event);
    friend void KDateComboBox_QBaseActionEvent(KDateComboBox* self, QActionEvent* event);
    friend void KDateComboBox_DragEnterEvent(KDateComboBox* self, QDragEnterEvent* event);
    friend void KDateComboBox_QBaseDragEnterEvent(KDateComboBox* self, QDragEnterEvent* event);
    friend void KDateComboBox_DragMoveEvent(KDateComboBox* self, QDragMoveEvent* event);
    friend void KDateComboBox_QBaseDragMoveEvent(KDateComboBox* self, QDragMoveEvent* event);
    friend void KDateComboBox_DragLeaveEvent(KDateComboBox* self, QDragLeaveEvent* event);
    friend void KDateComboBox_QBaseDragLeaveEvent(KDateComboBox* self, QDragLeaveEvent* event);
    friend void KDateComboBox_DropEvent(KDateComboBox* self, QDropEvent* event);
    friend void KDateComboBox_QBaseDropEvent(KDateComboBox* self, QDropEvent* event);
    friend bool KDateComboBox_NativeEvent(KDateComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KDateComboBox_QBaseNativeEvent(KDateComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KDateComboBox_Metric(const KDateComboBox* self, int param1);
    friend int KDateComboBox_QBaseMetric(const KDateComboBox* self, int param1);
    friend void KDateComboBox_InitPainter(const KDateComboBox* self, QPainter* painter);
    friend void KDateComboBox_QBaseInitPainter(const KDateComboBox* self, QPainter* painter);
    friend QPaintDevice* KDateComboBox_Redirected(const KDateComboBox* self, QPoint* offset);
    friend QPaintDevice* KDateComboBox_QBaseRedirected(const KDateComboBox* self, QPoint* offset);
    friend QPainter* KDateComboBox_SharedPainter(const KDateComboBox* self);
    friend QPainter* KDateComboBox_QBaseSharedPainter(const KDateComboBox* self);
    friend bool KDateComboBox_FocusNextPrevChild(KDateComboBox* self, bool next);
    friend bool KDateComboBox_QBaseFocusNextPrevChild(KDateComboBox* self, bool next);
    friend void KDateComboBox_TimerEvent(KDateComboBox* self, QTimerEvent* event);
    friend void KDateComboBox_QBaseTimerEvent(KDateComboBox* self, QTimerEvent* event);
    friend void KDateComboBox_ChildEvent(KDateComboBox* self, QChildEvent* event);
    friend void KDateComboBox_QBaseChildEvent(KDateComboBox* self, QChildEvent* event);
    friend void KDateComboBox_CustomEvent(KDateComboBox* self, QEvent* event);
    friend void KDateComboBox_QBaseCustomEvent(KDateComboBox* self, QEvent* event);
    friend void KDateComboBox_ConnectNotify(KDateComboBox* self, const QMetaMethod* signal);
    friend void KDateComboBox_QBaseConnectNotify(KDateComboBox* self, const QMetaMethod* signal);
    friend void KDateComboBox_DisconnectNotify(KDateComboBox* self, const QMetaMethod* signal);
    friend void KDateComboBox_QBaseDisconnectNotify(KDateComboBox* self, const QMetaMethod* signal);
    friend void KDateComboBox_UpdateMicroFocus(KDateComboBox* self);
    friend void KDateComboBox_QBaseUpdateMicroFocus(KDateComboBox* self);
    friend void KDateComboBox_Create(KDateComboBox* self);
    friend void KDateComboBox_QBaseCreate(KDateComboBox* self);
    friend void KDateComboBox_Destroy(KDateComboBox* self);
    friend void KDateComboBox_QBaseDestroy(KDateComboBox* self);
    friend bool KDateComboBox_FocusNextChild(KDateComboBox* self);
    friend bool KDateComboBox_QBaseFocusNextChild(KDateComboBox* self);
    friend bool KDateComboBox_FocusPreviousChild(KDateComboBox* self);
    friend bool KDateComboBox_QBaseFocusPreviousChild(KDateComboBox* self);
    friend QObject* KDateComboBox_Sender(const KDateComboBox* self);
    friend QObject* KDateComboBox_QBaseSender(const KDateComboBox* self);
    friend int KDateComboBox_SenderSignalIndex(const KDateComboBox* self);
    friend int KDateComboBox_QBaseSenderSignalIndex(const KDateComboBox* self);
    friend int KDateComboBox_Receivers(const KDateComboBox* self, const char* signal);
    friend int KDateComboBox_QBaseReceivers(const KDateComboBox* self, const char* signal);
    friend bool KDateComboBox_IsSignalConnected(const KDateComboBox* self, const QMetaMethod* signal);
    friend bool KDateComboBox_QBaseIsSignalConnected(const KDateComboBox* self, const QMetaMethod* signal);
    friend double KDateComboBox_GetDecodedMetricF(const KDateComboBox* self, int metricA, int metricB);
    friend double KDateComboBox_QBaseGetDecodedMetricF(const KDateComboBox* self, int metricA, int metricB);
};

#endif
