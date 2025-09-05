#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKKEYSEQUENCEWIDGET_H
#define SRC_EXTRAS_KXMLGUIC_LIBVIRTUALKKEYSEQUENCEWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KKeySequenceWidget so that we can call protected methods
class VirtualKKeySequenceWidget final : public KKeySequenceWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualKKeySequenceWidget = true;

    // Virtual class public types (including callbacks)
    using KKeySequenceWidget_Metacall_Callback = int (*)(KKeySequenceWidget*, int, int, void**);
    using KKeySequenceWidget_DevType_Callback = int (*)();
    using KKeySequenceWidget_SetVisible_Callback = void (*)(KKeySequenceWidget*, bool);
    using KKeySequenceWidget_SizeHint_Callback = QSize* (*)();
    using KKeySequenceWidget_MinimumSizeHint_Callback = QSize* (*)();
    using KKeySequenceWidget_HeightForWidth_Callback = int (*)(const KKeySequenceWidget*, int);
    using KKeySequenceWidget_HasHeightForWidth_Callback = bool (*)();
    using KKeySequenceWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using KKeySequenceWidget_MousePressEvent_Callback = void (*)(KKeySequenceWidget*, QMouseEvent*);
    using KKeySequenceWidget_MouseReleaseEvent_Callback = void (*)(KKeySequenceWidget*, QMouseEvent*);
    using KKeySequenceWidget_MouseDoubleClickEvent_Callback = void (*)(KKeySequenceWidget*, QMouseEvent*);
    using KKeySequenceWidget_MouseMoveEvent_Callback = void (*)(KKeySequenceWidget*, QMouseEvent*);
    using KKeySequenceWidget_WheelEvent_Callback = void (*)(KKeySequenceWidget*, QWheelEvent*);
    using KKeySequenceWidget_KeyPressEvent_Callback = void (*)(KKeySequenceWidget*, QKeyEvent*);
    using KKeySequenceWidget_KeyReleaseEvent_Callback = void (*)(KKeySequenceWidget*, QKeyEvent*);
    using KKeySequenceWidget_FocusInEvent_Callback = void (*)(KKeySequenceWidget*, QFocusEvent*);
    using KKeySequenceWidget_FocusOutEvent_Callback = void (*)(KKeySequenceWidget*, QFocusEvent*);
    using KKeySequenceWidget_EnterEvent_Callback = void (*)(KKeySequenceWidget*, QEnterEvent*);
    using KKeySequenceWidget_LeaveEvent_Callback = void (*)(KKeySequenceWidget*, QEvent*);
    using KKeySequenceWidget_PaintEvent_Callback = void (*)(KKeySequenceWidget*, QPaintEvent*);
    using KKeySequenceWidget_MoveEvent_Callback = void (*)(KKeySequenceWidget*, QMoveEvent*);
    using KKeySequenceWidget_ResizeEvent_Callback = void (*)(KKeySequenceWidget*, QResizeEvent*);
    using KKeySequenceWidget_CloseEvent_Callback = void (*)(KKeySequenceWidget*, QCloseEvent*);
    using KKeySequenceWidget_ContextMenuEvent_Callback = void (*)(KKeySequenceWidget*, QContextMenuEvent*);
    using KKeySequenceWidget_TabletEvent_Callback = void (*)(KKeySequenceWidget*, QTabletEvent*);
    using KKeySequenceWidget_ActionEvent_Callback = void (*)(KKeySequenceWidget*, QActionEvent*);
    using KKeySequenceWidget_DragEnterEvent_Callback = void (*)(KKeySequenceWidget*, QDragEnterEvent*);
    using KKeySequenceWidget_DragMoveEvent_Callback = void (*)(KKeySequenceWidget*, QDragMoveEvent*);
    using KKeySequenceWidget_DragLeaveEvent_Callback = void (*)(KKeySequenceWidget*, QDragLeaveEvent*);
    using KKeySequenceWidget_DropEvent_Callback = void (*)(KKeySequenceWidget*, QDropEvent*);
    using KKeySequenceWidget_ShowEvent_Callback = void (*)(KKeySequenceWidget*, QShowEvent*);
    using KKeySequenceWidget_HideEvent_Callback = void (*)(KKeySequenceWidget*, QHideEvent*);
    using KKeySequenceWidget_NativeEvent_Callback = bool (*)(KKeySequenceWidget*, libqt_string, void*, intptr_t*);
    using KKeySequenceWidget_ChangeEvent_Callback = void (*)(KKeySequenceWidget*, QEvent*);
    using KKeySequenceWidget_Metric_Callback = int (*)(const KKeySequenceWidget*, int);
    using KKeySequenceWidget_InitPainter_Callback = void (*)(const KKeySequenceWidget*, QPainter*);
    using KKeySequenceWidget_Redirected_Callback = QPaintDevice* (*)(const KKeySequenceWidget*, QPoint*);
    using KKeySequenceWidget_SharedPainter_Callback = QPainter* (*)();
    using KKeySequenceWidget_InputMethodEvent_Callback = void (*)(KKeySequenceWidget*, QInputMethodEvent*);
    using KKeySequenceWidget_InputMethodQuery_Callback = QVariant* (*)(const KKeySequenceWidget*, int);
    using KKeySequenceWidget_FocusNextPrevChild_Callback = bool (*)(KKeySequenceWidget*, bool);
    using KKeySequenceWidget_EventFilter_Callback = bool (*)(KKeySequenceWidget*, QObject*, QEvent*);
    using KKeySequenceWidget_TimerEvent_Callback = void (*)(KKeySequenceWidget*, QTimerEvent*);
    using KKeySequenceWidget_ChildEvent_Callback = void (*)(KKeySequenceWidget*, QChildEvent*);
    using KKeySequenceWidget_CustomEvent_Callback = void (*)(KKeySequenceWidget*, QEvent*);
    using KKeySequenceWidget_ConnectNotify_Callback = void (*)(KKeySequenceWidget*, QMetaMethod*);
    using KKeySequenceWidget_DisconnectNotify_Callback = void (*)(KKeySequenceWidget*, QMetaMethod*);
    using KKeySequenceWidget_UpdateMicroFocus_Callback = void (*)();
    using KKeySequenceWidget_Create_Callback = void (*)();
    using KKeySequenceWidget_Destroy_Callback = void (*)();
    using KKeySequenceWidget_FocusNextChild_Callback = bool (*)();
    using KKeySequenceWidget_FocusPreviousChild_Callback = bool (*)();
    using KKeySequenceWidget_Sender_Callback = QObject* (*)();
    using KKeySequenceWidget_SenderSignalIndex_Callback = int (*)();
    using KKeySequenceWidget_Receivers_Callback = int (*)(const KKeySequenceWidget*, const char*);
    using KKeySequenceWidget_IsSignalConnected_Callback = bool (*)(const KKeySequenceWidget*, QMetaMethod*);
    using KKeySequenceWidget_GetDecodedMetricF_Callback = double (*)(const KKeySequenceWidget*, int, int);

  protected:
    // Instance callback storage
    KKeySequenceWidget_Metacall_Callback kkeysequencewidget_metacall_callback = nullptr;
    KKeySequenceWidget_DevType_Callback kkeysequencewidget_devtype_callback = nullptr;
    KKeySequenceWidget_SetVisible_Callback kkeysequencewidget_setvisible_callback = nullptr;
    KKeySequenceWidget_SizeHint_Callback kkeysequencewidget_sizehint_callback = nullptr;
    KKeySequenceWidget_MinimumSizeHint_Callback kkeysequencewidget_minimumsizehint_callback = nullptr;
    KKeySequenceWidget_HeightForWidth_Callback kkeysequencewidget_heightforwidth_callback = nullptr;
    KKeySequenceWidget_HasHeightForWidth_Callback kkeysequencewidget_hasheightforwidth_callback = nullptr;
    KKeySequenceWidget_PaintEngine_Callback kkeysequencewidget_paintengine_callback = nullptr;
    KKeySequenceWidget_MousePressEvent_Callback kkeysequencewidget_mousepressevent_callback = nullptr;
    KKeySequenceWidget_MouseReleaseEvent_Callback kkeysequencewidget_mousereleaseevent_callback = nullptr;
    KKeySequenceWidget_MouseDoubleClickEvent_Callback kkeysequencewidget_mousedoubleclickevent_callback = nullptr;
    KKeySequenceWidget_MouseMoveEvent_Callback kkeysequencewidget_mousemoveevent_callback = nullptr;
    KKeySequenceWidget_WheelEvent_Callback kkeysequencewidget_wheelevent_callback = nullptr;
    KKeySequenceWidget_KeyPressEvent_Callback kkeysequencewidget_keypressevent_callback = nullptr;
    KKeySequenceWidget_KeyReleaseEvent_Callback kkeysequencewidget_keyreleaseevent_callback = nullptr;
    KKeySequenceWidget_FocusInEvent_Callback kkeysequencewidget_focusinevent_callback = nullptr;
    KKeySequenceWidget_FocusOutEvent_Callback kkeysequencewidget_focusoutevent_callback = nullptr;
    KKeySequenceWidget_EnterEvent_Callback kkeysequencewidget_enterevent_callback = nullptr;
    KKeySequenceWidget_LeaveEvent_Callback kkeysequencewidget_leaveevent_callback = nullptr;
    KKeySequenceWidget_PaintEvent_Callback kkeysequencewidget_paintevent_callback = nullptr;
    KKeySequenceWidget_MoveEvent_Callback kkeysequencewidget_moveevent_callback = nullptr;
    KKeySequenceWidget_ResizeEvent_Callback kkeysequencewidget_resizeevent_callback = nullptr;
    KKeySequenceWidget_CloseEvent_Callback kkeysequencewidget_closeevent_callback = nullptr;
    KKeySequenceWidget_ContextMenuEvent_Callback kkeysequencewidget_contextmenuevent_callback = nullptr;
    KKeySequenceWidget_TabletEvent_Callback kkeysequencewidget_tabletevent_callback = nullptr;
    KKeySequenceWidget_ActionEvent_Callback kkeysequencewidget_actionevent_callback = nullptr;
    KKeySequenceWidget_DragEnterEvent_Callback kkeysequencewidget_dragenterevent_callback = nullptr;
    KKeySequenceWidget_DragMoveEvent_Callback kkeysequencewidget_dragmoveevent_callback = nullptr;
    KKeySequenceWidget_DragLeaveEvent_Callback kkeysequencewidget_dragleaveevent_callback = nullptr;
    KKeySequenceWidget_DropEvent_Callback kkeysequencewidget_dropevent_callback = nullptr;
    KKeySequenceWidget_ShowEvent_Callback kkeysequencewidget_showevent_callback = nullptr;
    KKeySequenceWidget_HideEvent_Callback kkeysequencewidget_hideevent_callback = nullptr;
    KKeySequenceWidget_NativeEvent_Callback kkeysequencewidget_nativeevent_callback = nullptr;
    KKeySequenceWidget_ChangeEvent_Callback kkeysequencewidget_changeevent_callback = nullptr;
    KKeySequenceWidget_Metric_Callback kkeysequencewidget_metric_callback = nullptr;
    KKeySequenceWidget_InitPainter_Callback kkeysequencewidget_initpainter_callback = nullptr;
    KKeySequenceWidget_Redirected_Callback kkeysequencewidget_redirected_callback = nullptr;
    KKeySequenceWidget_SharedPainter_Callback kkeysequencewidget_sharedpainter_callback = nullptr;
    KKeySequenceWidget_InputMethodEvent_Callback kkeysequencewidget_inputmethodevent_callback = nullptr;
    KKeySequenceWidget_InputMethodQuery_Callback kkeysequencewidget_inputmethodquery_callback = nullptr;
    KKeySequenceWidget_FocusNextPrevChild_Callback kkeysequencewidget_focusnextprevchild_callback = nullptr;
    KKeySequenceWidget_EventFilter_Callback kkeysequencewidget_eventfilter_callback = nullptr;
    KKeySequenceWidget_TimerEvent_Callback kkeysequencewidget_timerevent_callback = nullptr;
    KKeySequenceWidget_ChildEvent_Callback kkeysequencewidget_childevent_callback = nullptr;
    KKeySequenceWidget_CustomEvent_Callback kkeysequencewidget_customevent_callback = nullptr;
    KKeySequenceWidget_ConnectNotify_Callback kkeysequencewidget_connectnotify_callback = nullptr;
    KKeySequenceWidget_DisconnectNotify_Callback kkeysequencewidget_disconnectnotify_callback = nullptr;
    KKeySequenceWidget_UpdateMicroFocus_Callback kkeysequencewidget_updatemicrofocus_callback = nullptr;
    KKeySequenceWidget_Create_Callback kkeysequencewidget_create_callback = nullptr;
    KKeySequenceWidget_Destroy_Callback kkeysequencewidget_destroy_callback = nullptr;
    KKeySequenceWidget_FocusNextChild_Callback kkeysequencewidget_focusnextchild_callback = nullptr;
    KKeySequenceWidget_FocusPreviousChild_Callback kkeysequencewidget_focuspreviouschild_callback = nullptr;
    KKeySequenceWidget_Sender_Callback kkeysequencewidget_sender_callback = nullptr;
    KKeySequenceWidget_SenderSignalIndex_Callback kkeysequencewidget_sendersignalindex_callback = nullptr;
    KKeySequenceWidget_Receivers_Callback kkeysequencewidget_receivers_callback = nullptr;
    KKeySequenceWidget_IsSignalConnected_Callback kkeysequencewidget_issignalconnected_callback = nullptr;
    KKeySequenceWidget_GetDecodedMetricF_Callback kkeysequencewidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kkeysequencewidget_metacall_isbase = false;
    mutable bool kkeysequencewidget_devtype_isbase = false;
    mutable bool kkeysequencewidget_setvisible_isbase = false;
    mutable bool kkeysequencewidget_sizehint_isbase = false;
    mutable bool kkeysequencewidget_minimumsizehint_isbase = false;
    mutable bool kkeysequencewidget_heightforwidth_isbase = false;
    mutable bool kkeysequencewidget_hasheightforwidth_isbase = false;
    mutable bool kkeysequencewidget_paintengine_isbase = false;
    mutable bool kkeysequencewidget_mousepressevent_isbase = false;
    mutable bool kkeysequencewidget_mousereleaseevent_isbase = false;
    mutable bool kkeysequencewidget_mousedoubleclickevent_isbase = false;
    mutable bool kkeysequencewidget_mousemoveevent_isbase = false;
    mutable bool kkeysequencewidget_wheelevent_isbase = false;
    mutable bool kkeysequencewidget_keypressevent_isbase = false;
    mutable bool kkeysequencewidget_keyreleaseevent_isbase = false;
    mutable bool kkeysequencewidget_focusinevent_isbase = false;
    mutable bool kkeysequencewidget_focusoutevent_isbase = false;
    mutable bool kkeysequencewidget_enterevent_isbase = false;
    mutable bool kkeysequencewidget_leaveevent_isbase = false;
    mutable bool kkeysequencewidget_paintevent_isbase = false;
    mutable bool kkeysequencewidget_moveevent_isbase = false;
    mutable bool kkeysequencewidget_resizeevent_isbase = false;
    mutable bool kkeysequencewidget_closeevent_isbase = false;
    mutable bool kkeysequencewidget_contextmenuevent_isbase = false;
    mutable bool kkeysequencewidget_tabletevent_isbase = false;
    mutable bool kkeysequencewidget_actionevent_isbase = false;
    mutable bool kkeysequencewidget_dragenterevent_isbase = false;
    mutable bool kkeysequencewidget_dragmoveevent_isbase = false;
    mutable bool kkeysequencewidget_dragleaveevent_isbase = false;
    mutable bool kkeysequencewidget_dropevent_isbase = false;
    mutable bool kkeysequencewidget_showevent_isbase = false;
    mutable bool kkeysequencewidget_hideevent_isbase = false;
    mutable bool kkeysequencewidget_nativeevent_isbase = false;
    mutable bool kkeysequencewidget_changeevent_isbase = false;
    mutable bool kkeysequencewidget_metric_isbase = false;
    mutable bool kkeysequencewidget_initpainter_isbase = false;
    mutable bool kkeysequencewidget_redirected_isbase = false;
    mutable bool kkeysequencewidget_sharedpainter_isbase = false;
    mutable bool kkeysequencewidget_inputmethodevent_isbase = false;
    mutable bool kkeysequencewidget_inputmethodquery_isbase = false;
    mutable bool kkeysequencewidget_focusnextprevchild_isbase = false;
    mutable bool kkeysequencewidget_eventfilter_isbase = false;
    mutable bool kkeysequencewidget_timerevent_isbase = false;
    mutable bool kkeysequencewidget_childevent_isbase = false;
    mutable bool kkeysequencewidget_customevent_isbase = false;
    mutable bool kkeysequencewidget_connectnotify_isbase = false;
    mutable bool kkeysequencewidget_disconnectnotify_isbase = false;
    mutable bool kkeysequencewidget_updatemicrofocus_isbase = false;
    mutable bool kkeysequencewidget_create_isbase = false;
    mutable bool kkeysequencewidget_destroy_isbase = false;
    mutable bool kkeysequencewidget_focusnextchild_isbase = false;
    mutable bool kkeysequencewidget_focuspreviouschild_isbase = false;
    mutable bool kkeysequencewidget_sender_isbase = false;
    mutable bool kkeysequencewidget_sendersignalindex_isbase = false;
    mutable bool kkeysequencewidget_receivers_isbase = false;
    mutable bool kkeysequencewidget_issignalconnected_isbase = false;
    mutable bool kkeysequencewidget_getdecodedmetricf_isbase = false;

  public:
    VirtualKKeySequenceWidget(QWidget* parent) : KKeySequenceWidget(parent) {};
    VirtualKKeySequenceWidget() : KKeySequenceWidget() {};

    ~VirtualKKeySequenceWidget() {
        kkeysequencewidget_metacall_callback = nullptr;
        kkeysequencewidget_devtype_callback = nullptr;
        kkeysequencewidget_setvisible_callback = nullptr;
        kkeysequencewidget_sizehint_callback = nullptr;
        kkeysequencewidget_minimumsizehint_callback = nullptr;
        kkeysequencewidget_heightforwidth_callback = nullptr;
        kkeysequencewidget_hasheightforwidth_callback = nullptr;
        kkeysequencewidget_paintengine_callback = nullptr;
        kkeysequencewidget_mousepressevent_callback = nullptr;
        kkeysequencewidget_mousereleaseevent_callback = nullptr;
        kkeysequencewidget_mousedoubleclickevent_callback = nullptr;
        kkeysequencewidget_mousemoveevent_callback = nullptr;
        kkeysequencewidget_wheelevent_callback = nullptr;
        kkeysequencewidget_keypressevent_callback = nullptr;
        kkeysequencewidget_keyreleaseevent_callback = nullptr;
        kkeysequencewidget_focusinevent_callback = nullptr;
        kkeysequencewidget_focusoutevent_callback = nullptr;
        kkeysequencewidget_enterevent_callback = nullptr;
        kkeysequencewidget_leaveevent_callback = nullptr;
        kkeysequencewidget_paintevent_callback = nullptr;
        kkeysequencewidget_moveevent_callback = nullptr;
        kkeysequencewidget_resizeevent_callback = nullptr;
        kkeysequencewidget_closeevent_callback = nullptr;
        kkeysequencewidget_contextmenuevent_callback = nullptr;
        kkeysequencewidget_tabletevent_callback = nullptr;
        kkeysequencewidget_actionevent_callback = nullptr;
        kkeysequencewidget_dragenterevent_callback = nullptr;
        kkeysequencewidget_dragmoveevent_callback = nullptr;
        kkeysequencewidget_dragleaveevent_callback = nullptr;
        kkeysequencewidget_dropevent_callback = nullptr;
        kkeysequencewidget_showevent_callback = nullptr;
        kkeysequencewidget_hideevent_callback = nullptr;
        kkeysequencewidget_nativeevent_callback = nullptr;
        kkeysequencewidget_changeevent_callback = nullptr;
        kkeysequencewidget_metric_callback = nullptr;
        kkeysequencewidget_initpainter_callback = nullptr;
        kkeysequencewidget_redirected_callback = nullptr;
        kkeysequencewidget_sharedpainter_callback = nullptr;
        kkeysequencewidget_inputmethodevent_callback = nullptr;
        kkeysequencewidget_inputmethodquery_callback = nullptr;
        kkeysequencewidget_focusnextprevchild_callback = nullptr;
        kkeysequencewidget_eventfilter_callback = nullptr;
        kkeysequencewidget_timerevent_callback = nullptr;
        kkeysequencewidget_childevent_callback = nullptr;
        kkeysequencewidget_customevent_callback = nullptr;
        kkeysequencewidget_connectnotify_callback = nullptr;
        kkeysequencewidget_disconnectnotify_callback = nullptr;
        kkeysequencewidget_updatemicrofocus_callback = nullptr;
        kkeysequencewidget_create_callback = nullptr;
        kkeysequencewidget_destroy_callback = nullptr;
        kkeysequencewidget_focusnextchild_callback = nullptr;
        kkeysequencewidget_focuspreviouschild_callback = nullptr;
        kkeysequencewidget_sender_callback = nullptr;
        kkeysequencewidget_sendersignalindex_callback = nullptr;
        kkeysequencewidget_receivers_callback = nullptr;
        kkeysequencewidget_issignalconnected_callback = nullptr;
        kkeysequencewidget_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKKeySequenceWidget_Metacall_Callback(KKeySequenceWidget_Metacall_Callback cb) { kkeysequencewidget_metacall_callback = cb; }
    inline void setKKeySequenceWidget_DevType_Callback(KKeySequenceWidget_DevType_Callback cb) { kkeysequencewidget_devtype_callback = cb; }
    inline void setKKeySequenceWidget_SetVisible_Callback(KKeySequenceWidget_SetVisible_Callback cb) { kkeysequencewidget_setvisible_callback = cb; }
    inline void setKKeySequenceWidget_SizeHint_Callback(KKeySequenceWidget_SizeHint_Callback cb) { kkeysequencewidget_sizehint_callback = cb; }
    inline void setKKeySequenceWidget_MinimumSizeHint_Callback(KKeySequenceWidget_MinimumSizeHint_Callback cb) { kkeysequencewidget_minimumsizehint_callback = cb; }
    inline void setKKeySequenceWidget_HeightForWidth_Callback(KKeySequenceWidget_HeightForWidth_Callback cb) { kkeysequencewidget_heightforwidth_callback = cb; }
    inline void setKKeySequenceWidget_HasHeightForWidth_Callback(KKeySequenceWidget_HasHeightForWidth_Callback cb) { kkeysequencewidget_hasheightforwidth_callback = cb; }
    inline void setKKeySequenceWidget_PaintEngine_Callback(KKeySequenceWidget_PaintEngine_Callback cb) { kkeysequencewidget_paintengine_callback = cb; }
    inline void setKKeySequenceWidget_MousePressEvent_Callback(KKeySequenceWidget_MousePressEvent_Callback cb) { kkeysequencewidget_mousepressevent_callback = cb; }
    inline void setKKeySequenceWidget_MouseReleaseEvent_Callback(KKeySequenceWidget_MouseReleaseEvent_Callback cb) { kkeysequencewidget_mousereleaseevent_callback = cb; }
    inline void setKKeySequenceWidget_MouseDoubleClickEvent_Callback(KKeySequenceWidget_MouseDoubleClickEvent_Callback cb) { kkeysequencewidget_mousedoubleclickevent_callback = cb; }
    inline void setKKeySequenceWidget_MouseMoveEvent_Callback(KKeySequenceWidget_MouseMoveEvent_Callback cb) { kkeysequencewidget_mousemoveevent_callback = cb; }
    inline void setKKeySequenceWidget_WheelEvent_Callback(KKeySequenceWidget_WheelEvent_Callback cb) { kkeysequencewidget_wheelevent_callback = cb; }
    inline void setKKeySequenceWidget_KeyPressEvent_Callback(KKeySequenceWidget_KeyPressEvent_Callback cb) { kkeysequencewidget_keypressevent_callback = cb; }
    inline void setKKeySequenceWidget_KeyReleaseEvent_Callback(KKeySequenceWidget_KeyReleaseEvent_Callback cb) { kkeysequencewidget_keyreleaseevent_callback = cb; }
    inline void setKKeySequenceWidget_FocusInEvent_Callback(KKeySequenceWidget_FocusInEvent_Callback cb) { kkeysequencewidget_focusinevent_callback = cb; }
    inline void setKKeySequenceWidget_FocusOutEvent_Callback(KKeySequenceWidget_FocusOutEvent_Callback cb) { kkeysequencewidget_focusoutevent_callback = cb; }
    inline void setKKeySequenceWidget_EnterEvent_Callback(KKeySequenceWidget_EnterEvent_Callback cb) { kkeysequencewidget_enterevent_callback = cb; }
    inline void setKKeySequenceWidget_LeaveEvent_Callback(KKeySequenceWidget_LeaveEvent_Callback cb) { kkeysequencewidget_leaveevent_callback = cb; }
    inline void setKKeySequenceWidget_PaintEvent_Callback(KKeySequenceWidget_PaintEvent_Callback cb) { kkeysequencewidget_paintevent_callback = cb; }
    inline void setKKeySequenceWidget_MoveEvent_Callback(KKeySequenceWidget_MoveEvent_Callback cb) { kkeysequencewidget_moveevent_callback = cb; }
    inline void setKKeySequenceWidget_ResizeEvent_Callback(KKeySequenceWidget_ResizeEvent_Callback cb) { kkeysequencewidget_resizeevent_callback = cb; }
    inline void setKKeySequenceWidget_CloseEvent_Callback(KKeySequenceWidget_CloseEvent_Callback cb) { kkeysequencewidget_closeevent_callback = cb; }
    inline void setKKeySequenceWidget_ContextMenuEvent_Callback(KKeySequenceWidget_ContextMenuEvent_Callback cb) { kkeysequencewidget_contextmenuevent_callback = cb; }
    inline void setKKeySequenceWidget_TabletEvent_Callback(KKeySequenceWidget_TabletEvent_Callback cb) { kkeysequencewidget_tabletevent_callback = cb; }
    inline void setKKeySequenceWidget_ActionEvent_Callback(KKeySequenceWidget_ActionEvent_Callback cb) { kkeysequencewidget_actionevent_callback = cb; }
    inline void setKKeySequenceWidget_DragEnterEvent_Callback(KKeySequenceWidget_DragEnterEvent_Callback cb) { kkeysequencewidget_dragenterevent_callback = cb; }
    inline void setKKeySequenceWidget_DragMoveEvent_Callback(KKeySequenceWidget_DragMoveEvent_Callback cb) { kkeysequencewidget_dragmoveevent_callback = cb; }
    inline void setKKeySequenceWidget_DragLeaveEvent_Callback(KKeySequenceWidget_DragLeaveEvent_Callback cb) { kkeysequencewidget_dragleaveevent_callback = cb; }
    inline void setKKeySequenceWidget_DropEvent_Callback(KKeySequenceWidget_DropEvent_Callback cb) { kkeysequencewidget_dropevent_callback = cb; }
    inline void setKKeySequenceWidget_ShowEvent_Callback(KKeySequenceWidget_ShowEvent_Callback cb) { kkeysequencewidget_showevent_callback = cb; }
    inline void setKKeySequenceWidget_HideEvent_Callback(KKeySequenceWidget_HideEvent_Callback cb) { kkeysequencewidget_hideevent_callback = cb; }
    inline void setKKeySequenceWidget_NativeEvent_Callback(KKeySequenceWidget_NativeEvent_Callback cb) { kkeysequencewidget_nativeevent_callback = cb; }
    inline void setKKeySequenceWidget_ChangeEvent_Callback(KKeySequenceWidget_ChangeEvent_Callback cb) { kkeysequencewidget_changeevent_callback = cb; }
    inline void setKKeySequenceWidget_Metric_Callback(KKeySequenceWidget_Metric_Callback cb) { kkeysequencewidget_metric_callback = cb; }
    inline void setKKeySequenceWidget_InitPainter_Callback(KKeySequenceWidget_InitPainter_Callback cb) { kkeysequencewidget_initpainter_callback = cb; }
    inline void setKKeySequenceWidget_Redirected_Callback(KKeySequenceWidget_Redirected_Callback cb) { kkeysequencewidget_redirected_callback = cb; }
    inline void setKKeySequenceWidget_SharedPainter_Callback(KKeySequenceWidget_SharedPainter_Callback cb) { kkeysequencewidget_sharedpainter_callback = cb; }
    inline void setKKeySequenceWidget_InputMethodEvent_Callback(KKeySequenceWidget_InputMethodEvent_Callback cb) { kkeysequencewidget_inputmethodevent_callback = cb; }
    inline void setKKeySequenceWidget_InputMethodQuery_Callback(KKeySequenceWidget_InputMethodQuery_Callback cb) { kkeysequencewidget_inputmethodquery_callback = cb; }
    inline void setKKeySequenceWidget_FocusNextPrevChild_Callback(KKeySequenceWidget_FocusNextPrevChild_Callback cb) { kkeysequencewidget_focusnextprevchild_callback = cb; }
    inline void setKKeySequenceWidget_EventFilter_Callback(KKeySequenceWidget_EventFilter_Callback cb) { kkeysequencewidget_eventfilter_callback = cb; }
    inline void setKKeySequenceWidget_TimerEvent_Callback(KKeySequenceWidget_TimerEvent_Callback cb) { kkeysequencewidget_timerevent_callback = cb; }
    inline void setKKeySequenceWidget_ChildEvent_Callback(KKeySequenceWidget_ChildEvent_Callback cb) { kkeysequencewidget_childevent_callback = cb; }
    inline void setKKeySequenceWidget_CustomEvent_Callback(KKeySequenceWidget_CustomEvent_Callback cb) { kkeysequencewidget_customevent_callback = cb; }
    inline void setKKeySequenceWidget_ConnectNotify_Callback(KKeySequenceWidget_ConnectNotify_Callback cb) { kkeysequencewidget_connectnotify_callback = cb; }
    inline void setKKeySequenceWidget_DisconnectNotify_Callback(KKeySequenceWidget_DisconnectNotify_Callback cb) { kkeysequencewidget_disconnectnotify_callback = cb; }
    inline void setKKeySequenceWidget_UpdateMicroFocus_Callback(KKeySequenceWidget_UpdateMicroFocus_Callback cb) { kkeysequencewidget_updatemicrofocus_callback = cb; }
    inline void setKKeySequenceWidget_Create_Callback(KKeySequenceWidget_Create_Callback cb) { kkeysequencewidget_create_callback = cb; }
    inline void setKKeySequenceWidget_Destroy_Callback(KKeySequenceWidget_Destroy_Callback cb) { kkeysequencewidget_destroy_callback = cb; }
    inline void setKKeySequenceWidget_FocusNextChild_Callback(KKeySequenceWidget_FocusNextChild_Callback cb) { kkeysequencewidget_focusnextchild_callback = cb; }
    inline void setKKeySequenceWidget_FocusPreviousChild_Callback(KKeySequenceWidget_FocusPreviousChild_Callback cb) { kkeysequencewidget_focuspreviouschild_callback = cb; }
    inline void setKKeySequenceWidget_Sender_Callback(KKeySequenceWidget_Sender_Callback cb) { kkeysequencewidget_sender_callback = cb; }
    inline void setKKeySequenceWidget_SenderSignalIndex_Callback(KKeySequenceWidget_SenderSignalIndex_Callback cb) { kkeysequencewidget_sendersignalindex_callback = cb; }
    inline void setKKeySequenceWidget_Receivers_Callback(KKeySequenceWidget_Receivers_Callback cb) { kkeysequencewidget_receivers_callback = cb; }
    inline void setKKeySequenceWidget_IsSignalConnected_Callback(KKeySequenceWidget_IsSignalConnected_Callback cb) { kkeysequencewidget_issignalconnected_callback = cb; }
    inline void setKKeySequenceWidget_GetDecodedMetricF_Callback(KKeySequenceWidget_GetDecodedMetricF_Callback cb) { kkeysequencewidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKKeySequenceWidget_Metacall_IsBase(bool value) const { kkeysequencewidget_metacall_isbase = value; }
    inline void setKKeySequenceWidget_DevType_IsBase(bool value) const { kkeysequencewidget_devtype_isbase = value; }
    inline void setKKeySequenceWidget_SetVisible_IsBase(bool value) const { kkeysequencewidget_setvisible_isbase = value; }
    inline void setKKeySequenceWidget_SizeHint_IsBase(bool value) const { kkeysequencewidget_sizehint_isbase = value; }
    inline void setKKeySequenceWidget_MinimumSizeHint_IsBase(bool value) const { kkeysequencewidget_minimumsizehint_isbase = value; }
    inline void setKKeySequenceWidget_HeightForWidth_IsBase(bool value) const { kkeysequencewidget_heightforwidth_isbase = value; }
    inline void setKKeySequenceWidget_HasHeightForWidth_IsBase(bool value) const { kkeysequencewidget_hasheightforwidth_isbase = value; }
    inline void setKKeySequenceWidget_PaintEngine_IsBase(bool value) const { kkeysequencewidget_paintengine_isbase = value; }
    inline void setKKeySequenceWidget_MousePressEvent_IsBase(bool value) const { kkeysequencewidget_mousepressevent_isbase = value; }
    inline void setKKeySequenceWidget_MouseReleaseEvent_IsBase(bool value) const { kkeysequencewidget_mousereleaseevent_isbase = value; }
    inline void setKKeySequenceWidget_MouseDoubleClickEvent_IsBase(bool value) const { kkeysequencewidget_mousedoubleclickevent_isbase = value; }
    inline void setKKeySequenceWidget_MouseMoveEvent_IsBase(bool value) const { kkeysequencewidget_mousemoveevent_isbase = value; }
    inline void setKKeySequenceWidget_WheelEvent_IsBase(bool value) const { kkeysequencewidget_wheelevent_isbase = value; }
    inline void setKKeySequenceWidget_KeyPressEvent_IsBase(bool value) const { kkeysequencewidget_keypressevent_isbase = value; }
    inline void setKKeySequenceWidget_KeyReleaseEvent_IsBase(bool value) const { kkeysequencewidget_keyreleaseevent_isbase = value; }
    inline void setKKeySequenceWidget_FocusInEvent_IsBase(bool value) const { kkeysequencewidget_focusinevent_isbase = value; }
    inline void setKKeySequenceWidget_FocusOutEvent_IsBase(bool value) const { kkeysequencewidget_focusoutevent_isbase = value; }
    inline void setKKeySequenceWidget_EnterEvent_IsBase(bool value) const { kkeysequencewidget_enterevent_isbase = value; }
    inline void setKKeySequenceWidget_LeaveEvent_IsBase(bool value) const { kkeysequencewidget_leaveevent_isbase = value; }
    inline void setKKeySequenceWidget_PaintEvent_IsBase(bool value) const { kkeysequencewidget_paintevent_isbase = value; }
    inline void setKKeySequenceWidget_MoveEvent_IsBase(bool value) const { kkeysequencewidget_moveevent_isbase = value; }
    inline void setKKeySequenceWidget_ResizeEvent_IsBase(bool value) const { kkeysequencewidget_resizeevent_isbase = value; }
    inline void setKKeySequenceWidget_CloseEvent_IsBase(bool value) const { kkeysequencewidget_closeevent_isbase = value; }
    inline void setKKeySequenceWidget_ContextMenuEvent_IsBase(bool value) const { kkeysequencewidget_contextmenuevent_isbase = value; }
    inline void setKKeySequenceWidget_TabletEvent_IsBase(bool value) const { kkeysequencewidget_tabletevent_isbase = value; }
    inline void setKKeySequenceWidget_ActionEvent_IsBase(bool value) const { kkeysequencewidget_actionevent_isbase = value; }
    inline void setKKeySequenceWidget_DragEnterEvent_IsBase(bool value) const { kkeysequencewidget_dragenterevent_isbase = value; }
    inline void setKKeySequenceWidget_DragMoveEvent_IsBase(bool value) const { kkeysequencewidget_dragmoveevent_isbase = value; }
    inline void setKKeySequenceWidget_DragLeaveEvent_IsBase(bool value) const { kkeysequencewidget_dragleaveevent_isbase = value; }
    inline void setKKeySequenceWidget_DropEvent_IsBase(bool value) const { kkeysequencewidget_dropevent_isbase = value; }
    inline void setKKeySequenceWidget_ShowEvent_IsBase(bool value) const { kkeysequencewidget_showevent_isbase = value; }
    inline void setKKeySequenceWidget_HideEvent_IsBase(bool value) const { kkeysequencewidget_hideevent_isbase = value; }
    inline void setKKeySequenceWidget_NativeEvent_IsBase(bool value) const { kkeysequencewidget_nativeevent_isbase = value; }
    inline void setKKeySequenceWidget_ChangeEvent_IsBase(bool value) const { kkeysequencewidget_changeevent_isbase = value; }
    inline void setKKeySequenceWidget_Metric_IsBase(bool value) const { kkeysequencewidget_metric_isbase = value; }
    inline void setKKeySequenceWidget_InitPainter_IsBase(bool value) const { kkeysequencewidget_initpainter_isbase = value; }
    inline void setKKeySequenceWidget_Redirected_IsBase(bool value) const { kkeysequencewidget_redirected_isbase = value; }
    inline void setKKeySequenceWidget_SharedPainter_IsBase(bool value) const { kkeysequencewidget_sharedpainter_isbase = value; }
    inline void setKKeySequenceWidget_InputMethodEvent_IsBase(bool value) const { kkeysequencewidget_inputmethodevent_isbase = value; }
    inline void setKKeySequenceWidget_InputMethodQuery_IsBase(bool value) const { kkeysequencewidget_inputmethodquery_isbase = value; }
    inline void setKKeySequenceWidget_FocusNextPrevChild_IsBase(bool value) const { kkeysequencewidget_focusnextprevchild_isbase = value; }
    inline void setKKeySequenceWidget_EventFilter_IsBase(bool value) const { kkeysequencewidget_eventfilter_isbase = value; }
    inline void setKKeySequenceWidget_TimerEvent_IsBase(bool value) const { kkeysequencewidget_timerevent_isbase = value; }
    inline void setKKeySequenceWidget_ChildEvent_IsBase(bool value) const { kkeysequencewidget_childevent_isbase = value; }
    inline void setKKeySequenceWidget_CustomEvent_IsBase(bool value) const { kkeysequencewidget_customevent_isbase = value; }
    inline void setKKeySequenceWidget_ConnectNotify_IsBase(bool value) const { kkeysequencewidget_connectnotify_isbase = value; }
    inline void setKKeySequenceWidget_DisconnectNotify_IsBase(bool value) const { kkeysequencewidget_disconnectnotify_isbase = value; }
    inline void setKKeySequenceWidget_UpdateMicroFocus_IsBase(bool value) const { kkeysequencewidget_updatemicrofocus_isbase = value; }
    inline void setKKeySequenceWidget_Create_IsBase(bool value) const { kkeysequencewidget_create_isbase = value; }
    inline void setKKeySequenceWidget_Destroy_IsBase(bool value) const { kkeysequencewidget_destroy_isbase = value; }
    inline void setKKeySequenceWidget_FocusNextChild_IsBase(bool value) const { kkeysequencewidget_focusnextchild_isbase = value; }
    inline void setKKeySequenceWidget_FocusPreviousChild_IsBase(bool value) const { kkeysequencewidget_focuspreviouschild_isbase = value; }
    inline void setKKeySequenceWidget_Sender_IsBase(bool value) const { kkeysequencewidget_sender_isbase = value; }
    inline void setKKeySequenceWidget_SenderSignalIndex_IsBase(bool value) const { kkeysequencewidget_sendersignalindex_isbase = value; }
    inline void setKKeySequenceWidget_Receivers_IsBase(bool value) const { kkeysequencewidget_receivers_isbase = value; }
    inline void setKKeySequenceWidget_IsSignalConnected_IsBase(bool value) const { kkeysequencewidget_issignalconnected_isbase = value; }
    inline void setKKeySequenceWidget_GetDecodedMetricF_IsBase(bool value) const { kkeysequencewidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kkeysequencewidget_metacall_isbase) {
            kkeysequencewidget_metacall_isbase = false;
            return KKeySequenceWidget::qt_metacall(param1, param2, param3);
        } else if (kkeysequencewidget_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kkeysequencewidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KKeySequenceWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kkeysequencewidget_devtype_isbase) {
            kkeysequencewidget_devtype_isbase = false;
            return KKeySequenceWidget::devType();
        } else if (kkeysequencewidget_devtype_callback != nullptr) {
            int callback_ret = kkeysequencewidget_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KKeySequenceWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kkeysequencewidget_setvisible_isbase) {
            kkeysequencewidget_setvisible_isbase = false;
            KKeySequenceWidget::setVisible(visible);
        } else if (kkeysequencewidget_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kkeysequencewidget_setvisible_callback(this, cbval1);
        } else {
            KKeySequenceWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kkeysequencewidget_sizehint_isbase) {
            kkeysequencewidget_sizehint_isbase = false;
            return KKeySequenceWidget::sizeHint();
        } else if (kkeysequencewidget_sizehint_callback != nullptr) {
            QSize* callback_ret = kkeysequencewidget_sizehint_callback();
            return *callback_ret;
        } else {
            return KKeySequenceWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kkeysequencewidget_minimumsizehint_isbase) {
            kkeysequencewidget_minimumsizehint_isbase = false;
            return KKeySequenceWidget::minimumSizeHint();
        } else if (kkeysequencewidget_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kkeysequencewidget_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KKeySequenceWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kkeysequencewidget_heightforwidth_isbase) {
            kkeysequencewidget_heightforwidth_isbase = false;
            return KKeySequenceWidget::heightForWidth(param1);
        } else if (kkeysequencewidget_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kkeysequencewidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KKeySequenceWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kkeysequencewidget_hasheightforwidth_isbase) {
            kkeysequencewidget_hasheightforwidth_isbase = false;
            return KKeySequenceWidget::hasHeightForWidth();
        } else if (kkeysequencewidget_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kkeysequencewidget_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KKeySequenceWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kkeysequencewidget_paintengine_isbase) {
            kkeysequencewidget_paintengine_isbase = false;
            return KKeySequenceWidget::paintEngine();
        } else if (kkeysequencewidget_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kkeysequencewidget_paintengine_callback();
            return callback_ret;
        } else {
            return KKeySequenceWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kkeysequencewidget_mousepressevent_isbase) {
            kkeysequencewidget_mousepressevent_isbase = false;
            KKeySequenceWidget::mousePressEvent(event);
        } else if (kkeysequencewidget_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kkeysequencewidget_mousepressevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kkeysequencewidget_mousereleaseevent_isbase) {
            kkeysequencewidget_mousereleaseevent_isbase = false;
            KKeySequenceWidget::mouseReleaseEvent(event);
        } else if (kkeysequencewidget_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kkeysequencewidget_mousereleaseevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kkeysequencewidget_mousedoubleclickevent_isbase) {
            kkeysequencewidget_mousedoubleclickevent_isbase = false;
            KKeySequenceWidget::mouseDoubleClickEvent(event);
        } else if (kkeysequencewidget_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kkeysequencewidget_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kkeysequencewidget_mousemoveevent_isbase) {
            kkeysequencewidget_mousemoveevent_isbase = false;
            KKeySequenceWidget::mouseMoveEvent(event);
        } else if (kkeysequencewidget_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kkeysequencewidget_mousemoveevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kkeysequencewidget_wheelevent_isbase) {
            kkeysequencewidget_wheelevent_isbase = false;
            KKeySequenceWidget::wheelEvent(event);
        } else if (kkeysequencewidget_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kkeysequencewidget_wheelevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kkeysequencewidget_keypressevent_isbase) {
            kkeysequencewidget_keypressevent_isbase = false;
            KKeySequenceWidget::keyPressEvent(event);
        } else if (kkeysequencewidget_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kkeysequencewidget_keypressevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kkeysequencewidget_keyreleaseevent_isbase) {
            kkeysequencewidget_keyreleaseevent_isbase = false;
            KKeySequenceWidget::keyReleaseEvent(event);
        } else if (kkeysequencewidget_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kkeysequencewidget_keyreleaseevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kkeysequencewidget_focusinevent_isbase) {
            kkeysequencewidget_focusinevent_isbase = false;
            KKeySequenceWidget::focusInEvent(event);
        } else if (kkeysequencewidget_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kkeysequencewidget_focusinevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kkeysequencewidget_focusoutevent_isbase) {
            kkeysequencewidget_focusoutevent_isbase = false;
            KKeySequenceWidget::focusOutEvent(event);
        } else if (kkeysequencewidget_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kkeysequencewidget_focusoutevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kkeysequencewidget_enterevent_isbase) {
            kkeysequencewidget_enterevent_isbase = false;
            KKeySequenceWidget::enterEvent(event);
        } else if (kkeysequencewidget_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kkeysequencewidget_enterevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kkeysequencewidget_leaveevent_isbase) {
            kkeysequencewidget_leaveevent_isbase = false;
            KKeySequenceWidget::leaveEvent(event);
        } else if (kkeysequencewidget_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kkeysequencewidget_leaveevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kkeysequencewidget_paintevent_isbase) {
            kkeysequencewidget_paintevent_isbase = false;
            KKeySequenceWidget::paintEvent(event);
        } else if (kkeysequencewidget_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kkeysequencewidget_paintevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kkeysequencewidget_moveevent_isbase) {
            kkeysequencewidget_moveevent_isbase = false;
            KKeySequenceWidget::moveEvent(event);
        } else if (kkeysequencewidget_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kkeysequencewidget_moveevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kkeysequencewidget_resizeevent_isbase) {
            kkeysequencewidget_resizeevent_isbase = false;
            KKeySequenceWidget::resizeEvent(event);
        } else if (kkeysequencewidget_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kkeysequencewidget_resizeevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kkeysequencewidget_closeevent_isbase) {
            kkeysequencewidget_closeevent_isbase = false;
            KKeySequenceWidget::closeEvent(event);
        } else if (kkeysequencewidget_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kkeysequencewidget_closeevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kkeysequencewidget_contextmenuevent_isbase) {
            kkeysequencewidget_contextmenuevent_isbase = false;
            KKeySequenceWidget::contextMenuEvent(event);
        } else if (kkeysequencewidget_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kkeysequencewidget_contextmenuevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kkeysequencewidget_tabletevent_isbase) {
            kkeysequencewidget_tabletevent_isbase = false;
            KKeySequenceWidget::tabletEvent(event);
        } else if (kkeysequencewidget_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kkeysequencewidget_tabletevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kkeysequencewidget_actionevent_isbase) {
            kkeysequencewidget_actionevent_isbase = false;
            KKeySequenceWidget::actionEvent(event);
        } else if (kkeysequencewidget_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kkeysequencewidget_actionevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kkeysequencewidget_dragenterevent_isbase) {
            kkeysequencewidget_dragenterevent_isbase = false;
            KKeySequenceWidget::dragEnterEvent(event);
        } else if (kkeysequencewidget_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kkeysequencewidget_dragenterevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kkeysequencewidget_dragmoveevent_isbase) {
            kkeysequencewidget_dragmoveevent_isbase = false;
            KKeySequenceWidget::dragMoveEvent(event);
        } else if (kkeysequencewidget_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kkeysequencewidget_dragmoveevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kkeysequencewidget_dragleaveevent_isbase) {
            kkeysequencewidget_dragleaveevent_isbase = false;
            KKeySequenceWidget::dragLeaveEvent(event);
        } else if (kkeysequencewidget_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kkeysequencewidget_dragleaveevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kkeysequencewidget_dropevent_isbase) {
            kkeysequencewidget_dropevent_isbase = false;
            KKeySequenceWidget::dropEvent(event);
        } else if (kkeysequencewidget_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kkeysequencewidget_dropevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kkeysequencewidget_showevent_isbase) {
            kkeysequencewidget_showevent_isbase = false;
            KKeySequenceWidget::showEvent(event);
        } else if (kkeysequencewidget_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kkeysequencewidget_showevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kkeysequencewidget_hideevent_isbase) {
            kkeysequencewidget_hideevent_isbase = false;
            KKeySequenceWidget::hideEvent(event);
        } else if (kkeysequencewidget_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kkeysequencewidget_hideevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kkeysequencewidget_nativeevent_isbase) {
            kkeysequencewidget_nativeevent_isbase = false;
            return KKeySequenceWidget::nativeEvent(eventType, message, result);
        } else if (kkeysequencewidget_nativeevent_callback != nullptr) {
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

            bool callback_ret = kkeysequencewidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KKeySequenceWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kkeysequencewidget_changeevent_isbase) {
            kkeysequencewidget_changeevent_isbase = false;
            KKeySequenceWidget::changeEvent(param1);
        } else if (kkeysequencewidget_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kkeysequencewidget_changeevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kkeysequencewidget_metric_isbase) {
            kkeysequencewidget_metric_isbase = false;
            return KKeySequenceWidget::metric(param1);
        } else if (kkeysequencewidget_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kkeysequencewidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KKeySequenceWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kkeysequencewidget_initpainter_isbase) {
            kkeysequencewidget_initpainter_isbase = false;
            KKeySequenceWidget::initPainter(painter);
        } else if (kkeysequencewidget_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kkeysequencewidget_initpainter_callback(this, cbval1);
        } else {
            KKeySequenceWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kkeysequencewidget_redirected_isbase) {
            kkeysequencewidget_redirected_isbase = false;
            return KKeySequenceWidget::redirected(offset);
        } else if (kkeysequencewidget_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kkeysequencewidget_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KKeySequenceWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kkeysequencewidget_sharedpainter_isbase) {
            kkeysequencewidget_sharedpainter_isbase = false;
            return KKeySequenceWidget::sharedPainter();
        } else if (kkeysequencewidget_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kkeysequencewidget_sharedpainter_callback();
            return callback_ret;
        } else {
            return KKeySequenceWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kkeysequencewidget_inputmethodevent_isbase) {
            kkeysequencewidget_inputmethodevent_isbase = false;
            KKeySequenceWidget::inputMethodEvent(param1);
        } else if (kkeysequencewidget_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kkeysequencewidget_inputmethodevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kkeysequencewidget_inputmethodquery_isbase) {
            kkeysequencewidget_inputmethodquery_isbase = false;
            return KKeySequenceWidget::inputMethodQuery(param1);
        } else if (kkeysequencewidget_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kkeysequencewidget_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KKeySequenceWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kkeysequencewidget_focusnextprevchild_isbase) {
            kkeysequencewidget_focusnextprevchild_isbase = false;
            return KKeySequenceWidget::focusNextPrevChild(next);
        } else if (kkeysequencewidget_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kkeysequencewidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KKeySequenceWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kkeysequencewidget_eventfilter_isbase) {
            kkeysequencewidget_eventfilter_isbase = false;
            return KKeySequenceWidget::eventFilter(watched, event);
        } else if (kkeysequencewidget_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kkeysequencewidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KKeySequenceWidget::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kkeysequencewidget_timerevent_isbase) {
            kkeysequencewidget_timerevent_isbase = false;
            KKeySequenceWidget::timerEvent(event);
        } else if (kkeysequencewidget_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kkeysequencewidget_timerevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kkeysequencewidget_childevent_isbase) {
            kkeysequencewidget_childevent_isbase = false;
            KKeySequenceWidget::childEvent(event);
        } else if (kkeysequencewidget_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kkeysequencewidget_childevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kkeysequencewidget_customevent_isbase) {
            kkeysequencewidget_customevent_isbase = false;
            KKeySequenceWidget::customEvent(event);
        } else if (kkeysequencewidget_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kkeysequencewidget_customevent_callback(this, cbval1);
        } else {
            KKeySequenceWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kkeysequencewidget_connectnotify_isbase) {
            kkeysequencewidget_connectnotify_isbase = false;
            KKeySequenceWidget::connectNotify(signal);
        } else if (kkeysequencewidget_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kkeysequencewidget_connectnotify_callback(this, cbval1);
        } else {
            KKeySequenceWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kkeysequencewidget_disconnectnotify_isbase) {
            kkeysequencewidget_disconnectnotify_isbase = false;
            KKeySequenceWidget::disconnectNotify(signal);
        } else if (kkeysequencewidget_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kkeysequencewidget_disconnectnotify_callback(this, cbval1);
        } else {
            KKeySequenceWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kkeysequencewidget_updatemicrofocus_isbase) {
            kkeysequencewidget_updatemicrofocus_isbase = false;
            KKeySequenceWidget::updateMicroFocus();
        } else if (kkeysequencewidget_updatemicrofocus_callback != nullptr) {
            kkeysequencewidget_updatemicrofocus_callback();
        } else {
            KKeySequenceWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kkeysequencewidget_create_isbase) {
            kkeysequencewidget_create_isbase = false;
            KKeySequenceWidget::create();
        } else if (kkeysequencewidget_create_callback != nullptr) {
            kkeysequencewidget_create_callback();
        } else {
            KKeySequenceWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kkeysequencewidget_destroy_isbase) {
            kkeysequencewidget_destroy_isbase = false;
            KKeySequenceWidget::destroy();
        } else if (kkeysequencewidget_destroy_callback != nullptr) {
            kkeysequencewidget_destroy_callback();
        } else {
            KKeySequenceWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kkeysequencewidget_focusnextchild_isbase) {
            kkeysequencewidget_focusnextchild_isbase = false;
            return KKeySequenceWidget::focusNextChild();
        } else if (kkeysequencewidget_focusnextchild_callback != nullptr) {
            bool callback_ret = kkeysequencewidget_focusnextchild_callback();
            return callback_ret;
        } else {
            return KKeySequenceWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kkeysequencewidget_focuspreviouschild_isbase) {
            kkeysequencewidget_focuspreviouschild_isbase = false;
            return KKeySequenceWidget::focusPreviousChild();
        } else if (kkeysequencewidget_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kkeysequencewidget_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KKeySequenceWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kkeysequencewidget_sender_isbase) {
            kkeysequencewidget_sender_isbase = false;
            return KKeySequenceWidget::sender();
        } else if (kkeysequencewidget_sender_callback != nullptr) {
            QObject* callback_ret = kkeysequencewidget_sender_callback();
            return callback_ret;
        } else {
            return KKeySequenceWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kkeysequencewidget_sendersignalindex_isbase) {
            kkeysequencewidget_sendersignalindex_isbase = false;
            return KKeySequenceWidget::senderSignalIndex();
        } else if (kkeysequencewidget_sendersignalindex_callback != nullptr) {
            int callback_ret = kkeysequencewidget_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KKeySequenceWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kkeysequencewidget_receivers_isbase) {
            kkeysequencewidget_receivers_isbase = false;
            return KKeySequenceWidget::receivers(signal);
        } else if (kkeysequencewidget_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kkeysequencewidget_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KKeySequenceWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kkeysequencewidget_issignalconnected_isbase) {
            kkeysequencewidget_issignalconnected_isbase = false;
            return KKeySequenceWidget::isSignalConnected(signal);
        } else if (kkeysequencewidget_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kkeysequencewidget_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KKeySequenceWidget::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kkeysequencewidget_getdecodedmetricf_isbase) {
            kkeysequencewidget_getdecodedmetricf_isbase = false;
            return KKeySequenceWidget::getDecodedMetricF(metricA, metricB);
        } else if (kkeysequencewidget_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kkeysequencewidget_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KKeySequenceWidget::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KKeySequenceWidget_MousePressEvent(KKeySequenceWidget* self, QMouseEvent* event);
    friend void KKeySequenceWidget_QBaseMousePressEvent(KKeySequenceWidget* self, QMouseEvent* event);
    friend void KKeySequenceWidget_MouseReleaseEvent(KKeySequenceWidget* self, QMouseEvent* event);
    friend void KKeySequenceWidget_QBaseMouseReleaseEvent(KKeySequenceWidget* self, QMouseEvent* event);
    friend void KKeySequenceWidget_MouseDoubleClickEvent(KKeySequenceWidget* self, QMouseEvent* event);
    friend void KKeySequenceWidget_QBaseMouseDoubleClickEvent(KKeySequenceWidget* self, QMouseEvent* event);
    friend void KKeySequenceWidget_MouseMoveEvent(KKeySequenceWidget* self, QMouseEvent* event);
    friend void KKeySequenceWidget_QBaseMouseMoveEvent(KKeySequenceWidget* self, QMouseEvent* event);
    friend void KKeySequenceWidget_WheelEvent(KKeySequenceWidget* self, QWheelEvent* event);
    friend void KKeySequenceWidget_QBaseWheelEvent(KKeySequenceWidget* self, QWheelEvent* event);
    friend void KKeySequenceWidget_KeyPressEvent(KKeySequenceWidget* self, QKeyEvent* event);
    friend void KKeySequenceWidget_QBaseKeyPressEvent(KKeySequenceWidget* self, QKeyEvent* event);
    friend void KKeySequenceWidget_KeyReleaseEvent(KKeySequenceWidget* self, QKeyEvent* event);
    friend void KKeySequenceWidget_QBaseKeyReleaseEvent(KKeySequenceWidget* self, QKeyEvent* event);
    friend void KKeySequenceWidget_FocusInEvent(KKeySequenceWidget* self, QFocusEvent* event);
    friend void KKeySequenceWidget_QBaseFocusInEvent(KKeySequenceWidget* self, QFocusEvent* event);
    friend void KKeySequenceWidget_FocusOutEvent(KKeySequenceWidget* self, QFocusEvent* event);
    friend void KKeySequenceWidget_QBaseFocusOutEvent(KKeySequenceWidget* self, QFocusEvent* event);
    friend void KKeySequenceWidget_EnterEvent(KKeySequenceWidget* self, QEnterEvent* event);
    friend void KKeySequenceWidget_QBaseEnterEvent(KKeySequenceWidget* self, QEnterEvent* event);
    friend void KKeySequenceWidget_LeaveEvent(KKeySequenceWidget* self, QEvent* event);
    friend void KKeySequenceWidget_QBaseLeaveEvent(KKeySequenceWidget* self, QEvent* event);
    friend void KKeySequenceWidget_PaintEvent(KKeySequenceWidget* self, QPaintEvent* event);
    friend void KKeySequenceWidget_QBasePaintEvent(KKeySequenceWidget* self, QPaintEvent* event);
    friend void KKeySequenceWidget_MoveEvent(KKeySequenceWidget* self, QMoveEvent* event);
    friend void KKeySequenceWidget_QBaseMoveEvent(KKeySequenceWidget* self, QMoveEvent* event);
    friend void KKeySequenceWidget_ResizeEvent(KKeySequenceWidget* self, QResizeEvent* event);
    friend void KKeySequenceWidget_QBaseResizeEvent(KKeySequenceWidget* self, QResizeEvent* event);
    friend void KKeySequenceWidget_CloseEvent(KKeySequenceWidget* self, QCloseEvent* event);
    friend void KKeySequenceWidget_QBaseCloseEvent(KKeySequenceWidget* self, QCloseEvent* event);
    friend void KKeySequenceWidget_ContextMenuEvent(KKeySequenceWidget* self, QContextMenuEvent* event);
    friend void KKeySequenceWidget_QBaseContextMenuEvent(KKeySequenceWidget* self, QContextMenuEvent* event);
    friend void KKeySequenceWidget_TabletEvent(KKeySequenceWidget* self, QTabletEvent* event);
    friend void KKeySequenceWidget_QBaseTabletEvent(KKeySequenceWidget* self, QTabletEvent* event);
    friend void KKeySequenceWidget_ActionEvent(KKeySequenceWidget* self, QActionEvent* event);
    friend void KKeySequenceWidget_QBaseActionEvent(KKeySequenceWidget* self, QActionEvent* event);
    friend void KKeySequenceWidget_DragEnterEvent(KKeySequenceWidget* self, QDragEnterEvent* event);
    friend void KKeySequenceWidget_QBaseDragEnterEvent(KKeySequenceWidget* self, QDragEnterEvent* event);
    friend void KKeySequenceWidget_DragMoveEvent(KKeySequenceWidget* self, QDragMoveEvent* event);
    friend void KKeySequenceWidget_QBaseDragMoveEvent(KKeySequenceWidget* self, QDragMoveEvent* event);
    friend void KKeySequenceWidget_DragLeaveEvent(KKeySequenceWidget* self, QDragLeaveEvent* event);
    friend void KKeySequenceWidget_QBaseDragLeaveEvent(KKeySequenceWidget* self, QDragLeaveEvent* event);
    friend void KKeySequenceWidget_DropEvent(KKeySequenceWidget* self, QDropEvent* event);
    friend void KKeySequenceWidget_QBaseDropEvent(KKeySequenceWidget* self, QDropEvent* event);
    friend void KKeySequenceWidget_ShowEvent(KKeySequenceWidget* self, QShowEvent* event);
    friend void KKeySequenceWidget_QBaseShowEvent(KKeySequenceWidget* self, QShowEvent* event);
    friend void KKeySequenceWidget_HideEvent(KKeySequenceWidget* self, QHideEvent* event);
    friend void KKeySequenceWidget_QBaseHideEvent(KKeySequenceWidget* self, QHideEvent* event);
    friend bool KKeySequenceWidget_NativeEvent(KKeySequenceWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KKeySequenceWidget_QBaseNativeEvent(KKeySequenceWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KKeySequenceWidget_ChangeEvent(KKeySequenceWidget* self, QEvent* param1);
    friend void KKeySequenceWidget_QBaseChangeEvent(KKeySequenceWidget* self, QEvent* param1);
    friend int KKeySequenceWidget_Metric(const KKeySequenceWidget* self, int param1);
    friend int KKeySequenceWidget_QBaseMetric(const KKeySequenceWidget* self, int param1);
    friend void KKeySequenceWidget_InitPainter(const KKeySequenceWidget* self, QPainter* painter);
    friend void KKeySequenceWidget_QBaseInitPainter(const KKeySequenceWidget* self, QPainter* painter);
    friend QPaintDevice* KKeySequenceWidget_Redirected(const KKeySequenceWidget* self, QPoint* offset);
    friend QPaintDevice* KKeySequenceWidget_QBaseRedirected(const KKeySequenceWidget* self, QPoint* offset);
    friend QPainter* KKeySequenceWidget_SharedPainter(const KKeySequenceWidget* self);
    friend QPainter* KKeySequenceWidget_QBaseSharedPainter(const KKeySequenceWidget* self);
    friend void KKeySequenceWidget_InputMethodEvent(KKeySequenceWidget* self, QInputMethodEvent* param1);
    friend void KKeySequenceWidget_QBaseInputMethodEvent(KKeySequenceWidget* self, QInputMethodEvent* param1);
    friend bool KKeySequenceWidget_FocusNextPrevChild(KKeySequenceWidget* self, bool next);
    friend bool KKeySequenceWidget_QBaseFocusNextPrevChild(KKeySequenceWidget* self, bool next);
    friend void KKeySequenceWidget_TimerEvent(KKeySequenceWidget* self, QTimerEvent* event);
    friend void KKeySequenceWidget_QBaseTimerEvent(KKeySequenceWidget* self, QTimerEvent* event);
    friend void KKeySequenceWidget_ChildEvent(KKeySequenceWidget* self, QChildEvent* event);
    friend void KKeySequenceWidget_QBaseChildEvent(KKeySequenceWidget* self, QChildEvent* event);
    friend void KKeySequenceWidget_CustomEvent(KKeySequenceWidget* self, QEvent* event);
    friend void KKeySequenceWidget_QBaseCustomEvent(KKeySequenceWidget* self, QEvent* event);
    friend void KKeySequenceWidget_ConnectNotify(KKeySequenceWidget* self, const QMetaMethod* signal);
    friend void KKeySequenceWidget_QBaseConnectNotify(KKeySequenceWidget* self, const QMetaMethod* signal);
    friend void KKeySequenceWidget_DisconnectNotify(KKeySequenceWidget* self, const QMetaMethod* signal);
    friend void KKeySequenceWidget_QBaseDisconnectNotify(KKeySequenceWidget* self, const QMetaMethod* signal);
    friend void KKeySequenceWidget_UpdateMicroFocus(KKeySequenceWidget* self);
    friend void KKeySequenceWidget_QBaseUpdateMicroFocus(KKeySequenceWidget* self);
    friend void KKeySequenceWidget_Create(KKeySequenceWidget* self);
    friend void KKeySequenceWidget_QBaseCreate(KKeySequenceWidget* self);
    friend void KKeySequenceWidget_Destroy(KKeySequenceWidget* self);
    friend void KKeySequenceWidget_QBaseDestroy(KKeySequenceWidget* self);
    friend bool KKeySequenceWidget_FocusNextChild(KKeySequenceWidget* self);
    friend bool KKeySequenceWidget_QBaseFocusNextChild(KKeySequenceWidget* self);
    friend bool KKeySequenceWidget_FocusPreviousChild(KKeySequenceWidget* self);
    friend bool KKeySequenceWidget_QBaseFocusPreviousChild(KKeySequenceWidget* self);
    friend QObject* KKeySequenceWidget_Sender(const KKeySequenceWidget* self);
    friend QObject* KKeySequenceWidget_QBaseSender(const KKeySequenceWidget* self);
    friend int KKeySequenceWidget_SenderSignalIndex(const KKeySequenceWidget* self);
    friend int KKeySequenceWidget_QBaseSenderSignalIndex(const KKeySequenceWidget* self);
    friend int KKeySequenceWidget_Receivers(const KKeySequenceWidget* self, const char* signal);
    friend int KKeySequenceWidget_QBaseReceivers(const KKeySequenceWidget* self, const char* signal);
    friend bool KKeySequenceWidget_IsSignalConnected(const KKeySequenceWidget* self, const QMetaMethod* signal);
    friend bool KKeySequenceWidget_QBaseIsSignalConnected(const KKeySequenceWidget* self, const QMetaMethod* signal);
    friend double KKeySequenceWidget_GetDecodedMetricF(const KKeySequenceWidget* self, int metricA, int metricB);
    friend double KKeySequenceWidget_QBaseGetDecodedMetricF(const KKeySequenceWidget* self, int metricA, int metricB);
};

#endif
