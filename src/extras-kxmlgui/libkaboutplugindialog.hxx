#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKABOUTPLUGINDIALOG_H
#define SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKABOUTPLUGINDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KAboutPluginDialog so that we can call protected methods
class VirtualKAboutPluginDialog final : public KAboutPluginDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKAboutPluginDialog = true;

    // Virtual class public types (including callbacks)
    using KAboutPluginDialog_Metacall_Callback = int (*)(KAboutPluginDialog*, int, int, void**);
    using KAboutPluginDialog_SetVisible_Callback = void (*)(KAboutPluginDialog*, bool);
    using KAboutPluginDialog_SizeHint_Callback = QSize* (*)();
    using KAboutPluginDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KAboutPluginDialog_Open_Callback = void (*)();
    using KAboutPluginDialog_Exec_Callback = int (*)();
    using KAboutPluginDialog_Done_Callback = void (*)(KAboutPluginDialog*, int);
    using KAboutPluginDialog_Accept_Callback = void (*)();
    using KAboutPluginDialog_Reject_Callback = void (*)();
    using KAboutPluginDialog_KeyPressEvent_Callback = void (*)(KAboutPluginDialog*, QKeyEvent*);
    using KAboutPluginDialog_CloseEvent_Callback = void (*)(KAboutPluginDialog*, QCloseEvent*);
    using KAboutPluginDialog_ShowEvent_Callback = void (*)(KAboutPluginDialog*, QShowEvent*);
    using KAboutPluginDialog_ResizeEvent_Callback = void (*)(KAboutPluginDialog*, QResizeEvent*);
    using KAboutPluginDialog_ContextMenuEvent_Callback = void (*)(KAboutPluginDialog*, QContextMenuEvent*);
    using KAboutPluginDialog_EventFilter_Callback = bool (*)(KAboutPluginDialog*, QObject*, QEvent*);
    using KAboutPluginDialog_DevType_Callback = int (*)();
    using KAboutPluginDialog_HeightForWidth_Callback = int (*)(const KAboutPluginDialog*, int);
    using KAboutPluginDialog_HasHeightForWidth_Callback = bool (*)();
    using KAboutPluginDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KAboutPluginDialog_Event_Callback = bool (*)(KAboutPluginDialog*, QEvent*);
    using KAboutPluginDialog_MousePressEvent_Callback = void (*)(KAboutPluginDialog*, QMouseEvent*);
    using KAboutPluginDialog_MouseReleaseEvent_Callback = void (*)(KAboutPluginDialog*, QMouseEvent*);
    using KAboutPluginDialog_MouseDoubleClickEvent_Callback = void (*)(KAboutPluginDialog*, QMouseEvent*);
    using KAboutPluginDialog_MouseMoveEvent_Callback = void (*)(KAboutPluginDialog*, QMouseEvent*);
    using KAboutPluginDialog_WheelEvent_Callback = void (*)(KAboutPluginDialog*, QWheelEvent*);
    using KAboutPluginDialog_KeyReleaseEvent_Callback = void (*)(KAboutPluginDialog*, QKeyEvent*);
    using KAboutPluginDialog_FocusInEvent_Callback = void (*)(KAboutPluginDialog*, QFocusEvent*);
    using KAboutPluginDialog_FocusOutEvent_Callback = void (*)(KAboutPluginDialog*, QFocusEvent*);
    using KAboutPluginDialog_EnterEvent_Callback = void (*)(KAboutPluginDialog*, QEnterEvent*);
    using KAboutPluginDialog_LeaveEvent_Callback = void (*)(KAboutPluginDialog*, QEvent*);
    using KAboutPluginDialog_PaintEvent_Callback = void (*)(KAboutPluginDialog*, QPaintEvent*);
    using KAboutPluginDialog_MoveEvent_Callback = void (*)(KAboutPluginDialog*, QMoveEvent*);
    using KAboutPluginDialog_TabletEvent_Callback = void (*)(KAboutPluginDialog*, QTabletEvent*);
    using KAboutPluginDialog_ActionEvent_Callback = void (*)(KAboutPluginDialog*, QActionEvent*);
    using KAboutPluginDialog_DragEnterEvent_Callback = void (*)(KAboutPluginDialog*, QDragEnterEvent*);
    using KAboutPluginDialog_DragMoveEvent_Callback = void (*)(KAboutPluginDialog*, QDragMoveEvent*);
    using KAboutPluginDialog_DragLeaveEvent_Callback = void (*)(KAboutPluginDialog*, QDragLeaveEvent*);
    using KAboutPluginDialog_DropEvent_Callback = void (*)(KAboutPluginDialog*, QDropEvent*);
    using KAboutPluginDialog_HideEvent_Callback = void (*)(KAboutPluginDialog*, QHideEvent*);
    using KAboutPluginDialog_NativeEvent_Callback = bool (*)(KAboutPluginDialog*, libqt_string, void*, intptr_t*);
    using KAboutPluginDialog_ChangeEvent_Callback = void (*)(KAboutPluginDialog*, QEvent*);
    using KAboutPluginDialog_Metric_Callback = int (*)(const KAboutPluginDialog*, int);
    using KAboutPluginDialog_InitPainter_Callback = void (*)(const KAboutPluginDialog*, QPainter*);
    using KAboutPluginDialog_Redirected_Callback = QPaintDevice* (*)(const KAboutPluginDialog*, QPoint*);
    using KAboutPluginDialog_SharedPainter_Callback = QPainter* (*)();
    using KAboutPluginDialog_InputMethodEvent_Callback = void (*)(KAboutPluginDialog*, QInputMethodEvent*);
    using KAboutPluginDialog_InputMethodQuery_Callback = QVariant* (*)(const KAboutPluginDialog*, int);
    using KAboutPluginDialog_FocusNextPrevChild_Callback = bool (*)(KAboutPluginDialog*, bool);
    using KAboutPluginDialog_TimerEvent_Callback = void (*)(KAboutPluginDialog*, QTimerEvent*);
    using KAboutPluginDialog_ChildEvent_Callback = void (*)(KAboutPluginDialog*, QChildEvent*);
    using KAboutPluginDialog_CustomEvent_Callback = void (*)(KAboutPluginDialog*, QEvent*);
    using KAboutPluginDialog_ConnectNotify_Callback = void (*)(KAboutPluginDialog*, QMetaMethod*);
    using KAboutPluginDialog_DisconnectNotify_Callback = void (*)(KAboutPluginDialog*, QMetaMethod*);
    using KAboutPluginDialog_AdjustPosition_Callback = void (*)(KAboutPluginDialog*, QWidget*);
    using KAboutPluginDialog_UpdateMicroFocus_Callback = void (*)();
    using KAboutPluginDialog_Create_Callback = void (*)();
    using KAboutPluginDialog_Destroy_Callback = void (*)();
    using KAboutPluginDialog_FocusNextChild_Callback = bool (*)();
    using KAboutPluginDialog_FocusPreviousChild_Callback = bool (*)();
    using KAboutPluginDialog_Sender_Callback = QObject* (*)();
    using KAboutPluginDialog_SenderSignalIndex_Callback = int (*)();
    using KAboutPluginDialog_Receivers_Callback = int (*)(const KAboutPluginDialog*, const char*);
    using KAboutPluginDialog_IsSignalConnected_Callback = bool (*)(const KAboutPluginDialog*, QMetaMethod*);
    using KAboutPluginDialog_GetDecodedMetricF_Callback = double (*)(const KAboutPluginDialog*, int, int);

  protected:
    // Instance callback storage
    KAboutPluginDialog_Metacall_Callback kaboutplugindialog_metacall_callback = nullptr;
    KAboutPluginDialog_SetVisible_Callback kaboutplugindialog_setvisible_callback = nullptr;
    KAboutPluginDialog_SizeHint_Callback kaboutplugindialog_sizehint_callback = nullptr;
    KAboutPluginDialog_MinimumSizeHint_Callback kaboutplugindialog_minimumsizehint_callback = nullptr;
    KAboutPluginDialog_Open_Callback kaboutplugindialog_open_callback = nullptr;
    KAboutPluginDialog_Exec_Callback kaboutplugindialog_exec_callback = nullptr;
    KAboutPluginDialog_Done_Callback kaboutplugindialog_done_callback = nullptr;
    KAboutPluginDialog_Accept_Callback kaboutplugindialog_accept_callback = nullptr;
    KAboutPluginDialog_Reject_Callback kaboutplugindialog_reject_callback = nullptr;
    KAboutPluginDialog_KeyPressEvent_Callback kaboutplugindialog_keypressevent_callback = nullptr;
    KAboutPluginDialog_CloseEvent_Callback kaboutplugindialog_closeevent_callback = nullptr;
    KAboutPluginDialog_ShowEvent_Callback kaboutplugindialog_showevent_callback = nullptr;
    KAboutPluginDialog_ResizeEvent_Callback kaboutplugindialog_resizeevent_callback = nullptr;
    KAboutPluginDialog_ContextMenuEvent_Callback kaboutplugindialog_contextmenuevent_callback = nullptr;
    KAboutPluginDialog_EventFilter_Callback kaboutplugindialog_eventfilter_callback = nullptr;
    KAboutPluginDialog_DevType_Callback kaboutplugindialog_devtype_callback = nullptr;
    KAboutPluginDialog_HeightForWidth_Callback kaboutplugindialog_heightforwidth_callback = nullptr;
    KAboutPluginDialog_HasHeightForWidth_Callback kaboutplugindialog_hasheightforwidth_callback = nullptr;
    KAboutPluginDialog_PaintEngine_Callback kaboutplugindialog_paintengine_callback = nullptr;
    KAboutPluginDialog_Event_Callback kaboutplugindialog_event_callback = nullptr;
    KAboutPluginDialog_MousePressEvent_Callback kaboutplugindialog_mousepressevent_callback = nullptr;
    KAboutPluginDialog_MouseReleaseEvent_Callback kaboutplugindialog_mousereleaseevent_callback = nullptr;
    KAboutPluginDialog_MouseDoubleClickEvent_Callback kaboutplugindialog_mousedoubleclickevent_callback = nullptr;
    KAboutPluginDialog_MouseMoveEvent_Callback kaboutplugindialog_mousemoveevent_callback = nullptr;
    KAboutPluginDialog_WheelEvent_Callback kaboutplugindialog_wheelevent_callback = nullptr;
    KAboutPluginDialog_KeyReleaseEvent_Callback kaboutplugindialog_keyreleaseevent_callback = nullptr;
    KAboutPluginDialog_FocusInEvent_Callback kaboutplugindialog_focusinevent_callback = nullptr;
    KAboutPluginDialog_FocusOutEvent_Callback kaboutplugindialog_focusoutevent_callback = nullptr;
    KAboutPluginDialog_EnterEvent_Callback kaboutplugindialog_enterevent_callback = nullptr;
    KAboutPluginDialog_LeaveEvent_Callback kaboutplugindialog_leaveevent_callback = nullptr;
    KAboutPluginDialog_PaintEvent_Callback kaboutplugindialog_paintevent_callback = nullptr;
    KAboutPluginDialog_MoveEvent_Callback kaboutplugindialog_moveevent_callback = nullptr;
    KAboutPluginDialog_TabletEvent_Callback kaboutplugindialog_tabletevent_callback = nullptr;
    KAboutPluginDialog_ActionEvent_Callback kaboutplugindialog_actionevent_callback = nullptr;
    KAboutPluginDialog_DragEnterEvent_Callback kaboutplugindialog_dragenterevent_callback = nullptr;
    KAboutPluginDialog_DragMoveEvent_Callback kaboutplugindialog_dragmoveevent_callback = nullptr;
    KAboutPluginDialog_DragLeaveEvent_Callback kaboutplugindialog_dragleaveevent_callback = nullptr;
    KAboutPluginDialog_DropEvent_Callback kaboutplugindialog_dropevent_callback = nullptr;
    KAboutPluginDialog_HideEvent_Callback kaboutplugindialog_hideevent_callback = nullptr;
    KAboutPluginDialog_NativeEvent_Callback kaboutplugindialog_nativeevent_callback = nullptr;
    KAboutPluginDialog_ChangeEvent_Callback kaboutplugindialog_changeevent_callback = nullptr;
    KAboutPluginDialog_Metric_Callback kaboutplugindialog_metric_callback = nullptr;
    KAboutPluginDialog_InitPainter_Callback kaboutplugindialog_initpainter_callback = nullptr;
    KAboutPluginDialog_Redirected_Callback kaboutplugindialog_redirected_callback = nullptr;
    KAboutPluginDialog_SharedPainter_Callback kaboutplugindialog_sharedpainter_callback = nullptr;
    KAboutPluginDialog_InputMethodEvent_Callback kaboutplugindialog_inputmethodevent_callback = nullptr;
    KAboutPluginDialog_InputMethodQuery_Callback kaboutplugindialog_inputmethodquery_callback = nullptr;
    KAboutPluginDialog_FocusNextPrevChild_Callback kaboutplugindialog_focusnextprevchild_callback = nullptr;
    KAboutPluginDialog_TimerEvent_Callback kaboutplugindialog_timerevent_callback = nullptr;
    KAboutPluginDialog_ChildEvent_Callback kaboutplugindialog_childevent_callback = nullptr;
    KAboutPluginDialog_CustomEvent_Callback kaboutplugindialog_customevent_callback = nullptr;
    KAboutPluginDialog_ConnectNotify_Callback kaboutplugindialog_connectnotify_callback = nullptr;
    KAboutPluginDialog_DisconnectNotify_Callback kaboutplugindialog_disconnectnotify_callback = nullptr;
    KAboutPluginDialog_AdjustPosition_Callback kaboutplugindialog_adjustposition_callback = nullptr;
    KAboutPluginDialog_UpdateMicroFocus_Callback kaboutplugindialog_updatemicrofocus_callback = nullptr;
    KAboutPluginDialog_Create_Callback kaboutplugindialog_create_callback = nullptr;
    KAboutPluginDialog_Destroy_Callback kaboutplugindialog_destroy_callback = nullptr;
    KAboutPluginDialog_FocusNextChild_Callback kaboutplugindialog_focusnextchild_callback = nullptr;
    KAboutPluginDialog_FocusPreviousChild_Callback kaboutplugindialog_focuspreviouschild_callback = nullptr;
    KAboutPluginDialog_Sender_Callback kaboutplugindialog_sender_callback = nullptr;
    KAboutPluginDialog_SenderSignalIndex_Callback kaboutplugindialog_sendersignalindex_callback = nullptr;
    KAboutPluginDialog_Receivers_Callback kaboutplugindialog_receivers_callback = nullptr;
    KAboutPluginDialog_IsSignalConnected_Callback kaboutplugindialog_issignalconnected_callback = nullptr;
    KAboutPluginDialog_GetDecodedMetricF_Callback kaboutplugindialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kaboutplugindialog_metacall_isbase = false;
    mutable bool kaboutplugindialog_setvisible_isbase = false;
    mutable bool kaboutplugindialog_sizehint_isbase = false;
    mutable bool kaboutplugindialog_minimumsizehint_isbase = false;
    mutable bool kaboutplugindialog_open_isbase = false;
    mutable bool kaboutplugindialog_exec_isbase = false;
    mutable bool kaboutplugindialog_done_isbase = false;
    mutable bool kaboutplugindialog_accept_isbase = false;
    mutable bool kaboutplugindialog_reject_isbase = false;
    mutable bool kaboutplugindialog_keypressevent_isbase = false;
    mutable bool kaboutplugindialog_closeevent_isbase = false;
    mutable bool kaboutplugindialog_showevent_isbase = false;
    mutable bool kaboutplugindialog_resizeevent_isbase = false;
    mutable bool kaboutplugindialog_contextmenuevent_isbase = false;
    mutable bool kaboutplugindialog_eventfilter_isbase = false;
    mutable bool kaboutplugindialog_devtype_isbase = false;
    mutable bool kaboutplugindialog_heightforwidth_isbase = false;
    mutable bool kaboutplugindialog_hasheightforwidth_isbase = false;
    mutable bool kaboutplugindialog_paintengine_isbase = false;
    mutable bool kaboutplugindialog_event_isbase = false;
    mutable bool kaboutplugindialog_mousepressevent_isbase = false;
    mutable bool kaboutplugindialog_mousereleaseevent_isbase = false;
    mutable bool kaboutplugindialog_mousedoubleclickevent_isbase = false;
    mutable bool kaboutplugindialog_mousemoveevent_isbase = false;
    mutable bool kaboutplugindialog_wheelevent_isbase = false;
    mutable bool kaboutplugindialog_keyreleaseevent_isbase = false;
    mutable bool kaboutplugindialog_focusinevent_isbase = false;
    mutable bool kaboutplugindialog_focusoutevent_isbase = false;
    mutable bool kaboutplugindialog_enterevent_isbase = false;
    mutable bool kaboutplugindialog_leaveevent_isbase = false;
    mutable bool kaboutplugindialog_paintevent_isbase = false;
    mutable bool kaboutplugindialog_moveevent_isbase = false;
    mutable bool kaboutplugindialog_tabletevent_isbase = false;
    mutable bool kaboutplugindialog_actionevent_isbase = false;
    mutable bool kaboutplugindialog_dragenterevent_isbase = false;
    mutable bool kaboutplugindialog_dragmoveevent_isbase = false;
    mutable bool kaboutplugindialog_dragleaveevent_isbase = false;
    mutable bool kaboutplugindialog_dropevent_isbase = false;
    mutable bool kaboutplugindialog_hideevent_isbase = false;
    mutable bool kaboutplugindialog_nativeevent_isbase = false;
    mutable bool kaboutplugindialog_changeevent_isbase = false;
    mutable bool kaboutplugindialog_metric_isbase = false;
    mutable bool kaboutplugindialog_initpainter_isbase = false;
    mutable bool kaboutplugindialog_redirected_isbase = false;
    mutable bool kaboutplugindialog_sharedpainter_isbase = false;
    mutable bool kaboutplugindialog_inputmethodevent_isbase = false;
    mutable bool kaboutplugindialog_inputmethodquery_isbase = false;
    mutable bool kaboutplugindialog_focusnextprevchild_isbase = false;
    mutable bool kaboutplugindialog_timerevent_isbase = false;
    mutable bool kaboutplugindialog_childevent_isbase = false;
    mutable bool kaboutplugindialog_customevent_isbase = false;
    mutable bool kaboutplugindialog_connectnotify_isbase = false;
    mutable bool kaboutplugindialog_disconnectnotify_isbase = false;
    mutable bool kaboutplugindialog_adjustposition_isbase = false;
    mutable bool kaboutplugindialog_updatemicrofocus_isbase = false;
    mutable bool kaboutplugindialog_create_isbase = false;
    mutable bool kaboutplugindialog_destroy_isbase = false;
    mutable bool kaboutplugindialog_focusnextchild_isbase = false;
    mutable bool kaboutplugindialog_focuspreviouschild_isbase = false;
    mutable bool kaboutplugindialog_sender_isbase = false;
    mutable bool kaboutplugindialog_sendersignalindex_isbase = false;
    mutable bool kaboutplugindialog_receivers_isbase = false;
    mutable bool kaboutplugindialog_issignalconnected_isbase = false;
    mutable bool kaboutplugindialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKAboutPluginDialog(const KPluginMetaData& pluginMetaData, KAboutPluginDialog::Options options) : KAboutPluginDialog(pluginMetaData, options) {};
    VirtualKAboutPluginDialog(const KPluginMetaData& pluginMetaData) : KAboutPluginDialog(pluginMetaData) {};
    VirtualKAboutPluginDialog(const KPluginMetaData& pluginMetaData, KAboutPluginDialog::Options options, QWidget* parent) : KAboutPluginDialog(pluginMetaData, options, parent) {};
    VirtualKAboutPluginDialog(const KPluginMetaData& pluginMetaData, QWidget* parent) : KAboutPluginDialog(pluginMetaData, parent) {};

    ~VirtualKAboutPluginDialog() {
        kaboutplugindialog_metacall_callback = nullptr;
        kaboutplugindialog_setvisible_callback = nullptr;
        kaboutplugindialog_sizehint_callback = nullptr;
        kaboutplugindialog_minimumsizehint_callback = nullptr;
        kaboutplugindialog_open_callback = nullptr;
        kaboutplugindialog_exec_callback = nullptr;
        kaboutplugindialog_done_callback = nullptr;
        kaboutplugindialog_accept_callback = nullptr;
        kaboutplugindialog_reject_callback = nullptr;
        kaboutplugindialog_keypressevent_callback = nullptr;
        kaboutplugindialog_closeevent_callback = nullptr;
        kaboutplugindialog_showevent_callback = nullptr;
        kaboutplugindialog_resizeevent_callback = nullptr;
        kaboutplugindialog_contextmenuevent_callback = nullptr;
        kaboutplugindialog_eventfilter_callback = nullptr;
        kaboutplugindialog_devtype_callback = nullptr;
        kaboutplugindialog_heightforwidth_callback = nullptr;
        kaboutplugindialog_hasheightforwidth_callback = nullptr;
        kaboutplugindialog_paintengine_callback = nullptr;
        kaboutplugindialog_event_callback = nullptr;
        kaboutplugindialog_mousepressevent_callback = nullptr;
        kaboutplugindialog_mousereleaseevent_callback = nullptr;
        kaboutplugindialog_mousedoubleclickevent_callback = nullptr;
        kaboutplugindialog_mousemoveevent_callback = nullptr;
        kaboutplugindialog_wheelevent_callback = nullptr;
        kaboutplugindialog_keyreleaseevent_callback = nullptr;
        kaboutplugindialog_focusinevent_callback = nullptr;
        kaboutplugindialog_focusoutevent_callback = nullptr;
        kaboutplugindialog_enterevent_callback = nullptr;
        kaboutplugindialog_leaveevent_callback = nullptr;
        kaboutplugindialog_paintevent_callback = nullptr;
        kaboutplugindialog_moveevent_callback = nullptr;
        kaboutplugindialog_tabletevent_callback = nullptr;
        kaboutplugindialog_actionevent_callback = nullptr;
        kaboutplugindialog_dragenterevent_callback = nullptr;
        kaboutplugindialog_dragmoveevent_callback = nullptr;
        kaboutplugindialog_dragleaveevent_callback = nullptr;
        kaboutplugindialog_dropevent_callback = nullptr;
        kaboutplugindialog_hideevent_callback = nullptr;
        kaboutplugindialog_nativeevent_callback = nullptr;
        kaboutplugindialog_changeevent_callback = nullptr;
        kaboutplugindialog_metric_callback = nullptr;
        kaboutplugindialog_initpainter_callback = nullptr;
        kaboutplugindialog_redirected_callback = nullptr;
        kaboutplugindialog_sharedpainter_callback = nullptr;
        kaboutplugindialog_inputmethodevent_callback = nullptr;
        kaboutplugindialog_inputmethodquery_callback = nullptr;
        kaboutplugindialog_focusnextprevchild_callback = nullptr;
        kaboutplugindialog_timerevent_callback = nullptr;
        kaboutplugindialog_childevent_callback = nullptr;
        kaboutplugindialog_customevent_callback = nullptr;
        kaboutplugindialog_connectnotify_callback = nullptr;
        kaboutplugindialog_disconnectnotify_callback = nullptr;
        kaboutplugindialog_adjustposition_callback = nullptr;
        kaboutplugindialog_updatemicrofocus_callback = nullptr;
        kaboutplugindialog_create_callback = nullptr;
        kaboutplugindialog_destroy_callback = nullptr;
        kaboutplugindialog_focusnextchild_callback = nullptr;
        kaboutplugindialog_focuspreviouschild_callback = nullptr;
        kaboutplugindialog_sender_callback = nullptr;
        kaboutplugindialog_sendersignalindex_callback = nullptr;
        kaboutplugindialog_receivers_callback = nullptr;
        kaboutplugindialog_issignalconnected_callback = nullptr;
        kaboutplugindialog_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKAboutPluginDialog_Metacall_Callback(KAboutPluginDialog_Metacall_Callback cb) { kaboutplugindialog_metacall_callback = cb; }
    inline void setKAboutPluginDialog_SetVisible_Callback(KAboutPluginDialog_SetVisible_Callback cb) { kaboutplugindialog_setvisible_callback = cb; }
    inline void setKAboutPluginDialog_SizeHint_Callback(KAboutPluginDialog_SizeHint_Callback cb) { kaboutplugindialog_sizehint_callback = cb; }
    inline void setKAboutPluginDialog_MinimumSizeHint_Callback(KAboutPluginDialog_MinimumSizeHint_Callback cb) { kaboutplugindialog_minimumsizehint_callback = cb; }
    inline void setKAboutPluginDialog_Open_Callback(KAboutPluginDialog_Open_Callback cb) { kaboutplugindialog_open_callback = cb; }
    inline void setKAboutPluginDialog_Exec_Callback(KAboutPluginDialog_Exec_Callback cb) { kaboutplugindialog_exec_callback = cb; }
    inline void setKAboutPluginDialog_Done_Callback(KAboutPluginDialog_Done_Callback cb) { kaboutplugindialog_done_callback = cb; }
    inline void setKAboutPluginDialog_Accept_Callback(KAboutPluginDialog_Accept_Callback cb) { kaboutplugindialog_accept_callback = cb; }
    inline void setKAboutPluginDialog_Reject_Callback(KAboutPluginDialog_Reject_Callback cb) { kaboutplugindialog_reject_callback = cb; }
    inline void setKAboutPluginDialog_KeyPressEvent_Callback(KAboutPluginDialog_KeyPressEvent_Callback cb) { kaboutplugindialog_keypressevent_callback = cb; }
    inline void setKAboutPluginDialog_CloseEvent_Callback(KAboutPluginDialog_CloseEvent_Callback cb) { kaboutplugindialog_closeevent_callback = cb; }
    inline void setKAboutPluginDialog_ShowEvent_Callback(KAboutPluginDialog_ShowEvent_Callback cb) { kaboutplugindialog_showevent_callback = cb; }
    inline void setKAboutPluginDialog_ResizeEvent_Callback(KAboutPluginDialog_ResizeEvent_Callback cb) { kaboutplugindialog_resizeevent_callback = cb; }
    inline void setKAboutPluginDialog_ContextMenuEvent_Callback(KAboutPluginDialog_ContextMenuEvent_Callback cb) { kaboutplugindialog_contextmenuevent_callback = cb; }
    inline void setKAboutPluginDialog_EventFilter_Callback(KAboutPluginDialog_EventFilter_Callback cb) { kaboutplugindialog_eventfilter_callback = cb; }
    inline void setKAboutPluginDialog_DevType_Callback(KAboutPluginDialog_DevType_Callback cb) { kaboutplugindialog_devtype_callback = cb; }
    inline void setKAboutPluginDialog_HeightForWidth_Callback(KAboutPluginDialog_HeightForWidth_Callback cb) { kaboutplugindialog_heightforwidth_callback = cb; }
    inline void setKAboutPluginDialog_HasHeightForWidth_Callback(KAboutPluginDialog_HasHeightForWidth_Callback cb) { kaboutplugindialog_hasheightforwidth_callback = cb; }
    inline void setKAboutPluginDialog_PaintEngine_Callback(KAboutPluginDialog_PaintEngine_Callback cb) { kaboutplugindialog_paintengine_callback = cb; }
    inline void setKAboutPluginDialog_Event_Callback(KAboutPluginDialog_Event_Callback cb) { kaboutplugindialog_event_callback = cb; }
    inline void setKAboutPluginDialog_MousePressEvent_Callback(KAboutPluginDialog_MousePressEvent_Callback cb) { kaboutplugindialog_mousepressevent_callback = cb; }
    inline void setKAboutPluginDialog_MouseReleaseEvent_Callback(KAboutPluginDialog_MouseReleaseEvent_Callback cb) { kaboutplugindialog_mousereleaseevent_callback = cb; }
    inline void setKAboutPluginDialog_MouseDoubleClickEvent_Callback(KAboutPluginDialog_MouseDoubleClickEvent_Callback cb) { kaboutplugindialog_mousedoubleclickevent_callback = cb; }
    inline void setKAboutPluginDialog_MouseMoveEvent_Callback(KAboutPluginDialog_MouseMoveEvent_Callback cb) { kaboutplugindialog_mousemoveevent_callback = cb; }
    inline void setKAboutPluginDialog_WheelEvent_Callback(KAboutPluginDialog_WheelEvent_Callback cb) { kaboutplugindialog_wheelevent_callback = cb; }
    inline void setKAboutPluginDialog_KeyReleaseEvent_Callback(KAboutPluginDialog_KeyReleaseEvent_Callback cb) { kaboutplugindialog_keyreleaseevent_callback = cb; }
    inline void setKAboutPluginDialog_FocusInEvent_Callback(KAboutPluginDialog_FocusInEvent_Callback cb) { kaboutplugindialog_focusinevent_callback = cb; }
    inline void setKAboutPluginDialog_FocusOutEvent_Callback(KAboutPluginDialog_FocusOutEvent_Callback cb) { kaboutplugindialog_focusoutevent_callback = cb; }
    inline void setKAboutPluginDialog_EnterEvent_Callback(KAboutPluginDialog_EnterEvent_Callback cb) { kaboutplugindialog_enterevent_callback = cb; }
    inline void setKAboutPluginDialog_LeaveEvent_Callback(KAboutPluginDialog_LeaveEvent_Callback cb) { kaboutplugindialog_leaveevent_callback = cb; }
    inline void setKAboutPluginDialog_PaintEvent_Callback(KAboutPluginDialog_PaintEvent_Callback cb) { kaboutplugindialog_paintevent_callback = cb; }
    inline void setKAboutPluginDialog_MoveEvent_Callback(KAboutPluginDialog_MoveEvent_Callback cb) { kaboutplugindialog_moveevent_callback = cb; }
    inline void setKAboutPluginDialog_TabletEvent_Callback(KAboutPluginDialog_TabletEvent_Callback cb) { kaboutplugindialog_tabletevent_callback = cb; }
    inline void setKAboutPluginDialog_ActionEvent_Callback(KAboutPluginDialog_ActionEvent_Callback cb) { kaboutplugindialog_actionevent_callback = cb; }
    inline void setKAboutPluginDialog_DragEnterEvent_Callback(KAboutPluginDialog_DragEnterEvent_Callback cb) { kaboutplugindialog_dragenterevent_callback = cb; }
    inline void setKAboutPluginDialog_DragMoveEvent_Callback(KAboutPluginDialog_DragMoveEvent_Callback cb) { kaboutplugindialog_dragmoveevent_callback = cb; }
    inline void setKAboutPluginDialog_DragLeaveEvent_Callback(KAboutPluginDialog_DragLeaveEvent_Callback cb) { kaboutplugindialog_dragleaveevent_callback = cb; }
    inline void setKAboutPluginDialog_DropEvent_Callback(KAboutPluginDialog_DropEvent_Callback cb) { kaboutplugindialog_dropevent_callback = cb; }
    inline void setKAboutPluginDialog_HideEvent_Callback(KAboutPluginDialog_HideEvent_Callback cb) { kaboutplugindialog_hideevent_callback = cb; }
    inline void setKAboutPluginDialog_NativeEvent_Callback(KAboutPluginDialog_NativeEvent_Callback cb) { kaboutplugindialog_nativeevent_callback = cb; }
    inline void setKAboutPluginDialog_ChangeEvent_Callback(KAboutPluginDialog_ChangeEvent_Callback cb) { kaboutplugindialog_changeevent_callback = cb; }
    inline void setKAboutPluginDialog_Metric_Callback(KAboutPluginDialog_Metric_Callback cb) { kaboutplugindialog_metric_callback = cb; }
    inline void setKAboutPluginDialog_InitPainter_Callback(KAboutPluginDialog_InitPainter_Callback cb) { kaboutplugindialog_initpainter_callback = cb; }
    inline void setKAboutPluginDialog_Redirected_Callback(KAboutPluginDialog_Redirected_Callback cb) { kaboutplugindialog_redirected_callback = cb; }
    inline void setKAboutPluginDialog_SharedPainter_Callback(KAboutPluginDialog_SharedPainter_Callback cb) { kaboutplugindialog_sharedpainter_callback = cb; }
    inline void setKAboutPluginDialog_InputMethodEvent_Callback(KAboutPluginDialog_InputMethodEvent_Callback cb) { kaboutplugindialog_inputmethodevent_callback = cb; }
    inline void setKAboutPluginDialog_InputMethodQuery_Callback(KAboutPluginDialog_InputMethodQuery_Callback cb) { kaboutplugindialog_inputmethodquery_callback = cb; }
    inline void setKAboutPluginDialog_FocusNextPrevChild_Callback(KAboutPluginDialog_FocusNextPrevChild_Callback cb) { kaboutplugindialog_focusnextprevchild_callback = cb; }
    inline void setKAboutPluginDialog_TimerEvent_Callback(KAboutPluginDialog_TimerEvent_Callback cb) { kaboutplugindialog_timerevent_callback = cb; }
    inline void setKAboutPluginDialog_ChildEvent_Callback(KAboutPluginDialog_ChildEvent_Callback cb) { kaboutplugindialog_childevent_callback = cb; }
    inline void setKAboutPluginDialog_CustomEvent_Callback(KAboutPluginDialog_CustomEvent_Callback cb) { kaboutplugindialog_customevent_callback = cb; }
    inline void setKAboutPluginDialog_ConnectNotify_Callback(KAboutPluginDialog_ConnectNotify_Callback cb) { kaboutplugindialog_connectnotify_callback = cb; }
    inline void setKAboutPluginDialog_DisconnectNotify_Callback(KAboutPluginDialog_DisconnectNotify_Callback cb) { kaboutplugindialog_disconnectnotify_callback = cb; }
    inline void setKAboutPluginDialog_AdjustPosition_Callback(KAboutPluginDialog_AdjustPosition_Callback cb) { kaboutplugindialog_adjustposition_callback = cb; }
    inline void setKAboutPluginDialog_UpdateMicroFocus_Callback(KAboutPluginDialog_UpdateMicroFocus_Callback cb) { kaboutplugindialog_updatemicrofocus_callback = cb; }
    inline void setKAboutPluginDialog_Create_Callback(KAboutPluginDialog_Create_Callback cb) { kaboutplugindialog_create_callback = cb; }
    inline void setKAboutPluginDialog_Destroy_Callback(KAboutPluginDialog_Destroy_Callback cb) { kaboutplugindialog_destroy_callback = cb; }
    inline void setKAboutPluginDialog_FocusNextChild_Callback(KAboutPluginDialog_FocusNextChild_Callback cb) { kaboutplugindialog_focusnextchild_callback = cb; }
    inline void setKAboutPluginDialog_FocusPreviousChild_Callback(KAboutPluginDialog_FocusPreviousChild_Callback cb) { kaboutplugindialog_focuspreviouschild_callback = cb; }
    inline void setKAboutPluginDialog_Sender_Callback(KAboutPluginDialog_Sender_Callback cb) { kaboutplugindialog_sender_callback = cb; }
    inline void setKAboutPluginDialog_SenderSignalIndex_Callback(KAboutPluginDialog_SenderSignalIndex_Callback cb) { kaboutplugindialog_sendersignalindex_callback = cb; }
    inline void setKAboutPluginDialog_Receivers_Callback(KAboutPluginDialog_Receivers_Callback cb) { kaboutplugindialog_receivers_callback = cb; }
    inline void setKAboutPluginDialog_IsSignalConnected_Callback(KAboutPluginDialog_IsSignalConnected_Callback cb) { kaboutplugindialog_issignalconnected_callback = cb; }
    inline void setKAboutPluginDialog_GetDecodedMetricF_Callback(KAboutPluginDialog_GetDecodedMetricF_Callback cb) { kaboutplugindialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKAboutPluginDialog_Metacall_IsBase(bool value) const { kaboutplugindialog_metacall_isbase = value; }
    inline void setKAboutPluginDialog_SetVisible_IsBase(bool value) const { kaboutplugindialog_setvisible_isbase = value; }
    inline void setKAboutPluginDialog_SizeHint_IsBase(bool value) const { kaboutplugindialog_sizehint_isbase = value; }
    inline void setKAboutPluginDialog_MinimumSizeHint_IsBase(bool value) const { kaboutplugindialog_minimumsizehint_isbase = value; }
    inline void setKAboutPluginDialog_Open_IsBase(bool value) const { kaboutplugindialog_open_isbase = value; }
    inline void setKAboutPluginDialog_Exec_IsBase(bool value) const { kaboutplugindialog_exec_isbase = value; }
    inline void setKAboutPluginDialog_Done_IsBase(bool value) const { kaboutplugindialog_done_isbase = value; }
    inline void setKAboutPluginDialog_Accept_IsBase(bool value) const { kaboutplugindialog_accept_isbase = value; }
    inline void setKAboutPluginDialog_Reject_IsBase(bool value) const { kaboutplugindialog_reject_isbase = value; }
    inline void setKAboutPluginDialog_KeyPressEvent_IsBase(bool value) const { kaboutplugindialog_keypressevent_isbase = value; }
    inline void setKAboutPluginDialog_CloseEvent_IsBase(bool value) const { kaboutplugindialog_closeevent_isbase = value; }
    inline void setKAboutPluginDialog_ShowEvent_IsBase(bool value) const { kaboutplugindialog_showevent_isbase = value; }
    inline void setKAboutPluginDialog_ResizeEvent_IsBase(bool value) const { kaboutplugindialog_resizeevent_isbase = value; }
    inline void setKAboutPluginDialog_ContextMenuEvent_IsBase(bool value) const { kaboutplugindialog_contextmenuevent_isbase = value; }
    inline void setKAboutPluginDialog_EventFilter_IsBase(bool value) const { kaboutplugindialog_eventfilter_isbase = value; }
    inline void setKAboutPluginDialog_DevType_IsBase(bool value) const { kaboutplugindialog_devtype_isbase = value; }
    inline void setKAboutPluginDialog_HeightForWidth_IsBase(bool value) const { kaboutplugindialog_heightforwidth_isbase = value; }
    inline void setKAboutPluginDialog_HasHeightForWidth_IsBase(bool value) const { kaboutplugindialog_hasheightforwidth_isbase = value; }
    inline void setKAboutPluginDialog_PaintEngine_IsBase(bool value) const { kaboutplugindialog_paintengine_isbase = value; }
    inline void setKAboutPluginDialog_Event_IsBase(bool value) const { kaboutplugindialog_event_isbase = value; }
    inline void setKAboutPluginDialog_MousePressEvent_IsBase(bool value) const { kaboutplugindialog_mousepressevent_isbase = value; }
    inline void setKAboutPluginDialog_MouseReleaseEvent_IsBase(bool value) const { kaboutplugindialog_mousereleaseevent_isbase = value; }
    inline void setKAboutPluginDialog_MouseDoubleClickEvent_IsBase(bool value) const { kaboutplugindialog_mousedoubleclickevent_isbase = value; }
    inline void setKAboutPluginDialog_MouseMoveEvent_IsBase(bool value) const { kaboutplugindialog_mousemoveevent_isbase = value; }
    inline void setKAboutPluginDialog_WheelEvent_IsBase(bool value) const { kaboutplugindialog_wheelevent_isbase = value; }
    inline void setKAboutPluginDialog_KeyReleaseEvent_IsBase(bool value) const { kaboutplugindialog_keyreleaseevent_isbase = value; }
    inline void setKAboutPluginDialog_FocusInEvent_IsBase(bool value) const { kaboutplugindialog_focusinevent_isbase = value; }
    inline void setKAboutPluginDialog_FocusOutEvent_IsBase(bool value) const { kaboutplugindialog_focusoutevent_isbase = value; }
    inline void setKAboutPluginDialog_EnterEvent_IsBase(bool value) const { kaboutplugindialog_enterevent_isbase = value; }
    inline void setKAboutPluginDialog_LeaveEvent_IsBase(bool value) const { kaboutplugindialog_leaveevent_isbase = value; }
    inline void setKAboutPluginDialog_PaintEvent_IsBase(bool value) const { kaboutplugindialog_paintevent_isbase = value; }
    inline void setKAboutPluginDialog_MoveEvent_IsBase(bool value) const { kaboutplugindialog_moveevent_isbase = value; }
    inline void setKAboutPluginDialog_TabletEvent_IsBase(bool value) const { kaboutplugindialog_tabletevent_isbase = value; }
    inline void setKAboutPluginDialog_ActionEvent_IsBase(bool value) const { kaboutplugindialog_actionevent_isbase = value; }
    inline void setKAboutPluginDialog_DragEnterEvent_IsBase(bool value) const { kaboutplugindialog_dragenterevent_isbase = value; }
    inline void setKAboutPluginDialog_DragMoveEvent_IsBase(bool value) const { kaboutplugindialog_dragmoveevent_isbase = value; }
    inline void setKAboutPluginDialog_DragLeaveEvent_IsBase(bool value) const { kaboutplugindialog_dragleaveevent_isbase = value; }
    inline void setKAboutPluginDialog_DropEvent_IsBase(bool value) const { kaboutplugindialog_dropevent_isbase = value; }
    inline void setKAboutPluginDialog_HideEvent_IsBase(bool value) const { kaboutplugindialog_hideevent_isbase = value; }
    inline void setKAboutPluginDialog_NativeEvent_IsBase(bool value) const { kaboutplugindialog_nativeevent_isbase = value; }
    inline void setKAboutPluginDialog_ChangeEvent_IsBase(bool value) const { kaboutplugindialog_changeevent_isbase = value; }
    inline void setKAboutPluginDialog_Metric_IsBase(bool value) const { kaboutplugindialog_metric_isbase = value; }
    inline void setKAboutPluginDialog_InitPainter_IsBase(bool value) const { kaboutplugindialog_initpainter_isbase = value; }
    inline void setKAboutPluginDialog_Redirected_IsBase(bool value) const { kaboutplugindialog_redirected_isbase = value; }
    inline void setKAboutPluginDialog_SharedPainter_IsBase(bool value) const { kaboutplugindialog_sharedpainter_isbase = value; }
    inline void setKAboutPluginDialog_InputMethodEvent_IsBase(bool value) const { kaboutplugindialog_inputmethodevent_isbase = value; }
    inline void setKAboutPluginDialog_InputMethodQuery_IsBase(bool value) const { kaboutplugindialog_inputmethodquery_isbase = value; }
    inline void setKAboutPluginDialog_FocusNextPrevChild_IsBase(bool value) const { kaboutplugindialog_focusnextprevchild_isbase = value; }
    inline void setKAboutPluginDialog_TimerEvent_IsBase(bool value) const { kaboutplugindialog_timerevent_isbase = value; }
    inline void setKAboutPluginDialog_ChildEvent_IsBase(bool value) const { kaboutplugindialog_childevent_isbase = value; }
    inline void setKAboutPluginDialog_CustomEvent_IsBase(bool value) const { kaboutplugindialog_customevent_isbase = value; }
    inline void setKAboutPluginDialog_ConnectNotify_IsBase(bool value) const { kaboutplugindialog_connectnotify_isbase = value; }
    inline void setKAboutPluginDialog_DisconnectNotify_IsBase(bool value) const { kaboutplugindialog_disconnectnotify_isbase = value; }
    inline void setKAboutPluginDialog_AdjustPosition_IsBase(bool value) const { kaboutplugindialog_adjustposition_isbase = value; }
    inline void setKAboutPluginDialog_UpdateMicroFocus_IsBase(bool value) const { kaboutplugindialog_updatemicrofocus_isbase = value; }
    inline void setKAboutPluginDialog_Create_IsBase(bool value) const { kaboutplugindialog_create_isbase = value; }
    inline void setKAboutPluginDialog_Destroy_IsBase(bool value) const { kaboutplugindialog_destroy_isbase = value; }
    inline void setKAboutPluginDialog_FocusNextChild_IsBase(bool value) const { kaboutplugindialog_focusnextchild_isbase = value; }
    inline void setKAboutPluginDialog_FocusPreviousChild_IsBase(bool value) const { kaboutplugindialog_focuspreviouschild_isbase = value; }
    inline void setKAboutPluginDialog_Sender_IsBase(bool value) const { kaboutplugindialog_sender_isbase = value; }
    inline void setKAboutPluginDialog_SenderSignalIndex_IsBase(bool value) const { kaboutplugindialog_sendersignalindex_isbase = value; }
    inline void setKAboutPluginDialog_Receivers_IsBase(bool value) const { kaboutplugindialog_receivers_isbase = value; }
    inline void setKAboutPluginDialog_IsSignalConnected_IsBase(bool value) const { kaboutplugindialog_issignalconnected_isbase = value; }
    inline void setKAboutPluginDialog_GetDecodedMetricF_IsBase(bool value) const { kaboutplugindialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kaboutplugindialog_metacall_isbase) {
            kaboutplugindialog_metacall_isbase = false;
            return KAboutPluginDialog::qt_metacall(param1, param2, param3);
        } else if (kaboutplugindialog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kaboutplugindialog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KAboutPluginDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kaboutplugindialog_setvisible_isbase) {
            kaboutplugindialog_setvisible_isbase = false;
            KAboutPluginDialog::setVisible(visible);
        } else if (kaboutplugindialog_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kaboutplugindialog_setvisible_callback(this, cbval1);
        } else {
            KAboutPluginDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kaboutplugindialog_sizehint_isbase) {
            kaboutplugindialog_sizehint_isbase = false;
            return KAboutPluginDialog::sizeHint();
        } else if (kaboutplugindialog_sizehint_callback != nullptr) {
            QSize* callback_ret = kaboutplugindialog_sizehint_callback();
            return *callback_ret;
        } else {
            return KAboutPluginDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kaboutplugindialog_minimumsizehint_isbase) {
            kaboutplugindialog_minimumsizehint_isbase = false;
            return KAboutPluginDialog::minimumSizeHint();
        } else if (kaboutplugindialog_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kaboutplugindialog_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KAboutPluginDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kaboutplugindialog_open_isbase) {
            kaboutplugindialog_open_isbase = false;
            KAboutPluginDialog::open();
        } else if (kaboutplugindialog_open_callback != nullptr) {
            kaboutplugindialog_open_callback();
        } else {
            KAboutPluginDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kaboutplugindialog_exec_isbase) {
            kaboutplugindialog_exec_isbase = false;
            return KAboutPluginDialog::exec();
        } else if (kaboutplugindialog_exec_callback != nullptr) {
            int callback_ret = kaboutplugindialog_exec_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KAboutPluginDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kaboutplugindialog_done_isbase) {
            kaboutplugindialog_done_isbase = false;
            KAboutPluginDialog::done(param1);
        } else if (kaboutplugindialog_done_callback != nullptr) {
            int cbval1 = param1;

            kaboutplugindialog_done_callback(this, cbval1);
        } else {
            KAboutPluginDialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kaboutplugindialog_accept_isbase) {
            kaboutplugindialog_accept_isbase = false;
            KAboutPluginDialog::accept();
        } else if (kaboutplugindialog_accept_callback != nullptr) {
            kaboutplugindialog_accept_callback();
        } else {
            KAboutPluginDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kaboutplugindialog_reject_isbase) {
            kaboutplugindialog_reject_isbase = false;
            KAboutPluginDialog::reject();
        } else if (kaboutplugindialog_reject_callback != nullptr) {
            kaboutplugindialog_reject_callback();
        } else {
            KAboutPluginDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kaboutplugindialog_keypressevent_isbase) {
            kaboutplugindialog_keypressevent_isbase = false;
            KAboutPluginDialog::keyPressEvent(param1);
        } else if (kaboutplugindialog_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;

            kaboutplugindialog_keypressevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kaboutplugindialog_closeevent_isbase) {
            kaboutplugindialog_closeevent_isbase = false;
            KAboutPluginDialog::closeEvent(param1);
        } else if (kaboutplugindialog_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = param1;

            kaboutplugindialog_closeevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kaboutplugindialog_showevent_isbase) {
            kaboutplugindialog_showevent_isbase = false;
            KAboutPluginDialog::showEvent(param1);
        } else if (kaboutplugindialog_showevent_callback != nullptr) {
            QShowEvent* cbval1 = param1;

            kaboutplugindialog_showevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kaboutplugindialog_resizeevent_isbase) {
            kaboutplugindialog_resizeevent_isbase = false;
            KAboutPluginDialog::resizeEvent(param1);
        } else if (kaboutplugindialog_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            kaboutplugindialog_resizeevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kaboutplugindialog_contextmenuevent_isbase) {
            kaboutplugindialog_contextmenuevent_isbase = false;
            KAboutPluginDialog::contextMenuEvent(param1);
        } else if (kaboutplugindialog_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            kaboutplugindialog_contextmenuevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kaboutplugindialog_eventfilter_isbase) {
            kaboutplugindialog_eventfilter_isbase = false;
            return KAboutPluginDialog::eventFilter(param1, param2);
        } else if (kaboutplugindialog_eventfilter_callback != nullptr) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = kaboutplugindialog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KAboutPluginDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kaboutplugindialog_devtype_isbase) {
            kaboutplugindialog_devtype_isbase = false;
            return KAboutPluginDialog::devType();
        } else if (kaboutplugindialog_devtype_callback != nullptr) {
            int callback_ret = kaboutplugindialog_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KAboutPluginDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kaboutplugindialog_heightforwidth_isbase) {
            kaboutplugindialog_heightforwidth_isbase = false;
            return KAboutPluginDialog::heightForWidth(param1);
        } else if (kaboutplugindialog_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kaboutplugindialog_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KAboutPluginDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kaboutplugindialog_hasheightforwidth_isbase) {
            kaboutplugindialog_hasheightforwidth_isbase = false;
            return KAboutPluginDialog::hasHeightForWidth();
        } else if (kaboutplugindialog_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kaboutplugindialog_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KAboutPluginDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kaboutplugindialog_paintengine_isbase) {
            kaboutplugindialog_paintengine_isbase = false;
            return KAboutPluginDialog::paintEngine();
        } else if (kaboutplugindialog_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kaboutplugindialog_paintengine_callback();
            return callback_ret;
        } else {
            return KAboutPluginDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kaboutplugindialog_event_isbase) {
            kaboutplugindialog_event_isbase = false;
            return KAboutPluginDialog::event(event);
        } else if (kaboutplugindialog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kaboutplugindialog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAboutPluginDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kaboutplugindialog_mousepressevent_isbase) {
            kaboutplugindialog_mousepressevent_isbase = false;
            KAboutPluginDialog::mousePressEvent(event);
        } else if (kaboutplugindialog_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kaboutplugindialog_mousepressevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kaboutplugindialog_mousereleaseevent_isbase) {
            kaboutplugindialog_mousereleaseevent_isbase = false;
            KAboutPluginDialog::mouseReleaseEvent(event);
        } else if (kaboutplugindialog_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kaboutplugindialog_mousereleaseevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kaboutplugindialog_mousedoubleclickevent_isbase) {
            kaboutplugindialog_mousedoubleclickevent_isbase = false;
            KAboutPluginDialog::mouseDoubleClickEvent(event);
        } else if (kaboutplugindialog_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kaboutplugindialog_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kaboutplugindialog_mousemoveevent_isbase) {
            kaboutplugindialog_mousemoveevent_isbase = false;
            KAboutPluginDialog::mouseMoveEvent(event);
        } else if (kaboutplugindialog_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kaboutplugindialog_mousemoveevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kaboutplugindialog_wheelevent_isbase) {
            kaboutplugindialog_wheelevent_isbase = false;
            KAboutPluginDialog::wheelEvent(event);
        } else if (kaboutplugindialog_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kaboutplugindialog_wheelevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kaboutplugindialog_keyreleaseevent_isbase) {
            kaboutplugindialog_keyreleaseevent_isbase = false;
            KAboutPluginDialog::keyReleaseEvent(event);
        } else if (kaboutplugindialog_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kaboutplugindialog_keyreleaseevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kaboutplugindialog_focusinevent_isbase) {
            kaboutplugindialog_focusinevent_isbase = false;
            KAboutPluginDialog::focusInEvent(event);
        } else if (kaboutplugindialog_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kaboutplugindialog_focusinevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kaboutplugindialog_focusoutevent_isbase) {
            kaboutplugindialog_focusoutevent_isbase = false;
            KAboutPluginDialog::focusOutEvent(event);
        } else if (kaboutplugindialog_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kaboutplugindialog_focusoutevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kaboutplugindialog_enterevent_isbase) {
            kaboutplugindialog_enterevent_isbase = false;
            KAboutPluginDialog::enterEvent(event);
        } else if (kaboutplugindialog_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kaboutplugindialog_enterevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kaboutplugindialog_leaveevent_isbase) {
            kaboutplugindialog_leaveevent_isbase = false;
            KAboutPluginDialog::leaveEvent(event);
        } else if (kaboutplugindialog_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kaboutplugindialog_leaveevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kaboutplugindialog_paintevent_isbase) {
            kaboutplugindialog_paintevent_isbase = false;
            KAboutPluginDialog::paintEvent(event);
        } else if (kaboutplugindialog_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kaboutplugindialog_paintevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kaboutplugindialog_moveevent_isbase) {
            kaboutplugindialog_moveevent_isbase = false;
            KAboutPluginDialog::moveEvent(event);
        } else if (kaboutplugindialog_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kaboutplugindialog_moveevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kaboutplugindialog_tabletevent_isbase) {
            kaboutplugindialog_tabletevent_isbase = false;
            KAboutPluginDialog::tabletEvent(event);
        } else if (kaboutplugindialog_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kaboutplugindialog_tabletevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kaboutplugindialog_actionevent_isbase) {
            kaboutplugindialog_actionevent_isbase = false;
            KAboutPluginDialog::actionEvent(event);
        } else if (kaboutplugindialog_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kaboutplugindialog_actionevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kaboutplugindialog_dragenterevent_isbase) {
            kaboutplugindialog_dragenterevent_isbase = false;
            KAboutPluginDialog::dragEnterEvent(event);
        } else if (kaboutplugindialog_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kaboutplugindialog_dragenterevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kaboutplugindialog_dragmoveevent_isbase) {
            kaboutplugindialog_dragmoveevent_isbase = false;
            KAboutPluginDialog::dragMoveEvent(event);
        } else if (kaboutplugindialog_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kaboutplugindialog_dragmoveevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kaboutplugindialog_dragleaveevent_isbase) {
            kaboutplugindialog_dragleaveevent_isbase = false;
            KAboutPluginDialog::dragLeaveEvent(event);
        } else if (kaboutplugindialog_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kaboutplugindialog_dragleaveevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kaboutplugindialog_dropevent_isbase) {
            kaboutplugindialog_dropevent_isbase = false;
            KAboutPluginDialog::dropEvent(event);
        } else if (kaboutplugindialog_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kaboutplugindialog_dropevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kaboutplugindialog_hideevent_isbase) {
            kaboutplugindialog_hideevent_isbase = false;
            KAboutPluginDialog::hideEvent(event);
        } else if (kaboutplugindialog_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kaboutplugindialog_hideevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kaboutplugindialog_nativeevent_isbase) {
            kaboutplugindialog_nativeevent_isbase = false;
            return KAboutPluginDialog::nativeEvent(eventType, message, result);
        } else if (kaboutplugindialog_nativeevent_callback != nullptr) {
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

            bool callback_ret = kaboutplugindialog_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KAboutPluginDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kaboutplugindialog_changeevent_isbase) {
            kaboutplugindialog_changeevent_isbase = false;
            KAboutPluginDialog::changeEvent(param1);
        } else if (kaboutplugindialog_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kaboutplugindialog_changeevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kaboutplugindialog_metric_isbase) {
            kaboutplugindialog_metric_isbase = false;
            return KAboutPluginDialog::metric(param1);
        } else if (kaboutplugindialog_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kaboutplugindialog_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KAboutPluginDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kaboutplugindialog_initpainter_isbase) {
            kaboutplugindialog_initpainter_isbase = false;
            KAboutPluginDialog::initPainter(painter);
        } else if (kaboutplugindialog_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kaboutplugindialog_initpainter_callback(this, cbval1);
        } else {
            KAboutPluginDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kaboutplugindialog_redirected_isbase) {
            kaboutplugindialog_redirected_isbase = false;
            return KAboutPluginDialog::redirected(offset);
        } else if (kaboutplugindialog_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kaboutplugindialog_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAboutPluginDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kaboutplugindialog_sharedpainter_isbase) {
            kaboutplugindialog_sharedpainter_isbase = false;
            return KAboutPluginDialog::sharedPainter();
        } else if (kaboutplugindialog_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kaboutplugindialog_sharedpainter_callback();
            return callback_ret;
        } else {
            return KAboutPluginDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kaboutplugindialog_inputmethodevent_isbase) {
            kaboutplugindialog_inputmethodevent_isbase = false;
            KAboutPluginDialog::inputMethodEvent(param1);
        } else if (kaboutplugindialog_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kaboutplugindialog_inputmethodevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kaboutplugindialog_inputmethodquery_isbase) {
            kaboutplugindialog_inputmethodquery_isbase = false;
            return KAboutPluginDialog::inputMethodQuery(param1);
        } else if (kaboutplugindialog_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kaboutplugindialog_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KAboutPluginDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kaboutplugindialog_focusnextprevchild_isbase) {
            kaboutplugindialog_focusnextprevchild_isbase = false;
            return KAboutPluginDialog::focusNextPrevChild(next);
        } else if (kaboutplugindialog_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kaboutplugindialog_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAboutPluginDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kaboutplugindialog_timerevent_isbase) {
            kaboutplugindialog_timerevent_isbase = false;
            KAboutPluginDialog::timerEvent(event);
        } else if (kaboutplugindialog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kaboutplugindialog_timerevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kaboutplugindialog_childevent_isbase) {
            kaboutplugindialog_childevent_isbase = false;
            KAboutPluginDialog::childEvent(event);
        } else if (kaboutplugindialog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kaboutplugindialog_childevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kaboutplugindialog_customevent_isbase) {
            kaboutplugindialog_customevent_isbase = false;
            KAboutPluginDialog::customEvent(event);
        } else if (kaboutplugindialog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kaboutplugindialog_customevent_callback(this, cbval1);
        } else {
            KAboutPluginDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kaboutplugindialog_connectnotify_isbase) {
            kaboutplugindialog_connectnotify_isbase = false;
            KAboutPluginDialog::connectNotify(signal);
        } else if (kaboutplugindialog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kaboutplugindialog_connectnotify_callback(this, cbval1);
        } else {
            KAboutPluginDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kaboutplugindialog_disconnectnotify_isbase) {
            kaboutplugindialog_disconnectnotify_isbase = false;
            KAboutPluginDialog::disconnectNotify(signal);
        } else if (kaboutplugindialog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kaboutplugindialog_disconnectnotify_callback(this, cbval1);
        } else {
            KAboutPluginDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kaboutplugindialog_adjustposition_isbase) {
            kaboutplugindialog_adjustposition_isbase = false;
            KAboutPluginDialog::adjustPosition(param1);
        } else if (kaboutplugindialog_adjustposition_callback != nullptr) {
            QWidget* cbval1 = param1;

            kaboutplugindialog_adjustposition_callback(this, cbval1);
        } else {
            KAboutPluginDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kaboutplugindialog_updatemicrofocus_isbase) {
            kaboutplugindialog_updatemicrofocus_isbase = false;
            KAboutPluginDialog::updateMicroFocus();
        } else if (kaboutplugindialog_updatemicrofocus_callback != nullptr) {
            kaboutplugindialog_updatemicrofocus_callback();
        } else {
            KAboutPluginDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kaboutplugindialog_create_isbase) {
            kaboutplugindialog_create_isbase = false;
            KAboutPluginDialog::create();
        } else if (kaboutplugindialog_create_callback != nullptr) {
            kaboutplugindialog_create_callback();
        } else {
            KAboutPluginDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kaboutplugindialog_destroy_isbase) {
            kaboutplugindialog_destroy_isbase = false;
            KAboutPluginDialog::destroy();
        } else if (kaboutplugindialog_destroy_callback != nullptr) {
            kaboutplugindialog_destroy_callback();
        } else {
            KAboutPluginDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kaboutplugindialog_focusnextchild_isbase) {
            kaboutplugindialog_focusnextchild_isbase = false;
            return KAboutPluginDialog::focusNextChild();
        } else if (kaboutplugindialog_focusnextchild_callback != nullptr) {
            bool callback_ret = kaboutplugindialog_focusnextchild_callback();
            return callback_ret;
        } else {
            return KAboutPluginDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kaboutplugindialog_focuspreviouschild_isbase) {
            kaboutplugindialog_focuspreviouschild_isbase = false;
            return KAboutPluginDialog::focusPreviousChild();
        } else if (kaboutplugindialog_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kaboutplugindialog_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KAboutPluginDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kaboutplugindialog_sender_isbase) {
            kaboutplugindialog_sender_isbase = false;
            return KAboutPluginDialog::sender();
        } else if (kaboutplugindialog_sender_callback != nullptr) {
            QObject* callback_ret = kaboutplugindialog_sender_callback();
            return callback_ret;
        } else {
            return KAboutPluginDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kaboutplugindialog_sendersignalindex_isbase) {
            kaboutplugindialog_sendersignalindex_isbase = false;
            return KAboutPluginDialog::senderSignalIndex();
        } else if (kaboutplugindialog_sendersignalindex_callback != nullptr) {
            int callback_ret = kaboutplugindialog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KAboutPluginDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kaboutplugindialog_receivers_isbase) {
            kaboutplugindialog_receivers_isbase = false;
            return KAboutPluginDialog::receivers(signal);
        } else if (kaboutplugindialog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kaboutplugindialog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KAboutPluginDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kaboutplugindialog_issignalconnected_isbase) {
            kaboutplugindialog_issignalconnected_isbase = false;
            return KAboutPluginDialog::isSignalConnected(signal);
        } else if (kaboutplugindialog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kaboutplugindialog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAboutPluginDialog::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kaboutplugindialog_getdecodedmetricf_isbase) {
            kaboutplugindialog_getdecodedmetricf_isbase = false;
            return KAboutPluginDialog::getDecodedMetricF(metricA, metricB);
        } else if (kaboutplugindialog_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kaboutplugindialog_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KAboutPluginDialog::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KAboutPluginDialog_KeyPressEvent(KAboutPluginDialog* self, QKeyEvent* param1);
    friend void KAboutPluginDialog_QBaseKeyPressEvent(KAboutPluginDialog* self, QKeyEvent* param1);
    friend void KAboutPluginDialog_CloseEvent(KAboutPluginDialog* self, QCloseEvent* param1);
    friend void KAboutPluginDialog_QBaseCloseEvent(KAboutPluginDialog* self, QCloseEvent* param1);
    friend void KAboutPluginDialog_ShowEvent(KAboutPluginDialog* self, QShowEvent* param1);
    friend void KAboutPluginDialog_QBaseShowEvent(KAboutPluginDialog* self, QShowEvent* param1);
    friend void KAboutPluginDialog_ResizeEvent(KAboutPluginDialog* self, QResizeEvent* param1);
    friend void KAboutPluginDialog_QBaseResizeEvent(KAboutPluginDialog* self, QResizeEvent* param1);
    friend void KAboutPluginDialog_ContextMenuEvent(KAboutPluginDialog* self, QContextMenuEvent* param1);
    friend void KAboutPluginDialog_QBaseContextMenuEvent(KAboutPluginDialog* self, QContextMenuEvent* param1);
    friend bool KAboutPluginDialog_EventFilter(KAboutPluginDialog* self, QObject* param1, QEvent* param2);
    friend bool KAboutPluginDialog_QBaseEventFilter(KAboutPluginDialog* self, QObject* param1, QEvent* param2);
    friend bool KAboutPluginDialog_Event(KAboutPluginDialog* self, QEvent* event);
    friend bool KAboutPluginDialog_QBaseEvent(KAboutPluginDialog* self, QEvent* event);
    friend void KAboutPluginDialog_MousePressEvent(KAboutPluginDialog* self, QMouseEvent* event);
    friend void KAboutPluginDialog_QBaseMousePressEvent(KAboutPluginDialog* self, QMouseEvent* event);
    friend void KAboutPluginDialog_MouseReleaseEvent(KAboutPluginDialog* self, QMouseEvent* event);
    friend void KAboutPluginDialog_QBaseMouseReleaseEvent(KAboutPluginDialog* self, QMouseEvent* event);
    friend void KAboutPluginDialog_MouseDoubleClickEvent(KAboutPluginDialog* self, QMouseEvent* event);
    friend void KAboutPluginDialog_QBaseMouseDoubleClickEvent(KAboutPluginDialog* self, QMouseEvent* event);
    friend void KAboutPluginDialog_MouseMoveEvent(KAboutPluginDialog* self, QMouseEvent* event);
    friend void KAboutPluginDialog_QBaseMouseMoveEvent(KAboutPluginDialog* self, QMouseEvent* event);
    friend void KAboutPluginDialog_WheelEvent(KAboutPluginDialog* self, QWheelEvent* event);
    friend void KAboutPluginDialog_QBaseWheelEvent(KAboutPluginDialog* self, QWheelEvent* event);
    friend void KAboutPluginDialog_KeyReleaseEvent(KAboutPluginDialog* self, QKeyEvent* event);
    friend void KAboutPluginDialog_QBaseKeyReleaseEvent(KAboutPluginDialog* self, QKeyEvent* event);
    friend void KAboutPluginDialog_FocusInEvent(KAboutPluginDialog* self, QFocusEvent* event);
    friend void KAboutPluginDialog_QBaseFocusInEvent(KAboutPluginDialog* self, QFocusEvent* event);
    friend void KAboutPluginDialog_FocusOutEvent(KAboutPluginDialog* self, QFocusEvent* event);
    friend void KAboutPluginDialog_QBaseFocusOutEvent(KAboutPluginDialog* self, QFocusEvent* event);
    friend void KAboutPluginDialog_EnterEvent(KAboutPluginDialog* self, QEnterEvent* event);
    friend void KAboutPluginDialog_QBaseEnterEvent(KAboutPluginDialog* self, QEnterEvent* event);
    friend void KAboutPluginDialog_LeaveEvent(KAboutPluginDialog* self, QEvent* event);
    friend void KAboutPluginDialog_QBaseLeaveEvent(KAboutPluginDialog* self, QEvent* event);
    friend void KAboutPluginDialog_PaintEvent(KAboutPluginDialog* self, QPaintEvent* event);
    friend void KAboutPluginDialog_QBasePaintEvent(KAboutPluginDialog* self, QPaintEvent* event);
    friend void KAboutPluginDialog_MoveEvent(KAboutPluginDialog* self, QMoveEvent* event);
    friend void KAboutPluginDialog_QBaseMoveEvent(KAboutPluginDialog* self, QMoveEvent* event);
    friend void KAboutPluginDialog_TabletEvent(KAboutPluginDialog* self, QTabletEvent* event);
    friend void KAboutPluginDialog_QBaseTabletEvent(KAboutPluginDialog* self, QTabletEvent* event);
    friend void KAboutPluginDialog_ActionEvent(KAboutPluginDialog* self, QActionEvent* event);
    friend void KAboutPluginDialog_QBaseActionEvent(KAboutPluginDialog* self, QActionEvent* event);
    friend void KAboutPluginDialog_DragEnterEvent(KAboutPluginDialog* self, QDragEnterEvent* event);
    friend void KAboutPluginDialog_QBaseDragEnterEvent(KAboutPluginDialog* self, QDragEnterEvent* event);
    friend void KAboutPluginDialog_DragMoveEvent(KAboutPluginDialog* self, QDragMoveEvent* event);
    friend void KAboutPluginDialog_QBaseDragMoveEvent(KAboutPluginDialog* self, QDragMoveEvent* event);
    friend void KAboutPluginDialog_DragLeaveEvent(KAboutPluginDialog* self, QDragLeaveEvent* event);
    friend void KAboutPluginDialog_QBaseDragLeaveEvent(KAboutPluginDialog* self, QDragLeaveEvent* event);
    friend void KAboutPluginDialog_DropEvent(KAboutPluginDialog* self, QDropEvent* event);
    friend void KAboutPluginDialog_QBaseDropEvent(KAboutPluginDialog* self, QDropEvent* event);
    friend void KAboutPluginDialog_HideEvent(KAboutPluginDialog* self, QHideEvent* event);
    friend void KAboutPluginDialog_QBaseHideEvent(KAboutPluginDialog* self, QHideEvent* event);
    friend bool KAboutPluginDialog_NativeEvent(KAboutPluginDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KAboutPluginDialog_QBaseNativeEvent(KAboutPluginDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KAboutPluginDialog_ChangeEvent(KAboutPluginDialog* self, QEvent* param1);
    friend void KAboutPluginDialog_QBaseChangeEvent(KAboutPluginDialog* self, QEvent* param1);
    friend int KAboutPluginDialog_Metric(const KAboutPluginDialog* self, int param1);
    friend int KAboutPluginDialog_QBaseMetric(const KAboutPluginDialog* self, int param1);
    friend void KAboutPluginDialog_InitPainter(const KAboutPluginDialog* self, QPainter* painter);
    friend void KAboutPluginDialog_QBaseInitPainter(const KAboutPluginDialog* self, QPainter* painter);
    friend QPaintDevice* KAboutPluginDialog_Redirected(const KAboutPluginDialog* self, QPoint* offset);
    friend QPaintDevice* KAboutPluginDialog_QBaseRedirected(const KAboutPluginDialog* self, QPoint* offset);
    friend QPainter* KAboutPluginDialog_SharedPainter(const KAboutPluginDialog* self);
    friend QPainter* KAboutPluginDialog_QBaseSharedPainter(const KAboutPluginDialog* self);
    friend void KAboutPluginDialog_InputMethodEvent(KAboutPluginDialog* self, QInputMethodEvent* param1);
    friend void KAboutPluginDialog_QBaseInputMethodEvent(KAboutPluginDialog* self, QInputMethodEvent* param1);
    friend bool KAboutPluginDialog_FocusNextPrevChild(KAboutPluginDialog* self, bool next);
    friend bool KAboutPluginDialog_QBaseFocusNextPrevChild(KAboutPluginDialog* self, bool next);
    friend void KAboutPluginDialog_TimerEvent(KAboutPluginDialog* self, QTimerEvent* event);
    friend void KAboutPluginDialog_QBaseTimerEvent(KAboutPluginDialog* self, QTimerEvent* event);
    friend void KAboutPluginDialog_ChildEvent(KAboutPluginDialog* self, QChildEvent* event);
    friend void KAboutPluginDialog_QBaseChildEvent(KAboutPluginDialog* self, QChildEvent* event);
    friend void KAboutPluginDialog_CustomEvent(KAboutPluginDialog* self, QEvent* event);
    friend void KAboutPluginDialog_QBaseCustomEvent(KAboutPluginDialog* self, QEvent* event);
    friend void KAboutPluginDialog_ConnectNotify(KAboutPluginDialog* self, const QMetaMethod* signal);
    friend void KAboutPluginDialog_QBaseConnectNotify(KAboutPluginDialog* self, const QMetaMethod* signal);
    friend void KAboutPluginDialog_DisconnectNotify(KAboutPluginDialog* self, const QMetaMethod* signal);
    friend void KAboutPluginDialog_QBaseDisconnectNotify(KAboutPluginDialog* self, const QMetaMethod* signal);
    friend void KAboutPluginDialog_AdjustPosition(KAboutPluginDialog* self, QWidget* param1);
    friend void KAboutPluginDialog_QBaseAdjustPosition(KAboutPluginDialog* self, QWidget* param1);
    friend void KAboutPluginDialog_UpdateMicroFocus(KAboutPluginDialog* self);
    friend void KAboutPluginDialog_QBaseUpdateMicroFocus(KAboutPluginDialog* self);
    friend void KAboutPluginDialog_Create(KAboutPluginDialog* self);
    friend void KAboutPluginDialog_QBaseCreate(KAboutPluginDialog* self);
    friend void KAboutPluginDialog_Destroy(KAboutPluginDialog* self);
    friend void KAboutPluginDialog_QBaseDestroy(KAboutPluginDialog* self);
    friend bool KAboutPluginDialog_FocusNextChild(KAboutPluginDialog* self);
    friend bool KAboutPluginDialog_QBaseFocusNextChild(KAboutPluginDialog* self);
    friend bool KAboutPluginDialog_FocusPreviousChild(KAboutPluginDialog* self);
    friend bool KAboutPluginDialog_QBaseFocusPreviousChild(KAboutPluginDialog* self);
    friend QObject* KAboutPluginDialog_Sender(const KAboutPluginDialog* self);
    friend QObject* KAboutPluginDialog_QBaseSender(const KAboutPluginDialog* self);
    friend int KAboutPluginDialog_SenderSignalIndex(const KAboutPluginDialog* self);
    friend int KAboutPluginDialog_QBaseSenderSignalIndex(const KAboutPluginDialog* self);
    friend int KAboutPluginDialog_Receivers(const KAboutPluginDialog* self, const char* signal);
    friend int KAboutPluginDialog_QBaseReceivers(const KAboutPluginDialog* self, const char* signal);
    friend bool KAboutPluginDialog_IsSignalConnected(const KAboutPluginDialog* self, const QMetaMethod* signal);
    friend bool KAboutPluginDialog_QBaseIsSignalConnected(const KAboutPluginDialog* self, const QMetaMethod* signal);
    friend double KAboutPluginDialog_GetDecodedMetricF(const KAboutPluginDialog* self, int metricA, int metricB);
    friend double KAboutPluginDialog_QBaseGetDecodedMetricF(const KAboutPluginDialog* self, int metricA, int metricB);
};

#endif
