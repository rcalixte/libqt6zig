#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKPROPERTIESDIALOG_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKPROPERTIESDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPropertiesDialog so that we can call protected methods
class VirtualKPropertiesDialog final : public KPropertiesDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKPropertiesDialog = true;

    // Virtual class public types (including callbacks)
    using KPropertiesDialog_Metacall_Callback = int (*)(KPropertiesDialog*, int, int, void**);
    using KPropertiesDialog_Accept_Callback = void (*)();
    using KPropertiesDialog_Reject_Callback = void (*)();
    using KPropertiesDialog_SetVisible_Callback = void (*)(KPropertiesDialog*, bool);
    using KPropertiesDialog_SizeHint_Callback = QSize* (*)();
    using KPropertiesDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KPropertiesDialog_Open_Callback = void (*)();
    using KPropertiesDialog_Exec_Callback = int (*)();
    using KPropertiesDialog_Done_Callback = void (*)(KPropertiesDialog*, int);
    using KPropertiesDialog_KeyPressEvent_Callback = void (*)(KPropertiesDialog*, QKeyEvent*);
    using KPropertiesDialog_CloseEvent_Callback = void (*)(KPropertiesDialog*, QCloseEvent*);
    using KPropertiesDialog_ShowEvent_Callback = void (*)(KPropertiesDialog*, QShowEvent*);
    using KPropertiesDialog_ResizeEvent_Callback = void (*)(KPropertiesDialog*, QResizeEvent*);
    using KPropertiesDialog_ContextMenuEvent_Callback = void (*)(KPropertiesDialog*, QContextMenuEvent*);
    using KPropertiesDialog_EventFilter_Callback = bool (*)(KPropertiesDialog*, QObject*, QEvent*);
    using KPropertiesDialog_DevType_Callback = int (*)();
    using KPropertiesDialog_HeightForWidth_Callback = int (*)(const KPropertiesDialog*, int);
    using KPropertiesDialog_HasHeightForWidth_Callback = bool (*)();
    using KPropertiesDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KPropertiesDialog_Event_Callback = bool (*)(KPropertiesDialog*, QEvent*);
    using KPropertiesDialog_MousePressEvent_Callback = void (*)(KPropertiesDialog*, QMouseEvent*);
    using KPropertiesDialog_MouseReleaseEvent_Callback = void (*)(KPropertiesDialog*, QMouseEvent*);
    using KPropertiesDialog_MouseDoubleClickEvent_Callback = void (*)(KPropertiesDialog*, QMouseEvent*);
    using KPropertiesDialog_MouseMoveEvent_Callback = void (*)(KPropertiesDialog*, QMouseEvent*);
    using KPropertiesDialog_WheelEvent_Callback = void (*)(KPropertiesDialog*, QWheelEvent*);
    using KPropertiesDialog_KeyReleaseEvent_Callback = void (*)(KPropertiesDialog*, QKeyEvent*);
    using KPropertiesDialog_FocusInEvent_Callback = void (*)(KPropertiesDialog*, QFocusEvent*);
    using KPropertiesDialog_FocusOutEvent_Callback = void (*)(KPropertiesDialog*, QFocusEvent*);
    using KPropertiesDialog_EnterEvent_Callback = void (*)(KPropertiesDialog*, QEnterEvent*);
    using KPropertiesDialog_LeaveEvent_Callback = void (*)(KPropertiesDialog*, QEvent*);
    using KPropertiesDialog_PaintEvent_Callback = void (*)(KPropertiesDialog*, QPaintEvent*);
    using KPropertiesDialog_MoveEvent_Callback = void (*)(KPropertiesDialog*, QMoveEvent*);
    using KPropertiesDialog_TabletEvent_Callback = void (*)(KPropertiesDialog*, QTabletEvent*);
    using KPropertiesDialog_ActionEvent_Callback = void (*)(KPropertiesDialog*, QActionEvent*);
    using KPropertiesDialog_DragEnterEvent_Callback = void (*)(KPropertiesDialog*, QDragEnterEvent*);
    using KPropertiesDialog_DragMoveEvent_Callback = void (*)(KPropertiesDialog*, QDragMoveEvent*);
    using KPropertiesDialog_DragLeaveEvent_Callback = void (*)(KPropertiesDialog*, QDragLeaveEvent*);
    using KPropertiesDialog_DropEvent_Callback = void (*)(KPropertiesDialog*, QDropEvent*);
    using KPropertiesDialog_HideEvent_Callback = void (*)(KPropertiesDialog*, QHideEvent*);
    using KPropertiesDialog_NativeEvent_Callback = bool (*)(KPropertiesDialog*, libqt_string, void*, intptr_t*);
    using KPropertiesDialog_ChangeEvent_Callback = void (*)(KPropertiesDialog*, QEvent*);
    using KPropertiesDialog_Metric_Callback = int (*)(const KPropertiesDialog*, int);
    using KPropertiesDialog_InitPainter_Callback = void (*)(const KPropertiesDialog*, QPainter*);
    using KPropertiesDialog_Redirected_Callback = QPaintDevice* (*)(const KPropertiesDialog*, QPoint*);
    using KPropertiesDialog_SharedPainter_Callback = QPainter* (*)();
    using KPropertiesDialog_InputMethodEvent_Callback = void (*)(KPropertiesDialog*, QInputMethodEvent*);
    using KPropertiesDialog_InputMethodQuery_Callback = QVariant* (*)(const KPropertiesDialog*, int);
    using KPropertiesDialog_FocusNextPrevChild_Callback = bool (*)(KPropertiesDialog*, bool);
    using KPropertiesDialog_TimerEvent_Callback = void (*)(KPropertiesDialog*, QTimerEvent*);
    using KPropertiesDialog_ChildEvent_Callback = void (*)(KPropertiesDialog*, QChildEvent*);
    using KPropertiesDialog_CustomEvent_Callback = void (*)(KPropertiesDialog*, QEvent*);
    using KPropertiesDialog_ConnectNotify_Callback = void (*)(KPropertiesDialog*, QMetaMethod*);
    using KPropertiesDialog_DisconnectNotify_Callback = void (*)(KPropertiesDialog*, QMetaMethod*);
    using KPropertiesDialog_PageWidget_Callback = KPageWidget* (*)();
    using KPropertiesDialog_SetPageWidget_Callback = void (*)(KPropertiesDialog*, KPageWidget*);
    using KPropertiesDialog_ButtonBox_Callback = QDialogButtonBox* (*)();
    using KPropertiesDialog_SetButtonBox_Callback = void (*)(KPropertiesDialog*, QDialogButtonBox*);
    using KPropertiesDialog_AdjustPosition_Callback = void (*)(KPropertiesDialog*, QWidget*);
    using KPropertiesDialog_UpdateMicroFocus_Callback = void (*)();
    using KPropertiesDialog_Create_Callback = void (*)();
    using KPropertiesDialog_Destroy_Callback = void (*)();
    using KPropertiesDialog_FocusNextChild_Callback = bool (*)();
    using KPropertiesDialog_FocusPreviousChild_Callback = bool (*)();
    using KPropertiesDialog_Sender_Callback = QObject* (*)();
    using KPropertiesDialog_SenderSignalIndex_Callback = int (*)();
    using KPropertiesDialog_Receivers_Callback = int (*)(const KPropertiesDialog*, const char*);
    using KPropertiesDialog_IsSignalConnected_Callback = bool (*)(const KPropertiesDialog*, QMetaMethod*);
    using KPropertiesDialog_GetDecodedMetricF_Callback = double (*)(const KPropertiesDialog*, int, int);

  protected:
    // Instance callback storage
    KPropertiesDialog_Metacall_Callback kpropertiesdialog_metacall_callback = nullptr;
    KPropertiesDialog_Accept_Callback kpropertiesdialog_accept_callback = nullptr;
    KPropertiesDialog_Reject_Callback kpropertiesdialog_reject_callback = nullptr;
    KPropertiesDialog_SetVisible_Callback kpropertiesdialog_setvisible_callback = nullptr;
    KPropertiesDialog_SizeHint_Callback kpropertiesdialog_sizehint_callback = nullptr;
    KPropertiesDialog_MinimumSizeHint_Callback kpropertiesdialog_minimumsizehint_callback = nullptr;
    KPropertiesDialog_Open_Callback kpropertiesdialog_open_callback = nullptr;
    KPropertiesDialog_Exec_Callback kpropertiesdialog_exec_callback = nullptr;
    KPropertiesDialog_Done_Callback kpropertiesdialog_done_callback = nullptr;
    KPropertiesDialog_KeyPressEvent_Callback kpropertiesdialog_keypressevent_callback = nullptr;
    KPropertiesDialog_CloseEvent_Callback kpropertiesdialog_closeevent_callback = nullptr;
    KPropertiesDialog_ShowEvent_Callback kpropertiesdialog_showevent_callback = nullptr;
    KPropertiesDialog_ResizeEvent_Callback kpropertiesdialog_resizeevent_callback = nullptr;
    KPropertiesDialog_ContextMenuEvent_Callback kpropertiesdialog_contextmenuevent_callback = nullptr;
    KPropertiesDialog_EventFilter_Callback kpropertiesdialog_eventfilter_callback = nullptr;
    KPropertiesDialog_DevType_Callback kpropertiesdialog_devtype_callback = nullptr;
    KPropertiesDialog_HeightForWidth_Callback kpropertiesdialog_heightforwidth_callback = nullptr;
    KPropertiesDialog_HasHeightForWidth_Callback kpropertiesdialog_hasheightforwidth_callback = nullptr;
    KPropertiesDialog_PaintEngine_Callback kpropertiesdialog_paintengine_callback = nullptr;
    KPropertiesDialog_Event_Callback kpropertiesdialog_event_callback = nullptr;
    KPropertiesDialog_MousePressEvent_Callback kpropertiesdialog_mousepressevent_callback = nullptr;
    KPropertiesDialog_MouseReleaseEvent_Callback kpropertiesdialog_mousereleaseevent_callback = nullptr;
    KPropertiesDialog_MouseDoubleClickEvent_Callback kpropertiesdialog_mousedoubleclickevent_callback = nullptr;
    KPropertiesDialog_MouseMoveEvent_Callback kpropertiesdialog_mousemoveevent_callback = nullptr;
    KPropertiesDialog_WheelEvent_Callback kpropertiesdialog_wheelevent_callback = nullptr;
    KPropertiesDialog_KeyReleaseEvent_Callback kpropertiesdialog_keyreleaseevent_callback = nullptr;
    KPropertiesDialog_FocusInEvent_Callback kpropertiesdialog_focusinevent_callback = nullptr;
    KPropertiesDialog_FocusOutEvent_Callback kpropertiesdialog_focusoutevent_callback = nullptr;
    KPropertiesDialog_EnterEvent_Callback kpropertiesdialog_enterevent_callback = nullptr;
    KPropertiesDialog_LeaveEvent_Callback kpropertiesdialog_leaveevent_callback = nullptr;
    KPropertiesDialog_PaintEvent_Callback kpropertiesdialog_paintevent_callback = nullptr;
    KPropertiesDialog_MoveEvent_Callback kpropertiesdialog_moveevent_callback = nullptr;
    KPropertiesDialog_TabletEvent_Callback kpropertiesdialog_tabletevent_callback = nullptr;
    KPropertiesDialog_ActionEvent_Callback kpropertiesdialog_actionevent_callback = nullptr;
    KPropertiesDialog_DragEnterEvent_Callback kpropertiesdialog_dragenterevent_callback = nullptr;
    KPropertiesDialog_DragMoveEvent_Callback kpropertiesdialog_dragmoveevent_callback = nullptr;
    KPropertiesDialog_DragLeaveEvent_Callback kpropertiesdialog_dragleaveevent_callback = nullptr;
    KPropertiesDialog_DropEvent_Callback kpropertiesdialog_dropevent_callback = nullptr;
    KPropertiesDialog_HideEvent_Callback kpropertiesdialog_hideevent_callback = nullptr;
    KPropertiesDialog_NativeEvent_Callback kpropertiesdialog_nativeevent_callback = nullptr;
    KPropertiesDialog_ChangeEvent_Callback kpropertiesdialog_changeevent_callback = nullptr;
    KPropertiesDialog_Metric_Callback kpropertiesdialog_metric_callback = nullptr;
    KPropertiesDialog_InitPainter_Callback kpropertiesdialog_initpainter_callback = nullptr;
    KPropertiesDialog_Redirected_Callback kpropertiesdialog_redirected_callback = nullptr;
    KPropertiesDialog_SharedPainter_Callback kpropertiesdialog_sharedpainter_callback = nullptr;
    KPropertiesDialog_InputMethodEvent_Callback kpropertiesdialog_inputmethodevent_callback = nullptr;
    KPropertiesDialog_InputMethodQuery_Callback kpropertiesdialog_inputmethodquery_callback = nullptr;
    KPropertiesDialog_FocusNextPrevChild_Callback kpropertiesdialog_focusnextprevchild_callback = nullptr;
    KPropertiesDialog_TimerEvent_Callback kpropertiesdialog_timerevent_callback = nullptr;
    KPropertiesDialog_ChildEvent_Callback kpropertiesdialog_childevent_callback = nullptr;
    KPropertiesDialog_CustomEvent_Callback kpropertiesdialog_customevent_callback = nullptr;
    KPropertiesDialog_ConnectNotify_Callback kpropertiesdialog_connectnotify_callback = nullptr;
    KPropertiesDialog_DisconnectNotify_Callback kpropertiesdialog_disconnectnotify_callback = nullptr;
    KPropertiesDialog_PageWidget_Callback kpropertiesdialog_pagewidget_callback = nullptr;
    KPropertiesDialog_SetPageWidget_Callback kpropertiesdialog_setpagewidget_callback = nullptr;
    KPropertiesDialog_ButtonBox_Callback kpropertiesdialog_buttonbox_callback = nullptr;
    KPropertiesDialog_SetButtonBox_Callback kpropertiesdialog_setbuttonbox_callback = nullptr;
    KPropertiesDialog_AdjustPosition_Callback kpropertiesdialog_adjustposition_callback = nullptr;
    KPropertiesDialog_UpdateMicroFocus_Callback kpropertiesdialog_updatemicrofocus_callback = nullptr;
    KPropertiesDialog_Create_Callback kpropertiesdialog_create_callback = nullptr;
    KPropertiesDialog_Destroy_Callback kpropertiesdialog_destroy_callback = nullptr;
    KPropertiesDialog_FocusNextChild_Callback kpropertiesdialog_focusnextchild_callback = nullptr;
    KPropertiesDialog_FocusPreviousChild_Callback kpropertiesdialog_focuspreviouschild_callback = nullptr;
    KPropertiesDialog_Sender_Callback kpropertiesdialog_sender_callback = nullptr;
    KPropertiesDialog_SenderSignalIndex_Callback kpropertiesdialog_sendersignalindex_callback = nullptr;
    KPropertiesDialog_Receivers_Callback kpropertiesdialog_receivers_callback = nullptr;
    KPropertiesDialog_IsSignalConnected_Callback kpropertiesdialog_issignalconnected_callback = nullptr;
    KPropertiesDialog_GetDecodedMetricF_Callback kpropertiesdialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kpropertiesdialog_metacall_isbase = false;
    mutable bool kpropertiesdialog_accept_isbase = false;
    mutable bool kpropertiesdialog_reject_isbase = false;
    mutable bool kpropertiesdialog_setvisible_isbase = false;
    mutable bool kpropertiesdialog_sizehint_isbase = false;
    mutable bool kpropertiesdialog_minimumsizehint_isbase = false;
    mutable bool kpropertiesdialog_open_isbase = false;
    mutable bool kpropertiesdialog_exec_isbase = false;
    mutable bool kpropertiesdialog_done_isbase = false;
    mutable bool kpropertiesdialog_keypressevent_isbase = false;
    mutable bool kpropertiesdialog_closeevent_isbase = false;
    mutable bool kpropertiesdialog_showevent_isbase = false;
    mutable bool kpropertiesdialog_resizeevent_isbase = false;
    mutable bool kpropertiesdialog_contextmenuevent_isbase = false;
    mutable bool kpropertiesdialog_eventfilter_isbase = false;
    mutable bool kpropertiesdialog_devtype_isbase = false;
    mutable bool kpropertiesdialog_heightforwidth_isbase = false;
    mutable bool kpropertiesdialog_hasheightforwidth_isbase = false;
    mutable bool kpropertiesdialog_paintengine_isbase = false;
    mutable bool kpropertiesdialog_event_isbase = false;
    mutable bool kpropertiesdialog_mousepressevent_isbase = false;
    mutable bool kpropertiesdialog_mousereleaseevent_isbase = false;
    mutable bool kpropertiesdialog_mousedoubleclickevent_isbase = false;
    mutable bool kpropertiesdialog_mousemoveevent_isbase = false;
    mutable bool kpropertiesdialog_wheelevent_isbase = false;
    mutable bool kpropertiesdialog_keyreleaseevent_isbase = false;
    mutable bool kpropertiesdialog_focusinevent_isbase = false;
    mutable bool kpropertiesdialog_focusoutevent_isbase = false;
    mutable bool kpropertiesdialog_enterevent_isbase = false;
    mutable bool kpropertiesdialog_leaveevent_isbase = false;
    mutable bool kpropertiesdialog_paintevent_isbase = false;
    mutable bool kpropertiesdialog_moveevent_isbase = false;
    mutable bool kpropertiesdialog_tabletevent_isbase = false;
    mutable bool kpropertiesdialog_actionevent_isbase = false;
    mutable bool kpropertiesdialog_dragenterevent_isbase = false;
    mutable bool kpropertiesdialog_dragmoveevent_isbase = false;
    mutable bool kpropertiesdialog_dragleaveevent_isbase = false;
    mutable bool kpropertiesdialog_dropevent_isbase = false;
    mutable bool kpropertiesdialog_hideevent_isbase = false;
    mutable bool kpropertiesdialog_nativeevent_isbase = false;
    mutable bool kpropertiesdialog_changeevent_isbase = false;
    mutable bool kpropertiesdialog_metric_isbase = false;
    mutable bool kpropertiesdialog_initpainter_isbase = false;
    mutable bool kpropertiesdialog_redirected_isbase = false;
    mutable bool kpropertiesdialog_sharedpainter_isbase = false;
    mutable bool kpropertiesdialog_inputmethodevent_isbase = false;
    mutable bool kpropertiesdialog_inputmethodquery_isbase = false;
    mutable bool kpropertiesdialog_focusnextprevchild_isbase = false;
    mutable bool kpropertiesdialog_timerevent_isbase = false;
    mutable bool kpropertiesdialog_childevent_isbase = false;
    mutable bool kpropertiesdialog_customevent_isbase = false;
    mutable bool kpropertiesdialog_connectnotify_isbase = false;
    mutable bool kpropertiesdialog_disconnectnotify_isbase = false;
    mutable bool kpropertiesdialog_pagewidget_isbase = false;
    mutable bool kpropertiesdialog_setpagewidget_isbase = false;
    mutable bool kpropertiesdialog_buttonbox_isbase = false;
    mutable bool kpropertiesdialog_setbuttonbox_isbase = false;
    mutable bool kpropertiesdialog_adjustposition_isbase = false;
    mutable bool kpropertiesdialog_updatemicrofocus_isbase = false;
    mutable bool kpropertiesdialog_create_isbase = false;
    mutable bool kpropertiesdialog_destroy_isbase = false;
    mutable bool kpropertiesdialog_focusnextchild_isbase = false;
    mutable bool kpropertiesdialog_focuspreviouschild_isbase = false;
    mutable bool kpropertiesdialog_sender_isbase = false;
    mutable bool kpropertiesdialog_sendersignalindex_isbase = false;
    mutable bool kpropertiesdialog_receivers_isbase = false;
    mutable bool kpropertiesdialog_issignalconnected_isbase = false;
    mutable bool kpropertiesdialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKPropertiesDialog(const KFileItem& item) : KPropertiesDialog(item) {};
    VirtualKPropertiesDialog(const KFileItemList& _items) : KPropertiesDialog(_items) {};
    VirtualKPropertiesDialog(const QUrl& url) : KPropertiesDialog(url) {};
    VirtualKPropertiesDialog(const QList<QUrl>& urls) : KPropertiesDialog(urls) {};
    VirtualKPropertiesDialog(const QUrl& _tempUrl, const QUrl& _currentDir, const QString& _defaultName) : KPropertiesDialog(_tempUrl, _currentDir, _defaultName) {};
    VirtualKPropertiesDialog(const QString& title) : KPropertiesDialog(title) {};
    VirtualKPropertiesDialog(const KFileItem& item, QWidget* parent) : KPropertiesDialog(item, parent) {};
    VirtualKPropertiesDialog(const KFileItemList& _items, QWidget* parent) : KPropertiesDialog(_items, parent) {};
    VirtualKPropertiesDialog(const QUrl& url, QWidget* parent) : KPropertiesDialog(url, parent) {};
    VirtualKPropertiesDialog(const QList<QUrl>& urls, QWidget* parent) : KPropertiesDialog(urls, parent) {};
    VirtualKPropertiesDialog(const QUrl& _tempUrl, const QUrl& _currentDir, const QString& _defaultName, QWidget* parent) : KPropertiesDialog(_tempUrl, _currentDir, _defaultName, parent) {};
    VirtualKPropertiesDialog(const QString& title, QWidget* parent) : KPropertiesDialog(title, parent) {};

    ~VirtualKPropertiesDialog() {
        kpropertiesdialog_metacall_callback = nullptr;
        kpropertiesdialog_accept_callback = nullptr;
        kpropertiesdialog_reject_callback = nullptr;
        kpropertiesdialog_setvisible_callback = nullptr;
        kpropertiesdialog_sizehint_callback = nullptr;
        kpropertiesdialog_minimumsizehint_callback = nullptr;
        kpropertiesdialog_open_callback = nullptr;
        kpropertiesdialog_exec_callback = nullptr;
        kpropertiesdialog_done_callback = nullptr;
        kpropertiesdialog_keypressevent_callback = nullptr;
        kpropertiesdialog_closeevent_callback = nullptr;
        kpropertiesdialog_showevent_callback = nullptr;
        kpropertiesdialog_resizeevent_callback = nullptr;
        kpropertiesdialog_contextmenuevent_callback = nullptr;
        kpropertiesdialog_eventfilter_callback = nullptr;
        kpropertiesdialog_devtype_callback = nullptr;
        kpropertiesdialog_heightforwidth_callback = nullptr;
        kpropertiesdialog_hasheightforwidth_callback = nullptr;
        kpropertiesdialog_paintengine_callback = nullptr;
        kpropertiesdialog_event_callback = nullptr;
        kpropertiesdialog_mousepressevent_callback = nullptr;
        kpropertiesdialog_mousereleaseevent_callback = nullptr;
        kpropertiesdialog_mousedoubleclickevent_callback = nullptr;
        kpropertiesdialog_mousemoveevent_callback = nullptr;
        kpropertiesdialog_wheelevent_callback = nullptr;
        kpropertiesdialog_keyreleaseevent_callback = nullptr;
        kpropertiesdialog_focusinevent_callback = nullptr;
        kpropertiesdialog_focusoutevent_callback = nullptr;
        kpropertiesdialog_enterevent_callback = nullptr;
        kpropertiesdialog_leaveevent_callback = nullptr;
        kpropertiesdialog_paintevent_callback = nullptr;
        kpropertiesdialog_moveevent_callback = nullptr;
        kpropertiesdialog_tabletevent_callback = nullptr;
        kpropertiesdialog_actionevent_callback = nullptr;
        kpropertiesdialog_dragenterevent_callback = nullptr;
        kpropertiesdialog_dragmoveevent_callback = nullptr;
        kpropertiesdialog_dragleaveevent_callback = nullptr;
        kpropertiesdialog_dropevent_callback = nullptr;
        kpropertiesdialog_hideevent_callback = nullptr;
        kpropertiesdialog_nativeevent_callback = nullptr;
        kpropertiesdialog_changeevent_callback = nullptr;
        kpropertiesdialog_metric_callback = nullptr;
        kpropertiesdialog_initpainter_callback = nullptr;
        kpropertiesdialog_redirected_callback = nullptr;
        kpropertiesdialog_sharedpainter_callback = nullptr;
        kpropertiesdialog_inputmethodevent_callback = nullptr;
        kpropertiesdialog_inputmethodquery_callback = nullptr;
        kpropertiesdialog_focusnextprevchild_callback = nullptr;
        kpropertiesdialog_timerevent_callback = nullptr;
        kpropertiesdialog_childevent_callback = nullptr;
        kpropertiesdialog_customevent_callback = nullptr;
        kpropertiesdialog_connectnotify_callback = nullptr;
        kpropertiesdialog_disconnectnotify_callback = nullptr;
        kpropertiesdialog_pagewidget_callback = nullptr;
        kpropertiesdialog_setpagewidget_callback = nullptr;
        kpropertiesdialog_buttonbox_callback = nullptr;
        kpropertiesdialog_setbuttonbox_callback = nullptr;
        kpropertiesdialog_adjustposition_callback = nullptr;
        kpropertiesdialog_updatemicrofocus_callback = nullptr;
        kpropertiesdialog_create_callback = nullptr;
        kpropertiesdialog_destroy_callback = nullptr;
        kpropertiesdialog_focusnextchild_callback = nullptr;
        kpropertiesdialog_focuspreviouschild_callback = nullptr;
        kpropertiesdialog_sender_callback = nullptr;
        kpropertiesdialog_sendersignalindex_callback = nullptr;
        kpropertiesdialog_receivers_callback = nullptr;
        kpropertiesdialog_issignalconnected_callback = nullptr;
        kpropertiesdialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKPropertiesDialog_Metacall_Callback(KPropertiesDialog_Metacall_Callback cb) { kpropertiesdialog_metacall_callback = cb; }
    inline void setKPropertiesDialog_Accept_Callback(KPropertiesDialog_Accept_Callback cb) { kpropertiesdialog_accept_callback = cb; }
    inline void setKPropertiesDialog_Reject_Callback(KPropertiesDialog_Reject_Callback cb) { kpropertiesdialog_reject_callback = cb; }
    inline void setKPropertiesDialog_SetVisible_Callback(KPropertiesDialog_SetVisible_Callback cb) { kpropertiesdialog_setvisible_callback = cb; }
    inline void setKPropertiesDialog_SizeHint_Callback(KPropertiesDialog_SizeHint_Callback cb) { kpropertiesdialog_sizehint_callback = cb; }
    inline void setKPropertiesDialog_MinimumSizeHint_Callback(KPropertiesDialog_MinimumSizeHint_Callback cb) { kpropertiesdialog_minimumsizehint_callback = cb; }
    inline void setKPropertiesDialog_Open_Callback(KPropertiesDialog_Open_Callback cb) { kpropertiesdialog_open_callback = cb; }
    inline void setKPropertiesDialog_Exec_Callback(KPropertiesDialog_Exec_Callback cb) { kpropertiesdialog_exec_callback = cb; }
    inline void setKPropertiesDialog_Done_Callback(KPropertiesDialog_Done_Callback cb) { kpropertiesdialog_done_callback = cb; }
    inline void setKPropertiesDialog_KeyPressEvent_Callback(KPropertiesDialog_KeyPressEvent_Callback cb) { kpropertiesdialog_keypressevent_callback = cb; }
    inline void setKPropertiesDialog_CloseEvent_Callback(KPropertiesDialog_CloseEvent_Callback cb) { kpropertiesdialog_closeevent_callback = cb; }
    inline void setKPropertiesDialog_ShowEvent_Callback(KPropertiesDialog_ShowEvent_Callback cb) { kpropertiesdialog_showevent_callback = cb; }
    inline void setKPropertiesDialog_ResizeEvent_Callback(KPropertiesDialog_ResizeEvent_Callback cb) { kpropertiesdialog_resizeevent_callback = cb; }
    inline void setKPropertiesDialog_ContextMenuEvent_Callback(KPropertiesDialog_ContextMenuEvent_Callback cb) { kpropertiesdialog_contextmenuevent_callback = cb; }
    inline void setKPropertiesDialog_EventFilter_Callback(KPropertiesDialog_EventFilter_Callback cb) { kpropertiesdialog_eventfilter_callback = cb; }
    inline void setKPropertiesDialog_DevType_Callback(KPropertiesDialog_DevType_Callback cb) { kpropertiesdialog_devtype_callback = cb; }
    inline void setKPropertiesDialog_HeightForWidth_Callback(KPropertiesDialog_HeightForWidth_Callback cb) { kpropertiesdialog_heightforwidth_callback = cb; }
    inline void setKPropertiesDialog_HasHeightForWidth_Callback(KPropertiesDialog_HasHeightForWidth_Callback cb) { kpropertiesdialog_hasheightforwidth_callback = cb; }
    inline void setKPropertiesDialog_PaintEngine_Callback(KPropertiesDialog_PaintEngine_Callback cb) { kpropertiesdialog_paintengine_callback = cb; }
    inline void setKPropertiesDialog_Event_Callback(KPropertiesDialog_Event_Callback cb) { kpropertiesdialog_event_callback = cb; }
    inline void setKPropertiesDialog_MousePressEvent_Callback(KPropertiesDialog_MousePressEvent_Callback cb) { kpropertiesdialog_mousepressevent_callback = cb; }
    inline void setKPropertiesDialog_MouseReleaseEvent_Callback(KPropertiesDialog_MouseReleaseEvent_Callback cb) { kpropertiesdialog_mousereleaseevent_callback = cb; }
    inline void setKPropertiesDialog_MouseDoubleClickEvent_Callback(KPropertiesDialog_MouseDoubleClickEvent_Callback cb) { kpropertiesdialog_mousedoubleclickevent_callback = cb; }
    inline void setKPropertiesDialog_MouseMoveEvent_Callback(KPropertiesDialog_MouseMoveEvent_Callback cb) { kpropertiesdialog_mousemoveevent_callback = cb; }
    inline void setKPropertiesDialog_WheelEvent_Callback(KPropertiesDialog_WheelEvent_Callback cb) { kpropertiesdialog_wheelevent_callback = cb; }
    inline void setKPropertiesDialog_KeyReleaseEvent_Callback(KPropertiesDialog_KeyReleaseEvent_Callback cb) { kpropertiesdialog_keyreleaseevent_callback = cb; }
    inline void setKPropertiesDialog_FocusInEvent_Callback(KPropertiesDialog_FocusInEvent_Callback cb) { kpropertiesdialog_focusinevent_callback = cb; }
    inline void setKPropertiesDialog_FocusOutEvent_Callback(KPropertiesDialog_FocusOutEvent_Callback cb) { kpropertiesdialog_focusoutevent_callback = cb; }
    inline void setKPropertiesDialog_EnterEvent_Callback(KPropertiesDialog_EnterEvent_Callback cb) { kpropertiesdialog_enterevent_callback = cb; }
    inline void setKPropertiesDialog_LeaveEvent_Callback(KPropertiesDialog_LeaveEvent_Callback cb) { kpropertiesdialog_leaveevent_callback = cb; }
    inline void setKPropertiesDialog_PaintEvent_Callback(KPropertiesDialog_PaintEvent_Callback cb) { kpropertiesdialog_paintevent_callback = cb; }
    inline void setKPropertiesDialog_MoveEvent_Callback(KPropertiesDialog_MoveEvent_Callback cb) { kpropertiesdialog_moveevent_callback = cb; }
    inline void setKPropertiesDialog_TabletEvent_Callback(KPropertiesDialog_TabletEvent_Callback cb) { kpropertiesdialog_tabletevent_callback = cb; }
    inline void setKPropertiesDialog_ActionEvent_Callback(KPropertiesDialog_ActionEvent_Callback cb) { kpropertiesdialog_actionevent_callback = cb; }
    inline void setKPropertiesDialog_DragEnterEvent_Callback(KPropertiesDialog_DragEnterEvent_Callback cb) { kpropertiesdialog_dragenterevent_callback = cb; }
    inline void setKPropertiesDialog_DragMoveEvent_Callback(KPropertiesDialog_DragMoveEvent_Callback cb) { kpropertiesdialog_dragmoveevent_callback = cb; }
    inline void setKPropertiesDialog_DragLeaveEvent_Callback(KPropertiesDialog_DragLeaveEvent_Callback cb) { kpropertiesdialog_dragleaveevent_callback = cb; }
    inline void setKPropertiesDialog_DropEvent_Callback(KPropertiesDialog_DropEvent_Callback cb) { kpropertiesdialog_dropevent_callback = cb; }
    inline void setKPropertiesDialog_HideEvent_Callback(KPropertiesDialog_HideEvent_Callback cb) { kpropertiesdialog_hideevent_callback = cb; }
    inline void setKPropertiesDialog_NativeEvent_Callback(KPropertiesDialog_NativeEvent_Callback cb) { kpropertiesdialog_nativeevent_callback = cb; }
    inline void setKPropertiesDialog_ChangeEvent_Callback(KPropertiesDialog_ChangeEvent_Callback cb) { kpropertiesdialog_changeevent_callback = cb; }
    inline void setKPropertiesDialog_Metric_Callback(KPropertiesDialog_Metric_Callback cb) { kpropertiesdialog_metric_callback = cb; }
    inline void setKPropertiesDialog_InitPainter_Callback(KPropertiesDialog_InitPainter_Callback cb) { kpropertiesdialog_initpainter_callback = cb; }
    inline void setKPropertiesDialog_Redirected_Callback(KPropertiesDialog_Redirected_Callback cb) { kpropertiesdialog_redirected_callback = cb; }
    inline void setKPropertiesDialog_SharedPainter_Callback(KPropertiesDialog_SharedPainter_Callback cb) { kpropertiesdialog_sharedpainter_callback = cb; }
    inline void setKPropertiesDialog_InputMethodEvent_Callback(KPropertiesDialog_InputMethodEvent_Callback cb) { kpropertiesdialog_inputmethodevent_callback = cb; }
    inline void setKPropertiesDialog_InputMethodQuery_Callback(KPropertiesDialog_InputMethodQuery_Callback cb) { kpropertiesdialog_inputmethodquery_callback = cb; }
    inline void setKPropertiesDialog_FocusNextPrevChild_Callback(KPropertiesDialog_FocusNextPrevChild_Callback cb) { kpropertiesdialog_focusnextprevchild_callback = cb; }
    inline void setKPropertiesDialog_TimerEvent_Callback(KPropertiesDialog_TimerEvent_Callback cb) { kpropertiesdialog_timerevent_callback = cb; }
    inline void setKPropertiesDialog_ChildEvent_Callback(KPropertiesDialog_ChildEvent_Callback cb) { kpropertiesdialog_childevent_callback = cb; }
    inline void setKPropertiesDialog_CustomEvent_Callback(KPropertiesDialog_CustomEvent_Callback cb) { kpropertiesdialog_customevent_callback = cb; }
    inline void setKPropertiesDialog_ConnectNotify_Callback(KPropertiesDialog_ConnectNotify_Callback cb) { kpropertiesdialog_connectnotify_callback = cb; }
    inline void setKPropertiesDialog_DisconnectNotify_Callback(KPropertiesDialog_DisconnectNotify_Callback cb) { kpropertiesdialog_disconnectnotify_callback = cb; }
    inline void setKPropertiesDialog_PageWidget_Callback(KPropertiesDialog_PageWidget_Callback cb) { kpropertiesdialog_pagewidget_callback = cb; }
    inline void setKPropertiesDialog_SetPageWidget_Callback(KPropertiesDialog_SetPageWidget_Callback cb) { kpropertiesdialog_setpagewidget_callback = cb; }
    inline void setKPropertiesDialog_ButtonBox_Callback(KPropertiesDialog_ButtonBox_Callback cb) { kpropertiesdialog_buttonbox_callback = cb; }
    inline void setKPropertiesDialog_SetButtonBox_Callback(KPropertiesDialog_SetButtonBox_Callback cb) { kpropertiesdialog_setbuttonbox_callback = cb; }
    inline void setKPropertiesDialog_AdjustPosition_Callback(KPropertiesDialog_AdjustPosition_Callback cb) { kpropertiesdialog_adjustposition_callback = cb; }
    inline void setKPropertiesDialog_UpdateMicroFocus_Callback(KPropertiesDialog_UpdateMicroFocus_Callback cb) { kpropertiesdialog_updatemicrofocus_callback = cb; }
    inline void setKPropertiesDialog_Create_Callback(KPropertiesDialog_Create_Callback cb) { kpropertiesdialog_create_callback = cb; }
    inline void setKPropertiesDialog_Destroy_Callback(KPropertiesDialog_Destroy_Callback cb) { kpropertiesdialog_destroy_callback = cb; }
    inline void setKPropertiesDialog_FocusNextChild_Callback(KPropertiesDialog_FocusNextChild_Callback cb) { kpropertiesdialog_focusnextchild_callback = cb; }
    inline void setKPropertiesDialog_FocusPreviousChild_Callback(KPropertiesDialog_FocusPreviousChild_Callback cb) { kpropertiesdialog_focuspreviouschild_callback = cb; }
    inline void setKPropertiesDialog_Sender_Callback(KPropertiesDialog_Sender_Callback cb) { kpropertiesdialog_sender_callback = cb; }
    inline void setKPropertiesDialog_SenderSignalIndex_Callback(KPropertiesDialog_SenderSignalIndex_Callback cb) { kpropertiesdialog_sendersignalindex_callback = cb; }
    inline void setKPropertiesDialog_Receivers_Callback(KPropertiesDialog_Receivers_Callback cb) { kpropertiesdialog_receivers_callback = cb; }
    inline void setKPropertiesDialog_IsSignalConnected_Callback(KPropertiesDialog_IsSignalConnected_Callback cb) { kpropertiesdialog_issignalconnected_callback = cb; }
    inline void setKPropertiesDialog_GetDecodedMetricF_Callback(KPropertiesDialog_GetDecodedMetricF_Callback cb) { kpropertiesdialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKPropertiesDialog_Metacall_IsBase(bool value) const { kpropertiesdialog_metacall_isbase = value; }
    inline void setKPropertiesDialog_Accept_IsBase(bool value) const { kpropertiesdialog_accept_isbase = value; }
    inline void setKPropertiesDialog_Reject_IsBase(bool value) const { kpropertiesdialog_reject_isbase = value; }
    inline void setKPropertiesDialog_SetVisible_IsBase(bool value) const { kpropertiesdialog_setvisible_isbase = value; }
    inline void setKPropertiesDialog_SizeHint_IsBase(bool value) const { kpropertiesdialog_sizehint_isbase = value; }
    inline void setKPropertiesDialog_MinimumSizeHint_IsBase(bool value) const { kpropertiesdialog_minimumsizehint_isbase = value; }
    inline void setKPropertiesDialog_Open_IsBase(bool value) const { kpropertiesdialog_open_isbase = value; }
    inline void setKPropertiesDialog_Exec_IsBase(bool value) const { kpropertiesdialog_exec_isbase = value; }
    inline void setKPropertiesDialog_Done_IsBase(bool value) const { kpropertiesdialog_done_isbase = value; }
    inline void setKPropertiesDialog_KeyPressEvent_IsBase(bool value) const { kpropertiesdialog_keypressevent_isbase = value; }
    inline void setKPropertiesDialog_CloseEvent_IsBase(bool value) const { kpropertiesdialog_closeevent_isbase = value; }
    inline void setKPropertiesDialog_ShowEvent_IsBase(bool value) const { kpropertiesdialog_showevent_isbase = value; }
    inline void setKPropertiesDialog_ResizeEvent_IsBase(bool value) const { kpropertiesdialog_resizeevent_isbase = value; }
    inline void setKPropertiesDialog_ContextMenuEvent_IsBase(bool value) const { kpropertiesdialog_contextmenuevent_isbase = value; }
    inline void setKPropertiesDialog_EventFilter_IsBase(bool value) const { kpropertiesdialog_eventfilter_isbase = value; }
    inline void setKPropertiesDialog_DevType_IsBase(bool value) const { kpropertiesdialog_devtype_isbase = value; }
    inline void setKPropertiesDialog_HeightForWidth_IsBase(bool value) const { kpropertiesdialog_heightforwidth_isbase = value; }
    inline void setKPropertiesDialog_HasHeightForWidth_IsBase(bool value) const { kpropertiesdialog_hasheightforwidth_isbase = value; }
    inline void setKPropertiesDialog_PaintEngine_IsBase(bool value) const { kpropertiesdialog_paintengine_isbase = value; }
    inline void setKPropertiesDialog_Event_IsBase(bool value) const { kpropertiesdialog_event_isbase = value; }
    inline void setKPropertiesDialog_MousePressEvent_IsBase(bool value) const { kpropertiesdialog_mousepressevent_isbase = value; }
    inline void setKPropertiesDialog_MouseReleaseEvent_IsBase(bool value) const { kpropertiesdialog_mousereleaseevent_isbase = value; }
    inline void setKPropertiesDialog_MouseDoubleClickEvent_IsBase(bool value) const { kpropertiesdialog_mousedoubleclickevent_isbase = value; }
    inline void setKPropertiesDialog_MouseMoveEvent_IsBase(bool value) const { kpropertiesdialog_mousemoveevent_isbase = value; }
    inline void setKPropertiesDialog_WheelEvent_IsBase(bool value) const { kpropertiesdialog_wheelevent_isbase = value; }
    inline void setKPropertiesDialog_KeyReleaseEvent_IsBase(bool value) const { kpropertiesdialog_keyreleaseevent_isbase = value; }
    inline void setKPropertiesDialog_FocusInEvent_IsBase(bool value) const { kpropertiesdialog_focusinevent_isbase = value; }
    inline void setKPropertiesDialog_FocusOutEvent_IsBase(bool value) const { kpropertiesdialog_focusoutevent_isbase = value; }
    inline void setKPropertiesDialog_EnterEvent_IsBase(bool value) const { kpropertiesdialog_enterevent_isbase = value; }
    inline void setKPropertiesDialog_LeaveEvent_IsBase(bool value) const { kpropertiesdialog_leaveevent_isbase = value; }
    inline void setKPropertiesDialog_PaintEvent_IsBase(bool value) const { kpropertiesdialog_paintevent_isbase = value; }
    inline void setKPropertiesDialog_MoveEvent_IsBase(bool value) const { kpropertiesdialog_moveevent_isbase = value; }
    inline void setKPropertiesDialog_TabletEvent_IsBase(bool value) const { kpropertiesdialog_tabletevent_isbase = value; }
    inline void setKPropertiesDialog_ActionEvent_IsBase(bool value) const { kpropertiesdialog_actionevent_isbase = value; }
    inline void setKPropertiesDialog_DragEnterEvent_IsBase(bool value) const { kpropertiesdialog_dragenterevent_isbase = value; }
    inline void setKPropertiesDialog_DragMoveEvent_IsBase(bool value) const { kpropertiesdialog_dragmoveevent_isbase = value; }
    inline void setKPropertiesDialog_DragLeaveEvent_IsBase(bool value) const { kpropertiesdialog_dragleaveevent_isbase = value; }
    inline void setKPropertiesDialog_DropEvent_IsBase(bool value) const { kpropertiesdialog_dropevent_isbase = value; }
    inline void setKPropertiesDialog_HideEvent_IsBase(bool value) const { kpropertiesdialog_hideevent_isbase = value; }
    inline void setKPropertiesDialog_NativeEvent_IsBase(bool value) const { kpropertiesdialog_nativeevent_isbase = value; }
    inline void setKPropertiesDialog_ChangeEvent_IsBase(bool value) const { kpropertiesdialog_changeevent_isbase = value; }
    inline void setKPropertiesDialog_Metric_IsBase(bool value) const { kpropertiesdialog_metric_isbase = value; }
    inline void setKPropertiesDialog_InitPainter_IsBase(bool value) const { kpropertiesdialog_initpainter_isbase = value; }
    inline void setKPropertiesDialog_Redirected_IsBase(bool value) const { kpropertiesdialog_redirected_isbase = value; }
    inline void setKPropertiesDialog_SharedPainter_IsBase(bool value) const { kpropertiesdialog_sharedpainter_isbase = value; }
    inline void setKPropertiesDialog_InputMethodEvent_IsBase(bool value) const { kpropertiesdialog_inputmethodevent_isbase = value; }
    inline void setKPropertiesDialog_InputMethodQuery_IsBase(bool value) const { kpropertiesdialog_inputmethodquery_isbase = value; }
    inline void setKPropertiesDialog_FocusNextPrevChild_IsBase(bool value) const { kpropertiesdialog_focusnextprevchild_isbase = value; }
    inline void setKPropertiesDialog_TimerEvent_IsBase(bool value) const { kpropertiesdialog_timerevent_isbase = value; }
    inline void setKPropertiesDialog_ChildEvent_IsBase(bool value) const { kpropertiesdialog_childevent_isbase = value; }
    inline void setKPropertiesDialog_CustomEvent_IsBase(bool value) const { kpropertiesdialog_customevent_isbase = value; }
    inline void setKPropertiesDialog_ConnectNotify_IsBase(bool value) const { kpropertiesdialog_connectnotify_isbase = value; }
    inline void setKPropertiesDialog_DisconnectNotify_IsBase(bool value) const { kpropertiesdialog_disconnectnotify_isbase = value; }
    inline void setKPropertiesDialog_PageWidget_IsBase(bool value) const { kpropertiesdialog_pagewidget_isbase = value; }
    inline void setKPropertiesDialog_SetPageWidget_IsBase(bool value) const { kpropertiesdialog_setpagewidget_isbase = value; }
    inline void setKPropertiesDialog_ButtonBox_IsBase(bool value) const { kpropertiesdialog_buttonbox_isbase = value; }
    inline void setKPropertiesDialog_SetButtonBox_IsBase(bool value) const { kpropertiesdialog_setbuttonbox_isbase = value; }
    inline void setKPropertiesDialog_AdjustPosition_IsBase(bool value) const { kpropertiesdialog_adjustposition_isbase = value; }
    inline void setKPropertiesDialog_UpdateMicroFocus_IsBase(bool value) const { kpropertiesdialog_updatemicrofocus_isbase = value; }
    inline void setKPropertiesDialog_Create_IsBase(bool value) const { kpropertiesdialog_create_isbase = value; }
    inline void setKPropertiesDialog_Destroy_IsBase(bool value) const { kpropertiesdialog_destroy_isbase = value; }
    inline void setKPropertiesDialog_FocusNextChild_IsBase(bool value) const { kpropertiesdialog_focusnextchild_isbase = value; }
    inline void setKPropertiesDialog_FocusPreviousChild_IsBase(bool value) const { kpropertiesdialog_focuspreviouschild_isbase = value; }
    inline void setKPropertiesDialog_Sender_IsBase(bool value) const { kpropertiesdialog_sender_isbase = value; }
    inline void setKPropertiesDialog_SenderSignalIndex_IsBase(bool value) const { kpropertiesdialog_sendersignalindex_isbase = value; }
    inline void setKPropertiesDialog_Receivers_IsBase(bool value) const { kpropertiesdialog_receivers_isbase = value; }
    inline void setKPropertiesDialog_IsSignalConnected_IsBase(bool value) const { kpropertiesdialog_issignalconnected_isbase = value; }
    inline void setKPropertiesDialog_GetDecodedMetricF_IsBase(bool value) const { kpropertiesdialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpropertiesdialog_metacall_isbase) {
            kpropertiesdialog_metacall_isbase = false;
            return KPropertiesDialog::qt_metacall(param1, param2, param3);
        } else if (kpropertiesdialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kpropertiesdialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KPropertiesDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kpropertiesdialog_accept_isbase) {
            kpropertiesdialog_accept_isbase = false;
            KPropertiesDialog::accept();
        } else if (kpropertiesdialog_accept_callback != nullptr) {
            kpropertiesdialog_accept_callback();
        } else {
            KPropertiesDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kpropertiesdialog_reject_isbase) {
            kpropertiesdialog_reject_isbase = false;
            KPropertiesDialog::reject();
        } else if (kpropertiesdialog_reject_callback != nullptr) {
            kpropertiesdialog_reject_callback();
        } else {
            KPropertiesDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpropertiesdialog_setvisible_isbase) {
            kpropertiesdialog_setvisible_isbase = false;
            KPropertiesDialog::setVisible(visible);
        } else if (kpropertiesdialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kpropertiesdialog_setvisible_callback(this, cbval1);
        } else {
            KPropertiesDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpropertiesdialog_sizehint_isbase) {
            kpropertiesdialog_sizehint_isbase = false;
            return KPropertiesDialog::sizeHint();
        } else if (kpropertiesdialog_sizehint_callback != nullptr) {
            QSize* callback_ret = kpropertiesdialog_sizehint_callback();
            return *callback_ret;
        } else {
            return KPropertiesDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpropertiesdialog_minimumsizehint_isbase) {
            kpropertiesdialog_minimumsizehint_isbase = false;
            return KPropertiesDialog::minimumSizeHint();
        } else if (kpropertiesdialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kpropertiesdialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KPropertiesDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kpropertiesdialog_open_isbase) {
            kpropertiesdialog_open_isbase = false;
            KPropertiesDialog::open();
        } else if (kpropertiesdialog_open_callback != nullptr) {
            kpropertiesdialog_open_callback();
        } else {
            KPropertiesDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kpropertiesdialog_exec_isbase) {
            kpropertiesdialog_exec_isbase = false;
            return KPropertiesDialog::exec();
        } else if (kpropertiesdialog_exec_callback != nullptr) {
            int callback_ret = kpropertiesdialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPropertiesDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kpropertiesdialog_done_isbase) {
            kpropertiesdialog_done_isbase = false;
            KPropertiesDialog::done(param1);
        } else if (kpropertiesdialog_done_callback != nullptr) {
            int cbval1 = param1;

            kpropertiesdialog_done_callback(this, cbval1);
        } else {
            KPropertiesDialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kpropertiesdialog_keypressevent_isbase) {
            kpropertiesdialog_keypressevent_isbase = false;
            KPropertiesDialog::keyPressEvent(param1);
        } else if (kpropertiesdialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            kpropertiesdialog_keypressevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kpropertiesdialog_closeevent_isbase) {
            kpropertiesdialog_closeevent_isbase = false;
            KPropertiesDialog::closeEvent(param1);
        } else if (kpropertiesdialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            kpropertiesdialog_closeevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kpropertiesdialog_showevent_isbase) {
            kpropertiesdialog_showevent_isbase = false;
            KPropertiesDialog::showEvent(param1);
        } else if (kpropertiesdialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            kpropertiesdialog_showevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kpropertiesdialog_resizeevent_isbase) {
            kpropertiesdialog_resizeevent_isbase = false;
            KPropertiesDialog::resizeEvent(param1);
        } else if (kpropertiesdialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            kpropertiesdialog_resizeevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kpropertiesdialog_contextmenuevent_isbase) {
            kpropertiesdialog_contextmenuevent_isbase = false;
            KPropertiesDialog::contextMenuEvent(param1);
        } else if (kpropertiesdialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            kpropertiesdialog_contextmenuevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kpropertiesdialog_eventfilter_isbase) {
            kpropertiesdialog_eventfilter_isbase = false;
            return KPropertiesDialog::eventFilter(param1, param2);
        } else if (kpropertiesdialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = kpropertiesdialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KPropertiesDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpropertiesdialog_devtype_isbase) {
            kpropertiesdialog_devtype_isbase = false;
            return KPropertiesDialog::devType();
        } else if (kpropertiesdialog_devtype_callback != nullptr) {
            int callback_ret = kpropertiesdialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPropertiesDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpropertiesdialog_heightforwidth_isbase) {
            kpropertiesdialog_heightforwidth_isbase = false;
            return KPropertiesDialog::heightForWidth(param1);
        } else if (kpropertiesdialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kpropertiesdialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPropertiesDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpropertiesdialog_hasheightforwidth_isbase) {
            kpropertiesdialog_hasheightforwidth_isbase = false;
            return KPropertiesDialog::hasHeightForWidth();
        } else if (kpropertiesdialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kpropertiesdialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KPropertiesDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpropertiesdialog_paintengine_isbase) {
            kpropertiesdialog_paintengine_isbase = false;
            return KPropertiesDialog::paintEngine();
        } else if (kpropertiesdialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kpropertiesdialog_paintengine_callback();
            return callback_ret;
        } else {
            return KPropertiesDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpropertiesdialog_event_isbase) {
            kpropertiesdialog_event_isbase = false;
            return KPropertiesDialog::event(event);
        } else if (kpropertiesdialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kpropertiesdialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPropertiesDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpropertiesdialog_mousepressevent_isbase) {
            kpropertiesdialog_mousepressevent_isbase = false;
            KPropertiesDialog::mousePressEvent(event);
        } else if (kpropertiesdialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpropertiesdialog_mousepressevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpropertiesdialog_mousereleaseevent_isbase) {
            kpropertiesdialog_mousereleaseevent_isbase = false;
            KPropertiesDialog::mouseReleaseEvent(event);
        } else if (kpropertiesdialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpropertiesdialog_mousereleaseevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpropertiesdialog_mousedoubleclickevent_isbase) {
            kpropertiesdialog_mousedoubleclickevent_isbase = false;
            KPropertiesDialog::mouseDoubleClickEvent(event);
        } else if (kpropertiesdialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpropertiesdialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpropertiesdialog_mousemoveevent_isbase) {
            kpropertiesdialog_mousemoveevent_isbase = false;
            KPropertiesDialog::mouseMoveEvent(event);
        } else if (kpropertiesdialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpropertiesdialog_mousemoveevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpropertiesdialog_wheelevent_isbase) {
            kpropertiesdialog_wheelevent_isbase = false;
            KPropertiesDialog::wheelEvent(event);
        } else if (kpropertiesdialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kpropertiesdialog_wheelevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpropertiesdialog_keyreleaseevent_isbase) {
            kpropertiesdialog_keyreleaseevent_isbase = false;
            KPropertiesDialog::keyReleaseEvent(event);
        } else if (kpropertiesdialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kpropertiesdialog_keyreleaseevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpropertiesdialog_focusinevent_isbase) {
            kpropertiesdialog_focusinevent_isbase = false;
            KPropertiesDialog::focusInEvent(event);
        } else if (kpropertiesdialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kpropertiesdialog_focusinevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpropertiesdialog_focusoutevent_isbase) {
            kpropertiesdialog_focusoutevent_isbase = false;
            KPropertiesDialog::focusOutEvent(event);
        } else if (kpropertiesdialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kpropertiesdialog_focusoutevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpropertiesdialog_enterevent_isbase) {
            kpropertiesdialog_enterevent_isbase = false;
            KPropertiesDialog::enterEvent(event);
        } else if (kpropertiesdialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kpropertiesdialog_enterevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpropertiesdialog_leaveevent_isbase) {
            kpropertiesdialog_leaveevent_isbase = false;
            KPropertiesDialog::leaveEvent(event);
        } else if (kpropertiesdialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kpropertiesdialog_leaveevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpropertiesdialog_paintevent_isbase) {
            kpropertiesdialog_paintevent_isbase = false;
            KPropertiesDialog::paintEvent(event);
        } else if (kpropertiesdialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kpropertiesdialog_paintevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpropertiesdialog_moveevent_isbase) {
            kpropertiesdialog_moveevent_isbase = false;
            KPropertiesDialog::moveEvent(event);
        } else if (kpropertiesdialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kpropertiesdialog_moveevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpropertiesdialog_tabletevent_isbase) {
            kpropertiesdialog_tabletevent_isbase = false;
            KPropertiesDialog::tabletEvent(event);
        } else if (kpropertiesdialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kpropertiesdialog_tabletevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpropertiesdialog_actionevent_isbase) {
            kpropertiesdialog_actionevent_isbase = false;
            KPropertiesDialog::actionEvent(event);
        } else if (kpropertiesdialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kpropertiesdialog_actionevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpropertiesdialog_dragenterevent_isbase) {
            kpropertiesdialog_dragenterevent_isbase = false;
            KPropertiesDialog::dragEnterEvent(event);
        } else if (kpropertiesdialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kpropertiesdialog_dragenterevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpropertiesdialog_dragmoveevent_isbase) {
            kpropertiesdialog_dragmoveevent_isbase = false;
            KPropertiesDialog::dragMoveEvent(event);
        } else if (kpropertiesdialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kpropertiesdialog_dragmoveevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpropertiesdialog_dragleaveevent_isbase) {
            kpropertiesdialog_dragleaveevent_isbase = false;
            KPropertiesDialog::dragLeaveEvent(event);
        } else if (kpropertiesdialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kpropertiesdialog_dragleaveevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpropertiesdialog_dropevent_isbase) {
            kpropertiesdialog_dropevent_isbase = false;
            KPropertiesDialog::dropEvent(event);
        } else if (kpropertiesdialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kpropertiesdialog_dropevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpropertiesdialog_hideevent_isbase) {
            kpropertiesdialog_hideevent_isbase = false;
            KPropertiesDialog::hideEvent(event);
        } else if (kpropertiesdialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kpropertiesdialog_hideevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpropertiesdialog_nativeevent_isbase) {
            kpropertiesdialog_nativeevent_isbase = false;
            return KPropertiesDialog::nativeEvent(eventType, message, result);
        } else if (kpropertiesdialog_nativeevent_callback != nullptr) {
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

            bool callback_ret = kpropertiesdialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KPropertiesDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpropertiesdialog_changeevent_isbase) {
            kpropertiesdialog_changeevent_isbase = false;
            KPropertiesDialog::changeEvent(param1);
        } else if (kpropertiesdialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kpropertiesdialog_changeevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpropertiesdialog_metric_isbase) {
            kpropertiesdialog_metric_isbase = false;
            return KPropertiesDialog::metric(param1);
        } else if (kpropertiesdialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kpropertiesdialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPropertiesDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpropertiesdialog_initpainter_isbase) {
            kpropertiesdialog_initpainter_isbase = false;
            KPropertiesDialog::initPainter(painter);
        } else if (kpropertiesdialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kpropertiesdialog_initpainter_callback(this, cbval1);
        } else {
            KPropertiesDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpropertiesdialog_redirected_isbase) {
            kpropertiesdialog_redirected_isbase = false;
            return KPropertiesDialog::redirected(offset);
        } else if (kpropertiesdialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kpropertiesdialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPropertiesDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpropertiesdialog_sharedpainter_isbase) {
            kpropertiesdialog_sharedpainter_isbase = false;
            return KPropertiesDialog::sharedPainter();
        } else if (kpropertiesdialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kpropertiesdialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return KPropertiesDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpropertiesdialog_inputmethodevent_isbase) {
            kpropertiesdialog_inputmethodevent_isbase = false;
            KPropertiesDialog::inputMethodEvent(param1);
        } else if (kpropertiesdialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kpropertiesdialog_inputmethodevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpropertiesdialog_inputmethodquery_isbase) {
            kpropertiesdialog_inputmethodquery_isbase = false;
            return KPropertiesDialog::inputMethodQuery(param1);
        } else if (kpropertiesdialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kpropertiesdialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KPropertiesDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpropertiesdialog_focusnextprevchild_isbase) {
            kpropertiesdialog_focusnextprevchild_isbase = false;
            return KPropertiesDialog::focusNextPrevChild(next);
        } else if (kpropertiesdialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kpropertiesdialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPropertiesDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpropertiesdialog_timerevent_isbase) {
            kpropertiesdialog_timerevent_isbase = false;
            KPropertiesDialog::timerEvent(event);
        } else if (kpropertiesdialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kpropertiesdialog_timerevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpropertiesdialog_childevent_isbase) {
            kpropertiesdialog_childevent_isbase = false;
            KPropertiesDialog::childEvent(event);
        } else if (kpropertiesdialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kpropertiesdialog_childevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpropertiesdialog_customevent_isbase) {
            kpropertiesdialog_customevent_isbase = false;
            KPropertiesDialog::customEvent(event);
        } else if (kpropertiesdialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kpropertiesdialog_customevent_callback(this, cbval1);
        } else {
            KPropertiesDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpropertiesdialog_connectnotify_isbase) {
            kpropertiesdialog_connectnotify_isbase = false;
            KPropertiesDialog::connectNotify(signal);
        } else if (kpropertiesdialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpropertiesdialog_connectnotify_callback(this, cbval1);
        } else {
            KPropertiesDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpropertiesdialog_disconnectnotify_isbase) {
            kpropertiesdialog_disconnectnotify_isbase = false;
            KPropertiesDialog::disconnectNotify(signal);
        } else if (kpropertiesdialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpropertiesdialog_disconnectnotify_callback(this, cbval1);
        } else {
            KPropertiesDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    KPageWidget* pageWidget() {
        if (kpropertiesdialog_pagewidget_isbase) {
            kpropertiesdialog_pagewidget_isbase = false;
            return KPropertiesDialog::pageWidget();
        } else if (kpropertiesdialog_pagewidget_callback != nullptr) {
            KPageWidget* callback_ret = kpropertiesdialog_pagewidget_callback();
            return callback_ret;
        } else {
            return KPropertiesDialog::pageWidget();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPageWidget(KPageWidget* widget) {
        if (kpropertiesdialog_setpagewidget_isbase) {
            kpropertiesdialog_setpagewidget_isbase = false;
            KPropertiesDialog::setPageWidget(widget);
        } else if (kpropertiesdialog_setpagewidget_callback != nullptr) {
            KPageWidget* cbval1 = widget;

            kpropertiesdialog_setpagewidget_callback(this, cbval1);
        } else {
            KPropertiesDialog::setPageWidget(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    QDialogButtonBox* buttonBox() {
        if (kpropertiesdialog_buttonbox_isbase) {
            kpropertiesdialog_buttonbox_isbase = false;
            return KPropertiesDialog::buttonBox();
        } else if (kpropertiesdialog_buttonbox_callback != nullptr) {
            QDialogButtonBox* callback_ret = kpropertiesdialog_buttonbox_callback();
            return callback_ret;
        } else {
            return KPropertiesDialog::buttonBox();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setButtonBox(QDialogButtonBox* box) {
        if (kpropertiesdialog_setbuttonbox_isbase) {
            kpropertiesdialog_setbuttonbox_isbase = false;
            KPropertiesDialog::setButtonBox(box);
        } else if (kpropertiesdialog_setbuttonbox_callback != nullptr) {
            QDialogButtonBox* cbval1 = box;

            kpropertiesdialog_setbuttonbox_callback(this, cbval1);
        } else {
            KPropertiesDialog::setButtonBox(box);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kpropertiesdialog_adjustposition_isbase) {
            kpropertiesdialog_adjustposition_isbase = false;
            KPropertiesDialog::adjustPosition(param1);
        } else if (kpropertiesdialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            kpropertiesdialog_adjustposition_callback(this, cbval1);
        } else {
            KPropertiesDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kpropertiesdialog_updatemicrofocus_isbase) {
            kpropertiesdialog_updatemicrofocus_isbase = false;
            KPropertiesDialog::updateMicroFocus();
        } else if (kpropertiesdialog_updatemicrofocus_callback != nullptr) {
            kpropertiesdialog_updatemicrofocus_callback();
        } else {
            KPropertiesDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kpropertiesdialog_create_isbase) {
            kpropertiesdialog_create_isbase = false;
            KPropertiesDialog::create();
        } else if (kpropertiesdialog_create_callback != nullptr) {
            kpropertiesdialog_create_callback();
        } else {
            KPropertiesDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kpropertiesdialog_destroy_isbase) {
            kpropertiesdialog_destroy_isbase = false;
            KPropertiesDialog::destroy();
        } else if (kpropertiesdialog_destroy_callback != nullptr) {
            kpropertiesdialog_destroy_callback();
        } else {
            KPropertiesDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kpropertiesdialog_focusnextchild_isbase) {
            kpropertiesdialog_focusnextchild_isbase = false;
            return KPropertiesDialog::focusNextChild();
        } else if (kpropertiesdialog_focusnextchild_callback != nullptr) {
            bool callback_ret = kpropertiesdialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return KPropertiesDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kpropertiesdialog_focuspreviouschild_isbase) {
            kpropertiesdialog_focuspreviouschild_isbase = false;
            return KPropertiesDialog::focusPreviousChild();
        } else if (kpropertiesdialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kpropertiesdialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KPropertiesDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kpropertiesdialog_sender_isbase) {
            kpropertiesdialog_sender_isbase = false;
            return KPropertiesDialog::sender();
        } else if (kpropertiesdialog_sender_callback != nullptr) {
            QObject* callback_ret = kpropertiesdialog_sender_callback();
            return callback_ret;
        } else {
            return KPropertiesDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kpropertiesdialog_sendersignalindex_isbase) {
            kpropertiesdialog_sendersignalindex_isbase = false;
            return KPropertiesDialog::senderSignalIndex();
        } else if (kpropertiesdialog_sendersignalindex_callback != nullptr) {
            int callback_ret = kpropertiesdialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPropertiesDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kpropertiesdialog_receivers_isbase) {
            kpropertiesdialog_receivers_isbase = false;
            return KPropertiesDialog::receivers(signal);
        } else if (kpropertiesdialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kpropertiesdialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPropertiesDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kpropertiesdialog_issignalconnected_isbase) {
            kpropertiesdialog_issignalconnected_isbase = false;
            return KPropertiesDialog::isSignalConnected(signal);
        } else if (kpropertiesdialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kpropertiesdialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPropertiesDialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kpropertiesdialog_getdecodedmetricf_isbase) {
            kpropertiesdialog_getdecodedmetricf_isbase = false;
            return KPropertiesDialog::getDecodedMetricF(metricA, metricB);
        } else if (kpropertiesdialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kpropertiesdialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KPropertiesDialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KPropertiesDialog_KeyPressEvent(KPropertiesDialog* self, QKeyEvent* param1);
    friend void KPropertiesDialog_QBaseKeyPressEvent(KPropertiesDialog* self, QKeyEvent* param1);
    friend void KPropertiesDialog_CloseEvent(KPropertiesDialog* self, QCloseEvent* param1);
    friend void KPropertiesDialog_QBaseCloseEvent(KPropertiesDialog* self, QCloseEvent* param1);
    friend void KPropertiesDialog_ShowEvent(KPropertiesDialog* self, QShowEvent* param1);
    friend void KPropertiesDialog_QBaseShowEvent(KPropertiesDialog* self, QShowEvent* param1);
    friend void KPropertiesDialog_ResizeEvent(KPropertiesDialog* self, QResizeEvent* param1);
    friend void KPropertiesDialog_QBaseResizeEvent(KPropertiesDialog* self, QResizeEvent* param1);
    friend void KPropertiesDialog_ContextMenuEvent(KPropertiesDialog* self, QContextMenuEvent* param1);
    friend void KPropertiesDialog_QBaseContextMenuEvent(KPropertiesDialog* self, QContextMenuEvent* param1);
    friend bool KPropertiesDialog_EventFilter(KPropertiesDialog* self, QObject* param1, QEvent* param2);
    friend bool KPropertiesDialog_QBaseEventFilter(KPropertiesDialog* self, QObject* param1, QEvent* param2);
    friend bool KPropertiesDialog_Event(KPropertiesDialog* self, QEvent* event);
    friend bool KPropertiesDialog_QBaseEvent(KPropertiesDialog* self, QEvent* event);
    friend void KPropertiesDialog_MousePressEvent(KPropertiesDialog* self, QMouseEvent* event);
    friend void KPropertiesDialog_QBaseMousePressEvent(KPropertiesDialog* self, QMouseEvent* event);
    friend void KPropertiesDialog_MouseReleaseEvent(KPropertiesDialog* self, QMouseEvent* event);
    friend void KPropertiesDialog_QBaseMouseReleaseEvent(KPropertiesDialog* self, QMouseEvent* event);
    friend void KPropertiesDialog_MouseDoubleClickEvent(KPropertiesDialog* self, QMouseEvent* event);
    friend void KPropertiesDialog_QBaseMouseDoubleClickEvent(KPropertiesDialog* self, QMouseEvent* event);
    friend void KPropertiesDialog_MouseMoveEvent(KPropertiesDialog* self, QMouseEvent* event);
    friend void KPropertiesDialog_QBaseMouseMoveEvent(KPropertiesDialog* self, QMouseEvent* event);
    friend void KPropertiesDialog_WheelEvent(KPropertiesDialog* self, QWheelEvent* event);
    friend void KPropertiesDialog_QBaseWheelEvent(KPropertiesDialog* self, QWheelEvent* event);
    friend void KPropertiesDialog_KeyReleaseEvent(KPropertiesDialog* self, QKeyEvent* event);
    friend void KPropertiesDialog_QBaseKeyReleaseEvent(KPropertiesDialog* self, QKeyEvent* event);
    friend void KPropertiesDialog_FocusInEvent(KPropertiesDialog* self, QFocusEvent* event);
    friend void KPropertiesDialog_QBaseFocusInEvent(KPropertiesDialog* self, QFocusEvent* event);
    friend void KPropertiesDialog_FocusOutEvent(KPropertiesDialog* self, QFocusEvent* event);
    friend void KPropertiesDialog_QBaseFocusOutEvent(KPropertiesDialog* self, QFocusEvent* event);
    friend void KPropertiesDialog_EnterEvent(KPropertiesDialog* self, QEnterEvent* event);
    friend void KPropertiesDialog_QBaseEnterEvent(KPropertiesDialog* self, QEnterEvent* event);
    friend void KPropertiesDialog_LeaveEvent(KPropertiesDialog* self, QEvent* event);
    friend void KPropertiesDialog_QBaseLeaveEvent(KPropertiesDialog* self, QEvent* event);
    friend void KPropertiesDialog_PaintEvent(KPropertiesDialog* self, QPaintEvent* event);
    friend void KPropertiesDialog_QBasePaintEvent(KPropertiesDialog* self, QPaintEvent* event);
    friend void KPropertiesDialog_MoveEvent(KPropertiesDialog* self, QMoveEvent* event);
    friend void KPropertiesDialog_QBaseMoveEvent(KPropertiesDialog* self, QMoveEvent* event);
    friend void KPropertiesDialog_TabletEvent(KPropertiesDialog* self, QTabletEvent* event);
    friend void KPropertiesDialog_QBaseTabletEvent(KPropertiesDialog* self, QTabletEvent* event);
    friend void KPropertiesDialog_ActionEvent(KPropertiesDialog* self, QActionEvent* event);
    friend void KPropertiesDialog_QBaseActionEvent(KPropertiesDialog* self, QActionEvent* event);
    friend void KPropertiesDialog_DragEnterEvent(KPropertiesDialog* self, QDragEnterEvent* event);
    friend void KPropertiesDialog_QBaseDragEnterEvent(KPropertiesDialog* self, QDragEnterEvent* event);
    friend void KPropertiesDialog_DragMoveEvent(KPropertiesDialog* self, QDragMoveEvent* event);
    friend void KPropertiesDialog_QBaseDragMoveEvent(KPropertiesDialog* self, QDragMoveEvent* event);
    friend void KPropertiesDialog_DragLeaveEvent(KPropertiesDialog* self, QDragLeaveEvent* event);
    friend void KPropertiesDialog_QBaseDragLeaveEvent(KPropertiesDialog* self, QDragLeaveEvent* event);
    friend void KPropertiesDialog_DropEvent(KPropertiesDialog* self, QDropEvent* event);
    friend void KPropertiesDialog_QBaseDropEvent(KPropertiesDialog* self, QDropEvent* event);
    friend void KPropertiesDialog_HideEvent(KPropertiesDialog* self, QHideEvent* event);
    friend void KPropertiesDialog_QBaseHideEvent(KPropertiesDialog* self, QHideEvent* event);
    friend bool KPropertiesDialog_NativeEvent(KPropertiesDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KPropertiesDialog_QBaseNativeEvent(KPropertiesDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KPropertiesDialog_ChangeEvent(KPropertiesDialog* self, QEvent* param1);
    friend void KPropertiesDialog_QBaseChangeEvent(KPropertiesDialog* self, QEvent* param1);
    friend int KPropertiesDialog_Metric(const KPropertiesDialog* self, int param1);
    friend int KPropertiesDialog_QBaseMetric(const KPropertiesDialog* self, int param1);
    friend void KPropertiesDialog_InitPainter(const KPropertiesDialog* self, QPainter* painter);
    friend void KPropertiesDialog_QBaseInitPainter(const KPropertiesDialog* self, QPainter* painter);
    friend QPaintDevice* KPropertiesDialog_Redirected(const KPropertiesDialog* self, QPoint* offset);
    friend QPaintDevice* KPropertiesDialog_QBaseRedirected(const KPropertiesDialog* self, QPoint* offset);
    friend QPainter* KPropertiesDialog_SharedPainter(const KPropertiesDialog* self);
    friend QPainter* KPropertiesDialog_QBaseSharedPainter(const KPropertiesDialog* self);
    friend void KPropertiesDialog_InputMethodEvent(KPropertiesDialog* self, QInputMethodEvent* param1);
    friend void KPropertiesDialog_QBaseInputMethodEvent(KPropertiesDialog* self, QInputMethodEvent* param1);
    friend bool KPropertiesDialog_FocusNextPrevChild(KPropertiesDialog* self, bool next);
    friend bool KPropertiesDialog_QBaseFocusNextPrevChild(KPropertiesDialog* self, bool next);
    friend void KPropertiesDialog_TimerEvent(KPropertiesDialog* self, QTimerEvent* event);
    friend void KPropertiesDialog_QBaseTimerEvent(KPropertiesDialog* self, QTimerEvent* event);
    friend void KPropertiesDialog_ChildEvent(KPropertiesDialog* self, QChildEvent* event);
    friend void KPropertiesDialog_QBaseChildEvent(KPropertiesDialog* self, QChildEvent* event);
    friend void KPropertiesDialog_CustomEvent(KPropertiesDialog* self, QEvent* event);
    friend void KPropertiesDialog_QBaseCustomEvent(KPropertiesDialog* self, QEvent* event);
    friend void KPropertiesDialog_ConnectNotify(KPropertiesDialog* self, const QMetaMethod* signal);
    friend void KPropertiesDialog_QBaseConnectNotify(KPropertiesDialog* self, const QMetaMethod* signal);
    friend void KPropertiesDialog_DisconnectNotify(KPropertiesDialog* self, const QMetaMethod* signal);
    friend void KPropertiesDialog_QBaseDisconnectNotify(KPropertiesDialog* self, const QMetaMethod* signal);
    friend KPageWidget* KPropertiesDialog_PageWidget(KPropertiesDialog* self);
    friend KPageWidget* KPropertiesDialog_QBasePageWidget(KPropertiesDialog* self);
    friend void KPropertiesDialog_SetPageWidget(KPropertiesDialog* self, KPageWidget* widget);
    friend void KPropertiesDialog_QBaseSetPageWidget(KPropertiesDialog* self, KPageWidget* widget);
    friend QDialogButtonBox* KPropertiesDialog_ButtonBox(KPropertiesDialog* self);
    friend QDialogButtonBox* KPropertiesDialog_QBaseButtonBox(KPropertiesDialog* self);
    friend void KPropertiesDialog_SetButtonBox(KPropertiesDialog* self, QDialogButtonBox* box);
    friend void KPropertiesDialog_QBaseSetButtonBox(KPropertiesDialog* self, QDialogButtonBox* box);
    friend void KPropertiesDialog_AdjustPosition(KPropertiesDialog* self, QWidget* param1);
    friend void KPropertiesDialog_QBaseAdjustPosition(KPropertiesDialog* self, QWidget* param1);
    friend void KPropertiesDialog_UpdateMicroFocus(KPropertiesDialog* self);
    friend void KPropertiesDialog_QBaseUpdateMicroFocus(KPropertiesDialog* self);
    friend void KPropertiesDialog_Create(KPropertiesDialog* self);
    friend void KPropertiesDialog_QBaseCreate(KPropertiesDialog* self);
    friend void KPropertiesDialog_Destroy(KPropertiesDialog* self);
    friend void KPropertiesDialog_QBaseDestroy(KPropertiesDialog* self);
    friend bool KPropertiesDialog_FocusNextChild(KPropertiesDialog* self);
    friend bool KPropertiesDialog_QBaseFocusNextChild(KPropertiesDialog* self);
    friend bool KPropertiesDialog_FocusPreviousChild(KPropertiesDialog* self);
    friend bool KPropertiesDialog_QBaseFocusPreviousChild(KPropertiesDialog* self);
    friend QObject* KPropertiesDialog_Sender(const KPropertiesDialog* self);
    friend QObject* KPropertiesDialog_QBaseSender(const KPropertiesDialog* self);
    friend int KPropertiesDialog_SenderSignalIndex(const KPropertiesDialog* self);
    friend int KPropertiesDialog_QBaseSenderSignalIndex(const KPropertiesDialog* self);
    friend int KPropertiesDialog_Receivers(const KPropertiesDialog* self, const char* signal);
    friend int KPropertiesDialog_QBaseReceivers(const KPropertiesDialog* self, const char* signal);
    friend bool KPropertiesDialog_IsSignalConnected(const KPropertiesDialog* self, const QMetaMethod* signal);
    friend bool KPropertiesDialog_QBaseIsSignalConnected(const KPropertiesDialog* self, const QMetaMethod* signal);
    friend double KPropertiesDialog_GetDecodedMetricF(const KPropertiesDialog* self, int metricA, int metricB);
    friend double KPropertiesDialog_QBaseGetDecodedMetricF(const KPropertiesDialog* self, int metricA, int metricB);
};

#endif
