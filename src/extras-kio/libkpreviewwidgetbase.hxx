#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKPREVIEWWIDGETBASE_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKPREVIEWWIDGETBASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPreviewWidgetBase so that we can call protected methods
class VirtualKPreviewWidgetBase final : public KPreviewWidgetBase {

  public:
    // Virtual class boolean flag
    bool isVirtualKPreviewWidgetBase = true;

    // Virtual class public types (including callbacks)
    using KPreviewWidgetBase_Metacall_Callback = int (*)(KPreviewWidgetBase*, int, int, void**);
    using KPreviewWidgetBase_ShowPreview_Callback = void (*)(KPreviewWidgetBase*, QUrl*);
    using KPreviewWidgetBase_ClearPreview_Callback = void (*)();
    using KPreviewWidgetBase_DevType_Callback = int (*)();
    using KPreviewWidgetBase_SetVisible_Callback = void (*)(KPreviewWidgetBase*, bool);
    using KPreviewWidgetBase_SizeHint_Callback = QSize* (*)();
    using KPreviewWidgetBase_MinimumSizeHint_Callback = QSize* (*)();
    using KPreviewWidgetBase_HeightForWidth_Callback = int (*)(const KPreviewWidgetBase*, int);
    using KPreviewWidgetBase_HasHeightForWidth_Callback = bool (*)();
    using KPreviewWidgetBase_PaintEngine_Callback = QPaintEngine* (*)();
    using KPreviewWidgetBase_Event_Callback = bool (*)(KPreviewWidgetBase*, QEvent*);
    using KPreviewWidgetBase_MousePressEvent_Callback = void (*)(KPreviewWidgetBase*, QMouseEvent*);
    using KPreviewWidgetBase_MouseReleaseEvent_Callback = void (*)(KPreviewWidgetBase*, QMouseEvent*);
    using KPreviewWidgetBase_MouseDoubleClickEvent_Callback = void (*)(KPreviewWidgetBase*, QMouseEvent*);
    using KPreviewWidgetBase_MouseMoveEvent_Callback = void (*)(KPreviewWidgetBase*, QMouseEvent*);
    using KPreviewWidgetBase_WheelEvent_Callback = void (*)(KPreviewWidgetBase*, QWheelEvent*);
    using KPreviewWidgetBase_KeyPressEvent_Callback = void (*)(KPreviewWidgetBase*, QKeyEvent*);
    using KPreviewWidgetBase_KeyReleaseEvent_Callback = void (*)(KPreviewWidgetBase*, QKeyEvent*);
    using KPreviewWidgetBase_FocusInEvent_Callback = void (*)(KPreviewWidgetBase*, QFocusEvent*);
    using KPreviewWidgetBase_FocusOutEvent_Callback = void (*)(KPreviewWidgetBase*, QFocusEvent*);
    using KPreviewWidgetBase_EnterEvent_Callback = void (*)(KPreviewWidgetBase*, QEnterEvent*);
    using KPreviewWidgetBase_LeaveEvent_Callback = void (*)(KPreviewWidgetBase*, QEvent*);
    using KPreviewWidgetBase_PaintEvent_Callback = void (*)(KPreviewWidgetBase*, QPaintEvent*);
    using KPreviewWidgetBase_MoveEvent_Callback = void (*)(KPreviewWidgetBase*, QMoveEvent*);
    using KPreviewWidgetBase_ResizeEvent_Callback = void (*)(KPreviewWidgetBase*, QResizeEvent*);
    using KPreviewWidgetBase_CloseEvent_Callback = void (*)(KPreviewWidgetBase*, QCloseEvent*);
    using KPreviewWidgetBase_ContextMenuEvent_Callback = void (*)(KPreviewWidgetBase*, QContextMenuEvent*);
    using KPreviewWidgetBase_TabletEvent_Callback = void (*)(KPreviewWidgetBase*, QTabletEvent*);
    using KPreviewWidgetBase_ActionEvent_Callback = void (*)(KPreviewWidgetBase*, QActionEvent*);
    using KPreviewWidgetBase_DragEnterEvent_Callback = void (*)(KPreviewWidgetBase*, QDragEnterEvent*);
    using KPreviewWidgetBase_DragMoveEvent_Callback = void (*)(KPreviewWidgetBase*, QDragMoveEvent*);
    using KPreviewWidgetBase_DragLeaveEvent_Callback = void (*)(KPreviewWidgetBase*, QDragLeaveEvent*);
    using KPreviewWidgetBase_DropEvent_Callback = void (*)(KPreviewWidgetBase*, QDropEvent*);
    using KPreviewWidgetBase_ShowEvent_Callback = void (*)(KPreviewWidgetBase*, QShowEvent*);
    using KPreviewWidgetBase_HideEvent_Callback = void (*)(KPreviewWidgetBase*, QHideEvent*);
    using KPreviewWidgetBase_NativeEvent_Callback = bool (*)(KPreviewWidgetBase*, libqt_string, void*, intptr_t*);
    using KPreviewWidgetBase_ChangeEvent_Callback = void (*)(KPreviewWidgetBase*, QEvent*);
    using KPreviewWidgetBase_Metric_Callback = int (*)(const KPreviewWidgetBase*, int);
    using KPreviewWidgetBase_InitPainter_Callback = void (*)(const KPreviewWidgetBase*, QPainter*);
    using KPreviewWidgetBase_Redirected_Callback = QPaintDevice* (*)(const KPreviewWidgetBase*, QPoint*);
    using KPreviewWidgetBase_SharedPainter_Callback = QPainter* (*)();
    using KPreviewWidgetBase_InputMethodEvent_Callback = void (*)(KPreviewWidgetBase*, QInputMethodEvent*);
    using KPreviewWidgetBase_InputMethodQuery_Callback = QVariant* (*)(const KPreviewWidgetBase*, int);
    using KPreviewWidgetBase_FocusNextPrevChild_Callback = bool (*)(KPreviewWidgetBase*, bool);
    using KPreviewWidgetBase_EventFilter_Callback = bool (*)(KPreviewWidgetBase*, QObject*, QEvent*);
    using KPreviewWidgetBase_TimerEvent_Callback = void (*)(KPreviewWidgetBase*, QTimerEvent*);
    using KPreviewWidgetBase_ChildEvent_Callback = void (*)(KPreviewWidgetBase*, QChildEvent*);
    using KPreviewWidgetBase_CustomEvent_Callback = void (*)(KPreviewWidgetBase*, QEvent*);
    using KPreviewWidgetBase_ConnectNotify_Callback = void (*)(KPreviewWidgetBase*, QMetaMethod*);
    using KPreviewWidgetBase_DisconnectNotify_Callback = void (*)(KPreviewWidgetBase*, QMetaMethod*);
    using KPreviewWidgetBase_SetSupportedMimeTypes_Callback = void (*)(KPreviewWidgetBase*, libqt_list /* of libqt_string */);
    using KPreviewWidgetBase_UpdateMicroFocus_Callback = void (*)();
    using KPreviewWidgetBase_Create_Callback = void (*)();
    using KPreviewWidgetBase_Destroy_Callback = void (*)();
    using KPreviewWidgetBase_FocusNextChild_Callback = bool (*)();
    using KPreviewWidgetBase_FocusPreviousChild_Callback = bool (*)();
    using KPreviewWidgetBase_Sender_Callback = QObject* (*)();
    using KPreviewWidgetBase_SenderSignalIndex_Callback = int (*)();
    using KPreviewWidgetBase_Receivers_Callback = int (*)(const KPreviewWidgetBase*, const char*);
    using KPreviewWidgetBase_IsSignalConnected_Callback = bool (*)(const KPreviewWidgetBase*, QMetaMethod*);
    using KPreviewWidgetBase_GetDecodedMetricF_Callback = double (*)(const KPreviewWidgetBase*, int, int);

  protected:
    // Instance callback storage
    KPreviewWidgetBase_Metacall_Callback kpreviewwidgetbase_metacall_callback = nullptr;
    KPreviewWidgetBase_ShowPreview_Callback kpreviewwidgetbase_showpreview_callback = nullptr;
    KPreviewWidgetBase_ClearPreview_Callback kpreviewwidgetbase_clearpreview_callback = nullptr;
    KPreviewWidgetBase_DevType_Callback kpreviewwidgetbase_devtype_callback = nullptr;
    KPreviewWidgetBase_SetVisible_Callback kpreviewwidgetbase_setvisible_callback = nullptr;
    KPreviewWidgetBase_SizeHint_Callback kpreviewwidgetbase_sizehint_callback = nullptr;
    KPreviewWidgetBase_MinimumSizeHint_Callback kpreviewwidgetbase_minimumsizehint_callback = nullptr;
    KPreviewWidgetBase_HeightForWidth_Callback kpreviewwidgetbase_heightforwidth_callback = nullptr;
    KPreviewWidgetBase_HasHeightForWidth_Callback kpreviewwidgetbase_hasheightforwidth_callback = nullptr;
    KPreviewWidgetBase_PaintEngine_Callback kpreviewwidgetbase_paintengine_callback = nullptr;
    KPreviewWidgetBase_Event_Callback kpreviewwidgetbase_event_callback = nullptr;
    KPreviewWidgetBase_MousePressEvent_Callback kpreviewwidgetbase_mousepressevent_callback = nullptr;
    KPreviewWidgetBase_MouseReleaseEvent_Callback kpreviewwidgetbase_mousereleaseevent_callback = nullptr;
    KPreviewWidgetBase_MouseDoubleClickEvent_Callback kpreviewwidgetbase_mousedoubleclickevent_callback = nullptr;
    KPreviewWidgetBase_MouseMoveEvent_Callback kpreviewwidgetbase_mousemoveevent_callback = nullptr;
    KPreviewWidgetBase_WheelEvent_Callback kpreviewwidgetbase_wheelevent_callback = nullptr;
    KPreviewWidgetBase_KeyPressEvent_Callback kpreviewwidgetbase_keypressevent_callback = nullptr;
    KPreviewWidgetBase_KeyReleaseEvent_Callback kpreviewwidgetbase_keyreleaseevent_callback = nullptr;
    KPreviewWidgetBase_FocusInEvent_Callback kpreviewwidgetbase_focusinevent_callback = nullptr;
    KPreviewWidgetBase_FocusOutEvent_Callback kpreviewwidgetbase_focusoutevent_callback = nullptr;
    KPreviewWidgetBase_EnterEvent_Callback kpreviewwidgetbase_enterevent_callback = nullptr;
    KPreviewWidgetBase_LeaveEvent_Callback kpreviewwidgetbase_leaveevent_callback = nullptr;
    KPreviewWidgetBase_PaintEvent_Callback kpreviewwidgetbase_paintevent_callback = nullptr;
    KPreviewWidgetBase_MoveEvent_Callback kpreviewwidgetbase_moveevent_callback = nullptr;
    KPreviewWidgetBase_ResizeEvent_Callback kpreviewwidgetbase_resizeevent_callback = nullptr;
    KPreviewWidgetBase_CloseEvent_Callback kpreviewwidgetbase_closeevent_callback = nullptr;
    KPreviewWidgetBase_ContextMenuEvent_Callback kpreviewwidgetbase_contextmenuevent_callback = nullptr;
    KPreviewWidgetBase_TabletEvent_Callback kpreviewwidgetbase_tabletevent_callback = nullptr;
    KPreviewWidgetBase_ActionEvent_Callback kpreviewwidgetbase_actionevent_callback = nullptr;
    KPreviewWidgetBase_DragEnterEvent_Callback kpreviewwidgetbase_dragenterevent_callback = nullptr;
    KPreviewWidgetBase_DragMoveEvent_Callback kpreviewwidgetbase_dragmoveevent_callback = nullptr;
    KPreviewWidgetBase_DragLeaveEvent_Callback kpreviewwidgetbase_dragleaveevent_callback = nullptr;
    KPreviewWidgetBase_DropEvent_Callback kpreviewwidgetbase_dropevent_callback = nullptr;
    KPreviewWidgetBase_ShowEvent_Callback kpreviewwidgetbase_showevent_callback = nullptr;
    KPreviewWidgetBase_HideEvent_Callback kpreviewwidgetbase_hideevent_callback = nullptr;
    KPreviewWidgetBase_NativeEvent_Callback kpreviewwidgetbase_nativeevent_callback = nullptr;
    KPreviewWidgetBase_ChangeEvent_Callback kpreviewwidgetbase_changeevent_callback = nullptr;
    KPreviewWidgetBase_Metric_Callback kpreviewwidgetbase_metric_callback = nullptr;
    KPreviewWidgetBase_InitPainter_Callback kpreviewwidgetbase_initpainter_callback = nullptr;
    KPreviewWidgetBase_Redirected_Callback kpreviewwidgetbase_redirected_callback = nullptr;
    KPreviewWidgetBase_SharedPainter_Callback kpreviewwidgetbase_sharedpainter_callback = nullptr;
    KPreviewWidgetBase_InputMethodEvent_Callback kpreviewwidgetbase_inputmethodevent_callback = nullptr;
    KPreviewWidgetBase_InputMethodQuery_Callback kpreviewwidgetbase_inputmethodquery_callback = nullptr;
    KPreviewWidgetBase_FocusNextPrevChild_Callback kpreviewwidgetbase_focusnextprevchild_callback = nullptr;
    KPreviewWidgetBase_EventFilter_Callback kpreviewwidgetbase_eventfilter_callback = nullptr;
    KPreviewWidgetBase_TimerEvent_Callback kpreviewwidgetbase_timerevent_callback = nullptr;
    KPreviewWidgetBase_ChildEvent_Callback kpreviewwidgetbase_childevent_callback = nullptr;
    KPreviewWidgetBase_CustomEvent_Callback kpreviewwidgetbase_customevent_callback = nullptr;
    KPreviewWidgetBase_ConnectNotify_Callback kpreviewwidgetbase_connectnotify_callback = nullptr;
    KPreviewWidgetBase_DisconnectNotify_Callback kpreviewwidgetbase_disconnectnotify_callback = nullptr;
    KPreviewWidgetBase_SetSupportedMimeTypes_Callback kpreviewwidgetbase_setsupportedmimetypes_callback = nullptr;
    KPreviewWidgetBase_UpdateMicroFocus_Callback kpreviewwidgetbase_updatemicrofocus_callback = nullptr;
    KPreviewWidgetBase_Create_Callback kpreviewwidgetbase_create_callback = nullptr;
    KPreviewWidgetBase_Destroy_Callback kpreviewwidgetbase_destroy_callback = nullptr;
    KPreviewWidgetBase_FocusNextChild_Callback kpreviewwidgetbase_focusnextchild_callback = nullptr;
    KPreviewWidgetBase_FocusPreviousChild_Callback kpreviewwidgetbase_focuspreviouschild_callback = nullptr;
    KPreviewWidgetBase_Sender_Callback kpreviewwidgetbase_sender_callback = nullptr;
    KPreviewWidgetBase_SenderSignalIndex_Callback kpreviewwidgetbase_sendersignalindex_callback = nullptr;
    KPreviewWidgetBase_Receivers_Callback kpreviewwidgetbase_receivers_callback = nullptr;
    KPreviewWidgetBase_IsSignalConnected_Callback kpreviewwidgetbase_issignalconnected_callback = nullptr;
    KPreviewWidgetBase_GetDecodedMetricF_Callback kpreviewwidgetbase_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kpreviewwidgetbase_metacall_isbase = false;
    mutable bool kpreviewwidgetbase_showpreview_isbase = false;
    mutable bool kpreviewwidgetbase_clearpreview_isbase = false;
    mutable bool kpreviewwidgetbase_devtype_isbase = false;
    mutable bool kpreviewwidgetbase_setvisible_isbase = false;
    mutable bool kpreviewwidgetbase_sizehint_isbase = false;
    mutable bool kpreviewwidgetbase_minimumsizehint_isbase = false;
    mutable bool kpreviewwidgetbase_heightforwidth_isbase = false;
    mutable bool kpreviewwidgetbase_hasheightforwidth_isbase = false;
    mutable bool kpreviewwidgetbase_paintengine_isbase = false;
    mutable bool kpreviewwidgetbase_event_isbase = false;
    mutable bool kpreviewwidgetbase_mousepressevent_isbase = false;
    mutable bool kpreviewwidgetbase_mousereleaseevent_isbase = false;
    mutable bool kpreviewwidgetbase_mousedoubleclickevent_isbase = false;
    mutable bool kpreviewwidgetbase_mousemoveevent_isbase = false;
    mutable bool kpreviewwidgetbase_wheelevent_isbase = false;
    mutable bool kpreviewwidgetbase_keypressevent_isbase = false;
    mutable bool kpreviewwidgetbase_keyreleaseevent_isbase = false;
    mutable bool kpreviewwidgetbase_focusinevent_isbase = false;
    mutable bool kpreviewwidgetbase_focusoutevent_isbase = false;
    mutable bool kpreviewwidgetbase_enterevent_isbase = false;
    mutable bool kpreviewwidgetbase_leaveevent_isbase = false;
    mutable bool kpreviewwidgetbase_paintevent_isbase = false;
    mutable bool kpreviewwidgetbase_moveevent_isbase = false;
    mutable bool kpreviewwidgetbase_resizeevent_isbase = false;
    mutable bool kpreviewwidgetbase_closeevent_isbase = false;
    mutable bool kpreviewwidgetbase_contextmenuevent_isbase = false;
    mutable bool kpreviewwidgetbase_tabletevent_isbase = false;
    mutable bool kpreviewwidgetbase_actionevent_isbase = false;
    mutable bool kpreviewwidgetbase_dragenterevent_isbase = false;
    mutable bool kpreviewwidgetbase_dragmoveevent_isbase = false;
    mutable bool kpreviewwidgetbase_dragleaveevent_isbase = false;
    mutable bool kpreviewwidgetbase_dropevent_isbase = false;
    mutable bool kpreviewwidgetbase_showevent_isbase = false;
    mutable bool kpreviewwidgetbase_hideevent_isbase = false;
    mutable bool kpreviewwidgetbase_nativeevent_isbase = false;
    mutable bool kpreviewwidgetbase_changeevent_isbase = false;
    mutable bool kpreviewwidgetbase_metric_isbase = false;
    mutable bool kpreviewwidgetbase_initpainter_isbase = false;
    mutable bool kpreviewwidgetbase_redirected_isbase = false;
    mutable bool kpreviewwidgetbase_sharedpainter_isbase = false;
    mutable bool kpreviewwidgetbase_inputmethodevent_isbase = false;
    mutable bool kpreviewwidgetbase_inputmethodquery_isbase = false;
    mutable bool kpreviewwidgetbase_focusnextprevchild_isbase = false;
    mutable bool kpreviewwidgetbase_eventfilter_isbase = false;
    mutable bool kpreviewwidgetbase_timerevent_isbase = false;
    mutable bool kpreviewwidgetbase_childevent_isbase = false;
    mutable bool kpreviewwidgetbase_customevent_isbase = false;
    mutable bool kpreviewwidgetbase_connectnotify_isbase = false;
    mutable bool kpreviewwidgetbase_disconnectnotify_isbase = false;
    mutable bool kpreviewwidgetbase_setsupportedmimetypes_isbase = false;
    mutable bool kpreviewwidgetbase_updatemicrofocus_isbase = false;
    mutable bool kpreviewwidgetbase_create_isbase = false;
    mutable bool kpreviewwidgetbase_destroy_isbase = false;
    mutable bool kpreviewwidgetbase_focusnextchild_isbase = false;
    mutable bool kpreviewwidgetbase_focuspreviouschild_isbase = false;
    mutable bool kpreviewwidgetbase_sender_isbase = false;
    mutable bool kpreviewwidgetbase_sendersignalindex_isbase = false;
    mutable bool kpreviewwidgetbase_receivers_isbase = false;
    mutable bool kpreviewwidgetbase_issignalconnected_isbase = false;
    mutable bool kpreviewwidgetbase_getdecodedmetricf_isbase = false;

  public:
    VirtualKPreviewWidgetBase(QWidget* parent) : KPreviewWidgetBase(parent) {};

    ~VirtualKPreviewWidgetBase() {
        kpreviewwidgetbase_metacall_callback = nullptr;
        kpreviewwidgetbase_showpreview_callback = nullptr;
        kpreviewwidgetbase_clearpreview_callback = nullptr;
        kpreviewwidgetbase_devtype_callback = nullptr;
        kpreviewwidgetbase_setvisible_callback = nullptr;
        kpreviewwidgetbase_sizehint_callback = nullptr;
        kpreviewwidgetbase_minimumsizehint_callback = nullptr;
        kpreviewwidgetbase_heightforwidth_callback = nullptr;
        kpreviewwidgetbase_hasheightforwidth_callback = nullptr;
        kpreviewwidgetbase_paintengine_callback = nullptr;
        kpreviewwidgetbase_event_callback = nullptr;
        kpreviewwidgetbase_mousepressevent_callback = nullptr;
        kpreviewwidgetbase_mousereleaseevent_callback = nullptr;
        kpreviewwidgetbase_mousedoubleclickevent_callback = nullptr;
        kpreviewwidgetbase_mousemoveevent_callback = nullptr;
        kpreviewwidgetbase_wheelevent_callback = nullptr;
        kpreviewwidgetbase_keypressevent_callback = nullptr;
        kpreviewwidgetbase_keyreleaseevent_callback = nullptr;
        kpreviewwidgetbase_focusinevent_callback = nullptr;
        kpreviewwidgetbase_focusoutevent_callback = nullptr;
        kpreviewwidgetbase_enterevent_callback = nullptr;
        kpreviewwidgetbase_leaveevent_callback = nullptr;
        kpreviewwidgetbase_paintevent_callback = nullptr;
        kpreviewwidgetbase_moveevent_callback = nullptr;
        kpreviewwidgetbase_resizeevent_callback = nullptr;
        kpreviewwidgetbase_closeevent_callback = nullptr;
        kpreviewwidgetbase_contextmenuevent_callback = nullptr;
        kpreviewwidgetbase_tabletevent_callback = nullptr;
        kpreviewwidgetbase_actionevent_callback = nullptr;
        kpreviewwidgetbase_dragenterevent_callback = nullptr;
        kpreviewwidgetbase_dragmoveevent_callback = nullptr;
        kpreviewwidgetbase_dragleaveevent_callback = nullptr;
        kpreviewwidgetbase_dropevent_callback = nullptr;
        kpreviewwidgetbase_showevent_callback = nullptr;
        kpreviewwidgetbase_hideevent_callback = nullptr;
        kpreviewwidgetbase_nativeevent_callback = nullptr;
        kpreviewwidgetbase_changeevent_callback = nullptr;
        kpreviewwidgetbase_metric_callback = nullptr;
        kpreviewwidgetbase_initpainter_callback = nullptr;
        kpreviewwidgetbase_redirected_callback = nullptr;
        kpreviewwidgetbase_sharedpainter_callback = nullptr;
        kpreviewwidgetbase_inputmethodevent_callback = nullptr;
        kpreviewwidgetbase_inputmethodquery_callback = nullptr;
        kpreviewwidgetbase_focusnextprevchild_callback = nullptr;
        kpreviewwidgetbase_eventfilter_callback = nullptr;
        kpreviewwidgetbase_timerevent_callback = nullptr;
        kpreviewwidgetbase_childevent_callback = nullptr;
        kpreviewwidgetbase_customevent_callback = nullptr;
        kpreviewwidgetbase_connectnotify_callback = nullptr;
        kpreviewwidgetbase_disconnectnotify_callback = nullptr;
        kpreviewwidgetbase_setsupportedmimetypes_callback = nullptr;
        kpreviewwidgetbase_updatemicrofocus_callback = nullptr;
        kpreviewwidgetbase_create_callback = nullptr;
        kpreviewwidgetbase_destroy_callback = nullptr;
        kpreviewwidgetbase_focusnextchild_callback = nullptr;
        kpreviewwidgetbase_focuspreviouschild_callback = nullptr;
        kpreviewwidgetbase_sender_callback = nullptr;
        kpreviewwidgetbase_sendersignalindex_callback = nullptr;
        kpreviewwidgetbase_receivers_callback = nullptr;
        kpreviewwidgetbase_issignalconnected_callback = nullptr;
        kpreviewwidgetbase_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKPreviewWidgetBase_Metacall_Callback(KPreviewWidgetBase_Metacall_Callback cb) { kpreviewwidgetbase_metacall_callback = cb; }
    inline void setKPreviewWidgetBase_ShowPreview_Callback(KPreviewWidgetBase_ShowPreview_Callback cb) { kpreviewwidgetbase_showpreview_callback = cb; }
    inline void setKPreviewWidgetBase_ClearPreview_Callback(KPreviewWidgetBase_ClearPreview_Callback cb) { kpreviewwidgetbase_clearpreview_callback = cb; }
    inline void setKPreviewWidgetBase_DevType_Callback(KPreviewWidgetBase_DevType_Callback cb) { kpreviewwidgetbase_devtype_callback = cb; }
    inline void setKPreviewWidgetBase_SetVisible_Callback(KPreviewWidgetBase_SetVisible_Callback cb) { kpreviewwidgetbase_setvisible_callback = cb; }
    inline void setKPreviewWidgetBase_SizeHint_Callback(KPreviewWidgetBase_SizeHint_Callback cb) { kpreviewwidgetbase_sizehint_callback = cb; }
    inline void setKPreviewWidgetBase_MinimumSizeHint_Callback(KPreviewWidgetBase_MinimumSizeHint_Callback cb) { kpreviewwidgetbase_minimumsizehint_callback = cb; }
    inline void setKPreviewWidgetBase_HeightForWidth_Callback(KPreviewWidgetBase_HeightForWidth_Callback cb) { kpreviewwidgetbase_heightforwidth_callback = cb; }
    inline void setKPreviewWidgetBase_HasHeightForWidth_Callback(KPreviewWidgetBase_HasHeightForWidth_Callback cb) { kpreviewwidgetbase_hasheightforwidth_callback = cb; }
    inline void setKPreviewWidgetBase_PaintEngine_Callback(KPreviewWidgetBase_PaintEngine_Callback cb) { kpreviewwidgetbase_paintengine_callback = cb; }
    inline void setKPreviewWidgetBase_Event_Callback(KPreviewWidgetBase_Event_Callback cb) { kpreviewwidgetbase_event_callback = cb; }
    inline void setKPreviewWidgetBase_MousePressEvent_Callback(KPreviewWidgetBase_MousePressEvent_Callback cb) { kpreviewwidgetbase_mousepressevent_callback = cb; }
    inline void setKPreviewWidgetBase_MouseReleaseEvent_Callback(KPreviewWidgetBase_MouseReleaseEvent_Callback cb) { kpreviewwidgetbase_mousereleaseevent_callback = cb; }
    inline void setKPreviewWidgetBase_MouseDoubleClickEvent_Callback(KPreviewWidgetBase_MouseDoubleClickEvent_Callback cb) { kpreviewwidgetbase_mousedoubleclickevent_callback = cb; }
    inline void setKPreviewWidgetBase_MouseMoveEvent_Callback(KPreviewWidgetBase_MouseMoveEvent_Callback cb) { kpreviewwidgetbase_mousemoveevent_callback = cb; }
    inline void setKPreviewWidgetBase_WheelEvent_Callback(KPreviewWidgetBase_WheelEvent_Callback cb) { kpreviewwidgetbase_wheelevent_callback = cb; }
    inline void setKPreviewWidgetBase_KeyPressEvent_Callback(KPreviewWidgetBase_KeyPressEvent_Callback cb) { kpreviewwidgetbase_keypressevent_callback = cb; }
    inline void setKPreviewWidgetBase_KeyReleaseEvent_Callback(KPreviewWidgetBase_KeyReleaseEvent_Callback cb) { kpreviewwidgetbase_keyreleaseevent_callback = cb; }
    inline void setKPreviewWidgetBase_FocusInEvent_Callback(KPreviewWidgetBase_FocusInEvent_Callback cb) { kpreviewwidgetbase_focusinevent_callback = cb; }
    inline void setKPreviewWidgetBase_FocusOutEvent_Callback(KPreviewWidgetBase_FocusOutEvent_Callback cb) { kpreviewwidgetbase_focusoutevent_callback = cb; }
    inline void setKPreviewWidgetBase_EnterEvent_Callback(KPreviewWidgetBase_EnterEvent_Callback cb) { kpreviewwidgetbase_enterevent_callback = cb; }
    inline void setKPreviewWidgetBase_LeaveEvent_Callback(KPreviewWidgetBase_LeaveEvent_Callback cb) { kpreviewwidgetbase_leaveevent_callback = cb; }
    inline void setKPreviewWidgetBase_PaintEvent_Callback(KPreviewWidgetBase_PaintEvent_Callback cb) { kpreviewwidgetbase_paintevent_callback = cb; }
    inline void setKPreviewWidgetBase_MoveEvent_Callback(KPreviewWidgetBase_MoveEvent_Callback cb) { kpreviewwidgetbase_moveevent_callback = cb; }
    inline void setKPreviewWidgetBase_ResizeEvent_Callback(KPreviewWidgetBase_ResizeEvent_Callback cb) { kpreviewwidgetbase_resizeevent_callback = cb; }
    inline void setKPreviewWidgetBase_CloseEvent_Callback(KPreviewWidgetBase_CloseEvent_Callback cb) { kpreviewwidgetbase_closeevent_callback = cb; }
    inline void setKPreviewWidgetBase_ContextMenuEvent_Callback(KPreviewWidgetBase_ContextMenuEvent_Callback cb) { kpreviewwidgetbase_contextmenuevent_callback = cb; }
    inline void setKPreviewWidgetBase_TabletEvent_Callback(KPreviewWidgetBase_TabletEvent_Callback cb) { kpreviewwidgetbase_tabletevent_callback = cb; }
    inline void setKPreviewWidgetBase_ActionEvent_Callback(KPreviewWidgetBase_ActionEvent_Callback cb) { kpreviewwidgetbase_actionevent_callback = cb; }
    inline void setKPreviewWidgetBase_DragEnterEvent_Callback(KPreviewWidgetBase_DragEnterEvent_Callback cb) { kpreviewwidgetbase_dragenterevent_callback = cb; }
    inline void setKPreviewWidgetBase_DragMoveEvent_Callback(KPreviewWidgetBase_DragMoveEvent_Callback cb) { kpreviewwidgetbase_dragmoveevent_callback = cb; }
    inline void setKPreviewWidgetBase_DragLeaveEvent_Callback(KPreviewWidgetBase_DragLeaveEvent_Callback cb) { kpreviewwidgetbase_dragleaveevent_callback = cb; }
    inline void setKPreviewWidgetBase_DropEvent_Callback(KPreviewWidgetBase_DropEvent_Callback cb) { kpreviewwidgetbase_dropevent_callback = cb; }
    inline void setKPreviewWidgetBase_ShowEvent_Callback(KPreviewWidgetBase_ShowEvent_Callback cb) { kpreviewwidgetbase_showevent_callback = cb; }
    inline void setKPreviewWidgetBase_HideEvent_Callback(KPreviewWidgetBase_HideEvent_Callback cb) { kpreviewwidgetbase_hideevent_callback = cb; }
    inline void setKPreviewWidgetBase_NativeEvent_Callback(KPreviewWidgetBase_NativeEvent_Callback cb) { kpreviewwidgetbase_nativeevent_callback = cb; }
    inline void setKPreviewWidgetBase_ChangeEvent_Callback(KPreviewWidgetBase_ChangeEvent_Callback cb) { kpreviewwidgetbase_changeevent_callback = cb; }
    inline void setKPreviewWidgetBase_Metric_Callback(KPreviewWidgetBase_Metric_Callback cb) { kpreviewwidgetbase_metric_callback = cb; }
    inline void setKPreviewWidgetBase_InitPainter_Callback(KPreviewWidgetBase_InitPainter_Callback cb) { kpreviewwidgetbase_initpainter_callback = cb; }
    inline void setKPreviewWidgetBase_Redirected_Callback(KPreviewWidgetBase_Redirected_Callback cb) { kpreviewwidgetbase_redirected_callback = cb; }
    inline void setKPreviewWidgetBase_SharedPainter_Callback(KPreviewWidgetBase_SharedPainter_Callback cb) { kpreviewwidgetbase_sharedpainter_callback = cb; }
    inline void setKPreviewWidgetBase_InputMethodEvent_Callback(KPreviewWidgetBase_InputMethodEvent_Callback cb) { kpreviewwidgetbase_inputmethodevent_callback = cb; }
    inline void setKPreviewWidgetBase_InputMethodQuery_Callback(KPreviewWidgetBase_InputMethodQuery_Callback cb) { kpreviewwidgetbase_inputmethodquery_callback = cb; }
    inline void setKPreviewWidgetBase_FocusNextPrevChild_Callback(KPreviewWidgetBase_FocusNextPrevChild_Callback cb) { kpreviewwidgetbase_focusnextprevchild_callback = cb; }
    inline void setKPreviewWidgetBase_EventFilter_Callback(KPreviewWidgetBase_EventFilter_Callback cb) { kpreviewwidgetbase_eventfilter_callback = cb; }
    inline void setKPreviewWidgetBase_TimerEvent_Callback(KPreviewWidgetBase_TimerEvent_Callback cb) { kpreviewwidgetbase_timerevent_callback = cb; }
    inline void setKPreviewWidgetBase_ChildEvent_Callback(KPreviewWidgetBase_ChildEvent_Callback cb) { kpreviewwidgetbase_childevent_callback = cb; }
    inline void setKPreviewWidgetBase_CustomEvent_Callback(KPreviewWidgetBase_CustomEvent_Callback cb) { kpreviewwidgetbase_customevent_callback = cb; }
    inline void setKPreviewWidgetBase_ConnectNotify_Callback(KPreviewWidgetBase_ConnectNotify_Callback cb) { kpreviewwidgetbase_connectnotify_callback = cb; }
    inline void setKPreviewWidgetBase_DisconnectNotify_Callback(KPreviewWidgetBase_DisconnectNotify_Callback cb) { kpreviewwidgetbase_disconnectnotify_callback = cb; }
    inline void setKPreviewWidgetBase_SetSupportedMimeTypes_Callback(KPreviewWidgetBase_SetSupportedMimeTypes_Callback cb) { kpreviewwidgetbase_setsupportedmimetypes_callback = cb; }
    inline void setKPreviewWidgetBase_UpdateMicroFocus_Callback(KPreviewWidgetBase_UpdateMicroFocus_Callback cb) { kpreviewwidgetbase_updatemicrofocus_callback = cb; }
    inline void setKPreviewWidgetBase_Create_Callback(KPreviewWidgetBase_Create_Callback cb) { kpreviewwidgetbase_create_callback = cb; }
    inline void setKPreviewWidgetBase_Destroy_Callback(KPreviewWidgetBase_Destroy_Callback cb) { kpreviewwidgetbase_destroy_callback = cb; }
    inline void setKPreviewWidgetBase_FocusNextChild_Callback(KPreviewWidgetBase_FocusNextChild_Callback cb) { kpreviewwidgetbase_focusnextchild_callback = cb; }
    inline void setKPreviewWidgetBase_FocusPreviousChild_Callback(KPreviewWidgetBase_FocusPreviousChild_Callback cb) { kpreviewwidgetbase_focuspreviouschild_callback = cb; }
    inline void setKPreviewWidgetBase_Sender_Callback(KPreviewWidgetBase_Sender_Callback cb) { kpreviewwidgetbase_sender_callback = cb; }
    inline void setKPreviewWidgetBase_SenderSignalIndex_Callback(KPreviewWidgetBase_SenderSignalIndex_Callback cb) { kpreviewwidgetbase_sendersignalindex_callback = cb; }
    inline void setKPreviewWidgetBase_Receivers_Callback(KPreviewWidgetBase_Receivers_Callback cb) { kpreviewwidgetbase_receivers_callback = cb; }
    inline void setKPreviewWidgetBase_IsSignalConnected_Callback(KPreviewWidgetBase_IsSignalConnected_Callback cb) { kpreviewwidgetbase_issignalconnected_callback = cb; }
    inline void setKPreviewWidgetBase_GetDecodedMetricF_Callback(KPreviewWidgetBase_GetDecodedMetricF_Callback cb) { kpreviewwidgetbase_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKPreviewWidgetBase_Metacall_IsBase(bool value) const { kpreviewwidgetbase_metacall_isbase = value; }
    inline void setKPreviewWidgetBase_ShowPreview_IsBase(bool value) const { kpreviewwidgetbase_showpreview_isbase = value; }
    inline void setKPreviewWidgetBase_ClearPreview_IsBase(bool value) const { kpreviewwidgetbase_clearpreview_isbase = value; }
    inline void setKPreviewWidgetBase_DevType_IsBase(bool value) const { kpreviewwidgetbase_devtype_isbase = value; }
    inline void setKPreviewWidgetBase_SetVisible_IsBase(bool value) const { kpreviewwidgetbase_setvisible_isbase = value; }
    inline void setKPreviewWidgetBase_SizeHint_IsBase(bool value) const { kpreviewwidgetbase_sizehint_isbase = value; }
    inline void setKPreviewWidgetBase_MinimumSizeHint_IsBase(bool value) const { kpreviewwidgetbase_minimumsizehint_isbase = value; }
    inline void setKPreviewWidgetBase_HeightForWidth_IsBase(bool value) const { kpreviewwidgetbase_heightforwidth_isbase = value; }
    inline void setKPreviewWidgetBase_HasHeightForWidth_IsBase(bool value) const { kpreviewwidgetbase_hasheightforwidth_isbase = value; }
    inline void setKPreviewWidgetBase_PaintEngine_IsBase(bool value) const { kpreviewwidgetbase_paintengine_isbase = value; }
    inline void setKPreviewWidgetBase_Event_IsBase(bool value) const { kpreviewwidgetbase_event_isbase = value; }
    inline void setKPreviewWidgetBase_MousePressEvent_IsBase(bool value) const { kpreviewwidgetbase_mousepressevent_isbase = value; }
    inline void setKPreviewWidgetBase_MouseReleaseEvent_IsBase(bool value) const { kpreviewwidgetbase_mousereleaseevent_isbase = value; }
    inline void setKPreviewWidgetBase_MouseDoubleClickEvent_IsBase(bool value) const { kpreviewwidgetbase_mousedoubleclickevent_isbase = value; }
    inline void setKPreviewWidgetBase_MouseMoveEvent_IsBase(bool value) const { kpreviewwidgetbase_mousemoveevent_isbase = value; }
    inline void setKPreviewWidgetBase_WheelEvent_IsBase(bool value) const { kpreviewwidgetbase_wheelevent_isbase = value; }
    inline void setKPreviewWidgetBase_KeyPressEvent_IsBase(bool value) const { kpreviewwidgetbase_keypressevent_isbase = value; }
    inline void setKPreviewWidgetBase_KeyReleaseEvent_IsBase(bool value) const { kpreviewwidgetbase_keyreleaseevent_isbase = value; }
    inline void setKPreviewWidgetBase_FocusInEvent_IsBase(bool value) const { kpreviewwidgetbase_focusinevent_isbase = value; }
    inline void setKPreviewWidgetBase_FocusOutEvent_IsBase(bool value) const { kpreviewwidgetbase_focusoutevent_isbase = value; }
    inline void setKPreviewWidgetBase_EnterEvent_IsBase(bool value) const { kpreviewwidgetbase_enterevent_isbase = value; }
    inline void setKPreviewWidgetBase_LeaveEvent_IsBase(bool value) const { kpreviewwidgetbase_leaveevent_isbase = value; }
    inline void setKPreviewWidgetBase_PaintEvent_IsBase(bool value) const { kpreviewwidgetbase_paintevent_isbase = value; }
    inline void setKPreviewWidgetBase_MoveEvent_IsBase(bool value) const { kpreviewwidgetbase_moveevent_isbase = value; }
    inline void setKPreviewWidgetBase_ResizeEvent_IsBase(bool value) const { kpreviewwidgetbase_resizeevent_isbase = value; }
    inline void setKPreviewWidgetBase_CloseEvent_IsBase(bool value) const { kpreviewwidgetbase_closeevent_isbase = value; }
    inline void setKPreviewWidgetBase_ContextMenuEvent_IsBase(bool value) const { kpreviewwidgetbase_contextmenuevent_isbase = value; }
    inline void setKPreviewWidgetBase_TabletEvent_IsBase(bool value) const { kpreviewwidgetbase_tabletevent_isbase = value; }
    inline void setKPreviewWidgetBase_ActionEvent_IsBase(bool value) const { kpreviewwidgetbase_actionevent_isbase = value; }
    inline void setKPreviewWidgetBase_DragEnterEvent_IsBase(bool value) const { kpreviewwidgetbase_dragenterevent_isbase = value; }
    inline void setKPreviewWidgetBase_DragMoveEvent_IsBase(bool value) const { kpreviewwidgetbase_dragmoveevent_isbase = value; }
    inline void setKPreviewWidgetBase_DragLeaveEvent_IsBase(bool value) const { kpreviewwidgetbase_dragleaveevent_isbase = value; }
    inline void setKPreviewWidgetBase_DropEvent_IsBase(bool value) const { kpreviewwidgetbase_dropevent_isbase = value; }
    inline void setKPreviewWidgetBase_ShowEvent_IsBase(bool value) const { kpreviewwidgetbase_showevent_isbase = value; }
    inline void setKPreviewWidgetBase_HideEvent_IsBase(bool value) const { kpreviewwidgetbase_hideevent_isbase = value; }
    inline void setKPreviewWidgetBase_NativeEvent_IsBase(bool value) const { kpreviewwidgetbase_nativeevent_isbase = value; }
    inline void setKPreviewWidgetBase_ChangeEvent_IsBase(bool value) const { kpreviewwidgetbase_changeevent_isbase = value; }
    inline void setKPreviewWidgetBase_Metric_IsBase(bool value) const { kpreviewwidgetbase_metric_isbase = value; }
    inline void setKPreviewWidgetBase_InitPainter_IsBase(bool value) const { kpreviewwidgetbase_initpainter_isbase = value; }
    inline void setKPreviewWidgetBase_Redirected_IsBase(bool value) const { kpreviewwidgetbase_redirected_isbase = value; }
    inline void setKPreviewWidgetBase_SharedPainter_IsBase(bool value) const { kpreviewwidgetbase_sharedpainter_isbase = value; }
    inline void setKPreviewWidgetBase_InputMethodEvent_IsBase(bool value) const { kpreviewwidgetbase_inputmethodevent_isbase = value; }
    inline void setKPreviewWidgetBase_InputMethodQuery_IsBase(bool value) const { kpreviewwidgetbase_inputmethodquery_isbase = value; }
    inline void setKPreviewWidgetBase_FocusNextPrevChild_IsBase(bool value) const { kpreviewwidgetbase_focusnextprevchild_isbase = value; }
    inline void setKPreviewWidgetBase_EventFilter_IsBase(bool value) const { kpreviewwidgetbase_eventfilter_isbase = value; }
    inline void setKPreviewWidgetBase_TimerEvent_IsBase(bool value) const { kpreviewwidgetbase_timerevent_isbase = value; }
    inline void setKPreviewWidgetBase_ChildEvent_IsBase(bool value) const { kpreviewwidgetbase_childevent_isbase = value; }
    inline void setKPreviewWidgetBase_CustomEvent_IsBase(bool value) const { kpreviewwidgetbase_customevent_isbase = value; }
    inline void setKPreviewWidgetBase_ConnectNotify_IsBase(bool value) const { kpreviewwidgetbase_connectnotify_isbase = value; }
    inline void setKPreviewWidgetBase_DisconnectNotify_IsBase(bool value) const { kpreviewwidgetbase_disconnectnotify_isbase = value; }
    inline void setKPreviewWidgetBase_SetSupportedMimeTypes_IsBase(bool value) const { kpreviewwidgetbase_setsupportedmimetypes_isbase = value; }
    inline void setKPreviewWidgetBase_UpdateMicroFocus_IsBase(bool value) const { kpreviewwidgetbase_updatemicrofocus_isbase = value; }
    inline void setKPreviewWidgetBase_Create_IsBase(bool value) const { kpreviewwidgetbase_create_isbase = value; }
    inline void setKPreviewWidgetBase_Destroy_IsBase(bool value) const { kpreviewwidgetbase_destroy_isbase = value; }
    inline void setKPreviewWidgetBase_FocusNextChild_IsBase(bool value) const { kpreviewwidgetbase_focusnextchild_isbase = value; }
    inline void setKPreviewWidgetBase_FocusPreviousChild_IsBase(bool value) const { kpreviewwidgetbase_focuspreviouschild_isbase = value; }
    inline void setKPreviewWidgetBase_Sender_IsBase(bool value) const { kpreviewwidgetbase_sender_isbase = value; }
    inline void setKPreviewWidgetBase_SenderSignalIndex_IsBase(bool value) const { kpreviewwidgetbase_sendersignalindex_isbase = value; }
    inline void setKPreviewWidgetBase_Receivers_IsBase(bool value) const { kpreviewwidgetbase_receivers_isbase = value; }
    inline void setKPreviewWidgetBase_IsSignalConnected_IsBase(bool value) const { kpreviewwidgetbase_issignalconnected_isbase = value; }
    inline void setKPreviewWidgetBase_GetDecodedMetricF_IsBase(bool value) const { kpreviewwidgetbase_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpreviewwidgetbase_metacall_isbase) {
            kpreviewwidgetbase_metacall_isbase = false;
            return KPreviewWidgetBase::qt_metacall(param1, param2, param3);
        } else if (kpreviewwidgetbase_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kpreviewwidgetbase_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KPreviewWidgetBase::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPreview(const QUrl& url) override {
        if (kpreviewwidgetbase_showpreview_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            kpreviewwidgetbase_showpreview_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clearPreview() override {
        if (kpreviewwidgetbase_clearpreview_callback != nullptr) {
            kpreviewwidgetbase_clearpreview_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpreviewwidgetbase_devtype_isbase) {
            kpreviewwidgetbase_devtype_isbase = false;
            return KPreviewWidgetBase::devType();
        } else if (kpreviewwidgetbase_devtype_callback != nullptr) {
            int callback_ret = kpreviewwidgetbase_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPreviewWidgetBase::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpreviewwidgetbase_setvisible_isbase) {
            kpreviewwidgetbase_setvisible_isbase = false;
            KPreviewWidgetBase::setVisible(visible);
        } else if (kpreviewwidgetbase_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kpreviewwidgetbase_setvisible_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpreviewwidgetbase_sizehint_isbase) {
            kpreviewwidgetbase_sizehint_isbase = false;
            return KPreviewWidgetBase::sizeHint();
        } else if (kpreviewwidgetbase_sizehint_callback != nullptr) {
            QSize* callback_ret = kpreviewwidgetbase_sizehint_callback();
            return *callback_ret;
        } else {
            return KPreviewWidgetBase::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpreviewwidgetbase_minimumsizehint_isbase) {
            kpreviewwidgetbase_minimumsizehint_isbase = false;
            return KPreviewWidgetBase::minimumSizeHint();
        } else if (kpreviewwidgetbase_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kpreviewwidgetbase_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KPreviewWidgetBase::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpreviewwidgetbase_heightforwidth_isbase) {
            kpreviewwidgetbase_heightforwidth_isbase = false;
            return KPreviewWidgetBase::heightForWidth(param1);
        } else if (kpreviewwidgetbase_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kpreviewwidgetbase_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPreviewWidgetBase::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpreviewwidgetbase_hasheightforwidth_isbase) {
            kpreviewwidgetbase_hasheightforwidth_isbase = false;
            return KPreviewWidgetBase::hasHeightForWidth();
        } else if (kpreviewwidgetbase_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kpreviewwidgetbase_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KPreviewWidgetBase::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpreviewwidgetbase_paintengine_isbase) {
            kpreviewwidgetbase_paintengine_isbase = false;
            return KPreviewWidgetBase::paintEngine();
        } else if (kpreviewwidgetbase_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kpreviewwidgetbase_paintengine_callback();
            return callback_ret;
        } else {
            return KPreviewWidgetBase::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpreviewwidgetbase_event_isbase) {
            kpreviewwidgetbase_event_isbase = false;
            return KPreviewWidgetBase::event(event);
        } else if (kpreviewwidgetbase_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kpreviewwidgetbase_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPreviewWidgetBase::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpreviewwidgetbase_mousepressevent_isbase) {
            kpreviewwidgetbase_mousepressevent_isbase = false;
            KPreviewWidgetBase::mousePressEvent(event);
        } else if (kpreviewwidgetbase_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpreviewwidgetbase_mousepressevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpreviewwidgetbase_mousereleaseevent_isbase) {
            kpreviewwidgetbase_mousereleaseevent_isbase = false;
            KPreviewWidgetBase::mouseReleaseEvent(event);
        } else if (kpreviewwidgetbase_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpreviewwidgetbase_mousereleaseevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpreviewwidgetbase_mousedoubleclickevent_isbase) {
            kpreviewwidgetbase_mousedoubleclickevent_isbase = false;
            KPreviewWidgetBase::mouseDoubleClickEvent(event);
        } else if (kpreviewwidgetbase_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpreviewwidgetbase_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpreviewwidgetbase_mousemoveevent_isbase) {
            kpreviewwidgetbase_mousemoveevent_isbase = false;
            KPreviewWidgetBase::mouseMoveEvent(event);
        } else if (kpreviewwidgetbase_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpreviewwidgetbase_mousemoveevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpreviewwidgetbase_wheelevent_isbase) {
            kpreviewwidgetbase_wheelevent_isbase = false;
            KPreviewWidgetBase::wheelEvent(event);
        } else if (kpreviewwidgetbase_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kpreviewwidgetbase_wheelevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kpreviewwidgetbase_keypressevent_isbase) {
            kpreviewwidgetbase_keypressevent_isbase = false;
            KPreviewWidgetBase::keyPressEvent(event);
        } else if (kpreviewwidgetbase_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kpreviewwidgetbase_keypressevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpreviewwidgetbase_keyreleaseevent_isbase) {
            kpreviewwidgetbase_keyreleaseevent_isbase = false;
            KPreviewWidgetBase::keyReleaseEvent(event);
        } else if (kpreviewwidgetbase_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kpreviewwidgetbase_keyreleaseevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpreviewwidgetbase_focusinevent_isbase) {
            kpreviewwidgetbase_focusinevent_isbase = false;
            KPreviewWidgetBase::focusInEvent(event);
        } else if (kpreviewwidgetbase_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kpreviewwidgetbase_focusinevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpreviewwidgetbase_focusoutevent_isbase) {
            kpreviewwidgetbase_focusoutevent_isbase = false;
            KPreviewWidgetBase::focusOutEvent(event);
        } else if (kpreviewwidgetbase_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kpreviewwidgetbase_focusoutevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpreviewwidgetbase_enterevent_isbase) {
            kpreviewwidgetbase_enterevent_isbase = false;
            KPreviewWidgetBase::enterEvent(event);
        } else if (kpreviewwidgetbase_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kpreviewwidgetbase_enterevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpreviewwidgetbase_leaveevent_isbase) {
            kpreviewwidgetbase_leaveevent_isbase = false;
            KPreviewWidgetBase::leaveEvent(event);
        } else if (kpreviewwidgetbase_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kpreviewwidgetbase_leaveevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpreviewwidgetbase_paintevent_isbase) {
            kpreviewwidgetbase_paintevent_isbase = false;
            KPreviewWidgetBase::paintEvent(event);
        } else if (kpreviewwidgetbase_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kpreviewwidgetbase_paintevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpreviewwidgetbase_moveevent_isbase) {
            kpreviewwidgetbase_moveevent_isbase = false;
            KPreviewWidgetBase::moveEvent(event);
        } else if (kpreviewwidgetbase_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kpreviewwidgetbase_moveevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kpreviewwidgetbase_resizeevent_isbase) {
            kpreviewwidgetbase_resizeevent_isbase = false;
            KPreviewWidgetBase::resizeEvent(event);
        } else if (kpreviewwidgetbase_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kpreviewwidgetbase_resizeevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kpreviewwidgetbase_closeevent_isbase) {
            kpreviewwidgetbase_closeevent_isbase = false;
            KPreviewWidgetBase::closeEvent(event);
        } else if (kpreviewwidgetbase_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kpreviewwidgetbase_closeevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kpreviewwidgetbase_contextmenuevent_isbase) {
            kpreviewwidgetbase_contextmenuevent_isbase = false;
            KPreviewWidgetBase::contextMenuEvent(event);
        } else if (kpreviewwidgetbase_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kpreviewwidgetbase_contextmenuevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpreviewwidgetbase_tabletevent_isbase) {
            kpreviewwidgetbase_tabletevent_isbase = false;
            KPreviewWidgetBase::tabletEvent(event);
        } else if (kpreviewwidgetbase_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kpreviewwidgetbase_tabletevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpreviewwidgetbase_actionevent_isbase) {
            kpreviewwidgetbase_actionevent_isbase = false;
            KPreviewWidgetBase::actionEvent(event);
        } else if (kpreviewwidgetbase_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kpreviewwidgetbase_actionevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpreviewwidgetbase_dragenterevent_isbase) {
            kpreviewwidgetbase_dragenterevent_isbase = false;
            KPreviewWidgetBase::dragEnterEvent(event);
        } else if (kpreviewwidgetbase_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kpreviewwidgetbase_dragenterevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpreviewwidgetbase_dragmoveevent_isbase) {
            kpreviewwidgetbase_dragmoveevent_isbase = false;
            KPreviewWidgetBase::dragMoveEvent(event);
        } else if (kpreviewwidgetbase_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kpreviewwidgetbase_dragmoveevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpreviewwidgetbase_dragleaveevent_isbase) {
            kpreviewwidgetbase_dragleaveevent_isbase = false;
            KPreviewWidgetBase::dragLeaveEvent(event);
        } else if (kpreviewwidgetbase_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kpreviewwidgetbase_dragleaveevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpreviewwidgetbase_dropevent_isbase) {
            kpreviewwidgetbase_dropevent_isbase = false;
            KPreviewWidgetBase::dropEvent(event);
        } else if (kpreviewwidgetbase_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kpreviewwidgetbase_dropevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kpreviewwidgetbase_showevent_isbase) {
            kpreviewwidgetbase_showevent_isbase = false;
            KPreviewWidgetBase::showEvent(event);
        } else if (kpreviewwidgetbase_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kpreviewwidgetbase_showevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpreviewwidgetbase_hideevent_isbase) {
            kpreviewwidgetbase_hideevent_isbase = false;
            KPreviewWidgetBase::hideEvent(event);
        } else if (kpreviewwidgetbase_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kpreviewwidgetbase_hideevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpreviewwidgetbase_nativeevent_isbase) {
            kpreviewwidgetbase_nativeevent_isbase = false;
            return KPreviewWidgetBase::nativeEvent(eventType, message, result);
        } else if (kpreviewwidgetbase_nativeevent_callback != nullptr) {
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

            bool callback_ret = kpreviewwidgetbase_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KPreviewWidgetBase::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpreviewwidgetbase_changeevent_isbase) {
            kpreviewwidgetbase_changeevent_isbase = false;
            KPreviewWidgetBase::changeEvent(param1);
        } else if (kpreviewwidgetbase_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kpreviewwidgetbase_changeevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpreviewwidgetbase_metric_isbase) {
            kpreviewwidgetbase_metric_isbase = false;
            return KPreviewWidgetBase::metric(param1);
        } else if (kpreviewwidgetbase_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kpreviewwidgetbase_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPreviewWidgetBase::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpreviewwidgetbase_initpainter_isbase) {
            kpreviewwidgetbase_initpainter_isbase = false;
            KPreviewWidgetBase::initPainter(painter);
        } else if (kpreviewwidgetbase_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kpreviewwidgetbase_initpainter_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpreviewwidgetbase_redirected_isbase) {
            kpreviewwidgetbase_redirected_isbase = false;
            return KPreviewWidgetBase::redirected(offset);
        } else if (kpreviewwidgetbase_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kpreviewwidgetbase_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPreviewWidgetBase::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpreviewwidgetbase_sharedpainter_isbase) {
            kpreviewwidgetbase_sharedpainter_isbase = false;
            return KPreviewWidgetBase::sharedPainter();
        } else if (kpreviewwidgetbase_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kpreviewwidgetbase_sharedpainter_callback();
            return callback_ret;
        } else {
            return KPreviewWidgetBase::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpreviewwidgetbase_inputmethodevent_isbase) {
            kpreviewwidgetbase_inputmethodevent_isbase = false;
            KPreviewWidgetBase::inputMethodEvent(param1);
        } else if (kpreviewwidgetbase_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kpreviewwidgetbase_inputmethodevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpreviewwidgetbase_inputmethodquery_isbase) {
            kpreviewwidgetbase_inputmethodquery_isbase = false;
            return KPreviewWidgetBase::inputMethodQuery(param1);
        } else if (kpreviewwidgetbase_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kpreviewwidgetbase_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KPreviewWidgetBase::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpreviewwidgetbase_focusnextprevchild_isbase) {
            kpreviewwidgetbase_focusnextprevchild_isbase = false;
            return KPreviewWidgetBase::focusNextPrevChild(next);
        } else if (kpreviewwidgetbase_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kpreviewwidgetbase_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPreviewWidgetBase::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpreviewwidgetbase_eventfilter_isbase) {
            kpreviewwidgetbase_eventfilter_isbase = false;
            return KPreviewWidgetBase::eventFilter(watched, event);
        } else if (kpreviewwidgetbase_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kpreviewwidgetbase_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KPreviewWidgetBase::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpreviewwidgetbase_timerevent_isbase) {
            kpreviewwidgetbase_timerevent_isbase = false;
            KPreviewWidgetBase::timerEvent(event);
        } else if (kpreviewwidgetbase_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kpreviewwidgetbase_timerevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpreviewwidgetbase_childevent_isbase) {
            kpreviewwidgetbase_childevent_isbase = false;
            KPreviewWidgetBase::childEvent(event);
        } else if (kpreviewwidgetbase_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kpreviewwidgetbase_childevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpreviewwidgetbase_customevent_isbase) {
            kpreviewwidgetbase_customevent_isbase = false;
            KPreviewWidgetBase::customEvent(event);
        } else if (kpreviewwidgetbase_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kpreviewwidgetbase_customevent_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpreviewwidgetbase_connectnotify_isbase) {
            kpreviewwidgetbase_connectnotify_isbase = false;
            KPreviewWidgetBase::connectNotify(signal);
        } else if (kpreviewwidgetbase_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpreviewwidgetbase_connectnotify_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpreviewwidgetbase_disconnectnotify_isbase) {
            kpreviewwidgetbase_disconnectnotify_isbase = false;
            KPreviewWidgetBase::disconnectNotify(signal);
        } else if (kpreviewwidgetbase_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpreviewwidgetbase_disconnectnotify_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setSupportedMimeTypes(const QList<QString>& mimeTypes) {
        if (kpreviewwidgetbase_setsupportedmimetypes_isbase) {
            kpreviewwidgetbase_setsupportedmimetypes_isbase = false;
            KPreviewWidgetBase::setSupportedMimeTypes(mimeTypes);
        } else if (kpreviewwidgetbase_setsupportedmimetypes_callback != nullptr) {
            const QList<QString>& mimeTypes_ret = mimeTypes;
            // Convert QList<> from C++ memory to manually-managed C memory
            libqt_string* mimeTypes_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (mimeTypes_ret.size() + 1)));
            for (qsizetype i = 0; i < mimeTypes_ret.size(); ++i) {
                QString mimeTypes_lv_ret = mimeTypes_ret[i];
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray mimeTypes_lv_b = mimeTypes_lv_ret.toUtf8();
                libqt_string mimeTypes_lv_str;
                mimeTypes_lv_str.len = mimeTypes_lv_b.length();
                mimeTypes_lv_str.data = static_cast<const char*>(malloc(mimeTypes_lv_str.len + 1));
                memcpy((void*)mimeTypes_lv_str.data, mimeTypes_lv_b.data(), mimeTypes_lv_str.len);
                ((char*)mimeTypes_lv_str.data)[mimeTypes_lv_str.len] = '\0';
                mimeTypes_arr[i] = mimeTypes_lv_str;
            }
            libqt_list mimeTypes_out;
            mimeTypes_out.len = mimeTypes_ret.size();
            mimeTypes_out.data = static_cast<void*>(mimeTypes_arr);
            libqt_list /* of libqt_string */ cbval1 = mimeTypes_out;

            kpreviewwidgetbase_setsupportedmimetypes_callback(this, cbval1);
        } else {
            KPreviewWidgetBase::setSupportedMimeTypes(mimeTypes);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kpreviewwidgetbase_updatemicrofocus_isbase) {
            kpreviewwidgetbase_updatemicrofocus_isbase = false;
            KPreviewWidgetBase::updateMicroFocus();
        } else if (kpreviewwidgetbase_updatemicrofocus_callback != nullptr) {
            kpreviewwidgetbase_updatemicrofocus_callback();
        } else {
            KPreviewWidgetBase::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kpreviewwidgetbase_create_isbase) {
            kpreviewwidgetbase_create_isbase = false;
            KPreviewWidgetBase::create();
        } else if (kpreviewwidgetbase_create_callback != nullptr) {
            kpreviewwidgetbase_create_callback();
        } else {
            KPreviewWidgetBase::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kpreviewwidgetbase_destroy_isbase) {
            kpreviewwidgetbase_destroy_isbase = false;
            KPreviewWidgetBase::destroy();
        } else if (kpreviewwidgetbase_destroy_callback != nullptr) {
            kpreviewwidgetbase_destroy_callback();
        } else {
            KPreviewWidgetBase::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kpreviewwidgetbase_focusnextchild_isbase) {
            kpreviewwidgetbase_focusnextchild_isbase = false;
            return KPreviewWidgetBase::focusNextChild();
        } else if (kpreviewwidgetbase_focusnextchild_callback != nullptr) {
            bool callback_ret = kpreviewwidgetbase_focusnextchild_callback();
            return callback_ret;
        } else {
            return KPreviewWidgetBase::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kpreviewwidgetbase_focuspreviouschild_isbase) {
            kpreviewwidgetbase_focuspreviouschild_isbase = false;
            return KPreviewWidgetBase::focusPreviousChild();
        } else if (kpreviewwidgetbase_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kpreviewwidgetbase_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KPreviewWidgetBase::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kpreviewwidgetbase_sender_isbase) {
            kpreviewwidgetbase_sender_isbase = false;
            return KPreviewWidgetBase::sender();
        } else if (kpreviewwidgetbase_sender_callback != nullptr) {
            QObject* callback_ret = kpreviewwidgetbase_sender_callback();
            return callback_ret;
        } else {
            return KPreviewWidgetBase::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kpreviewwidgetbase_sendersignalindex_isbase) {
            kpreviewwidgetbase_sendersignalindex_isbase = false;
            return KPreviewWidgetBase::senderSignalIndex();
        } else if (kpreviewwidgetbase_sendersignalindex_callback != nullptr) {
            int callback_ret = kpreviewwidgetbase_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPreviewWidgetBase::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kpreviewwidgetbase_receivers_isbase) {
            kpreviewwidgetbase_receivers_isbase = false;
            return KPreviewWidgetBase::receivers(signal);
        } else if (kpreviewwidgetbase_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kpreviewwidgetbase_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPreviewWidgetBase::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kpreviewwidgetbase_issignalconnected_isbase) {
            kpreviewwidgetbase_issignalconnected_isbase = false;
            return KPreviewWidgetBase::isSignalConnected(signal);
        } else if (kpreviewwidgetbase_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kpreviewwidgetbase_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPreviewWidgetBase::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kpreviewwidgetbase_getdecodedmetricf_isbase) {
            kpreviewwidgetbase_getdecodedmetricf_isbase = false;
            return KPreviewWidgetBase::getDecodedMetricF(metricA, metricB);
        } else if (kpreviewwidgetbase_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kpreviewwidgetbase_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KPreviewWidgetBase::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KPreviewWidgetBase_Event(KPreviewWidgetBase* self, QEvent* event);
    friend bool KPreviewWidgetBase_QBaseEvent(KPreviewWidgetBase* self, QEvent* event);
    friend void KPreviewWidgetBase_MousePressEvent(KPreviewWidgetBase* self, QMouseEvent* event);
    friend void KPreviewWidgetBase_QBaseMousePressEvent(KPreviewWidgetBase* self, QMouseEvent* event);
    friend void KPreviewWidgetBase_MouseReleaseEvent(KPreviewWidgetBase* self, QMouseEvent* event);
    friend void KPreviewWidgetBase_QBaseMouseReleaseEvent(KPreviewWidgetBase* self, QMouseEvent* event);
    friend void KPreviewWidgetBase_MouseDoubleClickEvent(KPreviewWidgetBase* self, QMouseEvent* event);
    friend void KPreviewWidgetBase_QBaseMouseDoubleClickEvent(KPreviewWidgetBase* self, QMouseEvent* event);
    friend void KPreviewWidgetBase_MouseMoveEvent(KPreviewWidgetBase* self, QMouseEvent* event);
    friend void KPreviewWidgetBase_QBaseMouseMoveEvent(KPreviewWidgetBase* self, QMouseEvent* event);
    friend void KPreviewWidgetBase_WheelEvent(KPreviewWidgetBase* self, QWheelEvent* event);
    friend void KPreviewWidgetBase_QBaseWheelEvent(KPreviewWidgetBase* self, QWheelEvent* event);
    friend void KPreviewWidgetBase_KeyPressEvent(KPreviewWidgetBase* self, QKeyEvent* event);
    friend void KPreviewWidgetBase_QBaseKeyPressEvent(KPreviewWidgetBase* self, QKeyEvent* event);
    friend void KPreviewWidgetBase_KeyReleaseEvent(KPreviewWidgetBase* self, QKeyEvent* event);
    friend void KPreviewWidgetBase_QBaseKeyReleaseEvent(KPreviewWidgetBase* self, QKeyEvent* event);
    friend void KPreviewWidgetBase_FocusInEvent(KPreviewWidgetBase* self, QFocusEvent* event);
    friend void KPreviewWidgetBase_QBaseFocusInEvent(KPreviewWidgetBase* self, QFocusEvent* event);
    friend void KPreviewWidgetBase_FocusOutEvent(KPreviewWidgetBase* self, QFocusEvent* event);
    friend void KPreviewWidgetBase_QBaseFocusOutEvent(KPreviewWidgetBase* self, QFocusEvent* event);
    friend void KPreviewWidgetBase_EnterEvent(KPreviewWidgetBase* self, QEnterEvent* event);
    friend void KPreviewWidgetBase_QBaseEnterEvent(KPreviewWidgetBase* self, QEnterEvent* event);
    friend void KPreviewWidgetBase_LeaveEvent(KPreviewWidgetBase* self, QEvent* event);
    friend void KPreviewWidgetBase_QBaseLeaveEvent(KPreviewWidgetBase* self, QEvent* event);
    friend void KPreviewWidgetBase_PaintEvent(KPreviewWidgetBase* self, QPaintEvent* event);
    friend void KPreviewWidgetBase_QBasePaintEvent(KPreviewWidgetBase* self, QPaintEvent* event);
    friend void KPreviewWidgetBase_MoveEvent(KPreviewWidgetBase* self, QMoveEvent* event);
    friend void KPreviewWidgetBase_QBaseMoveEvent(KPreviewWidgetBase* self, QMoveEvent* event);
    friend void KPreviewWidgetBase_ResizeEvent(KPreviewWidgetBase* self, QResizeEvent* event);
    friend void KPreviewWidgetBase_QBaseResizeEvent(KPreviewWidgetBase* self, QResizeEvent* event);
    friend void KPreviewWidgetBase_CloseEvent(KPreviewWidgetBase* self, QCloseEvent* event);
    friend void KPreviewWidgetBase_QBaseCloseEvent(KPreviewWidgetBase* self, QCloseEvent* event);
    friend void KPreviewWidgetBase_ContextMenuEvent(KPreviewWidgetBase* self, QContextMenuEvent* event);
    friend void KPreviewWidgetBase_QBaseContextMenuEvent(KPreviewWidgetBase* self, QContextMenuEvent* event);
    friend void KPreviewWidgetBase_TabletEvent(KPreviewWidgetBase* self, QTabletEvent* event);
    friend void KPreviewWidgetBase_QBaseTabletEvent(KPreviewWidgetBase* self, QTabletEvent* event);
    friend void KPreviewWidgetBase_ActionEvent(KPreviewWidgetBase* self, QActionEvent* event);
    friend void KPreviewWidgetBase_QBaseActionEvent(KPreviewWidgetBase* self, QActionEvent* event);
    friend void KPreviewWidgetBase_DragEnterEvent(KPreviewWidgetBase* self, QDragEnterEvent* event);
    friend void KPreviewWidgetBase_QBaseDragEnterEvent(KPreviewWidgetBase* self, QDragEnterEvent* event);
    friend void KPreviewWidgetBase_DragMoveEvent(KPreviewWidgetBase* self, QDragMoveEvent* event);
    friend void KPreviewWidgetBase_QBaseDragMoveEvent(KPreviewWidgetBase* self, QDragMoveEvent* event);
    friend void KPreviewWidgetBase_DragLeaveEvent(KPreviewWidgetBase* self, QDragLeaveEvent* event);
    friend void KPreviewWidgetBase_QBaseDragLeaveEvent(KPreviewWidgetBase* self, QDragLeaveEvent* event);
    friend void KPreviewWidgetBase_DropEvent(KPreviewWidgetBase* self, QDropEvent* event);
    friend void KPreviewWidgetBase_QBaseDropEvent(KPreviewWidgetBase* self, QDropEvent* event);
    friend void KPreviewWidgetBase_ShowEvent(KPreviewWidgetBase* self, QShowEvent* event);
    friend void KPreviewWidgetBase_QBaseShowEvent(KPreviewWidgetBase* self, QShowEvent* event);
    friend void KPreviewWidgetBase_HideEvent(KPreviewWidgetBase* self, QHideEvent* event);
    friend void KPreviewWidgetBase_QBaseHideEvent(KPreviewWidgetBase* self, QHideEvent* event);
    friend bool KPreviewWidgetBase_NativeEvent(KPreviewWidgetBase* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KPreviewWidgetBase_QBaseNativeEvent(KPreviewWidgetBase* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KPreviewWidgetBase_ChangeEvent(KPreviewWidgetBase* self, QEvent* param1);
    friend void KPreviewWidgetBase_QBaseChangeEvent(KPreviewWidgetBase* self, QEvent* param1);
    friend int KPreviewWidgetBase_Metric(const KPreviewWidgetBase* self, int param1);
    friend int KPreviewWidgetBase_QBaseMetric(const KPreviewWidgetBase* self, int param1);
    friend void KPreviewWidgetBase_InitPainter(const KPreviewWidgetBase* self, QPainter* painter);
    friend void KPreviewWidgetBase_QBaseInitPainter(const KPreviewWidgetBase* self, QPainter* painter);
    friend QPaintDevice* KPreviewWidgetBase_Redirected(const KPreviewWidgetBase* self, QPoint* offset);
    friend QPaintDevice* KPreviewWidgetBase_QBaseRedirected(const KPreviewWidgetBase* self, QPoint* offset);
    friend QPainter* KPreviewWidgetBase_SharedPainter(const KPreviewWidgetBase* self);
    friend QPainter* KPreviewWidgetBase_QBaseSharedPainter(const KPreviewWidgetBase* self);
    friend void KPreviewWidgetBase_InputMethodEvent(KPreviewWidgetBase* self, QInputMethodEvent* param1);
    friend void KPreviewWidgetBase_QBaseInputMethodEvent(KPreviewWidgetBase* self, QInputMethodEvent* param1);
    friend bool KPreviewWidgetBase_FocusNextPrevChild(KPreviewWidgetBase* self, bool next);
    friend bool KPreviewWidgetBase_QBaseFocusNextPrevChild(KPreviewWidgetBase* self, bool next);
    friend void KPreviewWidgetBase_TimerEvent(KPreviewWidgetBase* self, QTimerEvent* event);
    friend void KPreviewWidgetBase_QBaseTimerEvent(KPreviewWidgetBase* self, QTimerEvent* event);
    friend void KPreviewWidgetBase_ChildEvent(KPreviewWidgetBase* self, QChildEvent* event);
    friend void KPreviewWidgetBase_QBaseChildEvent(KPreviewWidgetBase* self, QChildEvent* event);
    friend void KPreviewWidgetBase_CustomEvent(KPreviewWidgetBase* self, QEvent* event);
    friend void KPreviewWidgetBase_QBaseCustomEvent(KPreviewWidgetBase* self, QEvent* event);
    friend void KPreviewWidgetBase_ConnectNotify(KPreviewWidgetBase* self, const QMetaMethod* signal);
    friend void KPreviewWidgetBase_QBaseConnectNotify(KPreviewWidgetBase* self, const QMetaMethod* signal);
    friend void KPreviewWidgetBase_DisconnectNotify(KPreviewWidgetBase* self, const QMetaMethod* signal);
    friend void KPreviewWidgetBase_QBaseDisconnectNotify(KPreviewWidgetBase* self, const QMetaMethod* signal);
    friend void KPreviewWidgetBase_SetSupportedMimeTypes(KPreviewWidgetBase* self, const libqt_list /* of libqt_string */ mimeTypes);
    friend void KPreviewWidgetBase_QBaseSetSupportedMimeTypes(KPreviewWidgetBase* self, const libqt_list /* of libqt_string */ mimeTypes);
    friend void KPreviewWidgetBase_UpdateMicroFocus(KPreviewWidgetBase* self);
    friend void KPreviewWidgetBase_QBaseUpdateMicroFocus(KPreviewWidgetBase* self);
    friend void KPreviewWidgetBase_Create(KPreviewWidgetBase* self);
    friend void KPreviewWidgetBase_QBaseCreate(KPreviewWidgetBase* self);
    friend void KPreviewWidgetBase_Destroy(KPreviewWidgetBase* self);
    friend void KPreviewWidgetBase_QBaseDestroy(KPreviewWidgetBase* self);
    friend bool KPreviewWidgetBase_FocusNextChild(KPreviewWidgetBase* self);
    friend bool KPreviewWidgetBase_QBaseFocusNextChild(KPreviewWidgetBase* self);
    friend bool KPreviewWidgetBase_FocusPreviousChild(KPreviewWidgetBase* self);
    friend bool KPreviewWidgetBase_QBaseFocusPreviousChild(KPreviewWidgetBase* self);
    friend QObject* KPreviewWidgetBase_Sender(const KPreviewWidgetBase* self);
    friend QObject* KPreviewWidgetBase_QBaseSender(const KPreviewWidgetBase* self);
    friend int KPreviewWidgetBase_SenderSignalIndex(const KPreviewWidgetBase* self);
    friend int KPreviewWidgetBase_QBaseSenderSignalIndex(const KPreviewWidgetBase* self);
    friend int KPreviewWidgetBase_Receivers(const KPreviewWidgetBase* self, const char* signal);
    friend int KPreviewWidgetBase_QBaseReceivers(const KPreviewWidgetBase* self, const char* signal);
    friend bool KPreviewWidgetBase_IsSignalConnected(const KPreviewWidgetBase* self, const QMetaMethod* signal);
    friend bool KPreviewWidgetBase_QBaseIsSignalConnected(const KPreviewWidgetBase* self, const QMetaMethod* signal);
    friend double KPreviewWidgetBase_GetDecodedMetricF(const KPreviewWidgetBase* self, int metricA, int metricB);
    friend double KPreviewWidgetBase_QBaseGetDecodedMetricF(const KPreviewWidgetBase* self, int metricA, int metricB);
};

#endif
