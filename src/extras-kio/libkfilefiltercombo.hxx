#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKFILEFILTERCOMBO_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKFILEFILTERCOMBO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFileFilterCombo so that we can call protected methods
class VirtualKFileFilterCombo final : public KFileFilterCombo {

  public:
    // Virtual class boolean flag
    bool isVirtualKFileFilterCombo = true;

    // Virtual class public types (including callbacks)
    using KFileFilterCombo_Metacall_Callback = int (*)(KFileFilterCombo*, int, int, void**);
    using KFileFilterCombo_EventFilter_Callback = bool (*)(KFileFilterCombo*, QObject*, QEvent*);
    using KFileFilterCombo_SetAutoCompletion_Callback = void (*)(KFileFilterCombo*, bool);
    using KFileFilterCombo_SetLineEdit_Callback = void (*)(KFileFilterCombo*, QLineEdit*);
    using KFileFilterCombo_MinimumSizeHint_Callback = QSize* (*)();
    using KFileFilterCombo_SetCompletedText_Callback = void (*)(KFileFilterCombo*, libqt_string);
    using KFileFilterCombo_SetCompletedItems_Callback = void (*)(KFileFilterCombo*, libqt_list /* of libqt_string */, bool);
    using KFileFilterCombo_MakeCompletion_Callback = void (*)(KFileFilterCombo*, libqt_string);
    using KFileFilterCombo_SetModel_Callback = void (*)(KFileFilterCombo*, QAbstractItemModel*);
    using KFileFilterCombo_SizeHint_Callback = QSize* (*)();
    using KFileFilterCombo_ShowPopup_Callback = void (*)();
    using KFileFilterCombo_HidePopup_Callback = void (*)();
    using KFileFilterCombo_Event_Callback = bool (*)(KFileFilterCombo*, QEvent*);
    using KFileFilterCombo_InputMethodQuery_Callback = QVariant* (*)(const KFileFilterCombo*, int);
    using KFileFilterCombo_FocusInEvent_Callback = void (*)(KFileFilterCombo*, QFocusEvent*);
    using KFileFilterCombo_FocusOutEvent_Callback = void (*)(KFileFilterCombo*, QFocusEvent*);
    using KFileFilterCombo_ChangeEvent_Callback = void (*)(KFileFilterCombo*, QEvent*);
    using KFileFilterCombo_ResizeEvent_Callback = void (*)(KFileFilterCombo*, QResizeEvent*);
    using KFileFilterCombo_PaintEvent_Callback = void (*)(KFileFilterCombo*, QPaintEvent*);
    using KFileFilterCombo_ShowEvent_Callback = void (*)(KFileFilterCombo*, QShowEvent*);
    using KFileFilterCombo_HideEvent_Callback = void (*)(KFileFilterCombo*, QHideEvent*);
    using KFileFilterCombo_MousePressEvent_Callback = void (*)(KFileFilterCombo*, QMouseEvent*);
    using KFileFilterCombo_MouseReleaseEvent_Callback = void (*)(KFileFilterCombo*, QMouseEvent*);
    using KFileFilterCombo_KeyPressEvent_Callback = void (*)(KFileFilterCombo*, QKeyEvent*);
    using KFileFilterCombo_KeyReleaseEvent_Callback = void (*)(KFileFilterCombo*, QKeyEvent*);
    using KFileFilterCombo_WheelEvent_Callback = void (*)(KFileFilterCombo*, QWheelEvent*);
    using KFileFilterCombo_ContextMenuEvent_Callback = void (*)(KFileFilterCombo*, QContextMenuEvent*);
    using KFileFilterCombo_InputMethodEvent_Callback = void (*)(KFileFilterCombo*, QInputMethodEvent*);
    using KFileFilterCombo_InitStyleOption_Callback = void (*)(const KFileFilterCombo*, QStyleOptionComboBox*);
    using KFileFilterCombo_DevType_Callback = int (*)();
    using KFileFilterCombo_SetVisible_Callback = void (*)(KFileFilterCombo*, bool);
    using KFileFilterCombo_HeightForWidth_Callback = int (*)(const KFileFilterCombo*, int);
    using KFileFilterCombo_HasHeightForWidth_Callback = bool (*)();
    using KFileFilterCombo_PaintEngine_Callback = QPaintEngine* (*)();
    using KFileFilterCombo_MouseDoubleClickEvent_Callback = void (*)(KFileFilterCombo*, QMouseEvent*);
    using KFileFilterCombo_MouseMoveEvent_Callback = void (*)(KFileFilterCombo*, QMouseEvent*);
    using KFileFilterCombo_EnterEvent_Callback = void (*)(KFileFilterCombo*, QEnterEvent*);
    using KFileFilterCombo_LeaveEvent_Callback = void (*)(KFileFilterCombo*, QEvent*);
    using KFileFilterCombo_MoveEvent_Callback = void (*)(KFileFilterCombo*, QMoveEvent*);
    using KFileFilterCombo_CloseEvent_Callback = void (*)(KFileFilterCombo*, QCloseEvent*);
    using KFileFilterCombo_TabletEvent_Callback = void (*)(KFileFilterCombo*, QTabletEvent*);
    using KFileFilterCombo_ActionEvent_Callback = void (*)(KFileFilterCombo*, QActionEvent*);
    using KFileFilterCombo_DragEnterEvent_Callback = void (*)(KFileFilterCombo*, QDragEnterEvent*);
    using KFileFilterCombo_DragMoveEvent_Callback = void (*)(KFileFilterCombo*, QDragMoveEvent*);
    using KFileFilterCombo_DragLeaveEvent_Callback = void (*)(KFileFilterCombo*, QDragLeaveEvent*);
    using KFileFilterCombo_DropEvent_Callback = void (*)(KFileFilterCombo*, QDropEvent*);
    using KFileFilterCombo_NativeEvent_Callback = bool (*)(KFileFilterCombo*, libqt_string, void*, intptr_t*);
    using KFileFilterCombo_Metric_Callback = int (*)(const KFileFilterCombo*, int);
    using KFileFilterCombo_InitPainter_Callback = void (*)(const KFileFilterCombo*, QPainter*);
    using KFileFilterCombo_Redirected_Callback = QPaintDevice* (*)(const KFileFilterCombo*, QPoint*);
    using KFileFilterCombo_SharedPainter_Callback = QPainter* (*)();
    using KFileFilterCombo_FocusNextPrevChild_Callback = bool (*)(KFileFilterCombo*, bool);
    using KFileFilterCombo_TimerEvent_Callback = void (*)(KFileFilterCombo*, QTimerEvent*);
    using KFileFilterCombo_ChildEvent_Callback = void (*)(KFileFilterCombo*, QChildEvent*);
    using KFileFilterCombo_CustomEvent_Callback = void (*)(KFileFilterCombo*, QEvent*);
    using KFileFilterCombo_ConnectNotify_Callback = void (*)(KFileFilterCombo*, QMetaMethod*);
    using KFileFilterCombo_DisconnectNotify_Callback = void (*)(KFileFilterCombo*, QMetaMethod*);
    using KFileFilterCombo_SetCompletionObject_Callback = void (*)(KFileFilterCombo*, KCompletion*, bool);
    using KFileFilterCombo_SetHandleSignals_Callback = void (*)(KFileFilterCombo*, bool);
    using KFileFilterCombo_SetCompletionMode_Callback = void (*)(KFileFilterCombo*, int);
    using KFileFilterCombo_VirtualHook_Callback = void (*)(KFileFilterCombo*, int, void*);
    using KFileFilterCombo_UpdateMicroFocus_Callback = void (*)();
    using KFileFilterCombo_Create_Callback = void (*)();
    using KFileFilterCombo_Destroy_Callback = void (*)();
    using KFileFilterCombo_FocusNextChild_Callback = bool (*)();
    using KFileFilterCombo_FocusPreviousChild_Callback = bool (*)();
    using KFileFilterCombo_Sender_Callback = QObject* (*)();
    using KFileFilterCombo_SenderSignalIndex_Callback = int (*)();
    using KFileFilterCombo_Receivers_Callback = int (*)(const KFileFilterCombo*, const char*);
    using KFileFilterCombo_IsSignalConnected_Callback = bool (*)(const KFileFilterCombo*, QMetaMethod*);
    using KFileFilterCombo_GetDecodedMetricF_Callback = double (*)(const KFileFilterCombo*, int, int);
    using KFileFilterCombo_KeyBindingMap_Callback = libqt_map /* of int to libqt_list  of QKeySequence*  */ (*)();
    using KFileFilterCombo_SetKeyBindingMap_Callback = void (*)(KFileFilterCombo*, libqt_map /* of int to libqt_list  of QKeySequence*  */);
    using KFileFilterCombo_SetDelegate_Callback = void (*)(KFileFilterCombo*, KCompletionBase*);
    using KFileFilterCombo_Delegate_Callback = KCompletionBase* (*)();

  protected:
    // Instance callback storage
    KFileFilterCombo_Metacall_Callback kfilefiltercombo_metacall_callback = nullptr;
    KFileFilterCombo_EventFilter_Callback kfilefiltercombo_eventfilter_callback = nullptr;
    KFileFilterCombo_SetAutoCompletion_Callback kfilefiltercombo_setautocompletion_callback = nullptr;
    KFileFilterCombo_SetLineEdit_Callback kfilefiltercombo_setlineedit_callback = nullptr;
    KFileFilterCombo_MinimumSizeHint_Callback kfilefiltercombo_minimumsizehint_callback = nullptr;
    KFileFilterCombo_SetCompletedText_Callback kfilefiltercombo_setcompletedtext_callback = nullptr;
    KFileFilterCombo_SetCompletedItems_Callback kfilefiltercombo_setcompleteditems_callback = nullptr;
    KFileFilterCombo_MakeCompletion_Callback kfilefiltercombo_makecompletion_callback = nullptr;
    KFileFilterCombo_SetModel_Callback kfilefiltercombo_setmodel_callback = nullptr;
    KFileFilterCombo_SizeHint_Callback kfilefiltercombo_sizehint_callback = nullptr;
    KFileFilterCombo_ShowPopup_Callback kfilefiltercombo_showpopup_callback = nullptr;
    KFileFilterCombo_HidePopup_Callback kfilefiltercombo_hidepopup_callback = nullptr;
    KFileFilterCombo_Event_Callback kfilefiltercombo_event_callback = nullptr;
    KFileFilterCombo_InputMethodQuery_Callback kfilefiltercombo_inputmethodquery_callback = nullptr;
    KFileFilterCombo_FocusInEvent_Callback kfilefiltercombo_focusinevent_callback = nullptr;
    KFileFilterCombo_FocusOutEvent_Callback kfilefiltercombo_focusoutevent_callback = nullptr;
    KFileFilterCombo_ChangeEvent_Callback kfilefiltercombo_changeevent_callback = nullptr;
    KFileFilterCombo_ResizeEvent_Callback kfilefiltercombo_resizeevent_callback = nullptr;
    KFileFilterCombo_PaintEvent_Callback kfilefiltercombo_paintevent_callback = nullptr;
    KFileFilterCombo_ShowEvent_Callback kfilefiltercombo_showevent_callback = nullptr;
    KFileFilterCombo_HideEvent_Callback kfilefiltercombo_hideevent_callback = nullptr;
    KFileFilterCombo_MousePressEvent_Callback kfilefiltercombo_mousepressevent_callback = nullptr;
    KFileFilterCombo_MouseReleaseEvent_Callback kfilefiltercombo_mousereleaseevent_callback = nullptr;
    KFileFilterCombo_KeyPressEvent_Callback kfilefiltercombo_keypressevent_callback = nullptr;
    KFileFilterCombo_KeyReleaseEvent_Callback kfilefiltercombo_keyreleaseevent_callback = nullptr;
    KFileFilterCombo_WheelEvent_Callback kfilefiltercombo_wheelevent_callback = nullptr;
    KFileFilterCombo_ContextMenuEvent_Callback kfilefiltercombo_contextmenuevent_callback = nullptr;
    KFileFilterCombo_InputMethodEvent_Callback kfilefiltercombo_inputmethodevent_callback = nullptr;
    KFileFilterCombo_InitStyleOption_Callback kfilefiltercombo_initstyleoption_callback = nullptr;
    KFileFilterCombo_DevType_Callback kfilefiltercombo_devtype_callback = nullptr;
    KFileFilterCombo_SetVisible_Callback kfilefiltercombo_setvisible_callback = nullptr;
    KFileFilterCombo_HeightForWidth_Callback kfilefiltercombo_heightforwidth_callback = nullptr;
    KFileFilterCombo_HasHeightForWidth_Callback kfilefiltercombo_hasheightforwidth_callback = nullptr;
    KFileFilterCombo_PaintEngine_Callback kfilefiltercombo_paintengine_callback = nullptr;
    KFileFilterCombo_MouseDoubleClickEvent_Callback kfilefiltercombo_mousedoubleclickevent_callback = nullptr;
    KFileFilterCombo_MouseMoveEvent_Callback kfilefiltercombo_mousemoveevent_callback = nullptr;
    KFileFilterCombo_EnterEvent_Callback kfilefiltercombo_enterevent_callback = nullptr;
    KFileFilterCombo_LeaveEvent_Callback kfilefiltercombo_leaveevent_callback = nullptr;
    KFileFilterCombo_MoveEvent_Callback kfilefiltercombo_moveevent_callback = nullptr;
    KFileFilterCombo_CloseEvent_Callback kfilefiltercombo_closeevent_callback = nullptr;
    KFileFilterCombo_TabletEvent_Callback kfilefiltercombo_tabletevent_callback = nullptr;
    KFileFilterCombo_ActionEvent_Callback kfilefiltercombo_actionevent_callback = nullptr;
    KFileFilterCombo_DragEnterEvent_Callback kfilefiltercombo_dragenterevent_callback = nullptr;
    KFileFilterCombo_DragMoveEvent_Callback kfilefiltercombo_dragmoveevent_callback = nullptr;
    KFileFilterCombo_DragLeaveEvent_Callback kfilefiltercombo_dragleaveevent_callback = nullptr;
    KFileFilterCombo_DropEvent_Callback kfilefiltercombo_dropevent_callback = nullptr;
    KFileFilterCombo_NativeEvent_Callback kfilefiltercombo_nativeevent_callback = nullptr;
    KFileFilterCombo_Metric_Callback kfilefiltercombo_metric_callback = nullptr;
    KFileFilterCombo_InitPainter_Callback kfilefiltercombo_initpainter_callback = nullptr;
    KFileFilterCombo_Redirected_Callback kfilefiltercombo_redirected_callback = nullptr;
    KFileFilterCombo_SharedPainter_Callback kfilefiltercombo_sharedpainter_callback = nullptr;
    KFileFilterCombo_FocusNextPrevChild_Callback kfilefiltercombo_focusnextprevchild_callback = nullptr;
    KFileFilterCombo_TimerEvent_Callback kfilefiltercombo_timerevent_callback = nullptr;
    KFileFilterCombo_ChildEvent_Callback kfilefiltercombo_childevent_callback = nullptr;
    KFileFilterCombo_CustomEvent_Callback kfilefiltercombo_customevent_callback = nullptr;
    KFileFilterCombo_ConnectNotify_Callback kfilefiltercombo_connectnotify_callback = nullptr;
    KFileFilterCombo_DisconnectNotify_Callback kfilefiltercombo_disconnectnotify_callback = nullptr;
    KFileFilterCombo_SetCompletionObject_Callback kfilefiltercombo_setcompletionobject_callback = nullptr;
    KFileFilterCombo_SetHandleSignals_Callback kfilefiltercombo_sethandlesignals_callback = nullptr;
    KFileFilterCombo_SetCompletionMode_Callback kfilefiltercombo_setcompletionmode_callback = nullptr;
    KFileFilterCombo_VirtualHook_Callback kfilefiltercombo_virtualhook_callback = nullptr;
    KFileFilterCombo_UpdateMicroFocus_Callback kfilefiltercombo_updatemicrofocus_callback = nullptr;
    KFileFilterCombo_Create_Callback kfilefiltercombo_create_callback = nullptr;
    KFileFilterCombo_Destroy_Callback kfilefiltercombo_destroy_callback = nullptr;
    KFileFilterCombo_FocusNextChild_Callback kfilefiltercombo_focusnextchild_callback = nullptr;
    KFileFilterCombo_FocusPreviousChild_Callback kfilefiltercombo_focuspreviouschild_callback = nullptr;
    KFileFilterCombo_Sender_Callback kfilefiltercombo_sender_callback = nullptr;
    KFileFilterCombo_SenderSignalIndex_Callback kfilefiltercombo_sendersignalindex_callback = nullptr;
    KFileFilterCombo_Receivers_Callback kfilefiltercombo_receivers_callback = nullptr;
    KFileFilterCombo_IsSignalConnected_Callback kfilefiltercombo_issignalconnected_callback = nullptr;
    KFileFilterCombo_GetDecodedMetricF_Callback kfilefiltercombo_getdecodedmetricf_callback = nullptr;
    KFileFilterCombo_KeyBindingMap_Callback kfilefiltercombo_keybindingmap_callback = nullptr;
    KFileFilterCombo_SetKeyBindingMap_Callback kfilefiltercombo_setkeybindingmap_callback = nullptr;
    KFileFilterCombo_SetDelegate_Callback kfilefiltercombo_setdelegate_callback = nullptr;
    KFileFilterCombo_Delegate_Callback kfilefiltercombo_delegate_callback = nullptr;

    // Instance base flags
    mutable bool kfilefiltercombo_metacall_isbase = false;
    mutable bool kfilefiltercombo_eventfilter_isbase = false;
    mutable bool kfilefiltercombo_setautocompletion_isbase = false;
    mutable bool kfilefiltercombo_setlineedit_isbase = false;
    mutable bool kfilefiltercombo_minimumsizehint_isbase = false;
    mutable bool kfilefiltercombo_setcompletedtext_isbase = false;
    mutable bool kfilefiltercombo_setcompleteditems_isbase = false;
    mutable bool kfilefiltercombo_makecompletion_isbase = false;
    mutable bool kfilefiltercombo_setmodel_isbase = false;
    mutable bool kfilefiltercombo_sizehint_isbase = false;
    mutable bool kfilefiltercombo_showpopup_isbase = false;
    mutable bool kfilefiltercombo_hidepopup_isbase = false;
    mutable bool kfilefiltercombo_event_isbase = false;
    mutable bool kfilefiltercombo_inputmethodquery_isbase = false;
    mutable bool kfilefiltercombo_focusinevent_isbase = false;
    mutable bool kfilefiltercombo_focusoutevent_isbase = false;
    mutable bool kfilefiltercombo_changeevent_isbase = false;
    mutable bool kfilefiltercombo_resizeevent_isbase = false;
    mutable bool kfilefiltercombo_paintevent_isbase = false;
    mutable bool kfilefiltercombo_showevent_isbase = false;
    mutable bool kfilefiltercombo_hideevent_isbase = false;
    mutable bool kfilefiltercombo_mousepressevent_isbase = false;
    mutable bool kfilefiltercombo_mousereleaseevent_isbase = false;
    mutable bool kfilefiltercombo_keypressevent_isbase = false;
    mutable bool kfilefiltercombo_keyreleaseevent_isbase = false;
    mutable bool kfilefiltercombo_wheelevent_isbase = false;
    mutable bool kfilefiltercombo_contextmenuevent_isbase = false;
    mutable bool kfilefiltercombo_inputmethodevent_isbase = false;
    mutable bool kfilefiltercombo_initstyleoption_isbase = false;
    mutable bool kfilefiltercombo_devtype_isbase = false;
    mutable bool kfilefiltercombo_setvisible_isbase = false;
    mutable bool kfilefiltercombo_heightforwidth_isbase = false;
    mutable bool kfilefiltercombo_hasheightforwidth_isbase = false;
    mutable bool kfilefiltercombo_paintengine_isbase = false;
    mutable bool kfilefiltercombo_mousedoubleclickevent_isbase = false;
    mutable bool kfilefiltercombo_mousemoveevent_isbase = false;
    mutable bool kfilefiltercombo_enterevent_isbase = false;
    mutable bool kfilefiltercombo_leaveevent_isbase = false;
    mutable bool kfilefiltercombo_moveevent_isbase = false;
    mutable bool kfilefiltercombo_closeevent_isbase = false;
    mutable bool kfilefiltercombo_tabletevent_isbase = false;
    mutable bool kfilefiltercombo_actionevent_isbase = false;
    mutable bool kfilefiltercombo_dragenterevent_isbase = false;
    mutable bool kfilefiltercombo_dragmoveevent_isbase = false;
    mutable bool kfilefiltercombo_dragleaveevent_isbase = false;
    mutable bool kfilefiltercombo_dropevent_isbase = false;
    mutable bool kfilefiltercombo_nativeevent_isbase = false;
    mutable bool kfilefiltercombo_metric_isbase = false;
    mutable bool kfilefiltercombo_initpainter_isbase = false;
    mutable bool kfilefiltercombo_redirected_isbase = false;
    mutable bool kfilefiltercombo_sharedpainter_isbase = false;
    mutable bool kfilefiltercombo_focusnextprevchild_isbase = false;
    mutable bool kfilefiltercombo_timerevent_isbase = false;
    mutable bool kfilefiltercombo_childevent_isbase = false;
    mutable bool kfilefiltercombo_customevent_isbase = false;
    mutable bool kfilefiltercombo_connectnotify_isbase = false;
    mutable bool kfilefiltercombo_disconnectnotify_isbase = false;
    mutable bool kfilefiltercombo_setcompletionobject_isbase = false;
    mutable bool kfilefiltercombo_sethandlesignals_isbase = false;
    mutable bool kfilefiltercombo_setcompletionmode_isbase = false;
    mutable bool kfilefiltercombo_virtualhook_isbase = false;
    mutable bool kfilefiltercombo_updatemicrofocus_isbase = false;
    mutable bool kfilefiltercombo_create_isbase = false;
    mutable bool kfilefiltercombo_destroy_isbase = false;
    mutable bool kfilefiltercombo_focusnextchild_isbase = false;
    mutable bool kfilefiltercombo_focuspreviouschild_isbase = false;
    mutable bool kfilefiltercombo_sender_isbase = false;
    mutable bool kfilefiltercombo_sendersignalindex_isbase = false;
    mutable bool kfilefiltercombo_receivers_isbase = false;
    mutable bool kfilefiltercombo_issignalconnected_isbase = false;
    mutable bool kfilefiltercombo_getdecodedmetricf_isbase = false;
    mutable bool kfilefiltercombo_keybindingmap_isbase = false;
    mutable bool kfilefiltercombo_setkeybindingmap_isbase = false;
    mutable bool kfilefiltercombo_setdelegate_isbase = false;
    mutable bool kfilefiltercombo_delegate_isbase = false;

  public:
    VirtualKFileFilterCombo(QWidget* parent) : KFileFilterCombo(parent) {};
    VirtualKFileFilterCombo() : KFileFilterCombo() {};

    ~VirtualKFileFilterCombo() {
        kfilefiltercombo_metacall_callback = nullptr;
        kfilefiltercombo_eventfilter_callback = nullptr;
        kfilefiltercombo_setautocompletion_callback = nullptr;
        kfilefiltercombo_setlineedit_callback = nullptr;
        kfilefiltercombo_minimumsizehint_callback = nullptr;
        kfilefiltercombo_setcompletedtext_callback = nullptr;
        kfilefiltercombo_setcompleteditems_callback = nullptr;
        kfilefiltercombo_makecompletion_callback = nullptr;
        kfilefiltercombo_setmodel_callback = nullptr;
        kfilefiltercombo_sizehint_callback = nullptr;
        kfilefiltercombo_showpopup_callback = nullptr;
        kfilefiltercombo_hidepopup_callback = nullptr;
        kfilefiltercombo_event_callback = nullptr;
        kfilefiltercombo_inputmethodquery_callback = nullptr;
        kfilefiltercombo_focusinevent_callback = nullptr;
        kfilefiltercombo_focusoutevent_callback = nullptr;
        kfilefiltercombo_changeevent_callback = nullptr;
        kfilefiltercombo_resizeevent_callback = nullptr;
        kfilefiltercombo_paintevent_callback = nullptr;
        kfilefiltercombo_showevent_callback = nullptr;
        kfilefiltercombo_hideevent_callback = nullptr;
        kfilefiltercombo_mousepressevent_callback = nullptr;
        kfilefiltercombo_mousereleaseevent_callback = nullptr;
        kfilefiltercombo_keypressevent_callback = nullptr;
        kfilefiltercombo_keyreleaseevent_callback = nullptr;
        kfilefiltercombo_wheelevent_callback = nullptr;
        kfilefiltercombo_contextmenuevent_callback = nullptr;
        kfilefiltercombo_inputmethodevent_callback = nullptr;
        kfilefiltercombo_initstyleoption_callback = nullptr;
        kfilefiltercombo_devtype_callback = nullptr;
        kfilefiltercombo_setvisible_callback = nullptr;
        kfilefiltercombo_heightforwidth_callback = nullptr;
        kfilefiltercombo_hasheightforwidth_callback = nullptr;
        kfilefiltercombo_paintengine_callback = nullptr;
        kfilefiltercombo_mousedoubleclickevent_callback = nullptr;
        kfilefiltercombo_mousemoveevent_callback = nullptr;
        kfilefiltercombo_enterevent_callback = nullptr;
        kfilefiltercombo_leaveevent_callback = nullptr;
        kfilefiltercombo_moveevent_callback = nullptr;
        kfilefiltercombo_closeevent_callback = nullptr;
        kfilefiltercombo_tabletevent_callback = nullptr;
        kfilefiltercombo_actionevent_callback = nullptr;
        kfilefiltercombo_dragenterevent_callback = nullptr;
        kfilefiltercombo_dragmoveevent_callback = nullptr;
        kfilefiltercombo_dragleaveevent_callback = nullptr;
        kfilefiltercombo_dropevent_callback = nullptr;
        kfilefiltercombo_nativeevent_callback = nullptr;
        kfilefiltercombo_metric_callback = nullptr;
        kfilefiltercombo_initpainter_callback = nullptr;
        kfilefiltercombo_redirected_callback = nullptr;
        kfilefiltercombo_sharedpainter_callback = nullptr;
        kfilefiltercombo_focusnextprevchild_callback = nullptr;
        kfilefiltercombo_timerevent_callback = nullptr;
        kfilefiltercombo_childevent_callback = nullptr;
        kfilefiltercombo_customevent_callback = nullptr;
        kfilefiltercombo_connectnotify_callback = nullptr;
        kfilefiltercombo_disconnectnotify_callback = nullptr;
        kfilefiltercombo_setcompletionobject_callback = nullptr;
        kfilefiltercombo_sethandlesignals_callback = nullptr;
        kfilefiltercombo_setcompletionmode_callback = nullptr;
        kfilefiltercombo_virtualhook_callback = nullptr;
        kfilefiltercombo_updatemicrofocus_callback = nullptr;
        kfilefiltercombo_create_callback = nullptr;
        kfilefiltercombo_destroy_callback = nullptr;
        kfilefiltercombo_focusnextchild_callback = nullptr;
        kfilefiltercombo_focuspreviouschild_callback = nullptr;
        kfilefiltercombo_sender_callback = nullptr;
        kfilefiltercombo_sendersignalindex_callback = nullptr;
        kfilefiltercombo_receivers_callback = nullptr;
        kfilefiltercombo_issignalconnected_callback = nullptr;
        kfilefiltercombo_getdecodedmetricf_callback = nullptr;
        kfilefiltercombo_keybindingmap_callback = nullptr;
        kfilefiltercombo_setkeybindingmap_callback = nullptr;
        kfilefiltercombo_setdelegate_callback = nullptr;
        kfilefiltercombo_delegate_callback = nullptr;
    }

    // Callback setters
    inline void setKFileFilterCombo_Metacall_Callback(KFileFilterCombo_Metacall_Callback cb) { kfilefiltercombo_metacall_callback = cb; }
    inline void setKFileFilterCombo_EventFilter_Callback(KFileFilterCombo_EventFilter_Callback cb) { kfilefiltercombo_eventfilter_callback = cb; }
    inline void setKFileFilterCombo_SetAutoCompletion_Callback(KFileFilterCombo_SetAutoCompletion_Callback cb) { kfilefiltercombo_setautocompletion_callback = cb; }
    inline void setKFileFilterCombo_SetLineEdit_Callback(KFileFilterCombo_SetLineEdit_Callback cb) { kfilefiltercombo_setlineedit_callback = cb; }
    inline void setKFileFilterCombo_MinimumSizeHint_Callback(KFileFilterCombo_MinimumSizeHint_Callback cb) { kfilefiltercombo_minimumsizehint_callback = cb; }
    inline void setKFileFilterCombo_SetCompletedText_Callback(KFileFilterCombo_SetCompletedText_Callback cb) { kfilefiltercombo_setcompletedtext_callback = cb; }
    inline void setKFileFilterCombo_SetCompletedItems_Callback(KFileFilterCombo_SetCompletedItems_Callback cb) { kfilefiltercombo_setcompleteditems_callback = cb; }
    inline void setKFileFilterCombo_MakeCompletion_Callback(KFileFilterCombo_MakeCompletion_Callback cb) { kfilefiltercombo_makecompletion_callback = cb; }
    inline void setKFileFilterCombo_SetModel_Callback(KFileFilterCombo_SetModel_Callback cb) { kfilefiltercombo_setmodel_callback = cb; }
    inline void setKFileFilterCombo_SizeHint_Callback(KFileFilterCombo_SizeHint_Callback cb) { kfilefiltercombo_sizehint_callback = cb; }
    inline void setKFileFilterCombo_ShowPopup_Callback(KFileFilterCombo_ShowPopup_Callback cb) { kfilefiltercombo_showpopup_callback = cb; }
    inline void setKFileFilterCombo_HidePopup_Callback(KFileFilterCombo_HidePopup_Callback cb) { kfilefiltercombo_hidepopup_callback = cb; }
    inline void setKFileFilterCombo_Event_Callback(KFileFilterCombo_Event_Callback cb) { kfilefiltercombo_event_callback = cb; }
    inline void setKFileFilterCombo_InputMethodQuery_Callback(KFileFilterCombo_InputMethodQuery_Callback cb) { kfilefiltercombo_inputmethodquery_callback = cb; }
    inline void setKFileFilterCombo_FocusInEvent_Callback(KFileFilterCombo_FocusInEvent_Callback cb) { kfilefiltercombo_focusinevent_callback = cb; }
    inline void setKFileFilterCombo_FocusOutEvent_Callback(KFileFilterCombo_FocusOutEvent_Callback cb) { kfilefiltercombo_focusoutevent_callback = cb; }
    inline void setKFileFilterCombo_ChangeEvent_Callback(KFileFilterCombo_ChangeEvent_Callback cb) { kfilefiltercombo_changeevent_callback = cb; }
    inline void setKFileFilterCombo_ResizeEvent_Callback(KFileFilterCombo_ResizeEvent_Callback cb) { kfilefiltercombo_resizeevent_callback = cb; }
    inline void setKFileFilterCombo_PaintEvent_Callback(KFileFilterCombo_PaintEvent_Callback cb) { kfilefiltercombo_paintevent_callback = cb; }
    inline void setKFileFilterCombo_ShowEvent_Callback(KFileFilterCombo_ShowEvent_Callback cb) { kfilefiltercombo_showevent_callback = cb; }
    inline void setKFileFilterCombo_HideEvent_Callback(KFileFilterCombo_HideEvent_Callback cb) { kfilefiltercombo_hideevent_callback = cb; }
    inline void setKFileFilterCombo_MousePressEvent_Callback(KFileFilterCombo_MousePressEvent_Callback cb) { kfilefiltercombo_mousepressevent_callback = cb; }
    inline void setKFileFilterCombo_MouseReleaseEvent_Callback(KFileFilterCombo_MouseReleaseEvent_Callback cb) { kfilefiltercombo_mousereleaseevent_callback = cb; }
    inline void setKFileFilterCombo_KeyPressEvent_Callback(KFileFilterCombo_KeyPressEvent_Callback cb) { kfilefiltercombo_keypressevent_callback = cb; }
    inline void setKFileFilterCombo_KeyReleaseEvent_Callback(KFileFilterCombo_KeyReleaseEvent_Callback cb) { kfilefiltercombo_keyreleaseevent_callback = cb; }
    inline void setKFileFilterCombo_WheelEvent_Callback(KFileFilterCombo_WheelEvent_Callback cb) { kfilefiltercombo_wheelevent_callback = cb; }
    inline void setKFileFilterCombo_ContextMenuEvent_Callback(KFileFilterCombo_ContextMenuEvent_Callback cb) { kfilefiltercombo_contextmenuevent_callback = cb; }
    inline void setKFileFilterCombo_InputMethodEvent_Callback(KFileFilterCombo_InputMethodEvent_Callback cb) { kfilefiltercombo_inputmethodevent_callback = cb; }
    inline void setKFileFilterCombo_InitStyleOption_Callback(KFileFilterCombo_InitStyleOption_Callback cb) { kfilefiltercombo_initstyleoption_callback = cb; }
    inline void setKFileFilterCombo_DevType_Callback(KFileFilterCombo_DevType_Callback cb) { kfilefiltercombo_devtype_callback = cb; }
    inline void setKFileFilterCombo_SetVisible_Callback(KFileFilterCombo_SetVisible_Callback cb) { kfilefiltercombo_setvisible_callback = cb; }
    inline void setKFileFilterCombo_HeightForWidth_Callback(KFileFilterCombo_HeightForWidth_Callback cb) { kfilefiltercombo_heightforwidth_callback = cb; }
    inline void setKFileFilterCombo_HasHeightForWidth_Callback(KFileFilterCombo_HasHeightForWidth_Callback cb) { kfilefiltercombo_hasheightforwidth_callback = cb; }
    inline void setKFileFilterCombo_PaintEngine_Callback(KFileFilterCombo_PaintEngine_Callback cb) { kfilefiltercombo_paintengine_callback = cb; }
    inline void setKFileFilterCombo_MouseDoubleClickEvent_Callback(KFileFilterCombo_MouseDoubleClickEvent_Callback cb) { kfilefiltercombo_mousedoubleclickevent_callback = cb; }
    inline void setKFileFilterCombo_MouseMoveEvent_Callback(KFileFilterCombo_MouseMoveEvent_Callback cb) { kfilefiltercombo_mousemoveevent_callback = cb; }
    inline void setKFileFilterCombo_EnterEvent_Callback(KFileFilterCombo_EnterEvent_Callback cb) { kfilefiltercombo_enterevent_callback = cb; }
    inline void setKFileFilterCombo_LeaveEvent_Callback(KFileFilterCombo_LeaveEvent_Callback cb) { kfilefiltercombo_leaveevent_callback = cb; }
    inline void setKFileFilterCombo_MoveEvent_Callback(KFileFilterCombo_MoveEvent_Callback cb) { kfilefiltercombo_moveevent_callback = cb; }
    inline void setKFileFilterCombo_CloseEvent_Callback(KFileFilterCombo_CloseEvent_Callback cb) { kfilefiltercombo_closeevent_callback = cb; }
    inline void setKFileFilterCombo_TabletEvent_Callback(KFileFilterCombo_TabletEvent_Callback cb) { kfilefiltercombo_tabletevent_callback = cb; }
    inline void setKFileFilterCombo_ActionEvent_Callback(KFileFilterCombo_ActionEvent_Callback cb) { kfilefiltercombo_actionevent_callback = cb; }
    inline void setKFileFilterCombo_DragEnterEvent_Callback(KFileFilterCombo_DragEnterEvent_Callback cb) { kfilefiltercombo_dragenterevent_callback = cb; }
    inline void setKFileFilterCombo_DragMoveEvent_Callback(KFileFilterCombo_DragMoveEvent_Callback cb) { kfilefiltercombo_dragmoveevent_callback = cb; }
    inline void setKFileFilterCombo_DragLeaveEvent_Callback(KFileFilterCombo_DragLeaveEvent_Callback cb) { kfilefiltercombo_dragleaveevent_callback = cb; }
    inline void setKFileFilterCombo_DropEvent_Callback(KFileFilterCombo_DropEvent_Callback cb) { kfilefiltercombo_dropevent_callback = cb; }
    inline void setKFileFilterCombo_NativeEvent_Callback(KFileFilterCombo_NativeEvent_Callback cb) { kfilefiltercombo_nativeevent_callback = cb; }
    inline void setKFileFilterCombo_Metric_Callback(KFileFilterCombo_Metric_Callback cb) { kfilefiltercombo_metric_callback = cb; }
    inline void setKFileFilterCombo_InitPainter_Callback(KFileFilterCombo_InitPainter_Callback cb) { kfilefiltercombo_initpainter_callback = cb; }
    inline void setKFileFilterCombo_Redirected_Callback(KFileFilterCombo_Redirected_Callback cb) { kfilefiltercombo_redirected_callback = cb; }
    inline void setKFileFilterCombo_SharedPainter_Callback(KFileFilterCombo_SharedPainter_Callback cb) { kfilefiltercombo_sharedpainter_callback = cb; }
    inline void setKFileFilterCombo_FocusNextPrevChild_Callback(KFileFilterCombo_FocusNextPrevChild_Callback cb) { kfilefiltercombo_focusnextprevchild_callback = cb; }
    inline void setKFileFilterCombo_TimerEvent_Callback(KFileFilterCombo_TimerEvent_Callback cb) { kfilefiltercombo_timerevent_callback = cb; }
    inline void setKFileFilterCombo_ChildEvent_Callback(KFileFilterCombo_ChildEvent_Callback cb) { kfilefiltercombo_childevent_callback = cb; }
    inline void setKFileFilterCombo_CustomEvent_Callback(KFileFilterCombo_CustomEvent_Callback cb) { kfilefiltercombo_customevent_callback = cb; }
    inline void setKFileFilterCombo_ConnectNotify_Callback(KFileFilterCombo_ConnectNotify_Callback cb) { kfilefiltercombo_connectnotify_callback = cb; }
    inline void setKFileFilterCombo_DisconnectNotify_Callback(KFileFilterCombo_DisconnectNotify_Callback cb) { kfilefiltercombo_disconnectnotify_callback = cb; }
    inline void setKFileFilterCombo_SetCompletionObject_Callback(KFileFilterCombo_SetCompletionObject_Callback cb) { kfilefiltercombo_setcompletionobject_callback = cb; }
    inline void setKFileFilterCombo_SetHandleSignals_Callback(KFileFilterCombo_SetHandleSignals_Callback cb) { kfilefiltercombo_sethandlesignals_callback = cb; }
    inline void setKFileFilterCombo_SetCompletionMode_Callback(KFileFilterCombo_SetCompletionMode_Callback cb) { kfilefiltercombo_setcompletionmode_callback = cb; }
    inline void setKFileFilterCombo_VirtualHook_Callback(KFileFilterCombo_VirtualHook_Callback cb) { kfilefiltercombo_virtualhook_callback = cb; }
    inline void setKFileFilterCombo_UpdateMicroFocus_Callback(KFileFilterCombo_UpdateMicroFocus_Callback cb) { kfilefiltercombo_updatemicrofocus_callback = cb; }
    inline void setKFileFilterCombo_Create_Callback(KFileFilterCombo_Create_Callback cb) { kfilefiltercombo_create_callback = cb; }
    inline void setKFileFilterCombo_Destroy_Callback(KFileFilterCombo_Destroy_Callback cb) { kfilefiltercombo_destroy_callback = cb; }
    inline void setKFileFilterCombo_FocusNextChild_Callback(KFileFilterCombo_FocusNextChild_Callback cb) { kfilefiltercombo_focusnextchild_callback = cb; }
    inline void setKFileFilterCombo_FocusPreviousChild_Callback(KFileFilterCombo_FocusPreviousChild_Callback cb) { kfilefiltercombo_focuspreviouschild_callback = cb; }
    inline void setKFileFilterCombo_Sender_Callback(KFileFilterCombo_Sender_Callback cb) { kfilefiltercombo_sender_callback = cb; }
    inline void setKFileFilterCombo_SenderSignalIndex_Callback(KFileFilterCombo_SenderSignalIndex_Callback cb) { kfilefiltercombo_sendersignalindex_callback = cb; }
    inline void setKFileFilterCombo_Receivers_Callback(KFileFilterCombo_Receivers_Callback cb) { kfilefiltercombo_receivers_callback = cb; }
    inline void setKFileFilterCombo_IsSignalConnected_Callback(KFileFilterCombo_IsSignalConnected_Callback cb) { kfilefiltercombo_issignalconnected_callback = cb; }
    inline void setKFileFilterCombo_GetDecodedMetricF_Callback(KFileFilterCombo_GetDecodedMetricF_Callback cb) { kfilefiltercombo_getdecodedmetricf_callback = cb; }
    inline void setKFileFilterCombo_KeyBindingMap_Callback(KFileFilterCombo_KeyBindingMap_Callback cb) { kfilefiltercombo_keybindingmap_callback = cb; }
    inline void setKFileFilterCombo_SetKeyBindingMap_Callback(KFileFilterCombo_SetKeyBindingMap_Callback cb) { kfilefiltercombo_setkeybindingmap_callback = cb; }
    inline void setKFileFilterCombo_SetDelegate_Callback(KFileFilterCombo_SetDelegate_Callback cb) { kfilefiltercombo_setdelegate_callback = cb; }
    inline void setKFileFilterCombo_Delegate_Callback(KFileFilterCombo_Delegate_Callback cb) { kfilefiltercombo_delegate_callback = cb; }

    // Base flag setters
    inline void setKFileFilterCombo_Metacall_IsBase(bool value) const { kfilefiltercombo_metacall_isbase = value; }
    inline void setKFileFilterCombo_EventFilter_IsBase(bool value) const { kfilefiltercombo_eventfilter_isbase = value; }
    inline void setKFileFilterCombo_SetAutoCompletion_IsBase(bool value) const { kfilefiltercombo_setautocompletion_isbase = value; }
    inline void setKFileFilterCombo_SetLineEdit_IsBase(bool value) const { kfilefiltercombo_setlineedit_isbase = value; }
    inline void setKFileFilterCombo_MinimumSizeHint_IsBase(bool value) const { kfilefiltercombo_minimumsizehint_isbase = value; }
    inline void setKFileFilterCombo_SetCompletedText_IsBase(bool value) const { kfilefiltercombo_setcompletedtext_isbase = value; }
    inline void setKFileFilterCombo_SetCompletedItems_IsBase(bool value) const { kfilefiltercombo_setcompleteditems_isbase = value; }
    inline void setKFileFilterCombo_MakeCompletion_IsBase(bool value) const { kfilefiltercombo_makecompletion_isbase = value; }
    inline void setKFileFilterCombo_SetModel_IsBase(bool value) const { kfilefiltercombo_setmodel_isbase = value; }
    inline void setKFileFilterCombo_SizeHint_IsBase(bool value) const { kfilefiltercombo_sizehint_isbase = value; }
    inline void setKFileFilterCombo_ShowPopup_IsBase(bool value) const { kfilefiltercombo_showpopup_isbase = value; }
    inline void setKFileFilterCombo_HidePopup_IsBase(bool value) const { kfilefiltercombo_hidepopup_isbase = value; }
    inline void setKFileFilterCombo_Event_IsBase(bool value) const { kfilefiltercombo_event_isbase = value; }
    inline void setKFileFilterCombo_InputMethodQuery_IsBase(bool value) const { kfilefiltercombo_inputmethodquery_isbase = value; }
    inline void setKFileFilterCombo_FocusInEvent_IsBase(bool value) const { kfilefiltercombo_focusinevent_isbase = value; }
    inline void setKFileFilterCombo_FocusOutEvent_IsBase(bool value) const { kfilefiltercombo_focusoutevent_isbase = value; }
    inline void setKFileFilterCombo_ChangeEvent_IsBase(bool value) const { kfilefiltercombo_changeevent_isbase = value; }
    inline void setKFileFilterCombo_ResizeEvent_IsBase(bool value) const { kfilefiltercombo_resizeevent_isbase = value; }
    inline void setKFileFilterCombo_PaintEvent_IsBase(bool value) const { kfilefiltercombo_paintevent_isbase = value; }
    inline void setKFileFilterCombo_ShowEvent_IsBase(bool value) const { kfilefiltercombo_showevent_isbase = value; }
    inline void setKFileFilterCombo_HideEvent_IsBase(bool value) const { kfilefiltercombo_hideevent_isbase = value; }
    inline void setKFileFilterCombo_MousePressEvent_IsBase(bool value) const { kfilefiltercombo_mousepressevent_isbase = value; }
    inline void setKFileFilterCombo_MouseReleaseEvent_IsBase(bool value) const { kfilefiltercombo_mousereleaseevent_isbase = value; }
    inline void setKFileFilterCombo_KeyPressEvent_IsBase(bool value) const { kfilefiltercombo_keypressevent_isbase = value; }
    inline void setKFileFilterCombo_KeyReleaseEvent_IsBase(bool value) const { kfilefiltercombo_keyreleaseevent_isbase = value; }
    inline void setKFileFilterCombo_WheelEvent_IsBase(bool value) const { kfilefiltercombo_wheelevent_isbase = value; }
    inline void setKFileFilterCombo_ContextMenuEvent_IsBase(bool value) const { kfilefiltercombo_contextmenuevent_isbase = value; }
    inline void setKFileFilterCombo_InputMethodEvent_IsBase(bool value) const { kfilefiltercombo_inputmethodevent_isbase = value; }
    inline void setKFileFilterCombo_InitStyleOption_IsBase(bool value) const { kfilefiltercombo_initstyleoption_isbase = value; }
    inline void setKFileFilterCombo_DevType_IsBase(bool value) const { kfilefiltercombo_devtype_isbase = value; }
    inline void setKFileFilterCombo_SetVisible_IsBase(bool value) const { kfilefiltercombo_setvisible_isbase = value; }
    inline void setKFileFilterCombo_HeightForWidth_IsBase(bool value) const { kfilefiltercombo_heightforwidth_isbase = value; }
    inline void setKFileFilterCombo_HasHeightForWidth_IsBase(bool value) const { kfilefiltercombo_hasheightforwidth_isbase = value; }
    inline void setKFileFilterCombo_PaintEngine_IsBase(bool value) const { kfilefiltercombo_paintengine_isbase = value; }
    inline void setKFileFilterCombo_MouseDoubleClickEvent_IsBase(bool value) const { kfilefiltercombo_mousedoubleclickevent_isbase = value; }
    inline void setKFileFilterCombo_MouseMoveEvent_IsBase(bool value) const { kfilefiltercombo_mousemoveevent_isbase = value; }
    inline void setKFileFilterCombo_EnterEvent_IsBase(bool value) const { kfilefiltercombo_enterevent_isbase = value; }
    inline void setKFileFilterCombo_LeaveEvent_IsBase(bool value) const { kfilefiltercombo_leaveevent_isbase = value; }
    inline void setKFileFilterCombo_MoveEvent_IsBase(bool value) const { kfilefiltercombo_moveevent_isbase = value; }
    inline void setKFileFilterCombo_CloseEvent_IsBase(bool value) const { kfilefiltercombo_closeevent_isbase = value; }
    inline void setKFileFilterCombo_TabletEvent_IsBase(bool value) const { kfilefiltercombo_tabletevent_isbase = value; }
    inline void setKFileFilterCombo_ActionEvent_IsBase(bool value) const { kfilefiltercombo_actionevent_isbase = value; }
    inline void setKFileFilterCombo_DragEnterEvent_IsBase(bool value) const { kfilefiltercombo_dragenterevent_isbase = value; }
    inline void setKFileFilterCombo_DragMoveEvent_IsBase(bool value) const { kfilefiltercombo_dragmoveevent_isbase = value; }
    inline void setKFileFilterCombo_DragLeaveEvent_IsBase(bool value) const { kfilefiltercombo_dragleaveevent_isbase = value; }
    inline void setKFileFilterCombo_DropEvent_IsBase(bool value) const { kfilefiltercombo_dropevent_isbase = value; }
    inline void setKFileFilterCombo_NativeEvent_IsBase(bool value) const { kfilefiltercombo_nativeevent_isbase = value; }
    inline void setKFileFilterCombo_Metric_IsBase(bool value) const { kfilefiltercombo_metric_isbase = value; }
    inline void setKFileFilterCombo_InitPainter_IsBase(bool value) const { kfilefiltercombo_initpainter_isbase = value; }
    inline void setKFileFilterCombo_Redirected_IsBase(bool value) const { kfilefiltercombo_redirected_isbase = value; }
    inline void setKFileFilterCombo_SharedPainter_IsBase(bool value) const { kfilefiltercombo_sharedpainter_isbase = value; }
    inline void setKFileFilterCombo_FocusNextPrevChild_IsBase(bool value) const { kfilefiltercombo_focusnextprevchild_isbase = value; }
    inline void setKFileFilterCombo_TimerEvent_IsBase(bool value) const { kfilefiltercombo_timerevent_isbase = value; }
    inline void setKFileFilterCombo_ChildEvent_IsBase(bool value) const { kfilefiltercombo_childevent_isbase = value; }
    inline void setKFileFilterCombo_CustomEvent_IsBase(bool value) const { kfilefiltercombo_customevent_isbase = value; }
    inline void setKFileFilterCombo_ConnectNotify_IsBase(bool value) const { kfilefiltercombo_connectnotify_isbase = value; }
    inline void setKFileFilterCombo_DisconnectNotify_IsBase(bool value) const { kfilefiltercombo_disconnectnotify_isbase = value; }
    inline void setKFileFilterCombo_SetCompletionObject_IsBase(bool value) const { kfilefiltercombo_setcompletionobject_isbase = value; }
    inline void setKFileFilterCombo_SetHandleSignals_IsBase(bool value) const { kfilefiltercombo_sethandlesignals_isbase = value; }
    inline void setKFileFilterCombo_SetCompletionMode_IsBase(bool value) const { kfilefiltercombo_setcompletionmode_isbase = value; }
    inline void setKFileFilterCombo_VirtualHook_IsBase(bool value) const { kfilefiltercombo_virtualhook_isbase = value; }
    inline void setKFileFilterCombo_UpdateMicroFocus_IsBase(bool value) const { kfilefiltercombo_updatemicrofocus_isbase = value; }
    inline void setKFileFilterCombo_Create_IsBase(bool value) const { kfilefiltercombo_create_isbase = value; }
    inline void setKFileFilterCombo_Destroy_IsBase(bool value) const { kfilefiltercombo_destroy_isbase = value; }
    inline void setKFileFilterCombo_FocusNextChild_IsBase(bool value) const { kfilefiltercombo_focusnextchild_isbase = value; }
    inline void setKFileFilterCombo_FocusPreviousChild_IsBase(bool value) const { kfilefiltercombo_focuspreviouschild_isbase = value; }
    inline void setKFileFilterCombo_Sender_IsBase(bool value) const { kfilefiltercombo_sender_isbase = value; }
    inline void setKFileFilterCombo_SenderSignalIndex_IsBase(bool value) const { kfilefiltercombo_sendersignalindex_isbase = value; }
    inline void setKFileFilterCombo_Receivers_IsBase(bool value) const { kfilefiltercombo_receivers_isbase = value; }
    inline void setKFileFilterCombo_IsSignalConnected_IsBase(bool value) const { kfilefiltercombo_issignalconnected_isbase = value; }
    inline void setKFileFilterCombo_GetDecodedMetricF_IsBase(bool value) const { kfilefiltercombo_getdecodedmetricf_isbase = value; }
    inline void setKFileFilterCombo_KeyBindingMap_IsBase(bool value) const { kfilefiltercombo_keybindingmap_isbase = value; }
    inline void setKFileFilterCombo_SetKeyBindingMap_IsBase(bool value) const { kfilefiltercombo_setkeybindingmap_isbase = value; }
    inline void setKFileFilterCombo_SetDelegate_IsBase(bool value) const { kfilefiltercombo_setdelegate_isbase = value; }
    inline void setKFileFilterCombo_Delegate_IsBase(bool value) const { kfilefiltercombo_delegate_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfilefiltercombo_metacall_isbase) {
            kfilefiltercombo_metacall_isbase = false;
            return KFileFilterCombo::qt_metacall(param1, param2, param3);
        } else if (kfilefiltercombo_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kfilefiltercombo_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KFileFilterCombo::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kfilefiltercombo_eventfilter_isbase) {
            kfilefiltercombo_eventfilter_isbase = false;
            return KFileFilterCombo::eventFilter(param1, param2);
        } else if (kfilefiltercombo_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = kfilefiltercombo_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KFileFilterCombo::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoCompletion(bool autocomplete) override {
        if (kfilefiltercombo_setautocompletion_isbase) {
            kfilefiltercombo_setautocompletion_isbase = false;
            KFileFilterCombo::setAutoCompletion(autocomplete);
        } else if (kfilefiltercombo_setautocompletion_callback != nullptr) {
            bool cbval1 = autocomplete;

            kfilefiltercombo_setautocompletion_callback(this, cbval1);
        } else {
            KFileFilterCombo::setAutoCompletion(autocomplete);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLineEdit(QLineEdit* lineEdit) override {
        if (kfilefiltercombo_setlineedit_isbase) {
            kfilefiltercombo_setlineedit_isbase = false;
            KFileFilterCombo::setLineEdit(lineEdit);
        } else if (kfilefiltercombo_setlineedit_callback != nullptr) {
            QLineEdit* cbval1 = lineEdit;

            kfilefiltercombo_setlineedit_callback(this, cbval1);
        } else {
            KFileFilterCombo::setLineEdit(lineEdit);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kfilefiltercombo_minimumsizehint_isbase) {
            kfilefiltercombo_minimumsizehint_isbase = false;
            return KFileFilterCombo::minimumSizeHint();
        } else if (kfilefiltercombo_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kfilefiltercombo_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KFileFilterCombo::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedText(const QString& completedText) override {
        if (kfilefiltercombo_setcompletedtext_isbase) {
            kfilefiltercombo_setcompletedtext_isbase = false;
            KFileFilterCombo::setCompletedText(completedText);
        } else if (kfilefiltercombo_setcompletedtext_callback != nullptr) {
            const QString completedText_ret = completedText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray completedText_b = completedText_ret.toUtf8();
            libqt_string completedText_str;
            completedText_str.len = completedText_b.length();
            completedText_str.data = static_cast<const char*>(malloc(completedText_str.len + 1));
            memcpy((void*)completedText_str.data, completedText_b.data(), completedText_str.len);
            ((char*)completedText_str.data)[completedText_str.len] = '\0';
            libqt_string cbval1 = completedText_str;

            kfilefiltercombo_setcompletedtext_callback(this, cbval1);
        } else {
            KFileFilterCombo::setCompletedText(completedText);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedItems(const QList<QString>& items, bool autoSuggest) override {
        if (kfilefiltercombo_setcompleteditems_isbase) {
            kfilefiltercombo_setcompleteditems_isbase = false;
            KFileFilterCombo::setCompletedItems(items, autoSuggest);
        } else if (kfilefiltercombo_setcompleteditems_callback != nullptr) {
            const QList<QString>& items_ret = items;
            // Convert QList<> from C++ memory to manually-managed C memory
            libqt_string* items_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (items_ret.size() + 1)));
            for (qsizetype i = 0; i < items_ret.size(); ++i) {
                QString items_lv_ret = items_ret[i];
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray items_lv_b = items_lv_ret.toUtf8();
                libqt_string items_lv_str;
                items_lv_str.len = items_lv_b.length();
                items_lv_str.data = static_cast<const char*>(malloc(items_lv_str.len + 1));
                memcpy((void*)items_lv_str.data, items_lv_b.data(), items_lv_str.len);
                ((char*)items_lv_str.data)[items_lv_str.len] = '\0';
                items_arr[i] = items_lv_str;
            }
            libqt_list items_out;
            items_out.len = items_ret.size();
            items_out.data = static_cast<void*>(items_arr);
            libqt_list /* of libqt_string */ cbval1 = items_out;
            bool cbval2 = autoSuggest;

            kfilefiltercombo_setcompleteditems_callback(this, cbval1, cbval2);
        } else {
            KFileFilterCombo::setCompletedItems(items, autoSuggest);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void makeCompletion(const QString& param1) override {
        if (kfilefiltercombo_makecompletion_isbase) {
            kfilefiltercombo_makecompletion_isbase = false;
            KFileFilterCombo::makeCompletion(param1);
        } else if (kfilefiltercombo_makecompletion_callback != nullptr) {
            const QString param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            libqt_string param1_str;
            param1_str.len = param1_b.length();
            param1_str.data = static_cast<const char*>(malloc(param1_str.len + 1));
            memcpy((void*)param1_str.data, param1_b.data(), param1_str.len);
            ((char*)param1_str.data)[param1_str.len] = '\0';
            libqt_string cbval1 = param1_str;

            kfilefiltercombo_makecompletion_callback(this, cbval1);
        } else {
            KFileFilterCombo::makeCompletion(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (kfilefiltercombo_setmodel_isbase) {
            kfilefiltercombo_setmodel_isbase = false;
            KFileFilterCombo::setModel(model);
        } else if (kfilefiltercombo_setmodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = model;

            kfilefiltercombo_setmodel_callback(this, cbval1);
        } else {
            KFileFilterCombo::setModel(model);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kfilefiltercombo_sizehint_isbase) {
            kfilefiltercombo_sizehint_isbase = false;
            return KFileFilterCombo::sizeHint();
        } else if (kfilefiltercombo_sizehint_callback != nullptr) {
            QSize* callback_ret = kfilefiltercombo_sizehint_callback();
            return *callback_ret;
        } else {
            return KFileFilterCombo::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (kfilefiltercombo_showpopup_isbase) {
            kfilefiltercombo_showpopup_isbase = false;
            KFileFilterCombo::showPopup();
        } else if (kfilefiltercombo_showpopup_callback != nullptr) {
            kfilefiltercombo_showpopup_callback();
        } else {
            KFileFilterCombo::showPopup();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (kfilefiltercombo_hidepopup_isbase) {
            kfilefiltercombo_hidepopup_isbase = false;
            KFileFilterCombo::hidePopup();
        } else if (kfilefiltercombo_hidepopup_callback != nullptr) {
            kfilefiltercombo_hidepopup_callback();
        } else {
            KFileFilterCombo::hidePopup();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfilefiltercombo_event_isbase) {
            kfilefiltercombo_event_isbase = false;
            return KFileFilterCombo::event(event);
        } else if (kfilefiltercombo_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kfilefiltercombo_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFileFilterCombo::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kfilefiltercombo_inputmethodquery_isbase) {
            kfilefiltercombo_inputmethodquery_isbase = false;
            return KFileFilterCombo::inputMethodQuery(param1);
        } else if (kfilefiltercombo_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kfilefiltercombo_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KFileFilterCombo::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (kfilefiltercombo_focusinevent_isbase) {
            kfilefiltercombo_focusinevent_isbase = false;
            KFileFilterCombo::focusInEvent(e);
        } else if (kfilefiltercombo_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            kfilefiltercombo_focusinevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::focusInEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (kfilefiltercombo_focusoutevent_isbase) {
            kfilefiltercombo_focusoutevent_isbase = false;
            KFileFilterCombo::focusOutEvent(e);
        } else if (kfilefiltercombo_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            kfilefiltercombo_focusoutevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::focusOutEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kfilefiltercombo_changeevent_isbase) {
            kfilefiltercombo_changeevent_isbase = false;
            KFileFilterCombo::changeEvent(e);
        } else if (kfilefiltercombo_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            kfilefiltercombo_changeevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (kfilefiltercombo_resizeevent_isbase) {
            kfilefiltercombo_resizeevent_isbase = false;
            KFileFilterCombo::resizeEvent(e);
        } else if (kfilefiltercombo_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = e;

            kfilefiltercombo_resizeevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::resizeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (kfilefiltercombo_paintevent_isbase) {
            kfilefiltercombo_paintevent_isbase = false;
            KFileFilterCombo::paintEvent(e);
        } else if (kfilefiltercombo_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = e;

            kfilefiltercombo_paintevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (kfilefiltercombo_showevent_isbase) {
            kfilefiltercombo_showevent_isbase = false;
            KFileFilterCombo::showEvent(e);
        } else if (kfilefiltercombo_showevent_callback != nullptr) {
            QShowEvent* cbval1 = e;

            kfilefiltercombo_showevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::showEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (kfilefiltercombo_hideevent_isbase) {
            kfilefiltercombo_hideevent_isbase = false;
            KFileFilterCombo::hideEvent(e);
        } else if (kfilefiltercombo_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = e;

            kfilefiltercombo_hideevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::hideEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (kfilefiltercombo_mousepressevent_isbase) {
            kfilefiltercombo_mousepressevent_isbase = false;
            KFileFilterCombo::mousePressEvent(e);
        } else if (kfilefiltercombo_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            kfilefiltercombo_mousepressevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kfilefiltercombo_mousereleaseevent_isbase) {
            kfilefiltercombo_mousereleaseevent_isbase = false;
            KFileFilterCombo::mouseReleaseEvent(e);
        } else if (kfilefiltercombo_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            kfilefiltercombo_mousereleaseevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (kfilefiltercombo_keypressevent_isbase) {
            kfilefiltercombo_keypressevent_isbase = false;
            KFileFilterCombo::keyPressEvent(e);
        } else if (kfilefiltercombo_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            kfilefiltercombo_keypressevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::keyPressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (kfilefiltercombo_keyreleaseevent_isbase) {
            kfilefiltercombo_keyreleaseevent_isbase = false;
            KFileFilterCombo::keyReleaseEvent(e);
        } else if (kfilefiltercombo_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            kfilefiltercombo_keyreleaseevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (kfilefiltercombo_wheelevent_isbase) {
            kfilefiltercombo_wheelevent_isbase = false;
            KFileFilterCombo::wheelEvent(e);
        } else if (kfilefiltercombo_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = e;

            kfilefiltercombo_wheelevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (kfilefiltercombo_contextmenuevent_isbase) {
            kfilefiltercombo_contextmenuevent_isbase = false;
            KFileFilterCombo::contextMenuEvent(e);
        } else if (kfilefiltercombo_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = e;

            kfilefiltercombo_contextmenuevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::contextMenuEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kfilefiltercombo_inputmethodevent_isbase) {
            kfilefiltercombo_inputmethodevent_isbase = false;
            KFileFilterCombo::inputMethodEvent(param1);
        } else if (kfilefiltercombo_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kfilefiltercombo_inputmethodevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (kfilefiltercombo_initstyleoption_isbase) {
            kfilefiltercombo_initstyleoption_isbase = false;
            KFileFilterCombo::initStyleOption(option);
        } else if (kfilefiltercombo_initstyleoption_callback != nullptr) {
            QStyleOptionComboBox* cbval1 = option;

            kfilefiltercombo_initstyleoption_callback(this, cbval1);
        } else {
            KFileFilterCombo::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kfilefiltercombo_devtype_isbase) {
            kfilefiltercombo_devtype_isbase = false;
            return KFileFilterCombo::devType();
        } else if (kfilefiltercombo_devtype_callback != nullptr) {
            int callback_ret = kfilefiltercombo_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFileFilterCombo::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kfilefiltercombo_setvisible_isbase) {
            kfilefiltercombo_setvisible_isbase = false;
            KFileFilterCombo::setVisible(visible);
        } else if (kfilefiltercombo_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kfilefiltercombo_setvisible_callback(this, cbval1);
        } else {
            KFileFilterCombo::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kfilefiltercombo_heightforwidth_isbase) {
            kfilefiltercombo_heightforwidth_isbase = false;
            return KFileFilterCombo::heightForWidth(param1);
        } else if (kfilefiltercombo_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kfilefiltercombo_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFileFilterCombo::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kfilefiltercombo_hasheightforwidth_isbase) {
            kfilefiltercombo_hasheightforwidth_isbase = false;
            return KFileFilterCombo::hasHeightForWidth();
        } else if (kfilefiltercombo_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kfilefiltercombo_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KFileFilterCombo::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kfilefiltercombo_paintengine_isbase) {
            kfilefiltercombo_paintengine_isbase = false;
            return KFileFilterCombo::paintEngine();
        } else if (kfilefiltercombo_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kfilefiltercombo_paintengine_callback();
            return callback_ret;
        } else {
            return KFileFilterCombo::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kfilefiltercombo_mousedoubleclickevent_isbase) {
            kfilefiltercombo_mousedoubleclickevent_isbase = false;
            KFileFilterCombo::mouseDoubleClickEvent(event);
        } else if (kfilefiltercombo_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfilefiltercombo_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kfilefiltercombo_mousemoveevent_isbase) {
            kfilefiltercombo_mousemoveevent_isbase = false;
            KFileFilterCombo::mouseMoveEvent(event);
        } else if (kfilefiltercombo_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfilefiltercombo_mousemoveevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kfilefiltercombo_enterevent_isbase) {
            kfilefiltercombo_enterevent_isbase = false;
            KFileFilterCombo::enterEvent(event);
        } else if (kfilefiltercombo_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kfilefiltercombo_enterevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kfilefiltercombo_leaveevent_isbase) {
            kfilefiltercombo_leaveevent_isbase = false;
            KFileFilterCombo::leaveEvent(event);
        } else if (kfilefiltercombo_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kfilefiltercombo_leaveevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kfilefiltercombo_moveevent_isbase) {
            kfilefiltercombo_moveevent_isbase = false;
            KFileFilterCombo::moveEvent(event);
        } else if (kfilefiltercombo_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kfilefiltercombo_moveevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kfilefiltercombo_closeevent_isbase) {
            kfilefiltercombo_closeevent_isbase = false;
            KFileFilterCombo::closeEvent(event);
        } else if (kfilefiltercombo_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kfilefiltercombo_closeevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kfilefiltercombo_tabletevent_isbase) {
            kfilefiltercombo_tabletevent_isbase = false;
            KFileFilterCombo::tabletEvent(event);
        } else if (kfilefiltercombo_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kfilefiltercombo_tabletevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kfilefiltercombo_actionevent_isbase) {
            kfilefiltercombo_actionevent_isbase = false;
            KFileFilterCombo::actionEvent(event);
        } else if (kfilefiltercombo_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kfilefiltercombo_actionevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kfilefiltercombo_dragenterevent_isbase) {
            kfilefiltercombo_dragenterevent_isbase = false;
            KFileFilterCombo::dragEnterEvent(event);
        } else if (kfilefiltercombo_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kfilefiltercombo_dragenterevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kfilefiltercombo_dragmoveevent_isbase) {
            kfilefiltercombo_dragmoveevent_isbase = false;
            KFileFilterCombo::dragMoveEvent(event);
        } else if (kfilefiltercombo_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kfilefiltercombo_dragmoveevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kfilefiltercombo_dragleaveevent_isbase) {
            kfilefiltercombo_dragleaveevent_isbase = false;
            KFileFilterCombo::dragLeaveEvent(event);
        } else if (kfilefiltercombo_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kfilefiltercombo_dragleaveevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kfilefiltercombo_dropevent_isbase) {
            kfilefiltercombo_dropevent_isbase = false;
            KFileFilterCombo::dropEvent(event);
        } else if (kfilefiltercombo_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kfilefiltercombo_dropevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kfilefiltercombo_nativeevent_isbase) {
            kfilefiltercombo_nativeevent_isbase = false;
            return KFileFilterCombo::nativeEvent(eventType, message, result);
        } else if (kfilefiltercombo_nativeevent_callback != nullptr) {
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

            bool callback_ret = kfilefiltercombo_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KFileFilterCombo::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kfilefiltercombo_metric_isbase) {
            kfilefiltercombo_metric_isbase = false;
            return KFileFilterCombo::metric(param1);
        } else if (kfilefiltercombo_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kfilefiltercombo_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFileFilterCombo::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kfilefiltercombo_initpainter_isbase) {
            kfilefiltercombo_initpainter_isbase = false;
            KFileFilterCombo::initPainter(painter);
        } else if (kfilefiltercombo_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kfilefiltercombo_initpainter_callback(this, cbval1);
        } else {
            KFileFilterCombo::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kfilefiltercombo_redirected_isbase) {
            kfilefiltercombo_redirected_isbase = false;
            return KFileFilterCombo::redirected(offset);
        } else if (kfilefiltercombo_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kfilefiltercombo_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFileFilterCombo::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kfilefiltercombo_sharedpainter_isbase) {
            kfilefiltercombo_sharedpainter_isbase = false;
            return KFileFilterCombo::sharedPainter();
        } else if (kfilefiltercombo_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kfilefiltercombo_sharedpainter_callback();
            return callback_ret;
        } else {
            return KFileFilterCombo::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kfilefiltercombo_focusnextprevchild_isbase) {
            kfilefiltercombo_focusnextprevchild_isbase = false;
            return KFileFilterCombo::focusNextPrevChild(next);
        } else if (kfilefiltercombo_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kfilefiltercombo_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFileFilterCombo::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfilefiltercombo_timerevent_isbase) {
            kfilefiltercombo_timerevent_isbase = false;
            KFileFilterCombo::timerEvent(event);
        } else if (kfilefiltercombo_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kfilefiltercombo_timerevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfilefiltercombo_childevent_isbase) {
            kfilefiltercombo_childevent_isbase = false;
            KFileFilterCombo::childEvent(event);
        } else if (kfilefiltercombo_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kfilefiltercombo_childevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfilefiltercombo_customevent_isbase) {
            kfilefiltercombo_customevent_isbase = false;
            KFileFilterCombo::customEvent(event);
        } else if (kfilefiltercombo_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kfilefiltercombo_customevent_callback(this, cbval1);
        } else {
            KFileFilterCombo::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfilefiltercombo_connectnotify_isbase) {
            kfilefiltercombo_connectnotify_isbase = false;
            KFileFilterCombo::connectNotify(signal);
        } else if (kfilefiltercombo_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfilefiltercombo_connectnotify_callback(this, cbval1);
        } else {
            KFileFilterCombo::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfilefiltercombo_disconnectnotify_isbase) {
            kfilefiltercombo_disconnectnotify_isbase = false;
            KFileFilterCombo::disconnectNotify(signal);
        } else if (kfilefiltercombo_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfilefiltercombo_disconnectnotify_callback(this, cbval1);
        } else {
            KFileFilterCombo::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionObject(KCompletion* completionObject, bool handleSignals) override {
        if (kfilefiltercombo_setcompletionobject_isbase) {
            kfilefiltercombo_setcompletionobject_isbase = false;
            KFileFilterCombo::setCompletionObject(completionObject, handleSignals);
        } else if (kfilefiltercombo_setcompletionobject_callback != nullptr) {
            KCompletion* cbval1 = completionObject;
            bool cbval2 = handleSignals;

            kfilefiltercombo_setcompletionobject_callback(this, cbval1, cbval2);
        } else {
            KFileFilterCombo::setCompletionObject(completionObject, handleSignals);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHandleSignals(bool handle) override {
        if (kfilefiltercombo_sethandlesignals_isbase) {
            kfilefiltercombo_sethandlesignals_isbase = false;
            KFileFilterCombo::setHandleSignals(handle);
        } else if (kfilefiltercombo_sethandlesignals_callback != nullptr) {
            bool cbval1 = handle;

            kfilefiltercombo_sethandlesignals_callback(this, cbval1);
        } else {
            KFileFilterCombo::setHandleSignals(handle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionMode(KCompletion::CompletionMode mode) override {
        if (kfilefiltercombo_setcompletionmode_isbase) {
            kfilefiltercombo_setcompletionmode_isbase = false;
            KFileFilterCombo::setCompletionMode(mode);
        } else if (kfilefiltercombo_setcompletionmode_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            kfilefiltercombo_setcompletionmode_callback(this, cbval1);
        } else {
            KFileFilterCombo::setCompletionMode(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kfilefiltercombo_virtualhook_isbase) {
            kfilefiltercombo_virtualhook_isbase = false;
            KFileFilterCombo::virtual_hook(id, data);
        } else if (kfilefiltercombo_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            kfilefiltercombo_virtualhook_callback(this, cbval1, cbval2);
        } else {
            KFileFilterCombo::virtual_hook(id, data);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kfilefiltercombo_updatemicrofocus_isbase) {
            kfilefiltercombo_updatemicrofocus_isbase = false;
            KFileFilterCombo::updateMicroFocus();
        } else if (kfilefiltercombo_updatemicrofocus_callback != nullptr) {
            kfilefiltercombo_updatemicrofocus_callback();
        } else {
            KFileFilterCombo::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kfilefiltercombo_create_isbase) {
            kfilefiltercombo_create_isbase = false;
            KFileFilterCombo::create();
        } else if (kfilefiltercombo_create_callback != nullptr) {
            kfilefiltercombo_create_callback();
        } else {
            KFileFilterCombo::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kfilefiltercombo_destroy_isbase) {
            kfilefiltercombo_destroy_isbase = false;
            KFileFilterCombo::destroy();
        } else if (kfilefiltercombo_destroy_callback != nullptr) {
            kfilefiltercombo_destroy_callback();
        } else {
            KFileFilterCombo::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kfilefiltercombo_focusnextchild_isbase) {
            kfilefiltercombo_focusnextchild_isbase = false;
            return KFileFilterCombo::focusNextChild();
        } else if (kfilefiltercombo_focusnextchild_callback != nullptr) {
            bool callback_ret = kfilefiltercombo_focusnextchild_callback();
            return callback_ret;
        } else {
            return KFileFilterCombo::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kfilefiltercombo_focuspreviouschild_isbase) {
            kfilefiltercombo_focuspreviouschild_isbase = false;
            return KFileFilterCombo::focusPreviousChild();
        } else if (kfilefiltercombo_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kfilefiltercombo_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KFileFilterCombo::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfilefiltercombo_sender_isbase) {
            kfilefiltercombo_sender_isbase = false;
            return KFileFilterCombo::sender();
        } else if (kfilefiltercombo_sender_callback != nullptr) {
            QObject* callback_ret = kfilefiltercombo_sender_callback();
            return callback_ret;
        } else {
            return KFileFilterCombo::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfilefiltercombo_sendersignalindex_isbase) {
            kfilefiltercombo_sendersignalindex_isbase = false;
            return KFileFilterCombo::senderSignalIndex();
        } else if (kfilefiltercombo_sendersignalindex_callback != nullptr) {
            int callback_ret = kfilefiltercombo_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFileFilterCombo::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfilefiltercombo_receivers_isbase) {
            kfilefiltercombo_receivers_isbase = false;
            return KFileFilterCombo::receivers(signal);
        } else if (kfilefiltercombo_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kfilefiltercombo_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFileFilterCombo::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfilefiltercombo_issignalconnected_isbase) {
            kfilefiltercombo_issignalconnected_isbase = false;
            return KFileFilterCombo::isSignalConnected(signal);
        } else if (kfilefiltercombo_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kfilefiltercombo_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFileFilterCombo::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kfilefiltercombo_getdecodedmetricf_isbase) {
            kfilefiltercombo_getdecodedmetricf_isbase = false;
            return KFileFilterCombo::getDecodedMetricF(metricA, metricB);
        } else if (kfilefiltercombo_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kfilefiltercombo_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KFileFilterCombo::getDecodedMetricF(metricA, metricB);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> keyBindingMap() const {
        if (kfilefiltercombo_keybindingmap_isbase) {
            kfilefiltercombo_keybindingmap_isbase = false;
            return KFileFilterCombo::keyBindingMap();
        } else if (kfilefiltercombo_keybindingmap_callback != nullptr) {
            libqt_map /* of int to libqt_list  of QKeySequence*  */ callback_ret = kfilefiltercombo_keybindingmap_callback();
            QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            libqt_list /* of QKeySequence* */* callback_ret_varr = static_cast<libqt_list /* of QKeySequence* */*>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QList<QKeySequence> callback_ret_varr_i_QList;
                callback_ret_varr_i_QList.reserve(callback_ret_varr[i].len);
                QKeySequence** callback_ret_varr_i_arr = static_cast<QKeySequence**>(callback_ret_varr[i].data);
                for (size_t i = 0; i < callback_ret_varr[i].len; ++i) {
                    callback_ret_varr_i_QList.push_back(*(callback_ret_varr_i_arr[i]));
                }
                callback_ret_QMap[static_cast<KCompletionBase::KeyBindingType>(callback_ret_karr[i])] = callback_ret_varr_i_QList;
            }
            return callback_ret_QMap;
        } else {
            return KFileFilterCombo::keyBindingMap();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setKeyBindingMap(QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> keyBindingMap) {
        if (kfilefiltercombo_setkeybindingmap_isbase) {
            kfilefiltercombo_setkeybindingmap_isbase = false;
            KFileFilterCombo::setKeyBindingMap(keyBindingMap);
        } else if (kfilefiltercombo_setkeybindingmap_callback != nullptr) {
            QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> keyBindingMap_ret = keyBindingMap;
            // Convert QMap<> from C++ memory to manually-managed C memory
            int* keyBindingMap_karr = static_cast<int*>(malloc(sizeof(int) * keyBindingMap_ret.size()));
            libqt_list /* of QKeySequence* */* keyBindingMap_varr = static_cast<libqt_list /* of QKeySequence* */*>(malloc(sizeof(libqt_list /* of QKeySequence* */) * keyBindingMap_ret.size()));
            int keyBindingMap_ctr = 0;
            for (auto keyBindingMap_itr = keyBindingMap_ret.keyValueBegin(); keyBindingMap_itr != keyBindingMap_ret.keyValueEnd(); ++keyBindingMap_itr) {
                keyBindingMap_karr[keyBindingMap_ctr] = static_cast<int>(keyBindingMap_itr->first);
                QList<QKeySequence> keyBindingMap_mapval_ret = keyBindingMap_itr->second;
                // Convert QList<> from C++ memory to manually-managed C memory
                QKeySequence** keyBindingMap_mapval_arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (keyBindingMap_mapval_ret.size() + 1)));
                for (qsizetype i = 0; i < keyBindingMap_mapval_ret.size(); ++i) {
                    keyBindingMap_mapval_arr[i] = new QKeySequence(keyBindingMap_mapval_ret[i]);
                }
                libqt_list keyBindingMap_mapval_out;
                keyBindingMap_mapval_out.len = keyBindingMap_mapval_ret.size();
                keyBindingMap_mapval_out.data = static_cast<void*>(keyBindingMap_mapval_arr);
                keyBindingMap_varr[keyBindingMap_ctr] = keyBindingMap_mapval_out;
                keyBindingMap_ctr++;
            }
            libqt_map keyBindingMap_out;
            keyBindingMap_out.len = keyBindingMap_ret.size();
            keyBindingMap_out.keys = static_cast<void*>(keyBindingMap_karr);
            keyBindingMap_out.values = static_cast<void*>(keyBindingMap_varr);
            libqt_map /* of int to libqt_list  of QKeySequence*  */ cbval1 = keyBindingMap_out;

            kfilefiltercombo_setkeybindingmap_callback(this, cbval1);
        } else {
            KFileFilterCombo::setKeyBindingMap(keyBindingMap);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDelegate(KCompletionBase* delegate) {
        if (kfilefiltercombo_setdelegate_isbase) {
            kfilefiltercombo_setdelegate_isbase = false;
            KFileFilterCombo::setDelegate(delegate);
        } else if (kfilefiltercombo_setdelegate_callback != nullptr) {
            KCompletionBase* cbval1 = delegate;

            kfilefiltercombo_setdelegate_callback(this, cbval1);
        } else {
            KFileFilterCombo::setDelegate(delegate);
        }
    }

    // Virtual method for C ABI access and custom callback
    KCompletionBase* delegate() const {
        if (kfilefiltercombo_delegate_isbase) {
            kfilefiltercombo_delegate_isbase = false;
            return KFileFilterCombo::delegate();
        } else if (kfilefiltercombo_delegate_callback != nullptr) {
            KCompletionBase* callback_ret = kfilefiltercombo_delegate_callback();
            return callback_ret;
        } else {
            return KFileFilterCombo::delegate();
        }
    }

    // Friend functions
    friend bool KFileFilterCombo_EventFilter(KFileFilterCombo* self, QObject* param1, QEvent* param2);
    friend bool KFileFilterCombo_QBaseEventFilter(KFileFilterCombo* self, QObject* param1, QEvent* param2);
    friend void KFileFilterCombo_MakeCompletion(KFileFilterCombo* self, const libqt_string param1);
    friend void KFileFilterCombo_QBaseMakeCompletion(KFileFilterCombo* self, const libqt_string param1);
    friend void KFileFilterCombo_FocusInEvent(KFileFilterCombo* self, QFocusEvent* e);
    friend void KFileFilterCombo_QBaseFocusInEvent(KFileFilterCombo* self, QFocusEvent* e);
    friend void KFileFilterCombo_FocusOutEvent(KFileFilterCombo* self, QFocusEvent* e);
    friend void KFileFilterCombo_QBaseFocusOutEvent(KFileFilterCombo* self, QFocusEvent* e);
    friend void KFileFilterCombo_ChangeEvent(KFileFilterCombo* self, QEvent* e);
    friend void KFileFilterCombo_QBaseChangeEvent(KFileFilterCombo* self, QEvent* e);
    friend void KFileFilterCombo_ResizeEvent(KFileFilterCombo* self, QResizeEvent* e);
    friend void KFileFilterCombo_QBaseResizeEvent(KFileFilterCombo* self, QResizeEvent* e);
    friend void KFileFilterCombo_PaintEvent(KFileFilterCombo* self, QPaintEvent* e);
    friend void KFileFilterCombo_QBasePaintEvent(KFileFilterCombo* self, QPaintEvent* e);
    friend void KFileFilterCombo_ShowEvent(KFileFilterCombo* self, QShowEvent* e);
    friend void KFileFilterCombo_QBaseShowEvent(KFileFilterCombo* self, QShowEvent* e);
    friend void KFileFilterCombo_HideEvent(KFileFilterCombo* self, QHideEvent* e);
    friend void KFileFilterCombo_QBaseHideEvent(KFileFilterCombo* self, QHideEvent* e);
    friend void KFileFilterCombo_MousePressEvent(KFileFilterCombo* self, QMouseEvent* e);
    friend void KFileFilterCombo_QBaseMousePressEvent(KFileFilterCombo* self, QMouseEvent* e);
    friend void KFileFilterCombo_MouseReleaseEvent(KFileFilterCombo* self, QMouseEvent* e);
    friend void KFileFilterCombo_QBaseMouseReleaseEvent(KFileFilterCombo* self, QMouseEvent* e);
    friend void KFileFilterCombo_KeyPressEvent(KFileFilterCombo* self, QKeyEvent* e);
    friend void KFileFilterCombo_QBaseKeyPressEvent(KFileFilterCombo* self, QKeyEvent* e);
    friend void KFileFilterCombo_KeyReleaseEvent(KFileFilterCombo* self, QKeyEvent* e);
    friend void KFileFilterCombo_QBaseKeyReleaseEvent(KFileFilterCombo* self, QKeyEvent* e);
    friend void KFileFilterCombo_WheelEvent(KFileFilterCombo* self, QWheelEvent* e);
    friend void KFileFilterCombo_QBaseWheelEvent(KFileFilterCombo* self, QWheelEvent* e);
    friend void KFileFilterCombo_ContextMenuEvent(KFileFilterCombo* self, QContextMenuEvent* e);
    friend void KFileFilterCombo_QBaseContextMenuEvent(KFileFilterCombo* self, QContextMenuEvent* e);
    friend void KFileFilterCombo_InputMethodEvent(KFileFilterCombo* self, QInputMethodEvent* param1);
    friend void KFileFilterCombo_QBaseInputMethodEvent(KFileFilterCombo* self, QInputMethodEvent* param1);
    friend void KFileFilterCombo_InitStyleOption(const KFileFilterCombo* self, QStyleOptionComboBox* option);
    friend void KFileFilterCombo_QBaseInitStyleOption(const KFileFilterCombo* self, QStyleOptionComboBox* option);
    friend void KFileFilterCombo_MouseDoubleClickEvent(KFileFilterCombo* self, QMouseEvent* event);
    friend void KFileFilterCombo_QBaseMouseDoubleClickEvent(KFileFilterCombo* self, QMouseEvent* event);
    friend void KFileFilterCombo_MouseMoveEvent(KFileFilterCombo* self, QMouseEvent* event);
    friend void KFileFilterCombo_QBaseMouseMoveEvent(KFileFilterCombo* self, QMouseEvent* event);
    friend void KFileFilterCombo_EnterEvent(KFileFilterCombo* self, QEnterEvent* event);
    friend void KFileFilterCombo_QBaseEnterEvent(KFileFilterCombo* self, QEnterEvent* event);
    friend void KFileFilterCombo_LeaveEvent(KFileFilterCombo* self, QEvent* event);
    friend void KFileFilterCombo_QBaseLeaveEvent(KFileFilterCombo* self, QEvent* event);
    friend void KFileFilterCombo_MoveEvent(KFileFilterCombo* self, QMoveEvent* event);
    friend void KFileFilterCombo_QBaseMoveEvent(KFileFilterCombo* self, QMoveEvent* event);
    friend void KFileFilterCombo_CloseEvent(KFileFilterCombo* self, QCloseEvent* event);
    friend void KFileFilterCombo_QBaseCloseEvent(KFileFilterCombo* self, QCloseEvent* event);
    friend void KFileFilterCombo_TabletEvent(KFileFilterCombo* self, QTabletEvent* event);
    friend void KFileFilterCombo_QBaseTabletEvent(KFileFilterCombo* self, QTabletEvent* event);
    friend void KFileFilterCombo_ActionEvent(KFileFilterCombo* self, QActionEvent* event);
    friend void KFileFilterCombo_QBaseActionEvent(KFileFilterCombo* self, QActionEvent* event);
    friend void KFileFilterCombo_DragEnterEvent(KFileFilterCombo* self, QDragEnterEvent* event);
    friend void KFileFilterCombo_QBaseDragEnterEvent(KFileFilterCombo* self, QDragEnterEvent* event);
    friend void KFileFilterCombo_DragMoveEvent(KFileFilterCombo* self, QDragMoveEvent* event);
    friend void KFileFilterCombo_QBaseDragMoveEvent(KFileFilterCombo* self, QDragMoveEvent* event);
    friend void KFileFilterCombo_DragLeaveEvent(KFileFilterCombo* self, QDragLeaveEvent* event);
    friend void KFileFilterCombo_QBaseDragLeaveEvent(KFileFilterCombo* self, QDragLeaveEvent* event);
    friend void KFileFilterCombo_DropEvent(KFileFilterCombo* self, QDropEvent* event);
    friend void KFileFilterCombo_QBaseDropEvent(KFileFilterCombo* self, QDropEvent* event);
    friend bool KFileFilterCombo_NativeEvent(KFileFilterCombo* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KFileFilterCombo_QBaseNativeEvent(KFileFilterCombo* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KFileFilterCombo_Metric(const KFileFilterCombo* self, int param1);
    friend int KFileFilterCombo_QBaseMetric(const KFileFilterCombo* self, int param1);
    friend void KFileFilterCombo_InitPainter(const KFileFilterCombo* self, QPainter* painter);
    friend void KFileFilterCombo_QBaseInitPainter(const KFileFilterCombo* self, QPainter* painter);
    friend QPaintDevice* KFileFilterCombo_Redirected(const KFileFilterCombo* self, QPoint* offset);
    friend QPaintDevice* KFileFilterCombo_QBaseRedirected(const KFileFilterCombo* self, QPoint* offset);
    friend QPainter* KFileFilterCombo_SharedPainter(const KFileFilterCombo* self);
    friend QPainter* KFileFilterCombo_QBaseSharedPainter(const KFileFilterCombo* self);
    friend bool KFileFilterCombo_FocusNextPrevChild(KFileFilterCombo* self, bool next);
    friend bool KFileFilterCombo_QBaseFocusNextPrevChild(KFileFilterCombo* self, bool next);
    friend void KFileFilterCombo_TimerEvent(KFileFilterCombo* self, QTimerEvent* event);
    friend void KFileFilterCombo_QBaseTimerEvent(KFileFilterCombo* self, QTimerEvent* event);
    friend void KFileFilterCombo_ChildEvent(KFileFilterCombo* self, QChildEvent* event);
    friend void KFileFilterCombo_QBaseChildEvent(KFileFilterCombo* self, QChildEvent* event);
    friend void KFileFilterCombo_CustomEvent(KFileFilterCombo* self, QEvent* event);
    friend void KFileFilterCombo_QBaseCustomEvent(KFileFilterCombo* self, QEvent* event);
    friend void KFileFilterCombo_ConnectNotify(KFileFilterCombo* self, const QMetaMethod* signal);
    friend void KFileFilterCombo_QBaseConnectNotify(KFileFilterCombo* self, const QMetaMethod* signal);
    friend void KFileFilterCombo_DisconnectNotify(KFileFilterCombo* self, const QMetaMethod* signal);
    friend void KFileFilterCombo_QBaseDisconnectNotify(KFileFilterCombo* self, const QMetaMethod* signal);
    friend void KFileFilterCombo_VirtualHook(KFileFilterCombo* self, int id, void* data);
    friend void KFileFilterCombo_QBaseVirtualHook(KFileFilterCombo* self, int id, void* data);
    friend void KFileFilterCombo_UpdateMicroFocus(KFileFilterCombo* self);
    friend void KFileFilterCombo_QBaseUpdateMicroFocus(KFileFilterCombo* self);
    friend void KFileFilterCombo_Create(KFileFilterCombo* self);
    friend void KFileFilterCombo_QBaseCreate(KFileFilterCombo* self);
    friend void KFileFilterCombo_Destroy(KFileFilterCombo* self);
    friend void KFileFilterCombo_QBaseDestroy(KFileFilterCombo* self);
    friend bool KFileFilterCombo_FocusNextChild(KFileFilterCombo* self);
    friend bool KFileFilterCombo_QBaseFocusNextChild(KFileFilterCombo* self);
    friend bool KFileFilterCombo_FocusPreviousChild(KFileFilterCombo* self);
    friend bool KFileFilterCombo_QBaseFocusPreviousChild(KFileFilterCombo* self);
    friend QObject* KFileFilterCombo_Sender(const KFileFilterCombo* self);
    friend QObject* KFileFilterCombo_QBaseSender(const KFileFilterCombo* self);
    friend int KFileFilterCombo_SenderSignalIndex(const KFileFilterCombo* self);
    friend int KFileFilterCombo_QBaseSenderSignalIndex(const KFileFilterCombo* self);
    friend int KFileFilterCombo_Receivers(const KFileFilterCombo* self, const char* signal);
    friend int KFileFilterCombo_QBaseReceivers(const KFileFilterCombo* self, const char* signal);
    friend bool KFileFilterCombo_IsSignalConnected(const KFileFilterCombo* self, const QMetaMethod* signal);
    friend bool KFileFilterCombo_QBaseIsSignalConnected(const KFileFilterCombo* self, const QMetaMethod* signal);
    friend double KFileFilterCombo_GetDecodedMetricF(const KFileFilterCombo* self, int metricA, int metricB);
    friend double KFileFilterCombo_QBaseGetDecodedMetricF(const KFileFilterCombo* self, int metricA, int metricB);
    friend libqt_map /* of int to libqt_list  of QKeySequence*  */ KFileFilterCombo_KeyBindingMap(const KFileFilterCombo* self);
    friend libqt_map /* of int to libqt_list  of QKeySequence*  */ KFileFilterCombo_QBaseKeyBindingMap(const KFileFilterCombo* self);
    friend void KFileFilterCombo_SetKeyBindingMap(KFileFilterCombo* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap);
    friend void KFileFilterCombo_QBaseSetKeyBindingMap(KFileFilterCombo* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap);
    friend void KFileFilterCombo_SetDelegate(KFileFilterCombo* self, KCompletionBase* delegate);
    friend void KFileFilterCombo_QBaseSetDelegate(KFileFilterCombo* self, KCompletionBase* delegate);
    friend KCompletionBase* KFileFilterCombo_Delegate(const KFileFilterCombo* self);
    friend KCompletionBase* KFileFilterCombo_QBaseDelegate(const KFileFilterCombo* self);
};

#endif
