#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALRENAMEDIALOG_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALRENAMEDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::RenameDialog so that we can call protected methods
class VirtualKIORenameDialog final : public KIO::RenameDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKIORenameDialog = true;

    // Virtual class public types (including callbacks)
    using KIO__RenameDialog_Metacall_Callback = int (*)(KIO__RenameDialog*, int, int, void**);
    using KIO__RenameDialog_SetVisible_Callback = void (*)(KIO__RenameDialog*, bool);
    using KIO__RenameDialog_SizeHint_Callback = QSize* (*)();
    using KIO__RenameDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KIO__RenameDialog_Open_Callback = void (*)();
    using KIO__RenameDialog_Exec_Callback = int (*)();
    using KIO__RenameDialog_Done_Callback = void (*)(KIO__RenameDialog*, int);
    using KIO__RenameDialog_Accept_Callback = void (*)();
    using KIO__RenameDialog_Reject_Callback = void (*)();
    using KIO__RenameDialog_KeyPressEvent_Callback = void (*)(KIO__RenameDialog*, QKeyEvent*);
    using KIO__RenameDialog_CloseEvent_Callback = void (*)(KIO__RenameDialog*, QCloseEvent*);
    using KIO__RenameDialog_ShowEvent_Callback = void (*)(KIO__RenameDialog*, QShowEvent*);
    using KIO__RenameDialog_ResizeEvent_Callback = void (*)(KIO__RenameDialog*, QResizeEvent*);
    using KIO__RenameDialog_ContextMenuEvent_Callback = void (*)(KIO__RenameDialog*, QContextMenuEvent*);
    using KIO__RenameDialog_EventFilter_Callback = bool (*)(KIO__RenameDialog*, QObject*, QEvent*);
    using KIO__RenameDialog_DevType_Callback = int (*)();
    using KIO__RenameDialog_HeightForWidth_Callback = int (*)(const KIO__RenameDialog*, int);
    using KIO__RenameDialog_HasHeightForWidth_Callback = bool (*)();
    using KIO__RenameDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KIO__RenameDialog_Event_Callback = bool (*)(KIO__RenameDialog*, QEvent*);
    using KIO__RenameDialog_MousePressEvent_Callback = void (*)(KIO__RenameDialog*, QMouseEvent*);
    using KIO__RenameDialog_MouseReleaseEvent_Callback = void (*)(KIO__RenameDialog*, QMouseEvent*);
    using KIO__RenameDialog_MouseDoubleClickEvent_Callback = void (*)(KIO__RenameDialog*, QMouseEvent*);
    using KIO__RenameDialog_MouseMoveEvent_Callback = void (*)(KIO__RenameDialog*, QMouseEvent*);
    using KIO__RenameDialog_WheelEvent_Callback = void (*)(KIO__RenameDialog*, QWheelEvent*);
    using KIO__RenameDialog_KeyReleaseEvent_Callback = void (*)(KIO__RenameDialog*, QKeyEvent*);
    using KIO__RenameDialog_FocusInEvent_Callback = void (*)(KIO__RenameDialog*, QFocusEvent*);
    using KIO__RenameDialog_FocusOutEvent_Callback = void (*)(KIO__RenameDialog*, QFocusEvent*);
    using KIO__RenameDialog_EnterEvent_Callback = void (*)(KIO__RenameDialog*, QEnterEvent*);
    using KIO__RenameDialog_LeaveEvent_Callback = void (*)(KIO__RenameDialog*, QEvent*);
    using KIO__RenameDialog_PaintEvent_Callback = void (*)(KIO__RenameDialog*, QPaintEvent*);
    using KIO__RenameDialog_MoveEvent_Callback = void (*)(KIO__RenameDialog*, QMoveEvent*);
    using KIO__RenameDialog_TabletEvent_Callback = void (*)(KIO__RenameDialog*, QTabletEvent*);
    using KIO__RenameDialog_ActionEvent_Callback = void (*)(KIO__RenameDialog*, QActionEvent*);
    using KIO__RenameDialog_DragEnterEvent_Callback = void (*)(KIO__RenameDialog*, QDragEnterEvent*);
    using KIO__RenameDialog_DragMoveEvent_Callback = void (*)(KIO__RenameDialog*, QDragMoveEvent*);
    using KIO__RenameDialog_DragLeaveEvent_Callback = void (*)(KIO__RenameDialog*, QDragLeaveEvent*);
    using KIO__RenameDialog_DropEvent_Callback = void (*)(KIO__RenameDialog*, QDropEvent*);
    using KIO__RenameDialog_HideEvent_Callback = void (*)(KIO__RenameDialog*, QHideEvent*);
    using KIO__RenameDialog_NativeEvent_Callback = bool (*)(KIO__RenameDialog*, libqt_string, void*, intptr_t*);
    using KIO__RenameDialog_ChangeEvent_Callback = void (*)(KIO__RenameDialog*, QEvent*);
    using KIO__RenameDialog_Metric_Callback = int (*)(const KIO__RenameDialog*, int);
    using KIO__RenameDialog_InitPainter_Callback = void (*)(const KIO__RenameDialog*, QPainter*);
    using KIO__RenameDialog_Redirected_Callback = QPaintDevice* (*)(const KIO__RenameDialog*, QPoint*);
    using KIO__RenameDialog_SharedPainter_Callback = QPainter* (*)();
    using KIO__RenameDialog_InputMethodEvent_Callback = void (*)(KIO__RenameDialog*, QInputMethodEvent*);
    using KIO__RenameDialog_InputMethodQuery_Callback = QVariant* (*)(const KIO__RenameDialog*, int);
    using KIO__RenameDialog_FocusNextPrevChild_Callback = bool (*)(KIO__RenameDialog*, bool);
    using KIO__RenameDialog_TimerEvent_Callback = void (*)(KIO__RenameDialog*, QTimerEvent*);
    using KIO__RenameDialog_ChildEvent_Callback = void (*)(KIO__RenameDialog*, QChildEvent*);
    using KIO__RenameDialog_CustomEvent_Callback = void (*)(KIO__RenameDialog*, QEvent*);
    using KIO__RenameDialog_ConnectNotify_Callback = void (*)(KIO__RenameDialog*, QMetaMethod*);
    using KIO__RenameDialog_DisconnectNotify_Callback = void (*)(KIO__RenameDialog*, QMetaMethod*);
    using KIO__RenameDialog_EnableRenameButton_Callback = void (*)(KIO__RenameDialog*, libqt_string);
    using KIO__RenameDialog_AdjustPosition_Callback = void (*)(KIO__RenameDialog*, QWidget*);
    using KIO__RenameDialog_UpdateMicroFocus_Callback = void (*)();
    using KIO__RenameDialog_Create_Callback = void (*)();
    using KIO__RenameDialog_Destroy_Callback = void (*)();
    using KIO__RenameDialog_FocusNextChild_Callback = bool (*)();
    using KIO__RenameDialog_FocusPreviousChild_Callback = bool (*)();
    using KIO__RenameDialog_Sender_Callback = QObject* (*)();
    using KIO__RenameDialog_SenderSignalIndex_Callback = int (*)();
    using KIO__RenameDialog_Receivers_Callback = int (*)(const KIO__RenameDialog*, const char*);
    using KIO__RenameDialog_IsSignalConnected_Callback = bool (*)(const KIO__RenameDialog*, QMetaMethod*);
    using KIO__RenameDialog_GetDecodedMetricF_Callback = double (*)(const KIO__RenameDialog*, int, int);

  protected:
    // Instance callback storage
    KIO__RenameDialog_Metacall_Callback kio__renamedialog_metacall_callback = nullptr;
    KIO__RenameDialog_SetVisible_Callback kio__renamedialog_setvisible_callback = nullptr;
    KIO__RenameDialog_SizeHint_Callback kio__renamedialog_sizehint_callback = nullptr;
    KIO__RenameDialog_MinimumSizeHint_Callback kio__renamedialog_minimumsizehint_callback = nullptr;
    KIO__RenameDialog_Open_Callback kio__renamedialog_open_callback = nullptr;
    KIO__RenameDialog_Exec_Callback kio__renamedialog_exec_callback = nullptr;
    KIO__RenameDialog_Done_Callback kio__renamedialog_done_callback = nullptr;
    KIO__RenameDialog_Accept_Callback kio__renamedialog_accept_callback = nullptr;
    KIO__RenameDialog_Reject_Callback kio__renamedialog_reject_callback = nullptr;
    KIO__RenameDialog_KeyPressEvent_Callback kio__renamedialog_keypressevent_callback = nullptr;
    KIO__RenameDialog_CloseEvent_Callback kio__renamedialog_closeevent_callback = nullptr;
    KIO__RenameDialog_ShowEvent_Callback kio__renamedialog_showevent_callback = nullptr;
    KIO__RenameDialog_ResizeEvent_Callback kio__renamedialog_resizeevent_callback = nullptr;
    KIO__RenameDialog_ContextMenuEvent_Callback kio__renamedialog_contextmenuevent_callback = nullptr;
    KIO__RenameDialog_EventFilter_Callback kio__renamedialog_eventfilter_callback = nullptr;
    KIO__RenameDialog_DevType_Callback kio__renamedialog_devtype_callback = nullptr;
    KIO__RenameDialog_HeightForWidth_Callback kio__renamedialog_heightforwidth_callback = nullptr;
    KIO__RenameDialog_HasHeightForWidth_Callback kio__renamedialog_hasheightforwidth_callback = nullptr;
    KIO__RenameDialog_PaintEngine_Callback kio__renamedialog_paintengine_callback = nullptr;
    KIO__RenameDialog_Event_Callback kio__renamedialog_event_callback = nullptr;
    KIO__RenameDialog_MousePressEvent_Callback kio__renamedialog_mousepressevent_callback = nullptr;
    KIO__RenameDialog_MouseReleaseEvent_Callback kio__renamedialog_mousereleaseevent_callback = nullptr;
    KIO__RenameDialog_MouseDoubleClickEvent_Callback kio__renamedialog_mousedoubleclickevent_callback = nullptr;
    KIO__RenameDialog_MouseMoveEvent_Callback kio__renamedialog_mousemoveevent_callback = nullptr;
    KIO__RenameDialog_WheelEvent_Callback kio__renamedialog_wheelevent_callback = nullptr;
    KIO__RenameDialog_KeyReleaseEvent_Callback kio__renamedialog_keyreleaseevent_callback = nullptr;
    KIO__RenameDialog_FocusInEvent_Callback kio__renamedialog_focusinevent_callback = nullptr;
    KIO__RenameDialog_FocusOutEvent_Callback kio__renamedialog_focusoutevent_callback = nullptr;
    KIO__RenameDialog_EnterEvent_Callback kio__renamedialog_enterevent_callback = nullptr;
    KIO__RenameDialog_LeaveEvent_Callback kio__renamedialog_leaveevent_callback = nullptr;
    KIO__RenameDialog_PaintEvent_Callback kio__renamedialog_paintevent_callback = nullptr;
    KIO__RenameDialog_MoveEvent_Callback kio__renamedialog_moveevent_callback = nullptr;
    KIO__RenameDialog_TabletEvent_Callback kio__renamedialog_tabletevent_callback = nullptr;
    KIO__RenameDialog_ActionEvent_Callback kio__renamedialog_actionevent_callback = nullptr;
    KIO__RenameDialog_DragEnterEvent_Callback kio__renamedialog_dragenterevent_callback = nullptr;
    KIO__RenameDialog_DragMoveEvent_Callback kio__renamedialog_dragmoveevent_callback = nullptr;
    KIO__RenameDialog_DragLeaveEvent_Callback kio__renamedialog_dragleaveevent_callback = nullptr;
    KIO__RenameDialog_DropEvent_Callback kio__renamedialog_dropevent_callback = nullptr;
    KIO__RenameDialog_HideEvent_Callback kio__renamedialog_hideevent_callback = nullptr;
    KIO__RenameDialog_NativeEvent_Callback kio__renamedialog_nativeevent_callback = nullptr;
    KIO__RenameDialog_ChangeEvent_Callback kio__renamedialog_changeevent_callback = nullptr;
    KIO__RenameDialog_Metric_Callback kio__renamedialog_metric_callback = nullptr;
    KIO__RenameDialog_InitPainter_Callback kio__renamedialog_initpainter_callback = nullptr;
    KIO__RenameDialog_Redirected_Callback kio__renamedialog_redirected_callback = nullptr;
    KIO__RenameDialog_SharedPainter_Callback kio__renamedialog_sharedpainter_callback = nullptr;
    KIO__RenameDialog_InputMethodEvent_Callback kio__renamedialog_inputmethodevent_callback = nullptr;
    KIO__RenameDialog_InputMethodQuery_Callback kio__renamedialog_inputmethodquery_callback = nullptr;
    KIO__RenameDialog_FocusNextPrevChild_Callback kio__renamedialog_focusnextprevchild_callback = nullptr;
    KIO__RenameDialog_TimerEvent_Callback kio__renamedialog_timerevent_callback = nullptr;
    KIO__RenameDialog_ChildEvent_Callback kio__renamedialog_childevent_callback = nullptr;
    KIO__RenameDialog_CustomEvent_Callback kio__renamedialog_customevent_callback = nullptr;
    KIO__RenameDialog_ConnectNotify_Callback kio__renamedialog_connectnotify_callback = nullptr;
    KIO__RenameDialog_DisconnectNotify_Callback kio__renamedialog_disconnectnotify_callback = nullptr;
    KIO__RenameDialog_EnableRenameButton_Callback kio__renamedialog_enablerenamebutton_callback = nullptr;
    KIO__RenameDialog_AdjustPosition_Callback kio__renamedialog_adjustposition_callback = nullptr;
    KIO__RenameDialog_UpdateMicroFocus_Callback kio__renamedialog_updatemicrofocus_callback = nullptr;
    KIO__RenameDialog_Create_Callback kio__renamedialog_create_callback = nullptr;
    KIO__RenameDialog_Destroy_Callback kio__renamedialog_destroy_callback = nullptr;
    KIO__RenameDialog_FocusNextChild_Callback kio__renamedialog_focusnextchild_callback = nullptr;
    KIO__RenameDialog_FocusPreviousChild_Callback kio__renamedialog_focuspreviouschild_callback = nullptr;
    KIO__RenameDialog_Sender_Callback kio__renamedialog_sender_callback = nullptr;
    KIO__RenameDialog_SenderSignalIndex_Callback kio__renamedialog_sendersignalindex_callback = nullptr;
    KIO__RenameDialog_Receivers_Callback kio__renamedialog_receivers_callback = nullptr;
    KIO__RenameDialog_IsSignalConnected_Callback kio__renamedialog_issignalconnected_callback = nullptr;
    KIO__RenameDialog_GetDecodedMetricF_Callback kio__renamedialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kio__renamedialog_metacall_isbase = false;
    mutable bool kio__renamedialog_setvisible_isbase = false;
    mutable bool kio__renamedialog_sizehint_isbase = false;
    mutable bool kio__renamedialog_minimumsizehint_isbase = false;
    mutable bool kio__renamedialog_open_isbase = false;
    mutable bool kio__renamedialog_exec_isbase = false;
    mutable bool kio__renamedialog_done_isbase = false;
    mutable bool kio__renamedialog_accept_isbase = false;
    mutable bool kio__renamedialog_reject_isbase = false;
    mutable bool kio__renamedialog_keypressevent_isbase = false;
    mutable bool kio__renamedialog_closeevent_isbase = false;
    mutable bool kio__renamedialog_showevent_isbase = false;
    mutable bool kio__renamedialog_resizeevent_isbase = false;
    mutable bool kio__renamedialog_contextmenuevent_isbase = false;
    mutable bool kio__renamedialog_eventfilter_isbase = false;
    mutable bool kio__renamedialog_devtype_isbase = false;
    mutable bool kio__renamedialog_heightforwidth_isbase = false;
    mutable bool kio__renamedialog_hasheightforwidth_isbase = false;
    mutable bool kio__renamedialog_paintengine_isbase = false;
    mutable bool kio__renamedialog_event_isbase = false;
    mutable bool kio__renamedialog_mousepressevent_isbase = false;
    mutable bool kio__renamedialog_mousereleaseevent_isbase = false;
    mutable bool kio__renamedialog_mousedoubleclickevent_isbase = false;
    mutable bool kio__renamedialog_mousemoveevent_isbase = false;
    mutable bool kio__renamedialog_wheelevent_isbase = false;
    mutable bool kio__renamedialog_keyreleaseevent_isbase = false;
    mutable bool kio__renamedialog_focusinevent_isbase = false;
    mutable bool kio__renamedialog_focusoutevent_isbase = false;
    mutable bool kio__renamedialog_enterevent_isbase = false;
    mutable bool kio__renamedialog_leaveevent_isbase = false;
    mutable bool kio__renamedialog_paintevent_isbase = false;
    mutable bool kio__renamedialog_moveevent_isbase = false;
    mutable bool kio__renamedialog_tabletevent_isbase = false;
    mutable bool kio__renamedialog_actionevent_isbase = false;
    mutable bool kio__renamedialog_dragenterevent_isbase = false;
    mutable bool kio__renamedialog_dragmoveevent_isbase = false;
    mutable bool kio__renamedialog_dragleaveevent_isbase = false;
    mutable bool kio__renamedialog_dropevent_isbase = false;
    mutable bool kio__renamedialog_hideevent_isbase = false;
    mutable bool kio__renamedialog_nativeevent_isbase = false;
    mutable bool kio__renamedialog_changeevent_isbase = false;
    mutable bool kio__renamedialog_metric_isbase = false;
    mutable bool kio__renamedialog_initpainter_isbase = false;
    mutable bool kio__renamedialog_redirected_isbase = false;
    mutable bool kio__renamedialog_sharedpainter_isbase = false;
    mutable bool kio__renamedialog_inputmethodevent_isbase = false;
    mutable bool kio__renamedialog_inputmethodquery_isbase = false;
    mutable bool kio__renamedialog_focusnextprevchild_isbase = false;
    mutable bool kio__renamedialog_timerevent_isbase = false;
    mutable bool kio__renamedialog_childevent_isbase = false;
    mutable bool kio__renamedialog_customevent_isbase = false;
    mutable bool kio__renamedialog_connectnotify_isbase = false;
    mutable bool kio__renamedialog_disconnectnotify_isbase = false;
    mutable bool kio__renamedialog_enablerenamebutton_isbase = false;
    mutable bool kio__renamedialog_adjustposition_isbase = false;
    mutable bool kio__renamedialog_updatemicrofocus_isbase = false;
    mutable bool kio__renamedialog_create_isbase = false;
    mutable bool kio__renamedialog_destroy_isbase = false;
    mutable bool kio__renamedialog_focusnextchild_isbase = false;
    mutable bool kio__renamedialog_focuspreviouschild_isbase = false;
    mutable bool kio__renamedialog_sender_isbase = false;
    mutable bool kio__renamedialog_sendersignalindex_isbase = false;
    mutable bool kio__renamedialog_receivers_isbase = false;
    mutable bool kio__renamedialog_issignalconnected_isbase = false;
    mutable bool kio__renamedialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKIORenameDialog(QWidget* parent, const QString& title, const QUrl& src, const QUrl& dest, KIO::RenameDialog_Options options) : KIO::RenameDialog(parent, title, src, dest, options) {};
    VirtualKIORenameDialog(QWidget* parent, const QString& title, const QUrl& src, const QUrl& dest, KIO::RenameDialog_Options options, KIO::filesize_t sizeSrc) : KIO::RenameDialog(parent, title, src, dest, options, sizeSrc) {};
    VirtualKIORenameDialog(QWidget* parent, const QString& title, const QUrl& src, const QUrl& dest, KIO::RenameDialog_Options options, KIO::filesize_t sizeSrc, KIO::filesize_t sizeDest) : KIO::RenameDialog(parent, title, src, dest, options, sizeSrc, sizeDest) {};
    VirtualKIORenameDialog(QWidget* parent, const QString& title, const QUrl& src, const QUrl& dest, KIO::RenameDialog_Options options, KIO::filesize_t sizeSrc, KIO::filesize_t sizeDest, const QDateTime& ctimeSrc) : KIO::RenameDialog(parent, title, src, dest, options, sizeSrc, sizeDest, ctimeSrc) {};
    VirtualKIORenameDialog(QWidget* parent, const QString& title, const QUrl& src, const QUrl& dest, KIO::RenameDialog_Options options, KIO::filesize_t sizeSrc, KIO::filesize_t sizeDest, const QDateTime& ctimeSrc, const QDateTime& ctimeDest) : KIO::RenameDialog(parent, title, src, dest, options, sizeSrc, sizeDest, ctimeSrc, ctimeDest) {};
    VirtualKIORenameDialog(QWidget* parent, const QString& title, const QUrl& src, const QUrl& dest, KIO::RenameDialog_Options options, KIO::filesize_t sizeSrc, KIO::filesize_t sizeDest, const QDateTime& ctimeSrc, const QDateTime& ctimeDest, const QDateTime& mtimeSrc) : KIO::RenameDialog(parent, title, src, dest, options, sizeSrc, sizeDest, ctimeSrc, ctimeDest, mtimeSrc) {};
    VirtualKIORenameDialog(QWidget* parent, const QString& title, const QUrl& src, const QUrl& dest, KIO::RenameDialog_Options options, KIO::filesize_t sizeSrc, KIO::filesize_t sizeDest, const QDateTime& ctimeSrc, const QDateTime& ctimeDest, const QDateTime& mtimeSrc, const QDateTime& mtimeDest) : KIO::RenameDialog(parent, title, src, dest, options, sizeSrc, sizeDest, ctimeSrc, ctimeDest, mtimeSrc, mtimeDest) {};

    ~VirtualKIORenameDialog() {
        kio__renamedialog_metacall_callback = nullptr;
        kio__renamedialog_setvisible_callback = nullptr;
        kio__renamedialog_sizehint_callback = nullptr;
        kio__renamedialog_minimumsizehint_callback = nullptr;
        kio__renamedialog_open_callback = nullptr;
        kio__renamedialog_exec_callback = nullptr;
        kio__renamedialog_done_callback = nullptr;
        kio__renamedialog_accept_callback = nullptr;
        kio__renamedialog_reject_callback = nullptr;
        kio__renamedialog_keypressevent_callback = nullptr;
        kio__renamedialog_closeevent_callback = nullptr;
        kio__renamedialog_showevent_callback = nullptr;
        kio__renamedialog_resizeevent_callback = nullptr;
        kio__renamedialog_contextmenuevent_callback = nullptr;
        kio__renamedialog_eventfilter_callback = nullptr;
        kio__renamedialog_devtype_callback = nullptr;
        kio__renamedialog_heightforwidth_callback = nullptr;
        kio__renamedialog_hasheightforwidth_callback = nullptr;
        kio__renamedialog_paintengine_callback = nullptr;
        kio__renamedialog_event_callback = nullptr;
        kio__renamedialog_mousepressevent_callback = nullptr;
        kio__renamedialog_mousereleaseevent_callback = nullptr;
        kio__renamedialog_mousedoubleclickevent_callback = nullptr;
        kio__renamedialog_mousemoveevent_callback = nullptr;
        kio__renamedialog_wheelevent_callback = nullptr;
        kio__renamedialog_keyreleaseevent_callback = nullptr;
        kio__renamedialog_focusinevent_callback = nullptr;
        kio__renamedialog_focusoutevent_callback = nullptr;
        kio__renamedialog_enterevent_callback = nullptr;
        kio__renamedialog_leaveevent_callback = nullptr;
        kio__renamedialog_paintevent_callback = nullptr;
        kio__renamedialog_moveevent_callback = nullptr;
        kio__renamedialog_tabletevent_callback = nullptr;
        kio__renamedialog_actionevent_callback = nullptr;
        kio__renamedialog_dragenterevent_callback = nullptr;
        kio__renamedialog_dragmoveevent_callback = nullptr;
        kio__renamedialog_dragleaveevent_callback = nullptr;
        kio__renamedialog_dropevent_callback = nullptr;
        kio__renamedialog_hideevent_callback = nullptr;
        kio__renamedialog_nativeevent_callback = nullptr;
        kio__renamedialog_changeevent_callback = nullptr;
        kio__renamedialog_metric_callback = nullptr;
        kio__renamedialog_initpainter_callback = nullptr;
        kio__renamedialog_redirected_callback = nullptr;
        kio__renamedialog_sharedpainter_callback = nullptr;
        kio__renamedialog_inputmethodevent_callback = nullptr;
        kio__renamedialog_inputmethodquery_callback = nullptr;
        kio__renamedialog_focusnextprevchild_callback = nullptr;
        kio__renamedialog_timerevent_callback = nullptr;
        kio__renamedialog_childevent_callback = nullptr;
        kio__renamedialog_customevent_callback = nullptr;
        kio__renamedialog_connectnotify_callback = nullptr;
        kio__renamedialog_disconnectnotify_callback = nullptr;
        kio__renamedialog_enablerenamebutton_callback = nullptr;
        kio__renamedialog_adjustposition_callback = nullptr;
        kio__renamedialog_updatemicrofocus_callback = nullptr;
        kio__renamedialog_create_callback = nullptr;
        kio__renamedialog_destroy_callback = nullptr;
        kio__renamedialog_focusnextchild_callback = nullptr;
        kio__renamedialog_focuspreviouschild_callback = nullptr;
        kio__renamedialog_sender_callback = nullptr;
        kio__renamedialog_sendersignalindex_callback = nullptr;
        kio__renamedialog_receivers_callback = nullptr;
        kio__renamedialog_issignalconnected_callback = nullptr;
        kio__renamedialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKIO__RenameDialog_Metacall_Callback(KIO__RenameDialog_Metacall_Callback cb) { kio__renamedialog_metacall_callback = cb; }
    inline void setKIO__RenameDialog_SetVisible_Callback(KIO__RenameDialog_SetVisible_Callback cb) { kio__renamedialog_setvisible_callback = cb; }
    inline void setKIO__RenameDialog_SizeHint_Callback(KIO__RenameDialog_SizeHint_Callback cb) { kio__renamedialog_sizehint_callback = cb; }
    inline void setKIO__RenameDialog_MinimumSizeHint_Callback(KIO__RenameDialog_MinimumSizeHint_Callback cb) { kio__renamedialog_minimumsizehint_callback = cb; }
    inline void setKIO__RenameDialog_Open_Callback(KIO__RenameDialog_Open_Callback cb) { kio__renamedialog_open_callback = cb; }
    inline void setKIO__RenameDialog_Exec_Callback(KIO__RenameDialog_Exec_Callback cb) { kio__renamedialog_exec_callback = cb; }
    inline void setKIO__RenameDialog_Done_Callback(KIO__RenameDialog_Done_Callback cb) { kio__renamedialog_done_callback = cb; }
    inline void setKIO__RenameDialog_Accept_Callback(KIO__RenameDialog_Accept_Callback cb) { kio__renamedialog_accept_callback = cb; }
    inline void setKIO__RenameDialog_Reject_Callback(KIO__RenameDialog_Reject_Callback cb) { kio__renamedialog_reject_callback = cb; }
    inline void setKIO__RenameDialog_KeyPressEvent_Callback(KIO__RenameDialog_KeyPressEvent_Callback cb) { kio__renamedialog_keypressevent_callback = cb; }
    inline void setKIO__RenameDialog_CloseEvent_Callback(KIO__RenameDialog_CloseEvent_Callback cb) { kio__renamedialog_closeevent_callback = cb; }
    inline void setKIO__RenameDialog_ShowEvent_Callback(KIO__RenameDialog_ShowEvent_Callback cb) { kio__renamedialog_showevent_callback = cb; }
    inline void setKIO__RenameDialog_ResizeEvent_Callback(KIO__RenameDialog_ResizeEvent_Callback cb) { kio__renamedialog_resizeevent_callback = cb; }
    inline void setKIO__RenameDialog_ContextMenuEvent_Callback(KIO__RenameDialog_ContextMenuEvent_Callback cb) { kio__renamedialog_contextmenuevent_callback = cb; }
    inline void setKIO__RenameDialog_EventFilter_Callback(KIO__RenameDialog_EventFilter_Callback cb) { kio__renamedialog_eventfilter_callback = cb; }
    inline void setKIO__RenameDialog_DevType_Callback(KIO__RenameDialog_DevType_Callback cb) { kio__renamedialog_devtype_callback = cb; }
    inline void setKIO__RenameDialog_HeightForWidth_Callback(KIO__RenameDialog_HeightForWidth_Callback cb) { kio__renamedialog_heightforwidth_callback = cb; }
    inline void setKIO__RenameDialog_HasHeightForWidth_Callback(KIO__RenameDialog_HasHeightForWidth_Callback cb) { kio__renamedialog_hasheightforwidth_callback = cb; }
    inline void setKIO__RenameDialog_PaintEngine_Callback(KIO__RenameDialog_PaintEngine_Callback cb) { kio__renamedialog_paintengine_callback = cb; }
    inline void setKIO__RenameDialog_Event_Callback(KIO__RenameDialog_Event_Callback cb) { kio__renamedialog_event_callback = cb; }
    inline void setKIO__RenameDialog_MousePressEvent_Callback(KIO__RenameDialog_MousePressEvent_Callback cb) { kio__renamedialog_mousepressevent_callback = cb; }
    inline void setKIO__RenameDialog_MouseReleaseEvent_Callback(KIO__RenameDialog_MouseReleaseEvent_Callback cb) { kio__renamedialog_mousereleaseevent_callback = cb; }
    inline void setKIO__RenameDialog_MouseDoubleClickEvent_Callback(KIO__RenameDialog_MouseDoubleClickEvent_Callback cb) { kio__renamedialog_mousedoubleclickevent_callback = cb; }
    inline void setKIO__RenameDialog_MouseMoveEvent_Callback(KIO__RenameDialog_MouseMoveEvent_Callback cb) { kio__renamedialog_mousemoveevent_callback = cb; }
    inline void setKIO__RenameDialog_WheelEvent_Callback(KIO__RenameDialog_WheelEvent_Callback cb) { kio__renamedialog_wheelevent_callback = cb; }
    inline void setKIO__RenameDialog_KeyReleaseEvent_Callback(KIO__RenameDialog_KeyReleaseEvent_Callback cb) { kio__renamedialog_keyreleaseevent_callback = cb; }
    inline void setKIO__RenameDialog_FocusInEvent_Callback(KIO__RenameDialog_FocusInEvent_Callback cb) { kio__renamedialog_focusinevent_callback = cb; }
    inline void setKIO__RenameDialog_FocusOutEvent_Callback(KIO__RenameDialog_FocusOutEvent_Callback cb) { kio__renamedialog_focusoutevent_callback = cb; }
    inline void setKIO__RenameDialog_EnterEvent_Callback(KIO__RenameDialog_EnterEvent_Callback cb) { kio__renamedialog_enterevent_callback = cb; }
    inline void setKIO__RenameDialog_LeaveEvent_Callback(KIO__RenameDialog_LeaveEvent_Callback cb) { kio__renamedialog_leaveevent_callback = cb; }
    inline void setKIO__RenameDialog_PaintEvent_Callback(KIO__RenameDialog_PaintEvent_Callback cb) { kio__renamedialog_paintevent_callback = cb; }
    inline void setKIO__RenameDialog_MoveEvent_Callback(KIO__RenameDialog_MoveEvent_Callback cb) { kio__renamedialog_moveevent_callback = cb; }
    inline void setKIO__RenameDialog_TabletEvent_Callback(KIO__RenameDialog_TabletEvent_Callback cb) { kio__renamedialog_tabletevent_callback = cb; }
    inline void setKIO__RenameDialog_ActionEvent_Callback(KIO__RenameDialog_ActionEvent_Callback cb) { kio__renamedialog_actionevent_callback = cb; }
    inline void setKIO__RenameDialog_DragEnterEvent_Callback(KIO__RenameDialog_DragEnterEvent_Callback cb) { kio__renamedialog_dragenterevent_callback = cb; }
    inline void setKIO__RenameDialog_DragMoveEvent_Callback(KIO__RenameDialog_DragMoveEvent_Callback cb) { kio__renamedialog_dragmoveevent_callback = cb; }
    inline void setKIO__RenameDialog_DragLeaveEvent_Callback(KIO__RenameDialog_DragLeaveEvent_Callback cb) { kio__renamedialog_dragleaveevent_callback = cb; }
    inline void setKIO__RenameDialog_DropEvent_Callback(KIO__RenameDialog_DropEvent_Callback cb) { kio__renamedialog_dropevent_callback = cb; }
    inline void setKIO__RenameDialog_HideEvent_Callback(KIO__RenameDialog_HideEvent_Callback cb) { kio__renamedialog_hideevent_callback = cb; }
    inline void setKIO__RenameDialog_NativeEvent_Callback(KIO__RenameDialog_NativeEvent_Callback cb) { kio__renamedialog_nativeevent_callback = cb; }
    inline void setKIO__RenameDialog_ChangeEvent_Callback(KIO__RenameDialog_ChangeEvent_Callback cb) { kio__renamedialog_changeevent_callback = cb; }
    inline void setKIO__RenameDialog_Metric_Callback(KIO__RenameDialog_Metric_Callback cb) { kio__renamedialog_metric_callback = cb; }
    inline void setKIO__RenameDialog_InitPainter_Callback(KIO__RenameDialog_InitPainter_Callback cb) { kio__renamedialog_initpainter_callback = cb; }
    inline void setKIO__RenameDialog_Redirected_Callback(KIO__RenameDialog_Redirected_Callback cb) { kio__renamedialog_redirected_callback = cb; }
    inline void setKIO__RenameDialog_SharedPainter_Callback(KIO__RenameDialog_SharedPainter_Callback cb) { kio__renamedialog_sharedpainter_callback = cb; }
    inline void setKIO__RenameDialog_InputMethodEvent_Callback(KIO__RenameDialog_InputMethodEvent_Callback cb) { kio__renamedialog_inputmethodevent_callback = cb; }
    inline void setKIO__RenameDialog_InputMethodQuery_Callback(KIO__RenameDialog_InputMethodQuery_Callback cb) { kio__renamedialog_inputmethodquery_callback = cb; }
    inline void setKIO__RenameDialog_FocusNextPrevChild_Callback(KIO__RenameDialog_FocusNextPrevChild_Callback cb) { kio__renamedialog_focusnextprevchild_callback = cb; }
    inline void setKIO__RenameDialog_TimerEvent_Callback(KIO__RenameDialog_TimerEvent_Callback cb) { kio__renamedialog_timerevent_callback = cb; }
    inline void setKIO__RenameDialog_ChildEvent_Callback(KIO__RenameDialog_ChildEvent_Callback cb) { kio__renamedialog_childevent_callback = cb; }
    inline void setKIO__RenameDialog_CustomEvent_Callback(KIO__RenameDialog_CustomEvent_Callback cb) { kio__renamedialog_customevent_callback = cb; }
    inline void setKIO__RenameDialog_ConnectNotify_Callback(KIO__RenameDialog_ConnectNotify_Callback cb) { kio__renamedialog_connectnotify_callback = cb; }
    inline void setKIO__RenameDialog_DisconnectNotify_Callback(KIO__RenameDialog_DisconnectNotify_Callback cb) { kio__renamedialog_disconnectnotify_callback = cb; }
    inline void setKIO__RenameDialog_EnableRenameButton_Callback(KIO__RenameDialog_EnableRenameButton_Callback cb) { kio__renamedialog_enablerenamebutton_callback = cb; }
    inline void setKIO__RenameDialog_AdjustPosition_Callback(KIO__RenameDialog_AdjustPosition_Callback cb) { kio__renamedialog_adjustposition_callback = cb; }
    inline void setKIO__RenameDialog_UpdateMicroFocus_Callback(KIO__RenameDialog_UpdateMicroFocus_Callback cb) { kio__renamedialog_updatemicrofocus_callback = cb; }
    inline void setKIO__RenameDialog_Create_Callback(KIO__RenameDialog_Create_Callback cb) { kio__renamedialog_create_callback = cb; }
    inline void setKIO__RenameDialog_Destroy_Callback(KIO__RenameDialog_Destroy_Callback cb) { kio__renamedialog_destroy_callback = cb; }
    inline void setKIO__RenameDialog_FocusNextChild_Callback(KIO__RenameDialog_FocusNextChild_Callback cb) { kio__renamedialog_focusnextchild_callback = cb; }
    inline void setKIO__RenameDialog_FocusPreviousChild_Callback(KIO__RenameDialog_FocusPreviousChild_Callback cb) { kio__renamedialog_focuspreviouschild_callback = cb; }
    inline void setKIO__RenameDialog_Sender_Callback(KIO__RenameDialog_Sender_Callback cb) { kio__renamedialog_sender_callback = cb; }
    inline void setKIO__RenameDialog_SenderSignalIndex_Callback(KIO__RenameDialog_SenderSignalIndex_Callback cb) { kio__renamedialog_sendersignalindex_callback = cb; }
    inline void setKIO__RenameDialog_Receivers_Callback(KIO__RenameDialog_Receivers_Callback cb) { kio__renamedialog_receivers_callback = cb; }
    inline void setKIO__RenameDialog_IsSignalConnected_Callback(KIO__RenameDialog_IsSignalConnected_Callback cb) { kio__renamedialog_issignalconnected_callback = cb; }
    inline void setKIO__RenameDialog_GetDecodedMetricF_Callback(KIO__RenameDialog_GetDecodedMetricF_Callback cb) { kio__renamedialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKIO__RenameDialog_Metacall_IsBase(bool value) const { kio__renamedialog_metacall_isbase = value; }
    inline void setKIO__RenameDialog_SetVisible_IsBase(bool value) const { kio__renamedialog_setvisible_isbase = value; }
    inline void setKIO__RenameDialog_SizeHint_IsBase(bool value) const { kio__renamedialog_sizehint_isbase = value; }
    inline void setKIO__RenameDialog_MinimumSizeHint_IsBase(bool value) const { kio__renamedialog_minimumsizehint_isbase = value; }
    inline void setKIO__RenameDialog_Open_IsBase(bool value) const { kio__renamedialog_open_isbase = value; }
    inline void setKIO__RenameDialog_Exec_IsBase(bool value) const { kio__renamedialog_exec_isbase = value; }
    inline void setKIO__RenameDialog_Done_IsBase(bool value) const { kio__renamedialog_done_isbase = value; }
    inline void setKIO__RenameDialog_Accept_IsBase(bool value) const { kio__renamedialog_accept_isbase = value; }
    inline void setKIO__RenameDialog_Reject_IsBase(bool value) const { kio__renamedialog_reject_isbase = value; }
    inline void setKIO__RenameDialog_KeyPressEvent_IsBase(bool value) const { kio__renamedialog_keypressevent_isbase = value; }
    inline void setKIO__RenameDialog_CloseEvent_IsBase(bool value) const { kio__renamedialog_closeevent_isbase = value; }
    inline void setKIO__RenameDialog_ShowEvent_IsBase(bool value) const { kio__renamedialog_showevent_isbase = value; }
    inline void setKIO__RenameDialog_ResizeEvent_IsBase(bool value) const { kio__renamedialog_resizeevent_isbase = value; }
    inline void setKIO__RenameDialog_ContextMenuEvent_IsBase(bool value) const { kio__renamedialog_contextmenuevent_isbase = value; }
    inline void setKIO__RenameDialog_EventFilter_IsBase(bool value) const { kio__renamedialog_eventfilter_isbase = value; }
    inline void setKIO__RenameDialog_DevType_IsBase(bool value) const { kio__renamedialog_devtype_isbase = value; }
    inline void setKIO__RenameDialog_HeightForWidth_IsBase(bool value) const { kio__renamedialog_heightforwidth_isbase = value; }
    inline void setKIO__RenameDialog_HasHeightForWidth_IsBase(bool value) const { kio__renamedialog_hasheightforwidth_isbase = value; }
    inline void setKIO__RenameDialog_PaintEngine_IsBase(bool value) const { kio__renamedialog_paintengine_isbase = value; }
    inline void setKIO__RenameDialog_Event_IsBase(bool value) const { kio__renamedialog_event_isbase = value; }
    inline void setKIO__RenameDialog_MousePressEvent_IsBase(bool value) const { kio__renamedialog_mousepressevent_isbase = value; }
    inline void setKIO__RenameDialog_MouseReleaseEvent_IsBase(bool value) const { kio__renamedialog_mousereleaseevent_isbase = value; }
    inline void setKIO__RenameDialog_MouseDoubleClickEvent_IsBase(bool value) const { kio__renamedialog_mousedoubleclickevent_isbase = value; }
    inline void setKIO__RenameDialog_MouseMoveEvent_IsBase(bool value) const { kio__renamedialog_mousemoveevent_isbase = value; }
    inline void setKIO__RenameDialog_WheelEvent_IsBase(bool value) const { kio__renamedialog_wheelevent_isbase = value; }
    inline void setKIO__RenameDialog_KeyReleaseEvent_IsBase(bool value) const { kio__renamedialog_keyreleaseevent_isbase = value; }
    inline void setKIO__RenameDialog_FocusInEvent_IsBase(bool value) const { kio__renamedialog_focusinevent_isbase = value; }
    inline void setKIO__RenameDialog_FocusOutEvent_IsBase(bool value) const { kio__renamedialog_focusoutevent_isbase = value; }
    inline void setKIO__RenameDialog_EnterEvent_IsBase(bool value) const { kio__renamedialog_enterevent_isbase = value; }
    inline void setKIO__RenameDialog_LeaveEvent_IsBase(bool value) const { kio__renamedialog_leaveevent_isbase = value; }
    inline void setKIO__RenameDialog_PaintEvent_IsBase(bool value) const { kio__renamedialog_paintevent_isbase = value; }
    inline void setKIO__RenameDialog_MoveEvent_IsBase(bool value) const { kio__renamedialog_moveevent_isbase = value; }
    inline void setKIO__RenameDialog_TabletEvent_IsBase(bool value) const { kio__renamedialog_tabletevent_isbase = value; }
    inline void setKIO__RenameDialog_ActionEvent_IsBase(bool value) const { kio__renamedialog_actionevent_isbase = value; }
    inline void setKIO__RenameDialog_DragEnterEvent_IsBase(bool value) const { kio__renamedialog_dragenterevent_isbase = value; }
    inline void setKIO__RenameDialog_DragMoveEvent_IsBase(bool value) const { kio__renamedialog_dragmoveevent_isbase = value; }
    inline void setKIO__RenameDialog_DragLeaveEvent_IsBase(bool value) const { kio__renamedialog_dragleaveevent_isbase = value; }
    inline void setKIO__RenameDialog_DropEvent_IsBase(bool value) const { kio__renamedialog_dropevent_isbase = value; }
    inline void setKIO__RenameDialog_HideEvent_IsBase(bool value) const { kio__renamedialog_hideevent_isbase = value; }
    inline void setKIO__RenameDialog_NativeEvent_IsBase(bool value) const { kio__renamedialog_nativeevent_isbase = value; }
    inline void setKIO__RenameDialog_ChangeEvent_IsBase(bool value) const { kio__renamedialog_changeevent_isbase = value; }
    inline void setKIO__RenameDialog_Metric_IsBase(bool value) const { kio__renamedialog_metric_isbase = value; }
    inline void setKIO__RenameDialog_InitPainter_IsBase(bool value) const { kio__renamedialog_initpainter_isbase = value; }
    inline void setKIO__RenameDialog_Redirected_IsBase(bool value) const { kio__renamedialog_redirected_isbase = value; }
    inline void setKIO__RenameDialog_SharedPainter_IsBase(bool value) const { kio__renamedialog_sharedpainter_isbase = value; }
    inline void setKIO__RenameDialog_InputMethodEvent_IsBase(bool value) const { kio__renamedialog_inputmethodevent_isbase = value; }
    inline void setKIO__RenameDialog_InputMethodQuery_IsBase(bool value) const { kio__renamedialog_inputmethodquery_isbase = value; }
    inline void setKIO__RenameDialog_FocusNextPrevChild_IsBase(bool value) const { kio__renamedialog_focusnextprevchild_isbase = value; }
    inline void setKIO__RenameDialog_TimerEvent_IsBase(bool value) const { kio__renamedialog_timerevent_isbase = value; }
    inline void setKIO__RenameDialog_ChildEvent_IsBase(bool value) const { kio__renamedialog_childevent_isbase = value; }
    inline void setKIO__RenameDialog_CustomEvent_IsBase(bool value) const { kio__renamedialog_customevent_isbase = value; }
    inline void setKIO__RenameDialog_ConnectNotify_IsBase(bool value) const { kio__renamedialog_connectnotify_isbase = value; }
    inline void setKIO__RenameDialog_DisconnectNotify_IsBase(bool value) const { kio__renamedialog_disconnectnotify_isbase = value; }
    inline void setKIO__RenameDialog_EnableRenameButton_IsBase(bool value) const { kio__renamedialog_enablerenamebutton_isbase = value; }
    inline void setKIO__RenameDialog_AdjustPosition_IsBase(bool value) const { kio__renamedialog_adjustposition_isbase = value; }
    inline void setKIO__RenameDialog_UpdateMicroFocus_IsBase(bool value) const { kio__renamedialog_updatemicrofocus_isbase = value; }
    inline void setKIO__RenameDialog_Create_IsBase(bool value) const { kio__renamedialog_create_isbase = value; }
    inline void setKIO__RenameDialog_Destroy_IsBase(bool value) const { kio__renamedialog_destroy_isbase = value; }
    inline void setKIO__RenameDialog_FocusNextChild_IsBase(bool value) const { kio__renamedialog_focusnextchild_isbase = value; }
    inline void setKIO__RenameDialog_FocusPreviousChild_IsBase(bool value) const { kio__renamedialog_focuspreviouschild_isbase = value; }
    inline void setKIO__RenameDialog_Sender_IsBase(bool value) const { kio__renamedialog_sender_isbase = value; }
    inline void setKIO__RenameDialog_SenderSignalIndex_IsBase(bool value) const { kio__renamedialog_sendersignalindex_isbase = value; }
    inline void setKIO__RenameDialog_Receivers_IsBase(bool value) const { kio__renamedialog_receivers_isbase = value; }
    inline void setKIO__RenameDialog_IsSignalConnected_IsBase(bool value) const { kio__renamedialog_issignalconnected_isbase = value; }
    inline void setKIO__RenameDialog_GetDecodedMetricF_IsBase(bool value) const { kio__renamedialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__renamedialog_metacall_isbase) {
            kio__renamedialog_metacall_isbase = false;
            return KIO__RenameDialog::qt_metacall(param1, param2, param3);
        } else if (kio__renamedialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kio__renamedialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__RenameDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kio__renamedialog_setvisible_isbase) {
            kio__renamedialog_setvisible_isbase = false;
            KIO__RenameDialog::setVisible(visible);
        } else if (kio__renamedialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kio__renamedialog_setvisible_callback(this, cbval1);
        } else {
            KIO__RenameDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kio__renamedialog_sizehint_isbase) {
            kio__renamedialog_sizehint_isbase = false;
            return KIO__RenameDialog::sizeHint();
        } else if (kio__renamedialog_sizehint_callback != nullptr) {
            QSize* callback_ret = kio__renamedialog_sizehint_callback();
            return *callback_ret;
        } else {
            return KIO__RenameDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kio__renamedialog_minimumsizehint_isbase) {
            kio__renamedialog_minimumsizehint_isbase = false;
            return KIO__RenameDialog::minimumSizeHint();
        } else if (kio__renamedialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kio__renamedialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KIO__RenameDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kio__renamedialog_open_isbase) {
            kio__renamedialog_open_isbase = false;
            KIO__RenameDialog::open();
        } else if (kio__renamedialog_open_callback != nullptr) {
            kio__renamedialog_open_callback();
        } else {
            KIO__RenameDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kio__renamedialog_exec_isbase) {
            kio__renamedialog_exec_isbase = false;
            return KIO__RenameDialog::exec();
        } else if (kio__renamedialog_exec_callback != nullptr) {
            int callback_ret = kio__renamedialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIO__RenameDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kio__renamedialog_done_isbase) {
            kio__renamedialog_done_isbase = false;
            KIO__RenameDialog::done(param1);
        } else if (kio__renamedialog_done_callback != nullptr) {
            int cbval1 = param1;

            kio__renamedialog_done_callback(this, cbval1);
        } else {
            KIO__RenameDialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kio__renamedialog_accept_isbase) {
            kio__renamedialog_accept_isbase = false;
            KIO__RenameDialog::accept();
        } else if (kio__renamedialog_accept_callback != nullptr) {
            kio__renamedialog_accept_callback();
        } else {
            KIO__RenameDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kio__renamedialog_reject_isbase) {
            kio__renamedialog_reject_isbase = false;
            KIO__RenameDialog::reject();
        } else if (kio__renamedialog_reject_callback != nullptr) {
            kio__renamedialog_reject_callback();
        } else {
            KIO__RenameDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kio__renamedialog_keypressevent_isbase) {
            kio__renamedialog_keypressevent_isbase = false;
            KIO__RenameDialog::keyPressEvent(param1);
        } else if (kio__renamedialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            kio__renamedialog_keypressevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kio__renamedialog_closeevent_isbase) {
            kio__renamedialog_closeevent_isbase = false;
            KIO__RenameDialog::closeEvent(param1);
        } else if (kio__renamedialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            kio__renamedialog_closeevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kio__renamedialog_showevent_isbase) {
            kio__renamedialog_showevent_isbase = false;
            KIO__RenameDialog::showEvent(param1);
        } else if (kio__renamedialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            kio__renamedialog_showevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kio__renamedialog_resizeevent_isbase) {
            kio__renamedialog_resizeevent_isbase = false;
            KIO__RenameDialog::resizeEvent(param1);
        } else if (kio__renamedialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            kio__renamedialog_resizeevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kio__renamedialog_contextmenuevent_isbase) {
            kio__renamedialog_contextmenuevent_isbase = false;
            KIO__RenameDialog::contextMenuEvent(param1);
        } else if (kio__renamedialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            kio__renamedialog_contextmenuevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kio__renamedialog_eventfilter_isbase) {
            kio__renamedialog_eventfilter_isbase = false;
            return KIO__RenameDialog::eventFilter(param1, param2);
        } else if (kio__renamedialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = kio__renamedialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KIO__RenameDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kio__renamedialog_devtype_isbase) {
            kio__renamedialog_devtype_isbase = false;
            return KIO__RenameDialog::devType();
        } else if (kio__renamedialog_devtype_callback != nullptr) {
            int callback_ret = kio__renamedialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIO__RenameDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kio__renamedialog_heightforwidth_isbase) {
            kio__renamedialog_heightforwidth_isbase = false;
            return KIO__RenameDialog::heightForWidth(param1);
        } else if (kio__renamedialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kio__renamedialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__RenameDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kio__renamedialog_hasheightforwidth_isbase) {
            kio__renamedialog_hasheightforwidth_isbase = false;
            return KIO__RenameDialog::hasHeightForWidth();
        } else if (kio__renamedialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kio__renamedialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KIO__RenameDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kio__renamedialog_paintengine_isbase) {
            kio__renamedialog_paintengine_isbase = false;
            return KIO__RenameDialog::paintEngine();
        } else if (kio__renamedialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kio__renamedialog_paintengine_callback();
            return callback_ret;
        } else {
            return KIO__RenameDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__renamedialog_event_isbase) {
            kio__renamedialog_event_isbase = false;
            return KIO__RenameDialog::event(event);
        } else if (kio__renamedialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kio__renamedialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__RenameDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kio__renamedialog_mousepressevent_isbase) {
            kio__renamedialog_mousepressevent_isbase = false;
            KIO__RenameDialog::mousePressEvent(event);
        } else if (kio__renamedialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kio__renamedialog_mousepressevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kio__renamedialog_mousereleaseevent_isbase) {
            kio__renamedialog_mousereleaseevent_isbase = false;
            KIO__RenameDialog::mouseReleaseEvent(event);
        } else if (kio__renamedialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kio__renamedialog_mousereleaseevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kio__renamedialog_mousedoubleclickevent_isbase) {
            kio__renamedialog_mousedoubleclickevent_isbase = false;
            KIO__RenameDialog::mouseDoubleClickEvent(event);
        } else if (kio__renamedialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kio__renamedialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kio__renamedialog_mousemoveevent_isbase) {
            kio__renamedialog_mousemoveevent_isbase = false;
            KIO__RenameDialog::mouseMoveEvent(event);
        } else if (kio__renamedialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kio__renamedialog_mousemoveevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kio__renamedialog_wheelevent_isbase) {
            kio__renamedialog_wheelevent_isbase = false;
            KIO__RenameDialog::wheelEvent(event);
        } else if (kio__renamedialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kio__renamedialog_wheelevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kio__renamedialog_keyreleaseevent_isbase) {
            kio__renamedialog_keyreleaseevent_isbase = false;
            KIO__RenameDialog::keyReleaseEvent(event);
        } else if (kio__renamedialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kio__renamedialog_keyreleaseevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kio__renamedialog_focusinevent_isbase) {
            kio__renamedialog_focusinevent_isbase = false;
            KIO__RenameDialog::focusInEvent(event);
        } else if (kio__renamedialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kio__renamedialog_focusinevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kio__renamedialog_focusoutevent_isbase) {
            kio__renamedialog_focusoutevent_isbase = false;
            KIO__RenameDialog::focusOutEvent(event);
        } else if (kio__renamedialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kio__renamedialog_focusoutevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kio__renamedialog_enterevent_isbase) {
            kio__renamedialog_enterevent_isbase = false;
            KIO__RenameDialog::enterEvent(event);
        } else if (kio__renamedialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kio__renamedialog_enterevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kio__renamedialog_leaveevent_isbase) {
            kio__renamedialog_leaveevent_isbase = false;
            KIO__RenameDialog::leaveEvent(event);
        } else if (kio__renamedialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kio__renamedialog_leaveevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kio__renamedialog_paintevent_isbase) {
            kio__renamedialog_paintevent_isbase = false;
            KIO__RenameDialog::paintEvent(event);
        } else if (kio__renamedialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kio__renamedialog_paintevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kio__renamedialog_moveevent_isbase) {
            kio__renamedialog_moveevent_isbase = false;
            KIO__RenameDialog::moveEvent(event);
        } else if (kio__renamedialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kio__renamedialog_moveevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kio__renamedialog_tabletevent_isbase) {
            kio__renamedialog_tabletevent_isbase = false;
            KIO__RenameDialog::tabletEvent(event);
        } else if (kio__renamedialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kio__renamedialog_tabletevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kio__renamedialog_actionevent_isbase) {
            kio__renamedialog_actionevent_isbase = false;
            KIO__RenameDialog::actionEvent(event);
        } else if (kio__renamedialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kio__renamedialog_actionevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kio__renamedialog_dragenterevent_isbase) {
            kio__renamedialog_dragenterevent_isbase = false;
            KIO__RenameDialog::dragEnterEvent(event);
        } else if (kio__renamedialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kio__renamedialog_dragenterevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kio__renamedialog_dragmoveevent_isbase) {
            kio__renamedialog_dragmoveevent_isbase = false;
            KIO__RenameDialog::dragMoveEvent(event);
        } else if (kio__renamedialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kio__renamedialog_dragmoveevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kio__renamedialog_dragleaveevent_isbase) {
            kio__renamedialog_dragleaveevent_isbase = false;
            KIO__RenameDialog::dragLeaveEvent(event);
        } else if (kio__renamedialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kio__renamedialog_dragleaveevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kio__renamedialog_dropevent_isbase) {
            kio__renamedialog_dropevent_isbase = false;
            KIO__RenameDialog::dropEvent(event);
        } else if (kio__renamedialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kio__renamedialog_dropevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kio__renamedialog_hideevent_isbase) {
            kio__renamedialog_hideevent_isbase = false;
            KIO__RenameDialog::hideEvent(event);
        } else if (kio__renamedialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kio__renamedialog_hideevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kio__renamedialog_nativeevent_isbase) {
            kio__renamedialog_nativeevent_isbase = false;
            return KIO__RenameDialog::nativeEvent(eventType, message, result);
        } else if (kio__renamedialog_nativeevent_callback != nullptr) {
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

            bool callback_ret = kio__renamedialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KIO__RenameDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kio__renamedialog_changeevent_isbase) {
            kio__renamedialog_changeevent_isbase = false;
            KIO__RenameDialog::changeEvent(param1);
        } else if (kio__renamedialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kio__renamedialog_changeevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kio__renamedialog_metric_isbase) {
            kio__renamedialog_metric_isbase = false;
            return KIO__RenameDialog::metric(param1);
        } else if (kio__renamedialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kio__renamedialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__RenameDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kio__renamedialog_initpainter_isbase) {
            kio__renamedialog_initpainter_isbase = false;
            KIO__RenameDialog::initPainter(painter);
        } else if (kio__renamedialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kio__renamedialog_initpainter_callback(this, cbval1);
        } else {
            KIO__RenameDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kio__renamedialog_redirected_isbase) {
            kio__renamedialog_redirected_isbase = false;
            return KIO__RenameDialog::redirected(offset);
        } else if (kio__renamedialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kio__renamedialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__RenameDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kio__renamedialog_sharedpainter_isbase) {
            kio__renamedialog_sharedpainter_isbase = false;
            return KIO__RenameDialog::sharedPainter();
        } else if (kio__renamedialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kio__renamedialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return KIO__RenameDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kio__renamedialog_inputmethodevent_isbase) {
            kio__renamedialog_inputmethodevent_isbase = false;
            KIO__RenameDialog::inputMethodEvent(param1);
        } else if (kio__renamedialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kio__renamedialog_inputmethodevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kio__renamedialog_inputmethodquery_isbase) {
            kio__renamedialog_inputmethodquery_isbase = false;
            return KIO__RenameDialog::inputMethodQuery(param1);
        } else if (kio__renamedialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kio__renamedialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO__RenameDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kio__renamedialog_focusnextprevchild_isbase) {
            kio__renamedialog_focusnextprevchild_isbase = false;
            return KIO__RenameDialog::focusNextPrevChild(next);
        } else if (kio__renamedialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kio__renamedialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__RenameDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__renamedialog_timerevent_isbase) {
            kio__renamedialog_timerevent_isbase = false;
            KIO__RenameDialog::timerEvent(event);
        } else if (kio__renamedialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kio__renamedialog_timerevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__renamedialog_childevent_isbase) {
            kio__renamedialog_childevent_isbase = false;
            KIO__RenameDialog::childEvent(event);
        } else if (kio__renamedialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kio__renamedialog_childevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__renamedialog_customevent_isbase) {
            kio__renamedialog_customevent_isbase = false;
            KIO__RenameDialog::customEvent(event);
        } else if (kio__renamedialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kio__renamedialog_customevent_callback(this, cbval1);
        } else {
            KIO__RenameDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__renamedialog_connectnotify_isbase) {
            kio__renamedialog_connectnotify_isbase = false;
            KIO__RenameDialog::connectNotify(signal);
        } else if (kio__renamedialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__renamedialog_connectnotify_callback(this, cbval1);
        } else {
            KIO__RenameDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__renamedialog_disconnectnotify_isbase) {
            kio__renamedialog_disconnectnotify_isbase = false;
            KIO__RenameDialog::disconnectNotify(signal);
        } else if (kio__renamedialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__renamedialog_disconnectnotify_callback(this, cbval1);
        } else {
            KIO__RenameDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void enableRenameButton(const QString& param1) {
        if (kio__renamedialog_enablerenamebutton_isbase) {
            kio__renamedialog_enablerenamebutton_isbase = false;
            KIO__RenameDialog::enableRenameButton(param1);
        } else if (kio__renamedialog_enablerenamebutton_callback != nullptr) {
            const QString param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            libqt_string param1_str;
            param1_str.len = param1_b.length();
            param1_str.data = static_cast<const char*>(malloc(param1_str.len + 1));
            memcpy((void*)param1_str.data, param1_b.data(), param1_str.len);
            ((char*)param1_str.data)[param1_str.len] = '\0';
            libqt_string cbval1 = param1_str;

            kio__renamedialog_enablerenamebutton_callback(this, cbval1);
        } else {
            KIO__RenameDialog::enableRenameButton(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kio__renamedialog_adjustposition_isbase) {
            kio__renamedialog_adjustposition_isbase = false;
            KIO__RenameDialog::adjustPosition(param1);
        } else if (kio__renamedialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            kio__renamedialog_adjustposition_callback(this, cbval1);
        } else {
            KIO__RenameDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kio__renamedialog_updatemicrofocus_isbase) {
            kio__renamedialog_updatemicrofocus_isbase = false;
            KIO__RenameDialog::updateMicroFocus();
        } else if (kio__renamedialog_updatemicrofocus_callback != nullptr) {
            kio__renamedialog_updatemicrofocus_callback();
        } else {
            KIO__RenameDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kio__renamedialog_create_isbase) {
            kio__renamedialog_create_isbase = false;
            KIO__RenameDialog::create();
        } else if (kio__renamedialog_create_callback != nullptr) {
            kio__renamedialog_create_callback();
        } else {
            KIO__RenameDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kio__renamedialog_destroy_isbase) {
            kio__renamedialog_destroy_isbase = false;
            KIO__RenameDialog::destroy();
        } else if (kio__renamedialog_destroy_callback != nullptr) {
            kio__renamedialog_destroy_callback();
        } else {
            KIO__RenameDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kio__renamedialog_focusnextchild_isbase) {
            kio__renamedialog_focusnextchild_isbase = false;
            return KIO__RenameDialog::focusNextChild();
        } else if (kio__renamedialog_focusnextchild_callback != nullptr) {
            bool callback_ret = kio__renamedialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return KIO__RenameDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kio__renamedialog_focuspreviouschild_isbase) {
            kio__renamedialog_focuspreviouschild_isbase = false;
            return KIO__RenameDialog::focusPreviousChild();
        } else if (kio__renamedialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kio__renamedialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KIO__RenameDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kio__renamedialog_sender_isbase) {
            kio__renamedialog_sender_isbase = false;
            return KIO__RenameDialog::sender();
        } else if (kio__renamedialog_sender_callback != nullptr) {
            QObject* callback_ret = kio__renamedialog_sender_callback();
            return callback_ret;
        } else {
            return KIO__RenameDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kio__renamedialog_sendersignalindex_isbase) {
            kio__renamedialog_sendersignalindex_isbase = false;
            return KIO__RenameDialog::senderSignalIndex();
        } else if (kio__renamedialog_sendersignalindex_callback != nullptr) {
            int callback_ret = kio__renamedialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIO__RenameDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kio__renamedialog_receivers_isbase) {
            kio__renamedialog_receivers_isbase = false;
            return KIO__RenameDialog::receivers(signal);
        } else if (kio__renamedialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kio__renamedialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__RenameDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kio__renamedialog_issignalconnected_isbase) {
            kio__renamedialog_issignalconnected_isbase = false;
            return KIO__RenameDialog::isSignalConnected(signal);
        } else if (kio__renamedialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kio__renamedialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__RenameDialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kio__renamedialog_getdecodedmetricf_isbase) {
            kio__renamedialog_getdecodedmetricf_isbase = false;
            return KIO__RenameDialog::getDecodedMetricF(metricA, metricB);
        } else if (kio__renamedialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kio__renamedialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KIO__RenameDialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KIO__RenameDialog_KeyPressEvent(KIO::RenameDialog* self, QKeyEvent* param1);
    friend void KIO__RenameDialog_QBaseKeyPressEvent(KIO::RenameDialog* self, QKeyEvent* param1);
    friend void KIO__RenameDialog_CloseEvent(KIO::RenameDialog* self, QCloseEvent* param1);
    friend void KIO__RenameDialog_QBaseCloseEvent(KIO::RenameDialog* self, QCloseEvent* param1);
    friend void KIO__RenameDialog_ShowEvent(KIO::RenameDialog* self, QShowEvent* param1);
    friend void KIO__RenameDialog_QBaseShowEvent(KIO::RenameDialog* self, QShowEvent* param1);
    friend void KIO__RenameDialog_ResizeEvent(KIO::RenameDialog* self, QResizeEvent* param1);
    friend void KIO__RenameDialog_QBaseResizeEvent(KIO::RenameDialog* self, QResizeEvent* param1);
    friend void KIO__RenameDialog_ContextMenuEvent(KIO::RenameDialog* self, QContextMenuEvent* param1);
    friend void KIO__RenameDialog_QBaseContextMenuEvent(KIO::RenameDialog* self, QContextMenuEvent* param1);
    friend bool KIO__RenameDialog_EventFilter(KIO::RenameDialog* self, QObject* param1, QEvent* param2);
    friend bool KIO__RenameDialog_QBaseEventFilter(KIO::RenameDialog* self, QObject* param1, QEvent* param2);
    friend bool KIO__RenameDialog_Event(KIO::RenameDialog* self, QEvent* event);
    friend bool KIO__RenameDialog_QBaseEvent(KIO::RenameDialog* self, QEvent* event);
    friend void KIO__RenameDialog_MousePressEvent(KIO::RenameDialog* self, QMouseEvent* event);
    friend void KIO__RenameDialog_QBaseMousePressEvent(KIO::RenameDialog* self, QMouseEvent* event);
    friend void KIO__RenameDialog_MouseReleaseEvent(KIO::RenameDialog* self, QMouseEvent* event);
    friend void KIO__RenameDialog_QBaseMouseReleaseEvent(KIO::RenameDialog* self, QMouseEvent* event);
    friend void KIO__RenameDialog_MouseDoubleClickEvent(KIO::RenameDialog* self, QMouseEvent* event);
    friend void KIO__RenameDialog_QBaseMouseDoubleClickEvent(KIO::RenameDialog* self, QMouseEvent* event);
    friend void KIO__RenameDialog_MouseMoveEvent(KIO::RenameDialog* self, QMouseEvent* event);
    friend void KIO__RenameDialog_QBaseMouseMoveEvent(KIO::RenameDialog* self, QMouseEvent* event);
    friend void KIO__RenameDialog_WheelEvent(KIO::RenameDialog* self, QWheelEvent* event);
    friend void KIO__RenameDialog_QBaseWheelEvent(KIO::RenameDialog* self, QWheelEvent* event);
    friend void KIO__RenameDialog_KeyReleaseEvent(KIO::RenameDialog* self, QKeyEvent* event);
    friend void KIO__RenameDialog_QBaseKeyReleaseEvent(KIO::RenameDialog* self, QKeyEvent* event);
    friend void KIO__RenameDialog_FocusInEvent(KIO::RenameDialog* self, QFocusEvent* event);
    friend void KIO__RenameDialog_QBaseFocusInEvent(KIO::RenameDialog* self, QFocusEvent* event);
    friend void KIO__RenameDialog_FocusOutEvent(KIO::RenameDialog* self, QFocusEvent* event);
    friend void KIO__RenameDialog_QBaseFocusOutEvent(KIO::RenameDialog* self, QFocusEvent* event);
    friend void KIO__RenameDialog_EnterEvent(KIO::RenameDialog* self, QEnterEvent* event);
    friend void KIO__RenameDialog_QBaseEnterEvent(KIO::RenameDialog* self, QEnterEvent* event);
    friend void KIO__RenameDialog_LeaveEvent(KIO::RenameDialog* self, QEvent* event);
    friend void KIO__RenameDialog_QBaseLeaveEvent(KIO::RenameDialog* self, QEvent* event);
    friend void KIO__RenameDialog_PaintEvent(KIO::RenameDialog* self, QPaintEvent* event);
    friend void KIO__RenameDialog_QBasePaintEvent(KIO::RenameDialog* self, QPaintEvent* event);
    friend void KIO__RenameDialog_MoveEvent(KIO::RenameDialog* self, QMoveEvent* event);
    friend void KIO__RenameDialog_QBaseMoveEvent(KIO::RenameDialog* self, QMoveEvent* event);
    friend void KIO__RenameDialog_TabletEvent(KIO::RenameDialog* self, QTabletEvent* event);
    friend void KIO__RenameDialog_QBaseTabletEvent(KIO::RenameDialog* self, QTabletEvent* event);
    friend void KIO__RenameDialog_ActionEvent(KIO::RenameDialog* self, QActionEvent* event);
    friend void KIO__RenameDialog_QBaseActionEvent(KIO::RenameDialog* self, QActionEvent* event);
    friend void KIO__RenameDialog_DragEnterEvent(KIO::RenameDialog* self, QDragEnterEvent* event);
    friend void KIO__RenameDialog_QBaseDragEnterEvent(KIO::RenameDialog* self, QDragEnterEvent* event);
    friend void KIO__RenameDialog_DragMoveEvent(KIO::RenameDialog* self, QDragMoveEvent* event);
    friend void KIO__RenameDialog_QBaseDragMoveEvent(KIO::RenameDialog* self, QDragMoveEvent* event);
    friend void KIO__RenameDialog_DragLeaveEvent(KIO::RenameDialog* self, QDragLeaveEvent* event);
    friend void KIO__RenameDialog_QBaseDragLeaveEvent(KIO::RenameDialog* self, QDragLeaveEvent* event);
    friend void KIO__RenameDialog_DropEvent(KIO::RenameDialog* self, QDropEvent* event);
    friend void KIO__RenameDialog_QBaseDropEvent(KIO::RenameDialog* self, QDropEvent* event);
    friend void KIO__RenameDialog_HideEvent(KIO::RenameDialog* self, QHideEvent* event);
    friend void KIO__RenameDialog_QBaseHideEvent(KIO::RenameDialog* self, QHideEvent* event);
    friend bool KIO__RenameDialog_NativeEvent(KIO::RenameDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KIO__RenameDialog_QBaseNativeEvent(KIO::RenameDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KIO__RenameDialog_ChangeEvent(KIO::RenameDialog* self, QEvent* param1);
    friend void KIO__RenameDialog_QBaseChangeEvent(KIO::RenameDialog* self, QEvent* param1);
    friend int KIO__RenameDialog_Metric(const KIO::RenameDialog* self, int param1);
    friend int KIO__RenameDialog_QBaseMetric(const KIO::RenameDialog* self, int param1);
    friend void KIO__RenameDialog_InitPainter(const KIO::RenameDialog* self, QPainter* painter);
    friend void KIO__RenameDialog_QBaseInitPainter(const KIO::RenameDialog* self, QPainter* painter);
    friend QPaintDevice* KIO__RenameDialog_Redirected(const KIO::RenameDialog* self, QPoint* offset);
    friend QPaintDevice* KIO__RenameDialog_QBaseRedirected(const KIO::RenameDialog* self, QPoint* offset);
    friend QPainter* KIO__RenameDialog_SharedPainter(const KIO::RenameDialog* self);
    friend QPainter* KIO__RenameDialog_QBaseSharedPainter(const KIO::RenameDialog* self);
    friend void KIO__RenameDialog_InputMethodEvent(KIO::RenameDialog* self, QInputMethodEvent* param1);
    friend void KIO__RenameDialog_QBaseInputMethodEvent(KIO::RenameDialog* self, QInputMethodEvent* param1);
    friend bool KIO__RenameDialog_FocusNextPrevChild(KIO::RenameDialog* self, bool next);
    friend bool KIO__RenameDialog_QBaseFocusNextPrevChild(KIO::RenameDialog* self, bool next);
    friend void KIO__RenameDialog_TimerEvent(KIO::RenameDialog* self, QTimerEvent* event);
    friend void KIO__RenameDialog_QBaseTimerEvent(KIO::RenameDialog* self, QTimerEvent* event);
    friend void KIO__RenameDialog_ChildEvent(KIO::RenameDialog* self, QChildEvent* event);
    friend void KIO__RenameDialog_QBaseChildEvent(KIO::RenameDialog* self, QChildEvent* event);
    friend void KIO__RenameDialog_CustomEvent(KIO::RenameDialog* self, QEvent* event);
    friend void KIO__RenameDialog_QBaseCustomEvent(KIO::RenameDialog* self, QEvent* event);
    friend void KIO__RenameDialog_ConnectNotify(KIO::RenameDialog* self, const QMetaMethod* signal);
    friend void KIO__RenameDialog_QBaseConnectNotify(KIO::RenameDialog* self, const QMetaMethod* signal);
    friend void KIO__RenameDialog_DisconnectNotify(KIO::RenameDialog* self, const QMetaMethod* signal);
    friend void KIO__RenameDialog_QBaseDisconnectNotify(KIO::RenameDialog* self, const QMetaMethod* signal);
    friend void KIO__RenameDialog_EnableRenameButton(KIO::RenameDialog* self, const libqt_string param1);
    friend void KIO__RenameDialog_QBaseEnableRenameButton(KIO::RenameDialog* self, const libqt_string param1);
    friend void KIO__RenameDialog_AdjustPosition(KIO::RenameDialog* self, QWidget* param1);
    friend void KIO__RenameDialog_QBaseAdjustPosition(KIO::RenameDialog* self, QWidget* param1);
    friend void KIO__RenameDialog_UpdateMicroFocus(KIO::RenameDialog* self);
    friend void KIO__RenameDialog_QBaseUpdateMicroFocus(KIO::RenameDialog* self);
    friend void KIO__RenameDialog_Create(KIO::RenameDialog* self);
    friend void KIO__RenameDialog_QBaseCreate(KIO::RenameDialog* self);
    friend void KIO__RenameDialog_Destroy(KIO::RenameDialog* self);
    friend void KIO__RenameDialog_QBaseDestroy(KIO::RenameDialog* self);
    friend bool KIO__RenameDialog_FocusNextChild(KIO::RenameDialog* self);
    friend bool KIO__RenameDialog_QBaseFocusNextChild(KIO::RenameDialog* self);
    friend bool KIO__RenameDialog_FocusPreviousChild(KIO::RenameDialog* self);
    friend bool KIO__RenameDialog_QBaseFocusPreviousChild(KIO::RenameDialog* self);
    friend QObject* KIO__RenameDialog_Sender(const KIO::RenameDialog* self);
    friend QObject* KIO__RenameDialog_QBaseSender(const KIO::RenameDialog* self);
    friend int KIO__RenameDialog_SenderSignalIndex(const KIO::RenameDialog* self);
    friend int KIO__RenameDialog_QBaseSenderSignalIndex(const KIO::RenameDialog* self);
    friend int KIO__RenameDialog_Receivers(const KIO::RenameDialog* self, const char* signal);
    friend int KIO__RenameDialog_QBaseReceivers(const KIO::RenameDialog* self, const char* signal);
    friend bool KIO__RenameDialog_IsSignalConnected(const KIO::RenameDialog* self, const QMetaMethod* signal);
    friend bool KIO__RenameDialog_QBaseIsSignalConnected(const KIO::RenameDialog* self, const QMetaMethod* signal);
    friend double KIO__RenameDialog_GetDecodedMetricF(const KIO::RenameDialog* self, int metricA, int metricB);
    friend double KIO__RenameDialog_QBaseGetDecodedMetricF(const KIO::RenameDialog* self, int metricA, int metricB);
};

#endif
