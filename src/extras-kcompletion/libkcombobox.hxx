#pragma once
#ifndef SRC_EXTRAS_KCOMPLETIONC_LIBVIRTUALKCOMBOBOX_H
#define SRC_EXTRAS_KCOMPLETIONC_LIBVIRTUALKCOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KComboBox so that we can call protected methods
class VirtualKComboBox final : public KComboBox {

  public:
    // Virtual class boolean flag
    bool isVirtualKComboBox = true;

    // Virtual class public types (including callbacks)
    using KComboBox_Metacall_Callback = int (*)(KComboBox*, int, int, void**);
    using KComboBox_SetAutoCompletion_Callback = void (*)(KComboBox*, bool);
    using KComboBox_SetLineEdit_Callback = void (*)(KComboBox*, QLineEdit*);
    using KComboBox_MinimumSizeHint_Callback = QSize* (*)();
    using KComboBox_SetCompletedText_Callback = void (*)(KComboBox*, libqt_string);
    using KComboBox_SetCompletedItems_Callback = void (*)(KComboBox*, libqt_list /* of libqt_string */, bool);
    using KComboBox_MakeCompletion_Callback = void (*)(KComboBox*, libqt_string);
    using KComboBox_SetCompletedText2_Callback = void (*)(KComboBox*, libqt_string, bool);
    using KComboBox_SetModel_Callback = void (*)(KComboBox*, QAbstractItemModel*);
    using KComboBox_SizeHint_Callback = QSize* (*)();
    using KComboBox_ShowPopup_Callback = void (*)();
    using KComboBox_HidePopup_Callback = void (*)();
    using KComboBox_Event_Callback = bool (*)(KComboBox*, QEvent*);
    using KComboBox_InputMethodQuery_Callback = QVariant* (*)(const KComboBox*, int);
    using KComboBox_FocusInEvent_Callback = void (*)(KComboBox*, QFocusEvent*);
    using KComboBox_FocusOutEvent_Callback = void (*)(KComboBox*, QFocusEvent*);
    using KComboBox_ChangeEvent_Callback = void (*)(KComboBox*, QEvent*);
    using KComboBox_ResizeEvent_Callback = void (*)(KComboBox*, QResizeEvent*);
    using KComboBox_PaintEvent_Callback = void (*)(KComboBox*, QPaintEvent*);
    using KComboBox_ShowEvent_Callback = void (*)(KComboBox*, QShowEvent*);
    using KComboBox_HideEvent_Callback = void (*)(KComboBox*, QHideEvent*);
    using KComboBox_MousePressEvent_Callback = void (*)(KComboBox*, QMouseEvent*);
    using KComboBox_MouseReleaseEvent_Callback = void (*)(KComboBox*, QMouseEvent*);
    using KComboBox_KeyPressEvent_Callback = void (*)(KComboBox*, QKeyEvent*);
    using KComboBox_KeyReleaseEvent_Callback = void (*)(KComboBox*, QKeyEvent*);
    using KComboBox_WheelEvent_Callback = void (*)(KComboBox*, QWheelEvent*);
    using KComboBox_ContextMenuEvent_Callback = void (*)(KComboBox*, QContextMenuEvent*);
    using KComboBox_InputMethodEvent_Callback = void (*)(KComboBox*, QInputMethodEvent*);
    using KComboBox_InitStyleOption_Callback = void (*)(const KComboBox*, QStyleOptionComboBox*);
    using KComboBox_DevType_Callback = int (*)();
    using KComboBox_SetVisible_Callback = void (*)(KComboBox*, bool);
    using KComboBox_HeightForWidth_Callback = int (*)(const KComboBox*, int);
    using KComboBox_HasHeightForWidth_Callback = bool (*)();
    using KComboBox_PaintEngine_Callback = QPaintEngine* (*)();
    using KComboBox_MouseDoubleClickEvent_Callback = void (*)(KComboBox*, QMouseEvent*);
    using KComboBox_MouseMoveEvent_Callback = void (*)(KComboBox*, QMouseEvent*);
    using KComboBox_EnterEvent_Callback = void (*)(KComboBox*, QEnterEvent*);
    using KComboBox_LeaveEvent_Callback = void (*)(KComboBox*, QEvent*);
    using KComboBox_MoveEvent_Callback = void (*)(KComboBox*, QMoveEvent*);
    using KComboBox_CloseEvent_Callback = void (*)(KComboBox*, QCloseEvent*);
    using KComboBox_TabletEvent_Callback = void (*)(KComboBox*, QTabletEvent*);
    using KComboBox_ActionEvent_Callback = void (*)(KComboBox*, QActionEvent*);
    using KComboBox_DragEnterEvent_Callback = void (*)(KComboBox*, QDragEnterEvent*);
    using KComboBox_DragMoveEvent_Callback = void (*)(KComboBox*, QDragMoveEvent*);
    using KComboBox_DragLeaveEvent_Callback = void (*)(KComboBox*, QDragLeaveEvent*);
    using KComboBox_DropEvent_Callback = void (*)(KComboBox*, QDropEvent*);
    using KComboBox_NativeEvent_Callback = bool (*)(KComboBox*, libqt_string, void*, intptr_t*);
    using KComboBox_Metric_Callback = int (*)(const KComboBox*, int);
    using KComboBox_InitPainter_Callback = void (*)(const KComboBox*, QPainter*);
    using KComboBox_Redirected_Callback = QPaintDevice* (*)(const KComboBox*, QPoint*);
    using KComboBox_SharedPainter_Callback = QPainter* (*)();
    using KComboBox_FocusNextPrevChild_Callback = bool (*)(KComboBox*, bool);
    using KComboBox_EventFilter_Callback = bool (*)(KComboBox*, QObject*, QEvent*);
    using KComboBox_TimerEvent_Callback = void (*)(KComboBox*, QTimerEvent*);
    using KComboBox_ChildEvent_Callback = void (*)(KComboBox*, QChildEvent*);
    using KComboBox_CustomEvent_Callback = void (*)(KComboBox*, QEvent*);
    using KComboBox_ConnectNotify_Callback = void (*)(KComboBox*, QMetaMethod*);
    using KComboBox_DisconnectNotify_Callback = void (*)(KComboBox*, QMetaMethod*);
    using KComboBox_SetCompletionObject_Callback = void (*)(KComboBox*, KCompletion*, bool);
    using KComboBox_SetHandleSignals_Callback = void (*)(KComboBox*, bool);
    using KComboBox_SetCompletionMode_Callback = void (*)(KComboBox*, int);
    using KComboBox_VirtualHook_Callback = void (*)(KComboBox*, int, void*);
    using KComboBox_UpdateMicroFocus_Callback = void (*)();
    using KComboBox_Create_Callback = void (*)();
    using KComboBox_Destroy_Callback = void (*)();
    using KComboBox_FocusNextChild_Callback = bool (*)();
    using KComboBox_FocusPreviousChild_Callback = bool (*)();
    using KComboBox_Sender_Callback = QObject* (*)();
    using KComboBox_SenderSignalIndex_Callback = int (*)();
    using KComboBox_Receivers_Callback = int (*)(const KComboBox*, const char*);
    using KComboBox_IsSignalConnected_Callback = bool (*)(const KComboBox*, QMetaMethod*);
    using KComboBox_GetDecodedMetricF_Callback = double (*)(const KComboBox*, int, int);
    using KComboBox_KeyBindingMap_Callback = libqt_map /* of int to libqt_list  of QKeySequence*  */ (*)();
    using KComboBox_SetKeyBindingMap_Callback = void (*)(KComboBox*, libqt_map /* of int to libqt_list  of QKeySequence*  */);
    using KComboBox_SetDelegate_Callback = void (*)(KComboBox*, KCompletionBase*);
    using KComboBox_Delegate_Callback = KCompletionBase* (*)();

  protected:
    // Instance callback storage
    KComboBox_Metacall_Callback kcombobox_metacall_callback = nullptr;
    KComboBox_SetAutoCompletion_Callback kcombobox_setautocompletion_callback = nullptr;
    KComboBox_SetLineEdit_Callback kcombobox_setlineedit_callback = nullptr;
    KComboBox_MinimumSizeHint_Callback kcombobox_minimumsizehint_callback = nullptr;
    KComboBox_SetCompletedText_Callback kcombobox_setcompletedtext_callback = nullptr;
    KComboBox_SetCompletedItems_Callback kcombobox_setcompleteditems_callback = nullptr;
    KComboBox_MakeCompletion_Callback kcombobox_makecompletion_callback = nullptr;
    KComboBox_SetCompletedText2_Callback kcombobox_setcompletedtext2_callback = nullptr;
    KComboBox_SetModel_Callback kcombobox_setmodel_callback = nullptr;
    KComboBox_SizeHint_Callback kcombobox_sizehint_callback = nullptr;
    KComboBox_ShowPopup_Callback kcombobox_showpopup_callback = nullptr;
    KComboBox_HidePopup_Callback kcombobox_hidepopup_callback = nullptr;
    KComboBox_Event_Callback kcombobox_event_callback = nullptr;
    KComboBox_InputMethodQuery_Callback kcombobox_inputmethodquery_callback = nullptr;
    KComboBox_FocusInEvent_Callback kcombobox_focusinevent_callback = nullptr;
    KComboBox_FocusOutEvent_Callback kcombobox_focusoutevent_callback = nullptr;
    KComboBox_ChangeEvent_Callback kcombobox_changeevent_callback = nullptr;
    KComboBox_ResizeEvent_Callback kcombobox_resizeevent_callback = nullptr;
    KComboBox_PaintEvent_Callback kcombobox_paintevent_callback = nullptr;
    KComboBox_ShowEvent_Callback kcombobox_showevent_callback = nullptr;
    KComboBox_HideEvent_Callback kcombobox_hideevent_callback = nullptr;
    KComboBox_MousePressEvent_Callback kcombobox_mousepressevent_callback = nullptr;
    KComboBox_MouseReleaseEvent_Callback kcombobox_mousereleaseevent_callback = nullptr;
    KComboBox_KeyPressEvent_Callback kcombobox_keypressevent_callback = nullptr;
    KComboBox_KeyReleaseEvent_Callback kcombobox_keyreleaseevent_callback = nullptr;
    KComboBox_WheelEvent_Callback kcombobox_wheelevent_callback = nullptr;
    KComboBox_ContextMenuEvent_Callback kcombobox_contextmenuevent_callback = nullptr;
    KComboBox_InputMethodEvent_Callback kcombobox_inputmethodevent_callback = nullptr;
    KComboBox_InitStyleOption_Callback kcombobox_initstyleoption_callback = nullptr;
    KComboBox_DevType_Callback kcombobox_devtype_callback = nullptr;
    KComboBox_SetVisible_Callback kcombobox_setvisible_callback = nullptr;
    KComboBox_HeightForWidth_Callback kcombobox_heightforwidth_callback = nullptr;
    KComboBox_HasHeightForWidth_Callback kcombobox_hasheightforwidth_callback = nullptr;
    KComboBox_PaintEngine_Callback kcombobox_paintengine_callback = nullptr;
    KComboBox_MouseDoubleClickEvent_Callback kcombobox_mousedoubleclickevent_callback = nullptr;
    KComboBox_MouseMoveEvent_Callback kcombobox_mousemoveevent_callback = nullptr;
    KComboBox_EnterEvent_Callback kcombobox_enterevent_callback = nullptr;
    KComboBox_LeaveEvent_Callback kcombobox_leaveevent_callback = nullptr;
    KComboBox_MoveEvent_Callback kcombobox_moveevent_callback = nullptr;
    KComboBox_CloseEvent_Callback kcombobox_closeevent_callback = nullptr;
    KComboBox_TabletEvent_Callback kcombobox_tabletevent_callback = nullptr;
    KComboBox_ActionEvent_Callback kcombobox_actionevent_callback = nullptr;
    KComboBox_DragEnterEvent_Callback kcombobox_dragenterevent_callback = nullptr;
    KComboBox_DragMoveEvent_Callback kcombobox_dragmoveevent_callback = nullptr;
    KComboBox_DragLeaveEvent_Callback kcombobox_dragleaveevent_callback = nullptr;
    KComboBox_DropEvent_Callback kcombobox_dropevent_callback = nullptr;
    KComboBox_NativeEvent_Callback kcombobox_nativeevent_callback = nullptr;
    KComboBox_Metric_Callback kcombobox_metric_callback = nullptr;
    KComboBox_InitPainter_Callback kcombobox_initpainter_callback = nullptr;
    KComboBox_Redirected_Callback kcombobox_redirected_callback = nullptr;
    KComboBox_SharedPainter_Callback kcombobox_sharedpainter_callback = nullptr;
    KComboBox_FocusNextPrevChild_Callback kcombobox_focusnextprevchild_callback = nullptr;
    KComboBox_EventFilter_Callback kcombobox_eventfilter_callback = nullptr;
    KComboBox_TimerEvent_Callback kcombobox_timerevent_callback = nullptr;
    KComboBox_ChildEvent_Callback kcombobox_childevent_callback = nullptr;
    KComboBox_CustomEvent_Callback kcombobox_customevent_callback = nullptr;
    KComboBox_ConnectNotify_Callback kcombobox_connectnotify_callback = nullptr;
    KComboBox_DisconnectNotify_Callback kcombobox_disconnectnotify_callback = nullptr;
    KComboBox_SetCompletionObject_Callback kcombobox_setcompletionobject_callback = nullptr;
    KComboBox_SetHandleSignals_Callback kcombobox_sethandlesignals_callback = nullptr;
    KComboBox_SetCompletionMode_Callback kcombobox_setcompletionmode_callback = nullptr;
    KComboBox_VirtualHook_Callback kcombobox_virtualhook_callback = nullptr;
    KComboBox_UpdateMicroFocus_Callback kcombobox_updatemicrofocus_callback = nullptr;
    KComboBox_Create_Callback kcombobox_create_callback = nullptr;
    KComboBox_Destroy_Callback kcombobox_destroy_callback = nullptr;
    KComboBox_FocusNextChild_Callback kcombobox_focusnextchild_callback = nullptr;
    KComboBox_FocusPreviousChild_Callback kcombobox_focuspreviouschild_callback = nullptr;
    KComboBox_Sender_Callback kcombobox_sender_callback = nullptr;
    KComboBox_SenderSignalIndex_Callback kcombobox_sendersignalindex_callback = nullptr;
    KComboBox_Receivers_Callback kcombobox_receivers_callback = nullptr;
    KComboBox_IsSignalConnected_Callback kcombobox_issignalconnected_callback = nullptr;
    KComboBox_GetDecodedMetricF_Callback kcombobox_getdecodedmetricf_callback = nullptr;
    KComboBox_KeyBindingMap_Callback kcombobox_keybindingmap_callback = nullptr;
    KComboBox_SetKeyBindingMap_Callback kcombobox_setkeybindingmap_callback = nullptr;
    KComboBox_SetDelegate_Callback kcombobox_setdelegate_callback = nullptr;
    KComboBox_Delegate_Callback kcombobox_delegate_callback = nullptr;

    // Instance base flags
    mutable bool kcombobox_metacall_isbase = false;
    mutable bool kcombobox_setautocompletion_isbase = false;
    mutable bool kcombobox_setlineedit_isbase = false;
    mutable bool kcombobox_minimumsizehint_isbase = false;
    mutable bool kcombobox_setcompletedtext_isbase = false;
    mutable bool kcombobox_setcompleteditems_isbase = false;
    mutable bool kcombobox_makecompletion_isbase = false;
    mutable bool kcombobox_setcompletedtext2_isbase = false;
    mutable bool kcombobox_setmodel_isbase = false;
    mutable bool kcombobox_sizehint_isbase = false;
    mutable bool kcombobox_showpopup_isbase = false;
    mutable bool kcombobox_hidepopup_isbase = false;
    mutable bool kcombobox_event_isbase = false;
    mutable bool kcombobox_inputmethodquery_isbase = false;
    mutable bool kcombobox_focusinevent_isbase = false;
    mutable bool kcombobox_focusoutevent_isbase = false;
    mutable bool kcombobox_changeevent_isbase = false;
    mutable bool kcombobox_resizeevent_isbase = false;
    mutable bool kcombobox_paintevent_isbase = false;
    mutable bool kcombobox_showevent_isbase = false;
    mutable bool kcombobox_hideevent_isbase = false;
    mutable bool kcombobox_mousepressevent_isbase = false;
    mutable bool kcombobox_mousereleaseevent_isbase = false;
    mutable bool kcombobox_keypressevent_isbase = false;
    mutable bool kcombobox_keyreleaseevent_isbase = false;
    mutable bool kcombobox_wheelevent_isbase = false;
    mutable bool kcombobox_contextmenuevent_isbase = false;
    mutable bool kcombobox_inputmethodevent_isbase = false;
    mutable bool kcombobox_initstyleoption_isbase = false;
    mutable bool kcombobox_devtype_isbase = false;
    mutable bool kcombobox_setvisible_isbase = false;
    mutable bool kcombobox_heightforwidth_isbase = false;
    mutable bool kcombobox_hasheightforwidth_isbase = false;
    mutable bool kcombobox_paintengine_isbase = false;
    mutable bool kcombobox_mousedoubleclickevent_isbase = false;
    mutable bool kcombobox_mousemoveevent_isbase = false;
    mutable bool kcombobox_enterevent_isbase = false;
    mutable bool kcombobox_leaveevent_isbase = false;
    mutable bool kcombobox_moveevent_isbase = false;
    mutable bool kcombobox_closeevent_isbase = false;
    mutable bool kcombobox_tabletevent_isbase = false;
    mutable bool kcombobox_actionevent_isbase = false;
    mutable bool kcombobox_dragenterevent_isbase = false;
    mutable bool kcombobox_dragmoveevent_isbase = false;
    mutable bool kcombobox_dragleaveevent_isbase = false;
    mutable bool kcombobox_dropevent_isbase = false;
    mutable bool kcombobox_nativeevent_isbase = false;
    mutable bool kcombobox_metric_isbase = false;
    mutable bool kcombobox_initpainter_isbase = false;
    mutable bool kcombobox_redirected_isbase = false;
    mutable bool kcombobox_sharedpainter_isbase = false;
    mutable bool kcombobox_focusnextprevchild_isbase = false;
    mutable bool kcombobox_eventfilter_isbase = false;
    mutable bool kcombobox_timerevent_isbase = false;
    mutable bool kcombobox_childevent_isbase = false;
    mutable bool kcombobox_customevent_isbase = false;
    mutable bool kcombobox_connectnotify_isbase = false;
    mutable bool kcombobox_disconnectnotify_isbase = false;
    mutable bool kcombobox_setcompletionobject_isbase = false;
    mutable bool kcombobox_sethandlesignals_isbase = false;
    mutable bool kcombobox_setcompletionmode_isbase = false;
    mutable bool kcombobox_virtualhook_isbase = false;
    mutable bool kcombobox_updatemicrofocus_isbase = false;
    mutable bool kcombobox_create_isbase = false;
    mutable bool kcombobox_destroy_isbase = false;
    mutable bool kcombobox_focusnextchild_isbase = false;
    mutable bool kcombobox_focuspreviouschild_isbase = false;
    mutable bool kcombobox_sender_isbase = false;
    mutable bool kcombobox_sendersignalindex_isbase = false;
    mutable bool kcombobox_receivers_isbase = false;
    mutable bool kcombobox_issignalconnected_isbase = false;
    mutable bool kcombobox_getdecodedmetricf_isbase = false;
    mutable bool kcombobox_keybindingmap_isbase = false;
    mutable bool kcombobox_setkeybindingmap_isbase = false;
    mutable bool kcombobox_setdelegate_isbase = false;
    mutable bool kcombobox_delegate_isbase = false;

  public:
    VirtualKComboBox(QWidget* parent) : KComboBox(parent) {};
    VirtualKComboBox() : KComboBox() {};
    VirtualKComboBox(bool rw) : KComboBox(rw) {};
    VirtualKComboBox(bool rw, QWidget* parent) : KComboBox(rw, parent) {};

    ~VirtualKComboBox() {
        kcombobox_metacall_callback = nullptr;
        kcombobox_setautocompletion_callback = nullptr;
        kcombobox_setlineedit_callback = nullptr;
        kcombobox_minimumsizehint_callback = nullptr;
        kcombobox_setcompletedtext_callback = nullptr;
        kcombobox_setcompleteditems_callback = nullptr;
        kcombobox_makecompletion_callback = nullptr;
        kcombobox_setcompletedtext2_callback = nullptr;
        kcombobox_setmodel_callback = nullptr;
        kcombobox_sizehint_callback = nullptr;
        kcombobox_showpopup_callback = nullptr;
        kcombobox_hidepopup_callback = nullptr;
        kcombobox_event_callback = nullptr;
        kcombobox_inputmethodquery_callback = nullptr;
        kcombobox_focusinevent_callback = nullptr;
        kcombobox_focusoutevent_callback = nullptr;
        kcombobox_changeevent_callback = nullptr;
        kcombobox_resizeevent_callback = nullptr;
        kcombobox_paintevent_callback = nullptr;
        kcombobox_showevent_callback = nullptr;
        kcombobox_hideevent_callback = nullptr;
        kcombobox_mousepressevent_callback = nullptr;
        kcombobox_mousereleaseevent_callback = nullptr;
        kcombobox_keypressevent_callback = nullptr;
        kcombobox_keyreleaseevent_callback = nullptr;
        kcombobox_wheelevent_callback = nullptr;
        kcombobox_contextmenuevent_callback = nullptr;
        kcombobox_inputmethodevent_callback = nullptr;
        kcombobox_initstyleoption_callback = nullptr;
        kcombobox_devtype_callback = nullptr;
        kcombobox_setvisible_callback = nullptr;
        kcombobox_heightforwidth_callback = nullptr;
        kcombobox_hasheightforwidth_callback = nullptr;
        kcombobox_paintengine_callback = nullptr;
        kcombobox_mousedoubleclickevent_callback = nullptr;
        kcombobox_mousemoveevent_callback = nullptr;
        kcombobox_enterevent_callback = nullptr;
        kcombobox_leaveevent_callback = nullptr;
        kcombobox_moveevent_callback = nullptr;
        kcombobox_closeevent_callback = nullptr;
        kcombobox_tabletevent_callback = nullptr;
        kcombobox_actionevent_callback = nullptr;
        kcombobox_dragenterevent_callback = nullptr;
        kcombobox_dragmoveevent_callback = nullptr;
        kcombobox_dragleaveevent_callback = nullptr;
        kcombobox_dropevent_callback = nullptr;
        kcombobox_nativeevent_callback = nullptr;
        kcombobox_metric_callback = nullptr;
        kcombobox_initpainter_callback = nullptr;
        kcombobox_redirected_callback = nullptr;
        kcombobox_sharedpainter_callback = nullptr;
        kcombobox_focusnextprevchild_callback = nullptr;
        kcombobox_eventfilter_callback = nullptr;
        kcombobox_timerevent_callback = nullptr;
        kcombobox_childevent_callback = nullptr;
        kcombobox_customevent_callback = nullptr;
        kcombobox_connectnotify_callback = nullptr;
        kcombobox_disconnectnotify_callback = nullptr;
        kcombobox_setcompletionobject_callback = nullptr;
        kcombobox_sethandlesignals_callback = nullptr;
        kcombobox_setcompletionmode_callback = nullptr;
        kcombobox_virtualhook_callback = nullptr;
        kcombobox_updatemicrofocus_callback = nullptr;
        kcombobox_create_callback = nullptr;
        kcombobox_destroy_callback = nullptr;
        kcombobox_focusnextchild_callback = nullptr;
        kcombobox_focuspreviouschild_callback = nullptr;
        kcombobox_sender_callback = nullptr;
        kcombobox_sendersignalindex_callback = nullptr;
        kcombobox_receivers_callback = nullptr;
        kcombobox_issignalconnected_callback = nullptr;
        kcombobox_getdecodedmetricf_callback = nullptr;
        kcombobox_keybindingmap_callback = nullptr;
        kcombobox_setkeybindingmap_callback = nullptr;
        kcombobox_setdelegate_callback = nullptr;
        kcombobox_delegate_callback = nullptr;
    }

    // Callback setters
    inline void setKComboBox_Metacall_Callback(KComboBox_Metacall_Callback cb) { kcombobox_metacall_callback = cb; }
    inline void setKComboBox_SetAutoCompletion_Callback(KComboBox_SetAutoCompletion_Callback cb) { kcombobox_setautocompletion_callback = cb; }
    inline void setKComboBox_SetLineEdit_Callback(KComboBox_SetLineEdit_Callback cb) { kcombobox_setlineedit_callback = cb; }
    inline void setKComboBox_MinimumSizeHint_Callback(KComboBox_MinimumSizeHint_Callback cb) { kcombobox_minimumsizehint_callback = cb; }
    inline void setKComboBox_SetCompletedText_Callback(KComboBox_SetCompletedText_Callback cb) { kcombobox_setcompletedtext_callback = cb; }
    inline void setKComboBox_SetCompletedItems_Callback(KComboBox_SetCompletedItems_Callback cb) { kcombobox_setcompleteditems_callback = cb; }
    inline void setKComboBox_MakeCompletion_Callback(KComboBox_MakeCompletion_Callback cb) { kcombobox_makecompletion_callback = cb; }
    inline void setKComboBox_SetCompletedText2_Callback(KComboBox_SetCompletedText2_Callback cb) { kcombobox_setcompletedtext2_callback = cb; }
    inline void setKComboBox_SetModel_Callback(KComboBox_SetModel_Callback cb) { kcombobox_setmodel_callback = cb; }
    inline void setKComboBox_SizeHint_Callback(KComboBox_SizeHint_Callback cb) { kcombobox_sizehint_callback = cb; }
    inline void setKComboBox_ShowPopup_Callback(KComboBox_ShowPopup_Callback cb) { kcombobox_showpopup_callback = cb; }
    inline void setKComboBox_HidePopup_Callback(KComboBox_HidePopup_Callback cb) { kcombobox_hidepopup_callback = cb; }
    inline void setKComboBox_Event_Callback(KComboBox_Event_Callback cb) { kcombobox_event_callback = cb; }
    inline void setKComboBox_InputMethodQuery_Callback(KComboBox_InputMethodQuery_Callback cb) { kcombobox_inputmethodquery_callback = cb; }
    inline void setKComboBox_FocusInEvent_Callback(KComboBox_FocusInEvent_Callback cb) { kcombobox_focusinevent_callback = cb; }
    inline void setKComboBox_FocusOutEvent_Callback(KComboBox_FocusOutEvent_Callback cb) { kcombobox_focusoutevent_callback = cb; }
    inline void setKComboBox_ChangeEvent_Callback(KComboBox_ChangeEvent_Callback cb) { kcombobox_changeevent_callback = cb; }
    inline void setKComboBox_ResizeEvent_Callback(KComboBox_ResizeEvent_Callback cb) { kcombobox_resizeevent_callback = cb; }
    inline void setKComboBox_PaintEvent_Callback(KComboBox_PaintEvent_Callback cb) { kcombobox_paintevent_callback = cb; }
    inline void setKComboBox_ShowEvent_Callback(KComboBox_ShowEvent_Callback cb) { kcombobox_showevent_callback = cb; }
    inline void setKComboBox_HideEvent_Callback(KComboBox_HideEvent_Callback cb) { kcombobox_hideevent_callback = cb; }
    inline void setKComboBox_MousePressEvent_Callback(KComboBox_MousePressEvent_Callback cb) { kcombobox_mousepressevent_callback = cb; }
    inline void setKComboBox_MouseReleaseEvent_Callback(KComboBox_MouseReleaseEvent_Callback cb) { kcombobox_mousereleaseevent_callback = cb; }
    inline void setKComboBox_KeyPressEvent_Callback(KComboBox_KeyPressEvent_Callback cb) { kcombobox_keypressevent_callback = cb; }
    inline void setKComboBox_KeyReleaseEvent_Callback(KComboBox_KeyReleaseEvent_Callback cb) { kcombobox_keyreleaseevent_callback = cb; }
    inline void setKComboBox_WheelEvent_Callback(KComboBox_WheelEvent_Callback cb) { kcombobox_wheelevent_callback = cb; }
    inline void setKComboBox_ContextMenuEvent_Callback(KComboBox_ContextMenuEvent_Callback cb) { kcombobox_contextmenuevent_callback = cb; }
    inline void setKComboBox_InputMethodEvent_Callback(KComboBox_InputMethodEvent_Callback cb) { kcombobox_inputmethodevent_callback = cb; }
    inline void setKComboBox_InitStyleOption_Callback(KComboBox_InitStyleOption_Callback cb) { kcombobox_initstyleoption_callback = cb; }
    inline void setKComboBox_DevType_Callback(KComboBox_DevType_Callback cb) { kcombobox_devtype_callback = cb; }
    inline void setKComboBox_SetVisible_Callback(KComboBox_SetVisible_Callback cb) { kcombobox_setvisible_callback = cb; }
    inline void setKComboBox_HeightForWidth_Callback(KComboBox_HeightForWidth_Callback cb) { kcombobox_heightforwidth_callback = cb; }
    inline void setKComboBox_HasHeightForWidth_Callback(KComboBox_HasHeightForWidth_Callback cb) { kcombobox_hasheightforwidth_callback = cb; }
    inline void setKComboBox_PaintEngine_Callback(KComboBox_PaintEngine_Callback cb) { kcombobox_paintengine_callback = cb; }
    inline void setKComboBox_MouseDoubleClickEvent_Callback(KComboBox_MouseDoubleClickEvent_Callback cb) { kcombobox_mousedoubleclickevent_callback = cb; }
    inline void setKComboBox_MouseMoveEvent_Callback(KComboBox_MouseMoveEvent_Callback cb) { kcombobox_mousemoveevent_callback = cb; }
    inline void setKComboBox_EnterEvent_Callback(KComboBox_EnterEvent_Callback cb) { kcombobox_enterevent_callback = cb; }
    inline void setKComboBox_LeaveEvent_Callback(KComboBox_LeaveEvent_Callback cb) { kcombobox_leaveevent_callback = cb; }
    inline void setKComboBox_MoveEvent_Callback(KComboBox_MoveEvent_Callback cb) { kcombobox_moveevent_callback = cb; }
    inline void setKComboBox_CloseEvent_Callback(KComboBox_CloseEvent_Callback cb) { kcombobox_closeevent_callback = cb; }
    inline void setKComboBox_TabletEvent_Callback(KComboBox_TabletEvent_Callback cb) { kcombobox_tabletevent_callback = cb; }
    inline void setKComboBox_ActionEvent_Callback(KComboBox_ActionEvent_Callback cb) { kcombobox_actionevent_callback = cb; }
    inline void setKComboBox_DragEnterEvent_Callback(KComboBox_DragEnterEvent_Callback cb) { kcombobox_dragenterevent_callback = cb; }
    inline void setKComboBox_DragMoveEvent_Callback(KComboBox_DragMoveEvent_Callback cb) { kcombobox_dragmoveevent_callback = cb; }
    inline void setKComboBox_DragLeaveEvent_Callback(KComboBox_DragLeaveEvent_Callback cb) { kcombobox_dragleaveevent_callback = cb; }
    inline void setKComboBox_DropEvent_Callback(KComboBox_DropEvent_Callback cb) { kcombobox_dropevent_callback = cb; }
    inline void setKComboBox_NativeEvent_Callback(KComboBox_NativeEvent_Callback cb) { kcombobox_nativeevent_callback = cb; }
    inline void setKComboBox_Metric_Callback(KComboBox_Metric_Callback cb) { kcombobox_metric_callback = cb; }
    inline void setKComboBox_InitPainter_Callback(KComboBox_InitPainter_Callback cb) { kcombobox_initpainter_callback = cb; }
    inline void setKComboBox_Redirected_Callback(KComboBox_Redirected_Callback cb) { kcombobox_redirected_callback = cb; }
    inline void setKComboBox_SharedPainter_Callback(KComboBox_SharedPainter_Callback cb) { kcombobox_sharedpainter_callback = cb; }
    inline void setKComboBox_FocusNextPrevChild_Callback(KComboBox_FocusNextPrevChild_Callback cb) { kcombobox_focusnextprevchild_callback = cb; }
    inline void setKComboBox_EventFilter_Callback(KComboBox_EventFilter_Callback cb) { kcombobox_eventfilter_callback = cb; }
    inline void setKComboBox_TimerEvent_Callback(KComboBox_TimerEvent_Callback cb) { kcombobox_timerevent_callback = cb; }
    inline void setKComboBox_ChildEvent_Callback(KComboBox_ChildEvent_Callback cb) { kcombobox_childevent_callback = cb; }
    inline void setKComboBox_CustomEvent_Callback(KComboBox_CustomEvent_Callback cb) { kcombobox_customevent_callback = cb; }
    inline void setKComboBox_ConnectNotify_Callback(KComboBox_ConnectNotify_Callback cb) { kcombobox_connectnotify_callback = cb; }
    inline void setKComboBox_DisconnectNotify_Callback(KComboBox_DisconnectNotify_Callback cb) { kcombobox_disconnectnotify_callback = cb; }
    inline void setKComboBox_SetCompletionObject_Callback(KComboBox_SetCompletionObject_Callback cb) { kcombobox_setcompletionobject_callback = cb; }
    inline void setKComboBox_SetHandleSignals_Callback(KComboBox_SetHandleSignals_Callback cb) { kcombobox_sethandlesignals_callback = cb; }
    inline void setKComboBox_SetCompletionMode_Callback(KComboBox_SetCompletionMode_Callback cb) { kcombobox_setcompletionmode_callback = cb; }
    inline void setKComboBox_VirtualHook_Callback(KComboBox_VirtualHook_Callback cb) { kcombobox_virtualhook_callback = cb; }
    inline void setKComboBox_UpdateMicroFocus_Callback(KComboBox_UpdateMicroFocus_Callback cb) { kcombobox_updatemicrofocus_callback = cb; }
    inline void setKComboBox_Create_Callback(KComboBox_Create_Callback cb) { kcombobox_create_callback = cb; }
    inline void setKComboBox_Destroy_Callback(KComboBox_Destroy_Callback cb) { kcombobox_destroy_callback = cb; }
    inline void setKComboBox_FocusNextChild_Callback(KComboBox_FocusNextChild_Callback cb) { kcombobox_focusnextchild_callback = cb; }
    inline void setKComboBox_FocusPreviousChild_Callback(KComboBox_FocusPreviousChild_Callback cb) { kcombobox_focuspreviouschild_callback = cb; }
    inline void setKComboBox_Sender_Callback(KComboBox_Sender_Callback cb) { kcombobox_sender_callback = cb; }
    inline void setKComboBox_SenderSignalIndex_Callback(KComboBox_SenderSignalIndex_Callback cb) { kcombobox_sendersignalindex_callback = cb; }
    inline void setKComboBox_Receivers_Callback(KComboBox_Receivers_Callback cb) { kcombobox_receivers_callback = cb; }
    inline void setKComboBox_IsSignalConnected_Callback(KComboBox_IsSignalConnected_Callback cb) { kcombobox_issignalconnected_callback = cb; }
    inline void setKComboBox_GetDecodedMetricF_Callback(KComboBox_GetDecodedMetricF_Callback cb) { kcombobox_getdecodedmetricf_callback = cb; }
    inline void setKComboBox_KeyBindingMap_Callback(KComboBox_KeyBindingMap_Callback cb) { kcombobox_keybindingmap_callback = cb; }
    inline void setKComboBox_SetKeyBindingMap_Callback(KComboBox_SetKeyBindingMap_Callback cb) { kcombobox_setkeybindingmap_callback = cb; }
    inline void setKComboBox_SetDelegate_Callback(KComboBox_SetDelegate_Callback cb) { kcombobox_setdelegate_callback = cb; }
    inline void setKComboBox_Delegate_Callback(KComboBox_Delegate_Callback cb) { kcombobox_delegate_callback = cb; }

    // Base flag setters
    inline void setKComboBox_Metacall_IsBase(bool value) const { kcombobox_metacall_isbase = value; }
    inline void setKComboBox_SetAutoCompletion_IsBase(bool value) const { kcombobox_setautocompletion_isbase = value; }
    inline void setKComboBox_SetLineEdit_IsBase(bool value) const { kcombobox_setlineedit_isbase = value; }
    inline void setKComboBox_MinimumSizeHint_IsBase(bool value) const { kcombobox_minimumsizehint_isbase = value; }
    inline void setKComboBox_SetCompletedText_IsBase(bool value) const { kcombobox_setcompletedtext_isbase = value; }
    inline void setKComboBox_SetCompletedItems_IsBase(bool value) const { kcombobox_setcompleteditems_isbase = value; }
    inline void setKComboBox_MakeCompletion_IsBase(bool value) const { kcombobox_makecompletion_isbase = value; }
    inline void setKComboBox_SetCompletedText2_IsBase(bool value) const { kcombobox_setcompletedtext2_isbase = value; }
    inline void setKComboBox_SetModel_IsBase(bool value) const { kcombobox_setmodel_isbase = value; }
    inline void setKComboBox_SizeHint_IsBase(bool value) const { kcombobox_sizehint_isbase = value; }
    inline void setKComboBox_ShowPopup_IsBase(bool value) const { kcombobox_showpopup_isbase = value; }
    inline void setKComboBox_HidePopup_IsBase(bool value) const { kcombobox_hidepopup_isbase = value; }
    inline void setKComboBox_Event_IsBase(bool value) const { kcombobox_event_isbase = value; }
    inline void setKComboBox_InputMethodQuery_IsBase(bool value) const { kcombobox_inputmethodquery_isbase = value; }
    inline void setKComboBox_FocusInEvent_IsBase(bool value) const { kcombobox_focusinevent_isbase = value; }
    inline void setKComboBox_FocusOutEvent_IsBase(bool value) const { kcombobox_focusoutevent_isbase = value; }
    inline void setKComboBox_ChangeEvent_IsBase(bool value) const { kcombobox_changeevent_isbase = value; }
    inline void setKComboBox_ResizeEvent_IsBase(bool value) const { kcombobox_resizeevent_isbase = value; }
    inline void setKComboBox_PaintEvent_IsBase(bool value) const { kcombobox_paintevent_isbase = value; }
    inline void setKComboBox_ShowEvent_IsBase(bool value) const { kcombobox_showevent_isbase = value; }
    inline void setKComboBox_HideEvent_IsBase(bool value) const { kcombobox_hideevent_isbase = value; }
    inline void setKComboBox_MousePressEvent_IsBase(bool value) const { kcombobox_mousepressevent_isbase = value; }
    inline void setKComboBox_MouseReleaseEvent_IsBase(bool value) const { kcombobox_mousereleaseevent_isbase = value; }
    inline void setKComboBox_KeyPressEvent_IsBase(bool value) const { kcombobox_keypressevent_isbase = value; }
    inline void setKComboBox_KeyReleaseEvent_IsBase(bool value) const { kcombobox_keyreleaseevent_isbase = value; }
    inline void setKComboBox_WheelEvent_IsBase(bool value) const { kcombobox_wheelevent_isbase = value; }
    inline void setKComboBox_ContextMenuEvent_IsBase(bool value) const { kcombobox_contextmenuevent_isbase = value; }
    inline void setKComboBox_InputMethodEvent_IsBase(bool value) const { kcombobox_inputmethodevent_isbase = value; }
    inline void setKComboBox_InitStyleOption_IsBase(bool value) const { kcombobox_initstyleoption_isbase = value; }
    inline void setKComboBox_DevType_IsBase(bool value) const { kcombobox_devtype_isbase = value; }
    inline void setKComboBox_SetVisible_IsBase(bool value) const { kcombobox_setvisible_isbase = value; }
    inline void setKComboBox_HeightForWidth_IsBase(bool value) const { kcombobox_heightforwidth_isbase = value; }
    inline void setKComboBox_HasHeightForWidth_IsBase(bool value) const { kcombobox_hasheightforwidth_isbase = value; }
    inline void setKComboBox_PaintEngine_IsBase(bool value) const { kcombobox_paintengine_isbase = value; }
    inline void setKComboBox_MouseDoubleClickEvent_IsBase(bool value) const { kcombobox_mousedoubleclickevent_isbase = value; }
    inline void setKComboBox_MouseMoveEvent_IsBase(bool value) const { kcombobox_mousemoveevent_isbase = value; }
    inline void setKComboBox_EnterEvent_IsBase(bool value) const { kcombobox_enterevent_isbase = value; }
    inline void setKComboBox_LeaveEvent_IsBase(bool value) const { kcombobox_leaveevent_isbase = value; }
    inline void setKComboBox_MoveEvent_IsBase(bool value) const { kcombobox_moveevent_isbase = value; }
    inline void setKComboBox_CloseEvent_IsBase(bool value) const { kcombobox_closeevent_isbase = value; }
    inline void setKComboBox_TabletEvent_IsBase(bool value) const { kcombobox_tabletevent_isbase = value; }
    inline void setKComboBox_ActionEvent_IsBase(bool value) const { kcombobox_actionevent_isbase = value; }
    inline void setKComboBox_DragEnterEvent_IsBase(bool value) const { kcombobox_dragenterevent_isbase = value; }
    inline void setKComboBox_DragMoveEvent_IsBase(bool value) const { kcombobox_dragmoveevent_isbase = value; }
    inline void setKComboBox_DragLeaveEvent_IsBase(bool value) const { kcombobox_dragleaveevent_isbase = value; }
    inline void setKComboBox_DropEvent_IsBase(bool value) const { kcombobox_dropevent_isbase = value; }
    inline void setKComboBox_NativeEvent_IsBase(bool value) const { kcombobox_nativeevent_isbase = value; }
    inline void setKComboBox_Metric_IsBase(bool value) const { kcombobox_metric_isbase = value; }
    inline void setKComboBox_InitPainter_IsBase(bool value) const { kcombobox_initpainter_isbase = value; }
    inline void setKComboBox_Redirected_IsBase(bool value) const { kcombobox_redirected_isbase = value; }
    inline void setKComboBox_SharedPainter_IsBase(bool value) const { kcombobox_sharedpainter_isbase = value; }
    inline void setKComboBox_FocusNextPrevChild_IsBase(bool value) const { kcombobox_focusnextprevchild_isbase = value; }
    inline void setKComboBox_EventFilter_IsBase(bool value) const { kcombobox_eventfilter_isbase = value; }
    inline void setKComboBox_TimerEvent_IsBase(bool value) const { kcombobox_timerevent_isbase = value; }
    inline void setKComboBox_ChildEvent_IsBase(bool value) const { kcombobox_childevent_isbase = value; }
    inline void setKComboBox_CustomEvent_IsBase(bool value) const { kcombobox_customevent_isbase = value; }
    inline void setKComboBox_ConnectNotify_IsBase(bool value) const { kcombobox_connectnotify_isbase = value; }
    inline void setKComboBox_DisconnectNotify_IsBase(bool value) const { kcombobox_disconnectnotify_isbase = value; }
    inline void setKComboBox_SetCompletionObject_IsBase(bool value) const { kcombobox_setcompletionobject_isbase = value; }
    inline void setKComboBox_SetHandleSignals_IsBase(bool value) const { kcombobox_sethandlesignals_isbase = value; }
    inline void setKComboBox_SetCompletionMode_IsBase(bool value) const { kcombobox_setcompletionmode_isbase = value; }
    inline void setKComboBox_VirtualHook_IsBase(bool value) const { kcombobox_virtualhook_isbase = value; }
    inline void setKComboBox_UpdateMicroFocus_IsBase(bool value) const { kcombobox_updatemicrofocus_isbase = value; }
    inline void setKComboBox_Create_IsBase(bool value) const { kcombobox_create_isbase = value; }
    inline void setKComboBox_Destroy_IsBase(bool value) const { kcombobox_destroy_isbase = value; }
    inline void setKComboBox_FocusNextChild_IsBase(bool value) const { kcombobox_focusnextchild_isbase = value; }
    inline void setKComboBox_FocusPreviousChild_IsBase(bool value) const { kcombobox_focuspreviouschild_isbase = value; }
    inline void setKComboBox_Sender_IsBase(bool value) const { kcombobox_sender_isbase = value; }
    inline void setKComboBox_SenderSignalIndex_IsBase(bool value) const { kcombobox_sendersignalindex_isbase = value; }
    inline void setKComboBox_Receivers_IsBase(bool value) const { kcombobox_receivers_isbase = value; }
    inline void setKComboBox_IsSignalConnected_IsBase(bool value) const { kcombobox_issignalconnected_isbase = value; }
    inline void setKComboBox_GetDecodedMetricF_IsBase(bool value) const { kcombobox_getdecodedmetricf_isbase = value; }
    inline void setKComboBox_KeyBindingMap_IsBase(bool value) const { kcombobox_keybindingmap_isbase = value; }
    inline void setKComboBox_SetKeyBindingMap_IsBase(bool value) const { kcombobox_setkeybindingmap_isbase = value; }
    inline void setKComboBox_SetDelegate_IsBase(bool value) const { kcombobox_setdelegate_isbase = value; }
    inline void setKComboBox_Delegate_IsBase(bool value) const { kcombobox_delegate_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcombobox_metacall_isbase) {
            kcombobox_metacall_isbase = false;
            return KComboBox::qt_metacall(param1, param2, param3);
        } else if (kcombobox_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kcombobox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KComboBox::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoCompletion(bool autocomplete) override {
        if (kcombobox_setautocompletion_isbase) {
            kcombobox_setautocompletion_isbase = false;
            KComboBox::setAutoCompletion(autocomplete);
        } else if (kcombobox_setautocompletion_callback != nullptr) {
            bool cbval1 = autocomplete;

            kcombobox_setautocompletion_callback(this, cbval1);
        } else {
            KComboBox::setAutoCompletion(autocomplete);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLineEdit(QLineEdit* lineEdit) override {
        if (kcombobox_setlineedit_isbase) {
            kcombobox_setlineedit_isbase = false;
            KComboBox::setLineEdit(lineEdit);
        } else if (kcombobox_setlineedit_callback != nullptr) {
            QLineEdit* cbval1 = lineEdit;

            kcombobox_setlineedit_callback(this, cbval1);
        } else {
            KComboBox::setLineEdit(lineEdit);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kcombobox_minimumsizehint_isbase) {
            kcombobox_minimumsizehint_isbase = false;
            return KComboBox::minimumSizeHint();
        } else if (kcombobox_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kcombobox_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KComboBox::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedText(const QString& completedText) override {
        if (kcombobox_setcompletedtext_isbase) {
            kcombobox_setcompletedtext_isbase = false;
            KComboBox::setCompletedText(completedText);
        } else if (kcombobox_setcompletedtext_callback != nullptr) {
            const QString completedText_ret = completedText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray completedText_b = completedText_ret.toUtf8();
            libqt_string completedText_str;
            completedText_str.len = completedText_b.length();
            completedText_str.data = static_cast<const char*>(malloc(completedText_str.len + 1));
            memcpy((void*)completedText_str.data, completedText_b.data(), completedText_str.len);
            ((char*)completedText_str.data)[completedText_str.len] = '\0';
            libqt_string cbval1 = completedText_str;

            kcombobox_setcompletedtext_callback(this, cbval1);
        } else {
            KComboBox::setCompletedText(completedText);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedItems(const QList<QString>& items, bool autoSuggest) override {
        if (kcombobox_setcompleteditems_isbase) {
            kcombobox_setcompleteditems_isbase = false;
            KComboBox::setCompletedItems(items, autoSuggest);
        } else if (kcombobox_setcompleteditems_callback != nullptr) {
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

            kcombobox_setcompleteditems_callback(this, cbval1, cbval2);
        } else {
            KComboBox::setCompletedItems(items, autoSuggest);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void makeCompletion(const QString& param1) override {
        if (kcombobox_makecompletion_isbase) {
            kcombobox_makecompletion_isbase = false;
            KComboBox::makeCompletion(param1);
        } else if (kcombobox_makecompletion_callback != nullptr) {
            const QString param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            libqt_string param1_str;
            param1_str.len = param1_b.length();
            param1_str.data = static_cast<const char*>(malloc(param1_str.len + 1));
            memcpy((void*)param1_str.data, param1_b.data(), param1_str.len);
            ((char*)param1_str.data)[param1_str.len] = '\0';
            libqt_string cbval1 = param1_str;

            kcombobox_makecompletion_callback(this, cbval1);
        } else {
            KComboBox::makeCompletion(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedText(const QString& text, bool marked) override {
        if (kcombobox_setcompletedtext2_isbase) {
            kcombobox_setcompletedtext2_isbase = false;
            KComboBox::setCompletedText(text, marked);
        } else if (kcombobox_setcompletedtext2_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;
            bool cbval2 = marked;

            kcombobox_setcompletedtext2_callback(this, cbval1, cbval2);
        } else {
            KComboBox::setCompletedText(text, marked);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (kcombobox_setmodel_isbase) {
            kcombobox_setmodel_isbase = false;
            KComboBox::setModel(model);
        } else if (kcombobox_setmodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = model;

            kcombobox_setmodel_callback(this, cbval1);
        } else {
            KComboBox::setModel(model);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kcombobox_sizehint_isbase) {
            kcombobox_sizehint_isbase = false;
            return KComboBox::sizeHint();
        } else if (kcombobox_sizehint_callback != nullptr) {
            QSize* callback_ret = kcombobox_sizehint_callback();
            return *callback_ret;
        } else {
            return KComboBox::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (kcombobox_showpopup_isbase) {
            kcombobox_showpopup_isbase = false;
            KComboBox::showPopup();
        } else if (kcombobox_showpopup_callback != nullptr) {
            kcombobox_showpopup_callback();
        } else {
            KComboBox::showPopup();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (kcombobox_hidepopup_isbase) {
            kcombobox_hidepopup_isbase = false;
            KComboBox::hidePopup();
        } else if (kcombobox_hidepopup_callback != nullptr) {
            kcombobox_hidepopup_callback();
        } else {
            KComboBox::hidePopup();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcombobox_event_isbase) {
            kcombobox_event_isbase = false;
            return KComboBox::event(event);
        } else if (kcombobox_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kcombobox_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KComboBox::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kcombobox_inputmethodquery_isbase) {
            kcombobox_inputmethodquery_isbase = false;
            return KComboBox::inputMethodQuery(param1);
        } else if (kcombobox_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kcombobox_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KComboBox::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (kcombobox_focusinevent_isbase) {
            kcombobox_focusinevent_isbase = false;
            KComboBox::focusInEvent(e);
        } else if (kcombobox_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            kcombobox_focusinevent_callback(this, cbval1);
        } else {
            KComboBox::focusInEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (kcombobox_focusoutevent_isbase) {
            kcombobox_focusoutevent_isbase = false;
            KComboBox::focusOutEvent(e);
        } else if (kcombobox_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            kcombobox_focusoutevent_callback(this, cbval1);
        } else {
            KComboBox::focusOutEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kcombobox_changeevent_isbase) {
            kcombobox_changeevent_isbase = false;
            KComboBox::changeEvent(e);
        } else if (kcombobox_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            kcombobox_changeevent_callback(this, cbval1);
        } else {
            KComboBox::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (kcombobox_resizeevent_isbase) {
            kcombobox_resizeevent_isbase = false;
            KComboBox::resizeEvent(e);
        } else if (kcombobox_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = e;

            kcombobox_resizeevent_callback(this, cbval1);
        } else {
            KComboBox::resizeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (kcombobox_paintevent_isbase) {
            kcombobox_paintevent_isbase = false;
            KComboBox::paintEvent(e);
        } else if (kcombobox_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = e;

            kcombobox_paintevent_callback(this, cbval1);
        } else {
            KComboBox::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (kcombobox_showevent_isbase) {
            kcombobox_showevent_isbase = false;
            KComboBox::showEvent(e);
        } else if (kcombobox_showevent_callback != nullptr) {
            QShowEvent* cbval1 = e;

            kcombobox_showevent_callback(this, cbval1);
        } else {
            KComboBox::showEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (kcombobox_hideevent_isbase) {
            kcombobox_hideevent_isbase = false;
            KComboBox::hideEvent(e);
        } else if (kcombobox_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = e;

            kcombobox_hideevent_callback(this, cbval1);
        } else {
            KComboBox::hideEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (kcombobox_mousepressevent_isbase) {
            kcombobox_mousepressevent_isbase = false;
            KComboBox::mousePressEvent(e);
        } else if (kcombobox_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            kcombobox_mousepressevent_callback(this, cbval1);
        } else {
            KComboBox::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kcombobox_mousereleaseevent_isbase) {
            kcombobox_mousereleaseevent_isbase = false;
            KComboBox::mouseReleaseEvent(e);
        } else if (kcombobox_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            kcombobox_mousereleaseevent_callback(this, cbval1);
        } else {
            KComboBox::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (kcombobox_keypressevent_isbase) {
            kcombobox_keypressevent_isbase = false;
            KComboBox::keyPressEvent(e);
        } else if (kcombobox_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            kcombobox_keypressevent_callback(this, cbval1);
        } else {
            KComboBox::keyPressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (kcombobox_keyreleaseevent_isbase) {
            kcombobox_keyreleaseevent_isbase = false;
            KComboBox::keyReleaseEvent(e);
        } else if (kcombobox_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            kcombobox_keyreleaseevent_callback(this, cbval1);
        } else {
            KComboBox::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (kcombobox_wheelevent_isbase) {
            kcombobox_wheelevent_isbase = false;
            KComboBox::wheelEvent(e);
        } else if (kcombobox_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = e;

            kcombobox_wheelevent_callback(this, cbval1);
        } else {
            KComboBox::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (kcombobox_contextmenuevent_isbase) {
            kcombobox_contextmenuevent_isbase = false;
            KComboBox::contextMenuEvent(e);
        } else if (kcombobox_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = e;

            kcombobox_contextmenuevent_callback(this, cbval1);
        } else {
            KComboBox::contextMenuEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kcombobox_inputmethodevent_isbase) {
            kcombobox_inputmethodevent_isbase = false;
            KComboBox::inputMethodEvent(param1);
        } else if (kcombobox_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kcombobox_inputmethodevent_callback(this, cbval1);
        } else {
            KComboBox::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (kcombobox_initstyleoption_isbase) {
            kcombobox_initstyleoption_isbase = false;
            KComboBox::initStyleOption(option);
        } else if (kcombobox_initstyleoption_callback != nullptr) {
            QStyleOptionComboBox* cbval1 = option;

            kcombobox_initstyleoption_callback(this, cbval1);
        } else {
            KComboBox::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kcombobox_devtype_isbase) {
            kcombobox_devtype_isbase = false;
            return KComboBox::devType();
        } else if (kcombobox_devtype_callback != nullptr) {
            int callback_ret = kcombobox_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KComboBox::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kcombobox_setvisible_isbase) {
            kcombobox_setvisible_isbase = false;
            KComboBox::setVisible(visible);
        } else if (kcombobox_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kcombobox_setvisible_callback(this, cbval1);
        } else {
            KComboBox::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kcombobox_heightforwidth_isbase) {
            kcombobox_heightforwidth_isbase = false;
            return KComboBox::heightForWidth(param1);
        } else if (kcombobox_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kcombobox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KComboBox::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kcombobox_hasheightforwidth_isbase) {
            kcombobox_hasheightforwidth_isbase = false;
            return KComboBox::hasHeightForWidth();
        } else if (kcombobox_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kcombobox_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KComboBox::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kcombobox_paintengine_isbase) {
            kcombobox_paintengine_isbase = false;
            return KComboBox::paintEngine();
        } else if (kcombobox_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kcombobox_paintengine_callback();
            return callback_ret;
        } else {
            return KComboBox::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kcombobox_mousedoubleclickevent_isbase) {
            kcombobox_mousedoubleclickevent_isbase = false;
            KComboBox::mouseDoubleClickEvent(event);
        } else if (kcombobox_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcombobox_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KComboBox::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kcombobox_mousemoveevent_isbase) {
            kcombobox_mousemoveevent_isbase = false;
            KComboBox::mouseMoveEvent(event);
        } else if (kcombobox_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kcombobox_mousemoveevent_callback(this, cbval1);
        } else {
            KComboBox::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kcombobox_enterevent_isbase) {
            kcombobox_enterevent_isbase = false;
            KComboBox::enterEvent(event);
        } else if (kcombobox_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kcombobox_enterevent_callback(this, cbval1);
        } else {
            KComboBox::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kcombobox_leaveevent_isbase) {
            kcombobox_leaveevent_isbase = false;
            KComboBox::leaveEvent(event);
        } else if (kcombobox_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcombobox_leaveevent_callback(this, cbval1);
        } else {
            KComboBox::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kcombobox_moveevent_isbase) {
            kcombobox_moveevent_isbase = false;
            KComboBox::moveEvent(event);
        } else if (kcombobox_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kcombobox_moveevent_callback(this, cbval1);
        } else {
            KComboBox::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kcombobox_closeevent_isbase) {
            kcombobox_closeevent_isbase = false;
            KComboBox::closeEvent(event);
        } else if (kcombobox_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kcombobox_closeevent_callback(this, cbval1);
        } else {
            KComboBox::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kcombobox_tabletevent_isbase) {
            kcombobox_tabletevent_isbase = false;
            KComboBox::tabletEvent(event);
        } else if (kcombobox_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kcombobox_tabletevent_callback(this, cbval1);
        } else {
            KComboBox::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kcombobox_actionevent_isbase) {
            kcombobox_actionevent_isbase = false;
            KComboBox::actionEvent(event);
        } else if (kcombobox_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kcombobox_actionevent_callback(this, cbval1);
        } else {
            KComboBox::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kcombobox_dragenterevent_isbase) {
            kcombobox_dragenterevent_isbase = false;
            KComboBox::dragEnterEvent(event);
        } else if (kcombobox_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kcombobox_dragenterevent_callback(this, cbval1);
        } else {
            KComboBox::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kcombobox_dragmoveevent_isbase) {
            kcombobox_dragmoveevent_isbase = false;
            KComboBox::dragMoveEvent(event);
        } else if (kcombobox_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kcombobox_dragmoveevent_callback(this, cbval1);
        } else {
            KComboBox::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kcombobox_dragleaveevent_isbase) {
            kcombobox_dragleaveevent_isbase = false;
            KComboBox::dragLeaveEvent(event);
        } else if (kcombobox_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kcombobox_dragleaveevent_callback(this, cbval1);
        } else {
            KComboBox::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kcombobox_dropevent_isbase) {
            kcombobox_dropevent_isbase = false;
            KComboBox::dropEvent(event);
        } else if (kcombobox_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kcombobox_dropevent_callback(this, cbval1);
        } else {
            KComboBox::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kcombobox_nativeevent_isbase) {
            kcombobox_nativeevent_isbase = false;
            return KComboBox::nativeEvent(eventType, message, result);
        } else if (kcombobox_nativeevent_callback != nullptr) {
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

            bool callback_ret = kcombobox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KComboBox::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kcombobox_metric_isbase) {
            kcombobox_metric_isbase = false;
            return KComboBox::metric(param1);
        } else if (kcombobox_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kcombobox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KComboBox::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kcombobox_initpainter_isbase) {
            kcombobox_initpainter_isbase = false;
            KComboBox::initPainter(painter);
        } else if (kcombobox_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kcombobox_initpainter_callback(this, cbval1);
        } else {
            KComboBox::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kcombobox_redirected_isbase) {
            kcombobox_redirected_isbase = false;
            return KComboBox::redirected(offset);
        } else if (kcombobox_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kcombobox_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KComboBox::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kcombobox_sharedpainter_isbase) {
            kcombobox_sharedpainter_isbase = false;
            return KComboBox::sharedPainter();
        } else if (kcombobox_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kcombobox_sharedpainter_callback();
            return callback_ret;
        } else {
            return KComboBox::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kcombobox_focusnextprevchild_isbase) {
            kcombobox_focusnextprevchild_isbase = false;
            return KComboBox::focusNextPrevChild(next);
        } else if (kcombobox_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kcombobox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KComboBox::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcombobox_eventfilter_isbase) {
            kcombobox_eventfilter_isbase = false;
            return KComboBox::eventFilter(watched, event);
        } else if (kcombobox_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kcombobox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KComboBox::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcombobox_timerevent_isbase) {
            kcombobox_timerevent_isbase = false;
            KComboBox::timerEvent(event);
        } else if (kcombobox_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kcombobox_timerevent_callback(this, cbval1);
        } else {
            KComboBox::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcombobox_childevent_isbase) {
            kcombobox_childevent_isbase = false;
            KComboBox::childEvent(event);
        } else if (kcombobox_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kcombobox_childevent_callback(this, cbval1);
        } else {
            KComboBox::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcombobox_customevent_isbase) {
            kcombobox_customevent_isbase = false;
            KComboBox::customEvent(event);
        } else if (kcombobox_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcombobox_customevent_callback(this, cbval1);
        } else {
            KComboBox::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcombobox_connectnotify_isbase) {
            kcombobox_connectnotify_isbase = false;
            KComboBox::connectNotify(signal);
        } else if (kcombobox_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcombobox_connectnotify_callback(this, cbval1);
        } else {
            KComboBox::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcombobox_disconnectnotify_isbase) {
            kcombobox_disconnectnotify_isbase = false;
            KComboBox::disconnectNotify(signal);
        } else if (kcombobox_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcombobox_disconnectnotify_callback(this, cbval1);
        } else {
            KComboBox::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionObject(KCompletion* completionObject, bool handleSignals) override {
        if (kcombobox_setcompletionobject_isbase) {
            kcombobox_setcompletionobject_isbase = false;
            KComboBox::setCompletionObject(completionObject, handleSignals);
        } else if (kcombobox_setcompletionobject_callback != nullptr) {
            KCompletion* cbval1 = completionObject;
            bool cbval2 = handleSignals;

            kcombobox_setcompletionobject_callback(this, cbval1, cbval2);
        } else {
            KComboBox::setCompletionObject(completionObject, handleSignals);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHandleSignals(bool handle) override {
        if (kcombobox_sethandlesignals_isbase) {
            kcombobox_sethandlesignals_isbase = false;
            KComboBox::setHandleSignals(handle);
        } else if (kcombobox_sethandlesignals_callback != nullptr) {
            bool cbval1 = handle;

            kcombobox_sethandlesignals_callback(this, cbval1);
        } else {
            KComboBox::setHandleSignals(handle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionMode(KCompletion::CompletionMode mode) override {
        if (kcombobox_setcompletionmode_isbase) {
            kcombobox_setcompletionmode_isbase = false;
            KComboBox::setCompletionMode(mode);
        } else if (kcombobox_setcompletionmode_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            kcombobox_setcompletionmode_callback(this, cbval1);
        } else {
            KComboBox::setCompletionMode(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kcombobox_virtualhook_isbase) {
            kcombobox_virtualhook_isbase = false;
            KComboBox::virtual_hook(id, data);
        } else if (kcombobox_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            kcombobox_virtualhook_callback(this, cbval1, cbval2);
        } else {
            KComboBox::virtual_hook(id, data);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kcombobox_updatemicrofocus_isbase) {
            kcombobox_updatemicrofocus_isbase = false;
            KComboBox::updateMicroFocus();
        } else if (kcombobox_updatemicrofocus_callback != nullptr) {
            kcombobox_updatemicrofocus_callback();
        } else {
            KComboBox::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kcombobox_create_isbase) {
            kcombobox_create_isbase = false;
            KComboBox::create();
        } else if (kcombobox_create_callback != nullptr) {
            kcombobox_create_callback();
        } else {
            KComboBox::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kcombobox_destroy_isbase) {
            kcombobox_destroy_isbase = false;
            KComboBox::destroy();
        } else if (kcombobox_destroy_callback != nullptr) {
            kcombobox_destroy_callback();
        } else {
            KComboBox::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kcombobox_focusnextchild_isbase) {
            kcombobox_focusnextchild_isbase = false;
            return KComboBox::focusNextChild();
        } else if (kcombobox_focusnextchild_callback != nullptr) {
            bool callback_ret = kcombobox_focusnextchild_callback();
            return callback_ret;
        } else {
            return KComboBox::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kcombobox_focuspreviouschild_isbase) {
            kcombobox_focuspreviouschild_isbase = false;
            return KComboBox::focusPreviousChild();
        } else if (kcombobox_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kcombobox_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KComboBox::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcombobox_sender_isbase) {
            kcombobox_sender_isbase = false;
            return KComboBox::sender();
        } else if (kcombobox_sender_callback != nullptr) {
            QObject* callback_ret = kcombobox_sender_callback();
            return callback_ret;
        } else {
            return KComboBox::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcombobox_sendersignalindex_isbase) {
            kcombobox_sendersignalindex_isbase = false;
            return KComboBox::senderSignalIndex();
        } else if (kcombobox_sendersignalindex_callback != nullptr) {
            int callback_ret = kcombobox_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KComboBox::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcombobox_receivers_isbase) {
            kcombobox_receivers_isbase = false;
            return KComboBox::receivers(signal);
        } else if (kcombobox_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kcombobox_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KComboBox::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcombobox_issignalconnected_isbase) {
            kcombobox_issignalconnected_isbase = false;
            return KComboBox::isSignalConnected(signal);
        } else if (kcombobox_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kcombobox_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KComboBox::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kcombobox_getdecodedmetricf_isbase) {
            kcombobox_getdecodedmetricf_isbase = false;
            return KComboBox::getDecodedMetricF(metricA, metricB);
        } else if (kcombobox_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kcombobox_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KComboBox::getDecodedMetricF(metricA, metricB);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> keyBindingMap() const {
        if (kcombobox_keybindingmap_isbase) {
            kcombobox_keybindingmap_isbase = false;
            return KComboBox::keyBindingMap();
        } else if (kcombobox_keybindingmap_callback != nullptr) {
            libqt_map /* of int to libqt_list  of QKeySequence*  */ callback_ret = kcombobox_keybindingmap_callback();
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
            return KComboBox::keyBindingMap();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setKeyBindingMap(QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> keyBindingMap) {
        if (kcombobox_setkeybindingmap_isbase) {
            kcombobox_setkeybindingmap_isbase = false;
            KComboBox::setKeyBindingMap(keyBindingMap);
        } else if (kcombobox_setkeybindingmap_callback != nullptr) {
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

            kcombobox_setkeybindingmap_callback(this, cbval1);
        } else {
            KComboBox::setKeyBindingMap(keyBindingMap);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDelegate(KCompletionBase* delegate) {
        if (kcombobox_setdelegate_isbase) {
            kcombobox_setdelegate_isbase = false;
            KComboBox::setDelegate(delegate);
        } else if (kcombobox_setdelegate_callback != nullptr) {
            KCompletionBase* cbval1 = delegate;

            kcombobox_setdelegate_callback(this, cbval1);
        } else {
            KComboBox::setDelegate(delegate);
        }
    }

    // Virtual method for C ABI access and custom callback
    KCompletionBase* delegate() const {
        if (kcombobox_delegate_isbase) {
            kcombobox_delegate_isbase = false;
            return KComboBox::delegate();
        } else if (kcombobox_delegate_callback != nullptr) {
            KCompletionBase* callback_ret = kcombobox_delegate_callback();
            return callback_ret;
        } else {
            return KComboBox::delegate();
        }
    }

    // Friend functions
    friend void KComboBox_MakeCompletion(KComboBox* self, const libqt_string param1);
    friend void KComboBox_QBaseMakeCompletion(KComboBox* self, const libqt_string param1);
    friend void KComboBox_SetCompletedText2(KComboBox* self, const libqt_string text, bool marked);
    friend void KComboBox_QBaseSetCompletedText2(KComboBox* self, const libqt_string text, bool marked);
    friend void KComboBox_FocusInEvent(KComboBox* self, QFocusEvent* e);
    friend void KComboBox_QBaseFocusInEvent(KComboBox* self, QFocusEvent* e);
    friend void KComboBox_FocusOutEvent(KComboBox* self, QFocusEvent* e);
    friend void KComboBox_QBaseFocusOutEvent(KComboBox* self, QFocusEvent* e);
    friend void KComboBox_ChangeEvent(KComboBox* self, QEvent* e);
    friend void KComboBox_QBaseChangeEvent(KComboBox* self, QEvent* e);
    friend void KComboBox_ResizeEvent(KComboBox* self, QResizeEvent* e);
    friend void KComboBox_QBaseResizeEvent(KComboBox* self, QResizeEvent* e);
    friend void KComboBox_PaintEvent(KComboBox* self, QPaintEvent* e);
    friend void KComboBox_QBasePaintEvent(KComboBox* self, QPaintEvent* e);
    friend void KComboBox_ShowEvent(KComboBox* self, QShowEvent* e);
    friend void KComboBox_QBaseShowEvent(KComboBox* self, QShowEvent* e);
    friend void KComboBox_HideEvent(KComboBox* self, QHideEvent* e);
    friend void KComboBox_QBaseHideEvent(KComboBox* self, QHideEvent* e);
    friend void KComboBox_MousePressEvent(KComboBox* self, QMouseEvent* e);
    friend void KComboBox_QBaseMousePressEvent(KComboBox* self, QMouseEvent* e);
    friend void KComboBox_MouseReleaseEvent(KComboBox* self, QMouseEvent* e);
    friend void KComboBox_QBaseMouseReleaseEvent(KComboBox* self, QMouseEvent* e);
    friend void KComboBox_KeyPressEvent(KComboBox* self, QKeyEvent* e);
    friend void KComboBox_QBaseKeyPressEvent(KComboBox* self, QKeyEvent* e);
    friend void KComboBox_KeyReleaseEvent(KComboBox* self, QKeyEvent* e);
    friend void KComboBox_QBaseKeyReleaseEvent(KComboBox* self, QKeyEvent* e);
    friend void KComboBox_WheelEvent(KComboBox* self, QWheelEvent* e);
    friend void KComboBox_QBaseWheelEvent(KComboBox* self, QWheelEvent* e);
    friend void KComboBox_ContextMenuEvent(KComboBox* self, QContextMenuEvent* e);
    friend void KComboBox_QBaseContextMenuEvent(KComboBox* self, QContextMenuEvent* e);
    friend void KComboBox_InputMethodEvent(KComboBox* self, QInputMethodEvent* param1);
    friend void KComboBox_QBaseInputMethodEvent(KComboBox* self, QInputMethodEvent* param1);
    friend void KComboBox_InitStyleOption(const KComboBox* self, QStyleOptionComboBox* option);
    friend void KComboBox_QBaseInitStyleOption(const KComboBox* self, QStyleOptionComboBox* option);
    friend void KComboBox_MouseDoubleClickEvent(KComboBox* self, QMouseEvent* event);
    friend void KComboBox_QBaseMouseDoubleClickEvent(KComboBox* self, QMouseEvent* event);
    friend void KComboBox_MouseMoveEvent(KComboBox* self, QMouseEvent* event);
    friend void KComboBox_QBaseMouseMoveEvent(KComboBox* self, QMouseEvent* event);
    friend void KComboBox_EnterEvent(KComboBox* self, QEnterEvent* event);
    friend void KComboBox_QBaseEnterEvent(KComboBox* self, QEnterEvent* event);
    friend void KComboBox_LeaveEvent(KComboBox* self, QEvent* event);
    friend void KComboBox_QBaseLeaveEvent(KComboBox* self, QEvent* event);
    friend void KComboBox_MoveEvent(KComboBox* self, QMoveEvent* event);
    friend void KComboBox_QBaseMoveEvent(KComboBox* self, QMoveEvent* event);
    friend void KComboBox_CloseEvent(KComboBox* self, QCloseEvent* event);
    friend void KComboBox_QBaseCloseEvent(KComboBox* self, QCloseEvent* event);
    friend void KComboBox_TabletEvent(KComboBox* self, QTabletEvent* event);
    friend void KComboBox_QBaseTabletEvent(KComboBox* self, QTabletEvent* event);
    friend void KComboBox_ActionEvent(KComboBox* self, QActionEvent* event);
    friend void KComboBox_QBaseActionEvent(KComboBox* self, QActionEvent* event);
    friend void KComboBox_DragEnterEvent(KComboBox* self, QDragEnterEvent* event);
    friend void KComboBox_QBaseDragEnterEvent(KComboBox* self, QDragEnterEvent* event);
    friend void KComboBox_DragMoveEvent(KComboBox* self, QDragMoveEvent* event);
    friend void KComboBox_QBaseDragMoveEvent(KComboBox* self, QDragMoveEvent* event);
    friend void KComboBox_DragLeaveEvent(KComboBox* self, QDragLeaveEvent* event);
    friend void KComboBox_QBaseDragLeaveEvent(KComboBox* self, QDragLeaveEvent* event);
    friend void KComboBox_DropEvent(KComboBox* self, QDropEvent* event);
    friend void KComboBox_QBaseDropEvent(KComboBox* self, QDropEvent* event);
    friend bool KComboBox_NativeEvent(KComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KComboBox_QBaseNativeEvent(KComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KComboBox_Metric(const KComboBox* self, int param1);
    friend int KComboBox_QBaseMetric(const KComboBox* self, int param1);
    friend void KComboBox_InitPainter(const KComboBox* self, QPainter* painter);
    friend void KComboBox_QBaseInitPainter(const KComboBox* self, QPainter* painter);
    friend QPaintDevice* KComboBox_Redirected(const KComboBox* self, QPoint* offset);
    friend QPaintDevice* KComboBox_QBaseRedirected(const KComboBox* self, QPoint* offset);
    friend QPainter* KComboBox_SharedPainter(const KComboBox* self);
    friend QPainter* KComboBox_QBaseSharedPainter(const KComboBox* self);
    friend bool KComboBox_FocusNextPrevChild(KComboBox* self, bool next);
    friend bool KComboBox_QBaseFocusNextPrevChild(KComboBox* self, bool next);
    friend void KComboBox_TimerEvent(KComboBox* self, QTimerEvent* event);
    friend void KComboBox_QBaseTimerEvent(KComboBox* self, QTimerEvent* event);
    friend void KComboBox_ChildEvent(KComboBox* self, QChildEvent* event);
    friend void KComboBox_QBaseChildEvent(KComboBox* self, QChildEvent* event);
    friend void KComboBox_CustomEvent(KComboBox* self, QEvent* event);
    friend void KComboBox_QBaseCustomEvent(KComboBox* self, QEvent* event);
    friend void KComboBox_ConnectNotify(KComboBox* self, const QMetaMethod* signal);
    friend void KComboBox_QBaseConnectNotify(KComboBox* self, const QMetaMethod* signal);
    friend void KComboBox_DisconnectNotify(KComboBox* self, const QMetaMethod* signal);
    friend void KComboBox_QBaseDisconnectNotify(KComboBox* self, const QMetaMethod* signal);
    friend void KComboBox_VirtualHook(KComboBox* self, int id, void* data);
    friend void KComboBox_QBaseVirtualHook(KComboBox* self, int id, void* data);
    friend void KComboBox_UpdateMicroFocus(KComboBox* self);
    friend void KComboBox_QBaseUpdateMicroFocus(KComboBox* self);
    friend void KComboBox_Create(KComboBox* self);
    friend void KComboBox_QBaseCreate(KComboBox* self);
    friend void KComboBox_Destroy(KComboBox* self);
    friend void KComboBox_QBaseDestroy(KComboBox* self);
    friend bool KComboBox_FocusNextChild(KComboBox* self);
    friend bool KComboBox_QBaseFocusNextChild(KComboBox* self);
    friend bool KComboBox_FocusPreviousChild(KComboBox* self);
    friend bool KComboBox_QBaseFocusPreviousChild(KComboBox* self);
    friend QObject* KComboBox_Sender(const KComboBox* self);
    friend QObject* KComboBox_QBaseSender(const KComboBox* self);
    friend int KComboBox_SenderSignalIndex(const KComboBox* self);
    friend int KComboBox_QBaseSenderSignalIndex(const KComboBox* self);
    friend int KComboBox_Receivers(const KComboBox* self, const char* signal);
    friend int KComboBox_QBaseReceivers(const KComboBox* self, const char* signal);
    friend bool KComboBox_IsSignalConnected(const KComboBox* self, const QMetaMethod* signal);
    friend bool KComboBox_QBaseIsSignalConnected(const KComboBox* self, const QMetaMethod* signal);
    friend double KComboBox_GetDecodedMetricF(const KComboBox* self, int metricA, int metricB);
    friend double KComboBox_QBaseGetDecodedMetricF(const KComboBox* self, int metricA, int metricB);
    friend libqt_map /* of int to libqt_list  of QKeySequence*  */ KComboBox_KeyBindingMap(const KComboBox* self);
    friend libqt_map /* of int to libqt_list  of QKeySequence*  */ KComboBox_QBaseKeyBindingMap(const KComboBox* self);
    friend void KComboBox_SetKeyBindingMap(KComboBox* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap);
    friend void KComboBox_QBaseSetKeyBindingMap(KComboBox* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap);
    friend void KComboBox_SetDelegate(KComboBox* self, KCompletionBase* delegate);
    friend void KComboBox_QBaseSetDelegate(KComboBox* self, KCompletionBase* delegate);
    friend KCompletionBase* KComboBox_Delegate(const KComboBox* self);
    friend KCompletionBase* KComboBox_QBaseDelegate(const KComboBox* self);
};

#endif
