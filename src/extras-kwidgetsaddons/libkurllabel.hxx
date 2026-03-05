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
    using KUrlLabel_MetaObject_Callback = QMetaObject* (*)();
    using KUrlLabel_Metacast_Callback = void* (*)(KUrlLabel*, const char*);
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
    KUrlLabel_MetaObject_Callback kurllabel_metaobject_callback = nullptr;
    KUrlLabel_Metacast_Callback kurllabel_metacast_callback = nullptr;
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
    mutable bool kurllabel_metaobject_isbase = false;
    mutable bool kurllabel_metacast_isbase = false;
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

    // Callback setters
    inline void setKUrlLabel_MetaObject_Callback(KUrlLabel_MetaObject_Callback cb) { kurllabel_metaobject_callback = cb; }
    inline void setKUrlLabel_Metacast_Callback(KUrlLabel_Metacast_Callback cb) { kurllabel_metacast_callback = cb; }
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
    inline void setKUrlLabel_MetaObject_IsBase(bool value) const { kurllabel_metaobject_isbase = value; }
    inline void setKUrlLabel_Metacast_IsBase(bool value) const { kurllabel_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (kurllabel_metaobject_isbase) {
            kurllabel_metaobject_isbase = false;
            return KUrlLabel::metaObject();
        }
        auto metaobject_cb = kurllabel_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KUrlLabel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kurllabel_metacast_isbase) {
            kurllabel_metacast_isbase = false;
            return KUrlLabel::qt_metacast(param1);
        }
        auto metacast_cb = kurllabel_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KUrlLabel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kurllabel_metacall_isbase) {
            kurllabel_metacall_isbase = false;
            return KUrlLabel::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kurllabel_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KUrlLabel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& font) override {
        if (kurllabel_setfont_isbase) {
            kurllabel_setfont_isbase = false;
            KUrlLabel::setFont(font);
            return;
        }
        auto setfont_cb = kurllabel_setfont_callback;
        if (setfont_cb) {
            const QFont& font_ret = font;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&font_ret);

            setfont_cb(this, cbval1);
            return;
        }
        KUrlLabel::setFont(font);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (kurllabel_mousereleaseevent_isbase) {
            kurllabel_mousereleaseevent_isbase = false;
            KUrlLabel::mouseReleaseEvent(param1);
            return;
        }
        auto mousereleaseevent_cb = kurllabel_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kurllabel_enterevent_isbase) {
            kurllabel_enterevent_isbase = false;
            KUrlLabel::enterEvent(event);
            return;
        }
        auto enterevent_cb = kurllabel_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (kurllabel_leaveevent_isbase) {
            kurllabel_leaveevent_isbase = false;
            KUrlLabel::leaveEvent(param1);
            return;
        }
        auto leaveevent_cb = kurllabel_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = param1;

            leaveevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::leaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (kurllabel_event_isbase) {
            kurllabel_event_isbase = false;
            return KUrlLabel::event(param1);
        }
        auto event_cb = kurllabel_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KUrlLabel::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kurllabel_sizehint_isbase) {
            kurllabel_sizehint_isbase = false;
            return KUrlLabel::sizeHint();
        }
        auto sizehint_cb = kurllabel_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KUrlLabel::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kurllabel_minimumsizehint_isbase) {
            kurllabel_minimumsizehint_isbase = false;
            return KUrlLabel::minimumSizeHint();
        }
        auto minimumsizehint_cb = kurllabel_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KUrlLabel::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kurllabel_heightforwidth_isbase) {
            kurllabel_heightforwidth_isbase = false;
            return KUrlLabel::heightForWidth(param1);
        }
        auto heightforwidth_cb = kurllabel_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KUrlLabel::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (kurllabel_keypressevent_isbase) {
            kurllabel_keypressevent_isbase = false;
            KUrlLabel::keyPressEvent(ev);
            return;
        }
        auto keypressevent_cb = kurllabel_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = ev;

            keypressevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::keyPressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kurllabel_paintevent_isbase) {
            kurllabel_paintevent_isbase = false;
            KUrlLabel::paintEvent(param1);
            return;
        }
        auto paintevent_cb = kurllabel_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;

            paintevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kurllabel_changeevent_isbase) {
            kurllabel_changeevent_isbase = false;
            KUrlLabel::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kurllabel_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* ev) override {
        if (kurllabel_mousepressevent_isbase) {
            kurllabel_mousepressevent_isbase = false;
            KUrlLabel::mousePressEvent(ev);
            return;
        }
        auto mousepressevent_cb = kurllabel_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = ev;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::mousePressEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* ev) override {
        if (kurllabel_mousemoveevent_isbase) {
            kurllabel_mousemoveevent_isbase = false;
            KUrlLabel::mouseMoveEvent(ev);
            return;
        }
        auto mousemoveevent_cb = kurllabel_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = ev;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::mouseMoveEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* ev) override {
        if (kurllabel_contextmenuevent_isbase) {
            kurllabel_contextmenuevent_isbase = false;
            KUrlLabel::contextMenuEvent(ev);
            return;
        }
        auto contextmenuevent_cb = kurllabel_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = ev;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::contextMenuEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* ev) override {
        if (kurllabel_focusinevent_isbase) {
            kurllabel_focusinevent_isbase = false;
            KUrlLabel::focusInEvent(ev);
            return;
        }
        auto focusinevent_cb = kurllabel_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = ev;

            focusinevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::focusInEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* ev) override {
        if (kurllabel_focusoutevent_isbase) {
            kurllabel_focusoutevent_isbase = false;
            KUrlLabel::focusOutEvent(ev);
            return;
        }
        auto focusoutevent_cb = kurllabel_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = ev;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::focusOutEvent(ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kurllabel_focusnextprevchild_isbase) {
            kurllabel_focusnextprevchild_isbase = false;
            return KUrlLabel::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kurllabel_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KUrlLabel::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (kurllabel_initstyleoption_isbase) {
            kurllabel_initstyleoption_isbase = false;
            KUrlLabel::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = kurllabel_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionFrame* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        KUrlLabel::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kurllabel_devtype_isbase) {
            kurllabel_devtype_isbase = false;
            return KUrlLabel::devType();
        }
        auto devtype_cb = kurllabel_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KUrlLabel::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kurllabel_setvisible_isbase) {
            kurllabel_setvisible_isbase = false;
            KUrlLabel::setVisible(visible);
            return;
        }
        auto setvisible_cb = kurllabel_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KUrlLabel::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kurllabel_hasheightforwidth_isbase) {
            kurllabel_hasheightforwidth_isbase = false;
            return KUrlLabel::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kurllabel_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KUrlLabel::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kurllabel_paintengine_isbase) {
            kurllabel_paintengine_isbase = false;
            return KUrlLabel::paintEngine();
        }
        auto paintengine_cb = kurllabel_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KUrlLabel::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kurllabel_mousedoubleclickevent_isbase) {
            kurllabel_mousedoubleclickevent_isbase = false;
            KUrlLabel::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kurllabel_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kurllabel_wheelevent_isbase) {
            kurllabel_wheelevent_isbase = false;
            KUrlLabel::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kurllabel_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kurllabel_keyreleaseevent_isbase) {
            kurllabel_keyreleaseevent_isbase = false;
            KUrlLabel::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kurllabel_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kurllabel_moveevent_isbase) {
            kurllabel_moveevent_isbase = false;
            KUrlLabel::moveEvent(event);
            return;
        }
        auto moveevent_cb = kurllabel_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kurllabel_resizeevent_isbase) {
            kurllabel_resizeevent_isbase = false;
            KUrlLabel::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = kurllabel_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kurllabel_closeevent_isbase) {
            kurllabel_closeevent_isbase = false;
            KUrlLabel::closeEvent(event);
            return;
        }
        auto closeevent_cb = kurllabel_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kurllabel_tabletevent_isbase) {
            kurllabel_tabletevent_isbase = false;
            KUrlLabel::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kurllabel_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kurllabel_actionevent_isbase) {
            kurllabel_actionevent_isbase = false;
            KUrlLabel::actionEvent(event);
            return;
        }
        auto actionevent_cb = kurllabel_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kurllabel_dragenterevent_isbase) {
            kurllabel_dragenterevent_isbase = false;
            KUrlLabel::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kurllabel_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kurllabel_dragmoveevent_isbase) {
            kurllabel_dragmoveevent_isbase = false;
            KUrlLabel::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kurllabel_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kurllabel_dragleaveevent_isbase) {
            kurllabel_dragleaveevent_isbase = false;
            KUrlLabel::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kurllabel_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kurllabel_dropevent_isbase) {
            kurllabel_dropevent_isbase = false;
            KUrlLabel::dropEvent(event);
            return;
        }
        auto dropevent_cb = kurllabel_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kurllabel_showevent_isbase) {
            kurllabel_showevent_isbase = false;
            KUrlLabel::showEvent(event);
            return;
        }
        auto showevent_cb = kurllabel_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kurllabel_hideevent_isbase) {
            kurllabel_hideevent_isbase = false;
            KUrlLabel::hideEvent(event);
            return;
        }
        auto hideevent_cb = kurllabel_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kurllabel_nativeevent_isbase) {
            kurllabel_nativeevent_isbase = false;
            return KUrlLabel::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kurllabel_nativeevent_callback;
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
        return KUrlLabel::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kurllabel_metric_isbase) {
            kurllabel_metric_isbase = false;
            return KUrlLabel::metric(param1);
        }
        auto metric_cb = kurllabel_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KUrlLabel::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kurllabel_initpainter_isbase) {
            kurllabel_initpainter_isbase = false;
            KUrlLabel::initPainter(painter);
            return;
        }
        auto initpainter_cb = kurllabel_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KUrlLabel::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kurllabel_redirected_isbase) {
            kurllabel_redirected_isbase = false;
            return KUrlLabel::redirected(offset);
        }
        auto redirected_cb = kurllabel_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KUrlLabel::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kurllabel_sharedpainter_isbase) {
            kurllabel_sharedpainter_isbase = false;
            return KUrlLabel::sharedPainter();
        }
        auto sharedpainter_cb = kurllabel_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KUrlLabel::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kurllabel_inputmethodevent_isbase) {
            kurllabel_inputmethodevent_isbase = false;
            KUrlLabel::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kurllabel_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kurllabel_inputmethodquery_isbase) {
            kurllabel_inputmethodquery_isbase = false;
            return KUrlLabel::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kurllabel_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KUrlLabel::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kurllabel_eventfilter_isbase) {
            kurllabel_eventfilter_isbase = false;
            return KUrlLabel::eventFilter(watched, event);
        }
        auto eventfilter_cb = kurllabel_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KUrlLabel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kurllabel_timerevent_isbase) {
            kurllabel_timerevent_isbase = false;
            KUrlLabel::timerEvent(event);
            return;
        }
        auto timerevent_cb = kurllabel_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kurllabel_childevent_isbase) {
            kurllabel_childevent_isbase = false;
            KUrlLabel::childEvent(event);
            return;
        }
        auto childevent_cb = kurllabel_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kurllabel_customevent_isbase) {
            kurllabel_customevent_isbase = false;
            KUrlLabel::customEvent(event);
            return;
        }
        auto customevent_cb = kurllabel_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KUrlLabel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kurllabel_connectnotify_isbase) {
            kurllabel_connectnotify_isbase = false;
            KUrlLabel::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kurllabel_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KUrlLabel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kurllabel_disconnectnotify_isbase) {
            kurllabel_disconnectnotify_isbase = false;
            KUrlLabel::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kurllabel_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KUrlLabel::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (kurllabel_drawframe_isbase) {
            kurllabel_drawframe_isbase = false;
            KUrlLabel::drawFrame(param1);
            return;
        }
        auto drawframe_cb = kurllabel_drawframe_callback;
        if (drawframe_cb) {
            QPainter* cbval1 = param1;

            drawframe_cb(this, cbval1);
            return;
        }
        KUrlLabel::drawFrame(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kurllabel_updatemicrofocus_isbase) {
            kurllabel_updatemicrofocus_isbase = false;
            KUrlLabel::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kurllabel_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KUrlLabel::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kurllabel_create_isbase) {
            kurllabel_create_isbase = false;
            KUrlLabel::create();
            return;
        }
        auto create_cb = kurllabel_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KUrlLabel::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kurllabel_destroy_isbase) {
            kurllabel_destroy_isbase = false;
            KUrlLabel::destroy();
            return;
        }
        auto destroy_cb = kurllabel_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KUrlLabel::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kurllabel_focusnextchild_isbase) {
            kurllabel_focusnextchild_isbase = false;
            return KUrlLabel::focusNextChild();
        }
        auto focusnextchild_cb = kurllabel_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KUrlLabel::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kurllabel_focuspreviouschild_isbase) {
            kurllabel_focuspreviouschild_isbase = false;
            return KUrlLabel::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kurllabel_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KUrlLabel::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kurllabel_sender_isbase) {
            kurllabel_sender_isbase = false;
            return KUrlLabel::sender();
        }
        auto sender_cb = kurllabel_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KUrlLabel::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kurllabel_sendersignalindex_isbase) {
            kurllabel_sendersignalindex_isbase = false;
            return KUrlLabel::senderSignalIndex();
        }
        auto sendersignalindex_cb = kurllabel_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KUrlLabel::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kurllabel_receivers_isbase) {
            kurllabel_receivers_isbase = false;
            return KUrlLabel::receivers(signal);
        }
        auto receivers_cb = kurllabel_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KUrlLabel::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kurllabel_issignalconnected_isbase) {
            kurllabel_issignalconnected_isbase = false;
            return KUrlLabel::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kurllabel_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KUrlLabel::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kurllabel_getdecodedmetricf_isbase) {
            kurllabel_getdecodedmetricf_isbase = false;
            return KUrlLabel::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kurllabel_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KUrlLabel::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KUrlLabel_MouseReleaseEvent(KUrlLabel* self, QMouseEvent* param1);
    friend void KUrlLabel_SuperMouseReleaseEvent(KUrlLabel* self, QMouseEvent* param1);
    friend void KUrlLabel_EnterEvent(KUrlLabel* self, QEnterEvent* event);
    friend void KUrlLabel_SuperEnterEvent(KUrlLabel* self, QEnterEvent* event);
    friend void KUrlLabel_LeaveEvent(KUrlLabel* self, QEvent* param1);
    friend void KUrlLabel_SuperLeaveEvent(KUrlLabel* self, QEvent* param1);
    friend bool KUrlLabel_Event(KUrlLabel* self, QEvent* param1);
    friend bool KUrlLabel_SuperEvent(KUrlLabel* self, QEvent* param1);
    friend void KUrlLabel_KeyPressEvent(KUrlLabel* self, QKeyEvent* ev);
    friend void KUrlLabel_SuperKeyPressEvent(KUrlLabel* self, QKeyEvent* ev);
    friend void KUrlLabel_PaintEvent(KUrlLabel* self, QPaintEvent* param1);
    friend void KUrlLabel_SuperPaintEvent(KUrlLabel* self, QPaintEvent* param1);
    friend void KUrlLabel_ChangeEvent(KUrlLabel* self, QEvent* param1);
    friend void KUrlLabel_SuperChangeEvent(KUrlLabel* self, QEvent* param1);
    friend void KUrlLabel_MousePressEvent(KUrlLabel* self, QMouseEvent* ev);
    friend void KUrlLabel_SuperMousePressEvent(KUrlLabel* self, QMouseEvent* ev);
    friend void KUrlLabel_MouseMoveEvent(KUrlLabel* self, QMouseEvent* ev);
    friend void KUrlLabel_SuperMouseMoveEvent(KUrlLabel* self, QMouseEvent* ev);
    friend void KUrlLabel_ContextMenuEvent(KUrlLabel* self, QContextMenuEvent* ev);
    friend void KUrlLabel_SuperContextMenuEvent(KUrlLabel* self, QContextMenuEvent* ev);
    friend void KUrlLabel_FocusInEvent(KUrlLabel* self, QFocusEvent* ev);
    friend void KUrlLabel_SuperFocusInEvent(KUrlLabel* self, QFocusEvent* ev);
    friend void KUrlLabel_FocusOutEvent(KUrlLabel* self, QFocusEvent* ev);
    friend void KUrlLabel_SuperFocusOutEvent(KUrlLabel* self, QFocusEvent* ev);
    friend bool KUrlLabel_FocusNextPrevChild(KUrlLabel* self, bool next);
    friend bool KUrlLabel_SuperFocusNextPrevChild(KUrlLabel* self, bool next);
    friend void KUrlLabel_InitStyleOption(const KUrlLabel* self, QStyleOptionFrame* option);
    friend void KUrlLabel_SuperInitStyleOption(const KUrlLabel* self, QStyleOptionFrame* option);
    friend void KUrlLabel_MouseDoubleClickEvent(KUrlLabel* self, QMouseEvent* event);
    friend void KUrlLabel_SuperMouseDoubleClickEvent(KUrlLabel* self, QMouseEvent* event);
    friend void KUrlLabel_WheelEvent(KUrlLabel* self, QWheelEvent* event);
    friend void KUrlLabel_SuperWheelEvent(KUrlLabel* self, QWheelEvent* event);
    friend void KUrlLabel_KeyReleaseEvent(KUrlLabel* self, QKeyEvent* event);
    friend void KUrlLabel_SuperKeyReleaseEvent(KUrlLabel* self, QKeyEvent* event);
    friend void KUrlLabel_MoveEvent(KUrlLabel* self, QMoveEvent* event);
    friend void KUrlLabel_SuperMoveEvent(KUrlLabel* self, QMoveEvent* event);
    friend void KUrlLabel_ResizeEvent(KUrlLabel* self, QResizeEvent* event);
    friend void KUrlLabel_SuperResizeEvent(KUrlLabel* self, QResizeEvent* event);
    friend void KUrlLabel_CloseEvent(KUrlLabel* self, QCloseEvent* event);
    friend void KUrlLabel_SuperCloseEvent(KUrlLabel* self, QCloseEvent* event);
    friend void KUrlLabel_TabletEvent(KUrlLabel* self, QTabletEvent* event);
    friend void KUrlLabel_SuperTabletEvent(KUrlLabel* self, QTabletEvent* event);
    friend void KUrlLabel_ActionEvent(KUrlLabel* self, QActionEvent* event);
    friend void KUrlLabel_SuperActionEvent(KUrlLabel* self, QActionEvent* event);
    friend void KUrlLabel_DragEnterEvent(KUrlLabel* self, QDragEnterEvent* event);
    friend void KUrlLabel_SuperDragEnterEvent(KUrlLabel* self, QDragEnterEvent* event);
    friend void KUrlLabel_DragMoveEvent(KUrlLabel* self, QDragMoveEvent* event);
    friend void KUrlLabel_SuperDragMoveEvent(KUrlLabel* self, QDragMoveEvent* event);
    friend void KUrlLabel_DragLeaveEvent(KUrlLabel* self, QDragLeaveEvent* event);
    friend void KUrlLabel_SuperDragLeaveEvent(KUrlLabel* self, QDragLeaveEvent* event);
    friend void KUrlLabel_DropEvent(KUrlLabel* self, QDropEvent* event);
    friend void KUrlLabel_SuperDropEvent(KUrlLabel* self, QDropEvent* event);
    friend void KUrlLabel_ShowEvent(KUrlLabel* self, QShowEvent* event);
    friend void KUrlLabel_SuperShowEvent(KUrlLabel* self, QShowEvent* event);
    friend void KUrlLabel_HideEvent(KUrlLabel* self, QHideEvent* event);
    friend void KUrlLabel_SuperHideEvent(KUrlLabel* self, QHideEvent* event);
    friend bool KUrlLabel_NativeEvent(KUrlLabel* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KUrlLabel_SuperNativeEvent(KUrlLabel* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KUrlLabel_Metric(const KUrlLabel* self, int param1);
    friend int KUrlLabel_SuperMetric(const KUrlLabel* self, int param1);
    friend void KUrlLabel_InitPainter(const KUrlLabel* self, QPainter* painter);
    friend void KUrlLabel_SuperInitPainter(const KUrlLabel* self, QPainter* painter);
    friend QPaintDevice* KUrlLabel_Redirected(const KUrlLabel* self, QPoint* offset);
    friend QPaintDevice* KUrlLabel_SuperRedirected(const KUrlLabel* self, QPoint* offset);
    friend QPainter* KUrlLabel_SharedPainter(const KUrlLabel* self);
    friend QPainter* KUrlLabel_SuperSharedPainter(const KUrlLabel* self);
    friend void KUrlLabel_InputMethodEvent(KUrlLabel* self, QInputMethodEvent* param1);
    friend void KUrlLabel_SuperInputMethodEvent(KUrlLabel* self, QInputMethodEvent* param1);
    friend void KUrlLabel_TimerEvent(KUrlLabel* self, QTimerEvent* event);
    friend void KUrlLabel_SuperTimerEvent(KUrlLabel* self, QTimerEvent* event);
    friend void KUrlLabel_ChildEvent(KUrlLabel* self, QChildEvent* event);
    friend void KUrlLabel_SuperChildEvent(KUrlLabel* self, QChildEvent* event);
    friend void KUrlLabel_CustomEvent(KUrlLabel* self, QEvent* event);
    friend void KUrlLabel_SuperCustomEvent(KUrlLabel* self, QEvent* event);
    friend void KUrlLabel_ConnectNotify(KUrlLabel* self, const QMetaMethod* signal);
    friend void KUrlLabel_SuperConnectNotify(KUrlLabel* self, const QMetaMethod* signal);
    friend void KUrlLabel_DisconnectNotify(KUrlLabel* self, const QMetaMethod* signal);
    friend void KUrlLabel_SuperDisconnectNotify(KUrlLabel* self, const QMetaMethod* signal);
    friend void KUrlLabel_DrawFrame(KUrlLabel* self, QPainter* param1);
    friend void KUrlLabel_SuperDrawFrame(KUrlLabel* self, QPainter* param1);
    friend void KUrlLabel_UpdateMicroFocus(KUrlLabel* self);
    friend void KUrlLabel_SuperUpdateMicroFocus(KUrlLabel* self);
    friend void KUrlLabel_Create(KUrlLabel* self);
    friend void KUrlLabel_SuperCreate(KUrlLabel* self);
    friend void KUrlLabel_Destroy(KUrlLabel* self);
    friend void KUrlLabel_SuperDestroy(KUrlLabel* self);
    friend bool KUrlLabel_FocusNextChild(KUrlLabel* self);
    friend bool KUrlLabel_SuperFocusNextChild(KUrlLabel* self);
    friend bool KUrlLabel_FocusPreviousChild(KUrlLabel* self);
    friend bool KUrlLabel_SuperFocusPreviousChild(KUrlLabel* self);
    friend QObject* KUrlLabel_Sender(const KUrlLabel* self);
    friend QObject* KUrlLabel_SuperSender(const KUrlLabel* self);
    friend int KUrlLabel_SenderSignalIndex(const KUrlLabel* self);
    friend int KUrlLabel_SuperSenderSignalIndex(const KUrlLabel* self);
    friend int KUrlLabel_Receivers(const KUrlLabel* self, const char* signal);
    friend int KUrlLabel_SuperReceivers(const KUrlLabel* self, const char* signal);
    friend bool KUrlLabel_IsSignalConnected(const KUrlLabel* self, const QMetaMethod* signal);
    friend bool KUrlLabel_SuperIsSignalConnected(const KUrlLabel* self, const QMetaMethod* signal);
    friend double KUrlLabel_GetDecodedMetricF(const KUrlLabel* self, int metricA, int metricB);
    friend double KUrlLabel_SuperGetDecodedMetricF(const KUrlLabel* self, int metricA, int metricB);
};

#endif
