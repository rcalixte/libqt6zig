#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKMESSAGEWIDGET_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKMESSAGEWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KMessageWidget so that we can call protected methods
class VirtualKMessageWidget final : public KMessageWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualKMessageWidget = true;

    // Virtual class public types (including callbacks)
    using KMessageWidget_Metacall_Callback = int (*)(KMessageWidget*, int, int, void**);
    using KMessageWidget_SizeHint_Callback = QSize* (*)();
    using KMessageWidget_MinimumSizeHint_Callback = QSize* (*)();
    using KMessageWidget_HeightForWidth_Callback = int (*)(const KMessageWidget*, int);
    using KMessageWidget_PaintEvent_Callback = void (*)(KMessageWidget*, QPaintEvent*);
    using KMessageWidget_Event_Callback = bool (*)(KMessageWidget*, QEvent*);
    using KMessageWidget_ResizeEvent_Callback = void (*)(KMessageWidget*, QResizeEvent*);
    using KMessageWidget_ChangeEvent_Callback = void (*)(KMessageWidget*, QEvent*);
    using KMessageWidget_InitStyleOption_Callback = void (*)(const KMessageWidget*, QStyleOptionFrame*);
    using KMessageWidget_DevType_Callback = int (*)();
    using KMessageWidget_SetVisible_Callback = void (*)(KMessageWidget*, bool);
    using KMessageWidget_HasHeightForWidth_Callback = bool (*)();
    using KMessageWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using KMessageWidget_MousePressEvent_Callback = void (*)(KMessageWidget*, QMouseEvent*);
    using KMessageWidget_MouseReleaseEvent_Callback = void (*)(KMessageWidget*, QMouseEvent*);
    using KMessageWidget_MouseDoubleClickEvent_Callback = void (*)(KMessageWidget*, QMouseEvent*);
    using KMessageWidget_MouseMoveEvent_Callback = void (*)(KMessageWidget*, QMouseEvent*);
    using KMessageWidget_WheelEvent_Callback = void (*)(KMessageWidget*, QWheelEvent*);
    using KMessageWidget_KeyPressEvent_Callback = void (*)(KMessageWidget*, QKeyEvent*);
    using KMessageWidget_KeyReleaseEvent_Callback = void (*)(KMessageWidget*, QKeyEvent*);
    using KMessageWidget_FocusInEvent_Callback = void (*)(KMessageWidget*, QFocusEvent*);
    using KMessageWidget_FocusOutEvent_Callback = void (*)(KMessageWidget*, QFocusEvent*);
    using KMessageWidget_EnterEvent_Callback = void (*)(KMessageWidget*, QEnterEvent*);
    using KMessageWidget_LeaveEvent_Callback = void (*)(KMessageWidget*, QEvent*);
    using KMessageWidget_MoveEvent_Callback = void (*)(KMessageWidget*, QMoveEvent*);
    using KMessageWidget_CloseEvent_Callback = void (*)(KMessageWidget*, QCloseEvent*);
    using KMessageWidget_ContextMenuEvent_Callback = void (*)(KMessageWidget*, QContextMenuEvent*);
    using KMessageWidget_TabletEvent_Callback = void (*)(KMessageWidget*, QTabletEvent*);
    using KMessageWidget_ActionEvent_Callback = void (*)(KMessageWidget*, QActionEvent*);
    using KMessageWidget_DragEnterEvent_Callback = void (*)(KMessageWidget*, QDragEnterEvent*);
    using KMessageWidget_DragMoveEvent_Callback = void (*)(KMessageWidget*, QDragMoveEvent*);
    using KMessageWidget_DragLeaveEvent_Callback = void (*)(KMessageWidget*, QDragLeaveEvent*);
    using KMessageWidget_DropEvent_Callback = void (*)(KMessageWidget*, QDropEvent*);
    using KMessageWidget_ShowEvent_Callback = void (*)(KMessageWidget*, QShowEvent*);
    using KMessageWidget_HideEvent_Callback = void (*)(KMessageWidget*, QHideEvent*);
    using KMessageWidget_NativeEvent_Callback = bool (*)(KMessageWidget*, libqt_string, void*, intptr_t*);
    using KMessageWidget_Metric_Callback = int (*)(const KMessageWidget*, int);
    using KMessageWidget_InitPainter_Callback = void (*)(const KMessageWidget*, QPainter*);
    using KMessageWidget_Redirected_Callback = QPaintDevice* (*)(const KMessageWidget*, QPoint*);
    using KMessageWidget_SharedPainter_Callback = QPainter* (*)();
    using KMessageWidget_InputMethodEvent_Callback = void (*)(KMessageWidget*, QInputMethodEvent*);
    using KMessageWidget_InputMethodQuery_Callback = QVariant* (*)(const KMessageWidget*, int);
    using KMessageWidget_FocusNextPrevChild_Callback = bool (*)(KMessageWidget*, bool);
    using KMessageWidget_EventFilter_Callback = bool (*)(KMessageWidget*, QObject*, QEvent*);
    using KMessageWidget_TimerEvent_Callback = void (*)(KMessageWidget*, QTimerEvent*);
    using KMessageWidget_ChildEvent_Callback = void (*)(KMessageWidget*, QChildEvent*);
    using KMessageWidget_CustomEvent_Callback = void (*)(KMessageWidget*, QEvent*);
    using KMessageWidget_ConnectNotify_Callback = void (*)(KMessageWidget*, QMetaMethod*);
    using KMessageWidget_DisconnectNotify_Callback = void (*)(KMessageWidget*, QMetaMethod*);
    using KMessageWidget_DrawFrame_Callback = void (*)(KMessageWidget*, QPainter*);
    using KMessageWidget_UpdateMicroFocus_Callback = void (*)();
    using KMessageWidget_Create_Callback = void (*)();
    using KMessageWidget_Destroy_Callback = void (*)();
    using KMessageWidget_FocusNextChild_Callback = bool (*)();
    using KMessageWidget_FocusPreviousChild_Callback = bool (*)();
    using KMessageWidget_Sender_Callback = QObject* (*)();
    using KMessageWidget_SenderSignalIndex_Callback = int (*)();
    using KMessageWidget_Receivers_Callback = int (*)(const KMessageWidget*, const char*);
    using KMessageWidget_IsSignalConnected_Callback = bool (*)(const KMessageWidget*, QMetaMethod*);
    using KMessageWidget_GetDecodedMetricF_Callback = double (*)(const KMessageWidget*, int, int);

  protected:
    // Instance callback storage
    KMessageWidget_Metacall_Callback kmessagewidget_metacall_callback = nullptr;
    KMessageWidget_SizeHint_Callback kmessagewidget_sizehint_callback = nullptr;
    KMessageWidget_MinimumSizeHint_Callback kmessagewidget_minimumsizehint_callback = nullptr;
    KMessageWidget_HeightForWidth_Callback kmessagewidget_heightforwidth_callback = nullptr;
    KMessageWidget_PaintEvent_Callback kmessagewidget_paintevent_callback = nullptr;
    KMessageWidget_Event_Callback kmessagewidget_event_callback = nullptr;
    KMessageWidget_ResizeEvent_Callback kmessagewidget_resizeevent_callback = nullptr;
    KMessageWidget_ChangeEvent_Callback kmessagewidget_changeevent_callback = nullptr;
    KMessageWidget_InitStyleOption_Callback kmessagewidget_initstyleoption_callback = nullptr;
    KMessageWidget_DevType_Callback kmessagewidget_devtype_callback = nullptr;
    KMessageWidget_SetVisible_Callback kmessagewidget_setvisible_callback = nullptr;
    KMessageWidget_HasHeightForWidth_Callback kmessagewidget_hasheightforwidth_callback = nullptr;
    KMessageWidget_PaintEngine_Callback kmessagewidget_paintengine_callback = nullptr;
    KMessageWidget_MousePressEvent_Callback kmessagewidget_mousepressevent_callback = nullptr;
    KMessageWidget_MouseReleaseEvent_Callback kmessagewidget_mousereleaseevent_callback = nullptr;
    KMessageWidget_MouseDoubleClickEvent_Callback kmessagewidget_mousedoubleclickevent_callback = nullptr;
    KMessageWidget_MouseMoveEvent_Callback kmessagewidget_mousemoveevent_callback = nullptr;
    KMessageWidget_WheelEvent_Callback kmessagewidget_wheelevent_callback = nullptr;
    KMessageWidget_KeyPressEvent_Callback kmessagewidget_keypressevent_callback = nullptr;
    KMessageWidget_KeyReleaseEvent_Callback kmessagewidget_keyreleaseevent_callback = nullptr;
    KMessageWidget_FocusInEvent_Callback kmessagewidget_focusinevent_callback = nullptr;
    KMessageWidget_FocusOutEvent_Callback kmessagewidget_focusoutevent_callback = nullptr;
    KMessageWidget_EnterEvent_Callback kmessagewidget_enterevent_callback = nullptr;
    KMessageWidget_LeaveEvent_Callback kmessagewidget_leaveevent_callback = nullptr;
    KMessageWidget_MoveEvent_Callback kmessagewidget_moveevent_callback = nullptr;
    KMessageWidget_CloseEvent_Callback kmessagewidget_closeevent_callback = nullptr;
    KMessageWidget_ContextMenuEvent_Callback kmessagewidget_contextmenuevent_callback = nullptr;
    KMessageWidget_TabletEvent_Callback kmessagewidget_tabletevent_callback = nullptr;
    KMessageWidget_ActionEvent_Callback kmessagewidget_actionevent_callback = nullptr;
    KMessageWidget_DragEnterEvent_Callback kmessagewidget_dragenterevent_callback = nullptr;
    KMessageWidget_DragMoveEvent_Callback kmessagewidget_dragmoveevent_callback = nullptr;
    KMessageWidget_DragLeaveEvent_Callback kmessagewidget_dragleaveevent_callback = nullptr;
    KMessageWidget_DropEvent_Callback kmessagewidget_dropevent_callback = nullptr;
    KMessageWidget_ShowEvent_Callback kmessagewidget_showevent_callback = nullptr;
    KMessageWidget_HideEvent_Callback kmessagewidget_hideevent_callback = nullptr;
    KMessageWidget_NativeEvent_Callback kmessagewidget_nativeevent_callback = nullptr;
    KMessageWidget_Metric_Callback kmessagewidget_metric_callback = nullptr;
    KMessageWidget_InitPainter_Callback kmessagewidget_initpainter_callback = nullptr;
    KMessageWidget_Redirected_Callback kmessagewidget_redirected_callback = nullptr;
    KMessageWidget_SharedPainter_Callback kmessagewidget_sharedpainter_callback = nullptr;
    KMessageWidget_InputMethodEvent_Callback kmessagewidget_inputmethodevent_callback = nullptr;
    KMessageWidget_InputMethodQuery_Callback kmessagewidget_inputmethodquery_callback = nullptr;
    KMessageWidget_FocusNextPrevChild_Callback kmessagewidget_focusnextprevchild_callback = nullptr;
    KMessageWidget_EventFilter_Callback kmessagewidget_eventfilter_callback = nullptr;
    KMessageWidget_TimerEvent_Callback kmessagewidget_timerevent_callback = nullptr;
    KMessageWidget_ChildEvent_Callback kmessagewidget_childevent_callback = nullptr;
    KMessageWidget_CustomEvent_Callback kmessagewidget_customevent_callback = nullptr;
    KMessageWidget_ConnectNotify_Callback kmessagewidget_connectnotify_callback = nullptr;
    KMessageWidget_DisconnectNotify_Callback kmessagewidget_disconnectnotify_callback = nullptr;
    KMessageWidget_DrawFrame_Callback kmessagewidget_drawframe_callback = nullptr;
    KMessageWidget_UpdateMicroFocus_Callback kmessagewidget_updatemicrofocus_callback = nullptr;
    KMessageWidget_Create_Callback kmessagewidget_create_callback = nullptr;
    KMessageWidget_Destroy_Callback kmessagewidget_destroy_callback = nullptr;
    KMessageWidget_FocusNextChild_Callback kmessagewidget_focusnextchild_callback = nullptr;
    KMessageWidget_FocusPreviousChild_Callback kmessagewidget_focuspreviouschild_callback = nullptr;
    KMessageWidget_Sender_Callback kmessagewidget_sender_callback = nullptr;
    KMessageWidget_SenderSignalIndex_Callback kmessagewidget_sendersignalindex_callback = nullptr;
    KMessageWidget_Receivers_Callback kmessagewidget_receivers_callback = nullptr;
    KMessageWidget_IsSignalConnected_Callback kmessagewidget_issignalconnected_callback = nullptr;
    KMessageWidget_GetDecodedMetricF_Callback kmessagewidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kmessagewidget_metacall_isbase = false;
    mutable bool kmessagewidget_sizehint_isbase = false;
    mutable bool kmessagewidget_minimumsizehint_isbase = false;
    mutable bool kmessagewidget_heightforwidth_isbase = false;
    mutable bool kmessagewidget_paintevent_isbase = false;
    mutable bool kmessagewidget_event_isbase = false;
    mutable bool kmessagewidget_resizeevent_isbase = false;
    mutable bool kmessagewidget_changeevent_isbase = false;
    mutable bool kmessagewidget_initstyleoption_isbase = false;
    mutable bool kmessagewidget_devtype_isbase = false;
    mutable bool kmessagewidget_setvisible_isbase = false;
    mutable bool kmessagewidget_hasheightforwidth_isbase = false;
    mutable bool kmessagewidget_paintengine_isbase = false;
    mutable bool kmessagewidget_mousepressevent_isbase = false;
    mutable bool kmessagewidget_mousereleaseevent_isbase = false;
    mutable bool kmessagewidget_mousedoubleclickevent_isbase = false;
    mutable bool kmessagewidget_mousemoveevent_isbase = false;
    mutable bool kmessagewidget_wheelevent_isbase = false;
    mutable bool kmessagewidget_keypressevent_isbase = false;
    mutable bool kmessagewidget_keyreleaseevent_isbase = false;
    mutable bool kmessagewidget_focusinevent_isbase = false;
    mutable bool kmessagewidget_focusoutevent_isbase = false;
    mutable bool kmessagewidget_enterevent_isbase = false;
    mutable bool kmessagewidget_leaveevent_isbase = false;
    mutable bool kmessagewidget_moveevent_isbase = false;
    mutable bool kmessagewidget_closeevent_isbase = false;
    mutable bool kmessagewidget_contextmenuevent_isbase = false;
    mutable bool kmessagewidget_tabletevent_isbase = false;
    mutable bool kmessagewidget_actionevent_isbase = false;
    mutable bool kmessagewidget_dragenterevent_isbase = false;
    mutable bool kmessagewidget_dragmoveevent_isbase = false;
    mutable bool kmessagewidget_dragleaveevent_isbase = false;
    mutable bool kmessagewidget_dropevent_isbase = false;
    mutable bool kmessagewidget_showevent_isbase = false;
    mutable bool kmessagewidget_hideevent_isbase = false;
    mutable bool kmessagewidget_nativeevent_isbase = false;
    mutable bool kmessagewidget_metric_isbase = false;
    mutable bool kmessagewidget_initpainter_isbase = false;
    mutable bool kmessagewidget_redirected_isbase = false;
    mutable bool kmessagewidget_sharedpainter_isbase = false;
    mutable bool kmessagewidget_inputmethodevent_isbase = false;
    mutable bool kmessagewidget_inputmethodquery_isbase = false;
    mutable bool kmessagewidget_focusnextprevchild_isbase = false;
    mutable bool kmessagewidget_eventfilter_isbase = false;
    mutable bool kmessagewidget_timerevent_isbase = false;
    mutable bool kmessagewidget_childevent_isbase = false;
    mutable bool kmessagewidget_customevent_isbase = false;
    mutable bool kmessagewidget_connectnotify_isbase = false;
    mutable bool kmessagewidget_disconnectnotify_isbase = false;
    mutable bool kmessagewidget_drawframe_isbase = false;
    mutable bool kmessagewidget_updatemicrofocus_isbase = false;
    mutable bool kmessagewidget_create_isbase = false;
    mutable bool kmessagewidget_destroy_isbase = false;
    mutable bool kmessagewidget_focusnextchild_isbase = false;
    mutable bool kmessagewidget_focuspreviouschild_isbase = false;
    mutable bool kmessagewidget_sender_isbase = false;
    mutable bool kmessagewidget_sendersignalindex_isbase = false;
    mutable bool kmessagewidget_receivers_isbase = false;
    mutable bool kmessagewidget_issignalconnected_isbase = false;
    mutable bool kmessagewidget_getdecodedmetricf_isbase = false;

  public:
    VirtualKMessageWidget(QWidget* parent) : KMessageWidget(parent) {};
    VirtualKMessageWidget() : KMessageWidget() {};
    VirtualKMessageWidget(const QString& text) : KMessageWidget(text) {};
    VirtualKMessageWidget(const QString& text, QWidget* parent) : KMessageWidget(text, parent) {};

    ~VirtualKMessageWidget() {
        kmessagewidget_metacall_callback = nullptr;
        kmessagewidget_sizehint_callback = nullptr;
        kmessagewidget_minimumsizehint_callback = nullptr;
        kmessagewidget_heightforwidth_callback = nullptr;
        kmessagewidget_paintevent_callback = nullptr;
        kmessagewidget_event_callback = nullptr;
        kmessagewidget_resizeevent_callback = nullptr;
        kmessagewidget_changeevent_callback = nullptr;
        kmessagewidget_initstyleoption_callback = nullptr;
        kmessagewidget_devtype_callback = nullptr;
        kmessagewidget_setvisible_callback = nullptr;
        kmessagewidget_hasheightforwidth_callback = nullptr;
        kmessagewidget_paintengine_callback = nullptr;
        kmessagewidget_mousepressevent_callback = nullptr;
        kmessagewidget_mousereleaseevent_callback = nullptr;
        kmessagewidget_mousedoubleclickevent_callback = nullptr;
        kmessagewidget_mousemoveevent_callback = nullptr;
        kmessagewidget_wheelevent_callback = nullptr;
        kmessagewidget_keypressevent_callback = nullptr;
        kmessagewidget_keyreleaseevent_callback = nullptr;
        kmessagewidget_focusinevent_callback = nullptr;
        kmessagewidget_focusoutevent_callback = nullptr;
        kmessagewidget_enterevent_callback = nullptr;
        kmessagewidget_leaveevent_callback = nullptr;
        kmessagewidget_moveevent_callback = nullptr;
        kmessagewidget_closeevent_callback = nullptr;
        kmessagewidget_contextmenuevent_callback = nullptr;
        kmessagewidget_tabletevent_callback = nullptr;
        kmessagewidget_actionevent_callback = nullptr;
        kmessagewidget_dragenterevent_callback = nullptr;
        kmessagewidget_dragmoveevent_callback = nullptr;
        kmessagewidget_dragleaveevent_callback = nullptr;
        kmessagewidget_dropevent_callback = nullptr;
        kmessagewidget_showevent_callback = nullptr;
        kmessagewidget_hideevent_callback = nullptr;
        kmessagewidget_nativeevent_callback = nullptr;
        kmessagewidget_metric_callback = nullptr;
        kmessagewidget_initpainter_callback = nullptr;
        kmessagewidget_redirected_callback = nullptr;
        kmessagewidget_sharedpainter_callback = nullptr;
        kmessagewidget_inputmethodevent_callback = nullptr;
        kmessagewidget_inputmethodquery_callback = nullptr;
        kmessagewidget_focusnextprevchild_callback = nullptr;
        kmessagewidget_eventfilter_callback = nullptr;
        kmessagewidget_timerevent_callback = nullptr;
        kmessagewidget_childevent_callback = nullptr;
        kmessagewidget_customevent_callback = nullptr;
        kmessagewidget_connectnotify_callback = nullptr;
        kmessagewidget_disconnectnotify_callback = nullptr;
        kmessagewidget_drawframe_callback = nullptr;
        kmessagewidget_updatemicrofocus_callback = nullptr;
        kmessagewidget_create_callback = nullptr;
        kmessagewidget_destroy_callback = nullptr;
        kmessagewidget_focusnextchild_callback = nullptr;
        kmessagewidget_focuspreviouschild_callback = nullptr;
        kmessagewidget_sender_callback = nullptr;
        kmessagewidget_sendersignalindex_callback = nullptr;
        kmessagewidget_receivers_callback = nullptr;
        kmessagewidget_issignalconnected_callback = nullptr;
        kmessagewidget_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKMessageWidget_Metacall_Callback(KMessageWidget_Metacall_Callback cb) { kmessagewidget_metacall_callback = cb; }
    inline void setKMessageWidget_SizeHint_Callback(KMessageWidget_SizeHint_Callback cb) { kmessagewidget_sizehint_callback = cb; }
    inline void setKMessageWidget_MinimumSizeHint_Callback(KMessageWidget_MinimumSizeHint_Callback cb) { kmessagewidget_minimumsizehint_callback = cb; }
    inline void setKMessageWidget_HeightForWidth_Callback(KMessageWidget_HeightForWidth_Callback cb) { kmessagewidget_heightforwidth_callback = cb; }
    inline void setKMessageWidget_PaintEvent_Callback(KMessageWidget_PaintEvent_Callback cb) { kmessagewidget_paintevent_callback = cb; }
    inline void setKMessageWidget_Event_Callback(KMessageWidget_Event_Callback cb) { kmessagewidget_event_callback = cb; }
    inline void setKMessageWidget_ResizeEvent_Callback(KMessageWidget_ResizeEvent_Callback cb) { kmessagewidget_resizeevent_callback = cb; }
    inline void setKMessageWidget_ChangeEvent_Callback(KMessageWidget_ChangeEvent_Callback cb) { kmessagewidget_changeevent_callback = cb; }
    inline void setKMessageWidget_InitStyleOption_Callback(KMessageWidget_InitStyleOption_Callback cb) { kmessagewidget_initstyleoption_callback = cb; }
    inline void setKMessageWidget_DevType_Callback(KMessageWidget_DevType_Callback cb) { kmessagewidget_devtype_callback = cb; }
    inline void setKMessageWidget_SetVisible_Callback(KMessageWidget_SetVisible_Callback cb) { kmessagewidget_setvisible_callback = cb; }
    inline void setKMessageWidget_HasHeightForWidth_Callback(KMessageWidget_HasHeightForWidth_Callback cb) { kmessagewidget_hasheightforwidth_callback = cb; }
    inline void setKMessageWidget_PaintEngine_Callback(KMessageWidget_PaintEngine_Callback cb) { kmessagewidget_paintengine_callback = cb; }
    inline void setKMessageWidget_MousePressEvent_Callback(KMessageWidget_MousePressEvent_Callback cb) { kmessagewidget_mousepressevent_callback = cb; }
    inline void setKMessageWidget_MouseReleaseEvent_Callback(KMessageWidget_MouseReleaseEvent_Callback cb) { kmessagewidget_mousereleaseevent_callback = cb; }
    inline void setKMessageWidget_MouseDoubleClickEvent_Callback(KMessageWidget_MouseDoubleClickEvent_Callback cb) { kmessagewidget_mousedoubleclickevent_callback = cb; }
    inline void setKMessageWidget_MouseMoveEvent_Callback(KMessageWidget_MouseMoveEvent_Callback cb) { kmessagewidget_mousemoveevent_callback = cb; }
    inline void setKMessageWidget_WheelEvent_Callback(KMessageWidget_WheelEvent_Callback cb) { kmessagewidget_wheelevent_callback = cb; }
    inline void setKMessageWidget_KeyPressEvent_Callback(KMessageWidget_KeyPressEvent_Callback cb) { kmessagewidget_keypressevent_callback = cb; }
    inline void setKMessageWidget_KeyReleaseEvent_Callback(KMessageWidget_KeyReleaseEvent_Callback cb) { kmessagewidget_keyreleaseevent_callback = cb; }
    inline void setKMessageWidget_FocusInEvent_Callback(KMessageWidget_FocusInEvent_Callback cb) { kmessagewidget_focusinevent_callback = cb; }
    inline void setKMessageWidget_FocusOutEvent_Callback(KMessageWidget_FocusOutEvent_Callback cb) { kmessagewidget_focusoutevent_callback = cb; }
    inline void setKMessageWidget_EnterEvent_Callback(KMessageWidget_EnterEvent_Callback cb) { kmessagewidget_enterevent_callback = cb; }
    inline void setKMessageWidget_LeaveEvent_Callback(KMessageWidget_LeaveEvent_Callback cb) { kmessagewidget_leaveevent_callback = cb; }
    inline void setKMessageWidget_MoveEvent_Callback(KMessageWidget_MoveEvent_Callback cb) { kmessagewidget_moveevent_callback = cb; }
    inline void setKMessageWidget_CloseEvent_Callback(KMessageWidget_CloseEvent_Callback cb) { kmessagewidget_closeevent_callback = cb; }
    inline void setKMessageWidget_ContextMenuEvent_Callback(KMessageWidget_ContextMenuEvent_Callback cb) { kmessagewidget_contextmenuevent_callback = cb; }
    inline void setKMessageWidget_TabletEvent_Callback(KMessageWidget_TabletEvent_Callback cb) { kmessagewidget_tabletevent_callback = cb; }
    inline void setKMessageWidget_ActionEvent_Callback(KMessageWidget_ActionEvent_Callback cb) { kmessagewidget_actionevent_callback = cb; }
    inline void setKMessageWidget_DragEnterEvent_Callback(KMessageWidget_DragEnterEvent_Callback cb) { kmessagewidget_dragenterevent_callback = cb; }
    inline void setKMessageWidget_DragMoveEvent_Callback(KMessageWidget_DragMoveEvent_Callback cb) { kmessagewidget_dragmoveevent_callback = cb; }
    inline void setKMessageWidget_DragLeaveEvent_Callback(KMessageWidget_DragLeaveEvent_Callback cb) { kmessagewidget_dragleaveevent_callback = cb; }
    inline void setKMessageWidget_DropEvent_Callback(KMessageWidget_DropEvent_Callback cb) { kmessagewidget_dropevent_callback = cb; }
    inline void setKMessageWidget_ShowEvent_Callback(KMessageWidget_ShowEvent_Callback cb) { kmessagewidget_showevent_callback = cb; }
    inline void setKMessageWidget_HideEvent_Callback(KMessageWidget_HideEvent_Callback cb) { kmessagewidget_hideevent_callback = cb; }
    inline void setKMessageWidget_NativeEvent_Callback(KMessageWidget_NativeEvent_Callback cb) { kmessagewidget_nativeevent_callback = cb; }
    inline void setKMessageWidget_Metric_Callback(KMessageWidget_Metric_Callback cb) { kmessagewidget_metric_callback = cb; }
    inline void setKMessageWidget_InitPainter_Callback(KMessageWidget_InitPainter_Callback cb) { kmessagewidget_initpainter_callback = cb; }
    inline void setKMessageWidget_Redirected_Callback(KMessageWidget_Redirected_Callback cb) { kmessagewidget_redirected_callback = cb; }
    inline void setKMessageWidget_SharedPainter_Callback(KMessageWidget_SharedPainter_Callback cb) { kmessagewidget_sharedpainter_callback = cb; }
    inline void setKMessageWidget_InputMethodEvent_Callback(KMessageWidget_InputMethodEvent_Callback cb) { kmessagewidget_inputmethodevent_callback = cb; }
    inline void setKMessageWidget_InputMethodQuery_Callback(KMessageWidget_InputMethodQuery_Callback cb) { kmessagewidget_inputmethodquery_callback = cb; }
    inline void setKMessageWidget_FocusNextPrevChild_Callback(KMessageWidget_FocusNextPrevChild_Callback cb) { kmessagewidget_focusnextprevchild_callback = cb; }
    inline void setKMessageWidget_EventFilter_Callback(KMessageWidget_EventFilter_Callback cb) { kmessagewidget_eventfilter_callback = cb; }
    inline void setKMessageWidget_TimerEvent_Callback(KMessageWidget_TimerEvent_Callback cb) { kmessagewidget_timerevent_callback = cb; }
    inline void setKMessageWidget_ChildEvent_Callback(KMessageWidget_ChildEvent_Callback cb) { kmessagewidget_childevent_callback = cb; }
    inline void setKMessageWidget_CustomEvent_Callback(KMessageWidget_CustomEvent_Callback cb) { kmessagewidget_customevent_callback = cb; }
    inline void setKMessageWidget_ConnectNotify_Callback(KMessageWidget_ConnectNotify_Callback cb) { kmessagewidget_connectnotify_callback = cb; }
    inline void setKMessageWidget_DisconnectNotify_Callback(KMessageWidget_DisconnectNotify_Callback cb) { kmessagewidget_disconnectnotify_callback = cb; }
    inline void setKMessageWidget_DrawFrame_Callback(KMessageWidget_DrawFrame_Callback cb) { kmessagewidget_drawframe_callback = cb; }
    inline void setKMessageWidget_UpdateMicroFocus_Callback(KMessageWidget_UpdateMicroFocus_Callback cb) { kmessagewidget_updatemicrofocus_callback = cb; }
    inline void setKMessageWidget_Create_Callback(KMessageWidget_Create_Callback cb) { kmessagewidget_create_callback = cb; }
    inline void setKMessageWidget_Destroy_Callback(KMessageWidget_Destroy_Callback cb) { kmessagewidget_destroy_callback = cb; }
    inline void setKMessageWidget_FocusNextChild_Callback(KMessageWidget_FocusNextChild_Callback cb) { kmessagewidget_focusnextchild_callback = cb; }
    inline void setKMessageWidget_FocusPreviousChild_Callback(KMessageWidget_FocusPreviousChild_Callback cb) { kmessagewidget_focuspreviouschild_callback = cb; }
    inline void setKMessageWidget_Sender_Callback(KMessageWidget_Sender_Callback cb) { kmessagewidget_sender_callback = cb; }
    inline void setKMessageWidget_SenderSignalIndex_Callback(KMessageWidget_SenderSignalIndex_Callback cb) { kmessagewidget_sendersignalindex_callback = cb; }
    inline void setKMessageWidget_Receivers_Callback(KMessageWidget_Receivers_Callback cb) { kmessagewidget_receivers_callback = cb; }
    inline void setKMessageWidget_IsSignalConnected_Callback(KMessageWidget_IsSignalConnected_Callback cb) { kmessagewidget_issignalconnected_callback = cb; }
    inline void setKMessageWidget_GetDecodedMetricF_Callback(KMessageWidget_GetDecodedMetricF_Callback cb) { kmessagewidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKMessageWidget_Metacall_IsBase(bool value) const { kmessagewidget_metacall_isbase = value; }
    inline void setKMessageWidget_SizeHint_IsBase(bool value) const { kmessagewidget_sizehint_isbase = value; }
    inline void setKMessageWidget_MinimumSizeHint_IsBase(bool value) const { kmessagewidget_minimumsizehint_isbase = value; }
    inline void setKMessageWidget_HeightForWidth_IsBase(bool value) const { kmessagewidget_heightforwidth_isbase = value; }
    inline void setKMessageWidget_PaintEvent_IsBase(bool value) const { kmessagewidget_paintevent_isbase = value; }
    inline void setKMessageWidget_Event_IsBase(bool value) const { kmessagewidget_event_isbase = value; }
    inline void setKMessageWidget_ResizeEvent_IsBase(bool value) const { kmessagewidget_resizeevent_isbase = value; }
    inline void setKMessageWidget_ChangeEvent_IsBase(bool value) const { kmessagewidget_changeevent_isbase = value; }
    inline void setKMessageWidget_InitStyleOption_IsBase(bool value) const { kmessagewidget_initstyleoption_isbase = value; }
    inline void setKMessageWidget_DevType_IsBase(bool value) const { kmessagewidget_devtype_isbase = value; }
    inline void setKMessageWidget_SetVisible_IsBase(bool value) const { kmessagewidget_setvisible_isbase = value; }
    inline void setKMessageWidget_HasHeightForWidth_IsBase(bool value) const { kmessagewidget_hasheightforwidth_isbase = value; }
    inline void setKMessageWidget_PaintEngine_IsBase(bool value) const { kmessagewidget_paintengine_isbase = value; }
    inline void setKMessageWidget_MousePressEvent_IsBase(bool value) const { kmessagewidget_mousepressevent_isbase = value; }
    inline void setKMessageWidget_MouseReleaseEvent_IsBase(bool value) const { kmessagewidget_mousereleaseevent_isbase = value; }
    inline void setKMessageWidget_MouseDoubleClickEvent_IsBase(bool value) const { kmessagewidget_mousedoubleclickevent_isbase = value; }
    inline void setKMessageWidget_MouseMoveEvent_IsBase(bool value) const { kmessagewidget_mousemoveevent_isbase = value; }
    inline void setKMessageWidget_WheelEvent_IsBase(bool value) const { kmessagewidget_wheelevent_isbase = value; }
    inline void setKMessageWidget_KeyPressEvent_IsBase(bool value) const { kmessagewidget_keypressevent_isbase = value; }
    inline void setKMessageWidget_KeyReleaseEvent_IsBase(bool value) const { kmessagewidget_keyreleaseevent_isbase = value; }
    inline void setKMessageWidget_FocusInEvent_IsBase(bool value) const { kmessagewidget_focusinevent_isbase = value; }
    inline void setKMessageWidget_FocusOutEvent_IsBase(bool value) const { kmessagewidget_focusoutevent_isbase = value; }
    inline void setKMessageWidget_EnterEvent_IsBase(bool value) const { kmessagewidget_enterevent_isbase = value; }
    inline void setKMessageWidget_LeaveEvent_IsBase(bool value) const { kmessagewidget_leaveevent_isbase = value; }
    inline void setKMessageWidget_MoveEvent_IsBase(bool value) const { kmessagewidget_moveevent_isbase = value; }
    inline void setKMessageWidget_CloseEvent_IsBase(bool value) const { kmessagewidget_closeevent_isbase = value; }
    inline void setKMessageWidget_ContextMenuEvent_IsBase(bool value) const { kmessagewidget_contextmenuevent_isbase = value; }
    inline void setKMessageWidget_TabletEvent_IsBase(bool value) const { kmessagewidget_tabletevent_isbase = value; }
    inline void setKMessageWidget_ActionEvent_IsBase(bool value) const { kmessagewidget_actionevent_isbase = value; }
    inline void setKMessageWidget_DragEnterEvent_IsBase(bool value) const { kmessagewidget_dragenterevent_isbase = value; }
    inline void setKMessageWidget_DragMoveEvent_IsBase(bool value) const { kmessagewidget_dragmoveevent_isbase = value; }
    inline void setKMessageWidget_DragLeaveEvent_IsBase(bool value) const { kmessagewidget_dragleaveevent_isbase = value; }
    inline void setKMessageWidget_DropEvent_IsBase(bool value) const { kmessagewidget_dropevent_isbase = value; }
    inline void setKMessageWidget_ShowEvent_IsBase(bool value) const { kmessagewidget_showevent_isbase = value; }
    inline void setKMessageWidget_HideEvent_IsBase(bool value) const { kmessagewidget_hideevent_isbase = value; }
    inline void setKMessageWidget_NativeEvent_IsBase(bool value) const { kmessagewidget_nativeevent_isbase = value; }
    inline void setKMessageWidget_Metric_IsBase(bool value) const { kmessagewidget_metric_isbase = value; }
    inline void setKMessageWidget_InitPainter_IsBase(bool value) const { kmessagewidget_initpainter_isbase = value; }
    inline void setKMessageWidget_Redirected_IsBase(bool value) const { kmessagewidget_redirected_isbase = value; }
    inline void setKMessageWidget_SharedPainter_IsBase(bool value) const { kmessagewidget_sharedpainter_isbase = value; }
    inline void setKMessageWidget_InputMethodEvent_IsBase(bool value) const { kmessagewidget_inputmethodevent_isbase = value; }
    inline void setKMessageWidget_InputMethodQuery_IsBase(bool value) const { kmessagewidget_inputmethodquery_isbase = value; }
    inline void setKMessageWidget_FocusNextPrevChild_IsBase(bool value) const { kmessagewidget_focusnextprevchild_isbase = value; }
    inline void setKMessageWidget_EventFilter_IsBase(bool value) const { kmessagewidget_eventfilter_isbase = value; }
    inline void setKMessageWidget_TimerEvent_IsBase(bool value) const { kmessagewidget_timerevent_isbase = value; }
    inline void setKMessageWidget_ChildEvent_IsBase(bool value) const { kmessagewidget_childevent_isbase = value; }
    inline void setKMessageWidget_CustomEvent_IsBase(bool value) const { kmessagewidget_customevent_isbase = value; }
    inline void setKMessageWidget_ConnectNotify_IsBase(bool value) const { kmessagewidget_connectnotify_isbase = value; }
    inline void setKMessageWidget_DisconnectNotify_IsBase(bool value) const { kmessagewidget_disconnectnotify_isbase = value; }
    inline void setKMessageWidget_DrawFrame_IsBase(bool value) const { kmessagewidget_drawframe_isbase = value; }
    inline void setKMessageWidget_UpdateMicroFocus_IsBase(bool value) const { kmessagewidget_updatemicrofocus_isbase = value; }
    inline void setKMessageWidget_Create_IsBase(bool value) const { kmessagewidget_create_isbase = value; }
    inline void setKMessageWidget_Destroy_IsBase(bool value) const { kmessagewidget_destroy_isbase = value; }
    inline void setKMessageWidget_FocusNextChild_IsBase(bool value) const { kmessagewidget_focusnextchild_isbase = value; }
    inline void setKMessageWidget_FocusPreviousChild_IsBase(bool value) const { kmessagewidget_focuspreviouschild_isbase = value; }
    inline void setKMessageWidget_Sender_IsBase(bool value) const { kmessagewidget_sender_isbase = value; }
    inline void setKMessageWidget_SenderSignalIndex_IsBase(bool value) const { kmessagewidget_sendersignalindex_isbase = value; }
    inline void setKMessageWidget_Receivers_IsBase(bool value) const { kmessagewidget_receivers_isbase = value; }
    inline void setKMessageWidget_IsSignalConnected_IsBase(bool value) const { kmessagewidget_issignalconnected_isbase = value; }
    inline void setKMessageWidget_GetDecodedMetricF_IsBase(bool value) const { kmessagewidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kmessagewidget_metacall_isbase) {
            kmessagewidget_metacall_isbase = false;
            return KMessageWidget::qt_metacall(param1, param2, param3);
        } else if (kmessagewidget_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kmessagewidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KMessageWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kmessagewidget_sizehint_isbase) {
            kmessagewidget_sizehint_isbase = false;
            return KMessageWidget::sizeHint();
        } else if (kmessagewidget_sizehint_callback != nullptr) {
            QSize* callback_ret = kmessagewidget_sizehint_callback();
            return *callback_ret;
        } else {
            return KMessageWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kmessagewidget_minimumsizehint_isbase) {
            kmessagewidget_minimumsizehint_isbase = false;
            return KMessageWidget::minimumSizeHint();
        } else if (kmessagewidget_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kmessagewidget_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KMessageWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int width) const override {
        if (kmessagewidget_heightforwidth_isbase) {
            kmessagewidget_heightforwidth_isbase = false;
            return KMessageWidget::heightForWidth(width);
        } else if (kmessagewidget_heightforwidth_callback != nullptr) {
            int cbval1 = width;

            int callback_ret = kmessagewidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KMessageWidget::heightForWidth(width);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kmessagewidget_paintevent_isbase) {
            kmessagewidget_paintevent_isbase = false;
            KMessageWidget::paintEvent(event);
        } else if (kmessagewidget_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kmessagewidget_paintevent_callback(this, cbval1);
        } else {
            KMessageWidget::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kmessagewidget_event_isbase) {
            kmessagewidget_event_isbase = false;
            return KMessageWidget::event(event);
        } else if (kmessagewidget_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kmessagewidget_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KMessageWidget::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kmessagewidget_resizeevent_isbase) {
            kmessagewidget_resizeevent_isbase = false;
            KMessageWidget::resizeEvent(event);
        } else if (kmessagewidget_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kmessagewidget_resizeevent_callback(this, cbval1);
        } else {
            KMessageWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kmessagewidget_changeevent_isbase) {
            kmessagewidget_changeevent_isbase = false;
            KMessageWidget::changeEvent(param1);
        } else if (kmessagewidget_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kmessagewidget_changeevent_callback(this, cbval1);
        } else {
            KMessageWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kmessagewidget_initstyleoption_isbase) {
            kmessagewidget_initstyleoption_isbase = false;
            KMessageWidget::initStyleOption(option);
        } else if (kmessagewidget_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            kmessagewidget_initstyleoption_callback(this, cbval1);
        } else {
            KMessageWidget::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kmessagewidget_devtype_isbase) {
            kmessagewidget_devtype_isbase = false;
            return KMessageWidget::devType();
        } else if (kmessagewidget_devtype_callback != nullptr) {
            int callback_ret = kmessagewidget_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KMessageWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kmessagewidget_setvisible_isbase) {
            kmessagewidget_setvisible_isbase = false;
            KMessageWidget::setVisible(visible);
        } else if (kmessagewidget_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kmessagewidget_setvisible_callback(this, cbval1);
        } else {
            KMessageWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kmessagewidget_hasheightforwidth_isbase) {
            kmessagewidget_hasheightforwidth_isbase = false;
            return KMessageWidget::hasHeightForWidth();
        } else if (kmessagewidget_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kmessagewidget_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KMessageWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kmessagewidget_paintengine_isbase) {
            kmessagewidget_paintengine_isbase = false;
            return KMessageWidget::paintEngine();
        } else if (kmessagewidget_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kmessagewidget_paintengine_callback();
            return callback_ret;
        } else {
            return KMessageWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kmessagewidget_mousepressevent_isbase) {
            kmessagewidget_mousepressevent_isbase = false;
            KMessageWidget::mousePressEvent(event);
        } else if (kmessagewidget_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kmessagewidget_mousepressevent_callback(this, cbval1);
        } else {
            KMessageWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kmessagewidget_mousereleaseevent_isbase) {
            kmessagewidget_mousereleaseevent_isbase = false;
            KMessageWidget::mouseReleaseEvent(event);
        } else if (kmessagewidget_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kmessagewidget_mousereleaseevent_callback(this, cbval1);
        } else {
            KMessageWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kmessagewidget_mousedoubleclickevent_isbase) {
            kmessagewidget_mousedoubleclickevent_isbase = false;
            KMessageWidget::mouseDoubleClickEvent(event);
        } else if (kmessagewidget_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kmessagewidget_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KMessageWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kmessagewidget_mousemoveevent_isbase) {
            kmessagewidget_mousemoveevent_isbase = false;
            KMessageWidget::mouseMoveEvent(event);
        } else if (kmessagewidget_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kmessagewidget_mousemoveevent_callback(this, cbval1);
        } else {
            KMessageWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kmessagewidget_wheelevent_isbase) {
            kmessagewidget_wheelevent_isbase = false;
            KMessageWidget::wheelEvent(event);
        } else if (kmessagewidget_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kmessagewidget_wheelevent_callback(this, cbval1);
        } else {
            KMessageWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kmessagewidget_keypressevent_isbase) {
            kmessagewidget_keypressevent_isbase = false;
            KMessageWidget::keyPressEvent(event);
        } else if (kmessagewidget_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kmessagewidget_keypressevent_callback(this, cbval1);
        } else {
            KMessageWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kmessagewidget_keyreleaseevent_isbase) {
            kmessagewidget_keyreleaseevent_isbase = false;
            KMessageWidget::keyReleaseEvent(event);
        } else if (kmessagewidget_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kmessagewidget_keyreleaseevent_callback(this, cbval1);
        } else {
            KMessageWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kmessagewidget_focusinevent_isbase) {
            kmessagewidget_focusinevent_isbase = false;
            KMessageWidget::focusInEvent(event);
        } else if (kmessagewidget_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kmessagewidget_focusinevent_callback(this, cbval1);
        } else {
            KMessageWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kmessagewidget_focusoutevent_isbase) {
            kmessagewidget_focusoutevent_isbase = false;
            KMessageWidget::focusOutEvent(event);
        } else if (kmessagewidget_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kmessagewidget_focusoutevent_callback(this, cbval1);
        } else {
            KMessageWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kmessagewidget_enterevent_isbase) {
            kmessagewidget_enterevent_isbase = false;
            KMessageWidget::enterEvent(event);
        } else if (kmessagewidget_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kmessagewidget_enterevent_callback(this, cbval1);
        } else {
            KMessageWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kmessagewidget_leaveevent_isbase) {
            kmessagewidget_leaveevent_isbase = false;
            KMessageWidget::leaveEvent(event);
        } else if (kmessagewidget_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kmessagewidget_leaveevent_callback(this, cbval1);
        } else {
            KMessageWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kmessagewidget_moveevent_isbase) {
            kmessagewidget_moveevent_isbase = false;
            KMessageWidget::moveEvent(event);
        } else if (kmessagewidget_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kmessagewidget_moveevent_callback(this, cbval1);
        } else {
            KMessageWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kmessagewidget_closeevent_isbase) {
            kmessagewidget_closeevent_isbase = false;
            KMessageWidget::closeEvent(event);
        } else if (kmessagewidget_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kmessagewidget_closeevent_callback(this, cbval1);
        } else {
            KMessageWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kmessagewidget_contextmenuevent_isbase) {
            kmessagewidget_contextmenuevent_isbase = false;
            KMessageWidget::contextMenuEvent(event);
        } else if (kmessagewidget_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kmessagewidget_contextmenuevent_callback(this, cbval1);
        } else {
            KMessageWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kmessagewidget_tabletevent_isbase) {
            kmessagewidget_tabletevent_isbase = false;
            KMessageWidget::tabletEvent(event);
        } else if (kmessagewidget_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kmessagewidget_tabletevent_callback(this, cbval1);
        } else {
            KMessageWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kmessagewidget_actionevent_isbase) {
            kmessagewidget_actionevent_isbase = false;
            KMessageWidget::actionEvent(event);
        } else if (kmessagewidget_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kmessagewidget_actionevent_callback(this, cbval1);
        } else {
            KMessageWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kmessagewidget_dragenterevent_isbase) {
            kmessagewidget_dragenterevent_isbase = false;
            KMessageWidget::dragEnterEvent(event);
        } else if (kmessagewidget_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kmessagewidget_dragenterevent_callback(this, cbval1);
        } else {
            KMessageWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kmessagewidget_dragmoveevent_isbase) {
            kmessagewidget_dragmoveevent_isbase = false;
            KMessageWidget::dragMoveEvent(event);
        } else if (kmessagewidget_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kmessagewidget_dragmoveevent_callback(this, cbval1);
        } else {
            KMessageWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kmessagewidget_dragleaveevent_isbase) {
            kmessagewidget_dragleaveevent_isbase = false;
            KMessageWidget::dragLeaveEvent(event);
        } else if (kmessagewidget_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kmessagewidget_dragleaveevent_callback(this, cbval1);
        } else {
            KMessageWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kmessagewidget_dropevent_isbase) {
            kmessagewidget_dropevent_isbase = false;
            KMessageWidget::dropEvent(event);
        } else if (kmessagewidget_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kmessagewidget_dropevent_callback(this, cbval1);
        } else {
            KMessageWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kmessagewidget_showevent_isbase) {
            kmessagewidget_showevent_isbase = false;
            KMessageWidget::showEvent(event);
        } else if (kmessagewidget_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kmessagewidget_showevent_callback(this, cbval1);
        } else {
            KMessageWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kmessagewidget_hideevent_isbase) {
            kmessagewidget_hideevent_isbase = false;
            KMessageWidget::hideEvent(event);
        } else if (kmessagewidget_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kmessagewidget_hideevent_callback(this, cbval1);
        } else {
            KMessageWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kmessagewidget_nativeevent_isbase) {
            kmessagewidget_nativeevent_isbase = false;
            return KMessageWidget::nativeEvent(eventType, message, result);
        } else if (kmessagewidget_nativeevent_callback != nullptr) {
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

            bool callback_ret = kmessagewidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KMessageWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kmessagewidget_metric_isbase) {
            kmessagewidget_metric_isbase = false;
            return KMessageWidget::metric(param1);
        } else if (kmessagewidget_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kmessagewidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KMessageWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kmessagewidget_initpainter_isbase) {
            kmessagewidget_initpainter_isbase = false;
            KMessageWidget::initPainter(painter);
        } else if (kmessagewidget_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kmessagewidget_initpainter_callback(this, cbval1);
        } else {
            KMessageWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kmessagewidget_redirected_isbase) {
            kmessagewidget_redirected_isbase = false;
            return KMessageWidget::redirected(offset);
        } else if (kmessagewidget_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kmessagewidget_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KMessageWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kmessagewidget_sharedpainter_isbase) {
            kmessagewidget_sharedpainter_isbase = false;
            return KMessageWidget::sharedPainter();
        } else if (kmessagewidget_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kmessagewidget_sharedpainter_callback();
            return callback_ret;
        } else {
            return KMessageWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kmessagewidget_inputmethodevent_isbase) {
            kmessagewidget_inputmethodevent_isbase = false;
            KMessageWidget::inputMethodEvent(param1);
        } else if (kmessagewidget_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kmessagewidget_inputmethodevent_callback(this, cbval1);
        } else {
            KMessageWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kmessagewidget_inputmethodquery_isbase) {
            kmessagewidget_inputmethodquery_isbase = false;
            return KMessageWidget::inputMethodQuery(param1);
        } else if (kmessagewidget_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kmessagewidget_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KMessageWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kmessagewidget_focusnextprevchild_isbase) {
            kmessagewidget_focusnextprevchild_isbase = false;
            return KMessageWidget::focusNextPrevChild(next);
        } else if (kmessagewidget_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kmessagewidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KMessageWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kmessagewidget_eventfilter_isbase) {
            kmessagewidget_eventfilter_isbase = false;
            return KMessageWidget::eventFilter(watched, event);
        } else if (kmessagewidget_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kmessagewidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KMessageWidget::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kmessagewidget_timerevent_isbase) {
            kmessagewidget_timerevent_isbase = false;
            KMessageWidget::timerEvent(event);
        } else if (kmessagewidget_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kmessagewidget_timerevent_callback(this, cbval1);
        } else {
            KMessageWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kmessagewidget_childevent_isbase) {
            kmessagewidget_childevent_isbase = false;
            KMessageWidget::childEvent(event);
        } else if (kmessagewidget_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kmessagewidget_childevent_callback(this, cbval1);
        } else {
            KMessageWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kmessagewidget_customevent_isbase) {
            kmessagewidget_customevent_isbase = false;
            KMessageWidget::customEvent(event);
        } else if (kmessagewidget_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kmessagewidget_customevent_callback(this, cbval1);
        } else {
            KMessageWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kmessagewidget_connectnotify_isbase) {
            kmessagewidget_connectnotify_isbase = false;
            KMessageWidget::connectNotify(signal);
        } else if (kmessagewidget_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kmessagewidget_connectnotify_callback(this, cbval1);
        } else {
            KMessageWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kmessagewidget_disconnectnotify_isbase) {
            kmessagewidget_disconnectnotify_isbase = false;
            KMessageWidget::disconnectNotify(signal);
        } else if (kmessagewidget_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kmessagewidget_disconnectnotify_callback(this, cbval1);
        } else {
            KMessageWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (kmessagewidget_drawframe_isbase) {
            kmessagewidget_drawframe_isbase = false;
            KMessageWidget::drawFrame(param1);
        } else if (kmessagewidget_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            kmessagewidget_drawframe_callback(this, cbval1);
        } else {
            KMessageWidget::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kmessagewidget_updatemicrofocus_isbase) {
            kmessagewidget_updatemicrofocus_isbase = false;
            KMessageWidget::updateMicroFocus();
        } else if (kmessagewidget_updatemicrofocus_callback != nullptr) {
            kmessagewidget_updatemicrofocus_callback();
        } else {
            KMessageWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kmessagewidget_create_isbase) {
            kmessagewidget_create_isbase = false;
            KMessageWidget::create();
        } else if (kmessagewidget_create_callback != nullptr) {
            kmessagewidget_create_callback();
        } else {
            KMessageWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kmessagewidget_destroy_isbase) {
            kmessagewidget_destroy_isbase = false;
            KMessageWidget::destroy();
        } else if (kmessagewidget_destroy_callback != nullptr) {
            kmessagewidget_destroy_callback();
        } else {
            KMessageWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kmessagewidget_focusnextchild_isbase) {
            kmessagewidget_focusnextchild_isbase = false;
            return KMessageWidget::focusNextChild();
        } else if (kmessagewidget_focusnextchild_callback != nullptr) {
            bool callback_ret = kmessagewidget_focusnextchild_callback();
            return callback_ret;
        } else {
            return KMessageWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kmessagewidget_focuspreviouschild_isbase) {
            kmessagewidget_focuspreviouschild_isbase = false;
            return KMessageWidget::focusPreviousChild();
        } else if (kmessagewidget_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kmessagewidget_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KMessageWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kmessagewidget_sender_isbase) {
            kmessagewidget_sender_isbase = false;
            return KMessageWidget::sender();
        } else if (kmessagewidget_sender_callback != nullptr) {
            QObject* callback_ret = kmessagewidget_sender_callback();
            return callback_ret;
        } else {
            return KMessageWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kmessagewidget_sendersignalindex_isbase) {
            kmessagewidget_sendersignalindex_isbase = false;
            return KMessageWidget::senderSignalIndex();
        } else if (kmessagewidget_sendersignalindex_callback != nullptr) {
            int callback_ret = kmessagewidget_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KMessageWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kmessagewidget_receivers_isbase) {
            kmessagewidget_receivers_isbase = false;
            return KMessageWidget::receivers(signal);
        } else if (kmessagewidget_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kmessagewidget_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KMessageWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kmessagewidget_issignalconnected_isbase) {
            kmessagewidget_issignalconnected_isbase = false;
            return KMessageWidget::isSignalConnected(signal);
        } else if (kmessagewidget_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kmessagewidget_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KMessageWidget::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kmessagewidget_getdecodedmetricf_isbase) {
            kmessagewidget_getdecodedmetricf_isbase = false;
            return KMessageWidget::getDecodedMetricF(metricA, metricB);
        } else if (kmessagewidget_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kmessagewidget_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KMessageWidget::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KMessageWidget_PaintEvent(KMessageWidget* self, QPaintEvent* event);
    friend void KMessageWidget_QBasePaintEvent(KMessageWidget* self, QPaintEvent* event);
    friend bool KMessageWidget_Event(KMessageWidget* self, QEvent* event);
    friend bool KMessageWidget_QBaseEvent(KMessageWidget* self, QEvent* event);
    friend void KMessageWidget_ResizeEvent(KMessageWidget* self, QResizeEvent* event);
    friend void KMessageWidget_QBaseResizeEvent(KMessageWidget* self, QResizeEvent* event);
    friend void KMessageWidget_ChangeEvent(KMessageWidget* self, QEvent* param1);
    friend void KMessageWidget_QBaseChangeEvent(KMessageWidget* self, QEvent* param1);
    friend void KMessageWidget_InitStyleOption(const KMessageWidget* self, QStyleOptionFrame* option);
    friend void KMessageWidget_QBaseInitStyleOption(const KMessageWidget* self, QStyleOptionFrame* option);
    friend void KMessageWidget_MousePressEvent(KMessageWidget* self, QMouseEvent* event);
    friend void KMessageWidget_QBaseMousePressEvent(KMessageWidget* self, QMouseEvent* event);
    friend void KMessageWidget_MouseReleaseEvent(KMessageWidget* self, QMouseEvent* event);
    friend void KMessageWidget_QBaseMouseReleaseEvent(KMessageWidget* self, QMouseEvent* event);
    friend void KMessageWidget_MouseDoubleClickEvent(KMessageWidget* self, QMouseEvent* event);
    friend void KMessageWidget_QBaseMouseDoubleClickEvent(KMessageWidget* self, QMouseEvent* event);
    friend void KMessageWidget_MouseMoveEvent(KMessageWidget* self, QMouseEvent* event);
    friend void KMessageWidget_QBaseMouseMoveEvent(KMessageWidget* self, QMouseEvent* event);
    friend void KMessageWidget_WheelEvent(KMessageWidget* self, QWheelEvent* event);
    friend void KMessageWidget_QBaseWheelEvent(KMessageWidget* self, QWheelEvent* event);
    friend void KMessageWidget_KeyPressEvent(KMessageWidget* self, QKeyEvent* event);
    friend void KMessageWidget_QBaseKeyPressEvent(KMessageWidget* self, QKeyEvent* event);
    friend void KMessageWidget_KeyReleaseEvent(KMessageWidget* self, QKeyEvent* event);
    friend void KMessageWidget_QBaseKeyReleaseEvent(KMessageWidget* self, QKeyEvent* event);
    friend void KMessageWidget_FocusInEvent(KMessageWidget* self, QFocusEvent* event);
    friend void KMessageWidget_QBaseFocusInEvent(KMessageWidget* self, QFocusEvent* event);
    friend void KMessageWidget_FocusOutEvent(KMessageWidget* self, QFocusEvent* event);
    friend void KMessageWidget_QBaseFocusOutEvent(KMessageWidget* self, QFocusEvent* event);
    friend void KMessageWidget_EnterEvent(KMessageWidget* self, QEnterEvent* event);
    friend void KMessageWidget_QBaseEnterEvent(KMessageWidget* self, QEnterEvent* event);
    friend void KMessageWidget_LeaveEvent(KMessageWidget* self, QEvent* event);
    friend void KMessageWidget_QBaseLeaveEvent(KMessageWidget* self, QEvent* event);
    friend void KMessageWidget_MoveEvent(KMessageWidget* self, QMoveEvent* event);
    friend void KMessageWidget_QBaseMoveEvent(KMessageWidget* self, QMoveEvent* event);
    friend void KMessageWidget_CloseEvent(KMessageWidget* self, QCloseEvent* event);
    friend void KMessageWidget_QBaseCloseEvent(KMessageWidget* self, QCloseEvent* event);
    friend void KMessageWidget_ContextMenuEvent(KMessageWidget* self, QContextMenuEvent* event);
    friend void KMessageWidget_QBaseContextMenuEvent(KMessageWidget* self, QContextMenuEvent* event);
    friend void KMessageWidget_TabletEvent(KMessageWidget* self, QTabletEvent* event);
    friend void KMessageWidget_QBaseTabletEvent(KMessageWidget* self, QTabletEvent* event);
    friend void KMessageWidget_ActionEvent(KMessageWidget* self, QActionEvent* event);
    friend void KMessageWidget_QBaseActionEvent(KMessageWidget* self, QActionEvent* event);
    friend void KMessageWidget_DragEnterEvent(KMessageWidget* self, QDragEnterEvent* event);
    friend void KMessageWidget_QBaseDragEnterEvent(KMessageWidget* self, QDragEnterEvent* event);
    friend void KMessageWidget_DragMoveEvent(KMessageWidget* self, QDragMoveEvent* event);
    friend void KMessageWidget_QBaseDragMoveEvent(KMessageWidget* self, QDragMoveEvent* event);
    friend void KMessageWidget_DragLeaveEvent(KMessageWidget* self, QDragLeaveEvent* event);
    friend void KMessageWidget_QBaseDragLeaveEvent(KMessageWidget* self, QDragLeaveEvent* event);
    friend void KMessageWidget_DropEvent(KMessageWidget* self, QDropEvent* event);
    friend void KMessageWidget_QBaseDropEvent(KMessageWidget* self, QDropEvent* event);
    friend void KMessageWidget_ShowEvent(KMessageWidget* self, QShowEvent* event);
    friend void KMessageWidget_QBaseShowEvent(KMessageWidget* self, QShowEvent* event);
    friend void KMessageWidget_HideEvent(KMessageWidget* self, QHideEvent* event);
    friend void KMessageWidget_QBaseHideEvent(KMessageWidget* self, QHideEvent* event);
    friend bool KMessageWidget_NativeEvent(KMessageWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KMessageWidget_QBaseNativeEvent(KMessageWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KMessageWidget_Metric(const KMessageWidget* self, int param1);
    friend int KMessageWidget_QBaseMetric(const KMessageWidget* self, int param1);
    friend void KMessageWidget_InitPainter(const KMessageWidget* self, QPainter* painter);
    friend void KMessageWidget_QBaseInitPainter(const KMessageWidget* self, QPainter* painter);
    friend QPaintDevice* KMessageWidget_Redirected(const KMessageWidget* self, QPoint* offset);
    friend QPaintDevice* KMessageWidget_QBaseRedirected(const KMessageWidget* self, QPoint* offset);
    friend QPainter* KMessageWidget_SharedPainter(const KMessageWidget* self);
    friend QPainter* KMessageWidget_QBaseSharedPainter(const KMessageWidget* self);
    friend void KMessageWidget_InputMethodEvent(KMessageWidget* self, QInputMethodEvent* param1);
    friend void KMessageWidget_QBaseInputMethodEvent(KMessageWidget* self, QInputMethodEvent* param1);
    friend bool KMessageWidget_FocusNextPrevChild(KMessageWidget* self, bool next);
    friend bool KMessageWidget_QBaseFocusNextPrevChild(KMessageWidget* self, bool next);
    friend void KMessageWidget_TimerEvent(KMessageWidget* self, QTimerEvent* event);
    friend void KMessageWidget_QBaseTimerEvent(KMessageWidget* self, QTimerEvent* event);
    friend void KMessageWidget_ChildEvent(KMessageWidget* self, QChildEvent* event);
    friend void KMessageWidget_QBaseChildEvent(KMessageWidget* self, QChildEvent* event);
    friend void KMessageWidget_CustomEvent(KMessageWidget* self, QEvent* event);
    friend void KMessageWidget_QBaseCustomEvent(KMessageWidget* self, QEvent* event);
    friend void KMessageWidget_ConnectNotify(KMessageWidget* self, const QMetaMethod* signal);
    friend void KMessageWidget_QBaseConnectNotify(KMessageWidget* self, const QMetaMethod* signal);
    friend void KMessageWidget_DisconnectNotify(KMessageWidget* self, const QMetaMethod* signal);
    friend void KMessageWidget_QBaseDisconnectNotify(KMessageWidget* self, const QMetaMethod* signal);
    friend void KMessageWidget_DrawFrame(KMessageWidget* self, QPainter* param1);
    friend void KMessageWidget_QBaseDrawFrame(KMessageWidget* self, QPainter* param1);
    friend void KMessageWidget_UpdateMicroFocus(KMessageWidget* self);
    friend void KMessageWidget_QBaseUpdateMicroFocus(KMessageWidget* self);
    friend void KMessageWidget_Create(KMessageWidget* self);
    friend void KMessageWidget_QBaseCreate(KMessageWidget* self);
    friend void KMessageWidget_Destroy(KMessageWidget* self);
    friend void KMessageWidget_QBaseDestroy(KMessageWidget* self);
    friend bool KMessageWidget_FocusNextChild(KMessageWidget* self);
    friend bool KMessageWidget_QBaseFocusNextChild(KMessageWidget* self);
    friend bool KMessageWidget_FocusPreviousChild(KMessageWidget* self);
    friend bool KMessageWidget_QBaseFocusPreviousChild(KMessageWidget* self);
    friend QObject* KMessageWidget_Sender(const KMessageWidget* self);
    friend QObject* KMessageWidget_QBaseSender(const KMessageWidget* self);
    friend int KMessageWidget_SenderSignalIndex(const KMessageWidget* self);
    friend int KMessageWidget_QBaseSenderSignalIndex(const KMessageWidget* self);
    friend int KMessageWidget_Receivers(const KMessageWidget* self, const char* signal);
    friend int KMessageWidget_QBaseReceivers(const KMessageWidget* self, const char* signal);
    friend bool KMessageWidget_IsSignalConnected(const KMessageWidget* self, const QMetaMethod* signal);
    friend bool KMessageWidget_QBaseIsSignalConnected(const KMessageWidget* self, const QMetaMethod* signal);
    friend double KMessageWidget_GetDecodedMetricF(const KMessageWidget* self, int metricA, int metricB);
    friend double KMessageWidget_QBaseGetDecodedMetricF(const KMessageWidget* self, int metricA, int metricB);
};

#endif
