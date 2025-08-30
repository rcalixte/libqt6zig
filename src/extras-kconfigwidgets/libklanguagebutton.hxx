#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETSC_LIBVIRTUALKLANGUAGEBUTTON_H
#define SRC_EXTRAS_KCONFIGWIDGETSC_LIBVIRTUALKLANGUAGEBUTTON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KLanguageButton so that we can call protected methods
class VirtualKLanguageButton final : public KLanguageButton {

  public:
    // Virtual class boolean flag
    bool isVirtualKLanguageButton = true;

    // Virtual class public types (including callbacks)
    using KLanguageButton_Metacall_Callback = int (*)(KLanguageButton*, int, int, void**);
    using KLanguageButton_DevType_Callback = int (*)();
    using KLanguageButton_SetVisible_Callback = void (*)(KLanguageButton*, bool);
    using KLanguageButton_SizeHint_Callback = QSize* (*)();
    using KLanguageButton_MinimumSizeHint_Callback = QSize* (*)();
    using KLanguageButton_HeightForWidth_Callback = int (*)(const KLanguageButton*, int);
    using KLanguageButton_HasHeightForWidth_Callback = bool (*)();
    using KLanguageButton_PaintEngine_Callback = QPaintEngine* (*)();
    using KLanguageButton_Event_Callback = bool (*)(KLanguageButton*, QEvent*);
    using KLanguageButton_MousePressEvent_Callback = void (*)(KLanguageButton*, QMouseEvent*);
    using KLanguageButton_MouseReleaseEvent_Callback = void (*)(KLanguageButton*, QMouseEvent*);
    using KLanguageButton_MouseDoubleClickEvent_Callback = void (*)(KLanguageButton*, QMouseEvent*);
    using KLanguageButton_MouseMoveEvent_Callback = void (*)(KLanguageButton*, QMouseEvent*);
    using KLanguageButton_WheelEvent_Callback = void (*)(KLanguageButton*, QWheelEvent*);
    using KLanguageButton_KeyPressEvent_Callback = void (*)(KLanguageButton*, QKeyEvent*);
    using KLanguageButton_KeyReleaseEvent_Callback = void (*)(KLanguageButton*, QKeyEvent*);
    using KLanguageButton_FocusInEvent_Callback = void (*)(KLanguageButton*, QFocusEvent*);
    using KLanguageButton_FocusOutEvent_Callback = void (*)(KLanguageButton*, QFocusEvent*);
    using KLanguageButton_EnterEvent_Callback = void (*)(KLanguageButton*, QEnterEvent*);
    using KLanguageButton_LeaveEvent_Callback = void (*)(KLanguageButton*, QEvent*);
    using KLanguageButton_PaintEvent_Callback = void (*)(KLanguageButton*, QPaintEvent*);
    using KLanguageButton_MoveEvent_Callback = void (*)(KLanguageButton*, QMoveEvent*);
    using KLanguageButton_ResizeEvent_Callback = void (*)(KLanguageButton*, QResizeEvent*);
    using KLanguageButton_CloseEvent_Callback = void (*)(KLanguageButton*, QCloseEvent*);
    using KLanguageButton_ContextMenuEvent_Callback = void (*)(KLanguageButton*, QContextMenuEvent*);
    using KLanguageButton_TabletEvent_Callback = void (*)(KLanguageButton*, QTabletEvent*);
    using KLanguageButton_ActionEvent_Callback = void (*)(KLanguageButton*, QActionEvent*);
    using KLanguageButton_DragEnterEvent_Callback = void (*)(KLanguageButton*, QDragEnterEvent*);
    using KLanguageButton_DragMoveEvent_Callback = void (*)(KLanguageButton*, QDragMoveEvent*);
    using KLanguageButton_DragLeaveEvent_Callback = void (*)(KLanguageButton*, QDragLeaveEvent*);
    using KLanguageButton_DropEvent_Callback = void (*)(KLanguageButton*, QDropEvent*);
    using KLanguageButton_ShowEvent_Callback = void (*)(KLanguageButton*, QShowEvent*);
    using KLanguageButton_HideEvent_Callback = void (*)(KLanguageButton*, QHideEvent*);
    using KLanguageButton_NativeEvent_Callback = bool (*)(KLanguageButton*, libqt_string, void*, intptr_t*);
    using KLanguageButton_ChangeEvent_Callback = void (*)(KLanguageButton*, QEvent*);
    using KLanguageButton_Metric_Callback = int (*)(const KLanguageButton*, int);
    using KLanguageButton_InitPainter_Callback = void (*)(const KLanguageButton*, QPainter*);
    using KLanguageButton_Redirected_Callback = QPaintDevice* (*)(const KLanguageButton*, QPoint*);
    using KLanguageButton_SharedPainter_Callback = QPainter* (*)();
    using KLanguageButton_InputMethodEvent_Callback = void (*)(KLanguageButton*, QInputMethodEvent*);
    using KLanguageButton_InputMethodQuery_Callback = QVariant* (*)(const KLanguageButton*, int);
    using KLanguageButton_FocusNextPrevChild_Callback = bool (*)(KLanguageButton*, bool);
    using KLanguageButton_EventFilter_Callback = bool (*)(KLanguageButton*, QObject*, QEvent*);
    using KLanguageButton_TimerEvent_Callback = void (*)(KLanguageButton*, QTimerEvent*);
    using KLanguageButton_ChildEvent_Callback = void (*)(KLanguageButton*, QChildEvent*);
    using KLanguageButton_CustomEvent_Callback = void (*)(KLanguageButton*, QEvent*);
    using KLanguageButton_ConnectNotify_Callback = void (*)(KLanguageButton*, QMetaMethod*);
    using KLanguageButton_DisconnectNotify_Callback = void (*)(KLanguageButton*, QMetaMethod*);
    using KLanguageButton_UpdateMicroFocus_Callback = void (*)();
    using KLanguageButton_Create_Callback = void (*)();
    using KLanguageButton_Destroy_Callback = void (*)();
    using KLanguageButton_FocusNextChild_Callback = bool (*)();
    using KLanguageButton_FocusPreviousChild_Callback = bool (*)();
    using KLanguageButton_Sender_Callback = QObject* (*)();
    using KLanguageButton_SenderSignalIndex_Callback = int (*)();
    using KLanguageButton_Receivers_Callback = int (*)(const KLanguageButton*, const char*);
    using KLanguageButton_IsSignalConnected_Callback = bool (*)(const KLanguageButton*, QMetaMethod*);
    using KLanguageButton_GetDecodedMetricF_Callback = double (*)(const KLanguageButton*, int, int);

  protected:
    // Instance callback storage
    KLanguageButton_Metacall_Callback klanguagebutton_metacall_callback = nullptr;
    KLanguageButton_DevType_Callback klanguagebutton_devtype_callback = nullptr;
    KLanguageButton_SetVisible_Callback klanguagebutton_setvisible_callback = nullptr;
    KLanguageButton_SizeHint_Callback klanguagebutton_sizehint_callback = nullptr;
    KLanguageButton_MinimumSizeHint_Callback klanguagebutton_minimumsizehint_callback = nullptr;
    KLanguageButton_HeightForWidth_Callback klanguagebutton_heightforwidth_callback = nullptr;
    KLanguageButton_HasHeightForWidth_Callback klanguagebutton_hasheightforwidth_callback = nullptr;
    KLanguageButton_PaintEngine_Callback klanguagebutton_paintengine_callback = nullptr;
    KLanguageButton_Event_Callback klanguagebutton_event_callback = nullptr;
    KLanguageButton_MousePressEvent_Callback klanguagebutton_mousepressevent_callback = nullptr;
    KLanguageButton_MouseReleaseEvent_Callback klanguagebutton_mousereleaseevent_callback = nullptr;
    KLanguageButton_MouseDoubleClickEvent_Callback klanguagebutton_mousedoubleclickevent_callback = nullptr;
    KLanguageButton_MouseMoveEvent_Callback klanguagebutton_mousemoveevent_callback = nullptr;
    KLanguageButton_WheelEvent_Callback klanguagebutton_wheelevent_callback = nullptr;
    KLanguageButton_KeyPressEvent_Callback klanguagebutton_keypressevent_callback = nullptr;
    KLanguageButton_KeyReleaseEvent_Callback klanguagebutton_keyreleaseevent_callback = nullptr;
    KLanguageButton_FocusInEvent_Callback klanguagebutton_focusinevent_callback = nullptr;
    KLanguageButton_FocusOutEvent_Callback klanguagebutton_focusoutevent_callback = nullptr;
    KLanguageButton_EnterEvent_Callback klanguagebutton_enterevent_callback = nullptr;
    KLanguageButton_LeaveEvent_Callback klanguagebutton_leaveevent_callback = nullptr;
    KLanguageButton_PaintEvent_Callback klanguagebutton_paintevent_callback = nullptr;
    KLanguageButton_MoveEvent_Callback klanguagebutton_moveevent_callback = nullptr;
    KLanguageButton_ResizeEvent_Callback klanguagebutton_resizeevent_callback = nullptr;
    KLanguageButton_CloseEvent_Callback klanguagebutton_closeevent_callback = nullptr;
    KLanguageButton_ContextMenuEvent_Callback klanguagebutton_contextmenuevent_callback = nullptr;
    KLanguageButton_TabletEvent_Callback klanguagebutton_tabletevent_callback = nullptr;
    KLanguageButton_ActionEvent_Callback klanguagebutton_actionevent_callback = nullptr;
    KLanguageButton_DragEnterEvent_Callback klanguagebutton_dragenterevent_callback = nullptr;
    KLanguageButton_DragMoveEvent_Callback klanguagebutton_dragmoveevent_callback = nullptr;
    KLanguageButton_DragLeaveEvent_Callback klanguagebutton_dragleaveevent_callback = nullptr;
    KLanguageButton_DropEvent_Callback klanguagebutton_dropevent_callback = nullptr;
    KLanguageButton_ShowEvent_Callback klanguagebutton_showevent_callback = nullptr;
    KLanguageButton_HideEvent_Callback klanguagebutton_hideevent_callback = nullptr;
    KLanguageButton_NativeEvent_Callback klanguagebutton_nativeevent_callback = nullptr;
    KLanguageButton_ChangeEvent_Callback klanguagebutton_changeevent_callback = nullptr;
    KLanguageButton_Metric_Callback klanguagebutton_metric_callback = nullptr;
    KLanguageButton_InitPainter_Callback klanguagebutton_initpainter_callback = nullptr;
    KLanguageButton_Redirected_Callback klanguagebutton_redirected_callback = nullptr;
    KLanguageButton_SharedPainter_Callback klanguagebutton_sharedpainter_callback = nullptr;
    KLanguageButton_InputMethodEvent_Callback klanguagebutton_inputmethodevent_callback = nullptr;
    KLanguageButton_InputMethodQuery_Callback klanguagebutton_inputmethodquery_callback = nullptr;
    KLanguageButton_FocusNextPrevChild_Callback klanguagebutton_focusnextprevchild_callback = nullptr;
    KLanguageButton_EventFilter_Callback klanguagebutton_eventfilter_callback = nullptr;
    KLanguageButton_TimerEvent_Callback klanguagebutton_timerevent_callback = nullptr;
    KLanguageButton_ChildEvent_Callback klanguagebutton_childevent_callback = nullptr;
    KLanguageButton_CustomEvent_Callback klanguagebutton_customevent_callback = nullptr;
    KLanguageButton_ConnectNotify_Callback klanguagebutton_connectnotify_callback = nullptr;
    KLanguageButton_DisconnectNotify_Callback klanguagebutton_disconnectnotify_callback = nullptr;
    KLanguageButton_UpdateMicroFocus_Callback klanguagebutton_updatemicrofocus_callback = nullptr;
    KLanguageButton_Create_Callback klanguagebutton_create_callback = nullptr;
    KLanguageButton_Destroy_Callback klanguagebutton_destroy_callback = nullptr;
    KLanguageButton_FocusNextChild_Callback klanguagebutton_focusnextchild_callback = nullptr;
    KLanguageButton_FocusPreviousChild_Callback klanguagebutton_focuspreviouschild_callback = nullptr;
    KLanguageButton_Sender_Callback klanguagebutton_sender_callback = nullptr;
    KLanguageButton_SenderSignalIndex_Callback klanguagebutton_sendersignalindex_callback = nullptr;
    KLanguageButton_Receivers_Callback klanguagebutton_receivers_callback = nullptr;
    KLanguageButton_IsSignalConnected_Callback klanguagebutton_issignalconnected_callback = nullptr;
    KLanguageButton_GetDecodedMetricF_Callback klanguagebutton_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool klanguagebutton_metacall_isbase = false;
    mutable bool klanguagebutton_devtype_isbase = false;
    mutable bool klanguagebutton_setvisible_isbase = false;
    mutable bool klanguagebutton_sizehint_isbase = false;
    mutable bool klanguagebutton_minimumsizehint_isbase = false;
    mutable bool klanguagebutton_heightforwidth_isbase = false;
    mutable bool klanguagebutton_hasheightforwidth_isbase = false;
    mutable bool klanguagebutton_paintengine_isbase = false;
    mutable bool klanguagebutton_event_isbase = false;
    mutable bool klanguagebutton_mousepressevent_isbase = false;
    mutable bool klanguagebutton_mousereleaseevent_isbase = false;
    mutable bool klanguagebutton_mousedoubleclickevent_isbase = false;
    mutable bool klanguagebutton_mousemoveevent_isbase = false;
    mutable bool klanguagebutton_wheelevent_isbase = false;
    mutable bool klanguagebutton_keypressevent_isbase = false;
    mutable bool klanguagebutton_keyreleaseevent_isbase = false;
    mutable bool klanguagebutton_focusinevent_isbase = false;
    mutable bool klanguagebutton_focusoutevent_isbase = false;
    mutable bool klanguagebutton_enterevent_isbase = false;
    mutable bool klanguagebutton_leaveevent_isbase = false;
    mutable bool klanguagebutton_paintevent_isbase = false;
    mutable bool klanguagebutton_moveevent_isbase = false;
    mutable bool klanguagebutton_resizeevent_isbase = false;
    mutable bool klanguagebutton_closeevent_isbase = false;
    mutable bool klanguagebutton_contextmenuevent_isbase = false;
    mutable bool klanguagebutton_tabletevent_isbase = false;
    mutable bool klanguagebutton_actionevent_isbase = false;
    mutable bool klanguagebutton_dragenterevent_isbase = false;
    mutable bool klanguagebutton_dragmoveevent_isbase = false;
    mutable bool klanguagebutton_dragleaveevent_isbase = false;
    mutable bool klanguagebutton_dropevent_isbase = false;
    mutable bool klanguagebutton_showevent_isbase = false;
    mutable bool klanguagebutton_hideevent_isbase = false;
    mutable bool klanguagebutton_nativeevent_isbase = false;
    mutable bool klanguagebutton_changeevent_isbase = false;
    mutable bool klanguagebutton_metric_isbase = false;
    mutable bool klanguagebutton_initpainter_isbase = false;
    mutable bool klanguagebutton_redirected_isbase = false;
    mutable bool klanguagebutton_sharedpainter_isbase = false;
    mutable bool klanguagebutton_inputmethodevent_isbase = false;
    mutable bool klanguagebutton_inputmethodquery_isbase = false;
    mutable bool klanguagebutton_focusnextprevchild_isbase = false;
    mutable bool klanguagebutton_eventfilter_isbase = false;
    mutable bool klanguagebutton_timerevent_isbase = false;
    mutable bool klanguagebutton_childevent_isbase = false;
    mutable bool klanguagebutton_customevent_isbase = false;
    mutable bool klanguagebutton_connectnotify_isbase = false;
    mutable bool klanguagebutton_disconnectnotify_isbase = false;
    mutable bool klanguagebutton_updatemicrofocus_isbase = false;
    mutable bool klanguagebutton_create_isbase = false;
    mutable bool klanguagebutton_destroy_isbase = false;
    mutable bool klanguagebutton_focusnextchild_isbase = false;
    mutable bool klanguagebutton_focuspreviouschild_isbase = false;
    mutable bool klanguagebutton_sender_isbase = false;
    mutable bool klanguagebutton_sendersignalindex_isbase = false;
    mutable bool klanguagebutton_receivers_isbase = false;
    mutable bool klanguagebutton_issignalconnected_isbase = false;
    mutable bool klanguagebutton_getdecodedmetricf_isbase = false;

  public:
    VirtualKLanguageButton(QWidget* parent) : KLanguageButton(parent) {};
    VirtualKLanguageButton() : KLanguageButton() {};
    VirtualKLanguageButton(const QString& text) : KLanguageButton(text) {};
    VirtualKLanguageButton(const QString& text, QWidget* parent) : KLanguageButton(text, parent) {};

    ~VirtualKLanguageButton() {
        klanguagebutton_metacall_callback = nullptr;
        klanguagebutton_devtype_callback = nullptr;
        klanguagebutton_setvisible_callback = nullptr;
        klanguagebutton_sizehint_callback = nullptr;
        klanguagebutton_minimumsizehint_callback = nullptr;
        klanguagebutton_heightforwidth_callback = nullptr;
        klanguagebutton_hasheightforwidth_callback = nullptr;
        klanguagebutton_paintengine_callback = nullptr;
        klanguagebutton_event_callback = nullptr;
        klanguagebutton_mousepressevent_callback = nullptr;
        klanguagebutton_mousereleaseevent_callback = nullptr;
        klanguagebutton_mousedoubleclickevent_callback = nullptr;
        klanguagebutton_mousemoveevent_callback = nullptr;
        klanguagebutton_wheelevent_callback = nullptr;
        klanguagebutton_keypressevent_callback = nullptr;
        klanguagebutton_keyreleaseevent_callback = nullptr;
        klanguagebutton_focusinevent_callback = nullptr;
        klanguagebutton_focusoutevent_callback = nullptr;
        klanguagebutton_enterevent_callback = nullptr;
        klanguagebutton_leaveevent_callback = nullptr;
        klanguagebutton_paintevent_callback = nullptr;
        klanguagebutton_moveevent_callback = nullptr;
        klanguagebutton_resizeevent_callback = nullptr;
        klanguagebutton_closeevent_callback = nullptr;
        klanguagebutton_contextmenuevent_callback = nullptr;
        klanguagebutton_tabletevent_callback = nullptr;
        klanguagebutton_actionevent_callback = nullptr;
        klanguagebutton_dragenterevent_callback = nullptr;
        klanguagebutton_dragmoveevent_callback = nullptr;
        klanguagebutton_dragleaveevent_callback = nullptr;
        klanguagebutton_dropevent_callback = nullptr;
        klanguagebutton_showevent_callback = nullptr;
        klanguagebutton_hideevent_callback = nullptr;
        klanguagebutton_nativeevent_callback = nullptr;
        klanguagebutton_changeevent_callback = nullptr;
        klanguagebutton_metric_callback = nullptr;
        klanguagebutton_initpainter_callback = nullptr;
        klanguagebutton_redirected_callback = nullptr;
        klanguagebutton_sharedpainter_callback = nullptr;
        klanguagebutton_inputmethodevent_callback = nullptr;
        klanguagebutton_inputmethodquery_callback = nullptr;
        klanguagebutton_focusnextprevchild_callback = nullptr;
        klanguagebutton_eventfilter_callback = nullptr;
        klanguagebutton_timerevent_callback = nullptr;
        klanguagebutton_childevent_callback = nullptr;
        klanguagebutton_customevent_callback = nullptr;
        klanguagebutton_connectnotify_callback = nullptr;
        klanguagebutton_disconnectnotify_callback = nullptr;
        klanguagebutton_updatemicrofocus_callback = nullptr;
        klanguagebutton_create_callback = nullptr;
        klanguagebutton_destroy_callback = nullptr;
        klanguagebutton_focusnextchild_callback = nullptr;
        klanguagebutton_focuspreviouschild_callback = nullptr;
        klanguagebutton_sender_callback = nullptr;
        klanguagebutton_sendersignalindex_callback = nullptr;
        klanguagebutton_receivers_callback = nullptr;
        klanguagebutton_issignalconnected_callback = nullptr;
        klanguagebutton_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKLanguageButton_Metacall_Callback(KLanguageButton_Metacall_Callback cb) { klanguagebutton_metacall_callback = cb; }
    inline void setKLanguageButton_DevType_Callback(KLanguageButton_DevType_Callback cb) { klanguagebutton_devtype_callback = cb; }
    inline void setKLanguageButton_SetVisible_Callback(KLanguageButton_SetVisible_Callback cb) { klanguagebutton_setvisible_callback = cb; }
    inline void setKLanguageButton_SizeHint_Callback(KLanguageButton_SizeHint_Callback cb) { klanguagebutton_sizehint_callback = cb; }
    inline void setKLanguageButton_MinimumSizeHint_Callback(KLanguageButton_MinimumSizeHint_Callback cb) { klanguagebutton_minimumsizehint_callback = cb; }
    inline void setKLanguageButton_HeightForWidth_Callback(KLanguageButton_HeightForWidth_Callback cb) { klanguagebutton_heightforwidth_callback = cb; }
    inline void setKLanguageButton_HasHeightForWidth_Callback(KLanguageButton_HasHeightForWidth_Callback cb) { klanguagebutton_hasheightforwidth_callback = cb; }
    inline void setKLanguageButton_PaintEngine_Callback(KLanguageButton_PaintEngine_Callback cb) { klanguagebutton_paintengine_callback = cb; }
    inline void setKLanguageButton_Event_Callback(KLanguageButton_Event_Callback cb) { klanguagebutton_event_callback = cb; }
    inline void setKLanguageButton_MousePressEvent_Callback(KLanguageButton_MousePressEvent_Callback cb) { klanguagebutton_mousepressevent_callback = cb; }
    inline void setKLanguageButton_MouseReleaseEvent_Callback(KLanguageButton_MouseReleaseEvent_Callback cb) { klanguagebutton_mousereleaseevent_callback = cb; }
    inline void setKLanguageButton_MouseDoubleClickEvent_Callback(KLanguageButton_MouseDoubleClickEvent_Callback cb) { klanguagebutton_mousedoubleclickevent_callback = cb; }
    inline void setKLanguageButton_MouseMoveEvent_Callback(KLanguageButton_MouseMoveEvent_Callback cb) { klanguagebutton_mousemoveevent_callback = cb; }
    inline void setKLanguageButton_WheelEvent_Callback(KLanguageButton_WheelEvent_Callback cb) { klanguagebutton_wheelevent_callback = cb; }
    inline void setKLanguageButton_KeyPressEvent_Callback(KLanguageButton_KeyPressEvent_Callback cb) { klanguagebutton_keypressevent_callback = cb; }
    inline void setKLanguageButton_KeyReleaseEvent_Callback(KLanguageButton_KeyReleaseEvent_Callback cb) { klanguagebutton_keyreleaseevent_callback = cb; }
    inline void setKLanguageButton_FocusInEvent_Callback(KLanguageButton_FocusInEvent_Callback cb) { klanguagebutton_focusinevent_callback = cb; }
    inline void setKLanguageButton_FocusOutEvent_Callback(KLanguageButton_FocusOutEvent_Callback cb) { klanguagebutton_focusoutevent_callback = cb; }
    inline void setKLanguageButton_EnterEvent_Callback(KLanguageButton_EnterEvent_Callback cb) { klanguagebutton_enterevent_callback = cb; }
    inline void setKLanguageButton_LeaveEvent_Callback(KLanguageButton_LeaveEvent_Callback cb) { klanguagebutton_leaveevent_callback = cb; }
    inline void setKLanguageButton_PaintEvent_Callback(KLanguageButton_PaintEvent_Callback cb) { klanguagebutton_paintevent_callback = cb; }
    inline void setKLanguageButton_MoveEvent_Callback(KLanguageButton_MoveEvent_Callback cb) { klanguagebutton_moveevent_callback = cb; }
    inline void setKLanguageButton_ResizeEvent_Callback(KLanguageButton_ResizeEvent_Callback cb) { klanguagebutton_resizeevent_callback = cb; }
    inline void setKLanguageButton_CloseEvent_Callback(KLanguageButton_CloseEvent_Callback cb) { klanguagebutton_closeevent_callback = cb; }
    inline void setKLanguageButton_ContextMenuEvent_Callback(KLanguageButton_ContextMenuEvent_Callback cb) { klanguagebutton_contextmenuevent_callback = cb; }
    inline void setKLanguageButton_TabletEvent_Callback(KLanguageButton_TabletEvent_Callback cb) { klanguagebutton_tabletevent_callback = cb; }
    inline void setKLanguageButton_ActionEvent_Callback(KLanguageButton_ActionEvent_Callback cb) { klanguagebutton_actionevent_callback = cb; }
    inline void setKLanguageButton_DragEnterEvent_Callback(KLanguageButton_DragEnterEvent_Callback cb) { klanguagebutton_dragenterevent_callback = cb; }
    inline void setKLanguageButton_DragMoveEvent_Callback(KLanguageButton_DragMoveEvent_Callback cb) { klanguagebutton_dragmoveevent_callback = cb; }
    inline void setKLanguageButton_DragLeaveEvent_Callback(KLanguageButton_DragLeaveEvent_Callback cb) { klanguagebutton_dragleaveevent_callback = cb; }
    inline void setKLanguageButton_DropEvent_Callback(KLanguageButton_DropEvent_Callback cb) { klanguagebutton_dropevent_callback = cb; }
    inline void setKLanguageButton_ShowEvent_Callback(KLanguageButton_ShowEvent_Callback cb) { klanguagebutton_showevent_callback = cb; }
    inline void setKLanguageButton_HideEvent_Callback(KLanguageButton_HideEvent_Callback cb) { klanguagebutton_hideevent_callback = cb; }
    inline void setKLanguageButton_NativeEvent_Callback(KLanguageButton_NativeEvent_Callback cb) { klanguagebutton_nativeevent_callback = cb; }
    inline void setKLanguageButton_ChangeEvent_Callback(KLanguageButton_ChangeEvent_Callback cb) { klanguagebutton_changeevent_callback = cb; }
    inline void setKLanguageButton_Metric_Callback(KLanguageButton_Metric_Callback cb) { klanguagebutton_metric_callback = cb; }
    inline void setKLanguageButton_InitPainter_Callback(KLanguageButton_InitPainter_Callback cb) { klanguagebutton_initpainter_callback = cb; }
    inline void setKLanguageButton_Redirected_Callback(KLanguageButton_Redirected_Callback cb) { klanguagebutton_redirected_callback = cb; }
    inline void setKLanguageButton_SharedPainter_Callback(KLanguageButton_SharedPainter_Callback cb) { klanguagebutton_sharedpainter_callback = cb; }
    inline void setKLanguageButton_InputMethodEvent_Callback(KLanguageButton_InputMethodEvent_Callback cb) { klanguagebutton_inputmethodevent_callback = cb; }
    inline void setKLanguageButton_InputMethodQuery_Callback(KLanguageButton_InputMethodQuery_Callback cb) { klanguagebutton_inputmethodquery_callback = cb; }
    inline void setKLanguageButton_FocusNextPrevChild_Callback(KLanguageButton_FocusNextPrevChild_Callback cb) { klanguagebutton_focusnextprevchild_callback = cb; }
    inline void setKLanguageButton_EventFilter_Callback(KLanguageButton_EventFilter_Callback cb) { klanguagebutton_eventfilter_callback = cb; }
    inline void setKLanguageButton_TimerEvent_Callback(KLanguageButton_TimerEvent_Callback cb) { klanguagebutton_timerevent_callback = cb; }
    inline void setKLanguageButton_ChildEvent_Callback(KLanguageButton_ChildEvent_Callback cb) { klanguagebutton_childevent_callback = cb; }
    inline void setKLanguageButton_CustomEvent_Callback(KLanguageButton_CustomEvent_Callback cb) { klanguagebutton_customevent_callback = cb; }
    inline void setKLanguageButton_ConnectNotify_Callback(KLanguageButton_ConnectNotify_Callback cb) { klanguagebutton_connectnotify_callback = cb; }
    inline void setKLanguageButton_DisconnectNotify_Callback(KLanguageButton_DisconnectNotify_Callback cb) { klanguagebutton_disconnectnotify_callback = cb; }
    inline void setKLanguageButton_UpdateMicroFocus_Callback(KLanguageButton_UpdateMicroFocus_Callback cb) { klanguagebutton_updatemicrofocus_callback = cb; }
    inline void setKLanguageButton_Create_Callback(KLanguageButton_Create_Callback cb) { klanguagebutton_create_callback = cb; }
    inline void setKLanguageButton_Destroy_Callback(KLanguageButton_Destroy_Callback cb) { klanguagebutton_destroy_callback = cb; }
    inline void setKLanguageButton_FocusNextChild_Callback(KLanguageButton_FocusNextChild_Callback cb) { klanguagebutton_focusnextchild_callback = cb; }
    inline void setKLanguageButton_FocusPreviousChild_Callback(KLanguageButton_FocusPreviousChild_Callback cb) { klanguagebutton_focuspreviouschild_callback = cb; }
    inline void setKLanguageButton_Sender_Callback(KLanguageButton_Sender_Callback cb) { klanguagebutton_sender_callback = cb; }
    inline void setKLanguageButton_SenderSignalIndex_Callback(KLanguageButton_SenderSignalIndex_Callback cb) { klanguagebutton_sendersignalindex_callback = cb; }
    inline void setKLanguageButton_Receivers_Callback(KLanguageButton_Receivers_Callback cb) { klanguagebutton_receivers_callback = cb; }
    inline void setKLanguageButton_IsSignalConnected_Callback(KLanguageButton_IsSignalConnected_Callback cb) { klanguagebutton_issignalconnected_callback = cb; }
    inline void setKLanguageButton_GetDecodedMetricF_Callback(KLanguageButton_GetDecodedMetricF_Callback cb) { klanguagebutton_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKLanguageButton_Metacall_IsBase(bool value) const { klanguagebutton_metacall_isbase = value; }
    inline void setKLanguageButton_DevType_IsBase(bool value) const { klanguagebutton_devtype_isbase = value; }
    inline void setKLanguageButton_SetVisible_IsBase(bool value) const { klanguagebutton_setvisible_isbase = value; }
    inline void setKLanguageButton_SizeHint_IsBase(bool value) const { klanguagebutton_sizehint_isbase = value; }
    inline void setKLanguageButton_MinimumSizeHint_IsBase(bool value) const { klanguagebutton_minimumsizehint_isbase = value; }
    inline void setKLanguageButton_HeightForWidth_IsBase(bool value) const { klanguagebutton_heightforwidth_isbase = value; }
    inline void setKLanguageButton_HasHeightForWidth_IsBase(bool value) const { klanguagebutton_hasheightforwidth_isbase = value; }
    inline void setKLanguageButton_PaintEngine_IsBase(bool value) const { klanguagebutton_paintengine_isbase = value; }
    inline void setKLanguageButton_Event_IsBase(bool value) const { klanguagebutton_event_isbase = value; }
    inline void setKLanguageButton_MousePressEvent_IsBase(bool value) const { klanguagebutton_mousepressevent_isbase = value; }
    inline void setKLanguageButton_MouseReleaseEvent_IsBase(bool value) const { klanguagebutton_mousereleaseevent_isbase = value; }
    inline void setKLanguageButton_MouseDoubleClickEvent_IsBase(bool value) const { klanguagebutton_mousedoubleclickevent_isbase = value; }
    inline void setKLanguageButton_MouseMoveEvent_IsBase(bool value) const { klanguagebutton_mousemoveevent_isbase = value; }
    inline void setKLanguageButton_WheelEvent_IsBase(bool value) const { klanguagebutton_wheelevent_isbase = value; }
    inline void setKLanguageButton_KeyPressEvent_IsBase(bool value) const { klanguagebutton_keypressevent_isbase = value; }
    inline void setKLanguageButton_KeyReleaseEvent_IsBase(bool value) const { klanguagebutton_keyreleaseevent_isbase = value; }
    inline void setKLanguageButton_FocusInEvent_IsBase(bool value) const { klanguagebutton_focusinevent_isbase = value; }
    inline void setKLanguageButton_FocusOutEvent_IsBase(bool value) const { klanguagebutton_focusoutevent_isbase = value; }
    inline void setKLanguageButton_EnterEvent_IsBase(bool value) const { klanguagebutton_enterevent_isbase = value; }
    inline void setKLanguageButton_LeaveEvent_IsBase(bool value) const { klanguagebutton_leaveevent_isbase = value; }
    inline void setKLanguageButton_PaintEvent_IsBase(bool value) const { klanguagebutton_paintevent_isbase = value; }
    inline void setKLanguageButton_MoveEvent_IsBase(bool value) const { klanguagebutton_moveevent_isbase = value; }
    inline void setKLanguageButton_ResizeEvent_IsBase(bool value) const { klanguagebutton_resizeevent_isbase = value; }
    inline void setKLanguageButton_CloseEvent_IsBase(bool value) const { klanguagebutton_closeevent_isbase = value; }
    inline void setKLanguageButton_ContextMenuEvent_IsBase(bool value) const { klanguagebutton_contextmenuevent_isbase = value; }
    inline void setKLanguageButton_TabletEvent_IsBase(bool value) const { klanguagebutton_tabletevent_isbase = value; }
    inline void setKLanguageButton_ActionEvent_IsBase(bool value) const { klanguagebutton_actionevent_isbase = value; }
    inline void setKLanguageButton_DragEnterEvent_IsBase(bool value) const { klanguagebutton_dragenterevent_isbase = value; }
    inline void setKLanguageButton_DragMoveEvent_IsBase(bool value) const { klanguagebutton_dragmoveevent_isbase = value; }
    inline void setKLanguageButton_DragLeaveEvent_IsBase(bool value) const { klanguagebutton_dragleaveevent_isbase = value; }
    inline void setKLanguageButton_DropEvent_IsBase(bool value) const { klanguagebutton_dropevent_isbase = value; }
    inline void setKLanguageButton_ShowEvent_IsBase(bool value) const { klanguagebutton_showevent_isbase = value; }
    inline void setKLanguageButton_HideEvent_IsBase(bool value) const { klanguagebutton_hideevent_isbase = value; }
    inline void setKLanguageButton_NativeEvent_IsBase(bool value) const { klanguagebutton_nativeevent_isbase = value; }
    inline void setKLanguageButton_ChangeEvent_IsBase(bool value) const { klanguagebutton_changeevent_isbase = value; }
    inline void setKLanguageButton_Metric_IsBase(bool value) const { klanguagebutton_metric_isbase = value; }
    inline void setKLanguageButton_InitPainter_IsBase(bool value) const { klanguagebutton_initpainter_isbase = value; }
    inline void setKLanguageButton_Redirected_IsBase(bool value) const { klanguagebutton_redirected_isbase = value; }
    inline void setKLanguageButton_SharedPainter_IsBase(bool value) const { klanguagebutton_sharedpainter_isbase = value; }
    inline void setKLanguageButton_InputMethodEvent_IsBase(bool value) const { klanguagebutton_inputmethodevent_isbase = value; }
    inline void setKLanguageButton_InputMethodQuery_IsBase(bool value) const { klanguagebutton_inputmethodquery_isbase = value; }
    inline void setKLanguageButton_FocusNextPrevChild_IsBase(bool value) const { klanguagebutton_focusnextprevchild_isbase = value; }
    inline void setKLanguageButton_EventFilter_IsBase(bool value) const { klanguagebutton_eventfilter_isbase = value; }
    inline void setKLanguageButton_TimerEvent_IsBase(bool value) const { klanguagebutton_timerevent_isbase = value; }
    inline void setKLanguageButton_ChildEvent_IsBase(bool value) const { klanguagebutton_childevent_isbase = value; }
    inline void setKLanguageButton_CustomEvent_IsBase(bool value) const { klanguagebutton_customevent_isbase = value; }
    inline void setKLanguageButton_ConnectNotify_IsBase(bool value) const { klanguagebutton_connectnotify_isbase = value; }
    inline void setKLanguageButton_DisconnectNotify_IsBase(bool value) const { klanguagebutton_disconnectnotify_isbase = value; }
    inline void setKLanguageButton_UpdateMicroFocus_IsBase(bool value) const { klanguagebutton_updatemicrofocus_isbase = value; }
    inline void setKLanguageButton_Create_IsBase(bool value) const { klanguagebutton_create_isbase = value; }
    inline void setKLanguageButton_Destroy_IsBase(bool value) const { klanguagebutton_destroy_isbase = value; }
    inline void setKLanguageButton_FocusNextChild_IsBase(bool value) const { klanguagebutton_focusnextchild_isbase = value; }
    inline void setKLanguageButton_FocusPreviousChild_IsBase(bool value) const { klanguagebutton_focuspreviouschild_isbase = value; }
    inline void setKLanguageButton_Sender_IsBase(bool value) const { klanguagebutton_sender_isbase = value; }
    inline void setKLanguageButton_SenderSignalIndex_IsBase(bool value) const { klanguagebutton_sendersignalindex_isbase = value; }
    inline void setKLanguageButton_Receivers_IsBase(bool value) const { klanguagebutton_receivers_isbase = value; }
    inline void setKLanguageButton_IsSignalConnected_IsBase(bool value) const { klanguagebutton_issignalconnected_isbase = value; }
    inline void setKLanguageButton_GetDecodedMetricF_IsBase(bool value) const { klanguagebutton_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (klanguagebutton_metacall_isbase) {
            klanguagebutton_metacall_isbase = false;
            return KLanguageButton::qt_metacall(param1, param2, param3);
        } else if (klanguagebutton_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = klanguagebutton_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KLanguageButton::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (klanguagebutton_devtype_isbase) {
            klanguagebutton_devtype_isbase = false;
            return KLanguageButton::devType();
        } else if (klanguagebutton_devtype_callback != nullptr) {
            int callback_ret = klanguagebutton_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KLanguageButton::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (klanguagebutton_setvisible_isbase) {
            klanguagebutton_setvisible_isbase = false;
            KLanguageButton::setVisible(visible);
        } else if (klanguagebutton_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            klanguagebutton_setvisible_callback(this, cbval1);
        } else {
            KLanguageButton::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (klanguagebutton_sizehint_isbase) {
            klanguagebutton_sizehint_isbase = false;
            return KLanguageButton::sizeHint();
        } else if (klanguagebutton_sizehint_callback != nullptr) {
            QSize* callback_ret = klanguagebutton_sizehint_callback();
            return *callback_ret;
        } else {
            return KLanguageButton::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (klanguagebutton_minimumsizehint_isbase) {
            klanguagebutton_minimumsizehint_isbase = false;
            return KLanguageButton::minimumSizeHint();
        } else if (klanguagebutton_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = klanguagebutton_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KLanguageButton::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (klanguagebutton_heightforwidth_isbase) {
            klanguagebutton_heightforwidth_isbase = false;
            return KLanguageButton::heightForWidth(param1);
        } else if (klanguagebutton_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = klanguagebutton_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KLanguageButton::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (klanguagebutton_hasheightforwidth_isbase) {
            klanguagebutton_hasheightforwidth_isbase = false;
            return KLanguageButton::hasHeightForWidth();
        } else if (klanguagebutton_hasheightforwidth_callback != nullptr) {
            bool callback_ret = klanguagebutton_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KLanguageButton::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (klanguagebutton_paintengine_isbase) {
            klanguagebutton_paintengine_isbase = false;
            return KLanguageButton::paintEngine();
        } else if (klanguagebutton_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = klanguagebutton_paintengine_callback();
            return callback_ret;
        } else {
            return KLanguageButton::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (klanguagebutton_event_isbase) {
            klanguagebutton_event_isbase = false;
            return KLanguageButton::event(event);
        } else if (klanguagebutton_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = klanguagebutton_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KLanguageButton::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (klanguagebutton_mousepressevent_isbase) {
            klanguagebutton_mousepressevent_isbase = false;
            KLanguageButton::mousePressEvent(event);
        } else if (klanguagebutton_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            klanguagebutton_mousepressevent_callback(this, cbval1);
        } else {
            KLanguageButton::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (klanguagebutton_mousereleaseevent_isbase) {
            klanguagebutton_mousereleaseevent_isbase = false;
            KLanguageButton::mouseReleaseEvent(event);
        } else if (klanguagebutton_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            klanguagebutton_mousereleaseevent_callback(this, cbval1);
        } else {
            KLanguageButton::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (klanguagebutton_mousedoubleclickevent_isbase) {
            klanguagebutton_mousedoubleclickevent_isbase = false;
            KLanguageButton::mouseDoubleClickEvent(event);
        } else if (klanguagebutton_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            klanguagebutton_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KLanguageButton::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (klanguagebutton_mousemoveevent_isbase) {
            klanguagebutton_mousemoveevent_isbase = false;
            KLanguageButton::mouseMoveEvent(event);
        } else if (klanguagebutton_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            klanguagebutton_mousemoveevent_callback(this, cbval1);
        } else {
            KLanguageButton::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (klanguagebutton_wheelevent_isbase) {
            klanguagebutton_wheelevent_isbase = false;
            KLanguageButton::wheelEvent(event);
        } else if (klanguagebutton_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            klanguagebutton_wheelevent_callback(this, cbval1);
        } else {
            KLanguageButton::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (klanguagebutton_keypressevent_isbase) {
            klanguagebutton_keypressevent_isbase = false;
            KLanguageButton::keyPressEvent(event);
        } else if (klanguagebutton_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            klanguagebutton_keypressevent_callback(this, cbval1);
        } else {
            KLanguageButton::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (klanguagebutton_keyreleaseevent_isbase) {
            klanguagebutton_keyreleaseevent_isbase = false;
            KLanguageButton::keyReleaseEvent(event);
        } else if (klanguagebutton_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            klanguagebutton_keyreleaseevent_callback(this, cbval1);
        } else {
            KLanguageButton::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (klanguagebutton_focusinevent_isbase) {
            klanguagebutton_focusinevent_isbase = false;
            KLanguageButton::focusInEvent(event);
        } else if (klanguagebutton_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            klanguagebutton_focusinevent_callback(this, cbval1);
        } else {
            KLanguageButton::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (klanguagebutton_focusoutevent_isbase) {
            klanguagebutton_focusoutevent_isbase = false;
            KLanguageButton::focusOutEvent(event);
        } else if (klanguagebutton_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            klanguagebutton_focusoutevent_callback(this, cbval1);
        } else {
            KLanguageButton::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (klanguagebutton_enterevent_isbase) {
            klanguagebutton_enterevent_isbase = false;
            KLanguageButton::enterEvent(event);
        } else if (klanguagebutton_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            klanguagebutton_enterevent_callback(this, cbval1);
        } else {
            KLanguageButton::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (klanguagebutton_leaveevent_isbase) {
            klanguagebutton_leaveevent_isbase = false;
            KLanguageButton::leaveEvent(event);
        } else if (klanguagebutton_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            klanguagebutton_leaveevent_callback(this, cbval1);
        } else {
            KLanguageButton::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (klanguagebutton_paintevent_isbase) {
            klanguagebutton_paintevent_isbase = false;
            KLanguageButton::paintEvent(event);
        } else if (klanguagebutton_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            klanguagebutton_paintevent_callback(this, cbval1);
        } else {
            KLanguageButton::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (klanguagebutton_moveevent_isbase) {
            klanguagebutton_moveevent_isbase = false;
            KLanguageButton::moveEvent(event);
        } else if (klanguagebutton_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            klanguagebutton_moveevent_callback(this, cbval1);
        } else {
            KLanguageButton::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (klanguagebutton_resizeevent_isbase) {
            klanguagebutton_resizeevent_isbase = false;
            KLanguageButton::resizeEvent(event);
        } else if (klanguagebutton_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            klanguagebutton_resizeevent_callback(this, cbval1);
        } else {
            KLanguageButton::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (klanguagebutton_closeevent_isbase) {
            klanguagebutton_closeevent_isbase = false;
            KLanguageButton::closeEvent(event);
        } else if (klanguagebutton_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            klanguagebutton_closeevent_callback(this, cbval1);
        } else {
            KLanguageButton::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (klanguagebutton_contextmenuevent_isbase) {
            klanguagebutton_contextmenuevent_isbase = false;
            KLanguageButton::contextMenuEvent(event);
        } else if (klanguagebutton_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            klanguagebutton_contextmenuevent_callback(this, cbval1);
        } else {
            KLanguageButton::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (klanguagebutton_tabletevent_isbase) {
            klanguagebutton_tabletevent_isbase = false;
            KLanguageButton::tabletEvent(event);
        } else if (klanguagebutton_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            klanguagebutton_tabletevent_callback(this, cbval1);
        } else {
            KLanguageButton::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (klanguagebutton_actionevent_isbase) {
            klanguagebutton_actionevent_isbase = false;
            KLanguageButton::actionEvent(event);
        } else if (klanguagebutton_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            klanguagebutton_actionevent_callback(this, cbval1);
        } else {
            KLanguageButton::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (klanguagebutton_dragenterevent_isbase) {
            klanguagebutton_dragenterevent_isbase = false;
            KLanguageButton::dragEnterEvent(event);
        } else if (klanguagebutton_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            klanguagebutton_dragenterevent_callback(this, cbval1);
        } else {
            KLanguageButton::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (klanguagebutton_dragmoveevent_isbase) {
            klanguagebutton_dragmoveevent_isbase = false;
            KLanguageButton::dragMoveEvent(event);
        } else if (klanguagebutton_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            klanguagebutton_dragmoveevent_callback(this, cbval1);
        } else {
            KLanguageButton::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (klanguagebutton_dragleaveevent_isbase) {
            klanguagebutton_dragleaveevent_isbase = false;
            KLanguageButton::dragLeaveEvent(event);
        } else if (klanguagebutton_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            klanguagebutton_dragleaveevent_callback(this, cbval1);
        } else {
            KLanguageButton::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (klanguagebutton_dropevent_isbase) {
            klanguagebutton_dropevent_isbase = false;
            KLanguageButton::dropEvent(event);
        } else if (klanguagebutton_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            klanguagebutton_dropevent_callback(this, cbval1);
        } else {
            KLanguageButton::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (klanguagebutton_showevent_isbase) {
            klanguagebutton_showevent_isbase = false;
            KLanguageButton::showEvent(event);
        } else if (klanguagebutton_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            klanguagebutton_showevent_callback(this, cbval1);
        } else {
            KLanguageButton::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (klanguagebutton_hideevent_isbase) {
            klanguagebutton_hideevent_isbase = false;
            KLanguageButton::hideEvent(event);
        } else if (klanguagebutton_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            klanguagebutton_hideevent_callback(this, cbval1);
        } else {
            KLanguageButton::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (klanguagebutton_nativeevent_isbase) {
            klanguagebutton_nativeevent_isbase = false;
            return KLanguageButton::nativeEvent(eventType, message, result);
        } else if (klanguagebutton_nativeevent_callback != nullptr) {
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

            bool callback_ret = klanguagebutton_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KLanguageButton::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (klanguagebutton_changeevent_isbase) {
            klanguagebutton_changeevent_isbase = false;
            KLanguageButton::changeEvent(param1);
        } else if (klanguagebutton_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            klanguagebutton_changeevent_callback(this, cbval1);
        } else {
            KLanguageButton::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (klanguagebutton_metric_isbase) {
            klanguagebutton_metric_isbase = false;
            return KLanguageButton::metric(param1);
        } else if (klanguagebutton_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = klanguagebutton_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KLanguageButton::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (klanguagebutton_initpainter_isbase) {
            klanguagebutton_initpainter_isbase = false;
            KLanguageButton::initPainter(painter);
        } else if (klanguagebutton_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            klanguagebutton_initpainter_callback(this, cbval1);
        } else {
            KLanguageButton::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (klanguagebutton_redirected_isbase) {
            klanguagebutton_redirected_isbase = false;
            return KLanguageButton::redirected(offset);
        } else if (klanguagebutton_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = klanguagebutton_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KLanguageButton::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (klanguagebutton_sharedpainter_isbase) {
            klanguagebutton_sharedpainter_isbase = false;
            return KLanguageButton::sharedPainter();
        } else if (klanguagebutton_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = klanguagebutton_sharedpainter_callback();
            return callback_ret;
        } else {
            return KLanguageButton::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (klanguagebutton_inputmethodevent_isbase) {
            klanguagebutton_inputmethodevent_isbase = false;
            KLanguageButton::inputMethodEvent(param1);
        } else if (klanguagebutton_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            klanguagebutton_inputmethodevent_callback(this, cbval1);
        } else {
            KLanguageButton::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (klanguagebutton_inputmethodquery_isbase) {
            klanguagebutton_inputmethodquery_isbase = false;
            return KLanguageButton::inputMethodQuery(param1);
        } else if (klanguagebutton_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = klanguagebutton_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KLanguageButton::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (klanguagebutton_focusnextprevchild_isbase) {
            klanguagebutton_focusnextprevchild_isbase = false;
            return KLanguageButton::focusNextPrevChild(next);
        } else if (klanguagebutton_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = klanguagebutton_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KLanguageButton::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (klanguagebutton_eventfilter_isbase) {
            klanguagebutton_eventfilter_isbase = false;
            return KLanguageButton::eventFilter(watched, event);
        } else if (klanguagebutton_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = klanguagebutton_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KLanguageButton::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (klanguagebutton_timerevent_isbase) {
            klanguagebutton_timerevent_isbase = false;
            KLanguageButton::timerEvent(event);
        } else if (klanguagebutton_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            klanguagebutton_timerevent_callback(this, cbval1);
        } else {
            KLanguageButton::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (klanguagebutton_childevent_isbase) {
            klanguagebutton_childevent_isbase = false;
            KLanguageButton::childEvent(event);
        } else if (klanguagebutton_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            klanguagebutton_childevent_callback(this, cbval1);
        } else {
            KLanguageButton::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (klanguagebutton_customevent_isbase) {
            klanguagebutton_customevent_isbase = false;
            KLanguageButton::customEvent(event);
        } else if (klanguagebutton_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            klanguagebutton_customevent_callback(this, cbval1);
        } else {
            KLanguageButton::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (klanguagebutton_connectnotify_isbase) {
            klanguagebutton_connectnotify_isbase = false;
            KLanguageButton::connectNotify(signal);
        } else if (klanguagebutton_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            klanguagebutton_connectnotify_callback(this, cbval1);
        } else {
            KLanguageButton::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (klanguagebutton_disconnectnotify_isbase) {
            klanguagebutton_disconnectnotify_isbase = false;
            KLanguageButton::disconnectNotify(signal);
        } else if (klanguagebutton_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            klanguagebutton_disconnectnotify_callback(this, cbval1);
        } else {
            KLanguageButton::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (klanguagebutton_updatemicrofocus_isbase) {
            klanguagebutton_updatemicrofocus_isbase = false;
            KLanguageButton::updateMicroFocus();
        } else if (klanguagebutton_updatemicrofocus_callback != nullptr) {
            klanguagebutton_updatemicrofocus_callback();
        } else {
            KLanguageButton::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (klanguagebutton_create_isbase) {
            klanguagebutton_create_isbase = false;
            KLanguageButton::create();
        } else if (klanguagebutton_create_callback != nullptr) {
            klanguagebutton_create_callback();
        } else {
            KLanguageButton::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (klanguagebutton_destroy_isbase) {
            klanguagebutton_destroy_isbase = false;
            KLanguageButton::destroy();
        } else if (klanguagebutton_destroy_callback != nullptr) {
            klanguagebutton_destroy_callback();
        } else {
            KLanguageButton::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (klanguagebutton_focusnextchild_isbase) {
            klanguagebutton_focusnextchild_isbase = false;
            return KLanguageButton::focusNextChild();
        } else if (klanguagebutton_focusnextchild_callback != nullptr) {
            bool callback_ret = klanguagebutton_focusnextchild_callback();
            return callback_ret;
        } else {
            return KLanguageButton::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (klanguagebutton_focuspreviouschild_isbase) {
            klanguagebutton_focuspreviouschild_isbase = false;
            return KLanguageButton::focusPreviousChild();
        } else if (klanguagebutton_focuspreviouschild_callback != nullptr) {
            bool callback_ret = klanguagebutton_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KLanguageButton::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (klanguagebutton_sender_isbase) {
            klanguagebutton_sender_isbase = false;
            return KLanguageButton::sender();
        } else if (klanguagebutton_sender_callback != nullptr) {
            QObject* callback_ret = klanguagebutton_sender_callback();
            return callback_ret;
        } else {
            return KLanguageButton::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (klanguagebutton_sendersignalindex_isbase) {
            klanguagebutton_sendersignalindex_isbase = false;
            return KLanguageButton::senderSignalIndex();
        } else if (klanguagebutton_sendersignalindex_callback != nullptr) {
            int callback_ret = klanguagebutton_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KLanguageButton::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (klanguagebutton_receivers_isbase) {
            klanguagebutton_receivers_isbase = false;
            return KLanguageButton::receivers(signal);
        } else if (klanguagebutton_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = klanguagebutton_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KLanguageButton::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (klanguagebutton_issignalconnected_isbase) {
            klanguagebutton_issignalconnected_isbase = false;
            return KLanguageButton::isSignalConnected(signal);
        } else if (klanguagebutton_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = klanguagebutton_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KLanguageButton::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (klanguagebutton_getdecodedmetricf_isbase) {
            klanguagebutton_getdecodedmetricf_isbase = false;
            return KLanguageButton::getDecodedMetricF(metricA, metricB);
        } else if (klanguagebutton_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = klanguagebutton_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KLanguageButton::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KLanguageButton_Event(KLanguageButton* self, QEvent* event);
    friend bool KLanguageButton_QBaseEvent(KLanguageButton* self, QEvent* event);
    friend void KLanguageButton_MousePressEvent(KLanguageButton* self, QMouseEvent* event);
    friend void KLanguageButton_QBaseMousePressEvent(KLanguageButton* self, QMouseEvent* event);
    friend void KLanguageButton_MouseReleaseEvent(KLanguageButton* self, QMouseEvent* event);
    friend void KLanguageButton_QBaseMouseReleaseEvent(KLanguageButton* self, QMouseEvent* event);
    friend void KLanguageButton_MouseDoubleClickEvent(KLanguageButton* self, QMouseEvent* event);
    friend void KLanguageButton_QBaseMouseDoubleClickEvent(KLanguageButton* self, QMouseEvent* event);
    friend void KLanguageButton_MouseMoveEvent(KLanguageButton* self, QMouseEvent* event);
    friend void KLanguageButton_QBaseMouseMoveEvent(KLanguageButton* self, QMouseEvent* event);
    friend void KLanguageButton_WheelEvent(KLanguageButton* self, QWheelEvent* event);
    friend void KLanguageButton_QBaseWheelEvent(KLanguageButton* self, QWheelEvent* event);
    friend void KLanguageButton_KeyPressEvent(KLanguageButton* self, QKeyEvent* event);
    friend void KLanguageButton_QBaseKeyPressEvent(KLanguageButton* self, QKeyEvent* event);
    friend void KLanguageButton_KeyReleaseEvent(KLanguageButton* self, QKeyEvent* event);
    friend void KLanguageButton_QBaseKeyReleaseEvent(KLanguageButton* self, QKeyEvent* event);
    friend void KLanguageButton_FocusInEvent(KLanguageButton* self, QFocusEvent* event);
    friend void KLanguageButton_QBaseFocusInEvent(KLanguageButton* self, QFocusEvent* event);
    friend void KLanguageButton_FocusOutEvent(KLanguageButton* self, QFocusEvent* event);
    friend void KLanguageButton_QBaseFocusOutEvent(KLanguageButton* self, QFocusEvent* event);
    friend void KLanguageButton_EnterEvent(KLanguageButton* self, QEnterEvent* event);
    friend void KLanguageButton_QBaseEnterEvent(KLanguageButton* self, QEnterEvent* event);
    friend void KLanguageButton_LeaveEvent(KLanguageButton* self, QEvent* event);
    friend void KLanguageButton_QBaseLeaveEvent(KLanguageButton* self, QEvent* event);
    friend void KLanguageButton_PaintEvent(KLanguageButton* self, QPaintEvent* event);
    friend void KLanguageButton_QBasePaintEvent(KLanguageButton* self, QPaintEvent* event);
    friend void KLanguageButton_MoveEvent(KLanguageButton* self, QMoveEvent* event);
    friend void KLanguageButton_QBaseMoveEvent(KLanguageButton* self, QMoveEvent* event);
    friend void KLanguageButton_ResizeEvent(KLanguageButton* self, QResizeEvent* event);
    friend void KLanguageButton_QBaseResizeEvent(KLanguageButton* self, QResizeEvent* event);
    friend void KLanguageButton_CloseEvent(KLanguageButton* self, QCloseEvent* event);
    friend void KLanguageButton_QBaseCloseEvent(KLanguageButton* self, QCloseEvent* event);
    friend void KLanguageButton_ContextMenuEvent(KLanguageButton* self, QContextMenuEvent* event);
    friend void KLanguageButton_QBaseContextMenuEvent(KLanguageButton* self, QContextMenuEvent* event);
    friend void KLanguageButton_TabletEvent(KLanguageButton* self, QTabletEvent* event);
    friend void KLanguageButton_QBaseTabletEvent(KLanguageButton* self, QTabletEvent* event);
    friend void KLanguageButton_ActionEvent(KLanguageButton* self, QActionEvent* event);
    friend void KLanguageButton_QBaseActionEvent(KLanguageButton* self, QActionEvent* event);
    friend void KLanguageButton_DragEnterEvent(KLanguageButton* self, QDragEnterEvent* event);
    friend void KLanguageButton_QBaseDragEnterEvent(KLanguageButton* self, QDragEnterEvent* event);
    friend void KLanguageButton_DragMoveEvent(KLanguageButton* self, QDragMoveEvent* event);
    friend void KLanguageButton_QBaseDragMoveEvent(KLanguageButton* self, QDragMoveEvent* event);
    friend void KLanguageButton_DragLeaveEvent(KLanguageButton* self, QDragLeaveEvent* event);
    friend void KLanguageButton_QBaseDragLeaveEvent(KLanguageButton* self, QDragLeaveEvent* event);
    friend void KLanguageButton_DropEvent(KLanguageButton* self, QDropEvent* event);
    friend void KLanguageButton_QBaseDropEvent(KLanguageButton* self, QDropEvent* event);
    friend void KLanguageButton_ShowEvent(KLanguageButton* self, QShowEvent* event);
    friend void KLanguageButton_QBaseShowEvent(KLanguageButton* self, QShowEvent* event);
    friend void KLanguageButton_HideEvent(KLanguageButton* self, QHideEvent* event);
    friend void KLanguageButton_QBaseHideEvent(KLanguageButton* self, QHideEvent* event);
    friend bool KLanguageButton_NativeEvent(KLanguageButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KLanguageButton_QBaseNativeEvent(KLanguageButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KLanguageButton_ChangeEvent(KLanguageButton* self, QEvent* param1);
    friend void KLanguageButton_QBaseChangeEvent(KLanguageButton* self, QEvent* param1);
    friend int KLanguageButton_Metric(const KLanguageButton* self, int param1);
    friend int KLanguageButton_QBaseMetric(const KLanguageButton* self, int param1);
    friend void KLanguageButton_InitPainter(const KLanguageButton* self, QPainter* painter);
    friend void KLanguageButton_QBaseInitPainter(const KLanguageButton* self, QPainter* painter);
    friend QPaintDevice* KLanguageButton_Redirected(const KLanguageButton* self, QPoint* offset);
    friend QPaintDevice* KLanguageButton_QBaseRedirected(const KLanguageButton* self, QPoint* offset);
    friend QPainter* KLanguageButton_SharedPainter(const KLanguageButton* self);
    friend QPainter* KLanguageButton_QBaseSharedPainter(const KLanguageButton* self);
    friend void KLanguageButton_InputMethodEvent(KLanguageButton* self, QInputMethodEvent* param1);
    friend void KLanguageButton_QBaseInputMethodEvent(KLanguageButton* self, QInputMethodEvent* param1);
    friend bool KLanguageButton_FocusNextPrevChild(KLanguageButton* self, bool next);
    friend bool KLanguageButton_QBaseFocusNextPrevChild(KLanguageButton* self, bool next);
    friend void KLanguageButton_TimerEvent(KLanguageButton* self, QTimerEvent* event);
    friend void KLanguageButton_QBaseTimerEvent(KLanguageButton* self, QTimerEvent* event);
    friend void KLanguageButton_ChildEvent(KLanguageButton* self, QChildEvent* event);
    friend void KLanguageButton_QBaseChildEvent(KLanguageButton* self, QChildEvent* event);
    friend void KLanguageButton_CustomEvent(KLanguageButton* self, QEvent* event);
    friend void KLanguageButton_QBaseCustomEvent(KLanguageButton* self, QEvent* event);
    friend void KLanguageButton_ConnectNotify(KLanguageButton* self, const QMetaMethod* signal);
    friend void KLanguageButton_QBaseConnectNotify(KLanguageButton* self, const QMetaMethod* signal);
    friend void KLanguageButton_DisconnectNotify(KLanguageButton* self, const QMetaMethod* signal);
    friend void KLanguageButton_QBaseDisconnectNotify(KLanguageButton* self, const QMetaMethod* signal);
    friend void KLanguageButton_UpdateMicroFocus(KLanguageButton* self);
    friend void KLanguageButton_QBaseUpdateMicroFocus(KLanguageButton* self);
    friend void KLanguageButton_Create(KLanguageButton* self);
    friend void KLanguageButton_QBaseCreate(KLanguageButton* self);
    friend void KLanguageButton_Destroy(KLanguageButton* self);
    friend void KLanguageButton_QBaseDestroy(KLanguageButton* self);
    friend bool KLanguageButton_FocusNextChild(KLanguageButton* self);
    friend bool KLanguageButton_QBaseFocusNextChild(KLanguageButton* self);
    friend bool KLanguageButton_FocusPreviousChild(KLanguageButton* self);
    friend bool KLanguageButton_QBaseFocusPreviousChild(KLanguageButton* self);
    friend QObject* KLanguageButton_Sender(const KLanguageButton* self);
    friend QObject* KLanguageButton_QBaseSender(const KLanguageButton* self);
    friend int KLanguageButton_SenderSignalIndex(const KLanguageButton* self);
    friend int KLanguageButton_QBaseSenderSignalIndex(const KLanguageButton* self);
    friend int KLanguageButton_Receivers(const KLanguageButton* self, const char* signal);
    friend int KLanguageButton_QBaseReceivers(const KLanguageButton* self, const char* signal);
    friend bool KLanguageButton_IsSignalConnected(const KLanguageButton* self, const QMetaMethod* signal);
    friend bool KLanguageButton_QBaseIsSignalConnected(const KLanguageButton* self, const QMetaMethod* signal);
    friend double KLanguageButton_GetDecodedMetricF(const KLanguageButton* self, int metricA, int metricB);
    friend double KLanguageButton_QBaseGetDecodedMetricF(const KLanguageButton* self, int metricA, int metricB);
};

#endif
