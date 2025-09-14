#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKSSLCERTIFICATEBOX_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKSSLCERTIFICATEBOX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSslCertificateBox so that we can call protected methods
class VirtualKSslCertificateBox final : public KSslCertificateBox {

  public:
    // Virtual class boolean flag
    bool isVirtualKSslCertificateBox = true;

    // Virtual class public types (including callbacks)
    using KSslCertificateBox_Metacall_Callback = int (*)(KSslCertificateBox*, int, int, void**);
    using KSslCertificateBox_DevType_Callback = int (*)();
    using KSslCertificateBox_SetVisible_Callback = void (*)(KSslCertificateBox*, bool);
    using KSslCertificateBox_SizeHint_Callback = QSize* (*)();
    using KSslCertificateBox_MinimumSizeHint_Callback = QSize* (*)();
    using KSslCertificateBox_HeightForWidth_Callback = int (*)(const KSslCertificateBox*, int);
    using KSslCertificateBox_HasHeightForWidth_Callback = bool (*)();
    using KSslCertificateBox_PaintEngine_Callback = QPaintEngine* (*)();
    using KSslCertificateBox_Event_Callback = bool (*)(KSslCertificateBox*, QEvent*);
    using KSslCertificateBox_MousePressEvent_Callback = void (*)(KSslCertificateBox*, QMouseEvent*);
    using KSslCertificateBox_MouseReleaseEvent_Callback = void (*)(KSslCertificateBox*, QMouseEvent*);
    using KSslCertificateBox_MouseDoubleClickEvent_Callback = void (*)(KSslCertificateBox*, QMouseEvent*);
    using KSslCertificateBox_MouseMoveEvent_Callback = void (*)(KSslCertificateBox*, QMouseEvent*);
    using KSslCertificateBox_WheelEvent_Callback = void (*)(KSslCertificateBox*, QWheelEvent*);
    using KSslCertificateBox_KeyPressEvent_Callback = void (*)(KSslCertificateBox*, QKeyEvent*);
    using KSslCertificateBox_KeyReleaseEvent_Callback = void (*)(KSslCertificateBox*, QKeyEvent*);
    using KSslCertificateBox_FocusInEvent_Callback = void (*)(KSslCertificateBox*, QFocusEvent*);
    using KSslCertificateBox_FocusOutEvent_Callback = void (*)(KSslCertificateBox*, QFocusEvent*);
    using KSslCertificateBox_EnterEvent_Callback = void (*)(KSslCertificateBox*, QEnterEvent*);
    using KSslCertificateBox_LeaveEvent_Callback = void (*)(KSslCertificateBox*, QEvent*);
    using KSslCertificateBox_PaintEvent_Callback = void (*)(KSslCertificateBox*, QPaintEvent*);
    using KSslCertificateBox_MoveEvent_Callback = void (*)(KSslCertificateBox*, QMoveEvent*);
    using KSslCertificateBox_ResizeEvent_Callback = void (*)(KSslCertificateBox*, QResizeEvent*);
    using KSslCertificateBox_CloseEvent_Callback = void (*)(KSslCertificateBox*, QCloseEvent*);
    using KSslCertificateBox_ContextMenuEvent_Callback = void (*)(KSslCertificateBox*, QContextMenuEvent*);
    using KSslCertificateBox_TabletEvent_Callback = void (*)(KSslCertificateBox*, QTabletEvent*);
    using KSslCertificateBox_ActionEvent_Callback = void (*)(KSslCertificateBox*, QActionEvent*);
    using KSslCertificateBox_DragEnterEvent_Callback = void (*)(KSslCertificateBox*, QDragEnterEvent*);
    using KSslCertificateBox_DragMoveEvent_Callback = void (*)(KSslCertificateBox*, QDragMoveEvent*);
    using KSslCertificateBox_DragLeaveEvent_Callback = void (*)(KSslCertificateBox*, QDragLeaveEvent*);
    using KSslCertificateBox_DropEvent_Callback = void (*)(KSslCertificateBox*, QDropEvent*);
    using KSslCertificateBox_ShowEvent_Callback = void (*)(KSslCertificateBox*, QShowEvent*);
    using KSslCertificateBox_HideEvent_Callback = void (*)(KSslCertificateBox*, QHideEvent*);
    using KSslCertificateBox_NativeEvent_Callback = bool (*)(KSslCertificateBox*, libqt_string, void*, intptr_t*);
    using KSslCertificateBox_ChangeEvent_Callback = void (*)(KSslCertificateBox*, QEvent*);
    using KSslCertificateBox_Metric_Callback = int (*)(const KSslCertificateBox*, int);
    using KSslCertificateBox_InitPainter_Callback = void (*)(const KSslCertificateBox*, QPainter*);
    using KSslCertificateBox_Redirected_Callback = QPaintDevice* (*)(const KSslCertificateBox*, QPoint*);
    using KSslCertificateBox_SharedPainter_Callback = QPainter* (*)();
    using KSslCertificateBox_InputMethodEvent_Callback = void (*)(KSslCertificateBox*, QInputMethodEvent*);
    using KSslCertificateBox_InputMethodQuery_Callback = QVariant* (*)(const KSslCertificateBox*, int);
    using KSslCertificateBox_FocusNextPrevChild_Callback = bool (*)(KSslCertificateBox*, bool);
    using KSslCertificateBox_EventFilter_Callback = bool (*)(KSslCertificateBox*, QObject*, QEvent*);
    using KSslCertificateBox_TimerEvent_Callback = void (*)(KSslCertificateBox*, QTimerEvent*);
    using KSslCertificateBox_ChildEvent_Callback = void (*)(KSslCertificateBox*, QChildEvent*);
    using KSslCertificateBox_CustomEvent_Callback = void (*)(KSslCertificateBox*, QEvent*);
    using KSslCertificateBox_ConnectNotify_Callback = void (*)(KSslCertificateBox*, QMetaMethod*);
    using KSslCertificateBox_DisconnectNotify_Callback = void (*)(KSslCertificateBox*, QMetaMethod*);
    using KSslCertificateBox_UpdateMicroFocus_Callback = void (*)();
    using KSslCertificateBox_Create_Callback = void (*)();
    using KSslCertificateBox_Destroy_Callback = void (*)();
    using KSslCertificateBox_FocusNextChild_Callback = bool (*)();
    using KSslCertificateBox_FocusPreviousChild_Callback = bool (*)();
    using KSslCertificateBox_Sender_Callback = QObject* (*)();
    using KSslCertificateBox_SenderSignalIndex_Callback = int (*)();
    using KSslCertificateBox_Receivers_Callback = int (*)(const KSslCertificateBox*, const char*);
    using KSslCertificateBox_IsSignalConnected_Callback = bool (*)(const KSslCertificateBox*, QMetaMethod*);
    using KSslCertificateBox_GetDecodedMetricF_Callback = double (*)(const KSslCertificateBox*, int, int);

  protected:
    // Instance callback storage
    KSslCertificateBox_Metacall_Callback ksslcertificatebox_metacall_callback = nullptr;
    KSslCertificateBox_DevType_Callback ksslcertificatebox_devtype_callback = nullptr;
    KSslCertificateBox_SetVisible_Callback ksslcertificatebox_setvisible_callback = nullptr;
    KSslCertificateBox_SizeHint_Callback ksslcertificatebox_sizehint_callback = nullptr;
    KSslCertificateBox_MinimumSizeHint_Callback ksslcertificatebox_minimumsizehint_callback = nullptr;
    KSslCertificateBox_HeightForWidth_Callback ksslcertificatebox_heightforwidth_callback = nullptr;
    KSslCertificateBox_HasHeightForWidth_Callback ksslcertificatebox_hasheightforwidth_callback = nullptr;
    KSslCertificateBox_PaintEngine_Callback ksslcertificatebox_paintengine_callback = nullptr;
    KSslCertificateBox_Event_Callback ksslcertificatebox_event_callback = nullptr;
    KSslCertificateBox_MousePressEvent_Callback ksslcertificatebox_mousepressevent_callback = nullptr;
    KSslCertificateBox_MouseReleaseEvent_Callback ksslcertificatebox_mousereleaseevent_callback = nullptr;
    KSslCertificateBox_MouseDoubleClickEvent_Callback ksslcertificatebox_mousedoubleclickevent_callback = nullptr;
    KSslCertificateBox_MouseMoveEvent_Callback ksslcertificatebox_mousemoveevent_callback = nullptr;
    KSslCertificateBox_WheelEvent_Callback ksslcertificatebox_wheelevent_callback = nullptr;
    KSslCertificateBox_KeyPressEvent_Callback ksslcertificatebox_keypressevent_callback = nullptr;
    KSslCertificateBox_KeyReleaseEvent_Callback ksslcertificatebox_keyreleaseevent_callback = nullptr;
    KSslCertificateBox_FocusInEvent_Callback ksslcertificatebox_focusinevent_callback = nullptr;
    KSslCertificateBox_FocusOutEvent_Callback ksslcertificatebox_focusoutevent_callback = nullptr;
    KSslCertificateBox_EnterEvent_Callback ksslcertificatebox_enterevent_callback = nullptr;
    KSslCertificateBox_LeaveEvent_Callback ksslcertificatebox_leaveevent_callback = nullptr;
    KSslCertificateBox_PaintEvent_Callback ksslcertificatebox_paintevent_callback = nullptr;
    KSslCertificateBox_MoveEvent_Callback ksslcertificatebox_moveevent_callback = nullptr;
    KSslCertificateBox_ResizeEvent_Callback ksslcertificatebox_resizeevent_callback = nullptr;
    KSslCertificateBox_CloseEvent_Callback ksslcertificatebox_closeevent_callback = nullptr;
    KSslCertificateBox_ContextMenuEvent_Callback ksslcertificatebox_contextmenuevent_callback = nullptr;
    KSslCertificateBox_TabletEvent_Callback ksslcertificatebox_tabletevent_callback = nullptr;
    KSslCertificateBox_ActionEvent_Callback ksslcertificatebox_actionevent_callback = nullptr;
    KSslCertificateBox_DragEnterEvent_Callback ksslcertificatebox_dragenterevent_callback = nullptr;
    KSslCertificateBox_DragMoveEvent_Callback ksslcertificatebox_dragmoveevent_callback = nullptr;
    KSslCertificateBox_DragLeaveEvent_Callback ksslcertificatebox_dragleaveevent_callback = nullptr;
    KSslCertificateBox_DropEvent_Callback ksslcertificatebox_dropevent_callback = nullptr;
    KSslCertificateBox_ShowEvent_Callback ksslcertificatebox_showevent_callback = nullptr;
    KSslCertificateBox_HideEvent_Callback ksslcertificatebox_hideevent_callback = nullptr;
    KSslCertificateBox_NativeEvent_Callback ksslcertificatebox_nativeevent_callback = nullptr;
    KSslCertificateBox_ChangeEvent_Callback ksslcertificatebox_changeevent_callback = nullptr;
    KSslCertificateBox_Metric_Callback ksslcertificatebox_metric_callback = nullptr;
    KSslCertificateBox_InitPainter_Callback ksslcertificatebox_initpainter_callback = nullptr;
    KSslCertificateBox_Redirected_Callback ksslcertificatebox_redirected_callback = nullptr;
    KSslCertificateBox_SharedPainter_Callback ksslcertificatebox_sharedpainter_callback = nullptr;
    KSslCertificateBox_InputMethodEvent_Callback ksslcertificatebox_inputmethodevent_callback = nullptr;
    KSslCertificateBox_InputMethodQuery_Callback ksslcertificatebox_inputmethodquery_callback = nullptr;
    KSslCertificateBox_FocusNextPrevChild_Callback ksslcertificatebox_focusnextprevchild_callback = nullptr;
    KSslCertificateBox_EventFilter_Callback ksslcertificatebox_eventfilter_callback = nullptr;
    KSslCertificateBox_TimerEvent_Callback ksslcertificatebox_timerevent_callback = nullptr;
    KSslCertificateBox_ChildEvent_Callback ksslcertificatebox_childevent_callback = nullptr;
    KSslCertificateBox_CustomEvent_Callback ksslcertificatebox_customevent_callback = nullptr;
    KSslCertificateBox_ConnectNotify_Callback ksslcertificatebox_connectnotify_callback = nullptr;
    KSslCertificateBox_DisconnectNotify_Callback ksslcertificatebox_disconnectnotify_callback = nullptr;
    KSslCertificateBox_UpdateMicroFocus_Callback ksslcertificatebox_updatemicrofocus_callback = nullptr;
    KSslCertificateBox_Create_Callback ksslcertificatebox_create_callback = nullptr;
    KSslCertificateBox_Destroy_Callback ksslcertificatebox_destroy_callback = nullptr;
    KSslCertificateBox_FocusNextChild_Callback ksslcertificatebox_focusnextchild_callback = nullptr;
    KSslCertificateBox_FocusPreviousChild_Callback ksslcertificatebox_focuspreviouschild_callback = nullptr;
    KSslCertificateBox_Sender_Callback ksslcertificatebox_sender_callback = nullptr;
    KSslCertificateBox_SenderSignalIndex_Callback ksslcertificatebox_sendersignalindex_callback = nullptr;
    KSslCertificateBox_Receivers_Callback ksslcertificatebox_receivers_callback = nullptr;
    KSslCertificateBox_IsSignalConnected_Callback ksslcertificatebox_issignalconnected_callback = nullptr;
    KSslCertificateBox_GetDecodedMetricF_Callback ksslcertificatebox_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool ksslcertificatebox_metacall_isbase = false;
    mutable bool ksslcertificatebox_devtype_isbase = false;
    mutable bool ksslcertificatebox_setvisible_isbase = false;
    mutable bool ksslcertificatebox_sizehint_isbase = false;
    mutable bool ksslcertificatebox_minimumsizehint_isbase = false;
    mutable bool ksslcertificatebox_heightforwidth_isbase = false;
    mutable bool ksslcertificatebox_hasheightforwidth_isbase = false;
    mutable bool ksslcertificatebox_paintengine_isbase = false;
    mutable bool ksslcertificatebox_event_isbase = false;
    mutable bool ksslcertificatebox_mousepressevent_isbase = false;
    mutable bool ksslcertificatebox_mousereleaseevent_isbase = false;
    mutable bool ksslcertificatebox_mousedoubleclickevent_isbase = false;
    mutable bool ksslcertificatebox_mousemoveevent_isbase = false;
    mutable bool ksslcertificatebox_wheelevent_isbase = false;
    mutable bool ksslcertificatebox_keypressevent_isbase = false;
    mutable bool ksslcertificatebox_keyreleaseevent_isbase = false;
    mutable bool ksslcertificatebox_focusinevent_isbase = false;
    mutable bool ksslcertificatebox_focusoutevent_isbase = false;
    mutable bool ksslcertificatebox_enterevent_isbase = false;
    mutable bool ksslcertificatebox_leaveevent_isbase = false;
    mutable bool ksslcertificatebox_paintevent_isbase = false;
    mutable bool ksslcertificatebox_moveevent_isbase = false;
    mutable bool ksslcertificatebox_resizeevent_isbase = false;
    mutable bool ksslcertificatebox_closeevent_isbase = false;
    mutable bool ksslcertificatebox_contextmenuevent_isbase = false;
    mutable bool ksslcertificatebox_tabletevent_isbase = false;
    mutable bool ksslcertificatebox_actionevent_isbase = false;
    mutable bool ksslcertificatebox_dragenterevent_isbase = false;
    mutable bool ksslcertificatebox_dragmoveevent_isbase = false;
    mutable bool ksslcertificatebox_dragleaveevent_isbase = false;
    mutable bool ksslcertificatebox_dropevent_isbase = false;
    mutable bool ksslcertificatebox_showevent_isbase = false;
    mutable bool ksslcertificatebox_hideevent_isbase = false;
    mutable bool ksslcertificatebox_nativeevent_isbase = false;
    mutable bool ksslcertificatebox_changeevent_isbase = false;
    mutable bool ksslcertificatebox_metric_isbase = false;
    mutable bool ksslcertificatebox_initpainter_isbase = false;
    mutable bool ksslcertificatebox_redirected_isbase = false;
    mutable bool ksslcertificatebox_sharedpainter_isbase = false;
    mutable bool ksslcertificatebox_inputmethodevent_isbase = false;
    mutable bool ksslcertificatebox_inputmethodquery_isbase = false;
    mutable bool ksslcertificatebox_focusnextprevchild_isbase = false;
    mutable bool ksslcertificatebox_eventfilter_isbase = false;
    mutable bool ksslcertificatebox_timerevent_isbase = false;
    mutable bool ksslcertificatebox_childevent_isbase = false;
    mutable bool ksslcertificatebox_customevent_isbase = false;
    mutable bool ksslcertificatebox_connectnotify_isbase = false;
    mutable bool ksslcertificatebox_disconnectnotify_isbase = false;
    mutable bool ksslcertificatebox_updatemicrofocus_isbase = false;
    mutable bool ksslcertificatebox_create_isbase = false;
    mutable bool ksslcertificatebox_destroy_isbase = false;
    mutable bool ksslcertificatebox_focusnextchild_isbase = false;
    mutable bool ksslcertificatebox_focuspreviouschild_isbase = false;
    mutable bool ksslcertificatebox_sender_isbase = false;
    mutable bool ksslcertificatebox_sendersignalindex_isbase = false;
    mutable bool ksslcertificatebox_receivers_isbase = false;
    mutable bool ksslcertificatebox_issignalconnected_isbase = false;
    mutable bool ksslcertificatebox_getdecodedmetricf_isbase = false;

  public:
    VirtualKSslCertificateBox(QWidget* parent) : KSslCertificateBox(parent) {};
    VirtualKSslCertificateBox() : KSslCertificateBox() {};

    ~VirtualKSslCertificateBox() {
        ksslcertificatebox_metacall_callback = nullptr;
        ksslcertificatebox_devtype_callback = nullptr;
        ksslcertificatebox_setvisible_callback = nullptr;
        ksslcertificatebox_sizehint_callback = nullptr;
        ksslcertificatebox_minimumsizehint_callback = nullptr;
        ksslcertificatebox_heightforwidth_callback = nullptr;
        ksslcertificatebox_hasheightforwidth_callback = nullptr;
        ksslcertificatebox_paintengine_callback = nullptr;
        ksslcertificatebox_event_callback = nullptr;
        ksslcertificatebox_mousepressevent_callback = nullptr;
        ksslcertificatebox_mousereleaseevent_callback = nullptr;
        ksslcertificatebox_mousedoubleclickevent_callback = nullptr;
        ksslcertificatebox_mousemoveevent_callback = nullptr;
        ksslcertificatebox_wheelevent_callback = nullptr;
        ksslcertificatebox_keypressevent_callback = nullptr;
        ksslcertificatebox_keyreleaseevent_callback = nullptr;
        ksslcertificatebox_focusinevent_callback = nullptr;
        ksslcertificatebox_focusoutevent_callback = nullptr;
        ksslcertificatebox_enterevent_callback = nullptr;
        ksslcertificatebox_leaveevent_callback = nullptr;
        ksslcertificatebox_paintevent_callback = nullptr;
        ksslcertificatebox_moveevent_callback = nullptr;
        ksslcertificatebox_resizeevent_callback = nullptr;
        ksslcertificatebox_closeevent_callback = nullptr;
        ksslcertificatebox_contextmenuevent_callback = nullptr;
        ksslcertificatebox_tabletevent_callback = nullptr;
        ksslcertificatebox_actionevent_callback = nullptr;
        ksslcertificatebox_dragenterevent_callback = nullptr;
        ksslcertificatebox_dragmoveevent_callback = nullptr;
        ksslcertificatebox_dragleaveevent_callback = nullptr;
        ksslcertificatebox_dropevent_callback = nullptr;
        ksslcertificatebox_showevent_callback = nullptr;
        ksslcertificatebox_hideevent_callback = nullptr;
        ksslcertificatebox_nativeevent_callback = nullptr;
        ksslcertificatebox_changeevent_callback = nullptr;
        ksslcertificatebox_metric_callback = nullptr;
        ksslcertificatebox_initpainter_callback = nullptr;
        ksslcertificatebox_redirected_callback = nullptr;
        ksslcertificatebox_sharedpainter_callback = nullptr;
        ksslcertificatebox_inputmethodevent_callback = nullptr;
        ksslcertificatebox_inputmethodquery_callback = nullptr;
        ksslcertificatebox_focusnextprevchild_callback = nullptr;
        ksslcertificatebox_eventfilter_callback = nullptr;
        ksslcertificatebox_timerevent_callback = nullptr;
        ksslcertificatebox_childevent_callback = nullptr;
        ksslcertificatebox_customevent_callback = nullptr;
        ksslcertificatebox_connectnotify_callback = nullptr;
        ksslcertificatebox_disconnectnotify_callback = nullptr;
        ksslcertificatebox_updatemicrofocus_callback = nullptr;
        ksslcertificatebox_create_callback = nullptr;
        ksslcertificatebox_destroy_callback = nullptr;
        ksslcertificatebox_focusnextchild_callback = nullptr;
        ksslcertificatebox_focuspreviouschild_callback = nullptr;
        ksslcertificatebox_sender_callback = nullptr;
        ksslcertificatebox_sendersignalindex_callback = nullptr;
        ksslcertificatebox_receivers_callback = nullptr;
        ksslcertificatebox_issignalconnected_callback = nullptr;
        ksslcertificatebox_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKSslCertificateBox_Metacall_Callback(KSslCertificateBox_Metacall_Callback cb) { ksslcertificatebox_metacall_callback = cb; }
    inline void setKSslCertificateBox_DevType_Callback(KSslCertificateBox_DevType_Callback cb) { ksslcertificatebox_devtype_callback = cb; }
    inline void setKSslCertificateBox_SetVisible_Callback(KSslCertificateBox_SetVisible_Callback cb) { ksslcertificatebox_setvisible_callback = cb; }
    inline void setKSslCertificateBox_SizeHint_Callback(KSslCertificateBox_SizeHint_Callback cb) { ksslcertificatebox_sizehint_callback = cb; }
    inline void setKSslCertificateBox_MinimumSizeHint_Callback(KSslCertificateBox_MinimumSizeHint_Callback cb) { ksslcertificatebox_minimumsizehint_callback = cb; }
    inline void setKSslCertificateBox_HeightForWidth_Callback(KSslCertificateBox_HeightForWidth_Callback cb) { ksslcertificatebox_heightforwidth_callback = cb; }
    inline void setKSslCertificateBox_HasHeightForWidth_Callback(KSslCertificateBox_HasHeightForWidth_Callback cb) { ksslcertificatebox_hasheightforwidth_callback = cb; }
    inline void setKSslCertificateBox_PaintEngine_Callback(KSslCertificateBox_PaintEngine_Callback cb) { ksslcertificatebox_paintengine_callback = cb; }
    inline void setKSslCertificateBox_Event_Callback(KSslCertificateBox_Event_Callback cb) { ksslcertificatebox_event_callback = cb; }
    inline void setKSslCertificateBox_MousePressEvent_Callback(KSslCertificateBox_MousePressEvent_Callback cb) { ksslcertificatebox_mousepressevent_callback = cb; }
    inline void setKSslCertificateBox_MouseReleaseEvent_Callback(KSslCertificateBox_MouseReleaseEvent_Callback cb) { ksslcertificatebox_mousereleaseevent_callback = cb; }
    inline void setKSslCertificateBox_MouseDoubleClickEvent_Callback(KSslCertificateBox_MouseDoubleClickEvent_Callback cb) { ksslcertificatebox_mousedoubleclickevent_callback = cb; }
    inline void setKSslCertificateBox_MouseMoveEvent_Callback(KSslCertificateBox_MouseMoveEvent_Callback cb) { ksslcertificatebox_mousemoveevent_callback = cb; }
    inline void setKSslCertificateBox_WheelEvent_Callback(KSslCertificateBox_WheelEvent_Callback cb) { ksslcertificatebox_wheelevent_callback = cb; }
    inline void setKSslCertificateBox_KeyPressEvent_Callback(KSslCertificateBox_KeyPressEvent_Callback cb) { ksslcertificatebox_keypressevent_callback = cb; }
    inline void setKSslCertificateBox_KeyReleaseEvent_Callback(KSslCertificateBox_KeyReleaseEvent_Callback cb) { ksslcertificatebox_keyreleaseevent_callback = cb; }
    inline void setKSslCertificateBox_FocusInEvent_Callback(KSslCertificateBox_FocusInEvent_Callback cb) { ksslcertificatebox_focusinevent_callback = cb; }
    inline void setKSslCertificateBox_FocusOutEvent_Callback(KSslCertificateBox_FocusOutEvent_Callback cb) { ksslcertificatebox_focusoutevent_callback = cb; }
    inline void setKSslCertificateBox_EnterEvent_Callback(KSslCertificateBox_EnterEvent_Callback cb) { ksslcertificatebox_enterevent_callback = cb; }
    inline void setKSslCertificateBox_LeaveEvent_Callback(KSslCertificateBox_LeaveEvent_Callback cb) { ksslcertificatebox_leaveevent_callback = cb; }
    inline void setKSslCertificateBox_PaintEvent_Callback(KSslCertificateBox_PaintEvent_Callback cb) { ksslcertificatebox_paintevent_callback = cb; }
    inline void setKSslCertificateBox_MoveEvent_Callback(KSslCertificateBox_MoveEvent_Callback cb) { ksslcertificatebox_moveevent_callback = cb; }
    inline void setKSslCertificateBox_ResizeEvent_Callback(KSslCertificateBox_ResizeEvent_Callback cb) { ksslcertificatebox_resizeevent_callback = cb; }
    inline void setKSslCertificateBox_CloseEvent_Callback(KSslCertificateBox_CloseEvent_Callback cb) { ksslcertificatebox_closeevent_callback = cb; }
    inline void setKSslCertificateBox_ContextMenuEvent_Callback(KSslCertificateBox_ContextMenuEvent_Callback cb) { ksslcertificatebox_contextmenuevent_callback = cb; }
    inline void setKSslCertificateBox_TabletEvent_Callback(KSslCertificateBox_TabletEvent_Callback cb) { ksslcertificatebox_tabletevent_callback = cb; }
    inline void setKSslCertificateBox_ActionEvent_Callback(KSslCertificateBox_ActionEvent_Callback cb) { ksslcertificatebox_actionevent_callback = cb; }
    inline void setKSslCertificateBox_DragEnterEvent_Callback(KSslCertificateBox_DragEnterEvent_Callback cb) { ksslcertificatebox_dragenterevent_callback = cb; }
    inline void setKSslCertificateBox_DragMoveEvent_Callback(KSslCertificateBox_DragMoveEvent_Callback cb) { ksslcertificatebox_dragmoveevent_callback = cb; }
    inline void setKSslCertificateBox_DragLeaveEvent_Callback(KSslCertificateBox_DragLeaveEvent_Callback cb) { ksslcertificatebox_dragleaveevent_callback = cb; }
    inline void setKSslCertificateBox_DropEvent_Callback(KSslCertificateBox_DropEvent_Callback cb) { ksslcertificatebox_dropevent_callback = cb; }
    inline void setKSslCertificateBox_ShowEvent_Callback(KSslCertificateBox_ShowEvent_Callback cb) { ksslcertificatebox_showevent_callback = cb; }
    inline void setKSslCertificateBox_HideEvent_Callback(KSslCertificateBox_HideEvent_Callback cb) { ksslcertificatebox_hideevent_callback = cb; }
    inline void setKSslCertificateBox_NativeEvent_Callback(KSslCertificateBox_NativeEvent_Callback cb) { ksslcertificatebox_nativeevent_callback = cb; }
    inline void setKSslCertificateBox_ChangeEvent_Callback(KSslCertificateBox_ChangeEvent_Callback cb) { ksslcertificatebox_changeevent_callback = cb; }
    inline void setKSslCertificateBox_Metric_Callback(KSslCertificateBox_Metric_Callback cb) { ksslcertificatebox_metric_callback = cb; }
    inline void setKSslCertificateBox_InitPainter_Callback(KSslCertificateBox_InitPainter_Callback cb) { ksslcertificatebox_initpainter_callback = cb; }
    inline void setKSslCertificateBox_Redirected_Callback(KSslCertificateBox_Redirected_Callback cb) { ksslcertificatebox_redirected_callback = cb; }
    inline void setKSslCertificateBox_SharedPainter_Callback(KSslCertificateBox_SharedPainter_Callback cb) { ksslcertificatebox_sharedpainter_callback = cb; }
    inline void setKSslCertificateBox_InputMethodEvent_Callback(KSslCertificateBox_InputMethodEvent_Callback cb) { ksslcertificatebox_inputmethodevent_callback = cb; }
    inline void setKSslCertificateBox_InputMethodQuery_Callback(KSslCertificateBox_InputMethodQuery_Callback cb) { ksslcertificatebox_inputmethodquery_callback = cb; }
    inline void setKSslCertificateBox_FocusNextPrevChild_Callback(KSslCertificateBox_FocusNextPrevChild_Callback cb) { ksslcertificatebox_focusnextprevchild_callback = cb; }
    inline void setKSslCertificateBox_EventFilter_Callback(KSslCertificateBox_EventFilter_Callback cb) { ksslcertificatebox_eventfilter_callback = cb; }
    inline void setKSslCertificateBox_TimerEvent_Callback(KSslCertificateBox_TimerEvent_Callback cb) { ksslcertificatebox_timerevent_callback = cb; }
    inline void setKSslCertificateBox_ChildEvent_Callback(KSslCertificateBox_ChildEvent_Callback cb) { ksslcertificatebox_childevent_callback = cb; }
    inline void setKSslCertificateBox_CustomEvent_Callback(KSslCertificateBox_CustomEvent_Callback cb) { ksslcertificatebox_customevent_callback = cb; }
    inline void setKSslCertificateBox_ConnectNotify_Callback(KSslCertificateBox_ConnectNotify_Callback cb) { ksslcertificatebox_connectnotify_callback = cb; }
    inline void setKSslCertificateBox_DisconnectNotify_Callback(KSslCertificateBox_DisconnectNotify_Callback cb) { ksslcertificatebox_disconnectnotify_callback = cb; }
    inline void setKSslCertificateBox_UpdateMicroFocus_Callback(KSslCertificateBox_UpdateMicroFocus_Callback cb) { ksslcertificatebox_updatemicrofocus_callback = cb; }
    inline void setKSslCertificateBox_Create_Callback(KSslCertificateBox_Create_Callback cb) { ksslcertificatebox_create_callback = cb; }
    inline void setKSslCertificateBox_Destroy_Callback(KSslCertificateBox_Destroy_Callback cb) { ksslcertificatebox_destroy_callback = cb; }
    inline void setKSslCertificateBox_FocusNextChild_Callback(KSslCertificateBox_FocusNextChild_Callback cb) { ksslcertificatebox_focusnextchild_callback = cb; }
    inline void setKSslCertificateBox_FocusPreviousChild_Callback(KSslCertificateBox_FocusPreviousChild_Callback cb) { ksslcertificatebox_focuspreviouschild_callback = cb; }
    inline void setKSslCertificateBox_Sender_Callback(KSslCertificateBox_Sender_Callback cb) { ksslcertificatebox_sender_callback = cb; }
    inline void setKSslCertificateBox_SenderSignalIndex_Callback(KSslCertificateBox_SenderSignalIndex_Callback cb) { ksslcertificatebox_sendersignalindex_callback = cb; }
    inline void setKSslCertificateBox_Receivers_Callback(KSslCertificateBox_Receivers_Callback cb) { ksslcertificatebox_receivers_callback = cb; }
    inline void setKSslCertificateBox_IsSignalConnected_Callback(KSslCertificateBox_IsSignalConnected_Callback cb) { ksslcertificatebox_issignalconnected_callback = cb; }
    inline void setKSslCertificateBox_GetDecodedMetricF_Callback(KSslCertificateBox_GetDecodedMetricF_Callback cb) { ksslcertificatebox_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKSslCertificateBox_Metacall_IsBase(bool value) const { ksslcertificatebox_metacall_isbase = value; }
    inline void setKSslCertificateBox_DevType_IsBase(bool value) const { ksslcertificatebox_devtype_isbase = value; }
    inline void setKSslCertificateBox_SetVisible_IsBase(bool value) const { ksslcertificatebox_setvisible_isbase = value; }
    inline void setKSslCertificateBox_SizeHint_IsBase(bool value) const { ksslcertificatebox_sizehint_isbase = value; }
    inline void setKSslCertificateBox_MinimumSizeHint_IsBase(bool value) const { ksslcertificatebox_minimumsizehint_isbase = value; }
    inline void setKSslCertificateBox_HeightForWidth_IsBase(bool value) const { ksslcertificatebox_heightforwidth_isbase = value; }
    inline void setKSslCertificateBox_HasHeightForWidth_IsBase(bool value) const { ksslcertificatebox_hasheightforwidth_isbase = value; }
    inline void setKSslCertificateBox_PaintEngine_IsBase(bool value) const { ksslcertificatebox_paintengine_isbase = value; }
    inline void setKSslCertificateBox_Event_IsBase(bool value) const { ksslcertificatebox_event_isbase = value; }
    inline void setKSslCertificateBox_MousePressEvent_IsBase(bool value) const { ksslcertificatebox_mousepressevent_isbase = value; }
    inline void setKSslCertificateBox_MouseReleaseEvent_IsBase(bool value) const { ksslcertificatebox_mousereleaseevent_isbase = value; }
    inline void setKSslCertificateBox_MouseDoubleClickEvent_IsBase(bool value) const { ksslcertificatebox_mousedoubleclickevent_isbase = value; }
    inline void setKSslCertificateBox_MouseMoveEvent_IsBase(bool value) const { ksslcertificatebox_mousemoveevent_isbase = value; }
    inline void setKSslCertificateBox_WheelEvent_IsBase(bool value) const { ksslcertificatebox_wheelevent_isbase = value; }
    inline void setKSslCertificateBox_KeyPressEvent_IsBase(bool value) const { ksslcertificatebox_keypressevent_isbase = value; }
    inline void setKSslCertificateBox_KeyReleaseEvent_IsBase(bool value) const { ksslcertificatebox_keyreleaseevent_isbase = value; }
    inline void setKSslCertificateBox_FocusInEvent_IsBase(bool value) const { ksslcertificatebox_focusinevent_isbase = value; }
    inline void setKSslCertificateBox_FocusOutEvent_IsBase(bool value) const { ksslcertificatebox_focusoutevent_isbase = value; }
    inline void setKSslCertificateBox_EnterEvent_IsBase(bool value) const { ksslcertificatebox_enterevent_isbase = value; }
    inline void setKSslCertificateBox_LeaveEvent_IsBase(bool value) const { ksslcertificatebox_leaveevent_isbase = value; }
    inline void setKSslCertificateBox_PaintEvent_IsBase(bool value) const { ksslcertificatebox_paintevent_isbase = value; }
    inline void setKSslCertificateBox_MoveEvent_IsBase(bool value) const { ksslcertificatebox_moveevent_isbase = value; }
    inline void setKSslCertificateBox_ResizeEvent_IsBase(bool value) const { ksslcertificatebox_resizeevent_isbase = value; }
    inline void setKSslCertificateBox_CloseEvent_IsBase(bool value) const { ksslcertificatebox_closeevent_isbase = value; }
    inline void setKSslCertificateBox_ContextMenuEvent_IsBase(bool value) const { ksslcertificatebox_contextmenuevent_isbase = value; }
    inline void setKSslCertificateBox_TabletEvent_IsBase(bool value) const { ksslcertificatebox_tabletevent_isbase = value; }
    inline void setKSslCertificateBox_ActionEvent_IsBase(bool value) const { ksslcertificatebox_actionevent_isbase = value; }
    inline void setKSslCertificateBox_DragEnterEvent_IsBase(bool value) const { ksslcertificatebox_dragenterevent_isbase = value; }
    inline void setKSslCertificateBox_DragMoveEvent_IsBase(bool value) const { ksslcertificatebox_dragmoveevent_isbase = value; }
    inline void setKSslCertificateBox_DragLeaveEvent_IsBase(bool value) const { ksslcertificatebox_dragleaveevent_isbase = value; }
    inline void setKSslCertificateBox_DropEvent_IsBase(bool value) const { ksslcertificatebox_dropevent_isbase = value; }
    inline void setKSslCertificateBox_ShowEvent_IsBase(bool value) const { ksslcertificatebox_showevent_isbase = value; }
    inline void setKSslCertificateBox_HideEvent_IsBase(bool value) const { ksslcertificatebox_hideevent_isbase = value; }
    inline void setKSslCertificateBox_NativeEvent_IsBase(bool value) const { ksslcertificatebox_nativeevent_isbase = value; }
    inline void setKSslCertificateBox_ChangeEvent_IsBase(bool value) const { ksslcertificatebox_changeevent_isbase = value; }
    inline void setKSslCertificateBox_Metric_IsBase(bool value) const { ksslcertificatebox_metric_isbase = value; }
    inline void setKSslCertificateBox_InitPainter_IsBase(bool value) const { ksslcertificatebox_initpainter_isbase = value; }
    inline void setKSslCertificateBox_Redirected_IsBase(bool value) const { ksslcertificatebox_redirected_isbase = value; }
    inline void setKSslCertificateBox_SharedPainter_IsBase(bool value) const { ksslcertificatebox_sharedpainter_isbase = value; }
    inline void setKSslCertificateBox_InputMethodEvent_IsBase(bool value) const { ksslcertificatebox_inputmethodevent_isbase = value; }
    inline void setKSslCertificateBox_InputMethodQuery_IsBase(bool value) const { ksslcertificatebox_inputmethodquery_isbase = value; }
    inline void setKSslCertificateBox_FocusNextPrevChild_IsBase(bool value) const { ksslcertificatebox_focusnextprevchild_isbase = value; }
    inline void setKSslCertificateBox_EventFilter_IsBase(bool value) const { ksslcertificatebox_eventfilter_isbase = value; }
    inline void setKSslCertificateBox_TimerEvent_IsBase(bool value) const { ksslcertificatebox_timerevent_isbase = value; }
    inline void setKSslCertificateBox_ChildEvent_IsBase(bool value) const { ksslcertificatebox_childevent_isbase = value; }
    inline void setKSslCertificateBox_CustomEvent_IsBase(bool value) const { ksslcertificatebox_customevent_isbase = value; }
    inline void setKSslCertificateBox_ConnectNotify_IsBase(bool value) const { ksslcertificatebox_connectnotify_isbase = value; }
    inline void setKSslCertificateBox_DisconnectNotify_IsBase(bool value) const { ksslcertificatebox_disconnectnotify_isbase = value; }
    inline void setKSslCertificateBox_UpdateMicroFocus_IsBase(bool value) const { ksslcertificatebox_updatemicrofocus_isbase = value; }
    inline void setKSslCertificateBox_Create_IsBase(bool value) const { ksslcertificatebox_create_isbase = value; }
    inline void setKSslCertificateBox_Destroy_IsBase(bool value) const { ksslcertificatebox_destroy_isbase = value; }
    inline void setKSslCertificateBox_FocusNextChild_IsBase(bool value) const { ksslcertificatebox_focusnextchild_isbase = value; }
    inline void setKSslCertificateBox_FocusPreviousChild_IsBase(bool value) const { ksslcertificatebox_focuspreviouschild_isbase = value; }
    inline void setKSslCertificateBox_Sender_IsBase(bool value) const { ksslcertificatebox_sender_isbase = value; }
    inline void setKSslCertificateBox_SenderSignalIndex_IsBase(bool value) const { ksslcertificatebox_sendersignalindex_isbase = value; }
    inline void setKSslCertificateBox_Receivers_IsBase(bool value) const { ksslcertificatebox_receivers_isbase = value; }
    inline void setKSslCertificateBox_IsSignalConnected_IsBase(bool value) const { ksslcertificatebox_issignalconnected_isbase = value; }
    inline void setKSslCertificateBox_GetDecodedMetricF_IsBase(bool value) const { ksslcertificatebox_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksslcertificatebox_metacall_isbase) {
            ksslcertificatebox_metacall_isbase = false;
            return KSslCertificateBox::qt_metacall(param1, param2, param3);
        } else if (ksslcertificatebox_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ksslcertificatebox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KSslCertificateBox::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ksslcertificatebox_devtype_isbase) {
            ksslcertificatebox_devtype_isbase = false;
            return KSslCertificateBox::devType();
        } else if (ksslcertificatebox_devtype_callback != nullptr) {
            int callback_ret = ksslcertificatebox_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KSslCertificateBox::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ksslcertificatebox_setvisible_isbase) {
            ksslcertificatebox_setvisible_isbase = false;
            KSslCertificateBox::setVisible(visible);
        } else if (ksslcertificatebox_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            ksslcertificatebox_setvisible_callback(this, cbval1);
        } else {
            KSslCertificateBox::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ksslcertificatebox_sizehint_isbase) {
            ksslcertificatebox_sizehint_isbase = false;
            return KSslCertificateBox::sizeHint();
        } else if (ksslcertificatebox_sizehint_callback != nullptr) {
            QSize* callback_ret = ksslcertificatebox_sizehint_callback();
            return *callback_ret;
        } else {
            return KSslCertificateBox::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ksslcertificatebox_minimumsizehint_isbase) {
            ksslcertificatebox_minimumsizehint_isbase = false;
            return KSslCertificateBox::minimumSizeHint();
        } else if (ksslcertificatebox_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = ksslcertificatebox_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KSslCertificateBox::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ksslcertificatebox_heightforwidth_isbase) {
            ksslcertificatebox_heightforwidth_isbase = false;
            return KSslCertificateBox::heightForWidth(param1);
        } else if (ksslcertificatebox_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = ksslcertificatebox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KSslCertificateBox::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ksslcertificatebox_hasheightforwidth_isbase) {
            ksslcertificatebox_hasheightforwidth_isbase = false;
            return KSslCertificateBox::hasHeightForWidth();
        } else if (ksslcertificatebox_hasheightforwidth_callback != nullptr) {
            bool callback_ret = ksslcertificatebox_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KSslCertificateBox::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ksslcertificatebox_paintengine_isbase) {
            ksslcertificatebox_paintengine_isbase = false;
            return KSslCertificateBox::paintEngine();
        } else if (ksslcertificatebox_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = ksslcertificatebox_paintengine_callback();
            return callback_ret;
        } else {
            return KSslCertificateBox::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ksslcertificatebox_event_isbase) {
            ksslcertificatebox_event_isbase = false;
            return KSslCertificateBox::event(event);
        } else if (ksslcertificatebox_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = ksslcertificatebox_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSslCertificateBox::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (ksslcertificatebox_mousepressevent_isbase) {
            ksslcertificatebox_mousepressevent_isbase = false;
            KSslCertificateBox::mousePressEvent(event);
        } else if (ksslcertificatebox_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ksslcertificatebox_mousepressevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (ksslcertificatebox_mousereleaseevent_isbase) {
            ksslcertificatebox_mousereleaseevent_isbase = false;
            KSslCertificateBox::mouseReleaseEvent(event);
        } else if (ksslcertificatebox_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ksslcertificatebox_mousereleaseevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (ksslcertificatebox_mousedoubleclickevent_isbase) {
            ksslcertificatebox_mousedoubleclickevent_isbase = false;
            KSslCertificateBox::mouseDoubleClickEvent(event);
        } else if (ksslcertificatebox_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ksslcertificatebox_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (ksslcertificatebox_mousemoveevent_isbase) {
            ksslcertificatebox_mousemoveevent_isbase = false;
            KSslCertificateBox::mouseMoveEvent(event);
        } else if (ksslcertificatebox_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ksslcertificatebox_mousemoveevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ksslcertificatebox_wheelevent_isbase) {
            ksslcertificatebox_wheelevent_isbase = false;
            KSslCertificateBox::wheelEvent(event);
        } else if (ksslcertificatebox_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            ksslcertificatebox_wheelevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (ksslcertificatebox_keypressevent_isbase) {
            ksslcertificatebox_keypressevent_isbase = false;
            KSslCertificateBox::keyPressEvent(event);
        } else if (ksslcertificatebox_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            ksslcertificatebox_keypressevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (ksslcertificatebox_keyreleaseevent_isbase) {
            ksslcertificatebox_keyreleaseevent_isbase = false;
            KSslCertificateBox::keyReleaseEvent(event);
        } else if (ksslcertificatebox_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            ksslcertificatebox_keyreleaseevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (ksslcertificatebox_focusinevent_isbase) {
            ksslcertificatebox_focusinevent_isbase = false;
            KSslCertificateBox::focusInEvent(event);
        } else if (ksslcertificatebox_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            ksslcertificatebox_focusinevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (ksslcertificatebox_focusoutevent_isbase) {
            ksslcertificatebox_focusoutevent_isbase = false;
            KSslCertificateBox::focusOutEvent(event);
        } else if (ksslcertificatebox_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            ksslcertificatebox_focusoutevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ksslcertificatebox_enterevent_isbase) {
            ksslcertificatebox_enterevent_isbase = false;
            KSslCertificateBox::enterEvent(event);
        } else if (ksslcertificatebox_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            ksslcertificatebox_enterevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ksslcertificatebox_leaveevent_isbase) {
            ksslcertificatebox_leaveevent_isbase = false;
            KSslCertificateBox::leaveEvent(event);
        } else if (ksslcertificatebox_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ksslcertificatebox_leaveevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (ksslcertificatebox_paintevent_isbase) {
            ksslcertificatebox_paintevent_isbase = false;
            KSslCertificateBox::paintEvent(event);
        } else if (ksslcertificatebox_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            ksslcertificatebox_paintevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ksslcertificatebox_moveevent_isbase) {
            ksslcertificatebox_moveevent_isbase = false;
            KSslCertificateBox::moveEvent(event);
        } else if (ksslcertificatebox_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            ksslcertificatebox_moveevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (ksslcertificatebox_resizeevent_isbase) {
            ksslcertificatebox_resizeevent_isbase = false;
            KSslCertificateBox::resizeEvent(event);
        } else if (ksslcertificatebox_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            ksslcertificatebox_resizeevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ksslcertificatebox_closeevent_isbase) {
            ksslcertificatebox_closeevent_isbase = false;
            KSslCertificateBox::closeEvent(event);
        } else if (ksslcertificatebox_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            ksslcertificatebox_closeevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (ksslcertificatebox_contextmenuevent_isbase) {
            ksslcertificatebox_contextmenuevent_isbase = false;
            KSslCertificateBox::contextMenuEvent(event);
        } else if (ksslcertificatebox_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            ksslcertificatebox_contextmenuevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ksslcertificatebox_tabletevent_isbase) {
            ksslcertificatebox_tabletevent_isbase = false;
            KSslCertificateBox::tabletEvent(event);
        } else if (ksslcertificatebox_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            ksslcertificatebox_tabletevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (ksslcertificatebox_actionevent_isbase) {
            ksslcertificatebox_actionevent_isbase = false;
            KSslCertificateBox::actionEvent(event);
        } else if (ksslcertificatebox_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            ksslcertificatebox_actionevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (ksslcertificatebox_dragenterevent_isbase) {
            ksslcertificatebox_dragenterevent_isbase = false;
            KSslCertificateBox::dragEnterEvent(event);
        } else if (ksslcertificatebox_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            ksslcertificatebox_dragenterevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (ksslcertificatebox_dragmoveevent_isbase) {
            ksslcertificatebox_dragmoveevent_isbase = false;
            KSslCertificateBox::dragMoveEvent(event);
        } else if (ksslcertificatebox_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            ksslcertificatebox_dragmoveevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (ksslcertificatebox_dragleaveevent_isbase) {
            ksslcertificatebox_dragleaveevent_isbase = false;
            KSslCertificateBox::dragLeaveEvent(event);
        } else if (ksslcertificatebox_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            ksslcertificatebox_dragleaveevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (ksslcertificatebox_dropevent_isbase) {
            ksslcertificatebox_dropevent_isbase = false;
            KSslCertificateBox::dropEvent(event);
        } else if (ksslcertificatebox_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            ksslcertificatebox_dropevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (ksslcertificatebox_showevent_isbase) {
            ksslcertificatebox_showevent_isbase = false;
            KSslCertificateBox::showEvent(event);
        } else if (ksslcertificatebox_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            ksslcertificatebox_showevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (ksslcertificatebox_hideevent_isbase) {
            ksslcertificatebox_hideevent_isbase = false;
            KSslCertificateBox::hideEvent(event);
        } else if (ksslcertificatebox_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            ksslcertificatebox_hideevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ksslcertificatebox_nativeevent_isbase) {
            ksslcertificatebox_nativeevent_isbase = false;
            return KSslCertificateBox::nativeEvent(eventType, message, result);
        } else if (ksslcertificatebox_nativeevent_callback != nullptr) {
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

            bool callback_ret = ksslcertificatebox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KSslCertificateBox::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (ksslcertificatebox_changeevent_isbase) {
            ksslcertificatebox_changeevent_isbase = false;
            KSslCertificateBox::changeEvent(param1);
        } else if (ksslcertificatebox_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            ksslcertificatebox_changeevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ksslcertificatebox_metric_isbase) {
            ksslcertificatebox_metric_isbase = false;
            return KSslCertificateBox::metric(param1);
        } else if (ksslcertificatebox_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = ksslcertificatebox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KSslCertificateBox::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ksslcertificatebox_initpainter_isbase) {
            ksslcertificatebox_initpainter_isbase = false;
            KSslCertificateBox::initPainter(painter);
        } else if (ksslcertificatebox_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            ksslcertificatebox_initpainter_callback(this, cbval1);
        } else {
            KSslCertificateBox::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ksslcertificatebox_redirected_isbase) {
            ksslcertificatebox_redirected_isbase = false;
            return KSslCertificateBox::redirected(offset);
        } else if (ksslcertificatebox_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = ksslcertificatebox_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSslCertificateBox::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ksslcertificatebox_sharedpainter_isbase) {
            ksslcertificatebox_sharedpainter_isbase = false;
            return KSslCertificateBox::sharedPainter();
        } else if (ksslcertificatebox_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = ksslcertificatebox_sharedpainter_callback();
            return callback_ret;
        } else {
            return KSslCertificateBox::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ksslcertificatebox_inputmethodevent_isbase) {
            ksslcertificatebox_inputmethodevent_isbase = false;
            KSslCertificateBox::inputMethodEvent(param1);
        } else if (ksslcertificatebox_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            ksslcertificatebox_inputmethodevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ksslcertificatebox_inputmethodquery_isbase) {
            ksslcertificatebox_inputmethodquery_isbase = false;
            return KSslCertificateBox::inputMethodQuery(param1);
        } else if (ksslcertificatebox_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = ksslcertificatebox_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KSslCertificateBox::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ksslcertificatebox_focusnextprevchild_isbase) {
            ksslcertificatebox_focusnextprevchild_isbase = false;
            return KSslCertificateBox::focusNextPrevChild(next);
        } else if (ksslcertificatebox_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = ksslcertificatebox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSslCertificateBox::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ksslcertificatebox_eventfilter_isbase) {
            ksslcertificatebox_eventfilter_isbase = false;
            return KSslCertificateBox::eventFilter(watched, event);
        } else if (ksslcertificatebox_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = ksslcertificatebox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KSslCertificateBox::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ksslcertificatebox_timerevent_isbase) {
            ksslcertificatebox_timerevent_isbase = false;
            KSslCertificateBox::timerEvent(event);
        } else if (ksslcertificatebox_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ksslcertificatebox_timerevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksslcertificatebox_childevent_isbase) {
            ksslcertificatebox_childevent_isbase = false;
            KSslCertificateBox::childEvent(event);
        } else if (ksslcertificatebox_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ksslcertificatebox_childevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksslcertificatebox_customevent_isbase) {
            ksslcertificatebox_customevent_isbase = false;
            KSslCertificateBox::customEvent(event);
        } else if (ksslcertificatebox_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ksslcertificatebox_customevent_callback(this, cbval1);
        } else {
            KSslCertificateBox::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksslcertificatebox_connectnotify_isbase) {
            ksslcertificatebox_connectnotify_isbase = false;
            KSslCertificateBox::connectNotify(signal);
        } else if (ksslcertificatebox_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ksslcertificatebox_connectnotify_callback(this, cbval1);
        } else {
            KSslCertificateBox::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksslcertificatebox_disconnectnotify_isbase) {
            ksslcertificatebox_disconnectnotify_isbase = false;
            KSslCertificateBox::disconnectNotify(signal);
        } else if (ksslcertificatebox_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ksslcertificatebox_disconnectnotify_callback(this, cbval1);
        } else {
            KSslCertificateBox::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (ksslcertificatebox_updatemicrofocus_isbase) {
            ksslcertificatebox_updatemicrofocus_isbase = false;
            KSslCertificateBox::updateMicroFocus();
        } else if (ksslcertificatebox_updatemicrofocus_callback != nullptr) {
            ksslcertificatebox_updatemicrofocus_callback();
        } else {
            KSslCertificateBox::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (ksslcertificatebox_create_isbase) {
            ksslcertificatebox_create_isbase = false;
            KSslCertificateBox::create();
        } else if (ksslcertificatebox_create_callback != nullptr) {
            ksslcertificatebox_create_callback();
        } else {
            KSslCertificateBox::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (ksslcertificatebox_destroy_isbase) {
            ksslcertificatebox_destroy_isbase = false;
            KSslCertificateBox::destroy();
        } else if (ksslcertificatebox_destroy_callback != nullptr) {
            ksslcertificatebox_destroy_callback();
        } else {
            KSslCertificateBox::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (ksslcertificatebox_focusnextchild_isbase) {
            ksslcertificatebox_focusnextchild_isbase = false;
            return KSslCertificateBox::focusNextChild();
        } else if (ksslcertificatebox_focusnextchild_callback != nullptr) {
            bool callback_ret = ksslcertificatebox_focusnextchild_callback();
            return callback_ret;
        } else {
            return KSslCertificateBox::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (ksslcertificatebox_focuspreviouschild_isbase) {
            ksslcertificatebox_focuspreviouschild_isbase = false;
            return KSslCertificateBox::focusPreviousChild();
        } else if (ksslcertificatebox_focuspreviouschild_callback != nullptr) {
            bool callback_ret = ksslcertificatebox_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KSslCertificateBox::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ksslcertificatebox_sender_isbase) {
            ksslcertificatebox_sender_isbase = false;
            return KSslCertificateBox::sender();
        } else if (ksslcertificatebox_sender_callback != nullptr) {
            QObject* callback_ret = ksslcertificatebox_sender_callback();
            return callback_ret;
        } else {
            return KSslCertificateBox::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ksslcertificatebox_sendersignalindex_isbase) {
            ksslcertificatebox_sendersignalindex_isbase = false;
            return KSslCertificateBox::senderSignalIndex();
        } else if (ksslcertificatebox_sendersignalindex_callback != nullptr) {
            int callback_ret = ksslcertificatebox_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KSslCertificateBox::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ksslcertificatebox_receivers_isbase) {
            ksslcertificatebox_receivers_isbase = false;
            return KSslCertificateBox::receivers(signal);
        } else if (ksslcertificatebox_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ksslcertificatebox_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KSslCertificateBox::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ksslcertificatebox_issignalconnected_isbase) {
            ksslcertificatebox_issignalconnected_isbase = false;
            return KSslCertificateBox::isSignalConnected(signal);
        } else if (ksslcertificatebox_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ksslcertificatebox_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSslCertificateBox::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (ksslcertificatebox_getdecodedmetricf_isbase) {
            ksslcertificatebox_getdecodedmetricf_isbase = false;
            return KSslCertificateBox::getDecodedMetricF(metricA, metricB);
        } else if (ksslcertificatebox_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = ksslcertificatebox_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KSslCertificateBox::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KSslCertificateBox_Event(KSslCertificateBox* self, QEvent* event);
    friend bool KSslCertificateBox_QBaseEvent(KSslCertificateBox* self, QEvent* event);
    friend void KSslCertificateBox_MousePressEvent(KSslCertificateBox* self, QMouseEvent* event);
    friend void KSslCertificateBox_QBaseMousePressEvent(KSslCertificateBox* self, QMouseEvent* event);
    friend void KSslCertificateBox_MouseReleaseEvent(KSslCertificateBox* self, QMouseEvent* event);
    friend void KSslCertificateBox_QBaseMouseReleaseEvent(KSslCertificateBox* self, QMouseEvent* event);
    friend void KSslCertificateBox_MouseDoubleClickEvent(KSslCertificateBox* self, QMouseEvent* event);
    friend void KSslCertificateBox_QBaseMouseDoubleClickEvent(KSslCertificateBox* self, QMouseEvent* event);
    friend void KSslCertificateBox_MouseMoveEvent(KSslCertificateBox* self, QMouseEvent* event);
    friend void KSslCertificateBox_QBaseMouseMoveEvent(KSslCertificateBox* self, QMouseEvent* event);
    friend void KSslCertificateBox_WheelEvent(KSslCertificateBox* self, QWheelEvent* event);
    friend void KSslCertificateBox_QBaseWheelEvent(KSslCertificateBox* self, QWheelEvent* event);
    friend void KSslCertificateBox_KeyPressEvent(KSslCertificateBox* self, QKeyEvent* event);
    friend void KSslCertificateBox_QBaseKeyPressEvent(KSslCertificateBox* self, QKeyEvent* event);
    friend void KSslCertificateBox_KeyReleaseEvent(KSslCertificateBox* self, QKeyEvent* event);
    friend void KSslCertificateBox_QBaseKeyReleaseEvent(KSslCertificateBox* self, QKeyEvent* event);
    friend void KSslCertificateBox_FocusInEvent(KSslCertificateBox* self, QFocusEvent* event);
    friend void KSslCertificateBox_QBaseFocusInEvent(KSslCertificateBox* self, QFocusEvent* event);
    friend void KSslCertificateBox_FocusOutEvent(KSslCertificateBox* self, QFocusEvent* event);
    friend void KSslCertificateBox_QBaseFocusOutEvent(KSslCertificateBox* self, QFocusEvent* event);
    friend void KSslCertificateBox_EnterEvent(KSslCertificateBox* self, QEnterEvent* event);
    friend void KSslCertificateBox_QBaseEnterEvent(KSslCertificateBox* self, QEnterEvent* event);
    friend void KSslCertificateBox_LeaveEvent(KSslCertificateBox* self, QEvent* event);
    friend void KSslCertificateBox_QBaseLeaveEvent(KSslCertificateBox* self, QEvent* event);
    friend void KSslCertificateBox_PaintEvent(KSslCertificateBox* self, QPaintEvent* event);
    friend void KSslCertificateBox_QBasePaintEvent(KSslCertificateBox* self, QPaintEvent* event);
    friend void KSslCertificateBox_MoveEvent(KSslCertificateBox* self, QMoveEvent* event);
    friend void KSslCertificateBox_QBaseMoveEvent(KSslCertificateBox* self, QMoveEvent* event);
    friend void KSslCertificateBox_ResizeEvent(KSslCertificateBox* self, QResizeEvent* event);
    friend void KSslCertificateBox_QBaseResizeEvent(KSslCertificateBox* self, QResizeEvent* event);
    friend void KSslCertificateBox_CloseEvent(KSslCertificateBox* self, QCloseEvent* event);
    friend void KSslCertificateBox_QBaseCloseEvent(KSslCertificateBox* self, QCloseEvent* event);
    friend void KSslCertificateBox_ContextMenuEvent(KSslCertificateBox* self, QContextMenuEvent* event);
    friend void KSslCertificateBox_QBaseContextMenuEvent(KSslCertificateBox* self, QContextMenuEvent* event);
    friend void KSslCertificateBox_TabletEvent(KSslCertificateBox* self, QTabletEvent* event);
    friend void KSslCertificateBox_QBaseTabletEvent(KSslCertificateBox* self, QTabletEvent* event);
    friend void KSslCertificateBox_ActionEvent(KSslCertificateBox* self, QActionEvent* event);
    friend void KSslCertificateBox_QBaseActionEvent(KSslCertificateBox* self, QActionEvent* event);
    friend void KSslCertificateBox_DragEnterEvent(KSslCertificateBox* self, QDragEnterEvent* event);
    friend void KSslCertificateBox_QBaseDragEnterEvent(KSslCertificateBox* self, QDragEnterEvent* event);
    friend void KSslCertificateBox_DragMoveEvent(KSslCertificateBox* self, QDragMoveEvent* event);
    friend void KSslCertificateBox_QBaseDragMoveEvent(KSslCertificateBox* self, QDragMoveEvent* event);
    friend void KSslCertificateBox_DragLeaveEvent(KSslCertificateBox* self, QDragLeaveEvent* event);
    friend void KSslCertificateBox_QBaseDragLeaveEvent(KSslCertificateBox* self, QDragLeaveEvent* event);
    friend void KSslCertificateBox_DropEvent(KSslCertificateBox* self, QDropEvent* event);
    friend void KSslCertificateBox_QBaseDropEvent(KSslCertificateBox* self, QDropEvent* event);
    friend void KSslCertificateBox_ShowEvent(KSslCertificateBox* self, QShowEvent* event);
    friend void KSslCertificateBox_QBaseShowEvent(KSslCertificateBox* self, QShowEvent* event);
    friend void KSslCertificateBox_HideEvent(KSslCertificateBox* self, QHideEvent* event);
    friend void KSslCertificateBox_QBaseHideEvent(KSslCertificateBox* self, QHideEvent* event);
    friend bool KSslCertificateBox_NativeEvent(KSslCertificateBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KSslCertificateBox_QBaseNativeEvent(KSslCertificateBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KSslCertificateBox_ChangeEvent(KSslCertificateBox* self, QEvent* param1);
    friend void KSslCertificateBox_QBaseChangeEvent(KSslCertificateBox* self, QEvent* param1);
    friend int KSslCertificateBox_Metric(const KSslCertificateBox* self, int param1);
    friend int KSslCertificateBox_QBaseMetric(const KSslCertificateBox* self, int param1);
    friend void KSslCertificateBox_InitPainter(const KSslCertificateBox* self, QPainter* painter);
    friend void KSslCertificateBox_QBaseInitPainter(const KSslCertificateBox* self, QPainter* painter);
    friend QPaintDevice* KSslCertificateBox_Redirected(const KSslCertificateBox* self, QPoint* offset);
    friend QPaintDevice* KSslCertificateBox_QBaseRedirected(const KSslCertificateBox* self, QPoint* offset);
    friend QPainter* KSslCertificateBox_SharedPainter(const KSslCertificateBox* self);
    friend QPainter* KSslCertificateBox_QBaseSharedPainter(const KSslCertificateBox* self);
    friend void KSslCertificateBox_InputMethodEvent(KSslCertificateBox* self, QInputMethodEvent* param1);
    friend void KSslCertificateBox_QBaseInputMethodEvent(KSslCertificateBox* self, QInputMethodEvent* param1);
    friend bool KSslCertificateBox_FocusNextPrevChild(KSslCertificateBox* self, bool next);
    friend bool KSslCertificateBox_QBaseFocusNextPrevChild(KSslCertificateBox* self, bool next);
    friend void KSslCertificateBox_TimerEvent(KSslCertificateBox* self, QTimerEvent* event);
    friend void KSslCertificateBox_QBaseTimerEvent(KSslCertificateBox* self, QTimerEvent* event);
    friend void KSslCertificateBox_ChildEvent(KSslCertificateBox* self, QChildEvent* event);
    friend void KSslCertificateBox_QBaseChildEvent(KSslCertificateBox* self, QChildEvent* event);
    friend void KSslCertificateBox_CustomEvent(KSslCertificateBox* self, QEvent* event);
    friend void KSslCertificateBox_QBaseCustomEvent(KSslCertificateBox* self, QEvent* event);
    friend void KSslCertificateBox_ConnectNotify(KSslCertificateBox* self, const QMetaMethod* signal);
    friend void KSslCertificateBox_QBaseConnectNotify(KSslCertificateBox* self, const QMetaMethod* signal);
    friend void KSslCertificateBox_DisconnectNotify(KSslCertificateBox* self, const QMetaMethod* signal);
    friend void KSslCertificateBox_QBaseDisconnectNotify(KSslCertificateBox* self, const QMetaMethod* signal);
    friend void KSslCertificateBox_UpdateMicroFocus(KSslCertificateBox* self);
    friend void KSslCertificateBox_QBaseUpdateMicroFocus(KSslCertificateBox* self);
    friend void KSslCertificateBox_Create(KSslCertificateBox* self);
    friend void KSslCertificateBox_QBaseCreate(KSslCertificateBox* self);
    friend void KSslCertificateBox_Destroy(KSslCertificateBox* self);
    friend void KSslCertificateBox_QBaseDestroy(KSslCertificateBox* self);
    friend bool KSslCertificateBox_FocusNextChild(KSslCertificateBox* self);
    friend bool KSslCertificateBox_QBaseFocusNextChild(KSslCertificateBox* self);
    friend bool KSslCertificateBox_FocusPreviousChild(KSslCertificateBox* self);
    friend bool KSslCertificateBox_QBaseFocusPreviousChild(KSslCertificateBox* self);
    friend QObject* KSslCertificateBox_Sender(const KSslCertificateBox* self);
    friend QObject* KSslCertificateBox_QBaseSender(const KSslCertificateBox* self);
    friend int KSslCertificateBox_SenderSignalIndex(const KSslCertificateBox* self);
    friend int KSslCertificateBox_QBaseSenderSignalIndex(const KSslCertificateBox* self);
    friend int KSslCertificateBox_Receivers(const KSslCertificateBox* self, const char* signal);
    friend int KSslCertificateBox_QBaseReceivers(const KSslCertificateBox* self, const char* signal);
    friend bool KSslCertificateBox_IsSignalConnected(const KSslCertificateBox* self, const QMetaMethod* signal);
    friend bool KSslCertificateBox_QBaseIsSignalConnected(const KSslCertificateBox* self, const QMetaMethod* signal);
    friend double KSslCertificateBox_GetDecodedMetricF(const KSslCertificateBox* self, int metricA, int metricB);
    friend double KSslCertificateBox_QBaseGetDecodedMetricF(const KSslCertificateBox* self, int metricA, int metricB);
};

#endif
