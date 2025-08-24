#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKURLLABEL_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKURLLABEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KUrlLabel so that we can call protected methods
class VirtualKUrlLabel final : public KUrlLabel {

  public:
    // Virtual class boolean flag
    bool isVirtualKUrlLabel = true;

    // Virtual class public types (including callbacks)
    using KUrlLabel_Metacall_Callback = int (*)(KUrlLabel*, int, int, void**);
    using KUrlLabel_SetFont_Callback = void (*)(KUrlLabel*, QFont*);
    using KUrlLabel_MouseReleaseEvent_Callback = void (*)(KUrlLabel*, QMouseEvent*);
    using KUrlLabel_EnterEvent_Callback = void (*)(KUrlLabel*, QEnterEvent*);
    using KUrlLabel_LeaveEvent_Callback = void (*)(KUrlLabel*, QEvent*);
    using KUrlLabel_Event_Callback = bool (*)(KUrlLabel*, QEvent*);
    using KUrlLabel_SizeHint_Callback = QSize* (*)();
    using KUrlLabel_MinimumSizeHint_Callback = QSize* (*)();
    using KUrlLabel_HeightForWidth_Callback = int (*)(const KUrlLabel*, int);
    using KUrlLabel_KeyPressEvent_Callback = void (*)(KUrlLabel*, QKeyEvent*);
    using KUrlLabel_PaintEvent_Callback = void (*)(KUrlLabel*, QPaintEvent*);
    using KUrlLabel_ChangeEvent_Callback = void (*)(KUrlLabel*, QEvent*);
    using KUrlLabel_MousePressEvent_Callback = void (*)(KUrlLabel*, QMouseEvent*);
    using KUrlLabel_MouseMoveEvent_Callback = void (*)(KUrlLabel*, QMouseEvent*);
    using KUrlLabel_ContextMenuEvent_Callback = void (*)(KUrlLabel*, QContextMenuEvent*);
    using KUrlLabel_FocusInEvent_Callback = void (*)(KUrlLabel*, QFocusEvent*);
    using KUrlLabel_FocusOutEvent_Callback = void (*)(KUrlLabel*, QFocusEvent*);
    using KUrlLabel_FocusNextPrevChild_Callback = bool (*)(KUrlLabel*, bool);
    using KUrlLabel_InitStyleOption_Callback = void (*)(const KUrlLabel*, QStyleOptionFrame*);
    using KUrlLabel_DevType_Callback = int (*)();
    using KUrlLabel_SetVisible_Callback = void (*)(KUrlLabel*, bool);
    using KUrlLabel_HasHeightForWidth_Callback = bool (*)();
    using KUrlLabel_PaintEngine_Callback = QPaintEngine* (*)();
    using KUrlLabel_MouseDoubleClickEvent_Callback = void (*)(KUrlLabel*, QMouseEvent*);
    using KUrlLabel_WheelEvent_Callback = void (*)(KUrlLabel*, QWheelEvent*);
    using KUrlLabel_KeyReleaseEvent_Callback = void (*)(KUrlLabel*, QKeyEvent*);
    using KUrlLabel_MoveEvent_Callback = void (*)(KUrlLabel*, QMoveEvent*);
    using KUrlLabel_ResizeEvent_Callback = void (*)(KUrlLabel*, QResizeEvent*);
    using KUrlLabel_CloseEvent_Callback = void (*)(KUrlLabel*, QCloseEvent*);
    using KUrlLabel_TabletEvent_Callback = void (*)(KUrlLabel*, QTabletEvent*);
    using KUrlLabel_ActionEvent_Callback = void (*)(KUrlLabel*, QActionEvent*);
    using KUrlLabel_DragEnterEvent_Callback = void (*)(KUrlLabel*, QDragEnterEvent*);
    using KUrlLabel_DragMoveEvent_Callback = void (*)(KUrlLabel*, QDragMoveEvent*);
    using KUrlLabel_DragLeaveEvent_Callback = void (*)(KUrlLabel*, QDragLeaveEvent*);
    using KUrlLabel_DropEvent_Callback = void (*)(KUrlLabel*, QDropEvent*);
    using KUrlLabel_ShowEvent_Callback = void (*)(KUrlLabel*, QShowEvent*);
    using KUrlLabel_HideEvent_Callback = void (*)(KUrlLabel*, QHideEvent*);
    using KUrlLabel_NativeEvent_Callback = bool (*)(KUrlLabel*, libqt_string, void*, intptr_t*);
    using KUrlLabel_Metric_Callback = int (*)(const KUrlLabel*, int);
    using KUrlLabel_InitPainter_Callback = void (*)(const KUrlLabel*, QPainter*);
    using KUrlLabel_Redirected_Callback = QPaintDevice* (*)(const KUrlLabel*, QPoint*);
    using KUrlLabel_SharedPainter_Callback = QPainter* (*)();
    using KUrlLabel_InputMethodEvent_Callback = void (*)(KUrlLabel*, QInputMethodEvent*);
    using KUrlLabel_InputMethodQuery_Callback = QVariant* (*)(const KUrlLabel*, int);
    using KUrlLabel_EventFilter_Callback = bool (*)(KUrlLabel*, QObject*, QEvent*);
    using KUrlLabel_TimerEvent_Callback = void (*)(KUrlLabel*, QTimerEvent*);
    using KUrlLabel_ChildEvent_Callback = void (*)(KUrlLabel*, QChildEvent*);
    using KUrlLabel_CustomEvent_Callback = void (*)(KUrlLabel*, QEvent*);
    using KUrlLabel_ConnectNotify_Callback = void (*)(KUrlLabel*, QMetaMethod*);
    using KUrlLabel_DisconnectNotify_Callback = void (*)(KUrlLabel*, QMetaMethod*);
    using KUrlLabel_DrawFrame_Callback = void (*)(KUrlLabel*, QPainter*);
    using KUrlLabel_UpdateMicroFocus_Callback = void (*)();
    using KUrlLabel_Create_Callback = void (*)();
    using KUrlLabel_Destroy_Callback = void (*)();
    using KUrlLabel_FocusNextChild_Callback = bool (*)();
    using KUrlLabel_FocusPreviousChild_Callback = bool (*)();
    using KUrlLabel_Sender_Callback = QObject* (*)();
    using KUrlLabel_SenderSignalIndex_Callback = int (*)();
    using KUrlLabel_Receivers_Callback = int (*)(const KUrlLabel*, const char*);
    using KUrlLabel_IsSignalConnected_Callback = bool (*)(const KUrlLabel*, QMetaMethod*);
    using KUrlLabel_GetDecodedMetricF_Callback = double (*)(const KUrlLabel*, int, int);

  protected:
    // Instance callback storage
    KUrlLabel_Metacall_Callback kurllabel_metacall_callback = nullptr;
    KUrlLabel_SetFont_Callback kurllabel_setfont_callback = nullptr;
    KUrlLabel_MouseReleaseEvent_Callback kurllabel_mousereleaseevent_callback = nullptr;
    KUrlLabel_EnterEvent_Callback kurllabel_enterevent_callback = nullptr;
    KUrlLabel_LeaveEvent_Callback kurllabel_leaveevent_callback = nullptr;
    KUrlLabel_Event_Callback kurllabel_event_callback = nullptr;
    KUrlLabel_SizeHint_Callback kurllabel_sizehint_callback = nullptr;
    KUrlLabel_MinimumSizeHint_Callback kurllabel_minimumsizehint_callback = nullptr;
    KUrlLabel_HeightForWidth_Callback kurllabel_heightforwidth_callback = nullptr;
    KUrlLabel_KeyPressEvent_Callback kurllabel_keypressevent_callback = nullptr;
    KUrlLabel_PaintEvent_Callback kurllabel_paintevent_callback = nullptr;
    KUrlLabel_ChangeEvent_Callback kurllabel_changeevent_callback = nullptr;
    KUrlLabel_MousePressEvent_Callback kurllabel_mousepressevent_callback = nullptr;
    KUrlLabel_MouseMoveEvent_Callback kurllabel_mousemoveevent_callback = nullptr;
    KUrlLabel_ContextMenuEvent_Callback kurllabel_contextmenuevent_callback = nullptr;
    KUrlLabel_FocusInEvent_Callback kurllabel_focusinevent_callback = nullptr;
    KUrlLabel_FocusOutEvent_Callback kurllabel_focusoutevent_callback = nullptr;
    KUrlLabel_FocusNextPrevChild_Callback kurllabel_focusnextprevchild_callback = nullptr;
    KUrlLabel_InitStyleOption_Callback kurllabel_initstyleoption_callback = nullptr;
    KUrlLabel_DevType_Callback kurllabel_devtype_callback = nullptr;
    KUrlLabel_SetVisible_Callback kurllabel_setvisible_callback = nullptr;
    KUrlLabel_HasHeightForWidth_Callback kurllabel_hasheightforwidth_callback = nullptr;
    KUrlLabel_PaintEngine_Callback kurllabel_paintengine_callback = nullptr;
    KUrlLabel_MouseDoubleClickEvent_Callback kurllabel_mousedoubleclickevent_callback = nullptr;
    KUrlLabel_WheelEvent_Callback kurllabel_wheelevent_callback = nullptr;
    KUrlLabel_KeyReleaseEvent_Callback kurllabel_keyreleaseevent_callback = nullptr;
    KUrlLabel_MoveEvent_Callback kurllabel_moveevent_callback = nullptr;
    KUrlLabel_ResizeEvent_Callback kurllabel_resizeevent_callback = nullptr;
    KUrlLabel_CloseEvent_Callback kurllabel_closeevent_callback = nullptr;
    KUrlLabel_TabletEvent_Callback kurllabel_tabletevent_callback = nullptr;
    KUrlLabel_ActionEvent_Callback kurllabel_actionevent_callback = nullptr;
    KUrlLabel_DragEnterEvent_Callback kurllabel_dragenterevent_callback = nullptr;
    KUrlLabel_DragMoveEvent_Callback kurllabel_dragmoveevent_callback = nullptr;
    KUrlLabel_DragLeaveEvent_Callback kurllabel_dragleaveevent_callback = nullptr;
    KUrlLabel_DropEvent_Callback kurllabel_dropevent_callback = nullptr;
    KUrlLabel_ShowEvent_Callback kurllabel_showevent_callback = nullptr;
    KUrlLabel_HideEvent_Callback kurllabel_hideevent_callback = nullptr;
    KUrlLabel_NativeEvent_Callback kurllabel_nativeevent_callback = nullptr;
    KUrlLabel_Metric_Callback kurllabel_metric_callback = nullptr;
    KUrlLabel_InitPainter_Callback kurllabel_initpainter_callback = nullptr;
    KUrlLabel_Redirected_Callback kurllabel_redirected_callback = nullptr;
    KUrlLabel_SharedPainter_Callback kurllabel_sharedpainter_callback = nullptr;
    KUrlLabel_InputMethodEvent_Callback kurllabel_inputmethodevent_callback = nullptr;
    KUrlLabel_InputMethodQuery_Callback kurllabel_inputmethodquery_callback = nullptr;
    KUrlLabel_EventFilter_Callback kurllabel_eventfilter_callback = nullptr;
    KUrlLabel_TimerEvent_Callback kurllabel_timerevent_callback = nullptr;
    KUrlLabel_ChildEvent_Callback kurllabel_childevent_callback = nullptr;
    KUrlLabel_CustomEvent_Callback kurllabel_customevent_callback = nullptr;
    KUrlLabel_ConnectNotify_Callback kurllabel_connectnotify_callback = nullptr;
    KUrlLabel_DisconnectNotify_Callback kurllabel_disconnectnotify_callback = nullptr;
    KUrlLabel_DrawFrame_Callback kurllabel_drawframe_callback = nullptr;
    KUrlLabel_UpdateMicroFocus_Callback kurllabel_updatemicrofocus_callback = nullptr;
    KUrlLabel_Create_Callback kurllabel_create_callback = nullptr;
    KUrlLabel_Destroy_Callback kurllabel_destroy_callback = nullptr;
    KUrlLabel_FocusNextChild_Callback kurllabel_focusnextchild_callback = nullptr;
    KUrlLabel_FocusPreviousChild_Callback kurllabel_focuspreviouschild_callback = nullptr;
    KUrlLabel_Sender_Callback kurllabel_sender_callback = nullptr;
    KUrlLabel_SenderSignalIndex_Callback kurllabel_sendersignalindex_callback = nullptr;
    KUrlLabel_Receivers_Callback kurllabel_receivers_callback = nullptr;
    KUrlLabel_IsSignalConnected_Callback kurllabel_issignalconnected_callback = nullptr;
    KUrlLabel_GetDecodedMetricF_Callback kurllabel_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kurllabel_metacall_isbase = false;
    mutable bool kurllabel_setfont_isbase = false;
    mutable bool kurllabel_mousereleaseevent_isbase = false;
    mutable bool kurllabel_enterevent_isbase = false;
    mutable bool kurllabel_leaveevent_isbase = false;
    mutable bool kurllabel_event_isbase = false;
    mutable bool kurllabel_sizehint_isbase = false;
    mutable bool kurllabel_minimumsizehint_isbase = false;
    mutable bool kurllabel_heightforwidth_isbase = false;
    mutable bool kurllabel_keypressevent_isbase = false;
    mutable bool kurllabel_paintevent_isbase = false;
    mutable bool kurllabel_changeevent_isbase = false;
    mutable bool kurllabel_mousepressevent_isbase = false;
    mutable bool kurllabel_mousemoveevent_isbase = false;
    mutable bool kurllabel_contextmenuevent_isbase = false;
    mutable bool kurllabel_focusinevent_isbase = false;
    mutable bool kurllabel_focusoutevent_isbase = false;
    mutable bool kurllabel_focusnextprevchild_isbase = false;
    mutable bool kurllabel_initstyleoption_isbase = false;
    mutable bool kurllabel_devtype_isbase = false;
    mutable bool kurllabel_setvisible_isbase = false;
    mutable bool kurllabel_hasheightforwidth_isbase = false;
    mutable bool kurllabel_paintengine_isbase = false;
    mutable bool kurllabel_mousedoubleclickevent_isbase = false;
    mutable bool kurllabel_wheelevent_isbase = false;
    mutable bool kurllabel_keyreleaseevent_isbase = false;
    mutable bool kurllabel_moveevent_isbase = false;
    mutable bool kurllabel_resizeevent_isbase = false;
    mutable bool kurllabel_closeevent_isbase = false;
    mutable bool kurllabel_tabletevent_isbase = false;
    mutable bool kurllabel_actionevent_isbase = false;
    mutable bool kurllabel_dragenterevent_isbase = false;
    mutable bool kurllabel_dragmoveevent_isbase = false;
    mutable bool kurllabel_dragleaveevent_isbase = false;
    mutable bool kurllabel_dropevent_isbase = false;
    mutable bool kurllabel_showevent_isbase = false;
    mutable bool kurllabel_hideevent_isbase = false;
    mutable bool kurllabel_nativeevent_isbase = false;
    mutable bool kurllabel_metric_isbase = false;
    mutable bool kurllabel_initpainter_isbase = false;
    mutable bool kurllabel_redirected_isbase = false;
    mutable bool kurllabel_sharedpainter_isbase = false;
    mutable bool kurllabel_inputmethodevent_isbase = false;
    mutable bool kurllabel_inputmethodquery_isbase = false;
    mutable bool kurllabel_eventfilter_isbase = false;
    mutable bool kurllabel_timerevent_isbase = false;
    mutable bool kurllabel_childevent_isbase = false;
    mutable bool kurllabel_customevent_isbase = false;
    mutable bool kurllabel_connectnotify_isbase = false;
    mutable bool kurllabel_disconnectnotify_isbase = false;
    mutable bool kurllabel_drawframe_isbase = false;
    mutable bool kurllabel_updatemicrofocus_isbase = false;
    mutable bool kurllabel_create_isbase = false;
    mutable bool kurllabel_destroy_isbase = false;
    mutable bool kurllabel_focusnextchild_isbase = false;
    mutable bool kurllabel_focuspreviouschild_isbase = false;
    mutable bool kurllabel_sender_isbase = false;
    mutable bool kurllabel_sendersignalindex_isbase = false;
    mutable bool kurllabel_receivers_isbase = false;
    mutable bool kurllabel_issignalconnected_isbase = false;
    mutable bool kurllabel_getdecodedmetricf_isbase = false;

  public:
    VirtualKUrlLabel(QWidget* parent) : KUrlLabel(parent) {};
    VirtualKUrlLabel() : KUrlLabel() {};
    VirtualKUrlLabel(const QString& url) : KUrlLabel(url) {};
    VirtualKUrlLabel(const QString& url, const QString& text) : KUrlLabel(url, text) {};
    VirtualKUrlLabel(const QString& url, const QString& text, QWidget* parent) : KUrlLabel(url, text, parent) {};

    ~VirtualKUrlLabel() {
        kurllabel_metacall_callback = nullptr;
        kurllabel_setfont_callback = nullptr;
        kurllabel_mousereleaseevent_callback = nullptr;
        kurllabel_enterevent_callback = nullptr;
        kurllabel_leaveevent_callback = nullptr;
        kurllabel_event_callback = nullptr;
        kurllabel_sizehint_callback = nullptr;
        kurllabel_minimumsizehint_callback = nullptr;
        kurllabel_heightforwidth_callback = nullptr;
        kurllabel_keypressevent_callback = nullptr;
        kurllabel_paintevent_callback = nullptr;
        kurllabel_changeevent_callback = nullptr;
        kurllabel_mousepressevent_callback = nullptr;
        kurllabel_mousemoveevent_callback = nullptr;
        kurllabel_contextmenuevent_callback = nullptr;
        kurllabel_focusinevent_callback = nullptr;
        kurllabel_focusoutevent_callback = nullptr;
        kurllabel_focusnextprevchild_callback = nullptr;
        kurllabel_initstyleoption_callback = nullptr;
        kurllabel_devtype_callback = nullptr;
        kurllabel_setvisible_callback = nullptr;
        kurllabel_hasheightforwidth_callback = nullptr;
        kurllabel_paintengine_callback = nullptr;
        kurllabel_mousedoubleclickevent_callback = nullptr;
        kurllabel_wheelevent_callback = nullptr;
        kurllabel_keyreleaseevent_callback = nullptr;
        kurllabel_moveevent_callback = nullptr;
        kurllabel_resizeevent_callback = nullptr;
        kurllabel_closeevent_callback = nullptr;
        kurllabel_tabletevent_callback = nullptr;
        kurllabel_actionevent_callback = nullptr;
        kurllabel_dragenterevent_callback = nullptr;
        kurllabel_dragmoveevent_callback = nullptr;
        kurllabel_dragleaveevent_callback = nullptr;
        kurllabel_dropevent_callback = nullptr;
        kurllabel_showevent_callback = nullptr;
        kurllabel_hideevent_callback = nullptr;
        kurllabel_nativeevent_callback = nullptr;
        kurllabel_metric_callback = nullptr;
        kurllabel_initpainter_callback = nullptr;
        kurllabel_redirected_callback = nullptr;
        kurllabel_sharedpainter_callback = nullptr;
        kurllabel_inputmethodevent_callback = nullptr;
        kurllabel_inputmethodquery_callback = nullptr;
        kurllabel_eventfilter_callback = nullptr;
        kurllabel_timerevent_callback = nullptr;
        kurllabel_childevent_callback = nullptr;
        kurllabel_customevent_callback = nullptr;
        kurllabel_connectnotify_callback = nullptr;
        kurllabel_disconnectnotify_callback = nullptr;
        kurllabel_drawframe_callback = nullptr;
        kurllabel_updatemicrofocus_callback = nullptr;
        kurllabel_create_callback = nullptr;
        kurllabel_destroy_callback = nullptr;
        kurllabel_focusnextchild_callback = nullptr;
        kurllabel_focuspreviouschild_callback = nullptr;
        kurllabel_sender_callback = nullptr;
        kurllabel_sendersignalindex_callback = nullptr;
        kurllabel_receivers_callback = nullptr;
        kurllabel_issignalconnected_callback = nullptr;
        kurllabel_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKUrlLabel_Metacall_Callback(KUrlLabel_Metacall_Callback cb) { kurllabel_metacall_callback = cb; }
    inline void setKUrlLabel_SetFont_Callback(KUrlLabel_SetFont_Callback cb) { kurllabel_setfont_callback = cb; }
    inline void setKUrlLabel_MouseReleaseEvent_Callback(KUrlLabel_MouseReleaseEvent_Callback cb) { kurllabel_mousereleaseevent_callback = cb; }
    inline void setKUrlLabel_EnterEvent_Callback(KUrlLabel_EnterEvent_Callback cb) { kurllabel_enterevent_callback = cb; }
    inline void setKUrlLabel_LeaveEvent_Callback(KUrlLabel_LeaveEvent_Callback cb) { kurllabel_leaveevent_callback = cb; }
    inline void setKUrlLabel_Event_Callback(KUrlLabel_Event_Callback cb) { kurllabel_event_callback = cb; }
    inline void setKUrlLabel_SizeHint_Callback(KUrlLabel_SizeHint_Callback cb) { kurllabel_sizehint_callback = cb; }
    inline void setKUrlLabel_MinimumSizeHint_Callback(KUrlLabel_MinimumSizeHint_Callback cb) { kurllabel_minimumsizehint_callback = cb; }
    inline void setKUrlLabel_HeightForWidth_Callback(KUrlLabel_HeightForWidth_Callback cb) { kurllabel_heightforwidth_callback = cb; }
    inline void setKUrlLabel_KeyPressEvent_Callback(KUrlLabel_KeyPressEvent_Callback cb) { kurllabel_keypressevent_callback = cb; }
    inline void setKUrlLabel_PaintEvent_Callback(KUrlLabel_PaintEvent_Callback cb) { kurllabel_paintevent_callback = cb; }
    inline void setKUrlLabel_ChangeEvent_Callback(KUrlLabel_ChangeEvent_Callback cb) { kurllabel_changeevent_callback = cb; }
    inline void setKUrlLabel_MousePressEvent_Callback(KUrlLabel_MousePressEvent_Callback cb) { kurllabel_mousepressevent_callback = cb; }
    inline void setKUrlLabel_MouseMoveEvent_Callback(KUrlLabel_MouseMoveEvent_Callback cb) { kurllabel_mousemoveevent_callback = cb; }
    inline void setKUrlLabel_ContextMenuEvent_Callback(KUrlLabel_ContextMenuEvent_Callback cb) { kurllabel_contextmenuevent_callback = cb; }
    inline void setKUrlLabel_FocusInEvent_Callback(KUrlLabel_FocusInEvent_Callback cb) { kurllabel_focusinevent_callback = cb; }
    inline void setKUrlLabel_FocusOutEvent_Callback(KUrlLabel_FocusOutEvent_Callback cb) { kurllabel_focusoutevent_callback = cb; }
    inline void setKUrlLabel_FocusNextPrevChild_Callback(KUrlLabel_FocusNextPrevChild_Callback cb) { kurllabel_focusnextprevchild_callback = cb; }
    inline void setKUrlLabel_InitStyleOption_Callback(KUrlLabel_InitStyleOption_Callback cb) { kurllabel_initstyleoption_callback = cb; }
    inline void setKUrlLabel_DevType_Callback(KUrlLabel_DevType_Callback cb) { kurllabel_devtype_callback = cb; }
    inline void setKUrlLabel_SetVisible_Callback(KUrlLabel_SetVisible_Callback cb) { kurllabel_setvisible_callback = cb; }
    inline void setKUrlLabel_HasHeightForWidth_Callback(KUrlLabel_HasHeightForWidth_Callback cb) { kurllabel_hasheightforwidth_callback = cb; }
    inline void setKUrlLabel_PaintEngine_Callback(KUrlLabel_PaintEngine_Callback cb) { kurllabel_paintengine_callback = cb; }
    inline void setKUrlLabel_MouseDoubleClickEvent_Callback(KUrlLabel_MouseDoubleClickEvent_Callback cb) { kurllabel_mousedoubleclickevent_callback = cb; }
    inline void setKUrlLabel_WheelEvent_Callback(KUrlLabel_WheelEvent_Callback cb) { kurllabel_wheelevent_callback = cb; }
    inline void setKUrlLabel_KeyReleaseEvent_Callback(KUrlLabel_KeyReleaseEvent_Callback cb) { kurllabel_keyreleaseevent_callback = cb; }
    inline void setKUrlLabel_MoveEvent_Callback(KUrlLabel_MoveEvent_Callback cb) { kurllabel_moveevent_callback = cb; }
    inline void setKUrlLabel_ResizeEvent_Callback(KUrlLabel_ResizeEvent_Callback cb) { kurllabel_resizeevent_callback = cb; }
    inline void setKUrlLabel_CloseEvent_Callback(KUrlLabel_CloseEvent_Callback cb) { kurllabel_closeevent_callback = cb; }
    inline void setKUrlLabel_TabletEvent_Callback(KUrlLabel_TabletEvent_Callback cb) { kurllabel_tabletevent_callback = cb; }
    inline void setKUrlLabel_ActionEvent_Callback(KUrlLabel_ActionEvent_Callback cb) { kurllabel_actionevent_callback = cb; }
    inline void setKUrlLabel_DragEnterEvent_Callback(KUrlLabel_DragEnterEvent_Callback cb) { kurllabel_dragenterevent_callback = cb; }
    inline void setKUrlLabel_DragMoveEvent_Callback(KUrlLabel_DragMoveEvent_Callback cb) { kurllabel_dragmoveevent_callback = cb; }
    inline void setKUrlLabel_DragLeaveEvent_Callback(KUrlLabel_DragLeaveEvent_Callback cb) { kurllabel_dragleaveevent_callback = cb; }
    inline void setKUrlLabel_DropEvent_Callback(KUrlLabel_DropEvent_Callback cb) { kurllabel_dropevent_callback = cb; }
    inline void setKUrlLabel_ShowEvent_Callback(KUrlLabel_ShowEvent_Callback cb) { kurllabel_showevent_callback = cb; }
    inline void setKUrlLabel_HideEvent_Callback(KUrlLabel_HideEvent_Callback cb) { kurllabel_hideevent_callback = cb; }
    inline void setKUrlLabel_NativeEvent_Callback(KUrlLabel_NativeEvent_Callback cb) { kurllabel_nativeevent_callback = cb; }
    inline void setKUrlLabel_Metric_Callback(KUrlLabel_Metric_Callback cb) { kurllabel_metric_callback = cb; }
    inline void setKUrlLabel_InitPainter_Callback(KUrlLabel_InitPainter_Callback cb) { kurllabel_initpainter_callback = cb; }
    inline void setKUrlLabel_Redirected_Callback(KUrlLabel_Redirected_Callback cb) { kurllabel_redirected_callback = cb; }
    inline void setKUrlLabel_SharedPainter_Callback(KUrlLabel_SharedPainter_Callback cb) { kurllabel_sharedpainter_callback = cb; }
    inline void setKUrlLabel_InputMethodEvent_Callback(KUrlLabel_InputMethodEvent_Callback cb) { kurllabel_inputmethodevent_callback = cb; }
    inline void setKUrlLabel_InputMethodQuery_Callback(KUrlLabel_InputMethodQuery_Callback cb) { kurllabel_inputmethodquery_callback = cb; }
    inline void setKUrlLabel_EventFilter_Callback(KUrlLabel_EventFilter_Callback cb) { kurllabel_eventfilter_callback = cb; }
    inline void setKUrlLabel_TimerEvent_Callback(KUrlLabel_TimerEvent_Callback cb) { kurllabel_timerevent_callback = cb; }
    inline void setKUrlLabel_ChildEvent_Callback(KUrlLabel_ChildEvent_Callback cb) { kurllabel_childevent_callback = cb; }
    inline void setKUrlLabel_CustomEvent_Callback(KUrlLabel_CustomEvent_Callback cb) { kurllabel_customevent_callback = cb; }
    inline void setKUrlLabel_ConnectNotify_Callback(KUrlLabel_ConnectNotify_Callback cb) { kurllabel_connectnotify_callback = cb; }
    inline void setKUrlLabel_DisconnectNotify_Callback(KUrlLabel_DisconnectNotify_Callback cb) { kurllabel_disconnectnotify_callback = cb; }
    inline void setKUrlLabel_DrawFrame_Callback(KUrlLabel_DrawFrame_Callback cb) { kurllabel_drawframe_callback = cb; }
    inline void setKUrlLabel_UpdateMicroFocus_Callback(KUrlLabel_UpdateMicroFocus_Callback cb) { kurllabel_updatemicrofocus_callback = cb; }
    inline void setKUrlLabel_Create_Callback(KUrlLabel_Create_Callback cb) { kurllabel_create_callback = cb; }
    inline void setKUrlLabel_Destroy_Callback(KUrlLabel_Destroy_Callback cb) { kurllabel_destroy_callback = cb; }
    inline void setKUrlLabel_FocusNextChild_Callback(KUrlLabel_FocusNextChild_Callback cb) { kurllabel_focusnextchild_callback = cb; }
    inline void setKUrlLabel_FocusPreviousChild_Callback(KUrlLabel_FocusPreviousChild_Callback cb) { kurllabel_focuspreviouschild_callback = cb; }
    inline void setKUrlLabel_Sender_Callback(KUrlLabel_Sender_Callback cb) { kurllabel_sender_callback = cb; }
    inline void setKUrlLabel_SenderSignalIndex_Callback(KUrlLabel_SenderSignalIndex_Callback cb) { kurllabel_sendersignalindex_callback = cb; }
    inline void setKUrlLabel_Receivers_Callback(KUrlLabel_Receivers_Callback cb) { kurllabel_receivers_callback = cb; }
    inline void setKUrlLabel_IsSignalConnected_Callback(KUrlLabel_IsSignalConnected_Callback cb) { kurllabel_issignalconnected_callback = cb; }
    inline void setKUrlLabel_GetDecodedMetricF_Callback(KUrlLabel_GetDecodedMetricF_Callback cb) { kurllabel_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKUrlLabel_Metacall_IsBase(bool value) const { kurllabel_metacall_isbase = value; }
    inline void setKUrlLabel_SetFont_IsBase(bool value) const { kurllabel_setfont_isbase = value; }
    inline void setKUrlLabel_MouseReleaseEvent_IsBase(bool value) const { kurllabel_mousereleaseevent_isbase = value; }
    inline void setKUrlLabel_EnterEvent_IsBase(bool value) const { kurllabel_enterevent_isbase = value; }
    inline void setKUrlLabel_LeaveEvent_IsBase(bool value) const { kurllabel_leaveevent_isbase = value; }
    inline void setKUrlLabel_Event_IsBase(bool value) const { kurllabel_event_isbase = value; }
    inline void setKUrlLabel_SizeHint_IsBase(bool value) const { kurllabel_sizehint_isbase = value; }
    inline void setKUrlLabel_MinimumSizeHint_IsBase(bool value) const { kurllabel_minimumsizehint_isbase = value; }
    inline void setKUrlLabel_HeightForWidth_IsBase(bool value) const { kurllabel_heightforwidth_isbase = value; }
    inline void setKUrlLabel_KeyPressEvent_IsBase(bool value) const { kurllabel_keypressevent_isbase = value; }
    inline void setKUrlLabel_PaintEvent_IsBase(bool value) const { kurllabel_paintevent_isbase = value; }
    inline void setKUrlLabel_ChangeEvent_IsBase(bool value) const { kurllabel_changeevent_isbase = value; }
    inline void setKUrlLabel_MousePressEvent_IsBase(bool value) const { kurllabel_mousepressevent_isbase = value; }
    inline void setKUrlLabel_MouseMoveEvent_IsBase(bool value) const { kurllabel_mousemoveevent_isbase = value; }
    inline void setKUrlLabel_ContextMenuEvent_IsBase(bool value) const { kurllabel_contextmenuevent_isbase = value; }
    inline void setKUrlLabel_FocusInEvent_IsBase(bool value) const { kurllabel_focusinevent_isbase = value; }
    inline void setKUrlLabel_FocusOutEvent_IsBase(bool value) const { kurllabel_focusoutevent_isbase = value; }
    inline void setKUrlLabel_FocusNextPrevChild_IsBase(bool value) const { kurllabel_focusnextprevchild_isbase = value; }
    inline void setKUrlLabel_InitStyleOption_IsBase(bool value) const { kurllabel_initstyleoption_isbase = value; }
    inline void setKUrlLabel_DevType_IsBase(bool value) const { kurllabel_devtype_isbase = value; }
    inline void setKUrlLabel_SetVisible_IsBase(bool value) const { kurllabel_setvisible_isbase = value; }
    inline void setKUrlLabel_HasHeightForWidth_IsBase(bool value) const { kurllabel_hasheightforwidth_isbase = value; }
    inline void setKUrlLabel_PaintEngine_IsBase(bool value) const { kurllabel_paintengine_isbase = value; }
    inline void setKUrlLabel_MouseDoubleClickEvent_IsBase(bool value) const { kurllabel_mousedoubleclickevent_isbase = value; }
    inline void setKUrlLabel_WheelEvent_IsBase(bool value) const { kurllabel_wheelevent_isbase = value; }
    inline void setKUrlLabel_KeyReleaseEvent_IsBase(bool value) const { kurllabel_keyreleaseevent_isbase = value; }
    inline void setKUrlLabel_MoveEvent_IsBase(bool value) const { kurllabel_moveevent_isbase = value; }
    inline void setKUrlLabel_ResizeEvent_IsBase(bool value) const { kurllabel_resizeevent_isbase = value; }
    inline void setKUrlLabel_CloseEvent_IsBase(bool value) const { kurllabel_closeevent_isbase = value; }
    inline void setKUrlLabel_TabletEvent_IsBase(bool value) const { kurllabel_tabletevent_isbase = value; }
    inline void setKUrlLabel_ActionEvent_IsBase(bool value) const { kurllabel_actionevent_isbase = value; }
    inline void setKUrlLabel_DragEnterEvent_IsBase(bool value) const { kurllabel_dragenterevent_isbase = value; }
    inline void setKUrlLabel_DragMoveEvent_IsBase(bool value) const { kurllabel_dragmoveevent_isbase = value; }
    inline void setKUrlLabel_DragLeaveEvent_IsBase(bool value) const { kurllabel_dragleaveevent_isbase = value; }
    inline void setKUrlLabel_DropEvent_IsBase(bool value) const { kurllabel_dropevent_isbase = value; }
    inline void setKUrlLabel_ShowEvent_IsBase(bool value) const { kurllabel_showevent_isbase = value; }
    inline void setKUrlLabel_HideEvent_IsBase(bool value) const { kurllabel_hideevent_isbase = value; }
    inline void setKUrlLabel_NativeEvent_IsBase(bool value) const { kurllabel_nativeevent_isbase = value; }
    inline void setKUrlLabel_Metric_IsBase(bool value) const { kurllabel_metric_isbase = value; }
    inline void setKUrlLabel_InitPainter_IsBase(bool value) const { kurllabel_initpainter_isbase = value; }
    inline void setKUrlLabel_Redirected_IsBase(bool value) const { kurllabel_redirected_isbase = value; }
    inline void setKUrlLabel_SharedPainter_IsBase(bool value) const { kurllabel_sharedpainter_isbase = value; }
    inline void setKUrlLabel_InputMethodEvent_IsBase(bool value) const { kurllabel_inputmethodevent_isbase = value; }
    inline void setKUrlLabel_InputMethodQuery_IsBase(bool value) const { kurllabel_inputmethodquery_isbase = value; }
    inline void setKUrlLabel_EventFilter_IsBase(bool value) const { kurllabel_eventfilter_isbase = value; }
    inline void setKUrlLabel_TimerEvent_IsBase(bool value) const { kurllabel_timerevent_isbase = value; }
    inline void setKUrlLabel_ChildEvent_IsBase(bool value) const { kurllabel_childevent_isbase = value; }
    inline void setKUrlLabel_CustomEvent_IsBase(bool value) const { kurllabel_customevent_isbase = value; }
    inline void setKUrlLabel_ConnectNotify_IsBase(bool value) const { kurllabel_connectnotify_isbase = value; }
    inline void setKUrlLabel_DisconnectNotify_IsBase(bool value) const { kurllabel_disconnectnotify_isbase = value; }
    inline void setKUrlLabel_DrawFrame_IsBase(bool value) const { kurllabel_drawframe_isbase = value; }
    inline void setKUrlLabel_UpdateMicroFocus_IsBase(bool value) const { kurllabel_updatemicrofocus_isbase = value; }
    inline void setKUrlLabel_Create_IsBase(bool value) const { kurllabel_create_isbase = value; }
    inline void setKUrlLabel_Destroy_IsBase(bool value) const { kurllabel_destroy_isbase = value; }
    inline void setKUrlLabel_FocusNextChild_IsBase(bool value) const { kurllabel_focusnextchild_isbase = value; }
    inline void setKUrlLabel_FocusPreviousChild_IsBase(bool value) const { kurllabel_focuspreviouschild_isbase = value; }
    inline void setKUrlLabel_Sender_IsBase(bool value) const { kurllabel_sender_isbase = value; }
    inline void setKUrlLabel_SenderSignalIndex_IsBase(bool value) const { kurllabel_sendersignalindex_isbase = value; }
    inline void setKUrlLabel_Receivers_IsBase(bool value) const { kurllabel_receivers_isbase = value; }
    inline void setKUrlLabel_IsSignalConnected_IsBase(bool value) const { kurllabel_issignalconnected_isbase = value; }
    inline void setKUrlLabel_GetDecodedMetricF_IsBase(bool value) const { kurllabel_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kurllabel_metacall_isbase) {
            kurllabel_metacall_isbase = false;
            return KUrlLabel::qt_metacall(param1, param2, param3);
        } else if (kurllabel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kurllabel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KUrlLabel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& font) override {
        if (kurllabel_setfont_isbase) {
            kurllabel_setfont_isbase = false;
            KUrlLabel::setFont(font);
        } else if (kurllabel_setfont_callback != nullptr) {
            const QFont& font_ret = font;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&font_ret);

            kurllabel_setfont_callback(this, cbval1);
        } else {
            KUrlLabel::setFont(font);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (kurllabel_mousereleaseevent_isbase) {
            kurllabel_mousereleaseevent_isbase = false;
            KUrlLabel::mouseReleaseEvent(param1);
        } else if (kurllabel_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            kurllabel_mousereleaseevent_callback(this, cbval1);
        } else {
            KUrlLabel::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kurllabel_enterevent_isbase) {
            kurllabel_enterevent_isbase = false;
            KUrlLabel::enterEvent(event);
        } else if (kurllabel_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kurllabel_enterevent_callback(this, cbval1);
        } else {
            KUrlLabel::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (kurllabel_leaveevent_isbase) {
            kurllabel_leaveevent_isbase = false;
            KUrlLabel::leaveEvent(param1);
        } else if (kurllabel_leaveevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kurllabel_leaveevent_callback(this, cbval1);
        } else {
            KUrlLabel::leaveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (kurllabel_event_isbase) {
            kurllabel_event_isbase = false;
            return KUrlLabel::event(param1);
        } else if (kurllabel_event_callback != nullptr) {
            QEvent* cbval1 = param1;

            bool callback_ret = kurllabel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUrlLabel::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kurllabel_sizehint_isbase) {
            kurllabel_sizehint_isbase = false;
            return KUrlLabel::sizeHint();
        } else if (kurllabel_sizehint_callback != nullptr) {
            QSize* callback_ret = kurllabel_sizehint_callback();
            return *callback_ret;
        } else {
            return KUrlLabel::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kurllabel_minimumsizehint_isbase) {
            kurllabel_minimumsizehint_isbase = false;
            return KUrlLabel::minimumSizeHint();
        } else if (kurllabel_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kurllabel_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KUrlLabel::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kurllabel_heightforwidth_isbase) {
            kurllabel_heightforwidth_isbase = false;
            return KUrlLabel::heightForWidth(param1);
        } else if (kurllabel_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kurllabel_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KUrlLabel::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (kurllabel_keypressevent_isbase) {
            kurllabel_keypressevent_isbase = false;
            KUrlLabel::keyPressEvent(ev);
        } else if (kurllabel_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = ev;

            kurllabel_keypressevent_callback(this, cbval1);
        } else {
            KUrlLabel::keyPressEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kurllabel_paintevent_isbase) {
            kurllabel_paintevent_isbase = false;
            KUrlLabel::paintEvent(param1);
        } else if (kurllabel_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            kurllabel_paintevent_callback(this, cbval1);
        } else {
            KUrlLabel::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kurllabel_changeevent_isbase) {
            kurllabel_changeevent_isbase = false;
            KUrlLabel::changeEvent(param1);
        } else if (kurllabel_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kurllabel_changeevent_callback(this, cbval1);
        } else {
            KUrlLabel::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* ev) override {
        if (kurllabel_mousepressevent_isbase) {
            kurllabel_mousepressevent_isbase = false;
            KUrlLabel::mousePressEvent(ev);
        } else if (kurllabel_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = ev;

            kurllabel_mousepressevent_callback(this, cbval1);
        } else {
            KUrlLabel::mousePressEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* ev) override {
        if (kurllabel_mousemoveevent_isbase) {
            kurllabel_mousemoveevent_isbase = false;
            KUrlLabel::mouseMoveEvent(ev);
        } else if (kurllabel_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = ev;

            kurllabel_mousemoveevent_callback(this, cbval1);
        } else {
            KUrlLabel::mouseMoveEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* ev) override {
        if (kurllabel_contextmenuevent_isbase) {
            kurllabel_contextmenuevent_isbase = false;
            KUrlLabel::contextMenuEvent(ev);
        } else if (kurllabel_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = ev;

            kurllabel_contextmenuevent_callback(this, cbval1);
        } else {
            KUrlLabel::contextMenuEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* ev) override {
        if (kurllabel_focusinevent_isbase) {
            kurllabel_focusinevent_isbase = false;
            KUrlLabel::focusInEvent(ev);
        } else if (kurllabel_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = ev;

            kurllabel_focusinevent_callback(this, cbval1);
        } else {
            KUrlLabel::focusInEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* ev) override {
        if (kurllabel_focusoutevent_isbase) {
            kurllabel_focusoutevent_isbase = false;
            KUrlLabel::focusOutEvent(ev);
        } else if (kurllabel_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = ev;

            kurllabel_focusoutevent_callback(this, cbval1);
        } else {
            KUrlLabel::focusOutEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kurllabel_focusnextprevchild_isbase) {
            kurllabel_focusnextprevchild_isbase = false;
            return KUrlLabel::focusNextPrevChild(next);
        } else if (kurllabel_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kurllabel_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUrlLabel::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kurllabel_initstyleoption_isbase) {
            kurllabel_initstyleoption_isbase = false;
            KUrlLabel::initStyleOption(option);
        } else if (kurllabel_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            kurllabel_initstyleoption_callback(this, cbval1);
        } else {
            KUrlLabel::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kurllabel_devtype_isbase) {
            kurllabel_devtype_isbase = false;
            return KUrlLabel::devType();
        } else if (kurllabel_devtype_callback != nullptr) {
            int callback_ret = kurllabel_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KUrlLabel::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kurllabel_setvisible_isbase) {
            kurllabel_setvisible_isbase = false;
            KUrlLabel::setVisible(visible);
        } else if (kurllabel_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kurllabel_setvisible_callback(this, cbval1);
        } else {
            KUrlLabel::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kurllabel_hasheightforwidth_isbase) {
            kurllabel_hasheightforwidth_isbase = false;
            return KUrlLabel::hasHeightForWidth();
        } else if (kurllabel_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kurllabel_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KUrlLabel::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kurllabel_paintengine_isbase) {
            kurllabel_paintengine_isbase = false;
            return KUrlLabel::paintEngine();
        } else if (kurllabel_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kurllabel_paintengine_callback();
            return callback_ret;
        } else {
            return KUrlLabel::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kurllabel_mousedoubleclickevent_isbase) {
            kurllabel_mousedoubleclickevent_isbase = false;
            KUrlLabel::mouseDoubleClickEvent(event);
        } else if (kurllabel_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kurllabel_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KUrlLabel::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kurllabel_wheelevent_isbase) {
            kurllabel_wheelevent_isbase = false;
            KUrlLabel::wheelEvent(event);
        } else if (kurllabel_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kurllabel_wheelevent_callback(this, cbval1);
        } else {
            KUrlLabel::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kurllabel_keyreleaseevent_isbase) {
            kurllabel_keyreleaseevent_isbase = false;
            KUrlLabel::keyReleaseEvent(event);
        } else if (kurllabel_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kurllabel_keyreleaseevent_callback(this, cbval1);
        } else {
            KUrlLabel::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kurllabel_moveevent_isbase) {
            kurllabel_moveevent_isbase = false;
            KUrlLabel::moveEvent(event);
        } else if (kurllabel_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kurllabel_moveevent_callback(this, cbval1);
        } else {
            KUrlLabel::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kurllabel_resizeevent_isbase) {
            kurllabel_resizeevent_isbase = false;
            KUrlLabel::resizeEvent(event);
        } else if (kurllabel_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kurllabel_resizeevent_callback(this, cbval1);
        } else {
            KUrlLabel::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kurllabel_closeevent_isbase) {
            kurllabel_closeevent_isbase = false;
            KUrlLabel::closeEvent(event);
        } else if (kurllabel_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kurllabel_closeevent_callback(this, cbval1);
        } else {
            KUrlLabel::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kurllabel_tabletevent_isbase) {
            kurllabel_tabletevent_isbase = false;
            KUrlLabel::tabletEvent(event);
        } else if (kurllabel_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kurllabel_tabletevent_callback(this, cbval1);
        } else {
            KUrlLabel::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kurllabel_actionevent_isbase) {
            kurllabel_actionevent_isbase = false;
            KUrlLabel::actionEvent(event);
        } else if (kurllabel_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kurllabel_actionevent_callback(this, cbval1);
        } else {
            KUrlLabel::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kurllabel_dragenterevent_isbase) {
            kurllabel_dragenterevent_isbase = false;
            KUrlLabel::dragEnterEvent(event);
        } else if (kurllabel_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kurllabel_dragenterevent_callback(this, cbval1);
        } else {
            KUrlLabel::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kurllabel_dragmoveevent_isbase) {
            kurllabel_dragmoveevent_isbase = false;
            KUrlLabel::dragMoveEvent(event);
        } else if (kurllabel_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kurllabel_dragmoveevent_callback(this, cbval1);
        } else {
            KUrlLabel::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kurllabel_dragleaveevent_isbase) {
            kurllabel_dragleaveevent_isbase = false;
            KUrlLabel::dragLeaveEvent(event);
        } else if (kurllabel_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kurllabel_dragleaveevent_callback(this, cbval1);
        } else {
            KUrlLabel::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kurllabel_dropevent_isbase) {
            kurllabel_dropevent_isbase = false;
            KUrlLabel::dropEvent(event);
        } else if (kurllabel_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kurllabel_dropevent_callback(this, cbval1);
        } else {
            KUrlLabel::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kurllabel_showevent_isbase) {
            kurllabel_showevent_isbase = false;
            KUrlLabel::showEvent(event);
        } else if (kurllabel_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kurllabel_showevent_callback(this, cbval1);
        } else {
            KUrlLabel::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kurllabel_hideevent_isbase) {
            kurllabel_hideevent_isbase = false;
            KUrlLabel::hideEvent(event);
        } else if (kurllabel_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kurllabel_hideevent_callback(this, cbval1);
        } else {
            KUrlLabel::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kurllabel_nativeevent_isbase) {
            kurllabel_nativeevent_isbase = false;
            return KUrlLabel::nativeEvent(eventType, message, result);
        } else if (kurllabel_nativeevent_callback != nullptr) {
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

            bool callback_ret = kurllabel_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KUrlLabel::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kurllabel_metric_isbase) {
            kurllabel_metric_isbase = false;
            return KUrlLabel::metric(param1);
        } else if (kurllabel_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kurllabel_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KUrlLabel::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kurllabel_initpainter_isbase) {
            kurllabel_initpainter_isbase = false;
            KUrlLabel::initPainter(painter);
        } else if (kurllabel_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kurllabel_initpainter_callback(this, cbval1);
        } else {
            KUrlLabel::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kurllabel_redirected_isbase) {
            kurllabel_redirected_isbase = false;
            return KUrlLabel::redirected(offset);
        } else if (kurllabel_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kurllabel_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUrlLabel::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kurllabel_sharedpainter_isbase) {
            kurllabel_sharedpainter_isbase = false;
            return KUrlLabel::sharedPainter();
        } else if (kurllabel_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kurllabel_sharedpainter_callback();
            return callback_ret;
        } else {
            return KUrlLabel::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kurllabel_inputmethodevent_isbase) {
            kurllabel_inputmethodevent_isbase = false;
            KUrlLabel::inputMethodEvent(param1);
        } else if (kurllabel_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kurllabel_inputmethodevent_callback(this, cbval1);
        } else {
            KUrlLabel::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kurllabel_inputmethodquery_isbase) {
            kurllabel_inputmethodquery_isbase = false;
            return KUrlLabel::inputMethodQuery(param1);
        } else if (kurllabel_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kurllabel_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KUrlLabel::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kurllabel_eventfilter_isbase) {
            kurllabel_eventfilter_isbase = false;
            return KUrlLabel::eventFilter(watched, event);
        } else if (kurllabel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kurllabel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KUrlLabel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kurllabel_timerevent_isbase) {
            kurllabel_timerevent_isbase = false;
            KUrlLabel::timerEvent(event);
        } else if (kurllabel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kurllabel_timerevent_callback(this, cbval1);
        } else {
            KUrlLabel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kurllabel_childevent_isbase) {
            kurllabel_childevent_isbase = false;
            KUrlLabel::childEvent(event);
        } else if (kurllabel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kurllabel_childevent_callback(this, cbval1);
        } else {
            KUrlLabel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kurllabel_customevent_isbase) {
            kurllabel_customevent_isbase = false;
            KUrlLabel::customEvent(event);
        } else if (kurllabel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kurllabel_customevent_callback(this, cbval1);
        } else {
            KUrlLabel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kurllabel_connectnotify_isbase) {
            kurllabel_connectnotify_isbase = false;
            KUrlLabel::connectNotify(signal);
        } else if (kurllabel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kurllabel_connectnotify_callback(this, cbval1);
        } else {
            KUrlLabel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kurllabel_disconnectnotify_isbase) {
            kurllabel_disconnectnotify_isbase = false;
            KUrlLabel::disconnectNotify(signal);
        } else if (kurllabel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kurllabel_disconnectnotify_callback(this, cbval1);
        } else {
            KUrlLabel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (kurllabel_drawframe_isbase) {
            kurllabel_drawframe_isbase = false;
            KUrlLabel::drawFrame(param1);
        } else if (kurllabel_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            kurllabel_drawframe_callback(this, cbval1);
        } else {
            KUrlLabel::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kurllabel_updatemicrofocus_isbase) {
            kurllabel_updatemicrofocus_isbase = false;
            KUrlLabel::updateMicroFocus();
        } else if (kurllabel_updatemicrofocus_callback != nullptr) {
            kurllabel_updatemicrofocus_callback();
        } else {
            KUrlLabel::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kurllabel_create_isbase) {
            kurllabel_create_isbase = false;
            KUrlLabel::create();
        } else if (kurllabel_create_callback != nullptr) {
            kurllabel_create_callback();
        } else {
            KUrlLabel::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kurllabel_destroy_isbase) {
            kurllabel_destroy_isbase = false;
            KUrlLabel::destroy();
        } else if (kurllabel_destroy_callback != nullptr) {
            kurllabel_destroy_callback();
        } else {
            KUrlLabel::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kurllabel_focusnextchild_isbase) {
            kurllabel_focusnextchild_isbase = false;
            return KUrlLabel::focusNextChild();
        } else if (kurllabel_focusnextchild_callback != nullptr) {
            bool callback_ret = kurllabel_focusnextchild_callback();
            return callback_ret;
        } else {
            return KUrlLabel::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kurllabel_focuspreviouschild_isbase) {
            kurllabel_focuspreviouschild_isbase = false;
            return KUrlLabel::focusPreviousChild();
        } else if (kurllabel_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kurllabel_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KUrlLabel::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kurllabel_sender_isbase) {
            kurllabel_sender_isbase = false;
            return KUrlLabel::sender();
        } else if (kurllabel_sender_callback != nullptr) {
            QObject* callback_ret = kurllabel_sender_callback();
            return callback_ret;
        } else {
            return KUrlLabel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kurllabel_sendersignalindex_isbase) {
            kurllabel_sendersignalindex_isbase = false;
            return KUrlLabel::senderSignalIndex();
        } else if (kurllabel_sendersignalindex_callback != nullptr) {
            int callback_ret = kurllabel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KUrlLabel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kurllabel_receivers_isbase) {
            kurllabel_receivers_isbase = false;
            return KUrlLabel::receivers(signal);
        } else if (kurllabel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kurllabel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KUrlLabel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kurllabel_issignalconnected_isbase) {
            kurllabel_issignalconnected_isbase = false;
            return KUrlLabel::isSignalConnected(signal);
        } else if (kurllabel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kurllabel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUrlLabel::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kurllabel_getdecodedmetricf_isbase) {
            kurllabel_getdecodedmetricf_isbase = false;
            return KUrlLabel::getDecodedMetricF(metricA, metricB);
        } else if (kurllabel_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kurllabel_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KUrlLabel::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KUrlLabel_MouseReleaseEvent(KUrlLabel* self, QMouseEvent* param1);
    friend void KUrlLabel_QBaseMouseReleaseEvent(KUrlLabel* self, QMouseEvent* param1);
    friend void KUrlLabel_EnterEvent(KUrlLabel* self, QEnterEvent* event);
    friend void KUrlLabel_QBaseEnterEvent(KUrlLabel* self, QEnterEvent* event);
    friend void KUrlLabel_LeaveEvent(KUrlLabel* self, QEvent* param1);
    friend void KUrlLabel_QBaseLeaveEvent(KUrlLabel* self, QEvent* param1);
    friend bool KUrlLabel_Event(KUrlLabel* self, QEvent* param1);
    friend bool KUrlLabel_QBaseEvent(KUrlLabel* self, QEvent* param1);
    friend void KUrlLabel_KeyPressEvent(KUrlLabel* self, QKeyEvent* ev);
    friend void KUrlLabel_QBaseKeyPressEvent(KUrlLabel* self, QKeyEvent* ev);
    friend void KUrlLabel_PaintEvent(KUrlLabel* self, QPaintEvent* param1);
    friend void KUrlLabel_QBasePaintEvent(KUrlLabel* self, QPaintEvent* param1);
    friend void KUrlLabel_ChangeEvent(KUrlLabel* self, QEvent* param1);
    friend void KUrlLabel_QBaseChangeEvent(KUrlLabel* self, QEvent* param1);
    friend void KUrlLabel_MousePressEvent(KUrlLabel* self, QMouseEvent* ev);
    friend void KUrlLabel_QBaseMousePressEvent(KUrlLabel* self, QMouseEvent* ev);
    friend void KUrlLabel_MouseMoveEvent(KUrlLabel* self, QMouseEvent* ev);
    friend void KUrlLabel_QBaseMouseMoveEvent(KUrlLabel* self, QMouseEvent* ev);
    friend void KUrlLabel_ContextMenuEvent(KUrlLabel* self, QContextMenuEvent* ev);
    friend void KUrlLabel_QBaseContextMenuEvent(KUrlLabel* self, QContextMenuEvent* ev);
    friend void KUrlLabel_FocusInEvent(KUrlLabel* self, QFocusEvent* ev);
    friend void KUrlLabel_QBaseFocusInEvent(KUrlLabel* self, QFocusEvent* ev);
    friend void KUrlLabel_FocusOutEvent(KUrlLabel* self, QFocusEvent* ev);
    friend void KUrlLabel_QBaseFocusOutEvent(KUrlLabel* self, QFocusEvent* ev);
    friend bool KUrlLabel_FocusNextPrevChild(KUrlLabel* self, bool next);
    friend bool KUrlLabel_QBaseFocusNextPrevChild(KUrlLabel* self, bool next);
    friend void KUrlLabel_InitStyleOption(const KUrlLabel* self, QStyleOptionFrame* option);
    friend void KUrlLabel_QBaseInitStyleOption(const KUrlLabel* self, QStyleOptionFrame* option);
    friend void KUrlLabel_MouseDoubleClickEvent(KUrlLabel* self, QMouseEvent* event);
    friend void KUrlLabel_QBaseMouseDoubleClickEvent(KUrlLabel* self, QMouseEvent* event);
    friend void KUrlLabel_WheelEvent(KUrlLabel* self, QWheelEvent* event);
    friend void KUrlLabel_QBaseWheelEvent(KUrlLabel* self, QWheelEvent* event);
    friend void KUrlLabel_KeyReleaseEvent(KUrlLabel* self, QKeyEvent* event);
    friend void KUrlLabel_QBaseKeyReleaseEvent(KUrlLabel* self, QKeyEvent* event);
    friend void KUrlLabel_MoveEvent(KUrlLabel* self, QMoveEvent* event);
    friend void KUrlLabel_QBaseMoveEvent(KUrlLabel* self, QMoveEvent* event);
    friend void KUrlLabel_ResizeEvent(KUrlLabel* self, QResizeEvent* event);
    friend void KUrlLabel_QBaseResizeEvent(KUrlLabel* self, QResizeEvent* event);
    friend void KUrlLabel_CloseEvent(KUrlLabel* self, QCloseEvent* event);
    friend void KUrlLabel_QBaseCloseEvent(KUrlLabel* self, QCloseEvent* event);
    friend void KUrlLabel_TabletEvent(KUrlLabel* self, QTabletEvent* event);
    friend void KUrlLabel_QBaseTabletEvent(KUrlLabel* self, QTabletEvent* event);
    friend void KUrlLabel_ActionEvent(KUrlLabel* self, QActionEvent* event);
    friend void KUrlLabel_QBaseActionEvent(KUrlLabel* self, QActionEvent* event);
    friend void KUrlLabel_DragEnterEvent(KUrlLabel* self, QDragEnterEvent* event);
    friend void KUrlLabel_QBaseDragEnterEvent(KUrlLabel* self, QDragEnterEvent* event);
    friend void KUrlLabel_DragMoveEvent(KUrlLabel* self, QDragMoveEvent* event);
    friend void KUrlLabel_QBaseDragMoveEvent(KUrlLabel* self, QDragMoveEvent* event);
    friend void KUrlLabel_DragLeaveEvent(KUrlLabel* self, QDragLeaveEvent* event);
    friend void KUrlLabel_QBaseDragLeaveEvent(KUrlLabel* self, QDragLeaveEvent* event);
    friend void KUrlLabel_DropEvent(KUrlLabel* self, QDropEvent* event);
    friend void KUrlLabel_QBaseDropEvent(KUrlLabel* self, QDropEvent* event);
    friend void KUrlLabel_ShowEvent(KUrlLabel* self, QShowEvent* event);
    friend void KUrlLabel_QBaseShowEvent(KUrlLabel* self, QShowEvent* event);
    friend void KUrlLabel_HideEvent(KUrlLabel* self, QHideEvent* event);
    friend void KUrlLabel_QBaseHideEvent(KUrlLabel* self, QHideEvent* event);
    friend bool KUrlLabel_NativeEvent(KUrlLabel* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KUrlLabel_QBaseNativeEvent(KUrlLabel* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KUrlLabel_Metric(const KUrlLabel* self, int param1);
    friend int KUrlLabel_QBaseMetric(const KUrlLabel* self, int param1);
    friend void KUrlLabel_InitPainter(const KUrlLabel* self, QPainter* painter);
    friend void KUrlLabel_QBaseInitPainter(const KUrlLabel* self, QPainter* painter);
    friend QPaintDevice* KUrlLabel_Redirected(const KUrlLabel* self, QPoint* offset);
    friend QPaintDevice* KUrlLabel_QBaseRedirected(const KUrlLabel* self, QPoint* offset);
    friend QPainter* KUrlLabel_SharedPainter(const KUrlLabel* self);
    friend QPainter* KUrlLabel_QBaseSharedPainter(const KUrlLabel* self);
    friend void KUrlLabel_InputMethodEvent(KUrlLabel* self, QInputMethodEvent* param1);
    friend void KUrlLabel_QBaseInputMethodEvent(KUrlLabel* self, QInputMethodEvent* param1);
    friend void KUrlLabel_TimerEvent(KUrlLabel* self, QTimerEvent* event);
    friend void KUrlLabel_QBaseTimerEvent(KUrlLabel* self, QTimerEvent* event);
    friend void KUrlLabel_ChildEvent(KUrlLabel* self, QChildEvent* event);
    friend void KUrlLabel_QBaseChildEvent(KUrlLabel* self, QChildEvent* event);
    friend void KUrlLabel_CustomEvent(KUrlLabel* self, QEvent* event);
    friend void KUrlLabel_QBaseCustomEvent(KUrlLabel* self, QEvent* event);
    friend void KUrlLabel_ConnectNotify(KUrlLabel* self, const QMetaMethod* signal);
    friend void KUrlLabel_QBaseConnectNotify(KUrlLabel* self, const QMetaMethod* signal);
    friend void KUrlLabel_DisconnectNotify(KUrlLabel* self, const QMetaMethod* signal);
    friend void KUrlLabel_QBaseDisconnectNotify(KUrlLabel* self, const QMetaMethod* signal);
    friend void KUrlLabel_DrawFrame(KUrlLabel* self, QPainter* param1);
    friend void KUrlLabel_QBaseDrawFrame(KUrlLabel* self, QPainter* param1);
    friend void KUrlLabel_UpdateMicroFocus(KUrlLabel* self);
    friend void KUrlLabel_QBaseUpdateMicroFocus(KUrlLabel* self);
    friend void KUrlLabel_Create(KUrlLabel* self);
    friend void KUrlLabel_QBaseCreate(KUrlLabel* self);
    friend void KUrlLabel_Destroy(KUrlLabel* self);
    friend void KUrlLabel_QBaseDestroy(KUrlLabel* self);
    friend bool KUrlLabel_FocusNextChild(KUrlLabel* self);
    friend bool KUrlLabel_QBaseFocusNextChild(KUrlLabel* self);
    friend bool KUrlLabel_FocusPreviousChild(KUrlLabel* self);
    friend bool KUrlLabel_QBaseFocusPreviousChild(KUrlLabel* self);
    friend QObject* KUrlLabel_Sender(const KUrlLabel* self);
    friend QObject* KUrlLabel_QBaseSender(const KUrlLabel* self);
    friend int KUrlLabel_SenderSignalIndex(const KUrlLabel* self);
    friend int KUrlLabel_QBaseSenderSignalIndex(const KUrlLabel* self);
    friend int KUrlLabel_Receivers(const KUrlLabel* self, const char* signal);
    friend int KUrlLabel_QBaseReceivers(const KUrlLabel* self, const char* signal);
    friend bool KUrlLabel_IsSignalConnected(const KUrlLabel* self, const QMetaMethod* signal);
    friend bool KUrlLabel_QBaseIsSignalConnected(const KUrlLabel* self, const QMetaMethod* signal);
    friend double KUrlLabel_GetDecodedMetricF(const KUrlLabel* self, int metricA, int metricB);
    friend double KUrlLabel_QBaseGetDecodedMetricF(const KUrlLabel* self, int metricA, int metricB);
};

#endif
