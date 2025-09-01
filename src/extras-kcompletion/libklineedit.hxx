#pragma once
#ifndef SRC_EXTRAS_KCOMPLETIONC_LIBVIRTUALKLINEEDIT_H
#define SRC_EXTRAS_KCOMPLETIONC_LIBVIRTUALKLINEEDIT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KLineEdit so that we can call protected methods
class VirtualKLineEdit final : public KLineEdit {

  public:
    // Virtual class boolean flag
    bool isVirtualKLineEdit = true;

    // Virtual class public types (including callbacks)
    using KLineEdit_Metacall_Callback = int (*)(KLineEdit*, int, int, void**);
    using KLineEdit_SetCompletionMode_Callback = void (*)(KLineEdit*, int);
    using KLineEdit_CompletionBox_Callback = KCompletionBox* (*)(KLineEdit*, bool);
    using KLineEdit_SetCompletionObject_Callback = void (*)(KLineEdit*, KCompletion*, bool);
    using KLineEdit_Copy_Callback = void (*)();
    using KLineEdit_SetReadOnly_Callback = void (*)(KLineEdit*, bool);
    using KLineEdit_SetCompletedText_Callback = void (*)(KLineEdit*, libqt_string);
    using KLineEdit_SetCompletedItems_Callback = void (*)(KLineEdit*, libqt_list /* of libqt_string */, bool);
    using KLineEdit_SetText_Callback = void (*)(KLineEdit*, libqt_string);
    using KLineEdit_MakeCompletion_Callback = void (*)(KLineEdit*, libqt_string);
    using KLineEdit_Event_Callback = bool (*)(KLineEdit*, QEvent*);
    using KLineEdit_ResizeEvent_Callback = void (*)(KLineEdit*, QResizeEvent*);
    using KLineEdit_KeyPressEvent_Callback = void (*)(KLineEdit*, QKeyEvent*);
    using KLineEdit_MousePressEvent_Callback = void (*)(KLineEdit*, QMouseEvent*);
    using KLineEdit_MouseReleaseEvent_Callback = void (*)(KLineEdit*, QMouseEvent*);
    using KLineEdit_MouseDoubleClickEvent_Callback = void (*)(KLineEdit*, QMouseEvent*);
    using KLineEdit_ContextMenuEvent_Callback = void (*)(KLineEdit*, QContextMenuEvent*);
    using KLineEdit_SetCompletedText2_Callback = void (*)(KLineEdit*, libqt_string, bool);
    using KLineEdit_PaintEvent_Callback = void (*)(KLineEdit*, QPaintEvent*);
    using KLineEdit_SizeHint_Callback = QSize* (*)();
    using KLineEdit_MinimumSizeHint_Callback = QSize* (*)();
    using KLineEdit_MouseMoveEvent_Callback = void (*)(KLineEdit*, QMouseEvent*);
    using KLineEdit_KeyReleaseEvent_Callback = void (*)(KLineEdit*, QKeyEvent*);
    using KLineEdit_FocusInEvent_Callback = void (*)(KLineEdit*, QFocusEvent*);
    using KLineEdit_FocusOutEvent_Callback = void (*)(KLineEdit*, QFocusEvent*);
    using KLineEdit_DragEnterEvent_Callback = void (*)(KLineEdit*, QDragEnterEvent*);
    using KLineEdit_DragMoveEvent_Callback = void (*)(KLineEdit*, QDragMoveEvent*);
    using KLineEdit_DragLeaveEvent_Callback = void (*)(KLineEdit*, QDragLeaveEvent*);
    using KLineEdit_DropEvent_Callback = void (*)(KLineEdit*, QDropEvent*);
    using KLineEdit_ChangeEvent_Callback = void (*)(KLineEdit*, QEvent*);
    using KLineEdit_InputMethodEvent_Callback = void (*)(KLineEdit*, QInputMethodEvent*);
    using KLineEdit_InitStyleOption_Callback = void (*)(const KLineEdit*, QStyleOptionFrame*);
    using KLineEdit_InputMethodQuery_Callback = QVariant* (*)(const KLineEdit*, int);
    using KLineEdit_TimerEvent_Callback = void (*)(KLineEdit*, QTimerEvent*);
    using KLineEdit_DevType_Callback = int (*)();
    using KLineEdit_SetVisible_Callback = void (*)(KLineEdit*, bool);
    using KLineEdit_HeightForWidth_Callback = int (*)(const KLineEdit*, int);
    using KLineEdit_HasHeightForWidth_Callback = bool (*)();
    using KLineEdit_PaintEngine_Callback = QPaintEngine* (*)();
    using KLineEdit_WheelEvent_Callback = void (*)(KLineEdit*, QWheelEvent*);
    using KLineEdit_EnterEvent_Callback = void (*)(KLineEdit*, QEnterEvent*);
    using KLineEdit_LeaveEvent_Callback = void (*)(KLineEdit*, QEvent*);
    using KLineEdit_MoveEvent_Callback = void (*)(KLineEdit*, QMoveEvent*);
    using KLineEdit_CloseEvent_Callback = void (*)(KLineEdit*, QCloseEvent*);
    using KLineEdit_TabletEvent_Callback = void (*)(KLineEdit*, QTabletEvent*);
    using KLineEdit_ActionEvent_Callback = void (*)(KLineEdit*, QActionEvent*);
    using KLineEdit_ShowEvent_Callback = void (*)(KLineEdit*, QShowEvent*);
    using KLineEdit_HideEvent_Callback = void (*)(KLineEdit*, QHideEvent*);
    using KLineEdit_NativeEvent_Callback = bool (*)(KLineEdit*, libqt_string, void*, intptr_t*);
    using KLineEdit_Metric_Callback = int (*)(const KLineEdit*, int);
    using KLineEdit_InitPainter_Callback = void (*)(const KLineEdit*, QPainter*);
    using KLineEdit_Redirected_Callback = QPaintDevice* (*)(const KLineEdit*, QPoint*);
    using KLineEdit_SharedPainter_Callback = QPainter* (*)();
    using KLineEdit_FocusNextPrevChild_Callback = bool (*)(KLineEdit*, bool);
    using KLineEdit_EventFilter_Callback = bool (*)(KLineEdit*, QObject*, QEvent*);
    using KLineEdit_ChildEvent_Callback = void (*)(KLineEdit*, QChildEvent*);
    using KLineEdit_CustomEvent_Callback = void (*)(KLineEdit*, QEvent*);
    using KLineEdit_ConnectNotify_Callback = void (*)(KLineEdit*, QMetaMethod*);
    using KLineEdit_DisconnectNotify_Callback = void (*)(KLineEdit*, QMetaMethod*);
    using KLineEdit_SetHandleSignals_Callback = void (*)(KLineEdit*, bool);
    using KLineEdit_VirtualHook_Callback = void (*)(KLineEdit*, int, void*);
    using KLineEdit_UserCancelled_Callback = void (*)(KLineEdit*, libqt_string);
    using KLineEdit_CreateStandardContextMenu_Callback = QMenu* (*)();
    using KLineEdit_SetUserSelection_Callback = void (*)(KLineEdit*, bool);
    using KLineEdit_AutoSuggest_Callback = bool (*)();
    using KLineEdit_CursorRect_Callback = QRect* (*)();
    using KLineEdit_UpdateMicroFocus_Callback = void (*)();
    using KLineEdit_Create_Callback = void (*)();
    using KLineEdit_Destroy_Callback = void (*)();
    using KLineEdit_FocusNextChild_Callback = bool (*)();
    using KLineEdit_FocusPreviousChild_Callback = bool (*)();
    using KLineEdit_Sender_Callback = QObject* (*)();
    using KLineEdit_SenderSignalIndex_Callback = int (*)();
    using KLineEdit_Receivers_Callback = int (*)(const KLineEdit*, const char*);
    using KLineEdit_IsSignalConnected_Callback = bool (*)(const KLineEdit*, QMetaMethod*);
    using KLineEdit_GetDecodedMetricF_Callback = double (*)(const KLineEdit*, int, int);
    using KLineEdit_KeyBindingMap_Callback = libqt_map /* of int to libqt_list  of QKeySequence*  */ (*)();
    using KLineEdit_SetKeyBindingMap_Callback = void (*)(KLineEdit*, libqt_map /* of int to libqt_list  of QKeySequence*  */);
    using KLineEdit_SetDelegate_Callback = void (*)(KLineEdit*, KCompletionBase*);
    using KLineEdit_Delegate_Callback = KCompletionBase* (*)();

  protected:
    // Instance callback storage
    KLineEdit_Metacall_Callback klineedit_metacall_callback = nullptr;
    KLineEdit_SetCompletionMode_Callback klineedit_setcompletionmode_callback = nullptr;
    KLineEdit_CompletionBox_Callback klineedit_completionbox_callback = nullptr;
    KLineEdit_SetCompletionObject_Callback klineedit_setcompletionobject_callback = nullptr;
    KLineEdit_Copy_Callback klineedit_copy_callback = nullptr;
    KLineEdit_SetReadOnly_Callback klineedit_setreadonly_callback = nullptr;
    KLineEdit_SetCompletedText_Callback klineedit_setcompletedtext_callback = nullptr;
    KLineEdit_SetCompletedItems_Callback klineedit_setcompleteditems_callback = nullptr;
    KLineEdit_SetText_Callback klineedit_settext_callback = nullptr;
    KLineEdit_MakeCompletion_Callback klineedit_makecompletion_callback = nullptr;
    KLineEdit_Event_Callback klineedit_event_callback = nullptr;
    KLineEdit_ResizeEvent_Callback klineedit_resizeevent_callback = nullptr;
    KLineEdit_KeyPressEvent_Callback klineedit_keypressevent_callback = nullptr;
    KLineEdit_MousePressEvent_Callback klineedit_mousepressevent_callback = nullptr;
    KLineEdit_MouseReleaseEvent_Callback klineedit_mousereleaseevent_callback = nullptr;
    KLineEdit_MouseDoubleClickEvent_Callback klineedit_mousedoubleclickevent_callback = nullptr;
    KLineEdit_ContextMenuEvent_Callback klineedit_contextmenuevent_callback = nullptr;
    KLineEdit_SetCompletedText2_Callback klineedit_setcompletedtext2_callback = nullptr;
    KLineEdit_PaintEvent_Callback klineedit_paintevent_callback = nullptr;
    KLineEdit_SizeHint_Callback klineedit_sizehint_callback = nullptr;
    KLineEdit_MinimumSizeHint_Callback klineedit_minimumsizehint_callback = nullptr;
    KLineEdit_MouseMoveEvent_Callback klineedit_mousemoveevent_callback = nullptr;
    KLineEdit_KeyReleaseEvent_Callback klineedit_keyreleaseevent_callback = nullptr;
    KLineEdit_FocusInEvent_Callback klineedit_focusinevent_callback = nullptr;
    KLineEdit_FocusOutEvent_Callback klineedit_focusoutevent_callback = nullptr;
    KLineEdit_DragEnterEvent_Callback klineedit_dragenterevent_callback = nullptr;
    KLineEdit_DragMoveEvent_Callback klineedit_dragmoveevent_callback = nullptr;
    KLineEdit_DragLeaveEvent_Callback klineedit_dragleaveevent_callback = nullptr;
    KLineEdit_DropEvent_Callback klineedit_dropevent_callback = nullptr;
    KLineEdit_ChangeEvent_Callback klineedit_changeevent_callback = nullptr;
    KLineEdit_InputMethodEvent_Callback klineedit_inputmethodevent_callback = nullptr;
    KLineEdit_InitStyleOption_Callback klineedit_initstyleoption_callback = nullptr;
    KLineEdit_InputMethodQuery_Callback klineedit_inputmethodquery_callback = nullptr;
    KLineEdit_TimerEvent_Callback klineedit_timerevent_callback = nullptr;
    KLineEdit_DevType_Callback klineedit_devtype_callback = nullptr;
    KLineEdit_SetVisible_Callback klineedit_setvisible_callback = nullptr;
    KLineEdit_HeightForWidth_Callback klineedit_heightforwidth_callback = nullptr;
    KLineEdit_HasHeightForWidth_Callback klineedit_hasheightforwidth_callback = nullptr;
    KLineEdit_PaintEngine_Callback klineedit_paintengine_callback = nullptr;
    KLineEdit_WheelEvent_Callback klineedit_wheelevent_callback = nullptr;
    KLineEdit_EnterEvent_Callback klineedit_enterevent_callback = nullptr;
    KLineEdit_LeaveEvent_Callback klineedit_leaveevent_callback = nullptr;
    KLineEdit_MoveEvent_Callback klineedit_moveevent_callback = nullptr;
    KLineEdit_CloseEvent_Callback klineedit_closeevent_callback = nullptr;
    KLineEdit_TabletEvent_Callback klineedit_tabletevent_callback = nullptr;
    KLineEdit_ActionEvent_Callback klineedit_actionevent_callback = nullptr;
    KLineEdit_ShowEvent_Callback klineedit_showevent_callback = nullptr;
    KLineEdit_HideEvent_Callback klineedit_hideevent_callback = nullptr;
    KLineEdit_NativeEvent_Callback klineedit_nativeevent_callback = nullptr;
    KLineEdit_Metric_Callback klineedit_metric_callback = nullptr;
    KLineEdit_InitPainter_Callback klineedit_initpainter_callback = nullptr;
    KLineEdit_Redirected_Callback klineedit_redirected_callback = nullptr;
    KLineEdit_SharedPainter_Callback klineedit_sharedpainter_callback = nullptr;
    KLineEdit_FocusNextPrevChild_Callback klineedit_focusnextprevchild_callback = nullptr;
    KLineEdit_EventFilter_Callback klineedit_eventfilter_callback = nullptr;
    KLineEdit_ChildEvent_Callback klineedit_childevent_callback = nullptr;
    KLineEdit_CustomEvent_Callback klineedit_customevent_callback = nullptr;
    KLineEdit_ConnectNotify_Callback klineedit_connectnotify_callback = nullptr;
    KLineEdit_DisconnectNotify_Callback klineedit_disconnectnotify_callback = nullptr;
    KLineEdit_SetHandleSignals_Callback klineedit_sethandlesignals_callback = nullptr;
    KLineEdit_VirtualHook_Callback klineedit_virtualhook_callback = nullptr;
    KLineEdit_UserCancelled_Callback klineedit_usercancelled_callback = nullptr;
    KLineEdit_CreateStandardContextMenu_Callback klineedit_createstandardcontextmenu_callback = nullptr;
    KLineEdit_SetUserSelection_Callback klineedit_setuserselection_callback = nullptr;
    KLineEdit_AutoSuggest_Callback klineedit_autosuggest_callback = nullptr;
    KLineEdit_CursorRect_Callback klineedit_cursorrect_callback = nullptr;
    KLineEdit_UpdateMicroFocus_Callback klineedit_updatemicrofocus_callback = nullptr;
    KLineEdit_Create_Callback klineedit_create_callback = nullptr;
    KLineEdit_Destroy_Callback klineedit_destroy_callback = nullptr;
    KLineEdit_FocusNextChild_Callback klineedit_focusnextchild_callback = nullptr;
    KLineEdit_FocusPreviousChild_Callback klineedit_focuspreviouschild_callback = nullptr;
    KLineEdit_Sender_Callback klineedit_sender_callback = nullptr;
    KLineEdit_SenderSignalIndex_Callback klineedit_sendersignalindex_callback = nullptr;
    KLineEdit_Receivers_Callback klineedit_receivers_callback = nullptr;
    KLineEdit_IsSignalConnected_Callback klineedit_issignalconnected_callback = nullptr;
    KLineEdit_GetDecodedMetricF_Callback klineedit_getdecodedmetricf_callback = nullptr;
    KLineEdit_KeyBindingMap_Callback klineedit_keybindingmap_callback = nullptr;
    KLineEdit_SetKeyBindingMap_Callback klineedit_setkeybindingmap_callback = nullptr;
    KLineEdit_SetDelegate_Callback klineedit_setdelegate_callback = nullptr;
    KLineEdit_Delegate_Callback klineedit_delegate_callback = nullptr;

    // Instance base flags
    mutable bool klineedit_metacall_isbase = false;
    mutable bool klineedit_setcompletionmode_isbase = false;
    mutable bool klineedit_completionbox_isbase = false;
    mutable bool klineedit_setcompletionobject_isbase = false;
    mutable bool klineedit_copy_isbase = false;
    mutable bool klineedit_setreadonly_isbase = false;
    mutable bool klineedit_setcompletedtext_isbase = false;
    mutable bool klineedit_setcompleteditems_isbase = false;
    mutable bool klineedit_settext_isbase = false;
    mutable bool klineedit_makecompletion_isbase = false;
    mutable bool klineedit_event_isbase = false;
    mutable bool klineedit_resizeevent_isbase = false;
    mutable bool klineedit_keypressevent_isbase = false;
    mutable bool klineedit_mousepressevent_isbase = false;
    mutable bool klineedit_mousereleaseevent_isbase = false;
    mutable bool klineedit_mousedoubleclickevent_isbase = false;
    mutable bool klineedit_contextmenuevent_isbase = false;
    mutable bool klineedit_setcompletedtext2_isbase = false;
    mutable bool klineedit_paintevent_isbase = false;
    mutable bool klineedit_sizehint_isbase = false;
    mutable bool klineedit_minimumsizehint_isbase = false;
    mutable bool klineedit_mousemoveevent_isbase = false;
    mutable bool klineedit_keyreleaseevent_isbase = false;
    mutable bool klineedit_focusinevent_isbase = false;
    mutable bool klineedit_focusoutevent_isbase = false;
    mutable bool klineedit_dragenterevent_isbase = false;
    mutable bool klineedit_dragmoveevent_isbase = false;
    mutable bool klineedit_dragleaveevent_isbase = false;
    mutable bool klineedit_dropevent_isbase = false;
    mutable bool klineedit_changeevent_isbase = false;
    mutable bool klineedit_inputmethodevent_isbase = false;
    mutable bool klineedit_initstyleoption_isbase = false;
    mutable bool klineedit_inputmethodquery_isbase = false;
    mutable bool klineedit_timerevent_isbase = false;
    mutable bool klineedit_devtype_isbase = false;
    mutable bool klineedit_setvisible_isbase = false;
    mutable bool klineedit_heightforwidth_isbase = false;
    mutable bool klineedit_hasheightforwidth_isbase = false;
    mutable bool klineedit_paintengine_isbase = false;
    mutable bool klineedit_wheelevent_isbase = false;
    mutable bool klineedit_enterevent_isbase = false;
    mutable bool klineedit_leaveevent_isbase = false;
    mutable bool klineedit_moveevent_isbase = false;
    mutable bool klineedit_closeevent_isbase = false;
    mutable bool klineedit_tabletevent_isbase = false;
    mutable bool klineedit_actionevent_isbase = false;
    mutable bool klineedit_showevent_isbase = false;
    mutable bool klineedit_hideevent_isbase = false;
    mutable bool klineedit_nativeevent_isbase = false;
    mutable bool klineedit_metric_isbase = false;
    mutable bool klineedit_initpainter_isbase = false;
    mutable bool klineedit_redirected_isbase = false;
    mutable bool klineedit_sharedpainter_isbase = false;
    mutable bool klineedit_focusnextprevchild_isbase = false;
    mutable bool klineedit_eventfilter_isbase = false;
    mutable bool klineedit_childevent_isbase = false;
    mutable bool klineedit_customevent_isbase = false;
    mutable bool klineedit_connectnotify_isbase = false;
    mutable bool klineedit_disconnectnotify_isbase = false;
    mutable bool klineedit_sethandlesignals_isbase = false;
    mutable bool klineedit_virtualhook_isbase = false;
    mutable bool klineedit_usercancelled_isbase = false;
    mutable bool klineedit_createstandardcontextmenu_isbase = false;
    mutable bool klineedit_setuserselection_isbase = false;
    mutable bool klineedit_autosuggest_isbase = false;
    mutable bool klineedit_cursorrect_isbase = false;
    mutable bool klineedit_updatemicrofocus_isbase = false;
    mutable bool klineedit_create_isbase = false;
    mutable bool klineedit_destroy_isbase = false;
    mutable bool klineedit_focusnextchild_isbase = false;
    mutable bool klineedit_focuspreviouschild_isbase = false;
    mutable bool klineedit_sender_isbase = false;
    mutable bool klineedit_sendersignalindex_isbase = false;
    mutable bool klineedit_receivers_isbase = false;
    mutable bool klineedit_issignalconnected_isbase = false;
    mutable bool klineedit_getdecodedmetricf_isbase = false;
    mutable bool klineedit_keybindingmap_isbase = false;
    mutable bool klineedit_setkeybindingmap_isbase = false;
    mutable bool klineedit_setdelegate_isbase = false;
    mutable bool klineedit_delegate_isbase = false;

  public:
    VirtualKLineEdit(QWidget* parent) : KLineEdit(parent) {};
    VirtualKLineEdit(const QString& stringVal) : KLineEdit(stringVal) {};
    VirtualKLineEdit() : KLineEdit() {};
    VirtualKLineEdit(const QString& stringVal, QWidget* parent) : KLineEdit(stringVal, parent) {};

    ~VirtualKLineEdit() {
        klineedit_metacall_callback = nullptr;
        klineedit_setcompletionmode_callback = nullptr;
        klineedit_completionbox_callback = nullptr;
        klineedit_setcompletionobject_callback = nullptr;
        klineedit_copy_callback = nullptr;
        klineedit_setreadonly_callback = nullptr;
        klineedit_setcompletedtext_callback = nullptr;
        klineedit_setcompleteditems_callback = nullptr;
        klineedit_settext_callback = nullptr;
        klineedit_makecompletion_callback = nullptr;
        klineedit_event_callback = nullptr;
        klineedit_resizeevent_callback = nullptr;
        klineedit_keypressevent_callback = nullptr;
        klineedit_mousepressevent_callback = nullptr;
        klineedit_mousereleaseevent_callback = nullptr;
        klineedit_mousedoubleclickevent_callback = nullptr;
        klineedit_contextmenuevent_callback = nullptr;
        klineedit_setcompletedtext2_callback = nullptr;
        klineedit_paintevent_callback = nullptr;
        klineedit_sizehint_callback = nullptr;
        klineedit_minimumsizehint_callback = nullptr;
        klineedit_mousemoveevent_callback = nullptr;
        klineedit_keyreleaseevent_callback = nullptr;
        klineedit_focusinevent_callback = nullptr;
        klineedit_focusoutevent_callback = nullptr;
        klineedit_dragenterevent_callback = nullptr;
        klineedit_dragmoveevent_callback = nullptr;
        klineedit_dragleaveevent_callback = nullptr;
        klineedit_dropevent_callback = nullptr;
        klineedit_changeevent_callback = nullptr;
        klineedit_inputmethodevent_callback = nullptr;
        klineedit_initstyleoption_callback = nullptr;
        klineedit_inputmethodquery_callback = nullptr;
        klineedit_timerevent_callback = nullptr;
        klineedit_devtype_callback = nullptr;
        klineedit_setvisible_callback = nullptr;
        klineedit_heightforwidth_callback = nullptr;
        klineedit_hasheightforwidth_callback = nullptr;
        klineedit_paintengine_callback = nullptr;
        klineedit_wheelevent_callback = nullptr;
        klineedit_enterevent_callback = nullptr;
        klineedit_leaveevent_callback = nullptr;
        klineedit_moveevent_callback = nullptr;
        klineedit_closeevent_callback = nullptr;
        klineedit_tabletevent_callback = nullptr;
        klineedit_actionevent_callback = nullptr;
        klineedit_showevent_callback = nullptr;
        klineedit_hideevent_callback = nullptr;
        klineedit_nativeevent_callback = nullptr;
        klineedit_metric_callback = nullptr;
        klineedit_initpainter_callback = nullptr;
        klineedit_redirected_callback = nullptr;
        klineedit_sharedpainter_callback = nullptr;
        klineedit_focusnextprevchild_callback = nullptr;
        klineedit_eventfilter_callback = nullptr;
        klineedit_childevent_callback = nullptr;
        klineedit_customevent_callback = nullptr;
        klineedit_connectnotify_callback = nullptr;
        klineedit_disconnectnotify_callback = nullptr;
        klineedit_sethandlesignals_callback = nullptr;
        klineedit_virtualhook_callback = nullptr;
        klineedit_usercancelled_callback = nullptr;
        klineedit_createstandardcontextmenu_callback = nullptr;
        klineedit_setuserselection_callback = nullptr;
        klineedit_autosuggest_callback = nullptr;
        klineedit_cursorrect_callback = nullptr;
        klineedit_updatemicrofocus_callback = nullptr;
        klineedit_create_callback = nullptr;
        klineedit_destroy_callback = nullptr;
        klineedit_focusnextchild_callback = nullptr;
        klineedit_focuspreviouschild_callback = nullptr;
        klineedit_sender_callback = nullptr;
        klineedit_sendersignalindex_callback = nullptr;
        klineedit_receivers_callback = nullptr;
        klineedit_issignalconnected_callback = nullptr;
        klineedit_getdecodedmetricf_callback = nullptr;
        klineedit_keybindingmap_callback = nullptr;
        klineedit_setkeybindingmap_callback = nullptr;
        klineedit_setdelegate_callback = nullptr;
        klineedit_delegate_callback = nullptr;
    }

    // Callback setters
    inline void setKLineEdit_Metacall_Callback(KLineEdit_Metacall_Callback cb) { klineedit_metacall_callback = cb; }
    inline void setKLineEdit_SetCompletionMode_Callback(KLineEdit_SetCompletionMode_Callback cb) { klineedit_setcompletionmode_callback = cb; }
    inline void setKLineEdit_CompletionBox_Callback(KLineEdit_CompletionBox_Callback cb) { klineedit_completionbox_callback = cb; }
    inline void setKLineEdit_SetCompletionObject_Callback(KLineEdit_SetCompletionObject_Callback cb) { klineedit_setcompletionobject_callback = cb; }
    inline void setKLineEdit_Copy_Callback(KLineEdit_Copy_Callback cb) { klineedit_copy_callback = cb; }
    inline void setKLineEdit_SetReadOnly_Callback(KLineEdit_SetReadOnly_Callback cb) { klineedit_setreadonly_callback = cb; }
    inline void setKLineEdit_SetCompletedText_Callback(KLineEdit_SetCompletedText_Callback cb) { klineedit_setcompletedtext_callback = cb; }
    inline void setKLineEdit_SetCompletedItems_Callback(KLineEdit_SetCompletedItems_Callback cb) { klineedit_setcompleteditems_callback = cb; }
    inline void setKLineEdit_SetText_Callback(KLineEdit_SetText_Callback cb) { klineedit_settext_callback = cb; }
    inline void setKLineEdit_MakeCompletion_Callback(KLineEdit_MakeCompletion_Callback cb) { klineedit_makecompletion_callback = cb; }
    inline void setKLineEdit_Event_Callback(KLineEdit_Event_Callback cb) { klineedit_event_callback = cb; }
    inline void setKLineEdit_ResizeEvent_Callback(KLineEdit_ResizeEvent_Callback cb) { klineedit_resizeevent_callback = cb; }
    inline void setKLineEdit_KeyPressEvent_Callback(KLineEdit_KeyPressEvent_Callback cb) { klineedit_keypressevent_callback = cb; }
    inline void setKLineEdit_MousePressEvent_Callback(KLineEdit_MousePressEvent_Callback cb) { klineedit_mousepressevent_callback = cb; }
    inline void setKLineEdit_MouseReleaseEvent_Callback(KLineEdit_MouseReleaseEvent_Callback cb) { klineedit_mousereleaseevent_callback = cb; }
    inline void setKLineEdit_MouseDoubleClickEvent_Callback(KLineEdit_MouseDoubleClickEvent_Callback cb) { klineedit_mousedoubleclickevent_callback = cb; }
    inline void setKLineEdit_ContextMenuEvent_Callback(KLineEdit_ContextMenuEvent_Callback cb) { klineedit_contextmenuevent_callback = cb; }
    inline void setKLineEdit_SetCompletedText2_Callback(KLineEdit_SetCompletedText2_Callback cb) { klineedit_setcompletedtext2_callback = cb; }
    inline void setKLineEdit_PaintEvent_Callback(KLineEdit_PaintEvent_Callback cb) { klineedit_paintevent_callback = cb; }
    inline void setKLineEdit_SizeHint_Callback(KLineEdit_SizeHint_Callback cb) { klineedit_sizehint_callback = cb; }
    inline void setKLineEdit_MinimumSizeHint_Callback(KLineEdit_MinimumSizeHint_Callback cb) { klineedit_minimumsizehint_callback = cb; }
    inline void setKLineEdit_MouseMoveEvent_Callback(KLineEdit_MouseMoveEvent_Callback cb) { klineedit_mousemoveevent_callback = cb; }
    inline void setKLineEdit_KeyReleaseEvent_Callback(KLineEdit_KeyReleaseEvent_Callback cb) { klineedit_keyreleaseevent_callback = cb; }
    inline void setKLineEdit_FocusInEvent_Callback(KLineEdit_FocusInEvent_Callback cb) { klineedit_focusinevent_callback = cb; }
    inline void setKLineEdit_FocusOutEvent_Callback(KLineEdit_FocusOutEvent_Callback cb) { klineedit_focusoutevent_callback = cb; }
    inline void setKLineEdit_DragEnterEvent_Callback(KLineEdit_DragEnterEvent_Callback cb) { klineedit_dragenterevent_callback = cb; }
    inline void setKLineEdit_DragMoveEvent_Callback(KLineEdit_DragMoveEvent_Callback cb) { klineedit_dragmoveevent_callback = cb; }
    inline void setKLineEdit_DragLeaveEvent_Callback(KLineEdit_DragLeaveEvent_Callback cb) { klineedit_dragleaveevent_callback = cb; }
    inline void setKLineEdit_DropEvent_Callback(KLineEdit_DropEvent_Callback cb) { klineedit_dropevent_callback = cb; }
    inline void setKLineEdit_ChangeEvent_Callback(KLineEdit_ChangeEvent_Callback cb) { klineedit_changeevent_callback = cb; }
    inline void setKLineEdit_InputMethodEvent_Callback(KLineEdit_InputMethodEvent_Callback cb) { klineedit_inputmethodevent_callback = cb; }
    inline void setKLineEdit_InitStyleOption_Callback(KLineEdit_InitStyleOption_Callback cb) { klineedit_initstyleoption_callback = cb; }
    inline void setKLineEdit_InputMethodQuery_Callback(KLineEdit_InputMethodQuery_Callback cb) { klineedit_inputmethodquery_callback = cb; }
    inline void setKLineEdit_TimerEvent_Callback(KLineEdit_TimerEvent_Callback cb) { klineedit_timerevent_callback = cb; }
    inline void setKLineEdit_DevType_Callback(KLineEdit_DevType_Callback cb) { klineedit_devtype_callback = cb; }
    inline void setKLineEdit_SetVisible_Callback(KLineEdit_SetVisible_Callback cb) { klineedit_setvisible_callback = cb; }
    inline void setKLineEdit_HeightForWidth_Callback(KLineEdit_HeightForWidth_Callback cb) { klineedit_heightforwidth_callback = cb; }
    inline void setKLineEdit_HasHeightForWidth_Callback(KLineEdit_HasHeightForWidth_Callback cb) { klineedit_hasheightforwidth_callback = cb; }
    inline void setKLineEdit_PaintEngine_Callback(KLineEdit_PaintEngine_Callback cb) { klineedit_paintengine_callback = cb; }
    inline void setKLineEdit_WheelEvent_Callback(KLineEdit_WheelEvent_Callback cb) { klineedit_wheelevent_callback = cb; }
    inline void setKLineEdit_EnterEvent_Callback(KLineEdit_EnterEvent_Callback cb) { klineedit_enterevent_callback = cb; }
    inline void setKLineEdit_LeaveEvent_Callback(KLineEdit_LeaveEvent_Callback cb) { klineedit_leaveevent_callback = cb; }
    inline void setKLineEdit_MoveEvent_Callback(KLineEdit_MoveEvent_Callback cb) { klineedit_moveevent_callback = cb; }
    inline void setKLineEdit_CloseEvent_Callback(KLineEdit_CloseEvent_Callback cb) { klineedit_closeevent_callback = cb; }
    inline void setKLineEdit_TabletEvent_Callback(KLineEdit_TabletEvent_Callback cb) { klineedit_tabletevent_callback = cb; }
    inline void setKLineEdit_ActionEvent_Callback(KLineEdit_ActionEvent_Callback cb) { klineedit_actionevent_callback = cb; }
    inline void setKLineEdit_ShowEvent_Callback(KLineEdit_ShowEvent_Callback cb) { klineedit_showevent_callback = cb; }
    inline void setKLineEdit_HideEvent_Callback(KLineEdit_HideEvent_Callback cb) { klineedit_hideevent_callback = cb; }
    inline void setKLineEdit_NativeEvent_Callback(KLineEdit_NativeEvent_Callback cb) { klineedit_nativeevent_callback = cb; }
    inline void setKLineEdit_Metric_Callback(KLineEdit_Metric_Callback cb) { klineedit_metric_callback = cb; }
    inline void setKLineEdit_InitPainter_Callback(KLineEdit_InitPainter_Callback cb) { klineedit_initpainter_callback = cb; }
    inline void setKLineEdit_Redirected_Callback(KLineEdit_Redirected_Callback cb) { klineedit_redirected_callback = cb; }
    inline void setKLineEdit_SharedPainter_Callback(KLineEdit_SharedPainter_Callback cb) { klineedit_sharedpainter_callback = cb; }
    inline void setKLineEdit_FocusNextPrevChild_Callback(KLineEdit_FocusNextPrevChild_Callback cb) { klineedit_focusnextprevchild_callback = cb; }
    inline void setKLineEdit_EventFilter_Callback(KLineEdit_EventFilter_Callback cb) { klineedit_eventfilter_callback = cb; }
    inline void setKLineEdit_ChildEvent_Callback(KLineEdit_ChildEvent_Callback cb) { klineedit_childevent_callback = cb; }
    inline void setKLineEdit_CustomEvent_Callback(KLineEdit_CustomEvent_Callback cb) { klineedit_customevent_callback = cb; }
    inline void setKLineEdit_ConnectNotify_Callback(KLineEdit_ConnectNotify_Callback cb) { klineedit_connectnotify_callback = cb; }
    inline void setKLineEdit_DisconnectNotify_Callback(KLineEdit_DisconnectNotify_Callback cb) { klineedit_disconnectnotify_callback = cb; }
    inline void setKLineEdit_SetHandleSignals_Callback(KLineEdit_SetHandleSignals_Callback cb) { klineedit_sethandlesignals_callback = cb; }
    inline void setKLineEdit_VirtualHook_Callback(KLineEdit_VirtualHook_Callback cb) { klineedit_virtualhook_callback = cb; }
    inline void setKLineEdit_UserCancelled_Callback(KLineEdit_UserCancelled_Callback cb) { klineedit_usercancelled_callback = cb; }
    inline void setKLineEdit_CreateStandardContextMenu_Callback(KLineEdit_CreateStandardContextMenu_Callback cb) { klineedit_createstandardcontextmenu_callback = cb; }
    inline void setKLineEdit_SetUserSelection_Callback(KLineEdit_SetUserSelection_Callback cb) { klineedit_setuserselection_callback = cb; }
    inline void setKLineEdit_AutoSuggest_Callback(KLineEdit_AutoSuggest_Callback cb) { klineedit_autosuggest_callback = cb; }
    inline void setKLineEdit_CursorRect_Callback(KLineEdit_CursorRect_Callback cb) { klineedit_cursorrect_callback = cb; }
    inline void setKLineEdit_UpdateMicroFocus_Callback(KLineEdit_UpdateMicroFocus_Callback cb) { klineedit_updatemicrofocus_callback = cb; }
    inline void setKLineEdit_Create_Callback(KLineEdit_Create_Callback cb) { klineedit_create_callback = cb; }
    inline void setKLineEdit_Destroy_Callback(KLineEdit_Destroy_Callback cb) { klineedit_destroy_callback = cb; }
    inline void setKLineEdit_FocusNextChild_Callback(KLineEdit_FocusNextChild_Callback cb) { klineedit_focusnextchild_callback = cb; }
    inline void setKLineEdit_FocusPreviousChild_Callback(KLineEdit_FocusPreviousChild_Callback cb) { klineedit_focuspreviouschild_callback = cb; }
    inline void setKLineEdit_Sender_Callback(KLineEdit_Sender_Callback cb) { klineedit_sender_callback = cb; }
    inline void setKLineEdit_SenderSignalIndex_Callback(KLineEdit_SenderSignalIndex_Callback cb) { klineedit_sendersignalindex_callback = cb; }
    inline void setKLineEdit_Receivers_Callback(KLineEdit_Receivers_Callback cb) { klineedit_receivers_callback = cb; }
    inline void setKLineEdit_IsSignalConnected_Callback(KLineEdit_IsSignalConnected_Callback cb) { klineedit_issignalconnected_callback = cb; }
    inline void setKLineEdit_GetDecodedMetricF_Callback(KLineEdit_GetDecodedMetricF_Callback cb) { klineedit_getdecodedmetricf_callback = cb; }
    inline void setKLineEdit_KeyBindingMap_Callback(KLineEdit_KeyBindingMap_Callback cb) { klineedit_keybindingmap_callback = cb; }
    inline void setKLineEdit_SetKeyBindingMap_Callback(KLineEdit_SetKeyBindingMap_Callback cb) { klineedit_setkeybindingmap_callback = cb; }
    inline void setKLineEdit_SetDelegate_Callback(KLineEdit_SetDelegate_Callback cb) { klineedit_setdelegate_callback = cb; }
    inline void setKLineEdit_Delegate_Callback(KLineEdit_Delegate_Callback cb) { klineedit_delegate_callback = cb; }

    // Base flag setters
    inline void setKLineEdit_Metacall_IsBase(bool value) const { klineedit_metacall_isbase = value; }
    inline void setKLineEdit_SetCompletionMode_IsBase(bool value) const { klineedit_setcompletionmode_isbase = value; }
    inline void setKLineEdit_CompletionBox_IsBase(bool value) const { klineedit_completionbox_isbase = value; }
    inline void setKLineEdit_SetCompletionObject_IsBase(bool value) const { klineedit_setcompletionobject_isbase = value; }
    inline void setKLineEdit_Copy_IsBase(bool value) const { klineedit_copy_isbase = value; }
    inline void setKLineEdit_SetReadOnly_IsBase(bool value) const { klineedit_setreadonly_isbase = value; }
    inline void setKLineEdit_SetCompletedText_IsBase(bool value) const { klineedit_setcompletedtext_isbase = value; }
    inline void setKLineEdit_SetCompletedItems_IsBase(bool value) const { klineedit_setcompleteditems_isbase = value; }
    inline void setKLineEdit_SetText_IsBase(bool value) const { klineedit_settext_isbase = value; }
    inline void setKLineEdit_MakeCompletion_IsBase(bool value) const { klineedit_makecompletion_isbase = value; }
    inline void setKLineEdit_Event_IsBase(bool value) const { klineedit_event_isbase = value; }
    inline void setKLineEdit_ResizeEvent_IsBase(bool value) const { klineedit_resizeevent_isbase = value; }
    inline void setKLineEdit_KeyPressEvent_IsBase(bool value) const { klineedit_keypressevent_isbase = value; }
    inline void setKLineEdit_MousePressEvent_IsBase(bool value) const { klineedit_mousepressevent_isbase = value; }
    inline void setKLineEdit_MouseReleaseEvent_IsBase(bool value) const { klineedit_mousereleaseevent_isbase = value; }
    inline void setKLineEdit_MouseDoubleClickEvent_IsBase(bool value) const { klineedit_mousedoubleclickevent_isbase = value; }
    inline void setKLineEdit_ContextMenuEvent_IsBase(bool value) const { klineedit_contextmenuevent_isbase = value; }
    inline void setKLineEdit_SetCompletedText2_IsBase(bool value) const { klineedit_setcompletedtext2_isbase = value; }
    inline void setKLineEdit_PaintEvent_IsBase(bool value) const { klineedit_paintevent_isbase = value; }
    inline void setKLineEdit_SizeHint_IsBase(bool value) const { klineedit_sizehint_isbase = value; }
    inline void setKLineEdit_MinimumSizeHint_IsBase(bool value) const { klineedit_minimumsizehint_isbase = value; }
    inline void setKLineEdit_MouseMoveEvent_IsBase(bool value) const { klineedit_mousemoveevent_isbase = value; }
    inline void setKLineEdit_KeyReleaseEvent_IsBase(bool value) const { klineedit_keyreleaseevent_isbase = value; }
    inline void setKLineEdit_FocusInEvent_IsBase(bool value) const { klineedit_focusinevent_isbase = value; }
    inline void setKLineEdit_FocusOutEvent_IsBase(bool value) const { klineedit_focusoutevent_isbase = value; }
    inline void setKLineEdit_DragEnterEvent_IsBase(bool value) const { klineedit_dragenterevent_isbase = value; }
    inline void setKLineEdit_DragMoveEvent_IsBase(bool value) const { klineedit_dragmoveevent_isbase = value; }
    inline void setKLineEdit_DragLeaveEvent_IsBase(bool value) const { klineedit_dragleaveevent_isbase = value; }
    inline void setKLineEdit_DropEvent_IsBase(bool value) const { klineedit_dropevent_isbase = value; }
    inline void setKLineEdit_ChangeEvent_IsBase(bool value) const { klineedit_changeevent_isbase = value; }
    inline void setKLineEdit_InputMethodEvent_IsBase(bool value) const { klineedit_inputmethodevent_isbase = value; }
    inline void setKLineEdit_InitStyleOption_IsBase(bool value) const { klineedit_initstyleoption_isbase = value; }
    inline void setKLineEdit_InputMethodQuery_IsBase(bool value) const { klineedit_inputmethodquery_isbase = value; }
    inline void setKLineEdit_TimerEvent_IsBase(bool value) const { klineedit_timerevent_isbase = value; }
    inline void setKLineEdit_DevType_IsBase(bool value) const { klineedit_devtype_isbase = value; }
    inline void setKLineEdit_SetVisible_IsBase(bool value) const { klineedit_setvisible_isbase = value; }
    inline void setKLineEdit_HeightForWidth_IsBase(bool value) const { klineedit_heightforwidth_isbase = value; }
    inline void setKLineEdit_HasHeightForWidth_IsBase(bool value) const { klineedit_hasheightforwidth_isbase = value; }
    inline void setKLineEdit_PaintEngine_IsBase(bool value) const { klineedit_paintengine_isbase = value; }
    inline void setKLineEdit_WheelEvent_IsBase(bool value) const { klineedit_wheelevent_isbase = value; }
    inline void setKLineEdit_EnterEvent_IsBase(bool value) const { klineedit_enterevent_isbase = value; }
    inline void setKLineEdit_LeaveEvent_IsBase(bool value) const { klineedit_leaveevent_isbase = value; }
    inline void setKLineEdit_MoveEvent_IsBase(bool value) const { klineedit_moveevent_isbase = value; }
    inline void setKLineEdit_CloseEvent_IsBase(bool value) const { klineedit_closeevent_isbase = value; }
    inline void setKLineEdit_TabletEvent_IsBase(bool value) const { klineedit_tabletevent_isbase = value; }
    inline void setKLineEdit_ActionEvent_IsBase(bool value) const { klineedit_actionevent_isbase = value; }
    inline void setKLineEdit_ShowEvent_IsBase(bool value) const { klineedit_showevent_isbase = value; }
    inline void setKLineEdit_HideEvent_IsBase(bool value) const { klineedit_hideevent_isbase = value; }
    inline void setKLineEdit_NativeEvent_IsBase(bool value) const { klineedit_nativeevent_isbase = value; }
    inline void setKLineEdit_Metric_IsBase(bool value) const { klineedit_metric_isbase = value; }
    inline void setKLineEdit_InitPainter_IsBase(bool value) const { klineedit_initpainter_isbase = value; }
    inline void setKLineEdit_Redirected_IsBase(bool value) const { klineedit_redirected_isbase = value; }
    inline void setKLineEdit_SharedPainter_IsBase(bool value) const { klineedit_sharedpainter_isbase = value; }
    inline void setKLineEdit_FocusNextPrevChild_IsBase(bool value) const { klineedit_focusnextprevchild_isbase = value; }
    inline void setKLineEdit_EventFilter_IsBase(bool value) const { klineedit_eventfilter_isbase = value; }
    inline void setKLineEdit_ChildEvent_IsBase(bool value) const { klineedit_childevent_isbase = value; }
    inline void setKLineEdit_CustomEvent_IsBase(bool value) const { klineedit_customevent_isbase = value; }
    inline void setKLineEdit_ConnectNotify_IsBase(bool value) const { klineedit_connectnotify_isbase = value; }
    inline void setKLineEdit_DisconnectNotify_IsBase(bool value) const { klineedit_disconnectnotify_isbase = value; }
    inline void setKLineEdit_SetHandleSignals_IsBase(bool value) const { klineedit_sethandlesignals_isbase = value; }
    inline void setKLineEdit_VirtualHook_IsBase(bool value) const { klineedit_virtualhook_isbase = value; }
    inline void setKLineEdit_UserCancelled_IsBase(bool value) const { klineedit_usercancelled_isbase = value; }
    inline void setKLineEdit_CreateStandardContextMenu_IsBase(bool value) const { klineedit_createstandardcontextmenu_isbase = value; }
    inline void setKLineEdit_SetUserSelection_IsBase(bool value) const { klineedit_setuserselection_isbase = value; }
    inline void setKLineEdit_AutoSuggest_IsBase(bool value) const { klineedit_autosuggest_isbase = value; }
    inline void setKLineEdit_CursorRect_IsBase(bool value) const { klineedit_cursorrect_isbase = value; }
    inline void setKLineEdit_UpdateMicroFocus_IsBase(bool value) const { klineedit_updatemicrofocus_isbase = value; }
    inline void setKLineEdit_Create_IsBase(bool value) const { klineedit_create_isbase = value; }
    inline void setKLineEdit_Destroy_IsBase(bool value) const { klineedit_destroy_isbase = value; }
    inline void setKLineEdit_FocusNextChild_IsBase(bool value) const { klineedit_focusnextchild_isbase = value; }
    inline void setKLineEdit_FocusPreviousChild_IsBase(bool value) const { klineedit_focuspreviouschild_isbase = value; }
    inline void setKLineEdit_Sender_IsBase(bool value) const { klineedit_sender_isbase = value; }
    inline void setKLineEdit_SenderSignalIndex_IsBase(bool value) const { klineedit_sendersignalindex_isbase = value; }
    inline void setKLineEdit_Receivers_IsBase(bool value) const { klineedit_receivers_isbase = value; }
    inline void setKLineEdit_IsSignalConnected_IsBase(bool value) const { klineedit_issignalconnected_isbase = value; }
    inline void setKLineEdit_GetDecodedMetricF_IsBase(bool value) const { klineedit_getdecodedmetricf_isbase = value; }
    inline void setKLineEdit_KeyBindingMap_IsBase(bool value) const { klineedit_keybindingmap_isbase = value; }
    inline void setKLineEdit_SetKeyBindingMap_IsBase(bool value) const { klineedit_setkeybindingmap_isbase = value; }
    inline void setKLineEdit_SetDelegate_IsBase(bool value) const { klineedit_setdelegate_isbase = value; }
    inline void setKLineEdit_Delegate_IsBase(bool value) const { klineedit_delegate_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (klineedit_metacall_isbase) {
            klineedit_metacall_isbase = false;
            return KLineEdit::qt_metacall(param1, param2, param3);
        } else if (klineedit_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = klineedit_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KLineEdit::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionMode(KCompletion::CompletionMode mode) override {
        if (klineedit_setcompletionmode_isbase) {
            klineedit_setcompletionmode_isbase = false;
            KLineEdit::setCompletionMode(mode);
        } else if (klineedit_setcompletionmode_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            klineedit_setcompletionmode_callback(this, cbval1);
        } else {
            KLineEdit::setCompletionMode(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KCompletionBox* completionBox(bool create) override {
        if (klineedit_completionbox_isbase) {
            klineedit_completionbox_isbase = false;
            return KLineEdit::completionBox(create);
        } else if (klineedit_completionbox_callback != nullptr) {
            bool cbval1 = create;

            KCompletionBox* callback_ret = klineedit_completionbox_callback(this, cbval1);
            return callback_ret;
        } else {
            return KLineEdit::completionBox(create);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionObject(KCompletion* param1, bool handle) override {
        if (klineedit_setcompletionobject_isbase) {
            klineedit_setcompletionobject_isbase = false;
            KLineEdit::setCompletionObject(param1, handle);
        } else if (klineedit_setcompletionobject_callback != nullptr) {
            KCompletion* cbval1 = param1;
            bool cbval2 = handle;

            klineedit_setcompletionobject_callback(this, cbval1, cbval2);
        } else {
            KLineEdit::setCompletionObject(param1, handle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void copy() const override {
        if (klineedit_copy_isbase) {
            klineedit_copy_isbase = false;
            KLineEdit::copy();
        } else if (klineedit_copy_callback != nullptr) {
            klineedit_copy_callback();
        } else {
            KLineEdit::copy();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadOnly(bool readOnly) override {
        if (klineedit_setreadonly_isbase) {
            klineedit_setreadonly_isbase = false;
            KLineEdit::setReadOnly(readOnly);
        } else if (klineedit_setreadonly_callback != nullptr) {
            bool cbval1 = readOnly;

            klineedit_setreadonly_callback(this, cbval1);
        } else {
            KLineEdit::setReadOnly(readOnly);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedText(const QString& completedText) override {
        if (klineedit_setcompletedtext_isbase) {
            klineedit_setcompletedtext_isbase = false;
            KLineEdit::setCompletedText(completedText);
        } else if (klineedit_setcompletedtext_callback != nullptr) {
            const QString completedText_ret = completedText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray completedText_b = completedText_ret.toUtf8();
            libqt_string completedText_str;
            completedText_str.len = completedText_b.length();
            completedText_str.data = static_cast<const char*>(malloc(completedText_str.len + 1));
            memcpy((void*)completedText_str.data, completedText_b.data(), completedText_str.len);
            ((char*)completedText_str.data)[completedText_str.len] = '\0';
            libqt_string cbval1 = completedText_str;

            klineedit_setcompletedtext_callback(this, cbval1);
        } else {
            KLineEdit::setCompletedText(completedText);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedItems(const QList<QString>& items, bool autoSuggest) override {
        if (klineedit_setcompleteditems_isbase) {
            klineedit_setcompleteditems_isbase = false;
            KLineEdit::setCompletedItems(items, autoSuggest);
        } else if (klineedit_setcompleteditems_callback != nullptr) {
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

            klineedit_setcompleteditems_callback(this, cbval1, cbval2);
        } else {
            KLineEdit::setCompletedItems(items, autoSuggest);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setText(const QString& text) override {
        if (klineedit_settext_isbase) {
            klineedit_settext_isbase = false;
            KLineEdit::setText(text);
        } else if (klineedit_settext_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            klineedit_settext_callback(this, cbval1);
        } else {
            KLineEdit::setText(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void makeCompletion(const QString& param1) override {
        if (klineedit_makecompletion_isbase) {
            klineedit_makecompletion_isbase = false;
            KLineEdit::makeCompletion(param1);
        } else if (klineedit_makecompletion_callback != nullptr) {
            const QString param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            libqt_string param1_str;
            param1_str.len = param1_b.length();
            param1_str.data = static_cast<const char*>(malloc(param1_str.len + 1));
            memcpy((void*)param1_str.data, param1_b.data(), param1_str.len);
            ((char*)param1_str.data)[param1_str.len] = '\0';
            libqt_string cbval1 = param1_str;

            klineedit_makecompletion_callback(this, cbval1);
        } else {
            KLineEdit::makeCompletion(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (klineedit_event_isbase) {
            klineedit_event_isbase = false;
            return KLineEdit::event(param1);
        } else if (klineedit_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = klineedit_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KLineEdit::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (klineedit_resizeevent_isbase) {
            klineedit_resizeevent_isbase = false;
            KLineEdit::resizeEvent(param1);
        } else if (klineedit_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            klineedit_resizeevent_callback(this, cbval1);
        } else {
            KLineEdit::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (klineedit_keypressevent_isbase) {
            klineedit_keypressevent_isbase = false;
            KLineEdit::keyPressEvent(param1);
        } else if (klineedit_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            klineedit_keypressevent_callback(this, cbval1);
        } else {
            KLineEdit::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (klineedit_mousepressevent_isbase) {
            klineedit_mousepressevent_isbase = false;
            KLineEdit::mousePressEvent(param1);
        } else if (klineedit_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            klineedit_mousepressevent_callback(this, cbval1);
        } else {
            KLineEdit::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (klineedit_mousereleaseevent_isbase) {
            klineedit_mousereleaseevent_isbase = false;
            KLineEdit::mouseReleaseEvent(param1);
        } else if (klineedit_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            klineedit_mousereleaseevent_callback(this, cbval1);
        } else {
            KLineEdit::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (klineedit_mousedoubleclickevent_isbase) {
            klineedit_mousedoubleclickevent_isbase = false;
            KLineEdit::mouseDoubleClickEvent(param1);
        } else if (klineedit_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            klineedit_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KLineEdit::mouseDoubleClickEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (klineedit_contextmenuevent_isbase) {
            klineedit_contextmenuevent_isbase = false;
            KLineEdit::contextMenuEvent(param1);
        } else if (klineedit_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            klineedit_contextmenuevent_callback(this, cbval1);
        } else {
            KLineEdit::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletedText(const QString& param1, bool param2) override {
        if (klineedit_setcompletedtext2_isbase) {
            klineedit_setcompletedtext2_isbase = false;
            KLineEdit::setCompletedText(param1, param2);
        } else if (klineedit_setcompletedtext2_callback != nullptr) {
            const QString param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            libqt_string param1_str;
            param1_str.len = param1_b.length();
            param1_str.data = static_cast<const char*>(malloc(param1_str.len + 1));
            memcpy((void*)param1_str.data, param1_b.data(), param1_str.len);
            ((char*)param1_str.data)[param1_str.len] = '\0';
            libqt_string cbval1 = param1_str;
            bool cbval2 = param2;

            klineedit_setcompletedtext2_callback(this, cbval1, cbval2);
        } else {
            KLineEdit::setCompletedText(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* ev) override {
        if (klineedit_paintevent_isbase) {
            klineedit_paintevent_isbase = false;
            KLineEdit::paintEvent(ev);
        } else if (klineedit_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = ev;

            klineedit_paintevent_callback(this, cbval1);
        } else {
            KLineEdit::paintEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (klineedit_sizehint_isbase) {
            klineedit_sizehint_isbase = false;
            return KLineEdit::sizeHint();
        } else if (klineedit_sizehint_callback != nullptr) {
            QSize* callback_ret = klineedit_sizehint_callback();
            return *callback_ret;
        } else {
            return KLineEdit::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (klineedit_minimumsizehint_isbase) {
            klineedit_minimumsizehint_isbase = false;
            return KLineEdit::minimumSizeHint();
        } else if (klineedit_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = klineedit_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KLineEdit::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (klineedit_mousemoveevent_isbase) {
            klineedit_mousemoveevent_isbase = false;
            KLineEdit::mouseMoveEvent(param1);
        } else if (klineedit_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            klineedit_mousemoveevent_callback(this, cbval1);
        } else {
            KLineEdit::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (klineedit_keyreleaseevent_isbase) {
            klineedit_keyreleaseevent_isbase = false;
            KLineEdit::keyReleaseEvent(param1);
        } else if (klineedit_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            klineedit_keyreleaseevent_callback(this, cbval1);
        } else {
            KLineEdit::keyReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (klineedit_focusinevent_isbase) {
            klineedit_focusinevent_isbase = false;
            KLineEdit::focusInEvent(param1);
        } else if (klineedit_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            klineedit_focusinevent_callback(this, cbval1);
        } else {
            KLineEdit::focusInEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (klineedit_focusoutevent_isbase) {
            klineedit_focusoutevent_isbase = false;
            KLineEdit::focusOutEvent(param1);
        } else if (klineedit_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = param1;

            klineedit_focusoutevent_callback(this, cbval1);
        } else {
            KLineEdit::focusOutEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (klineedit_dragenterevent_isbase) {
            klineedit_dragenterevent_isbase = false;
            KLineEdit::dragEnterEvent(param1);
        } else if (klineedit_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = param1;

            klineedit_dragenterevent_callback(this, cbval1);
        } else {
            KLineEdit::dragEnterEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (klineedit_dragmoveevent_isbase) {
            klineedit_dragmoveevent_isbase = false;
            KLineEdit::dragMoveEvent(e);
        } else if (klineedit_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = e;

            klineedit_dragmoveevent_callback(this, cbval1);
        } else {
            KLineEdit::dragMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (klineedit_dragleaveevent_isbase) {
            klineedit_dragleaveevent_isbase = false;
            KLineEdit::dragLeaveEvent(e);
        } else if (klineedit_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = e;

            klineedit_dragleaveevent_callback(this, cbval1);
        } else {
            KLineEdit::dragLeaveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (klineedit_dropevent_isbase) {
            klineedit_dropevent_isbase = false;
            KLineEdit::dropEvent(param1);
        } else if (klineedit_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = param1;

            klineedit_dropevent_callback(this, cbval1);
        } else {
            KLineEdit::dropEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (klineedit_changeevent_isbase) {
            klineedit_changeevent_isbase = false;
            KLineEdit::changeEvent(param1);
        } else if (klineedit_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            klineedit_changeevent_callback(this, cbval1);
        } else {
            KLineEdit::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (klineedit_inputmethodevent_isbase) {
            klineedit_inputmethodevent_isbase = false;
            KLineEdit::inputMethodEvent(param1);
        } else if (klineedit_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            klineedit_inputmethodevent_callback(this, cbval1);
        } else {
            KLineEdit::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (klineedit_initstyleoption_isbase) {
            klineedit_initstyleoption_isbase = false;
            KLineEdit::initStyleOption(option);
        } else if (klineedit_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            klineedit_initstyleoption_callback(this, cbval1);
        } else {
            KLineEdit::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (klineedit_inputmethodquery_isbase) {
            klineedit_inputmethodquery_isbase = false;
            return KLineEdit::inputMethodQuery(param1);
        } else if (klineedit_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = klineedit_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KLineEdit::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (klineedit_timerevent_isbase) {
            klineedit_timerevent_isbase = false;
            KLineEdit::timerEvent(param1);
        } else if (klineedit_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = param1;

            klineedit_timerevent_callback(this, cbval1);
        } else {
            KLineEdit::timerEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (klineedit_devtype_isbase) {
            klineedit_devtype_isbase = false;
            return KLineEdit::devType();
        } else if (klineedit_devtype_callback != nullptr) {
            int callback_ret = klineedit_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KLineEdit::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (klineedit_setvisible_isbase) {
            klineedit_setvisible_isbase = false;
            KLineEdit::setVisible(visible);
        } else if (klineedit_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            klineedit_setvisible_callback(this, cbval1);
        } else {
            KLineEdit::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (klineedit_heightforwidth_isbase) {
            klineedit_heightforwidth_isbase = false;
            return KLineEdit::heightForWidth(param1);
        } else if (klineedit_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = klineedit_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KLineEdit::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (klineedit_hasheightforwidth_isbase) {
            klineedit_hasheightforwidth_isbase = false;
            return KLineEdit::hasHeightForWidth();
        } else if (klineedit_hasheightforwidth_callback != nullptr) {
            bool callback_ret = klineedit_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KLineEdit::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (klineedit_paintengine_isbase) {
            klineedit_paintengine_isbase = false;
            return KLineEdit::paintEngine();
        } else if (klineedit_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = klineedit_paintengine_callback();
            return callback_ret;
        } else {
            return KLineEdit::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (klineedit_wheelevent_isbase) {
            klineedit_wheelevent_isbase = false;
            KLineEdit::wheelEvent(event);
        } else if (klineedit_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            klineedit_wheelevent_callback(this, cbval1);
        } else {
            KLineEdit::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (klineedit_enterevent_isbase) {
            klineedit_enterevent_isbase = false;
            KLineEdit::enterEvent(event);
        } else if (klineedit_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            klineedit_enterevent_callback(this, cbval1);
        } else {
            KLineEdit::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (klineedit_leaveevent_isbase) {
            klineedit_leaveevent_isbase = false;
            KLineEdit::leaveEvent(event);
        } else if (klineedit_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            klineedit_leaveevent_callback(this, cbval1);
        } else {
            KLineEdit::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (klineedit_moveevent_isbase) {
            klineedit_moveevent_isbase = false;
            KLineEdit::moveEvent(event);
        } else if (klineedit_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            klineedit_moveevent_callback(this, cbval1);
        } else {
            KLineEdit::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (klineedit_closeevent_isbase) {
            klineedit_closeevent_isbase = false;
            KLineEdit::closeEvent(event);
        } else if (klineedit_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            klineedit_closeevent_callback(this, cbval1);
        } else {
            KLineEdit::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (klineedit_tabletevent_isbase) {
            klineedit_tabletevent_isbase = false;
            KLineEdit::tabletEvent(event);
        } else if (klineedit_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            klineedit_tabletevent_callback(this, cbval1);
        } else {
            KLineEdit::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (klineedit_actionevent_isbase) {
            klineedit_actionevent_isbase = false;
            KLineEdit::actionEvent(event);
        } else if (klineedit_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            klineedit_actionevent_callback(this, cbval1);
        } else {
            KLineEdit::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (klineedit_showevent_isbase) {
            klineedit_showevent_isbase = false;
            KLineEdit::showEvent(event);
        } else if (klineedit_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            klineedit_showevent_callback(this, cbval1);
        } else {
            KLineEdit::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (klineedit_hideevent_isbase) {
            klineedit_hideevent_isbase = false;
            KLineEdit::hideEvent(event);
        } else if (klineedit_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            klineedit_hideevent_callback(this, cbval1);
        } else {
            KLineEdit::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (klineedit_nativeevent_isbase) {
            klineedit_nativeevent_isbase = false;
            return KLineEdit::nativeEvent(eventType, message, result);
        } else if (klineedit_nativeevent_callback != nullptr) {
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

            bool callback_ret = klineedit_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KLineEdit::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (klineedit_metric_isbase) {
            klineedit_metric_isbase = false;
            return KLineEdit::metric(param1);
        } else if (klineedit_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = klineedit_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KLineEdit::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (klineedit_initpainter_isbase) {
            klineedit_initpainter_isbase = false;
            KLineEdit::initPainter(painter);
        } else if (klineedit_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            klineedit_initpainter_callback(this, cbval1);
        } else {
            KLineEdit::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (klineedit_redirected_isbase) {
            klineedit_redirected_isbase = false;
            return KLineEdit::redirected(offset);
        } else if (klineedit_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = klineedit_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KLineEdit::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (klineedit_sharedpainter_isbase) {
            klineedit_sharedpainter_isbase = false;
            return KLineEdit::sharedPainter();
        } else if (klineedit_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = klineedit_sharedpainter_callback();
            return callback_ret;
        } else {
            return KLineEdit::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (klineedit_focusnextprevchild_isbase) {
            klineedit_focusnextprevchild_isbase = false;
            return KLineEdit::focusNextPrevChild(next);
        } else if (klineedit_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = klineedit_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KLineEdit::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (klineedit_eventfilter_isbase) {
            klineedit_eventfilter_isbase = false;
            return KLineEdit::eventFilter(watched, event);
        } else if (klineedit_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = klineedit_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KLineEdit::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (klineedit_childevent_isbase) {
            klineedit_childevent_isbase = false;
            KLineEdit::childEvent(event);
        } else if (klineedit_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            klineedit_childevent_callback(this, cbval1);
        } else {
            KLineEdit::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (klineedit_customevent_isbase) {
            klineedit_customevent_isbase = false;
            KLineEdit::customEvent(event);
        } else if (klineedit_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            klineedit_customevent_callback(this, cbval1);
        } else {
            KLineEdit::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (klineedit_connectnotify_isbase) {
            klineedit_connectnotify_isbase = false;
            KLineEdit::connectNotify(signal);
        } else if (klineedit_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            klineedit_connectnotify_callback(this, cbval1);
        } else {
            KLineEdit::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (klineedit_disconnectnotify_isbase) {
            klineedit_disconnectnotify_isbase = false;
            KLineEdit::disconnectNotify(signal);
        } else if (klineedit_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            klineedit_disconnectnotify_callback(this, cbval1);
        } else {
            KLineEdit::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHandleSignals(bool handle) override {
        if (klineedit_sethandlesignals_isbase) {
            klineedit_sethandlesignals_isbase = false;
            KLineEdit::setHandleSignals(handle);
        } else if (klineedit_sethandlesignals_callback != nullptr) {
            bool cbval1 = handle;

            klineedit_sethandlesignals_callback(this, cbval1);
        } else {
            KLineEdit::setHandleSignals(handle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (klineedit_virtualhook_isbase) {
            klineedit_virtualhook_isbase = false;
            KLineEdit::virtual_hook(id, data);
        } else if (klineedit_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            klineedit_virtualhook_callback(this, cbval1, cbval2);
        } else {
            KLineEdit::virtual_hook(id, data);
        }
    }

    // Virtual method for C ABI access and custom callback
    void userCancelled(const QString& cancelText) {
        if (klineedit_usercancelled_isbase) {
            klineedit_usercancelled_isbase = false;
            KLineEdit::userCancelled(cancelText);
        } else if (klineedit_usercancelled_callback != nullptr) {
            const QString cancelText_ret = cancelText;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray cancelText_b = cancelText_ret.toUtf8();
            libqt_string cancelText_str;
            cancelText_str.len = cancelText_b.length();
            cancelText_str.data = static_cast<const char*>(malloc(cancelText_str.len + 1));
            memcpy((void*)cancelText_str.data, cancelText_b.data(), cancelText_str.len);
            ((char*)cancelText_str.data)[cancelText_str.len] = '\0';
            libqt_string cbval1 = cancelText_str;

            klineedit_usercancelled_callback(this, cbval1);
        } else {
            KLineEdit::userCancelled(cancelText);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMenu* createStandardContextMenu() {
        if (klineedit_createstandardcontextmenu_isbase) {
            klineedit_createstandardcontextmenu_isbase = false;
            return KLineEdit::createStandardContextMenu();
        } else if (klineedit_createstandardcontextmenu_callback != nullptr) {
            QMenu* callback_ret = klineedit_createstandardcontextmenu_callback();
            return callback_ret;
        } else {
            return KLineEdit::createStandardContextMenu();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setUserSelection(bool userSelection) {
        if (klineedit_setuserselection_isbase) {
            klineedit_setuserselection_isbase = false;
            KLineEdit::setUserSelection(userSelection);
        } else if (klineedit_setuserselection_callback != nullptr) {
            bool cbval1 = userSelection;

            klineedit_setuserselection_callback(this, cbval1);
        } else {
            KLineEdit::setUserSelection(userSelection);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool autoSuggest() const {
        if (klineedit_autosuggest_isbase) {
            klineedit_autosuggest_isbase = false;
            return KLineEdit::autoSuggest();
        } else if (klineedit_autosuggest_callback != nullptr) {
            bool callback_ret = klineedit_autosuggest_callback();
            return callback_ret;
        } else {
            return KLineEdit::autoSuggest();
        }
    }

    // Virtual method for C ABI access and custom callback
    QRect cursorRect() const {
        if (klineedit_cursorrect_isbase) {
            klineedit_cursorrect_isbase = false;
            return KLineEdit::cursorRect();
        } else if (klineedit_cursorrect_callback != nullptr) {
            QRect* callback_ret = klineedit_cursorrect_callback();
            return *callback_ret;
        } else {
            return KLineEdit::cursorRect();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (klineedit_updatemicrofocus_isbase) {
            klineedit_updatemicrofocus_isbase = false;
            KLineEdit::updateMicroFocus();
        } else if (klineedit_updatemicrofocus_callback != nullptr) {
            klineedit_updatemicrofocus_callback();
        } else {
            KLineEdit::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (klineedit_create_isbase) {
            klineedit_create_isbase = false;
            KLineEdit::create();
        } else if (klineedit_create_callback != nullptr) {
            klineedit_create_callback();
        } else {
            KLineEdit::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (klineedit_destroy_isbase) {
            klineedit_destroy_isbase = false;
            KLineEdit::destroy();
        } else if (klineedit_destroy_callback != nullptr) {
            klineedit_destroy_callback();
        } else {
            KLineEdit::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (klineedit_focusnextchild_isbase) {
            klineedit_focusnextchild_isbase = false;
            return KLineEdit::focusNextChild();
        } else if (klineedit_focusnextchild_callback != nullptr) {
            bool callback_ret = klineedit_focusnextchild_callback();
            return callback_ret;
        } else {
            return KLineEdit::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (klineedit_focuspreviouschild_isbase) {
            klineedit_focuspreviouschild_isbase = false;
            return KLineEdit::focusPreviousChild();
        } else if (klineedit_focuspreviouschild_callback != nullptr) {
            bool callback_ret = klineedit_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KLineEdit::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (klineedit_sender_isbase) {
            klineedit_sender_isbase = false;
            return KLineEdit::sender();
        } else if (klineedit_sender_callback != nullptr) {
            QObject* callback_ret = klineedit_sender_callback();
            return callback_ret;
        } else {
            return KLineEdit::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (klineedit_sendersignalindex_isbase) {
            klineedit_sendersignalindex_isbase = false;
            return KLineEdit::senderSignalIndex();
        } else if (klineedit_sendersignalindex_callback != nullptr) {
            int callback_ret = klineedit_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KLineEdit::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (klineedit_receivers_isbase) {
            klineedit_receivers_isbase = false;
            return KLineEdit::receivers(signal);
        } else if (klineedit_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = klineedit_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KLineEdit::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (klineedit_issignalconnected_isbase) {
            klineedit_issignalconnected_isbase = false;
            return KLineEdit::isSignalConnected(signal);
        } else if (klineedit_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = klineedit_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KLineEdit::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (klineedit_getdecodedmetricf_isbase) {
            klineedit_getdecodedmetricf_isbase = false;
            return KLineEdit::getDecodedMetricF(metricA, metricB);
        } else if (klineedit_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = klineedit_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KLineEdit::getDecodedMetricF(metricA, metricB);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> keyBindingMap() const {
        if (klineedit_keybindingmap_isbase) {
            klineedit_keybindingmap_isbase = false;
            return KLineEdit::keyBindingMap();
        } else if (klineedit_keybindingmap_callback != nullptr) {
            libqt_map /* of int to libqt_list  of QKeySequence*  */ callback_ret = klineedit_keybindingmap_callback();
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
            return KLineEdit::keyBindingMap();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setKeyBindingMap(QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> keyBindingMap) {
        if (klineedit_setkeybindingmap_isbase) {
            klineedit_setkeybindingmap_isbase = false;
            KLineEdit::setKeyBindingMap(keyBindingMap);
        } else if (klineedit_setkeybindingmap_callback != nullptr) {
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

            klineedit_setkeybindingmap_callback(this, cbval1);
        } else {
            KLineEdit::setKeyBindingMap(keyBindingMap);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDelegate(KCompletionBase* delegate) {
        if (klineedit_setdelegate_isbase) {
            klineedit_setdelegate_isbase = false;
            KLineEdit::setDelegate(delegate);
        } else if (klineedit_setdelegate_callback != nullptr) {
            KCompletionBase* cbval1 = delegate;

            klineedit_setdelegate_callback(this, cbval1);
        } else {
            KLineEdit::setDelegate(delegate);
        }
    }

    // Virtual method for C ABI access and custom callback
    KCompletionBase* delegate() const {
        if (klineedit_delegate_isbase) {
            klineedit_delegate_isbase = false;
            return KLineEdit::delegate();
        } else if (klineedit_delegate_callback != nullptr) {
            KCompletionBase* callback_ret = klineedit_delegate_callback();
            return callback_ret;
        } else {
            return KLineEdit::delegate();
        }
    }

    // Friend functions
    friend void KLineEdit_MakeCompletion(KLineEdit* self, const libqt_string param1);
    friend void KLineEdit_QBaseMakeCompletion(KLineEdit* self, const libqt_string param1);
    friend bool KLineEdit_Event(KLineEdit* self, QEvent* param1);
    friend bool KLineEdit_QBaseEvent(KLineEdit* self, QEvent* param1);
    friend void KLineEdit_ResizeEvent(KLineEdit* self, QResizeEvent* param1);
    friend void KLineEdit_QBaseResizeEvent(KLineEdit* self, QResizeEvent* param1);
    friend void KLineEdit_KeyPressEvent(KLineEdit* self, QKeyEvent* param1);
    friend void KLineEdit_QBaseKeyPressEvent(KLineEdit* self, QKeyEvent* param1);
    friend void KLineEdit_MousePressEvent(KLineEdit* self, QMouseEvent* param1);
    friend void KLineEdit_QBaseMousePressEvent(KLineEdit* self, QMouseEvent* param1);
    friend void KLineEdit_MouseReleaseEvent(KLineEdit* self, QMouseEvent* param1);
    friend void KLineEdit_QBaseMouseReleaseEvent(KLineEdit* self, QMouseEvent* param1);
    friend void KLineEdit_MouseDoubleClickEvent(KLineEdit* self, QMouseEvent* param1);
    friend void KLineEdit_QBaseMouseDoubleClickEvent(KLineEdit* self, QMouseEvent* param1);
    friend void KLineEdit_ContextMenuEvent(KLineEdit* self, QContextMenuEvent* param1);
    friend void KLineEdit_QBaseContextMenuEvent(KLineEdit* self, QContextMenuEvent* param1);
    friend void KLineEdit_SetCompletedText2(KLineEdit* self, const libqt_string param1, bool param2);
    friend void KLineEdit_QBaseSetCompletedText2(KLineEdit* self, const libqt_string param1, bool param2);
    friend void KLineEdit_PaintEvent(KLineEdit* self, QPaintEvent* ev);
    friend void KLineEdit_QBasePaintEvent(KLineEdit* self, QPaintEvent* ev);
    friend void KLineEdit_MouseMoveEvent(KLineEdit* self, QMouseEvent* param1);
    friend void KLineEdit_QBaseMouseMoveEvent(KLineEdit* self, QMouseEvent* param1);
    friend void KLineEdit_KeyReleaseEvent(KLineEdit* self, QKeyEvent* param1);
    friend void KLineEdit_QBaseKeyReleaseEvent(KLineEdit* self, QKeyEvent* param1);
    friend void KLineEdit_FocusInEvent(KLineEdit* self, QFocusEvent* param1);
    friend void KLineEdit_QBaseFocusInEvent(KLineEdit* self, QFocusEvent* param1);
    friend void KLineEdit_FocusOutEvent(KLineEdit* self, QFocusEvent* param1);
    friend void KLineEdit_QBaseFocusOutEvent(KLineEdit* self, QFocusEvent* param1);
    friend void KLineEdit_DragEnterEvent(KLineEdit* self, QDragEnterEvent* param1);
    friend void KLineEdit_QBaseDragEnterEvent(KLineEdit* self, QDragEnterEvent* param1);
    friend void KLineEdit_DragMoveEvent(KLineEdit* self, QDragMoveEvent* e);
    friend void KLineEdit_QBaseDragMoveEvent(KLineEdit* self, QDragMoveEvent* e);
    friend void KLineEdit_DragLeaveEvent(KLineEdit* self, QDragLeaveEvent* e);
    friend void KLineEdit_QBaseDragLeaveEvent(KLineEdit* self, QDragLeaveEvent* e);
    friend void KLineEdit_DropEvent(KLineEdit* self, QDropEvent* param1);
    friend void KLineEdit_QBaseDropEvent(KLineEdit* self, QDropEvent* param1);
    friend void KLineEdit_ChangeEvent(KLineEdit* self, QEvent* param1);
    friend void KLineEdit_QBaseChangeEvent(KLineEdit* self, QEvent* param1);
    friend void KLineEdit_InputMethodEvent(KLineEdit* self, QInputMethodEvent* param1);
    friend void KLineEdit_QBaseInputMethodEvent(KLineEdit* self, QInputMethodEvent* param1);
    friend void KLineEdit_InitStyleOption(const KLineEdit* self, QStyleOptionFrame* option);
    friend void KLineEdit_QBaseInitStyleOption(const KLineEdit* self, QStyleOptionFrame* option);
    friend void KLineEdit_WheelEvent(KLineEdit* self, QWheelEvent* event);
    friend void KLineEdit_QBaseWheelEvent(KLineEdit* self, QWheelEvent* event);
    friend void KLineEdit_EnterEvent(KLineEdit* self, QEnterEvent* event);
    friend void KLineEdit_QBaseEnterEvent(KLineEdit* self, QEnterEvent* event);
    friend void KLineEdit_LeaveEvent(KLineEdit* self, QEvent* event);
    friend void KLineEdit_QBaseLeaveEvent(KLineEdit* self, QEvent* event);
    friend void KLineEdit_MoveEvent(KLineEdit* self, QMoveEvent* event);
    friend void KLineEdit_QBaseMoveEvent(KLineEdit* self, QMoveEvent* event);
    friend void KLineEdit_CloseEvent(KLineEdit* self, QCloseEvent* event);
    friend void KLineEdit_QBaseCloseEvent(KLineEdit* self, QCloseEvent* event);
    friend void KLineEdit_TabletEvent(KLineEdit* self, QTabletEvent* event);
    friend void KLineEdit_QBaseTabletEvent(KLineEdit* self, QTabletEvent* event);
    friend void KLineEdit_ActionEvent(KLineEdit* self, QActionEvent* event);
    friend void KLineEdit_QBaseActionEvent(KLineEdit* self, QActionEvent* event);
    friend void KLineEdit_ShowEvent(KLineEdit* self, QShowEvent* event);
    friend void KLineEdit_QBaseShowEvent(KLineEdit* self, QShowEvent* event);
    friend void KLineEdit_HideEvent(KLineEdit* self, QHideEvent* event);
    friend void KLineEdit_QBaseHideEvent(KLineEdit* self, QHideEvent* event);
    friend bool KLineEdit_NativeEvent(KLineEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KLineEdit_QBaseNativeEvent(KLineEdit* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KLineEdit_Metric(const KLineEdit* self, int param1);
    friend int KLineEdit_QBaseMetric(const KLineEdit* self, int param1);
    friend void KLineEdit_InitPainter(const KLineEdit* self, QPainter* painter);
    friend void KLineEdit_QBaseInitPainter(const KLineEdit* self, QPainter* painter);
    friend QPaintDevice* KLineEdit_Redirected(const KLineEdit* self, QPoint* offset);
    friend QPaintDevice* KLineEdit_QBaseRedirected(const KLineEdit* self, QPoint* offset);
    friend QPainter* KLineEdit_SharedPainter(const KLineEdit* self);
    friend QPainter* KLineEdit_QBaseSharedPainter(const KLineEdit* self);
    friend bool KLineEdit_FocusNextPrevChild(KLineEdit* self, bool next);
    friend bool KLineEdit_QBaseFocusNextPrevChild(KLineEdit* self, bool next);
    friend void KLineEdit_ChildEvent(KLineEdit* self, QChildEvent* event);
    friend void KLineEdit_QBaseChildEvent(KLineEdit* self, QChildEvent* event);
    friend void KLineEdit_CustomEvent(KLineEdit* self, QEvent* event);
    friend void KLineEdit_QBaseCustomEvent(KLineEdit* self, QEvent* event);
    friend void KLineEdit_ConnectNotify(KLineEdit* self, const QMetaMethod* signal);
    friend void KLineEdit_QBaseConnectNotify(KLineEdit* self, const QMetaMethod* signal);
    friend void KLineEdit_DisconnectNotify(KLineEdit* self, const QMetaMethod* signal);
    friend void KLineEdit_QBaseDisconnectNotify(KLineEdit* self, const QMetaMethod* signal);
    friend void KLineEdit_VirtualHook(KLineEdit* self, int id, void* data);
    friend void KLineEdit_QBaseVirtualHook(KLineEdit* self, int id, void* data);
    friend void KLineEdit_UserCancelled(KLineEdit* self, const libqt_string cancelText);
    friend void KLineEdit_QBaseUserCancelled(KLineEdit* self, const libqt_string cancelText);
    friend QMenu* KLineEdit_CreateStandardContextMenu(KLineEdit* self);
    friend QMenu* KLineEdit_QBaseCreateStandardContextMenu(KLineEdit* self);
    friend void KLineEdit_SetUserSelection(KLineEdit* self, bool userSelection);
    friend void KLineEdit_QBaseSetUserSelection(KLineEdit* self, bool userSelection);
    friend bool KLineEdit_AutoSuggest(const KLineEdit* self);
    friend bool KLineEdit_QBaseAutoSuggest(const KLineEdit* self);
    friend QRect* KLineEdit_CursorRect(const KLineEdit* self);
    friend QRect* KLineEdit_QBaseCursorRect(const KLineEdit* self);
    friend void KLineEdit_UpdateMicroFocus(KLineEdit* self);
    friend void KLineEdit_QBaseUpdateMicroFocus(KLineEdit* self);
    friend void KLineEdit_Create(KLineEdit* self);
    friend void KLineEdit_QBaseCreate(KLineEdit* self);
    friend void KLineEdit_Destroy(KLineEdit* self);
    friend void KLineEdit_QBaseDestroy(KLineEdit* self);
    friend bool KLineEdit_FocusNextChild(KLineEdit* self);
    friend bool KLineEdit_QBaseFocusNextChild(KLineEdit* self);
    friend bool KLineEdit_FocusPreviousChild(KLineEdit* self);
    friend bool KLineEdit_QBaseFocusPreviousChild(KLineEdit* self);
    friend QObject* KLineEdit_Sender(const KLineEdit* self);
    friend QObject* KLineEdit_QBaseSender(const KLineEdit* self);
    friend int KLineEdit_SenderSignalIndex(const KLineEdit* self);
    friend int KLineEdit_QBaseSenderSignalIndex(const KLineEdit* self);
    friend int KLineEdit_Receivers(const KLineEdit* self, const char* signal);
    friend int KLineEdit_QBaseReceivers(const KLineEdit* self, const char* signal);
    friend bool KLineEdit_IsSignalConnected(const KLineEdit* self, const QMetaMethod* signal);
    friend bool KLineEdit_QBaseIsSignalConnected(const KLineEdit* self, const QMetaMethod* signal);
    friend double KLineEdit_GetDecodedMetricF(const KLineEdit* self, int metricA, int metricB);
    friend double KLineEdit_QBaseGetDecodedMetricF(const KLineEdit* self, int metricA, int metricB);
    friend libqt_map /* of int to libqt_list  of QKeySequence*  */ KLineEdit_KeyBindingMap(const KLineEdit* self);
    friend libqt_map /* of int to libqt_list  of QKeySequence*  */ KLineEdit_QBaseKeyBindingMap(const KLineEdit* self);
    friend void KLineEdit_SetKeyBindingMap(KLineEdit* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap);
    friend void KLineEdit_QBaseSetKeyBindingMap(KLineEdit* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap);
    friend void KLineEdit_SetDelegate(KLineEdit* self, KCompletionBase* delegate);
    friend void KLineEdit_QBaseSetDelegate(KLineEdit* self, KCompletionBase* delegate);
    friend KCompletionBase* KLineEdit_Delegate(const KLineEdit* self);
    friend KCompletionBase* KLineEdit_QBaseDelegate(const KLineEdit* self);
};

#endif
