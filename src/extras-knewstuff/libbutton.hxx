#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBVIRTUALBUTTON_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBVIRTUALBUTTON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNSWidgets::Button so that we can call protected methods
class VirtualKNSWidgetsButton final : public KNSWidgets::Button {

  public:
    // Virtual class boolean flag
    bool isVirtualKNSWidgetsButton = true;

    // Virtual class public types (including callbacks)
    using KNSWidgets__Button_Metacall_Callback = int (*)(KNSWidgets__Button*, int, int, void**);
    using KNSWidgets__Button_SizeHint_Callback = QSize* (*)();
    using KNSWidgets__Button_MinimumSizeHint_Callback = QSize* (*)();
    using KNSWidgets__Button_Event_Callback = bool (*)(KNSWidgets__Button*, QEvent*);
    using KNSWidgets__Button_PaintEvent_Callback = void (*)(KNSWidgets__Button*, QPaintEvent*);
    using KNSWidgets__Button_KeyPressEvent_Callback = void (*)(KNSWidgets__Button*, QKeyEvent*);
    using KNSWidgets__Button_FocusInEvent_Callback = void (*)(KNSWidgets__Button*, QFocusEvent*);
    using KNSWidgets__Button_FocusOutEvent_Callback = void (*)(KNSWidgets__Button*, QFocusEvent*);
    using KNSWidgets__Button_MouseMoveEvent_Callback = void (*)(KNSWidgets__Button*, QMouseEvent*);
    using KNSWidgets__Button_InitStyleOption_Callback = void (*)(const KNSWidgets__Button*, QStyleOptionButton*);
    using KNSWidgets__Button_HitButton_Callback = bool (*)(const KNSWidgets__Button*, QPoint*);
    using KNSWidgets__Button_CheckStateSet_Callback = void (*)();
    using KNSWidgets__Button_NextCheckState_Callback = void (*)();
    using KNSWidgets__Button_KeyReleaseEvent_Callback = void (*)(KNSWidgets__Button*, QKeyEvent*);
    using KNSWidgets__Button_MousePressEvent_Callback = void (*)(KNSWidgets__Button*, QMouseEvent*);
    using KNSWidgets__Button_MouseReleaseEvent_Callback = void (*)(KNSWidgets__Button*, QMouseEvent*);
    using KNSWidgets__Button_ChangeEvent_Callback = void (*)(KNSWidgets__Button*, QEvent*);
    using KNSWidgets__Button_TimerEvent_Callback = void (*)(KNSWidgets__Button*, QTimerEvent*);
    using KNSWidgets__Button_DevType_Callback = int (*)();
    using KNSWidgets__Button_SetVisible_Callback = void (*)(KNSWidgets__Button*, bool);
    using KNSWidgets__Button_HeightForWidth_Callback = int (*)(const KNSWidgets__Button*, int);
    using KNSWidgets__Button_HasHeightForWidth_Callback = bool (*)();
    using KNSWidgets__Button_PaintEngine_Callback = QPaintEngine* (*)();
    using KNSWidgets__Button_MouseDoubleClickEvent_Callback = void (*)(KNSWidgets__Button*, QMouseEvent*);
    using KNSWidgets__Button_WheelEvent_Callback = void (*)(KNSWidgets__Button*, QWheelEvent*);
    using KNSWidgets__Button_EnterEvent_Callback = void (*)(KNSWidgets__Button*, QEnterEvent*);
    using KNSWidgets__Button_LeaveEvent_Callback = void (*)(KNSWidgets__Button*, QEvent*);
    using KNSWidgets__Button_MoveEvent_Callback = void (*)(KNSWidgets__Button*, QMoveEvent*);
    using KNSWidgets__Button_ResizeEvent_Callback = void (*)(KNSWidgets__Button*, QResizeEvent*);
    using KNSWidgets__Button_CloseEvent_Callback = void (*)(KNSWidgets__Button*, QCloseEvent*);
    using KNSWidgets__Button_ContextMenuEvent_Callback = void (*)(KNSWidgets__Button*, QContextMenuEvent*);
    using KNSWidgets__Button_TabletEvent_Callback = void (*)(KNSWidgets__Button*, QTabletEvent*);
    using KNSWidgets__Button_ActionEvent_Callback = void (*)(KNSWidgets__Button*, QActionEvent*);
    using KNSWidgets__Button_DragEnterEvent_Callback = void (*)(KNSWidgets__Button*, QDragEnterEvent*);
    using KNSWidgets__Button_DragMoveEvent_Callback = void (*)(KNSWidgets__Button*, QDragMoveEvent*);
    using KNSWidgets__Button_DragLeaveEvent_Callback = void (*)(KNSWidgets__Button*, QDragLeaveEvent*);
    using KNSWidgets__Button_DropEvent_Callback = void (*)(KNSWidgets__Button*, QDropEvent*);
    using KNSWidgets__Button_ShowEvent_Callback = void (*)(KNSWidgets__Button*, QShowEvent*);
    using KNSWidgets__Button_HideEvent_Callback = void (*)(KNSWidgets__Button*, QHideEvent*);
    using KNSWidgets__Button_NativeEvent_Callback = bool (*)(KNSWidgets__Button*, libqt_string, void*, intptr_t*);
    using KNSWidgets__Button_Metric_Callback = int (*)(const KNSWidgets__Button*, int);
    using KNSWidgets__Button_InitPainter_Callback = void (*)(const KNSWidgets__Button*, QPainter*);
    using KNSWidgets__Button_Redirected_Callback = QPaintDevice* (*)(const KNSWidgets__Button*, QPoint*);
    using KNSWidgets__Button_SharedPainter_Callback = QPainter* (*)();
    using KNSWidgets__Button_InputMethodEvent_Callback = void (*)(KNSWidgets__Button*, QInputMethodEvent*);
    using KNSWidgets__Button_InputMethodQuery_Callback = QVariant* (*)(const KNSWidgets__Button*, int);
    using KNSWidgets__Button_FocusNextPrevChild_Callback = bool (*)(KNSWidgets__Button*, bool);
    using KNSWidgets__Button_EventFilter_Callback = bool (*)(KNSWidgets__Button*, QObject*, QEvent*);
    using KNSWidgets__Button_ChildEvent_Callback = void (*)(KNSWidgets__Button*, QChildEvent*);
    using KNSWidgets__Button_CustomEvent_Callback = void (*)(KNSWidgets__Button*, QEvent*);
    using KNSWidgets__Button_ConnectNotify_Callback = void (*)(KNSWidgets__Button*, QMetaMethod*);
    using KNSWidgets__Button_DisconnectNotify_Callback = void (*)(KNSWidgets__Button*, QMetaMethod*);
    using KNSWidgets__Button_UpdateMicroFocus_Callback = void (*)();
    using KNSWidgets__Button_Create_Callback = void (*)();
    using KNSWidgets__Button_Destroy_Callback = void (*)();
    using KNSWidgets__Button_FocusNextChild_Callback = bool (*)();
    using KNSWidgets__Button_FocusPreviousChild_Callback = bool (*)();
    using KNSWidgets__Button_Sender_Callback = QObject* (*)();
    using KNSWidgets__Button_SenderSignalIndex_Callback = int (*)();
    using KNSWidgets__Button_Receivers_Callback = int (*)(const KNSWidgets__Button*, const char*);
    using KNSWidgets__Button_IsSignalConnected_Callback = bool (*)(const KNSWidgets__Button*, QMetaMethod*);
    using KNSWidgets__Button_GetDecodedMetricF_Callback = double (*)(const KNSWidgets__Button*, int, int);

  protected:
    // Instance callback storage
    KNSWidgets__Button_Metacall_Callback knswidgets__button_metacall_callback = nullptr;
    KNSWidgets__Button_SizeHint_Callback knswidgets__button_sizehint_callback = nullptr;
    KNSWidgets__Button_MinimumSizeHint_Callback knswidgets__button_minimumsizehint_callback = nullptr;
    KNSWidgets__Button_Event_Callback knswidgets__button_event_callback = nullptr;
    KNSWidgets__Button_PaintEvent_Callback knswidgets__button_paintevent_callback = nullptr;
    KNSWidgets__Button_KeyPressEvent_Callback knswidgets__button_keypressevent_callback = nullptr;
    KNSWidgets__Button_FocusInEvent_Callback knswidgets__button_focusinevent_callback = nullptr;
    KNSWidgets__Button_FocusOutEvent_Callback knswidgets__button_focusoutevent_callback = nullptr;
    KNSWidgets__Button_MouseMoveEvent_Callback knswidgets__button_mousemoveevent_callback = nullptr;
    KNSWidgets__Button_InitStyleOption_Callback knswidgets__button_initstyleoption_callback = nullptr;
    KNSWidgets__Button_HitButton_Callback knswidgets__button_hitbutton_callback = nullptr;
    KNSWidgets__Button_CheckStateSet_Callback knswidgets__button_checkstateset_callback = nullptr;
    KNSWidgets__Button_NextCheckState_Callback knswidgets__button_nextcheckstate_callback = nullptr;
    KNSWidgets__Button_KeyReleaseEvent_Callback knswidgets__button_keyreleaseevent_callback = nullptr;
    KNSWidgets__Button_MousePressEvent_Callback knswidgets__button_mousepressevent_callback = nullptr;
    KNSWidgets__Button_MouseReleaseEvent_Callback knswidgets__button_mousereleaseevent_callback = nullptr;
    KNSWidgets__Button_ChangeEvent_Callback knswidgets__button_changeevent_callback = nullptr;
    KNSWidgets__Button_TimerEvent_Callback knswidgets__button_timerevent_callback = nullptr;
    KNSWidgets__Button_DevType_Callback knswidgets__button_devtype_callback = nullptr;
    KNSWidgets__Button_SetVisible_Callback knswidgets__button_setvisible_callback = nullptr;
    KNSWidgets__Button_HeightForWidth_Callback knswidgets__button_heightforwidth_callback = nullptr;
    KNSWidgets__Button_HasHeightForWidth_Callback knswidgets__button_hasheightforwidth_callback = nullptr;
    KNSWidgets__Button_PaintEngine_Callback knswidgets__button_paintengine_callback = nullptr;
    KNSWidgets__Button_MouseDoubleClickEvent_Callback knswidgets__button_mousedoubleclickevent_callback = nullptr;
    KNSWidgets__Button_WheelEvent_Callback knswidgets__button_wheelevent_callback = nullptr;
    KNSWidgets__Button_EnterEvent_Callback knswidgets__button_enterevent_callback = nullptr;
    KNSWidgets__Button_LeaveEvent_Callback knswidgets__button_leaveevent_callback = nullptr;
    KNSWidgets__Button_MoveEvent_Callback knswidgets__button_moveevent_callback = nullptr;
    KNSWidgets__Button_ResizeEvent_Callback knswidgets__button_resizeevent_callback = nullptr;
    KNSWidgets__Button_CloseEvent_Callback knswidgets__button_closeevent_callback = nullptr;
    KNSWidgets__Button_ContextMenuEvent_Callback knswidgets__button_contextmenuevent_callback = nullptr;
    KNSWidgets__Button_TabletEvent_Callback knswidgets__button_tabletevent_callback = nullptr;
    KNSWidgets__Button_ActionEvent_Callback knswidgets__button_actionevent_callback = nullptr;
    KNSWidgets__Button_DragEnterEvent_Callback knswidgets__button_dragenterevent_callback = nullptr;
    KNSWidgets__Button_DragMoveEvent_Callback knswidgets__button_dragmoveevent_callback = nullptr;
    KNSWidgets__Button_DragLeaveEvent_Callback knswidgets__button_dragleaveevent_callback = nullptr;
    KNSWidgets__Button_DropEvent_Callback knswidgets__button_dropevent_callback = nullptr;
    KNSWidgets__Button_ShowEvent_Callback knswidgets__button_showevent_callback = nullptr;
    KNSWidgets__Button_HideEvent_Callback knswidgets__button_hideevent_callback = nullptr;
    KNSWidgets__Button_NativeEvent_Callback knswidgets__button_nativeevent_callback = nullptr;
    KNSWidgets__Button_Metric_Callback knswidgets__button_metric_callback = nullptr;
    KNSWidgets__Button_InitPainter_Callback knswidgets__button_initpainter_callback = nullptr;
    KNSWidgets__Button_Redirected_Callback knswidgets__button_redirected_callback = nullptr;
    KNSWidgets__Button_SharedPainter_Callback knswidgets__button_sharedpainter_callback = nullptr;
    KNSWidgets__Button_InputMethodEvent_Callback knswidgets__button_inputmethodevent_callback = nullptr;
    KNSWidgets__Button_InputMethodQuery_Callback knswidgets__button_inputmethodquery_callback = nullptr;
    KNSWidgets__Button_FocusNextPrevChild_Callback knswidgets__button_focusnextprevchild_callback = nullptr;
    KNSWidgets__Button_EventFilter_Callback knswidgets__button_eventfilter_callback = nullptr;
    KNSWidgets__Button_ChildEvent_Callback knswidgets__button_childevent_callback = nullptr;
    KNSWidgets__Button_CustomEvent_Callback knswidgets__button_customevent_callback = nullptr;
    KNSWidgets__Button_ConnectNotify_Callback knswidgets__button_connectnotify_callback = nullptr;
    KNSWidgets__Button_DisconnectNotify_Callback knswidgets__button_disconnectnotify_callback = nullptr;
    KNSWidgets__Button_UpdateMicroFocus_Callback knswidgets__button_updatemicrofocus_callback = nullptr;
    KNSWidgets__Button_Create_Callback knswidgets__button_create_callback = nullptr;
    KNSWidgets__Button_Destroy_Callback knswidgets__button_destroy_callback = nullptr;
    KNSWidgets__Button_FocusNextChild_Callback knswidgets__button_focusnextchild_callback = nullptr;
    KNSWidgets__Button_FocusPreviousChild_Callback knswidgets__button_focuspreviouschild_callback = nullptr;
    KNSWidgets__Button_Sender_Callback knswidgets__button_sender_callback = nullptr;
    KNSWidgets__Button_SenderSignalIndex_Callback knswidgets__button_sendersignalindex_callback = nullptr;
    KNSWidgets__Button_Receivers_Callback knswidgets__button_receivers_callback = nullptr;
    KNSWidgets__Button_IsSignalConnected_Callback knswidgets__button_issignalconnected_callback = nullptr;
    KNSWidgets__Button_GetDecodedMetricF_Callback knswidgets__button_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool knswidgets__button_metacall_isbase = false;
    mutable bool knswidgets__button_sizehint_isbase = false;
    mutable bool knswidgets__button_minimumsizehint_isbase = false;
    mutable bool knswidgets__button_event_isbase = false;
    mutable bool knswidgets__button_paintevent_isbase = false;
    mutable bool knswidgets__button_keypressevent_isbase = false;
    mutable bool knswidgets__button_focusinevent_isbase = false;
    mutable bool knswidgets__button_focusoutevent_isbase = false;
    mutable bool knswidgets__button_mousemoveevent_isbase = false;
    mutable bool knswidgets__button_initstyleoption_isbase = false;
    mutable bool knswidgets__button_hitbutton_isbase = false;
    mutable bool knswidgets__button_checkstateset_isbase = false;
    mutable bool knswidgets__button_nextcheckstate_isbase = false;
    mutable bool knswidgets__button_keyreleaseevent_isbase = false;
    mutable bool knswidgets__button_mousepressevent_isbase = false;
    mutable bool knswidgets__button_mousereleaseevent_isbase = false;
    mutable bool knswidgets__button_changeevent_isbase = false;
    mutable bool knswidgets__button_timerevent_isbase = false;
    mutable bool knswidgets__button_devtype_isbase = false;
    mutable bool knswidgets__button_setvisible_isbase = false;
    mutable bool knswidgets__button_heightforwidth_isbase = false;
    mutable bool knswidgets__button_hasheightforwidth_isbase = false;
    mutable bool knswidgets__button_paintengine_isbase = false;
    mutable bool knswidgets__button_mousedoubleclickevent_isbase = false;
    mutable bool knswidgets__button_wheelevent_isbase = false;
    mutable bool knswidgets__button_enterevent_isbase = false;
    mutable bool knswidgets__button_leaveevent_isbase = false;
    mutable bool knswidgets__button_moveevent_isbase = false;
    mutable bool knswidgets__button_resizeevent_isbase = false;
    mutable bool knswidgets__button_closeevent_isbase = false;
    mutable bool knswidgets__button_contextmenuevent_isbase = false;
    mutable bool knswidgets__button_tabletevent_isbase = false;
    mutable bool knswidgets__button_actionevent_isbase = false;
    mutable bool knswidgets__button_dragenterevent_isbase = false;
    mutable bool knswidgets__button_dragmoveevent_isbase = false;
    mutable bool knswidgets__button_dragleaveevent_isbase = false;
    mutable bool knswidgets__button_dropevent_isbase = false;
    mutable bool knswidgets__button_showevent_isbase = false;
    mutable bool knswidgets__button_hideevent_isbase = false;
    mutable bool knswidgets__button_nativeevent_isbase = false;
    mutable bool knswidgets__button_metric_isbase = false;
    mutable bool knswidgets__button_initpainter_isbase = false;
    mutable bool knswidgets__button_redirected_isbase = false;
    mutable bool knswidgets__button_sharedpainter_isbase = false;
    mutable bool knswidgets__button_inputmethodevent_isbase = false;
    mutable bool knswidgets__button_inputmethodquery_isbase = false;
    mutable bool knswidgets__button_focusnextprevchild_isbase = false;
    mutable bool knswidgets__button_eventfilter_isbase = false;
    mutable bool knswidgets__button_childevent_isbase = false;
    mutable bool knswidgets__button_customevent_isbase = false;
    mutable bool knswidgets__button_connectnotify_isbase = false;
    mutable bool knswidgets__button_disconnectnotify_isbase = false;
    mutable bool knswidgets__button_updatemicrofocus_isbase = false;
    mutable bool knswidgets__button_create_isbase = false;
    mutable bool knswidgets__button_destroy_isbase = false;
    mutable bool knswidgets__button_focusnextchild_isbase = false;
    mutable bool knswidgets__button_focuspreviouschild_isbase = false;
    mutable bool knswidgets__button_sender_isbase = false;
    mutable bool knswidgets__button_sendersignalindex_isbase = false;
    mutable bool knswidgets__button_receivers_isbase = false;
    mutable bool knswidgets__button_issignalconnected_isbase = false;
    mutable bool knswidgets__button_getdecodedmetricf_isbase = false;

  public:
    VirtualKNSWidgetsButton(QWidget* parent) : KNSWidgets::Button(parent) {};
    VirtualKNSWidgetsButton(const QString& text, const QString& configFile, QWidget* parent) : KNSWidgets::Button(text, configFile, parent) {};

    ~VirtualKNSWidgetsButton() {
        knswidgets__button_metacall_callback = nullptr;
        knswidgets__button_sizehint_callback = nullptr;
        knswidgets__button_minimumsizehint_callback = nullptr;
        knswidgets__button_event_callback = nullptr;
        knswidgets__button_paintevent_callback = nullptr;
        knswidgets__button_keypressevent_callback = nullptr;
        knswidgets__button_focusinevent_callback = nullptr;
        knswidgets__button_focusoutevent_callback = nullptr;
        knswidgets__button_mousemoveevent_callback = nullptr;
        knswidgets__button_initstyleoption_callback = nullptr;
        knswidgets__button_hitbutton_callback = nullptr;
        knswidgets__button_checkstateset_callback = nullptr;
        knswidgets__button_nextcheckstate_callback = nullptr;
        knswidgets__button_keyreleaseevent_callback = nullptr;
        knswidgets__button_mousepressevent_callback = nullptr;
        knswidgets__button_mousereleaseevent_callback = nullptr;
        knswidgets__button_changeevent_callback = nullptr;
        knswidgets__button_timerevent_callback = nullptr;
        knswidgets__button_devtype_callback = nullptr;
        knswidgets__button_setvisible_callback = nullptr;
        knswidgets__button_heightforwidth_callback = nullptr;
        knswidgets__button_hasheightforwidth_callback = nullptr;
        knswidgets__button_paintengine_callback = nullptr;
        knswidgets__button_mousedoubleclickevent_callback = nullptr;
        knswidgets__button_wheelevent_callback = nullptr;
        knswidgets__button_enterevent_callback = nullptr;
        knswidgets__button_leaveevent_callback = nullptr;
        knswidgets__button_moveevent_callback = nullptr;
        knswidgets__button_resizeevent_callback = nullptr;
        knswidgets__button_closeevent_callback = nullptr;
        knswidgets__button_contextmenuevent_callback = nullptr;
        knswidgets__button_tabletevent_callback = nullptr;
        knswidgets__button_actionevent_callback = nullptr;
        knswidgets__button_dragenterevent_callback = nullptr;
        knswidgets__button_dragmoveevent_callback = nullptr;
        knswidgets__button_dragleaveevent_callback = nullptr;
        knswidgets__button_dropevent_callback = nullptr;
        knswidgets__button_showevent_callback = nullptr;
        knswidgets__button_hideevent_callback = nullptr;
        knswidgets__button_nativeevent_callback = nullptr;
        knswidgets__button_metric_callback = nullptr;
        knswidgets__button_initpainter_callback = nullptr;
        knswidgets__button_redirected_callback = nullptr;
        knswidgets__button_sharedpainter_callback = nullptr;
        knswidgets__button_inputmethodevent_callback = nullptr;
        knswidgets__button_inputmethodquery_callback = nullptr;
        knswidgets__button_focusnextprevchild_callback = nullptr;
        knswidgets__button_eventfilter_callback = nullptr;
        knswidgets__button_childevent_callback = nullptr;
        knswidgets__button_customevent_callback = nullptr;
        knswidgets__button_connectnotify_callback = nullptr;
        knswidgets__button_disconnectnotify_callback = nullptr;
        knswidgets__button_updatemicrofocus_callback = nullptr;
        knswidgets__button_create_callback = nullptr;
        knswidgets__button_destroy_callback = nullptr;
        knswidgets__button_focusnextchild_callback = nullptr;
        knswidgets__button_focuspreviouschild_callback = nullptr;
        knswidgets__button_sender_callback = nullptr;
        knswidgets__button_sendersignalindex_callback = nullptr;
        knswidgets__button_receivers_callback = nullptr;
        knswidgets__button_issignalconnected_callback = nullptr;
        knswidgets__button_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKNSWidgets__Button_Metacall_Callback(KNSWidgets__Button_Metacall_Callback cb) { knswidgets__button_metacall_callback = cb; }
    inline void setKNSWidgets__Button_SizeHint_Callback(KNSWidgets__Button_SizeHint_Callback cb) { knswidgets__button_sizehint_callback = cb; }
    inline void setKNSWidgets__Button_MinimumSizeHint_Callback(KNSWidgets__Button_MinimumSizeHint_Callback cb) { knswidgets__button_minimumsizehint_callback = cb; }
    inline void setKNSWidgets__Button_Event_Callback(KNSWidgets__Button_Event_Callback cb) { knswidgets__button_event_callback = cb; }
    inline void setKNSWidgets__Button_PaintEvent_Callback(KNSWidgets__Button_PaintEvent_Callback cb) { knswidgets__button_paintevent_callback = cb; }
    inline void setKNSWidgets__Button_KeyPressEvent_Callback(KNSWidgets__Button_KeyPressEvent_Callback cb) { knswidgets__button_keypressevent_callback = cb; }
    inline void setKNSWidgets__Button_FocusInEvent_Callback(KNSWidgets__Button_FocusInEvent_Callback cb) { knswidgets__button_focusinevent_callback = cb; }
    inline void setKNSWidgets__Button_FocusOutEvent_Callback(KNSWidgets__Button_FocusOutEvent_Callback cb) { knswidgets__button_focusoutevent_callback = cb; }
    inline void setKNSWidgets__Button_MouseMoveEvent_Callback(KNSWidgets__Button_MouseMoveEvent_Callback cb) { knswidgets__button_mousemoveevent_callback = cb; }
    inline void setKNSWidgets__Button_InitStyleOption_Callback(KNSWidgets__Button_InitStyleOption_Callback cb) { knswidgets__button_initstyleoption_callback = cb; }
    inline void setKNSWidgets__Button_HitButton_Callback(KNSWidgets__Button_HitButton_Callback cb) { knswidgets__button_hitbutton_callback = cb; }
    inline void setKNSWidgets__Button_CheckStateSet_Callback(KNSWidgets__Button_CheckStateSet_Callback cb) { knswidgets__button_checkstateset_callback = cb; }
    inline void setKNSWidgets__Button_NextCheckState_Callback(KNSWidgets__Button_NextCheckState_Callback cb) { knswidgets__button_nextcheckstate_callback = cb; }
    inline void setKNSWidgets__Button_KeyReleaseEvent_Callback(KNSWidgets__Button_KeyReleaseEvent_Callback cb) { knswidgets__button_keyreleaseevent_callback = cb; }
    inline void setKNSWidgets__Button_MousePressEvent_Callback(KNSWidgets__Button_MousePressEvent_Callback cb) { knswidgets__button_mousepressevent_callback = cb; }
    inline void setKNSWidgets__Button_MouseReleaseEvent_Callback(KNSWidgets__Button_MouseReleaseEvent_Callback cb) { knswidgets__button_mousereleaseevent_callback = cb; }
    inline void setKNSWidgets__Button_ChangeEvent_Callback(KNSWidgets__Button_ChangeEvent_Callback cb) { knswidgets__button_changeevent_callback = cb; }
    inline void setKNSWidgets__Button_TimerEvent_Callback(KNSWidgets__Button_TimerEvent_Callback cb) { knswidgets__button_timerevent_callback = cb; }
    inline void setKNSWidgets__Button_DevType_Callback(KNSWidgets__Button_DevType_Callback cb) { knswidgets__button_devtype_callback = cb; }
    inline void setKNSWidgets__Button_SetVisible_Callback(KNSWidgets__Button_SetVisible_Callback cb) { knswidgets__button_setvisible_callback = cb; }
    inline void setKNSWidgets__Button_HeightForWidth_Callback(KNSWidgets__Button_HeightForWidth_Callback cb) { knswidgets__button_heightforwidth_callback = cb; }
    inline void setKNSWidgets__Button_HasHeightForWidth_Callback(KNSWidgets__Button_HasHeightForWidth_Callback cb) { knswidgets__button_hasheightforwidth_callback = cb; }
    inline void setKNSWidgets__Button_PaintEngine_Callback(KNSWidgets__Button_PaintEngine_Callback cb) { knswidgets__button_paintengine_callback = cb; }
    inline void setKNSWidgets__Button_MouseDoubleClickEvent_Callback(KNSWidgets__Button_MouseDoubleClickEvent_Callback cb) { knswidgets__button_mousedoubleclickevent_callback = cb; }
    inline void setKNSWidgets__Button_WheelEvent_Callback(KNSWidgets__Button_WheelEvent_Callback cb) { knswidgets__button_wheelevent_callback = cb; }
    inline void setKNSWidgets__Button_EnterEvent_Callback(KNSWidgets__Button_EnterEvent_Callback cb) { knswidgets__button_enterevent_callback = cb; }
    inline void setKNSWidgets__Button_LeaveEvent_Callback(KNSWidgets__Button_LeaveEvent_Callback cb) { knswidgets__button_leaveevent_callback = cb; }
    inline void setKNSWidgets__Button_MoveEvent_Callback(KNSWidgets__Button_MoveEvent_Callback cb) { knswidgets__button_moveevent_callback = cb; }
    inline void setKNSWidgets__Button_ResizeEvent_Callback(KNSWidgets__Button_ResizeEvent_Callback cb) { knswidgets__button_resizeevent_callback = cb; }
    inline void setKNSWidgets__Button_CloseEvent_Callback(KNSWidgets__Button_CloseEvent_Callback cb) { knswidgets__button_closeevent_callback = cb; }
    inline void setKNSWidgets__Button_ContextMenuEvent_Callback(KNSWidgets__Button_ContextMenuEvent_Callback cb) { knswidgets__button_contextmenuevent_callback = cb; }
    inline void setKNSWidgets__Button_TabletEvent_Callback(KNSWidgets__Button_TabletEvent_Callback cb) { knswidgets__button_tabletevent_callback = cb; }
    inline void setKNSWidgets__Button_ActionEvent_Callback(KNSWidgets__Button_ActionEvent_Callback cb) { knswidgets__button_actionevent_callback = cb; }
    inline void setKNSWidgets__Button_DragEnterEvent_Callback(KNSWidgets__Button_DragEnterEvent_Callback cb) { knswidgets__button_dragenterevent_callback = cb; }
    inline void setKNSWidgets__Button_DragMoveEvent_Callback(KNSWidgets__Button_DragMoveEvent_Callback cb) { knswidgets__button_dragmoveevent_callback = cb; }
    inline void setKNSWidgets__Button_DragLeaveEvent_Callback(KNSWidgets__Button_DragLeaveEvent_Callback cb) { knswidgets__button_dragleaveevent_callback = cb; }
    inline void setKNSWidgets__Button_DropEvent_Callback(KNSWidgets__Button_DropEvent_Callback cb) { knswidgets__button_dropevent_callback = cb; }
    inline void setKNSWidgets__Button_ShowEvent_Callback(KNSWidgets__Button_ShowEvent_Callback cb) { knswidgets__button_showevent_callback = cb; }
    inline void setKNSWidgets__Button_HideEvent_Callback(KNSWidgets__Button_HideEvent_Callback cb) { knswidgets__button_hideevent_callback = cb; }
    inline void setKNSWidgets__Button_NativeEvent_Callback(KNSWidgets__Button_NativeEvent_Callback cb) { knswidgets__button_nativeevent_callback = cb; }
    inline void setKNSWidgets__Button_Metric_Callback(KNSWidgets__Button_Metric_Callback cb) { knswidgets__button_metric_callback = cb; }
    inline void setKNSWidgets__Button_InitPainter_Callback(KNSWidgets__Button_InitPainter_Callback cb) { knswidgets__button_initpainter_callback = cb; }
    inline void setKNSWidgets__Button_Redirected_Callback(KNSWidgets__Button_Redirected_Callback cb) { knswidgets__button_redirected_callback = cb; }
    inline void setKNSWidgets__Button_SharedPainter_Callback(KNSWidgets__Button_SharedPainter_Callback cb) { knswidgets__button_sharedpainter_callback = cb; }
    inline void setKNSWidgets__Button_InputMethodEvent_Callback(KNSWidgets__Button_InputMethodEvent_Callback cb) { knswidgets__button_inputmethodevent_callback = cb; }
    inline void setKNSWidgets__Button_InputMethodQuery_Callback(KNSWidgets__Button_InputMethodQuery_Callback cb) { knswidgets__button_inputmethodquery_callback = cb; }
    inline void setKNSWidgets__Button_FocusNextPrevChild_Callback(KNSWidgets__Button_FocusNextPrevChild_Callback cb) { knswidgets__button_focusnextprevchild_callback = cb; }
    inline void setKNSWidgets__Button_EventFilter_Callback(KNSWidgets__Button_EventFilter_Callback cb) { knswidgets__button_eventfilter_callback = cb; }
    inline void setKNSWidgets__Button_ChildEvent_Callback(KNSWidgets__Button_ChildEvent_Callback cb) { knswidgets__button_childevent_callback = cb; }
    inline void setKNSWidgets__Button_CustomEvent_Callback(KNSWidgets__Button_CustomEvent_Callback cb) { knswidgets__button_customevent_callback = cb; }
    inline void setKNSWidgets__Button_ConnectNotify_Callback(KNSWidgets__Button_ConnectNotify_Callback cb) { knswidgets__button_connectnotify_callback = cb; }
    inline void setKNSWidgets__Button_DisconnectNotify_Callback(KNSWidgets__Button_DisconnectNotify_Callback cb) { knswidgets__button_disconnectnotify_callback = cb; }
    inline void setKNSWidgets__Button_UpdateMicroFocus_Callback(KNSWidgets__Button_UpdateMicroFocus_Callback cb) { knswidgets__button_updatemicrofocus_callback = cb; }
    inline void setKNSWidgets__Button_Create_Callback(KNSWidgets__Button_Create_Callback cb) { knswidgets__button_create_callback = cb; }
    inline void setKNSWidgets__Button_Destroy_Callback(KNSWidgets__Button_Destroy_Callback cb) { knswidgets__button_destroy_callback = cb; }
    inline void setKNSWidgets__Button_FocusNextChild_Callback(KNSWidgets__Button_FocusNextChild_Callback cb) { knswidgets__button_focusnextchild_callback = cb; }
    inline void setKNSWidgets__Button_FocusPreviousChild_Callback(KNSWidgets__Button_FocusPreviousChild_Callback cb) { knswidgets__button_focuspreviouschild_callback = cb; }
    inline void setKNSWidgets__Button_Sender_Callback(KNSWidgets__Button_Sender_Callback cb) { knswidgets__button_sender_callback = cb; }
    inline void setKNSWidgets__Button_SenderSignalIndex_Callback(KNSWidgets__Button_SenderSignalIndex_Callback cb) { knswidgets__button_sendersignalindex_callback = cb; }
    inline void setKNSWidgets__Button_Receivers_Callback(KNSWidgets__Button_Receivers_Callback cb) { knswidgets__button_receivers_callback = cb; }
    inline void setKNSWidgets__Button_IsSignalConnected_Callback(KNSWidgets__Button_IsSignalConnected_Callback cb) { knswidgets__button_issignalconnected_callback = cb; }
    inline void setKNSWidgets__Button_GetDecodedMetricF_Callback(KNSWidgets__Button_GetDecodedMetricF_Callback cb) { knswidgets__button_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKNSWidgets__Button_Metacall_IsBase(bool value) const { knswidgets__button_metacall_isbase = value; }
    inline void setKNSWidgets__Button_SizeHint_IsBase(bool value) const { knswidgets__button_sizehint_isbase = value; }
    inline void setKNSWidgets__Button_MinimumSizeHint_IsBase(bool value) const { knswidgets__button_minimumsizehint_isbase = value; }
    inline void setKNSWidgets__Button_Event_IsBase(bool value) const { knswidgets__button_event_isbase = value; }
    inline void setKNSWidgets__Button_PaintEvent_IsBase(bool value) const { knswidgets__button_paintevent_isbase = value; }
    inline void setKNSWidgets__Button_KeyPressEvent_IsBase(bool value) const { knswidgets__button_keypressevent_isbase = value; }
    inline void setKNSWidgets__Button_FocusInEvent_IsBase(bool value) const { knswidgets__button_focusinevent_isbase = value; }
    inline void setKNSWidgets__Button_FocusOutEvent_IsBase(bool value) const { knswidgets__button_focusoutevent_isbase = value; }
    inline void setKNSWidgets__Button_MouseMoveEvent_IsBase(bool value) const { knswidgets__button_mousemoveevent_isbase = value; }
    inline void setKNSWidgets__Button_InitStyleOption_IsBase(bool value) const { knswidgets__button_initstyleoption_isbase = value; }
    inline void setKNSWidgets__Button_HitButton_IsBase(bool value) const { knswidgets__button_hitbutton_isbase = value; }
    inline void setKNSWidgets__Button_CheckStateSet_IsBase(bool value) const { knswidgets__button_checkstateset_isbase = value; }
    inline void setKNSWidgets__Button_NextCheckState_IsBase(bool value) const { knswidgets__button_nextcheckstate_isbase = value; }
    inline void setKNSWidgets__Button_KeyReleaseEvent_IsBase(bool value) const { knswidgets__button_keyreleaseevent_isbase = value; }
    inline void setKNSWidgets__Button_MousePressEvent_IsBase(bool value) const { knswidgets__button_mousepressevent_isbase = value; }
    inline void setKNSWidgets__Button_MouseReleaseEvent_IsBase(bool value) const { knswidgets__button_mousereleaseevent_isbase = value; }
    inline void setKNSWidgets__Button_ChangeEvent_IsBase(bool value) const { knswidgets__button_changeevent_isbase = value; }
    inline void setKNSWidgets__Button_TimerEvent_IsBase(bool value) const { knswidgets__button_timerevent_isbase = value; }
    inline void setKNSWidgets__Button_DevType_IsBase(bool value) const { knswidgets__button_devtype_isbase = value; }
    inline void setKNSWidgets__Button_SetVisible_IsBase(bool value) const { knswidgets__button_setvisible_isbase = value; }
    inline void setKNSWidgets__Button_HeightForWidth_IsBase(bool value) const { knswidgets__button_heightforwidth_isbase = value; }
    inline void setKNSWidgets__Button_HasHeightForWidth_IsBase(bool value) const { knswidgets__button_hasheightforwidth_isbase = value; }
    inline void setKNSWidgets__Button_PaintEngine_IsBase(bool value) const { knswidgets__button_paintengine_isbase = value; }
    inline void setKNSWidgets__Button_MouseDoubleClickEvent_IsBase(bool value) const { knswidgets__button_mousedoubleclickevent_isbase = value; }
    inline void setKNSWidgets__Button_WheelEvent_IsBase(bool value) const { knswidgets__button_wheelevent_isbase = value; }
    inline void setKNSWidgets__Button_EnterEvent_IsBase(bool value) const { knswidgets__button_enterevent_isbase = value; }
    inline void setKNSWidgets__Button_LeaveEvent_IsBase(bool value) const { knswidgets__button_leaveevent_isbase = value; }
    inline void setKNSWidgets__Button_MoveEvent_IsBase(bool value) const { knswidgets__button_moveevent_isbase = value; }
    inline void setKNSWidgets__Button_ResizeEvent_IsBase(bool value) const { knswidgets__button_resizeevent_isbase = value; }
    inline void setKNSWidgets__Button_CloseEvent_IsBase(bool value) const { knswidgets__button_closeevent_isbase = value; }
    inline void setKNSWidgets__Button_ContextMenuEvent_IsBase(bool value) const { knswidgets__button_contextmenuevent_isbase = value; }
    inline void setKNSWidgets__Button_TabletEvent_IsBase(bool value) const { knswidgets__button_tabletevent_isbase = value; }
    inline void setKNSWidgets__Button_ActionEvent_IsBase(bool value) const { knswidgets__button_actionevent_isbase = value; }
    inline void setKNSWidgets__Button_DragEnterEvent_IsBase(bool value) const { knswidgets__button_dragenterevent_isbase = value; }
    inline void setKNSWidgets__Button_DragMoveEvent_IsBase(bool value) const { knswidgets__button_dragmoveevent_isbase = value; }
    inline void setKNSWidgets__Button_DragLeaveEvent_IsBase(bool value) const { knswidgets__button_dragleaveevent_isbase = value; }
    inline void setKNSWidgets__Button_DropEvent_IsBase(bool value) const { knswidgets__button_dropevent_isbase = value; }
    inline void setKNSWidgets__Button_ShowEvent_IsBase(bool value) const { knswidgets__button_showevent_isbase = value; }
    inline void setKNSWidgets__Button_HideEvent_IsBase(bool value) const { knswidgets__button_hideevent_isbase = value; }
    inline void setKNSWidgets__Button_NativeEvent_IsBase(bool value) const { knswidgets__button_nativeevent_isbase = value; }
    inline void setKNSWidgets__Button_Metric_IsBase(bool value) const { knswidgets__button_metric_isbase = value; }
    inline void setKNSWidgets__Button_InitPainter_IsBase(bool value) const { knswidgets__button_initpainter_isbase = value; }
    inline void setKNSWidgets__Button_Redirected_IsBase(bool value) const { knswidgets__button_redirected_isbase = value; }
    inline void setKNSWidgets__Button_SharedPainter_IsBase(bool value) const { knswidgets__button_sharedpainter_isbase = value; }
    inline void setKNSWidgets__Button_InputMethodEvent_IsBase(bool value) const { knswidgets__button_inputmethodevent_isbase = value; }
    inline void setKNSWidgets__Button_InputMethodQuery_IsBase(bool value) const { knswidgets__button_inputmethodquery_isbase = value; }
    inline void setKNSWidgets__Button_FocusNextPrevChild_IsBase(bool value) const { knswidgets__button_focusnextprevchild_isbase = value; }
    inline void setKNSWidgets__Button_EventFilter_IsBase(bool value) const { knswidgets__button_eventfilter_isbase = value; }
    inline void setKNSWidgets__Button_ChildEvent_IsBase(bool value) const { knswidgets__button_childevent_isbase = value; }
    inline void setKNSWidgets__Button_CustomEvent_IsBase(bool value) const { knswidgets__button_customevent_isbase = value; }
    inline void setKNSWidgets__Button_ConnectNotify_IsBase(bool value) const { knswidgets__button_connectnotify_isbase = value; }
    inline void setKNSWidgets__Button_DisconnectNotify_IsBase(bool value) const { knswidgets__button_disconnectnotify_isbase = value; }
    inline void setKNSWidgets__Button_UpdateMicroFocus_IsBase(bool value) const { knswidgets__button_updatemicrofocus_isbase = value; }
    inline void setKNSWidgets__Button_Create_IsBase(bool value) const { knswidgets__button_create_isbase = value; }
    inline void setKNSWidgets__Button_Destroy_IsBase(bool value) const { knswidgets__button_destroy_isbase = value; }
    inline void setKNSWidgets__Button_FocusNextChild_IsBase(bool value) const { knswidgets__button_focusnextchild_isbase = value; }
    inline void setKNSWidgets__Button_FocusPreviousChild_IsBase(bool value) const { knswidgets__button_focuspreviouschild_isbase = value; }
    inline void setKNSWidgets__Button_Sender_IsBase(bool value) const { knswidgets__button_sender_isbase = value; }
    inline void setKNSWidgets__Button_SenderSignalIndex_IsBase(bool value) const { knswidgets__button_sendersignalindex_isbase = value; }
    inline void setKNSWidgets__Button_Receivers_IsBase(bool value) const { knswidgets__button_receivers_isbase = value; }
    inline void setKNSWidgets__Button_IsSignalConnected_IsBase(bool value) const { knswidgets__button_issignalconnected_isbase = value; }
    inline void setKNSWidgets__Button_GetDecodedMetricF_IsBase(bool value) const { knswidgets__button_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knswidgets__button_metacall_isbase) {
            knswidgets__button_metacall_isbase = false;
            return KNSWidgets__Button::qt_metacall(param1, param2, param3);
        } else if (knswidgets__button_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = knswidgets__button_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KNSWidgets__Button::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (knswidgets__button_sizehint_isbase) {
            knswidgets__button_sizehint_isbase = false;
            return KNSWidgets__Button::sizeHint();
        } else if (knswidgets__button_sizehint_callback != nullptr) {
            QSize* callback_ret = knswidgets__button_sizehint_callback();
            return *callback_ret;
        } else {
            return KNSWidgets__Button::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (knswidgets__button_minimumsizehint_isbase) {
            knswidgets__button_minimumsizehint_isbase = false;
            return KNSWidgets__Button::minimumSizeHint();
        } else if (knswidgets__button_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = knswidgets__button_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KNSWidgets__Button::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (knswidgets__button_event_isbase) {
            knswidgets__button_event_isbase = false;
            return KNSWidgets__Button::event(e);
        } else if (knswidgets__button_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = knswidgets__button_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNSWidgets__Button::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (knswidgets__button_paintevent_isbase) {
            knswidgets__button_paintevent_isbase = false;
            KNSWidgets__Button::paintEvent(param1);
        } else if (knswidgets__button_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            knswidgets__button_paintevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (knswidgets__button_keypressevent_isbase) {
            knswidgets__button_keypressevent_isbase = false;
            KNSWidgets__Button::keyPressEvent(param1);
        } else if (knswidgets__button_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            knswidgets__button_keypressevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (knswidgets__button_focusinevent_isbase) {
            knswidgets__button_focusinevent_isbase = false;
            KNSWidgets__Button::focusInEvent(param1);
        } else if (knswidgets__button_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            knswidgets__button_focusinevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::focusInEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (knswidgets__button_focusoutevent_isbase) {
            knswidgets__button_focusoutevent_isbase = false;
            KNSWidgets__Button::focusOutEvent(param1);
        } else if (knswidgets__button_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            knswidgets__button_focusoutevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::focusOutEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (knswidgets__button_mousemoveevent_isbase) {
            knswidgets__button_mousemoveevent_isbase = false;
            KNSWidgets__Button::mouseMoveEvent(param1);
        } else if (knswidgets__button_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            knswidgets__button_mousemoveevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionButton* option) const override {
        if (knswidgets__button_initstyleoption_isbase) {
            knswidgets__button_initstyleoption_isbase = false;
            KNSWidgets__Button::initStyleOption(option);
        } else if (knswidgets__button_initstyleoption_callback != nullptr) {
            QStyleOptionButton* cbval1 = option;

            knswidgets__button_initstyleoption_callback(this, cbval1);
        } else {
            KNSWidgets__Button::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (knswidgets__button_hitbutton_isbase) {
            knswidgets__button_hitbutton_isbase = false;
            return KNSWidgets__Button::hitButton(pos);
        } else if (knswidgets__button_hitbutton_callback != nullptr) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);

            bool callback_ret = knswidgets__button_hitbutton_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNSWidgets__Button::hitButton(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (knswidgets__button_checkstateset_isbase) {
            knswidgets__button_checkstateset_isbase = false;
            KNSWidgets__Button::checkStateSet();
        } else if (knswidgets__button_checkstateset_callback != nullptr) {
            knswidgets__button_checkstateset_callback();
        } else {
            KNSWidgets__Button::checkStateSet();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (knswidgets__button_nextcheckstate_isbase) {
            knswidgets__button_nextcheckstate_isbase = false;
            KNSWidgets__Button::nextCheckState();
        } else if (knswidgets__button_nextcheckstate_callback != nullptr) {
            knswidgets__button_nextcheckstate_callback();
        } else {
            KNSWidgets__Button::nextCheckState();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (knswidgets__button_keyreleaseevent_isbase) {
            knswidgets__button_keyreleaseevent_isbase = false;
            KNSWidgets__Button::keyReleaseEvent(e);
        } else if (knswidgets__button_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            knswidgets__button_keyreleaseevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (knswidgets__button_mousepressevent_isbase) {
            knswidgets__button_mousepressevent_isbase = false;
            KNSWidgets__Button::mousePressEvent(e);
        } else if (knswidgets__button_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            knswidgets__button_mousepressevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (knswidgets__button_mousereleaseevent_isbase) {
            knswidgets__button_mousereleaseevent_isbase = false;
            KNSWidgets__Button::mouseReleaseEvent(e);
        } else if (knswidgets__button_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            knswidgets__button_mousereleaseevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (knswidgets__button_changeevent_isbase) {
            knswidgets__button_changeevent_isbase = false;
            KNSWidgets__Button::changeEvent(e);
        } else if (knswidgets__button_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            knswidgets__button_changeevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (knswidgets__button_timerevent_isbase) {
            knswidgets__button_timerevent_isbase = false;
            KNSWidgets__Button::timerEvent(e);
        } else if (knswidgets__button_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = e;

            knswidgets__button_timerevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::timerEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (knswidgets__button_devtype_isbase) {
            knswidgets__button_devtype_isbase = false;
            return KNSWidgets__Button::devType();
        } else if (knswidgets__button_devtype_callback != nullptr) {
            int callback_ret = knswidgets__button_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KNSWidgets__Button::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (knswidgets__button_setvisible_isbase) {
            knswidgets__button_setvisible_isbase = false;
            KNSWidgets__Button::setVisible(visible);
        } else if (knswidgets__button_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            knswidgets__button_setvisible_callback(this, cbval1);
        } else {
            KNSWidgets__Button::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (knswidgets__button_heightforwidth_isbase) {
            knswidgets__button_heightforwidth_isbase = false;
            return KNSWidgets__Button::heightForWidth(param1);
        } else if (knswidgets__button_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = knswidgets__button_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KNSWidgets__Button::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (knswidgets__button_hasheightforwidth_isbase) {
            knswidgets__button_hasheightforwidth_isbase = false;
            return KNSWidgets__Button::hasHeightForWidth();
        } else if (knswidgets__button_hasheightforwidth_callback != nullptr) {
            bool callback_ret = knswidgets__button_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KNSWidgets__Button::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (knswidgets__button_paintengine_isbase) {
            knswidgets__button_paintengine_isbase = false;
            return KNSWidgets__Button::paintEngine();
        } else if (knswidgets__button_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = knswidgets__button_paintengine_callback();
            return callback_ret;
        } else {
            return KNSWidgets__Button::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (knswidgets__button_mousedoubleclickevent_isbase) {
            knswidgets__button_mousedoubleclickevent_isbase = false;
            KNSWidgets__Button::mouseDoubleClickEvent(event);
        } else if (knswidgets__button_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            knswidgets__button_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (knswidgets__button_wheelevent_isbase) {
            knswidgets__button_wheelevent_isbase = false;
            KNSWidgets__Button::wheelEvent(event);
        } else if (knswidgets__button_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            knswidgets__button_wheelevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (knswidgets__button_enterevent_isbase) {
            knswidgets__button_enterevent_isbase = false;
            KNSWidgets__Button::enterEvent(event);
        } else if (knswidgets__button_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            knswidgets__button_enterevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (knswidgets__button_leaveevent_isbase) {
            knswidgets__button_leaveevent_isbase = false;
            KNSWidgets__Button::leaveEvent(event);
        } else if (knswidgets__button_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            knswidgets__button_leaveevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (knswidgets__button_moveevent_isbase) {
            knswidgets__button_moveevent_isbase = false;
            KNSWidgets__Button::moveEvent(event);
        } else if (knswidgets__button_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            knswidgets__button_moveevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (knswidgets__button_resizeevent_isbase) {
            knswidgets__button_resizeevent_isbase = false;
            KNSWidgets__Button::resizeEvent(event);
        } else if (knswidgets__button_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            knswidgets__button_resizeevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (knswidgets__button_closeevent_isbase) {
            knswidgets__button_closeevent_isbase = false;
            KNSWidgets__Button::closeEvent(event);
        } else if (knswidgets__button_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            knswidgets__button_closeevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (knswidgets__button_contextmenuevent_isbase) {
            knswidgets__button_contextmenuevent_isbase = false;
            KNSWidgets__Button::contextMenuEvent(event);
        } else if (knswidgets__button_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            knswidgets__button_contextmenuevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (knswidgets__button_tabletevent_isbase) {
            knswidgets__button_tabletevent_isbase = false;
            KNSWidgets__Button::tabletEvent(event);
        } else if (knswidgets__button_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            knswidgets__button_tabletevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (knswidgets__button_actionevent_isbase) {
            knswidgets__button_actionevent_isbase = false;
            KNSWidgets__Button::actionEvent(event);
        } else if (knswidgets__button_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            knswidgets__button_actionevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (knswidgets__button_dragenterevent_isbase) {
            knswidgets__button_dragenterevent_isbase = false;
            KNSWidgets__Button::dragEnterEvent(event);
        } else if (knswidgets__button_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            knswidgets__button_dragenterevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (knswidgets__button_dragmoveevent_isbase) {
            knswidgets__button_dragmoveevent_isbase = false;
            KNSWidgets__Button::dragMoveEvent(event);
        } else if (knswidgets__button_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            knswidgets__button_dragmoveevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (knswidgets__button_dragleaveevent_isbase) {
            knswidgets__button_dragleaveevent_isbase = false;
            KNSWidgets__Button::dragLeaveEvent(event);
        } else if (knswidgets__button_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            knswidgets__button_dragleaveevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (knswidgets__button_dropevent_isbase) {
            knswidgets__button_dropevent_isbase = false;
            KNSWidgets__Button::dropEvent(event);
        } else if (knswidgets__button_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            knswidgets__button_dropevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (knswidgets__button_showevent_isbase) {
            knswidgets__button_showevent_isbase = false;
            KNSWidgets__Button::showEvent(event);
        } else if (knswidgets__button_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            knswidgets__button_showevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (knswidgets__button_hideevent_isbase) {
            knswidgets__button_hideevent_isbase = false;
            KNSWidgets__Button::hideEvent(event);
        } else if (knswidgets__button_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            knswidgets__button_hideevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (knswidgets__button_nativeevent_isbase) {
            knswidgets__button_nativeevent_isbase = false;
            return KNSWidgets__Button::nativeEvent(eventType, message, result);
        } else if (knswidgets__button_nativeevent_callback != nullptr) {
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

            bool callback_ret = knswidgets__button_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KNSWidgets__Button::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (knswidgets__button_metric_isbase) {
            knswidgets__button_metric_isbase = false;
            return KNSWidgets__Button::metric(param1);
        } else if (knswidgets__button_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = knswidgets__button_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KNSWidgets__Button::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (knswidgets__button_initpainter_isbase) {
            knswidgets__button_initpainter_isbase = false;
            KNSWidgets__Button::initPainter(painter);
        } else if (knswidgets__button_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            knswidgets__button_initpainter_callback(this, cbval1);
        } else {
            KNSWidgets__Button::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (knswidgets__button_redirected_isbase) {
            knswidgets__button_redirected_isbase = false;
            return KNSWidgets__Button::redirected(offset);
        } else if (knswidgets__button_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = knswidgets__button_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNSWidgets__Button::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (knswidgets__button_sharedpainter_isbase) {
            knswidgets__button_sharedpainter_isbase = false;
            return KNSWidgets__Button::sharedPainter();
        } else if (knswidgets__button_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = knswidgets__button_sharedpainter_callback();
            return callback_ret;
        } else {
            return KNSWidgets__Button::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (knswidgets__button_inputmethodevent_isbase) {
            knswidgets__button_inputmethodevent_isbase = false;
            KNSWidgets__Button::inputMethodEvent(param1);
        } else if (knswidgets__button_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            knswidgets__button_inputmethodevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (knswidgets__button_inputmethodquery_isbase) {
            knswidgets__button_inputmethodquery_isbase = false;
            return KNSWidgets__Button::inputMethodQuery(param1);
        } else if (knswidgets__button_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = knswidgets__button_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KNSWidgets__Button::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (knswidgets__button_focusnextprevchild_isbase) {
            knswidgets__button_focusnextprevchild_isbase = false;
            return KNSWidgets__Button::focusNextPrevChild(next);
        } else if (knswidgets__button_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = knswidgets__button_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNSWidgets__Button::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knswidgets__button_eventfilter_isbase) {
            knswidgets__button_eventfilter_isbase = false;
            return KNSWidgets__Button::eventFilter(watched, event);
        } else if (knswidgets__button_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = knswidgets__button_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KNSWidgets__Button::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knswidgets__button_childevent_isbase) {
            knswidgets__button_childevent_isbase = false;
            KNSWidgets__Button::childEvent(event);
        } else if (knswidgets__button_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            knswidgets__button_childevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knswidgets__button_customevent_isbase) {
            knswidgets__button_customevent_isbase = false;
            KNSWidgets__Button::customEvent(event);
        } else if (knswidgets__button_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            knswidgets__button_customevent_callback(this, cbval1);
        } else {
            KNSWidgets__Button::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knswidgets__button_connectnotify_isbase) {
            knswidgets__button_connectnotify_isbase = false;
            KNSWidgets__Button::connectNotify(signal);
        } else if (knswidgets__button_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knswidgets__button_connectnotify_callback(this, cbval1);
        } else {
            KNSWidgets__Button::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knswidgets__button_disconnectnotify_isbase) {
            knswidgets__button_disconnectnotify_isbase = false;
            KNSWidgets__Button::disconnectNotify(signal);
        } else if (knswidgets__button_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            knswidgets__button_disconnectnotify_callback(this, cbval1);
        } else {
            KNSWidgets__Button::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (knswidgets__button_updatemicrofocus_isbase) {
            knswidgets__button_updatemicrofocus_isbase = false;
            KNSWidgets__Button::updateMicroFocus();
        } else if (knswidgets__button_updatemicrofocus_callback != nullptr) {
            knswidgets__button_updatemicrofocus_callback();
        } else {
            KNSWidgets__Button::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (knswidgets__button_create_isbase) {
            knswidgets__button_create_isbase = false;
            KNSWidgets__Button::create();
        } else if (knswidgets__button_create_callback != nullptr) {
            knswidgets__button_create_callback();
        } else {
            KNSWidgets__Button::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (knswidgets__button_destroy_isbase) {
            knswidgets__button_destroy_isbase = false;
            KNSWidgets__Button::destroy();
        } else if (knswidgets__button_destroy_callback != nullptr) {
            knswidgets__button_destroy_callback();
        } else {
            KNSWidgets__Button::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (knswidgets__button_focusnextchild_isbase) {
            knswidgets__button_focusnextchild_isbase = false;
            return KNSWidgets__Button::focusNextChild();
        } else if (knswidgets__button_focusnextchild_callback != nullptr) {
            bool callback_ret = knswidgets__button_focusnextchild_callback();
            return callback_ret;
        } else {
            return KNSWidgets__Button::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (knswidgets__button_focuspreviouschild_isbase) {
            knswidgets__button_focuspreviouschild_isbase = false;
            return KNSWidgets__Button::focusPreviousChild();
        } else if (knswidgets__button_focuspreviouschild_callback != nullptr) {
            bool callback_ret = knswidgets__button_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KNSWidgets__Button::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (knswidgets__button_sender_isbase) {
            knswidgets__button_sender_isbase = false;
            return KNSWidgets__Button::sender();
        } else if (knswidgets__button_sender_callback != nullptr) {
            QObject* callback_ret = knswidgets__button_sender_callback();
            return callback_ret;
        } else {
            return KNSWidgets__Button::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (knswidgets__button_sendersignalindex_isbase) {
            knswidgets__button_sendersignalindex_isbase = false;
            return KNSWidgets__Button::senderSignalIndex();
        } else if (knswidgets__button_sendersignalindex_callback != nullptr) {
            int callback_ret = knswidgets__button_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KNSWidgets__Button::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (knswidgets__button_receivers_isbase) {
            knswidgets__button_receivers_isbase = false;
            return KNSWidgets__Button::receivers(signal);
        } else if (knswidgets__button_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = knswidgets__button_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KNSWidgets__Button::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (knswidgets__button_issignalconnected_isbase) {
            knswidgets__button_issignalconnected_isbase = false;
            return KNSWidgets__Button::isSignalConnected(signal);
        } else if (knswidgets__button_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = knswidgets__button_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KNSWidgets__Button::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (knswidgets__button_getdecodedmetricf_isbase) {
            knswidgets__button_getdecodedmetricf_isbase = false;
            return KNSWidgets__Button::getDecodedMetricF(metricA, metricB);
        } else if (knswidgets__button_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = knswidgets__button_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KNSWidgets__Button::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KNSWidgets__Button_Event(KNSWidgets::Button* self, QEvent* e);
    friend bool KNSWidgets__Button_QBaseEvent(KNSWidgets::Button* self, QEvent* e);
    friend void KNSWidgets__Button_PaintEvent(KNSWidgets::Button* self, QPaintEvent* param1);
    friend void KNSWidgets__Button_QBasePaintEvent(KNSWidgets::Button* self, QPaintEvent* param1);
    friend void KNSWidgets__Button_KeyPressEvent(KNSWidgets::Button* self, QKeyEvent* param1);
    friend void KNSWidgets__Button_QBaseKeyPressEvent(KNSWidgets::Button* self, QKeyEvent* param1);
    friend void KNSWidgets__Button_FocusInEvent(KNSWidgets::Button* self, QFocusEvent* param1);
    friend void KNSWidgets__Button_QBaseFocusInEvent(KNSWidgets::Button* self, QFocusEvent* param1);
    friend void KNSWidgets__Button_FocusOutEvent(KNSWidgets::Button* self, QFocusEvent* param1);
    friend void KNSWidgets__Button_QBaseFocusOutEvent(KNSWidgets::Button* self, QFocusEvent* param1);
    friend void KNSWidgets__Button_MouseMoveEvent(KNSWidgets::Button* self, QMouseEvent* param1);
    friend void KNSWidgets__Button_QBaseMouseMoveEvent(KNSWidgets::Button* self, QMouseEvent* param1);
    friend void KNSWidgets__Button_InitStyleOption(const KNSWidgets::Button* self, QStyleOptionButton* option);
    friend void KNSWidgets__Button_QBaseInitStyleOption(const KNSWidgets::Button* self, QStyleOptionButton* option);
    friend bool KNSWidgets__Button_HitButton(const KNSWidgets::Button* self, const QPoint* pos);
    friend bool KNSWidgets__Button_QBaseHitButton(const KNSWidgets::Button* self, const QPoint* pos);
    friend void KNSWidgets__Button_CheckStateSet(KNSWidgets::Button* self);
    friend void KNSWidgets__Button_QBaseCheckStateSet(KNSWidgets::Button* self);
    friend void KNSWidgets__Button_NextCheckState(KNSWidgets::Button* self);
    friend void KNSWidgets__Button_QBaseNextCheckState(KNSWidgets::Button* self);
    friend void KNSWidgets__Button_KeyReleaseEvent(KNSWidgets::Button* self, QKeyEvent* e);
    friend void KNSWidgets__Button_QBaseKeyReleaseEvent(KNSWidgets::Button* self, QKeyEvent* e);
    friend void KNSWidgets__Button_MousePressEvent(KNSWidgets::Button* self, QMouseEvent* e);
    friend void KNSWidgets__Button_QBaseMousePressEvent(KNSWidgets::Button* self, QMouseEvent* e);
    friend void KNSWidgets__Button_MouseReleaseEvent(KNSWidgets::Button* self, QMouseEvent* e);
    friend void KNSWidgets__Button_QBaseMouseReleaseEvent(KNSWidgets::Button* self, QMouseEvent* e);
    friend void KNSWidgets__Button_ChangeEvent(KNSWidgets::Button* self, QEvent* e);
    friend void KNSWidgets__Button_QBaseChangeEvent(KNSWidgets::Button* self, QEvent* e);
    friend void KNSWidgets__Button_TimerEvent(KNSWidgets::Button* self, QTimerEvent* e);
    friend void KNSWidgets__Button_QBaseTimerEvent(KNSWidgets::Button* self, QTimerEvent* e);
    friend void KNSWidgets__Button_MouseDoubleClickEvent(KNSWidgets::Button* self, QMouseEvent* event);
    friend void KNSWidgets__Button_QBaseMouseDoubleClickEvent(KNSWidgets::Button* self, QMouseEvent* event);
    friend void KNSWidgets__Button_WheelEvent(KNSWidgets::Button* self, QWheelEvent* event);
    friend void KNSWidgets__Button_QBaseWheelEvent(KNSWidgets::Button* self, QWheelEvent* event);
    friend void KNSWidgets__Button_EnterEvent(KNSWidgets::Button* self, QEnterEvent* event);
    friend void KNSWidgets__Button_QBaseEnterEvent(KNSWidgets::Button* self, QEnterEvent* event);
    friend void KNSWidgets__Button_LeaveEvent(KNSWidgets::Button* self, QEvent* event);
    friend void KNSWidgets__Button_QBaseLeaveEvent(KNSWidgets::Button* self, QEvent* event);
    friend void KNSWidgets__Button_MoveEvent(KNSWidgets::Button* self, QMoveEvent* event);
    friend void KNSWidgets__Button_QBaseMoveEvent(KNSWidgets::Button* self, QMoveEvent* event);
    friend void KNSWidgets__Button_ResizeEvent(KNSWidgets::Button* self, QResizeEvent* event);
    friend void KNSWidgets__Button_QBaseResizeEvent(KNSWidgets::Button* self, QResizeEvent* event);
    friend void KNSWidgets__Button_CloseEvent(KNSWidgets::Button* self, QCloseEvent* event);
    friend void KNSWidgets__Button_QBaseCloseEvent(KNSWidgets::Button* self, QCloseEvent* event);
    friend void KNSWidgets__Button_ContextMenuEvent(KNSWidgets::Button* self, QContextMenuEvent* event);
    friend void KNSWidgets__Button_QBaseContextMenuEvent(KNSWidgets::Button* self, QContextMenuEvent* event);
    friend void KNSWidgets__Button_TabletEvent(KNSWidgets::Button* self, QTabletEvent* event);
    friend void KNSWidgets__Button_QBaseTabletEvent(KNSWidgets::Button* self, QTabletEvent* event);
    friend void KNSWidgets__Button_ActionEvent(KNSWidgets::Button* self, QActionEvent* event);
    friend void KNSWidgets__Button_QBaseActionEvent(KNSWidgets::Button* self, QActionEvent* event);
    friend void KNSWidgets__Button_DragEnterEvent(KNSWidgets::Button* self, QDragEnterEvent* event);
    friend void KNSWidgets__Button_QBaseDragEnterEvent(KNSWidgets::Button* self, QDragEnterEvent* event);
    friend void KNSWidgets__Button_DragMoveEvent(KNSWidgets::Button* self, QDragMoveEvent* event);
    friend void KNSWidgets__Button_QBaseDragMoveEvent(KNSWidgets::Button* self, QDragMoveEvent* event);
    friend void KNSWidgets__Button_DragLeaveEvent(KNSWidgets::Button* self, QDragLeaveEvent* event);
    friend void KNSWidgets__Button_QBaseDragLeaveEvent(KNSWidgets::Button* self, QDragLeaveEvent* event);
    friend void KNSWidgets__Button_DropEvent(KNSWidgets::Button* self, QDropEvent* event);
    friend void KNSWidgets__Button_QBaseDropEvent(KNSWidgets::Button* self, QDropEvent* event);
    friend void KNSWidgets__Button_ShowEvent(KNSWidgets::Button* self, QShowEvent* event);
    friend void KNSWidgets__Button_QBaseShowEvent(KNSWidgets::Button* self, QShowEvent* event);
    friend void KNSWidgets__Button_HideEvent(KNSWidgets::Button* self, QHideEvent* event);
    friend void KNSWidgets__Button_QBaseHideEvent(KNSWidgets::Button* self, QHideEvent* event);
    friend bool KNSWidgets__Button_NativeEvent(KNSWidgets::Button* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KNSWidgets__Button_QBaseNativeEvent(KNSWidgets::Button* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KNSWidgets__Button_Metric(const KNSWidgets::Button* self, int param1);
    friend int KNSWidgets__Button_QBaseMetric(const KNSWidgets::Button* self, int param1);
    friend void KNSWidgets__Button_InitPainter(const KNSWidgets::Button* self, QPainter* painter);
    friend void KNSWidgets__Button_QBaseInitPainter(const KNSWidgets::Button* self, QPainter* painter);
    friend QPaintDevice* KNSWidgets__Button_Redirected(const KNSWidgets::Button* self, QPoint* offset);
    friend QPaintDevice* KNSWidgets__Button_QBaseRedirected(const KNSWidgets::Button* self, QPoint* offset);
    friend QPainter* KNSWidgets__Button_SharedPainter(const KNSWidgets::Button* self);
    friend QPainter* KNSWidgets__Button_QBaseSharedPainter(const KNSWidgets::Button* self);
    friend void KNSWidgets__Button_InputMethodEvent(KNSWidgets::Button* self, QInputMethodEvent* param1);
    friend void KNSWidgets__Button_QBaseInputMethodEvent(KNSWidgets::Button* self, QInputMethodEvent* param1);
    friend bool KNSWidgets__Button_FocusNextPrevChild(KNSWidgets::Button* self, bool next);
    friend bool KNSWidgets__Button_QBaseFocusNextPrevChild(KNSWidgets::Button* self, bool next);
    friend void KNSWidgets__Button_ChildEvent(KNSWidgets::Button* self, QChildEvent* event);
    friend void KNSWidgets__Button_QBaseChildEvent(KNSWidgets::Button* self, QChildEvent* event);
    friend void KNSWidgets__Button_CustomEvent(KNSWidgets::Button* self, QEvent* event);
    friend void KNSWidgets__Button_QBaseCustomEvent(KNSWidgets::Button* self, QEvent* event);
    friend void KNSWidgets__Button_ConnectNotify(KNSWidgets::Button* self, const QMetaMethod* signal);
    friend void KNSWidgets__Button_QBaseConnectNotify(KNSWidgets::Button* self, const QMetaMethod* signal);
    friend void KNSWidgets__Button_DisconnectNotify(KNSWidgets::Button* self, const QMetaMethod* signal);
    friend void KNSWidgets__Button_QBaseDisconnectNotify(KNSWidgets::Button* self, const QMetaMethod* signal);
    friend void KNSWidgets__Button_UpdateMicroFocus(KNSWidgets::Button* self);
    friend void KNSWidgets__Button_QBaseUpdateMicroFocus(KNSWidgets::Button* self);
    friend void KNSWidgets__Button_Create(KNSWidgets::Button* self);
    friend void KNSWidgets__Button_QBaseCreate(KNSWidgets::Button* self);
    friend void KNSWidgets__Button_Destroy(KNSWidgets::Button* self);
    friend void KNSWidgets__Button_QBaseDestroy(KNSWidgets::Button* self);
    friend bool KNSWidgets__Button_FocusNextChild(KNSWidgets::Button* self);
    friend bool KNSWidgets__Button_QBaseFocusNextChild(KNSWidgets::Button* self);
    friend bool KNSWidgets__Button_FocusPreviousChild(KNSWidgets::Button* self);
    friend bool KNSWidgets__Button_QBaseFocusPreviousChild(KNSWidgets::Button* self);
    friend QObject* KNSWidgets__Button_Sender(const KNSWidgets::Button* self);
    friend QObject* KNSWidgets__Button_QBaseSender(const KNSWidgets::Button* self);
    friend int KNSWidgets__Button_SenderSignalIndex(const KNSWidgets::Button* self);
    friend int KNSWidgets__Button_QBaseSenderSignalIndex(const KNSWidgets::Button* self);
    friend int KNSWidgets__Button_Receivers(const KNSWidgets::Button* self, const char* signal);
    friend int KNSWidgets__Button_QBaseReceivers(const KNSWidgets::Button* self, const char* signal);
    friend bool KNSWidgets__Button_IsSignalConnected(const KNSWidgets::Button* self, const QMetaMethod* signal);
    friend bool KNSWidgets__Button_QBaseIsSignalConnected(const KNSWidgets::Button* self, const QMetaMethod* signal);
    friend double KNSWidgets__Button_GetDecodedMetricF(const KNSWidgets::Button* self, int metricA, int metricB);
    friend double KNSWidgets__Button_QBaseGetDecodedMetricF(const KNSWidgets::Button* self, int metricA, int metricB);
};

#endif
