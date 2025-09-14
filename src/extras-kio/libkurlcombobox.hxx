#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKURLCOMBOBOX_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKURLCOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KUrlComboBox so that we can call protected methods
class VirtualKUrlComboBox final : public KUrlComboBox {

  public:
    // Virtual class boolean flag
    bool isVirtualKUrlComboBox = true;

    // Virtual class public types (including callbacks)
    using KUrlComboBox_Metacall_Callback = int (*)(KUrlComboBox*, int, int, void**);
    using KUrlComboBox_SetCompletionObject_Callback = void (*)(KUrlComboBox*, KCompletion*, bool);
    using KUrlComboBox_MousePressEvent_Callback = void (*)(KUrlComboBox*, QMouseEvent*);
    using KUrlComboBox_MouseMoveEvent_Callback = void (*)(KUrlComboBox*, QMouseEvent*);
    using KUrlComboBox_SetAutoCompletion_Callback = void (*)(KUrlComboBox*, bool);
    using KUrlComboBox_SetLineEdit_Callback = void (*)(KUrlComboBox*, QLineEdit*);
    using KUrlComboBox_MinimumSizeHint_Callback = QSize* (*)();
    using KUrlComboBox_SetCompletedText_Callback = void (*)(KUrlComboBox*, libqt_string);
    using KUrlComboBox_SetCompletedItems_Callback = void (*)(KUrlComboBox*, libqt_list /* of libqt_string */, bool);
    using KUrlComboBox_MakeCompletion_Callback = void (*)(KUrlComboBox*, libqt_string);
    using KUrlComboBox_SetModel_Callback = void (*)(KUrlComboBox*, QAbstractItemModel*);
    using KUrlComboBox_SizeHint_Callback = QSize* (*)();
    using KUrlComboBox_ShowPopup_Callback = void (*)();
    using KUrlComboBox_HidePopup_Callback = void (*)();
    using KUrlComboBox_Event_Callback = bool (*)(KUrlComboBox*, QEvent*);
    using KUrlComboBox_InputMethodQuery_Callback = QVariant* (*)(const KUrlComboBox*, int);
    using KUrlComboBox_FocusInEvent_Callback = void (*)(KUrlComboBox*, QFocusEvent*);
    using KUrlComboBox_FocusOutEvent_Callback = void (*)(KUrlComboBox*, QFocusEvent*);
    using KUrlComboBox_ChangeEvent_Callback = void (*)(KUrlComboBox*, QEvent*);
    using KUrlComboBox_ResizeEvent_Callback = void (*)(KUrlComboBox*, QResizeEvent*);
    using KUrlComboBox_PaintEvent_Callback = void (*)(KUrlComboBox*, QPaintEvent*);
    using KUrlComboBox_ShowEvent_Callback = void (*)(KUrlComboBox*, QShowEvent*);
    using KUrlComboBox_HideEvent_Callback = void (*)(KUrlComboBox*, QHideEvent*);
    using KUrlComboBox_MouseReleaseEvent_Callback = void (*)(KUrlComboBox*, QMouseEvent*);
    using KUrlComboBox_KeyPressEvent_Callback = void (*)(KUrlComboBox*, QKeyEvent*);
    using KUrlComboBox_KeyReleaseEvent_Callback = void (*)(KUrlComboBox*, QKeyEvent*);
    using KUrlComboBox_WheelEvent_Callback = void (*)(KUrlComboBox*, QWheelEvent*);
    using KUrlComboBox_ContextMenuEvent_Callback = void (*)(KUrlComboBox*, QContextMenuEvent*);
    using KUrlComboBox_InputMethodEvent_Callback = void (*)(KUrlComboBox*, QInputMethodEvent*);
    using KUrlComboBox_InitStyleOption_Callback = void (*)(const KUrlComboBox*, QStyleOptionComboBox*);
    using KUrlComboBox_DevType_Callback = int (*)();
    using KUrlComboBox_SetVisible_Callback = void (*)(KUrlComboBox*, bool);
    using KUrlComboBox_HeightForWidth_Callback = int (*)(const KUrlComboBox*, int);
    using KUrlComboBox_HasHeightForWidth_Callback = bool (*)();
    using KUrlComboBox_PaintEngine_Callback = QPaintEngine* (*)();
    using KUrlComboBox_MouseDoubleClickEvent_Callback = void (*)(KUrlComboBox*, QMouseEvent*);
    using KUrlComboBox_EnterEvent_Callback = void (*)(KUrlComboBox*, QEnterEvent*);
    using KUrlComboBox_LeaveEvent_Callback = void (*)(KUrlComboBox*, QEvent*);
    using KUrlComboBox_MoveEvent_Callback = void (*)(KUrlComboBox*, QMoveEvent*);
    using KUrlComboBox_CloseEvent_Callback = void (*)(KUrlComboBox*, QCloseEvent*);
    using KUrlComboBox_TabletEvent_Callback = void (*)(KUrlComboBox*, QTabletEvent*);
    using KUrlComboBox_ActionEvent_Callback = void (*)(KUrlComboBox*, QActionEvent*);
    using KUrlComboBox_DragEnterEvent_Callback = void (*)(KUrlComboBox*, QDragEnterEvent*);
    using KUrlComboBox_DragMoveEvent_Callback = void (*)(KUrlComboBox*, QDragMoveEvent*);
    using KUrlComboBox_DragLeaveEvent_Callback = void (*)(KUrlComboBox*, QDragLeaveEvent*);
    using KUrlComboBox_DropEvent_Callback = void (*)(KUrlComboBox*, QDropEvent*);
    using KUrlComboBox_NativeEvent_Callback = bool (*)(KUrlComboBox*, libqt_string, void*, intptr_t*);
    using KUrlComboBox_Metric_Callback = int (*)(const KUrlComboBox*, int);
    using KUrlComboBox_InitPainter_Callback = void (*)(const KUrlComboBox*, QPainter*);
    using KUrlComboBox_Redirected_Callback = QPaintDevice* (*)(const KUrlComboBox*, QPoint*);
    using KUrlComboBox_SharedPainter_Callback = QPainter* (*)();
    using KUrlComboBox_FocusNextPrevChild_Callback = bool (*)(KUrlComboBox*, bool);
    using KUrlComboBox_EventFilter_Callback = bool (*)(KUrlComboBox*, QObject*, QEvent*);
    using KUrlComboBox_TimerEvent_Callback = void (*)(KUrlComboBox*, QTimerEvent*);
    using KUrlComboBox_ChildEvent_Callback = void (*)(KUrlComboBox*, QChildEvent*);
    using KUrlComboBox_CustomEvent_Callback = void (*)(KUrlComboBox*, QEvent*);
    using KUrlComboBox_ConnectNotify_Callback = void (*)(KUrlComboBox*, QMetaMethod*);
    using KUrlComboBox_DisconnectNotify_Callback = void (*)(KUrlComboBox*, QMetaMethod*);
    using KUrlComboBox_SetHandleSignals_Callback = void (*)(KUrlComboBox*, bool);
    using KUrlComboBox_SetCompletionMode_Callback = void (*)(KUrlComboBox*, int);
    using KUrlComboBox_VirtualHook_Callback = void (*)(KUrlComboBox*, int, void*);
    using KUrlComboBox_UpdateMicroFocus_Callback = void (*)();
    using KUrlComboBox_Create_Callback = void (*)();
    using KUrlComboBox_Destroy_Callback = void (*)();
    using KUrlComboBox_FocusNextChild_Callback = bool (*)();
    using KUrlComboBox_FocusPreviousChild_Callback = bool (*)();
    using KUrlComboBox_Sender_Callback = QObject* (*)();
    using KUrlComboBox_SenderSignalIndex_Callback = int (*)();
    using KUrlComboBox_Receivers_Callback = int (*)(const KUrlComboBox*, const char*);
    using KUrlComboBox_IsSignalConnected_Callback = bool (*)(const KUrlComboBox*, QMetaMethod*);
    using KUrlComboBox_GetDecodedMetricF_Callback = double (*)(const KUrlComboBox*, int, int);
    using KUrlComboBox_KeyBindingMap_Callback = libqt_map /* of int to libqt_list  of QKeySequence*  */ (*)();
    using KUrlComboBox_SetKeyBindingMap_Callback = void (*)(KUrlComboBox*, libqt_map /* of int to libqt_list  of QKeySequence*  */);
    using KUrlComboBox_SetDelegate_Callback = void (*)(KUrlComboBox*, KCompletionBase*);
    using KUrlComboBox_Delegate_Callback = KCompletionBase* (*)();

  protected:
    // Instance callback storage
    KUrlComboBox_Metacall_Callback kurlcombobox_metacall_callback = nullptr;
    KUrlComboBox_SetCompletionObject_Callback kurlcombobox_setcompletionobject_callback = nullptr;
    KUrlComboBox_MousePressEvent_Callback kurlcombobox_mousepressevent_callback = nullptr;
    KUrlComboBox_MouseMoveEvent_Callback kurlcombobox_mousemoveevent_callback = nullptr;
    KUrlComboBox_SetAutoCompletion_Callback kurlcombobox_setautocompletion_callback = nullptr;
    KUrlComboBox_SetLineEdit_Callback kurlcombobox_setlineedit_callback = nullptr;
    KUrlComboBox_MinimumSizeHint_Callback kurlcombobox_minimumsizehint_callback = nullptr;
    KUrlComboBox_SetCompletedText_Callback kurlcombobox_setcompletedtext_callback = nullptr;
    KUrlComboBox_SetCompletedItems_Callback kurlcombobox_setcompleteditems_callback = nullptr;
    KUrlComboBox_MakeCompletion_Callback kurlcombobox_makecompletion_callback = nullptr;
    KUrlComboBox_SetModel_Callback kurlcombobox_setmodel_callback = nullptr;
    KUrlComboBox_SizeHint_Callback kurlcombobox_sizehint_callback = nullptr;
    KUrlComboBox_ShowPopup_Callback kurlcombobox_showpopup_callback = nullptr;
    KUrlComboBox_HidePopup_Callback kurlcombobox_hidepopup_callback = nullptr;
    KUrlComboBox_Event_Callback kurlcombobox_event_callback = nullptr;
    KUrlComboBox_InputMethodQuery_Callback kurlcombobox_inputmethodquery_callback = nullptr;
    KUrlComboBox_FocusInEvent_Callback kurlcombobox_focusinevent_callback = nullptr;
    KUrlComboBox_FocusOutEvent_Callback kurlcombobox_focusoutevent_callback = nullptr;
    KUrlComboBox_ChangeEvent_Callback kurlcombobox_changeevent_callback = nullptr;
    KUrlComboBox_ResizeEvent_Callback kurlcombobox_resizeevent_callback = nullptr;
    KUrlComboBox_PaintEvent_Callback kurlcombobox_paintevent_callback = nullptr;
    KUrlComboBox_ShowEvent_Callback kurlcombobox_showevent_callback = nullptr;
    KUrlComboBox_HideEvent_Callback kurlcombobox_hideevent_callback = nullptr;
    KUrlComboBox_MouseReleaseEvent_Callback kurlcombobox_mousereleaseevent_callback = nullptr;
    KUrlComboBox_KeyPressEvent_Callback kurlcombobox_keypressevent_callback = nullptr;
    KUrlComboBox_KeyReleaseEvent_Callback kurlcombobox_keyreleaseevent_callback = nullptr;
    KUrlComboBox_WheelEvent_Callback kurlcombobox_wheelevent_callback = nullptr;
    KUrlComboBox_ContextMenuEvent_Callback kurlcombobox_contextmenuevent_callback = nullptr;
    KUrlComboBox_InputMethodEvent_Callback kurlcombobox_inputmethodevent_callback = nullptr;
    KUrlComboBox_InitStyleOption_Callback kurlcombobox_initstyleoption_callback = nullptr;
    KUrlComboBox_DevType_Callback kurlcombobox_devtype_callback = nullptr;
    KUrlComboBox_SetVisible_Callback kurlcombobox_setvisible_callback = nullptr;
    KUrlComboBox_HeightForWidth_Callback kurlcombobox_heightforwidth_callback = nullptr;
    KUrlComboBox_HasHeightForWidth_Callback kurlcombobox_hasheightforwidth_callback = nullptr;
    KUrlComboBox_PaintEngine_Callback kurlcombobox_paintengine_callback = nullptr;
    KUrlComboBox_MouseDoubleClickEvent_Callback kurlcombobox_mousedoubleclickevent_callback = nullptr;
    KUrlComboBox_EnterEvent_Callback kurlcombobox_enterevent_callback = nullptr;
    KUrlComboBox_LeaveEvent_Callback kurlcombobox_leaveevent_callback = nullptr;
    KUrlComboBox_MoveEvent_Callback kurlcombobox_moveevent_callback = nullptr;
    KUrlComboBox_CloseEvent_Callback kurlcombobox_closeevent_callback = nullptr;
    KUrlComboBox_TabletEvent_Callback kurlcombobox_tabletevent_callback = nullptr;
    KUrlComboBox_ActionEvent_Callback kurlcombobox_actionevent_callback = nullptr;
    KUrlComboBox_DragEnterEvent_Callback kurlcombobox_dragenterevent_callback = nullptr;
    KUrlComboBox_DragMoveEvent_Callback kurlcombobox_dragmoveevent_callback = nullptr;
    KUrlComboBox_DragLeaveEvent_Callback kurlcombobox_dragleaveevent_callback = nullptr;
    KUrlComboBox_DropEvent_Callback kurlcombobox_dropevent_callback = nullptr;
    KUrlComboBox_NativeEvent_Callback kurlcombobox_nativeevent_callback = nullptr;
    KUrlComboBox_Metric_Callback kurlcombobox_metric_callback = nullptr;
    KUrlComboBox_InitPainter_Callback kurlcombobox_initpainter_callback = nullptr;
    KUrlComboBox_Redirected_Callback kurlcombobox_redirected_callback = nullptr;
    KUrlComboBox_SharedPainter_Callback kurlcombobox_sharedpainter_callback = nullptr;
    KUrlComboBox_FocusNextPrevChild_Callback kurlcombobox_focusnextprevchild_callback = nullptr;
    KUrlComboBox_EventFilter_Callback kurlcombobox_eventfilter_callback = nullptr;
    KUrlComboBox_TimerEvent_Callback kurlcombobox_timerevent_callback = nullptr;
    KUrlComboBox_ChildEvent_Callback kurlcombobox_childevent_callback = nullptr;
    KUrlComboBox_CustomEvent_Callback kurlcombobox_customevent_callback = nullptr;
    KUrlComboBox_ConnectNotify_Callback kurlcombobox_connectnotify_callback = nullptr;
    KUrlComboBox_DisconnectNotify_Callback kurlcombobox_disconnectnotify_callback = nullptr;
    KUrlComboBox_SetHandleSignals_Callback kurlcombobox_sethandlesignals_callback = nullptr;
    KUrlComboBox_SetCompletionMode_Callback kurlcombobox_setcompletionmode_callback = nullptr;
    KUrlComboBox_VirtualHook_Callback kurlcombobox_virtualhook_callback = nullptr;
    KUrlComboBox_UpdateMicroFocus_Callback kurlcombobox_updatemicrofocus_callback = nullptr;
    KUrlComboBox_Create_Callback kurlcombobox_create_callback = nullptr;
    KUrlComboBox_Destroy_Callback kurlcombobox_destroy_callback = nullptr;
    KUrlComboBox_FocusNextChild_Callback kurlcombobox_focusnextchild_callback = nullptr;
    KUrlComboBox_FocusPreviousChild_Callback kurlcombobox_focuspreviouschild_callback = nullptr;
    KUrlComboBox_Sender_Callback kurlcombobox_sender_callback = nullptr;
    KUrlComboBox_SenderSignalIndex_Callback kurlcombobox_sendersignalindex_callback = nullptr;
    KUrlComboBox_Receivers_Callback kurlcombobox_receivers_callback = nullptr;
    KUrlComboBox_IsSignalConnected_Callback kurlcombobox_issignalconnected_callback = nullptr;
    KUrlComboBox_GetDecodedMetricF_Callback kurlcombobox_getdecodedmetricf_callback = nullptr;
    KUrlComboBox_KeyBindingMap_Callback kurlcombobox_keybindingmap_callback = nullptr;
    KUrlComboBox_SetKeyBindingMap_Callback kurlcombobox_setkeybindingmap_callback = nullptr;
    KUrlComboBox_SetDelegate_Callback kurlcombobox_setdelegate_callback = nullptr;
    KUrlComboBox_Delegate_Callback kurlcombobox_delegate_callback = nullptr;

    // Instance base flags
    mutable bool kurlcombobox_metacall_isbase = false;
    mutable bool kurlcombobox_setcompletionobject_isbase = false;
    mutable bool kurlcombobox_mousepressevent_isbase = false;
    mutable bool kurlcombobox_mousemoveevent_isbase = false;
    mutable bool kurlcombobox_setautocompletion_isbase = false;
    mutable bool kurlcombobox_setlineedit_isbase = false;
    mutable bool kurlcombobox_minimumsizehint_isbase = false;
    mutable bool kurlcombobox_setcompletedtext_isbase = false;
    mutable bool kurlcombobox_setcompleteditems_isbase = false;
    mutable bool kurlcombobox_makecompletion_isbase = false;
    mutable bool kurlcombobox_setmodel_isbase = false;
    mutable bool kurlcombobox_sizehint_isbase = false;
    mutable bool kurlcombobox_showpopup_isbase = false;
    mutable bool kurlcombobox_hidepopup_isbase = false;
    mutable bool kurlcombobox_event_isbase = false;
    mutable bool kurlcombobox_inputmethodquery_isbase = false;
    mutable bool kurlcombobox_focusinevent_isbase = false;
    mutable bool kurlcombobox_focusoutevent_isbase = false;
    mutable bool kurlcombobox_changeevent_isbase = false;
    mutable bool kurlcombobox_resizeevent_isbase = false;
    mutable bool kurlcombobox_paintevent_isbase = false;
    mutable bool kurlcombobox_showevent_isbase = false;
    mutable bool kurlcombobox_hideevent_isbase = false;
    mutable bool kurlcombobox_mousereleaseevent_isbase = false;
    mutable bool kurlcombobox_keypressevent_isbase = false;
    mutable bool kurlcombobox_keyreleaseevent_isbase = false;
    mutable bool kurlcombobox_wheelevent_isbase = false;
    mutable bool kurlcombobox_contextmenuevent_isbase = false;
    mutable bool kurlcombobox_inputmethodevent_isbase = false;
    mutable bool kurlcombobox_initstyleoption_isbase = false;
    mutable bool kurlcombobox_devtype_isbase = false;
    mutable bool kurlcombobox_setvisible_isbase = false;
    mutable bool kurlcombobox_heightforwidth_isbase = false;
    mutable bool kurlcombobox_hasheightforwidth_isbase = false;
    mutable bool kurlcombobox_paintengine_isbase = false;
    mutable bool kurlcombobox_mousedoubleclickevent_isbase = false;
    mutable bool kurlcombobox_enterevent_isbase = false;
    mutable bool kurlcombobox_leaveevent_isbase = false;
    mutable bool kurlcombobox_moveevent_isbase = false;
    mutable bool kurlcombobox_closeevent_isbase = false;
    mutable bool kurlcombobox_tabletevent_isbase = false;
    mutable bool kurlcombobox_actionevent_isbase = false;
    mutable bool kurlcombobox_dragenterevent_isbase = false;
    mutable bool kurlcombobox_dragmoveevent_isbase = false;
    mutable bool kurlcombobox_dragleaveevent_isbase = false;
    mutable bool kurlcombobox_dropevent_isbase = false;
    mutable bool kurlcombobox_nativeevent_isbase = false;
    mutable bool kurlcombobox_metric_isbase = false;
    mutable bool kurlcombobox_initpainter_isbase = false;
    mutable bool kurlcombobox_redirected_isbase = false;
    mutable bool kurlcombobox_sharedpainter_isbase = false;
    mutable bool kurlcombobox_focusnextprevchild_isbase = false;
    mutable bool kurlcombobox_eventfilter_isbase = false;
    mutable bool kurlcombobox_timerevent_isbase = false;
    mutable bool kurlcombobox_childevent_isbase = false;
    mutable bool kurlcombobox_customevent_isbase = false;
    mutable bool kurlcombobox_connectnotify_isbase = false;
    mutable bool kurlcombobox_disconnectnotify_isbase = false;
    mutable bool kurlcombobox_sethandlesignals_isbase = false;
    mutable bool kurlcombobox_setcompletionmode_isbase = false;
    mutable bool kurlcombobox_virtualhook_isbase = false;
    mutable bool kurlcombobox_updatemicrofocus_isbase = false;
    mutable bool kurlcombobox_create_isbase = false;
    mutable bool kurlcombobox_destroy_isbase = false;
    mutable bool kurlcombobox_focusnextchild_isbase = false;
    mutable bool kurlcombobox_focuspreviouschild_isbase = false;
    mutable bool kurlcombobox_sender_isbase = false;
    mutable bool kurlcombobox_sendersignalindex_isbase = false;
    mutable bool kurlcombobox_receivers_isbase = false;
    mutable bool kurlcombobox_issignalconnected_isbase = false;
    mutable bool kurlcombobox_getdecodedmetricf_isbase = false;
    mutable bool kurlcombobox_keybindingmap_isbase = false;
    mutable bool kurlcombobox_setkeybindingmap_isbase = false;
    mutable bool kurlcombobox_setdelegate_isbase = false;
    mutable bool kurlcombobox_delegate_isbase = false;

  public:
    VirtualKUrlComboBox(KUrlComboBox::Mode mode) : KUrlComboBox(mode) {};
    VirtualKUrlComboBox(KUrlComboBox::Mode mode, bool rw) : KUrlComboBox(mode, rw) {};
    VirtualKUrlComboBox(KUrlComboBox::Mode mode, QWidget* parent) : KUrlComboBox(mode, parent) {};
    VirtualKUrlComboBox(KUrlComboBox::Mode mode, bool rw, QWidget* parent) : KUrlComboBox(mode, rw, parent) {};

    ~VirtualKUrlComboBox() {
        kurlcombobox_metacall_callback = nullptr;
        kurlcombobox_setcompletionobject_callback = nullptr;
        kurlcombobox_mousepressevent_callback = nullptr;
        kurlcombobox_mousemoveevent_callback = nullptr;
        kurlcombobox_setautocompletion_callback = nullptr;
        kurlcombobox_setlineedit_callback = nullptr;
        kurlcombobox_minimumsizehint_callback = nullptr;
        kurlcombobox_setcompletedtext_callback = nullptr;
        kurlcombobox_setcompleteditems_callback = nullptr;
        kurlcombobox_makecompletion_callback = nullptr;
        kurlcombobox_setmodel_callback = nullptr;
        kurlcombobox_sizehint_callback = nullptr;
        kurlcombobox_showpopup_callback = nullptr;
        kurlcombobox_hidepopup_callback = nullptr;
        kurlcombobox_event_callback = nullptr;
        kurlcombobox_inputmethodquery_callback = nullptr;
        kurlcombobox_focusinevent_callback = nullptr;
        kurlcombobox_focusoutevent_callback = nullptr;
        kurlcombobox_changeevent_callback = nullptr;
        kurlcombobox_resizeevent_callback = nullptr;
        kurlcombobox_paintevent_callback = nullptr;
        kurlcombobox_showevent_callback = nullptr;
        kurlcombobox_hideevent_callback = nullptr;
        kurlcombobox_mousereleaseevent_callback = nullptr;
        kurlcombobox_keypressevent_callback = nullptr;
        kurlcombobox_keyreleaseevent_callback = nullptr;
        kurlcombobox_wheelevent_callback = nullptr;
        kurlcombobox_contextmenuevent_callback = nullptr;
        kurlcombobox_inputmethodevent_callback = nullptr;
        kurlcombobox_initstyleoption_callback = nullptr;
        kurlcombobox_devtype_callback = nullptr;
        kurlcombobox_setvisible_callback = nullptr;
        kurlcombobox_heightforwidth_callback = nullptr;
        kurlcombobox_hasheightforwidth_callback = nullptr;
        kurlcombobox_paintengine_callback = nullptr;
        kurlcombobox_mousedoubleclickevent_callback = nullptr;
        kurlcombobox_enterevent_callback = nullptr;
        kurlcombobox_leaveevent_callback = nullptr;
        kurlcombobox_moveevent_callback = nullptr;
        kurlcombobox_closeevent_callback = nullptr;
        kurlcombobox_tabletevent_callback = nullptr;
        kurlcombobox_actionevent_callback = nullptr;
        kurlcombobox_dragenterevent_callback = nullptr;
        kurlcombobox_dragmoveevent_callback = nullptr;
        kurlcombobox_dragleaveevent_callback = nullptr;
        kurlcombobox_dropevent_callback = nullptr;
        kurlcombobox_nativeevent_callback = nullptr;
        kurlcombobox_metric_callback = nullptr;
        kurlcombobox_initpainter_callback = nullptr;
        kurlcombobox_redirected_callback = nullptr;
        kurlcombobox_sharedpainter_callback = nullptr;
        kurlcombobox_focusnextprevchild_callback = nullptr;
        kurlcombobox_eventfilter_callback = nullptr;
        kurlcombobox_timerevent_callback = nullptr;
        kurlcombobox_childevent_callback = nullptr;
        kurlcombobox_customevent_callback = nullptr;
        kurlcombobox_connectnotify_callback = nullptr;
        kurlcombobox_disconnectnotify_callback = nullptr;
        kurlcombobox_sethandlesignals_callback = nullptr;
        kurlcombobox_setcompletionmode_callback = nullptr;
        kurlcombobox_virtualhook_callback = nullptr;
        kurlcombobox_updatemicrofocus_callback = nullptr;
        kurlcombobox_create_callback = nullptr;
        kurlcombobox_destroy_callback = nullptr;
        kurlcombobox_focusnextchild_callback = nullptr;
        kurlcombobox_focuspreviouschild_callback = nullptr;
        kurlcombobox_sender_callback = nullptr;
        kurlcombobox_sendersignalindex_callback = nullptr;
        kurlcombobox_receivers_callback = nullptr;
        kurlcombobox_issignalconnected_callback = nullptr;
        kurlcombobox_getdecodedmetricf_callback = nullptr;
        kurlcombobox_keybindingmap_callback = nullptr;
        kurlcombobox_setkeybindingmap_callback = nullptr;
        kurlcombobox_setdelegate_callback = nullptr;
        kurlcombobox_delegate_callback = nullptr;
    }

    // Callback setters
    inline void setKUrlComboBox_Metacall_Callback(KUrlComboBox_Metacall_Callback cb) { kurlcombobox_metacall_callback = cb; }
    inline void setKUrlComboBox_SetCompletionObject_Callback(KUrlComboBox_SetCompletionObject_Callback cb) { kurlcombobox_setcompletionobject_callback = cb; }
    inline void setKUrlComboBox_MousePressEvent_Callback(KUrlComboBox_MousePressEvent_Callback cb) { kurlcombobox_mousepressevent_callback = cb; }
    inline void setKUrlComboBox_MouseMoveEvent_Callback(KUrlComboBox_MouseMoveEvent_Callback cb) { kurlcombobox_mousemoveevent_callback = cb; }
    inline void setKUrlComboBox_SetAutoCompletion_Callback(KUrlComboBox_SetAutoCompletion_Callback cb) { kurlcombobox_setautocompletion_callback = cb; }
    inline void setKUrlComboBox_SetLineEdit_Callback(KUrlComboBox_SetLineEdit_Callback cb) { kurlcombobox_setlineedit_callback = cb; }
    inline void setKUrlComboBox_MinimumSizeHint_Callback(KUrlComboBox_MinimumSizeHint_Callback cb) { kurlcombobox_minimumsizehint_callback = cb; }
    inline void setKUrlComboBox_SetCompletedText_Callback(KUrlComboBox_SetCompletedText_Callback cb) { kurlcombobox_setcompletedtext_callback = cb; }
    inline void setKUrlComboBox_SetCompletedItems_Callback(KUrlComboBox_SetCompletedItems_Callback cb) { kurlcombobox_setcompleteditems_callback = cb; }
    inline void setKUrlComboBox_MakeCompletion_Callback(KUrlComboBox_MakeCompletion_Callback cb) { kurlcombobox_makecompletion_callback = cb; }
    inline void setKUrlComboBox_SetModel_Callback(KUrlComboBox_SetModel_Callback cb) { kurlcombobox_setmodel_callback = cb; }
    inline void setKUrlComboBox_SizeHint_Callback(KUrlComboBox_SizeHint_Callback cb) { kurlcombobox_sizehint_callback = cb; }
    inline void setKUrlComboBox_ShowPopup_Callback(KUrlComboBox_ShowPopup_Callback cb) { kurlcombobox_showpopup_callback = cb; }
    inline void setKUrlComboBox_HidePopup_Callback(KUrlComboBox_HidePopup_Callback cb) { kurlcombobox_hidepopup_callback = cb; }
    inline void setKUrlComboBox_Event_Callback(KUrlComboBox_Event_Callback cb) { kurlcombobox_event_callback = cb; }
    inline void setKUrlComboBox_InputMethodQuery_Callback(KUrlComboBox_InputMethodQuery_Callback cb) { kurlcombobox_inputmethodquery_callback = cb; }
    inline void setKUrlComboBox_FocusInEvent_Callback(KUrlComboBox_FocusInEvent_Callback cb) { kurlcombobox_focusinevent_callback = cb; }
    inline void setKUrlComboBox_FocusOutEvent_Callback(KUrlComboBox_FocusOutEvent_Callback cb) { kurlcombobox_focusoutevent_callback = cb; }
    inline void setKUrlComboBox_ChangeEvent_Callback(KUrlComboBox_ChangeEvent_Callback cb) { kurlcombobox_changeevent_callback = cb; }
    inline void setKUrlComboBox_ResizeEvent_Callback(KUrlComboBox_ResizeEvent_Callback cb) { kurlcombobox_resizeevent_callback = cb; }
    inline void setKUrlComboBox_PaintEvent_Callback(KUrlComboBox_PaintEvent_Callback cb) { kurlcombobox_paintevent_callback = cb; }
    inline void setKUrlComboBox_ShowEvent_Callback(KUrlComboBox_ShowEvent_Callback cb) { kurlcombobox_showevent_callback = cb; }
    inline void setKUrlComboBox_HideEvent_Callback(KUrlComboBox_HideEvent_Callback cb) { kurlcombobox_hideevent_callback = cb; }
    inline void setKUrlComboBox_MouseReleaseEvent_Callback(KUrlComboBox_MouseReleaseEvent_Callback cb) { kurlcombobox_mousereleaseevent_callback = cb; }
    inline void setKUrlComboBox_KeyPressEvent_Callback(KUrlComboBox_KeyPressEvent_Callback cb) { kurlcombobox_keypressevent_callback = cb; }
    inline void setKUrlComboBox_KeyReleaseEvent_Callback(KUrlComboBox_KeyReleaseEvent_Callback cb) { kurlcombobox_keyreleaseevent_callback = cb; }
    inline void setKUrlComboBox_WheelEvent_Callback(KUrlComboBox_WheelEvent_Callback cb) { kurlcombobox_wheelevent_callback = cb; }
    inline void setKUrlComboBox_ContextMenuEvent_Callback(KUrlComboBox_ContextMenuEvent_Callback cb) { kurlcombobox_contextmenuevent_callback = cb; }
    inline void setKUrlComboBox_InputMethodEvent_Callback(KUrlComboBox_InputMethodEvent_Callback cb) { kurlcombobox_inputmethodevent_callback = cb; }
    inline void setKUrlComboBox_InitStyleOption_Callback(KUrlComboBox_InitStyleOption_Callback cb) { kurlcombobox_initstyleoption_callback = cb; }
    inline void setKUrlComboBox_DevType_Callback(KUrlComboBox_DevType_Callback cb) { kurlcombobox_devtype_callback = cb; }
    inline void setKUrlComboBox_SetVisible_Callback(KUrlComboBox_SetVisible_Callback cb) { kurlcombobox_setvisible_callback = cb; }
    inline void setKUrlComboBox_HeightForWidth_Callback(KUrlComboBox_HeightForWidth_Callback cb) { kurlcombobox_heightforwidth_callback = cb; }
    inline void setKUrlComboBox_HasHeightForWidth_Callback(KUrlComboBox_HasHeightForWidth_Callback cb) { kurlcombobox_hasheightforwidth_callback = cb; }
    inline void setKUrlComboBox_PaintEngine_Callback(KUrlComboBox_PaintEngine_Callback cb) { kurlcombobox_paintengine_callback = cb; }
    inline void setKUrlComboBox_MouseDoubleClickEvent_Callback(KUrlComboBox_MouseDoubleClickEvent_Callback cb) { kurlcombobox_mousedoubleclickevent_callback = cb; }
    inline void setKUrlComboBox_EnterEvent_Callback(KUrlComboBox_EnterEvent_Callback cb) { kurlcombobox_enterevent_callback = cb; }
    inline void setKUrlComboBox_LeaveEvent_Callback(KUrlComboBox_LeaveEvent_Callback cb) { kurlcombobox_leaveevent_callback = cb; }
    inline void setKUrlComboBox_MoveEvent_Callback(KUrlComboBox_MoveEvent_Callback cb) { kurlcombobox_moveevent_callback = cb; }
    inline void setKUrlComboBox_CloseEvent_Callback(KUrlComboBox_CloseEvent_Callback cb) { kurlcombobox_closeevent_callback = cb; }
    inline void setKUrlComboBox_TabletEvent_Callback(KUrlComboBox_TabletEvent_Callback cb) { kurlcombobox_tabletevent_callback = cb; }
    inline void setKUrlComboBox_ActionEvent_Callback(KUrlComboBox_ActionEvent_Callback cb) { kurlcombobox_actionevent_callback = cb; }
    inline void setKUrlComboBox_DragEnterEvent_Callback(KUrlComboBox_DragEnterEvent_Callback cb) { kurlcombobox_dragenterevent_callback = cb; }
    inline void setKUrlComboBox_DragMoveEvent_Callback(KUrlComboBox_DragMoveEvent_Callback cb) { kurlcombobox_dragmoveevent_callback = cb; }
    inline void setKUrlComboBox_DragLeaveEvent_Callback(KUrlComboBox_DragLeaveEvent_Callback cb) { kurlcombobox_dragleaveevent_callback = cb; }
    inline void setKUrlComboBox_DropEvent_Callback(KUrlComboBox_DropEvent_Callback cb) { kurlcombobox_dropevent_callback = cb; }
    inline void setKUrlComboBox_NativeEvent_Callback(KUrlComboBox_NativeEvent_Callback cb) { kurlcombobox_nativeevent_callback = cb; }
    inline void setKUrlComboBox_Metric_Callback(KUrlComboBox_Metric_Callback cb) { kurlcombobox_metric_callback = cb; }
    inline void setKUrlComboBox_InitPainter_Callback(KUrlComboBox_InitPainter_Callback cb) { kurlcombobox_initpainter_callback = cb; }
    inline void setKUrlComboBox_Redirected_Callback(KUrlComboBox_Redirected_Callback cb) { kurlcombobox_redirected_callback = cb; }
    inline void setKUrlComboBox_SharedPainter_Callback(KUrlComboBox_SharedPainter_Callback cb) { kurlcombobox_sharedpainter_callback = cb; }
    inline void setKUrlComboBox_FocusNextPrevChild_Callback(KUrlComboBox_FocusNextPrevChild_Callback cb) { kurlcombobox_focusnextprevchild_callback = cb; }
    inline void setKUrlComboBox_EventFilter_Callback(KUrlComboBox_EventFilter_Callback cb) { kurlcombobox_eventfilter_callback = cb; }
    inline void setKUrlComboBox_TimerEvent_Callback(KUrlComboBox_TimerEvent_Callback cb) { kurlcombobox_timerevent_callback = cb; }
    inline void setKUrlComboBox_ChildEvent_Callback(KUrlComboBox_ChildEvent_Callback cb) { kurlcombobox_childevent_callback = cb; }
    inline void setKUrlComboBox_CustomEvent_Callback(KUrlComboBox_CustomEvent_Callback cb) { kurlcombobox_customevent_callback = cb; }
    inline void setKUrlComboBox_ConnectNotify_Callback(KUrlComboBox_ConnectNotify_Callback cb) { kurlcombobox_connectnotify_callback = cb; }
    inline void setKUrlComboBox_DisconnectNotify_Callback(KUrlComboBox_DisconnectNotify_Callback cb) { kurlcombobox_disconnectnotify_callback = cb; }
    inline void setKUrlComboBox_SetHandleSignals_Callback(KUrlComboBox_SetHandleSignals_Callback cb) { kurlcombobox_sethandlesignals_callback = cb; }
    inline void setKUrlComboBox_SetCompletionMode_Callback(KUrlComboBox_SetCompletionMode_Callback cb) { kurlcombobox_setcompletionmode_callback = cb; }
    inline void setKUrlComboBox_VirtualHook_Callback(KUrlComboBox_VirtualHook_Callback cb) { kurlcombobox_virtualhook_callback = cb; }
    inline void setKUrlComboBox_UpdateMicroFocus_Callback(KUrlComboBox_UpdateMicroFocus_Callback cb) { kurlcombobox_updatemicrofocus_callback = cb; }
    inline void setKUrlComboBox_Create_Callback(KUrlComboBox_Create_Callback cb) { kurlcombobox_create_callback = cb; }
    inline void setKUrlComboBox_Destroy_Callback(KUrlComboBox_Destroy_Callback cb) { kurlcombobox_destroy_callback = cb; }
    inline void setKUrlComboBox_FocusNextChild_Callback(KUrlComboBox_FocusNextChild_Callback cb) { kurlcombobox_focusnextchild_callback = cb; }
    inline void setKUrlComboBox_FocusPreviousChild_Callback(KUrlComboBox_FocusPreviousChild_Callback cb) { kurlcombobox_focuspreviouschild_callback = cb; }
    inline void setKUrlComboBox_Sender_Callback(KUrlComboBox_Sender_Callback cb) { kurlcombobox_sender_callback = cb; }
    inline void setKUrlComboBox_SenderSignalIndex_Callback(KUrlComboBox_SenderSignalIndex_Callback cb) { kurlcombobox_sendersignalindex_callback = cb; }
    inline void setKUrlComboBox_Receivers_Callback(KUrlComboBox_Receivers_Callback cb) { kurlcombobox_receivers_callback = cb; }
    inline void setKUrlComboBox_IsSignalConnected_Callback(KUrlComboBox_IsSignalConnected_Callback cb) { kurlcombobox_issignalconnected_callback = cb; }
    inline void setKUrlComboBox_GetDecodedMetricF_Callback(KUrlComboBox_GetDecodedMetricF_Callback cb) { kurlcombobox_getdecodedmetricf_callback = cb; }
    inline void setKUrlComboBox_KeyBindingMap_Callback(KUrlComboBox_KeyBindingMap_Callback cb) { kurlcombobox_keybindingmap_callback = cb; }
    inline void setKUrlComboBox_SetKeyBindingMap_Callback(KUrlComboBox_SetKeyBindingMap_Callback cb) { kurlcombobox_setkeybindingmap_callback = cb; }
    inline void setKUrlComboBox_SetDelegate_Callback(KUrlComboBox_SetDelegate_Callback cb) { kurlcombobox_setdelegate_callback = cb; }
    inline void setKUrlComboBox_Delegate_Callback(KUrlComboBox_Delegate_Callback cb) { kurlcombobox_delegate_callback = cb; }

    // Base flag setters
    inline void setKUrlComboBox_Metacall_IsBase(bool value) const { kurlcombobox_metacall_isbase = value; }
    inline void setKUrlComboBox_SetCompletionObject_IsBase(bool value) const { kurlcombobox_setcompletionobject_isbase = value; }
    inline void setKUrlComboBox_MousePressEvent_IsBase(bool value) const { kurlcombobox_mousepressevent_isbase = value; }
    inline void setKUrlComboBox_MouseMoveEvent_IsBase(bool value) const { kurlcombobox_mousemoveevent_isbase = value; }
    inline void setKUrlComboBox_SetAutoCompletion_IsBase(bool value) const { kurlcombobox_setautocompletion_isbase = value; }
    inline void setKUrlComboBox_SetLineEdit_IsBase(bool value) const { kurlcombobox_setlineedit_isbase = value; }
    inline void setKUrlComboBox_MinimumSizeHint_IsBase(bool value) const { kurlcombobox_minimumsizehint_isbase = value; }
    inline void setKUrlComboBox_SetCompletedText_IsBase(bool value) const { kurlcombobox_setcompletedtext_isbase = value; }
    inline void setKUrlComboBox_SetCompletedItems_IsBase(bool value) const { kurlcombobox_setcompleteditems_isbase = value; }
    inline void setKUrlComboBox_MakeCompletion_IsBase(bool value) const { kurlcombobox_makecompletion_isbase = value; }
    inline void setKUrlComboBox_SetModel_IsBase(bool value) const { kurlcombobox_setmodel_isbase = value; }
    inline void setKUrlComboBox_SizeHint_IsBase(bool value) const { kurlcombobox_sizehint_isbase = value; }
    inline void setKUrlComboBox_ShowPopup_IsBase(bool value) const { kurlcombobox_showpopup_isbase = value; }
    inline void setKUrlComboBox_HidePopup_IsBase(bool value) const { kurlcombobox_hidepopup_isbase = value; }
    inline void setKUrlComboBox_Event_IsBase(bool value) const { kurlcombobox_event_isbase = value; }
    inline void setKUrlComboBox_InputMethodQuery_IsBase(bool value) const { kurlcombobox_inputmethodquery_isbase = value; }
    inline void setKUrlComboBox_FocusInEvent_IsBase(bool value) const { kurlcombobox_focusinevent_isbase = value; }
    inline void setKUrlComboBox_FocusOutEvent_IsBase(bool value) const { kurlcombobox_focusoutevent_isbase = value; }
    inline void setKUrlComboBox_ChangeEvent_IsBase(bool value) const { kurlcombobox_changeevent_isbase = value; }
    inline void setKUrlComboBox_ResizeEvent_IsBase(bool value) const { kurlcombobox_resizeevent_isbase = value; }
    inline void setKUrlComboBox_PaintEvent_IsBase(bool value) const { kurlcombobox_paintevent_isbase = value; }
    inline void setKUrlComboBox_ShowEvent_IsBase(bool value) const { kurlcombobox_showevent_isbase = value; }
    inline void setKUrlComboBox_HideEvent_IsBase(bool value) const { kurlcombobox_hideevent_isbase = value; }
    inline void setKUrlComboBox_MouseReleaseEvent_IsBase(bool value) const { kurlcombobox_mousereleaseevent_isbase = value; }
    inline void setKUrlComboBox_KeyPressEvent_IsBase(bool value) const { kurlcombobox_keypressevent_isbase = value; }
    inline void setKUrlComboBox_KeyReleaseEvent_IsBase(bool value) const { kurlcombobox_keyreleaseevent_isbase = value; }
    inline void setKUrlComboBox_WheelEvent_IsBase(bool value) const { kurlcombobox_wheelevent_isbase = value; }
    inline void setKUrlComboBox_ContextMenuEvent_IsBase(bool value) const { kurlcombobox_contextmenuevent_isbase = value; }
    inline void setKUrlComboBox_InputMethodEvent_IsBase(bool value) const { kurlcombobox_inputmethodevent_isbase = value; }
    inline void setKUrlComboBox_InitStyleOption_IsBase(bool value) const { kurlcombobox_initstyleoption_isbase = value; }
    inline void setKUrlComboBox_DevType_IsBase(bool value) const { kurlcombobox_devtype_isbase = value; }
    inline void setKUrlComboBox_SetVisible_IsBase(bool value) const { kurlcombobox_setvisible_isbase = value; }
    inline void setKUrlComboBox_HeightForWidth_IsBase(bool value) const { kurlcombobox_heightforwidth_isbase = value; }
    inline void setKUrlComboBox_HasHeightForWidth_IsBase(bool value) const { kurlcombobox_hasheightforwidth_isbase = value; }
    inline void setKUrlComboBox_PaintEngine_IsBase(bool value) const { kurlcombobox_paintengine_isbase = value; }
    inline void setKUrlComboBox_MouseDoubleClickEvent_IsBase(bool value) const { kurlcombobox_mousedoubleclickevent_isbase = value; }
    inline void setKUrlComboBox_EnterEvent_IsBase(bool value) const { kurlcombobox_enterevent_isbase = value; }
    inline void setKUrlComboBox_LeaveEvent_IsBase(bool value) const { kurlcombobox_leaveevent_isbase = value; }
    inline void setKUrlComboBox_MoveEvent_IsBase(bool value) const { kurlcombobox_moveevent_isbase = value; }
    inline void setKUrlComboBox_CloseEvent_IsBase(bool value) const { kurlcombobox_closeevent_isbase = value; }
    inline void setKUrlComboBox_TabletEvent_IsBase(bool value) const { kurlcombobox_tabletevent_isbase = value; }
    inline void setKUrlComboBox_ActionEvent_IsBase(bool value) const { kurlcombobox_actionevent_isbase = value; }
    inline void setKUrlComboBox_DragEnterEvent_IsBase(bool value) const { kurlcombobox_dragenterevent_isbase = value; }
    inline void setKUrlComboBox_DragMoveEvent_IsBase(bool value) const { kurlcombobox_dragmoveevent_isbase = value; }
    inline void setKUrlComboBox_DragLeaveEvent_IsBase(bool value) const { kurlcombobox_dragleaveevent_isbase = value; }
    inline void setKUrlComboBox_DropEvent_IsBase(bool value) const { kurlcombobox_dropevent_isbase = value; }
    inline void setKUrlComboBox_NativeEvent_IsBase(bool value) const { kurlcombobox_nativeevent_isbase = value; }
    inline void setKUrlComboBox_Metric_IsBase(bool value) const { kurlcombobox_metric_isbase = value; }
    inline void setKUrlComboBox_InitPainter_IsBase(bool value) const { kurlcombobox_initpainter_isbase = value; }
    inline void setKUrlComboBox_Redirected_IsBase(bool value) const { kurlcombobox_redirected_isbase = value; }
    inline void setKUrlComboBox_SharedPainter_IsBase(bool value) const { kurlcombobox_sharedpainter_isbase = value; }
    inline void setKUrlComboBox_FocusNextPrevChild_IsBase(bool value) const { kurlcombobox_focusnextprevchild_isbase = value; }
    inline void setKUrlComboBox_EventFilter_IsBase(bool value) const { kurlcombobox_eventfilter_isbase = value; }
    inline void setKUrlComboBox_TimerEvent_IsBase(bool value) const { kurlcombobox_timerevent_isbase = value; }
    inline void setKUrlComboBox_ChildEvent_IsBase(bool value) const { kurlcombobox_childevent_isbase = value; }
    inline void setKUrlComboBox_CustomEvent_IsBase(bool value) const { kurlcombobox_customevent_isbase = value; }
    inline void setKUrlComboBox_ConnectNotify_IsBase(bool value) const { kurlcombobox_connectnotify_isbase = value; }
    inline void setKUrlComboBox_DisconnectNotify_IsBase(bool value) const { kurlcombobox_disconnectnotify_isbase = value; }
    inline void setKUrlComboBox_SetHandleSignals_IsBase(bool value) const { kurlcombobox_sethandlesignals_isbase = value; }
    inline void setKUrlComboBox_SetCompletionMode_IsBase(bool value) const { kurlcombobox_setcompletionmode_isbase = value; }
    inline void setKUrlComboBox_VirtualHook_IsBase(bool value) const { kurlcombobox_virtualhook_isbase = value; }
    inline void setKUrlComboBox_UpdateMicroFocus_IsBase(bool value) const { kurlcombobox_updatemicrofocus_isbase = value; }
    inline void setKUrlComboBox_Create_IsBase(bool value) const { kurlcombobox_create_isbase = value; }
    inline void setKUrlComboBox_Destroy_IsBase(bool value) const { kurlcombobox_destroy_isbase = value; }
    inline void setKUrlComboBox_FocusNextChild_IsBase(bool value) const { kurlcombobox_focusnextchild_isbase = value; }
    inline void setKUrlComboBox_FocusPreviousChild_IsBase(bool value) const { kurlcombobox_focuspreviouschild_isbase = value; }
    inline void setKUrlComboBox_Sender_IsBase(bool value) const { kurlcombobox_sender_isbase = value; }
    inline void setKUrlComboBox_SenderSignalIndex_IsBase(bool value) const { kurlcombobox_sendersignalindex_isbase = value; }
    inline void setKUrlComboBox_Receivers_IsBase(bool value) const { kurlcombobox_receivers_isbase = value; }
    inline void setKUrlComboBox_IsSignalConnected_IsBase(bool value) const { kurlcombobox_issignalconnected_isbase = value; }
    inline void setKUrlComboBox_GetDecodedMetricF_IsBase(bool value) const { kurlcombobox_getdecodedmetricf_isbase = value; }
    inline void setKUrlComboBox_KeyBindingMap_IsBase(bool value) const { kurlcombobox_keybindingmap_isbase = value; }
    inline void setKUrlComboBox_SetKeyBindingMap_IsBase(bool value) const { kurlcombobox_setkeybindingmap_isbase = value; }
    inline void setKUrlComboBox_SetDelegate_IsBase(bool value) const { kurlcombobox_setdelegate_isbase = value; }
    inline void setKUrlComboBox_Delegate_IsBase(bool value) const { kurlcombobox_delegate_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kurlcombobox_metacall_isbase) {
            kurlcombobox_metacall_isbase = false;
            return KUrlComboBox::qt_metacall(param1, param2, param3);
        } else if (kurlcombobox_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kurlcombobox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KUrlComboBox::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionObject(KCompletion* compObj, bool hsig) override {
        if (kurlcombobox_setcompletionobject_isbase) {
            kurlcombobox_setcompletionobject_isbase = false;
            KUrlComboBox::setCompletionObject(compObj, hsig);
        } else if (kurlcombobox_setcompletionobject_callback != nullptr) {
            KCompletion* cbval1 = compObj;
            bool cbval2 = hsig;

            kurlcombobox_setcompletionobject_callback(this, cbval1, cbval2);
        } else {
            KUrlComboBox::setCompletionObject(compObj, hsig);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kurlcombobox_mousepressevent_isbase) {
            kurlcombobox_mousepressevent_isbase = false;
            KUrlComboBox::mousePressEvent(event);
        } else if (kurlcombobox_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kurlcombobox_mousepressevent_callback(this, cbval1);
        } else {
            KUrlComboBox::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kurlcombobox_mousemoveevent_isbase) {
            kurlcombobox_mousemoveevent_isbase = false;
            KUrlComboBox::mouseMoveEvent(event);
        } else if (kurlcombobox_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kurlcombobox_mousemoveevent_callback(this, cbval1);
        } else {
            KUrlComboBox::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoCompletion(bool autocomplete) override {
        if (kurlcombobox_setautocompletion_isbase) {
            kurlcombobox_setautocompletion_isbase = false;
            KUrlComboBox::setAutoCompletion(autocomplete);
        } else if (kurlcombobox_setautocompletion_callback != nullptr) {
            bool cbval1 = autocomplete;

            kurlcombobox_setautocompletion_callback(this, cbval1);
        } else {
            KUrlComboBox::setAutoCompletion(autocomplete);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLineEdit(QLineEdit* lineEdit) override {
        if (kurlcombobox_setlineedit_isbase) {
            kurlcombobox_setlineedit_isbase = false;
            KUrlComboBox::setLineEdit(lineEdit);
        } else if (kurlcombobox_setlineedit_callback != nullptr) {
            QLineEdit* cbval1 = lineEdit;

            kurlcombobox_setlineedit_callback(this, cbval1);
        } else {
            KUrlComboBox::setLineEdit(lineEdit);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kurlcombobox_minimumsizehint_isbase) {
            kurlcombobox_minimumsizehint_isbase = false;
            return KUrlComboBox::minimumSizeHint();
        } else if (kurlcombobox_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kurlcombobox_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KUrlComboBox::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedText(const QString& completedText) override {
        if (kurlcombobox_setcompletedtext_isbase) {
            kurlcombobox_setcompletedtext_isbase = false;
            KUrlComboBox::setCompletedText(completedText);
        } else if (kurlcombobox_setcompletedtext_callback != nullptr) {
            const QString completedText_ret = completedText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray completedText_b = completedText_ret.toUtf8();
            libqt_string completedText_str;
            completedText_str.len = completedText_b.length();
            completedText_str.data = static_cast<const char*>(malloc(completedText_str.len + 1));
            memcpy((void*)completedText_str.data, completedText_b.data(), completedText_str.len);
            ((char*)completedText_str.data)[completedText_str.len] = '\0';
            libqt_string cbval1 = completedText_str;

            kurlcombobox_setcompletedtext_callback(this, cbval1);
        } else {
            KUrlComboBox::setCompletedText(completedText);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedItems(const QList<QString>& items, bool autoSuggest) override {
        if (kurlcombobox_setcompleteditems_isbase) {
            kurlcombobox_setcompleteditems_isbase = false;
            KUrlComboBox::setCompletedItems(items, autoSuggest);
        } else if (kurlcombobox_setcompleteditems_callback != nullptr) {
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

            kurlcombobox_setcompleteditems_callback(this, cbval1, cbval2);
        } else {
            KUrlComboBox::setCompletedItems(items, autoSuggest);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void makeCompletion(const QString& param1) override {
        if (kurlcombobox_makecompletion_isbase) {
            kurlcombobox_makecompletion_isbase = false;
            KUrlComboBox::makeCompletion(param1);
        } else if (kurlcombobox_makecompletion_callback != nullptr) {
            const QString param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            libqt_string param1_str;
            param1_str.len = param1_b.length();
            param1_str.data = static_cast<const char*>(malloc(param1_str.len + 1));
            memcpy((void*)param1_str.data, param1_b.data(), param1_str.len);
            ((char*)param1_str.data)[param1_str.len] = '\0';
            libqt_string cbval1 = param1_str;

            kurlcombobox_makecompletion_callback(this, cbval1);
        } else {
            KUrlComboBox::makeCompletion(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (kurlcombobox_setmodel_isbase) {
            kurlcombobox_setmodel_isbase = false;
            KUrlComboBox::setModel(model);
        } else if (kurlcombobox_setmodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = model;

            kurlcombobox_setmodel_callback(this, cbval1);
        } else {
            KUrlComboBox::setModel(model);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kurlcombobox_sizehint_isbase) {
            kurlcombobox_sizehint_isbase = false;
            return KUrlComboBox::sizeHint();
        } else if (kurlcombobox_sizehint_callback != nullptr) {
            QSize* callback_ret = kurlcombobox_sizehint_callback();
            return *callback_ret;
        } else {
            return KUrlComboBox::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (kurlcombobox_showpopup_isbase) {
            kurlcombobox_showpopup_isbase = false;
            KUrlComboBox::showPopup();
        } else if (kurlcombobox_showpopup_callback != nullptr) {
            kurlcombobox_showpopup_callback();
        } else {
            KUrlComboBox::showPopup();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (kurlcombobox_hidepopup_isbase) {
            kurlcombobox_hidepopup_isbase = false;
            KUrlComboBox::hidePopup();
        } else if (kurlcombobox_hidepopup_callback != nullptr) {
            kurlcombobox_hidepopup_callback();
        } else {
            KUrlComboBox::hidePopup();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kurlcombobox_event_isbase) {
            kurlcombobox_event_isbase = false;
            return KUrlComboBox::event(event);
        } else if (kurlcombobox_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kurlcombobox_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUrlComboBox::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kurlcombobox_inputmethodquery_isbase) {
            kurlcombobox_inputmethodquery_isbase = false;
            return KUrlComboBox::inputMethodQuery(param1);
        } else if (kurlcombobox_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kurlcombobox_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KUrlComboBox::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (kurlcombobox_focusinevent_isbase) {
            kurlcombobox_focusinevent_isbase = false;
            KUrlComboBox::focusInEvent(e);
        } else if (kurlcombobox_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            kurlcombobox_focusinevent_callback(this, cbval1);
        } else {
            KUrlComboBox::focusInEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (kurlcombobox_focusoutevent_isbase) {
            kurlcombobox_focusoutevent_isbase = false;
            KUrlComboBox::focusOutEvent(e);
        } else if (kurlcombobox_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            kurlcombobox_focusoutevent_callback(this, cbval1);
        } else {
            KUrlComboBox::focusOutEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kurlcombobox_changeevent_isbase) {
            kurlcombobox_changeevent_isbase = false;
            KUrlComboBox::changeEvent(e);
        } else if (kurlcombobox_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            kurlcombobox_changeevent_callback(this, cbval1);
        } else {
            KUrlComboBox::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (kurlcombobox_resizeevent_isbase) {
            kurlcombobox_resizeevent_isbase = false;
            KUrlComboBox::resizeEvent(e);
        } else if (kurlcombobox_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = e;

            kurlcombobox_resizeevent_callback(this, cbval1);
        } else {
            KUrlComboBox::resizeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (kurlcombobox_paintevent_isbase) {
            kurlcombobox_paintevent_isbase = false;
            KUrlComboBox::paintEvent(e);
        } else if (kurlcombobox_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = e;

            kurlcombobox_paintevent_callback(this, cbval1);
        } else {
            KUrlComboBox::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (kurlcombobox_showevent_isbase) {
            kurlcombobox_showevent_isbase = false;
            KUrlComboBox::showEvent(e);
        } else if (kurlcombobox_showevent_callback != nullptr) {
            QShowEvent* cbval1 = e;

            kurlcombobox_showevent_callback(this, cbval1);
        } else {
            KUrlComboBox::showEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (kurlcombobox_hideevent_isbase) {
            kurlcombobox_hideevent_isbase = false;
            KUrlComboBox::hideEvent(e);
        } else if (kurlcombobox_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = e;

            kurlcombobox_hideevent_callback(this, cbval1);
        } else {
            KUrlComboBox::hideEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (kurlcombobox_mousereleaseevent_isbase) {
            kurlcombobox_mousereleaseevent_isbase = false;
            KUrlComboBox::mouseReleaseEvent(e);
        } else if (kurlcombobox_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            kurlcombobox_mousereleaseevent_callback(this, cbval1);
        } else {
            KUrlComboBox::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (kurlcombobox_keypressevent_isbase) {
            kurlcombobox_keypressevent_isbase = false;
            KUrlComboBox::keyPressEvent(e);
        } else if (kurlcombobox_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            kurlcombobox_keypressevent_callback(this, cbval1);
        } else {
            KUrlComboBox::keyPressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (kurlcombobox_keyreleaseevent_isbase) {
            kurlcombobox_keyreleaseevent_isbase = false;
            KUrlComboBox::keyReleaseEvent(e);
        } else if (kurlcombobox_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            kurlcombobox_keyreleaseevent_callback(this, cbval1);
        } else {
            KUrlComboBox::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (kurlcombobox_wheelevent_isbase) {
            kurlcombobox_wheelevent_isbase = false;
            KUrlComboBox::wheelEvent(e);
        } else if (kurlcombobox_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = e;

            kurlcombobox_wheelevent_callback(this, cbval1);
        } else {
            KUrlComboBox::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (kurlcombobox_contextmenuevent_isbase) {
            kurlcombobox_contextmenuevent_isbase = false;
            KUrlComboBox::contextMenuEvent(e);
        } else if (kurlcombobox_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = e;

            kurlcombobox_contextmenuevent_callback(this, cbval1);
        } else {
            KUrlComboBox::contextMenuEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kurlcombobox_inputmethodevent_isbase) {
            kurlcombobox_inputmethodevent_isbase = false;
            KUrlComboBox::inputMethodEvent(param1);
        } else if (kurlcombobox_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kurlcombobox_inputmethodevent_callback(this, cbval1);
        } else {
            KUrlComboBox::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (kurlcombobox_initstyleoption_isbase) {
            kurlcombobox_initstyleoption_isbase = false;
            KUrlComboBox::initStyleOption(option);
        } else if (kurlcombobox_initstyleoption_callback != nullptr) {
            QStyleOptionComboBox* cbval1 = option;

            kurlcombobox_initstyleoption_callback(this, cbval1);
        } else {
            KUrlComboBox::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kurlcombobox_devtype_isbase) {
            kurlcombobox_devtype_isbase = false;
            return KUrlComboBox::devType();
        } else if (kurlcombobox_devtype_callback != nullptr) {
            int callback_ret = kurlcombobox_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KUrlComboBox::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kurlcombobox_setvisible_isbase) {
            kurlcombobox_setvisible_isbase = false;
            KUrlComboBox::setVisible(visible);
        } else if (kurlcombobox_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kurlcombobox_setvisible_callback(this, cbval1);
        } else {
            KUrlComboBox::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kurlcombobox_heightforwidth_isbase) {
            kurlcombobox_heightforwidth_isbase = false;
            return KUrlComboBox::heightForWidth(param1);
        } else if (kurlcombobox_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kurlcombobox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KUrlComboBox::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kurlcombobox_hasheightforwidth_isbase) {
            kurlcombobox_hasheightforwidth_isbase = false;
            return KUrlComboBox::hasHeightForWidth();
        } else if (kurlcombobox_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kurlcombobox_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KUrlComboBox::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kurlcombobox_paintengine_isbase) {
            kurlcombobox_paintengine_isbase = false;
            return KUrlComboBox::paintEngine();
        } else if (kurlcombobox_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kurlcombobox_paintengine_callback();
            return callback_ret;
        } else {
            return KUrlComboBox::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kurlcombobox_mousedoubleclickevent_isbase) {
            kurlcombobox_mousedoubleclickevent_isbase = false;
            KUrlComboBox::mouseDoubleClickEvent(event);
        } else if (kurlcombobox_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kurlcombobox_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KUrlComboBox::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kurlcombobox_enterevent_isbase) {
            kurlcombobox_enterevent_isbase = false;
            KUrlComboBox::enterEvent(event);
        } else if (kurlcombobox_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kurlcombobox_enterevent_callback(this, cbval1);
        } else {
            KUrlComboBox::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kurlcombobox_leaveevent_isbase) {
            kurlcombobox_leaveevent_isbase = false;
            KUrlComboBox::leaveEvent(event);
        } else if (kurlcombobox_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kurlcombobox_leaveevent_callback(this, cbval1);
        } else {
            KUrlComboBox::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kurlcombobox_moveevent_isbase) {
            kurlcombobox_moveevent_isbase = false;
            KUrlComboBox::moveEvent(event);
        } else if (kurlcombobox_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kurlcombobox_moveevent_callback(this, cbval1);
        } else {
            KUrlComboBox::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kurlcombobox_closeevent_isbase) {
            kurlcombobox_closeevent_isbase = false;
            KUrlComboBox::closeEvent(event);
        } else if (kurlcombobox_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kurlcombobox_closeevent_callback(this, cbval1);
        } else {
            KUrlComboBox::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kurlcombobox_tabletevent_isbase) {
            kurlcombobox_tabletevent_isbase = false;
            KUrlComboBox::tabletEvent(event);
        } else if (kurlcombobox_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kurlcombobox_tabletevent_callback(this, cbval1);
        } else {
            KUrlComboBox::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kurlcombobox_actionevent_isbase) {
            kurlcombobox_actionevent_isbase = false;
            KUrlComboBox::actionEvent(event);
        } else if (kurlcombobox_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kurlcombobox_actionevent_callback(this, cbval1);
        } else {
            KUrlComboBox::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kurlcombobox_dragenterevent_isbase) {
            kurlcombobox_dragenterevent_isbase = false;
            KUrlComboBox::dragEnterEvent(event);
        } else if (kurlcombobox_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kurlcombobox_dragenterevent_callback(this, cbval1);
        } else {
            KUrlComboBox::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kurlcombobox_dragmoveevent_isbase) {
            kurlcombobox_dragmoveevent_isbase = false;
            KUrlComboBox::dragMoveEvent(event);
        } else if (kurlcombobox_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kurlcombobox_dragmoveevent_callback(this, cbval1);
        } else {
            KUrlComboBox::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kurlcombobox_dragleaveevent_isbase) {
            kurlcombobox_dragleaveevent_isbase = false;
            KUrlComboBox::dragLeaveEvent(event);
        } else if (kurlcombobox_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kurlcombobox_dragleaveevent_callback(this, cbval1);
        } else {
            KUrlComboBox::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kurlcombobox_dropevent_isbase) {
            kurlcombobox_dropevent_isbase = false;
            KUrlComboBox::dropEvent(event);
        } else if (kurlcombobox_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kurlcombobox_dropevent_callback(this, cbval1);
        } else {
            KUrlComboBox::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kurlcombobox_nativeevent_isbase) {
            kurlcombobox_nativeevent_isbase = false;
            return KUrlComboBox::nativeEvent(eventType, message, result);
        } else if (kurlcombobox_nativeevent_callback != nullptr) {
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

            bool callback_ret = kurlcombobox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KUrlComboBox::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kurlcombobox_metric_isbase) {
            kurlcombobox_metric_isbase = false;
            return KUrlComboBox::metric(param1);
        } else if (kurlcombobox_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kurlcombobox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KUrlComboBox::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kurlcombobox_initpainter_isbase) {
            kurlcombobox_initpainter_isbase = false;
            KUrlComboBox::initPainter(painter);
        } else if (kurlcombobox_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kurlcombobox_initpainter_callback(this, cbval1);
        } else {
            KUrlComboBox::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kurlcombobox_redirected_isbase) {
            kurlcombobox_redirected_isbase = false;
            return KUrlComboBox::redirected(offset);
        } else if (kurlcombobox_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kurlcombobox_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUrlComboBox::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kurlcombobox_sharedpainter_isbase) {
            kurlcombobox_sharedpainter_isbase = false;
            return KUrlComboBox::sharedPainter();
        } else if (kurlcombobox_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kurlcombobox_sharedpainter_callback();
            return callback_ret;
        } else {
            return KUrlComboBox::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kurlcombobox_focusnextprevchild_isbase) {
            kurlcombobox_focusnextprevchild_isbase = false;
            return KUrlComboBox::focusNextPrevChild(next);
        } else if (kurlcombobox_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kurlcombobox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUrlComboBox::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kurlcombobox_eventfilter_isbase) {
            kurlcombobox_eventfilter_isbase = false;
            return KUrlComboBox::eventFilter(watched, event);
        } else if (kurlcombobox_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kurlcombobox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KUrlComboBox::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kurlcombobox_timerevent_isbase) {
            kurlcombobox_timerevent_isbase = false;
            KUrlComboBox::timerEvent(event);
        } else if (kurlcombobox_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kurlcombobox_timerevent_callback(this, cbval1);
        } else {
            KUrlComboBox::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kurlcombobox_childevent_isbase) {
            kurlcombobox_childevent_isbase = false;
            KUrlComboBox::childEvent(event);
        } else if (kurlcombobox_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kurlcombobox_childevent_callback(this, cbval1);
        } else {
            KUrlComboBox::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kurlcombobox_customevent_isbase) {
            kurlcombobox_customevent_isbase = false;
            KUrlComboBox::customEvent(event);
        } else if (kurlcombobox_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kurlcombobox_customevent_callback(this, cbval1);
        } else {
            KUrlComboBox::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kurlcombobox_connectnotify_isbase) {
            kurlcombobox_connectnotify_isbase = false;
            KUrlComboBox::connectNotify(signal);
        } else if (kurlcombobox_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kurlcombobox_connectnotify_callback(this, cbval1);
        } else {
            KUrlComboBox::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kurlcombobox_disconnectnotify_isbase) {
            kurlcombobox_disconnectnotify_isbase = false;
            KUrlComboBox::disconnectNotify(signal);
        } else if (kurlcombobox_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kurlcombobox_disconnectnotify_callback(this, cbval1);
        } else {
            KUrlComboBox::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHandleSignals(bool handle) override {
        if (kurlcombobox_sethandlesignals_isbase) {
            kurlcombobox_sethandlesignals_isbase = false;
            KUrlComboBox::setHandleSignals(handle);
        } else if (kurlcombobox_sethandlesignals_callback != nullptr) {
            bool cbval1 = handle;

            kurlcombobox_sethandlesignals_callback(this, cbval1);
        } else {
            KUrlComboBox::setHandleSignals(handle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionMode(KCompletion::CompletionMode mode) override {
        if (kurlcombobox_setcompletionmode_isbase) {
            kurlcombobox_setcompletionmode_isbase = false;
            KUrlComboBox::setCompletionMode(mode);
        } else if (kurlcombobox_setcompletionmode_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            kurlcombobox_setcompletionmode_callback(this, cbval1);
        } else {
            KUrlComboBox::setCompletionMode(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kurlcombobox_virtualhook_isbase) {
            kurlcombobox_virtualhook_isbase = false;
            KUrlComboBox::virtual_hook(id, data);
        } else if (kurlcombobox_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            kurlcombobox_virtualhook_callback(this, cbval1, cbval2);
        } else {
            KUrlComboBox::virtual_hook(id, data);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kurlcombobox_updatemicrofocus_isbase) {
            kurlcombobox_updatemicrofocus_isbase = false;
            KUrlComboBox::updateMicroFocus();
        } else if (kurlcombobox_updatemicrofocus_callback != nullptr) {
            kurlcombobox_updatemicrofocus_callback();
        } else {
            KUrlComboBox::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kurlcombobox_create_isbase) {
            kurlcombobox_create_isbase = false;
            KUrlComboBox::create();
        } else if (kurlcombobox_create_callback != nullptr) {
            kurlcombobox_create_callback();
        } else {
            KUrlComboBox::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kurlcombobox_destroy_isbase) {
            kurlcombobox_destroy_isbase = false;
            KUrlComboBox::destroy();
        } else if (kurlcombobox_destroy_callback != nullptr) {
            kurlcombobox_destroy_callback();
        } else {
            KUrlComboBox::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kurlcombobox_focusnextchild_isbase) {
            kurlcombobox_focusnextchild_isbase = false;
            return KUrlComboBox::focusNextChild();
        } else if (kurlcombobox_focusnextchild_callback != nullptr) {
            bool callback_ret = kurlcombobox_focusnextchild_callback();
            return callback_ret;
        } else {
            return KUrlComboBox::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kurlcombobox_focuspreviouschild_isbase) {
            kurlcombobox_focuspreviouschild_isbase = false;
            return KUrlComboBox::focusPreviousChild();
        } else if (kurlcombobox_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kurlcombobox_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KUrlComboBox::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kurlcombobox_sender_isbase) {
            kurlcombobox_sender_isbase = false;
            return KUrlComboBox::sender();
        } else if (kurlcombobox_sender_callback != nullptr) {
            QObject* callback_ret = kurlcombobox_sender_callback();
            return callback_ret;
        } else {
            return KUrlComboBox::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kurlcombobox_sendersignalindex_isbase) {
            kurlcombobox_sendersignalindex_isbase = false;
            return KUrlComboBox::senderSignalIndex();
        } else if (kurlcombobox_sendersignalindex_callback != nullptr) {
            int callback_ret = kurlcombobox_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KUrlComboBox::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kurlcombobox_receivers_isbase) {
            kurlcombobox_receivers_isbase = false;
            return KUrlComboBox::receivers(signal);
        } else if (kurlcombobox_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kurlcombobox_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KUrlComboBox::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kurlcombobox_issignalconnected_isbase) {
            kurlcombobox_issignalconnected_isbase = false;
            return KUrlComboBox::isSignalConnected(signal);
        } else if (kurlcombobox_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kurlcombobox_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUrlComboBox::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kurlcombobox_getdecodedmetricf_isbase) {
            kurlcombobox_getdecodedmetricf_isbase = false;
            return KUrlComboBox::getDecodedMetricF(metricA, metricB);
        } else if (kurlcombobox_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kurlcombobox_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KUrlComboBox::getDecodedMetricF(metricA, metricB);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> keyBindingMap() const {
        if (kurlcombobox_keybindingmap_isbase) {
            kurlcombobox_keybindingmap_isbase = false;
            return KUrlComboBox::keyBindingMap();
        } else if (kurlcombobox_keybindingmap_callback != nullptr) {
            libqt_map /* of int to libqt_list  of QKeySequence*  */ callback_ret = kurlcombobox_keybindingmap_callback();
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
            return KUrlComboBox::keyBindingMap();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setKeyBindingMap(QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> keyBindingMap) {
        if (kurlcombobox_setkeybindingmap_isbase) {
            kurlcombobox_setkeybindingmap_isbase = false;
            KUrlComboBox::setKeyBindingMap(keyBindingMap);
        } else if (kurlcombobox_setkeybindingmap_callback != nullptr) {
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

            kurlcombobox_setkeybindingmap_callback(this, cbval1);
        } else {
            KUrlComboBox::setKeyBindingMap(keyBindingMap);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDelegate(KCompletionBase* delegate) {
        if (kurlcombobox_setdelegate_isbase) {
            kurlcombobox_setdelegate_isbase = false;
            KUrlComboBox::setDelegate(delegate);
        } else if (kurlcombobox_setdelegate_callback != nullptr) {
            KCompletionBase* cbval1 = delegate;

            kurlcombobox_setdelegate_callback(this, cbval1);
        } else {
            KUrlComboBox::setDelegate(delegate);
        }
    }

    // Virtual method for C ABI access and custom callback
    KCompletionBase* delegate() const {
        if (kurlcombobox_delegate_isbase) {
            kurlcombobox_delegate_isbase = false;
            return KUrlComboBox::delegate();
        } else if (kurlcombobox_delegate_callback != nullptr) {
            KCompletionBase* callback_ret = kurlcombobox_delegate_callback();
            return callback_ret;
        } else {
            return KUrlComboBox::delegate();
        }
    }

    // Friend functions
    friend void KUrlComboBox_MousePressEvent(KUrlComboBox* self, QMouseEvent* event);
    friend void KUrlComboBox_QBaseMousePressEvent(KUrlComboBox* self, QMouseEvent* event);
    friend void KUrlComboBox_MouseMoveEvent(KUrlComboBox* self, QMouseEvent* event);
    friend void KUrlComboBox_QBaseMouseMoveEvent(KUrlComboBox* self, QMouseEvent* event);
    friend void KUrlComboBox_MakeCompletion(KUrlComboBox* self, const libqt_string param1);
    friend void KUrlComboBox_QBaseMakeCompletion(KUrlComboBox* self, const libqt_string param1);
    friend void KUrlComboBox_FocusInEvent(KUrlComboBox* self, QFocusEvent* e);
    friend void KUrlComboBox_QBaseFocusInEvent(KUrlComboBox* self, QFocusEvent* e);
    friend void KUrlComboBox_FocusOutEvent(KUrlComboBox* self, QFocusEvent* e);
    friend void KUrlComboBox_QBaseFocusOutEvent(KUrlComboBox* self, QFocusEvent* e);
    friend void KUrlComboBox_ChangeEvent(KUrlComboBox* self, QEvent* e);
    friend void KUrlComboBox_QBaseChangeEvent(KUrlComboBox* self, QEvent* e);
    friend void KUrlComboBox_ResizeEvent(KUrlComboBox* self, QResizeEvent* e);
    friend void KUrlComboBox_QBaseResizeEvent(KUrlComboBox* self, QResizeEvent* e);
    friend void KUrlComboBox_PaintEvent(KUrlComboBox* self, QPaintEvent* e);
    friend void KUrlComboBox_QBasePaintEvent(KUrlComboBox* self, QPaintEvent* e);
    friend void KUrlComboBox_ShowEvent(KUrlComboBox* self, QShowEvent* e);
    friend void KUrlComboBox_QBaseShowEvent(KUrlComboBox* self, QShowEvent* e);
    friend void KUrlComboBox_HideEvent(KUrlComboBox* self, QHideEvent* e);
    friend void KUrlComboBox_QBaseHideEvent(KUrlComboBox* self, QHideEvent* e);
    friend void KUrlComboBox_MouseReleaseEvent(KUrlComboBox* self, QMouseEvent* e);
    friend void KUrlComboBox_QBaseMouseReleaseEvent(KUrlComboBox* self, QMouseEvent* e);
    friend void KUrlComboBox_KeyPressEvent(KUrlComboBox* self, QKeyEvent* e);
    friend void KUrlComboBox_QBaseKeyPressEvent(KUrlComboBox* self, QKeyEvent* e);
    friend void KUrlComboBox_KeyReleaseEvent(KUrlComboBox* self, QKeyEvent* e);
    friend void KUrlComboBox_QBaseKeyReleaseEvent(KUrlComboBox* self, QKeyEvent* e);
    friend void KUrlComboBox_WheelEvent(KUrlComboBox* self, QWheelEvent* e);
    friend void KUrlComboBox_QBaseWheelEvent(KUrlComboBox* self, QWheelEvent* e);
    friend void KUrlComboBox_ContextMenuEvent(KUrlComboBox* self, QContextMenuEvent* e);
    friend void KUrlComboBox_QBaseContextMenuEvent(KUrlComboBox* self, QContextMenuEvent* e);
    friend void KUrlComboBox_InputMethodEvent(KUrlComboBox* self, QInputMethodEvent* param1);
    friend void KUrlComboBox_QBaseInputMethodEvent(KUrlComboBox* self, QInputMethodEvent* param1);
    friend void KUrlComboBox_InitStyleOption(const KUrlComboBox* self, QStyleOptionComboBox* option);
    friend void KUrlComboBox_QBaseInitStyleOption(const KUrlComboBox* self, QStyleOptionComboBox* option);
    friend void KUrlComboBox_MouseDoubleClickEvent(KUrlComboBox* self, QMouseEvent* event);
    friend void KUrlComboBox_QBaseMouseDoubleClickEvent(KUrlComboBox* self, QMouseEvent* event);
    friend void KUrlComboBox_EnterEvent(KUrlComboBox* self, QEnterEvent* event);
    friend void KUrlComboBox_QBaseEnterEvent(KUrlComboBox* self, QEnterEvent* event);
    friend void KUrlComboBox_LeaveEvent(KUrlComboBox* self, QEvent* event);
    friend void KUrlComboBox_QBaseLeaveEvent(KUrlComboBox* self, QEvent* event);
    friend void KUrlComboBox_MoveEvent(KUrlComboBox* self, QMoveEvent* event);
    friend void KUrlComboBox_QBaseMoveEvent(KUrlComboBox* self, QMoveEvent* event);
    friend void KUrlComboBox_CloseEvent(KUrlComboBox* self, QCloseEvent* event);
    friend void KUrlComboBox_QBaseCloseEvent(KUrlComboBox* self, QCloseEvent* event);
    friend void KUrlComboBox_TabletEvent(KUrlComboBox* self, QTabletEvent* event);
    friend void KUrlComboBox_QBaseTabletEvent(KUrlComboBox* self, QTabletEvent* event);
    friend void KUrlComboBox_ActionEvent(KUrlComboBox* self, QActionEvent* event);
    friend void KUrlComboBox_QBaseActionEvent(KUrlComboBox* self, QActionEvent* event);
    friend void KUrlComboBox_DragEnterEvent(KUrlComboBox* self, QDragEnterEvent* event);
    friend void KUrlComboBox_QBaseDragEnterEvent(KUrlComboBox* self, QDragEnterEvent* event);
    friend void KUrlComboBox_DragMoveEvent(KUrlComboBox* self, QDragMoveEvent* event);
    friend void KUrlComboBox_QBaseDragMoveEvent(KUrlComboBox* self, QDragMoveEvent* event);
    friend void KUrlComboBox_DragLeaveEvent(KUrlComboBox* self, QDragLeaveEvent* event);
    friend void KUrlComboBox_QBaseDragLeaveEvent(KUrlComboBox* self, QDragLeaveEvent* event);
    friend void KUrlComboBox_DropEvent(KUrlComboBox* self, QDropEvent* event);
    friend void KUrlComboBox_QBaseDropEvent(KUrlComboBox* self, QDropEvent* event);
    friend bool KUrlComboBox_NativeEvent(KUrlComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KUrlComboBox_QBaseNativeEvent(KUrlComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KUrlComboBox_Metric(const KUrlComboBox* self, int param1);
    friend int KUrlComboBox_QBaseMetric(const KUrlComboBox* self, int param1);
    friend void KUrlComboBox_InitPainter(const KUrlComboBox* self, QPainter* painter);
    friend void KUrlComboBox_QBaseInitPainter(const KUrlComboBox* self, QPainter* painter);
    friend QPaintDevice* KUrlComboBox_Redirected(const KUrlComboBox* self, QPoint* offset);
    friend QPaintDevice* KUrlComboBox_QBaseRedirected(const KUrlComboBox* self, QPoint* offset);
    friend QPainter* KUrlComboBox_SharedPainter(const KUrlComboBox* self);
    friend QPainter* KUrlComboBox_QBaseSharedPainter(const KUrlComboBox* self);
    friend bool KUrlComboBox_FocusNextPrevChild(KUrlComboBox* self, bool next);
    friend bool KUrlComboBox_QBaseFocusNextPrevChild(KUrlComboBox* self, bool next);
    friend void KUrlComboBox_TimerEvent(KUrlComboBox* self, QTimerEvent* event);
    friend void KUrlComboBox_QBaseTimerEvent(KUrlComboBox* self, QTimerEvent* event);
    friend void KUrlComboBox_ChildEvent(KUrlComboBox* self, QChildEvent* event);
    friend void KUrlComboBox_QBaseChildEvent(KUrlComboBox* self, QChildEvent* event);
    friend void KUrlComboBox_CustomEvent(KUrlComboBox* self, QEvent* event);
    friend void KUrlComboBox_QBaseCustomEvent(KUrlComboBox* self, QEvent* event);
    friend void KUrlComboBox_ConnectNotify(KUrlComboBox* self, const QMetaMethod* signal);
    friend void KUrlComboBox_QBaseConnectNotify(KUrlComboBox* self, const QMetaMethod* signal);
    friend void KUrlComboBox_DisconnectNotify(KUrlComboBox* self, const QMetaMethod* signal);
    friend void KUrlComboBox_QBaseDisconnectNotify(KUrlComboBox* self, const QMetaMethod* signal);
    friend void KUrlComboBox_VirtualHook(KUrlComboBox* self, int id, void* data);
    friend void KUrlComboBox_QBaseVirtualHook(KUrlComboBox* self, int id, void* data);
    friend void KUrlComboBox_UpdateMicroFocus(KUrlComboBox* self);
    friend void KUrlComboBox_QBaseUpdateMicroFocus(KUrlComboBox* self);
    friend void KUrlComboBox_Create(KUrlComboBox* self);
    friend void KUrlComboBox_QBaseCreate(KUrlComboBox* self);
    friend void KUrlComboBox_Destroy(KUrlComboBox* self);
    friend void KUrlComboBox_QBaseDestroy(KUrlComboBox* self);
    friend bool KUrlComboBox_FocusNextChild(KUrlComboBox* self);
    friend bool KUrlComboBox_QBaseFocusNextChild(KUrlComboBox* self);
    friend bool KUrlComboBox_FocusPreviousChild(KUrlComboBox* self);
    friend bool KUrlComboBox_QBaseFocusPreviousChild(KUrlComboBox* self);
    friend QObject* KUrlComboBox_Sender(const KUrlComboBox* self);
    friend QObject* KUrlComboBox_QBaseSender(const KUrlComboBox* self);
    friend int KUrlComboBox_SenderSignalIndex(const KUrlComboBox* self);
    friend int KUrlComboBox_QBaseSenderSignalIndex(const KUrlComboBox* self);
    friend int KUrlComboBox_Receivers(const KUrlComboBox* self, const char* signal);
    friend int KUrlComboBox_QBaseReceivers(const KUrlComboBox* self, const char* signal);
    friend bool KUrlComboBox_IsSignalConnected(const KUrlComboBox* self, const QMetaMethod* signal);
    friend bool KUrlComboBox_QBaseIsSignalConnected(const KUrlComboBox* self, const QMetaMethod* signal);
    friend double KUrlComboBox_GetDecodedMetricF(const KUrlComboBox* self, int metricA, int metricB);
    friend double KUrlComboBox_QBaseGetDecodedMetricF(const KUrlComboBox* self, int metricA, int metricB);
    friend libqt_map /* of int to libqt_list  of QKeySequence*  */ KUrlComboBox_KeyBindingMap(const KUrlComboBox* self);
    friend libqt_map /* of int to libqt_list  of QKeySequence*  */ KUrlComboBox_QBaseKeyBindingMap(const KUrlComboBox* self);
    friend void KUrlComboBox_SetKeyBindingMap(KUrlComboBox* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap);
    friend void KUrlComboBox_QBaseSetKeyBindingMap(KUrlComboBox* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap);
    friend void KUrlComboBox_SetDelegate(KUrlComboBox* self, KCompletionBase* delegate);
    friend void KUrlComboBox_QBaseSetDelegate(KUrlComboBox* self, KCompletionBase* delegate);
    friend KCompletionBase* KUrlComboBox_Delegate(const KUrlComboBox* self);
    friend KCompletionBase* KUrlComboBox_QBaseDelegate(const KUrlComboBox* self);
};

#endif
