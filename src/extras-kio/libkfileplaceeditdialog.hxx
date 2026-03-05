#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKFILEPLACEEDITDIALOG_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKFILEPLACEEDITDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFilePlaceEditDialog so that we can call protected methods
class VirtualKFilePlaceEditDialog final : public KFilePlaceEditDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKFilePlaceEditDialog = true;

    // Virtual class public types (including callbacks)
    using KFilePlaceEditDialog_MetaObject_Callback = QMetaObject* (*)();
    using KFilePlaceEditDialog_Metacast_Callback = void* (*)(KFilePlaceEditDialog*, const char*);
    using KFilePlaceEditDialog_Metacall_Callback = int (*)(KFilePlaceEditDialog*, int, int, void**);
    using KFilePlaceEditDialog_SetVisible_Callback = void (*)(KFilePlaceEditDialog*, bool);
    using KFilePlaceEditDialog_SizeHint_Callback = QSize* (*)();
    using KFilePlaceEditDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KFilePlaceEditDialog_Open_Callback = void (*)();
    using KFilePlaceEditDialog_Exec_Callback = int (*)();
    using KFilePlaceEditDialog_Done_Callback = void (*)(KFilePlaceEditDialog*, int);
    using KFilePlaceEditDialog_Accept_Callback = void (*)();
    using KFilePlaceEditDialog_Reject_Callback = void (*)();
    using KFilePlaceEditDialog_KeyPressEvent_Callback = void (*)(KFilePlaceEditDialog*, QKeyEvent*);
    using KFilePlaceEditDialog_CloseEvent_Callback = void (*)(KFilePlaceEditDialog*, QCloseEvent*);
    using KFilePlaceEditDialog_ShowEvent_Callback = void (*)(KFilePlaceEditDialog*, QShowEvent*);
    using KFilePlaceEditDialog_ResizeEvent_Callback = void (*)(KFilePlaceEditDialog*, QResizeEvent*);
    using KFilePlaceEditDialog_ContextMenuEvent_Callback = void (*)(KFilePlaceEditDialog*, QContextMenuEvent*);
    using KFilePlaceEditDialog_EventFilter_Callback = bool (*)(KFilePlaceEditDialog*, QObject*, QEvent*);
    using KFilePlaceEditDialog_DevType_Callback = int (*)();
    using KFilePlaceEditDialog_HeightForWidth_Callback = int (*)(const KFilePlaceEditDialog*, int);
    using KFilePlaceEditDialog_HasHeightForWidth_Callback = bool (*)();
    using KFilePlaceEditDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KFilePlaceEditDialog_Event_Callback = bool (*)(KFilePlaceEditDialog*, QEvent*);
    using KFilePlaceEditDialog_MousePressEvent_Callback = void (*)(KFilePlaceEditDialog*, QMouseEvent*);
    using KFilePlaceEditDialog_MouseReleaseEvent_Callback = void (*)(KFilePlaceEditDialog*, QMouseEvent*);
    using KFilePlaceEditDialog_MouseDoubleClickEvent_Callback = void (*)(KFilePlaceEditDialog*, QMouseEvent*);
    using KFilePlaceEditDialog_MouseMoveEvent_Callback = void (*)(KFilePlaceEditDialog*, QMouseEvent*);
    using KFilePlaceEditDialog_WheelEvent_Callback = void (*)(KFilePlaceEditDialog*, QWheelEvent*);
    using KFilePlaceEditDialog_KeyReleaseEvent_Callback = void (*)(KFilePlaceEditDialog*, QKeyEvent*);
    using KFilePlaceEditDialog_FocusInEvent_Callback = void (*)(KFilePlaceEditDialog*, QFocusEvent*);
    using KFilePlaceEditDialog_FocusOutEvent_Callback = void (*)(KFilePlaceEditDialog*, QFocusEvent*);
    using KFilePlaceEditDialog_EnterEvent_Callback = void (*)(KFilePlaceEditDialog*, QEnterEvent*);
    using KFilePlaceEditDialog_LeaveEvent_Callback = void (*)(KFilePlaceEditDialog*, QEvent*);
    using KFilePlaceEditDialog_PaintEvent_Callback = void (*)(KFilePlaceEditDialog*, QPaintEvent*);
    using KFilePlaceEditDialog_MoveEvent_Callback = void (*)(KFilePlaceEditDialog*, QMoveEvent*);
    using KFilePlaceEditDialog_TabletEvent_Callback = void (*)(KFilePlaceEditDialog*, QTabletEvent*);
    using KFilePlaceEditDialog_ActionEvent_Callback = void (*)(KFilePlaceEditDialog*, QActionEvent*);
    using KFilePlaceEditDialog_DragEnterEvent_Callback = void (*)(KFilePlaceEditDialog*, QDragEnterEvent*);
    using KFilePlaceEditDialog_DragMoveEvent_Callback = void (*)(KFilePlaceEditDialog*, QDragMoveEvent*);
    using KFilePlaceEditDialog_DragLeaveEvent_Callback = void (*)(KFilePlaceEditDialog*, QDragLeaveEvent*);
    using KFilePlaceEditDialog_DropEvent_Callback = void (*)(KFilePlaceEditDialog*, QDropEvent*);
    using KFilePlaceEditDialog_HideEvent_Callback = void (*)(KFilePlaceEditDialog*, QHideEvent*);
    using KFilePlaceEditDialog_NativeEvent_Callback = bool (*)(KFilePlaceEditDialog*, libqt_string, void*, intptr_t*);
    using KFilePlaceEditDialog_ChangeEvent_Callback = void (*)(KFilePlaceEditDialog*, QEvent*);
    using KFilePlaceEditDialog_Metric_Callback = int (*)(const KFilePlaceEditDialog*, int);
    using KFilePlaceEditDialog_InitPainter_Callback = void (*)(const KFilePlaceEditDialog*, QPainter*);
    using KFilePlaceEditDialog_Redirected_Callback = QPaintDevice* (*)(const KFilePlaceEditDialog*, QPoint*);
    using KFilePlaceEditDialog_SharedPainter_Callback = QPainter* (*)();
    using KFilePlaceEditDialog_InputMethodEvent_Callback = void (*)(KFilePlaceEditDialog*, QInputMethodEvent*);
    using KFilePlaceEditDialog_InputMethodQuery_Callback = QVariant* (*)(const KFilePlaceEditDialog*, int);
    using KFilePlaceEditDialog_FocusNextPrevChild_Callback = bool (*)(KFilePlaceEditDialog*, bool);
    using KFilePlaceEditDialog_TimerEvent_Callback = void (*)(KFilePlaceEditDialog*, QTimerEvent*);
    using KFilePlaceEditDialog_ChildEvent_Callback = void (*)(KFilePlaceEditDialog*, QChildEvent*);
    using KFilePlaceEditDialog_CustomEvent_Callback = void (*)(KFilePlaceEditDialog*, QEvent*);
    using KFilePlaceEditDialog_ConnectNotify_Callback = void (*)(KFilePlaceEditDialog*, QMetaMethod*);
    using KFilePlaceEditDialog_DisconnectNotify_Callback = void (*)(KFilePlaceEditDialog*, QMetaMethod*);
    using KFilePlaceEditDialog_AdjustPosition_Callback = void (*)(KFilePlaceEditDialog*, QWidget*);
    using KFilePlaceEditDialog_UpdateMicroFocus_Callback = void (*)();
    using KFilePlaceEditDialog_Create_Callback = void (*)();
    using KFilePlaceEditDialog_Destroy_Callback = void (*)();
    using KFilePlaceEditDialog_FocusNextChild_Callback = bool (*)();
    using KFilePlaceEditDialog_FocusPreviousChild_Callback = bool (*)();
    using KFilePlaceEditDialog_Sender_Callback = QObject* (*)();
    using KFilePlaceEditDialog_SenderSignalIndex_Callback = int (*)();
    using KFilePlaceEditDialog_Receivers_Callback = int (*)(const KFilePlaceEditDialog*, const char*);
    using KFilePlaceEditDialog_IsSignalConnected_Callback = bool (*)(const KFilePlaceEditDialog*, QMetaMethod*);
    using KFilePlaceEditDialog_GetDecodedMetricF_Callback = double (*)(const KFilePlaceEditDialog*, int, int);

  protected:
    // Instance callback storage
    KFilePlaceEditDialog_MetaObject_Callback kfileplaceeditdialog_metaobject_callback = nullptr;
    KFilePlaceEditDialog_Metacast_Callback kfileplaceeditdialog_metacast_callback = nullptr;
    KFilePlaceEditDialog_Metacall_Callback kfileplaceeditdialog_metacall_callback = nullptr;
    KFilePlaceEditDialog_SetVisible_Callback kfileplaceeditdialog_setvisible_callback = nullptr;
    KFilePlaceEditDialog_SizeHint_Callback kfileplaceeditdialog_sizehint_callback = nullptr;
    KFilePlaceEditDialog_MinimumSizeHint_Callback kfileplaceeditdialog_minimumsizehint_callback = nullptr;
    KFilePlaceEditDialog_Open_Callback kfileplaceeditdialog_open_callback = nullptr;
    KFilePlaceEditDialog_Exec_Callback kfileplaceeditdialog_exec_callback = nullptr;
    KFilePlaceEditDialog_Done_Callback kfileplaceeditdialog_done_callback = nullptr;
    KFilePlaceEditDialog_Accept_Callback kfileplaceeditdialog_accept_callback = nullptr;
    KFilePlaceEditDialog_Reject_Callback kfileplaceeditdialog_reject_callback = nullptr;
    KFilePlaceEditDialog_KeyPressEvent_Callback kfileplaceeditdialog_keypressevent_callback = nullptr;
    KFilePlaceEditDialog_CloseEvent_Callback kfileplaceeditdialog_closeevent_callback = nullptr;
    KFilePlaceEditDialog_ShowEvent_Callback kfileplaceeditdialog_showevent_callback = nullptr;
    KFilePlaceEditDialog_ResizeEvent_Callback kfileplaceeditdialog_resizeevent_callback = nullptr;
    KFilePlaceEditDialog_ContextMenuEvent_Callback kfileplaceeditdialog_contextmenuevent_callback = nullptr;
    KFilePlaceEditDialog_EventFilter_Callback kfileplaceeditdialog_eventfilter_callback = nullptr;
    KFilePlaceEditDialog_DevType_Callback kfileplaceeditdialog_devtype_callback = nullptr;
    KFilePlaceEditDialog_HeightForWidth_Callback kfileplaceeditdialog_heightforwidth_callback = nullptr;
    KFilePlaceEditDialog_HasHeightForWidth_Callback kfileplaceeditdialog_hasheightforwidth_callback = nullptr;
    KFilePlaceEditDialog_PaintEngine_Callback kfileplaceeditdialog_paintengine_callback = nullptr;
    KFilePlaceEditDialog_Event_Callback kfileplaceeditdialog_event_callback = nullptr;
    KFilePlaceEditDialog_MousePressEvent_Callback kfileplaceeditdialog_mousepressevent_callback = nullptr;
    KFilePlaceEditDialog_MouseReleaseEvent_Callback kfileplaceeditdialog_mousereleaseevent_callback = nullptr;
    KFilePlaceEditDialog_MouseDoubleClickEvent_Callback kfileplaceeditdialog_mousedoubleclickevent_callback = nullptr;
    KFilePlaceEditDialog_MouseMoveEvent_Callback kfileplaceeditdialog_mousemoveevent_callback = nullptr;
    KFilePlaceEditDialog_WheelEvent_Callback kfileplaceeditdialog_wheelevent_callback = nullptr;
    KFilePlaceEditDialog_KeyReleaseEvent_Callback kfileplaceeditdialog_keyreleaseevent_callback = nullptr;
    KFilePlaceEditDialog_FocusInEvent_Callback kfileplaceeditdialog_focusinevent_callback = nullptr;
    KFilePlaceEditDialog_FocusOutEvent_Callback kfileplaceeditdialog_focusoutevent_callback = nullptr;
    KFilePlaceEditDialog_EnterEvent_Callback kfileplaceeditdialog_enterevent_callback = nullptr;
    KFilePlaceEditDialog_LeaveEvent_Callback kfileplaceeditdialog_leaveevent_callback = nullptr;
    KFilePlaceEditDialog_PaintEvent_Callback kfileplaceeditdialog_paintevent_callback = nullptr;
    KFilePlaceEditDialog_MoveEvent_Callback kfileplaceeditdialog_moveevent_callback = nullptr;
    KFilePlaceEditDialog_TabletEvent_Callback kfileplaceeditdialog_tabletevent_callback = nullptr;
    KFilePlaceEditDialog_ActionEvent_Callback kfileplaceeditdialog_actionevent_callback = nullptr;
    KFilePlaceEditDialog_DragEnterEvent_Callback kfileplaceeditdialog_dragenterevent_callback = nullptr;
    KFilePlaceEditDialog_DragMoveEvent_Callback kfileplaceeditdialog_dragmoveevent_callback = nullptr;
    KFilePlaceEditDialog_DragLeaveEvent_Callback kfileplaceeditdialog_dragleaveevent_callback = nullptr;
    KFilePlaceEditDialog_DropEvent_Callback kfileplaceeditdialog_dropevent_callback = nullptr;
    KFilePlaceEditDialog_HideEvent_Callback kfileplaceeditdialog_hideevent_callback = nullptr;
    KFilePlaceEditDialog_NativeEvent_Callback kfileplaceeditdialog_nativeevent_callback = nullptr;
    KFilePlaceEditDialog_ChangeEvent_Callback kfileplaceeditdialog_changeevent_callback = nullptr;
    KFilePlaceEditDialog_Metric_Callback kfileplaceeditdialog_metric_callback = nullptr;
    KFilePlaceEditDialog_InitPainter_Callback kfileplaceeditdialog_initpainter_callback = nullptr;
    KFilePlaceEditDialog_Redirected_Callback kfileplaceeditdialog_redirected_callback = nullptr;
    KFilePlaceEditDialog_SharedPainter_Callback kfileplaceeditdialog_sharedpainter_callback = nullptr;
    KFilePlaceEditDialog_InputMethodEvent_Callback kfileplaceeditdialog_inputmethodevent_callback = nullptr;
    KFilePlaceEditDialog_InputMethodQuery_Callback kfileplaceeditdialog_inputmethodquery_callback = nullptr;
    KFilePlaceEditDialog_FocusNextPrevChild_Callback kfileplaceeditdialog_focusnextprevchild_callback = nullptr;
    KFilePlaceEditDialog_TimerEvent_Callback kfileplaceeditdialog_timerevent_callback = nullptr;
    KFilePlaceEditDialog_ChildEvent_Callback kfileplaceeditdialog_childevent_callback = nullptr;
    KFilePlaceEditDialog_CustomEvent_Callback kfileplaceeditdialog_customevent_callback = nullptr;
    KFilePlaceEditDialog_ConnectNotify_Callback kfileplaceeditdialog_connectnotify_callback = nullptr;
    KFilePlaceEditDialog_DisconnectNotify_Callback kfileplaceeditdialog_disconnectnotify_callback = nullptr;
    KFilePlaceEditDialog_AdjustPosition_Callback kfileplaceeditdialog_adjustposition_callback = nullptr;
    KFilePlaceEditDialog_UpdateMicroFocus_Callback kfileplaceeditdialog_updatemicrofocus_callback = nullptr;
    KFilePlaceEditDialog_Create_Callback kfileplaceeditdialog_create_callback = nullptr;
    KFilePlaceEditDialog_Destroy_Callback kfileplaceeditdialog_destroy_callback = nullptr;
    KFilePlaceEditDialog_FocusNextChild_Callback kfileplaceeditdialog_focusnextchild_callback = nullptr;
    KFilePlaceEditDialog_FocusPreviousChild_Callback kfileplaceeditdialog_focuspreviouschild_callback = nullptr;
    KFilePlaceEditDialog_Sender_Callback kfileplaceeditdialog_sender_callback = nullptr;
    KFilePlaceEditDialog_SenderSignalIndex_Callback kfileplaceeditdialog_sendersignalindex_callback = nullptr;
    KFilePlaceEditDialog_Receivers_Callback kfileplaceeditdialog_receivers_callback = nullptr;
    KFilePlaceEditDialog_IsSignalConnected_Callback kfileplaceeditdialog_issignalconnected_callback = nullptr;
    KFilePlaceEditDialog_GetDecodedMetricF_Callback kfileplaceeditdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kfileplaceeditdialog_metaobject_isbase = false;
    mutable bool kfileplaceeditdialog_metacast_isbase = false;
    mutable bool kfileplaceeditdialog_metacall_isbase = false;
    mutable bool kfileplaceeditdialog_setvisible_isbase = false;
    mutable bool kfileplaceeditdialog_sizehint_isbase = false;
    mutable bool kfileplaceeditdialog_minimumsizehint_isbase = false;
    mutable bool kfileplaceeditdialog_open_isbase = false;
    mutable bool kfileplaceeditdialog_exec_isbase = false;
    mutable bool kfileplaceeditdialog_done_isbase = false;
    mutable bool kfileplaceeditdialog_accept_isbase = false;
    mutable bool kfileplaceeditdialog_reject_isbase = false;
    mutable bool kfileplaceeditdialog_keypressevent_isbase = false;
    mutable bool kfileplaceeditdialog_closeevent_isbase = false;
    mutable bool kfileplaceeditdialog_showevent_isbase = false;
    mutable bool kfileplaceeditdialog_resizeevent_isbase = false;
    mutable bool kfileplaceeditdialog_contextmenuevent_isbase = false;
    mutable bool kfileplaceeditdialog_eventfilter_isbase = false;
    mutable bool kfileplaceeditdialog_devtype_isbase = false;
    mutable bool kfileplaceeditdialog_heightforwidth_isbase = false;
    mutable bool kfileplaceeditdialog_hasheightforwidth_isbase = false;
    mutable bool kfileplaceeditdialog_paintengine_isbase = false;
    mutable bool kfileplaceeditdialog_event_isbase = false;
    mutable bool kfileplaceeditdialog_mousepressevent_isbase = false;
    mutable bool kfileplaceeditdialog_mousereleaseevent_isbase = false;
    mutable bool kfileplaceeditdialog_mousedoubleclickevent_isbase = false;
    mutable bool kfileplaceeditdialog_mousemoveevent_isbase = false;
    mutable bool kfileplaceeditdialog_wheelevent_isbase = false;
    mutable bool kfileplaceeditdialog_keyreleaseevent_isbase = false;
    mutable bool kfileplaceeditdialog_focusinevent_isbase = false;
    mutable bool kfileplaceeditdialog_focusoutevent_isbase = false;
    mutable bool kfileplaceeditdialog_enterevent_isbase = false;
    mutable bool kfileplaceeditdialog_leaveevent_isbase = false;
    mutable bool kfileplaceeditdialog_paintevent_isbase = false;
    mutable bool kfileplaceeditdialog_moveevent_isbase = false;
    mutable bool kfileplaceeditdialog_tabletevent_isbase = false;
    mutable bool kfileplaceeditdialog_actionevent_isbase = false;
    mutable bool kfileplaceeditdialog_dragenterevent_isbase = false;
    mutable bool kfileplaceeditdialog_dragmoveevent_isbase = false;
    mutable bool kfileplaceeditdialog_dragleaveevent_isbase = false;
    mutable bool kfileplaceeditdialog_dropevent_isbase = false;
    mutable bool kfileplaceeditdialog_hideevent_isbase = false;
    mutable bool kfileplaceeditdialog_nativeevent_isbase = false;
    mutable bool kfileplaceeditdialog_changeevent_isbase = false;
    mutable bool kfileplaceeditdialog_metric_isbase = false;
    mutable bool kfileplaceeditdialog_initpainter_isbase = false;
    mutable bool kfileplaceeditdialog_redirected_isbase = false;
    mutable bool kfileplaceeditdialog_sharedpainter_isbase = false;
    mutable bool kfileplaceeditdialog_inputmethodevent_isbase = false;
    mutable bool kfileplaceeditdialog_inputmethodquery_isbase = false;
    mutable bool kfileplaceeditdialog_focusnextprevchild_isbase = false;
    mutable bool kfileplaceeditdialog_timerevent_isbase = false;
    mutable bool kfileplaceeditdialog_childevent_isbase = false;
    mutable bool kfileplaceeditdialog_customevent_isbase = false;
    mutable bool kfileplaceeditdialog_connectnotify_isbase = false;
    mutable bool kfileplaceeditdialog_disconnectnotify_isbase = false;
    mutable bool kfileplaceeditdialog_adjustposition_isbase = false;
    mutable bool kfileplaceeditdialog_updatemicrofocus_isbase = false;
    mutable bool kfileplaceeditdialog_create_isbase = false;
    mutable bool kfileplaceeditdialog_destroy_isbase = false;
    mutable bool kfileplaceeditdialog_focusnextchild_isbase = false;
    mutable bool kfileplaceeditdialog_focuspreviouschild_isbase = false;
    mutable bool kfileplaceeditdialog_sender_isbase = false;
    mutable bool kfileplaceeditdialog_sendersignalindex_isbase = false;
    mutable bool kfileplaceeditdialog_receivers_isbase = false;
    mutable bool kfileplaceeditdialog_issignalconnected_isbase = false;
    mutable bool kfileplaceeditdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKFilePlaceEditDialog(bool allowGlobal, const QUrl& url, const QString& label, const QString& icon, bool isAddingNewPlace) : KFilePlaceEditDialog(allowGlobal, url, label, icon, isAddingNewPlace) {};
    VirtualKFilePlaceEditDialog(bool allowGlobal, const QUrl& url, const QString& label, const QString& icon, bool isAddingNewPlace, bool appLocal) : KFilePlaceEditDialog(allowGlobal, url, label, icon, isAddingNewPlace, appLocal) {};
    VirtualKFilePlaceEditDialog(bool allowGlobal, const QUrl& url, const QString& label, const QString& icon, bool isAddingNewPlace, bool appLocal, int iconSize) : KFilePlaceEditDialog(allowGlobal, url, label, icon, isAddingNewPlace, appLocal, iconSize) {};
    VirtualKFilePlaceEditDialog(bool allowGlobal, const QUrl& url, const QString& label, const QString& icon, bool isAddingNewPlace, bool appLocal, int iconSize, QWidget* parent) : KFilePlaceEditDialog(allowGlobal, url, label, icon, isAddingNewPlace, appLocal, iconSize, parent) {};

    // Callback setters
    inline void setKFilePlaceEditDialog_MetaObject_Callback(KFilePlaceEditDialog_MetaObject_Callback cb) { kfileplaceeditdialog_metaobject_callback = cb; }
    inline void setKFilePlaceEditDialog_Metacast_Callback(KFilePlaceEditDialog_Metacast_Callback cb) { kfileplaceeditdialog_metacast_callback = cb; }
    inline void setKFilePlaceEditDialog_Metacall_Callback(KFilePlaceEditDialog_Metacall_Callback cb) { kfileplaceeditdialog_metacall_callback = cb; }
    inline void setKFilePlaceEditDialog_SetVisible_Callback(KFilePlaceEditDialog_SetVisible_Callback cb) { kfileplaceeditdialog_setvisible_callback = cb; }
    inline void setKFilePlaceEditDialog_SizeHint_Callback(KFilePlaceEditDialog_SizeHint_Callback cb) { kfileplaceeditdialog_sizehint_callback = cb; }
    inline void setKFilePlaceEditDialog_MinimumSizeHint_Callback(KFilePlaceEditDialog_MinimumSizeHint_Callback cb) { kfileplaceeditdialog_minimumsizehint_callback = cb; }
    inline void setKFilePlaceEditDialog_Open_Callback(KFilePlaceEditDialog_Open_Callback cb) { kfileplaceeditdialog_open_callback = cb; }
    inline void setKFilePlaceEditDialog_Exec_Callback(KFilePlaceEditDialog_Exec_Callback cb) { kfileplaceeditdialog_exec_callback = cb; }
    inline void setKFilePlaceEditDialog_Done_Callback(KFilePlaceEditDialog_Done_Callback cb) { kfileplaceeditdialog_done_callback = cb; }
    inline void setKFilePlaceEditDialog_Accept_Callback(KFilePlaceEditDialog_Accept_Callback cb) { kfileplaceeditdialog_accept_callback = cb; }
    inline void setKFilePlaceEditDialog_Reject_Callback(KFilePlaceEditDialog_Reject_Callback cb) { kfileplaceeditdialog_reject_callback = cb; }
    inline void setKFilePlaceEditDialog_KeyPressEvent_Callback(KFilePlaceEditDialog_KeyPressEvent_Callback cb) { kfileplaceeditdialog_keypressevent_callback = cb; }
    inline void setKFilePlaceEditDialog_CloseEvent_Callback(KFilePlaceEditDialog_CloseEvent_Callback cb) { kfileplaceeditdialog_closeevent_callback = cb; }
    inline void setKFilePlaceEditDialog_ShowEvent_Callback(KFilePlaceEditDialog_ShowEvent_Callback cb) { kfileplaceeditdialog_showevent_callback = cb; }
    inline void setKFilePlaceEditDialog_ResizeEvent_Callback(KFilePlaceEditDialog_ResizeEvent_Callback cb) { kfileplaceeditdialog_resizeevent_callback = cb; }
    inline void setKFilePlaceEditDialog_ContextMenuEvent_Callback(KFilePlaceEditDialog_ContextMenuEvent_Callback cb) { kfileplaceeditdialog_contextmenuevent_callback = cb; }
    inline void setKFilePlaceEditDialog_EventFilter_Callback(KFilePlaceEditDialog_EventFilter_Callback cb) { kfileplaceeditdialog_eventfilter_callback = cb; }
    inline void setKFilePlaceEditDialog_DevType_Callback(KFilePlaceEditDialog_DevType_Callback cb) { kfileplaceeditdialog_devtype_callback = cb; }
    inline void setKFilePlaceEditDialog_HeightForWidth_Callback(KFilePlaceEditDialog_HeightForWidth_Callback cb) { kfileplaceeditdialog_heightforwidth_callback = cb; }
    inline void setKFilePlaceEditDialog_HasHeightForWidth_Callback(KFilePlaceEditDialog_HasHeightForWidth_Callback cb) { kfileplaceeditdialog_hasheightforwidth_callback = cb; }
    inline void setKFilePlaceEditDialog_PaintEngine_Callback(KFilePlaceEditDialog_PaintEngine_Callback cb) { kfileplaceeditdialog_paintengine_callback = cb; }
    inline void setKFilePlaceEditDialog_Event_Callback(KFilePlaceEditDialog_Event_Callback cb) { kfileplaceeditdialog_event_callback = cb; }
    inline void setKFilePlaceEditDialog_MousePressEvent_Callback(KFilePlaceEditDialog_MousePressEvent_Callback cb) { kfileplaceeditdialog_mousepressevent_callback = cb; }
    inline void setKFilePlaceEditDialog_MouseReleaseEvent_Callback(KFilePlaceEditDialog_MouseReleaseEvent_Callback cb) { kfileplaceeditdialog_mousereleaseevent_callback = cb; }
    inline void setKFilePlaceEditDialog_MouseDoubleClickEvent_Callback(KFilePlaceEditDialog_MouseDoubleClickEvent_Callback cb) { kfileplaceeditdialog_mousedoubleclickevent_callback = cb; }
    inline void setKFilePlaceEditDialog_MouseMoveEvent_Callback(KFilePlaceEditDialog_MouseMoveEvent_Callback cb) { kfileplaceeditdialog_mousemoveevent_callback = cb; }
    inline void setKFilePlaceEditDialog_WheelEvent_Callback(KFilePlaceEditDialog_WheelEvent_Callback cb) { kfileplaceeditdialog_wheelevent_callback = cb; }
    inline void setKFilePlaceEditDialog_KeyReleaseEvent_Callback(KFilePlaceEditDialog_KeyReleaseEvent_Callback cb) { kfileplaceeditdialog_keyreleaseevent_callback = cb; }
    inline void setKFilePlaceEditDialog_FocusInEvent_Callback(KFilePlaceEditDialog_FocusInEvent_Callback cb) { kfileplaceeditdialog_focusinevent_callback = cb; }
    inline void setKFilePlaceEditDialog_FocusOutEvent_Callback(KFilePlaceEditDialog_FocusOutEvent_Callback cb) { kfileplaceeditdialog_focusoutevent_callback = cb; }
    inline void setKFilePlaceEditDialog_EnterEvent_Callback(KFilePlaceEditDialog_EnterEvent_Callback cb) { kfileplaceeditdialog_enterevent_callback = cb; }
    inline void setKFilePlaceEditDialog_LeaveEvent_Callback(KFilePlaceEditDialog_LeaveEvent_Callback cb) { kfileplaceeditdialog_leaveevent_callback = cb; }
    inline void setKFilePlaceEditDialog_PaintEvent_Callback(KFilePlaceEditDialog_PaintEvent_Callback cb) { kfileplaceeditdialog_paintevent_callback = cb; }
    inline void setKFilePlaceEditDialog_MoveEvent_Callback(KFilePlaceEditDialog_MoveEvent_Callback cb) { kfileplaceeditdialog_moveevent_callback = cb; }
    inline void setKFilePlaceEditDialog_TabletEvent_Callback(KFilePlaceEditDialog_TabletEvent_Callback cb) { kfileplaceeditdialog_tabletevent_callback = cb; }
    inline void setKFilePlaceEditDialog_ActionEvent_Callback(KFilePlaceEditDialog_ActionEvent_Callback cb) { kfileplaceeditdialog_actionevent_callback = cb; }
    inline void setKFilePlaceEditDialog_DragEnterEvent_Callback(KFilePlaceEditDialog_DragEnterEvent_Callback cb) { kfileplaceeditdialog_dragenterevent_callback = cb; }
    inline void setKFilePlaceEditDialog_DragMoveEvent_Callback(KFilePlaceEditDialog_DragMoveEvent_Callback cb) { kfileplaceeditdialog_dragmoveevent_callback = cb; }
    inline void setKFilePlaceEditDialog_DragLeaveEvent_Callback(KFilePlaceEditDialog_DragLeaveEvent_Callback cb) { kfileplaceeditdialog_dragleaveevent_callback = cb; }
    inline void setKFilePlaceEditDialog_DropEvent_Callback(KFilePlaceEditDialog_DropEvent_Callback cb) { kfileplaceeditdialog_dropevent_callback = cb; }
    inline void setKFilePlaceEditDialog_HideEvent_Callback(KFilePlaceEditDialog_HideEvent_Callback cb) { kfileplaceeditdialog_hideevent_callback = cb; }
    inline void setKFilePlaceEditDialog_NativeEvent_Callback(KFilePlaceEditDialog_NativeEvent_Callback cb) { kfileplaceeditdialog_nativeevent_callback = cb; }
    inline void setKFilePlaceEditDialog_ChangeEvent_Callback(KFilePlaceEditDialog_ChangeEvent_Callback cb) { kfileplaceeditdialog_changeevent_callback = cb; }
    inline void setKFilePlaceEditDialog_Metric_Callback(KFilePlaceEditDialog_Metric_Callback cb) { kfileplaceeditdialog_metric_callback = cb; }
    inline void setKFilePlaceEditDialog_InitPainter_Callback(KFilePlaceEditDialog_InitPainter_Callback cb) { kfileplaceeditdialog_initpainter_callback = cb; }
    inline void setKFilePlaceEditDialog_Redirected_Callback(KFilePlaceEditDialog_Redirected_Callback cb) { kfileplaceeditdialog_redirected_callback = cb; }
    inline void setKFilePlaceEditDialog_SharedPainter_Callback(KFilePlaceEditDialog_SharedPainter_Callback cb) { kfileplaceeditdialog_sharedpainter_callback = cb; }
    inline void setKFilePlaceEditDialog_InputMethodEvent_Callback(KFilePlaceEditDialog_InputMethodEvent_Callback cb) { kfileplaceeditdialog_inputmethodevent_callback = cb; }
    inline void setKFilePlaceEditDialog_InputMethodQuery_Callback(KFilePlaceEditDialog_InputMethodQuery_Callback cb) { kfileplaceeditdialog_inputmethodquery_callback = cb; }
    inline void setKFilePlaceEditDialog_FocusNextPrevChild_Callback(KFilePlaceEditDialog_FocusNextPrevChild_Callback cb) { kfileplaceeditdialog_focusnextprevchild_callback = cb; }
    inline void setKFilePlaceEditDialog_TimerEvent_Callback(KFilePlaceEditDialog_TimerEvent_Callback cb) { kfileplaceeditdialog_timerevent_callback = cb; }
    inline void setKFilePlaceEditDialog_ChildEvent_Callback(KFilePlaceEditDialog_ChildEvent_Callback cb) { kfileplaceeditdialog_childevent_callback = cb; }
    inline void setKFilePlaceEditDialog_CustomEvent_Callback(KFilePlaceEditDialog_CustomEvent_Callback cb) { kfileplaceeditdialog_customevent_callback = cb; }
    inline void setKFilePlaceEditDialog_ConnectNotify_Callback(KFilePlaceEditDialog_ConnectNotify_Callback cb) { kfileplaceeditdialog_connectnotify_callback = cb; }
    inline void setKFilePlaceEditDialog_DisconnectNotify_Callback(KFilePlaceEditDialog_DisconnectNotify_Callback cb) { kfileplaceeditdialog_disconnectnotify_callback = cb; }
    inline void setKFilePlaceEditDialog_AdjustPosition_Callback(KFilePlaceEditDialog_AdjustPosition_Callback cb) { kfileplaceeditdialog_adjustposition_callback = cb; }
    inline void setKFilePlaceEditDialog_UpdateMicroFocus_Callback(KFilePlaceEditDialog_UpdateMicroFocus_Callback cb) { kfileplaceeditdialog_updatemicrofocus_callback = cb; }
    inline void setKFilePlaceEditDialog_Create_Callback(KFilePlaceEditDialog_Create_Callback cb) { kfileplaceeditdialog_create_callback = cb; }
    inline void setKFilePlaceEditDialog_Destroy_Callback(KFilePlaceEditDialog_Destroy_Callback cb) { kfileplaceeditdialog_destroy_callback = cb; }
    inline void setKFilePlaceEditDialog_FocusNextChild_Callback(KFilePlaceEditDialog_FocusNextChild_Callback cb) { kfileplaceeditdialog_focusnextchild_callback = cb; }
    inline void setKFilePlaceEditDialog_FocusPreviousChild_Callback(KFilePlaceEditDialog_FocusPreviousChild_Callback cb) { kfileplaceeditdialog_focuspreviouschild_callback = cb; }
    inline void setKFilePlaceEditDialog_Sender_Callback(KFilePlaceEditDialog_Sender_Callback cb) { kfileplaceeditdialog_sender_callback = cb; }
    inline void setKFilePlaceEditDialog_SenderSignalIndex_Callback(KFilePlaceEditDialog_SenderSignalIndex_Callback cb) { kfileplaceeditdialog_sendersignalindex_callback = cb; }
    inline void setKFilePlaceEditDialog_Receivers_Callback(KFilePlaceEditDialog_Receivers_Callback cb) { kfileplaceeditdialog_receivers_callback = cb; }
    inline void setKFilePlaceEditDialog_IsSignalConnected_Callback(KFilePlaceEditDialog_IsSignalConnected_Callback cb) { kfileplaceeditdialog_issignalconnected_callback = cb; }
    inline void setKFilePlaceEditDialog_GetDecodedMetricF_Callback(KFilePlaceEditDialog_GetDecodedMetricF_Callback cb) { kfileplaceeditdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKFilePlaceEditDialog_MetaObject_IsBase(bool value) const { kfileplaceeditdialog_metaobject_isbase = value; }
    inline void setKFilePlaceEditDialog_Metacast_IsBase(bool value) const { kfileplaceeditdialog_metacast_isbase = value; }
    inline void setKFilePlaceEditDialog_Metacall_IsBase(bool value) const { kfileplaceeditdialog_metacall_isbase = value; }
    inline void setKFilePlaceEditDialog_SetVisible_IsBase(bool value) const { kfileplaceeditdialog_setvisible_isbase = value; }
    inline void setKFilePlaceEditDialog_SizeHint_IsBase(bool value) const { kfileplaceeditdialog_sizehint_isbase = value; }
    inline void setKFilePlaceEditDialog_MinimumSizeHint_IsBase(bool value) const { kfileplaceeditdialog_minimumsizehint_isbase = value; }
    inline void setKFilePlaceEditDialog_Open_IsBase(bool value) const { kfileplaceeditdialog_open_isbase = value; }
    inline void setKFilePlaceEditDialog_Exec_IsBase(bool value) const { kfileplaceeditdialog_exec_isbase = value; }
    inline void setKFilePlaceEditDialog_Done_IsBase(bool value) const { kfileplaceeditdialog_done_isbase = value; }
    inline void setKFilePlaceEditDialog_Accept_IsBase(bool value) const { kfileplaceeditdialog_accept_isbase = value; }
    inline void setKFilePlaceEditDialog_Reject_IsBase(bool value) const { kfileplaceeditdialog_reject_isbase = value; }
    inline void setKFilePlaceEditDialog_KeyPressEvent_IsBase(bool value) const { kfileplaceeditdialog_keypressevent_isbase = value; }
    inline void setKFilePlaceEditDialog_CloseEvent_IsBase(bool value) const { kfileplaceeditdialog_closeevent_isbase = value; }
    inline void setKFilePlaceEditDialog_ShowEvent_IsBase(bool value) const { kfileplaceeditdialog_showevent_isbase = value; }
    inline void setKFilePlaceEditDialog_ResizeEvent_IsBase(bool value) const { kfileplaceeditdialog_resizeevent_isbase = value; }
    inline void setKFilePlaceEditDialog_ContextMenuEvent_IsBase(bool value) const { kfileplaceeditdialog_contextmenuevent_isbase = value; }
    inline void setKFilePlaceEditDialog_EventFilter_IsBase(bool value) const { kfileplaceeditdialog_eventfilter_isbase = value; }
    inline void setKFilePlaceEditDialog_DevType_IsBase(bool value) const { kfileplaceeditdialog_devtype_isbase = value; }
    inline void setKFilePlaceEditDialog_HeightForWidth_IsBase(bool value) const { kfileplaceeditdialog_heightforwidth_isbase = value; }
    inline void setKFilePlaceEditDialog_HasHeightForWidth_IsBase(bool value) const { kfileplaceeditdialog_hasheightforwidth_isbase = value; }
    inline void setKFilePlaceEditDialog_PaintEngine_IsBase(bool value) const { kfileplaceeditdialog_paintengine_isbase = value; }
    inline void setKFilePlaceEditDialog_Event_IsBase(bool value) const { kfileplaceeditdialog_event_isbase = value; }
    inline void setKFilePlaceEditDialog_MousePressEvent_IsBase(bool value) const { kfileplaceeditdialog_mousepressevent_isbase = value; }
    inline void setKFilePlaceEditDialog_MouseReleaseEvent_IsBase(bool value) const { kfileplaceeditdialog_mousereleaseevent_isbase = value; }
    inline void setKFilePlaceEditDialog_MouseDoubleClickEvent_IsBase(bool value) const { kfileplaceeditdialog_mousedoubleclickevent_isbase = value; }
    inline void setKFilePlaceEditDialog_MouseMoveEvent_IsBase(bool value) const { kfileplaceeditdialog_mousemoveevent_isbase = value; }
    inline void setKFilePlaceEditDialog_WheelEvent_IsBase(bool value) const { kfileplaceeditdialog_wheelevent_isbase = value; }
    inline void setKFilePlaceEditDialog_KeyReleaseEvent_IsBase(bool value) const { kfileplaceeditdialog_keyreleaseevent_isbase = value; }
    inline void setKFilePlaceEditDialog_FocusInEvent_IsBase(bool value) const { kfileplaceeditdialog_focusinevent_isbase = value; }
    inline void setKFilePlaceEditDialog_FocusOutEvent_IsBase(bool value) const { kfileplaceeditdialog_focusoutevent_isbase = value; }
    inline void setKFilePlaceEditDialog_EnterEvent_IsBase(bool value) const { kfileplaceeditdialog_enterevent_isbase = value; }
    inline void setKFilePlaceEditDialog_LeaveEvent_IsBase(bool value) const { kfileplaceeditdialog_leaveevent_isbase = value; }
    inline void setKFilePlaceEditDialog_PaintEvent_IsBase(bool value) const { kfileplaceeditdialog_paintevent_isbase = value; }
    inline void setKFilePlaceEditDialog_MoveEvent_IsBase(bool value) const { kfileplaceeditdialog_moveevent_isbase = value; }
    inline void setKFilePlaceEditDialog_TabletEvent_IsBase(bool value) const { kfileplaceeditdialog_tabletevent_isbase = value; }
    inline void setKFilePlaceEditDialog_ActionEvent_IsBase(bool value) const { kfileplaceeditdialog_actionevent_isbase = value; }
    inline void setKFilePlaceEditDialog_DragEnterEvent_IsBase(bool value) const { kfileplaceeditdialog_dragenterevent_isbase = value; }
    inline void setKFilePlaceEditDialog_DragMoveEvent_IsBase(bool value) const { kfileplaceeditdialog_dragmoveevent_isbase = value; }
    inline void setKFilePlaceEditDialog_DragLeaveEvent_IsBase(bool value) const { kfileplaceeditdialog_dragleaveevent_isbase = value; }
    inline void setKFilePlaceEditDialog_DropEvent_IsBase(bool value) const { kfileplaceeditdialog_dropevent_isbase = value; }
    inline void setKFilePlaceEditDialog_HideEvent_IsBase(bool value) const { kfileplaceeditdialog_hideevent_isbase = value; }
    inline void setKFilePlaceEditDialog_NativeEvent_IsBase(bool value) const { kfileplaceeditdialog_nativeevent_isbase = value; }
    inline void setKFilePlaceEditDialog_ChangeEvent_IsBase(bool value) const { kfileplaceeditdialog_changeevent_isbase = value; }
    inline void setKFilePlaceEditDialog_Metric_IsBase(bool value) const { kfileplaceeditdialog_metric_isbase = value; }
    inline void setKFilePlaceEditDialog_InitPainter_IsBase(bool value) const { kfileplaceeditdialog_initpainter_isbase = value; }
    inline void setKFilePlaceEditDialog_Redirected_IsBase(bool value) const { kfileplaceeditdialog_redirected_isbase = value; }
    inline void setKFilePlaceEditDialog_SharedPainter_IsBase(bool value) const { kfileplaceeditdialog_sharedpainter_isbase = value; }
    inline void setKFilePlaceEditDialog_InputMethodEvent_IsBase(bool value) const { kfileplaceeditdialog_inputmethodevent_isbase = value; }
    inline void setKFilePlaceEditDialog_InputMethodQuery_IsBase(bool value) const { kfileplaceeditdialog_inputmethodquery_isbase = value; }
    inline void setKFilePlaceEditDialog_FocusNextPrevChild_IsBase(bool value) const { kfileplaceeditdialog_focusnextprevchild_isbase = value; }
    inline void setKFilePlaceEditDialog_TimerEvent_IsBase(bool value) const { kfileplaceeditdialog_timerevent_isbase = value; }
    inline void setKFilePlaceEditDialog_ChildEvent_IsBase(bool value) const { kfileplaceeditdialog_childevent_isbase = value; }
    inline void setKFilePlaceEditDialog_CustomEvent_IsBase(bool value) const { kfileplaceeditdialog_customevent_isbase = value; }
    inline void setKFilePlaceEditDialog_ConnectNotify_IsBase(bool value) const { kfileplaceeditdialog_connectnotify_isbase = value; }
    inline void setKFilePlaceEditDialog_DisconnectNotify_IsBase(bool value) const { kfileplaceeditdialog_disconnectnotify_isbase = value; }
    inline void setKFilePlaceEditDialog_AdjustPosition_IsBase(bool value) const { kfileplaceeditdialog_adjustposition_isbase = value; }
    inline void setKFilePlaceEditDialog_UpdateMicroFocus_IsBase(bool value) const { kfileplaceeditdialog_updatemicrofocus_isbase = value; }
    inline void setKFilePlaceEditDialog_Create_IsBase(bool value) const { kfileplaceeditdialog_create_isbase = value; }
    inline void setKFilePlaceEditDialog_Destroy_IsBase(bool value) const { kfileplaceeditdialog_destroy_isbase = value; }
    inline void setKFilePlaceEditDialog_FocusNextChild_IsBase(bool value) const { kfileplaceeditdialog_focusnextchild_isbase = value; }
    inline void setKFilePlaceEditDialog_FocusPreviousChild_IsBase(bool value) const { kfileplaceeditdialog_focuspreviouschild_isbase = value; }
    inline void setKFilePlaceEditDialog_Sender_IsBase(bool value) const { kfileplaceeditdialog_sender_isbase = value; }
    inline void setKFilePlaceEditDialog_SenderSignalIndex_IsBase(bool value) const { kfileplaceeditdialog_sendersignalindex_isbase = value; }
    inline void setKFilePlaceEditDialog_Receivers_IsBase(bool value) const { kfileplaceeditdialog_receivers_isbase = value; }
    inline void setKFilePlaceEditDialog_IsSignalConnected_IsBase(bool value) const { kfileplaceeditdialog_issignalconnected_isbase = value; }
    inline void setKFilePlaceEditDialog_GetDecodedMetricF_IsBase(bool value) const { kfileplaceeditdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfileplaceeditdialog_metaobject_isbase) {
            kfileplaceeditdialog_metaobject_isbase = false;
            return KFilePlaceEditDialog::metaObject();
        }
        auto metaobject_cb = kfileplaceeditdialog_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KFilePlaceEditDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfileplaceeditdialog_metacast_isbase) {
            kfileplaceeditdialog_metacast_isbase = false;
            return KFilePlaceEditDialog::qt_metacast(param1);
        }
        auto metacast_cb = kfileplaceeditdialog_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KFilePlaceEditDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfileplaceeditdialog_metacall_isbase) {
            kfileplaceeditdialog_metacall_isbase = false;
            return KFilePlaceEditDialog::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kfileplaceeditdialog_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFilePlaceEditDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kfileplaceeditdialog_setvisible_isbase) {
            kfileplaceeditdialog_setvisible_isbase = false;
            KFilePlaceEditDialog::setVisible(visible);
            return;
        }
        auto setvisible_cb = kfileplaceeditdialog_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kfileplaceeditdialog_sizehint_isbase) {
            kfileplaceeditdialog_sizehint_isbase = false;
            return KFilePlaceEditDialog::sizeHint();
        }
        auto sizehint_cb = kfileplaceeditdialog_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KFilePlaceEditDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kfileplaceeditdialog_minimumsizehint_isbase) {
            kfileplaceeditdialog_minimumsizehint_isbase = false;
            return KFilePlaceEditDialog::minimumSizeHint();
        }
        auto minimumsizehint_cb = kfileplaceeditdialog_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KFilePlaceEditDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kfileplaceeditdialog_open_isbase) {
            kfileplaceeditdialog_open_isbase = false;
            KFilePlaceEditDialog::open();
            return;
        }
        auto open_cb = kfileplaceeditdialog_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        KFilePlaceEditDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kfileplaceeditdialog_exec_isbase) {
            kfileplaceeditdialog_exec_isbase = false;
            return KFilePlaceEditDialog::exec();
        }
        auto exec_cb = kfileplaceeditdialog_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return KFilePlaceEditDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kfileplaceeditdialog_done_isbase) {
            kfileplaceeditdialog_done_isbase = false;
            KFilePlaceEditDialog::done(param1);
            return;
        }
        auto done_cb = kfileplaceeditdialog_done_callback;
        if (done_cb) {
            int cbval1 = param1;

            done_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kfileplaceeditdialog_accept_isbase) {
            kfileplaceeditdialog_accept_isbase = false;
            KFilePlaceEditDialog::accept();
            return;
        }
        auto accept_cb = kfileplaceeditdialog_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        KFilePlaceEditDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kfileplaceeditdialog_reject_isbase) {
            kfileplaceeditdialog_reject_isbase = false;
            KFilePlaceEditDialog::reject();
            return;
        }
        auto reject_cb = kfileplaceeditdialog_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        KFilePlaceEditDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kfileplaceeditdialog_keypressevent_isbase) {
            kfileplaceeditdialog_keypressevent_isbase = false;
            KFilePlaceEditDialog::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = kfileplaceeditdialog_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kfileplaceeditdialog_closeevent_isbase) {
            kfileplaceeditdialog_closeevent_isbase = false;
            KFilePlaceEditDialog::closeEvent(param1);
            return;
        }
        auto closeevent_cb = kfileplaceeditdialog_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kfileplaceeditdialog_showevent_isbase) {
            kfileplaceeditdialog_showevent_isbase = false;
            KFilePlaceEditDialog::showEvent(param1);
            return;
        }
        auto showevent_cb = kfileplaceeditdialog_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kfileplaceeditdialog_resizeevent_isbase) {
            kfileplaceeditdialog_resizeevent_isbase = false;
            KFilePlaceEditDialog::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = kfileplaceeditdialog_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kfileplaceeditdialog_contextmenuevent_isbase) {
            kfileplaceeditdialog_contextmenuevent_isbase = false;
            KFilePlaceEditDialog::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = kfileplaceeditdialog_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kfileplaceeditdialog_eventfilter_isbase) {
            kfileplaceeditdialog_eventfilter_isbase = false;
            return KFilePlaceEditDialog::eventFilter(param1, param2);
        }
        auto eventfilter_cb = kfileplaceeditdialog_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFilePlaceEditDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kfileplaceeditdialog_devtype_isbase) {
            kfileplaceeditdialog_devtype_isbase = false;
            return KFilePlaceEditDialog::devType();
        }
        auto devtype_cb = kfileplaceeditdialog_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KFilePlaceEditDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kfileplaceeditdialog_heightforwidth_isbase) {
            kfileplaceeditdialog_heightforwidth_isbase = false;
            return KFilePlaceEditDialog::heightForWidth(param1);
        }
        auto heightforwidth_cb = kfileplaceeditdialog_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFilePlaceEditDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kfileplaceeditdialog_hasheightforwidth_isbase) {
            kfileplaceeditdialog_hasheightforwidth_isbase = false;
            return KFilePlaceEditDialog::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kfileplaceeditdialog_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KFilePlaceEditDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kfileplaceeditdialog_paintengine_isbase) {
            kfileplaceeditdialog_paintengine_isbase = false;
            return KFilePlaceEditDialog::paintEngine();
        }
        auto paintengine_cb = kfileplaceeditdialog_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KFilePlaceEditDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfileplaceeditdialog_event_isbase) {
            kfileplaceeditdialog_event_isbase = false;
            return KFilePlaceEditDialog::event(event);
        }
        auto event_cb = kfileplaceeditdialog_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KFilePlaceEditDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kfileplaceeditdialog_mousepressevent_isbase) {
            kfileplaceeditdialog_mousepressevent_isbase = false;
            KFilePlaceEditDialog::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kfileplaceeditdialog_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kfileplaceeditdialog_mousereleaseevent_isbase) {
            kfileplaceeditdialog_mousereleaseevent_isbase = false;
            KFilePlaceEditDialog::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kfileplaceeditdialog_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kfileplaceeditdialog_mousedoubleclickevent_isbase) {
            kfileplaceeditdialog_mousedoubleclickevent_isbase = false;
            KFilePlaceEditDialog::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kfileplaceeditdialog_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kfileplaceeditdialog_mousemoveevent_isbase) {
            kfileplaceeditdialog_mousemoveevent_isbase = false;
            KFilePlaceEditDialog::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kfileplaceeditdialog_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kfileplaceeditdialog_wheelevent_isbase) {
            kfileplaceeditdialog_wheelevent_isbase = false;
            KFilePlaceEditDialog::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kfileplaceeditdialog_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kfileplaceeditdialog_keyreleaseevent_isbase) {
            kfileplaceeditdialog_keyreleaseevent_isbase = false;
            KFilePlaceEditDialog::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kfileplaceeditdialog_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kfileplaceeditdialog_focusinevent_isbase) {
            kfileplaceeditdialog_focusinevent_isbase = false;
            KFilePlaceEditDialog::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kfileplaceeditdialog_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kfileplaceeditdialog_focusoutevent_isbase) {
            kfileplaceeditdialog_focusoutevent_isbase = false;
            KFilePlaceEditDialog::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kfileplaceeditdialog_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kfileplaceeditdialog_enterevent_isbase) {
            kfileplaceeditdialog_enterevent_isbase = false;
            KFilePlaceEditDialog::enterEvent(event);
            return;
        }
        auto enterevent_cb = kfileplaceeditdialog_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kfileplaceeditdialog_leaveevent_isbase) {
            kfileplaceeditdialog_leaveevent_isbase = false;
            KFilePlaceEditDialog::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kfileplaceeditdialog_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kfileplaceeditdialog_paintevent_isbase) {
            kfileplaceeditdialog_paintevent_isbase = false;
            KFilePlaceEditDialog::paintEvent(event);
            return;
        }
        auto paintevent_cb = kfileplaceeditdialog_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kfileplaceeditdialog_moveevent_isbase) {
            kfileplaceeditdialog_moveevent_isbase = false;
            KFilePlaceEditDialog::moveEvent(event);
            return;
        }
        auto moveevent_cb = kfileplaceeditdialog_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kfileplaceeditdialog_tabletevent_isbase) {
            kfileplaceeditdialog_tabletevent_isbase = false;
            KFilePlaceEditDialog::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kfileplaceeditdialog_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kfileplaceeditdialog_actionevent_isbase) {
            kfileplaceeditdialog_actionevent_isbase = false;
            KFilePlaceEditDialog::actionEvent(event);
            return;
        }
        auto actionevent_cb = kfileplaceeditdialog_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kfileplaceeditdialog_dragenterevent_isbase) {
            kfileplaceeditdialog_dragenterevent_isbase = false;
            KFilePlaceEditDialog::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kfileplaceeditdialog_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kfileplaceeditdialog_dragmoveevent_isbase) {
            kfileplaceeditdialog_dragmoveevent_isbase = false;
            KFilePlaceEditDialog::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kfileplaceeditdialog_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kfileplaceeditdialog_dragleaveevent_isbase) {
            kfileplaceeditdialog_dragleaveevent_isbase = false;
            KFilePlaceEditDialog::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kfileplaceeditdialog_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kfileplaceeditdialog_dropevent_isbase) {
            kfileplaceeditdialog_dropevent_isbase = false;
            KFilePlaceEditDialog::dropEvent(event);
            return;
        }
        auto dropevent_cb = kfileplaceeditdialog_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kfileplaceeditdialog_hideevent_isbase) {
            kfileplaceeditdialog_hideevent_isbase = false;
            KFilePlaceEditDialog::hideEvent(event);
            return;
        }
        auto hideevent_cb = kfileplaceeditdialog_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kfileplaceeditdialog_nativeevent_isbase) {
            kfileplaceeditdialog_nativeevent_isbase = false;
            return KFilePlaceEditDialog::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kfileplaceeditdialog_nativeevent_callback;
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
        return KFilePlaceEditDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kfileplaceeditdialog_changeevent_isbase) {
            kfileplaceeditdialog_changeevent_isbase = false;
            KFilePlaceEditDialog::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kfileplaceeditdialog_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kfileplaceeditdialog_metric_isbase) {
            kfileplaceeditdialog_metric_isbase = false;
            return KFilePlaceEditDialog::metric(param1);
        }
        auto metric_cb = kfileplaceeditdialog_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFilePlaceEditDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kfileplaceeditdialog_initpainter_isbase) {
            kfileplaceeditdialog_initpainter_isbase = false;
            KFilePlaceEditDialog::initPainter(painter);
            return;
        }
        auto initpainter_cb = kfileplaceeditdialog_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kfileplaceeditdialog_redirected_isbase) {
            kfileplaceeditdialog_redirected_isbase = false;
            return KFilePlaceEditDialog::redirected(offset);
        }
        auto redirected_cb = kfileplaceeditdialog_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KFilePlaceEditDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kfileplaceeditdialog_sharedpainter_isbase) {
            kfileplaceeditdialog_sharedpainter_isbase = false;
            return KFilePlaceEditDialog::sharedPainter();
        }
        auto sharedpainter_cb = kfileplaceeditdialog_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KFilePlaceEditDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kfileplaceeditdialog_inputmethodevent_isbase) {
            kfileplaceeditdialog_inputmethodevent_isbase = false;
            KFilePlaceEditDialog::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kfileplaceeditdialog_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kfileplaceeditdialog_inputmethodquery_isbase) {
            kfileplaceeditdialog_inputmethodquery_isbase = false;
            return KFilePlaceEditDialog::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kfileplaceeditdialog_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KFilePlaceEditDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kfileplaceeditdialog_focusnextprevchild_isbase) {
            kfileplaceeditdialog_focusnextprevchild_isbase = false;
            return KFilePlaceEditDialog::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kfileplaceeditdialog_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KFilePlaceEditDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfileplaceeditdialog_timerevent_isbase) {
            kfileplaceeditdialog_timerevent_isbase = false;
            KFilePlaceEditDialog::timerEvent(event);
            return;
        }
        auto timerevent_cb = kfileplaceeditdialog_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfileplaceeditdialog_childevent_isbase) {
            kfileplaceeditdialog_childevent_isbase = false;
            KFilePlaceEditDialog::childEvent(event);
            return;
        }
        auto childevent_cb = kfileplaceeditdialog_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfileplaceeditdialog_customevent_isbase) {
            kfileplaceeditdialog_customevent_isbase = false;
            KFilePlaceEditDialog::customEvent(event);
            return;
        }
        auto customevent_cb = kfileplaceeditdialog_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfileplaceeditdialog_connectnotify_isbase) {
            kfileplaceeditdialog_connectnotify_isbase = false;
            KFilePlaceEditDialog::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kfileplaceeditdialog_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfileplaceeditdialog_disconnectnotify_isbase) {
            kfileplaceeditdialog_disconnectnotify_isbase = false;
            KFilePlaceEditDialog::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kfileplaceeditdialog_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kfileplaceeditdialog_adjustposition_isbase) {
            kfileplaceeditdialog_adjustposition_isbase = false;
            KFilePlaceEditDialog::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = kfileplaceeditdialog_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        KFilePlaceEditDialog::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kfileplaceeditdialog_updatemicrofocus_isbase) {
            kfileplaceeditdialog_updatemicrofocus_isbase = false;
            KFilePlaceEditDialog::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kfileplaceeditdialog_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KFilePlaceEditDialog::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kfileplaceeditdialog_create_isbase) {
            kfileplaceeditdialog_create_isbase = false;
            KFilePlaceEditDialog::create();
            return;
        }
        auto create_cb = kfileplaceeditdialog_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KFilePlaceEditDialog::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kfileplaceeditdialog_destroy_isbase) {
            kfileplaceeditdialog_destroy_isbase = false;
            KFilePlaceEditDialog::destroy();
            return;
        }
        auto destroy_cb = kfileplaceeditdialog_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KFilePlaceEditDialog::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kfileplaceeditdialog_focusnextchild_isbase) {
            kfileplaceeditdialog_focusnextchild_isbase = false;
            return KFilePlaceEditDialog::focusNextChild();
        }
        auto focusnextchild_cb = kfileplaceeditdialog_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KFilePlaceEditDialog::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kfileplaceeditdialog_focuspreviouschild_isbase) {
            kfileplaceeditdialog_focuspreviouschild_isbase = false;
            return KFilePlaceEditDialog::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kfileplaceeditdialog_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KFilePlaceEditDialog::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfileplaceeditdialog_sender_isbase) {
            kfileplaceeditdialog_sender_isbase = false;
            return KFilePlaceEditDialog::sender();
        }
        auto sender_cb = kfileplaceeditdialog_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KFilePlaceEditDialog::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfileplaceeditdialog_sendersignalindex_isbase) {
            kfileplaceeditdialog_sendersignalindex_isbase = false;
            return KFilePlaceEditDialog::senderSignalIndex();
        }
        auto sendersignalindex_cb = kfileplaceeditdialog_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KFilePlaceEditDialog::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfileplaceeditdialog_receivers_isbase) {
            kfileplaceeditdialog_receivers_isbase = false;
            return KFilePlaceEditDialog::receivers(signal);
        }
        auto receivers_cb = kfileplaceeditdialog_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFilePlaceEditDialog::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfileplaceeditdialog_issignalconnected_isbase) {
            kfileplaceeditdialog_issignalconnected_isbase = false;
            return KFilePlaceEditDialog::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kfileplaceeditdialog_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KFilePlaceEditDialog::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kfileplaceeditdialog_getdecodedmetricf_isbase) {
            kfileplaceeditdialog_getdecodedmetricf_isbase = false;
            return KFilePlaceEditDialog::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kfileplaceeditdialog_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KFilePlaceEditDialog::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KFilePlaceEditDialog_KeyPressEvent(KFilePlaceEditDialog* self, QKeyEvent* param1);
    friend void KFilePlaceEditDialog_SuperKeyPressEvent(KFilePlaceEditDialog* self, QKeyEvent* param1);
    friend void KFilePlaceEditDialog_CloseEvent(KFilePlaceEditDialog* self, QCloseEvent* param1);
    friend void KFilePlaceEditDialog_SuperCloseEvent(KFilePlaceEditDialog* self, QCloseEvent* param1);
    friend void KFilePlaceEditDialog_ShowEvent(KFilePlaceEditDialog* self, QShowEvent* param1);
    friend void KFilePlaceEditDialog_SuperShowEvent(KFilePlaceEditDialog* self, QShowEvent* param1);
    friend void KFilePlaceEditDialog_ResizeEvent(KFilePlaceEditDialog* self, QResizeEvent* param1);
    friend void KFilePlaceEditDialog_SuperResizeEvent(KFilePlaceEditDialog* self, QResizeEvent* param1);
    friend void KFilePlaceEditDialog_ContextMenuEvent(KFilePlaceEditDialog* self, QContextMenuEvent* param1);
    friend void KFilePlaceEditDialog_SuperContextMenuEvent(KFilePlaceEditDialog* self, QContextMenuEvent* param1);
    friend bool KFilePlaceEditDialog_EventFilter(KFilePlaceEditDialog* self, QObject* param1, QEvent* param2);
    friend bool KFilePlaceEditDialog_SuperEventFilter(KFilePlaceEditDialog* self, QObject* param1, QEvent* param2);
    friend bool KFilePlaceEditDialog_Event(KFilePlaceEditDialog* self, QEvent* event);
    friend bool KFilePlaceEditDialog_SuperEvent(KFilePlaceEditDialog* self, QEvent* event);
    friend void KFilePlaceEditDialog_MousePressEvent(KFilePlaceEditDialog* self, QMouseEvent* event);
    friend void KFilePlaceEditDialog_SuperMousePressEvent(KFilePlaceEditDialog* self, QMouseEvent* event);
    friend void KFilePlaceEditDialog_MouseReleaseEvent(KFilePlaceEditDialog* self, QMouseEvent* event);
    friend void KFilePlaceEditDialog_SuperMouseReleaseEvent(KFilePlaceEditDialog* self, QMouseEvent* event);
    friend void KFilePlaceEditDialog_MouseDoubleClickEvent(KFilePlaceEditDialog* self, QMouseEvent* event);
    friend void KFilePlaceEditDialog_SuperMouseDoubleClickEvent(KFilePlaceEditDialog* self, QMouseEvent* event);
    friend void KFilePlaceEditDialog_MouseMoveEvent(KFilePlaceEditDialog* self, QMouseEvent* event);
    friend void KFilePlaceEditDialog_SuperMouseMoveEvent(KFilePlaceEditDialog* self, QMouseEvent* event);
    friend void KFilePlaceEditDialog_WheelEvent(KFilePlaceEditDialog* self, QWheelEvent* event);
    friend void KFilePlaceEditDialog_SuperWheelEvent(KFilePlaceEditDialog* self, QWheelEvent* event);
    friend void KFilePlaceEditDialog_KeyReleaseEvent(KFilePlaceEditDialog* self, QKeyEvent* event);
    friend void KFilePlaceEditDialog_SuperKeyReleaseEvent(KFilePlaceEditDialog* self, QKeyEvent* event);
    friend void KFilePlaceEditDialog_FocusInEvent(KFilePlaceEditDialog* self, QFocusEvent* event);
    friend void KFilePlaceEditDialog_SuperFocusInEvent(KFilePlaceEditDialog* self, QFocusEvent* event);
    friend void KFilePlaceEditDialog_FocusOutEvent(KFilePlaceEditDialog* self, QFocusEvent* event);
    friend void KFilePlaceEditDialog_SuperFocusOutEvent(KFilePlaceEditDialog* self, QFocusEvent* event);
    friend void KFilePlaceEditDialog_EnterEvent(KFilePlaceEditDialog* self, QEnterEvent* event);
    friend void KFilePlaceEditDialog_SuperEnterEvent(KFilePlaceEditDialog* self, QEnterEvent* event);
    friend void KFilePlaceEditDialog_LeaveEvent(KFilePlaceEditDialog* self, QEvent* event);
    friend void KFilePlaceEditDialog_SuperLeaveEvent(KFilePlaceEditDialog* self, QEvent* event);
    friend void KFilePlaceEditDialog_PaintEvent(KFilePlaceEditDialog* self, QPaintEvent* event);
    friend void KFilePlaceEditDialog_SuperPaintEvent(KFilePlaceEditDialog* self, QPaintEvent* event);
    friend void KFilePlaceEditDialog_MoveEvent(KFilePlaceEditDialog* self, QMoveEvent* event);
    friend void KFilePlaceEditDialog_SuperMoveEvent(KFilePlaceEditDialog* self, QMoveEvent* event);
    friend void KFilePlaceEditDialog_TabletEvent(KFilePlaceEditDialog* self, QTabletEvent* event);
    friend void KFilePlaceEditDialog_SuperTabletEvent(KFilePlaceEditDialog* self, QTabletEvent* event);
    friend void KFilePlaceEditDialog_ActionEvent(KFilePlaceEditDialog* self, QActionEvent* event);
    friend void KFilePlaceEditDialog_SuperActionEvent(KFilePlaceEditDialog* self, QActionEvent* event);
    friend void KFilePlaceEditDialog_DragEnterEvent(KFilePlaceEditDialog* self, QDragEnterEvent* event);
    friend void KFilePlaceEditDialog_SuperDragEnterEvent(KFilePlaceEditDialog* self, QDragEnterEvent* event);
    friend void KFilePlaceEditDialog_DragMoveEvent(KFilePlaceEditDialog* self, QDragMoveEvent* event);
    friend void KFilePlaceEditDialog_SuperDragMoveEvent(KFilePlaceEditDialog* self, QDragMoveEvent* event);
    friend void KFilePlaceEditDialog_DragLeaveEvent(KFilePlaceEditDialog* self, QDragLeaveEvent* event);
    friend void KFilePlaceEditDialog_SuperDragLeaveEvent(KFilePlaceEditDialog* self, QDragLeaveEvent* event);
    friend void KFilePlaceEditDialog_DropEvent(KFilePlaceEditDialog* self, QDropEvent* event);
    friend void KFilePlaceEditDialog_SuperDropEvent(KFilePlaceEditDialog* self, QDropEvent* event);
    friend void KFilePlaceEditDialog_HideEvent(KFilePlaceEditDialog* self, QHideEvent* event);
    friend void KFilePlaceEditDialog_SuperHideEvent(KFilePlaceEditDialog* self, QHideEvent* event);
    friend bool KFilePlaceEditDialog_NativeEvent(KFilePlaceEditDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KFilePlaceEditDialog_SuperNativeEvent(KFilePlaceEditDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KFilePlaceEditDialog_ChangeEvent(KFilePlaceEditDialog* self, QEvent* param1);
    friend void KFilePlaceEditDialog_SuperChangeEvent(KFilePlaceEditDialog* self, QEvent* param1);
    friend int KFilePlaceEditDialog_Metric(const KFilePlaceEditDialog* self, int param1);
    friend int KFilePlaceEditDialog_SuperMetric(const KFilePlaceEditDialog* self, int param1);
    friend void KFilePlaceEditDialog_InitPainter(const KFilePlaceEditDialog* self, QPainter* painter);
    friend void KFilePlaceEditDialog_SuperInitPainter(const KFilePlaceEditDialog* self, QPainter* painter);
    friend QPaintDevice* KFilePlaceEditDialog_Redirected(const KFilePlaceEditDialog* self, QPoint* offset);
    friend QPaintDevice* KFilePlaceEditDialog_SuperRedirected(const KFilePlaceEditDialog* self, QPoint* offset);
    friend QPainter* KFilePlaceEditDialog_SharedPainter(const KFilePlaceEditDialog* self);
    friend QPainter* KFilePlaceEditDialog_SuperSharedPainter(const KFilePlaceEditDialog* self);
    friend void KFilePlaceEditDialog_InputMethodEvent(KFilePlaceEditDialog* self, QInputMethodEvent* param1);
    friend void KFilePlaceEditDialog_SuperInputMethodEvent(KFilePlaceEditDialog* self, QInputMethodEvent* param1);
    friend bool KFilePlaceEditDialog_FocusNextPrevChild(KFilePlaceEditDialog* self, bool next);
    friend bool KFilePlaceEditDialog_SuperFocusNextPrevChild(KFilePlaceEditDialog* self, bool next);
    friend void KFilePlaceEditDialog_TimerEvent(KFilePlaceEditDialog* self, QTimerEvent* event);
    friend void KFilePlaceEditDialog_SuperTimerEvent(KFilePlaceEditDialog* self, QTimerEvent* event);
    friend void KFilePlaceEditDialog_ChildEvent(KFilePlaceEditDialog* self, QChildEvent* event);
    friend void KFilePlaceEditDialog_SuperChildEvent(KFilePlaceEditDialog* self, QChildEvent* event);
    friend void KFilePlaceEditDialog_CustomEvent(KFilePlaceEditDialog* self, QEvent* event);
    friend void KFilePlaceEditDialog_SuperCustomEvent(KFilePlaceEditDialog* self, QEvent* event);
    friend void KFilePlaceEditDialog_ConnectNotify(KFilePlaceEditDialog* self, const QMetaMethod* signal);
    friend void KFilePlaceEditDialog_SuperConnectNotify(KFilePlaceEditDialog* self, const QMetaMethod* signal);
    friend void KFilePlaceEditDialog_DisconnectNotify(KFilePlaceEditDialog* self, const QMetaMethod* signal);
    friend void KFilePlaceEditDialog_SuperDisconnectNotify(KFilePlaceEditDialog* self, const QMetaMethod* signal);
    friend void KFilePlaceEditDialog_AdjustPosition(KFilePlaceEditDialog* self, QWidget* param1);
    friend void KFilePlaceEditDialog_SuperAdjustPosition(KFilePlaceEditDialog* self, QWidget* param1);
    friend void KFilePlaceEditDialog_UpdateMicroFocus(KFilePlaceEditDialog* self);
    friend void KFilePlaceEditDialog_SuperUpdateMicroFocus(KFilePlaceEditDialog* self);
    friend void KFilePlaceEditDialog_Create(KFilePlaceEditDialog* self);
    friend void KFilePlaceEditDialog_SuperCreate(KFilePlaceEditDialog* self);
    friend void KFilePlaceEditDialog_Destroy(KFilePlaceEditDialog* self);
    friend void KFilePlaceEditDialog_SuperDestroy(KFilePlaceEditDialog* self);
    friend bool KFilePlaceEditDialog_FocusNextChild(KFilePlaceEditDialog* self);
    friend bool KFilePlaceEditDialog_SuperFocusNextChild(KFilePlaceEditDialog* self);
    friend bool KFilePlaceEditDialog_FocusPreviousChild(KFilePlaceEditDialog* self);
    friend bool KFilePlaceEditDialog_SuperFocusPreviousChild(KFilePlaceEditDialog* self);
    friend QObject* KFilePlaceEditDialog_Sender(const KFilePlaceEditDialog* self);
    friend QObject* KFilePlaceEditDialog_SuperSender(const KFilePlaceEditDialog* self);
    friend int KFilePlaceEditDialog_SenderSignalIndex(const KFilePlaceEditDialog* self);
    friend int KFilePlaceEditDialog_SuperSenderSignalIndex(const KFilePlaceEditDialog* self);
    friend int KFilePlaceEditDialog_Receivers(const KFilePlaceEditDialog* self, const char* signal);
    friend int KFilePlaceEditDialog_SuperReceivers(const KFilePlaceEditDialog* self, const char* signal);
    friend bool KFilePlaceEditDialog_IsSignalConnected(const KFilePlaceEditDialog* self, const QMetaMethod* signal);
    friend bool KFilePlaceEditDialog_SuperIsSignalConnected(const KFilePlaceEditDialog* self, const QMetaMethod* signal);
    friend double KFilePlaceEditDialog_GetDecodedMetricF(const KFilePlaceEditDialog* self, int metricA, int metricB);
    friend double KFilePlaceEditDialog_SuperGetDecodedMetricF(const KFilePlaceEditDialog* self, int metricA, int metricB);
};

#endif
