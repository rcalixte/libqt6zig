#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKSQUEEZEDTEXTLABEL_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKSQUEEZEDTEXTLABEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSqueezedTextLabel so that we can call protected methods
class VirtualKSqueezedTextLabel final : public KSqueezedTextLabel {

  public:
    // Virtual class boolean flag
    bool isVirtualKSqueezedTextLabel = true;

    // Virtual class public types (including callbacks)
    using KSqueezedTextLabel_Metacall_Callback = int (*)(KSqueezedTextLabel*, int, int, void**);
    using KSqueezedTextLabel_MinimumSizeHint_Callback = QSize* (*)();
    using KSqueezedTextLabel_SizeHint_Callback = QSize* (*)();
    using KSqueezedTextLabel_SetAlignment_Callback = void (*)(KSqueezedTextLabel*, int);
    using KSqueezedTextLabel_MouseReleaseEvent_Callback = void (*)(KSqueezedTextLabel*, QMouseEvent*);
    using KSqueezedTextLabel_ResizeEvent_Callback = void (*)(KSqueezedTextLabel*, QResizeEvent*);
    using KSqueezedTextLabel_ContextMenuEvent_Callback = void (*)(KSqueezedTextLabel*, QContextMenuEvent*);
    using KSqueezedTextLabel_HeightForWidth_Callback = int (*)(const KSqueezedTextLabel*, int);
    using KSqueezedTextLabel_Event_Callback = bool (*)(KSqueezedTextLabel*, QEvent*);
    using KSqueezedTextLabel_KeyPressEvent_Callback = void (*)(KSqueezedTextLabel*, QKeyEvent*);
    using KSqueezedTextLabel_PaintEvent_Callback = void (*)(KSqueezedTextLabel*, QPaintEvent*);
    using KSqueezedTextLabel_ChangeEvent_Callback = void (*)(KSqueezedTextLabel*, QEvent*);
    using KSqueezedTextLabel_MousePressEvent_Callback = void (*)(KSqueezedTextLabel*, QMouseEvent*);
    using KSqueezedTextLabel_MouseMoveEvent_Callback = void (*)(KSqueezedTextLabel*, QMouseEvent*);
    using KSqueezedTextLabel_FocusInEvent_Callback = void (*)(KSqueezedTextLabel*, QFocusEvent*);
    using KSqueezedTextLabel_FocusOutEvent_Callback = void (*)(KSqueezedTextLabel*, QFocusEvent*);
    using KSqueezedTextLabel_FocusNextPrevChild_Callback = bool (*)(KSqueezedTextLabel*, bool);
    using KSqueezedTextLabel_InitStyleOption_Callback = void (*)(const KSqueezedTextLabel*, QStyleOptionFrame*);
    using KSqueezedTextLabel_DevType_Callback = int (*)();
    using KSqueezedTextLabel_SetVisible_Callback = void (*)(KSqueezedTextLabel*, bool);
    using KSqueezedTextLabel_HasHeightForWidth_Callback = bool (*)();
    using KSqueezedTextLabel_PaintEngine_Callback = QPaintEngine* (*)();
    using KSqueezedTextLabel_MouseDoubleClickEvent_Callback = void (*)(KSqueezedTextLabel*, QMouseEvent*);
    using KSqueezedTextLabel_WheelEvent_Callback = void (*)(KSqueezedTextLabel*, QWheelEvent*);
    using KSqueezedTextLabel_KeyReleaseEvent_Callback = void (*)(KSqueezedTextLabel*, QKeyEvent*);
    using KSqueezedTextLabel_EnterEvent_Callback = void (*)(KSqueezedTextLabel*, QEnterEvent*);
    using KSqueezedTextLabel_LeaveEvent_Callback = void (*)(KSqueezedTextLabel*, QEvent*);
    using KSqueezedTextLabel_MoveEvent_Callback = void (*)(KSqueezedTextLabel*, QMoveEvent*);
    using KSqueezedTextLabel_CloseEvent_Callback = void (*)(KSqueezedTextLabel*, QCloseEvent*);
    using KSqueezedTextLabel_TabletEvent_Callback = void (*)(KSqueezedTextLabel*, QTabletEvent*);
    using KSqueezedTextLabel_ActionEvent_Callback = void (*)(KSqueezedTextLabel*, QActionEvent*);
    using KSqueezedTextLabel_DragEnterEvent_Callback = void (*)(KSqueezedTextLabel*, QDragEnterEvent*);
    using KSqueezedTextLabel_DragMoveEvent_Callback = void (*)(KSqueezedTextLabel*, QDragMoveEvent*);
    using KSqueezedTextLabel_DragLeaveEvent_Callback = void (*)(KSqueezedTextLabel*, QDragLeaveEvent*);
    using KSqueezedTextLabel_DropEvent_Callback = void (*)(KSqueezedTextLabel*, QDropEvent*);
    using KSqueezedTextLabel_ShowEvent_Callback = void (*)(KSqueezedTextLabel*, QShowEvent*);
    using KSqueezedTextLabel_HideEvent_Callback = void (*)(KSqueezedTextLabel*, QHideEvent*);
    using KSqueezedTextLabel_NativeEvent_Callback = bool (*)(KSqueezedTextLabel*, libqt_string, void*, intptr_t*);
    using KSqueezedTextLabel_Metric_Callback = int (*)(const KSqueezedTextLabel*, int);
    using KSqueezedTextLabel_InitPainter_Callback = void (*)(const KSqueezedTextLabel*, QPainter*);
    using KSqueezedTextLabel_Redirected_Callback = QPaintDevice* (*)(const KSqueezedTextLabel*, QPoint*);
    using KSqueezedTextLabel_SharedPainter_Callback = QPainter* (*)();
    using KSqueezedTextLabel_InputMethodEvent_Callback = void (*)(KSqueezedTextLabel*, QInputMethodEvent*);
    using KSqueezedTextLabel_InputMethodQuery_Callback = QVariant* (*)(const KSqueezedTextLabel*, int);
    using KSqueezedTextLabel_EventFilter_Callback = bool (*)(KSqueezedTextLabel*, QObject*, QEvent*);
    using KSqueezedTextLabel_TimerEvent_Callback = void (*)(KSqueezedTextLabel*, QTimerEvent*);
    using KSqueezedTextLabel_ChildEvent_Callback = void (*)(KSqueezedTextLabel*, QChildEvent*);
    using KSqueezedTextLabel_CustomEvent_Callback = void (*)(KSqueezedTextLabel*, QEvent*);
    using KSqueezedTextLabel_ConnectNotify_Callback = void (*)(KSqueezedTextLabel*, QMetaMethod*);
    using KSqueezedTextLabel_DisconnectNotify_Callback = void (*)(KSqueezedTextLabel*, QMetaMethod*);
    using KSqueezedTextLabel_SqueezeTextToLabel_Callback = void (*)();
    using KSqueezedTextLabel_DrawFrame_Callback = void (*)(KSqueezedTextLabel*, QPainter*);
    using KSqueezedTextLabel_UpdateMicroFocus_Callback = void (*)();
    using KSqueezedTextLabel_Create_Callback = void (*)();
    using KSqueezedTextLabel_Destroy_Callback = void (*)();
    using KSqueezedTextLabel_FocusNextChild_Callback = bool (*)();
    using KSqueezedTextLabel_FocusPreviousChild_Callback = bool (*)();
    using KSqueezedTextLabel_Sender_Callback = QObject* (*)();
    using KSqueezedTextLabel_SenderSignalIndex_Callback = int (*)();
    using KSqueezedTextLabel_Receivers_Callback = int (*)(const KSqueezedTextLabel*, const char*);
    using KSqueezedTextLabel_IsSignalConnected_Callback = bool (*)(const KSqueezedTextLabel*, QMetaMethod*);
    using KSqueezedTextLabel_GetDecodedMetricF_Callback = double (*)(const KSqueezedTextLabel*, int, int);

  protected:
    // Instance callback storage
    KSqueezedTextLabel_Metacall_Callback ksqueezedtextlabel_metacall_callback = nullptr;
    KSqueezedTextLabel_MinimumSizeHint_Callback ksqueezedtextlabel_minimumsizehint_callback = nullptr;
    KSqueezedTextLabel_SizeHint_Callback ksqueezedtextlabel_sizehint_callback = nullptr;
    KSqueezedTextLabel_SetAlignment_Callback ksqueezedtextlabel_setalignment_callback = nullptr;
    KSqueezedTextLabel_MouseReleaseEvent_Callback ksqueezedtextlabel_mousereleaseevent_callback = nullptr;
    KSqueezedTextLabel_ResizeEvent_Callback ksqueezedtextlabel_resizeevent_callback = nullptr;
    KSqueezedTextLabel_ContextMenuEvent_Callback ksqueezedtextlabel_contextmenuevent_callback = nullptr;
    KSqueezedTextLabel_HeightForWidth_Callback ksqueezedtextlabel_heightforwidth_callback = nullptr;
    KSqueezedTextLabel_Event_Callback ksqueezedtextlabel_event_callback = nullptr;
    KSqueezedTextLabel_KeyPressEvent_Callback ksqueezedtextlabel_keypressevent_callback = nullptr;
    KSqueezedTextLabel_PaintEvent_Callback ksqueezedtextlabel_paintevent_callback = nullptr;
    KSqueezedTextLabel_ChangeEvent_Callback ksqueezedtextlabel_changeevent_callback = nullptr;
    KSqueezedTextLabel_MousePressEvent_Callback ksqueezedtextlabel_mousepressevent_callback = nullptr;
    KSqueezedTextLabel_MouseMoveEvent_Callback ksqueezedtextlabel_mousemoveevent_callback = nullptr;
    KSqueezedTextLabel_FocusInEvent_Callback ksqueezedtextlabel_focusinevent_callback = nullptr;
    KSqueezedTextLabel_FocusOutEvent_Callback ksqueezedtextlabel_focusoutevent_callback = nullptr;
    KSqueezedTextLabel_FocusNextPrevChild_Callback ksqueezedtextlabel_focusnextprevchild_callback = nullptr;
    KSqueezedTextLabel_InitStyleOption_Callback ksqueezedtextlabel_initstyleoption_callback = nullptr;
    KSqueezedTextLabel_DevType_Callback ksqueezedtextlabel_devtype_callback = nullptr;
    KSqueezedTextLabel_SetVisible_Callback ksqueezedtextlabel_setvisible_callback = nullptr;
    KSqueezedTextLabel_HasHeightForWidth_Callback ksqueezedtextlabel_hasheightforwidth_callback = nullptr;
    KSqueezedTextLabel_PaintEngine_Callback ksqueezedtextlabel_paintengine_callback = nullptr;
    KSqueezedTextLabel_MouseDoubleClickEvent_Callback ksqueezedtextlabel_mousedoubleclickevent_callback = nullptr;
    KSqueezedTextLabel_WheelEvent_Callback ksqueezedtextlabel_wheelevent_callback = nullptr;
    KSqueezedTextLabel_KeyReleaseEvent_Callback ksqueezedtextlabel_keyreleaseevent_callback = nullptr;
    KSqueezedTextLabel_EnterEvent_Callback ksqueezedtextlabel_enterevent_callback = nullptr;
    KSqueezedTextLabel_LeaveEvent_Callback ksqueezedtextlabel_leaveevent_callback = nullptr;
    KSqueezedTextLabel_MoveEvent_Callback ksqueezedtextlabel_moveevent_callback = nullptr;
    KSqueezedTextLabel_CloseEvent_Callback ksqueezedtextlabel_closeevent_callback = nullptr;
    KSqueezedTextLabel_TabletEvent_Callback ksqueezedtextlabel_tabletevent_callback = nullptr;
    KSqueezedTextLabel_ActionEvent_Callback ksqueezedtextlabel_actionevent_callback = nullptr;
    KSqueezedTextLabel_DragEnterEvent_Callback ksqueezedtextlabel_dragenterevent_callback = nullptr;
    KSqueezedTextLabel_DragMoveEvent_Callback ksqueezedtextlabel_dragmoveevent_callback = nullptr;
    KSqueezedTextLabel_DragLeaveEvent_Callback ksqueezedtextlabel_dragleaveevent_callback = nullptr;
    KSqueezedTextLabel_DropEvent_Callback ksqueezedtextlabel_dropevent_callback = nullptr;
    KSqueezedTextLabel_ShowEvent_Callback ksqueezedtextlabel_showevent_callback = nullptr;
    KSqueezedTextLabel_HideEvent_Callback ksqueezedtextlabel_hideevent_callback = nullptr;
    KSqueezedTextLabel_NativeEvent_Callback ksqueezedtextlabel_nativeevent_callback = nullptr;
    KSqueezedTextLabel_Metric_Callback ksqueezedtextlabel_metric_callback = nullptr;
    KSqueezedTextLabel_InitPainter_Callback ksqueezedtextlabel_initpainter_callback = nullptr;
    KSqueezedTextLabel_Redirected_Callback ksqueezedtextlabel_redirected_callback = nullptr;
    KSqueezedTextLabel_SharedPainter_Callback ksqueezedtextlabel_sharedpainter_callback = nullptr;
    KSqueezedTextLabel_InputMethodEvent_Callback ksqueezedtextlabel_inputmethodevent_callback = nullptr;
    KSqueezedTextLabel_InputMethodQuery_Callback ksqueezedtextlabel_inputmethodquery_callback = nullptr;
    KSqueezedTextLabel_EventFilter_Callback ksqueezedtextlabel_eventfilter_callback = nullptr;
    KSqueezedTextLabel_TimerEvent_Callback ksqueezedtextlabel_timerevent_callback = nullptr;
    KSqueezedTextLabel_ChildEvent_Callback ksqueezedtextlabel_childevent_callback = nullptr;
    KSqueezedTextLabel_CustomEvent_Callback ksqueezedtextlabel_customevent_callback = nullptr;
    KSqueezedTextLabel_ConnectNotify_Callback ksqueezedtextlabel_connectnotify_callback = nullptr;
    KSqueezedTextLabel_DisconnectNotify_Callback ksqueezedtextlabel_disconnectnotify_callback = nullptr;
    KSqueezedTextLabel_SqueezeTextToLabel_Callback ksqueezedtextlabel_squeezetexttolabel_callback = nullptr;
    KSqueezedTextLabel_DrawFrame_Callback ksqueezedtextlabel_drawframe_callback = nullptr;
    KSqueezedTextLabel_UpdateMicroFocus_Callback ksqueezedtextlabel_updatemicrofocus_callback = nullptr;
    KSqueezedTextLabel_Create_Callback ksqueezedtextlabel_create_callback = nullptr;
    KSqueezedTextLabel_Destroy_Callback ksqueezedtextlabel_destroy_callback = nullptr;
    KSqueezedTextLabel_FocusNextChild_Callback ksqueezedtextlabel_focusnextchild_callback = nullptr;
    KSqueezedTextLabel_FocusPreviousChild_Callback ksqueezedtextlabel_focuspreviouschild_callback = nullptr;
    KSqueezedTextLabel_Sender_Callback ksqueezedtextlabel_sender_callback = nullptr;
    KSqueezedTextLabel_SenderSignalIndex_Callback ksqueezedtextlabel_sendersignalindex_callback = nullptr;
    KSqueezedTextLabel_Receivers_Callback ksqueezedtextlabel_receivers_callback = nullptr;
    KSqueezedTextLabel_IsSignalConnected_Callback ksqueezedtextlabel_issignalconnected_callback = nullptr;
    KSqueezedTextLabel_GetDecodedMetricF_Callback ksqueezedtextlabel_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool ksqueezedtextlabel_metacall_isbase = false;
    mutable bool ksqueezedtextlabel_minimumsizehint_isbase = false;
    mutable bool ksqueezedtextlabel_sizehint_isbase = false;
    mutable bool ksqueezedtextlabel_setalignment_isbase = false;
    mutable bool ksqueezedtextlabel_mousereleaseevent_isbase = false;
    mutable bool ksqueezedtextlabel_resizeevent_isbase = false;
    mutable bool ksqueezedtextlabel_contextmenuevent_isbase = false;
    mutable bool ksqueezedtextlabel_heightforwidth_isbase = false;
    mutable bool ksqueezedtextlabel_event_isbase = false;
    mutable bool ksqueezedtextlabel_keypressevent_isbase = false;
    mutable bool ksqueezedtextlabel_paintevent_isbase = false;
    mutable bool ksqueezedtextlabel_changeevent_isbase = false;
    mutable bool ksqueezedtextlabel_mousepressevent_isbase = false;
    mutable bool ksqueezedtextlabel_mousemoveevent_isbase = false;
    mutable bool ksqueezedtextlabel_focusinevent_isbase = false;
    mutable bool ksqueezedtextlabel_focusoutevent_isbase = false;
    mutable bool ksqueezedtextlabel_focusnextprevchild_isbase = false;
    mutable bool ksqueezedtextlabel_initstyleoption_isbase = false;
    mutable bool ksqueezedtextlabel_devtype_isbase = false;
    mutable bool ksqueezedtextlabel_setvisible_isbase = false;
    mutable bool ksqueezedtextlabel_hasheightforwidth_isbase = false;
    mutable bool ksqueezedtextlabel_paintengine_isbase = false;
    mutable bool ksqueezedtextlabel_mousedoubleclickevent_isbase = false;
    mutable bool ksqueezedtextlabel_wheelevent_isbase = false;
    mutable bool ksqueezedtextlabel_keyreleaseevent_isbase = false;
    mutable bool ksqueezedtextlabel_enterevent_isbase = false;
    mutable bool ksqueezedtextlabel_leaveevent_isbase = false;
    mutable bool ksqueezedtextlabel_moveevent_isbase = false;
    mutable bool ksqueezedtextlabel_closeevent_isbase = false;
    mutable bool ksqueezedtextlabel_tabletevent_isbase = false;
    mutable bool ksqueezedtextlabel_actionevent_isbase = false;
    mutable bool ksqueezedtextlabel_dragenterevent_isbase = false;
    mutable bool ksqueezedtextlabel_dragmoveevent_isbase = false;
    mutable bool ksqueezedtextlabel_dragleaveevent_isbase = false;
    mutable bool ksqueezedtextlabel_dropevent_isbase = false;
    mutable bool ksqueezedtextlabel_showevent_isbase = false;
    mutable bool ksqueezedtextlabel_hideevent_isbase = false;
    mutable bool ksqueezedtextlabel_nativeevent_isbase = false;
    mutable bool ksqueezedtextlabel_metric_isbase = false;
    mutable bool ksqueezedtextlabel_initpainter_isbase = false;
    mutable bool ksqueezedtextlabel_redirected_isbase = false;
    mutable bool ksqueezedtextlabel_sharedpainter_isbase = false;
    mutable bool ksqueezedtextlabel_inputmethodevent_isbase = false;
    mutable bool ksqueezedtextlabel_inputmethodquery_isbase = false;
    mutable bool ksqueezedtextlabel_eventfilter_isbase = false;
    mutable bool ksqueezedtextlabel_timerevent_isbase = false;
    mutable bool ksqueezedtextlabel_childevent_isbase = false;
    mutable bool ksqueezedtextlabel_customevent_isbase = false;
    mutable bool ksqueezedtextlabel_connectnotify_isbase = false;
    mutable bool ksqueezedtextlabel_disconnectnotify_isbase = false;
    mutable bool ksqueezedtextlabel_squeezetexttolabel_isbase = false;
    mutable bool ksqueezedtextlabel_drawframe_isbase = false;
    mutable bool ksqueezedtextlabel_updatemicrofocus_isbase = false;
    mutable bool ksqueezedtextlabel_create_isbase = false;
    mutable bool ksqueezedtextlabel_destroy_isbase = false;
    mutable bool ksqueezedtextlabel_focusnextchild_isbase = false;
    mutable bool ksqueezedtextlabel_focuspreviouschild_isbase = false;
    mutable bool ksqueezedtextlabel_sender_isbase = false;
    mutable bool ksqueezedtextlabel_sendersignalindex_isbase = false;
    mutable bool ksqueezedtextlabel_receivers_isbase = false;
    mutable bool ksqueezedtextlabel_issignalconnected_isbase = false;
    mutable bool ksqueezedtextlabel_getdecodedmetricf_isbase = false;

  public:
    VirtualKSqueezedTextLabel(QWidget* parent) : KSqueezedTextLabel(parent) {};
    VirtualKSqueezedTextLabel() : KSqueezedTextLabel() {};
    VirtualKSqueezedTextLabel(const QString& text) : KSqueezedTextLabel(text) {};
    VirtualKSqueezedTextLabel(const QString& text, QWidget* parent) : KSqueezedTextLabel(text, parent) {};

    ~VirtualKSqueezedTextLabel() {
        ksqueezedtextlabel_metacall_callback = nullptr;
        ksqueezedtextlabel_minimumsizehint_callback = nullptr;
        ksqueezedtextlabel_sizehint_callback = nullptr;
        ksqueezedtextlabel_setalignment_callback = nullptr;
        ksqueezedtextlabel_mousereleaseevent_callback = nullptr;
        ksqueezedtextlabel_resizeevent_callback = nullptr;
        ksqueezedtextlabel_contextmenuevent_callback = nullptr;
        ksqueezedtextlabel_heightforwidth_callback = nullptr;
        ksqueezedtextlabel_event_callback = nullptr;
        ksqueezedtextlabel_keypressevent_callback = nullptr;
        ksqueezedtextlabel_paintevent_callback = nullptr;
        ksqueezedtextlabel_changeevent_callback = nullptr;
        ksqueezedtextlabel_mousepressevent_callback = nullptr;
        ksqueezedtextlabel_mousemoveevent_callback = nullptr;
        ksqueezedtextlabel_focusinevent_callback = nullptr;
        ksqueezedtextlabel_focusoutevent_callback = nullptr;
        ksqueezedtextlabel_focusnextprevchild_callback = nullptr;
        ksqueezedtextlabel_initstyleoption_callback = nullptr;
        ksqueezedtextlabel_devtype_callback = nullptr;
        ksqueezedtextlabel_setvisible_callback = nullptr;
        ksqueezedtextlabel_hasheightforwidth_callback = nullptr;
        ksqueezedtextlabel_paintengine_callback = nullptr;
        ksqueezedtextlabel_mousedoubleclickevent_callback = nullptr;
        ksqueezedtextlabel_wheelevent_callback = nullptr;
        ksqueezedtextlabel_keyreleaseevent_callback = nullptr;
        ksqueezedtextlabel_enterevent_callback = nullptr;
        ksqueezedtextlabel_leaveevent_callback = nullptr;
        ksqueezedtextlabel_moveevent_callback = nullptr;
        ksqueezedtextlabel_closeevent_callback = nullptr;
        ksqueezedtextlabel_tabletevent_callback = nullptr;
        ksqueezedtextlabel_actionevent_callback = nullptr;
        ksqueezedtextlabel_dragenterevent_callback = nullptr;
        ksqueezedtextlabel_dragmoveevent_callback = nullptr;
        ksqueezedtextlabel_dragleaveevent_callback = nullptr;
        ksqueezedtextlabel_dropevent_callback = nullptr;
        ksqueezedtextlabel_showevent_callback = nullptr;
        ksqueezedtextlabel_hideevent_callback = nullptr;
        ksqueezedtextlabel_nativeevent_callback = nullptr;
        ksqueezedtextlabel_metric_callback = nullptr;
        ksqueezedtextlabel_initpainter_callback = nullptr;
        ksqueezedtextlabel_redirected_callback = nullptr;
        ksqueezedtextlabel_sharedpainter_callback = nullptr;
        ksqueezedtextlabel_inputmethodevent_callback = nullptr;
        ksqueezedtextlabel_inputmethodquery_callback = nullptr;
        ksqueezedtextlabel_eventfilter_callback = nullptr;
        ksqueezedtextlabel_timerevent_callback = nullptr;
        ksqueezedtextlabel_childevent_callback = nullptr;
        ksqueezedtextlabel_customevent_callback = nullptr;
        ksqueezedtextlabel_connectnotify_callback = nullptr;
        ksqueezedtextlabel_disconnectnotify_callback = nullptr;
        ksqueezedtextlabel_squeezetexttolabel_callback = nullptr;
        ksqueezedtextlabel_drawframe_callback = nullptr;
        ksqueezedtextlabel_updatemicrofocus_callback = nullptr;
        ksqueezedtextlabel_create_callback = nullptr;
        ksqueezedtextlabel_destroy_callback = nullptr;
        ksqueezedtextlabel_focusnextchild_callback = nullptr;
        ksqueezedtextlabel_focuspreviouschild_callback = nullptr;
        ksqueezedtextlabel_sender_callback = nullptr;
        ksqueezedtextlabel_sendersignalindex_callback = nullptr;
        ksqueezedtextlabel_receivers_callback = nullptr;
        ksqueezedtextlabel_issignalconnected_callback = nullptr;
        ksqueezedtextlabel_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKSqueezedTextLabel_Metacall_Callback(KSqueezedTextLabel_Metacall_Callback cb) { ksqueezedtextlabel_metacall_callback = cb; }
    inline void setKSqueezedTextLabel_MinimumSizeHint_Callback(KSqueezedTextLabel_MinimumSizeHint_Callback cb) { ksqueezedtextlabel_minimumsizehint_callback = cb; }
    inline void setKSqueezedTextLabel_SizeHint_Callback(KSqueezedTextLabel_SizeHint_Callback cb) { ksqueezedtextlabel_sizehint_callback = cb; }
    inline void setKSqueezedTextLabel_SetAlignment_Callback(KSqueezedTextLabel_SetAlignment_Callback cb) { ksqueezedtextlabel_setalignment_callback = cb; }
    inline void setKSqueezedTextLabel_MouseReleaseEvent_Callback(KSqueezedTextLabel_MouseReleaseEvent_Callback cb) { ksqueezedtextlabel_mousereleaseevent_callback = cb; }
    inline void setKSqueezedTextLabel_ResizeEvent_Callback(KSqueezedTextLabel_ResizeEvent_Callback cb) { ksqueezedtextlabel_resizeevent_callback = cb; }
    inline void setKSqueezedTextLabel_ContextMenuEvent_Callback(KSqueezedTextLabel_ContextMenuEvent_Callback cb) { ksqueezedtextlabel_contextmenuevent_callback = cb; }
    inline void setKSqueezedTextLabel_HeightForWidth_Callback(KSqueezedTextLabel_HeightForWidth_Callback cb) { ksqueezedtextlabel_heightforwidth_callback = cb; }
    inline void setKSqueezedTextLabel_Event_Callback(KSqueezedTextLabel_Event_Callback cb) { ksqueezedtextlabel_event_callback = cb; }
    inline void setKSqueezedTextLabel_KeyPressEvent_Callback(KSqueezedTextLabel_KeyPressEvent_Callback cb) { ksqueezedtextlabel_keypressevent_callback = cb; }
    inline void setKSqueezedTextLabel_PaintEvent_Callback(KSqueezedTextLabel_PaintEvent_Callback cb) { ksqueezedtextlabel_paintevent_callback = cb; }
    inline void setKSqueezedTextLabel_ChangeEvent_Callback(KSqueezedTextLabel_ChangeEvent_Callback cb) { ksqueezedtextlabel_changeevent_callback = cb; }
    inline void setKSqueezedTextLabel_MousePressEvent_Callback(KSqueezedTextLabel_MousePressEvent_Callback cb) { ksqueezedtextlabel_mousepressevent_callback = cb; }
    inline void setKSqueezedTextLabel_MouseMoveEvent_Callback(KSqueezedTextLabel_MouseMoveEvent_Callback cb) { ksqueezedtextlabel_mousemoveevent_callback = cb; }
    inline void setKSqueezedTextLabel_FocusInEvent_Callback(KSqueezedTextLabel_FocusInEvent_Callback cb) { ksqueezedtextlabel_focusinevent_callback = cb; }
    inline void setKSqueezedTextLabel_FocusOutEvent_Callback(KSqueezedTextLabel_FocusOutEvent_Callback cb) { ksqueezedtextlabel_focusoutevent_callback = cb; }
    inline void setKSqueezedTextLabel_FocusNextPrevChild_Callback(KSqueezedTextLabel_FocusNextPrevChild_Callback cb) { ksqueezedtextlabel_focusnextprevchild_callback = cb; }
    inline void setKSqueezedTextLabel_InitStyleOption_Callback(KSqueezedTextLabel_InitStyleOption_Callback cb) { ksqueezedtextlabel_initstyleoption_callback = cb; }
    inline void setKSqueezedTextLabel_DevType_Callback(KSqueezedTextLabel_DevType_Callback cb) { ksqueezedtextlabel_devtype_callback = cb; }
    inline void setKSqueezedTextLabel_SetVisible_Callback(KSqueezedTextLabel_SetVisible_Callback cb) { ksqueezedtextlabel_setvisible_callback = cb; }
    inline void setKSqueezedTextLabel_HasHeightForWidth_Callback(KSqueezedTextLabel_HasHeightForWidth_Callback cb) { ksqueezedtextlabel_hasheightforwidth_callback = cb; }
    inline void setKSqueezedTextLabel_PaintEngine_Callback(KSqueezedTextLabel_PaintEngine_Callback cb) { ksqueezedtextlabel_paintengine_callback = cb; }
    inline void setKSqueezedTextLabel_MouseDoubleClickEvent_Callback(KSqueezedTextLabel_MouseDoubleClickEvent_Callback cb) { ksqueezedtextlabel_mousedoubleclickevent_callback = cb; }
    inline void setKSqueezedTextLabel_WheelEvent_Callback(KSqueezedTextLabel_WheelEvent_Callback cb) { ksqueezedtextlabel_wheelevent_callback = cb; }
    inline void setKSqueezedTextLabel_KeyReleaseEvent_Callback(KSqueezedTextLabel_KeyReleaseEvent_Callback cb) { ksqueezedtextlabel_keyreleaseevent_callback = cb; }
    inline void setKSqueezedTextLabel_EnterEvent_Callback(KSqueezedTextLabel_EnterEvent_Callback cb) { ksqueezedtextlabel_enterevent_callback = cb; }
    inline void setKSqueezedTextLabel_LeaveEvent_Callback(KSqueezedTextLabel_LeaveEvent_Callback cb) { ksqueezedtextlabel_leaveevent_callback = cb; }
    inline void setKSqueezedTextLabel_MoveEvent_Callback(KSqueezedTextLabel_MoveEvent_Callback cb) { ksqueezedtextlabel_moveevent_callback = cb; }
    inline void setKSqueezedTextLabel_CloseEvent_Callback(KSqueezedTextLabel_CloseEvent_Callback cb) { ksqueezedtextlabel_closeevent_callback = cb; }
    inline void setKSqueezedTextLabel_TabletEvent_Callback(KSqueezedTextLabel_TabletEvent_Callback cb) { ksqueezedtextlabel_tabletevent_callback = cb; }
    inline void setKSqueezedTextLabel_ActionEvent_Callback(KSqueezedTextLabel_ActionEvent_Callback cb) { ksqueezedtextlabel_actionevent_callback = cb; }
    inline void setKSqueezedTextLabel_DragEnterEvent_Callback(KSqueezedTextLabel_DragEnterEvent_Callback cb) { ksqueezedtextlabel_dragenterevent_callback = cb; }
    inline void setKSqueezedTextLabel_DragMoveEvent_Callback(KSqueezedTextLabel_DragMoveEvent_Callback cb) { ksqueezedtextlabel_dragmoveevent_callback = cb; }
    inline void setKSqueezedTextLabel_DragLeaveEvent_Callback(KSqueezedTextLabel_DragLeaveEvent_Callback cb) { ksqueezedtextlabel_dragleaveevent_callback = cb; }
    inline void setKSqueezedTextLabel_DropEvent_Callback(KSqueezedTextLabel_DropEvent_Callback cb) { ksqueezedtextlabel_dropevent_callback = cb; }
    inline void setKSqueezedTextLabel_ShowEvent_Callback(KSqueezedTextLabel_ShowEvent_Callback cb) { ksqueezedtextlabel_showevent_callback = cb; }
    inline void setKSqueezedTextLabel_HideEvent_Callback(KSqueezedTextLabel_HideEvent_Callback cb) { ksqueezedtextlabel_hideevent_callback = cb; }
    inline void setKSqueezedTextLabel_NativeEvent_Callback(KSqueezedTextLabel_NativeEvent_Callback cb) { ksqueezedtextlabel_nativeevent_callback = cb; }
    inline void setKSqueezedTextLabel_Metric_Callback(KSqueezedTextLabel_Metric_Callback cb) { ksqueezedtextlabel_metric_callback = cb; }
    inline void setKSqueezedTextLabel_InitPainter_Callback(KSqueezedTextLabel_InitPainter_Callback cb) { ksqueezedtextlabel_initpainter_callback = cb; }
    inline void setKSqueezedTextLabel_Redirected_Callback(KSqueezedTextLabel_Redirected_Callback cb) { ksqueezedtextlabel_redirected_callback = cb; }
    inline void setKSqueezedTextLabel_SharedPainter_Callback(KSqueezedTextLabel_SharedPainter_Callback cb) { ksqueezedtextlabel_sharedpainter_callback = cb; }
    inline void setKSqueezedTextLabel_InputMethodEvent_Callback(KSqueezedTextLabel_InputMethodEvent_Callback cb) { ksqueezedtextlabel_inputmethodevent_callback = cb; }
    inline void setKSqueezedTextLabel_InputMethodQuery_Callback(KSqueezedTextLabel_InputMethodQuery_Callback cb) { ksqueezedtextlabel_inputmethodquery_callback = cb; }
    inline void setKSqueezedTextLabel_EventFilter_Callback(KSqueezedTextLabel_EventFilter_Callback cb) { ksqueezedtextlabel_eventfilter_callback = cb; }
    inline void setKSqueezedTextLabel_TimerEvent_Callback(KSqueezedTextLabel_TimerEvent_Callback cb) { ksqueezedtextlabel_timerevent_callback = cb; }
    inline void setKSqueezedTextLabel_ChildEvent_Callback(KSqueezedTextLabel_ChildEvent_Callback cb) { ksqueezedtextlabel_childevent_callback = cb; }
    inline void setKSqueezedTextLabel_CustomEvent_Callback(KSqueezedTextLabel_CustomEvent_Callback cb) { ksqueezedtextlabel_customevent_callback = cb; }
    inline void setKSqueezedTextLabel_ConnectNotify_Callback(KSqueezedTextLabel_ConnectNotify_Callback cb) { ksqueezedtextlabel_connectnotify_callback = cb; }
    inline void setKSqueezedTextLabel_DisconnectNotify_Callback(KSqueezedTextLabel_DisconnectNotify_Callback cb) { ksqueezedtextlabel_disconnectnotify_callback = cb; }
    inline void setKSqueezedTextLabel_SqueezeTextToLabel_Callback(KSqueezedTextLabel_SqueezeTextToLabel_Callback cb) { ksqueezedtextlabel_squeezetexttolabel_callback = cb; }
    inline void setKSqueezedTextLabel_DrawFrame_Callback(KSqueezedTextLabel_DrawFrame_Callback cb) { ksqueezedtextlabel_drawframe_callback = cb; }
    inline void setKSqueezedTextLabel_UpdateMicroFocus_Callback(KSqueezedTextLabel_UpdateMicroFocus_Callback cb) { ksqueezedtextlabel_updatemicrofocus_callback = cb; }
    inline void setKSqueezedTextLabel_Create_Callback(KSqueezedTextLabel_Create_Callback cb) { ksqueezedtextlabel_create_callback = cb; }
    inline void setKSqueezedTextLabel_Destroy_Callback(KSqueezedTextLabel_Destroy_Callback cb) { ksqueezedtextlabel_destroy_callback = cb; }
    inline void setKSqueezedTextLabel_FocusNextChild_Callback(KSqueezedTextLabel_FocusNextChild_Callback cb) { ksqueezedtextlabel_focusnextchild_callback = cb; }
    inline void setKSqueezedTextLabel_FocusPreviousChild_Callback(KSqueezedTextLabel_FocusPreviousChild_Callback cb) { ksqueezedtextlabel_focuspreviouschild_callback = cb; }
    inline void setKSqueezedTextLabel_Sender_Callback(KSqueezedTextLabel_Sender_Callback cb) { ksqueezedtextlabel_sender_callback = cb; }
    inline void setKSqueezedTextLabel_SenderSignalIndex_Callback(KSqueezedTextLabel_SenderSignalIndex_Callback cb) { ksqueezedtextlabel_sendersignalindex_callback = cb; }
    inline void setKSqueezedTextLabel_Receivers_Callback(KSqueezedTextLabel_Receivers_Callback cb) { ksqueezedtextlabel_receivers_callback = cb; }
    inline void setKSqueezedTextLabel_IsSignalConnected_Callback(KSqueezedTextLabel_IsSignalConnected_Callback cb) { ksqueezedtextlabel_issignalconnected_callback = cb; }
    inline void setKSqueezedTextLabel_GetDecodedMetricF_Callback(KSqueezedTextLabel_GetDecodedMetricF_Callback cb) { ksqueezedtextlabel_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKSqueezedTextLabel_Metacall_IsBase(bool value) const { ksqueezedtextlabel_metacall_isbase = value; }
    inline void setKSqueezedTextLabel_MinimumSizeHint_IsBase(bool value) const { ksqueezedtextlabel_minimumsizehint_isbase = value; }
    inline void setKSqueezedTextLabel_SizeHint_IsBase(bool value) const { ksqueezedtextlabel_sizehint_isbase = value; }
    inline void setKSqueezedTextLabel_SetAlignment_IsBase(bool value) const { ksqueezedtextlabel_setalignment_isbase = value; }
    inline void setKSqueezedTextLabel_MouseReleaseEvent_IsBase(bool value) const { ksqueezedtextlabel_mousereleaseevent_isbase = value; }
    inline void setKSqueezedTextLabel_ResizeEvent_IsBase(bool value) const { ksqueezedtextlabel_resizeevent_isbase = value; }
    inline void setKSqueezedTextLabel_ContextMenuEvent_IsBase(bool value) const { ksqueezedtextlabel_contextmenuevent_isbase = value; }
    inline void setKSqueezedTextLabel_HeightForWidth_IsBase(bool value) const { ksqueezedtextlabel_heightforwidth_isbase = value; }
    inline void setKSqueezedTextLabel_Event_IsBase(bool value) const { ksqueezedtextlabel_event_isbase = value; }
    inline void setKSqueezedTextLabel_KeyPressEvent_IsBase(bool value) const { ksqueezedtextlabel_keypressevent_isbase = value; }
    inline void setKSqueezedTextLabel_PaintEvent_IsBase(bool value) const { ksqueezedtextlabel_paintevent_isbase = value; }
    inline void setKSqueezedTextLabel_ChangeEvent_IsBase(bool value) const { ksqueezedtextlabel_changeevent_isbase = value; }
    inline void setKSqueezedTextLabel_MousePressEvent_IsBase(bool value) const { ksqueezedtextlabel_mousepressevent_isbase = value; }
    inline void setKSqueezedTextLabel_MouseMoveEvent_IsBase(bool value) const { ksqueezedtextlabel_mousemoveevent_isbase = value; }
    inline void setKSqueezedTextLabel_FocusInEvent_IsBase(bool value) const { ksqueezedtextlabel_focusinevent_isbase = value; }
    inline void setKSqueezedTextLabel_FocusOutEvent_IsBase(bool value) const { ksqueezedtextlabel_focusoutevent_isbase = value; }
    inline void setKSqueezedTextLabel_FocusNextPrevChild_IsBase(bool value) const { ksqueezedtextlabel_focusnextprevchild_isbase = value; }
    inline void setKSqueezedTextLabel_InitStyleOption_IsBase(bool value) const { ksqueezedtextlabel_initstyleoption_isbase = value; }
    inline void setKSqueezedTextLabel_DevType_IsBase(bool value) const { ksqueezedtextlabel_devtype_isbase = value; }
    inline void setKSqueezedTextLabel_SetVisible_IsBase(bool value) const { ksqueezedtextlabel_setvisible_isbase = value; }
    inline void setKSqueezedTextLabel_HasHeightForWidth_IsBase(bool value) const { ksqueezedtextlabel_hasheightforwidth_isbase = value; }
    inline void setKSqueezedTextLabel_PaintEngine_IsBase(bool value) const { ksqueezedtextlabel_paintengine_isbase = value; }
    inline void setKSqueezedTextLabel_MouseDoubleClickEvent_IsBase(bool value) const { ksqueezedtextlabel_mousedoubleclickevent_isbase = value; }
    inline void setKSqueezedTextLabel_WheelEvent_IsBase(bool value) const { ksqueezedtextlabel_wheelevent_isbase = value; }
    inline void setKSqueezedTextLabel_KeyReleaseEvent_IsBase(bool value) const { ksqueezedtextlabel_keyreleaseevent_isbase = value; }
    inline void setKSqueezedTextLabel_EnterEvent_IsBase(bool value) const { ksqueezedtextlabel_enterevent_isbase = value; }
    inline void setKSqueezedTextLabel_LeaveEvent_IsBase(bool value) const { ksqueezedtextlabel_leaveevent_isbase = value; }
    inline void setKSqueezedTextLabel_MoveEvent_IsBase(bool value) const { ksqueezedtextlabel_moveevent_isbase = value; }
    inline void setKSqueezedTextLabel_CloseEvent_IsBase(bool value) const { ksqueezedtextlabel_closeevent_isbase = value; }
    inline void setKSqueezedTextLabel_TabletEvent_IsBase(bool value) const { ksqueezedtextlabel_tabletevent_isbase = value; }
    inline void setKSqueezedTextLabel_ActionEvent_IsBase(bool value) const { ksqueezedtextlabel_actionevent_isbase = value; }
    inline void setKSqueezedTextLabel_DragEnterEvent_IsBase(bool value) const { ksqueezedtextlabel_dragenterevent_isbase = value; }
    inline void setKSqueezedTextLabel_DragMoveEvent_IsBase(bool value) const { ksqueezedtextlabel_dragmoveevent_isbase = value; }
    inline void setKSqueezedTextLabel_DragLeaveEvent_IsBase(bool value) const { ksqueezedtextlabel_dragleaveevent_isbase = value; }
    inline void setKSqueezedTextLabel_DropEvent_IsBase(bool value) const { ksqueezedtextlabel_dropevent_isbase = value; }
    inline void setKSqueezedTextLabel_ShowEvent_IsBase(bool value) const { ksqueezedtextlabel_showevent_isbase = value; }
    inline void setKSqueezedTextLabel_HideEvent_IsBase(bool value) const { ksqueezedtextlabel_hideevent_isbase = value; }
    inline void setKSqueezedTextLabel_NativeEvent_IsBase(bool value) const { ksqueezedtextlabel_nativeevent_isbase = value; }
    inline void setKSqueezedTextLabel_Metric_IsBase(bool value) const { ksqueezedtextlabel_metric_isbase = value; }
    inline void setKSqueezedTextLabel_InitPainter_IsBase(bool value) const { ksqueezedtextlabel_initpainter_isbase = value; }
    inline void setKSqueezedTextLabel_Redirected_IsBase(bool value) const { ksqueezedtextlabel_redirected_isbase = value; }
    inline void setKSqueezedTextLabel_SharedPainter_IsBase(bool value) const { ksqueezedtextlabel_sharedpainter_isbase = value; }
    inline void setKSqueezedTextLabel_InputMethodEvent_IsBase(bool value) const { ksqueezedtextlabel_inputmethodevent_isbase = value; }
    inline void setKSqueezedTextLabel_InputMethodQuery_IsBase(bool value) const { ksqueezedtextlabel_inputmethodquery_isbase = value; }
    inline void setKSqueezedTextLabel_EventFilter_IsBase(bool value) const { ksqueezedtextlabel_eventfilter_isbase = value; }
    inline void setKSqueezedTextLabel_TimerEvent_IsBase(bool value) const { ksqueezedtextlabel_timerevent_isbase = value; }
    inline void setKSqueezedTextLabel_ChildEvent_IsBase(bool value) const { ksqueezedtextlabel_childevent_isbase = value; }
    inline void setKSqueezedTextLabel_CustomEvent_IsBase(bool value) const { ksqueezedtextlabel_customevent_isbase = value; }
    inline void setKSqueezedTextLabel_ConnectNotify_IsBase(bool value) const { ksqueezedtextlabel_connectnotify_isbase = value; }
    inline void setKSqueezedTextLabel_DisconnectNotify_IsBase(bool value) const { ksqueezedtextlabel_disconnectnotify_isbase = value; }
    inline void setKSqueezedTextLabel_SqueezeTextToLabel_IsBase(bool value) const { ksqueezedtextlabel_squeezetexttolabel_isbase = value; }
    inline void setKSqueezedTextLabel_DrawFrame_IsBase(bool value) const { ksqueezedtextlabel_drawframe_isbase = value; }
    inline void setKSqueezedTextLabel_UpdateMicroFocus_IsBase(bool value) const { ksqueezedtextlabel_updatemicrofocus_isbase = value; }
    inline void setKSqueezedTextLabel_Create_IsBase(bool value) const { ksqueezedtextlabel_create_isbase = value; }
    inline void setKSqueezedTextLabel_Destroy_IsBase(bool value) const { ksqueezedtextlabel_destroy_isbase = value; }
    inline void setKSqueezedTextLabel_FocusNextChild_IsBase(bool value) const { ksqueezedtextlabel_focusnextchild_isbase = value; }
    inline void setKSqueezedTextLabel_FocusPreviousChild_IsBase(bool value) const { ksqueezedtextlabel_focuspreviouschild_isbase = value; }
    inline void setKSqueezedTextLabel_Sender_IsBase(bool value) const { ksqueezedtextlabel_sender_isbase = value; }
    inline void setKSqueezedTextLabel_SenderSignalIndex_IsBase(bool value) const { ksqueezedtextlabel_sendersignalindex_isbase = value; }
    inline void setKSqueezedTextLabel_Receivers_IsBase(bool value) const { ksqueezedtextlabel_receivers_isbase = value; }
    inline void setKSqueezedTextLabel_IsSignalConnected_IsBase(bool value) const { ksqueezedtextlabel_issignalconnected_isbase = value; }
    inline void setKSqueezedTextLabel_GetDecodedMetricF_IsBase(bool value) const { ksqueezedtextlabel_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksqueezedtextlabel_metacall_isbase) {
            ksqueezedtextlabel_metacall_isbase = false;
            return KSqueezedTextLabel::qt_metacall(param1, param2, param3);
        } else if (ksqueezedtextlabel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ksqueezedtextlabel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KSqueezedTextLabel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ksqueezedtextlabel_minimumsizehint_isbase) {
            ksqueezedtextlabel_minimumsizehint_isbase = false;
            return KSqueezedTextLabel::minimumSizeHint();
        } else if (ksqueezedtextlabel_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = ksqueezedtextlabel_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KSqueezedTextLabel::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ksqueezedtextlabel_sizehint_isbase) {
            ksqueezedtextlabel_sizehint_isbase = false;
            return KSqueezedTextLabel::sizeHint();
        } else if (ksqueezedtextlabel_sizehint_callback != nullptr) {
            QSize* callback_ret = ksqueezedtextlabel_sizehint_callback();
            return *callback_ret;
        } else {
            return KSqueezedTextLabel::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAlignment(QFlags<Qt::AlignmentFlag> alignment) override {
        if (ksqueezedtextlabel_setalignment_isbase) {
            ksqueezedtextlabel_setalignment_isbase = false;
            KSqueezedTextLabel::setAlignment(alignment);
        } else if (ksqueezedtextlabel_setalignment_callback != nullptr) {
            int cbval1 = static_cast<int>(alignment);

            ksqueezedtextlabel_setalignment_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::setAlignment(alignment);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (ksqueezedtextlabel_mousereleaseevent_isbase) {
            ksqueezedtextlabel_mousereleaseevent_isbase = false;
            KSqueezedTextLabel::mouseReleaseEvent(param1);
        } else if (ksqueezedtextlabel_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = param1;

            ksqueezedtextlabel_mousereleaseevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (ksqueezedtextlabel_resizeevent_isbase) {
            ksqueezedtextlabel_resizeevent_isbase = false;
            KSqueezedTextLabel::resizeEvent(param1);
        } else if (ksqueezedtextlabel_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = param1;

            ksqueezedtextlabel_resizeevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (ksqueezedtextlabel_contextmenuevent_isbase) {
            ksqueezedtextlabel_contextmenuevent_isbase = false;
            KSqueezedTextLabel::contextMenuEvent(param1);
        } else if (ksqueezedtextlabel_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = param1;

            ksqueezedtextlabel_contextmenuevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ksqueezedtextlabel_heightforwidth_isbase) {
            ksqueezedtextlabel_heightforwidth_isbase = false;
            return KSqueezedTextLabel::heightForWidth(param1);
        } else if (ksqueezedtextlabel_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = ksqueezedtextlabel_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KSqueezedTextLabel::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (ksqueezedtextlabel_event_isbase) {
            ksqueezedtextlabel_event_isbase = false;
            return KSqueezedTextLabel::event(e);
        } else if (ksqueezedtextlabel_event_callback != nullptr) {
            QEvent* cbval1 = e;

            bool callback_ret = ksqueezedtextlabel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSqueezedTextLabel::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (ksqueezedtextlabel_keypressevent_isbase) {
            ksqueezedtextlabel_keypressevent_isbase = false;
            KSqueezedTextLabel::keyPressEvent(ev);
        } else if (ksqueezedtextlabel_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = ev;

            ksqueezedtextlabel_keypressevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::keyPressEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (ksqueezedtextlabel_paintevent_isbase) {
            ksqueezedtextlabel_paintevent_isbase = false;
            KSqueezedTextLabel::paintEvent(param1);
        } else if (ksqueezedtextlabel_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = param1;

            ksqueezedtextlabel_paintevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (ksqueezedtextlabel_changeevent_isbase) {
            ksqueezedtextlabel_changeevent_isbase = false;
            KSqueezedTextLabel::changeEvent(param1);
        } else if (ksqueezedtextlabel_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            ksqueezedtextlabel_changeevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* ev) override {
        if (ksqueezedtextlabel_mousepressevent_isbase) {
            ksqueezedtextlabel_mousepressevent_isbase = false;
            KSqueezedTextLabel::mousePressEvent(ev);
        } else if (ksqueezedtextlabel_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = ev;

            ksqueezedtextlabel_mousepressevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::mousePressEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* ev) override {
        if (ksqueezedtextlabel_mousemoveevent_isbase) {
            ksqueezedtextlabel_mousemoveevent_isbase = false;
            KSqueezedTextLabel::mouseMoveEvent(ev);
        } else if (ksqueezedtextlabel_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = ev;

            ksqueezedtextlabel_mousemoveevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::mouseMoveEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* ev) override {
        if (ksqueezedtextlabel_focusinevent_isbase) {
            ksqueezedtextlabel_focusinevent_isbase = false;
            KSqueezedTextLabel::focusInEvent(ev);
        } else if (ksqueezedtextlabel_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = ev;

            ksqueezedtextlabel_focusinevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::focusInEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* ev) override {
        if (ksqueezedtextlabel_focusoutevent_isbase) {
            ksqueezedtextlabel_focusoutevent_isbase = false;
            KSqueezedTextLabel::focusOutEvent(ev);
        } else if (ksqueezedtextlabel_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = ev;

            ksqueezedtextlabel_focusoutevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::focusOutEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ksqueezedtextlabel_focusnextprevchild_isbase) {
            ksqueezedtextlabel_focusnextprevchild_isbase = false;
            return KSqueezedTextLabel::focusNextPrevChild(next);
        } else if (ksqueezedtextlabel_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = ksqueezedtextlabel_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSqueezedTextLabel::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (ksqueezedtextlabel_initstyleoption_isbase) {
            ksqueezedtextlabel_initstyleoption_isbase = false;
            KSqueezedTextLabel::initStyleOption(option);
        } else if (ksqueezedtextlabel_initstyleoption_callback != nullptr) {
            QStyleOptionFrame* cbval1 = option;

            ksqueezedtextlabel_initstyleoption_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ksqueezedtextlabel_devtype_isbase) {
            ksqueezedtextlabel_devtype_isbase = false;
            return KSqueezedTextLabel::devType();
        } else if (ksqueezedtextlabel_devtype_callback != nullptr) {
            int callback_ret = ksqueezedtextlabel_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KSqueezedTextLabel::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ksqueezedtextlabel_setvisible_isbase) {
            ksqueezedtextlabel_setvisible_isbase = false;
            KSqueezedTextLabel::setVisible(visible);
        } else if (ksqueezedtextlabel_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            ksqueezedtextlabel_setvisible_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ksqueezedtextlabel_hasheightforwidth_isbase) {
            ksqueezedtextlabel_hasheightforwidth_isbase = false;
            return KSqueezedTextLabel::hasHeightForWidth();
        } else if (ksqueezedtextlabel_hasheightforwidth_callback != nullptr) {
            bool callback_ret = ksqueezedtextlabel_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KSqueezedTextLabel::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ksqueezedtextlabel_paintengine_isbase) {
            ksqueezedtextlabel_paintengine_isbase = false;
            return KSqueezedTextLabel::paintEngine();
        } else if (ksqueezedtextlabel_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = ksqueezedtextlabel_paintengine_callback();
            return callback_ret;
        } else {
            return KSqueezedTextLabel::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (ksqueezedtextlabel_mousedoubleclickevent_isbase) {
            ksqueezedtextlabel_mousedoubleclickevent_isbase = false;
            KSqueezedTextLabel::mouseDoubleClickEvent(event);
        } else if (ksqueezedtextlabel_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ksqueezedtextlabel_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ksqueezedtextlabel_wheelevent_isbase) {
            ksqueezedtextlabel_wheelevent_isbase = false;
            KSqueezedTextLabel::wheelEvent(event);
        } else if (ksqueezedtextlabel_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            ksqueezedtextlabel_wheelevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (ksqueezedtextlabel_keyreleaseevent_isbase) {
            ksqueezedtextlabel_keyreleaseevent_isbase = false;
            KSqueezedTextLabel::keyReleaseEvent(event);
        } else if (ksqueezedtextlabel_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            ksqueezedtextlabel_keyreleaseevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ksqueezedtextlabel_enterevent_isbase) {
            ksqueezedtextlabel_enterevent_isbase = false;
            KSqueezedTextLabel::enterEvent(event);
        } else if (ksqueezedtextlabel_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            ksqueezedtextlabel_enterevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ksqueezedtextlabel_leaveevent_isbase) {
            ksqueezedtextlabel_leaveevent_isbase = false;
            KSqueezedTextLabel::leaveEvent(event);
        } else if (ksqueezedtextlabel_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ksqueezedtextlabel_leaveevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ksqueezedtextlabel_moveevent_isbase) {
            ksqueezedtextlabel_moveevent_isbase = false;
            KSqueezedTextLabel::moveEvent(event);
        } else if (ksqueezedtextlabel_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            ksqueezedtextlabel_moveevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ksqueezedtextlabel_closeevent_isbase) {
            ksqueezedtextlabel_closeevent_isbase = false;
            KSqueezedTextLabel::closeEvent(event);
        } else if (ksqueezedtextlabel_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            ksqueezedtextlabel_closeevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ksqueezedtextlabel_tabletevent_isbase) {
            ksqueezedtextlabel_tabletevent_isbase = false;
            KSqueezedTextLabel::tabletEvent(event);
        } else if (ksqueezedtextlabel_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            ksqueezedtextlabel_tabletevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (ksqueezedtextlabel_actionevent_isbase) {
            ksqueezedtextlabel_actionevent_isbase = false;
            KSqueezedTextLabel::actionEvent(event);
        } else if (ksqueezedtextlabel_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            ksqueezedtextlabel_actionevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (ksqueezedtextlabel_dragenterevent_isbase) {
            ksqueezedtextlabel_dragenterevent_isbase = false;
            KSqueezedTextLabel::dragEnterEvent(event);
        } else if (ksqueezedtextlabel_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            ksqueezedtextlabel_dragenterevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (ksqueezedtextlabel_dragmoveevent_isbase) {
            ksqueezedtextlabel_dragmoveevent_isbase = false;
            KSqueezedTextLabel::dragMoveEvent(event);
        } else if (ksqueezedtextlabel_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            ksqueezedtextlabel_dragmoveevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (ksqueezedtextlabel_dragleaveevent_isbase) {
            ksqueezedtextlabel_dragleaveevent_isbase = false;
            KSqueezedTextLabel::dragLeaveEvent(event);
        } else if (ksqueezedtextlabel_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            ksqueezedtextlabel_dragleaveevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (ksqueezedtextlabel_dropevent_isbase) {
            ksqueezedtextlabel_dropevent_isbase = false;
            KSqueezedTextLabel::dropEvent(event);
        } else if (ksqueezedtextlabel_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            ksqueezedtextlabel_dropevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (ksqueezedtextlabel_showevent_isbase) {
            ksqueezedtextlabel_showevent_isbase = false;
            KSqueezedTextLabel::showEvent(event);
        } else if (ksqueezedtextlabel_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            ksqueezedtextlabel_showevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (ksqueezedtextlabel_hideevent_isbase) {
            ksqueezedtextlabel_hideevent_isbase = false;
            KSqueezedTextLabel::hideEvent(event);
        } else if (ksqueezedtextlabel_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            ksqueezedtextlabel_hideevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ksqueezedtextlabel_nativeevent_isbase) {
            ksqueezedtextlabel_nativeevent_isbase = false;
            return KSqueezedTextLabel::nativeEvent(eventType, message, result);
        } else if (ksqueezedtextlabel_nativeevent_callback != nullptr) {
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

            bool callback_ret = ksqueezedtextlabel_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KSqueezedTextLabel::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ksqueezedtextlabel_metric_isbase) {
            ksqueezedtextlabel_metric_isbase = false;
            return KSqueezedTextLabel::metric(param1);
        } else if (ksqueezedtextlabel_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = ksqueezedtextlabel_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KSqueezedTextLabel::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ksqueezedtextlabel_initpainter_isbase) {
            ksqueezedtextlabel_initpainter_isbase = false;
            KSqueezedTextLabel::initPainter(painter);
        } else if (ksqueezedtextlabel_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            ksqueezedtextlabel_initpainter_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ksqueezedtextlabel_redirected_isbase) {
            ksqueezedtextlabel_redirected_isbase = false;
            return KSqueezedTextLabel::redirected(offset);
        } else if (ksqueezedtextlabel_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = ksqueezedtextlabel_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSqueezedTextLabel::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ksqueezedtextlabel_sharedpainter_isbase) {
            ksqueezedtextlabel_sharedpainter_isbase = false;
            return KSqueezedTextLabel::sharedPainter();
        } else if (ksqueezedtextlabel_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = ksqueezedtextlabel_sharedpainter_callback();
            return callback_ret;
        } else {
            return KSqueezedTextLabel::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ksqueezedtextlabel_inputmethodevent_isbase) {
            ksqueezedtextlabel_inputmethodevent_isbase = false;
            KSqueezedTextLabel::inputMethodEvent(param1);
        } else if (ksqueezedtextlabel_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            ksqueezedtextlabel_inputmethodevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ksqueezedtextlabel_inputmethodquery_isbase) {
            ksqueezedtextlabel_inputmethodquery_isbase = false;
            return KSqueezedTextLabel::inputMethodQuery(param1);
        } else if (ksqueezedtextlabel_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = ksqueezedtextlabel_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KSqueezedTextLabel::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ksqueezedtextlabel_eventfilter_isbase) {
            ksqueezedtextlabel_eventfilter_isbase = false;
            return KSqueezedTextLabel::eventFilter(watched, event);
        } else if (ksqueezedtextlabel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = ksqueezedtextlabel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KSqueezedTextLabel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ksqueezedtextlabel_timerevent_isbase) {
            ksqueezedtextlabel_timerevent_isbase = false;
            KSqueezedTextLabel::timerEvent(event);
        } else if (ksqueezedtextlabel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ksqueezedtextlabel_timerevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksqueezedtextlabel_childevent_isbase) {
            ksqueezedtextlabel_childevent_isbase = false;
            KSqueezedTextLabel::childEvent(event);
        } else if (ksqueezedtextlabel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ksqueezedtextlabel_childevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksqueezedtextlabel_customevent_isbase) {
            ksqueezedtextlabel_customevent_isbase = false;
            KSqueezedTextLabel::customEvent(event);
        } else if (ksqueezedtextlabel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ksqueezedtextlabel_customevent_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksqueezedtextlabel_connectnotify_isbase) {
            ksqueezedtextlabel_connectnotify_isbase = false;
            KSqueezedTextLabel::connectNotify(signal);
        } else if (ksqueezedtextlabel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ksqueezedtextlabel_connectnotify_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksqueezedtextlabel_disconnectnotify_isbase) {
            ksqueezedtextlabel_disconnectnotify_isbase = false;
            KSqueezedTextLabel::disconnectNotify(signal);
        } else if (ksqueezedtextlabel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ksqueezedtextlabel_disconnectnotify_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void squeezeTextToLabel() {
        if (ksqueezedtextlabel_squeezetexttolabel_isbase) {
            ksqueezedtextlabel_squeezetexttolabel_isbase = false;
            KSqueezedTextLabel::squeezeTextToLabel();
        } else if (ksqueezedtextlabel_squeezetexttolabel_callback != nullptr) {
            ksqueezedtextlabel_squeezetexttolabel_callback();
        } else {
            KSqueezedTextLabel::squeezeTextToLabel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (ksqueezedtextlabel_drawframe_isbase) {
            ksqueezedtextlabel_drawframe_isbase = false;
            KSqueezedTextLabel::drawFrame(param1);
        } else if (ksqueezedtextlabel_drawframe_callback != nullptr) {
            QPainter* cbval1 = param1;

            ksqueezedtextlabel_drawframe_callback(this, cbval1);
        } else {
            KSqueezedTextLabel::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (ksqueezedtextlabel_updatemicrofocus_isbase) {
            ksqueezedtextlabel_updatemicrofocus_isbase = false;
            KSqueezedTextLabel::updateMicroFocus();
        } else if (ksqueezedtextlabel_updatemicrofocus_callback != nullptr) {
            ksqueezedtextlabel_updatemicrofocus_callback();
        } else {
            KSqueezedTextLabel::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (ksqueezedtextlabel_create_isbase) {
            ksqueezedtextlabel_create_isbase = false;
            KSqueezedTextLabel::create();
        } else if (ksqueezedtextlabel_create_callback != nullptr) {
            ksqueezedtextlabel_create_callback();
        } else {
            KSqueezedTextLabel::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (ksqueezedtextlabel_destroy_isbase) {
            ksqueezedtextlabel_destroy_isbase = false;
            KSqueezedTextLabel::destroy();
        } else if (ksqueezedtextlabel_destroy_callback != nullptr) {
            ksqueezedtextlabel_destroy_callback();
        } else {
            KSqueezedTextLabel::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (ksqueezedtextlabel_focusnextchild_isbase) {
            ksqueezedtextlabel_focusnextchild_isbase = false;
            return KSqueezedTextLabel::focusNextChild();
        } else if (ksqueezedtextlabel_focusnextchild_callback != nullptr) {
            bool callback_ret = ksqueezedtextlabel_focusnextchild_callback();
            return callback_ret;
        } else {
            return KSqueezedTextLabel::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (ksqueezedtextlabel_focuspreviouschild_isbase) {
            ksqueezedtextlabel_focuspreviouschild_isbase = false;
            return KSqueezedTextLabel::focusPreviousChild();
        } else if (ksqueezedtextlabel_focuspreviouschild_callback != nullptr) {
            bool callback_ret = ksqueezedtextlabel_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KSqueezedTextLabel::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ksqueezedtextlabel_sender_isbase) {
            ksqueezedtextlabel_sender_isbase = false;
            return KSqueezedTextLabel::sender();
        } else if (ksqueezedtextlabel_sender_callback != nullptr) {
            QObject* callback_ret = ksqueezedtextlabel_sender_callback();
            return callback_ret;
        } else {
            return KSqueezedTextLabel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ksqueezedtextlabel_sendersignalindex_isbase) {
            ksqueezedtextlabel_sendersignalindex_isbase = false;
            return KSqueezedTextLabel::senderSignalIndex();
        } else if (ksqueezedtextlabel_sendersignalindex_callback != nullptr) {
            int callback_ret = ksqueezedtextlabel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KSqueezedTextLabel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ksqueezedtextlabel_receivers_isbase) {
            ksqueezedtextlabel_receivers_isbase = false;
            return KSqueezedTextLabel::receivers(signal);
        } else if (ksqueezedtextlabel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ksqueezedtextlabel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KSqueezedTextLabel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ksqueezedtextlabel_issignalconnected_isbase) {
            ksqueezedtextlabel_issignalconnected_isbase = false;
            return KSqueezedTextLabel::isSignalConnected(signal);
        } else if (ksqueezedtextlabel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ksqueezedtextlabel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KSqueezedTextLabel::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (ksqueezedtextlabel_getdecodedmetricf_isbase) {
            ksqueezedtextlabel_getdecodedmetricf_isbase = false;
            return KSqueezedTextLabel::getDecodedMetricF(metricA, metricB);
        } else if (ksqueezedtextlabel_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = ksqueezedtextlabel_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KSqueezedTextLabel::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend void KSqueezedTextLabel_MouseReleaseEvent(KSqueezedTextLabel* self, QMouseEvent* param1);
    friend void KSqueezedTextLabel_QBaseMouseReleaseEvent(KSqueezedTextLabel* self, QMouseEvent* param1);
    friend void KSqueezedTextLabel_ResizeEvent(KSqueezedTextLabel* self, QResizeEvent* param1);
    friend void KSqueezedTextLabel_QBaseResizeEvent(KSqueezedTextLabel* self, QResizeEvent* param1);
    friend void KSqueezedTextLabel_ContextMenuEvent(KSqueezedTextLabel* self, QContextMenuEvent* param1);
    friend void KSqueezedTextLabel_QBaseContextMenuEvent(KSqueezedTextLabel* self, QContextMenuEvent* param1);
    friend bool KSqueezedTextLabel_Event(KSqueezedTextLabel* self, QEvent* e);
    friend bool KSqueezedTextLabel_QBaseEvent(KSqueezedTextLabel* self, QEvent* e);
    friend void KSqueezedTextLabel_KeyPressEvent(KSqueezedTextLabel* self, QKeyEvent* ev);
    friend void KSqueezedTextLabel_QBaseKeyPressEvent(KSqueezedTextLabel* self, QKeyEvent* ev);
    friend void KSqueezedTextLabel_PaintEvent(KSqueezedTextLabel* self, QPaintEvent* param1);
    friend void KSqueezedTextLabel_QBasePaintEvent(KSqueezedTextLabel* self, QPaintEvent* param1);
    friend void KSqueezedTextLabel_ChangeEvent(KSqueezedTextLabel* self, QEvent* param1);
    friend void KSqueezedTextLabel_QBaseChangeEvent(KSqueezedTextLabel* self, QEvent* param1);
    friend void KSqueezedTextLabel_MousePressEvent(KSqueezedTextLabel* self, QMouseEvent* ev);
    friend void KSqueezedTextLabel_QBaseMousePressEvent(KSqueezedTextLabel* self, QMouseEvent* ev);
    friend void KSqueezedTextLabel_MouseMoveEvent(KSqueezedTextLabel* self, QMouseEvent* ev);
    friend void KSqueezedTextLabel_QBaseMouseMoveEvent(KSqueezedTextLabel* self, QMouseEvent* ev);
    friend void KSqueezedTextLabel_FocusInEvent(KSqueezedTextLabel* self, QFocusEvent* ev);
    friend void KSqueezedTextLabel_QBaseFocusInEvent(KSqueezedTextLabel* self, QFocusEvent* ev);
    friend void KSqueezedTextLabel_FocusOutEvent(KSqueezedTextLabel* self, QFocusEvent* ev);
    friend void KSqueezedTextLabel_QBaseFocusOutEvent(KSqueezedTextLabel* self, QFocusEvent* ev);
    friend bool KSqueezedTextLabel_FocusNextPrevChild(KSqueezedTextLabel* self, bool next);
    friend bool KSqueezedTextLabel_QBaseFocusNextPrevChild(KSqueezedTextLabel* self, bool next);
    friend void KSqueezedTextLabel_InitStyleOption(const KSqueezedTextLabel* self, QStyleOptionFrame* option);
    friend void KSqueezedTextLabel_QBaseInitStyleOption(const KSqueezedTextLabel* self, QStyleOptionFrame* option);
    friend void KSqueezedTextLabel_MouseDoubleClickEvent(KSqueezedTextLabel* self, QMouseEvent* event);
    friend void KSqueezedTextLabel_QBaseMouseDoubleClickEvent(KSqueezedTextLabel* self, QMouseEvent* event);
    friend void KSqueezedTextLabel_WheelEvent(KSqueezedTextLabel* self, QWheelEvent* event);
    friend void KSqueezedTextLabel_QBaseWheelEvent(KSqueezedTextLabel* self, QWheelEvent* event);
    friend void KSqueezedTextLabel_KeyReleaseEvent(KSqueezedTextLabel* self, QKeyEvent* event);
    friend void KSqueezedTextLabel_QBaseKeyReleaseEvent(KSqueezedTextLabel* self, QKeyEvent* event);
    friend void KSqueezedTextLabel_EnterEvent(KSqueezedTextLabel* self, QEnterEvent* event);
    friend void KSqueezedTextLabel_QBaseEnterEvent(KSqueezedTextLabel* self, QEnterEvent* event);
    friend void KSqueezedTextLabel_LeaveEvent(KSqueezedTextLabel* self, QEvent* event);
    friend void KSqueezedTextLabel_QBaseLeaveEvent(KSqueezedTextLabel* self, QEvent* event);
    friend void KSqueezedTextLabel_MoveEvent(KSqueezedTextLabel* self, QMoveEvent* event);
    friend void KSqueezedTextLabel_QBaseMoveEvent(KSqueezedTextLabel* self, QMoveEvent* event);
    friend void KSqueezedTextLabel_CloseEvent(KSqueezedTextLabel* self, QCloseEvent* event);
    friend void KSqueezedTextLabel_QBaseCloseEvent(KSqueezedTextLabel* self, QCloseEvent* event);
    friend void KSqueezedTextLabel_TabletEvent(KSqueezedTextLabel* self, QTabletEvent* event);
    friend void KSqueezedTextLabel_QBaseTabletEvent(KSqueezedTextLabel* self, QTabletEvent* event);
    friend void KSqueezedTextLabel_ActionEvent(KSqueezedTextLabel* self, QActionEvent* event);
    friend void KSqueezedTextLabel_QBaseActionEvent(KSqueezedTextLabel* self, QActionEvent* event);
    friend void KSqueezedTextLabel_DragEnterEvent(KSqueezedTextLabel* self, QDragEnterEvent* event);
    friend void KSqueezedTextLabel_QBaseDragEnterEvent(KSqueezedTextLabel* self, QDragEnterEvent* event);
    friend void KSqueezedTextLabel_DragMoveEvent(KSqueezedTextLabel* self, QDragMoveEvent* event);
    friend void KSqueezedTextLabel_QBaseDragMoveEvent(KSqueezedTextLabel* self, QDragMoveEvent* event);
    friend void KSqueezedTextLabel_DragLeaveEvent(KSqueezedTextLabel* self, QDragLeaveEvent* event);
    friend void KSqueezedTextLabel_QBaseDragLeaveEvent(KSqueezedTextLabel* self, QDragLeaveEvent* event);
    friend void KSqueezedTextLabel_DropEvent(KSqueezedTextLabel* self, QDropEvent* event);
    friend void KSqueezedTextLabel_QBaseDropEvent(KSqueezedTextLabel* self, QDropEvent* event);
    friend void KSqueezedTextLabel_ShowEvent(KSqueezedTextLabel* self, QShowEvent* event);
    friend void KSqueezedTextLabel_QBaseShowEvent(KSqueezedTextLabel* self, QShowEvent* event);
    friend void KSqueezedTextLabel_HideEvent(KSqueezedTextLabel* self, QHideEvent* event);
    friend void KSqueezedTextLabel_QBaseHideEvent(KSqueezedTextLabel* self, QHideEvent* event);
    friend bool KSqueezedTextLabel_NativeEvent(KSqueezedTextLabel* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KSqueezedTextLabel_QBaseNativeEvent(KSqueezedTextLabel* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KSqueezedTextLabel_Metric(const KSqueezedTextLabel* self, int param1);
    friend int KSqueezedTextLabel_QBaseMetric(const KSqueezedTextLabel* self, int param1);
    friend void KSqueezedTextLabel_InitPainter(const KSqueezedTextLabel* self, QPainter* painter);
    friend void KSqueezedTextLabel_QBaseInitPainter(const KSqueezedTextLabel* self, QPainter* painter);
    friend QPaintDevice* KSqueezedTextLabel_Redirected(const KSqueezedTextLabel* self, QPoint* offset);
    friend QPaintDevice* KSqueezedTextLabel_QBaseRedirected(const KSqueezedTextLabel* self, QPoint* offset);
    friend QPainter* KSqueezedTextLabel_SharedPainter(const KSqueezedTextLabel* self);
    friend QPainter* KSqueezedTextLabel_QBaseSharedPainter(const KSqueezedTextLabel* self);
    friend void KSqueezedTextLabel_InputMethodEvent(KSqueezedTextLabel* self, QInputMethodEvent* param1);
    friend void KSqueezedTextLabel_QBaseInputMethodEvent(KSqueezedTextLabel* self, QInputMethodEvent* param1);
    friend void KSqueezedTextLabel_TimerEvent(KSqueezedTextLabel* self, QTimerEvent* event);
    friend void KSqueezedTextLabel_QBaseTimerEvent(KSqueezedTextLabel* self, QTimerEvent* event);
    friend void KSqueezedTextLabel_ChildEvent(KSqueezedTextLabel* self, QChildEvent* event);
    friend void KSqueezedTextLabel_QBaseChildEvent(KSqueezedTextLabel* self, QChildEvent* event);
    friend void KSqueezedTextLabel_CustomEvent(KSqueezedTextLabel* self, QEvent* event);
    friend void KSqueezedTextLabel_QBaseCustomEvent(KSqueezedTextLabel* self, QEvent* event);
    friend void KSqueezedTextLabel_ConnectNotify(KSqueezedTextLabel* self, const QMetaMethod* signal);
    friend void KSqueezedTextLabel_QBaseConnectNotify(KSqueezedTextLabel* self, const QMetaMethod* signal);
    friend void KSqueezedTextLabel_DisconnectNotify(KSqueezedTextLabel* self, const QMetaMethod* signal);
    friend void KSqueezedTextLabel_QBaseDisconnectNotify(KSqueezedTextLabel* self, const QMetaMethod* signal);
    friend void KSqueezedTextLabel_SqueezeTextToLabel(KSqueezedTextLabel* self);
    friend void KSqueezedTextLabel_QBaseSqueezeTextToLabel(KSqueezedTextLabel* self);
    friend void KSqueezedTextLabel_DrawFrame(KSqueezedTextLabel* self, QPainter* param1);
    friend void KSqueezedTextLabel_QBaseDrawFrame(KSqueezedTextLabel* self, QPainter* param1);
    friend void KSqueezedTextLabel_UpdateMicroFocus(KSqueezedTextLabel* self);
    friend void KSqueezedTextLabel_QBaseUpdateMicroFocus(KSqueezedTextLabel* self);
    friend void KSqueezedTextLabel_Create(KSqueezedTextLabel* self);
    friend void KSqueezedTextLabel_QBaseCreate(KSqueezedTextLabel* self);
    friend void KSqueezedTextLabel_Destroy(KSqueezedTextLabel* self);
    friend void KSqueezedTextLabel_QBaseDestroy(KSqueezedTextLabel* self);
    friend bool KSqueezedTextLabel_FocusNextChild(KSqueezedTextLabel* self);
    friend bool KSqueezedTextLabel_QBaseFocusNextChild(KSqueezedTextLabel* self);
    friend bool KSqueezedTextLabel_FocusPreviousChild(KSqueezedTextLabel* self);
    friend bool KSqueezedTextLabel_QBaseFocusPreviousChild(KSqueezedTextLabel* self);
    friend QObject* KSqueezedTextLabel_Sender(const KSqueezedTextLabel* self);
    friend QObject* KSqueezedTextLabel_QBaseSender(const KSqueezedTextLabel* self);
    friend int KSqueezedTextLabel_SenderSignalIndex(const KSqueezedTextLabel* self);
    friend int KSqueezedTextLabel_QBaseSenderSignalIndex(const KSqueezedTextLabel* self);
    friend int KSqueezedTextLabel_Receivers(const KSqueezedTextLabel* self, const char* signal);
    friend int KSqueezedTextLabel_QBaseReceivers(const KSqueezedTextLabel* self, const char* signal);
    friend bool KSqueezedTextLabel_IsSignalConnected(const KSqueezedTextLabel* self, const QMetaMethod* signal);
    friend bool KSqueezedTextLabel_QBaseIsSignalConnected(const KSqueezedTextLabel* self, const QMetaMethod* signal);
    friend double KSqueezedTextLabel_GetDecodedMetricF(const KSqueezedTextLabel* self, int metricA, int metricB);
    friend double KSqueezedTextLabel_QBaseGetDecodedMetricF(const KSqueezedTextLabel* self, int metricA, int metricB);
};

#endif
