#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKPREVIEWWIDGETBASE_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKPREVIEWWIDGETBASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPreviewWidgetBase so that we can call protected methods
class VirtualKPreviewWidgetBase : public KPreviewWidgetBase {

  public:
    // Virtual class boolean flag
    bool isVirtualKPreviewWidgetBase = true;

    // Virtual class public types (including callbacks)
    using KPreviewWidgetBase_MetaObject_Callback = QMetaObject* (*)();
    using KPreviewWidgetBase_Metacast_Callback = void* (*)(KPreviewWidgetBase*, const char*);
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
    using KPreviewWidgetBase_SetSupportedMimeTypes_Callback = void (*)(KPreviewWidgetBase*, const char**);
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
    KPreviewWidgetBase_MetaObject_Callback kpreviewwidgetbase_metaobject_callback = nullptr;
    KPreviewWidgetBase_Metacast_Callback kpreviewwidgetbase_metacast_callback = nullptr;
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
    mutable bool kpreviewwidgetbase_metaobject_isbase = false;
    mutable bool kpreviewwidgetbase_metacast_isbase = false;
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

    // Callback setters
    inline void setKPreviewWidgetBase_MetaObject_Callback(KPreviewWidgetBase_MetaObject_Callback cb) { kpreviewwidgetbase_metaobject_callback = cb; }
    inline void setKPreviewWidgetBase_Metacast_Callback(KPreviewWidgetBase_Metacast_Callback cb) { kpreviewwidgetbase_metacast_callback = cb; }
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
    inline void setKPreviewWidgetBase_MetaObject_IsBase(bool value) const { kpreviewwidgetbase_metaobject_isbase = value; }
    inline void setKPreviewWidgetBase_Metacast_IsBase(bool value) const { kpreviewwidgetbase_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (kpreviewwidgetbase_metaobject_isbase) {
            kpreviewwidgetbase_metaobject_isbase = false;
            return KPreviewWidgetBase::metaObject();
        }
        auto metaobject_cb = kpreviewwidgetbase_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KPreviewWidgetBase::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpreviewwidgetbase_metacast_isbase) {
            kpreviewwidgetbase_metacast_isbase = false;
            return KPreviewWidgetBase::qt_metacast(param1);
        }
        auto metacast_cb = kpreviewwidgetbase_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KPreviewWidgetBase::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpreviewwidgetbase_metacall_isbase) {
            kpreviewwidgetbase_metacall_isbase = false;
            return KPreviewWidgetBase::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kpreviewwidgetbase_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPreviewWidgetBase::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPreview(const QUrl& url) override {
        auto showpreview_cb = kpreviewwidgetbase_showpreview_callback;
        if (showpreview_cb) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            showpreview_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clearPreview() override {
        auto clearpreview_cb = kpreviewwidgetbase_clearpreview_callback;
        if (clearpreview_cb) {
            clearpreview_cb();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpreviewwidgetbase_devtype_isbase) {
            kpreviewwidgetbase_devtype_isbase = false;
            return KPreviewWidgetBase::devType();
        }
        auto devtype_cb = kpreviewwidgetbase_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KPreviewWidgetBase::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpreviewwidgetbase_setvisible_isbase) {
            kpreviewwidgetbase_setvisible_isbase = false;
            KPreviewWidgetBase::setVisible(visible);
            return;
        }
        auto setvisible_cb = kpreviewwidgetbase_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpreviewwidgetbase_sizehint_isbase) {
            kpreviewwidgetbase_sizehint_isbase = false;
            return KPreviewWidgetBase::sizeHint();
        }
        auto sizehint_cb = kpreviewwidgetbase_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KPreviewWidgetBase::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpreviewwidgetbase_minimumsizehint_isbase) {
            kpreviewwidgetbase_minimumsizehint_isbase = false;
            return KPreviewWidgetBase::minimumSizeHint();
        }
        auto minimumsizehint_cb = kpreviewwidgetbase_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KPreviewWidgetBase::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpreviewwidgetbase_heightforwidth_isbase) {
            kpreviewwidgetbase_heightforwidth_isbase = false;
            return KPreviewWidgetBase::heightForWidth(param1);
        }
        auto heightforwidth_cb = kpreviewwidgetbase_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPreviewWidgetBase::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpreviewwidgetbase_hasheightforwidth_isbase) {
            kpreviewwidgetbase_hasheightforwidth_isbase = false;
            return KPreviewWidgetBase::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kpreviewwidgetbase_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KPreviewWidgetBase::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpreviewwidgetbase_paintengine_isbase) {
            kpreviewwidgetbase_paintengine_isbase = false;
            return KPreviewWidgetBase::paintEngine();
        }
        auto paintengine_cb = kpreviewwidgetbase_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KPreviewWidgetBase::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpreviewwidgetbase_event_isbase) {
            kpreviewwidgetbase_event_isbase = false;
            return KPreviewWidgetBase::event(event);
        }
        auto event_cb = kpreviewwidgetbase_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KPreviewWidgetBase::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpreviewwidgetbase_mousepressevent_isbase) {
            kpreviewwidgetbase_mousepressevent_isbase = false;
            KPreviewWidgetBase::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kpreviewwidgetbase_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpreviewwidgetbase_mousereleaseevent_isbase) {
            kpreviewwidgetbase_mousereleaseevent_isbase = false;
            KPreviewWidgetBase::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kpreviewwidgetbase_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpreviewwidgetbase_mousedoubleclickevent_isbase) {
            kpreviewwidgetbase_mousedoubleclickevent_isbase = false;
            KPreviewWidgetBase::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kpreviewwidgetbase_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpreviewwidgetbase_mousemoveevent_isbase) {
            kpreviewwidgetbase_mousemoveevent_isbase = false;
            KPreviewWidgetBase::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kpreviewwidgetbase_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpreviewwidgetbase_wheelevent_isbase) {
            kpreviewwidgetbase_wheelevent_isbase = false;
            KPreviewWidgetBase::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kpreviewwidgetbase_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kpreviewwidgetbase_keypressevent_isbase) {
            kpreviewwidgetbase_keypressevent_isbase = false;
            KPreviewWidgetBase::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = kpreviewwidgetbase_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpreviewwidgetbase_keyreleaseevent_isbase) {
            kpreviewwidgetbase_keyreleaseevent_isbase = false;
            KPreviewWidgetBase::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kpreviewwidgetbase_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpreviewwidgetbase_focusinevent_isbase) {
            kpreviewwidgetbase_focusinevent_isbase = false;
            KPreviewWidgetBase::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kpreviewwidgetbase_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpreviewwidgetbase_focusoutevent_isbase) {
            kpreviewwidgetbase_focusoutevent_isbase = false;
            KPreviewWidgetBase::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kpreviewwidgetbase_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpreviewwidgetbase_enterevent_isbase) {
            kpreviewwidgetbase_enterevent_isbase = false;
            KPreviewWidgetBase::enterEvent(event);
            return;
        }
        auto enterevent_cb = kpreviewwidgetbase_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpreviewwidgetbase_leaveevent_isbase) {
            kpreviewwidgetbase_leaveevent_isbase = false;
            KPreviewWidgetBase::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kpreviewwidgetbase_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpreviewwidgetbase_paintevent_isbase) {
            kpreviewwidgetbase_paintevent_isbase = false;
            KPreviewWidgetBase::paintEvent(event);
            return;
        }
        auto paintevent_cb = kpreviewwidgetbase_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpreviewwidgetbase_moveevent_isbase) {
            kpreviewwidgetbase_moveevent_isbase = false;
            KPreviewWidgetBase::moveEvent(event);
            return;
        }
        auto moveevent_cb = kpreviewwidgetbase_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kpreviewwidgetbase_resizeevent_isbase) {
            kpreviewwidgetbase_resizeevent_isbase = false;
            KPreviewWidgetBase::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = kpreviewwidgetbase_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kpreviewwidgetbase_closeevent_isbase) {
            kpreviewwidgetbase_closeevent_isbase = false;
            KPreviewWidgetBase::closeEvent(event);
            return;
        }
        auto closeevent_cb = kpreviewwidgetbase_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kpreviewwidgetbase_contextmenuevent_isbase) {
            kpreviewwidgetbase_contextmenuevent_isbase = false;
            KPreviewWidgetBase::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = kpreviewwidgetbase_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpreviewwidgetbase_tabletevent_isbase) {
            kpreviewwidgetbase_tabletevent_isbase = false;
            KPreviewWidgetBase::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kpreviewwidgetbase_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpreviewwidgetbase_actionevent_isbase) {
            kpreviewwidgetbase_actionevent_isbase = false;
            KPreviewWidgetBase::actionEvent(event);
            return;
        }
        auto actionevent_cb = kpreviewwidgetbase_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpreviewwidgetbase_dragenterevent_isbase) {
            kpreviewwidgetbase_dragenterevent_isbase = false;
            KPreviewWidgetBase::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kpreviewwidgetbase_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpreviewwidgetbase_dragmoveevent_isbase) {
            kpreviewwidgetbase_dragmoveevent_isbase = false;
            KPreviewWidgetBase::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kpreviewwidgetbase_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpreviewwidgetbase_dragleaveevent_isbase) {
            kpreviewwidgetbase_dragleaveevent_isbase = false;
            KPreviewWidgetBase::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kpreviewwidgetbase_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpreviewwidgetbase_dropevent_isbase) {
            kpreviewwidgetbase_dropevent_isbase = false;
            KPreviewWidgetBase::dropEvent(event);
            return;
        }
        auto dropevent_cb = kpreviewwidgetbase_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kpreviewwidgetbase_showevent_isbase) {
            kpreviewwidgetbase_showevent_isbase = false;
            KPreviewWidgetBase::showEvent(event);
            return;
        }
        auto showevent_cb = kpreviewwidgetbase_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpreviewwidgetbase_hideevent_isbase) {
            kpreviewwidgetbase_hideevent_isbase = false;
            KPreviewWidgetBase::hideEvent(event);
            return;
        }
        auto hideevent_cb = kpreviewwidgetbase_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpreviewwidgetbase_nativeevent_isbase) {
            kpreviewwidgetbase_nativeevent_isbase = false;
            return KPreviewWidgetBase::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kpreviewwidgetbase_nativeevent_callback;
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
        return KPreviewWidgetBase::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpreviewwidgetbase_changeevent_isbase) {
            kpreviewwidgetbase_changeevent_isbase = false;
            KPreviewWidgetBase::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kpreviewwidgetbase_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpreviewwidgetbase_metric_isbase) {
            kpreviewwidgetbase_metric_isbase = false;
            return KPreviewWidgetBase::metric(param1);
        }
        auto metric_cb = kpreviewwidgetbase_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPreviewWidgetBase::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpreviewwidgetbase_initpainter_isbase) {
            kpreviewwidgetbase_initpainter_isbase = false;
            KPreviewWidgetBase::initPainter(painter);
            return;
        }
        auto initpainter_cb = kpreviewwidgetbase_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpreviewwidgetbase_redirected_isbase) {
            kpreviewwidgetbase_redirected_isbase = false;
            return KPreviewWidgetBase::redirected(offset);
        }
        auto redirected_cb = kpreviewwidgetbase_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KPreviewWidgetBase::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpreviewwidgetbase_sharedpainter_isbase) {
            kpreviewwidgetbase_sharedpainter_isbase = false;
            return KPreviewWidgetBase::sharedPainter();
        }
        auto sharedpainter_cb = kpreviewwidgetbase_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KPreviewWidgetBase::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpreviewwidgetbase_inputmethodevent_isbase) {
            kpreviewwidgetbase_inputmethodevent_isbase = false;
            KPreviewWidgetBase::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kpreviewwidgetbase_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpreviewwidgetbase_inputmethodquery_isbase) {
            kpreviewwidgetbase_inputmethodquery_isbase = false;
            return KPreviewWidgetBase::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kpreviewwidgetbase_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KPreviewWidgetBase::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpreviewwidgetbase_focusnextprevchild_isbase) {
            kpreviewwidgetbase_focusnextprevchild_isbase = false;
            return KPreviewWidgetBase::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kpreviewwidgetbase_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KPreviewWidgetBase::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpreviewwidgetbase_eventfilter_isbase) {
            kpreviewwidgetbase_eventfilter_isbase = false;
            return KPreviewWidgetBase::eventFilter(watched, event);
        }
        auto eventfilter_cb = kpreviewwidgetbase_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPreviewWidgetBase::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpreviewwidgetbase_timerevent_isbase) {
            kpreviewwidgetbase_timerevent_isbase = false;
            KPreviewWidgetBase::timerEvent(event);
            return;
        }
        auto timerevent_cb = kpreviewwidgetbase_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpreviewwidgetbase_childevent_isbase) {
            kpreviewwidgetbase_childevent_isbase = false;
            KPreviewWidgetBase::childEvent(event);
            return;
        }
        auto childevent_cb = kpreviewwidgetbase_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpreviewwidgetbase_customevent_isbase) {
            kpreviewwidgetbase_customevent_isbase = false;
            KPreviewWidgetBase::customEvent(event);
            return;
        }
        auto customevent_cb = kpreviewwidgetbase_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpreviewwidgetbase_connectnotify_isbase) {
            kpreviewwidgetbase_connectnotify_isbase = false;
            KPreviewWidgetBase::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kpreviewwidgetbase_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpreviewwidgetbase_disconnectnotify_isbase) {
            kpreviewwidgetbase_disconnectnotify_isbase = false;
            KPreviewWidgetBase::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kpreviewwidgetbase_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KPreviewWidgetBase::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setSupportedMimeTypes(const QList<QString>& mimeTypes) {
        if (kpreviewwidgetbase_setsupportedmimetypes_isbase) {
            kpreviewwidgetbase_setsupportedmimetypes_isbase = false;
            KPreviewWidgetBase::setSupportedMimeTypes(mimeTypes);
            return;
        }
        auto setsupportedmimetypes_cb = kpreviewwidgetbase_setsupportedmimetypes_callback;
        if (setsupportedmimetypes_cb) {
            const QList<QString>& mimeTypes_ret = mimeTypes;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** mimeTypes_arr = static_cast<const char**>(malloc(sizeof(const char*) * (mimeTypes_ret.size() + 1)));
            for (qsizetype i = 0; i < mimeTypes_ret.size(); ++i) {
                QByteArray mimeTypes_b = mimeTypes_ret[i].toUtf8();
                auto mimeTypes_str_len = mimeTypes_b.length();
                char* mimeTypes_str = static_cast<char*>(malloc(mimeTypes_str_len + 1));
                memcpy(mimeTypes_str, mimeTypes_b.data(), mimeTypes_str_len);
                mimeTypes_str[mimeTypes_str_len] = '\0';
                mimeTypes_arr[i] = mimeTypes_str;
            }
            // Append sentinel null terminator to the list
            mimeTypes_arr[mimeTypes_ret.size()] = nullptr;
            const char** cbval1 = mimeTypes_arr;

            setsupportedmimetypes_cb(this, cbval1);
            libqt_free(mimeTypes_arr);
            return;
        }
        KPreviewWidgetBase::setSupportedMimeTypes(mimeTypes);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kpreviewwidgetbase_updatemicrofocus_isbase) {
            kpreviewwidgetbase_updatemicrofocus_isbase = false;
            KPreviewWidgetBase::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kpreviewwidgetbase_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KPreviewWidgetBase::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kpreviewwidgetbase_create_isbase) {
            kpreviewwidgetbase_create_isbase = false;
            KPreviewWidgetBase::create();
            return;
        }
        auto create_cb = kpreviewwidgetbase_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KPreviewWidgetBase::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kpreviewwidgetbase_destroy_isbase) {
            kpreviewwidgetbase_destroy_isbase = false;
            KPreviewWidgetBase::destroy();
            return;
        }
        auto destroy_cb = kpreviewwidgetbase_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KPreviewWidgetBase::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kpreviewwidgetbase_focusnextchild_isbase) {
            kpreviewwidgetbase_focusnextchild_isbase = false;
            return KPreviewWidgetBase::focusNextChild();
        }
        auto focusnextchild_cb = kpreviewwidgetbase_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KPreviewWidgetBase::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kpreviewwidgetbase_focuspreviouschild_isbase) {
            kpreviewwidgetbase_focuspreviouschild_isbase = false;
            return KPreviewWidgetBase::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kpreviewwidgetbase_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KPreviewWidgetBase::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kpreviewwidgetbase_sender_isbase) {
            kpreviewwidgetbase_sender_isbase = false;
            return KPreviewWidgetBase::sender();
        }
        auto sender_cb = kpreviewwidgetbase_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KPreviewWidgetBase::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kpreviewwidgetbase_sendersignalindex_isbase) {
            kpreviewwidgetbase_sendersignalindex_isbase = false;
            return KPreviewWidgetBase::senderSignalIndex();
        }
        auto sendersignalindex_cb = kpreviewwidgetbase_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KPreviewWidgetBase::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kpreviewwidgetbase_receivers_isbase) {
            kpreviewwidgetbase_receivers_isbase = false;
            return KPreviewWidgetBase::receivers(signal);
        }
        auto receivers_cb = kpreviewwidgetbase_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPreviewWidgetBase::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kpreviewwidgetbase_issignalconnected_isbase) {
            kpreviewwidgetbase_issignalconnected_isbase = false;
            return KPreviewWidgetBase::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kpreviewwidgetbase_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KPreviewWidgetBase::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kpreviewwidgetbase_getdecodedmetricf_isbase) {
            kpreviewwidgetbase_getdecodedmetricf_isbase = false;
            return KPreviewWidgetBase::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kpreviewwidgetbase_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KPreviewWidgetBase::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool KPreviewWidgetBase_Event(KPreviewWidgetBase* self, QEvent* event);
    friend bool KPreviewWidgetBase_SuperEvent(KPreviewWidgetBase* self, QEvent* event);
    friend void KPreviewWidgetBase_MousePressEvent(KPreviewWidgetBase* self, QMouseEvent* event);
    friend void KPreviewWidgetBase_SuperMousePressEvent(KPreviewWidgetBase* self, QMouseEvent* event);
    friend void KPreviewWidgetBase_MouseReleaseEvent(KPreviewWidgetBase* self, QMouseEvent* event);
    friend void KPreviewWidgetBase_SuperMouseReleaseEvent(KPreviewWidgetBase* self, QMouseEvent* event);
    friend void KPreviewWidgetBase_MouseDoubleClickEvent(KPreviewWidgetBase* self, QMouseEvent* event);
    friend void KPreviewWidgetBase_SuperMouseDoubleClickEvent(KPreviewWidgetBase* self, QMouseEvent* event);
    friend void KPreviewWidgetBase_MouseMoveEvent(KPreviewWidgetBase* self, QMouseEvent* event);
    friend void KPreviewWidgetBase_SuperMouseMoveEvent(KPreviewWidgetBase* self, QMouseEvent* event);
    friend void KPreviewWidgetBase_WheelEvent(KPreviewWidgetBase* self, QWheelEvent* event);
    friend void KPreviewWidgetBase_SuperWheelEvent(KPreviewWidgetBase* self, QWheelEvent* event);
    friend void KPreviewWidgetBase_KeyPressEvent(KPreviewWidgetBase* self, QKeyEvent* event);
    friend void KPreviewWidgetBase_SuperKeyPressEvent(KPreviewWidgetBase* self, QKeyEvent* event);
    friend void KPreviewWidgetBase_KeyReleaseEvent(KPreviewWidgetBase* self, QKeyEvent* event);
    friend void KPreviewWidgetBase_SuperKeyReleaseEvent(KPreviewWidgetBase* self, QKeyEvent* event);
    friend void KPreviewWidgetBase_FocusInEvent(KPreviewWidgetBase* self, QFocusEvent* event);
    friend void KPreviewWidgetBase_SuperFocusInEvent(KPreviewWidgetBase* self, QFocusEvent* event);
    friend void KPreviewWidgetBase_FocusOutEvent(KPreviewWidgetBase* self, QFocusEvent* event);
    friend void KPreviewWidgetBase_SuperFocusOutEvent(KPreviewWidgetBase* self, QFocusEvent* event);
    friend void KPreviewWidgetBase_EnterEvent(KPreviewWidgetBase* self, QEnterEvent* event);
    friend void KPreviewWidgetBase_SuperEnterEvent(KPreviewWidgetBase* self, QEnterEvent* event);
    friend void KPreviewWidgetBase_LeaveEvent(KPreviewWidgetBase* self, QEvent* event);
    friend void KPreviewWidgetBase_SuperLeaveEvent(KPreviewWidgetBase* self, QEvent* event);
    friend void KPreviewWidgetBase_PaintEvent(KPreviewWidgetBase* self, QPaintEvent* event);
    friend void KPreviewWidgetBase_SuperPaintEvent(KPreviewWidgetBase* self, QPaintEvent* event);
    friend void KPreviewWidgetBase_MoveEvent(KPreviewWidgetBase* self, QMoveEvent* event);
    friend void KPreviewWidgetBase_SuperMoveEvent(KPreviewWidgetBase* self, QMoveEvent* event);
    friend void KPreviewWidgetBase_ResizeEvent(KPreviewWidgetBase* self, QResizeEvent* event);
    friend void KPreviewWidgetBase_SuperResizeEvent(KPreviewWidgetBase* self, QResizeEvent* event);
    friend void KPreviewWidgetBase_CloseEvent(KPreviewWidgetBase* self, QCloseEvent* event);
    friend void KPreviewWidgetBase_SuperCloseEvent(KPreviewWidgetBase* self, QCloseEvent* event);
    friend void KPreviewWidgetBase_ContextMenuEvent(KPreviewWidgetBase* self, QContextMenuEvent* event);
    friend void KPreviewWidgetBase_SuperContextMenuEvent(KPreviewWidgetBase* self, QContextMenuEvent* event);
    friend void KPreviewWidgetBase_TabletEvent(KPreviewWidgetBase* self, QTabletEvent* event);
    friend void KPreviewWidgetBase_SuperTabletEvent(KPreviewWidgetBase* self, QTabletEvent* event);
    friend void KPreviewWidgetBase_ActionEvent(KPreviewWidgetBase* self, QActionEvent* event);
    friend void KPreviewWidgetBase_SuperActionEvent(KPreviewWidgetBase* self, QActionEvent* event);
    friend void KPreviewWidgetBase_DragEnterEvent(KPreviewWidgetBase* self, QDragEnterEvent* event);
    friend void KPreviewWidgetBase_SuperDragEnterEvent(KPreviewWidgetBase* self, QDragEnterEvent* event);
    friend void KPreviewWidgetBase_DragMoveEvent(KPreviewWidgetBase* self, QDragMoveEvent* event);
    friend void KPreviewWidgetBase_SuperDragMoveEvent(KPreviewWidgetBase* self, QDragMoveEvent* event);
    friend void KPreviewWidgetBase_DragLeaveEvent(KPreviewWidgetBase* self, QDragLeaveEvent* event);
    friend void KPreviewWidgetBase_SuperDragLeaveEvent(KPreviewWidgetBase* self, QDragLeaveEvent* event);
    friend void KPreviewWidgetBase_DropEvent(KPreviewWidgetBase* self, QDropEvent* event);
    friend void KPreviewWidgetBase_SuperDropEvent(KPreviewWidgetBase* self, QDropEvent* event);
    friend void KPreviewWidgetBase_ShowEvent(KPreviewWidgetBase* self, QShowEvent* event);
    friend void KPreviewWidgetBase_SuperShowEvent(KPreviewWidgetBase* self, QShowEvent* event);
    friend void KPreviewWidgetBase_HideEvent(KPreviewWidgetBase* self, QHideEvent* event);
    friend void KPreviewWidgetBase_SuperHideEvent(KPreviewWidgetBase* self, QHideEvent* event);
    friend bool KPreviewWidgetBase_NativeEvent(KPreviewWidgetBase* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KPreviewWidgetBase_SuperNativeEvent(KPreviewWidgetBase* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KPreviewWidgetBase_ChangeEvent(KPreviewWidgetBase* self, QEvent* param1);
    friend void KPreviewWidgetBase_SuperChangeEvent(KPreviewWidgetBase* self, QEvent* param1);
    friend int KPreviewWidgetBase_Metric(const KPreviewWidgetBase* self, int param1);
    friend int KPreviewWidgetBase_SuperMetric(const KPreviewWidgetBase* self, int param1);
    friend void KPreviewWidgetBase_InitPainter(const KPreviewWidgetBase* self, QPainter* painter);
    friend void KPreviewWidgetBase_SuperInitPainter(const KPreviewWidgetBase* self, QPainter* painter);
    friend QPaintDevice* KPreviewWidgetBase_Redirected(const KPreviewWidgetBase* self, QPoint* offset);
    friend QPaintDevice* KPreviewWidgetBase_SuperRedirected(const KPreviewWidgetBase* self, QPoint* offset);
    friend QPainter* KPreviewWidgetBase_SharedPainter(const KPreviewWidgetBase* self);
    friend QPainter* KPreviewWidgetBase_SuperSharedPainter(const KPreviewWidgetBase* self);
    friend void KPreviewWidgetBase_InputMethodEvent(KPreviewWidgetBase* self, QInputMethodEvent* param1);
    friend void KPreviewWidgetBase_SuperInputMethodEvent(KPreviewWidgetBase* self, QInputMethodEvent* param1);
    friend bool KPreviewWidgetBase_FocusNextPrevChild(KPreviewWidgetBase* self, bool next);
    friend bool KPreviewWidgetBase_SuperFocusNextPrevChild(KPreviewWidgetBase* self, bool next);
    friend void KPreviewWidgetBase_TimerEvent(KPreviewWidgetBase* self, QTimerEvent* event);
    friend void KPreviewWidgetBase_SuperTimerEvent(KPreviewWidgetBase* self, QTimerEvent* event);
    friend void KPreviewWidgetBase_ChildEvent(KPreviewWidgetBase* self, QChildEvent* event);
    friend void KPreviewWidgetBase_SuperChildEvent(KPreviewWidgetBase* self, QChildEvent* event);
    friend void KPreviewWidgetBase_CustomEvent(KPreviewWidgetBase* self, QEvent* event);
    friend void KPreviewWidgetBase_SuperCustomEvent(KPreviewWidgetBase* self, QEvent* event);
    friend void KPreviewWidgetBase_ConnectNotify(KPreviewWidgetBase* self, const QMetaMethod* signal);
    friend void KPreviewWidgetBase_SuperConnectNotify(KPreviewWidgetBase* self, const QMetaMethod* signal);
    friend void KPreviewWidgetBase_DisconnectNotify(KPreviewWidgetBase* self, const QMetaMethod* signal);
    friend void KPreviewWidgetBase_SuperDisconnectNotify(KPreviewWidgetBase* self, const QMetaMethod* signal);
    friend void KPreviewWidgetBase_SetSupportedMimeTypes(KPreviewWidgetBase* self, const libqt_list /* of libqt_string */ mimeTypes);
    friend void KPreviewWidgetBase_SuperSetSupportedMimeTypes(KPreviewWidgetBase* self, const libqt_list /* of libqt_string */ mimeTypes);
    friend void KPreviewWidgetBase_UpdateMicroFocus(KPreviewWidgetBase* self);
    friend void KPreviewWidgetBase_SuperUpdateMicroFocus(KPreviewWidgetBase* self);
    friend void KPreviewWidgetBase_Create(KPreviewWidgetBase* self);
    friend void KPreviewWidgetBase_SuperCreate(KPreviewWidgetBase* self);
    friend void KPreviewWidgetBase_Destroy(KPreviewWidgetBase* self);
    friend void KPreviewWidgetBase_SuperDestroy(KPreviewWidgetBase* self);
    friend bool KPreviewWidgetBase_FocusNextChild(KPreviewWidgetBase* self);
    friend bool KPreviewWidgetBase_SuperFocusNextChild(KPreviewWidgetBase* self);
    friend bool KPreviewWidgetBase_FocusPreviousChild(KPreviewWidgetBase* self);
    friend bool KPreviewWidgetBase_SuperFocusPreviousChild(KPreviewWidgetBase* self);
    friend QObject* KPreviewWidgetBase_Sender(const KPreviewWidgetBase* self);
    friend QObject* KPreviewWidgetBase_SuperSender(const KPreviewWidgetBase* self);
    friend int KPreviewWidgetBase_SenderSignalIndex(const KPreviewWidgetBase* self);
    friend int KPreviewWidgetBase_SuperSenderSignalIndex(const KPreviewWidgetBase* self);
    friend int KPreviewWidgetBase_Receivers(const KPreviewWidgetBase* self, const char* signal);
    friend int KPreviewWidgetBase_SuperReceivers(const KPreviewWidgetBase* self, const char* signal);
    friend bool KPreviewWidgetBase_IsSignalConnected(const KPreviewWidgetBase* self, const QMetaMethod* signal);
    friend bool KPreviewWidgetBase_SuperIsSignalConnected(const KPreviewWidgetBase* self, const QMetaMethod* signal);
    friend double KPreviewWidgetBase_GetDecodedMetricF(const KPreviewWidgetBase* self, int metricA, int metricB);
    friend double KPreviewWidgetBase_SuperGetDecodedMetricF(const KPreviewWidgetBase* self, int metricA, int metricB);
};

#endif
