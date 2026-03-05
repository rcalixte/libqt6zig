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
    using KPropertiesDialog_MetaObject_Callback = QMetaObject* (*)();
    using KPropertiesDialog_Metacast_Callback = void* (*)(KPropertiesDialog*, const char*);
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
    KPropertiesDialog_MetaObject_Callback kpropertiesdialog_metaobject_callback = nullptr;
    KPropertiesDialog_Metacast_Callback kpropertiesdialog_metacast_callback = nullptr;
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
    mutable bool kpropertiesdialog_metaobject_isbase = false;
    mutable bool kpropertiesdialog_metacast_isbase = false;
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

    // Callback setters
    inline void setKPropertiesDialog_MetaObject_Callback(KPropertiesDialog_MetaObject_Callback cb) { kpropertiesdialog_metaobject_callback = cb; }
    inline void setKPropertiesDialog_Metacast_Callback(KPropertiesDialog_Metacast_Callback cb) { kpropertiesdialog_metacast_callback = cb; }
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
    inline void setKPropertiesDialog_MetaObject_IsBase(bool value) const { kpropertiesdialog_metaobject_isbase = value; }
    inline void setKPropertiesDialog_Metacast_IsBase(bool value) const { kpropertiesdialog_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (kpropertiesdialog_metaobject_isbase) {
            kpropertiesdialog_metaobject_isbase = false;
            return KPropertiesDialog::metaObject();
        }
        auto metaobject_cb = kpropertiesdialog_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KPropertiesDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpropertiesdialog_metacast_isbase) {
            kpropertiesdialog_metacast_isbase = false;
            return KPropertiesDialog::qt_metacast(param1);
        }
        auto metacast_cb = kpropertiesdialog_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KPropertiesDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpropertiesdialog_metacall_isbase) {
            kpropertiesdialog_metacall_isbase = false;
            return KPropertiesDialog::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kpropertiesdialog_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPropertiesDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kpropertiesdialog_accept_isbase) {
            kpropertiesdialog_accept_isbase = false;
            KPropertiesDialog::accept();
            return;
        }
        auto accept_cb = kpropertiesdialog_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        KPropertiesDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kpropertiesdialog_reject_isbase) {
            kpropertiesdialog_reject_isbase = false;
            KPropertiesDialog::reject();
            return;
        }
        auto reject_cb = kpropertiesdialog_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        KPropertiesDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpropertiesdialog_setvisible_isbase) {
            kpropertiesdialog_setvisible_isbase = false;
            KPropertiesDialog::setVisible(visible);
            return;
        }
        auto setvisible_cb = kpropertiesdialog_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpropertiesdialog_sizehint_isbase) {
            kpropertiesdialog_sizehint_isbase = false;
            return KPropertiesDialog::sizeHint();
        }
        auto sizehint_cb = kpropertiesdialog_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KPropertiesDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpropertiesdialog_minimumsizehint_isbase) {
            kpropertiesdialog_minimumsizehint_isbase = false;
            return KPropertiesDialog::minimumSizeHint();
        }
        auto minimumsizehint_cb = kpropertiesdialog_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KPropertiesDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kpropertiesdialog_open_isbase) {
            kpropertiesdialog_open_isbase = false;
            KPropertiesDialog::open();
            return;
        }
        auto open_cb = kpropertiesdialog_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        KPropertiesDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kpropertiesdialog_exec_isbase) {
            kpropertiesdialog_exec_isbase = false;
            return KPropertiesDialog::exec();
        }
        auto exec_cb = kpropertiesdialog_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return KPropertiesDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kpropertiesdialog_done_isbase) {
            kpropertiesdialog_done_isbase = false;
            KPropertiesDialog::done(param1);
            return;
        }
        auto done_cb = kpropertiesdialog_done_callback;
        if (done_cb) {
            int cbval1 = param1;

            done_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kpropertiesdialog_keypressevent_isbase) {
            kpropertiesdialog_keypressevent_isbase = false;
            KPropertiesDialog::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = kpropertiesdialog_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kpropertiesdialog_closeevent_isbase) {
            kpropertiesdialog_closeevent_isbase = false;
            KPropertiesDialog::closeEvent(param1);
            return;
        }
        auto closeevent_cb = kpropertiesdialog_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kpropertiesdialog_showevent_isbase) {
            kpropertiesdialog_showevent_isbase = false;
            KPropertiesDialog::showEvent(param1);
            return;
        }
        auto showevent_cb = kpropertiesdialog_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kpropertiesdialog_resizeevent_isbase) {
            kpropertiesdialog_resizeevent_isbase = false;
            KPropertiesDialog::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = kpropertiesdialog_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kpropertiesdialog_contextmenuevent_isbase) {
            kpropertiesdialog_contextmenuevent_isbase = false;
            KPropertiesDialog::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = kpropertiesdialog_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kpropertiesdialog_eventfilter_isbase) {
            kpropertiesdialog_eventfilter_isbase = false;
            return KPropertiesDialog::eventFilter(param1, param2);
        }
        auto eventfilter_cb = kpropertiesdialog_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPropertiesDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpropertiesdialog_devtype_isbase) {
            kpropertiesdialog_devtype_isbase = false;
            return KPropertiesDialog::devType();
        }
        auto devtype_cb = kpropertiesdialog_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KPropertiesDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpropertiesdialog_heightforwidth_isbase) {
            kpropertiesdialog_heightforwidth_isbase = false;
            return KPropertiesDialog::heightForWidth(param1);
        }
        auto heightforwidth_cb = kpropertiesdialog_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPropertiesDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpropertiesdialog_hasheightforwidth_isbase) {
            kpropertiesdialog_hasheightforwidth_isbase = false;
            return KPropertiesDialog::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kpropertiesdialog_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KPropertiesDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpropertiesdialog_paintengine_isbase) {
            kpropertiesdialog_paintengine_isbase = false;
            return KPropertiesDialog::paintEngine();
        }
        auto paintengine_cb = kpropertiesdialog_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KPropertiesDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpropertiesdialog_event_isbase) {
            kpropertiesdialog_event_isbase = false;
            return KPropertiesDialog::event(event);
        }
        auto event_cb = kpropertiesdialog_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KPropertiesDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpropertiesdialog_mousepressevent_isbase) {
            kpropertiesdialog_mousepressevent_isbase = false;
            KPropertiesDialog::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kpropertiesdialog_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpropertiesdialog_mousereleaseevent_isbase) {
            kpropertiesdialog_mousereleaseevent_isbase = false;
            KPropertiesDialog::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kpropertiesdialog_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpropertiesdialog_mousedoubleclickevent_isbase) {
            kpropertiesdialog_mousedoubleclickevent_isbase = false;
            KPropertiesDialog::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kpropertiesdialog_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpropertiesdialog_mousemoveevent_isbase) {
            kpropertiesdialog_mousemoveevent_isbase = false;
            KPropertiesDialog::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kpropertiesdialog_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpropertiesdialog_wheelevent_isbase) {
            kpropertiesdialog_wheelevent_isbase = false;
            KPropertiesDialog::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kpropertiesdialog_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpropertiesdialog_keyreleaseevent_isbase) {
            kpropertiesdialog_keyreleaseevent_isbase = false;
            KPropertiesDialog::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kpropertiesdialog_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpropertiesdialog_focusinevent_isbase) {
            kpropertiesdialog_focusinevent_isbase = false;
            KPropertiesDialog::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kpropertiesdialog_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpropertiesdialog_focusoutevent_isbase) {
            kpropertiesdialog_focusoutevent_isbase = false;
            KPropertiesDialog::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kpropertiesdialog_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpropertiesdialog_enterevent_isbase) {
            kpropertiesdialog_enterevent_isbase = false;
            KPropertiesDialog::enterEvent(event);
            return;
        }
        auto enterevent_cb = kpropertiesdialog_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpropertiesdialog_leaveevent_isbase) {
            kpropertiesdialog_leaveevent_isbase = false;
            KPropertiesDialog::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kpropertiesdialog_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpropertiesdialog_paintevent_isbase) {
            kpropertiesdialog_paintevent_isbase = false;
            KPropertiesDialog::paintEvent(event);
            return;
        }
        auto paintevent_cb = kpropertiesdialog_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpropertiesdialog_moveevent_isbase) {
            kpropertiesdialog_moveevent_isbase = false;
            KPropertiesDialog::moveEvent(event);
            return;
        }
        auto moveevent_cb = kpropertiesdialog_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpropertiesdialog_tabletevent_isbase) {
            kpropertiesdialog_tabletevent_isbase = false;
            KPropertiesDialog::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kpropertiesdialog_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpropertiesdialog_actionevent_isbase) {
            kpropertiesdialog_actionevent_isbase = false;
            KPropertiesDialog::actionEvent(event);
            return;
        }
        auto actionevent_cb = kpropertiesdialog_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpropertiesdialog_dragenterevent_isbase) {
            kpropertiesdialog_dragenterevent_isbase = false;
            KPropertiesDialog::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kpropertiesdialog_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpropertiesdialog_dragmoveevent_isbase) {
            kpropertiesdialog_dragmoveevent_isbase = false;
            KPropertiesDialog::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kpropertiesdialog_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpropertiesdialog_dragleaveevent_isbase) {
            kpropertiesdialog_dragleaveevent_isbase = false;
            KPropertiesDialog::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kpropertiesdialog_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpropertiesdialog_dropevent_isbase) {
            kpropertiesdialog_dropevent_isbase = false;
            KPropertiesDialog::dropEvent(event);
            return;
        }
        auto dropevent_cb = kpropertiesdialog_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpropertiesdialog_hideevent_isbase) {
            kpropertiesdialog_hideevent_isbase = false;
            KPropertiesDialog::hideEvent(event);
            return;
        }
        auto hideevent_cb = kpropertiesdialog_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpropertiesdialog_nativeevent_isbase) {
            kpropertiesdialog_nativeevent_isbase = false;
            return KPropertiesDialog::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kpropertiesdialog_nativeevent_callback;
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
        return KPropertiesDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpropertiesdialog_changeevent_isbase) {
            kpropertiesdialog_changeevent_isbase = false;
            KPropertiesDialog::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kpropertiesdialog_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpropertiesdialog_metric_isbase) {
            kpropertiesdialog_metric_isbase = false;
            return KPropertiesDialog::metric(param1);
        }
        auto metric_cb = kpropertiesdialog_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPropertiesDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpropertiesdialog_initpainter_isbase) {
            kpropertiesdialog_initpainter_isbase = false;
            KPropertiesDialog::initPainter(painter);
            return;
        }
        auto initpainter_cb = kpropertiesdialog_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpropertiesdialog_redirected_isbase) {
            kpropertiesdialog_redirected_isbase = false;
            return KPropertiesDialog::redirected(offset);
        }
        auto redirected_cb = kpropertiesdialog_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KPropertiesDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpropertiesdialog_sharedpainter_isbase) {
            kpropertiesdialog_sharedpainter_isbase = false;
            return KPropertiesDialog::sharedPainter();
        }
        auto sharedpainter_cb = kpropertiesdialog_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KPropertiesDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpropertiesdialog_inputmethodevent_isbase) {
            kpropertiesdialog_inputmethodevent_isbase = false;
            KPropertiesDialog::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kpropertiesdialog_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpropertiesdialog_inputmethodquery_isbase) {
            kpropertiesdialog_inputmethodquery_isbase = false;
            return KPropertiesDialog::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kpropertiesdialog_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KPropertiesDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpropertiesdialog_focusnextprevchild_isbase) {
            kpropertiesdialog_focusnextprevchild_isbase = false;
            return KPropertiesDialog::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kpropertiesdialog_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KPropertiesDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpropertiesdialog_timerevent_isbase) {
            kpropertiesdialog_timerevent_isbase = false;
            KPropertiesDialog::timerEvent(event);
            return;
        }
        auto timerevent_cb = kpropertiesdialog_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpropertiesdialog_childevent_isbase) {
            kpropertiesdialog_childevent_isbase = false;
            KPropertiesDialog::childEvent(event);
            return;
        }
        auto childevent_cb = kpropertiesdialog_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpropertiesdialog_customevent_isbase) {
            kpropertiesdialog_customevent_isbase = false;
            KPropertiesDialog::customEvent(event);
            return;
        }
        auto customevent_cb = kpropertiesdialog_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpropertiesdialog_connectnotify_isbase) {
            kpropertiesdialog_connectnotify_isbase = false;
            KPropertiesDialog::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kpropertiesdialog_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpropertiesdialog_disconnectnotify_isbase) {
            kpropertiesdialog_disconnectnotify_isbase = false;
            KPropertiesDialog::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kpropertiesdialog_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    KPageWidget* pageWidget() {
        if (kpropertiesdialog_pagewidget_isbase) {
            kpropertiesdialog_pagewidget_isbase = false;
            return KPropertiesDialog::pageWidget();
        }
        auto pagewidget_cb = kpropertiesdialog_pagewidget_callback;
        if (pagewidget_cb) {
            KPageWidget* callback_ret = pagewidget_cb();
            return callback_ret;
        }
        return KPropertiesDialog::pageWidget();
    }

    // Virtual method for C ABI access and custom callback
    void setPageWidget(KPageWidget* widget) {
        if (kpropertiesdialog_setpagewidget_isbase) {
            kpropertiesdialog_setpagewidget_isbase = false;
            KPropertiesDialog::setPageWidget(widget);
            return;
        }
        auto setpagewidget_cb = kpropertiesdialog_setpagewidget_callback;
        if (setpagewidget_cb) {
            KPageWidget* cbval1 = widget;

            setpagewidget_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::setPageWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    QDialogButtonBox* buttonBox() {
        if (kpropertiesdialog_buttonbox_isbase) {
            kpropertiesdialog_buttonbox_isbase = false;
            return KPropertiesDialog::buttonBox();
        }
        auto buttonbox_cb = kpropertiesdialog_buttonbox_callback;
        if (buttonbox_cb) {
            QDialogButtonBox* callback_ret = buttonbox_cb();
            return callback_ret;
        }
        return KPropertiesDialog::buttonBox();
    }

    // Virtual method for C ABI access and custom callback
    void setButtonBox(QDialogButtonBox* box) {
        if (kpropertiesdialog_setbuttonbox_isbase) {
            kpropertiesdialog_setbuttonbox_isbase = false;
            KPropertiesDialog::setButtonBox(box);
            return;
        }
        auto setbuttonbox_cb = kpropertiesdialog_setbuttonbox_callback;
        if (setbuttonbox_cb) {
            QDialogButtonBox* cbval1 = box;

            setbuttonbox_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::setButtonBox(box);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kpropertiesdialog_adjustposition_isbase) {
            kpropertiesdialog_adjustposition_isbase = false;
            KPropertiesDialog::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = kpropertiesdialog_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        KPropertiesDialog::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kpropertiesdialog_updatemicrofocus_isbase) {
            kpropertiesdialog_updatemicrofocus_isbase = false;
            KPropertiesDialog::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kpropertiesdialog_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KPropertiesDialog::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kpropertiesdialog_create_isbase) {
            kpropertiesdialog_create_isbase = false;
            KPropertiesDialog::create();
            return;
        }
        auto create_cb = kpropertiesdialog_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KPropertiesDialog::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kpropertiesdialog_destroy_isbase) {
            kpropertiesdialog_destroy_isbase = false;
            KPropertiesDialog::destroy();
            return;
        }
        auto destroy_cb = kpropertiesdialog_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KPropertiesDialog::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kpropertiesdialog_focusnextchild_isbase) {
            kpropertiesdialog_focusnextchild_isbase = false;
            return KPropertiesDialog::focusNextChild();
        }
        auto focusnextchild_cb = kpropertiesdialog_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KPropertiesDialog::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kpropertiesdialog_focuspreviouschild_isbase) {
            kpropertiesdialog_focuspreviouschild_isbase = false;
            return KPropertiesDialog::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kpropertiesdialog_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KPropertiesDialog::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kpropertiesdialog_sender_isbase) {
            kpropertiesdialog_sender_isbase = false;
            return KPropertiesDialog::sender();
        }
        auto sender_cb = kpropertiesdialog_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KPropertiesDialog::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kpropertiesdialog_sendersignalindex_isbase) {
            kpropertiesdialog_sendersignalindex_isbase = false;
            return KPropertiesDialog::senderSignalIndex();
        }
        auto sendersignalindex_cb = kpropertiesdialog_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KPropertiesDialog::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kpropertiesdialog_receivers_isbase) {
            kpropertiesdialog_receivers_isbase = false;
            return KPropertiesDialog::receivers(signal);
        }
        auto receivers_cb = kpropertiesdialog_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPropertiesDialog::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kpropertiesdialog_issignalconnected_isbase) {
            kpropertiesdialog_issignalconnected_isbase = false;
            return KPropertiesDialog::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kpropertiesdialog_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KPropertiesDialog::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kpropertiesdialog_getdecodedmetricf_isbase) {
            kpropertiesdialog_getdecodedmetricf_isbase = false;
            return KPropertiesDialog::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kpropertiesdialog_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KPropertiesDialog::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KPropertiesDialog_KeyPressEvent(KPropertiesDialog* self, QKeyEvent* param1);
    friend void KPropertiesDialog_SuperKeyPressEvent(KPropertiesDialog* self, QKeyEvent* param1);
    friend void KPropertiesDialog_CloseEvent(KPropertiesDialog* self, QCloseEvent* param1);
    friend void KPropertiesDialog_SuperCloseEvent(KPropertiesDialog* self, QCloseEvent* param1);
    friend void KPropertiesDialog_ShowEvent(KPropertiesDialog* self, QShowEvent* param1);
    friend void KPropertiesDialog_SuperShowEvent(KPropertiesDialog* self, QShowEvent* param1);
    friend void KPropertiesDialog_ResizeEvent(KPropertiesDialog* self, QResizeEvent* param1);
    friend void KPropertiesDialog_SuperResizeEvent(KPropertiesDialog* self, QResizeEvent* param1);
    friend void KPropertiesDialog_ContextMenuEvent(KPropertiesDialog* self, QContextMenuEvent* param1);
    friend void KPropertiesDialog_SuperContextMenuEvent(KPropertiesDialog* self, QContextMenuEvent* param1);
    friend bool KPropertiesDialog_EventFilter(KPropertiesDialog* self, QObject* param1, QEvent* param2);
    friend bool KPropertiesDialog_SuperEventFilter(KPropertiesDialog* self, QObject* param1, QEvent* param2);
    friend bool KPropertiesDialog_Event(KPropertiesDialog* self, QEvent* event);
    friend bool KPropertiesDialog_SuperEvent(KPropertiesDialog* self, QEvent* event);
    friend void KPropertiesDialog_MousePressEvent(KPropertiesDialog* self, QMouseEvent* event);
    friend void KPropertiesDialog_SuperMousePressEvent(KPropertiesDialog* self, QMouseEvent* event);
    friend void KPropertiesDialog_MouseReleaseEvent(KPropertiesDialog* self, QMouseEvent* event);
    friend void KPropertiesDialog_SuperMouseReleaseEvent(KPropertiesDialog* self, QMouseEvent* event);
    friend void KPropertiesDialog_MouseDoubleClickEvent(KPropertiesDialog* self, QMouseEvent* event);
    friend void KPropertiesDialog_SuperMouseDoubleClickEvent(KPropertiesDialog* self, QMouseEvent* event);
    friend void KPropertiesDialog_MouseMoveEvent(KPropertiesDialog* self, QMouseEvent* event);
    friend void KPropertiesDialog_SuperMouseMoveEvent(KPropertiesDialog* self, QMouseEvent* event);
    friend void KPropertiesDialog_WheelEvent(KPropertiesDialog* self, QWheelEvent* event);
    friend void KPropertiesDialog_SuperWheelEvent(KPropertiesDialog* self, QWheelEvent* event);
    friend void KPropertiesDialog_KeyReleaseEvent(KPropertiesDialog* self, QKeyEvent* event);
    friend void KPropertiesDialog_SuperKeyReleaseEvent(KPropertiesDialog* self, QKeyEvent* event);
    friend void KPropertiesDialog_FocusInEvent(KPropertiesDialog* self, QFocusEvent* event);
    friend void KPropertiesDialog_SuperFocusInEvent(KPropertiesDialog* self, QFocusEvent* event);
    friend void KPropertiesDialog_FocusOutEvent(KPropertiesDialog* self, QFocusEvent* event);
    friend void KPropertiesDialog_SuperFocusOutEvent(KPropertiesDialog* self, QFocusEvent* event);
    friend void KPropertiesDialog_EnterEvent(KPropertiesDialog* self, QEnterEvent* event);
    friend void KPropertiesDialog_SuperEnterEvent(KPropertiesDialog* self, QEnterEvent* event);
    friend void KPropertiesDialog_LeaveEvent(KPropertiesDialog* self, QEvent* event);
    friend void KPropertiesDialog_SuperLeaveEvent(KPropertiesDialog* self, QEvent* event);
    friend void KPropertiesDialog_PaintEvent(KPropertiesDialog* self, QPaintEvent* event);
    friend void KPropertiesDialog_SuperPaintEvent(KPropertiesDialog* self, QPaintEvent* event);
    friend void KPropertiesDialog_MoveEvent(KPropertiesDialog* self, QMoveEvent* event);
    friend void KPropertiesDialog_SuperMoveEvent(KPropertiesDialog* self, QMoveEvent* event);
    friend void KPropertiesDialog_TabletEvent(KPropertiesDialog* self, QTabletEvent* event);
    friend void KPropertiesDialog_SuperTabletEvent(KPropertiesDialog* self, QTabletEvent* event);
    friend void KPropertiesDialog_ActionEvent(KPropertiesDialog* self, QActionEvent* event);
    friend void KPropertiesDialog_SuperActionEvent(KPropertiesDialog* self, QActionEvent* event);
    friend void KPropertiesDialog_DragEnterEvent(KPropertiesDialog* self, QDragEnterEvent* event);
    friend void KPropertiesDialog_SuperDragEnterEvent(KPropertiesDialog* self, QDragEnterEvent* event);
    friend void KPropertiesDialog_DragMoveEvent(KPropertiesDialog* self, QDragMoveEvent* event);
    friend void KPropertiesDialog_SuperDragMoveEvent(KPropertiesDialog* self, QDragMoveEvent* event);
    friend void KPropertiesDialog_DragLeaveEvent(KPropertiesDialog* self, QDragLeaveEvent* event);
    friend void KPropertiesDialog_SuperDragLeaveEvent(KPropertiesDialog* self, QDragLeaveEvent* event);
    friend void KPropertiesDialog_DropEvent(KPropertiesDialog* self, QDropEvent* event);
    friend void KPropertiesDialog_SuperDropEvent(KPropertiesDialog* self, QDropEvent* event);
    friend void KPropertiesDialog_HideEvent(KPropertiesDialog* self, QHideEvent* event);
    friend void KPropertiesDialog_SuperHideEvent(KPropertiesDialog* self, QHideEvent* event);
    friend bool KPropertiesDialog_NativeEvent(KPropertiesDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KPropertiesDialog_SuperNativeEvent(KPropertiesDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KPropertiesDialog_ChangeEvent(KPropertiesDialog* self, QEvent* param1);
    friend void KPropertiesDialog_SuperChangeEvent(KPropertiesDialog* self, QEvent* param1);
    friend int KPropertiesDialog_Metric(const KPropertiesDialog* self, int param1);
    friend int KPropertiesDialog_SuperMetric(const KPropertiesDialog* self, int param1);
    friend void KPropertiesDialog_InitPainter(const KPropertiesDialog* self, QPainter* painter);
    friend void KPropertiesDialog_SuperInitPainter(const KPropertiesDialog* self, QPainter* painter);
    friend QPaintDevice* KPropertiesDialog_Redirected(const KPropertiesDialog* self, QPoint* offset);
    friend QPaintDevice* KPropertiesDialog_SuperRedirected(const KPropertiesDialog* self, QPoint* offset);
    friend QPainter* KPropertiesDialog_SharedPainter(const KPropertiesDialog* self);
    friend QPainter* KPropertiesDialog_SuperSharedPainter(const KPropertiesDialog* self);
    friend void KPropertiesDialog_InputMethodEvent(KPropertiesDialog* self, QInputMethodEvent* param1);
    friend void KPropertiesDialog_SuperInputMethodEvent(KPropertiesDialog* self, QInputMethodEvent* param1);
    friend bool KPropertiesDialog_FocusNextPrevChild(KPropertiesDialog* self, bool next);
    friend bool KPropertiesDialog_SuperFocusNextPrevChild(KPropertiesDialog* self, bool next);
    friend void KPropertiesDialog_TimerEvent(KPropertiesDialog* self, QTimerEvent* event);
    friend void KPropertiesDialog_SuperTimerEvent(KPropertiesDialog* self, QTimerEvent* event);
    friend void KPropertiesDialog_ChildEvent(KPropertiesDialog* self, QChildEvent* event);
    friend void KPropertiesDialog_SuperChildEvent(KPropertiesDialog* self, QChildEvent* event);
    friend void KPropertiesDialog_CustomEvent(KPropertiesDialog* self, QEvent* event);
    friend void KPropertiesDialog_SuperCustomEvent(KPropertiesDialog* self, QEvent* event);
    friend void KPropertiesDialog_ConnectNotify(KPropertiesDialog* self, const QMetaMethod* signal);
    friend void KPropertiesDialog_SuperConnectNotify(KPropertiesDialog* self, const QMetaMethod* signal);
    friend void KPropertiesDialog_DisconnectNotify(KPropertiesDialog* self, const QMetaMethod* signal);
    friend void KPropertiesDialog_SuperDisconnectNotify(KPropertiesDialog* self, const QMetaMethod* signal);
    friend KPageWidget* KPropertiesDialog_PageWidget(KPropertiesDialog* self);
    friend KPageWidget* KPropertiesDialog_SuperPageWidget(KPropertiesDialog* self);
    friend void KPropertiesDialog_SetPageWidget(KPropertiesDialog* self, KPageWidget* widget);
    friend void KPropertiesDialog_SuperSetPageWidget(KPropertiesDialog* self, KPageWidget* widget);
    friend QDialogButtonBox* KPropertiesDialog_ButtonBox(KPropertiesDialog* self);
    friend QDialogButtonBox* KPropertiesDialog_SuperButtonBox(KPropertiesDialog* self);
    friend void KPropertiesDialog_SetButtonBox(KPropertiesDialog* self, QDialogButtonBox* box);
    friend void KPropertiesDialog_SuperSetButtonBox(KPropertiesDialog* self, QDialogButtonBox* box);
    friend void KPropertiesDialog_AdjustPosition(KPropertiesDialog* self, QWidget* param1);
    friend void KPropertiesDialog_SuperAdjustPosition(KPropertiesDialog* self, QWidget* param1);
    friend void KPropertiesDialog_UpdateMicroFocus(KPropertiesDialog* self);
    friend void KPropertiesDialog_SuperUpdateMicroFocus(KPropertiesDialog* self);
    friend void KPropertiesDialog_Create(KPropertiesDialog* self);
    friend void KPropertiesDialog_SuperCreate(KPropertiesDialog* self);
    friend void KPropertiesDialog_Destroy(KPropertiesDialog* self);
    friend void KPropertiesDialog_SuperDestroy(KPropertiesDialog* self);
    friend bool KPropertiesDialog_FocusNextChild(KPropertiesDialog* self);
    friend bool KPropertiesDialog_SuperFocusNextChild(KPropertiesDialog* self);
    friend bool KPropertiesDialog_FocusPreviousChild(KPropertiesDialog* self);
    friend bool KPropertiesDialog_SuperFocusPreviousChild(KPropertiesDialog* self);
    friend QObject* KPropertiesDialog_Sender(const KPropertiesDialog* self);
    friend QObject* KPropertiesDialog_SuperSender(const KPropertiesDialog* self);
    friend int KPropertiesDialog_SenderSignalIndex(const KPropertiesDialog* self);
    friend int KPropertiesDialog_SuperSenderSignalIndex(const KPropertiesDialog* self);
    friend int KPropertiesDialog_Receivers(const KPropertiesDialog* self, const char* signal);
    friend int KPropertiesDialog_SuperReceivers(const KPropertiesDialog* self, const char* signal);
    friend bool KPropertiesDialog_IsSignalConnected(const KPropertiesDialog* self, const QMetaMethod* signal);
    friend bool KPropertiesDialog_SuperIsSignalConnected(const KPropertiesDialog* self, const QMetaMethod* signal);
    friend double KPropertiesDialog_GetDecodedMetricF(const KPropertiesDialog* self, int metricA, int metricB);
    friend double KPropertiesDialog_SuperGetDecodedMetricF(const KPropertiesDialog* self, int metricA, int metricB);
};

#endif
