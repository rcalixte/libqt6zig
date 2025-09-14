#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKURLREQUESTER_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKURLREQUESTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KUrlRequester so that we can call protected methods
class VirtualKUrlRequester final : public KUrlRequester {

  public:
    // Virtual class boolean flag
    bool isVirtualKUrlRequester = true;

    // Virtual class public types (including callbacks)
    using KUrlRequester_Metacall_Callback = int (*)(KUrlRequester*, int, int, void**);
    using KUrlRequester_FileDialog_Callback = QFileDialog* (*)();
    using KUrlRequester_ChangeEvent_Callback = void (*)(KUrlRequester*, QEvent*);
    using KUrlRequester_EventFilter_Callback = bool (*)(KUrlRequester*, QObject*, QEvent*);
    using KUrlRequester_DevType_Callback = int (*)();
    using KUrlRequester_SetVisible_Callback = void (*)(KUrlRequester*, bool);
    using KUrlRequester_SizeHint_Callback = QSize* (*)();
    using KUrlRequester_MinimumSizeHint_Callback = QSize* (*)();
    using KUrlRequester_HeightForWidth_Callback = int (*)(const KUrlRequester*, int);
    using KUrlRequester_HasHeightForWidth_Callback = bool (*)();
    using KUrlRequester_PaintEngine_Callback = QPaintEngine* (*)();
    using KUrlRequester_Event_Callback = bool (*)(KUrlRequester*, QEvent*);
    using KUrlRequester_MousePressEvent_Callback = void (*)(KUrlRequester*, QMouseEvent*);
    using KUrlRequester_MouseReleaseEvent_Callback = void (*)(KUrlRequester*, QMouseEvent*);
    using KUrlRequester_MouseDoubleClickEvent_Callback = void (*)(KUrlRequester*, QMouseEvent*);
    using KUrlRequester_MouseMoveEvent_Callback = void (*)(KUrlRequester*, QMouseEvent*);
    using KUrlRequester_WheelEvent_Callback = void (*)(KUrlRequester*, QWheelEvent*);
    using KUrlRequester_KeyPressEvent_Callback = void (*)(KUrlRequester*, QKeyEvent*);
    using KUrlRequester_KeyReleaseEvent_Callback = void (*)(KUrlRequester*, QKeyEvent*);
    using KUrlRequester_FocusInEvent_Callback = void (*)(KUrlRequester*, QFocusEvent*);
    using KUrlRequester_FocusOutEvent_Callback = void (*)(KUrlRequester*, QFocusEvent*);
    using KUrlRequester_EnterEvent_Callback = void (*)(KUrlRequester*, QEnterEvent*);
    using KUrlRequester_LeaveEvent_Callback = void (*)(KUrlRequester*, QEvent*);
    using KUrlRequester_PaintEvent_Callback = void (*)(KUrlRequester*, QPaintEvent*);
    using KUrlRequester_MoveEvent_Callback = void (*)(KUrlRequester*, QMoveEvent*);
    using KUrlRequester_ResizeEvent_Callback = void (*)(KUrlRequester*, QResizeEvent*);
    using KUrlRequester_CloseEvent_Callback = void (*)(KUrlRequester*, QCloseEvent*);
    using KUrlRequester_ContextMenuEvent_Callback = void (*)(KUrlRequester*, QContextMenuEvent*);
    using KUrlRequester_TabletEvent_Callback = void (*)(KUrlRequester*, QTabletEvent*);
    using KUrlRequester_ActionEvent_Callback = void (*)(KUrlRequester*, QActionEvent*);
    using KUrlRequester_DragEnterEvent_Callback = void (*)(KUrlRequester*, QDragEnterEvent*);
    using KUrlRequester_DragMoveEvent_Callback = void (*)(KUrlRequester*, QDragMoveEvent*);
    using KUrlRequester_DragLeaveEvent_Callback = void (*)(KUrlRequester*, QDragLeaveEvent*);
    using KUrlRequester_DropEvent_Callback = void (*)(KUrlRequester*, QDropEvent*);
    using KUrlRequester_ShowEvent_Callback = void (*)(KUrlRequester*, QShowEvent*);
    using KUrlRequester_HideEvent_Callback = void (*)(KUrlRequester*, QHideEvent*);
    using KUrlRequester_NativeEvent_Callback = bool (*)(KUrlRequester*, libqt_string, void*, intptr_t*);
    using KUrlRequester_Metric_Callback = int (*)(const KUrlRequester*, int);
    using KUrlRequester_InitPainter_Callback = void (*)(const KUrlRequester*, QPainter*);
    using KUrlRequester_Redirected_Callback = QPaintDevice* (*)(const KUrlRequester*, QPoint*);
    using KUrlRequester_SharedPainter_Callback = QPainter* (*)();
    using KUrlRequester_InputMethodEvent_Callback = void (*)(KUrlRequester*, QInputMethodEvent*);
    using KUrlRequester_InputMethodQuery_Callback = QVariant* (*)(const KUrlRequester*, int);
    using KUrlRequester_FocusNextPrevChild_Callback = bool (*)(KUrlRequester*, bool);
    using KUrlRequester_TimerEvent_Callback = void (*)(KUrlRequester*, QTimerEvent*);
    using KUrlRequester_ChildEvent_Callback = void (*)(KUrlRequester*, QChildEvent*);
    using KUrlRequester_CustomEvent_Callback = void (*)(KUrlRequester*, QEvent*);
    using KUrlRequester_ConnectNotify_Callback = void (*)(KUrlRequester*, QMetaMethod*);
    using KUrlRequester_DisconnectNotify_Callback = void (*)(KUrlRequester*, QMetaMethod*);
    using KUrlRequester_UpdateMicroFocus_Callback = void (*)();
    using KUrlRequester_Create_Callback = void (*)();
    using KUrlRequester_Destroy_Callback = void (*)();
    using KUrlRequester_FocusNextChild_Callback = bool (*)();
    using KUrlRequester_FocusPreviousChild_Callback = bool (*)();
    using KUrlRequester_Sender_Callback = QObject* (*)();
    using KUrlRequester_SenderSignalIndex_Callback = int (*)();
    using KUrlRequester_Receivers_Callback = int (*)(const KUrlRequester*, const char*);
    using KUrlRequester_IsSignalConnected_Callback = bool (*)(const KUrlRequester*, QMetaMethod*);
    using KUrlRequester_GetDecodedMetricF_Callback = double (*)(const KUrlRequester*, int, int);

  protected:
    // Instance callback storage
    KUrlRequester_Metacall_Callback kurlrequester_metacall_callback = nullptr;
    KUrlRequester_FileDialog_Callback kurlrequester_filedialog_callback = nullptr;
    KUrlRequester_ChangeEvent_Callback kurlrequester_changeevent_callback = nullptr;
    KUrlRequester_EventFilter_Callback kurlrequester_eventfilter_callback = nullptr;
    KUrlRequester_DevType_Callback kurlrequester_devtype_callback = nullptr;
    KUrlRequester_SetVisible_Callback kurlrequester_setvisible_callback = nullptr;
    KUrlRequester_SizeHint_Callback kurlrequester_sizehint_callback = nullptr;
    KUrlRequester_MinimumSizeHint_Callback kurlrequester_minimumsizehint_callback = nullptr;
    KUrlRequester_HeightForWidth_Callback kurlrequester_heightforwidth_callback = nullptr;
    KUrlRequester_HasHeightForWidth_Callback kurlrequester_hasheightforwidth_callback = nullptr;
    KUrlRequester_PaintEngine_Callback kurlrequester_paintengine_callback = nullptr;
    KUrlRequester_Event_Callback kurlrequester_event_callback = nullptr;
    KUrlRequester_MousePressEvent_Callback kurlrequester_mousepressevent_callback = nullptr;
    KUrlRequester_MouseReleaseEvent_Callback kurlrequester_mousereleaseevent_callback = nullptr;
    KUrlRequester_MouseDoubleClickEvent_Callback kurlrequester_mousedoubleclickevent_callback = nullptr;
    KUrlRequester_MouseMoveEvent_Callback kurlrequester_mousemoveevent_callback = nullptr;
    KUrlRequester_WheelEvent_Callback kurlrequester_wheelevent_callback = nullptr;
    KUrlRequester_KeyPressEvent_Callback kurlrequester_keypressevent_callback = nullptr;
    KUrlRequester_KeyReleaseEvent_Callback kurlrequester_keyreleaseevent_callback = nullptr;
    KUrlRequester_FocusInEvent_Callback kurlrequester_focusinevent_callback = nullptr;
    KUrlRequester_FocusOutEvent_Callback kurlrequester_focusoutevent_callback = nullptr;
    KUrlRequester_EnterEvent_Callback kurlrequester_enterevent_callback = nullptr;
    KUrlRequester_LeaveEvent_Callback kurlrequester_leaveevent_callback = nullptr;
    KUrlRequester_PaintEvent_Callback kurlrequester_paintevent_callback = nullptr;
    KUrlRequester_MoveEvent_Callback kurlrequester_moveevent_callback = nullptr;
    KUrlRequester_ResizeEvent_Callback kurlrequester_resizeevent_callback = nullptr;
    KUrlRequester_CloseEvent_Callback kurlrequester_closeevent_callback = nullptr;
    KUrlRequester_ContextMenuEvent_Callback kurlrequester_contextmenuevent_callback = nullptr;
    KUrlRequester_TabletEvent_Callback kurlrequester_tabletevent_callback = nullptr;
    KUrlRequester_ActionEvent_Callback kurlrequester_actionevent_callback = nullptr;
    KUrlRequester_DragEnterEvent_Callback kurlrequester_dragenterevent_callback = nullptr;
    KUrlRequester_DragMoveEvent_Callback kurlrequester_dragmoveevent_callback = nullptr;
    KUrlRequester_DragLeaveEvent_Callback kurlrequester_dragleaveevent_callback = nullptr;
    KUrlRequester_DropEvent_Callback kurlrequester_dropevent_callback = nullptr;
    KUrlRequester_ShowEvent_Callback kurlrequester_showevent_callback = nullptr;
    KUrlRequester_HideEvent_Callback kurlrequester_hideevent_callback = nullptr;
    KUrlRequester_NativeEvent_Callback kurlrequester_nativeevent_callback = nullptr;
    KUrlRequester_Metric_Callback kurlrequester_metric_callback = nullptr;
    KUrlRequester_InitPainter_Callback kurlrequester_initpainter_callback = nullptr;
    KUrlRequester_Redirected_Callback kurlrequester_redirected_callback = nullptr;
    KUrlRequester_SharedPainter_Callback kurlrequester_sharedpainter_callback = nullptr;
    KUrlRequester_InputMethodEvent_Callback kurlrequester_inputmethodevent_callback = nullptr;
    KUrlRequester_InputMethodQuery_Callback kurlrequester_inputmethodquery_callback = nullptr;
    KUrlRequester_FocusNextPrevChild_Callback kurlrequester_focusnextprevchild_callback = nullptr;
    KUrlRequester_TimerEvent_Callback kurlrequester_timerevent_callback = nullptr;
    KUrlRequester_ChildEvent_Callback kurlrequester_childevent_callback = nullptr;
    KUrlRequester_CustomEvent_Callback kurlrequester_customevent_callback = nullptr;
    KUrlRequester_ConnectNotify_Callback kurlrequester_connectnotify_callback = nullptr;
    KUrlRequester_DisconnectNotify_Callback kurlrequester_disconnectnotify_callback = nullptr;
    KUrlRequester_UpdateMicroFocus_Callback kurlrequester_updatemicrofocus_callback = nullptr;
    KUrlRequester_Create_Callback kurlrequester_create_callback = nullptr;
    KUrlRequester_Destroy_Callback kurlrequester_destroy_callback = nullptr;
    KUrlRequester_FocusNextChild_Callback kurlrequester_focusnextchild_callback = nullptr;
    KUrlRequester_FocusPreviousChild_Callback kurlrequester_focuspreviouschild_callback = nullptr;
    KUrlRequester_Sender_Callback kurlrequester_sender_callback = nullptr;
    KUrlRequester_SenderSignalIndex_Callback kurlrequester_sendersignalindex_callback = nullptr;
    KUrlRequester_Receivers_Callback kurlrequester_receivers_callback = nullptr;
    KUrlRequester_IsSignalConnected_Callback kurlrequester_issignalconnected_callback = nullptr;
    KUrlRequester_GetDecodedMetricF_Callback kurlrequester_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kurlrequester_metacall_isbase = false;
    mutable bool kurlrequester_filedialog_isbase = false;
    mutable bool kurlrequester_changeevent_isbase = false;
    mutable bool kurlrequester_eventfilter_isbase = false;
    mutable bool kurlrequester_devtype_isbase = false;
    mutable bool kurlrequester_setvisible_isbase = false;
    mutable bool kurlrequester_sizehint_isbase = false;
    mutable bool kurlrequester_minimumsizehint_isbase = false;
    mutable bool kurlrequester_heightforwidth_isbase = false;
    mutable bool kurlrequester_hasheightforwidth_isbase = false;
    mutable bool kurlrequester_paintengine_isbase = false;
    mutable bool kurlrequester_event_isbase = false;
    mutable bool kurlrequester_mousepressevent_isbase = false;
    mutable bool kurlrequester_mousereleaseevent_isbase = false;
    mutable bool kurlrequester_mousedoubleclickevent_isbase = false;
    mutable bool kurlrequester_mousemoveevent_isbase = false;
    mutable bool kurlrequester_wheelevent_isbase = false;
    mutable bool kurlrequester_keypressevent_isbase = false;
    mutable bool kurlrequester_keyreleaseevent_isbase = false;
    mutable bool kurlrequester_focusinevent_isbase = false;
    mutable bool kurlrequester_focusoutevent_isbase = false;
    mutable bool kurlrequester_enterevent_isbase = false;
    mutable bool kurlrequester_leaveevent_isbase = false;
    mutable bool kurlrequester_paintevent_isbase = false;
    mutable bool kurlrequester_moveevent_isbase = false;
    mutable bool kurlrequester_resizeevent_isbase = false;
    mutable bool kurlrequester_closeevent_isbase = false;
    mutable bool kurlrequester_contextmenuevent_isbase = false;
    mutable bool kurlrequester_tabletevent_isbase = false;
    mutable bool kurlrequester_actionevent_isbase = false;
    mutable bool kurlrequester_dragenterevent_isbase = false;
    mutable bool kurlrequester_dragmoveevent_isbase = false;
    mutable bool kurlrequester_dragleaveevent_isbase = false;
    mutable bool kurlrequester_dropevent_isbase = false;
    mutable bool kurlrequester_showevent_isbase = false;
    mutable bool kurlrequester_hideevent_isbase = false;
    mutable bool kurlrequester_nativeevent_isbase = false;
    mutable bool kurlrequester_metric_isbase = false;
    mutable bool kurlrequester_initpainter_isbase = false;
    mutable bool kurlrequester_redirected_isbase = false;
    mutable bool kurlrequester_sharedpainter_isbase = false;
    mutable bool kurlrequester_inputmethodevent_isbase = false;
    mutable bool kurlrequester_inputmethodquery_isbase = false;
    mutable bool kurlrequester_focusnextprevchild_isbase = false;
    mutable bool kurlrequester_timerevent_isbase = false;
    mutable bool kurlrequester_childevent_isbase = false;
    mutable bool kurlrequester_customevent_isbase = false;
    mutable bool kurlrequester_connectnotify_isbase = false;
    mutable bool kurlrequester_disconnectnotify_isbase = false;
    mutable bool kurlrequester_updatemicrofocus_isbase = false;
    mutable bool kurlrequester_create_isbase = false;
    mutable bool kurlrequester_destroy_isbase = false;
    mutable bool kurlrequester_focusnextchild_isbase = false;
    mutable bool kurlrequester_focuspreviouschild_isbase = false;
    mutable bool kurlrequester_sender_isbase = false;
    mutable bool kurlrequester_sendersignalindex_isbase = false;
    mutable bool kurlrequester_receivers_isbase = false;
    mutable bool kurlrequester_issignalconnected_isbase = false;
    mutable bool kurlrequester_getdecodedmetricf_isbase = false;

  public:
    VirtualKUrlRequester(QWidget* parent) : KUrlRequester(parent) {};
    VirtualKUrlRequester() : KUrlRequester() {};
    VirtualKUrlRequester(const QUrl& url) : KUrlRequester(url) {};
    VirtualKUrlRequester(QWidget* editWidget, QWidget* parent) : KUrlRequester(editWidget, parent) {};
    VirtualKUrlRequester(const QUrl& url, QWidget* parent) : KUrlRequester(url, parent) {};

    ~VirtualKUrlRequester() {
        kurlrequester_metacall_callback = nullptr;
        kurlrequester_filedialog_callback = nullptr;
        kurlrequester_changeevent_callback = nullptr;
        kurlrequester_eventfilter_callback = nullptr;
        kurlrequester_devtype_callback = nullptr;
        kurlrequester_setvisible_callback = nullptr;
        kurlrequester_sizehint_callback = nullptr;
        kurlrequester_minimumsizehint_callback = nullptr;
        kurlrequester_heightforwidth_callback = nullptr;
        kurlrequester_hasheightforwidth_callback = nullptr;
        kurlrequester_paintengine_callback = nullptr;
        kurlrequester_event_callback = nullptr;
        kurlrequester_mousepressevent_callback = nullptr;
        kurlrequester_mousereleaseevent_callback = nullptr;
        kurlrequester_mousedoubleclickevent_callback = nullptr;
        kurlrequester_mousemoveevent_callback = nullptr;
        kurlrequester_wheelevent_callback = nullptr;
        kurlrequester_keypressevent_callback = nullptr;
        kurlrequester_keyreleaseevent_callback = nullptr;
        kurlrequester_focusinevent_callback = nullptr;
        kurlrequester_focusoutevent_callback = nullptr;
        kurlrequester_enterevent_callback = nullptr;
        kurlrequester_leaveevent_callback = nullptr;
        kurlrequester_paintevent_callback = nullptr;
        kurlrequester_moveevent_callback = nullptr;
        kurlrequester_resizeevent_callback = nullptr;
        kurlrequester_closeevent_callback = nullptr;
        kurlrequester_contextmenuevent_callback = nullptr;
        kurlrequester_tabletevent_callback = nullptr;
        kurlrequester_actionevent_callback = nullptr;
        kurlrequester_dragenterevent_callback = nullptr;
        kurlrequester_dragmoveevent_callback = nullptr;
        kurlrequester_dragleaveevent_callback = nullptr;
        kurlrequester_dropevent_callback = nullptr;
        kurlrequester_showevent_callback = nullptr;
        kurlrequester_hideevent_callback = nullptr;
        kurlrequester_nativeevent_callback = nullptr;
        kurlrequester_metric_callback = nullptr;
        kurlrequester_initpainter_callback = nullptr;
        kurlrequester_redirected_callback = nullptr;
        kurlrequester_sharedpainter_callback = nullptr;
        kurlrequester_inputmethodevent_callback = nullptr;
        kurlrequester_inputmethodquery_callback = nullptr;
        kurlrequester_focusnextprevchild_callback = nullptr;
        kurlrequester_timerevent_callback = nullptr;
        kurlrequester_childevent_callback = nullptr;
        kurlrequester_customevent_callback = nullptr;
        kurlrequester_connectnotify_callback = nullptr;
        kurlrequester_disconnectnotify_callback = nullptr;
        kurlrequester_updatemicrofocus_callback = nullptr;
        kurlrequester_create_callback = nullptr;
        kurlrequester_destroy_callback = nullptr;
        kurlrequester_focusnextchild_callback = nullptr;
        kurlrequester_focuspreviouschild_callback = nullptr;
        kurlrequester_sender_callback = nullptr;
        kurlrequester_sendersignalindex_callback = nullptr;
        kurlrequester_receivers_callback = nullptr;
        kurlrequester_issignalconnected_callback = nullptr;
        kurlrequester_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKUrlRequester_Metacall_Callback(KUrlRequester_Metacall_Callback cb) { kurlrequester_metacall_callback = cb; }
    inline void setKUrlRequester_FileDialog_Callback(KUrlRequester_FileDialog_Callback cb) { kurlrequester_filedialog_callback = cb; }
    inline void setKUrlRequester_ChangeEvent_Callback(KUrlRequester_ChangeEvent_Callback cb) { kurlrequester_changeevent_callback = cb; }
    inline void setKUrlRequester_EventFilter_Callback(KUrlRequester_EventFilter_Callback cb) { kurlrequester_eventfilter_callback = cb; }
    inline void setKUrlRequester_DevType_Callback(KUrlRequester_DevType_Callback cb) { kurlrequester_devtype_callback = cb; }
    inline void setKUrlRequester_SetVisible_Callback(KUrlRequester_SetVisible_Callback cb) { kurlrequester_setvisible_callback = cb; }
    inline void setKUrlRequester_SizeHint_Callback(KUrlRequester_SizeHint_Callback cb) { kurlrequester_sizehint_callback = cb; }
    inline void setKUrlRequester_MinimumSizeHint_Callback(KUrlRequester_MinimumSizeHint_Callback cb) { kurlrequester_minimumsizehint_callback = cb; }
    inline void setKUrlRequester_HeightForWidth_Callback(KUrlRequester_HeightForWidth_Callback cb) { kurlrequester_heightforwidth_callback = cb; }
    inline void setKUrlRequester_HasHeightForWidth_Callback(KUrlRequester_HasHeightForWidth_Callback cb) { kurlrequester_hasheightforwidth_callback = cb; }
    inline void setKUrlRequester_PaintEngine_Callback(KUrlRequester_PaintEngine_Callback cb) { kurlrequester_paintengine_callback = cb; }
    inline void setKUrlRequester_Event_Callback(KUrlRequester_Event_Callback cb) { kurlrequester_event_callback = cb; }
    inline void setKUrlRequester_MousePressEvent_Callback(KUrlRequester_MousePressEvent_Callback cb) { kurlrequester_mousepressevent_callback = cb; }
    inline void setKUrlRequester_MouseReleaseEvent_Callback(KUrlRequester_MouseReleaseEvent_Callback cb) { kurlrequester_mousereleaseevent_callback = cb; }
    inline void setKUrlRequester_MouseDoubleClickEvent_Callback(KUrlRequester_MouseDoubleClickEvent_Callback cb) { kurlrequester_mousedoubleclickevent_callback = cb; }
    inline void setKUrlRequester_MouseMoveEvent_Callback(KUrlRequester_MouseMoveEvent_Callback cb) { kurlrequester_mousemoveevent_callback = cb; }
    inline void setKUrlRequester_WheelEvent_Callback(KUrlRequester_WheelEvent_Callback cb) { kurlrequester_wheelevent_callback = cb; }
    inline void setKUrlRequester_KeyPressEvent_Callback(KUrlRequester_KeyPressEvent_Callback cb) { kurlrequester_keypressevent_callback = cb; }
    inline void setKUrlRequester_KeyReleaseEvent_Callback(KUrlRequester_KeyReleaseEvent_Callback cb) { kurlrequester_keyreleaseevent_callback = cb; }
    inline void setKUrlRequester_FocusInEvent_Callback(KUrlRequester_FocusInEvent_Callback cb) { kurlrequester_focusinevent_callback = cb; }
    inline void setKUrlRequester_FocusOutEvent_Callback(KUrlRequester_FocusOutEvent_Callback cb) { kurlrequester_focusoutevent_callback = cb; }
    inline void setKUrlRequester_EnterEvent_Callback(KUrlRequester_EnterEvent_Callback cb) { kurlrequester_enterevent_callback = cb; }
    inline void setKUrlRequester_LeaveEvent_Callback(KUrlRequester_LeaveEvent_Callback cb) { kurlrequester_leaveevent_callback = cb; }
    inline void setKUrlRequester_PaintEvent_Callback(KUrlRequester_PaintEvent_Callback cb) { kurlrequester_paintevent_callback = cb; }
    inline void setKUrlRequester_MoveEvent_Callback(KUrlRequester_MoveEvent_Callback cb) { kurlrequester_moveevent_callback = cb; }
    inline void setKUrlRequester_ResizeEvent_Callback(KUrlRequester_ResizeEvent_Callback cb) { kurlrequester_resizeevent_callback = cb; }
    inline void setKUrlRequester_CloseEvent_Callback(KUrlRequester_CloseEvent_Callback cb) { kurlrequester_closeevent_callback = cb; }
    inline void setKUrlRequester_ContextMenuEvent_Callback(KUrlRequester_ContextMenuEvent_Callback cb) { kurlrequester_contextmenuevent_callback = cb; }
    inline void setKUrlRequester_TabletEvent_Callback(KUrlRequester_TabletEvent_Callback cb) { kurlrequester_tabletevent_callback = cb; }
    inline void setKUrlRequester_ActionEvent_Callback(KUrlRequester_ActionEvent_Callback cb) { kurlrequester_actionevent_callback = cb; }
    inline void setKUrlRequester_DragEnterEvent_Callback(KUrlRequester_DragEnterEvent_Callback cb) { kurlrequester_dragenterevent_callback = cb; }
    inline void setKUrlRequester_DragMoveEvent_Callback(KUrlRequester_DragMoveEvent_Callback cb) { kurlrequester_dragmoveevent_callback = cb; }
    inline void setKUrlRequester_DragLeaveEvent_Callback(KUrlRequester_DragLeaveEvent_Callback cb) { kurlrequester_dragleaveevent_callback = cb; }
    inline void setKUrlRequester_DropEvent_Callback(KUrlRequester_DropEvent_Callback cb) { kurlrequester_dropevent_callback = cb; }
    inline void setKUrlRequester_ShowEvent_Callback(KUrlRequester_ShowEvent_Callback cb) { kurlrequester_showevent_callback = cb; }
    inline void setKUrlRequester_HideEvent_Callback(KUrlRequester_HideEvent_Callback cb) { kurlrequester_hideevent_callback = cb; }
    inline void setKUrlRequester_NativeEvent_Callback(KUrlRequester_NativeEvent_Callback cb) { kurlrequester_nativeevent_callback = cb; }
    inline void setKUrlRequester_Metric_Callback(KUrlRequester_Metric_Callback cb) { kurlrequester_metric_callback = cb; }
    inline void setKUrlRequester_InitPainter_Callback(KUrlRequester_InitPainter_Callback cb) { kurlrequester_initpainter_callback = cb; }
    inline void setKUrlRequester_Redirected_Callback(KUrlRequester_Redirected_Callback cb) { kurlrequester_redirected_callback = cb; }
    inline void setKUrlRequester_SharedPainter_Callback(KUrlRequester_SharedPainter_Callback cb) { kurlrequester_sharedpainter_callback = cb; }
    inline void setKUrlRequester_InputMethodEvent_Callback(KUrlRequester_InputMethodEvent_Callback cb) { kurlrequester_inputmethodevent_callback = cb; }
    inline void setKUrlRequester_InputMethodQuery_Callback(KUrlRequester_InputMethodQuery_Callback cb) { kurlrequester_inputmethodquery_callback = cb; }
    inline void setKUrlRequester_FocusNextPrevChild_Callback(KUrlRequester_FocusNextPrevChild_Callback cb) { kurlrequester_focusnextprevchild_callback = cb; }
    inline void setKUrlRequester_TimerEvent_Callback(KUrlRequester_TimerEvent_Callback cb) { kurlrequester_timerevent_callback = cb; }
    inline void setKUrlRequester_ChildEvent_Callback(KUrlRequester_ChildEvent_Callback cb) { kurlrequester_childevent_callback = cb; }
    inline void setKUrlRequester_CustomEvent_Callback(KUrlRequester_CustomEvent_Callback cb) { kurlrequester_customevent_callback = cb; }
    inline void setKUrlRequester_ConnectNotify_Callback(KUrlRequester_ConnectNotify_Callback cb) { kurlrequester_connectnotify_callback = cb; }
    inline void setKUrlRequester_DisconnectNotify_Callback(KUrlRequester_DisconnectNotify_Callback cb) { kurlrequester_disconnectnotify_callback = cb; }
    inline void setKUrlRequester_UpdateMicroFocus_Callback(KUrlRequester_UpdateMicroFocus_Callback cb) { kurlrequester_updatemicrofocus_callback = cb; }
    inline void setKUrlRequester_Create_Callback(KUrlRequester_Create_Callback cb) { kurlrequester_create_callback = cb; }
    inline void setKUrlRequester_Destroy_Callback(KUrlRequester_Destroy_Callback cb) { kurlrequester_destroy_callback = cb; }
    inline void setKUrlRequester_FocusNextChild_Callback(KUrlRequester_FocusNextChild_Callback cb) { kurlrequester_focusnextchild_callback = cb; }
    inline void setKUrlRequester_FocusPreviousChild_Callback(KUrlRequester_FocusPreviousChild_Callback cb) { kurlrequester_focuspreviouschild_callback = cb; }
    inline void setKUrlRequester_Sender_Callback(KUrlRequester_Sender_Callback cb) { kurlrequester_sender_callback = cb; }
    inline void setKUrlRequester_SenderSignalIndex_Callback(KUrlRequester_SenderSignalIndex_Callback cb) { kurlrequester_sendersignalindex_callback = cb; }
    inline void setKUrlRequester_Receivers_Callback(KUrlRequester_Receivers_Callback cb) { kurlrequester_receivers_callback = cb; }
    inline void setKUrlRequester_IsSignalConnected_Callback(KUrlRequester_IsSignalConnected_Callback cb) { kurlrequester_issignalconnected_callback = cb; }
    inline void setKUrlRequester_GetDecodedMetricF_Callback(KUrlRequester_GetDecodedMetricF_Callback cb) { kurlrequester_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKUrlRequester_Metacall_IsBase(bool value) const { kurlrequester_metacall_isbase = value; }
    inline void setKUrlRequester_FileDialog_IsBase(bool value) const { kurlrequester_filedialog_isbase = value; }
    inline void setKUrlRequester_ChangeEvent_IsBase(bool value) const { kurlrequester_changeevent_isbase = value; }
    inline void setKUrlRequester_EventFilter_IsBase(bool value) const { kurlrequester_eventfilter_isbase = value; }
    inline void setKUrlRequester_DevType_IsBase(bool value) const { kurlrequester_devtype_isbase = value; }
    inline void setKUrlRequester_SetVisible_IsBase(bool value) const { kurlrequester_setvisible_isbase = value; }
    inline void setKUrlRequester_SizeHint_IsBase(bool value) const { kurlrequester_sizehint_isbase = value; }
    inline void setKUrlRequester_MinimumSizeHint_IsBase(bool value) const { kurlrequester_minimumsizehint_isbase = value; }
    inline void setKUrlRequester_HeightForWidth_IsBase(bool value) const { kurlrequester_heightforwidth_isbase = value; }
    inline void setKUrlRequester_HasHeightForWidth_IsBase(bool value) const { kurlrequester_hasheightforwidth_isbase = value; }
    inline void setKUrlRequester_PaintEngine_IsBase(bool value) const { kurlrequester_paintengine_isbase = value; }
    inline void setKUrlRequester_Event_IsBase(bool value) const { kurlrequester_event_isbase = value; }
    inline void setKUrlRequester_MousePressEvent_IsBase(bool value) const { kurlrequester_mousepressevent_isbase = value; }
    inline void setKUrlRequester_MouseReleaseEvent_IsBase(bool value) const { kurlrequester_mousereleaseevent_isbase = value; }
    inline void setKUrlRequester_MouseDoubleClickEvent_IsBase(bool value) const { kurlrequester_mousedoubleclickevent_isbase = value; }
    inline void setKUrlRequester_MouseMoveEvent_IsBase(bool value) const { kurlrequester_mousemoveevent_isbase = value; }
    inline void setKUrlRequester_WheelEvent_IsBase(bool value) const { kurlrequester_wheelevent_isbase = value; }
    inline void setKUrlRequester_KeyPressEvent_IsBase(bool value) const { kurlrequester_keypressevent_isbase = value; }
    inline void setKUrlRequester_KeyReleaseEvent_IsBase(bool value) const { kurlrequester_keyreleaseevent_isbase = value; }
    inline void setKUrlRequester_FocusInEvent_IsBase(bool value) const { kurlrequester_focusinevent_isbase = value; }
    inline void setKUrlRequester_FocusOutEvent_IsBase(bool value) const { kurlrequester_focusoutevent_isbase = value; }
    inline void setKUrlRequester_EnterEvent_IsBase(bool value) const { kurlrequester_enterevent_isbase = value; }
    inline void setKUrlRequester_LeaveEvent_IsBase(bool value) const { kurlrequester_leaveevent_isbase = value; }
    inline void setKUrlRequester_PaintEvent_IsBase(bool value) const { kurlrequester_paintevent_isbase = value; }
    inline void setKUrlRequester_MoveEvent_IsBase(bool value) const { kurlrequester_moveevent_isbase = value; }
    inline void setKUrlRequester_ResizeEvent_IsBase(bool value) const { kurlrequester_resizeevent_isbase = value; }
    inline void setKUrlRequester_CloseEvent_IsBase(bool value) const { kurlrequester_closeevent_isbase = value; }
    inline void setKUrlRequester_ContextMenuEvent_IsBase(bool value) const { kurlrequester_contextmenuevent_isbase = value; }
    inline void setKUrlRequester_TabletEvent_IsBase(bool value) const { kurlrequester_tabletevent_isbase = value; }
    inline void setKUrlRequester_ActionEvent_IsBase(bool value) const { kurlrequester_actionevent_isbase = value; }
    inline void setKUrlRequester_DragEnterEvent_IsBase(bool value) const { kurlrequester_dragenterevent_isbase = value; }
    inline void setKUrlRequester_DragMoveEvent_IsBase(bool value) const { kurlrequester_dragmoveevent_isbase = value; }
    inline void setKUrlRequester_DragLeaveEvent_IsBase(bool value) const { kurlrequester_dragleaveevent_isbase = value; }
    inline void setKUrlRequester_DropEvent_IsBase(bool value) const { kurlrequester_dropevent_isbase = value; }
    inline void setKUrlRequester_ShowEvent_IsBase(bool value) const { kurlrequester_showevent_isbase = value; }
    inline void setKUrlRequester_HideEvent_IsBase(bool value) const { kurlrequester_hideevent_isbase = value; }
    inline void setKUrlRequester_NativeEvent_IsBase(bool value) const { kurlrequester_nativeevent_isbase = value; }
    inline void setKUrlRequester_Metric_IsBase(bool value) const { kurlrequester_metric_isbase = value; }
    inline void setKUrlRequester_InitPainter_IsBase(bool value) const { kurlrequester_initpainter_isbase = value; }
    inline void setKUrlRequester_Redirected_IsBase(bool value) const { kurlrequester_redirected_isbase = value; }
    inline void setKUrlRequester_SharedPainter_IsBase(bool value) const { kurlrequester_sharedpainter_isbase = value; }
    inline void setKUrlRequester_InputMethodEvent_IsBase(bool value) const { kurlrequester_inputmethodevent_isbase = value; }
    inline void setKUrlRequester_InputMethodQuery_IsBase(bool value) const { kurlrequester_inputmethodquery_isbase = value; }
    inline void setKUrlRequester_FocusNextPrevChild_IsBase(bool value) const { kurlrequester_focusnextprevchild_isbase = value; }
    inline void setKUrlRequester_TimerEvent_IsBase(bool value) const { kurlrequester_timerevent_isbase = value; }
    inline void setKUrlRequester_ChildEvent_IsBase(bool value) const { kurlrequester_childevent_isbase = value; }
    inline void setKUrlRequester_CustomEvent_IsBase(bool value) const { kurlrequester_customevent_isbase = value; }
    inline void setKUrlRequester_ConnectNotify_IsBase(bool value) const { kurlrequester_connectnotify_isbase = value; }
    inline void setKUrlRequester_DisconnectNotify_IsBase(bool value) const { kurlrequester_disconnectnotify_isbase = value; }
    inline void setKUrlRequester_UpdateMicroFocus_IsBase(bool value) const { kurlrequester_updatemicrofocus_isbase = value; }
    inline void setKUrlRequester_Create_IsBase(bool value) const { kurlrequester_create_isbase = value; }
    inline void setKUrlRequester_Destroy_IsBase(bool value) const { kurlrequester_destroy_isbase = value; }
    inline void setKUrlRequester_FocusNextChild_IsBase(bool value) const { kurlrequester_focusnextchild_isbase = value; }
    inline void setKUrlRequester_FocusPreviousChild_IsBase(bool value) const { kurlrequester_focuspreviouschild_isbase = value; }
    inline void setKUrlRequester_Sender_IsBase(bool value) const { kurlrequester_sender_isbase = value; }
    inline void setKUrlRequester_SenderSignalIndex_IsBase(bool value) const { kurlrequester_sendersignalindex_isbase = value; }
    inline void setKUrlRequester_Receivers_IsBase(bool value) const { kurlrequester_receivers_isbase = value; }
    inline void setKUrlRequester_IsSignalConnected_IsBase(bool value) const { kurlrequester_issignalconnected_isbase = value; }
    inline void setKUrlRequester_GetDecodedMetricF_IsBase(bool value) const { kurlrequester_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kurlrequester_metacall_isbase) {
            kurlrequester_metacall_isbase = false;
            return KUrlRequester::qt_metacall(param1, param2, param3);
        } else if (kurlrequester_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kurlrequester_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KUrlRequester::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFileDialog* fileDialog() const override {
        if (kurlrequester_filedialog_isbase) {
            kurlrequester_filedialog_isbase = false;
            return KUrlRequester::fileDialog();
        } else if (kurlrequester_filedialog_callback != nullptr) {
            QFileDialog* callback_ret = kurlrequester_filedialog_callback();
            return callback_ret;
        } else {
            return KUrlRequester::fileDialog();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kurlrequester_changeevent_isbase) {
            kurlrequester_changeevent_isbase = false;
            KUrlRequester::changeEvent(e);
        } else if (kurlrequester_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            kurlrequester_changeevent_callback(this, cbval1);
        } else {
            KUrlRequester::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* obj, QEvent* ev) override {
        if (kurlrequester_eventfilter_isbase) {
            kurlrequester_eventfilter_isbase = false;
            return KUrlRequester::eventFilter(obj, ev);
        } else if (kurlrequester_eventfilter_callback != nullptr) {
            QObject* cbval1 = obj;
            QEvent* cbval2 = ev;

            bool callback_ret = kurlrequester_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KUrlRequester::eventFilter(obj, ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kurlrequester_devtype_isbase) {
            kurlrequester_devtype_isbase = false;
            return KUrlRequester::devType();
        } else if (kurlrequester_devtype_callback != nullptr) {
            int callback_ret = kurlrequester_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KUrlRequester::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kurlrequester_setvisible_isbase) {
            kurlrequester_setvisible_isbase = false;
            KUrlRequester::setVisible(visible);
        } else if (kurlrequester_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kurlrequester_setvisible_callback(this, cbval1);
        } else {
            KUrlRequester::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kurlrequester_sizehint_isbase) {
            kurlrequester_sizehint_isbase = false;
            return KUrlRequester::sizeHint();
        } else if (kurlrequester_sizehint_callback != nullptr) {
            QSize* callback_ret = kurlrequester_sizehint_callback();
            return *callback_ret;
        } else {
            return KUrlRequester::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kurlrequester_minimumsizehint_isbase) {
            kurlrequester_minimumsizehint_isbase = false;
            return KUrlRequester::minimumSizeHint();
        } else if (kurlrequester_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kurlrequester_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KUrlRequester::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kurlrequester_heightforwidth_isbase) {
            kurlrequester_heightforwidth_isbase = false;
            return KUrlRequester::heightForWidth(param1);
        } else if (kurlrequester_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kurlrequester_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KUrlRequester::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kurlrequester_hasheightforwidth_isbase) {
            kurlrequester_hasheightforwidth_isbase = false;
            return KUrlRequester::hasHeightForWidth();
        } else if (kurlrequester_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kurlrequester_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KUrlRequester::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kurlrequester_paintengine_isbase) {
            kurlrequester_paintengine_isbase = false;
            return KUrlRequester::paintEngine();
        } else if (kurlrequester_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kurlrequester_paintengine_callback();
            return callback_ret;
        } else {
            return KUrlRequester::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kurlrequester_event_isbase) {
            kurlrequester_event_isbase = false;
            return KUrlRequester::event(event);
        } else if (kurlrequester_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kurlrequester_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUrlRequester::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kurlrequester_mousepressevent_isbase) {
            kurlrequester_mousepressevent_isbase = false;
            KUrlRequester::mousePressEvent(event);
        } else if (kurlrequester_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kurlrequester_mousepressevent_callback(this, cbval1);
        } else {
            KUrlRequester::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kurlrequester_mousereleaseevent_isbase) {
            kurlrequester_mousereleaseevent_isbase = false;
            KUrlRequester::mouseReleaseEvent(event);
        } else if (kurlrequester_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kurlrequester_mousereleaseevent_callback(this, cbval1);
        } else {
            KUrlRequester::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kurlrequester_mousedoubleclickevent_isbase) {
            kurlrequester_mousedoubleclickevent_isbase = false;
            KUrlRequester::mouseDoubleClickEvent(event);
        } else if (kurlrequester_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kurlrequester_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KUrlRequester::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kurlrequester_mousemoveevent_isbase) {
            kurlrequester_mousemoveevent_isbase = false;
            KUrlRequester::mouseMoveEvent(event);
        } else if (kurlrequester_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kurlrequester_mousemoveevent_callback(this, cbval1);
        } else {
            KUrlRequester::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kurlrequester_wheelevent_isbase) {
            kurlrequester_wheelevent_isbase = false;
            KUrlRequester::wheelEvent(event);
        } else if (kurlrequester_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kurlrequester_wheelevent_callback(this, cbval1);
        } else {
            KUrlRequester::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kurlrequester_keypressevent_isbase) {
            kurlrequester_keypressevent_isbase = false;
            KUrlRequester::keyPressEvent(event);
        } else if (kurlrequester_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kurlrequester_keypressevent_callback(this, cbval1);
        } else {
            KUrlRequester::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kurlrequester_keyreleaseevent_isbase) {
            kurlrequester_keyreleaseevent_isbase = false;
            KUrlRequester::keyReleaseEvent(event);
        } else if (kurlrequester_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kurlrequester_keyreleaseevent_callback(this, cbval1);
        } else {
            KUrlRequester::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kurlrequester_focusinevent_isbase) {
            kurlrequester_focusinevent_isbase = false;
            KUrlRequester::focusInEvent(event);
        } else if (kurlrequester_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kurlrequester_focusinevent_callback(this, cbval1);
        } else {
            KUrlRequester::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kurlrequester_focusoutevent_isbase) {
            kurlrequester_focusoutevent_isbase = false;
            KUrlRequester::focusOutEvent(event);
        } else if (kurlrequester_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kurlrequester_focusoutevent_callback(this, cbval1);
        } else {
            KUrlRequester::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kurlrequester_enterevent_isbase) {
            kurlrequester_enterevent_isbase = false;
            KUrlRequester::enterEvent(event);
        } else if (kurlrequester_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kurlrequester_enterevent_callback(this, cbval1);
        } else {
            KUrlRequester::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kurlrequester_leaveevent_isbase) {
            kurlrequester_leaveevent_isbase = false;
            KUrlRequester::leaveEvent(event);
        } else if (kurlrequester_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kurlrequester_leaveevent_callback(this, cbval1);
        } else {
            KUrlRequester::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kurlrequester_paintevent_isbase) {
            kurlrequester_paintevent_isbase = false;
            KUrlRequester::paintEvent(event);
        } else if (kurlrequester_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kurlrequester_paintevent_callback(this, cbval1);
        } else {
            KUrlRequester::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kurlrequester_moveevent_isbase) {
            kurlrequester_moveevent_isbase = false;
            KUrlRequester::moveEvent(event);
        } else if (kurlrequester_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kurlrequester_moveevent_callback(this, cbval1);
        } else {
            KUrlRequester::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kurlrequester_resizeevent_isbase) {
            kurlrequester_resizeevent_isbase = false;
            KUrlRequester::resizeEvent(event);
        } else if (kurlrequester_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kurlrequester_resizeevent_callback(this, cbval1);
        } else {
            KUrlRequester::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kurlrequester_closeevent_isbase) {
            kurlrequester_closeevent_isbase = false;
            KUrlRequester::closeEvent(event);
        } else if (kurlrequester_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kurlrequester_closeevent_callback(this, cbval1);
        } else {
            KUrlRequester::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kurlrequester_contextmenuevent_isbase) {
            kurlrequester_contextmenuevent_isbase = false;
            KUrlRequester::contextMenuEvent(event);
        } else if (kurlrequester_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kurlrequester_contextmenuevent_callback(this, cbval1);
        } else {
            KUrlRequester::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kurlrequester_tabletevent_isbase) {
            kurlrequester_tabletevent_isbase = false;
            KUrlRequester::tabletEvent(event);
        } else if (kurlrequester_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kurlrequester_tabletevent_callback(this, cbval1);
        } else {
            KUrlRequester::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kurlrequester_actionevent_isbase) {
            kurlrequester_actionevent_isbase = false;
            KUrlRequester::actionEvent(event);
        } else if (kurlrequester_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kurlrequester_actionevent_callback(this, cbval1);
        } else {
            KUrlRequester::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kurlrequester_dragenterevent_isbase) {
            kurlrequester_dragenterevent_isbase = false;
            KUrlRequester::dragEnterEvent(event);
        } else if (kurlrequester_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kurlrequester_dragenterevent_callback(this, cbval1);
        } else {
            KUrlRequester::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kurlrequester_dragmoveevent_isbase) {
            kurlrequester_dragmoveevent_isbase = false;
            KUrlRequester::dragMoveEvent(event);
        } else if (kurlrequester_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kurlrequester_dragmoveevent_callback(this, cbval1);
        } else {
            KUrlRequester::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kurlrequester_dragleaveevent_isbase) {
            kurlrequester_dragleaveevent_isbase = false;
            KUrlRequester::dragLeaveEvent(event);
        } else if (kurlrequester_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kurlrequester_dragleaveevent_callback(this, cbval1);
        } else {
            KUrlRequester::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kurlrequester_dropevent_isbase) {
            kurlrequester_dropevent_isbase = false;
            KUrlRequester::dropEvent(event);
        } else if (kurlrequester_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kurlrequester_dropevent_callback(this, cbval1);
        } else {
            KUrlRequester::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kurlrequester_showevent_isbase) {
            kurlrequester_showevent_isbase = false;
            KUrlRequester::showEvent(event);
        } else if (kurlrequester_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kurlrequester_showevent_callback(this, cbval1);
        } else {
            KUrlRequester::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kurlrequester_hideevent_isbase) {
            kurlrequester_hideevent_isbase = false;
            KUrlRequester::hideEvent(event);
        } else if (kurlrequester_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kurlrequester_hideevent_callback(this, cbval1);
        } else {
            KUrlRequester::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kurlrequester_nativeevent_isbase) {
            kurlrequester_nativeevent_isbase = false;
            return KUrlRequester::nativeEvent(eventType, message, result);
        } else if (kurlrequester_nativeevent_callback != nullptr) {
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

            bool callback_ret = kurlrequester_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KUrlRequester::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kurlrequester_metric_isbase) {
            kurlrequester_metric_isbase = false;
            return KUrlRequester::metric(param1);
        } else if (kurlrequester_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kurlrequester_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KUrlRequester::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kurlrequester_initpainter_isbase) {
            kurlrequester_initpainter_isbase = false;
            KUrlRequester::initPainter(painter);
        } else if (kurlrequester_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kurlrequester_initpainter_callback(this, cbval1);
        } else {
            KUrlRequester::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kurlrequester_redirected_isbase) {
            kurlrequester_redirected_isbase = false;
            return KUrlRequester::redirected(offset);
        } else if (kurlrequester_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kurlrequester_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUrlRequester::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kurlrequester_sharedpainter_isbase) {
            kurlrequester_sharedpainter_isbase = false;
            return KUrlRequester::sharedPainter();
        } else if (kurlrequester_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kurlrequester_sharedpainter_callback();
            return callback_ret;
        } else {
            return KUrlRequester::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kurlrequester_inputmethodevent_isbase) {
            kurlrequester_inputmethodevent_isbase = false;
            KUrlRequester::inputMethodEvent(param1);
        } else if (kurlrequester_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kurlrequester_inputmethodevent_callback(this, cbval1);
        } else {
            KUrlRequester::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kurlrequester_inputmethodquery_isbase) {
            kurlrequester_inputmethodquery_isbase = false;
            return KUrlRequester::inputMethodQuery(param1);
        } else if (kurlrequester_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kurlrequester_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KUrlRequester::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kurlrequester_focusnextprevchild_isbase) {
            kurlrequester_focusnextprevchild_isbase = false;
            return KUrlRequester::focusNextPrevChild(next);
        } else if (kurlrequester_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kurlrequester_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUrlRequester::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kurlrequester_timerevent_isbase) {
            kurlrequester_timerevent_isbase = false;
            KUrlRequester::timerEvent(event);
        } else if (kurlrequester_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kurlrequester_timerevent_callback(this, cbval1);
        } else {
            KUrlRequester::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kurlrequester_childevent_isbase) {
            kurlrequester_childevent_isbase = false;
            KUrlRequester::childEvent(event);
        } else if (kurlrequester_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kurlrequester_childevent_callback(this, cbval1);
        } else {
            KUrlRequester::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kurlrequester_customevent_isbase) {
            kurlrequester_customevent_isbase = false;
            KUrlRequester::customEvent(event);
        } else if (kurlrequester_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kurlrequester_customevent_callback(this, cbval1);
        } else {
            KUrlRequester::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kurlrequester_connectnotify_isbase) {
            kurlrequester_connectnotify_isbase = false;
            KUrlRequester::connectNotify(signal);
        } else if (kurlrequester_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kurlrequester_connectnotify_callback(this, cbval1);
        } else {
            KUrlRequester::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kurlrequester_disconnectnotify_isbase) {
            kurlrequester_disconnectnotify_isbase = false;
            KUrlRequester::disconnectNotify(signal);
        } else if (kurlrequester_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kurlrequester_disconnectnotify_callback(this, cbval1);
        } else {
            KUrlRequester::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kurlrequester_updatemicrofocus_isbase) {
            kurlrequester_updatemicrofocus_isbase = false;
            KUrlRequester::updateMicroFocus();
        } else if (kurlrequester_updatemicrofocus_callback != nullptr) {
            kurlrequester_updatemicrofocus_callback();
        } else {
            KUrlRequester::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kurlrequester_create_isbase) {
            kurlrequester_create_isbase = false;
            KUrlRequester::create();
        } else if (kurlrequester_create_callback != nullptr) {
            kurlrequester_create_callback();
        } else {
            KUrlRequester::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kurlrequester_destroy_isbase) {
            kurlrequester_destroy_isbase = false;
            KUrlRequester::destroy();
        } else if (kurlrequester_destroy_callback != nullptr) {
            kurlrequester_destroy_callback();
        } else {
            KUrlRequester::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kurlrequester_focusnextchild_isbase) {
            kurlrequester_focusnextchild_isbase = false;
            return KUrlRequester::focusNextChild();
        } else if (kurlrequester_focusnextchild_callback != nullptr) {
            bool callback_ret = kurlrequester_focusnextchild_callback();
            return callback_ret;
        } else {
            return KUrlRequester::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kurlrequester_focuspreviouschild_isbase) {
            kurlrequester_focuspreviouschild_isbase = false;
            return KUrlRequester::focusPreviousChild();
        } else if (kurlrequester_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kurlrequester_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KUrlRequester::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kurlrequester_sender_isbase) {
            kurlrequester_sender_isbase = false;
            return KUrlRequester::sender();
        } else if (kurlrequester_sender_callback != nullptr) {
            QObject* callback_ret = kurlrequester_sender_callback();
            return callback_ret;
        } else {
            return KUrlRequester::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kurlrequester_sendersignalindex_isbase) {
            kurlrequester_sendersignalindex_isbase = false;
            return KUrlRequester::senderSignalIndex();
        } else if (kurlrequester_sendersignalindex_callback != nullptr) {
            int callback_ret = kurlrequester_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KUrlRequester::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kurlrequester_receivers_isbase) {
            kurlrequester_receivers_isbase = false;
            return KUrlRequester::receivers(signal);
        } else if (kurlrequester_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kurlrequester_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KUrlRequester::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kurlrequester_issignalconnected_isbase) {
            kurlrequester_issignalconnected_isbase = false;
            return KUrlRequester::isSignalConnected(signal);
        } else if (kurlrequester_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kurlrequester_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUrlRequester::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kurlrequester_getdecodedmetricf_isbase) {
            kurlrequester_getdecodedmetricf_isbase = false;
            return KUrlRequester::getDecodedMetricF(metricA, metricB);
        } else if (kurlrequester_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kurlrequester_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KUrlRequester::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KUrlRequester_ChangeEvent(KUrlRequester* self, QEvent* e);
    friend void KUrlRequester_QBaseChangeEvent(KUrlRequester* self, QEvent* e);
    friend bool KUrlRequester_EventFilter(KUrlRequester* self, QObject* obj, QEvent* ev);
    friend bool KUrlRequester_QBaseEventFilter(KUrlRequester* self, QObject* obj, QEvent* ev);
    friend bool KUrlRequester_Event(KUrlRequester* self, QEvent* event);
    friend bool KUrlRequester_QBaseEvent(KUrlRequester* self, QEvent* event);
    friend void KUrlRequester_MousePressEvent(KUrlRequester* self, QMouseEvent* event);
    friend void KUrlRequester_QBaseMousePressEvent(KUrlRequester* self, QMouseEvent* event);
    friend void KUrlRequester_MouseReleaseEvent(KUrlRequester* self, QMouseEvent* event);
    friend void KUrlRequester_QBaseMouseReleaseEvent(KUrlRequester* self, QMouseEvent* event);
    friend void KUrlRequester_MouseDoubleClickEvent(KUrlRequester* self, QMouseEvent* event);
    friend void KUrlRequester_QBaseMouseDoubleClickEvent(KUrlRequester* self, QMouseEvent* event);
    friend void KUrlRequester_MouseMoveEvent(KUrlRequester* self, QMouseEvent* event);
    friend void KUrlRequester_QBaseMouseMoveEvent(KUrlRequester* self, QMouseEvent* event);
    friend void KUrlRequester_WheelEvent(KUrlRequester* self, QWheelEvent* event);
    friend void KUrlRequester_QBaseWheelEvent(KUrlRequester* self, QWheelEvent* event);
    friend void KUrlRequester_KeyPressEvent(KUrlRequester* self, QKeyEvent* event);
    friend void KUrlRequester_QBaseKeyPressEvent(KUrlRequester* self, QKeyEvent* event);
    friend void KUrlRequester_KeyReleaseEvent(KUrlRequester* self, QKeyEvent* event);
    friend void KUrlRequester_QBaseKeyReleaseEvent(KUrlRequester* self, QKeyEvent* event);
    friend void KUrlRequester_FocusInEvent(KUrlRequester* self, QFocusEvent* event);
    friend void KUrlRequester_QBaseFocusInEvent(KUrlRequester* self, QFocusEvent* event);
    friend void KUrlRequester_FocusOutEvent(KUrlRequester* self, QFocusEvent* event);
    friend void KUrlRequester_QBaseFocusOutEvent(KUrlRequester* self, QFocusEvent* event);
    friend void KUrlRequester_EnterEvent(KUrlRequester* self, QEnterEvent* event);
    friend void KUrlRequester_QBaseEnterEvent(KUrlRequester* self, QEnterEvent* event);
    friend void KUrlRequester_LeaveEvent(KUrlRequester* self, QEvent* event);
    friend void KUrlRequester_QBaseLeaveEvent(KUrlRequester* self, QEvent* event);
    friend void KUrlRequester_PaintEvent(KUrlRequester* self, QPaintEvent* event);
    friend void KUrlRequester_QBasePaintEvent(KUrlRequester* self, QPaintEvent* event);
    friend void KUrlRequester_MoveEvent(KUrlRequester* self, QMoveEvent* event);
    friend void KUrlRequester_QBaseMoveEvent(KUrlRequester* self, QMoveEvent* event);
    friend void KUrlRequester_ResizeEvent(KUrlRequester* self, QResizeEvent* event);
    friend void KUrlRequester_QBaseResizeEvent(KUrlRequester* self, QResizeEvent* event);
    friend void KUrlRequester_CloseEvent(KUrlRequester* self, QCloseEvent* event);
    friend void KUrlRequester_QBaseCloseEvent(KUrlRequester* self, QCloseEvent* event);
    friend void KUrlRequester_ContextMenuEvent(KUrlRequester* self, QContextMenuEvent* event);
    friend void KUrlRequester_QBaseContextMenuEvent(KUrlRequester* self, QContextMenuEvent* event);
    friend void KUrlRequester_TabletEvent(KUrlRequester* self, QTabletEvent* event);
    friend void KUrlRequester_QBaseTabletEvent(KUrlRequester* self, QTabletEvent* event);
    friend void KUrlRequester_ActionEvent(KUrlRequester* self, QActionEvent* event);
    friend void KUrlRequester_QBaseActionEvent(KUrlRequester* self, QActionEvent* event);
    friend void KUrlRequester_DragEnterEvent(KUrlRequester* self, QDragEnterEvent* event);
    friend void KUrlRequester_QBaseDragEnterEvent(KUrlRequester* self, QDragEnterEvent* event);
    friend void KUrlRequester_DragMoveEvent(KUrlRequester* self, QDragMoveEvent* event);
    friend void KUrlRequester_QBaseDragMoveEvent(KUrlRequester* self, QDragMoveEvent* event);
    friend void KUrlRequester_DragLeaveEvent(KUrlRequester* self, QDragLeaveEvent* event);
    friend void KUrlRequester_QBaseDragLeaveEvent(KUrlRequester* self, QDragLeaveEvent* event);
    friend void KUrlRequester_DropEvent(KUrlRequester* self, QDropEvent* event);
    friend void KUrlRequester_QBaseDropEvent(KUrlRequester* self, QDropEvent* event);
    friend void KUrlRequester_ShowEvent(KUrlRequester* self, QShowEvent* event);
    friend void KUrlRequester_QBaseShowEvent(KUrlRequester* self, QShowEvent* event);
    friend void KUrlRequester_HideEvent(KUrlRequester* self, QHideEvent* event);
    friend void KUrlRequester_QBaseHideEvent(KUrlRequester* self, QHideEvent* event);
    friend bool KUrlRequester_NativeEvent(KUrlRequester* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KUrlRequester_QBaseNativeEvent(KUrlRequester* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KUrlRequester_Metric(const KUrlRequester* self, int param1);
    friend int KUrlRequester_QBaseMetric(const KUrlRequester* self, int param1);
    friend void KUrlRequester_InitPainter(const KUrlRequester* self, QPainter* painter);
    friend void KUrlRequester_QBaseInitPainter(const KUrlRequester* self, QPainter* painter);
    friend QPaintDevice* KUrlRequester_Redirected(const KUrlRequester* self, QPoint* offset);
    friend QPaintDevice* KUrlRequester_QBaseRedirected(const KUrlRequester* self, QPoint* offset);
    friend QPainter* KUrlRequester_SharedPainter(const KUrlRequester* self);
    friend QPainter* KUrlRequester_QBaseSharedPainter(const KUrlRequester* self);
    friend void KUrlRequester_InputMethodEvent(KUrlRequester* self, QInputMethodEvent* param1);
    friend void KUrlRequester_QBaseInputMethodEvent(KUrlRequester* self, QInputMethodEvent* param1);
    friend bool KUrlRequester_FocusNextPrevChild(KUrlRequester* self, bool next);
    friend bool KUrlRequester_QBaseFocusNextPrevChild(KUrlRequester* self, bool next);
    friend void KUrlRequester_TimerEvent(KUrlRequester* self, QTimerEvent* event);
    friend void KUrlRequester_QBaseTimerEvent(KUrlRequester* self, QTimerEvent* event);
    friend void KUrlRequester_ChildEvent(KUrlRequester* self, QChildEvent* event);
    friend void KUrlRequester_QBaseChildEvent(KUrlRequester* self, QChildEvent* event);
    friend void KUrlRequester_CustomEvent(KUrlRequester* self, QEvent* event);
    friend void KUrlRequester_QBaseCustomEvent(KUrlRequester* self, QEvent* event);
    friend void KUrlRequester_ConnectNotify(KUrlRequester* self, const QMetaMethod* signal);
    friend void KUrlRequester_QBaseConnectNotify(KUrlRequester* self, const QMetaMethod* signal);
    friend void KUrlRequester_DisconnectNotify(KUrlRequester* self, const QMetaMethod* signal);
    friend void KUrlRequester_QBaseDisconnectNotify(KUrlRequester* self, const QMetaMethod* signal);
    friend void KUrlRequester_UpdateMicroFocus(KUrlRequester* self);
    friend void KUrlRequester_QBaseUpdateMicroFocus(KUrlRequester* self);
    friend void KUrlRequester_Create(KUrlRequester* self);
    friend void KUrlRequester_QBaseCreate(KUrlRequester* self);
    friend void KUrlRequester_Destroy(KUrlRequester* self);
    friend void KUrlRequester_QBaseDestroy(KUrlRequester* self);
    friend bool KUrlRequester_FocusNextChild(KUrlRequester* self);
    friend bool KUrlRequester_QBaseFocusNextChild(KUrlRequester* self);
    friend bool KUrlRequester_FocusPreviousChild(KUrlRequester* self);
    friend bool KUrlRequester_QBaseFocusPreviousChild(KUrlRequester* self);
    friend QObject* KUrlRequester_Sender(const KUrlRequester* self);
    friend QObject* KUrlRequester_QBaseSender(const KUrlRequester* self);
    friend int KUrlRequester_SenderSignalIndex(const KUrlRequester* self);
    friend int KUrlRequester_QBaseSenderSignalIndex(const KUrlRequester* self);
    friend int KUrlRequester_Receivers(const KUrlRequester* self, const char* signal);
    friend int KUrlRequester_QBaseReceivers(const KUrlRequester* self, const char* signal);
    friend bool KUrlRequester_IsSignalConnected(const KUrlRequester* self, const QMetaMethod* signal);
    friend bool KUrlRequester_QBaseIsSignalConnected(const KUrlRequester* self, const QMetaMethod* signal);
    friend double KUrlRequester_GetDecodedMetricF(const KUrlRequester* self, int metricA, int metricB);
    friend double KUrlRequester_QBaseGetDecodedMetricF(const KUrlRequester* self, int metricA, int metricB);
};

// This class is a subclass of KUrlComboRequester so that we can call protected methods
class VirtualKUrlComboRequester final : public KUrlComboRequester {

  public:
    // Virtual class boolean flag
    bool isVirtualKUrlComboRequester = true;

    // Virtual class public types (including callbacks)
    using KUrlComboRequester_Metacall_Callback = int (*)(KUrlComboRequester*, int, int, void**);
    using KUrlComboRequester_FileDialog_Callback = QFileDialog* (*)();
    using KUrlComboRequester_ChangeEvent_Callback = void (*)(KUrlComboRequester*, QEvent*);
    using KUrlComboRequester_EventFilter_Callback = bool (*)(KUrlComboRequester*, QObject*, QEvent*);
    using KUrlComboRequester_DevType_Callback = int (*)();
    using KUrlComboRequester_SetVisible_Callback = void (*)(KUrlComboRequester*, bool);
    using KUrlComboRequester_SizeHint_Callback = QSize* (*)();
    using KUrlComboRequester_MinimumSizeHint_Callback = QSize* (*)();
    using KUrlComboRequester_HeightForWidth_Callback = int (*)(const KUrlComboRequester*, int);
    using KUrlComboRequester_HasHeightForWidth_Callback = bool (*)();
    using KUrlComboRequester_PaintEngine_Callback = QPaintEngine* (*)();
    using KUrlComboRequester_Event_Callback = bool (*)(KUrlComboRequester*, QEvent*);
    using KUrlComboRequester_MousePressEvent_Callback = void (*)(KUrlComboRequester*, QMouseEvent*);
    using KUrlComboRequester_MouseReleaseEvent_Callback = void (*)(KUrlComboRequester*, QMouseEvent*);
    using KUrlComboRequester_MouseDoubleClickEvent_Callback = void (*)(KUrlComboRequester*, QMouseEvent*);
    using KUrlComboRequester_MouseMoveEvent_Callback = void (*)(KUrlComboRequester*, QMouseEvent*);
    using KUrlComboRequester_WheelEvent_Callback = void (*)(KUrlComboRequester*, QWheelEvent*);
    using KUrlComboRequester_KeyPressEvent_Callback = void (*)(KUrlComboRequester*, QKeyEvent*);
    using KUrlComboRequester_KeyReleaseEvent_Callback = void (*)(KUrlComboRequester*, QKeyEvent*);
    using KUrlComboRequester_FocusInEvent_Callback = void (*)(KUrlComboRequester*, QFocusEvent*);
    using KUrlComboRequester_FocusOutEvent_Callback = void (*)(KUrlComboRequester*, QFocusEvent*);
    using KUrlComboRequester_EnterEvent_Callback = void (*)(KUrlComboRequester*, QEnterEvent*);
    using KUrlComboRequester_LeaveEvent_Callback = void (*)(KUrlComboRequester*, QEvent*);
    using KUrlComboRequester_PaintEvent_Callback = void (*)(KUrlComboRequester*, QPaintEvent*);
    using KUrlComboRequester_MoveEvent_Callback = void (*)(KUrlComboRequester*, QMoveEvent*);
    using KUrlComboRequester_ResizeEvent_Callback = void (*)(KUrlComboRequester*, QResizeEvent*);
    using KUrlComboRequester_CloseEvent_Callback = void (*)(KUrlComboRequester*, QCloseEvent*);
    using KUrlComboRequester_ContextMenuEvent_Callback = void (*)(KUrlComboRequester*, QContextMenuEvent*);
    using KUrlComboRequester_TabletEvent_Callback = void (*)(KUrlComboRequester*, QTabletEvent*);
    using KUrlComboRequester_ActionEvent_Callback = void (*)(KUrlComboRequester*, QActionEvent*);
    using KUrlComboRequester_DragEnterEvent_Callback = void (*)(KUrlComboRequester*, QDragEnterEvent*);
    using KUrlComboRequester_DragMoveEvent_Callback = void (*)(KUrlComboRequester*, QDragMoveEvent*);
    using KUrlComboRequester_DragLeaveEvent_Callback = void (*)(KUrlComboRequester*, QDragLeaveEvent*);
    using KUrlComboRequester_DropEvent_Callback = void (*)(KUrlComboRequester*, QDropEvent*);
    using KUrlComboRequester_ShowEvent_Callback = void (*)(KUrlComboRequester*, QShowEvent*);
    using KUrlComboRequester_HideEvent_Callback = void (*)(KUrlComboRequester*, QHideEvent*);
    using KUrlComboRequester_NativeEvent_Callback = bool (*)(KUrlComboRequester*, libqt_string, void*, intptr_t*);
    using KUrlComboRequester_Metric_Callback = int (*)(const KUrlComboRequester*, int);
    using KUrlComboRequester_InitPainter_Callback = void (*)(const KUrlComboRequester*, QPainter*);
    using KUrlComboRequester_Redirected_Callback = QPaintDevice* (*)(const KUrlComboRequester*, QPoint*);
    using KUrlComboRequester_SharedPainter_Callback = QPainter* (*)();
    using KUrlComboRequester_InputMethodEvent_Callback = void (*)(KUrlComboRequester*, QInputMethodEvent*);
    using KUrlComboRequester_InputMethodQuery_Callback = QVariant* (*)(const KUrlComboRequester*, int);
    using KUrlComboRequester_FocusNextPrevChild_Callback = bool (*)(KUrlComboRequester*, bool);
    using KUrlComboRequester_TimerEvent_Callback = void (*)(KUrlComboRequester*, QTimerEvent*);
    using KUrlComboRequester_ChildEvent_Callback = void (*)(KUrlComboRequester*, QChildEvent*);
    using KUrlComboRequester_CustomEvent_Callback = void (*)(KUrlComboRequester*, QEvent*);
    using KUrlComboRequester_ConnectNotify_Callback = void (*)(KUrlComboRequester*, QMetaMethod*);
    using KUrlComboRequester_DisconnectNotify_Callback = void (*)(KUrlComboRequester*, QMetaMethod*);
    using KUrlComboRequester_UpdateMicroFocus_Callback = void (*)();
    using KUrlComboRequester_Create_Callback = void (*)();
    using KUrlComboRequester_Destroy_Callback = void (*)();
    using KUrlComboRequester_FocusNextChild_Callback = bool (*)();
    using KUrlComboRequester_FocusPreviousChild_Callback = bool (*)();
    using KUrlComboRequester_Sender_Callback = QObject* (*)();
    using KUrlComboRequester_SenderSignalIndex_Callback = int (*)();
    using KUrlComboRequester_Receivers_Callback = int (*)(const KUrlComboRequester*, const char*);
    using KUrlComboRequester_IsSignalConnected_Callback = bool (*)(const KUrlComboRequester*, QMetaMethod*);
    using KUrlComboRequester_GetDecodedMetricF_Callback = double (*)(const KUrlComboRequester*, int, int);

  protected:
    // Instance callback storage
    KUrlComboRequester_Metacall_Callback kurlcomborequester_metacall_callback = nullptr;
    KUrlComboRequester_FileDialog_Callback kurlcomborequester_filedialog_callback = nullptr;
    KUrlComboRequester_ChangeEvent_Callback kurlcomborequester_changeevent_callback = nullptr;
    KUrlComboRequester_EventFilter_Callback kurlcomborequester_eventfilter_callback = nullptr;
    KUrlComboRequester_DevType_Callback kurlcomborequester_devtype_callback = nullptr;
    KUrlComboRequester_SetVisible_Callback kurlcomborequester_setvisible_callback = nullptr;
    KUrlComboRequester_SizeHint_Callback kurlcomborequester_sizehint_callback = nullptr;
    KUrlComboRequester_MinimumSizeHint_Callback kurlcomborequester_minimumsizehint_callback = nullptr;
    KUrlComboRequester_HeightForWidth_Callback kurlcomborequester_heightforwidth_callback = nullptr;
    KUrlComboRequester_HasHeightForWidth_Callback kurlcomborequester_hasheightforwidth_callback = nullptr;
    KUrlComboRequester_PaintEngine_Callback kurlcomborequester_paintengine_callback = nullptr;
    KUrlComboRequester_Event_Callback kurlcomborequester_event_callback = nullptr;
    KUrlComboRequester_MousePressEvent_Callback kurlcomborequester_mousepressevent_callback = nullptr;
    KUrlComboRequester_MouseReleaseEvent_Callback kurlcomborequester_mousereleaseevent_callback = nullptr;
    KUrlComboRequester_MouseDoubleClickEvent_Callback kurlcomborequester_mousedoubleclickevent_callback = nullptr;
    KUrlComboRequester_MouseMoveEvent_Callback kurlcomborequester_mousemoveevent_callback = nullptr;
    KUrlComboRequester_WheelEvent_Callback kurlcomborequester_wheelevent_callback = nullptr;
    KUrlComboRequester_KeyPressEvent_Callback kurlcomborequester_keypressevent_callback = nullptr;
    KUrlComboRequester_KeyReleaseEvent_Callback kurlcomborequester_keyreleaseevent_callback = nullptr;
    KUrlComboRequester_FocusInEvent_Callback kurlcomborequester_focusinevent_callback = nullptr;
    KUrlComboRequester_FocusOutEvent_Callback kurlcomborequester_focusoutevent_callback = nullptr;
    KUrlComboRequester_EnterEvent_Callback kurlcomborequester_enterevent_callback = nullptr;
    KUrlComboRequester_LeaveEvent_Callback kurlcomborequester_leaveevent_callback = nullptr;
    KUrlComboRequester_PaintEvent_Callback kurlcomborequester_paintevent_callback = nullptr;
    KUrlComboRequester_MoveEvent_Callback kurlcomborequester_moveevent_callback = nullptr;
    KUrlComboRequester_ResizeEvent_Callback kurlcomborequester_resizeevent_callback = nullptr;
    KUrlComboRequester_CloseEvent_Callback kurlcomborequester_closeevent_callback = nullptr;
    KUrlComboRequester_ContextMenuEvent_Callback kurlcomborequester_contextmenuevent_callback = nullptr;
    KUrlComboRequester_TabletEvent_Callback kurlcomborequester_tabletevent_callback = nullptr;
    KUrlComboRequester_ActionEvent_Callback kurlcomborequester_actionevent_callback = nullptr;
    KUrlComboRequester_DragEnterEvent_Callback kurlcomborequester_dragenterevent_callback = nullptr;
    KUrlComboRequester_DragMoveEvent_Callback kurlcomborequester_dragmoveevent_callback = nullptr;
    KUrlComboRequester_DragLeaveEvent_Callback kurlcomborequester_dragleaveevent_callback = nullptr;
    KUrlComboRequester_DropEvent_Callback kurlcomborequester_dropevent_callback = nullptr;
    KUrlComboRequester_ShowEvent_Callback kurlcomborequester_showevent_callback = nullptr;
    KUrlComboRequester_HideEvent_Callback kurlcomborequester_hideevent_callback = nullptr;
    KUrlComboRequester_NativeEvent_Callback kurlcomborequester_nativeevent_callback = nullptr;
    KUrlComboRequester_Metric_Callback kurlcomborequester_metric_callback = nullptr;
    KUrlComboRequester_InitPainter_Callback kurlcomborequester_initpainter_callback = nullptr;
    KUrlComboRequester_Redirected_Callback kurlcomborequester_redirected_callback = nullptr;
    KUrlComboRequester_SharedPainter_Callback kurlcomborequester_sharedpainter_callback = nullptr;
    KUrlComboRequester_InputMethodEvent_Callback kurlcomborequester_inputmethodevent_callback = nullptr;
    KUrlComboRequester_InputMethodQuery_Callback kurlcomborequester_inputmethodquery_callback = nullptr;
    KUrlComboRequester_FocusNextPrevChild_Callback kurlcomborequester_focusnextprevchild_callback = nullptr;
    KUrlComboRequester_TimerEvent_Callback kurlcomborequester_timerevent_callback = nullptr;
    KUrlComboRequester_ChildEvent_Callback kurlcomborequester_childevent_callback = nullptr;
    KUrlComboRequester_CustomEvent_Callback kurlcomborequester_customevent_callback = nullptr;
    KUrlComboRequester_ConnectNotify_Callback kurlcomborequester_connectnotify_callback = nullptr;
    KUrlComboRequester_DisconnectNotify_Callback kurlcomborequester_disconnectnotify_callback = nullptr;
    KUrlComboRequester_UpdateMicroFocus_Callback kurlcomborequester_updatemicrofocus_callback = nullptr;
    KUrlComboRequester_Create_Callback kurlcomborequester_create_callback = nullptr;
    KUrlComboRequester_Destroy_Callback kurlcomborequester_destroy_callback = nullptr;
    KUrlComboRequester_FocusNextChild_Callback kurlcomborequester_focusnextchild_callback = nullptr;
    KUrlComboRequester_FocusPreviousChild_Callback kurlcomborequester_focuspreviouschild_callback = nullptr;
    KUrlComboRequester_Sender_Callback kurlcomborequester_sender_callback = nullptr;
    KUrlComboRequester_SenderSignalIndex_Callback kurlcomborequester_sendersignalindex_callback = nullptr;
    KUrlComboRequester_Receivers_Callback kurlcomborequester_receivers_callback = nullptr;
    KUrlComboRequester_IsSignalConnected_Callback kurlcomborequester_issignalconnected_callback = nullptr;
    KUrlComboRequester_GetDecodedMetricF_Callback kurlcomborequester_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kurlcomborequester_metacall_isbase = false;
    mutable bool kurlcomborequester_filedialog_isbase = false;
    mutable bool kurlcomborequester_changeevent_isbase = false;
    mutable bool kurlcomborequester_eventfilter_isbase = false;
    mutable bool kurlcomborequester_devtype_isbase = false;
    mutable bool kurlcomborequester_setvisible_isbase = false;
    mutable bool kurlcomborequester_sizehint_isbase = false;
    mutable bool kurlcomborequester_minimumsizehint_isbase = false;
    mutable bool kurlcomborequester_heightforwidth_isbase = false;
    mutable bool kurlcomborequester_hasheightforwidth_isbase = false;
    mutable bool kurlcomborequester_paintengine_isbase = false;
    mutable bool kurlcomborequester_event_isbase = false;
    mutable bool kurlcomborequester_mousepressevent_isbase = false;
    mutable bool kurlcomborequester_mousereleaseevent_isbase = false;
    mutable bool kurlcomborequester_mousedoubleclickevent_isbase = false;
    mutable bool kurlcomborequester_mousemoveevent_isbase = false;
    mutable bool kurlcomborequester_wheelevent_isbase = false;
    mutable bool kurlcomborequester_keypressevent_isbase = false;
    mutable bool kurlcomborequester_keyreleaseevent_isbase = false;
    mutable bool kurlcomborequester_focusinevent_isbase = false;
    mutable bool kurlcomborequester_focusoutevent_isbase = false;
    mutable bool kurlcomborequester_enterevent_isbase = false;
    mutable bool kurlcomborequester_leaveevent_isbase = false;
    mutable bool kurlcomborequester_paintevent_isbase = false;
    mutable bool kurlcomborequester_moveevent_isbase = false;
    mutable bool kurlcomborequester_resizeevent_isbase = false;
    mutable bool kurlcomborequester_closeevent_isbase = false;
    mutable bool kurlcomborequester_contextmenuevent_isbase = false;
    mutable bool kurlcomborequester_tabletevent_isbase = false;
    mutable bool kurlcomborequester_actionevent_isbase = false;
    mutable bool kurlcomborequester_dragenterevent_isbase = false;
    mutable bool kurlcomborequester_dragmoveevent_isbase = false;
    mutable bool kurlcomborequester_dragleaveevent_isbase = false;
    mutable bool kurlcomborequester_dropevent_isbase = false;
    mutable bool kurlcomborequester_showevent_isbase = false;
    mutable bool kurlcomborequester_hideevent_isbase = false;
    mutable bool kurlcomborequester_nativeevent_isbase = false;
    mutable bool kurlcomborequester_metric_isbase = false;
    mutable bool kurlcomborequester_initpainter_isbase = false;
    mutable bool kurlcomborequester_redirected_isbase = false;
    mutable bool kurlcomborequester_sharedpainter_isbase = false;
    mutable bool kurlcomborequester_inputmethodevent_isbase = false;
    mutable bool kurlcomborequester_inputmethodquery_isbase = false;
    mutable bool kurlcomborequester_focusnextprevchild_isbase = false;
    mutable bool kurlcomborequester_timerevent_isbase = false;
    mutable bool kurlcomborequester_childevent_isbase = false;
    mutable bool kurlcomborequester_customevent_isbase = false;
    mutable bool kurlcomborequester_connectnotify_isbase = false;
    mutable bool kurlcomborequester_disconnectnotify_isbase = false;
    mutable bool kurlcomborequester_updatemicrofocus_isbase = false;
    mutable bool kurlcomborequester_create_isbase = false;
    mutable bool kurlcomborequester_destroy_isbase = false;
    mutable bool kurlcomborequester_focusnextchild_isbase = false;
    mutable bool kurlcomborequester_focuspreviouschild_isbase = false;
    mutable bool kurlcomborequester_sender_isbase = false;
    mutable bool kurlcomborequester_sendersignalindex_isbase = false;
    mutable bool kurlcomborequester_receivers_isbase = false;
    mutable bool kurlcomborequester_issignalconnected_isbase = false;
    mutable bool kurlcomborequester_getdecodedmetricf_isbase = false;

  public:
    VirtualKUrlComboRequester(QWidget* parent) : KUrlComboRequester(parent) {};
    VirtualKUrlComboRequester() : KUrlComboRequester() {};

    ~VirtualKUrlComboRequester() {
        kurlcomborequester_metacall_callback = nullptr;
        kurlcomborequester_filedialog_callback = nullptr;
        kurlcomborequester_changeevent_callback = nullptr;
        kurlcomborequester_eventfilter_callback = nullptr;
        kurlcomborequester_devtype_callback = nullptr;
        kurlcomborequester_setvisible_callback = nullptr;
        kurlcomborequester_sizehint_callback = nullptr;
        kurlcomborequester_minimumsizehint_callback = nullptr;
        kurlcomborequester_heightforwidth_callback = nullptr;
        kurlcomborequester_hasheightforwidth_callback = nullptr;
        kurlcomborequester_paintengine_callback = nullptr;
        kurlcomborequester_event_callback = nullptr;
        kurlcomborequester_mousepressevent_callback = nullptr;
        kurlcomborequester_mousereleaseevent_callback = nullptr;
        kurlcomborequester_mousedoubleclickevent_callback = nullptr;
        kurlcomborequester_mousemoveevent_callback = nullptr;
        kurlcomborequester_wheelevent_callback = nullptr;
        kurlcomborequester_keypressevent_callback = nullptr;
        kurlcomborequester_keyreleaseevent_callback = nullptr;
        kurlcomborequester_focusinevent_callback = nullptr;
        kurlcomborequester_focusoutevent_callback = nullptr;
        kurlcomborequester_enterevent_callback = nullptr;
        kurlcomborequester_leaveevent_callback = nullptr;
        kurlcomborequester_paintevent_callback = nullptr;
        kurlcomborequester_moveevent_callback = nullptr;
        kurlcomborequester_resizeevent_callback = nullptr;
        kurlcomborequester_closeevent_callback = nullptr;
        kurlcomborequester_contextmenuevent_callback = nullptr;
        kurlcomborequester_tabletevent_callback = nullptr;
        kurlcomborequester_actionevent_callback = nullptr;
        kurlcomborequester_dragenterevent_callback = nullptr;
        kurlcomborequester_dragmoveevent_callback = nullptr;
        kurlcomborequester_dragleaveevent_callback = nullptr;
        kurlcomborequester_dropevent_callback = nullptr;
        kurlcomborequester_showevent_callback = nullptr;
        kurlcomborequester_hideevent_callback = nullptr;
        kurlcomborequester_nativeevent_callback = nullptr;
        kurlcomborequester_metric_callback = nullptr;
        kurlcomborequester_initpainter_callback = nullptr;
        kurlcomborequester_redirected_callback = nullptr;
        kurlcomborequester_sharedpainter_callback = nullptr;
        kurlcomborequester_inputmethodevent_callback = nullptr;
        kurlcomborequester_inputmethodquery_callback = nullptr;
        kurlcomborequester_focusnextprevchild_callback = nullptr;
        kurlcomborequester_timerevent_callback = nullptr;
        kurlcomborequester_childevent_callback = nullptr;
        kurlcomborequester_customevent_callback = nullptr;
        kurlcomborequester_connectnotify_callback = nullptr;
        kurlcomborequester_disconnectnotify_callback = nullptr;
        kurlcomborequester_updatemicrofocus_callback = nullptr;
        kurlcomborequester_create_callback = nullptr;
        kurlcomborequester_destroy_callback = nullptr;
        kurlcomborequester_focusnextchild_callback = nullptr;
        kurlcomborequester_focuspreviouschild_callback = nullptr;
        kurlcomborequester_sender_callback = nullptr;
        kurlcomborequester_sendersignalindex_callback = nullptr;
        kurlcomborequester_receivers_callback = nullptr;
        kurlcomborequester_issignalconnected_callback = nullptr;
        kurlcomborequester_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKUrlComboRequester_Metacall_Callback(KUrlComboRequester_Metacall_Callback cb) { kurlcomborequester_metacall_callback = cb; }
    inline void setKUrlComboRequester_FileDialog_Callback(KUrlComboRequester_FileDialog_Callback cb) { kurlcomborequester_filedialog_callback = cb; }
    inline void setKUrlComboRequester_ChangeEvent_Callback(KUrlComboRequester_ChangeEvent_Callback cb) { kurlcomborequester_changeevent_callback = cb; }
    inline void setKUrlComboRequester_EventFilter_Callback(KUrlComboRequester_EventFilter_Callback cb) { kurlcomborequester_eventfilter_callback = cb; }
    inline void setKUrlComboRequester_DevType_Callback(KUrlComboRequester_DevType_Callback cb) { kurlcomborequester_devtype_callback = cb; }
    inline void setKUrlComboRequester_SetVisible_Callback(KUrlComboRequester_SetVisible_Callback cb) { kurlcomborequester_setvisible_callback = cb; }
    inline void setKUrlComboRequester_SizeHint_Callback(KUrlComboRequester_SizeHint_Callback cb) { kurlcomborequester_sizehint_callback = cb; }
    inline void setKUrlComboRequester_MinimumSizeHint_Callback(KUrlComboRequester_MinimumSizeHint_Callback cb) { kurlcomborequester_minimumsizehint_callback = cb; }
    inline void setKUrlComboRequester_HeightForWidth_Callback(KUrlComboRequester_HeightForWidth_Callback cb) { kurlcomborequester_heightforwidth_callback = cb; }
    inline void setKUrlComboRequester_HasHeightForWidth_Callback(KUrlComboRequester_HasHeightForWidth_Callback cb) { kurlcomborequester_hasheightforwidth_callback = cb; }
    inline void setKUrlComboRequester_PaintEngine_Callback(KUrlComboRequester_PaintEngine_Callback cb) { kurlcomborequester_paintengine_callback = cb; }
    inline void setKUrlComboRequester_Event_Callback(KUrlComboRequester_Event_Callback cb) { kurlcomborequester_event_callback = cb; }
    inline void setKUrlComboRequester_MousePressEvent_Callback(KUrlComboRequester_MousePressEvent_Callback cb) { kurlcomborequester_mousepressevent_callback = cb; }
    inline void setKUrlComboRequester_MouseReleaseEvent_Callback(KUrlComboRequester_MouseReleaseEvent_Callback cb) { kurlcomborequester_mousereleaseevent_callback = cb; }
    inline void setKUrlComboRequester_MouseDoubleClickEvent_Callback(KUrlComboRequester_MouseDoubleClickEvent_Callback cb) { kurlcomborequester_mousedoubleclickevent_callback = cb; }
    inline void setKUrlComboRequester_MouseMoveEvent_Callback(KUrlComboRequester_MouseMoveEvent_Callback cb) { kurlcomborequester_mousemoveevent_callback = cb; }
    inline void setKUrlComboRequester_WheelEvent_Callback(KUrlComboRequester_WheelEvent_Callback cb) { kurlcomborequester_wheelevent_callback = cb; }
    inline void setKUrlComboRequester_KeyPressEvent_Callback(KUrlComboRequester_KeyPressEvent_Callback cb) { kurlcomborequester_keypressevent_callback = cb; }
    inline void setKUrlComboRequester_KeyReleaseEvent_Callback(KUrlComboRequester_KeyReleaseEvent_Callback cb) { kurlcomborequester_keyreleaseevent_callback = cb; }
    inline void setKUrlComboRequester_FocusInEvent_Callback(KUrlComboRequester_FocusInEvent_Callback cb) { kurlcomborequester_focusinevent_callback = cb; }
    inline void setKUrlComboRequester_FocusOutEvent_Callback(KUrlComboRequester_FocusOutEvent_Callback cb) { kurlcomborequester_focusoutevent_callback = cb; }
    inline void setKUrlComboRequester_EnterEvent_Callback(KUrlComboRequester_EnterEvent_Callback cb) { kurlcomborequester_enterevent_callback = cb; }
    inline void setKUrlComboRequester_LeaveEvent_Callback(KUrlComboRequester_LeaveEvent_Callback cb) { kurlcomborequester_leaveevent_callback = cb; }
    inline void setKUrlComboRequester_PaintEvent_Callback(KUrlComboRequester_PaintEvent_Callback cb) { kurlcomborequester_paintevent_callback = cb; }
    inline void setKUrlComboRequester_MoveEvent_Callback(KUrlComboRequester_MoveEvent_Callback cb) { kurlcomborequester_moveevent_callback = cb; }
    inline void setKUrlComboRequester_ResizeEvent_Callback(KUrlComboRequester_ResizeEvent_Callback cb) { kurlcomborequester_resizeevent_callback = cb; }
    inline void setKUrlComboRequester_CloseEvent_Callback(KUrlComboRequester_CloseEvent_Callback cb) { kurlcomborequester_closeevent_callback = cb; }
    inline void setKUrlComboRequester_ContextMenuEvent_Callback(KUrlComboRequester_ContextMenuEvent_Callback cb) { kurlcomborequester_contextmenuevent_callback = cb; }
    inline void setKUrlComboRequester_TabletEvent_Callback(KUrlComboRequester_TabletEvent_Callback cb) { kurlcomborequester_tabletevent_callback = cb; }
    inline void setKUrlComboRequester_ActionEvent_Callback(KUrlComboRequester_ActionEvent_Callback cb) { kurlcomborequester_actionevent_callback = cb; }
    inline void setKUrlComboRequester_DragEnterEvent_Callback(KUrlComboRequester_DragEnterEvent_Callback cb) { kurlcomborequester_dragenterevent_callback = cb; }
    inline void setKUrlComboRequester_DragMoveEvent_Callback(KUrlComboRequester_DragMoveEvent_Callback cb) { kurlcomborequester_dragmoveevent_callback = cb; }
    inline void setKUrlComboRequester_DragLeaveEvent_Callback(KUrlComboRequester_DragLeaveEvent_Callback cb) { kurlcomborequester_dragleaveevent_callback = cb; }
    inline void setKUrlComboRequester_DropEvent_Callback(KUrlComboRequester_DropEvent_Callback cb) { kurlcomborequester_dropevent_callback = cb; }
    inline void setKUrlComboRequester_ShowEvent_Callback(KUrlComboRequester_ShowEvent_Callback cb) { kurlcomborequester_showevent_callback = cb; }
    inline void setKUrlComboRequester_HideEvent_Callback(KUrlComboRequester_HideEvent_Callback cb) { kurlcomborequester_hideevent_callback = cb; }
    inline void setKUrlComboRequester_NativeEvent_Callback(KUrlComboRequester_NativeEvent_Callback cb) { kurlcomborequester_nativeevent_callback = cb; }
    inline void setKUrlComboRequester_Metric_Callback(KUrlComboRequester_Metric_Callback cb) { kurlcomborequester_metric_callback = cb; }
    inline void setKUrlComboRequester_InitPainter_Callback(KUrlComboRequester_InitPainter_Callback cb) { kurlcomborequester_initpainter_callback = cb; }
    inline void setKUrlComboRequester_Redirected_Callback(KUrlComboRequester_Redirected_Callback cb) { kurlcomborequester_redirected_callback = cb; }
    inline void setKUrlComboRequester_SharedPainter_Callback(KUrlComboRequester_SharedPainter_Callback cb) { kurlcomborequester_sharedpainter_callback = cb; }
    inline void setKUrlComboRequester_InputMethodEvent_Callback(KUrlComboRequester_InputMethodEvent_Callback cb) { kurlcomborequester_inputmethodevent_callback = cb; }
    inline void setKUrlComboRequester_InputMethodQuery_Callback(KUrlComboRequester_InputMethodQuery_Callback cb) { kurlcomborequester_inputmethodquery_callback = cb; }
    inline void setKUrlComboRequester_FocusNextPrevChild_Callback(KUrlComboRequester_FocusNextPrevChild_Callback cb) { kurlcomborequester_focusnextprevchild_callback = cb; }
    inline void setKUrlComboRequester_TimerEvent_Callback(KUrlComboRequester_TimerEvent_Callback cb) { kurlcomborequester_timerevent_callback = cb; }
    inline void setKUrlComboRequester_ChildEvent_Callback(KUrlComboRequester_ChildEvent_Callback cb) { kurlcomborequester_childevent_callback = cb; }
    inline void setKUrlComboRequester_CustomEvent_Callback(KUrlComboRequester_CustomEvent_Callback cb) { kurlcomborequester_customevent_callback = cb; }
    inline void setKUrlComboRequester_ConnectNotify_Callback(KUrlComboRequester_ConnectNotify_Callback cb) { kurlcomborequester_connectnotify_callback = cb; }
    inline void setKUrlComboRequester_DisconnectNotify_Callback(KUrlComboRequester_DisconnectNotify_Callback cb) { kurlcomborequester_disconnectnotify_callback = cb; }
    inline void setKUrlComboRequester_UpdateMicroFocus_Callback(KUrlComboRequester_UpdateMicroFocus_Callback cb) { kurlcomborequester_updatemicrofocus_callback = cb; }
    inline void setKUrlComboRequester_Create_Callback(KUrlComboRequester_Create_Callback cb) { kurlcomborequester_create_callback = cb; }
    inline void setKUrlComboRequester_Destroy_Callback(KUrlComboRequester_Destroy_Callback cb) { kurlcomborequester_destroy_callback = cb; }
    inline void setKUrlComboRequester_FocusNextChild_Callback(KUrlComboRequester_FocusNextChild_Callback cb) { kurlcomborequester_focusnextchild_callback = cb; }
    inline void setKUrlComboRequester_FocusPreviousChild_Callback(KUrlComboRequester_FocusPreviousChild_Callback cb) { kurlcomborequester_focuspreviouschild_callback = cb; }
    inline void setKUrlComboRequester_Sender_Callback(KUrlComboRequester_Sender_Callback cb) { kurlcomborequester_sender_callback = cb; }
    inline void setKUrlComboRequester_SenderSignalIndex_Callback(KUrlComboRequester_SenderSignalIndex_Callback cb) { kurlcomborequester_sendersignalindex_callback = cb; }
    inline void setKUrlComboRequester_Receivers_Callback(KUrlComboRequester_Receivers_Callback cb) { kurlcomborequester_receivers_callback = cb; }
    inline void setKUrlComboRequester_IsSignalConnected_Callback(KUrlComboRequester_IsSignalConnected_Callback cb) { kurlcomborequester_issignalconnected_callback = cb; }
    inline void setKUrlComboRequester_GetDecodedMetricF_Callback(KUrlComboRequester_GetDecodedMetricF_Callback cb) { kurlcomborequester_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKUrlComboRequester_Metacall_IsBase(bool value) const { kurlcomborequester_metacall_isbase = value; }
    inline void setKUrlComboRequester_FileDialog_IsBase(bool value) const { kurlcomborequester_filedialog_isbase = value; }
    inline void setKUrlComboRequester_ChangeEvent_IsBase(bool value) const { kurlcomborequester_changeevent_isbase = value; }
    inline void setKUrlComboRequester_EventFilter_IsBase(bool value) const { kurlcomborequester_eventfilter_isbase = value; }
    inline void setKUrlComboRequester_DevType_IsBase(bool value) const { kurlcomborequester_devtype_isbase = value; }
    inline void setKUrlComboRequester_SetVisible_IsBase(bool value) const { kurlcomborequester_setvisible_isbase = value; }
    inline void setKUrlComboRequester_SizeHint_IsBase(bool value) const { kurlcomborequester_sizehint_isbase = value; }
    inline void setKUrlComboRequester_MinimumSizeHint_IsBase(bool value) const { kurlcomborequester_minimumsizehint_isbase = value; }
    inline void setKUrlComboRequester_HeightForWidth_IsBase(bool value) const { kurlcomborequester_heightforwidth_isbase = value; }
    inline void setKUrlComboRequester_HasHeightForWidth_IsBase(bool value) const { kurlcomborequester_hasheightforwidth_isbase = value; }
    inline void setKUrlComboRequester_PaintEngine_IsBase(bool value) const { kurlcomborequester_paintengine_isbase = value; }
    inline void setKUrlComboRequester_Event_IsBase(bool value) const { kurlcomborequester_event_isbase = value; }
    inline void setKUrlComboRequester_MousePressEvent_IsBase(bool value) const { kurlcomborequester_mousepressevent_isbase = value; }
    inline void setKUrlComboRequester_MouseReleaseEvent_IsBase(bool value) const { kurlcomborequester_mousereleaseevent_isbase = value; }
    inline void setKUrlComboRequester_MouseDoubleClickEvent_IsBase(bool value) const { kurlcomborequester_mousedoubleclickevent_isbase = value; }
    inline void setKUrlComboRequester_MouseMoveEvent_IsBase(bool value) const { kurlcomborequester_mousemoveevent_isbase = value; }
    inline void setKUrlComboRequester_WheelEvent_IsBase(bool value) const { kurlcomborequester_wheelevent_isbase = value; }
    inline void setKUrlComboRequester_KeyPressEvent_IsBase(bool value) const { kurlcomborequester_keypressevent_isbase = value; }
    inline void setKUrlComboRequester_KeyReleaseEvent_IsBase(bool value) const { kurlcomborequester_keyreleaseevent_isbase = value; }
    inline void setKUrlComboRequester_FocusInEvent_IsBase(bool value) const { kurlcomborequester_focusinevent_isbase = value; }
    inline void setKUrlComboRequester_FocusOutEvent_IsBase(bool value) const { kurlcomborequester_focusoutevent_isbase = value; }
    inline void setKUrlComboRequester_EnterEvent_IsBase(bool value) const { kurlcomborequester_enterevent_isbase = value; }
    inline void setKUrlComboRequester_LeaveEvent_IsBase(bool value) const { kurlcomborequester_leaveevent_isbase = value; }
    inline void setKUrlComboRequester_PaintEvent_IsBase(bool value) const { kurlcomborequester_paintevent_isbase = value; }
    inline void setKUrlComboRequester_MoveEvent_IsBase(bool value) const { kurlcomborequester_moveevent_isbase = value; }
    inline void setKUrlComboRequester_ResizeEvent_IsBase(bool value) const { kurlcomborequester_resizeevent_isbase = value; }
    inline void setKUrlComboRequester_CloseEvent_IsBase(bool value) const { kurlcomborequester_closeevent_isbase = value; }
    inline void setKUrlComboRequester_ContextMenuEvent_IsBase(bool value) const { kurlcomborequester_contextmenuevent_isbase = value; }
    inline void setKUrlComboRequester_TabletEvent_IsBase(bool value) const { kurlcomborequester_tabletevent_isbase = value; }
    inline void setKUrlComboRequester_ActionEvent_IsBase(bool value) const { kurlcomborequester_actionevent_isbase = value; }
    inline void setKUrlComboRequester_DragEnterEvent_IsBase(bool value) const { kurlcomborequester_dragenterevent_isbase = value; }
    inline void setKUrlComboRequester_DragMoveEvent_IsBase(bool value) const { kurlcomborequester_dragmoveevent_isbase = value; }
    inline void setKUrlComboRequester_DragLeaveEvent_IsBase(bool value) const { kurlcomborequester_dragleaveevent_isbase = value; }
    inline void setKUrlComboRequester_DropEvent_IsBase(bool value) const { kurlcomborequester_dropevent_isbase = value; }
    inline void setKUrlComboRequester_ShowEvent_IsBase(bool value) const { kurlcomborequester_showevent_isbase = value; }
    inline void setKUrlComboRequester_HideEvent_IsBase(bool value) const { kurlcomborequester_hideevent_isbase = value; }
    inline void setKUrlComboRequester_NativeEvent_IsBase(bool value) const { kurlcomborequester_nativeevent_isbase = value; }
    inline void setKUrlComboRequester_Metric_IsBase(bool value) const { kurlcomborequester_metric_isbase = value; }
    inline void setKUrlComboRequester_InitPainter_IsBase(bool value) const { kurlcomborequester_initpainter_isbase = value; }
    inline void setKUrlComboRequester_Redirected_IsBase(bool value) const { kurlcomborequester_redirected_isbase = value; }
    inline void setKUrlComboRequester_SharedPainter_IsBase(bool value) const { kurlcomborequester_sharedpainter_isbase = value; }
    inline void setKUrlComboRequester_InputMethodEvent_IsBase(bool value) const { kurlcomborequester_inputmethodevent_isbase = value; }
    inline void setKUrlComboRequester_InputMethodQuery_IsBase(bool value) const { kurlcomborequester_inputmethodquery_isbase = value; }
    inline void setKUrlComboRequester_FocusNextPrevChild_IsBase(bool value) const { kurlcomborequester_focusnextprevchild_isbase = value; }
    inline void setKUrlComboRequester_TimerEvent_IsBase(bool value) const { kurlcomborequester_timerevent_isbase = value; }
    inline void setKUrlComboRequester_ChildEvent_IsBase(bool value) const { kurlcomborequester_childevent_isbase = value; }
    inline void setKUrlComboRequester_CustomEvent_IsBase(bool value) const { kurlcomborequester_customevent_isbase = value; }
    inline void setKUrlComboRequester_ConnectNotify_IsBase(bool value) const { kurlcomborequester_connectnotify_isbase = value; }
    inline void setKUrlComboRequester_DisconnectNotify_IsBase(bool value) const { kurlcomborequester_disconnectnotify_isbase = value; }
    inline void setKUrlComboRequester_UpdateMicroFocus_IsBase(bool value) const { kurlcomborequester_updatemicrofocus_isbase = value; }
    inline void setKUrlComboRequester_Create_IsBase(bool value) const { kurlcomborequester_create_isbase = value; }
    inline void setKUrlComboRequester_Destroy_IsBase(bool value) const { kurlcomborequester_destroy_isbase = value; }
    inline void setKUrlComboRequester_FocusNextChild_IsBase(bool value) const { kurlcomborequester_focusnextchild_isbase = value; }
    inline void setKUrlComboRequester_FocusPreviousChild_IsBase(bool value) const { kurlcomborequester_focuspreviouschild_isbase = value; }
    inline void setKUrlComboRequester_Sender_IsBase(bool value) const { kurlcomborequester_sender_isbase = value; }
    inline void setKUrlComboRequester_SenderSignalIndex_IsBase(bool value) const { kurlcomborequester_sendersignalindex_isbase = value; }
    inline void setKUrlComboRequester_Receivers_IsBase(bool value) const { kurlcomborequester_receivers_isbase = value; }
    inline void setKUrlComboRequester_IsSignalConnected_IsBase(bool value) const { kurlcomborequester_issignalconnected_isbase = value; }
    inline void setKUrlComboRequester_GetDecodedMetricF_IsBase(bool value) const { kurlcomborequester_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kurlcomborequester_metacall_isbase) {
            kurlcomborequester_metacall_isbase = false;
            return KUrlComboRequester::qt_metacall(param1, param2, param3);
        } else if (kurlcomborequester_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kurlcomborequester_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KUrlComboRequester::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFileDialog* fileDialog() const override {
        if (kurlcomborequester_filedialog_isbase) {
            kurlcomborequester_filedialog_isbase = false;
            return KUrlComboRequester::fileDialog();
        } else if (kurlcomborequester_filedialog_callback != nullptr) {
            QFileDialog* callback_ret = kurlcomborequester_filedialog_callback();
            return callback_ret;
        } else {
            return KUrlComboRequester::fileDialog();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (kurlcomborequester_changeevent_isbase) {
            kurlcomborequester_changeevent_isbase = false;
            KUrlComboRequester::changeEvent(e);
        } else if (kurlcomborequester_changeevent_callback != nullptr) {
            QEvent* cbval1 = e;

            kurlcomborequester_changeevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* obj, QEvent* ev) override {
        if (kurlcomborequester_eventfilter_isbase) {
            kurlcomborequester_eventfilter_isbase = false;
            return KUrlComboRequester::eventFilter(obj, ev);
        } else if (kurlcomborequester_eventfilter_callback != nullptr) {
            QObject* cbval1 = obj;
            QEvent* cbval2 = ev;

            bool callback_ret = kurlcomborequester_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KUrlComboRequester::eventFilter(obj, ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kurlcomborequester_devtype_isbase) {
            kurlcomborequester_devtype_isbase = false;
            return KUrlComboRequester::devType();
        } else if (kurlcomborequester_devtype_callback != nullptr) {
            int callback_ret = kurlcomborequester_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KUrlComboRequester::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kurlcomborequester_setvisible_isbase) {
            kurlcomborequester_setvisible_isbase = false;
            KUrlComboRequester::setVisible(visible);
        } else if (kurlcomborequester_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kurlcomborequester_setvisible_callback(this, cbval1);
        } else {
            KUrlComboRequester::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kurlcomborequester_sizehint_isbase) {
            kurlcomborequester_sizehint_isbase = false;
            return KUrlComboRequester::sizeHint();
        } else if (kurlcomborequester_sizehint_callback != nullptr) {
            QSize* callback_ret = kurlcomborequester_sizehint_callback();
            return *callback_ret;
        } else {
            return KUrlComboRequester::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kurlcomborequester_minimumsizehint_isbase) {
            kurlcomborequester_minimumsizehint_isbase = false;
            return KUrlComboRequester::minimumSizeHint();
        } else if (kurlcomborequester_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kurlcomborequester_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KUrlComboRequester::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kurlcomborequester_heightforwidth_isbase) {
            kurlcomborequester_heightforwidth_isbase = false;
            return KUrlComboRequester::heightForWidth(param1);
        } else if (kurlcomborequester_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kurlcomborequester_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KUrlComboRequester::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kurlcomborequester_hasheightforwidth_isbase) {
            kurlcomborequester_hasheightforwidth_isbase = false;
            return KUrlComboRequester::hasHeightForWidth();
        } else if (kurlcomborequester_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kurlcomborequester_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KUrlComboRequester::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kurlcomborequester_paintengine_isbase) {
            kurlcomborequester_paintengine_isbase = false;
            return KUrlComboRequester::paintEngine();
        } else if (kurlcomborequester_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kurlcomborequester_paintengine_callback();
            return callback_ret;
        } else {
            return KUrlComboRequester::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kurlcomborequester_event_isbase) {
            kurlcomborequester_event_isbase = false;
            return KUrlComboRequester::event(event);
        } else if (kurlcomborequester_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kurlcomborequester_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUrlComboRequester::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kurlcomborequester_mousepressevent_isbase) {
            kurlcomborequester_mousepressevent_isbase = false;
            KUrlComboRequester::mousePressEvent(event);
        } else if (kurlcomborequester_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kurlcomborequester_mousepressevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kurlcomborequester_mousereleaseevent_isbase) {
            kurlcomborequester_mousereleaseevent_isbase = false;
            KUrlComboRequester::mouseReleaseEvent(event);
        } else if (kurlcomborequester_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kurlcomborequester_mousereleaseevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kurlcomborequester_mousedoubleclickevent_isbase) {
            kurlcomborequester_mousedoubleclickevent_isbase = false;
            KUrlComboRequester::mouseDoubleClickEvent(event);
        } else if (kurlcomborequester_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kurlcomborequester_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kurlcomborequester_mousemoveevent_isbase) {
            kurlcomborequester_mousemoveevent_isbase = false;
            KUrlComboRequester::mouseMoveEvent(event);
        } else if (kurlcomborequester_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kurlcomborequester_mousemoveevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kurlcomborequester_wheelevent_isbase) {
            kurlcomborequester_wheelevent_isbase = false;
            KUrlComboRequester::wheelEvent(event);
        } else if (kurlcomborequester_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kurlcomborequester_wheelevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kurlcomborequester_keypressevent_isbase) {
            kurlcomborequester_keypressevent_isbase = false;
            KUrlComboRequester::keyPressEvent(event);
        } else if (kurlcomborequester_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kurlcomborequester_keypressevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kurlcomborequester_keyreleaseevent_isbase) {
            kurlcomborequester_keyreleaseevent_isbase = false;
            KUrlComboRequester::keyReleaseEvent(event);
        } else if (kurlcomborequester_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kurlcomborequester_keyreleaseevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kurlcomborequester_focusinevent_isbase) {
            kurlcomborequester_focusinevent_isbase = false;
            KUrlComboRequester::focusInEvent(event);
        } else if (kurlcomborequester_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kurlcomborequester_focusinevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kurlcomborequester_focusoutevent_isbase) {
            kurlcomborequester_focusoutevent_isbase = false;
            KUrlComboRequester::focusOutEvent(event);
        } else if (kurlcomborequester_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kurlcomborequester_focusoutevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kurlcomborequester_enterevent_isbase) {
            kurlcomborequester_enterevent_isbase = false;
            KUrlComboRequester::enterEvent(event);
        } else if (kurlcomborequester_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kurlcomborequester_enterevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kurlcomborequester_leaveevent_isbase) {
            kurlcomborequester_leaveevent_isbase = false;
            KUrlComboRequester::leaveEvent(event);
        } else if (kurlcomborequester_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kurlcomborequester_leaveevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kurlcomborequester_paintevent_isbase) {
            kurlcomborequester_paintevent_isbase = false;
            KUrlComboRequester::paintEvent(event);
        } else if (kurlcomborequester_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kurlcomborequester_paintevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kurlcomborequester_moveevent_isbase) {
            kurlcomborequester_moveevent_isbase = false;
            KUrlComboRequester::moveEvent(event);
        } else if (kurlcomborequester_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kurlcomborequester_moveevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kurlcomborequester_resizeevent_isbase) {
            kurlcomborequester_resizeevent_isbase = false;
            KUrlComboRequester::resizeEvent(event);
        } else if (kurlcomborequester_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kurlcomborequester_resizeevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kurlcomborequester_closeevent_isbase) {
            kurlcomborequester_closeevent_isbase = false;
            KUrlComboRequester::closeEvent(event);
        } else if (kurlcomborequester_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kurlcomborequester_closeevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kurlcomborequester_contextmenuevent_isbase) {
            kurlcomborequester_contextmenuevent_isbase = false;
            KUrlComboRequester::contextMenuEvent(event);
        } else if (kurlcomborequester_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kurlcomborequester_contextmenuevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kurlcomborequester_tabletevent_isbase) {
            kurlcomborequester_tabletevent_isbase = false;
            KUrlComboRequester::tabletEvent(event);
        } else if (kurlcomborequester_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kurlcomborequester_tabletevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kurlcomborequester_actionevent_isbase) {
            kurlcomborequester_actionevent_isbase = false;
            KUrlComboRequester::actionEvent(event);
        } else if (kurlcomborequester_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kurlcomborequester_actionevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kurlcomborequester_dragenterevent_isbase) {
            kurlcomborequester_dragenterevent_isbase = false;
            KUrlComboRequester::dragEnterEvent(event);
        } else if (kurlcomborequester_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kurlcomborequester_dragenterevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kurlcomborequester_dragmoveevent_isbase) {
            kurlcomborequester_dragmoveevent_isbase = false;
            KUrlComboRequester::dragMoveEvent(event);
        } else if (kurlcomborequester_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kurlcomborequester_dragmoveevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kurlcomborequester_dragleaveevent_isbase) {
            kurlcomborequester_dragleaveevent_isbase = false;
            KUrlComboRequester::dragLeaveEvent(event);
        } else if (kurlcomborequester_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kurlcomborequester_dragleaveevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kurlcomborequester_dropevent_isbase) {
            kurlcomborequester_dropevent_isbase = false;
            KUrlComboRequester::dropEvent(event);
        } else if (kurlcomborequester_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kurlcomborequester_dropevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kurlcomborequester_showevent_isbase) {
            kurlcomborequester_showevent_isbase = false;
            KUrlComboRequester::showEvent(event);
        } else if (kurlcomborequester_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kurlcomborequester_showevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kurlcomborequester_hideevent_isbase) {
            kurlcomborequester_hideevent_isbase = false;
            KUrlComboRequester::hideEvent(event);
        } else if (kurlcomborequester_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kurlcomborequester_hideevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kurlcomborequester_nativeevent_isbase) {
            kurlcomborequester_nativeevent_isbase = false;
            return KUrlComboRequester::nativeEvent(eventType, message, result);
        } else if (kurlcomborequester_nativeevent_callback != nullptr) {
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

            bool callback_ret = kurlcomborequester_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KUrlComboRequester::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kurlcomborequester_metric_isbase) {
            kurlcomborequester_metric_isbase = false;
            return KUrlComboRequester::metric(param1);
        } else if (kurlcomborequester_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kurlcomborequester_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KUrlComboRequester::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kurlcomborequester_initpainter_isbase) {
            kurlcomborequester_initpainter_isbase = false;
            KUrlComboRequester::initPainter(painter);
        } else if (kurlcomborequester_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kurlcomborequester_initpainter_callback(this, cbval1);
        } else {
            KUrlComboRequester::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kurlcomborequester_redirected_isbase) {
            kurlcomborequester_redirected_isbase = false;
            return KUrlComboRequester::redirected(offset);
        } else if (kurlcomborequester_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kurlcomborequester_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUrlComboRequester::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kurlcomborequester_sharedpainter_isbase) {
            kurlcomborequester_sharedpainter_isbase = false;
            return KUrlComboRequester::sharedPainter();
        } else if (kurlcomborequester_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kurlcomborequester_sharedpainter_callback();
            return callback_ret;
        } else {
            return KUrlComboRequester::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kurlcomborequester_inputmethodevent_isbase) {
            kurlcomborequester_inputmethodevent_isbase = false;
            KUrlComboRequester::inputMethodEvent(param1);
        } else if (kurlcomborequester_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kurlcomborequester_inputmethodevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kurlcomborequester_inputmethodquery_isbase) {
            kurlcomborequester_inputmethodquery_isbase = false;
            return KUrlComboRequester::inputMethodQuery(param1);
        } else if (kurlcomborequester_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kurlcomborequester_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KUrlComboRequester::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kurlcomborequester_focusnextprevchild_isbase) {
            kurlcomborequester_focusnextprevchild_isbase = false;
            return KUrlComboRequester::focusNextPrevChild(next);
        } else if (kurlcomborequester_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kurlcomborequester_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUrlComboRequester::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kurlcomborequester_timerevent_isbase) {
            kurlcomborequester_timerevent_isbase = false;
            KUrlComboRequester::timerEvent(event);
        } else if (kurlcomborequester_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kurlcomborequester_timerevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kurlcomborequester_childevent_isbase) {
            kurlcomborequester_childevent_isbase = false;
            KUrlComboRequester::childEvent(event);
        } else if (kurlcomborequester_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kurlcomborequester_childevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kurlcomborequester_customevent_isbase) {
            kurlcomborequester_customevent_isbase = false;
            KUrlComboRequester::customEvent(event);
        } else if (kurlcomborequester_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kurlcomborequester_customevent_callback(this, cbval1);
        } else {
            KUrlComboRequester::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kurlcomborequester_connectnotify_isbase) {
            kurlcomborequester_connectnotify_isbase = false;
            KUrlComboRequester::connectNotify(signal);
        } else if (kurlcomborequester_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kurlcomborequester_connectnotify_callback(this, cbval1);
        } else {
            KUrlComboRequester::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kurlcomborequester_disconnectnotify_isbase) {
            kurlcomborequester_disconnectnotify_isbase = false;
            KUrlComboRequester::disconnectNotify(signal);
        } else if (kurlcomborequester_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kurlcomborequester_disconnectnotify_callback(this, cbval1);
        } else {
            KUrlComboRequester::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kurlcomborequester_updatemicrofocus_isbase) {
            kurlcomborequester_updatemicrofocus_isbase = false;
            KUrlComboRequester::updateMicroFocus();
        } else if (kurlcomborequester_updatemicrofocus_callback != nullptr) {
            kurlcomborequester_updatemicrofocus_callback();
        } else {
            KUrlComboRequester::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kurlcomborequester_create_isbase) {
            kurlcomborequester_create_isbase = false;
            KUrlComboRequester::create();
        } else if (kurlcomborequester_create_callback != nullptr) {
            kurlcomborequester_create_callback();
        } else {
            KUrlComboRequester::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kurlcomborequester_destroy_isbase) {
            kurlcomborequester_destroy_isbase = false;
            KUrlComboRequester::destroy();
        } else if (kurlcomborequester_destroy_callback != nullptr) {
            kurlcomborequester_destroy_callback();
        } else {
            KUrlComboRequester::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kurlcomborequester_focusnextchild_isbase) {
            kurlcomborequester_focusnextchild_isbase = false;
            return KUrlComboRequester::focusNextChild();
        } else if (kurlcomborequester_focusnextchild_callback != nullptr) {
            bool callback_ret = kurlcomborequester_focusnextchild_callback();
            return callback_ret;
        } else {
            return KUrlComboRequester::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kurlcomborequester_focuspreviouschild_isbase) {
            kurlcomborequester_focuspreviouschild_isbase = false;
            return KUrlComboRequester::focusPreviousChild();
        } else if (kurlcomborequester_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kurlcomborequester_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KUrlComboRequester::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kurlcomborequester_sender_isbase) {
            kurlcomborequester_sender_isbase = false;
            return KUrlComboRequester::sender();
        } else if (kurlcomborequester_sender_callback != nullptr) {
            QObject* callback_ret = kurlcomborequester_sender_callback();
            return callback_ret;
        } else {
            return KUrlComboRequester::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kurlcomborequester_sendersignalindex_isbase) {
            kurlcomborequester_sendersignalindex_isbase = false;
            return KUrlComboRequester::senderSignalIndex();
        } else if (kurlcomborequester_sendersignalindex_callback != nullptr) {
            int callback_ret = kurlcomborequester_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KUrlComboRequester::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kurlcomborequester_receivers_isbase) {
            kurlcomborequester_receivers_isbase = false;
            return KUrlComboRequester::receivers(signal);
        } else if (kurlcomborequester_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kurlcomborequester_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KUrlComboRequester::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kurlcomborequester_issignalconnected_isbase) {
            kurlcomborequester_issignalconnected_isbase = false;
            return KUrlComboRequester::isSignalConnected(signal);
        } else if (kurlcomborequester_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kurlcomborequester_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUrlComboRequester::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kurlcomborequester_getdecodedmetricf_isbase) {
            kurlcomborequester_getdecodedmetricf_isbase = false;
            return KUrlComboRequester::getDecodedMetricF(metricA, metricB);
        } else if (kurlcomborequester_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kurlcomborequester_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KUrlComboRequester::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KUrlComboRequester_ChangeEvent(KUrlComboRequester* self, QEvent* e);
    friend void KUrlComboRequester_QBaseChangeEvent(KUrlComboRequester* self, QEvent* e);
    friend bool KUrlComboRequester_EventFilter(KUrlComboRequester* self, QObject* obj, QEvent* ev);
    friend bool KUrlComboRequester_QBaseEventFilter(KUrlComboRequester* self, QObject* obj, QEvent* ev);
    friend bool KUrlComboRequester_Event(KUrlComboRequester* self, QEvent* event);
    friend bool KUrlComboRequester_QBaseEvent(KUrlComboRequester* self, QEvent* event);
    friend void KUrlComboRequester_MousePressEvent(KUrlComboRequester* self, QMouseEvent* event);
    friend void KUrlComboRequester_QBaseMousePressEvent(KUrlComboRequester* self, QMouseEvent* event);
    friend void KUrlComboRequester_MouseReleaseEvent(KUrlComboRequester* self, QMouseEvent* event);
    friend void KUrlComboRequester_QBaseMouseReleaseEvent(KUrlComboRequester* self, QMouseEvent* event);
    friend void KUrlComboRequester_MouseDoubleClickEvent(KUrlComboRequester* self, QMouseEvent* event);
    friend void KUrlComboRequester_QBaseMouseDoubleClickEvent(KUrlComboRequester* self, QMouseEvent* event);
    friend void KUrlComboRequester_MouseMoveEvent(KUrlComboRequester* self, QMouseEvent* event);
    friend void KUrlComboRequester_QBaseMouseMoveEvent(KUrlComboRequester* self, QMouseEvent* event);
    friend void KUrlComboRequester_WheelEvent(KUrlComboRequester* self, QWheelEvent* event);
    friend void KUrlComboRequester_QBaseWheelEvent(KUrlComboRequester* self, QWheelEvent* event);
    friend void KUrlComboRequester_KeyPressEvent(KUrlComboRequester* self, QKeyEvent* event);
    friend void KUrlComboRequester_QBaseKeyPressEvent(KUrlComboRequester* self, QKeyEvent* event);
    friend void KUrlComboRequester_KeyReleaseEvent(KUrlComboRequester* self, QKeyEvent* event);
    friend void KUrlComboRequester_QBaseKeyReleaseEvent(KUrlComboRequester* self, QKeyEvent* event);
    friend void KUrlComboRequester_FocusInEvent(KUrlComboRequester* self, QFocusEvent* event);
    friend void KUrlComboRequester_QBaseFocusInEvent(KUrlComboRequester* self, QFocusEvent* event);
    friend void KUrlComboRequester_FocusOutEvent(KUrlComboRequester* self, QFocusEvent* event);
    friend void KUrlComboRequester_QBaseFocusOutEvent(KUrlComboRequester* self, QFocusEvent* event);
    friend void KUrlComboRequester_EnterEvent(KUrlComboRequester* self, QEnterEvent* event);
    friend void KUrlComboRequester_QBaseEnterEvent(KUrlComboRequester* self, QEnterEvent* event);
    friend void KUrlComboRequester_LeaveEvent(KUrlComboRequester* self, QEvent* event);
    friend void KUrlComboRequester_QBaseLeaveEvent(KUrlComboRequester* self, QEvent* event);
    friend void KUrlComboRequester_PaintEvent(KUrlComboRequester* self, QPaintEvent* event);
    friend void KUrlComboRequester_QBasePaintEvent(KUrlComboRequester* self, QPaintEvent* event);
    friend void KUrlComboRequester_MoveEvent(KUrlComboRequester* self, QMoveEvent* event);
    friend void KUrlComboRequester_QBaseMoveEvent(KUrlComboRequester* self, QMoveEvent* event);
    friend void KUrlComboRequester_ResizeEvent(KUrlComboRequester* self, QResizeEvent* event);
    friend void KUrlComboRequester_QBaseResizeEvent(KUrlComboRequester* self, QResizeEvent* event);
    friend void KUrlComboRequester_CloseEvent(KUrlComboRequester* self, QCloseEvent* event);
    friend void KUrlComboRequester_QBaseCloseEvent(KUrlComboRequester* self, QCloseEvent* event);
    friend void KUrlComboRequester_ContextMenuEvent(KUrlComboRequester* self, QContextMenuEvent* event);
    friend void KUrlComboRequester_QBaseContextMenuEvent(KUrlComboRequester* self, QContextMenuEvent* event);
    friend void KUrlComboRequester_TabletEvent(KUrlComboRequester* self, QTabletEvent* event);
    friend void KUrlComboRequester_QBaseTabletEvent(KUrlComboRequester* self, QTabletEvent* event);
    friend void KUrlComboRequester_ActionEvent(KUrlComboRequester* self, QActionEvent* event);
    friend void KUrlComboRequester_QBaseActionEvent(KUrlComboRequester* self, QActionEvent* event);
    friend void KUrlComboRequester_DragEnterEvent(KUrlComboRequester* self, QDragEnterEvent* event);
    friend void KUrlComboRequester_QBaseDragEnterEvent(KUrlComboRequester* self, QDragEnterEvent* event);
    friend void KUrlComboRequester_DragMoveEvent(KUrlComboRequester* self, QDragMoveEvent* event);
    friend void KUrlComboRequester_QBaseDragMoveEvent(KUrlComboRequester* self, QDragMoveEvent* event);
    friend void KUrlComboRequester_DragLeaveEvent(KUrlComboRequester* self, QDragLeaveEvent* event);
    friend void KUrlComboRequester_QBaseDragLeaveEvent(KUrlComboRequester* self, QDragLeaveEvent* event);
    friend void KUrlComboRequester_DropEvent(KUrlComboRequester* self, QDropEvent* event);
    friend void KUrlComboRequester_QBaseDropEvent(KUrlComboRequester* self, QDropEvent* event);
    friend void KUrlComboRequester_ShowEvent(KUrlComboRequester* self, QShowEvent* event);
    friend void KUrlComboRequester_QBaseShowEvent(KUrlComboRequester* self, QShowEvent* event);
    friend void KUrlComboRequester_HideEvent(KUrlComboRequester* self, QHideEvent* event);
    friend void KUrlComboRequester_QBaseHideEvent(KUrlComboRequester* self, QHideEvent* event);
    friend bool KUrlComboRequester_NativeEvent(KUrlComboRequester* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KUrlComboRequester_QBaseNativeEvent(KUrlComboRequester* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KUrlComboRequester_Metric(const KUrlComboRequester* self, int param1);
    friend int KUrlComboRequester_QBaseMetric(const KUrlComboRequester* self, int param1);
    friend void KUrlComboRequester_InitPainter(const KUrlComboRequester* self, QPainter* painter);
    friend void KUrlComboRequester_QBaseInitPainter(const KUrlComboRequester* self, QPainter* painter);
    friend QPaintDevice* KUrlComboRequester_Redirected(const KUrlComboRequester* self, QPoint* offset);
    friend QPaintDevice* KUrlComboRequester_QBaseRedirected(const KUrlComboRequester* self, QPoint* offset);
    friend QPainter* KUrlComboRequester_SharedPainter(const KUrlComboRequester* self);
    friend QPainter* KUrlComboRequester_QBaseSharedPainter(const KUrlComboRequester* self);
    friend void KUrlComboRequester_InputMethodEvent(KUrlComboRequester* self, QInputMethodEvent* param1);
    friend void KUrlComboRequester_QBaseInputMethodEvent(KUrlComboRequester* self, QInputMethodEvent* param1);
    friend bool KUrlComboRequester_FocusNextPrevChild(KUrlComboRequester* self, bool next);
    friend bool KUrlComboRequester_QBaseFocusNextPrevChild(KUrlComboRequester* self, bool next);
    friend void KUrlComboRequester_TimerEvent(KUrlComboRequester* self, QTimerEvent* event);
    friend void KUrlComboRequester_QBaseTimerEvent(KUrlComboRequester* self, QTimerEvent* event);
    friend void KUrlComboRequester_ChildEvent(KUrlComboRequester* self, QChildEvent* event);
    friend void KUrlComboRequester_QBaseChildEvent(KUrlComboRequester* self, QChildEvent* event);
    friend void KUrlComboRequester_CustomEvent(KUrlComboRequester* self, QEvent* event);
    friend void KUrlComboRequester_QBaseCustomEvent(KUrlComboRequester* self, QEvent* event);
    friend void KUrlComboRequester_ConnectNotify(KUrlComboRequester* self, const QMetaMethod* signal);
    friend void KUrlComboRequester_QBaseConnectNotify(KUrlComboRequester* self, const QMetaMethod* signal);
    friend void KUrlComboRequester_DisconnectNotify(KUrlComboRequester* self, const QMetaMethod* signal);
    friend void KUrlComboRequester_QBaseDisconnectNotify(KUrlComboRequester* self, const QMetaMethod* signal);
    friend void KUrlComboRequester_UpdateMicroFocus(KUrlComboRequester* self);
    friend void KUrlComboRequester_QBaseUpdateMicroFocus(KUrlComboRequester* self);
    friend void KUrlComboRequester_Create(KUrlComboRequester* self);
    friend void KUrlComboRequester_QBaseCreate(KUrlComboRequester* self);
    friend void KUrlComboRequester_Destroy(KUrlComboRequester* self);
    friend void KUrlComboRequester_QBaseDestroy(KUrlComboRequester* self);
    friend bool KUrlComboRequester_FocusNextChild(KUrlComboRequester* self);
    friend bool KUrlComboRequester_QBaseFocusNextChild(KUrlComboRequester* self);
    friend bool KUrlComboRequester_FocusPreviousChild(KUrlComboRequester* self);
    friend bool KUrlComboRequester_QBaseFocusPreviousChild(KUrlComboRequester* self);
    friend QObject* KUrlComboRequester_Sender(const KUrlComboRequester* self);
    friend QObject* KUrlComboRequester_QBaseSender(const KUrlComboRequester* self);
    friend int KUrlComboRequester_SenderSignalIndex(const KUrlComboRequester* self);
    friend int KUrlComboRequester_QBaseSenderSignalIndex(const KUrlComboRequester* self);
    friend int KUrlComboRequester_Receivers(const KUrlComboRequester* self, const char* signal);
    friend int KUrlComboRequester_QBaseReceivers(const KUrlComboRequester* self, const char* signal);
    friend bool KUrlComboRequester_IsSignalConnected(const KUrlComboRequester* self, const QMetaMethod* signal);
    friend bool KUrlComboRequester_QBaseIsSignalConnected(const KUrlComboRequester* self, const QMetaMethod* signal);
    friend double KUrlComboRequester_GetDecodedMetricF(const KUrlComboRequester* self, int metricA, int metricB);
    friend double KUrlComboRequester_QBaseGetDecodedMetricF(const KUrlComboRequester* self, int metricA, int metricB);
};

#endif
