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

    ~VirtualKFilePlaceEditDialog() {
        kfileplaceeditdialog_metacall_callback = nullptr;
        kfileplaceeditdialog_setvisible_callback = nullptr;
        kfileplaceeditdialog_sizehint_callback = nullptr;
        kfileplaceeditdialog_minimumsizehint_callback = nullptr;
        kfileplaceeditdialog_open_callback = nullptr;
        kfileplaceeditdialog_exec_callback = nullptr;
        kfileplaceeditdialog_done_callback = nullptr;
        kfileplaceeditdialog_accept_callback = nullptr;
        kfileplaceeditdialog_reject_callback = nullptr;
        kfileplaceeditdialog_keypressevent_callback = nullptr;
        kfileplaceeditdialog_closeevent_callback = nullptr;
        kfileplaceeditdialog_showevent_callback = nullptr;
        kfileplaceeditdialog_resizeevent_callback = nullptr;
        kfileplaceeditdialog_contextmenuevent_callback = nullptr;
        kfileplaceeditdialog_eventfilter_callback = nullptr;
        kfileplaceeditdialog_devtype_callback = nullptr;
        kfileplaceeditdialog_heightforwidth_callback = nullptr;
        kfileplaceeditdialog_hasheightforwidth_callback = nullptr;
        kfileplaceeditdialog_paintengine_callback = nullptr;
        kfileplaceeditdialog_event_callback = nullptr;
        kfileplaceeditdialog_mousepressevent_callback = nullptr;
        kfileplaceeditdialog_mousereleaseevent_callback = nullptr;
        kfileplaceeditdialog_mousedoubleclickevent_callback = nullptr;
        kfileplaceeditdialog_mousemoveevent_callback = nullptr;
        kfileplaceeditdialog_wheelevent_callback = nullptr;
        kfileplaceeditdialog_keyreleaseevent_callback = nullptr;
        kfileplaceeditdialog_focusinevent_callback = nullptr;
        kfileplaceeditdialog_focusoutevent_callback = nullptr;
        kfileplaceeditdialog_enterevent_callback = nullptr;
        kfileplaceeditdialog_leaveevent_callback = nullptr;
        kfileplaceeditdialog_paintevent_callback = nullptr;
        kfileplaceeditdialog_moveevent_callback = nullptr;
        kfileplaceeditdialog_tabletevent_callback = nullptr;
        kfileplaceeditdialog_actionevent_callback = nullptr;
        kfileplaceeditdialog_dragenterevent_callback = nullptr;
        kfileplaceeditdialog_dragmoveevent_callback = nullptr;
        kfileplaceeditdialog_dragleaveevent_callback = nullptr;
        kfileplaceeditdialog_dropevent_callback = nullptr;
        kfileplaceeditdialog_hideevent_callback = nullptr;
        kfileplaceeditdialog_nativeevent_callback = nullptr;
        kfileplaceeditdialog_changeevent_callback = nullptr;
        kfileplaceeditdialog_metric_callback = nullptr;
        kfileplaceeditdialog_initpainter_callback = nullptr;
        kfileplaceeditdialog_redirected_callback = nullptr;
        kfileplaceeditdialog_sharedpainter_callback = nullptr;
        kfileplaceeditdialog_inputmethodevent_callback = nullptr;
        kfileplaceeditdialog_inputmethodquery_callback = nullptr;
        kfileplaceeditdialog_focusnextprevchild_callback = nullptr;
        kfileplaceeditdialog_timerevent_callback = nullptr;
        kfileplaceeditdialog_childevent_callback = nullptr;
        kfileplaceeditdialog_customevent_callback = nullptr;
        kfileplaceeditdialog_connectnotify_callback = nullptr;
        kfileplaceeditdialog_disconnectnotify_callback = nullptr;
        kfileplaceeditdialog_adjustposition_callback = nullptr;
        kfileplaceeditdialog_updatemicrofocus_callback = nullptr;
        kfileplaceeditdialog_create_callback = nullptr;
        kfileplaceeditdialog_destroy_callback = nullptr;
        kfileplaceeditdialog_focusnextchild_callback = nullptr;
        kfileplaceeditdialog_focuspreviouschild_callback = nullptr;
        kfileplaceeditdialog_sender_callback = nullptr;
        kfileplaceeditdialog_sendersignalindex_callback = nullptr;
        kfileplaceeditdialog_receivers_callback = nullptr;
        kfileplaceeditdialog_issignalconnected_callback = nullptr;
        kfileplaceeditdialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfileplaceeditdialog_metacall_isbase) {
            kfileplaceeditdialog_metacall_isbase = false;
            return KFilePlaceEditDialog::qt_metacall(param1, param2, param3);
        } else if (kfileplaceeditdialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kfileplaceeditdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KFilePlaceEditDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kfileplaceeditdialog_setvisible_isbase) {
            kfileplaceeditdialog_setvisible_isbase = false;
            KFilePlaceEditDialog::setVisible(visible);
        } else if (kfileplaceeditdialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kfileplaceeditdialog_setvisible_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kfileplaceeditdialog_sizehint_isbase) {
            kfileplaceeditdialog_sizehint_isbase = false;
            return KFilePlaceEditDialog::sizeHint();
        } else if (kfileplaceeditdialog_sizehint_callback != nullptr) {
            QSize* callback_ret = kfileplaceeditdialog_sizehint_callback();
            return *callback_ret;
        } else {
            return KFilePlaceEditDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kfileplaceeditdialog_minimumsizehint_isbase) {
            kfileplaceeditdialog_minimumsizehint_isbase = false;
            return KFilePlaceEditDialog::minimumSizeHint();
        } else if (kfileplaceeditdialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kfileplaceeditdialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KFilePlaceEditDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kfileplaceeditdialog_open_isbase) {
            kfileplaceeditdialog_open_isbase = false;
            KFilePlaceEditDialog::open();
        } else if (kfileplaceeditdialog_open_callback != nullptr) {
            kfileplaceeditdialog_open_callback();
        } else {
            KFilePlaceEditDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kfileplaceeditdialog_exec_isbase) {
            kfileplaceeditdialog_exec_isbase = false;
            return KFilePlaceEditDialog::exec();
        } else if (kfileplaceeditdialog_exec_callback != nullptr) {
            int callback_ret = kfileplaceeditdialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFilePlaceEditDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kfileplaceeditdialog_done_isbase) {
            kfileplaceeditdialog_done_isbase = false;
            KFilePlaceEditDialog::done(param1);
        } else if (kfileplaceeditdialog_done_callback != nullptr) {
            int cbval1 = param1;

            kfileplaceeditdialog_done_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kfileplaceeditdialog_accept_isbase) {
            kfileplaceeditdialog_accept_isbase = false;
            KFilePlaceEditDialog::accept();
        } else if (kfileplaceeditdialog_accept_callback != nullptr) {
            kfileplaceeditdialog_accept_callback();
        } else {
            KFilePlaceEditDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kfileplaceeditdialog_reject_isbase) {
            kfileplaceeditdialog_reject_isbase = false;
            KFilePlaceEditDialog::reject();
        } else if (kfileplaceeditdialog_reject_callback != nullptr) {
            kfileplaceeditdialog_reject_callback();
        } else {
            KFilePlaceEditDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kfileplaceeditdialog_keypressevent_isbase) {
            kfileplaceeditdialog_keypressevent_isbase = false;
            KFilePlaceEditDialog::keyPressEvent(param1);
        } else if (kfileplaceeditdialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            kfileplaceeditdialog_keypressevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kfileplaceeditdialog_closeevent_isbase) {
            kfileplaceeditdialog_closeevent_isbase = false;
            KFilePlaceEditDialog::closeEvent(param1);
        } else if (kfileplaceeditdialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            kfileplaceeditdialog_closeevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kfileplaceeditdialog_showevent_isbase) {
            kfileplaceeditdialog_showevent_isbase = false;
            KFilePlaceEditDialog::showEvent(param1);
        } else if (kfileplaceeditdialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            kfileplaceeditdialog_showevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kfileplaceeditdialog_resizeevent_isbase) {
            kfileplaceeditdialog_resizeevent_isbase = false;
            KFilePlaceEditDialog::resizeEvent(param1);
        } else if (kfileplaceeditdialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            kfileplaceeditdialog_resizeevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kfileplaceeditdialog_contextmenuevent_isbase) {
            kfileplaceeditdialog_contextmenuevent_isbase = false;
            KFilePlaceEditDialog::contextMenuEvent(param1);
        } else if (kfileplaceeditdialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            kfileplaceeditdialog_contextmenuevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kfileplaceeditdialog_eventfilter_isbase) {
            kfileplaceeditdialog_eventfilter_isbase = false;
            return KFilePlaceEditDialog::eventFilter(param1, param2);
        } else if (kfileplaceeditdialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = kfileplaceeditdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KFilePlaceEditDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kfileplaceeditdialog_devtype_isbase) {
            kfileplaceeditdialog_devtype_isbase = false;
            return KFilePlaceEditDialog::devType();
        } else if (kfileplaceeditdialog_devtype_callback != nullptr) {
            int callback_ret = kfileplaceeditdialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFilePlaceEditDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kfileplaceeditdialog_heightforwidth_isbase) {
            kfileplaceeditdialog_heightforwidth_isbase = false;
            return KFilePlaceEditDialog::heightForWidth(param1);
        } else if (kfileplaceeditdialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kfileplaceeditdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFilePlaceEditDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kfileplaceeditdialog_hasheightforwidth_isbase) {
            kfileplaceeditdialog_hasheightforwidth_isbase = false;
            return KFilePlaceEditDialog::hasHeightForWidth();
        } else if (kfileplaceeditdialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kfileplaceeditdialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KFilePlaceEditDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kfileplaceeditdialog_paintengine_isbase) {
            kfileplaceeditdialog_paintengine_isbase = false;
            return KFilePlaceEditDialog::paintEngine();
        } else if (kfileplaceeditdialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kfileplaceeditdialog_paintengine_callback();
            return callback_ret;
        } else {
            return KFilePlaceEditDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfileplaceeditdialog_event_isbase) {
            kfileplaceeditdialog_event_isbase = false;
            return KFilePlaceEditDialog::event(event);
        } else if (kfileplaceeditdialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kfileplaceeditdialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFilePlaceEditDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kfileplaceeditdialog_mousepressevent_isbase) {
            kfileplaceeditdialog_mousepressevent_isbase = false;
            KFilePlaceEditDialog::mousePressEvent(event);
        } else if (kfileplaceeditdialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfileplaceeditdialog_mousepressevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kfileplaceeditdialog_mousereleaseevent_isbase) {
            kfileplaceeditdialog_mousereleaseevent_isbase = false;
            KFilePlaceEditDialog::mouseReleaseEvent(event);
        } else if (kfileplaceeditdialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfileplaceeditdialog_mousereleaseevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kfileplaceeditdialog_mousedoubleclickevent_isbase) {
            kfileplaceeditdialog_mousedoubleclickevent_isbase = false;
            KFilePlaceEditDialog::mouseDoubleClickEvent(event);
        } else if (kfileplaceeditdialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfileplaceeditdialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kfileplaceeditdialog_mousemoveevent_isbase) {
            kfileplaceeditdialog_mousemoveevent_isbase = false;
            KFilePlaceEditDialog::mouseMoveEvent(event);
        } else if (kfileplaceeditdialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfileplaceeditdialog_mousemoveevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kfileplaceeditdialog_wheelevent_isbase) {
            kfileplaceeditdialog_wheelevent_isbase = false;
            KFilePlaceEditDialog::wheelEvent(event);
        } else if (kfileplaceeditdialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kfileplaceeditdialog_wheelevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kfileplaceeditdialog_keyreleaseevent_isbase) {
            kfileplaceeditdialog_keyreleaseevent_isbase = false;
            KFilePlaceEditDialog::keyReleaseEvent(event);
        } else if (kfileplaceeditdialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kfileplaceeditdialog_keyreleaseevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kfileplaceeditdialog_focusinevent_isbase) {
            kfileplaceeditdialog_focusinevent_isbase = false;
            KFilePlaceEditDialog::focusInEvent(event);
        } else if (kfileplaceeditdialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kfileplaceeditdialog_focusinevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kfileplaceeditdialog_focusoutevent_isbase) {
            kfileplaceeditdialog_focusoutevent_isbase = false;
            KFilePlaceEditDialog::focusOutEvent(event);
        } else if (kfileplaceeditdialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kfileplaceeditdialog_focusoutevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kfileplaceeditdialog_enterevent_isbase) {
            kfileplaceeditdialog_enterevent_isbase = false;
            KFilePlaceEditDialog::enterEvent(event);
        } else if (kfileplaceeditdialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kfileplaceeditdialog_enterevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kfileplaceeditdialog_leaveevent_isbase) {
            kfileplaceeditdialog_leaveevent_isbase = false;
            KFilePlaceEditDialog::leaveEvent(event);
        } else if (kfileplaceeditdialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kfileplaceeditdialog_leaveevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kfileplaceeditdialog_paintevent_isbase) {
            kfileplaceeditdialog_paintevent_isbase = false;
            KFilePlaceEditDialog::paintEvent(event);
        } else if (kfileplaceeditdialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kfileplaceeditdialog_paintevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kfileplaceeditdialog_moveevent_isbase) {
            kfileplaceeditdialog_moveevent_isbase = false;
            KFilePlaceEditDialog::moveEvent(event);
        } else if (kfileplaceeditdialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kfileplaceeditdialog_moveevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kfileplaceeditdialog_tabletevent_isbase) {
            kfileplaceeditdialog_tabletevent_isbase = false;
            KFilePlaceEditDialog::tabletEvent(event);
        } else if (kfileplaceeditdialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kfileplaceeditdialog_tabletevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kfileplaceeditdialog_actionevent_isbase) {
            kfileplaceeditdialog_actionevent_isbase = false;
            KFilePlaceEditDialog::actionEvent(event);
        } else if (kfileplaceeditdialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kfileplaceeditdialog_actionevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kfileplaceeditdialog_dragenterevent_isbase) {
            kfileplaceeditdialog_dragenterevent_isbase = false;
            KFilePlaceEditDialog::dragEnterEvent(event);
        } else if (kfileplaceeditdialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kfileplaceeditdialog_dragenterevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kfileplaceeditdialog_dragmoveevent_isbase) {
            kfileplaceeditdialog_dragmoveevent_isbase = false;
            KFilePlaceEditDialog::dragMoveEvent(event);
        } else if (kfileplaceeditdialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kfileplaceeditdialog_dragmoveevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kfileplaceeditdialog_dragleaveevent_isbase) {
            kfileplaceeditdialog_dragleaveevent_isbase = false;
            KFilePlaceEditDialog::dragLeaveEvent(event);
        } else if (kfileplaceeditdialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kfileplaceeditdialog_dragleaveevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kfileplaceeditdialog_dropevent_isbase) {
            kfileplaceeditdialog_dropevent_isbase = false;
            KFilePlaceEditDialog::dropEvent(event);
        } else if (kfileplaceeditdialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kfileplaceeditdialog_dropevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kfileplaceeditdialog_hideevent_isbase) {
            kfileplaceeditdialog_hideevent_isbase = false;
            KFilePlaceEditDialog::hideEvent(event);
        } else if (kfileplaceeditdialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kfileplaceeditdialog_hideevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kfileplaceeditdialog_nativeevent_isbase) {
            kfileplaceeditdialog_nativeevent_isbase = false;
            return KFilePlaceEditDialog::nativeEvent(eventType, message, result);
        } else if (kfileplaceeditdialog_nativeevent_callback != nullptr) {
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

            bool callback_ret = kfileplaceeditdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KFilePlaceEditDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kfileplaceeditdialog_changeevent_isbase) {
            kfileplaceeditdialog_changeevent_isbase = false;
            KFilePlaceEditDialog::changeEvent(param1);
        } else if (kfileplaceeditdialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kfileplaceeditdialog_changeevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kfileplaceeditdialog_metric_isbase) {
            kfileplaceeditdialog_metric_isbase = false;
            return KFilePlaceEditDialog::metric(param1);
        } else if (kfileplaceeditdialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kfileplaceeditdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFilePlaceEditDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kfileplaceeditdialog_initpainter_isbase) {
            kfileplaceeditdialog_initpainter_isbase = false;
            KFilePlaceEditDialog::initPainter(painter);
        } else if (kfileplaceeditdialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kfileplaceeditdialog_initpainter_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kfileplaceeditdialog_redirected_isbase) {
            kfileplaceeditdialog_redirected_isbase = false;
            return KFilePlaceEditDialog::redirected(offset);
        } else if (kfileplaceeditdialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kfileplaceeditdialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFilePlaceEditDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kfileplaceeditdialog_sharedpainter_isbase) {
            kfileplaceeditdialog_sharedpainter_isbase = false;
            return KFilePlaceEditDialog::sharedPainter();
        } else if (kfileplaceeditdialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kfileplaceeditdialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return KFilePlaceEditDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kfileplaceeditdialog_inputmethodevent_isbase) {
            kfileplaceeditdialog_inputmethodevent_isbase = false;
            KFilePlaceEditDialog::inputMethodEvent(param1);
        } else if (kfileplaceeditdialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kfileplaceeditdialog_inputmethodevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kfileplaceeditdialog_inputmethodquery_isbase) {
            kfileplaceeditdialog_inputmethodquery_isbase = false;
            return KFilePlaceEditDialog::inputMethodQuery(param1);
        } else if (kfileplaceeditdialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kfileplaceeditdialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KFilePlaceEditDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kfileplaceeditdialog_focusnextprevchild_isbase) {
            kfileplaceeditdialog_focusnextprevchild_isbase = false;
            return KFilePlaceEditDialog::focusNextPrevChild(next);
        } else if (kfileplaceeditdialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kfileplaceeditdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFilePlaceEditDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfileplaceeditdialog_timerevent_isbase) {
            kfileplaceeditdialog_timerevent_isbase = false;
            KFilePlaceEditDialog::timerEvent(event);
        } else if (kfileplaceeditdialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kfileplaceeditdialog_timerevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfileplaceeditdialog_childevent_isbase) {
            kfileplaceeditdialog_childevent_isbase = false;
            KFilePlaceEditDialog::childEvent(event);
        } else if (kfileplaceeditdialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kfileplaceeditdialog_childevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfileplaceeditdialog_customevent_isbase) {
            kfileplaceeditdialog_customevent_isbase = false;
            KFilePlaceEditDialog::customEvent(event);
        } else if (kfileplaceeditdialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kfileplaceeditdialog_customevent_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfileplaceeditdialog_connectnotify_isbase) {
            kfileplaceeditdialog_connectnotify_isbase = false;
            KFilePlaceEditDialog::connectNotify(signal);
        } else if (kfileplaceeditdialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfileplaceeditdialog_connectnotify_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfileplaceeditdialog_disconnectnotify_isbase) {
            kfileplaceeditdialog_disconnectnotify_isbase = false;
            KFilePlaceEditDialog::disconnectNotify(signal);
        } else if (kfileplaceeditdialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfileplaceeditdialog_disconnectnotify_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kfileplaceeditdialog_adjustposition_isbase) {
            kfileplaceeditdialog_adjustposition_isbase = false;
            KFilePlaceEditDialog::adjustPosition(param1);
        } else if (kfileplaceeditdialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            kfileplaceeditdialog_adjustposition_callback(this, cbval1);
        } else {
            KFilePlaceEditDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kfileplaceeditdialog_updatemicrofocus_isbase) {
            kfileplaceeditdialog_updatemicrofocus_isbase = false;
            KFilePlaceEditDialog::updateMicroFocus();
        } else if (kfileplaceeditdialog_updatemicrofocus_callback != nullptr) {
            kfileplaceeditdialog_updatemicrofocus_callback();
        } else {
            KFilePlaceEditDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kfileplaceeditdialog_create_isbase) {
            kfileplaceeditdialog_create_isbase = false;
            KFilePlaceEditDialog::create();
        } else if (kfileplaceeditdialog_create_callback != nullptr) {
            kfileplaceeditdialog_create_callback();
        } else {
            KFilePlaceEditDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kfileplaceeditdialog_destroy_isbase) {
            kfileplaceeditdialog_destroy_isbase = false;
            KFilePlaceEditDialog::destroy();
        } else if (kfileplaceeditdialog_destroy_callback != nullptr) {
            kfileplaceeditdialog_destroy_callback();
        } else {
            KFilePlaceEditDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kfileplaceeditdialog_focusnextchild_isbase) {
            kfileplaceeditdialog_focusnextchild_isbase = false;
            return KFilePlaceEditDialog::focusNextChild();
        } else if (kfileplaceeditdialog_focusnextchild_callback != nullptr) {
            bool callback_ret = kfileplaceeditdialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return KFilePlaceEditDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kfileplaceeditdialog_focuspreviouschild_isbase) {
            kfileplaceeditdialog_focuspreviouschild_isbase = false;
            return KFilePlaceEditDialog::focusPreviousChild();
        } else if (kfileplaceeditdialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kfileplaceeditdialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KFilePlaceEditDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfileplaceeditdialog_sender_isbase) {
            kfileplaceeditdialog_sender_isbase = false;
            return KFilePlaceEditDialog::sender();
        } else if (kfileplaceeditdialog_sender_callback != nullptr) {
            QObject* callback_ret = kfileplaceeditdialog_sender_callback();
            return callback_ret;
        } else {
            return KFilePlaceEditDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfileplaceeditdialog_sendersignalindex_isbase) {
            kfileplaceeditdialog_sendersignalindex_isbase = false;
            return KFilePlaceEditDialog::senderSignalIndex();
        } else if (kfileplaceeditdialog_sendersignalindex_callback != nullptr) {
            int callback_ret = kfileplaceeditdialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFilePlaceEditDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfileplaceeditdialog_receivers_isbase) {
            kfileplaceeditdialog_receivers_isbase = false;
            return KFilePlaceEditDialog::receivers(signal);
        } else if (kfileplaceeditdialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kfileplaceeditdialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFilePlaceEditDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfileplaceeditdialog_issignalconnected_isbase) {
            kfileplaceeditdialog_issignalconnected_isbase = false;
            return KFilePlaceEditDialog::isSignalConnected(signal);
        } else if (kfileplaceeditdialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kfileplaceeditdialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFilePlaceEditDialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kfileplaceeditdialog_getdecodedmetricf_isbase) {
            kfileplaceeditdialog_getdecodedmetricf_isbase = false;
            return KFilePlaceEditDialog::getDecodedMetricF(metricA, metricB);
        } else if (kfileplaceeditdialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kfileplaceeditdialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KFilePlaceEditDialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KFilePlaceEditDialog_KeyPressEvent(KFilePlaceEditDialog* self, QKeyEvent* param1);
    friend void KFilePlaceEditDialog_QBaseKeyPressEvent(KFilePlaceEditDialog* self, QKeyEvent* param1);
    friend void KFilePlaceEditDialog_CloseEvent(KFilePlaceEditDialog* self, QCloseEvent* param1);
    friend void KFilePlaceEditDialog_QBaseCloseEvent(KFilePlaceEditDialog* self, QCloseEvent* param1);
    friend void KFilePlaceEditDialog_ShowEvent(KFilePlaceEditDialog* self, QShowEvent* param1);
    friend void KFilePlaceEditDialog_QBaseShowEvent(KFilePlaceEditDialog* self, QShowEvent* param1);
    friend void KFilePlaceEditDialog_ResizeEvent(KFilePlaceEditDialog* self, QResizeEvent* param1);
    friend void KFilePlaceEditDialog_QBaseResizeEvent(KFilePlaceEditDialog* self, QResizeEvent* param1);
    friend void KFilePlaceEditDialog_ContextMenuEvent(KFilePlaceEditDialog* self, QContextMenuEvent* param1);
    friend void KFilePlaceEditDialog_QBaseContextMenuEvent(KFilePlaceEditDialog* self, QContextMenuEvent* param1);
    friend bool KFilePlaceEditDialog_EventFilter(KFilePlaceEditDialog* self, QObject* param1, QEvent* param2);
    friend bool KFilePlaceEditDialog_QBaseEventFilter(KFilePlaceEditDialog* self, QObject* param1, QEvent* param2);
    friend bool KFilePlaceEditDialog_Event(KFilePlaceEditDialog* self, QEvent* event);
    friend bool KFilePlaceEditDialog_QBaseEvent(KFilePlaceEditDialog* self, QEvent* event);
    friend void KFilePlaceEditDialog_MousePressEvent(KFilePlaceEditDialog* self, QMouseEvent* event);
    friend void KFilePlaceEditDialog_QBaseMousePressEvent(KFilePlaceEditDialog* self, QMouseEvent* event);
    friend void KFilePlaceEditDialog_MouseReleaseEvent(KFilePlaceEditDialog* self, QMouseEvent* event);
    friend void KFilePlaceEditDialog_QBaseMouseReleaseEvent(KFilePlaceEditDialog* self, QMouseEvent* event);
    friend void KFilePlaceEditDialog_MouseDoubleClickEvent(KFilePlaceEditDialog* self, QMouseEvent* event);
    friend void KFilePlaceEditDialog_QBaseMouseDoubleClickEvent(KFilePlaceEditDialog* self, QMouseEvent* event);
    friend void KFilePlaceEditDialog_MouseMoveEvent(KFilePlaceEditDialog* self, QMouseEvent* event);
    friend void KFilePlaceEditDialog_QBaseMouseMoveEvent(KFilePlaceEditDialog* self, QMouseEvent* event);
    friend void KFilePlaceEditDialog_WheelEvent(KFilePlaceEditDialog* self, QWheelEvent* event);
    friend void KFilePlaceEditDialog_QBaseWheelEvent(KFilePlaceEditDialog* self, QWheelEvent* event);
    friend void KFilePlaceEditDialog_KeyReleaseEvent(KFilePlaceEditDialog* self, QKeyEvent* event);
    friend void KFilePlaceEditDialog_QBaseKeyReleaseEvent(KFilePlaceEditDialog* self, QKeyEvent* event);
    friend void KFilePlaceEditDialog_FocusInEvent(KFilePlaceEditDialog* self, QFocusEvent* event);
    friend void KFilePlaceEditDialog_QBaseFocusInEvent(KFilePlaceEditDialog* self, QFocusEvent* event);
    friend void KFilePlaceEditDialog_FocusOutEvent(KFilePlaceEditDialog* self, QFocusEvent* event);
    friend void KFilePlaceEditDialog_QBaseFocusOutEvent(KFilePlaceEditDialog* self, QFocusEvent* event);
    friend void KFilePlaceEditDialog_EnterEvent(KFilePlaceEditDialog* self, QEnterEvent* event);
    friend void KFilePlaceEditDialog_QBaseEnterEvent(KFilePlaceEditDialog* self, QEnterEvent* event);
    friend void KFilePlaceEditDialog_LeaveEvent(KFilePlaceEditDialog* self, QEvent* event);
    friend void KFilePlaceEditDialog_QBaseLeaveEvent(KFilePlaceEditDialog* self, QEvent* event);
    friend void KFilePlaceEditDialog_PaintEvent(KFilePlaceEditDialog* self, QPaintEvent* event);
    friend void KFilePlaceEditDialog_QBasePaintEvent(KFilePlaceEditDialog* self, QPaintEvent* event);
    friend void KFilePlaceEditDialog_MoveEvent(KFilePlaceEditDialog* self, QMoveEvent* event);
    friend void KFilePlaceEditDialog_QBaseMoveEvent(KFilePlaceEditDialog* self, QMoveEvent* event);
    friend void KFilePlaceEditDialog_TabletEvent(KFilePlaceEditDialog* self, QTabletEvent* event);
    friend void KFilePlaceEditDialog_QBaseTabletEvent(KFilePlaceEditDialog* self, QTabletEvent* event);
    friend void KFilePlaceEditDialog_ActionEvent(KFilePlaceEditDialog* self, QActionEvent* event);
    friend void KFilePlaceEditDialog_QBaseActionEvent(KFilePlaceEditDialog* self, QActionEvent* event);
    friend void KFilePlaceEditDialog_DragEnterEvent(KFilePlaceEditDialog* self, QDragEnterEvent* event);
    friend void KFilePlaceEditDialog_QBaseDragEnterEvent(KFilePlaceEditDialog* self, QDragEnterEvent* event);
    friend void KFilePlaceEditDialog_DragMoveEvent(KFilePlaceEditDialog* self, QDragMoveEvent* event);
    friend void KFilePlaceEditDialog_QBaseDragMoveEvent(KFilePlaceEditDialog* self, QDragMoveEvent* event);
    friend void KFilePlaceEditDialog_DragLeaveEvent(KFilePlaceEditDialog* self, QDragLeaveEvent* event);
    friend void KFilePlaceEditDialog_QBaseDragLeaveEvent(KFilePlaceEditDialog* self, QDragLeaveEvent* event);
    friend void KFilePlaceEditDialog_DropEvent(KFilePlaceEditDialog* self, QDropEvent* event);
    friend void KFilePlaceEditDialog_QBaseDropEvent(KFilePlaceEditDialog* self, QDropEvent* event);
    friend void KFilePlaceEditDialog_HideEvent(KFilePlaceEditDialog* self, QHideEvent* event);
    friend void KFilePlaceEditDialog_QBaseHideEvent(KFilePlaceEditDialog* self, QHideEvent* event);
    friend bool KFilePlaceEditDialog_NativeEvent(KFilePlaceEditDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KFilePlaceEditDialog_QBaseNativeEvent(KFilePlaceEditDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KFilePlaceEditDialog_ChangeEvent(KFilePlaceEditDialog* self, QEvent* param1);
    friend void KFilePlaceEditDialog_QBaseChangeEvent(KFilePlaceEditDialog* self, QEvent* param1);
    friend int KFilePlaceEditDialog_Metric(const KFilePlaceEditDialog* self, int param1);
    friend int KFilePlaceEditDialog_QBaseMetric(const KFilePlaceEditDialog* self, int param1);
    friend void KFilePlaceEditDialog_InitPainter(const KFilePlaceEditDialog* self, QPainter* painter);
    friend void KFilePlaceEditDialog_QBaseInitPainter(const KFilePlaceEditDialog* self, QPainter* painter);
    friend QPaintDevice* KFilePlaceEditDialog_Redirected(const KFilePlaceEditDialog* self, QPoint* offset);
    friend QPaintDevice* KFilePlaceEditDialog_QBaseRedirected(const KFilePlaceEditDialog* self, QPoint* offset);
    friend QPainter* KFilePlaceEditDialog_SharedPainter(const KFilePlaceEditDialog* self);
    friend QPainter* KFilePlaceEditDialog_QBaseSharedPainter(const KFilePlaceEditDialog* self);
    friend void KFilePlaceEditDialog_InputMethodEvent(KFilePlaceEditDialog* self, QInputMethodEvent* param1);
    friend void KFilePlaceEditDialog_QBaseInputMethodEvent(KFilePlaceEditDialog* self, QInputMethodEvent* param1);
    friend bool KFilePlaceEditDialog_FocusNextPrevChild(KFilePlaceEditDialog* self, bool next);
    friend bool KFilePlaceEditDialog_QBaseFocusNextPrevChild(KFilePlaceEditDialog* self, bool next);
    friend void KFilePlaceEditDialog_TimerEvent(KFilePlaceEditDialog* self, QTimerEvent* event);
    friend void KFilePlaceEditDialog_QBaseTimerEvent(KFilePlaceEditDialog* self, QTimerEvent* event);
    friend void KFilePlaceEditDialog_ChildEvent(KFilePlaceEditDialog* self, QChildEvent* event);
    friend void KFilePlaceEditDialog_QBaseChildEvent(KFilePlaceEditDialog* self, QChildEvent* event);
    friend void KFilePlaceEditDialog_CustomEvent(KFilePlaceEditDialog* self, QEvent* event);
    friend void KFilePlaceEditDialog_QBaseCustomEvent(KFilePlaceEditDialog* self, QEvent* event);
    friend void KFilePlaceEditDialog_ConnectNotify(KFilePlaceEditDialog* self, const QMetaMethod* signal);
    friend void KFilePlaceEditDialog_QBaseConnectNotify(KFilePlaceEditDialog* self, const QMetaMethod* signal);
    friend void KFilePlaceEditDialog_DisconnectNotify(KFilePlaceEditDialog* self, const QMetaMethod* signal);
    friend void KFilePlaceEditDialog_QBaseDisconnectNotify(KFilePlaceEditDialog* self, const QMetaMethod* signal);
    friend void KFilePlaceEditDialog_AdjustPosition(KFilePlaceEditDialog* self, QWidget* param1);
    friend void KFilePlaceEditDialog_QBaseAdjustPosition(KFilePlaceEditDialog* self, QWidget* param1);
    friend void KFilePlaceEditDialog_UpdateMicroFocus(KFilePlaceEditDialog* self);
    friend void KFilePlaceEditDialog_QBaseUpdateMicroFocus(KFilePlaceEditDialog* self);
    friend void KFilePlaceEditDialog_Create(KFilePlaceEditDialog* self);
    friend void KFilePlaceEditDialog_QBaseCreate(KFilePlaceEditDialog* self);
    friend void KFilePlaceEditDialog_Destroy(KFilePlaceEditDialog* self);
    friend void KFilePlaceEditDialog_QBaseDestroy(KFilePlaceEditDialog* self);
    friend bool KFilePlaceEditDialog_FocusNextChild(KFilePlaceEditDialog* self);
    friend bool KFilePlaceEditDialog_QBaseFocusNextChild(KFilePlaceEditDialog* self);
    friend bool KFilePlaceEditDialog_FocusPreviousChild(KFilePlaceEditDialog* self);
    friend bool KFilePlaceEditDialog_QBaseFocusPreviousChild(KFilePlaceEditDialog* self);
    friend QObject* KFilePlaceEditDialog_Sender(const KFilePlaceEditDialog* self);
    friend QObject* KFilePlaceEditDialog_QBaseSender(const KFilePlaceEditDialog* self);
    friend int KFilePlaceEditDialog_SenderSignalIndex(const KFilePlaceEditDialog* self);
    friend int KFilePlaceEditDialog_QBaseSenderSignalIndex(const KFilePlaceEditDialog* self);
    friend int KFilePlaceEditDialog_Receivers(const KFilePlaceEditDialog* self, const char* signal);
    friend int KFilePlaceEditDialog_QBaseReceivers(const KFilePlaceEditDialog* self, const char* signal);
    friend bool KFilePlaceEditDialog_IsSignalConnected(const KFilePlaceEditDialog* self, const QMetaMethod* signal);
    friend bool KFilePlaceEditDialog_QBaseIsSignalConnected(const KFilePlaceEditDialog* self, const QMetaMethod* signal);
    friend double KFilePlaceEditDialog_GetDecodedMetricF(const KFilePlaceEditDialog* self, int metricA, int metricB);
    friend double KFilePlaceEditDialog_QBaseGetDecodedMetricF(const KFilePlaceEditDialog* self, int metricA, int metricB);
};

#endif
