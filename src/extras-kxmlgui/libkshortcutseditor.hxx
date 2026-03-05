#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKSHORTCUTSEDITOR_H
#define SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKSHORTCUTSEDITOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KShortcutsEditor so that we can call protected methods
class VirtualKShortcutsEditor final : public KShortcutsEditor {

  public:
    // Virtual class boolean flag
    bool isVirtualKShortcutsEditor = true;

    // Virtual class public types (including callbacks)
    using KShortcutsEditor_MetaObject_Callback = QMetaObject* (*)();
    using KShortcutsEditor_Metacast_Callback = void* (*)(KShortcutsEditor*, const char*);
    using KShortcutsEditor_Metacall_Callback = int (*)(KShortcutsEditor*, int, int, void**);
    using KShortcutsEditor_DevType_Callback = int (*)();
    using KShortcutsEditor_SetVisible_Callback = void (*)(KShortcutsEditor*, bool);
    using KShortcutsEditor_SizeHint_Callback = QSize* (*)();
    using KShortcutsEditor_MinimumSizeHint_Callback = QSize* (*)();
    using KShortcutsEditor_HeightForWidth_Callback = int (*)(const KShortcutsEditor*, int);
    using KShortcutsEditor_HasHeightForWidth_Callback = bool (*)();
    using KShortcutsEditor_PaintEngine_Callback = QPaintEngine* (*)();
    using KShortcutsEditor_Event_Callback = bool (*)(KShortcutsEditor*, QEvent*);
    using KShortcutsEditor_MousePressEvent_Callback = void (*)(KShortcutsEditor*, QMouseEvent*);
    using KShortcutsEditor_MouseReleaseEvent_Callback = void (*)(KShortcutsEditor*, QMouseEvent*);
    using KShortcutsEditor_MouseDoubleClickEvent_Callback = void (*)(KShortcutsEditor*, QMouseEvent*);
    using KShortcutsEditor_MouseMoveEvent_Callback = void (*)(KShortcutsEditor*, QMouseEvent*);
    using KShortcutsEditor_WheelEvent_Callback = void (*)(KShortcutsEditor*, QWheelEvent*);
    using KShortcutsEditor_KeyPressEvent_Callback = void (*)(KShortcutsEditor*, QKeyEvent*);
    using KShortcutsEditor_KeyReleaseEvent_Callback = void (*)(KShortcutsEditor*, QKeyEvent*);
    using KShortcutsEditor_FocusInEvent_Callback = void (*)(KShortcutsEditor*, QFocusEvent*);
    using KShortcutsEditor_FocusOutEvent_Callback = void (*)(KShortcutsEditor*, QFocusEvent*);
    using KShortcutsEditor_EnterEvent_Callback = void (*)(KShortcutsEditor*, QEnterEvent*);
    using KShortcutsEditor_LeaveEvent_Callback = void (*)(KShortcutsEditor*, QEvent*);
    using KShortcutsEditor_PaintEvent_Callback = void (*)(KShortcutsEditor*, QPaintEvent*);
    using KShortcutsEditor_MoveEvent_Callback = void (*)(KShortcutsEditor*, QMoveEvent*);
    using KShortcutsEditor_ResizeEvent_Callback = void (*)(KShortcutsEditor*, QResizeEvent*);
    using KShortcutsEditor_CloseEvent_Callback = void (*)(KShortcutsEditor*, QCloseEvent*);
    using KShortcutsEditor_ContextMenuEvent_Callback = void (*)(KShortcutsEditor*, QContextMenuEvent*);
    using KShortcutsEditor_TabletEvent_Callback = void (*)(KShortcutsEditor*, QTabletEvent*);
    using KShortcutsEditor_ActionEvent_Callback = void (*)(KShortcutsEditor*, QActionEvent*);
    using KShortcutsEditor_DragEnterEvent_Callback = void (*)(KShortcutsEditor*, QDragEnterEvent*);
    using KShortcutsEditor_DragMoveEvent_Callback = void (*)(KShortcutsEditor*, QDragMoveEvent*);
    using KShortcutsEditor_DragLeaveEvent_Callback = void (*)(KShortcutsEditor*, QDragLeaveEvent*);
    using KShortcutsEditor_DropEvent_Callback = void (*)(KShortcutsEditor*, QDropEvent*);
    using KShortcutsEditor_ShowEvent_Callback = void (*)(KShortcutsEditor*, QShowEvent*);
    using KShortcutsEditor_HideEvent_Callback = void (*)(KShortcutsEditor*, QHideEvent*);
    using KShortcutsEditor_NativeEvent_Callback = bool (*)(KShortcutsEditor*, libqt_string, void*, intptr_t*);
    using KShortcutsEditor_ChangeEvent_Callback = void (*)(KShortcutsEditor*, QEvent*);
    using KShortcutsEditor_Metric_Callback = int (*)(const KShortcutsEditor*, int);
    using KShortcutsEditor_InitPainter_Callback = void (*)(const KShortcutsEditor*, QPainter*);
    using KShortcutsEditor_Redirected_Callback = QPaintDevice* (*)(const KShortcutsEditor*, QPoint*);
    using KShortcutsEditor_SharedPainter_Callback = QPainter* (*)();
    using KShortcutsEditor_InputMethodEvent_Callback = void (*)(KShortcutsEditor*, QInputMethodEvent*);
    using KShortcutsEditor_InputMethodQuery_Callback = QVariant* (*)(const KShortcutsEditor*, int);
    using KShortcutsEditor_FocusNextPrevChild_Callback = bool (*)(KShortcutsEditor*, bool);
    using KShortcutsEditor_EventFilter_Callback = bool (*)(KShortcutsEditor*, QObject*, QEvent*);
    using KShortcutsEditor_TimerEvent_Callback = void (*)(KShortcutsEditor*, QTimerEvent*);
    using KShortcutsEditor_ChildEvent_Callback = void (*)(KShortcutsEditor*, QChildEvent*);
    using KShortcutsEditor_CustomEvent_Callback = void (*)(KShortcutsEditor*, QEvent*);
    using KShortcutsEditor_ConnectNotify_Callback = void (*)(KShortcutsEditor*, QMetaMethod*);
    using KShortcutsEditor_DisconnectNotify_Callback = void (*)(KShortcutsEditor*, QMetaMethod*);
    using KShortcutsEditor_UpdateMicroFocus_Callback = void (*)();
    using KShortcutsEditor_Create_Callback = void (*)();
    using KShortcutsEditor_Destroy_Callback = void (*)();
    using KShortcutsEditor_FocusNextChild_Callback = bool (*)();
    using KShortcutsEditor_FocusPreviousChild_Callback = bool (*)();
    using KShortcutsEditor_Sender_Callback = QObject* (*)();
    using KShortcutsEditor_SenderSignalIndex_Callback = int (*)();
    using KShortcutsEditor_Receivers_Callback = int (*)(const KShortcutsEditor*, const char*);
    using KShortcutsEditor_IsSignalConnected_Callback = bool (*)(const KShortcutsEditor*, QMetaMethod*);
    using KShortcutsEditor_GetDecodedMetricF_Callback = double (*)(const KShortcutsEditor*, int, int);

  protected:
    // Instance callback storage
    KShortcutsEditor_MetaObject_Callback kshortcutseditor_metaobject_callback = nullptr;
    KShortcutsEditor_Metacast_Callback kshortcutseditor_metacast_callback = nullptr;
    KShortcutsEditor_Metacall_Callback kshortcutseditor_metacall_callback = nullptr;
    KShortcutsEditor_DevType_Callback kshortcutseditor_devtype_callback = nullptr;
    KShortcutsEditor_SetVisible_Callback kshortcutseditor_setvisible_callback = nullptr;
    KShortcutsEditor_SizeHint_Callback kshortcutseditor_sizehint_callback = nullptr;
    KShortcutsEditor_MinimumSizeHint_Callback kshortcutseditor_minimumsizehint_callback = nullptr;
    KShortcutsEditor_HeightForWidth_Callback kshortcutseditor_heightforwidth_callback = nullptr;
    KShortcutsEditor_HasHeightForWidth_Callback kshortcutseditor_hasheightforwidth_callback = nullptr;
    KShortcutsEditor_PaintEngine_Callback kshortcutseditor_paintengine_callback = nullptr;
    KShortcutsEditor_Event_Callback kshortcutseditor_event_callback = nullptr;
    KShortcutsEditor_MousePressEvent_Callback kshortcutseditor_mousepressevent_callback = nullptr;
    KShortcutsEditor_MouseReleaseEvent_Callback kshortcutseditor_mousereleaseevent_callback = nullptr;
    KShortcutsEditor_MouseDoubleClickEvent_Callback kshortcutseditor_mousedoubleclickevent_callback = nullptr;
    KShortcutsEditor_MouseMoveEvent_Callback kshortcutseditor_mousemoveevent_callback = nullptr;
    KShortcutsEditor_WheelEvent_Callback kshortcutseditor_wheelevent_callback = nullptr;
    KShortcutsEditor_KeyPressEvent_Callback kshortcutseditor_keypressevent_callback = nullptr;
    KShortcutsEditor_KeyReleaseEvent_Callback kshortcutseditor_keyreleaseevent_callback = nullptr;
    KShortcutsEditor_FocusInEvent_Callback kshortcutseditor_focusinevent_callback = nullptr;
    KShortcutsEditor_FocusOutEvent_Callback kshortcutseditor_focusoutevent_callback = nullptr;
    KShortcutsEditor_EnterEvent_Callback kshortcutseditor_enterevent_callback = nullptr;
    KShortcutsEditor_LeaveEvent_Callback kshortcutseditor_leaveevent_callback = nullptr;
    KShortcutsEditor_PaintEvent_Callback kshortcutseditor_paintevent_callback = nullptr;
    KShortcutsEditor_MoveEvent_Callback kshortcutseditor_moveevent_callback = nullptr;
    KShortcutsEditor_ResizeEvent_Callback kshortcutseditor_resizeevent_callback = nullptr;
    KShortcutsEditor_CloseEvent_Callback kshortcutseditor_closeevent_callback = nullptr;
    KShortcutsEditor_ContextMenuEvent_Callback kshortcutseditor_contextmenuevent_callback = nullptr;
    KShortcutsEditor_TabletEvent_Callback kshortcutseditor_tabletevent_callback = nullptr;
    KShortcutsEditor_ActionEvent_Callback kshortcutseditor_actionevent_callback = nullptr;
    KShortcutsEditor_DragEnterEvent_Callback kshortcutseditor_dragenterevent_callback = nullptr;
    KShortcutsEditor_DragMoveEvent_Callback kshortcutseditor_dragmoveevent_callback = nullptr;
    KShortcutsEditor_DragLeaveEvent_Callback kshortcutseditor_dragleaveevent_callback = nullptr;
    KShortcutsEditor_DropEvent_Callback kshortcutseditor_dropevent_callback = nullptr;
    KShortcutsEditor_ShowEvent_Callback kshortcutseditor_showevent_callback = nullptr;
    KShortcutsEditor_HideEvent_Callback kshortcutseditor_hideevent_callback = nullptr;
    KShortcutsEditor_NativeEvent_Callback kshortcutseditor_nativeevent_callback = nullptr;
    KShortcutsEditor_ChangeEvent_Callback kshortcutseditor_changeevent_callback = nullptr;
    KShortcutsEditor_Metric_Callback kshortcutseditor_metric_callback = nullptr;
    KShortcutsEditor_InitPainter_Callback kshortcutseditor_initpainter_callback = nullptr;
    KShortcutsEditor_Redirected_Callback kshortcutseditor_redirected_callback = nullptr;
    KShortcutsEditor_SharedPainter_Callback kshortcutseditor_sharedpainter_callback = nullptr;
    KShortcutsEditor_InputMethodEvent_Callback kshortcutseditor_inputmethodevent_callback = nullptr;
    KShortcutsEditor_InputMethodQuery_Callback kshortcutseditor_inputmethodquery_callback = nullptr;
    KShortcutsEditor_FocusNextPrevChild_Callback kshortcutseditor_focusnextprevchild_callback = nullptr;
    KShortcutsEditor_EventFilter_Callback kshortcutseditor_eventfilter_callback = nullptr;
    KShortcutsEditor_TimerEvent_Callback kshortcutseditor_timerevent_callback = nullptr;
    KShortcutsEditor_ChildEvent_Callback kshortcutseditor_childevent_callback = nullptr;
    KShortcutsEditor_CustomEvent_Callback kshortcutseditor_customevent_callback = nullptr;
    KShortcutsEditor_ConnectNotify_Callback kshortcutseditor_connectnotify_callback = nullptr;
    KShortcutsEditor_DisconnectNotify_Callback kshortcutseditor_disconnectnotify_callback = nullptr;
    KShortcutsEditor_UpdateMicroFocus_Callback kshortcutseditor_updatemicrofocus_callback = nullptr;
    KShortcutsEditor_Create_Callback kshortcutseditor_create_callback = nullptr;
    KShortcutsEditor_Destroy_Callback kshortcutseditor_destroy_callback = nullptr;
    KShortcutsEditor_FocusNextChild_Callback kshortcutseditor_focusnextchild_callback = nullptr;
    KShortcutsEditor_FocusPreviousChild_Callback kshortcutseditor_focuspreviouschild_callback = nullptr;
    KShortcutsEditor_Sender_Callback kshortcutseditor_sender_callback = nullptr;
    KShortcutsEditor_SenderSignalIndex_Callback kshortcutseditor_sendersignalindex_callback = nullptr;
    KShortcutsEditor_Receivers_Callback kshortcutseditor_receivers_callback = nullptr;
    KShortcutsEditor_IsSignalConnected_Callback kshortcutseditor_issignalconnected_callback = nullptr;
    KShortcutsEditor_GetDecodedMetricF_Callback kshortcutseditor_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kshortcutseditor_metaobject_isbase = false;
    mutable bool kshortcutseditor_metacast_isbase = false;
    mutable bool kshortcutseditor_metacall_isbase = false;
    mutable bool kshortcutseditor_devtype_isbase = false;
    mutable bool kshortcutseditor_setvisible_isbase = false;
    mutable bool kshortcutseditor_sizehint_isbase = false;
    mutable bool kshortcutseditor_minimumsizehint_isbase = false;
    mutable bool kshortcutseditor_heightforwidth_isbase = false;
    mutable bool kshortcutseditor_hasheightforwidth_isbase = false;
    mutable bool kshortcutseditor_paintengine_isbase = false;
    mutable bool kshortcutseditor_event_isbase = false;
    mutable bool kshortcutseditor_mousepressevent_isbase = false;
    mutable bool kshortcutseditor_mousereleaseevent_isbase = false;
    mutable bool kshortcutseditor_mousedoubleclickevent_isbase = false;
    mutable bool kshortcutseditor_mousemoveevent_isbase = false;
    mutable bool kshortcutseditor_wheelevent_isbase = false;
    mutable bool kshortcutseditor_keypressevent_isbase = false;
    mutable bool kshortcutseditor_keyreleaseevent_isbase = false;
    mutable bool kshortcutseditor_focusinevent_isbase = false;
    mutable bool kshortcutseditor_focusoutevent_isbase = false;
    mutable bool kshortcutseditor_enterevent_isbase = false;
    mutable bool kshortcutseditor_leaveevent_isbase = false;
    mutable bool kshortcutseditor_paintevent_isbase = false;
    mutable bool kshortcutseditor_moveevent_isbase = false;
    mutable bool kshortcutseditor_resizeevent_isbase = false;
    mutable bool kshortcutseditor_closeevent_isbase = false;
    mutable bool kshortcutseditor_contextmenuevent_isbase = false;
    mutable bool kshortcutseditor_tabletevent_isbase = false;
    mutable bool kshortcutseditor_actionevent_isbase = false;
    mutable bool kshortcutseditor_dragenterevent_isbase = false;
    mutable bool kshortcutseditor_dragmoveevent_isbase = false;
    mutable bool kshortcutseditor_dragleaveevent_isbase = false;
    mutable bool kshortcutseditor_dropevent_isbase = false;
    mutable bool kshortcutseditor_showevent_isbase = false;
    mutable bool kshortcutseditor_hideevent_isbase = false;
    mutable bool kshortcutseditor_nativeevent_isbase = false;
    mutable bool kshortcutseditor_changeevent_isbase = false;
    mutable bool kshortcutseditor_metric_isbase = false;
    mutable bool kshortcutseditor_initpainter_isbase = false;
    mutable bool kshortcutseditor_redirected_isbase = false;
    mutable bool kshortcutseditor_sharedpainter_isbase = false;
    mutable bool kshortcutseditor_inputmethodevent_isbase = false;
    mutable bool kshortcutseditor_inputmethodquery_isbase = false;
    mutable bool kshortcutseditor_focusnextprevchild_isbase = false;
    mutable bool kshortcutseditor_eventfilter_isbase = false;
    mutable bool kshortcutseditor_timerevent_isbase = false;
    mutable bool kshortcutseditor_childevent_isbase = false;
    mutable bool kshortcutseditor_customevent_isbase = false;
    mutable bool kshortcutseditor_connectnotify_isbase = false;
    mutable bool kshortcutseditor_disconnectnotify_isbase = false;
    mutable bool kshortcutseditor_updatemicrofocus_isbase = false;
    mutable bool kshortcutseditor_create_isbase = false;
    mutable bool kshortcutseditor_destroy_isbase = false;
    mutable bool kshortcutseditor_focusnextchild_isbase = false;
    mutable bool kshortcutseditor_focuspreviouschild_isbase = false;
    mutable bool kshortcutseditor_sender_isbase = false;
    mutable bool kshortcutseditor_sendersignalindex_isbase = false;
    mutable bool kshortcutseditor_receivers_isbase = false;
    mutable bool kshortcutseditor_issignalconnected_isbase = false;
    mutable bool kshortcutseditor_getdecodedmetricf_isbase = false;

  public:
    VirtualKShortcutsEditor(QWidget* parent) : KShortcutsEditor(parent) {};
    VirtualKShortcutsEditor(KActionCollection* collection, QWidget* parent) : KShortcutsEditor(collection, parent) {};
    VirtualKShortcutsEditor(KActionCollection* collection, QWidget* parent, KShortcutsEditor::ActionTypes actionTypes) : KShortcutsEditor(collection, parent, actionTypes) {};
    VirtualKShortcutsEditor(KActionCollection* collection, QWidget* parent, KShortcutsEditor::ActionTypes actionTypes, KShortcutsEditor::LetterShortcuts allowLetterShortcuts) : KShortcutsEditor(collection, parent, actionTypes, allowLetterShortcuts) {};
    VirtualKShortcutsEditor(QWidget* parent, KShortcutsEditor::ActionTypes actionTypes) : KShortcutsEditor(parent, actionTypes) {};
    VirtualKShortcutsEditor(QWidget* parent, KShortcutsEditor::ActionTypes actionTypes, KShortcutsEditor::LetterShortcuts allowLetterShortcuts) : KShortcutsEditor(parent, actionTypes, allowLetterShortcuts) {};

    // Callback setters
    inline void setKShortcutsEditor_MetaObject_Callback(KShortcutsEditor_MetaObject_Callback cb) { kshortcutseditor_metaobject_callback = cb; }
    inline void setKShortcutsEditor_Metacast_Callback(KShortcutsEditor_Metacast_Callback cb) { kshortcutseditor_metacast_callback = cb; }
    inline void setKShortcutsEditor_Metacall_Callback(KShortcutsEditor_Metacall_Callback cb) { kshortcutseditor_metacall_callback = cb; }
    inline void setKShortcutsEditor_DevType_Callback(KShortcutsEditor_DevType_Callback cb) { kshortcutseditor_devtype_callback = cb; }
    inline void setKShortcutsEditor_SetVisible_Callback(KShortcutsEditor_SetVisible_Callback cb) { kshortcutseditor_setvisible_callback = cb; }
    inline void setKShortcutsEditor_SizeHint_Callback(KShortcutsEditor_SizeHint_Callback cb) { kshortcutseditor_sizehint_callback = cb; }
    inline void setKShortcutsEditor_MinimumSizeHint_Callback(KShortcutsEditor_MinimumSizeHint_Callback cb) { kshortcutseditor_minimumsizehint_callback = cb; }
    inline void setKShortcutsEditor_HeightForWidth_Callback(KShortcutsEditor_HeightForWidth_Callback cb) { kshortcutseditor_heightforwidth_callback = cb; }
    inline void setKShortcutsEditor_HasHeightForWidth_Callback(KShortcutsEditor_HasHeightForWidth_Callback cb) { kshortcutseditor_hasheightforwidth_callback = cb; }
    inline void setKShortcutsEditor_PaintEngine_Callback(KShortcutsEditor_PaintEngine_Callback cb) { kshortcutseditor_paintengine_callback = cb; }
    inline void setKShortcutsEditor_Event_Callback(KShortcutsEditor_Event_Callback cb) { kshortcutseditor_event_callback = cb; }
    inline void setKShortcutsEditor_MousePressEvent_Callback(KShortcutsEditor_MousePressEvent_Callback cb) { kshortcutseditor_mousepressevent_callback = cb; }
    inline void setKShortcutsEditor_MouseReleaseEvent_Callback(KShortcutsEditor_MouseReleaseEvent_Callback cb) { kshortcutseditor_mousereleaseevent_callback = cb; }
    inline void setKShortcutsEditor_MouseDoubleClickEvent_Callback(KShortcutsEditor_MouseDoubleClickEvent_Callback cb) { kshortcutseditor_mousedoubleclickevent_callback = cb; }
    inline void setKShortcutsEditor_MouseMoveEvent_Callback(KShortcutsEditor_MouseMoveEvent_Callback cb) { kshortcutseditor_mousemoveevent_callback = cb; }
    inline void setKShortcutsEditor_WheelEvent_Callback(KShortcutsEditor_WheelEvent_Callback cb) { kshortcutseditor_wheelevent_callback = cb; }
    inline void setKShortcutsEditor_KeyPressEvent_Callback(KShortcutsEditor_KeyPressEvent_Callback cb) { kshortcutseditor_keypressevent_callback = cb; }
    inline void setKShortcutsEditor_KeyReleaseEvent_Callback(KShortcutsEditor_KeyReleaseEvent_Callback cb) { kshortcutseditor_keyreleaseevent_callback = cb; }
    inline void setKShortcutsEditor_FocusInEvent_Callback(KShortcutsEditor_FocusInEvent_Callback cb) { kshortcutseditor_focusinevent_callback = cb; }
    inline void setKShortcutsEditor_FocusOutEvent_Callback(KShortcutsEditor_FocusOutEvent_Callback cb) { kshortcutseditor_focusoutevent_callback = cb; }
    inline void setKShortcutsEditor_EnterEvent_Callback(KShortcutsEditor_EnterEvent_Callback cb) { kshortcutseditor_enterevent_callback = cb; }
    inline void setKShortcutsEditor_LeaveEvent_Callback(KShortcutsEditor_LeaveEvent_Callback cb) { kshortcutseditor_leaveevent_callback = cb; }
    inline void setKShortcutsEditor_PaintEvent_Callback(KShortcutsEditor_PaintEvent_Callback cb) { kshortcutseditor_paintevent_callback = cb; }
    inline void setKShortcutsEditor_MoveEvent_Callback(KShortcutsEditor_MoveEvent_Callback cb) { kshortcutseditor_moveevent_callback = cb; }
    inline void setKShortcutsEditor_ResizeEvent_Callback(KShortcutsEditor_ResizeEvent_Callback cb) { kshortcutseditor_resizeevent_callback = cb; }
    inline void setKShortcutsEditor_CloseEvent_Callback(KShortcutsEditor_CloseEvent_Callback cb) { kshortcutseditor_closeevent_callback = cb; }
    inline void setKShortcutsEditor_ContextMenuEvent_Callback(KShortcutsEditor_ContextMenuEvent_Callback cb) { kshortcutseditor_contextmenuevent_callback = cb; }
    inline void setKShortcutsEditor_TabletEvent_Callback(KShortcutsEditor_TabletEvent_Callback cb) { kshortcutseditor_tabletevent_callback = cb; }
    inline void setKShortcutsEditor_ActionEvent_Callback(KShortcutsEditor_ActionEvent_Callback cb) { kshortcutseditor_actionevent_callback = cb; }
    inline void setKShortcutsEditor_DragEnterEvent_Callback(KShortcutsEditor_DragEnterEvent_Callback cb) { kshortcutseditor_dragenterevent_callback = cb; }
    inline void setKShortcutsEditor_DragMoveEvent_Callback(KShortcutsEditor_DragMoveEvent_Callback cb) { kshortcutseditor_dragmoveevent_callback = cb; }
    inline void setKShortcutsEditor_DragLeaveEvent_Callback(KShortcutsEditor_DragLeaveEvent_Callback cb) { kshortcutseditor_dragleaveevent_callback = cb; }
    inline void setKShortcutsEditor_DropEvent_Callback(KShortcutsEditor_DropEvent_Callback cb) { kshortcutseditor_dropevent_callback = cb; }
    inline void setKShortcutsEditor_ShowEvent_Callback(KShortcutsEditor_ShowEvent_Callback cb) { kshortcutseditor_showevent_callback = cb; }
    inline void setKShortcutsEditor_HideEvent_Callback(KShortcutsEditor_HideEvent_Callback cb) { kshortcutseditor_hideevent_callback = cb; }
    inline void setKShortcutsEditor_NativeEvent_Callback(KShortcutsEditor_NativeEvent_Callback cb) { kshortcutseditor_nativeevent_callback = cb; }
    inline void setKShortcutsEditor_ChangeEvent_Callback(KShortcutsEditor_ChangeEvent_Callback cb) { kshortcutseditor_changeevent_callback = cb; }
    inline void setKShortcutsEditor_Metric_Callback(KShortcutsEditor_Metric_Callback cb) { kshortcutseditor_metric_callback = cb; }
    inline void setKShortcutsEditor_InitPainter_Callback(KShortcutsEditor_InitPainter_Callback cb) { kshortcutseditor_initpainter_callback = cb; }
    inline void setKShortcutsEditor_Redirected_Callback(KShortcutsEditor_Redirected_Callback cb) { kshortcutseditor_redirected_callback = cb; }
    inline void setKShortcutsEditor_SharedPainter_Callback(KShortcutsEditor_SharedPainter_Callback cb) { kshortcutseditor_sharedpainter_callback = cb; }
    inline void setKShortcutsEditor_InputMethodEvent_Callback(KShortcutsEditor_InputMethodEvent_Callback cb) { kshortcutseditor_inputmethodevent_callback = cb; }
    inline void setKShortcutsEditor_InputMethodQuery_Callback(KShortcutsEditor_InputMethodQuery_Callback cb) { kshortcutseditor_inputmethodquery_callback = cb; }
    inline void setKShortcutsEditor_FocusNextPrevChild_Callback(KShortcutsEditor_FocusNextPrevChild_Callback cb) { kshortcutseditor_focusnextprevchild_callback = cb; }
    inline void setKShortcutsEditor_EventFilter_Callback(KShortcutsEditor_EventFilter_Callback cb) { kshortcutseditor_eventfilter_callback = cb; }
    inline void setKShortcutsEditor_TimerEvent_Callback(KShortcutsEditor_TimerEvent_Callback cb) { kshortcutseditor_timerevent_callback = cb; }
    inline void setKShortcutsEditor_ChildEvent_Callback(KShortcutsEditor_ChildEvent_Callback cb) { kshortcutseditor_childevent_callback = cb; }
    inline void setKShortcutsEditor_CustomEvent_Callback(KShortcutsEditor_CustomEvent_Callback cb) { kshortcutseditor_customevent_callback = cb; }
    inline void setKShortcutsEditor_ConnectNotify_Callback(KShortcutsEditor_ConnectNotify_Callback cb) { kshortcutseditor_connectnotify_callback = cb; }
    inline void setKShortcutsEditor_DisconnectNotify_Callback(KShortcutsEditor_DisconnectNotify_Callback cb) { kshortcutseditor_disconnectnotify_callback = cb; }
    inline void setKShortcutsEditor_UpdateMicroFocus_Callback(KShortcutsEditor_UpdateMicroFocus_Callback cb) { kshortcutseditor_updatemicrofocus_callback = cb; }
    inline void setKShortcutsEditor_Create_Callback(KShortcutsEditor_Create_Callback cb) { kshortcutseditor_create_callback = cb; }
    inline void setKShortcutsEditor_Destroy_Callback(KShortcutsEditor_Destroy_Callback cb) { kshortcutseditor_destroy_callback = cb; }
    inline void setKShortcutsEditor_FocusNextChild_Callback(KShortcutsEditor_FocusNextChild_Callback cb) { kshortcutseditor_focusnextchild_callback = cb; }
    inline void setKShortcutsEditor_FocusPreviousChild_Callback(KShortcutsEditor_FocusPreviousChild_Callback cb) { kshortcutseditor_focuspreviouschild_callback = cb; }
    inline void setKShortcutsEditor_Sender_Callback(KShortcutsEditor_Sender_Callback cb) { kshortcutseditor_sender_callback = cb; }
    inline void setKShortcutsEditor_SenderSignalIndex_Callback(KShortcutsEditor_SenderSignalIndex_Callback cb) { kshortcutseditor_sendersignalindex_callback = cb; }
    inline void setKShortcutsEditor_Receivers_Callback(KShortcutsEditor_Receivers_Callback cb) { kshortcutseditor_receivers_callback = cb; }
    inline void setKShortcutsEditor_IsSignalConnected_Callback(KShortcutsEditor_IsSignalConnected_Callback cb) { kshortcutseditor_issignalconnected_callback = cb; }
    inline void setKShortcutsEditor_GetDecodedMetricF_Callback(KShortcutsEditor_GetDecodedMetricF_Callback cb) { kshortcutseditor_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKShortcutsEditor_MetaObject_IsBase(bool value) const { kshortcutseditor_metaobject_isbase = value; }
    inline void setKShortcutsEditor_Metacast_IsBase(bool value) const { kshortcutseditor_metacast_isbase = value; }
    inline void setKShortcutsEditor_Metacall_IsBase(bool value) const { kshortcutseditor_metacall_isbase = value; }
    inline void setKShortcutsEditor_DevType_IsBase(bool value) const { kshortcutseditor_devtype_isbase = value; }
    inline void setKShortcutsEditor_SetVisible_IsBase(bool value) const { kshortcutseditor_setvisible_isbase = value; }
    inline void setKShortcutsEditor_SizeHint_IsBase(bool value) const { kshortcutseditor_sizehint_isbase = value; }
    inline void setKShortcutsEditor_MinimumSizeHint_IsBase(bool value) const { kshortcutseditor_minimumsizehint_isbase = value; }
    inline void setKShortcutsEditor_HeightForWidth_IsBase(bool value) const { kshortcutseditor_heightforwidth_isbase = value; }
    inline void setKShortcutsEditor_HasHeightForWidth_IsBase(bool value) const { kshortcutseditor_hasheightforwidth_isbase = value; }
    inline void setKShortcutsEditor_PaintEngine_IsBase(bool value) const { kshortcutseditor_paintengine_isbase = value; }
    inline void setKShortcutsEditor_Event_IsBase(bool value) const { kshortcutseditor_event_isbase = value; }
    inline void setKShortcutsEditor_MousePressEvent_IsBase(bool value) const { kshortcutseditor_mousepressevent_isbase = value; }
    inline void setKShortcutsEditor_MouseReleaseEvent_IsBase(bool value) const { kshortcutseditor_mousereleaseevent_isbase = value; }
    inline void setKShortcutsEditor_MouseDoubleClickEvent_IsBase(bool value) const { kshortcutseditor_mousedoubleclickevent_isbase = value; }
    inline void setKShortcutsEditor_MouseMoveEvent_IsBase(bool value) const { kshortcutseditor_mousemoveevent_isbase = value; }
    inline void setKShortcutsEditor_WheelEvent_IsBase(bool value) const { kshortcutseditor_wheelevent_isbase = value; }
    inline void setKShortcutsEditor_KeyPressEvent_IsBase(bool value) const { kshortcutseditor_keypressevent_isbase = value; }
    inline void setKShortcutsEditor_KeyReleaseEvent_IsBase(bool value) const { kshortcutseditor_keyreleaseevent_isbase = value; }
    inline void setKShortcutsEditor_FocusInEvent_IsBase(bool value) const { kshortcutseditor_focusinevent_isbase = value; }
    inline void setKShortcutsEditor_FocusOutEvent_IsBase(bool value) const { kshortcutseditor_focusoutevent_isbase = value; }
    inline void setKShortcutsEditor_EnterEvent_IsBase(bool value) const { kshortcutseditor_enterevent_isbase = value; }
    inline void setKShortcutsEditor_LeaveEvent_IsBase(bool value) const { kshortcutseditor_leaveevent_isbase = value; }
    inline void setKShortcutsEditor_PaintEvent_IsBase(bool value) const { kshortcutseditor_paintevent_isbase = value; }
    inline void setKShortcutsEditor_MoveEvent_IsBase(bool value) const { kshortcutseditor_moveevent_isbase = value; }
    inline void setKShortcutsEditor_ResizeEvent_IsBase(bool value) const { kshortcutseditor_resizeevent_isbase = value; }
    inline void setKShortcutsEditor_CloseEvent_IsBase(bool value) const { kshortcutseditor_closeevent_isbase = value; }
    inline void setKShortcutsEditor_ContextMenuEvent_IsBase(bool value) const { kshortcutseditor_contextmenuevent_isbase = value; }
    inline void setKShortcutsEditor_TabletEvent_IsBase(bool value) const { kshortcutseditor_tabletevent_isbase = value; }
    inline void setKShortcutsEditor_ActionEvent_IsBase(bool value) const { kshortcutseditor_actionevent_isbase = value; }
    inline void setKShortcutsEditor_DragEnterEvent_IsBase(bool value) const { kshortcutseditor_dragenterevent_isbase = value; }
    inline void setKShortcutsEditor_DragMoveEvent_IsBase(bool value) const { kshortcutseditor_dragmoveevent_isbase = value; }
    inline void setKShortcutsEditor_DragLeaveEvent_IsBase(bool value) const { kshortcutseditor_dragleaveevent_isbase = value; }
    inline void setKShortcutsEditor_DropEvent_IsBase(bool value) const { kshortcutseditor_dropevent_isbase = value; }
    inline void setKShortcutsEditor_ShowEvent_IsBase(bool value) const { kshortcutseditor_showevent_isbase = value; }
    inline void setKShortcutsEditor_HideEvent_IsBase(bool value) const { kshortcutseditor_hideevent_isbase = value; }
    inline void setKShortcutsEditor_NativeEvent_IsBase(bool value) const { kshortcutseditor_nativeevent_isbase = value; }
    inline void setKShortcutsEditor_ChangeEvent_IsBase(bool value) const { kshortcutseditor_changeevent_isbase = value; }
    inline void setKShortcutsEditor_Metric_IsBase(bool value) const { kshortcutseditor_metric_isbase = value; }
    inline void setKShortcutsEditor_InitPainter_IsBase(bool value) const { kshortcutseditor_initpainter_isbase = value; }
    inline void setKShortcutsEditor_Redirected_IsBase(bool value) const { kshortcutseditor_redirected_isbase = value; }
    inline void setKShortcutsEditor_SharedPainter_IsBase(bool value) const { kshortcutseditor_sharedpainter_isbase = value; }
    inline void setKShortcutsEditor_InputMethodEvent_IsBase(bool value) const { kshortcutseditor_inputmethodevent_isbase = value; }
    inline void setKShortcutsEditor_InputMethodQuery_IsBase(bool value) const { kshortcutseditor_inputmethodquery_isbase = value; }
    inline void setKShortcutsEditor_FocusNextPrevChild_IsBase(bool value) const { kshortcutseditor_focusnextprevchild_isbase = value; }
    inline void setKShortcutsEditor_EventFilter_IsBase(bool value) const { kshortcutseditor_eventfilter_isbase = value; }
    inline void setKShortcutsEditor_TimerEvent_IsBase(bool value) const { kshortcutseditor_timerevent_isbase = value; }
    inline void setKShortcutsEditor_ChildEvent_IsBase(bool value) const { kshortcutseditor_childevent_isbase = value; }
    inline void setKShortcutsEditor_CustomEvent_IsBase(bool value) const { kshortcutseditor_customevent_isbase = value; }
    inline void setKShortcutsEditor_ConnectNotify_IsBase(bool value) const { kshortcutseditor_connectnotify_isbase = value; }
    inline void setKShortcutsEditor_DisconnectNotify_IsBase(bool value) const { kshortcutseditor_disconnectnotify_isbase = value; }
    inline void setKShortcutsEditor_UpdateMicroFocus_IsBase(bool value) const { kshortcutseditor_updatemicrofocus_isbase = value; }
    inline void setKShortcutsEditor_Create_IsBase(bool value) const { kshortcutseditor_create_isbase = value; }
    inline void setKShortcutsEditor_Destroy_IsBase(bool value) const { kshortcutseditor_destroy_isbase = value; }
    inline void setKShortcutsEditor_FocusNextChild_IsBase(bool value) const { kshortcutseditor_focusnextchild_isbase = value; }
    inline void setKShortcutsEditor_FocusPreviousChild_IsBase(bool value) const { kshortcutseditor_focuspreviouschild_isbase = value; }
    inline void setKShortcutsEditor_Sender_IsBase(bool value) const { kshortcutseditor_sender_isbase = value; }
    inline void setKShortcutsEditor_SenderSignalIndex_IsBase(bool value) const { kshortcutseditor_sendersignalindex_isbase = value; }
    inline void setKShortcutsEditor_Receivers_IsBase(bool value) const { kshortcutseditor_receivers_isbase = value; }
    inline void setKShortcutsEditor_IsSignalConnected_IsBase(bool value) const { kshortcutseditor_issignalconnected_isbase = value; }
    inline void setKShortcutsEditor_GetDecodedMetricF_IsBase(bool value) const { kshortcutseditor_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kshortcutseditor_metaobject_isbase) {
            kshortcutseditor_metaobject_isbase = false;
            return KShortcutsEditor::metaObject();
        }
        auto metaobject_cb = kshortcutseditor_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KShortcutsEditor::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kshortcutseditor_metacast_isbase) {
            kshortcutseditor_metacast_isbase = false;
            return KShortcutsEditor::qt_metacast(param1);
        }
        auto metacast_cb = kshortcutseditor_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KShortcutsEditor::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kshortcutseditor_metacall_isbase) {
            kshortcutseditor_metacall_isbase = false;
            return KShortcutsEditor::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kshortcutseditor_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KShortcutsEditor::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kshortcutseditor_devtype_isbase) {
            kshortcutseditor_devtype_isbase = false;
            return KShortcutsEditor::devType();
        }
        auto devtype_cb = kshortcutseditor_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KShortcutsEditor::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kshortcutseditor_setvisible_isbase) {
            kshortcutseditor_setvisible_isbase = false;
            KShortcutsEditor::setVisible(visible);
            return;
        }
        auto setvisible_cb = kshortcutseditor_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kshortcutseditor_sizehint_isbase) {
            kshortcutseditor_sizehint_isbase = false;
            return KShortcutsEditor::sizeHint();
        }
        auto sizehint_cb = kshortcutseditor_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KShortcutsEditor::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kshortcutseditor_minimumsizehint_isbase) {
            kshortcutseditor_minimumsizehint_isbase = false;
            return KShortcutsEditor::minimumSizeHint();
        }
        auto minimumsizehint_cb = kshortcutseditor_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KShortcutsEditor::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kshortcutseditor_heightforwidth_isbase) {
            kshortcutseditor_heightforwidth_isbase = false;
            return KShortcutsEditor::heightForWidth(param1);
        }
        auto heightforwidth_cb = kshortcutseditor_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KShortcutsEditor::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kshortcutseditor_hasheightforwidth_isbase) {
            kshortcutseditor_hasheightforwidth_isbase = false;
            return KShortcutsEditor::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kshortcutseditor_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KShortcutsEditor::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kshortcutseditor_paintengine_isbase) {
            kshortcutseditor_paintengine_isbase = false;
            return KShortcutsEditor::paintEngine();
        }
        auto paintengine_cb = kshortcutseditor_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KShortcutsEditor::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kshortcutseditor_event_isbase) {
            kshortcutseditor_event_isbase = false;
            return KShortcutsEditor::event(event);
        }
        auto event_cb = kshortcutseditor_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KShortcutsEditor::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kshortcutseditor_mousepressevent_isbase) {
            kshortcutseditor_mousepressevent_isbase = false;
            KShortcutsEditor::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kshortcutseditor_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kshortcutseditor_mousereleaseevent_isbase) {
            kshortcutseditor_mousereleaseevent_isbase = false;
            KShortcutsEditor::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kshortcutseditor_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kshortcutseditor_mousedoubleclickevent_isbase) {
            kshortcutseditor_mousedoubleclickevent_isbase = false;
            KShortcutsEditor::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kshortcutseditor_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kshortcutseditor_mousemoveevent_isbase) {
            kshortcutseditor_mousemoveevent_isbase = false;
            KShortcutsEditor::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kshortcutseditor_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kshortcutseditor_wheelevent_isbase) {
            kshortcutseditor_wheelevent_isbase = false;
            KShortcutsEditor::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kshortcutseditor_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kshortcutseditor_keypressevent_isbase) {
            kshortcutseditor_keypressevent_isbase = false;
            KShortcutsEditor::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = kshortcutseditor_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kshortcutseditor_keyreleaseevent_isbase) {
            kshortcutseditor_keyreleaseevent_isbase = false;
            KShortcutsEditor::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kshortcutseditor_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kshortcutseditor_focusinevent_isbase) {
            kshortcutseditor_focusinevent_isbase = false;
            KShortcutsEditor::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kshortcutseditor_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kshortcutseditor_focusoutevent_isbase) {
            kshortcutseditor_focusoutevent_isbase = false;
            KShortcutsEditor::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kshortcutseditor_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kshortcutseditor_enterevent_isbase) {
            kshortcutseditor_enterevent_isbase = false;
            KShortcutsEditor::enterEvent(event);
            return;
        }
        auto enterevent_cb = kshortcutseditor_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kshortcutseditor_leaveevent_isbase) {
            kshortcutseditor_leaveevent_isbase = false;
            KShortcutsEditor::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kshortcutseditor_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kshortcutseditor_paintevent_isbase) {
            kshortcutseditor_paintevent_isbase = false;
            KShortcutsEditor::paintEvent(event);
            return;
        }
        auto paintevent_cb = kshortcutseditor_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kshortcutseditor_moveevent_isbase) {
            kshortcutseditor_moveevent_isbase = false;
            KShortcutsEditor::moveEvent(event);
            return;
        }
        auto moveevent_cb = kshortcutseditor_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kshortcutseditor_resizeevent_isbase) {
            kshortcutseditor_resizeevent_isbase = false;
            KShortcutsEditor::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = kshortcutseditor_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kshortcutseditor_closeevent_isbase) {
            kshortcutseditor_closeevent_isbase = false;
            KShortcutsEditor::closeEvent(event);
            return;
        }
        auto closeevent_cb = kshortcutseditor_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kshortcutseditor_contextmenuevent_isbase) {
            kshortcutseditor_contextmenuevent_isbase = false;
            KShortcutsEditor::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = kshortcutseditor_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kshortcutseditor_tabletevent_isbase) {
            kshortcutseditor_tabletevent_isbase = false;
            KShortcutsEditor::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kshortcutseditor_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kshortcutseditor_actionevent_isbase) {
            kshortcutseditor_actionevent_isbase = false;
            KShortcutsEditor::actionEvent(event);
            return;
        }
        auto actionevent_cb = kshortcutseditor_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kshortcutseditor_dragenterevent_isbase) {
            kshortcutseditor_dragenterevent_isbase = false;
            KShortcutsEditor::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kshortcutseditor_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kshortcutseditor_dragmoveevent_isbase) {
            kshortcutseditor_dragmoveevent_isbase = false;
            KShortcutsEditor::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kshortcutseditor_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kshortcutseditor_dragleaveevent_isbase) {
            kshortcutseditor_dragleaveevent_isbase = false;
            KShortcutsEditor::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kshortcutseditor_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kshortcutseditor_dropevent_isbase) {
            kshortcutseditor_dropevent_isbase = false;
            KShortcutsEditor::dropEvent(event);
            return;
        }
        auto dropevent_cb = kshortcutseditor_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kshortcutseditor_showevent_isbase) {
            kshortcutseditor_showevent_isbase = false;
            KShortcutsEditor::showEvent(event);
            return;
        }
        auto showevent_cb = kshortcutseditor_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kshortcutseditor_hideevent_isbase) {
            kshortcutseditor_hideevent_isbase = false;
            KShortcutsEditor::hideEvent(event);
            return;
        }
        auto hideevent_cb = kshortcutseditor_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kshortcutseditor_nativeevent_isbase) {
            kshortcutseditor_nativeevent_isbase = false;
            return KShortcutsEditor::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kshortcutseditor_nativeevent_callback;
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
        return KShortcutsEditor::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kshortcutseditor_changeevent_isbase) {
            kshortcutseditor_changeevent_isbase = false;
            KShortcutsEditor::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kshortcutseditor_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kshortcutseditor_metric_isbase) {
            kshortcutseditor_metric_isbase = false;
            return KShortcutsEditor::metric(param1);
        }
        auto metric_cb = kshortcutseditor_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KShortcutsEditor::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kshortcutseditor_initpainter_isbase) {
            kshortcutseditor_initpainter_isbase = false;
            KShortcutsEditor::initPainter(painter);
            return;
        }
        auto initpainter_cb = kshortcutseditor_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kshortcutseditor_redirected_isbase) {
            kshortcutseditor_redirected_isbase = false;
            return KShortcutsEditor::redirected(offset);
        }
        auto redirected_cb = kshortcutseditor_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KShortcutsEditor::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kshortcutseditor_sharedpainter_isbase) {
            kshortcutseditor_sharedpainter_isbase = false;
            return KShortcutsEditor::sharedPainter();
        }
        auto sharedpainter_cb = kshortcutseditor_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KShortcutsEditor::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kshortcutseditor_inputmethodevent_isbase) {
            kshortcutseditor_inputmethodevent_isbase = false;
            KShortcutsEditor::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kshortcutseditor_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kshortcutseditor_inputmethodquery_isbase) {
            kshortcutseditor_inputmethodquery_isbase = false;
            return KShortcutsEditor::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kshortcutseditor_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KShortcutsEditor::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kshortcutseditor_focusnextprevchild_isbase) {
            kshortcutseditor_focusnextprevchild_isbase = false;
            return KShortcutsEditor::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kshortcutseditor_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KShortcutsEditor::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kshortcutseditor_eventfilter_isbase) {
            kshortcutseditor_eventfilter_isbase = false;
            return KShortcutsEditor::eventFilter(watched, event);
        }
        auto eventfilter_cb = kshortcutseditor_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KShortcutsEditor::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kshortcutseditor_timerevent_isbase) {
            kshortcutseditor_timerevent_isbase = false;
            KShortcutsEditor::timerEvent(event);
            return;
        }
        auto timerevent_cb = kshortcutseditor_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kshortcutseditor_childevent_isbase) {
            kshortcutseditor_childevent_isbase = false;
            KShortcutsEditor::childEvent(event);
            return;
        }
        auto childevent_cb = kshortcutseditor_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kshortcutseditor_customevent_isbase) {
            kshortcutseditor_customevent_isbase = false;
            KShortcutsEditor::customEvent(event);
            return;
        }
        auto customevent_cb = kshortcutseditor_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kshortcutseditor_connectnotify_isbase) {
            kshortcutseditor_connectnotify_isbase = false;
            KShortcutsEditor::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kshortcutseditor_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kshortcutseditor_disconnectnotify_isbase) {
            kshortcutseditor_disconnectnotify_isbase = false;
            KShortcutsEditor::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kshortcutseditor_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KShortcutsEditor::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kshortcutseditor_updatemicrofocus_isbase) {
            kshortcutseditor_updatemicrofocus_isbase = false;
            KShortcutsEditor::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kshortcutseditor_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KShortcutsEditor::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kshortcutseditor_create_isbase) {
            kshortcutseditor_create_isbase = false;
            KShortcutsEditor::create();
            return;
        }
        auto create_cb = kshortcutseditor_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KShortcutsEditor::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kshortcutseditor_destroy_isbase) {
            kshortcutseditor_destroy_isbase = false;
            KShortcutsEditor::destroy();
            return;
        }
        auto destroy_cb = kshortcutseditor_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KShortcutsEditor::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kshortcutseditor_focusnextchild_isbase) {
            kshortcutseditor_focusnextchild_isbase = false;
            return KShortcutsEditor::focusNextChild();
        }
        auto focusnextchild_cb = kshortcutseditor_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KShortcutsEditor::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kshortcutseditor_focuspreviouschild_isbase) {
            kshortcutseditor_focuspreviouschild_isbase = false;
            return KShortcutsEditor::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kshortcutseditor_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KShortcutsEditor::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kshortcutseditor_sender_isbase) {
            kshortcutseditor_sender_isbase = false;
            return KShortcutsEditor::sender();
        }
        auto sender_cb = kshortcutseditor_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KShortcutsEditor::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kshortcutseditor_sendersignalindex_isbase) {
            kshortcutseditor_sendersignalindex_isbase = false;
            return KShortcutsEditor::senderSignalIndex();
        }
        auto sendersignalindex_cb = kshortcutseditor_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KShortcutsEditor::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kshortcutseditor_receivers_isbase) {
            kshortcutseditor_receivers_isbase = false;
            return KShortcutsEditor::receivers(signal);
        }
        auto receivers_cb = kshortcutseditor_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KShortcutsEditor::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kshortcutseditor_issignalconnected_isbase) {
            kshortcutseditor_issignalconnected_isbase = false;
            return KShortcutsEditor::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kshortcutseditor_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KShortcutsEditor::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kshortcutseditor_getdecodedmetricf_isbase) {
            kshortcutseditor_getdecodedmetricf_isbase = false;
            return KShortcutsEditor::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kshortcutseditor_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KShortcutsEditor::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool KShortcutsEditor_Event(KShortcutsEditor* self, QEvent* event);
    friend bool KShortcutsEditor_SuperEvent(KShortcutsEditor* self, QEvent* event);
    friend void KShortcutsEditor_MousePressEvent(KShortcutsEditor* self, QMouseEvent* event);
    friend void KShortcutsEditor_SuperMousePressEvent(KShortcutsEditor* self, QMouseEvent* event);
    friend void KShortcutsEditor_MouseReleaseEvent(KShortcutsEditor* self, QMouseEvent* event);
    friend void KShortcutsEditor_SuperMouseReleaseEvent(KShortcutsEditor* self, QMouseEvent* event);
    friend void KShortcutsEditor_MouseDoubleClickEvent(KShortcutsEditor* self, QMouseEvent* event);
    friend void KShortcutsEditor_SuperMouseDoubleClickEvent(KShortcutsEditor* self, QMouseEvent* event);
    friend void KShortcutsEditor_MouseMoveEvent(KShortcutsEditor* self, QMouseEvent* event);
    friend void KShortcutsEditor_SuperMouseMoveEvent(KShortcutsEditor* self, QMouseEvent* event);
    friend void KShortcutsEditor_WheelEvent(KShortcutsEditor* self, QWheelEvent* event);
    friend void KShortcutsEditor_SuperWheelEvent(KShortcutsEditor* self, QWheelEvent* event);
    friend void KShortcutsEditor_KeyPressEvent(KShortcutsEditor* self, QKeyEvent* event);
    friend void KShortcutsEditor_SuperKeyPressEvent(KShortcutsEditor* self, QKeyEvent* event);
    friend void KShortcutsEditor_KeyReleaseEvent(KShortcutsEditor* self, QKeyEvent* event);
    friend void KShortcutsEditor_SuperKeyReleaseEvent(KShortcutsEditor* self, QKeyEvent* event);
    friend void KShortcutsEditor_FocusInEvent(KShortcutsEditor* self, QFocusEvent* event);
    friend void KShortcutsEditor_SuperFocusInEvent(KShortcutsEditor* self, QFocusEvent* event);
    friend void KShortcutsEditor_FocusOutEvent(KShortcutsEditor* self, QFocusEvent* event);
    friend void KShortcutsEditor_SuperFocusOutEvent(KShortcutsEditor* self, QFocusEvent* event);
    friend void KShortcutsEditor_EnterEvent(KShortcutsEditor* self, QEnterEvent* event);
    friend void KShortcutsEditor_SuperEnterEvent(KShortcutsEditor* self, QEnterEvent* event);
    friend void KShortcutsEditor_LeaveEvent(KShortcutsEditor* self, QEvent* event);
    friend void KShortcutsEditor_SuperLeaveEvent(KShortcutsEditor* self, QEvent* event);
    friend void KShortcutsEditor_PaintEvent(KShortcutsEditor* self, QPaintEvent* event);
    friend void KShortcutsEditor_SuperPaintEvent(KShortcutsEditor* self, QPaintEvent* event);
    friend void KShortcutsEditor_MoveEvent(KShortcutsEditor* self, QMoveEvent* event);
    friend void KShortcutsEditor_SuperMoveEvent(KShortcutsEditor* self, QMoveEvent* event);
    friend void KShortcutsEditor_ResizeEvent(KShortcutsEditor* self, QResizeEvent* event);
    friend void KShortcutsEditor_SuperResizeEvent(KShortcutsEditor* self, QResizeEvent* event);
    friend void KShortcutsEditor_CloseEvent(KShortcutsEditor* self, QCloseEvent* event);
    friend void KShortcutsEditor_SuperCloseEvent(KShortcutsEditor* self, QCloseEvent* event);
    friend void KShortcutsEditor_ContextMenuEvent(KShortcutsEditor* self, QContextMenuEvent* event);
    friend void KShortcutsEditor_SuperContextMenuEvent(KShortcutsEditor* self, QContextMenuEvent* event);
    friend void KShortcutsEditor_TabletEvent(KShortcutsEditor* self, QTabletEvent* event);
    friend void KShortcutsEditor_SuperTabletEvent(KShortcutsEditor* self, QTabletEvent* event);
    friend void KShortcutsEditor_ActionEvent(KShortcutsEditor* self, QActionEvent* event);
    friend void KShortcutsEditor_SuperActionEvent(KShortcutsEditor* self, QActionEvent* event);
    friend void KShortcutsEditor_DragEnterEvent(KShortcutsEditor* self, QDragEnterEvent* event);
    friend void KShortcutsEditor_SuperDragEnterEvent(KShortcutsEditor* self, QDragEnterEvent* event);
    friend void KShortcutsEditor_DragMoveEvent(KShortcutsEditor* self, QDragMoveEvent* event);
    friend void KShortcutsEditor_SuperDragMoveEvent(KShortcutsEditor* self, QDragMoveEvent* event);
    friend void KShortcutsEditor_DragLeaveEvent(KShortcutsEditor* self, QDragLeaveEvent* event);
    friend void KShortcutsEditor_SuperDragLeaveEvent(KShortcutsEditor* self, QDragLeaveEvent* event);
    friend void KShortcutsEditor_DropEvent(KShortcutsEditor* self, QDropEvent* event);
    friend void KShortcutsEditor_SuperDropEvent(KShortcutsEditor* self, QDropEvent* event);
    friend void KShortcutsEditor_ShowEvent(KShortcutsEditor* self, QShowEvent* event);
    friend void KShortcutsEditor_SuperShowEvent(KShortcutsEditor* self, QShowEvent* event);
    friend void KShortcutsEditor_HideEvent(KShortcutsEditor* self, QHideEvent* event);
    friend void KShortcutsEditor_SuperHideEvent(KShortcutsEditor* self, QHideEvent* event);
    friend bool KShortcutsEditor_NativeEvent(KShortcutsEditor* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KShortcutsEditor_SuperNativeEvent(KShortcutsEditor* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KShortcutsEditor_ChangeEvent(KShortcutsEditor* self, QEvent* param1);
    friend void KShortcutsEditor_SuperChangeEvent(KShortcutsEditor* self, QEvent* param1);
    friend int KShortcutsEditor_Metric(const KShortcutsEditor* self, int param1);
    friend int KShortcutsEditor_SuperMetric(const KShortcutsEditor* self, int param1);
    friend void KShortcutsEditor_InitPainter(const KShortcutsEditor* self, QPainter* painter);
    friend void KShortcutsEditor_SuperInitPainter(const KShortcutsEditor* self, QPainter* painter);
    friend QPaintDevice* KShortcutsEditor_Redirected(const KShortcutsEditor* self, QPoint* offset);
    friend QPaintDevice* KShortcutsEditor_SuperRedirected(const KShortcutsEditor* self, QPoint* offset);
    friend QPainter* KShortcutsEditor_SharedPainter(const KShortcutsEditor* self);
    friend QPainter* KShortcutsEditor_SuperSharedPainter(const KShortcutsEditor* self);
    friend void KShortcutsEditor_InputMethodEvent(KShortcutsEditor* self, QInputMethodEvent* param1);
    friend void KShortcutsEditor_SuperInputMethodEvent(KShortcutsEditor* self, QInputMethodEvent* param1);
    friend bool KShortcutsEditor_FocusNextPrevChild(KShortcutsEditor* self, bool next);
    friend bool KShortcutsEditor_SuperFocusNextPrevChild(KShortcutsEditor* self, bool next);
    friend void KShortcutsEditor_TimerEvent(KShortcutsEditor* self, QTimerEvent* event);
    friend void KShortcutsEditor_SuperTimerEvent(KShortcutsEditor* self, QTimerEvent* event);
    friend void KShortcutsEditor_ChildEvent(KShortcutsEditor* self, QChildEvent* event);
    friend void KShortcutsEditor_SuperChildEvent(KShortcutsEditor* self, QChildEvent* event);
    friend void KShortcutsEditor_CustomEvent(KShortcutsEditor* self, QEvent* event);
    friend void KShortcutsEditor_SuperCustomEvent(KShortcutsEditor* self, QEvent* event);
    friend void KShortcutsEditor_ConnectNotify(KShortcutsEditor* self, const QMetaMethod* signal);
    friend void KShortcutsEditor_SuperConnectNotify(KShortcutsEditor* self, const QMetaMethod* signal);
    friend void KShortcutsEditor_DisconnectNotify(KShortcutsEditor* self, const QMetaMethod* signal);
    friend void KShortcutsEditor_SuperDisconnectNotify(KShortcutsEditor* self, const QMetaMethod* signal);
    friend void KShortcutsEditor_UpdateMicroFocus(KShortcutsEditor* self);
    friend void KShortcutsEditor_SuperUpdateMicroFocus(KShortcutsEditor* self);
    friend void KShortcutsEditor_Create(KShortcutsEditor* self);
    friend void KShortcutsEditor_SuperCreate(KShortcutsEditor* self);
    friend void KShortcutsEditor_Destroy(KShortcutsEditor* self);
    friend void KShortcutsEditor_SuperDestroy(KShortcutsEditor* self);
    friend bool KShortcutsEditor_FocusNextChild(KShortcutsEditor* self);
    friend bool KShortcutsEditor_SuperFocusNextChild(KShortcutsEditor* self);
    friend bool KShortcutsEditor_FocusPreviousChild(KShortcutsEditor* self);
    friend bool KShortcutsEditor_SuperFocusPreviousChild(KShortcutsEditor* self);
    friend QObject* KShortcutsEditor_Sender(const KShortcutsEditor* self);
    friend QObject* KShortcutsEditor_SuperSender(const KShortcutsEditor* self);
    friend int KShortcutsEditor_SenderSignalIndex(const KShortcutsEditor* self);
    friend int KShortcutsEditor_SuperSenderSignalIndex(const KShortcutsEditor* self);
    friend int KShortcutsEditor_Receivers(const KShortcutsEditor* self, const char* signal);
    friend int KShortcutsEditor_SuperReceivers(const KShortcutsEditor* self, const char* signal);
    friend bool KShortcutsEditor_IsSignalConnected(const KShortcutsEditor* self, const QMetaMethod* signal);
    friend bool KShortcutsEditor_SuperIsSignalConnected(const KShortcutsEditor* self, const QMetaMethod* signal);
    friend double KShortcutsEditor_GetDecodedMetricF(const KShortcutsEditor* self, int metricA, int metricB);
    friend double KShortcutsEditor_SuperGetDecodedMetricF(const KShortcutsEditor* self, int metricA, int metricB);
};

#endif
