#pragma once
#ifndef SRC_EXTRAS_KCOMPLETIONC_LIBVIRTUALKHISTORYCOMBOBOX_H
#define SRC_EXTRAS_KCOMPLETIONC_LIBVIRTUALKHISTORYCOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KHistoryComboBox so that we can call protected methods
class VirtualKHistoryComboBox final : public KHistoryComboBox {

  public:
    // Virtual class boolean flag
    bool isVirtualKHistoryComboBox = true;

    // Virtual class public types (including callbacks)
    using KHistoryComboBox_Metacall_Callback = int (*)(KHistoryComboBox*, int, int, void**);
    using KHistoryComboBox_KeyPressEvent_Callback = void (*)(KHistoryComboBox*, QKeyEvent*);
    using KHistoryComboBox_WheelEvent_Callback = void (*)(KHistoryComboBox*, QWheelEvent*);
    using KHistoryComboBox_SetAutoCompletion_Callback = void (*)(KHistoryComboBox*, bool);
    using KHistoryComboBox_SetLineEdit_Callback = void (*)(KHistoryComboBox*, QLineEdit*);
    using KHistoryComboBox_MinimumSizeHint_Callback = QSize* (*)();
    using KHistoryComboBox_SetCompletedText_Callback = void (*)(KHistoryComboBox*, libqt_string);
    using KHistoryComboBox_SetCompletedItems_Callback = void (*)(KHistoryComboBox*, libqt_list /* of libqt_string */, bool);
    using KHistoryComboBox_MakeCompletion_Callback = void (*)(KHistoryComboBox*, libqt_string);
    using KHistoryComboBox_SetModel_Callback = void (*)(KHistoryComboBox*, QAbstractItemModel*);
    using KHistoryComboBox_SizeHint_Callback = QSize* (*)();
    using KHistoryComboBox_ShowPopup_Callback = void (*)();
    using KHistoryComboBox_HidePopup_Callback = void (*)();
    using KHistoryComboBox_Event_Callback = bool (*)(KHistoryComboBox*, QEvent*);
    using KHistoryComboBox_InputMethodQuery_Callback = QVariant* (*)(const KHistoryComboBox*, int);
    using KHistoryComboBox_FocusInEvent_Callback = void (*)(KHistoryComboBox*, QFocusEvent*);
    using KHistoryComboBox_FocusOutEvent_Callback = void (*)(KHistoryComboBox*, QFocusEvent*);
    using KHistoryComboBox_ChangeEvent_Callback = void (*)(KHistoryComboBox*, QEvent*);
    using KHistoryComboBox_ResizeEvent_Callback = void (*)(KHistoryComboBox*, QResizeEvent*);
    using KHistoryComboBox_PaintEvent_Callback = void (*)(KHistoryComboBox*, QPaintEvent*);
    using KHistoryComboBox_ShowEvent_Callback = void (*)(KHistoryComboBox*, QShowEvent*);
    using KHistoryComboBox_HideEvent_Callback = void (*)(KHistoryComboBox*, QHideEvent*);
    using KHistoryComboBox_MousePressEvent_Callback = void (*)(KHistoryComboBox*, QMouseEvent*);
    using KHistoryComboBox_MouseReleaseEvent_Callback = void (*)(KHistoryComboBox*, QMouseEvent*);
    using KHistoryComboBox_KeyReleaseEvent_Callback = void (*)(KHistoryComboBox*, QKeyEvent*);
    using KHistoryComboBox_ContextMenuEvent_Callback = void (*)(KHistoryComboBox*, QContextMenuEvent*);
    using KHistoryComboBox_InputMethodEvent_Callback = void (*)(KHistoryComboBox*, QInputMethodEvent*);
    using KHistoryComboBox_InitStyleOption_Callback = void (*)(const KHistoryComboBox*, QStyleOptionComboBox*);
    using KHistoryComboBox_DevType_Callback = int (*)();
    using KHistoryComboBox_SetVisible_Callback = void (*)(KHistoryComboBox*, bool);
    using KHistoryComboBox_HeightForWidth_Callback = int (*)(const KHistoryComboBox*, int);
    using KHistoryComboBox_HasHeightForWidth_Callback = bool (*)();
    using KHistoryComboBox_PaintEngine_Callback = QPaintEngine* (*)();
    using KHistoryComboBox_MouseDoubleClickEvent_Callback = void (*)(KHistoryComboBox*, QMouseEvent*);
    using KHistoryComboBox_MouseMoveEvent_Callback = void (*)(KHistoryComboBox*, QMouseEvent*);
    using KHistoryComboBox_EnterEvent_Callback = void (*)(KHistoryComboBox*, QEnterEvent*);
    using KHistoryComboBox_LeaveEvent_Callback = void (*)(KHistoryComboBox*, QEvent*);
    using KHistoryComboBox_MoveEvent_Callback = void (*)(KHistoryComboBox*, QMoveEvent*);
    using KHistoryComboBox_CloseEvent_Callback = void (*)(KHistoryComboBox*, QCloseEvent*);
    using KHistoryComboBox_TabletEvent_Callback = void (*)(KHistoryComboBox*, QTabletEvent*);
    using KHistoryComboBox_ActionEvent_Callback = void (*)(KHistoryComboBox*, QActionEvent*);
    using KHistoryComboBox_DragEnterEvent_Callback = void (*)(KHistoryComboBox*, QDragEnterEvent*);
    using KHistoryComboBox_DragMoveEvent_Callback = void (*)(KHistoryComboBox*, QDragMoveEvent*);
    using KHistoryComboBox_DragLeaveEvent_Callback = void (*)(KHistoryComboBox*, QDragLeaveEvent*);
    using KHistoryComboBox_DropEvent_Callback = void (*)(KHistoryComboBox*, QDropEvent*);
    using KHistoryComboBox_NativeEvent_Callback = bool (*)(KHistoryComboBox*, libqt_string, void*, intptr_t*);
    using KHistoryComboBox_Metric_Callback = int (*)(const KHistoryComboBox*, int);
    using KHistoryComboBox_InitPainter_Callback = void (*)(const KHistoryComboBox*, QPainter*);
    using KHistoryComboBox_Redirected_Callback = QPaintDevice* (*)(const KHistoryComboBox*, QPoint*);
    using KHistoryComboBox_SharedPainter_Callback = QPainter* (*)();
    using KHistoryComboBox_FocusNextPrevChild_Callback = bool (*)(KHistoryComboBox*, bool);
    using KHistoryComboBox_EventFilter_Callback = bool (*)(KHistoryComboBox*, QObject*, QEvent*);
    using KHistoryComboBox_TimerEvent_Callback = void (*)(KHistoryComboBox*, QTimerEvent*);
    using KHistoryComboBox_ChildEvent_Callback = void (*)(KHistoryComboBox*, QChildEvent*);
    using KHistoryComboBox_CustomEvent_Callback = void (*)(KHistoryComboBox*, QEvent*);
    using KHistoryComboBox_ConnectNotify_Callback = void (*)(KHistoryComboBox*, QMetaMethod*);
    using KHistoryComboBox_DisconnectNotify_Callback = void (*)(KHistoryComboBox*, QMetaMethod*);
    using KHistoryComboBox_SetCompletionObject_Callback = void (*)(KHistoryComboBox*, KCompletion*, bool);
    using KHistoryComboBox_SetHandleSignals_Callback = void (*)(KHistoryComboBox*, bool);
    using KHistoryComboBox_SetCompletionMode_Callback = void (*)(KHistoryComboBox*, int);
    using KHistoryComboBox_VirtualHook_Callback = void (*)(KHistoryComboBox*, int, void*);
    using KHistoryComboBox_InsertItems_Callback = void (*)(KHistoryComboBox*, libqt_list /* of libqt_string */);
    using KHistoryComboBox_UseCompletion_Callback = bool (*)();
    using KHistoryComboBox_UpdateMicroFocus_Callback = void (*)();
    using KHistoryComboBox_Create_Callback = void (*)();
    using KHistoryComboBox_Destroy_Callback = void (*)();
    using KHistoryComboBox_FocusNextChild_Callback = bool (*)();
    using KHistoryComboBox_FocusPreviousChild_Callback = bool (*)();
    using KHistoryComboBox_Sender_Callback = QObject* (*)();
    using KHistoryComboBox_SenderSignalIndex_Callback = int (*)();
    using KHistoryComboBox_Receivers_Callback = int (*)(const KHistoryComboBox*, const char*);
    using KHistoryComboBox_IsSignalConnected_Callback = bool (*)(const KHistoryComboBox*, QMetaMethod*);
    using KHistoryComboBox_GetDecodedMetricF_Callback = double (*)(const KHistoryComboBox*, int, int);
    using KHistoryComboBox_KeyBindingMap_Callback = libqt_map /* of int to libqt_list  of QKeySequence*  */ (*)();
    using KHistoryComboBox_SetKeyBindingMap_Callback = void (*)(KHistoryComboBox*, libqt_map /* of int to libqt_list  of QKeySequence*  */);
    using KHistoryComboBox_SetDelegate_Callback = void (*)(KHistoryComboBox*, KCompletionBase*);
    using KHistoryComboBox_Delegate_Callback = KCompletionBase* (*)();

  protected:
    // Instance callback storage
    KHistoryComboBox_Metacall_Callback khistorycombobox_metacall_callback = nullptr;
    KHistoryComboBox_KeyPressEvent_Callback khistorycombobox_keypressevent_callback = nullptr;
    KHistoryComboBox_WheelEvent_Callback khistorycombobox_wheelevent_callback = nullptr;
    KHistoryComboBox_SetAutoCompletion_Callback khistorycombobox_setautocompletion_callback = nullptr;
    KHistoryComboBox_SetLineEdit_Callback khistorycombobox_setlineedit_callback = nullptr;
    KHistoryComboBox_MinimumSizeHint_Callback khistorycombobox_minimumsizehint_callback = nullptr;
    KHistoryComboBox_SetCompletedText_Callback khistorycombobox_setcompletedtext_callback = nullptr;
    KHistoryComboBox_SetCompletedItems_Callback khistorycombobox_setcompleteditems_callback = nullptr;
    KHistoryComboBox_MakeCompletion_Callback khistorycombobox_makecompletion_callback = nullptr;
    KHistoryComboBox_SetModel_Callback khistorycombobox_setmodel_callback = nullptr;
    KHistoryComboBox_SizeHint_Callback khistorycombobox_sizehint_callback = nullptr;
    KHistoryComboBox_ShowPopup_Callback khistorycombobox_showpopup_callback = nullptr;
    KHistoryComboBox_HidePopup_Callback khistorycombobox_hidepopup_callback = nullptr;
    KHistoryComboBox_Event_Callback khistorycombobox_event_callback = nullptr;
    KHistoryComboBox_InputMethodQuery_Callback khistorycombobox_inputmethodquery_callback = nullptr;
    KHistoryComboBox_FocusInEvent_Callback khistorycombobox_focusinevent_callback = nullptr;
    KHistoryComboBox_FocusOutEvent_Callback khistorycombobox_focusoutevent_callback = nullptr;
    KHistoryComboBox_ChangeEvent_Callback khistorycombobox_changeevent_callback = nullptr;
    KHistoryComboBox_ResizeEvent_Callback khistorycombobox_resizeevent_callback = nullptr;
    KHistoryComboBox_PaintEvent_Callback khistorycombobox_paintevent_callback = nullptr;
    KHistoryComboBox_ShowEvent_Callback khistorycombobox_showevent_callback = nullptr;
    KHistoryComboBox_HideEvent_Callback khistorycombobox_hideevent_callback = nullptr;
    KHistoryComboBox_MousePressEvent_Callback khistorycombobox_mousepressevent_callback = nullptr;
    KHistoryComboBox_MouseReleaseEvent_Callback khistorycombobox_mousereleaseevent_callback = nullptr;
    KHistoryComboBox_KeyReleaseEvent_Callback khistorycombobox_keyreleaseevent_callback = nullptr;
    KHistoryComboBox_ContextMenuEvent_Callback khistorycombobox_contextmenuevent_callback = nullptr;
    KHistoryComboBox_InputMethodEvent_Callback khistorycombobox_inputmethodevent_callback = nullptr;
    KHistoryComboBox_InitStyleOption_Callback khistorycombobox_initstyleoption_callback = nullptr;
    KHistoryComboBox_DevType_Callback khistorycombobox_devtype_callback = nullptr;
    KHistoryComboBox_SetVisible_Callback khistorycombobox_setvisible_callback = nullptr;
    KHistoryComboBox_HeightForWidth_Callback khistorycombobox_heightforwidth_callback = nullptr;
    KHistoryComboBox_HasHeightForWidth_Callback khistorycombobox_hasheightforwidth_callback = nullptr;
    KHistoryComboBox_PaintEngine_Callback khistorycombobox_paintengine_callback = nullptr;
    KHistoryComboBox_MouseDoubleClickEvent_Callback khistorycombobox_mousedoubleclickevent_callback = nullptr;
    KHistoryComboBox_MouseMoveEvent_Callback khistorycombobox_mousemoveevent_callback = nullptr;
    KHistoryComboBox_EnterEvent_Callback khistorycombobox_enterevent_callback = nullptr;
    KHistoryComboBox_LeaveEvent_Callback khistorycombobox_leaveevent_callback = nullptr;
    KHistoryComboBox_MoveEvent_Callback khistorycombobox_moveevent_callback = nullptr;
    KHistoryComboBox_CloseEvent_Callback khistorycombobox_closeevent_callback = nullptr;
    KHistoryComboBox_TabletEvent_Callback khistorycombobox_tabletevent_callback = nullptr;
    KHistoryComboBox_ActionEvent_Callback khistorycombobox_actionevent_callback = nullptr;
    KHistoryComboBox_DragEnterEvent_Callback khistorycombobox_dragenterevent_callback = nullptr;
    KHistoryComboBox_DragMoveEvent_Callback khistorycombobox_dragmoveevent_callback = nullptr;
    KHistoryComboBox_DragLeaveEvent_Callback khistorycombobox_dragleaveevent_callback = nullptr;
    KHistoryComboBox_DropEvent_Callback khistorycombobox_dropevent_callback = nullptr;
    KHistoryComboBox_NativeEvent_Callback khistorycombobox_nativeevent_callback = nullptr;
    KHistoryComboBox_Metric_Callback khistorycombobox_metric_callback = nullptr;
    KHistoryComboBox_InitPainter_Callback khistorycombobox_initpainter_callback = nullptr;
    KHistoryComboBox_Redirected_Callback khistorycombobox_redirected_callback = nullptr;
    KHistoryComboBox_SharedPainter_Callback khistorycombobox_sharedpainter_callback = nullptr;
    KHistoryComboBox_FocusNextPrevChild_Callback khistorycombobox_focusnextprevchild_callback = nullptr;
    KHistoryComboBox_EventFilter_Callback khistorycombobox_eventfilter_callback = nullptr;
    KHistoryComboBox_TimerEvent_Callback khistorycombobox_timerevent_callback = nullptr;
    KHistoryComboBox_ChildEvent_Callback khistorycombobox_childevent_callback = nullptr;
    KHistoryComboBox_CustomEvent_Callback khistorycombobox_customevent_callback = nullptr;
    KHistoryComboBox_ConnectNotify_Callback khistorycombobox_connectnotify_callback = nullptr;
    KHistoryComboBox_DisconnectNotify_Callback khistorycombobox_disconnectnotify_callback = nullptr;
    KHistoryComboBox_SetCompletionObject_Callback khistorycombobox_setcompletionobject_callback = nullptr;
    KHistoryComboBox_SetHandleSignals_Callback khistorycombobox_sethandlesignals_callback = nullptr;
    KHistoryComboBox_SetCompletionMode_Callback khistorycombobox_setcompletionmode_callback = nullptr;
    KHistoryComboBox_VirtualHook_Callback khistorycombobox_virtualhook_callback = nullptr;
    KHistoryComboBox_InsertItems_Callback khistorycombobox_insertitems_callback = nullptr;
    KHistoryComboBox_UseCompletion_Callback khistorycombobox_usecompletion_callback = nullptr;
    KHistoryComboBox_UpdateMicroFocus_Callback khistorycombobox_updatemicrofocus_callback = nullptr;
    KHistoryComboBox_Create_Callback khistorycombobox_create_callback = nullptr;
    KHistoryComboBox_Destroy_Callback khistorycombobox_destroy_callback = nullptr;
    KHistoryComboBox_FocusNextChild_Callback khistorycombobox_focusnextchild_callback = nullptr;
    KHistoryComboBox_FocusPreviousChild_Callback khistorycombobox_focuspreviouschild_callback = nullptr;
    KHistoryComboBox_Sender_Callback khistorycombobox_sender_callback = nullptr;
    KHistoryComboBox_SenderSignalIndex_Callback khistorycombobox_sendersignalindex_callback = nullptr;
    KHistoryComboBox_Receivers_Callback khistorycombobox_receivers_callback = nullptr;
    KHistoryComboBox_IsSignalConnected_Callback khistorycombobox_issignalconnected_callback = nullptr;
    KHistoryComboBox_GetDecodedMetricF_Callback khistorycombobox_getdecodedmetricf_callback = nullptr;
    KHistoryComboBox_KeyBindingMap_Callback khistorycombobox_keybindingmap_callback = nullptr;
    KHistoryComboBox_SetKeyBindingMap_Callback khistorycombobox_setkeybindingmap_callback = nullptr;
    KHistoryComboBox_SetDelegate_Callback khistorycombobox_setdelegate_callback = nullptr;
    KHistoryComboBox_Delegate_Callback khistorycombobox_delegate_callback = nullptr;

    // Instance base flags
    mutable bool khistorycombobox_metacall_isbase = false;
    mutable bool khistorycombobox_keypressevent_isbase = false;
    mutable bool khistorycombobox_wheelevent_isbase = false;
    mutable bool khistorycombobox_setautocompletion_isbase = false;
    mutable bool khistorycombobox_setlineedit_isbase = false;
    mutable bool khistorycombobox_minimumsizehint_isbase = false;
    mutable bool khistorycombobox_setcompletedtext_isbase = false;
    mutable bool khistorycombobox_setcompleteditems_isbase = false;
    mutable bool khistorycombobox_makecompletion_isbase = false;
    mutable bool khistorycombobox_setmodel_isbase = false;
    mutable bool khistorycombobox_sizehint_isbase = false;
    mutable bool khistorycombobox_showpopup_isbase = false;
    mutable bool khistorycombobox_hidepopup_isbase = false;
    mutable bool khistorycombobox_event_isbase = false;
    mutable bool khistorycombobox_inputmethodquery_isbase = false;
    mutable bool khistorycombobox_focusinevent_isbase = false;
    mutable bool khistorycombobox_focusoutevent_isbase = false;
    mutable bool khistorycombobox_changeevent_isbase = false;
    mutable bool khistorycombobox_resizeevent_isbase = false;
    mutable bool khistorycombobox_paintevent_isbase = false;
    mutable bool khistorycombobox_showevent_isbase = false;
    mutable bool khistorycombobox_hideevent_isbase = false;
    mutable bool khistorycombobox_mousepressevent_isbase = false;
    mutable bool khistorycombobox_mousereleaseevent_isbase = false;
    mutable bool khistorycombobox_keyreleaseevent_isbase = false;
    mutable bool khistorycombobox_contextmenuevent_isbase = false;
    mutable bool khistorycombobox_inputmethodevent_isbase = false;
    mutable bool khistorycombobox_initstyleoption_isbase = false;
    mutable bool khistorycombobox_devtype_isbase = false;
    mutable bool khistorycombobox_setvisible_isbase = false;
    mutable bool khistorycombobox_heightforwidth_isbase = false;
    mutable bool khistorycombobox_hasheightforwidth_isbase = false;
    mutable bool khistorycombobox_paintengine_isbase = false;
    mutable bool khistorycombobox_mousedoubleclickevent_isbase = false;
    mutable bool khistorycombobox_mousemoveevent_isbase = false;
    mutable bool khistorycombobox_enterevent_isbase = false;
    mutable bool khistorycombobox_leaveevent_isbase = false;
    mutable bool khistorycombobox_moveevent_isbase = false;
    mutable bool khistorycombobox_closeevent_isbase = false;
    mutable bool khistorycombobox_tabletevent_isbase = false;
    mutable bool khistorycombobox_actionevent_isbase = false;
    mutable bool khistorycombobox_dragenterevent_isbase = false;
    mutable bool khistorycombobox_dragmoveevent_isbase = false;
    mutable bool khistorycombobox_dragleaveevent_isbase = false;
    mutable bool khistorycombobox_dropevent_isbase = false;
    mutable bool khistorycombobox_nativeevent_isbase = false;
    mutable bool khistorycombobox_metric_isbase = false;
    mutable bool khistorycombobox_initpainter_isbase = false;
    mutable bool khistorycombobox_redirected_isbase = false;
    mutable bool khistorycombobox_sharedpainter_isbase = false;
    mutable bool khistorycombobox_focusnextprevchild_isbase = false;
    mutable bool khistorycombobox_eventfilter_isbase = false;
    mutable bool khistorycombobox_timerevent_isbase = false;
    mutable bool khistorycombobox_childevent_isbase = false;
    mutable bool khistorycombobox_customevent_isbase = false;
    mutable bool khistorycombobox_connectnotify_isbase = false;
    mutable bool khistorycombobox_disconnectnotify_isbase = false;
    mutable bool khistorycombobox_setcompletionobject_isbase = false;
    mutable bool khistorycombobox_sethandlesignals_isbase = false;
    mutable bool khistorycombobox_setcompletionmode_isbase = false;
    mutable bool khistorycombobox_virtualhook_isbase = false;
    mutable bool khistorycombobox_insertitems_isbase = false;
    mutable bool khistorycombobox_usecompletion_isbase = false;
    mutable bool khistorycombobox_updatemicrofocus_isbase = false;
    mutable bool khistorycombobox_create_isbase = false;
    mutable bool khistorycombobox_destroy_isbase = false;
    mutable bool khistorycombobox_focusnextchild_isbase = false;
    mutable bool khistorycombobox_focuspreviouschild_isbase = false;
    mutable bool khistorycombobox_sender_isbase = false;
    mutable bool khistorycombobox_sendersignalindex_isbase = false;
    mutable bool khistorycombobox_receivers_isbase = false;
    mutable bool khistorycombobox_issignalconnected_isbase = false;
    mutable bool khistorycombobox_getdecodedmetricf_isbase = false;
    mutable bool khistorycombobox_keybindingmap_isbase = false;
    mutable bool khistorycombobox_setkeybindingmap_isbase = false;
    mutable bool khistorycombobox_setdelegate_isbase = false;
    mutable bool khistorycombobox_delegate_isbase = false;

  public:
    VirtualKHistoryComboBox(QWidget* parent) : KHistoryComboBox(parent) {};
    VirtualKHistoryComboBox() : KHistoryComboBox() {};
    VirtualKHistoryComboBox(bool useCompletion) : KHistoryComboBox(useCompletion) {};
    VirtualKHistoryComboBox(bool useCompletion, QWidget* parent) : KHistoryComboBox(useCompletion, parent) {};

    ~VirtualKHistoryComboBox() {
        khistorycombobox_metacall_callback = nullptr;
        khistorycombobox_keypressevent_callback = nullptr;
        khistorycombobox_wheelevent_callback = nullptr;
        khistorycombobox_setautocompletion_callback = nullptr;
        khistorycombobox_setlineedit_callback = nullptr;
        khistorycombobox_minimumsizehint_callback = nullptr;
        khistorycombobox_setcompletedtext_callback = nullptr;
        khistorycombobox_setcompleteditems_callback = nullptr;
        khistorycombobox_makecompletion_callback = nullptr;
        khistorycombobox_setmodel_callback = nullptr;
        khistorycombobox_sizehint_callback = nullptr;
        khistorycombobox_showpopup_callback = nullptr;
        khistorycombobox_hidepopup_callback = nullptr;
        khistorycombobox_event_callback = nullptr;
        khistorycombobox_inputmethodquery_callback = nullptr;
        khistorycombobox_focusinevent_callback = nullptr;
        khistorycombobox_focusoutevent_callback = nullptr;
        khistorycombobox_changeevent_callback = nullptr;
        khistorycombobox_resizeevent_callback = nullptr;
        khistorycombobox_paintevent_callback = nullptr;
        khistorycombobox_showevent_callback = nullptr;
        khistorycombobox_hideevent_callback = nullptr;
        khistorycombobox_mousepressevent_callback = nullptr;
        khistorycombobox_mousereleaseevent_callback = nullptr;
        khistorycombobox_keyreleaseevent_callback = nullptr;
        khistorycombobox_contextmenuevent_callback = nullptr;
        khistorycombobox_inputmethodevent_callback = nullptr;
        khistorycombobox_initstyleoption_callback = nullptr;
        khistorycombobox_devtype_callback = nullptr;
        khistorycombobox_setvisible_callback = nullptr;
        khistorycombobox_heightforwidth_callback = nullptr;
        khistorycombobox_hasheightforwidth_callback = nullptr;
        khistorycombobox_paintengine_callback = nullptr;
        khistorycombobox_mousedoubleclickevent_callback = nullptr;
        khistorycombobox_mousemoveevent_callback = nullptr;
        khistorycombobox_enterevent_callback = nullptr;
        khistorycombobox_leaveevent_callback = nullptr;
        khistorycombobox_moveevent_callback = nullptr;
        khistorycombobox_closeevent_callback = nullptr;
        khistorycombobox_tabletevent_callback = nullptr;
        khistorycombobox_actionevent_callback = nullptr;
        khistorycombobox_dragenterevent_callback = nullptr;
        khistorycombobox_dragmoveevent_callback = nullptr;
        khistorycombobox_dragleaveevent_callback = nullptr;
        khistorycombobox_dropevent_callback = nullptr;
        khistorycombobox_nativeevent_callback = nullptr;
        khistorycombobox_metric_callback = nullptr;
        khistorycombobox_initpainter_callback = nullptr;
        khistorycombobox_redirected_callback = nullptr;
        khistorycombobox_sharedpainter_callback = nullptr;
        khistorycombobox_focusnextprevchild_callback = nullptr;
        khistorycombobox_eventfilter_callback = nullptr;
        khistorycombobox_timerevent_callback = nullptr;
        khistorycombobox_childevent_callback = nullptr;
        khistorycombobox_customevent_callback = nullptr;
        khistorycombobox_connectnotify_callback = nullptr;
        khistorycombobox_disconnectnotify_callback = nullptr;
        khistorycombobox_setcompletionobject_callback = nullptr;
        khistorycombobox_sethandlesignals_callback = nullptr;
        khistorycombobox_setcompletionmode_callback = nullptr;
        khistorycombobox_virtualhook_callback = nullptr;
        khistorycombobox_insertitems_callback = nullptr;
        khistorycombobox_usecompletion_callback = nullptr;
        khistorycombobox_updatemicrofocus_callback = nullptr;
        khistorycombobox_create_callback = nullptr;
        khistorycombobox_destroy_callback = nullptr;
        khistorycombobox_focusnextchild_callback = nullptr;
        khistorycombobox_focuspreviouschild_callback = nullptr;
        khistorycombobox_sender_callback = nullptr;
        khistorycombobox_sendersignalindex_callback = nullptr;
        khistorycombobox_receivers_callback = nullptr;
        khistorycombobox_issignalconnected_callback = nullptr;
        khistorycombobox_getdecodedmetricf_callback = nullptr;
        khistorycombobox_keybindingmap_callback = nullptr;
        khistorycombobox_setkeybindingmap_callback = nullptr;
        khistorycombobox_setdelegate_callback = nullptr;
        khistorycombobox_delegate_callback = nullptr;
    }

    // Callback setters
    inline void setKHistoryComboBox_Metacall_Callback(KHistoryComboBox_Metacall_Callback cb) { khistorycombobox_metacall_callback = cb; }
    inline void setKHistoryComboBox_KeyPressEvent_Callback(KHistoryComboBox_KeyPressEvent_Callback cb) { khistorycombobox_keypressevent_callback = cb; }
    inline void setKHistoryComboBox_WheelEvent_Callback(KHistoryComboBox_WheelEvent_Callback cb) { khistorycombobox_wheelevent_callback = cb; }
    inline void setKHistoryComboBox_SetAutoCompletion_Callback(KHistoryComboBox_SetAutoCompletion_Callback cb) { khistorycombobox_setautocompletion_callback = cb; }
    inline void setKHistoryComboBox_SetLineEdit_Callback(KHistoryComboBox_SetLineEdit_Callback cb) { khistorycombobox_setlineedit_callback = cb; }
    inline void setKHistoryComboBox_MinimumSizeHint_Callback(KHistoryComboBox_MinimumSizeHint_Callback cb) { khistorycombobox_minimumsizehint_callback = cb; }
    inline void setKHistoryComboBox_SetCompletedText_Callback(KHistoryComboBox_SetCompletedText_Callback cb) { khistorycombobox_setcompletedtext_callback = cb; }
    inline void setKHistoryComboBox_SetCompletedItems_Callback(KHistoryComboBox_SetCompletedItems_Callback cb) { khistorycombobox_setcompleteditems_callback = cb; }
    inline void setKHistoryComboBox_MakeCompletion_Callback(KHistoryComboBox_MakeCompletion_Callback cb) { khistorycombobox_makecompletion_callback = cb; }
    inline void setKHistoryComboBox_SetModel_Callback(KHistoryComboBox_SetModel_Callback cb) { khistorycombobox_setmodel_callback = cb; }
    inline void setKHistoryComboBox_SizeHint_Callback(KHistoryComboBox_SizeHint_Callback cb) { khistorycombobox_sizehint_callback = cb; }
    inline void setKHistoryComboBox_ShowPopup_Callback(KHistoryComboBox_ShowPopup_Callback cb) { khistorycombobox_showpopup_callback = cb; }
    inline void setKHistoryComboBox_HidePopup_Callback(KHistoryComboBox_HidePopup_Callback cb) { khistorycombobox_hidepopup_callback = cb; }
    inline void setKHistoryComboBox_Event_Callback(KHistoryComboBox_Event_Callback cb) { khistorycombobox_event_callback = cb; }
    inline void setKHistoryComboBox_InputMethodQuery_Callback(KHistoryComboBox_InputMethodQuery_Callback cb) { khistorycombobox_inputmethodquery_callback = cb; }
    inline void setKHistoryComboBox_FocusInEvent_Callback(KHistoryComboBox_FocusInEvent_Callback cb) { khistorycombobox_focusinevent_callback = cb; }
    inline void setKHistoryComboBox_FocusOutEvent_Callback(KHistoryComboBox_FocusOutEvent_Callback cb) { khistorycombobox_focusoutevent_callback = cb; }
    inline void setKHistoryComboBox_ChangeEvent_Callback(KHistoryComboBox_ChangeEvent_Callback cb) { khistorycombobox_changeevent_callback = cb; }
    inline void setKHistoryComboBox_ResizeEvent_Callback(KHistoryComboBox_ResizeEvent_Callback cb) { khistorycombobox_resizeevent_callback = cb; }
    inline void setKHistoryComboBox_PaintEvent_Callback(KHistoryComboBox_PaintEvent_Callback cb) { khistorycombobox_paintevent_callback = cb; }
    inline void setKHistoryComboBox_ShowEvent_Callback(KHistoryComboBox_ShowEvent_Callback cb) { khistorycombobox_showevent_callback = cb; }
    inline void setKHistoryComboBox_HideEvent_Callback(KHistoryComboBox_HideEvent_Callback cb) { khistorycombobox_hideevent_callback = cb; }
    inline void setKHistoryComboBox_MousePressEvent_Callback(KHistoryComboBox_MousePressEvent_Callback cb) { khistorycombobox_mousepressevent_callback = cb; }
    inline void setKHistoryComboBox_MouseReleaseEvent_Callback(KHistoryComboBox_MouseReleaseEvent_Callback cb) { khistorycombobox_mousereleaseevent_callback = cb; }
    inline void setKHistoryComboBox_KeyReleaseEvent_Callback(KHistoryComboBox_KeyReleaseEvent_Callback cb) { khistorycombobox_keyreleaseevent_callback = cb; }
    inline void setKHistoryComboBox_ContextMenuEvent_Callback(KHistoryComboBox_ContextMenuEvent_Callback cb) { khistorycombobox_contextmenuevent_callback = cb; }
    inline void setKHistoryComboBox_InputMethodEvent_Callback(KHistoryComboBox_InputMethodEvent_Callback cb) { khistorycombobox_inputmethodevent_callback = cb; }
    inline void setKHistoryComboBox_InitStyleOption_Callback(KHistoryComboBox_InitStyleOption_Callback cb) { khistorycombobox_initstyleoption_callback = cb; }
    inline void setKHistoryComboBox_DevType_Callback(KHistoryComboBox_DevType_Callback cb) { khistorycombobox_devtype_callback = cb; }
    inline void setKHistoryComboBox_SetVisible_Callback(KHistoryComboBox_SetVisible_Callback cb) { khistorycombobox_setvisible_callback = cb; }
    inline void setKHistoryComboBox_HeightForWidth_Callback(KHistoryComboBox_HeightForWidth_Callback cb) { khistorycombobox_heightforwidth_callback = cb; }
    inline void setKHistoryComboBox_HasHeightForWidth_Callback(KHistoryComboBox_HasHeightForWidth_Callback cb) { khistorycombobox_hasheightforwidth_callback = cb; }
    inline void setKHistoryComboBox_PaintEngine_Callback(KHistoryComboBox_PaintEngine_Callback cb) { khistorycombobox_paintengine_callback = cb; }
    inline void setKHistoryComboBox_MouseDoubleClickEvent_Callback(KHistoryComboBox_MouseDoubleClickEvent_Callback cb) { khistorycombobox_mousedoubleclickevent_callback = cb; }
    inline void setKHistoryComboBox_MouseMoveEvent_Callback(KHistoryComboBox_MouseMoveEvent_Callback cb) { khistorycombobox_mousemoveevent_callback = cb; }
    inline void setKHistoryComboBox_EnterEvent_Callback(KHistoryComboBox_EnterEvent_Callback cb) { khistorycombobox_enterevent_callback = cb; }
    inline void setKHistoryComboBox_LeaveEvent_Callback(KHistoryComboBox_LeaveEvent_Callback cb) { khistorycombobox_leaveevent_callback = cb; }
    inline void setKHistoryComboBox_MoveEvent_Callback(KHistoryComboBox_MoveEvent_Callback cb) { khistorycombobox_moveevent_callback = cb; }
    inline void setKHistoryComboBox_CloseEvent_Callback(KHistoryComboBox_CloseEvent_Callback cb) { khistorycombobox_closeevent_callback = cb; }
    inline void setKHistoryComboBox_TabletEvent_Callback(KHistoryComboBox_TabletEvent_Callback cb) { khistorycombobox_tabletevent_callback = cb; }
    inline void setKHistoryComboBox_ActionEvent_Callback(KHistoryComboBox_ActionEvent_Callback cb) { khistorycombobox_actionevent_callback = cb; }
    inline void setKHistoryComboBox_DragEnterEvent_Callback(KHistoryComboBox_DragEnterEvent_Callback cb) { khistorycombobox_dragenterevent_callback = cb; }
    inline void setKHistoryComboBox_DragMoveEvent_Callback(KHistoryComboBox_DragMoveEvent_Callback cb) { khistorycombobox_dragmoveevent_callback = cb; }
    inline void setKHistoryComboBox_DragLeaveEvent_Callback(KHistoryComboBox_DragLeaveEvent_Callback cb) { khistorycombobox_dragleaveevent_callback = cb; }
    inline void setKHistoryComboBox_DropEvent_Callback(KHistoryComboBox_DropEvent_Callback cb) { khistorycombobox_dropevent_callback = cb; }
    inline void setKHistoryComboBox_NativeEvent_Callback(KHistoryComboBox_NativeEvent_Callback cb) { khistorycombobox_nativeevent_callback = cb; }
    inline void setKHistoryComboBox_Metric_Callback(KHistoryComboBox_Metric_Callback cb) { khistorycombobox_metric_callback = cb; }
    inline void setKHistoryComboBox_InitPainter_Callback(KHistoryComboBox_InitPainter_Callback cb) { khistorycombobox_initpainter_callback = cb; }
    inline void setKHistoryComboBox_Redirected_Callback(KHistoryComboBox_Redirected_Callback cb) { khistorycombobox_redirected_callback = cb; }
    inline void setKHistoryComboBox_SharedPainter_Callback(KHistoryComboBox_SharedPainter_Callback cb) { khistorycombobox_sharedpainter_callback = cb; }
    inline void setKHistoryComboBox_FocusNextPrevChild_Callback(KHistoryComboBox_FocusNextPrevChild_Callback cb) { khistorycombobox_focusnextprevchild_callback = cb; }
    inline void setKHistoryComboBox_EventFilter_Callback(KHistoryComboBox_EventFilter_Callback cb) { khistorycombobox_eventfilter_callback = cb; }
    inline void setKHistoryComboBox_TimerEvent_Callback(KHistoryComboBox_TimerEvent_Callback cb) { khistorycombobox_timerevent_callback = cb; }
    inline void setKHistoryComboBox_ChildEvent_Callback(KHistoryComboBox_ChildEvent_Callback cb) { khistorycombobox_childevent_callback = cb; }
    inline void setKHistoryComboBox_CustomEvent_Callback(KHistoryComboBox_CustomEvent_Callback cb) { khistorycombobox_customevent_callback = cb; }
    inline void setKHistoryComboBox_ConnectNotify_Callback(KHistoryComboBox_ConnectNotify_Callback cb) { khistorycombobox_connectnotify_callback = cb; }
    inline void setKHistoryComboBox_DisconnectNotify_Callback(KHistoryComboBox_DisconnectNotify_Callback cb) { khistorycombobox_disconnectnotify_callback = cb; }
    inline void setKHistoryComboBox_SetCompletionObject_Callback(KHistoryComboBox_SetCompletionObject_Callback cb) { khistorycombobox_setcompletionobject_callback = cb; }
    inline void setKHistoryComboBox_SetHandleSignals_Callback(KHistoryComboBox_SetHandleSignals_Callback cb) { khistorycombobox_sethandlesignals_callback = cb; }
    inline void setKHistoryComboBox_SetCompletionMode_Callback(KHistoryComboBox_SetCompletionMode_Callback cb) { khistorycombobox_setcompletionmode_callback = cb; }
    inline void setKHistoryComboBox_VirtualHook_Callback(KHistoryComboBox_VirtualHook_Callback cb) { khistorycombobox_virtualhook_callback = cb; }
    inline void setKHistoryComboBox_InsertItems_Callback(KHistoryComboBox_InsertItems_Callback cb) { khistorycombobox_insertitems_callback = cb; }
    inline void setKHistoryComboBox_UseCompletion_Callback(KHistoryComboBox_UseCompletion_Callback cb) { khistorycombobox_usecompletion_callback = cb; }
    inline void setKHistoryComboBox_UpdateMicroFocus_Callback(KHistoryComboBox_UpdateMicroFocus_Callback cb) { khistorycombobox_updatemicrofocus_callback = cb; }
    inline void setKHistoryComboBox_Create_Callback(KHistoryComboBox_Create_Callback cb) { khistorycombobox_create_callback = cb; }
    inline void setKHistoryComboBox_Destroy_Callback(KHistoryComboBox_Destroy_Callback cb) { khistorycombobox_destroy_callback = cb; }
    inline void setKHistoryComboBox_FocusNextChild_Callback(KHistoryComboBox_FocusNextChild_Callback cb) { khistorycombobox_focusnextchild_callback = cb; }
    inline void setKHistoryComboBox_FocusPreviousChild_Callback(KHistoryComboBox_FocusPreviousChild_Callback cb) { khistorycombobox_focuspreviouschild_callback = cb; }
    inline void setKHistoryComboBox_Sender_Callback(KHistoryComboBox_Sender_Callback cb) { khistorycombobox_sender_callback = cb; }
    inline void setKHistoryComboBox_SenderSignalIndex_Callback(KHistoryComboBox_SenderSignalIndex_Callback cb) { khistorycombobox_sendersignalindex_callback = cb; }
    inline void setKHistoryComboBox_Receivers_Callback(KHistoryComboBox_Receivers_Callback cb) { khistorycombobox_receivers_callback = cb; }
    inline void setKHistoryComboBox_IsSignalConnected_Callback(KHistoryComboBox_IsSignalConnected_Callback cb) { khistorycombobox_issignalconnected_callback = cb; }
    inline void setKHistoryComboBox_GetDecodedMetricF_Callback(KHistoryComboBox_GetDecodedMetricF_Callback cb) { khistorycombobox_getdecodedmetricf_callback = cb; }
    inline void setKHistoryComboBox_KeyBindingMap_Callback(KHistoryComboBox_KeyBindingMap_Callback cb) { khistorycombobox_keybindingmap_callback = cb; }
    inline void setKHistoryComboBox_SetKeyBindingMap_Callback(KHistoryComboBox_SetKeyBindingMap_Callback cb) { khistorycombobox_setkeybindingmap_callback = cb; }
    inline void setKHistoryComboBox_SetDelegate_Callback(KHistoryComboBox_SetDelegate_Callback cb) { khistorycombobox_setdelegate_callback = cb; }
    inline void setKHistoryComboBox_Delegate_Callback(KHistoryComboBox_Delegate_Callback cb) { khistorycombobox_delegate_callback = cb; }

    // Base flag setters
    inline void setKHistoryComboBox_Metacall_IsBase(bool value) const { khistorycombobox_metacall_isbase = value; }
    inline void setKHistoryComboBox_KeyPressEvent_IsBase(bool value) const { khistorycombobox_keypressevent_isbase = value; }
    inline void setKHistoryComboBox_WheelEvent_IsBase(bool value) const { khistorycombobox_wheelevent_isbase = value; }
    inline void setKHistoryComboBox_SetAutoCompletion_IsBase(bool value) const { khistorycombobox_setautocompletion_isbase = value; }
    inline void setKHistoryComboBox_SetLineEdit_IsBase(bool value) const { khistorycombobox_setlineedit_isbase = value; }
    inline void setKHistoryComboBox_MinimumSizeHint_IsBase(bool value) const { khistorycombobox_minimumsizehint_isbase = value; }
    inline void setKHistoryComboBox_SetCompletedText_IsBase(bool value) const { khistorycombobox_setcompletedtext_isbase = value; }
    inline void setKHistoryComboBox_SetCompletedItems_IsBase(bool value) const { khistorycombobox_setcompleteditems_isbase = value; }
    inline void setKHistoryComboBox_MakeCompletion_IsBase(bool value) const { khistorycombobox_makecompletion_isbase = value; }
    inline void setKHistoryComboBox_SetModel_IsBase(bool value) const { khistorycombobox_setmodel_isbase = value; }
    inline void setKHistoryComboBox_SizeHint_IsBase(bool value) const { khistorycombobox_sizehint_isbase = value; }
    inline void setKHistoryComboBox_ShowPopup_IsBase(bool value) const { khistorycombobox_showpopup_isbase = value; }
    inline void setKHistoryComboBox_HidePopup_IsBase(bool value) const { khistorycombobox_hidepopup_isbase = value; }
    inline void setKHistoryComboBox_Event_IsBase(bool value) const { khistorycombobox_event_isbase = value; }
    inline void setKHistoryComboBox_InputMethodQuery_IsBase(bool value) const { khistorycombobox_inputmethodquery_isbase = value; }
    inline void setKHistoryComboBox_FocusInEvent_IsBase(bool value) const { khistorycombobox_focusinevent_isbase = value; }
    inline void setKHistoryComboBox_FocusOutEvent_IsBase(bool value) const { khistorycombobox_focusoutevent_isbase = value; }
    inline void setKHistoryComboBox_ChangeEvent_IsBase(bool value) const { khistorycombobox_changeevent_isbase = value; }
    inline void setKHistoryComboBox_ResizeEvent_IsBase(bool value) const { khistorycombobox_resizeevent_isbase = value; }
    inline void setKHistoryComboBox_PaintEvent_IsBase(bool value) const { khistorycombobox_paintevent_isbase = value; }
    inline void setKHistoryComboBox_ShowEvent_IsBase(bool value) const { khistorycombobox_showevent_isbase = value; }
    inline void setKHistoryComboBox_HideEvent_IsBase(bool value) const { khistorycombobox_hideevent_isbase = value; }
    inline void setKHistoryComboBox_MousePressEvent_IsBase(bool value) const { khistorycombobox_mousepressevent_isbase = value; }
    inline void setKHistoryComboBox_MouseReleaseEvent_IsBase(bool value) const { khistorycombobox_mousereleaseevent_isbase = value; }
    inline void setKHistoryComboBox_KeyReleaseEvent_IsBase(bool value) const { khistorycombobox_keyreleaseevent_isbase = value; }
    inline void setKHistoryComboBox_ContextMenuEvent_IsBase(bool value) const { khistorycombobox_contextmenuevent_isbase = value; }
    inline void setKHistoryComboBox_InputMethodEvent_IsBase(bool value) const { khistorycombobox_inputmethodevent_isbase = value; }
    inline void setKHistoryComboBox_InitStyleOption_IsBase(bool value) const { khistorycombobox_initstyleoption_isbase = value; }
    inline void setKHistoryComboBox_DevType_IsBase(bool value) const { khistorycombobox_devtype_isbase = value; }
    inline void setKHistoryComboBox_SetVisible_IsBase(bool value) const { khistorycombobox_setvisible_isbase = value; }
    inline void setKHistoryComboBox_HeightForWidth_IsBase(bool value) const { khistorycombobox_heightforwidth_isbase = value; }
    inline void setKHistoryComboBox_HasHeightForWidth_IsBase(bool value) const { khistorycombobox_hasheightforwidth_isbase = value; }
    inline void setKHistoryComboBox_PaintEngine_IsBase(bool value) const { khistorycombobox_paintengine_isbase = value; }
    inline void setKHistoryComboBox_MouseDoubleClickEvent_IsBase(bool value) const { khistorycombobox_mousedoubleclickevent_isbase = value; }
    inline void setKHistoryComboBox_MouseMoveEvent_IsBase(bool value) const { khistorycombobox_mousemoveevent_isbase = value; }
    inline void setKHistoryComboBox_EnterEvent_IsBase(bool value) const { khistorycombobox_enterevent_isbase = value; }
    inline void setKHistoryComboBox_LeaveEvent_IsBase(bool value) const { khistorycombobox_leaveevent_isbase = value; }
    inline void setKHistoryComboBox_MoveEvent_IsBase(bool value) const { khistorycombobox_moveevent_isbase = value; }
    inline void setKHistoryComboBox_CloseEvent_IsBase(bool value) const { khistorycombobox_closeevent_isbase = value; }
    inline void setKHistoryComboBox_TabletEvent_IsBase(bool value) const { khistorycombobox_tabletevent_isbase = value; }
    inline void setKHistoryComboBox_ActionEvent_IsBase(bool value) const { khistorycombobox_actionevent_isbase = value; }
    inline void setKHistoryComboBox_DragEnterEvent_IsBase(bool value) const { khistorycombobox_dragenterevent_isbase = value; }
    inline void setKHistoryComboBox_DragMoveEvent_IsBase(bool value) const { khistorycombobox_dragmoveevent_isbase = value; }
    inline void setKHistoryComboBox_DragLeaveEvent_IsBase(bool value) const { khistorycombobox_dragleaveevent_isbase = value; }
    inline void setKHistoryComboBox_DropEvent_IsBase(bool value) const { khistorycombobox_dropevent_isbase = value; }
    inline void setKHistoryComboBox_NativeEvent_IsBase(bool value) const { khistorycombobox_nativeevent_isbase = value; }
    inline void setKHistoryComboBox_Metric_IsBase(bool value) const { khistorycombobox_metric_isbase = value; }
    inline void setKHistoryComboBox_InitPainter_IsBase(bool value) const { khistorycombobox_initpainter_isbase = value; }
    inline void setKHistoryComboBox_Redirected_IsBase(bool value) const { khistorycombobox_redirected_isbase = value; }
    inline void setKHistoryComboBox_SharedPainter_IsBase(bool value) const { khistorycombobox_sharedpainter_isbase = value; }
    inline void setKHistoryComboBox_FocusNextPrevChild_IsBase(bool value) const { khistorycombobox_focusnextprevchild_isbase = value; }
    inline void setKHistoryComboBox_EventFilter_IsBase(bool value) const { khistorycombobox_eventfilter_isbase = value; }
    inline void setKHistoryComboBox_TimerEvent_IsBase(bool value) const { khistorycombobox_timerevent_isbase = value; }
    inline void setKHistoryComboBox_ChildEvent_IsBase(bool value) const { khistorycombobox_childevent_isbase = value; }
    inline void setKHistoryComboBox_CustomEvent_IsBase(bool value) const { khistorycombobox_customevent_isbase = value; }
    inline void setKHistoryComboBox_ConnectNotify_IsBase(bool value) const { khistorycombobox_connectnotify_isbase = value; }
    inline void setKHistoryComboBox_DisconnectNotify_IsBase(bool value) const { khistorycombobox_disconnectnotify_isbase = value; }
    inline void setKHistoryComboBox_SetCompletionObject_IsBase(bool value) const { khistorycombobox_setcompletionobject_isbase = value; }
    inline void setKHistoryComboBox_SetHandleSignals_IsBase(bool value) const { khistorycombobox_sethandlesignals_isbase = value; }
    inline void setKHistoryComboBox_SetCompletionMode_IsBase(bool value) const { khistorycombobox_setcompletionmode_isbase = value; }
    inline void setKHistoryComboBox_VirtualHook_IsBase(bool value) const { khistorycombobox_virtualhook_isbase = value; }
    inline void setKHistoryComboBox_InsertItems_IsBase(bool value) const { khistorycombobox_insertitems_isbase = value; }
    inline void setKHistoryComboBox_UseCompletion_IsBase(bool value) const { khistorycombobox_usecompletion_isbase = value; }
    inline void setKHistoryComboBox_UpdateMicroFocus_IsBase(bool value) const { khistorycombobox_updatemicrofocus_isbase = value; }
    inline void setKHistoryComboBox_Create_IsBase(bool value) const { khistorycombobox_create_isbase = value; }
    inline void setKHistoryComboBox_Destroy_IsBase(bool value) const { khistorycombobox_destroy_isbase = value; }
    inline void setKHistoryComboBox_FocusNextChild_IsBase(bool value) const { khistorycombobox_focusnextchild_isbase = value; }
    inline void setKHistoryComboBox_FocusPreviousChild_IsBase(bool value) const { khistorycombobox_focuspreviouschild_isbase = value; }
    inline void setKHistoryComboBox_Sender_IsBase(bool value) const { khistorycombobox_sender_isbase = value; }
    inline void setKHistoryComboBox_SenderSignalIndex_IsBase(bool value) const { khistorycombobox_sendersignalindex_isbase = value; }
    inline void setKHistoryComboBox_Receivers_IsBase(bool value) const { khistorycombobox_receivers_isbase = value; }
    inline void setKHistoryComboBox_IsSignalConnected_IsBase(bool value) const { khistorycombobox_issignalconnected_isbase = value; }
    inline void setKHistoryComboBox_GetDecodedMetricF_IsBase(bool value) const { khistorycombobox_getdecodedmetricf_isbase = value; }
    inline void setKHistoryComboBox_KeyBindingMap_IsBase(bool value) const { khistorycombobox_keybindingmap_isbase = value; }
    inline void setKHistoryComboBox_SetKeyBindingMap_IsBase(bool value) const { khistorycombobox_setkeybindingmap_isbase = value; }
    inline void setKHistoryComboBox_SetDelegate_IsBase(bool value) const { khistorycombobox_setdelegate_isbase = value; }
    inline void setKHistoryComboBox_Delegate_IsBase(bool value) const { khistorycombobox_delegate_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (khistorycombobox_metacall_isbase) {
            khistorycombobox_metacall_isbase = false;
            return KHistoryComboBox::qt_metacall(param1, param2, param3);
        } else if (khistorycombobox_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = khistorycombobox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KHistoryComboBox::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (khistorycombobox_keypressevent_isbase) {
            khistorycombobox_keypressevent_isbase = false;
            KHistoryComboBox::keyPressEvent(param1);
        } else if (khistorycombobox_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            khistorycombobox_keypressevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* ev) override {
        if (khistorycombobox_wheelevent_isbase) {
            khistorycombobox_wheelevent_isbase = false;
            KHistoryComboBox::wheelEvent(ev);
        } else if (khistorycombobox_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = ev;

            khistorycombobox_wheelevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::wheelEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoCompletion(bool autocomplete) override {
        if (khistorycombobox_setautocompletion_isbase) {
            khistorycombobox_setautocompletion_isbase = false;
            KHistoryComboBox::setAutoCompletion(autocomplete);
        } else if (khistorycombobox_setautocompletion_callback != nullptr) {
            bool cbval1 = autocomplete;

            khistorycombobox_setautocompletion_callback(this, cbval1);
        } else {
            KHistoryComboBox::setAutoCompletion(autocomplete);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLineEdit(QLineEdit* lineEdit) override {
        if (khistorycombobox_setlineedit_isbase) {
            khistorycombobox_setlineedit_isbase = false;
            KHistoryComboBox::setLineEdit(lineEdit);
        } else if (khistorycombobox_setlineedit_callback != nullptr) {
            QLineEdit* cbval1 = lineEdit;

            khistorycombobox_setlineedit_callback(this, cbval1);
        } else {
            KHistoryComboBox::setLineEdit(lineEdit);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (khistorycombobox_minimumsizehint_isbase) {
            khistorycombobox_minimumsizehint_isbase = false;
            return KHistoryComboBox::minimumSizeHint();
        } else if (khistorycombobox_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = khistorycombobox_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KHistoryComboBox::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedText(const QString& completedText) override {
        if (khistorycombobox_setcompletedtext_isbase) {
            khistorycombobox_setcompletedtext_isbase = false;
            KHistoryComboBox::setCompletedText(completedText);
        } else if (khistorycombobox_setcompletedtext_callback != nullptr) {
            const QString completedText_ret = completedText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray completedText_b = completedText_ret.toUtf8();
            libqt_string completedText_str;
            completedText_str.len = completedText_b.length();
            completedText_str.data = static_cast<const char*>(malloc(completedText_str.len + 1));
            memcpy((void*)completedText_str.data, completedText_b.data(), completedText_str.len);
            ((char*)completedText_str.data)[completedText_str.len] = '\0';
            libqt_string cbval1 = completedText_str;

            khistorycombobox_setcompletedtext_callback(this, cbval1);
        } else {
            KHistoryComboBox::setCompletedText(completedText);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedItems(const QList<QString>& items, bool autoSuggest) override {
        if (khistorycombobox_setcompleteditems_isbase) {
            khistorycombobox_setcompleteditems_isbase = false;
            KHistoryComboBox::setCompletedItems(items, autoSuggest);
        } else if (khistorycombobox_setcompleteditems_callback != nullptr) {
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

            khistorycombobox_setcompleteditems_callback(this, cbval1, cbval2);
        } else {
            KHistoryComboBox::setCompletedItems(items, autoSuggest);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void makeCompletion(const QString& param1) override {
        if (khistorycombobox_makecompletion_isbase) {
            khistorycombobox_makecompletion_isbase = false;
            KHistoryComboBox::makeCompletion(param1);
        } else if (khistorycombobox_makecompletion_callback != nullptr) {
            const QString param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            libqt_string param1_str;
            param1_str.len = param1_b.length();
            param1_str.data = static_cast<const char*>(malloc(param1_str.len + 1));
            memcpy((void*)param1_str.data, param1_b.data(), param1_str.len);
            ((char*)param1_str.data)[param1_str.len] = '\0';
            libqt_string cbval1 = param1_str;

            khistorycombobox_makecompletion_callback(this, cbval1);
        } else {
            KHistoryComboBox::makeCompletion(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (khistorycombobox_setmodel_isbase) {
            khistorycombobox_setmodel_isbase = false;
            KHistoryComboBox::setModel(model);
        } else if (khistorycombobox_setmodel_callback != nullptr) {
            QAbstractItemModel* cbval1 = model;

            khistorycombobox_setmodel_callback(this, cbval1);
        } else {
            KHistoryComboBox::setModel(model);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (khistorycombobox_sizehint_isbase) {
            khistorycombobox_sizehint_isbase = false;
            return KHistoryComboBox::sizeHint();
        } else if (khistorycombobox_sizehint_callback != nullptr) {
            QSize* callback_ret = khistorycombobox_sizehint_callback();
            return *callback_ret;
        } else {
            return KHistoryComboBox::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (khistorycombobox_showpopup_isbase) {
            khistorycombobox_showpopup_isbase = false;
            KHistoryComboBox::showPopup();
        } else if (khistorycombobox_showpopup_callback != nullptr) {
            khistorycombobox_showpopup_callback();
        } else {
            KHistoryComboBox::showPopup();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (khistorycombobox_hidepopup_isbase) {
            khistorycombobox_hidepopup_isbase = false;
            KHistoryComboBox::hidePopup();
        } else if (khistorycombobox_hidepopup_callback != nullptr) {
            khistorycombobox_hidepopup_callback();
        } else {
            KHistoryComboBox::hidePopup();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (khistorycombobox_event_isbase) {
            khistorycombobox_event_isbase = false;
            return KHistoryComboBox::event(event);
        } else if (khistorycombobox_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = khistorycombobox_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KHistoryComboBox::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (khistorycombobox_inputmethodquery_isbase) {
            khistorycombobox_inputmethodquery_isbase = false;
            return KHistoryComboBox::inputMethodQuery(param1);
        } else if (khistorycombobox_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = khistorycombobox_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KHistoryComboBox::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (khistorycombobox_focusinevent_isbase) {
            khistorycombobox_focusinevent_isbase = false;
            KHistoryComboBox::focusInEvent(e);
        } else if (khistorycombobox_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            khistorycombobox_focusinevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::focusInEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (khistorycombobox_focusoutevent_isbase) {
            khistorycombobox_focusoutevent_isbase = false;
            KHistoryComboBox::focusOutEvent(e);
        } else if (khistorycombobox_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = e;

            khistorycombobox_focusoutevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::focusOutEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (khistorycombobox_changeevent_isbase) {
            khistorycombobox_changeevent_isbase = false;
            KHistoryComboBox::changeEvent(e);
        } else if (khistorycombobox_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            khistorycombobox_changeevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (khistorycombobox_resizeevent_isbase) {
            khistorycombobox_resizeevent_isbase = false;
            KHistoryComboBox::resizeEvent(e);
        } else if (khistorycombobox_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = e;

            khistorycombobox_resizeevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::resizeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (khistorycombobox_paintevent_isbase) {
            khistorycombobox_paintevent_isbase = false;
            KHistoryComboBox::paintEvent(e);
        } else if (khistorycombobox_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = e;

            khistorycombobox_paintevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (khistorycombobox_showevent_isbase) {
            khistorycombobox_showevent_isbase = false;
            KHistoryComboBox::showEvent(e);
        } else if (khistorycombobox_showevent_callback != nullptr) {
            QShowEvent* cbval1 = e;

            khistorycombobox_showevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::showEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (khistorycombobox_hideevent_isbase) {
            khistorycombobox_hideevent_isbase = false;
            KHistoryComboBox::hideEvent(e);
        } else if (khistorycombobox_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = e;

            khistorycombobox_hideevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::hideEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (khistorycombobox_mousepressevent_isbase) {
            khistorycombobox_mousepressevent_isbase = false;
            KHistoryComboBox::mousePressEvent(e);
        } else if (khistorycombobox_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            khistorycombobox_mousepressevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (khistorycombobox_mousereleaseevent_isbase) {
            khistorycombobox_mousereleaseevent_isbase = false;
            KHistoryComboBox::mouseReleaseEvent(e);
        } else if (khistorycombobox_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = e;

            khistorycombobox_mousereleaseevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (khistorycombobox_keyreleaseevent_isbase) {
            khistorycombobox_keyreleaseevent_isbase = false;
            KHistoryComboBox::keyReleaseEvent(e);
        } else if (khistorycombobox_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = e;

            khistorycombobox_keyreleaseevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (khistorycombobox_contextmenuevent_isbase) {
            khistorycombobox_contextmenuevent_isbase = false;
            KHistoryComboBox::contextMenuEvent(e);
        } else if (khistorycombobox_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = e;

            khistorycombobox_contextmenuevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::contextMenuEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (khistorycombobox_inputmethodevent_isbase) {
            khistorycombobox_inputmethodevent_isbase = false;
            KHistoryComboBox::inputMethodEvent(param1);
        } else if (khistorycombobox_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            khistorycombobox_inputmethodevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (khistorycombobox_initstyleoption_isbase) {
            khistorycombobox_initstyleoption_isbase = false;
            KHistoryComboBox::initStyleOption(option);
        } else if (khistorycombobox_initstyleoption_callback != nullptr) {
            QStyleOptionComboBox* cbval1 = option;

            khistorycombobox_initstyleoption_callback(this, cbval1);
        } else {
            KHistoryComboBox::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (khistorycombobox_devtype_isbase) {
            khistorycombobox_devtype_isbase = false;
            return KHistoryComboBox::devType();
        } else if (khistorycombobox_devtype_callback != nullptr) {
            int callback_ret = khistorycombobox_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KHistoryComboBox::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (khistorycombobox_setvisible_isbase) {
            khistorycombobox_setvisible_isbase = false;
            KHistoryComboBox::setVisible(visible);
        } else if (khistorycombobox_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            khistorycombobox_setvisible_callback(this, cbval1);
        } else {
            KHistoryComboBox::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (khistorycombobox_heightforwidth_isbase) {
            khistorycombobox_heightforwidth_isbase = false;
            return KHistoryComboBox::heightForWidth(param1);
        } else if (khistorycombobox_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = khistorycombobox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KHistoryComboBox::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (khistorycombobox_hasheightforwidth_isbase) {
            khistorycombobox_hasheightforwidth_isbase = false;
            return KHistoryComboBox::hasHeightForWidth();
        } else if (khistorycombobox_hasheightforwidth_callback != nullptr) {
            bool callback_ret = khistorycombobox_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KHistoryComboBox::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (khistorycombobox_paintengine_isbase) {
            khistorycombobox_paintengine_isbase = false;
            return KHistoryComboBox::paintEngine();
        } else if (khistorycombobox_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = khistorycombobox_paintengine_callback();
            return callback_ret;
        } else {
            return KHistoryComboBox::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (khistorycombobox_mousedoubleclickevent_isbase) {
            khistorycombobox_mousedoubleclickevent_isbase = false;
            KHistoryComboBox::mouseDoubleClickEvent(event);
        } else if (khistorycombobox_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            khistorycombobox_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (khistorycombobox_mousemoveevent_isbase) {
            khistorycombobox_mousemoveevent_isbase = false;
            KHistoryComboBox::mouseMoveEvent(event);
        } else if (khistorycombobox_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            khistorycombobox_mousemoveevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (khistorycombobox_enterevent_isbase) {
            khistorycombobox_enterevent_isbase = false;
            KHistoryComboBox::enterEvent(event);
        } else if (khistorycombobox_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            khistorycombobox_enterevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (khistorycombobox_leaveevent_isbase) {
            khistorycombobox_leaveevent_isbase = false;
            KHistoryComboBox::leaveEvent(event);
        } else if (khistorycombobox_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            khistorycombobox_leaveevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (khistorycombobox_moveevent_isbase) {
            khistorycombobox_moveevent_isbase = false;
            KHistoryComboBox::moveEvent(event);
        } else if (khistorycombobox_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            khistorycombobox_moveevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (khistorycombobox_closeevent_isbase) {
            khistorycombobox_closeevent_isbase = false;
            KHistoryComboBox::closeEvent(event);
        } else if (khistorycombobox_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            khistorycombobox_closeevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (khistorycombobox_tabletevent_isbase) {
            khistorycombobox_tabletevent_isbase = false;
            KHistoryComboBox::tabletEvent(event);
        } else if (khistorycombobox_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            khistorycombobox_tabletevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (khistorycombobox_actionevent_isbase) {
            khistorycombobox_actionevent_isbase = false;
            KHistoryComboBox::actionEvent(event);
        } else if (khistorycombobox_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            khistorycombobox_actionevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (khistorycombobox_dragenterevent_isbase) {
            khistorycombobox_dragenterevent_isbase = false;
            KHistoryComboBox::dragEnterEvent(event);
        } else if (khistorycombobox_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            khistorycombobox_dragenterevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (khistorycombobox_dragmoveevent_isbase) {
            khistorycombobox_dragmoveevent_isbase = false;
            KHistoryComboBox::dragMoveEvent(event);
        } else if (khistorycombobox_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            khistorycombobox_dragmoveevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (khistorycombobox_dragleaveevent_isbase) {
            khistorycombobox_dragleaveevent_isbase = false;
            KHistoryComboBox::dragLeaveEvent(event);
        } else if (khistorycombobox_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            khistorycombobox_dragleaveevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (khistorycombobox_dropevent_isbase) {
            khistorycombobox_dropevent_isbase = false;
            KHistoryComboBox::dropEvent(event);
        } else if (khistorycombobox_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            khistorycombobox_dropevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (khistorycombobox_nativeevent_isbase) {
            khistorycombobox_nativeevent_isbase = false;
            return KHistoryComboBox::nativeEvent(eventType, message, result);
        } else if (khistorycombobox_nativeevent_callback != nullptr) {
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

            bool callback_ret = khistorycombobox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KHistoryComboBox::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (khistorycombobox_metric_isbase) {
            khistorycombobox_metric_isbase = false;
            return KHistoryComboBox::metric(param1);
        } else if (khistorycombobox_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = khistorycombobox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KHistoryComboBox::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (khistorycombobox_initpainter_isbase) {
            khistorycombobox_initpainter_isbase = false;
            KHistoryComboBox::initPainter(painter);
        } else if (khistorycombobox_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            khistorycombobox_initpainter_callback(this, cbval1);
        } else {
            KHistoryComboBox::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (khistorycombobox_redirected_isbase) {
            khistorycombobox_redirected_isbase = false;
            return KHistoryComboBox::redirected(offset);
        } else if (khistorycombobox_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = khistorycombobox_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KHistoryComboBox::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (khistorycombobox_sharedpainter_isbase) {
            khistorycombobox_sharedpainter_isbase = false;
            return KHistoryComboBox::sharedPainter();
        } else if (khistorycombobox_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = khistorycombobox_sharedpainter_callback();
            return callback_ret;
        } else {
            return KHistoryComboBox::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (khistorycombobox_focusnextprevchild_isbase) {
            khistorycombobox_focusnextprevchild_isbase = false;
            return KHistoryComboBox::focusNextPrevChild(next);
        } else if (khistorycombobox_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = khistorycombobox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KHistoryComboBox::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (khistorycombobox_eventfilter_isbase) {
            khistorycombobox_eventfilter_isbase = false;
            return KHistoryComboBox::eventFilter(watched, event);
        } else if (khistorycombobox_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = khistorycombobox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KHistoryComboBox::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (khistorycombobox_timerevent_isbase) {
            khistorycombobox_timerevent_isbase = false;
            KHistoryComboBox::timerEvent(event);
        } else if (khistorycombobox_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            khistorycombobox_timerevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (khistorycombobox_childevent_isbase) {
            khistorycombobox_childevent_isbase = false;
            KHistoryComboBox::childEvent(event);
        } else if (khistorycombobox_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            khistorycombobox_childevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (khistorycombobox_customevent_isbase) {
            khistorycombobox_customevent_isbase = false;
            KHistoryComboBox::customEvent(event);
        } else if (khistorycombobox_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            khistorycombobox_customevent_callback(this, cbval1);
        } else {
            KHistoryComboBox::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (khistorycombobox_connectnotify_isbase) {
            khistorycombobox_connectnotify_isbase = false;
            KHistoryComboBox::connectNotify(signal);
        } else if (khistorycombobox_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            khistorycombobox_connectnotify_callback(this, cbval1);
        } else {
            KHistoryComboBox::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (khistorycombobox_disconnectnotify_isbase) {
            khistorycombobox_disconnectnotify_isbase = false;
            KHistoryComboBox::disconnectNotify(signal);
        } else if (khistorycombobox_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            khistorycombobox_disconnectnotify_callback(this, cbval1);
        } else {
            KHistoryComboBox::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionObject(KCompletion* completionObject, bool handleSignals) override {
        if (khistorycombobox_setcompletionobject_isbase) {
            khistorycombobox_setcompletionobject_isbase = false;
            KHistoryComboBox::setCompletionObject(completionObject, handleSignals);
        } else if (khistorycombobox_setcompletionobject_callback != nullptr) {
            KCompletion* cbval1 = completionObject;
            bool cbval2 = handleSignals;

            khistorycombobox_setcompletionobject_callback(this, cbval1, cbval2);
        } else {
            KHistoryComboBox::setCompletionObject(completionObject, handleSignals);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHandleSignals(bool handle) override {
        if (khistorycombobox_sethandlesignals_isbase) {
            khistorycombobox_sethandlesignals_isbase = false;
            KHistoryComboBox::setHandleSignals(handle);
        } else if (khistorycombobox_sethandlesignals_callback != nullptr) {
            bool cbval1 = handle;

            khistorycombobox_sethandlesignals_callback(this, cbval1);
        } else {
            KHistoryComboBox::setHandleSignals(handle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionMode(KCompletion::CompletionMode mode) override {
        if (khistorycombobox_setcompletionmode_isbase) {
            khistorycombobox_setcompletionmode_isbase = false;
            KHistoryComboBox::setCompletionMode(mode);
        } else if (khistorycombobox_setcompletionmode_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            khistorycombobox_setcompletionmode_callback(this, cbval1);
        } else {
            KHistoryComboBox::setCompletionMode(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (khistorycombobox_virtualhook_isbase) {
            khistorycombobox_virtualhook_isbase = false;
            KHistoryComboBox::virtual_hook(id, data);
        } else if (khistorycombobox_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            khistorycombobox_virtualhook_callback(this, cbval1, cbval2);
        } else {
            KHistoryComboBox::virtual_hook(id, data);
        }
    }

    // Virtual method for C ABI access and custom callback
    void insertItems(const QList<QString>& items) {
        if (khistorycombobox_insertitems_isbase) {
            khistorycombobox_insertitems_isbase = false;
            KHistoryComboBox::insertItems(items);
        } else if (khistorycombobox_insertitems_callback != nullptr) {
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

            khistorycombobox_insertitems_callback(this, cbval1);
        } else {
            KHistoryComboBox::insertItems(items);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool useCompletion() const {
        if (khistorycombobox_usecompletion_isbase) {
            khistorycombobox_usecompletion_isbase = false;
            return KHistoryComboBox::useCompletion();
        } else if (khistorycombobox_usecompletion_callback != nullptr) {
            bool callback_ret = khistorycombobox_usecompletion_callback();
            return callback_ret;
        } else {
            return KHistoryComboBox::useCompletion();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (khistorycombobox_updatemicrofocus_isbase) {
            khistorycombobox_updatemicrofocus_isbase = false;
            KHistoryComboBox::updateMicroFocus();
        } else if (khistorycombobox_updatemicrofocus_callback != nullptr) {
            khistorycombobox_updatemicrofocus_callback();
        } else {
            KHistoryComboBox::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (khistorycombobox_create_isbase) {
            khistorycombobox_create_isbase = false;
            KHistoryComboBox::create();
        } else if (khistorycombobox_create_callback != nullptr) {
            khistorycombobox_create_callback();
        } else {
            KHistoryComboBox::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (khistorycombobox_destroy_isbase) {
            khistorycombobox_destroy_isbase = false;
            KHistoryComboBox::destroy();
        } else if (khistorycombobox_destroy_callback != nullptr) {
            khistorycombobox_destroy_callback();
        } else {
            KHistoryComboBox::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (khistorycombobox_focusnextchild_isbase) {
            khistorycombobox_focusnextchild_isbase = false;
            return KHistoryComboBox::focusNextChild();
        } else if (khistorycombobox_focusnextchild_callback != nullptr) {
            bool callback_ret = khistorycombobox_focusnextchild_callback();
            return callback_ret;
        } else {
            return KHistoryComboBox::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (khistorycombobox_focuspreviouschild_isbase) {
            khistorycombobox_focuspreviouschild_isbase = false;
            return KHistoryComboBox::focusPreviousChild();
        } else if (khistorycombobox_focuspreviouschild_callback != nullptr) {
            bool callback_ret = khistorycombobox_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KHistoryComboBox::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (khistorycombobox_sender_isbase) {
            khistorycombobox_sender_isbase = false;
            return KHistoryComboBox::sender();
        } else if (khistorycombobox_sender_callback != nullptr) {
            QObject* callback_ret = khistorycombobox_sender_callback();
            return callback_ret;
        } else {
            return KHistoryComboBox::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (khistorycombobox_sendersignalindex_isbase) {
            khistorycombobox_sendersignalindex_isbase = false;
            return KHistoryComboBox::senderSignalIndex();
        } else if (khistorycombobox_sendersignalindex_callback != nullptr) {
            int callback_ret = khistorycombobox_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KHistoryComboBox::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (khistorycombobox_receivers_isbase) {
            khistorycombobox_receivers_isbase = false;
            return KHistoryComboBox::receivers(signal);
        } else if (khistorycombobox_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = khistorycombobox_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KHistoryComboBox::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (khistorycombobox_issignalconnected_isbase) {
            khistorycombobox_issignalconnected_isbase = false;
            return KHistoryComboBox::isSignalConnected(signal);
        } else if (khistorycombobox_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = khistorycombobox_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KHistoryComboBox::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (khistorycombobox_getdecodedmetricf_isbase) {
            khistorycombobox_getdecodedmetricf_isbase = false;
            return KHistoryComboBox::getDecodedMetricF(metricA, metricB);
        } else if (khistorycombobox_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = khistorycombobox_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KHistoryComboBox::getDecodedMetricF(metricA, metricB);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> keyBindingMap() const {
        if (khistorycombobox_keybindingmap_isbase) {
            khistorycombobox_keybindingmap_isbase = false;
            return KHistoryComboBox::keyBindingMap();
        } else if (khistorycombobox_keybindingmap_callback != nullptr) {
            libqt_map /* of int to libqt_list  of QKeySequence*  */ callback_ret = khistorycombobox_keybindingmap_callback();
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
            return KHistoryComboBox::keyBindingMap();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setKeyBindingMap(QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> keyBindingMap) {
        if (khistorycombobox_setkeybindingmap_isbase) {
            khistorycombobox_setkeybindingmap_isbase = false;
            KHistoryComboBox::setKeyBindingMap(keyBindingMap);
        } else if (khistorycombobox_setkeybindingmap_callback != nullptr) {
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

            khistorycombobox_setkeybindingmap_callback(this, cbval1);
        } else {
            KHistoryComboBox::setKeyBindingMap(keyBindingMap);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDelegate(KCompletionBase* delegate) {
        if (khistorycombobox_setdelegate_isbase) {
            khistorycombobox_setdelegate_isbase = false;
            KHistoryComboBox::setDelegate(delegate);
        } else if (khistorycombobox_setdelegate_callback != nullptr) {
            KCompletionBase* cbval1 = delegate;

            khistorycombobox_setdelegate_callback(this, cbval1);
        } else {
            KHistoryComboBox::setDelegate(delegate);
        }
    }

    // Virtual method for C ABI access and custom callback
    KCompletionBase* delegate() const {
        if (khistorycombobox_delegate_isbase) {
            khistorycombobox_delegate_isbase = false;
            return KHistoryComboBox::delegate();
        } else if (khistorycombobox_delegate_callback != nullptr) {
            KCompletionBase* callback_ret = khistorycombobox_delegate_callback();
            return callback_ret;
        } else {
            return KHistoryComboBox::delegate();
        }
    }

    // Friend functions
    friend void KHistoryComboBox_KeyPressEvent(KHistoryComboBox* self, QKeyEvent* param1);
    friend void KHistoryComboBox_QBaseKeyPressEvent(KHistoryComboBox* self, QKeyEvent* param1);
    friend void KHistoryComboBox_WheelEvent(KHistoryComboBox* self, QWheelEvent* ev);
    friend void KHistoryComboBox_QBaseWheelEvent(KHistoryComboBox* self, QWheelEvent* ev);
    friend void KHistoryComboBox_MakeCompletion(KHistoryComboBox* self, const libqt_string param1);
    friend void KHistoryComboBox_QBaseMakeCompletion(KHistoryComboBox* self, const libqt_string param1);
    friend void KHistoryComboBox_FocusInEvent(KHistoryComboBox* self, QFocusEvent* e);
    friend void KHistoryComboBox_QBaseFocusInEvent(KHistoryComboBox* self, QFocusEvent* e);
    friend void KHistoryComboBox_FocusOutEvent(KHistoryComboBox* self, QFocusEvent* e);
    friend void KHistoryComboBox_QBaseFocusOutEvent(KHistoryComboBox* self, QFocusEvent* e);
    friend void KHistoryComboBox_ChangeEvent(KHistoryComboBox* self, QEvent* e);
    friend void KHistoryComboBox_QBaseChangeEvent(KHistoryComboBox* self, QEvent* e);
    friend void KHistoryComboBox_ResizeEvent(KHistoryComboBox* self, QResizeEvent* e);
    friend void KHistoryComboBox_QBaseResizeEvent(KHistoryComboBox* self, QResizeEvent* e);
    friend void KHistoryComboBox_PaintEvent(KHistoryComboBox* self, QPaintEvent* e);
    friend void KHistoryComboBox_QBasePaintEvent(KHistoryComboBox* self, QPaintEvent* e);
    friend void KHistoryComboBox_ShowEvent(KHistoryComboBox* self, QShowEvent* e);
    friend void KHistoryComboBox_QBaseShowEvent(KHistoryComboBox* self, QShowEvent* e);
    friend void KHistoryComboBox_HideEvent(KHistoryComboBox* self, QHideEvent* e);
    friend void KHistoryComboBox_QBaseHideEvent(KHistoryComboBox* self, QHideEvent* e);
    friend void KHistoryComboBox_MousePressEvent(KHistoryComboBox* self, QMouseEvent* e);
    friend void KHistoryComboBox_QBaseMousePressEvent(KHistoryComboBox* self, QMouseEvent* e);
    friend void KHistoryComboBox_MouseReleaseEvent(KHistoryComboBox* self, QMouseEvent* e);
    friend void KHistoryComboBox_QBaseMouseReleaseEvent(KHistoryComboBox* self, QMouseEvent* e);
    friend void KHistoryComboBox_KeyReleaseEvent(KHistoryComboBox* self, QKeyEvent* e);
    friend void KHistoryComboBox_QBaseKeyReleaseEvent(KHistoryComboBox* self, QKeyEvent* e);
    friend void KHistoryComboBox_ContextMenuEvent(KHistoryComboBox* self, QContextMenuEvent* e);
    friend void KHistoryComboBox_QBaseContextMenuEvent(KHistoryComboBox* self, QContextMenuEvent* e);
    friend void KHistoryComboBox_InputMethodEvent(KHistoryComboBox* self, QInputMethodEvent* param1);
    friend void KHistoryComboBox_QBaseInputMethodEvent(KHistoryComboBox* self, QInputMethodEvent* param1);
    friend void KHistoryComboBox_InitStyleOption(const KHistoryComboBox* self, QStyleOptionComboBox* option);
    friend void KHistoryComboBox_QBaseInitStyleOption(const KHistoryComboBox* self, QStyleOptionComboBox* option);
    friend void KHistoryComboBox_MouseDoubleClickEvent(KHistoryComboBox* self, QMouseEvent* event);
    friend void KHistoryComboBox_QBaseMouseDoubleClickEvent(KHistoryComboBox* self, QMouseEvent* event);
    friend void KHistoryComboBox_MouseMoveEvent(KHistoryComboBox* self, QMouseEvent* event);
    friend void KHistoryComboBox_QBaseMouseMoveEvent(KHistoryComboBox* self, QMouseEvent* event);
    friend void KHistoryComboBox_EnterEvent(KHistoryComboBox* self, QEnterEvent* event);
    friend void KHistoryComboBox_QBaseEnterEvent(KHistoryComboBox* self, QEnterEvent* event);
    friend void KHistoryComboBox_LeaveEvent(KHistoryComboBox* self, QEvent* event);
    friend void KHistoryComboBox_QBaseLeaveEvent(KHistoryComboBox* self, QEvent* event);
    friend void KHistoryComboBox_MoveEvent(KHistoryComboBox* self, QMoveEvent* event);
    friend void KHistoryComboBox_QBaseMoveEvent(KHistoryComboBox* self, QMoveEvent* event);
    friend void KHistoryComboBox_CloseEvent(KHistoryComboBox* self, QCloseEvent* event);
    friend void KHistoryComboBox_QBaseCloseEvent(KHistoryComboBox* self, QCloseEvent* event);
    friend void KHistoryComboBox_TabletEvent(KHistoryComboBox* self, QTabletEvent* event);
    friend void KHistoryComboBox_QBaseTabletEvent(KHistoryComboBox* self, QTabletEvent* event);
    friend void KHistoryComboBox_ActionEvent(KHistoryComboBox* self, QActionEvent* event);
    friend void KHistoryComboBox_QBaseActionEvent(KHistoryComboBox* self, QActionEvent* event);
    friend void KHistoryComboBox_DragEnterEvent(KHistoryComboBox* self, QDragEnterEvent* event);
    friend void KHistoryComboBox_QBaseDragEnterEvent(KHistoryComboBox* self, QDragEnterEvent* event);
    friend void KHistoryComboBox_DragMoveEvent(KHistoryComboBox* self, QDragMoveEvent* event);
    friend void KHistoryComboBox_QBaseDragMoveEvent(KHistoryComboBox* self, QDragMoveEvent* event);
    friend void KHistoryComboBox_DragLeaveEvent(KHistoryComboBox* self, QDragLeaveEvent* event);
    friend void KHistoryComboBox_QBaseDragLeaveEvent(KHistoryComboBox* self, QDragLeaveEvent* event);
    friend void KHistoryComboBox_DropEvent(KHistoryComboBox* self, QDropEvent* event);
    friend void KHistoryComboBox_QBaseDropEvent(KHistoryComboBox* self, QDropEvent* event);
    friend bool KHistoryComboBox_NativeEvent(KHistoryComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KHistoryComboBox_QBaseNativeEvent(KHistoryComboBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KHistoryComboBox_Metric(const KHistoryComboBox* self, int param1);
    friend int KHistoryComboBox_QBaseMetric(const KHistoryComboBox* self, int param1);
    friend void KHistoryComboBox_InitPainter(const KHistoryComboBox* self, QPainter* painter);
    friend void KHistoryComboBox_QBaseInitPainter(const KHistoryComboBox* self, QPainter* painter);
    friend QPaintDevice* KHistoryComboBox_Redirected(const KHistoryComboBox* self, QPoint* offset);
    friend QPaintDevice* KHistoryComboBox_QBaseRedirected(const KHistoryComboBox* self, QPoint* offset);
    friend QPainter* KHistoryComboBox_SharedPainter(const KHistoryComboBox* self);
    friend QPainter* KHistoryComboBox_QBaseSharedPainter(const KHistoryComboBox* self);
    friend bool KHistoryComboBox_FocusNextPrevChild(KHistoryComboBox* self, bool next);
    friend bool KHistoryComboBox_QBaseFocusNextPrevChild(KHistoryComboBox* self, bool next);
    friend void KHistoryComboBox_TimerEvent(KHistoryComboBox* self, QTimerEvent* event);
    friend void KHistoryComboBox_QBaseTimerEvent(KHistoryComboBox* self, QTimerEvent* event);
    friend void KHistoryComboBox_ChildEvent(KHistoryComboBox* self, QChildEvent* event);
    friend void KHistoryComboBox_QBaseChildEvent(KHistoryComboBox* self, QChildEvent* event);
    friend void KHistoryComboBox_CustomEvent(KHistoryComboBox* self, QEvent* event);
    friend void KHistoryComboBox_QBaseCustomEvent(KHistoryComboBox* self, QEvent* event);
    friend void KHistoryComboBox_ConnectNotify(KHistoryComboBox* self, const QMetaMethod* signal);
    friend void KHistoryComboBox_QBaseConnectNotify(KHistoryComboBox* self, const QMetaMethod* signal);
    friend void KHistoryComboBox_DisconnectNotify(KHistoryComboBox* self, const QMetaMethod* signal);
    friend void KHistoryComboBox_QBaseDisconnectNotify(KHistoryComboBox* self, const QMetaMethod* signal);
    friend void KHistoryComboBox_VirtualHook(KHistoryComboBox* self, int id, void* data);
    friend void KHistoryComboBox_QBaseVirtualHook(KHistoryComboBox* self, int id, void* data);
    friend void KHistoryComboBox_InsertItems(KHistoryComboBox* self, const libqt_list /* of libqt_string */ items);
    friend void KHistoryComboBox_QBaseInsertItems(KHistoryComboBox* self, const libqt_list /* of libqt_string */ items);
    friend bool KHistoryComboBox_UseCompletion(const KHistoryComboBox* self);
    friend bool KHistoryComboBox_QBaseUseCompletion(const KHistoryComboBox* self);
    friend void KHistoryComboBox_UpdateMicroFocus(KHistoryComboBox* self);
    friend void KHistoryComboBox_QBaseUpdateMicroFocus(KHistoryComboBox* self);
    friend void KHistoryComboBox_Create(KHistoryComboBox* self);
    friend void KHistoryComboBox_QBaseCreate(KHistoryComboBox* self);
    friend void KHistoryComboBox_Destroy(KHistoryComboBox* self);
    friend void KHistoryComboBox_QBaseDestroy(KHistoryComboBox* self);
    friend bool KHistoryComboBox_FocusNextChild(KHistoryComboBox* self);
    friend bool KHistoryComboBox_QBaseFocusNextChild(KHistoryComboBox* self);
    friend bool KHistoryComboBox_FocusPreviousChild(KHistoryComboBox* self);
    friend bool KHistoryComboBox_QBaseFocusPreviousChild(KHistoryComboBox* self);
    friend QObject* KHistoryComboBox_Sender(const KHistoryComboBox* self);
    friend QObject* KHistoryComboBox_QBaseSender(const KHistoryComboBox* self);
    friend int KHistoryComboBox_SenderSignalIndex(const KHistoryComboBox* self);
    friend int KHistoryComboBox_QBaseSenderSignalIndex(const KHistoryComboBox* self);
    friend int KHistoryComboBox_Receivers(const KHistoryComboBox* self, const char* signal);
    friend int KHistoryComboBox_QBaseReceivers(const KHistoryComboBox* self, const char* signal);
    friend bool KHistoryComboBox_IsSignalConnected(const KHistoryComboBox* self, const QMetaMethod* signal);
    friend bool KHistoryComboBox_QBaseIsSignalConnected(const KHistoryComboBox* self, const QMetaMethod* signal);
    friend double KHistoryComboBox_GetDecodedMetricF(const KHistoryComboBox* self, int metricA, int metricB);
    friend double KHistoryComboBox_QBaseGetDecodedMetricF(const KHistoryComboBox* self, int metricA, int metricB);
    friend libqt_map /* of int to libqt_list  of QKeySequence*  */ KHistoryComboBox_KeyBindingMap(const KHistoryComboBox* self);
    friend libqt_map /* of int to libqt_list  of QKeySequence*  */ KHistoryComboBox_QBaseKeyBindingMap(const KHistoryComboBox* self);
    friend void KHistoryComboBox_SetKeyBindingMap(KHistoryComboBox* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap);
    friend void KHistoryComboBox_QBaseSetKeyBindingMap(KHistoryComboBox* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap);
    friend void KHistoryComboBox_SetDelegate(KHistoryComboBox* self, KCompletionBase* delegate);
    friend void KHistoryComboBox_QBaseSetDelegate(KHistoryComboBox* self, KCompletionBase* delegate);
    friend KCompletionBase* KHistoryComboBox_Delegate(const KHistoryComboBox* self);
    friend KCompletionBase* KHistoryComboBox_QBaseDelegate(const KHistoryComboBox* self);
};

#endif
