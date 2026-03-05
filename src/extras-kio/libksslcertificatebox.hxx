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
    using KSslCertificateBox_MetaObject_Callback = QMetaObject* (*)();
    using KSslCertificateBox_Metacast_Callback = void* (*)(KSslCertificateBox*, const char*);
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
    KSslCertificateBox_MetaObject_Callback ksslcertificatebox_metaobject_callback = nullptr;
    KSslCertificateBox_Metacast_Callback ksslcertificatebox_metacast_callback = nullptr;
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
    mutable bool ksslcertificatebox_metaobject_isbase = false;
    mutable bool ksslcertificatebox_metacast_isbase = false;
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

    // Callback setters
    inline void setKSslCertificateBox_MetaObject_Callback(KSslCertificateBox_MetaObject_Callback cb) { ksslcertificatebox_metaobject_callback = cb; }
    inline void setKSslCertificateBox_Metacast_Callback(KSslCertificateBox_Metacast_Callback cb) { ksslcertificatebox_metacast_callback = cb; }
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
    inline void setKSslCertificateBox_MetaObject_IsBase(bool value) const { ksslcertificatebox_metaobject_isbase = value; }
    inline void setKSslCertificateBox_Metacast_IsBase(bool value) const { ksslcertificatebox_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (ksslcertificatebox_metaobject_isbase) {
            ksslcertificatebox_metaobject_isbase = false;
            return KSslCertificateBox::metaObject();
        }
        auto metaobject_cb = ksslcertificatebox_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KSslCertificateBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ksslcertificatebox_metacast_isbase) {
            ksslcertificatebox_metacast_isbase = false;
            return KSslCertificateBox::qt_metacast(param1);
        }
        auto metacast_cb = ksslcertificatebox_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KSslCertificateBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksslcertificatebox_metacall_isbase) {
            ksslcertificatebox_metacall_isbase = false;
            return KSslCertificateBox::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = ksslcertificatebox_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSslCertificateBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ksslcertificatebox_devtype_isbase) {
            ksslcertificatebox_devtype_isbase = false;
            return KSslCertificateBox::devType();
        }
        auto devtype_cb = ksslcertificatebox_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KSslCertificateBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ksslcertificatebox_setvisible_isbase) {
            ksslcertificatebox_setvisible_isbase = false;
            KSslCertificateBox::setVisible(visible);
            return;
        }
        auto setvisible_cb = ksslcertificatebox_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ksslcertificatebox_sizehint_isbase) {
            ksslcertificatebox_sizehint_isbase = false;
            return KSslCertificateBox::sizeHint();
        }
        auto sizehint_cb = ksslcertificatebox_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KSslCertificateBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ksslcertificatebox_minimumsizehint_isbase) {
            ksslcertificatebox_minimumsizehint_isbase = false;
            return KSslCertificateBox::minimumSizeHint();
        }
        auto minimumsizehint_cb = ksslcertificatebox_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KSslCertificateBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ksslcertificatebox_heightforwidth_isbase) {
            ksslcertificatebox_heightforwidth_isbase = false;
            return KSslCertificateBox::heightForWidth(param1);
        }
        auto heightforwidth_cb = ksslcertificatebox_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSslCertificateBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ksslcertificatebox_hasheightforwidth_isbase) {
            ksslcertificatebox_hasheightforwidth_isbase = false;
            return KSslCertificateBox::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = ksslcertificatebox_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KSslCertificateBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ksslcertificatebox_paintengine_isbase) {
            ksslcertificatebox_paintengine_isbase = false;
            return KSslCertificateBox::paintEngine();
        }
        auto paintengine_cb = ksslcertificatebox_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KSslCertificateBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ksslcertificatebox_event_isbase) {
            ksslcertificatebox_event_isbase = false;
            return KSslCertificateBox::event(event);
        }
        auto event_cb = ksslcertificatebox_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KSslCertificateBox::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (ksslcertificatebox_mousepressevent_isbase) {
            ksslcertificatebox_mousepressevent_isbase = false;
            KSslCertificateBox::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = ksslcertificatebox_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (ksslcertificatebox_mousereleaseevent_isbase) {
            ksslcertificatebox_mousereleaseevent_isbase = false;
            KSslCertificateBox::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = ksslcertificatebox_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (ksslcertificatebox_mousedoubleclickevent_isbase) {
            ksslcertificatebox_mousedoubleclickevent_isbase = false;
            KSslCertificateBox::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = ksslcertificatebox_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (ksslcertificatebox_mousemoveevent_isbase) {
            ksslcertificatebox_mousemoveevent_isbase = false;
            KSslCertificateBox::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = ksslcertificatebox_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ksslcertificatebox_wheelevent_isbase) {
            ksslcertificatebox_wheelevent_isbase = false;
            KSslCertificateBox::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = ksslcertificatebox_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (ksslcertificatebox_keypressevent_isbase) {
            ksslcertificatebox_keypressevent_isbase = false;
            KSslCertificateBox::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = ksslcertificatebox_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (ksslcertificatebox_keyreleaseevent_isbase) {
            ksslcertificatebox_keyreleaseevent_isbase = false;
            KSslCertificateBox::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = ksslcertificatebox_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (ksslcertificatebox_focusinevent_isbase) {
            ksslcertificatebox_focusinevent_isbase = false;
            KSslCertificateBox::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = ksslcertificatebox_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (ksslcertificatebox_focusoutevent_isbase) {
            ksslcertificatebox_focusoutevent_isbase = false;
            KSslCertificateBox::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = ksslcertificatebox_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ksslcertificatebox_enterevent_isbase) {
            ksslcertificatebox_enterevent_isbase = false;
            KSslCertificateBox::enterEvent(event);
            return;
        }
        auto enterevent_cb = ksslcertificatebox_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ksslcertificatebox_leaveevent_isbase) {
            ksslcertificatebox_leaveevent_isbase = false;
            KSslCertificateBox::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = ksslcertificatebox_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (ksslcertificatebox_paintevent_isbase) {
            ksslcertificatebox_paintevent_isbase = false;
            KSslCertificateBox::paintEvent(event);
            return;
        }
        auto paintevent_cb = ksslcertificatebox_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ksslcertificatebox_moveevent_isbase) {
            ksslcertificatebox_moveevent_isbase = false;
            KSslCertificateBox::moveEvent(event);
            return;
        }
        auto moveevent_cb = ksslcertificatebox_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (ksslcertificatebox_resizeevent_isbase) {
            ksslcertificatebox_resizeevent_isbase = false;
            KSslCertificateBox::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = ksslcertificatebox_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ksslcertificatebox_closeevent_isbase) {
            ksslcertificatebox_closeevent_isbase = false;
            KSslCertificateBox::closeEvent(event);
            return;
        }
        auto closeevent_cb = ksslcertificatebox_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (ksslcertificatebox_contextmenuevent_isbase) {
            ksslcertificatebox_contextmenuevent_isbase = false;
            KSslCertificateBox::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = ksslcertificatebox_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ksslcertificatebox_tabletevent_isbase) {
            ksslcertificatebox_tabletevent_isbase = false;
            KSslCertificateBox::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = ksslcertificatebox_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (ksslcertificatebox_actionevent_isbase) {
            ksslcertificatebox_actionevent_isbase = false;
            KSslCertificateBox::actionEvent(event);
            return;
        }
        auto actionevent_cb = ksslcertificatebox_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (ksslcertificatebox_dragenterevent_isbase) {
            ksslcertificatebox_dragenterevent_isbase = false;
            KSslCertificateBox::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = ksslcertificatebox_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (ksslcertificatebox_dragmoveevent_isbase) {
            ksslcertificatebox_dragmoveevent_isbase = false;
            KSslCertificateBox::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = ksslcertificatebox_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (ksslcertificatebox_dragleaveevent_isbase) {
            ksslcertificatebox_dragleaveevent_isbase = false;
            KSslCertificateBox::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = ksslcertificatebox_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (ksslcertificatebox_dropevent_isbase) {
            ksslcertificatebox_dropevent_isbase = false;
            KSslCertificateBox::dropEvent(event);
            return;
        }
        auto dropevent_cb = ksslcertificatebox_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (ksslcertificatebox_showevent_isbase) {
            ksslcertificatebox_showevent_isbase = false;
            KSslCertificateBox::showEvent(event);
            return;
        }
        auto showevent_cb = ksslcertificatebox_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (ksslcertificatebox_hideevent_isbase) {
            ksslcertificatebox_hideevent_isbase = false;
            KSslCertificateBox::hideEvent(event);
            return;
        }
        auto hideevent_cb = ksslcertificatebox_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ksslcertificatebox_nativeevent_isbase) {
            ksslcertificatebox_nativeevent_isbase = false;
            return KSslCertificateBox::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = ksslcertificatebox_nativeevent_callback;
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
        return KSslCertificateBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (ksslcertificatebox_changeevent_isbase) {
            ksslcertificatebox_changeevent_isbase = false;
            KSslCertificateBox::changeEvent(param1);
            return;
        }
        auto changeevent_cb = ksslcertificatebox_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ksslcertificatebox_metric_isbase) {
            ksslcertificatebox_metric_isbase = false;
            return KSslCertificateBox::metric(param1);
        }
        auto metric_cb = ksslcertificatebox_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSslCertificateBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ksslcertificatebox_initpainter_isbase) {
            ksslcertificatebox_initpainter_isbase = false;
            KSslCertificateBox::initPainter(painter);
            return;
        }
        auto initpainter_cb = ksslcertificatebox_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ksslcertificatebox_redirected_isbase) {
            ksslcertificatebox_redirected_isbase = false;
            return KSslCertificateBox::redirected(offset);
        }
        auto redirected_cb = ksslcertificatebox_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KSslCertificateBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ksslcertificatebox_sharedpainter_isbase) {
            ksslcertificatebox_sharedpainter_isbase = false;
            return KSslCertificateBox::sharedPainter();
        }
        auto sharedpainter_cb = ksslcertificatebox_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KSslCertificateBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ksslcertificatebox_inputmethodevent_isbase) {
            ksslcertificatebox_inputmethodevent_isbase = false;
            KSslCertificateBox::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = ksslcertificatebox_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ksslcertificatebox_inputmethodquery_isbase) {
            ksslcertificatebox_inputmethodquery_isbase = false;
            return KSslCertificateBox::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = ksslcertificatebox_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KSslCertificateBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ksslcertificatebox_focusnextprevchild_isbase) {
            ksslcertificatebox_focusnextprevchild_isbase = false;
            return KSslCertificateBox::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = ksslcertificatebox_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KSslCertificateBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ksslcertificatebox_eventfilter_isbase) {
            ksslcertificatebox_eventfilter_isbase = false;
            return KSslCertificateBox::eventFilter(watched, event);
        }
        auto eventfilter_cb = ksslcertificatebox_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KSslCertificateBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ksslcertificatebox_timerevent_isbase) {
            ksslcertificatebox_timerevent_isbase = false;
            KSslCertificateBox::timerEvent(event);
            return;
        }
        auto timerevent_cb = ksslcertificatebox_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksslcertificatebox_childevent_isbase) {
            ksslcertificatebox_childevent_isbase = false;
            KSslCertificateBox::childEvent(event);
            return;
        }
        auto childevent_cb = ksslcertificatebox_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksslcertificatebox_customevent_isbase) {
            ksslcertificatebox_customevent_isbase = false;
            KSslCertificateBox::customEvent(event);
            return;
        }
        auto customevent_cb = ksslcertificatebox_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksslcertificatebox_connectnotify_isbase) {
            ksslcertificatebox_connectnotify_isbase = false;
            KSslCertificateBox::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = ksslcertificatebox_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksslcertificatebox_disconnectnotify_isbase) {
            ksslcertificatebox_disconnectnotify_isbase = false;
            KSslCertificateBox::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = ksslcertificatebox_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KSslCertificateBox::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (ksslcertificatebox_updatemicrofocus_isbase) {
            ksslcertificatebox_updatemicrofocus_isbase = false;
            KSslCertificateBox::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = ksslcertificatebox_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KSslCertificateBox::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (ksslcertificatebox_create_isbase) {
            ksslcertificatebox_create_isbase = false;
            KSslCertificateBox::create();
            return;
        }
        auto create_cb = ksslcertificatebox_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KSslCertificateBox::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (ksslcertificatebox_destroy_isbase) {
            ksslcertificatebox_destroy_isbase = false;
            KSslCertificateBox::destroy();
            return;
        }
        auto destroy_cb = ksslcertificatebox_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KSslCertificateBox::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (ksslcertificatebox_focusnextchild_isbase) {
            ksslcertificatebox_focusnextchild_isbase = false;
            return KSslCertificateBox::focusNextChild();
        }
        auto focusnextchild_cb = ksslcertificatebox_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KSslCertificateBox::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (ksslcertificatebox_focuspreviouschild_isbase) {
            ksslcertificatebox_focuspreviouschild_isbase = false;
            return KSslCertificateBox::focusPreviousChild();
        }
        auto focuspreviouschild_cb = ksslcertificatebox_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KSslCertificateBox::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ksslcertificatebox_sender_isbase) {
            ksslcertificatebox_sender_isbase = false;
            return KSslCertificateBox::sender();
        }
        auto sender_cb = ksslcertificatebox_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KSslCertificateBox::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ksslcertificatebox_sendersignalindex_isbase) {
            ksslcertificatebox_sendersignalindex_isbase = false;
            return KSslCertificateBox::senderSignalIndex();
        }
        auto sendersignalindex_cb = ksslcertificatebox_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KSslCertificateBox::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ksslcertificatebox_receivers_isbase) {
            ksslcertificatebox_receivers_isbase = false;
            return KSslCertificateBox::receivers(signal);
        }
        auto receivers_cb = ksslcertificatebox_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSslCertificateBox::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ksslcertificatebox_issignalconnected_isbase) {
            ksslcertificatebox_issignalconnected_isbase = false;
            return KSslCertificateBox::isSignalConnected(signal);
        }
        auto issignalconnected_cb = ksslcertificatebox_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KSslCertificateBox::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (ksslcertificatebox_getdecodedmetricf_isbase) {
            ksslcertificatebox_getdecodedmetricf_isbase = false;
            return KSslCertificateBox::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = ksslcertificatebox_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KSslCertificateBox::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool KSslCertificateBox_Event(KSslCertificateBox* self, QEvent* event);
    friend bool KSslCertificateBox_SuperEvent(KSslCertificateBox* self, QEvent* event);
    friend void KSslCertificateBox_MousePressEvent(KSslCertificateBox* self, QMouseEvent* event);
    friend void KSslCertificateBox_SuperMousePressEvent(KSslCertificateBox* self, QMouseEvent* event);
    friend void KSslCertificateBox_MouseReleaseEvent(KSslCertificateBox* self, QMouseEvent* event);
    friend void KSslCertificateBox_SuperMouseReleaseEvent(KSslCertificateBox* self, QMouseEvent* event);
    friend void KSslCertificateBox_MouseDoubleClickEvent(KSslCertificateBox* self, QMouseEvent* event);
    friend void KSslCertificateBox_SuperMouseDoubleClickEvent(KSslCertificateBox* self, QMouseEvent* event);
    friend void KSslCertificateBox_MouseMoveEvent(KSslCertificateBox* self, QMouseEvent* event);
    friend void KSslCertificateBox_SuperMouseMoveEvent(KSslCertificateBox* self, QMouseEvent* event);
    friend void KSslCertificateBox_WheelEvent(KSslCertificateBox* self, QWheelEvent* event);
    friend void KSslCertificateBox_SuperWheelEvent(KSslCertificateBox* self, QWheelEvent* event);
    friend void KSslCertificateBox_KeyPressEvent(KSslCertificateBox* self, QKeyEvent* event);
    friend void KSslCertificateBox_SuperKeyPressEvent(KSslCertificateBox* self, QKeyEvent* event);
    friend void KSslCertificateBox_KeyReleaseEvent(KSslCertificateBox* self, QKeyEvent* event);
    friend void KSslCertificateBox_SuperKeyReleaseEvent(KSslCertificateBox* self, QKeyEvent* event);
    friend void KSslCertificateBox_FocusInEvent(KSslCertificateBox* self, QFocusEvent* event);
    friend void KSslCertificateBox_SuperFocusInEvent(KSslCertificateBox* self, QFocusEvent* event);
    friend void KSslCertificateBox_FocusOutEvent(KSslCertificateBox* self, QFocusEvent* event);
    friend void KSslCertificateBox_SuperFocusOutEvent(KSslCertificateBox* self, QFocusEvent* event);
    friend void KSslCertificateBox_EnterEvent(KSslCertificateBox* self, QEnterEvent* event);
    friend void KSslCertificateBox_SuperEnterEvent(KSslCertificateBox* self, QEnterEvent* event);
    friend void KSslCertificateBox_LeaveEvent(KSslCertificateBox* self, QEvent* event);
    friend void KSslCertificateBox_SuperLeaveEvent(KSslCertificateBox* self, QEvent* event);
    friend void KSslCertificateBox_PaintEvent(KSslCertificateBox* self, QPaintEvent* event);
    friend void KSslCertificateBox_SuperPaintEvent(KSslCertificateBox* self, QPaintEvent* event);
    friend void KSslCertificateBox_MoveEvent(KSslCertificateBox* self, QMoveEvent* event);
    friend void KSslCertificateBox_SuperMoveEvent(KSslCertificateBox* self, QMoveEvent* event);
    friend void KSslCertificateBox_ResizeEvent(KSslCertificateBox* self, QResizeEvent* event);
    friend void KSslCertificateBox_SuperResizeEvent(KSslCertificateBox* self, QResizeEvent* event);
    friend void KSslCertificateBox_CloseEvent(KSslCertificateBox* self, QCloseEvent* event);
    friend void KSslCertificateBox_SuperCloseEvent(KSslCertificateBox* self, QCloseEvent* event);
    friend void KSslCertificateBox_ContextMenuEvent(KSslCertificateBox* self, QContextMenuEvent* event);
    friend void KSslCertificateBox_SuperContextMenuEvent(KSslCertificateBox* self, QContextMenuEvent* event);
    friend void KSslCertificateBox_TabletEvent(KSslCertificateBox* self, QTabletEvent* event);
    friend void KSslCertificateBox_SuperTabletEvent(KSslCertificateBox* self, QTabletEvent* event);
    friend void KSslCertificateBox_ActionEvent(KSslCertificateBox* self, QActionEvent* event);
    friend void KSslCertificateBox_SuperActionEvent(KSslCertificateBox* self, QActionEvent* event);
    friend void KSslCertificateBox_DragEnterEvent(KSslCertificateBox* self, QDragEnterEvent* event);
    friend void KSslCertificateBox_SuperDragEnterEvent(KSslCertificateBox* self, QDragEnterEvent* event);
    friend void KSslCertificateBox_DragMoveEvent(KSslCertificateBox* self, QDragMoveEvent* event);
    friend void KSslCertificateBox_SuperDragMoveEvent(KSslCertificateBox* self, QDragMoveEvent* event);
    friend void KSslCertificateBox_DragLeaveEvent(KSslCertificateBox* self, QDragLeaveEvent* event);
    friend void KSslCertificateBox_SuperDragLeaveEvent(KSslCertificateBox* self, QDragLeaveEvent* event);
    friend void KSslCertificateBox_DropEvent(KSslCertificateBox* self, QDropEvent* event);
    friend void KSslCertificateBox_SuperDropEvent(KSslCertificateBox* self, QDropEvent* event);
    friend void KSslCertificateBox_ShowEvent(KSslCertificateBox* self, QShowEvent* event);
    friend void KSslCertificateBox_SuperShowEvent(KSslCertificateBox* self, QShowEvent* event);
    friend void KSslCertificateBox_HideEvent(KSslCertificateBox* self, QHideEvent* event);
    friend void KSslCertificateBox_SuperHideEvent(KSslCertificateBox* self, QHideEvent* event);
    friend bool KSslCertificateBox_NativeEvent(KSslCertificateBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KSslCertificateBox_SuperNativeEvent(KSslCertificateBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KSslCertificateBox_ChangeEvent(KSslCertificateBox* self, QEvent* param1);
    friend void KSslCertificateBox_SuperChangeEvent(KSslCertificateBox* self, QEvent* param1);
    friend int KSslCertificateBox_Metric(const KSslCertificateBox* self, int param1);
    friend int KSslCertificateBox_SuperMetric(const KSslCertificateBox* self, int param1);
    friend void KSslCertificateBox_InitPainter(const KSslCertificateBox* self, QPainter* painter);
    friend void KSslCertificateBox_SuperInitPainter(const KSslCertificateBox* self, QPainter* painter);
    friend QPaintDevice* KSslCertificateBox_Redirected(const KSslCertificateBox* self, QPoint* offset);
    friend QPaintDevice* KSslCertificateBox_SuperRedirected(const KSslCertificateBox* self, QPoint* offset);
    friend QPainter* KSslCertificateBox_SharedPainter(const KSslCertificateBox* self);
    friend QPainter* KSslCertificateBox_SuperSharedPainter(const KSslCertificateBox* self);
    friend void KSslCertificateBox_InputMethodEvent(KSslCertificateBox* self, QInputMethodEvent* param1);
    friend void KSslCertificateBox_SuperInputMethodEvent(KSslCertificateBox* self, QInputMethodEvent* param1);
    friend bool KSslCertificateBox_FocusNextPrevChild(KSslCertificateBox* self, bool next);
    friend bool KSslCertificateBox_SuperFocusNextPrevChild(KSslCertificateBox* self, bool next);
    friend void KSslCertificateBox_TimerEvent(KSslCertificateBox* self, QTimerEvent* event);
    friend void KSslCertificateBox_SuperTimerEvent(KSslCertificateBox* self, QTimerEvent* event);
    friend void KSslCertificateBox_ChildEvent(KSslCertificateBox* self, QChildEvent* event);
    friend void KSslCertificateBox_SuperChildEvent(KSslCertificateBox* self, QChildEvent* event);
    friend void KSslCertificateBox_CustomEvent(KSslCertificateBox* self, QEvent* event);
    friend void KSslCertificateBox_SuperCustomEvent(KSslCertificateBox* self, QEvent* event);
    friend void KSslCertificateBox_ConnectNotify(KSslCertificateBox* self, const QMetaMethod* signal);
    friend void KSslCertificateBox_SuperConnectNotify(KSslCertificateBox* self, const QMetaMethod* signal);
    friend void KSslCertificateBox_DisconnectNotify(KSslCertificateBox* self, const QMetaMethod* signal);
    friend void KSslCertificateBox_SuperDisconnectNotify(KSslCertificateBox* self, const QMetaMethod* signal);
    friend void KSslCertificateBox_UpdateMicroFocus(KSslCertificateBox* self);
    friend void KSslCertificateBox_SuperUpdateMicroFocus(KSslCertificateBox* self);
    friend void KSslCertificateBox_Create(KSslCertificateBox* self);
    friend void KSslCertificateBox_SuperCreate(KSslCertificateBox* self);
    friend void KSslCertificateBox_Destroy(KSslCertificateBox* self);
    friend void KSslCertificateBox_SuperDestroy(KSslCertificateBox* self);
    friend bool KSslCertificateBox_FocusNextChild(KSslCertificateBox* self);
    friend bool KSslCertificateBox_SuperFocusNextChild(KSslCertificateBox* self);
    friend bool KSslCertificateBox_FocusPreviousChild(KSslCertificateBox* self);
    friend bool KSslCertificateBox_SuperFocusPreviousChild(KSslCertificateBox* self);
    friend QObject* KSslCertificateBox_Sender(const KSslCertificateBox* self);
    friend QObject* KSslCertificateBox_SuperSender(const KSslCertificateBox* self);
    friend int KSslCertificateBox_SenderSignalIndex(const KSslCertificateBox* self);
    friend int KSslCertificateBox_SuperSenderSignalIndex(const KSslCertificateBox* self);
    friend int KSslCertificateBox_Receivers(const KSslCertificateBox* self, const char* signal);
    friend int KSslCertificateBox_SuperReceivers(const KSslCertificateBox* self, const char* signal);
    friend bool KSslCertificateBox_IsSignalConnected(const KSslCertificateBox* self, const QMetaMethod* signal);
    friend bool KSslCertificateBox_SuperIsSignalConnected(const KSslCertificateBox* self, const QMetaMethod* signal);
    friend double KSslCertificateBox_GetDecodedMetricF(const KSslCertificateBox* self, int metricA, int metricB);
    friend double KSslCertificateBox_SuperGetDecodedMetricF(const KSslCertificateBox* self, int metricA, int metricB);
};

#endif
