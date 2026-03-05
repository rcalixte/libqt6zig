#pragma once
#ifndef SRC_EXTRAS_KCOLORPICKERC_LIBVIRTUALKCOLORPICKER_H
#define SRC_EXTRAS_KCOLORPICKERC_LIBVIRTUALKCOLORPICKER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of kColorPicker::KColorPicker so that we can call protected methods
class VirtualkColorPickerKColorPicker final : public kColorPicker::KColorPicker {

  public:
    // Virtual class boolean flag
    bool isVirtualkColorPickerKColorPicker = true;

    // Virtual class public types (including callbacks)
    using kColorPicker__KColorPicker_MetaObject_Callback = QMetaObject* (*)();
    using kColorPicker__KColorPicker_Metacast_Callback = void* (*)(kColorPicker__KColorPicker*, const char*);
    using kColorPicker__KColorPicker_Metacall_Callback = int (*)(kColorPicker__KColorPicker*, int, int, void**);
    using kColorPicker__KColorPicker_SizeHint_Callback = QSize* (*)();
    using kColorPicker__KColorPicker_MinimumSizeHint_Callback = QSize* (*)();
    using kColorPicker__KColorPicker_Event_Callback = bool (*)(kColorPicker__KColorPicker*, QEvent*);
    using kColorPicker__KColorPicker_MousePressEvent_Callback = void (*)(kColorPicker__KColorPicker*, QMouseEvent*);
    using kColorPicker__KColorPicker_MouseReleaseEvent_Callback = void (*)(kColorPicker__KColorPicker*, QMouseEvent*);
    using kColorPicker__KColorPicker_PaintEvent_Callback = void (*)(kColorPicker__KColorPicker*, QPaintEvent*);
    using kColorPicker__KColorPicker_ActionEvent_Callback = void (*)(kColorPicker__KColorPicker*, QActionEvent*);
    using kColorPicker__KColorPicker_EnterEvent_Callback = void (*)(kColorPicker__KColorPicker*, QEnterEvent*);
    using kColorPicker__KColorPicker_LeaveEvent_Callback = void (*)(kColorPicker__KColorPicker*, QEvent*);
    using kColorPicker__KColorPicker_TimerEvent_Callback = void (*)(kColorPicker__KColorPicker*, QTimerEvent*);
    using kColorPicker__KColorPicker_ChangeEvent_Callback = void (*)(kColorPicker__KColorPicker*, QEvent*);
    using kColorPicker__KColorPicker_HitButton_Callback = bool (*)(const kColorPicker__KColorPicker*, QPoint*);
    using kColorPicker__KColorPicker_CheckStateSet_Callback = void (*)();
    using kColorPicker__KColorPicker_NextCheckState_Callback = void (*)();
    using kColorPicker__KColorPicker_InitStyleOption_Callback = void (*)(const kColorPicker__KColorPicker*, QStyleOptionToolButton*);
    using kColorPicker__KColorPicker_KeyPressEvent_Callback = void (*)(kColorPicker__KColorPicker*, QKeyEvent*);
    using kColorPicker__KColorPicker_KeyReleaseEvent_Callback = void (*)(kColorPicker__KColorPicker*, QKeyEvent*);
    using kColorPicker__KColorPicker_MouseMoveEvent_Callback = void (*)(kColorPicker__KColorPicker*, QMouseEvent*);
    using kColorPicker__KColorPicker_FocusInEvent_Callback = void (*)(kColorPicker__KColorPicker*, QFocusEvent*);
    using kColorPicker__KColorPicker_FocusOutEvent_Callback = void (*)(kColorPicker__KColorPicker*, QFocusEvent*);
    using kColorPicker__KColorPicker_DevType_Callback = int (*)();
    using kColorPicker__KColorPicker_SetVisible_Callback = void (*)(kColorPicker__KColorPicker*, bool);
    using kColorPicker__KColorPicker_HeightForWidth_Callback = int (*)(const kColorPicker__KColorPicker*, int);
    using kColorPicker__KColorPicker_HasHeightForWidth_Callback = bool (*)();
    using kColorPicker__KColorPicker_PaintEngine_Callback = QPaintEngine* (*)();
    using kColorPicker__KColorPicker_MouseDoubleClickEvent_Callback = void (*)(kColorPicker__KColorPicker*, QMouseEvent*);
    using kColorPicker__KColorPicker_WheelEvent_Callback = void (*)(kColorPicker__KColorPicker*, QWheelEvent*);
    using kColorPicker__KColorPicker_MoveEvent_Callback = void (*)(kColorPicker__KColorPicker*, QMoveEvent*);
    using kColorPicker__KColorPicker_ResizeEvent_Callback = void (*)(kColorPicker__KColorPicker*, QResizeEvent*);
    using kColorPicker__KColorPicker_CloseEvent_Callback = void (*)(kColorPicker__KColorPicker*, QCloseEvent*);
    using kColorPicker__KColorPicker_ContextMenuEvent_Callback = void (*)(kColorPicker__KColorPicker*, QContextMenuEvent*);
    using kColorPicker__KColorPicker_TabletEvent_Callback = void (*)(kColorPicker__KColorPicker*, QTabletEvent*);
    using kColorPicker__KColorPicker_DragEnterEvent_Callback = void (*)(kColorPicker__KColorPicker*, QDragEnterEvent*);
    using kColorPicker__KColorPicker_DragMoveEvent_Callback = void (*)(kColorPicker__KColorPicker*, QDragMoveEvent*);
    using kColorPicker__KColorPicker_DragLeaveEvent_Callback = void (*)(kColorPicker__KColorPicker*, QDragLeaveEvent*);
    using kColorPicker__KColorPicker_DropEvent_Callback = void (*)(kColorPicker__KColorPicker*, QDropEvent*);
    using kColorPicker__KColorPicker_ShowEvent_Callback = void (*)(kColorPicker__KColorPicker*, QShowEvent*);
    using kColorPicker__KColorPicker_HideEvent_Callback = void (*)(kColorPicker__KColorPicker*, QHideEvent*);
    using kColorPicker__KColorPicker_NativeEvent_Callback = bool (*)(kColorPicker__KColorPicker*, libqt_string, void*, intptr_t*);
    using kColorPicker__KColorPicker_Metric_Callback = int (*)(const kColorPicker__KColorPicker*, int);
    using kColorPicker__KColorPicker_InitPainter_Callback = void (*)(const kColorPicker__KColorPicker*, QPainter*);
    using kColorPicker__KColorPicker_Redirected_Callback = QPaintDevice* (*)(const kColorPicker__KColorPicker*, QPoint*);
    using kColorPicker__KColorPicker_SharedPainter_Callback = QPainter* (*)();
    using kColorPicker__KColorPicker_InputMethodEvent_Callback = void (*)(kColorPicker__KColorPicker*, QInputMethodEvent*);
    using kColorPicker__KColorPicker_InputMethodQuery_Callback = QVariant* (*)(const kColorPicker__KColorPicker*, int);
    using kColorPicker__KColorPicker_FocusNextPrevChild_Callback = bool (*)(kColorPicker__KColorPicker*, bool);
    using kColorPicker__KColorPicker_EventFilter_Callback = bool (*)(kColorPicker__KColorPicker*, QObject*, QEvent*);
    using kColorPicker__KColorPicker_ChildEvent_Callback = void (*)(kColorPicker__KColorPicker*, QChildEvent*);
    using kColorPicker__KColorPicker_CustomEvent_Callback = void (*)(kColorPicker__KColorPicker*, QEvent*);
    using kColorPicker__KColorPicker_ConnectNotify_Callback = void (*)(kColorPicker__KColorPicker*, QMetaMethod*);
    using kColorPicker__KColorPicker_DisconnectNotify_Callback = void (*)(kColorPicker__KColorPicker*, QMetaMethod*);
    using kColorPicker__KColorPicker_UpdateMicroFocus_Callback = void (*)();
    using kColorPicker__KColorPicker_Create_Callback = void (*)();
    using kColorPicker__KColorPicker_Destroy_Callback = void (*)();
    using kColorPicker__KColorPicker_FocusNextChild_Callback = bool (*)();
    using kColorPicker__KColorPicker_FocusPreviousChild_Callback = bool (*)();
    using kColorPicker__KColorPicker_Sender_Callback = QObject* (*)();
    using kColorPicker__KColorPicker_SenderSignalIndex_Callback = int (*)();
    using kColorPicker__KColorPicker_Receivers_Callback = int (*)(const kColorPicker__KColorPicker*, const char*);
    using kColorPicker__KColorPicker_IsSignalConnected_Callback = bool (*)(const kColorPicker__KColorPicker*, QMetaMethod*);
    using kColorPicker__KColorPicker_GetDecodedMetricF_Callback = double (*)(const kColorPicker__KColorPicker*, int, int);

  protected:
    // Instance callback storage
    kColorPicker__KColorPicker_MetaObject_Callback kcolorpicker__kcolorpicker_metaobject_callback = nullptr;
    kColorPicker__KColorPicker_Metacast_Callback kcolorpicker__kcolorpicker_metacast_callback = nullptr;
    kColorPicker__KColorPicker_Metacall_Callback kcolorpicker__kcolorpicker_metacall_callback = nullptr;
    kColorPicker__KColorPicker_SizeHint_Callback kcolorpicker__kcolorpicker_sizehint_callback = nullptr;
    kColorPicker__KColorPicker_MinimumSizeHint_Callback kcolorpicker__kcolorpicker_minimumsizehint_callback = nullptr;
    kColorPicker__KColorPicker_Event_Callback kcolorpicker__kcolorpicker_event_callback = nullptr;
    kColorPicker__KColorPicker_MousePressEvent_Callback kcolorpicker__kcolorpicker_mousepressevent_callback = nullptr;
    kColorPicker__KColorPicker_MouseReleaseEvent_Callback kcolorpicker__kcolorpicker_mousereleaseevent_callback = nullptr;
    kColorPicker__KColorPicker_PaintEvent_Callback kcolorpicker__kcolorpicker_paintevent_callback = nullptr;
    kColorPicker__KColorPicker_ActionEvent_Callback kcolorpicker__kcolorpicker_actionevent_callback = nullptr;
    kColorPicker__KColorPicker_EnterEvent_Callback kcolorpicker__kcolorpicker_enterevent_callback = nullptr;
    kColorPicker__KColorPicker_LeaveEvent_Callback kcolorpicker__kcolorpicker_leaveevent_callback = nullptr;
    kColorPicker__KColorPicker_TimerEvent_Callback kcolorpicker__kcolorpicker_timerevent_callback = nullptr;
    kColorPicker__KColorPicker_ChangeEvent_Callback kcolorpicker__kcolorpicker_changeevent_callback = nullptr;
    kColorPicker__KColorPicker_HitButton_Callback kcolorpicker__kcolorpicker_hitbutton_callback = nullptr;
    kColorPicker__KColorPicker_CheckStateSet_Callback kcolorpicker__kcolorpicker_checkstateset_callback = nullptr;
    kColorPicker__KColorPicker_NextCheckState_Callback kcolorpicker__kcolorpicker_nextcheckstate_callback = nullptr;
    kColorPicker__KColorPicker_InitStyleOption_Callback kcolorpicker__kcolorpicker_initstyleoption_callback = nullptr;
    kColorPicker__KColorPicker_KeyPressEvent_Callback kcolorpicker__kcolorpicker_keypressevent_callback = nullptr;
    kColorPicker__KColorPicker_KeyReleaseEvent_Callback kcolorpicker__kcolorpicker_keyreleaseevent_callback = nullptr;
    kColorPicker__KColorPicker_MouseMoveEvent_Callback kcolorpicker__kcolorpicker_mousemoveevent_callback = nullptr;
    kColorPicker__KColorPicker_FocusInEvent_Callback kcolorpicker__kcolorpicker_focusinevent_callback = nullptr;
    kColorPicker__KColorPicker_FocusOutEvent_Callback kcolorpicker__kcolorpicker_focusoutevent_callback = nullptr;
    kColorPicker__KColorPicker_DevType_Callback kcolorpicker__kcolorpicker_devtype_callback = nullptr;
    kColorPicker__KColorPicker_SetVisible_Callback kcolorpicker__kcolorpicker_setvisible_callback = nullptr;
    kColorPicker__KColorPicker_HeightForWidth_Callback kcolorpicker__kcolorpicker_heightforwidth_callback = nullptr;
    kColorPicker__KColorPicker_HasHeightForWidth_Callback kcolorpicker__kcolorpicker_hasheightforwidth_callback = nullptr;
    kColorPicker__KColorPicker_PaintEngine_Callback kcolorpicker__kcolorpicker_paintengine_callback = nullptr;
    kColorPicker__KColorPicker_MouseDoubleClickEvent_Callback kcolorpicker__kcolorpicker_mousedoubleclickevent_callback = nullptr;
    kColorPicker__KColorPicker_WheelEvent_Callback kcolorpicker__kcolorpicker_wheelevent_callback = nullptr;
    kColorPicker__KColorPicker_MoveEvent_Callback kcolorpicker__kcolorpicker_moveevent_callback = nullptr;
    kColorPicker__KColorPicker_ResizeEvent_Callback kcolorpicker__kcolorpicker_resizeevent_callback = nullptr;
    kColorPicker__KColorPicker_CloseEvent_Callback kcolorpicker__kcolorpicker_closeevent_callback = nullptr;
    kColorPicker__KColorPicker_ContextMenuEvent_Callback kcolorpicker__kcolorpicker_contextmenuevent_callback = nullptr;
    kColorPicker__KColorPicker_TabletEvent_Callback kcolorpicker__kcolorpicker_tabletevent_callback = nullptr;
    kColorPicker__KColorPicker_DragEnterEvent_Callback kcolorpicker__kcolorpicker_dragenterevent_callback = nullptr;
    kColorPicker__KColorPicker_DragMoveEvent_Callback kcolorpicker__kcolorpicker_dragmoveevent_callback = nullptr;
    kColorPicker__KColorPicker_DragLeaveEvent_Callback kcolorpicker__kcolorpicker_dragleaveevent_callback = nullptr;
    kColorPicker__KColorPicker_DropEvent_Callback kcolorpicker__kcolorpicker_dropevent_callback = nullptr;
    kColorPicker__KColorPicker_ShowEvent_Callback kcolorpicker__kcolorpicker_showevent_callback = nullptr;
    kColorPicker__KColorPicker_HideEvent_Callback kcolorpicker__kcolorpicker_hideevent_callback = nullptr;
    kColorPicker__KColorPicker_NativeEvent_Callback kcolorpicker__kcolorpicker_nativeevent_callback = nullptr;
    kColorPicker__KColorPicker_Metric_Callback kcolorpicker__kcolorpicker_metric_callback = nullptr;
    kColorPicker__KColorPicker_InitPainter_Callback kcolorpicker__kcolorpicker_initpainter_callback = nullptr;
    kColorPicker__KColorPicker_Redirected_Callback kcolorpicker__kcolorpicker_redirected_callback = nullptr;
    kColorPicker__KColorPicker_SharedPainter_Callback kcolorpicker__kcolorpicker_sharedpainter_callback = nullptr;
    kColorPicker__KColorPicker_InputMethodEvent_Callback kcolorpicker__kcolorpicker_inputmethodevent_callback = nullptr;
    kColorPicker__KColorPicker_InputMethodQuery_Callback kcolorpicker__kcolorpicker_inputmethodquery_callback = nullptr;
    kColorPicker__KColorPicker_FocusNextPrevChild_Callback kcolorpicker__kcolorpicker_focusnextprevchild_callback = nullptr;
    kColorPicker__KColorPicker_EventFilter_Callback kcolorpicker__kcolorpicker_eventfilter_callback = nullptr;
    kColorPicker__KColorPicker_ChildEvent_Callback kcolorpicker__kcolorpicker_childevent_callback = nullptr;
    kColorPicker__KColorPicker_CustomEvent_Callback kcolorpicker__kcolorpicker_customevent_callback = nullptr;
    kColorPicker__KColorPicker_ConnectNotify_Callback kcolorpicker__kcolorpicker_connectnotify_callback = nullptr;
    kColorPicker__KColorPicker_DisconnectNotify_Callback kcolorpicker__kcolorpicker_disconnectnotify_callback = nullptr;
    kColorPicker__KColorPicker_UpdateMicroFocus_Callback kcolorpicker__kcolorpicker_updatemicrofocus_callback = nullptr;
    kColorPicker__KColorPicker_Create_Callback kcolorpicker__kcolorpicker_create_callback = nullptr;
    kColorPicker__KColorPicker_Destroy_Callback kcolorpicker__kcolorpicker_destroy_callback = nullptr;
    kColorPicker__KColorPicker_FocusNextChild_Callback kcolorpicker__kcolorpicker_focusnextchild_callback = nullptr;
    kColorPicker__KColorPicker_FocusPreviousChild_Callback kcolorpicker__kcolorpicker_focuspreviouschild_callback = nullptr;
    kColorPicker__KColorPicker_Sender_Callback kcolorpicker__kcolorpicker_sender_callback = nullptr;
    kColorPicker__KColorPicker_SenderSignalIndex_Callback kcolorpicker__kcolorpicker_sendersignalindex_callback = nullptr;
    kColorPicker__KColorPicker_Receivers_Callback kcolorpicker__kcolorpicker_receivers_callback = nullptr;
    kColorPicker__KColorPicker_IsSignalConnected_Callback kcolorpicker__kcolorpicker_issignalconnected_callback = nullptr;
    kColorPicker__KColorPicker_GetDecodedMetricF_Callback kcolorpicker__kcolorpicker_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kcolorpicker__kcolorpicker_metaobject_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_metacast_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_metacall_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_sizehint_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_minimumsizehint_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_event_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_mousepressevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_mousereleaseevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_paintevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_actionevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_enterevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_leaveevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_timerevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_changeevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_hitbutton_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_checkstateset_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_nextcheckstate_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_initstyleoption_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_keypressevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_keyreleaseevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_mousemoveevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_focusinevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_focusoutevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_devtype_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_setvisible_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_heightforwidth_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_hasheightforwidth_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_paintengine_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_mousedoubleclickevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_wheelevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_moveevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_resizeevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_closeevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_contextmenuevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_tabletevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_dragenterevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_dragmoveevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_dragleaveevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_dropevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_showevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_hideevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_nativeevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_metric_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_initpainter_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_redirected_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_sharedpainter_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_inputmethodevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_inputmethodquery_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_focusnextprevchild_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_eventfilter_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_childevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_customevent_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_connectnotify_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_disconnectnotify_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_updatemicrofocus_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_create_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_destroy_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_focusnextchild_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_focuspreviouschild_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_sender_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_sendersignalindex_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_receivers_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_issignalconnected_isbase = false;
    mutable bool kcolorpicker__kcolorpicker_getdecodedmetricf_isbase = false;

  public:
    VirtualkColorPickerKColorPicker() : kColorPicker::KColorPicker() {};
    VirtualkColorPickerKColorPicker(bool showAlphaChannel) : kColorPicker::KColorPicker(showAlphaChannel) {};
    VirtualkColorPickerKColorPicker(bool showAlphaChannel, QWidget* parent) : kColorPicker::KColorPicker(showAlphaChannel, parent) {};

    // Callback setters
    inline void setkColorPicker__KColorPicker_MetaObject_Callback(kColorPicker__KColorPicker_MetaObject_Callback cb) { kcolorpicker__kcolorpicker_metaobject_callback = cb; }
    inline void setkColorPicker__KColorPicker_Metacast_Callback(kColorPicker__KColorPicker_Metacast_Callback cb) { kcolorpicker__kcolorpicker_metacast_callback = cb; }
    inline void setkColorPicker__KColorPicker_Metacall_Callback(kColorPicker__KColorPicker_Metacall_Callback cb) { kcolorpicker__kcolorpicker_metacall_callback = cb; }
    inline void setkColorPicker__KColorPicker_SizeHint_Callback(kColorPicker__KColorPicker_SizeHint_Callback cb) { kcolorpicker__kcolorpicker_sizehint_callback = cb; }
    inline void setkColorPicker__KColorPicker_MinimumSizeHint_Callback(kColorPicker__KColorPicker_MinimumSizeHint_Callback cb) { kcolorpicker__kcolorpicker_minimumsizehint_callback = cb; }
    inline void setkColorPicker__KColorPicker_Event_Callback(kColorPicker__KColorPicker_Event_Callback cb) { kcolorpicker__kcolorpicker_event_callback = cb; }
    inline void setkColorPicker__KColorPicker_MousePressEvent_Callback(kColorPicker__KColorPicker_MousePressEvent_Callback cb) { kcolorpicker__kcolorpicker_mousepressevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_MouseReleaseEvent_Callback(kColorPicker__KColorPicker_MouseReleaseEvent_Callback cb) { kcolorpicker__kcolorpicker_mousereleaseevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_PaintEvent_Callback(kColorPicker__KColorPicker_PaintEvent_Callback cb) { kcolorpicker__kcolorpicker_paintevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_ActionEvent_Callback(kColorPicker__KColorPicker_ActionEvent_Callback cb) { kcolorpicker__kcolorpicker_actionevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_EnterEvent_Callback(kColorPicker__KColorPicker_EnterEvent_Callback cb) { kcolorpicker__kcolorpicker_enterevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_LeaveEvent_Callback(kColorPicker__KColorPicker_LeaveEvent_Callback cb) { kcolorpicker__kcolorpicker_leaveevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_TimerEvent_Callback(kColorPicker__KColorPicker_TimerEvent_Callback cb) { kcolorpicker__kcolorpicker_timerevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_ChangeEvent_Callback(kColorPicker__KColorPicker_ChangeEvent_Callback cb) { kcolorpicker__kcolorpicker_changeevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_HitButton_Callback(kColorPicker__KColorPicker_HitButton_Callback cb) { kcolorpicker__kcolorpicker_hitbutton_callback = cb; }
    inline void setkColorPicker__KColorPicker_CheckStateSet_Callback(kColorPicker__KColorPicker_CheckStateSet_Callback cb) { kcolorpicker__kcolorpicker_checkstateset_callback = cb; }
    inline void setkColorPicker__KColorPicker_NextCheckState_Callback(kColorPicker__KColorPicker_NextCheckState_Callback cb) { kcolorpicker__kcolorpicker_nextcheckstate_callback = cb; }
    inline void setkColorPicker__KColorPicker_InitStyleOption_Callback(kColorPicker__KColorPicker_InitStyleOption_Callback cb) { kcolorpicker__kcolorpicker_initstyleoption_callback = cb; }
    inline void setkColorPicker__KColorPicker_KeyPressEvent_Callback(kColorPicker__KColorPicker_KeyPressEvent_Callback cb) { kcolorpicker__kcolorpicker_keypressevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_KeyReleaseEvent_Callback(kColorPicker__KColorPicker_KeyReleaseEvent_Callback cb) { kcolorpicker__kcolorpicker_keyreleaseevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_MouseMoveEvent_Callback(kColorPicker__KColorPicker_MouseMoveEvent_Callback cb) { kcolorpicker__kcolorpicker_mousemoveevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_FocusInEvent_Callback(kColorPicker__KColorPicker_FocusInEvent_Callback cb) { kcolorpicker__kcolorpicker_focusinevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_FocusOutEvent_Callback(kColorPicker__KColorPicker_FocusOutEvent_Callback cb) { kcolorpicker__kcolorpicker_focusoutevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_DevType_Callback(kColorPicker__KColorPicker_DevType_Callback cb) { kcolorpicker__kcolorpicker_devtype_callback = cb; }
    inline void setkColorPicker__KColorPicker_SetVisible_Callback(kColorPicker__KColorPicker_SetVisible_Callback cb) { kcolorpicker__kcolorpicker_setvisible_callback = cb; }
    inline void setkColorPicker__KColorPicker_HeightForWidth_Callback(kColorPicker__KColorPicker_HeightForWidth_Callback cb) { kcolorpicker__kcolorpicker_heightforwidth_callback = cb; }
    inline void setkColorPicker__KColorPicker_HasHeightForWidth_Callback(kColorPicker__KColorPicker_HasHeightForWidth_Callback cb) { kcolorpicker__kcolorpicker_hasheightforwidth_callback = cb; }
    inline void setkColorPicker__KColorPicker_PaintEngine_Callback(kColorPicker__KColorPicker_PaintEngine_Callback cb) { kcolorpicker__kcolorpicker_paintengine_callback = cb; }
    inline void setkColorPicker__KColorPicker_MouseDoubleClickEvent_Callback(kColorPicker__KColorPicker_MouseDoubleClickEvent_Callback cb) { kcolorpicker__kcolorpicker_mousedoubleclickevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_WheelEvent_Callback(kColorPicker__KColorPicker_WheelEvent_Callback cb) { kcolorpicker__kcolorpicker_wheelevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_MoveEvent_Callback(kColorPicker__KColorPicker_MoveEvent_Callback cb) { kcolorpicker__kcolorpicker_moveevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_ResizeEvent_Callback(kColorPicker__KColorPicker_ResizeEvent_Callback cb) { kcolorpicker__kcolorpicker_resizeevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_CloseEvent_Callback(kColorPicker__KColorPicker_CloseEvent_Callback cb) { kcolorpicker__kcolorpicker_closeevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_ContextMenuEvent_Callback(kColorPicker__KColorPicker_ContextMenuEvent_Callback cb) { kcolorpicker__kcolorpicker_contextmenuevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_TabletEvent_Callback(kColorPicker__KColorPicker_TabletEvent_Callback cb) { kcolorpicker__kcolorpicker_tabletevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_DragEnterEvent_Callback(kColorPicker__KColorPicker_DragEnterEvent_Callback cb) { kcolorpicker__kcolorpicker_dragenterevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_DragMoveEvent_Callback(kColorPicker__KColorPicker_DragMoveEvent_Callback cb) { kcolorpicker__kcolorpicker_dragmoveevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_DragLeaveEvent_Callback(kColorPicker__KColorPicker_DragLeaveEvent_Callback cb) { kcolorpicker__kcolorpicker_dragleaveevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_DropEvent_Callback(kColorPicker__KColorPicker_DropEvent_Callback cb) { kcolorpicker__kcolorpicker_dropevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_ShowEvent_Callback(kColorPicker__KColorPicker_ShowEvent_Callback cb) { kcolorpicker__kcolorpicker_showevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_HideEvent_Callback(kColorPicker__KColorPicker_HideEvent_Callback cb) { kcolorpicker__kcolorpicker_hideevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_NativeEvent_Callback(kColorPicker__KColorPicker_NativeEvent_Callback cb) { kcolorpicker__kcolorpicker_nativeevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_Metric_Callback(kColorPicker__KColorPicker_Metric_Callback cb) { kcolorpicker__kcolorpicker_metric_callback = cb; }
    inline void setkColorPicker__KColorPicker_InitPainter_Callback(kColorPicker__KColorPicker_InitPainter_Callback cb) { kcolorpicker__kcolorpicker_initpainter_callback = cb; }
    inline void setkColorPicker__KColorPicker_Redirected_Callback(kColorPicker__KColorPicker_Redirected_Callback cb) { kcolorpicker__kcolorpicker_redirected_callback = cb; }
    inline void setkColorPicker__KColorPicker_SharedPainter_Callback(kColorPicker__KColorPicker_SharedPainter_Callback cb) { kcolorpicker__kcolorpicker_sharedpainter_callback = cb; }
    inline void setkColorPicker__KColorPicker_InputMethodEvent_Callback(kColorPicker__KColorPicker_InputMethodEvent_Callback cb) { kcolorpicker__kcolorpicker_inputmethodevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_InputMethodQuery_Callback(kColorPicker__KColorPicker_InputMethodQuery_Callback cb) { kcolorpicker__kcolorpicker_inputmethodquery_callback = cb; }
    inline void setkColorPicker__KColorPicker_FocusNextPrevChild_Callback(kColorPicker__KColorPicker_FocusNextPrevChild_Callback cb) { kcolorpicker__kcolorpicker_focusnextprevchild_callback = cb; }
    inline void setkColorPicker__KColorPicker_EventFilter_Callback(kColorPicker__KColorPicker_EventFilter_Callback cb) { kcolorpicker__kcolorpicker_eventfilter_callback = cb; }
    inline void setkColorPicker__KColorPicker_ChildEvent_Callback(kColorPicker__KColorPicker_ChildEvent_Callback cb) { kcolorpicker__kcolorpicker_childevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_CustomEvent_Callback(kColorPicker__KColorPicker_CustomEvent_Callback cb) { kcolorpicker__kcolorpicker_customevent_callback = cb; }
    inline void setkColorPicker__KColorPicker_ConnectNotify_Callback(kColorPicker__KColorPicker_ConnectNotify_Callback cb) { kcolorpicker__kcolorpicker_connectnotify_callback = cb; }
    inline void setkColorPicker__KColorPicker_DisconnectNotify_Callback(kColorPicker__KColorPicker_DisconnectNotify_Callback cb) { kcolorpicker__kcolorpicker_disconnectnotify_callback = cb; }
    inline void setkColorPicker__KColorPicker_UpdateMicroFocus_Callback(kColorPicker__KColorPicker_UpdateMicroFocus_Callback cb) { kcolorpicker__kcolorpicker_updatemicrofocus_callback = cb; }
    inline void setkColorPicker__KColorPicker_Create_Callback(kColorPicker__KColorPicker_Create_Callback cb) { kcolorpicker__kcolorpicker_create_callback = cb; }
    inline void setkColorPicker__KColorPicker_Destroy_Callback(kColorPicker__KColorPicker_Destroy_Callback cb) { kcolorpicker__kcolorpicker_destroy_callback = cb; }
    inline void setkColorPicker__KColorPicker_FocusNextChild_Callback(kColorPicker__KColorPicker_FocusNextChild_Callback cb) { kcolorpicker__kcolorpicker_focusnextchild_callback = cb; }
    inline void setkColorPicker__KColorPicker_FocusPreviousChild_Callback(kColorPicker__KColorPicker_FocusPreviousChild_Callback cb) { kcolorpicker__kcolorpicker_focuspreviouschild_callback = cb; }
    inline void setkColorPicker__KColorPicker_Sender_Callback(kColorPicker__KColorPicker_Sender_Callback cb) { kcolorpicker__kcolorpicker_sender_callback = cb; }
    inline void setkColorPicker__KColorPicker_SenderSignalIndex_Callback(kColorPicker__KColorPicker_SenderSignalIndex_Callback cb) { kcolorpicker__kcolorpicker_sendersignalindex_callback = cb; }
    inline void setkColorPicker__KColorPicker_Receivers_Callback(kColorPicker__KColorPicker_Receivers_Callback cb) { kcolorpicker__kcolorpicker_receivers_callback = cb; }
    inline void setkColorPicker__KColorPicker_IsSignalConnected_Callback(kColorPicker__KColorPicker_IsSignalConnected_Callback cb) { kcolorpicker__kcolorpicker_issignalconnected_callback = cb; }
    inline void setkColorPicker__KColorPicker_GetDecodedMetricF_Callback(kColorPicker__KColorPicker_GetDecodedMetricF_Callback cb) { kcolorpicker__kcolorpicker_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setkColorPicker__KColorPicker_MetaObject_IsBase(bool value) const { kcolorpicker__kcolorpicker_metaobject_isbase = value; }
    inline void setkColorPicker__KColorPicker_Metacast_IsBase(bool value) const { kcolorpicker__kcolorpicker_metacast_isbase = value; }
    inline void setkColorPicker__KColorPicker_Metacall_IsBase(bool value) const { kcolorpicker__kcolorpicker_metacall_isbase = value; }
    inline void setkColorPicker__KColorPicker_SizeHint_IsBase(bool value) const { kcolorpicker__kcolorpicker_sizehint_isbase = value; }
    inline void setkColorPicker__KColorPicker_MinimumSizeHint_IsBase(bool value) const { kcolorpicker__kcolorpicker_minimumsizehint_isbase = value; }
    inline void setkColorPicker__KColorPicker_Event_IsBase(bool value) const { kcolorpicker__kcolorpicker_event_isbase = value; }
    inline void setkColorPicker__KColorPicker_MousePressEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_mousepressevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_MouseReleaseEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_mousereleaseevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_PaintEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_paintevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_ActionEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_actionevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_EnterEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_enterevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_LeaveEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_leaveevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_TimerEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_timerevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_ChangeEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_changeevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_HitButton_IsBase(bool value) const { kcolorpicker__kcolorpicker_hitbutton_isbase = value; }
    inline void setkColorPicker__KColorPicker_CheckStateSet_IsBase(bool value) const { kcolorpicker__kcolorpicker_checkstateset_isbase = value; }
    inline void setkColorPicker__KColorPicker_NextCheckState_IsBase(bool value) const { kcolorpicker__kcolorpicker_nextcheckstate_isbase = value; }
    inline void setkColorPicker__KColorPicker_InitStyleOption_IsBase(bool value) const { kcolorpicker__kcolorpicker_initstyleoption_isbase = value; }
    inline void setkColorPicker__KColorPicker_KeyPressEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_keypressevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_KeyReleaseEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_keyreleaseevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_MouseMoveEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_mousemoveevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_FocusInEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_focusinevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_FocusOutEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_focusoutevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_DevType_IsBase(bool value) const { kcolorpicker__kcolorpicker_devtype_isbase = value; }
    inline void setkColorPicker__KColorPicker_SetVisible_IsBase(bool value) const { kcolorpicker__kcolorpicker_setvisible_isbase = value; }
    inline void setkColorPicker__KColorPicker_HeightForWidth_IsBase(bool value) const { kcolorpicker__kcolorpicker_heightforwidth_isbase = value; }
    inline void setkColorPicker__KColorPicker_HasHeightForWidth_IsBase(bool value) const { kcolorpicker__kcolorpicker_hasheightforwidth_isbase = value; }
    inline void setkColorPicker__KColorPicker_PaintEngine_IsBase(bool value) const { kcolorpicker__kcolorpicker_paintengine_isbase = value; }
    inline void setkColorPicker__KColorPicker_MouseDoubleClickEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_mousedoubleclickevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_WheelEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_wheelevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_MoveEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_moveevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_ResizeEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_resizeevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_CloseEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_closeevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_ContextMenuEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_contextmenuevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_TabletEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_tabletevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_DragEnterEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_dragenterevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_DragMoveEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_dragmoveevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_DragLeaveEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_dragleaveevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_DropEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_dropevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_ShowEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_showevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_HideEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_hideevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_NativeEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_nativeevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_Metric_IsBase(bool value) const { kcolorpicker__kcolorpicker_metric_isbase = value; }
    inline void setkColorPicker__KColorPicker_InitPainter_IsBase(bool value) const { kcolorpicker__kcolorpicker_initpainter_isbase = value; }
    inline void setkColorPicker__KColorPicker_Redirected_IsBase(bool value) const { kcolorpicker__kcolorpicker_redirected_isbase = value; }
    inline void setkColorPicker__KColorPicker_SharedPainter_IsBase(bool value) const { kcolorpicker__kcolorpicker_sharedpainter_isbase = value; }
    inline void setkColorPicker__KColorPicker_InputMethodEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_inputmethodevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_InputMethodQuery_IsBase(bool value) const { kcolorpicker__kcolorpicker_inputmethodquery_isbase = value; }
    inline void setkColorPicker__KColorPicker_FocusNextPrevChild_IsBase(bool value) const { kcolorpicker__kcolorpicker_focusnextprevchild_isbase = value; }
    inline void setkColorPicker__KColorPicker_EventFilter_IsBase(bool value) const { kcolorpicker__kcolorpicker_eventfilter_isbase = value; }
    inline void setkColorPicker__KColorPicker_ChildEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_childevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_CustomEvent_IsBase(bool value) const { kcolorpicker__kcolorpicker_customevent_isbase = value; }
    inline void setkColorPicker__KColorPicker_ConnectNotify_IsBase(bool value) const { kcolorpicker__kcolorpicker_connectnotify_isbase = value; }
    inline void setkColorPicker__KColorPicker_DisconnectNotify_IsBase(bool value) const { kcolorpicker__kcolorpicker_disconnectnotify_isbase = value; }
    inline void setkColorPicker__KColorPicker_UpdateMicroFocus_IsBase(bool value) const { kcolorpicker__kcolorpicker_updatemicrofocus_isbase = value; }
    inline void setkColorPicker__KColorPicker_Create_IsBase(bool value) const { kcolorpicker__kcolorpicker_create_isbase = value; }
    inline void setkColorPicker__KColorPicker_Destroy_IsBase(bool value) const { kcolorpicker__kcolorpicker_destroy_isbase = value; }
    inline void setkColorPicker__KColorPicker_FocusNextChild_IsBase(bool value) const { kcolorpicker__kcolorpicker_focusnextchild_isbase = value; }
    inline void setkColorPicker__KColorPicker_FocusPreviousChild_IsBase(bool value) const { kcolorpicker__kcolorpicker_focuspreviouschild_isbase = value; }
    inline void setkColorPicker__KColorPicker_Sender_IsBase(bool value) const { kcolorpicker__kcolorpicker_sender_isbase = value; }
    inline void setkColorPicker__KColorPicker_SenderSignalIndex_IsBase(bool value) const { kcolorpicker__kcolorpicker_sendersignalindex_isbase = value; }
    inline void setkColorPicker__KColorPicker_Receivers_IsBase(bool value) const { kcolorpicker__kcolorpicker_receivers_isbase = value; }
    inline void setkColorPicker__KColorPicker_IsSignalConnected_IsBase(bool value) const { kcolorpicker__kcolorpicker_issignalconnected_isbase = value; }
    inline void setkColorPicker__KColorPicker_GetDecodedMetricF_IsBase(bool value) const { kcolorpicker__kcolorpicker_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcolorpicker__kcolorpicker_metaobject_isbase) {
            kcolorpicker__kcolorpicker_metaobject_isbase = false;
            return kColorPicker__KColorPicker::metaObject();
        }
        auto metaobject_cb = kcolorpicker__kcolorpicker_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return kColorPicker__KColorPicker::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcolorpicker__kcolorpicker_metacast_isbase) {
            kcolorpicker__kcolorpicker_metacast_isbase = false;
            return kColorPicker__KColorPicker::qt_metacast(param1);
        }
        auto metacast_cb = kcolorpicker__kcolorpicker_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return kColorPicker__KColorPicker::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcolorpicker__kcolorpicker_metacall_isbase) {
            kcolorpicker__kcolorpicker_metacall_isbase = false;
            return kColorPicker__KColorPicker::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kcolorpicker__kcolorpicker_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return kColorPicker__KColorPicker::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kcolorpicker__kcolorpicker_sizehint_isbase) {
            kcolorpicker__kcolorpicker_sizehint_isbase = false;
            return kColorPicker__KColorPicker::sizeHint();
        }
        auto sizehint_cb = kcolorpicker__kcolorpicker_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return kColorPicker__KColorPicker::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kcolorpicker__kcolorpicker_minimumsizehint_isbase) {
            kcolorpicker__kcolorpicker_minimumsizehint_isbase = false;
            return kColorPicker__KColorPicker::minimumSizeHint();
        }
        auto minimumsizehint_cb = kcolorpicker__kcolorpicker_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return kColorPicker__KColorPicker::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (kcolorpicker__kcolorpicker_event_isbase) {
            kcolorpicker__kcolorpicker_event_isbase = false;
            return kColorPicker__KColorPicker::event(e);
        }
        auto event_cb = kcolorpicker__kcolorpicker_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return kColorPicker__KColorPicker::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (kcolorpicker__kcolorpicker_mousepressevent_isbase) {
            kcolorpicker__kcolorpicker_mousepressevent_isbase = false;
            kColorPicker__KColorPicker::mousePressEvent(param1);
            return;
        }
        auto mousepressevent_cb = kcolorpicker__kcolorpicker_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousepressevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (kcolorpicker__kcolorpicker_mousereleaseevent_isbase) {
            kcolorpicker__kcolorpicker_mousereleaseevent_isbase = false;
            kColorPicker__KColorPicker::mouseReleaseEvent(param1);
            return;
        }
        auto mousereleaseevent_cb = kcolorpicker__kcolorpicker_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kcolorpicker__kcolorpicker_paintevent_isbase) {
            kcolorpicker__kcolorpicker_paintevent_isbase = false;
            kColorPicker__KColorPicker::paintEvent(param1);
            return;
        }
        auto paintevent_cb = kcolorpicker__kcolorpicker_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;

            paintevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (kcolorpicker__kcolorpicker_actionevent_isbase) {
            kcolorpicker__kcolorpicker_actionevent_isbase = false;
            kColorPicker__KColorPicker::actionEvent(param1);
            return;
        }
        auto actionevent_cb = kcolorpicker__kcolorpicker_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = param1;

            actionevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::actionEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* param1) override {
        if (kcolorpicker__kcolorpicker_enterevent_isbase) {
            kcolorpicker__kcolorpicker_enterevent_isbase = false;
            kColorPicker__KColorPicker::enterEvent(param1);
            return;
        }
        auto enterevent_cb = kcolorpicker__kcolorpicker_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = param1;

            enterevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::enterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (kcolorpicker__kcolorpicker_leaveevent_isbase) {
            kcolorpicker__kcolorpicker_leaveevent_isbase = false;
            kColorPicker__KColorPicker::leaveEvent(param1);
            return;
        }
        auto leaveevent_cb = kcolorpicker__kcolorpicker_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = param1;

            leaveevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::leaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (kcolorpicker__kcolorpicker_timerevent_isbase) {
            kcolorpicker__kcolorpicker_timerevent_isbase = false;
            kColorPicker__KColorPicker::timerEvent(param1);
            return;
        }
        auto timerevent_cb = kcolorpicker__kcolorpicker_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = param1;

            timerevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kcolorpicker__kcolorpicker_changeevent_isbase) {
            kcolorpicker__kcolorpicker_changeevent_isbase = false;
            kColorPicker__KColorPicker::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kcolorpicker__kcolorpicker_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (kcolorpicker__kcolorpicker_hitbutton_isbase) {
            kcolorpicker__kcolorpicker_hitbutton_isbase = false;
            return kColorPicker__KColorPicker::hitButton(pos);
        }
        auto hitbutton_cb = kcolorpicker__kcolorpicker_hitbutton_callback;
        if (hitbutton_cb) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);

            bool callback_ret = hitbutton_cb(this, cbval1);
            return callback_ret;
        }
        return kColorPicker__KColorPicker::hitButton(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (kcolorpicker__kcolorpicker_checkstateset_isbase) {
            kcolorpicker__kcolorpicker_checkstateset_isbase = false;
            kColorPicker__KColorPicker::checkStateSet();
            return;
        }
        auto checkstateset_cb = kcolorpicker__kcolorpicker_checkstateset_callback;
        if (checkstateset_cb) {
            checkstateset_cb();
            return;
        }
        kColorPicker__KColorPicker::checkStateSet();
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (kcolorpicker__kcolorpicker_nextcheckstate_isbase) {
            kcolorpicker__kcolorpicker_nextcheckstate_isbase = false;
            kColorPicker__KColorPicker::nextCheckState();
            return;
        }
        auto nextcheckstate_cb = kcolorpicker__kcolorpicker_nextcheckstate_callback;
        if (nextcheckstate_cb) {
            nextcheckstate_cb();
            return;
        }
        kColorPicker__KColorPicker::nextCheckState();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionToolButton* option) const override {
        if (kcolorpicker__kcolorpicker_initstyleoption_isbase) {
            kcolorpicker__kcolorpicker_initstyleoption_isbase = false;
            kColorPicker__KColorPicker::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = kcolorpicker__kcolorpicker_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionToolButton* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (kcolorpicker__kcolorpicker_keypressevent_isbase) {
            kcolorpicker__kcolorpicker_keypressevent_isbase = false;
            kColorPicker__KColorPicker::keyPressEvent(e);
            return;
        }
        auto keypressevent_cb = kcolorpicker__kcolorpicker_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = e;

            keypressevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (kcolorpicker__kcolorpicker_keyreleaseevent_isbase) {
            kcolorpicker__kcolorpicker_keyreleaseevent_isbase = false;
            kColorPicker__KColorPicker::keyReleaseEvent(e);
            return;
        }
        auto keyreleaseevent_cb = kcolorpicker__kcolorpicker_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = e;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (kcolorpicker__kcolorpicker_mousemoveevent_isbase) {
            kcolorpicker__kcolorpicker_mousemoveevent_isbase = false;
            kColorPicker__KColorPicker::mouseMoveEvent(e);
            return;
        }
        auto mousemoveevent_cb = kcolorpicker__kcolorpicker_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = e;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (kcolorpicker__kcolorpicker_focusinevent_isbase) {
            kcolorpicker__kcolorpicker_focusinevent_isbase = false;
            kColorPicker__KColorPicker::focusInEvent(e);
            return;
        }
        auto focusinevent_cb = kcolorpicker__kcolorpicker_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = e;

            focusinevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (kcolorpicker__kcolorpicker_focusoutevent_isbase) {
            kcolorpicker__kcolorpicker_focusoutevent_isbase = false;
            kColorPicker__KColorPicker::focusOutEvent(e);
            return;
        }
        auto focusoutevent_cb = kcolorpicker__kcolorpicker_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = e;

            focusoutevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kcolorpicker__kcolorpicker_devtype_isbase) {
            kcolorpicker__kcolorpicker_devtype_isbase = false;
            return kColorPicker__KColorPicker::devType();
        }
        auto devtype_cb = kcolorpicker__kcolorpicker_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return kColorPicker__KColorPicker::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kcolorpicker__kcolorpicker_setvisible_isbase) {
            kcolorpicker__kcolorpicker_setvisible_isbase = false;
            kColorPicker__KColorPicker::setVisible(visible);
            return;
        }
        auto setvisible_cb = kcolorpicker__kcolorpicker_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kcolorpicker__kcolorpicker_heightforwidth_isbase) {
            kcolorpicker__kcolorpicker_heightforwidth_isbase = false;
            return kColorPicker__KColorPicker::heightForWidth(param1);
        }
        auto heightforwidth_cb = kcolorpicker__kcolorpicker_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return kColorPicker__KColorPicker::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kcolorpicker__kcolorpicker_hasheightforwidth_isbase) {
            kcolorpicker__kcolorpicker_hasheightforwidth_isbase = false;
            return kColorPicker__KColorPicker::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kcolorpicker__kcolorpicker_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return kColorPicker__KColorPicker::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kcolorpicker__kcolorpicker_paintengine_isbase) {
            kcolorpicker__kcolorpicker_paintengine_isbase = false;
            return kColorPicker__KColorPicker::paintEngine();
        }
        auto paintengine_cb = kcolorpicker__kcolorpicker_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return kColorPicker__KColorPicker::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kcolorpicker__kcolorpicker_mousedoubleclickevent_isbase) {
            kcolorpicker__kcolorpicker_mousedoubleclickevent_isbase = false;
            kColorPicker__KColorPicker::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kcolorpicker__kcolorpicker_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kcolorpicker__kcolorpicker_wheelevent_isbase) {
            kcolorpicker__kcolorpicker_wheelevent_isbase = false;
            kColorPicker__KColorPicker::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kcolorpicker__kcolorpicker_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kcolorpicker__kcolorpicker_moveevent_isbase) {
            kcolorpicker__kcolorpicker_moveevent_isbase = false;
            kColorPicker__KColorPicker::moveEvent(event);
            return;
        }
        auto moveevent_cb = kcolorpicker__kcolorpicker_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kcolorpicker__kcolorpicker_resizeevent_isbase) {
            kcolorpicker__kcolorpicker_resizeevent_isbase = false;
            kColorPicker__KColorPicker::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = kcolorpicker__kcolorpicker_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kcolorpicker__kcolorpicker_closeevent_isbase) {
            kcolorpicker__kcolorpicker_closeevent_isbase = false;
            kColorPicker__KColorPicker::closeEvent(event);
            return;
        }
        auto closeevent_cb = kcolorpicker__kcolorpicker_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kcolorpicker__kcolorpicker_contextmenuevent_isbase) {
            kcolorpicker__kcolorpicker_contextmenuevent_isbase = false;
            kColorPicker__KColorPicker::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = kcolorpicker__kcolorpicker_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kcolorpicker__kcolorpicker_tabletevent_isbase) {
            kcolorpicker__kcolorpicker_tabletevent_isbase = false;
            kColorPicker__KColorPicker::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kcolorpicker__kcolorpicker_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kcolorpicker__kcolorpicker_dragenterevent_isbase) {
            kcolorpicker__kcolorpicker_dragenterevent_isbase = false;
            kColorPicker__KColorPicker::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kcolorpicker__kcolorpicker_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kcolorpicker__kcolorpicker_dragmoveevent_isbase) {
            kcolorpicker__kcolorpicker_dragmoveevent_isbase = false;
            kColorPicker__KColorPicker::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kcolorpicker__kcolorpicker_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kcolorpicker__kcolorpicker_dragleaveevent_isbase) {
            kcolorpicker__kcolorpicker_dragleaveevent_isbase = false;
            kColorPicker__KColorPicker::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kcolorpicker__kcolorpicker_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kcolorpicker__kcolorpicker_dropevent_isbase) {
            kcolorpicker__kcolorpicker_dropevent_isbase = false;
            kColorPicker__KColorPicker::dropEvent(event);
            return;
        }
        auto dropevent_cb = kcolorpicker__kcolorpicker_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kcolorpicker__kcolorpicker_showevent_isbase) {
            kcolorpicker__kcolorpicker_showevent_isbase = false;
            kColorPicker__KColorPicker::showEvent(event);
            return;
        }
        auto showevent_cb = kcolorpicker__kcolorpicker_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kcolorpicker__kcolorpicker_hideevent_isbase) {
            kcolorpicker__kcolorpicker_hideevent_isbase = false;
            kColorPicker__KColorPicker::hideEvent(event);
            return;
        }
        auto hideevent_cb = kcolorpicker__kcolorpicker_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kcolorpicker__kcolorpicker_nativeevent_isbase) {
            kcolorpicker__kcolorpicker_nativeevent_isbase = false;
            return kColorPicker__KColorPicker::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kcolorpicker__kcolorpicker_nativeevent_callback;
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
        return kColorPicker__KColorPicker::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kcolorpicker__kcolorpicker_metric_isbase) {
            kcolorpicker__kcolorpicker_metric_isbase = false;
            return kColorPicker__KColorPicker::metric(param1);
        }
        auto metric_cb = kcolorpicker__kcolorpicker_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return kColorPicker__KColorPicker::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kcolorpicker__kcolorpicker_initpainter_isbase) {
            kcolorpicker__kcolorpicker_initpainter_isbase = false;
            kColorPicker__KColorPicker::initPainter(painter);
            return;
        }
        auto initpainter_cb = kcolorpicker__kcolorpicker_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kcolorpicker__kcolorpicker_redirected_isbase) {
            kcolorpicker__kcolorpicker_redirected_isbase = false;
            return kColorPicker__KColorPicker::redirected(offset);
        }
        auto redirected_cb = kcolorpicker__kcolorpicker_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return kColorPicker__KColorPicker::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kcolorpicker__kcolorpicker_sharedpainter_isbase) {
            kcolorpicker__kcolorpicker_sharedpainter_isbase = false;
            return kColorPicker__KColorPicker::sharedPainter();
        }
        auto sharedpainter_cb = kcolorpicker__kcolorpicker_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return kColorPicker__KColorPicker::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kcolorpicker__kcolorpicker_inputmethodevent_isbase) {
            kcolorpicker__kcolorpicker_inputmethodevent_isbase = false;
            kColorPicker__KColorPicker::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kcolorpicker__kcolorpicker_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kcolorpicker__kcolorpicker_inputmethodquery_isbase) {
            kcolorpicker__kcolorpicker_inputmethodquery_isbase = false;
            return kColorPicker__KColorPicker::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kcolorpicker__kcolorpicker_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return kColorPicker__KColorPicker::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kcolorpicker__kcolorpicker_focusnextprevchild_isbase) {
            kcolorpicker__kcolorpicker_focusnextprevchild_isbase = false;
            return kColorPicker__KColorPicker::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kcolorpicker__kcolorpicker_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return kColorPicker__KColorPicker::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcolorpicker__kcolorpicker_eventfilter_isbase) {
            kcolorpicker__kcolorpicker_eventfilter_isbase = false;
            return kColorPicker__KColorPicker::eventFilter(watched, event);
        }
        auto eventfilter_cb = kcolorpicker__kcolorpicker_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return kColorPicker__KColorPicker::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcolorpicker__kcolorpicker_childevent_isbase) {
            kcolorpicker__kcolorpicker_childevent_isbase = false;
            kColorPicker__KColorPicker::childEvent(event);
            return;
        }
        auto childevent_cb = kcolorpicker__kcolorpicker_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcolorpicker__kcolorpicker_customevent_isbase) {
            kcolorpicker__kcolorpicker_customevent_isbase = false;
            kColorPicker__KColorPicker::customEvent(event);
            return;
        }
        auto customevent_cb = kcolorpicker__kcolorpicker_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcolorpicker__kcolorpicker_connectnotify_isbase) {
            kcolorpicker__kcolorpicker_connectnotify_isbase = false;
            kColorPicker__KColorPicker::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kcolorpicker__kcolorpicker_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcolorpicker__kcolorpicker_disconnectnotify_isbase) {
            kcolorpicker__kcolorpicker_disconnectnotify_isbase = false;
            kColorPicker__KColorPicker::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kcolorpicker__kcolorpicker_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        kColorPicker__KColorPicker::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kcolorpicker__kcolorpicker_updatemicrofocus_isbase) {
            kcolorpicker__kcolorpicker_updatemicrofocus_isbase = false;
            kColorPicker__KColorPicker::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kcolorpicker__kcolorpicker_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        kColorPicker__KColorPicker::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kcolorpicker__kcolorpicker_create_isbase) {
            kcolorpicker__kcolorpicker_create_isbase = false;
            kColorPicker__KColorPicker::create();
            return;
        }
        auto create_cb = kcolorpicker__kcolorpicker_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        kColorPicker__KColorPicker::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kcolorpicker__kcolorpicker_destroy_isbase) {
            kcolorpicker__kcolorpicker_destroy_isbase = false;
            kColorPicker__KColorPicker::destroy();
            return;
        }
        auto destroy_cb = kcolorpicker__kcolorpicker_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        kColorPicker__KColorPicker::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kcolorpicker__kcolorpicker_focusnextchild_isbase) {
            kcolorpicker__kcolorpicker_focusnextchild_isbase = false;
            return kColorPicker__KColorPicker::focusNextChild();
        }
        auto focusnextchild_cb = kcolorpicker__kcolorpicker_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return kColorPicker__KColorPicker::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kcolorpicker__kcolorpicker_focuspreviouschild_isbase) {
            kcolorpicker__kcolorpicker_focuspreviouschild_isbase = false;
            return kColorPicker__KColorPicker::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kcolorpicker__kcolorpicker_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return kColorPicker__KColorPicker::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcolorpicker__kcolorpicker_sender_isbase) {
            kcolorpicker__kcolorpicker_sender_isbase = false;
            return kColorPicker__KColorPicker::sender();
        }
        auto sender_cb = kcolorpicker__kcolorpicker_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return kColorPicker__KColorPicker::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcolorpicker__kcolorpicker_sendersignalindex_isbase) {
            kcolorpicker__kcolorpicker_sendersignalindex_isbase = false;
            return kColorPicker__KColorPicker::senderSignalIndex();
        }
        auto sendersignalindex_cb = kcolorpicker__kcolorpicker_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return kColorPicker__KColorPicker::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcolorpicker__kcolorpicker_receivers_isbase) {
            kcolorpicker__kcolorpicker_receivers_isbase = false;
            return kColorPicker__KColorPicker::receivers(signal);
        }
        auto receivers_cb = kcolorpicker__kcolorpicker_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return kColorPicker__KColorPicker::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcolorpicker__kcolorpicker_issignalconnected_isbase) {
            kcolorpicker__kcolorpicker_issignalconnected_isbase = false;
            return kColorPicker__KColorPicker::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kcolorpicker__kcolorpicker_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return kColorPicker__KColorPicker::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kcolorpicker__kcolorpicker_getdecodedmetricf_isbase) {
            kcolorpicker__kcolorpicker_getdecodedmetricf_isbase = false;
            return kColorPicker__KColorPicker::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kcolorpicker__kcolorpicker_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return kColorPicker__KColorPicker::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool kColorPicker__KColorPicker_Event(kColorPicker::KColorPicker* self, QEvent* e);
    friend bool kColorPicker__KColorPicker_SuperEvent(kColorPicker::KColorPicker* self, QEvent* e);
    friend void kColorPicker__KColorPicker_MousePressEvent(kColorPicker::KColorPicker* self, QMouseEvent* param1);
    friend void kColorPicker__KColorPicker_SuperMousePressEvent(kColorPicker::KColorPicker* self, QMouseEvent* param1);
    friend void kColorPicker__KColorPicker_MouseReleaseEvent(kColorPicker::KColorPicker* self, QMouseEvent* param1);
    friend void kColorPicker__KColorPicker_SuperMouseReleaseEvent(kColorPicker::KColorPicker* self, QMouseEvent* param1);
    friend void kColorPicker__KColorPicker_PaintEvent(kColorPicker::KColorPicker* self, QPaintEvent* param1);
    friend void kColorPicker__KColorPicker_SuperPaintEvent(kColorPicker::KColorPicker* self, QPaintEvent* param1);
    friend void kColorPicker__KColorPicker_ActionEvent(kColorPicker::KColorPicker* self, QActionEvent* param1);
    friend void kColorPicker__KColorPicker_SuperActionEvent(kColorPicker::KColorPicker* self, QActionEvent* param1);
    friend void kColorPicker__KColorPicker_EnterEvent(kColorPicker::KColorPicker* self, QEnterEvent* param1);
    friend void kColorPicker__KColorPicker_SuperEnterEvent(kColorPicker::KColorPicker* self, QEnterEvent* param1);
    friend void kColorPicker__KColorPicker_LeaveEvent(kColorPicker::KColorPicker* self, QEvent* param1);
    friend void kColorPicker__KColorPicker_SuperLeaveEvent(kColorPicker::KColorPicker* self, QEvent* param1);
    friend void kColorPicker__KColorPicker_TimerEvent(kColorPicker::KColorPicker* self, QTimerEvent* param1);
    friend void kColorPicker__KColorPicker_SuperTimerEvent(kColorPicker::KColorPicker* self, QTimerEvent* param1);
    friend void kColorPicker__KColorPicker_ChangeEvent(kColorPicker::KColorPicker* self, QEvent* param1);
    friend void kColorPicker__KColorPicker_SuperChangeEvent(kColorPicker::KColorPicker* self, QEvent* param1);
    friend bool kColorPicker__KColorPicker_HitButton(const kColorPicker::KColorPicker* self, const QPoint* pos);
    friend bool kColorPicker__KColorPicker_SuperHitButton(const kColorPicker::KColorPicker* self, const QPoint* pos);
    friend void kColorPicker__KColorPicker_CheckStateSet(kColorPicker::KColorPicker* self);
    friend void kColorPicker__KColorPicker_SuperCheckStateSet(kColorPicker::KColorPicker* self);
    friend void kColorPicker__KColorPicker_NextCheckState(kColorPicker::KColorPicker* self);
    friend void kColorPicker__KColorPicker_SuperNextCheckState(kColorPicker::KColorPicker* self);
    friend void kColorPicker__KColorPicker_InitStyleOption(const kColorPicker::KColorPicker* self, QStyleOptionToolButton* option);
    friend void kColorPicker__KColorPicker_SuperInitStyleOption(const kColorPicker::KColorPicker* self, QStyleOptionToolButton* option);
    friend void kColorPicker__KColorPicker_KeyPressEvent(kColorPicker::KColorPicker* self, QKeyEvent* e);
    friend void kColorPicker__KColorPicker_SuperKeyPressEvent(kColorPicker::KColorPicker* self, QKeyEvent* e);
    friend void kColorPicker__KColorPicker_KeyReleaseEvent(kColorPicker::KColorPicker* self, QKeyEvent* e);
    friend void kColorPicker__KColorPicker_SuperKeyReleaseEvent(kColorPicker::KColorPicker* self, QKeyEvent* e);
    friend void kColorPicker__KColorPicker_MouseMoveEvent(kColorPicker::KColorPicker* self, QMouseEvent* e);
    friend void kColorPicker__KColorPicker_SuperMouseMoveEvent(kColorPicker::KColorPicker* self, QMouseEvent* e);
    friend void kColorPicker__KColorPicker_FocusInEvent(kColorPicker::KColorPicker* self, QFocusEvent* e);
    friend void kColorPicker__KColorPicker_SuperFocusInEvent(kColorPicker::KColorPicker* self, QFocusEvent* e);
    friend void kColorPicker__KColorPicker_FocusOutEvent(kColorPicker::KColorPicker* self, QFocusEvent* e);
    friend void kColorPicker__KColorPicker_SuperFocusOutEvent(kColorPicker::KColorPicker* self, QFocusEvent* e);
    friend void kColorPicker__KColorPicker_MouseDoubleClickEvent(kColorPicker::KColorPicker* self, QMouseEvent* event);
    friend void kColorPicker__KColorPicker_SuperMouseDoubleClickEvent(kColorPicker::KColorPicker* self, QMouseEvent* event);
    friend void kColorPicker__KColorPicker_WheelEvent(kColorPicker::KColorPicker* self, QWheelEvent* event);
    friend void kColorPicker__KColorPicker_SuperWheelEvent(kColorPicker::KColorPicker* self, QWheelEvent* event);
    friend void kColorPicker__KColorPicker_MoveEvent(kColorPicker::KColorPicker* self, QMoveEvent* event);
    friend void kColorPicker__KColorPicker_SuperMoveEvent(kColorPicker::KColorPicker* self, QMoveEvent* event);
    friend void kColorPicker__KColorPicker_ResizeEvent(kColorPicker::KColorPicker* self, QResizeEvent* event);
    friend void kColorPicker__KColorPicker_SuperResizeEvent(kColorPicker::KColorPicker* self, QResizeEvent* event);
    friend void kColorPicker__KColorPicker_CloseEvent(kColorPicker::KColorPicker* self, QCloseEvent* event);
    friend void kColorPicker__KColorPicker_SuperCloseEvent(kColorPicker::KColorPicker* self, QCloseEvent* event);
    friend void kColorPicker__KColorPicker_ContextMenuEvent(kColorPicker::KColorPicker* self, QContextMenuEvent* event);
    friend void kColorPicker__KColorPicker_SuperContextMenuEvent(kColorPicker::KColorPicker* self, QContextMenuEvent* event);
    friend void kColorPicker__KColorPicker_TabletEvent(kColorPicker::KColorPicker* self, QTabletEvent* event);
    friend void kColorPicker__KColorPicker_SuperTabletEvent(kColorPicker::KColorPicker* self, QTabletEvent* event);
    friend void kColorPicker__KColorPicker_DragEnterEvent(kColorPicker::KColorPicker* self, QDragEnterEvent* event);
    friend void kColorPicker__KColorPicker_SuperDragEnterEvent(kColorPicker::KColorPicker* self, QDragEnterEvent* event);
    friend void kColorPicker__KColorPicker_DragMoveEvent(kColorPicker::KColorPicker* self, QDragMoveEvent* event);
    friend void kColorPicker__KColorPicker_SuperDragMoveEvent(kColorPicker::KColorPicker* self, QDragMoveEvent* event);
    friend void kColorPicker__KColorPicker_DragLeaveEvent(kColorPicker::KColorPicker* self, QDragLeaveEvent* event);
    friend void kColorPicker__KColorPicker_SuperDragLeaveEvent(kColorPicker::KColorPicker* self, QDragLeaveEvent* event);
    friend void kColorPicker__KColorPicker_DropEvent(kColorPicker::KColorPicker* self, QDropEvent* event);
    friend void kColorPicker__KColorPicker_SuperDropEvent(kColorPicker::KColorPicker* self, QDropEvent* event);
    friend void kColorPicker__KColorPicker_ShowEvent(kColorPicker::KColorPicker* self, QShowEvent* event);
    friend void kColorPicker__KColorPicker_SuperShowEvent(kColorPicker::KColorPicker* self, QShowEvent* event);
    friend void kColorPicker__KColorPicker_HideEvent(kColorPicker::KColorPicker* self, QHideEvent* event);
    friend void kColorPicker__KColorPicker_SuperHideEvent(kColorPicker::KColorPicker* self, QHideEvent* event);
    friend bool kColorPicker__KColorPicker_NativeEvent(kColorPicker::KColorPicker* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool kColorPicker__KColorPicker_SuperNativeEvent(kColorPicker::KColorPicker* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int kColorPicker__KColorPicker_Metric(const kColorPicker::KColorPicker* self, int param1);
    friend int kColorPicker__KColorPicker_SuperMetric(const kColorPicker::KColorPicker* self, int param1);
    friend void kColorPicker__KColorPicker_InitPainter(const kColorPicker::KColorPicker* self, QPainter* painter);
    friend void kColorPicker__KColorPicker_SuperInitPainter(const kColorPicker::KColorPicker* self, QPainter* painter);
    friend QPaintDevice* kColorPicker__KColorPicker_Redirected(const kColorPicker::KColorPicker* self, QPoint* offset);
    friend QPaintDevice* kColorPicker__KColorPicker_SuperRedirected(const kColorPicker::KColorPicker* self, QPoint* offset);
    friend QPainter* kColorPicker__KColorPicker_SharedPainter(const kColorPicker::KColorPicker* self);
    friend QPainter* kColorPicker__KColorPicker_SuperSharedPainter(const kColorPicker::KColorPicker* self);
    friend void kColorPicker__KColorPicker_InputMethodEvent(kColorPicker::KColorPicker* self, QInputMethodEvent* param1);
    friend void kColorPicker__KColorPicker_SuperInputMethodEvent(kColorPicker::KColorPicker* self, QInputMethodEvent* param1);
    friend bool kColorPicker__KColorPicker_FocusNextPrevChild(kColorPicker::KColorPicker* self, bool next);
    friend bool kColorPicker__KColorPicker_SuperFocusNextPrevChild(kColorPicker::KColorPicker* self, bool next);
    friend void kColorPicker__KColorPicker_ChildEvent(kColorPicker::KColorPicker* self, QChildEvent* event);
    friend void kColorPicker__KColorPicker_SuperChildEvent(kColorPicker::KColorPicker* self, QChildEvent* event);
    friend void kColorPicker__KColorPicker_CustomEvent(kColorPicker::KColorPicker* self, QEvent* event);
    friend void kColorPicker__KColorPicker_SuperCustomEvent(kColorPicker::KColorPicker* self, QEvent* event);
    friend void kColorPicker__KColorPicker_ConnectNotify(kColorPicker::KColorPicker* self, const QMetaMethod* signal);
    friend void kColorPicker__KColorPicker_SuperConnectNotify(kColorPicker::KColorPicker* self, const QMetaMethod* signal);
    friend void kColorPicker__KColorPicker_DisconnectNotify(kColorPicker::KColorPicker* self, const QMetaMethod* signal);
    friend void kColorPicker__KColorPicker_SuperDisconnectNotify(kColorPicker::KColorPicker* self, const QMetaMethod* signal);
    friend void kColorPicker__KColorPicker_UpdateMicroFocus(kColorPicker::KColorPicker* self);
    friend void kColorPicker__KColorPicker_SuperUpdateMicroFocus(kColorPicker::KColorPicker* self);
    friend void kColorPicker__KColorPicker_Create(kColorPicker::KColorPicker* self);
    friend void kColorPicker__KColorPicker_SuperCreate(kColorPicker::KColorPicker* self);
    friend void kColorPicker__KColorPicker_Destroy(kColorPicker::KColorPicker* self);
    friend void kColorPicker__KColorPicker_SuperDestroy(kColorPicker::KColorPicker* self);
    friend bool kColorPicker__KColorPicker_FocusNextChild(kColorPicker::KColorPicker* self);
    friend bool kColorPicker__KColorPicker_SuperFocusNextChild(kColorPicker::KColorPicker* self);
    friend bool kColorPicker__KColorPicker_FocusPreviousChild(kColorPicker::KColorPicker* self);
    friend bool kColorPicker__KColorPicker_SuperFocusPreviousChild(kColorPicker::KColorPicker* self);
    friend QObject* kColorPicker__KColorPicker_Sender(const kColorPicker::KColorPicker* self);
    friend QObject* kColorPicker__KColorPicker_SuperSender(const kColorPicker::KColorPicker* self);
    friend int kColorPicker__KColorPicker_SenderSignalIndex(const kColorPicker::KColorPicker* self);
    friend int kColorPicker__KColorPicker_SuperSenderSignalIndex(const kColorPicker::KColorPicker* self);
    friend int kColorPicker__KColorPicker_Receivers(const kColorPicker::KColorPicker* self, const char* signal);
    friend int kColorPicker__KColorPicker_SuperReceivers(const kColorPicker::KColorPicker* self, const char* signal);
    friend bool kColorPicker__KColorPicker_IsSignalConnected(const kColorPicker::KColorPicker* self, const QMetaMethod* signal);
    friend bool kColorPicker__KColorPicker_SuperIsSignalConnected(const kColorPicker::KColorPicker* self, const QMetaMethod* signal);
    friend double kColorPicker__KColorPicker_GetDecodedMetricF(const kColorPicker::KColorPicker* self, int metricA, int metricB);
    friend double kColorPicker__KColorPicker_SuperGetDecodedMetricF(const kColorPicker::KColorPicker* self, int metricA, int metricB);
};

#endif
