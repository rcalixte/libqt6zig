#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKIMAGEFILEPREVIEW_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKIMAGEFILEPREVIEW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KImageFilePreview so that we can call protected methods
class VirtualKImageFilePreview final : public KImageFilePreview {

  public:
    // Virtual class boolean flag
    bool isVirtualKImageFilePreview = true;

    // Virtual class public types (including callbacks)
    using KImageFilePreview_MetaObject_Callback = QMetaObject* (*)();
    using KImageFilePreview_Metacast_Callback = void* (*)(KImageFilePreview*, const char*);
    using KImageFilePreview_Metacall_Callback = int (*)(KImageFilePreview*, int, int, void**);
    using KImageFilePreview_SizeHint_Callback = QSize* (*)();
    using KImageFilePreview_ShowPreview_Callback = void (*)(KImageFilePreview*, QUrl*);
    using KImageFilePreview_ClearPreview_Callback = void (*)();
    using KImageFilePreview_GotPreview_Callback = void (*)(KImageFilePreview*, KFileItem*, QPixmap*);
    using KImageFilePreview_ResizeEvent_Callback = void (*)(KImageFilePreview*, QResizeEvent*);
    using KImageFilePreview_CreateJob_Callback = KIO__PreviewJob* (*)(KImageFilePreview*, QUrl*, int, int);
    using KImageFilePreview_DevType_Callback = int (*)();
    using KImageFilePreview_SetVisible_Callback = void (*)(KImageFilePreview*, bool);
    using KImageFilePreview_MinimumSizeHint_Callback = QSize* (*)();
    using KImageFilePreview_HeightForWidth_Callback = int (*)(const KImageFilePreview*, int);
    using KImageFilePreview_HasHeightForWidth_Callback = bool (*)();
    using KImageFilePreview_PaintEngine_Callback = QPaintEngine* (*)();
    using KImageFilePreview_Event_Callback = bool (*)(KImageFilePreview*, QEvent*);
    using KImageFilePreview_MousePressEvent_Callback = void (*)(KImageFilePreview*, QMouseEvent*);
    using KImageFilePreview_MouseReleaseEvent_Callback = void (*)(KImageFilePreview*, QMouseEvent*);
    using KImageFilePreview_MouseDoubleClickEvent_Callback = void (*)(KImageFilePreview*, QMouseEvent*);
    using KImageFilePreview_MouseMoveEvent_Callback = void (*)(KImageFilePreview*, QMouseEvent*);
    using KImageFilePreview_WheelEvent_Callback = void (*)(KImageFilePreview*, QWheelEvent*);
    using KImageFilePreview_KeyPressEvent_Callback = void (*)(KImageFilePreview*, QKeyEvent*);
    using KImageFilePreview_KeyReleaseEvent_Callback = void (*)(KImageFilePreview*, QKeyEvent*);
    using KImageFilePreview_FocusInEvent_Callback = void (*)(KImageFilePreview*, QFocusEvent*);
    using KImageFilePreview_FocusOutEvent_Callback = void (*)(KImageFilePreview*, QFocusEvent*);
    using KImageFilePreview_EnterEvent_Callback = void (*)(KImageFilePreview*, QEnterEvent*);
    using KImageFilePreview_LeaveEvent_Callback = void (*)(KImageFilePreview*, QEvent*);
    using KImageFilePreview_PaintEvent_Callback = void (*)(KImageFilePreview*, QPaintEvent*);
    using KImageFilePreview_MoveEvent_Callback = void (*)(KImageFilePreview*, QMoveEvent*);
    using KImageFilePreview_CloseEvent_Callback = void (*)(KImageFilePreview*, QCloseEvent*);
    using KImageFilePreview_ContextMenuEvent_Callback = void (*)(KImageFilePreview*, QContextMenuEvent*);
    using KImageFilePreview_TabletEvent_Callback = void (*)(KImageFilePreview*, QTabletEvent*);
    using KImageFilePreview_ActionEvent_Callback = void (*)(KImageFilePreview*, QActionEvent*);
    using KImageFilePreview_DragEnterEvent_Callback = void (*)(KImageFilePreview*, QDragEnterEvent*);
    using KImageFilePreview_DragMoveEvent_Callback = void (*)(KImageFilePreview*, QDragMoveEvent*);
    using KImageFilePreview_DragLeaveEvent_Callback = void (*)(KImageFilePreview*, QDragLeaveEvent*);
    using KImageFilePreview_DropEvent_Callback = void (*)(KImageFilePreview*, QDropEvent*);
    using KImageFilePreview_ShowEvent_Callback = void (*)(KImageFilePreview*, QShowEvent*);
    using KImageFilePreview_HideEvent_Callback = void (*)(KImageFilePreview*, QHideEvent*);
    using KImageFilePreview_NativeEvent_Callback = bool (*)(KImageFilePreview*, libqt_string, void*, intptr_t*);
    using KImageFilePreview_ChangeEvent_Callback = void (*)(KImageFilePreview*, QEvent*);
    using KImageFilePreview_Metric_Callback = int (*)(const KImageFilePreview*, int);
    using KImageFilePreview_InitPainter_Callback = void (*)(const KImageFilePreview*, QPainter*);
    using KImageFilePreview_Redirected_Callback = QPaintDevice* (*)(const KImageFilePreview*, QPoint*);
    using KImageFilePreview_SharedPainter_Callback = QPainter* (*)();
    using KImageFilePreview_InputMethodEvent_Callback = void (*)(KImageFilePreview*, QInputMethodEvent*);
    using KImageFilePreview_InputMethodQuery_Callback = QVariant* (*)(const KImageFilePreview*, int);
    using KImageFilePreview_FocusNextPrevChild_Callback = bool (*)(KImageFilePreview*, bool);
    using KImageFilePreview_EventFilter_Callback = bool (*)(KImageFilePreview*, QObject*, QEvent*);
    using KImageFilePreview_TimerEvent_Callback = void (*)(KImageFilePreview*, QTimerEvent*);
    using KImageFilePreview_ChildEvent_Callback = void (*)(KImageFilePreview*, QChildEvent*);
    using KImageFilePreview_CustomEvent_Callback = void (*)(KImageFilePreview*, QEvent*);
    using KImageFilePreview_ConnectNotify_Callback = void (*)(KImageFilePreview*, QMetaMethod*);
    using KImageFilePreview_DisconnectNotify_Callback = void (*)(KImageFilePreview*, QMetaMethod*);
    using KImageFilePreview_ShowPreview2_Callback = void (*)();
    using KImageFilePreview_ShowPreview3_Callback = void (*)(KImageFilePreview*, QUrl*, bool);
    using KImageFilePreview_SetSupportedMimeTypes_Callback = void (*)(KImageFilePreview*, const char**);
    using KImageFilePreview_UpdateMicroFocus_Callback = void (*)();
    using KImageFilePreview_Create_Callback = void (*)();
    using KImageFilePreview_Destroy_Callback = void (*)();
    using KImageFilePreview_FocusNextChild_Callback = bool (*)();
    using KImageFilePreview_FocusPreviousChild_Callback = bool (*)();
    using KImageFilePreview_Sender_Callback = QObject* (*)();
    using KImageFilePreview_SenderSignalIndex_Callback = int (*)();
    using KImageFilePreview_Receivers_Callback = int (*)(const KImageFilePreview*, const char*);
    using KImageFilePreview_IsSignalConnected_Callback = bool (*)(const KImageFilePreview*, QMetaMethod*);
    using KImageFilePreview_GetDecodedMetricF_Callback = double (*)(const KImageFilePreview*, int, int);

  protected:
    // Instance callback storage
    KImageFilePreview_MetaObject_Callback kimagefilepreview_metaobject_callback = nullptr;
    KImageFilePreview_Metacast_Callback kimagefilepreview_metacast_callback = nullptr;
    KImageFilePreview_Metacall_Callback kimagefilepreview_metacall_callback = nullptr;
    KImageFilePreview_SizeHint_Callback kimagefilepreview_sizehint_callback = nullptr;
    KImageFilePreview_ShowPreview_Callback kimagefilepreview_showpreview_callback = nullptr;
    KImageFilePreview_ClearPreview_Callback kimagefilepreview_clearpreview_callback = nullptr;
    KImageFilePreview_GotPreview_Callback kimagefilepreview_gotpreview_callback = nullptr;
    KImageFilePreview_ResizeEvent_Callback kimagefilepreview_resizeevent_callback = nullptr;
    KImageFilePreview_CreateJob_Callback kimagefilepreview_createjob_callback = nullptr;
    KImageFilePreview_DevType_Callback kimagefilepreview_devtype_callback = nullptr;
    KImageFilePreview_SetVisible_Callback kimagefilepreview_setvisible_callback = nullptr;
    KImageFilePreview_MinimumSizeHint_Callback kimagefilepreview_minimumsizehint_callback = nullptr;
    KImageFilePreview_HeightForWidth_Callback kimagefilepreview_heightforwidth_callback = nullptr;
    KImageFilePreview_HasHeightForWidth_Callback kimagefilepreview_hasheightforwidth_callback = nullptr;
    KImageFilePreview_PaintEngine_Callback kimagefilepreview_paintengine_callback = nullptr;
    KImageFilePreview_Event_Callback kimagefilepreview_event_callback = nullptr;
    KImageFilePreview_MousePressEvent_Callback kimagefilepreview_mousepressevent_callback = nullptr;
    KImageFilePreview_MouseReleaseEvent_Callback kimagefilepreview_mousereleaseevent_callback = nullptr;
    KImageFilePreview_MouseDoubleClickEvent_Callback kimagefilepreview_mousedoubleclickevent_callback = nullptr;
    KImageFilePreview_MouseMoveEvent_Callback kimagefilepreview_mousemoveevent_callback = nullptr;
    KImageFilePreview_WheelEvent_Callback kimagefilepreview_wheelevent_callback = nullptr;
    KImageFilePreview_KeyPressEvent_Callback kimagefilepreview_keypressevent_callback = nullptr;
    KImageFilePreview_KeyReleaseEvent_Callback kimagefilepreview_keyreleaseevent_callback = nullptr;
    KImageFilePreview_FocusInEvent_Callback kimagefilepreview_focusinevent_callback = nullptr;
    KImageFilePreview_FocusOutEvent_Callback kimagefilepreview_focusoutevent_callback = nullptr;
    KImageFilePreview_EnterEvent_Callback kimagefilepreview_enterevent_callback = nullptr;
    KImageFilePreview_LeaveEvent_Callback kimagefilepreview_leaveevent_callback = nullptr;
    KImageFilePreview_PaintEvent_Callback kimagefilepreview_paintevent_callback = nullptr;
    KImageFilePreview_MoveEvent_Callback kimagefilepreview_moveevent_callback = nullptr;
    KImageFilePreview_CloseEvent_Callback kimagefilepreview_closeevent_callback = nullptr;
    KImageFilePreview_ContextMenuEvent_Callback kimagefilepreview_contextmenuevent_callback = nullptr;
    KImageFilePreview_TabletEvent_Callback kimagefilepreview_tabletevent_callback = nullptr;
    KImageFilePreview_ActionEvent_Callback kimagefilepreview_actionevent_callback = nullptr;
    KImageFilePreview_DragEnterEvent_Callback kimagefilepreview_dragenterevent_callback = nullptr;
    KImageFilePreview_DragMoveEvent_Callback kimagefilepreview_dragmoveevent_callback = nullptr;
    KImageFilePreview_DragLeaveEvent_Callback kimagefilepreview_dragleaveevent_callback = nullptr;
    KImageFilePreview_DropEvent_Callback kimagefilepreview_dropevent_callback = nullptr;
    KImageFilePreview_ShowEvent_Callback kimagefilepreview_showevent_callback = nullptr;
    KImageFilePreview_HideEvent_Callback kimagefilepreview_hideevent_callback = nullptr;
    KImageFilePreview_NativeEvent_Callback kimagefilepreview_nativeevent_callback = nullptr;
    KImageFilePreview_ChangeEvent_Callback kimagefilepreview_changeevent_callback = nullptr;
    KImageFilePreview_Metric_Callback kimagefilepreview_metric_callback = nullptr;
    KImageFilePreview_InitPainter_Callback kimagefilepreview_initpainter_callback = nullptr;
    KImageFilePreview_Redirected_Callback kimagefilepreview_redirected_callback = nullptr;
    KImageFilePreview_SharedPainter_Callback kimagefilepreview_sharedpainter_callback = nullptr;
    KImageFilePreview_InputMethodEvent_Callback kimagefilepreview_inputmethodevent_callback = nullptr;
    KImageFilePreview_InputMethodQuery_Callback kimagefilepreview_inputmethodquery_callback = nullptr;
    KImageFilePreview_FocusNextPrevChild_Callback kimagefilepreview_focusnextprevchild_callback = nullptr;
    KImageFilePreview_EventFilter_Callback kimagefilepreview_eventfilter_callback = nullptr;
    KImageFilePreview_TimerEvent_Callback kimagefilepreview_timerevent_callback = nullptr;
    KImageFilePreview_ChildEvent_Callback kimagefilepreview_childevent_callback = nullptr;
    KImageFilePreview_CustomEvent_Callback kimagefilepreview_customevent_callback = nullptr;
    KImageFilePreview_ConnectNotify_Callback kimagefilepreview_connectnotify_callback = nullptr;
    KImageFilePreview_DisconnectNotify_Callback kimagefilepreview_disconnectnotify_callback = nullptr;
    KImageFilePreview_ShowPreview2_Callback kimagefilepreview_showpreview2_callback = nullptr;
    KImageFilePreview_ShowPreview3_Callback kimagefilepreview_showpreview3_callback = nullptr;
    KImageFilePreview_SetSupportedMimeTypes_Callback kimagefilepreview_setsupportedmimetypes_callback = nullptr;
    KImageFilePreview_UpdateMicroFocus_Callback kimagefilepreview_updatemicrofocus_callback = nullptr;
    KImageFilePreview_Create_Callback kimagefilepreview_create_callback = nullptr;
    KImageFilePreview_Destroy_Callback kimagefilepreview_destroy_callback = nullptr;
    KImageFilePreview_FocusNextChild_Callback kimagefilepreview_focusnextchild_callback = nullptr;
    KImageFilePreview_FocusPreviousChild_Callback kimagefilepreview_focuspreviouschild_callback = nullptr;
    KImageFilePreview_Sender_Callback kimagefilepreview_sender_callback = nullptr;
    KImageFilePreview_SenderSignalIndex_Callback kimagefilepreview_sendersignalindex_callback = nullptr;
    KImageFilePreview_Receivers_Callback kimagefilepreview_receivers_callback = nullptr;
    KImageFilePreview_IsSignalConnected_Callback kimagefilepreview_issignalconnected_callback = nullptr;
    KImageFilePreview_GetDecodedMetricF_Callback kimagefilepreview_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kimagefilepreview_metaobject_isbase = false;
    mutable bool kimagefilepreview_metacast_isbase = false;
    mutable bool kimagefilepreview_metacall_isbase = false;
    mutable bool kimagefilepreview_sizehint_isbase = false;
    mutable bool kimagefilepreview_showpreview_isbase = false;
    mutable bool kimagefilepreview_clearpreview_isbase = false;
    mutable bool kimagefilepreview_gotpreview_isbase = false;
    mutable bool kimagefilepreview_resizeevent_isbase = false;
    mutable bool kimagefilepreview_createjob_isbase = false;
    mutable bool kimagefilepreview_devtype_isbase = false;
    mutable bool kimagefilepreview_setvisible_isbase = false;
    mutable bool kimagefilepreview_minimumsizehint_isbase = false;
    mutable bool kimagefilepreview_heightforwidth_isbase = false;
    mutable bool kimagefilepreview_hasheightforwidth_isbase = false;
    mutable bool kimagefilepreview_paintengine_isbase = false;
    mutable bool kimagefilepreview_event_isbase = false;
    mutable bool kimagefilepreview_mousepressevent_isbase = false;
    mutable bool kimagefilepreview_mousereleaseevent_isbase = false;
    mutable bool kimagefilepreview_mousedoubleclickevent_isbase = false;
    mutable bool kimagefilepreview_mousemoveevent_isbase = false;
    mutable bool kimagefilepreview_wheelevent_isbase = false;
    mutable bool kimagefilepreview_keypressevent_isbase = false;
    mutable bool kimagefilepreview_keyreleaseevent_isbase = false;
    mutable bool kimagefilepreview_focusinevent_isbase = false;
    mutable bool kimagefilepreview_focusoutevent_isbase = false;
    mutable bool kimagefilepreview_enterevent_isbase = false;
    mutable bool kimagefilepreview_leaveevent_isbase = false;
    mutable bool kimagefilepreview_paintevent_isbase = false;
    mutable bool kimagefilepreview_moveevent_isbase = false;
    mutable bool kimagefilepreview_closeevent_isbase = false;
    mutable bool kimagefilepreview_contextmenuevent_isbase = false;
    mutable bool kimagefilepreview_tabletevent_isbase = false;
    mutable bool kimagefilepreview_actionevent_isbase = false;
    mutable bool kimagefilepreview_dragenterevent_isbase = false;
    mutable bool kimagefilepreview_dragmoveevent_isbase = false;
    mutable bool kimagefilepreview_dragleaveevent_isbase = false;
    mutable bool kimagefilepreview_dropevent_isbase = false;
    mutable bool kimagefilepreview_showevent_isbase = false;
    mutable bool kimagefilepreview_hideevent_isbase = false;
    mutable bool kimagefilepreview_nativeevent_isbase = false;
    mutable bool kimagefilepreview_changeevent_isbase = false;
    mutable bool kimagefilepreview_metric_isbase = false;
    mutable bool kimagefilepreview_initpainter_isbase = false;
    mutable bool kimagefilepreview_redirected_isbase = false;
    mutable bool kimagefilepreview_sharedpainter_isbase = false;
    mutable bool kimagefilepreview_inputmethodevent_isbase = false;
    mutable bool kimagefilepreview_inputmethodquery_isbase = false;
    mutable bool kimagefilepreview_focusnextprevchild_isbase = false;
    mutable bool kimagefilepreview_eventfilter_isbase = false;
    mutable bool kimagefilepreview_timerevent_isbase = false;
    mutable bool kimagefilepreview_childevent_isbase = false;
    mutable bool kimagefilepreview_customevent_isbase = false;
    mutable bool kimagefilepreview_connectnotify_isbase = false;
    mutable bool kimagefilepreview_disconnectnotify_isbase = false;
    mutable bool kimagefilepreview_showpreview2_isbase = false;
    mutable bool kimagefilepreview_showpreview3_isbase = false;
    mutable bool kimagefilepreview_setsupportedmimetypes_isbase = false;
    mutable bool kimagefilepreview_updatemicrofocus_isbase = false;
    mutable bool kimagefilepreview_create_isbase = false;
    mutable bool kimagefilepreview_destroy_isbase = false;
    mutable bool kimagefilepreview_focusnextchild_isbase = false;
    mutable bool kimagefilepreview_focuspreviouschild_isbase = false;
    mutable bool kimagefilepreview_sender_isbase = false;
    mutable bool kimagefilepreview_sendersignalindex_isbase = false;
    mutable bool kimagefilepreview_receivers_isbase = false;
    mutable bool kimagefilepreview_issignalconnected_isbase = false;
    mutable bool kimagefilepreview_getdecodedmetricf_isbase = false;

  public:
    VirtualKImageFilePreview(QWidget* parent) : KImageFilePreview(parent) {};
    VirtualKImageFilePreview() : KImageFilePreview() {};

    // Callback setters
    inline void setKImageFilePreview_MetaObject_Callback(KImageFilePreview_MetaObject_Callback cb) { kimagefilepreview_metaobject_callback = cb; }
    inline void setKImageFilePreview_Metacast_Callback(KImageFilePreview_Metacast_Callback cb) { kimagefilepreview_metacast_callback = cb; }
    inline void setKImageFilePreview_Metacall_Callback(KImageFilePreview_Metacall_Callback cb) { kimagefilepreview_metacall_callback = cb; }
    inline void setKImageFilePreview_SizeHint_Callback(KImageFilePreview_SizeHint_Callback cb) { kimagefilepreview_sizehint_callback = cb; }
    inline void setKImageFilePreview_ShowPreview_Callback(KImageFilePreview_ShowPreview_Callback cb) { kimagefilepreview_showpreview_callback = cb; }
    inline void setKImageFilePreview_ClearPreview_Callback(KImageFilePreview_ClearPreview_Callback cb) { kimagefilepreview_clearpreview_callback = cb; }
    inline void setKImageFilePreview_GotPreview_Callback(KImageFilePreview_GotPreview_Callback cb) { kimagefilepreview_gotpreview_callback = cb; }
    inline void setKImageFilePreview_ResizeEvent_Callback(KImageFilePreview_ResizeEvent_Callback cb) { kimagefilepreview_resizeevent_callback = cb; }
    inline void setKImageFilePreview_CreateJob_Callback(KImageFilePreview_CreateJob_Callback cb) { kimagefilepreview_createjob_callback = cb; }
    inline void setKImageFilePreview_DevType_Callback(KImageFilePreview_DevType_Callback cb) { kimagefilepreview_devtype_callback = cb; }
    inline void setKImageFilePreview_SetVisible_Callback(KImageFilePreview_SetVisible_Callback cb) { kimagefilepreview_setvisible_callback = cb; }
    inline void setKImageFilePreview_MinimumSizeHint_Callback(KImageFilePreview_MinimumSizeHint_Callback cb) { kimagefilepreview_minimumsizehint_callback = cb; }
    inline void setKImageFilePreview_HeightForWidth_Callback(KImageFilePreview_HeightForWidth_Callback cb) { kimagefilepreview_heightforwidth_callback = cb; }
    inline void setKImageFilePreview_HasHeightForWidth_Callback(KImageFilePreview_HasHeightForWidth_Callback cb) { kimagefilepreview_hasheightforwidth_callback = cb; }
    inline void setKImageFilePreview_PaintEngine_Callback(KImageFilePreview_PaintEngine_Callback cb) { kimagefilepreview_paintengine_callback = cb; }
    inline void setKImageFilePreview_Event_Callback(KImageFilePreview_Event_Callback cb) { kimagefilepreview_event_callback = cb; }
    inline void setKImageFilePreview_MousePressEvent_Callback(KImageFilePreview_MousePressEvent_Callback cb) { kimagefilepreview_mousepressevent_callback = cb; }
    inline void setKImageFilePreview_MouseReleaseEvent_Callback(KImageFilePreview_MouseReleaseEvent_Callback cb) { kimagefilepreview_mousereleaseevent_callback = cb; }
    inline void setKImageFilePreview_MouseDoubleClickEvent_Callback(KImageFilePreview_MouseDoubleClickEvent_Callback cb) { kimagefilepreview_mousedoubleclickevent_callback = cb; }
    inline void setKImageFilePreview_MouseMoveEvent_Callback(KImageFilePreview_MouseMoveEvent_Callback cb) { kimagefilepreview_mousemoveevent_callback = cb; }
    inline void setKImageFilePreview_WheelEvent_Callback(KImageFilePreview_WheelEvent_Callback cb) { kimagefilepreview_wheelevent_callback = cb; }
    inline void setKImageFilePreview_KeyPressEvent_Callback(KImageFilePreview_KeyPressEvent_Callback cb) { kimagefilepreview_keypressevent_callback = cb; }
    inline void setKImageFilePreview_KeyReleaseEvent_Callback(KImageFilePreview_KeyReleaseEvent_Callback cb) { kimagefilepreview_keyreleaseevent_callback = cb; }
    inline void setKImageFilePreview_FocusInEvent_Callback(KImageFilePreview_FocusInEvent_Callback cb) { kimagefilepreview_focusinevent_callback = cb; }
    inline void setKImageFilePreview_FocusOutEvent_Callback(KImageFilePreview_FocusOutEvent_Callback cb) { kimagefilepreview_focusoutevent_callback = cb; }
    inline void setKImageFilePreview_EnterEvent_Callback(KImageFilePreview_EnterEvent_Callback cb) { kimagefilepreview_enterevent_callback = cb; }
    inline void setKImageFilePreview_LeaveEvent_Callback(KImageFilePreview_LeaveEvent_Callback cb) { kimagefilepreview_leaveevent_callback = cb; }
    inline void setKImageFilePreview_PaintEvent_Callback(KImageFilePreview_PaintEvent_Callback cb) { kimagefilepreview_paintevent_callback = cb; }
    inline void setKImageFilePreview_MoveEvent_Callback(KImageFilePreview_MoveEvent_Callback cb) { kimagefilepreview_moveevent_callback = cb; }
    inline void setKImageFilePreview_CloseEvent_Callback(KImageFilePreview_CloseEvent_Callback cb) { kimagefilepreview_closeevent_callback = cb; }
    inline void setKImageFilePreview_ContextMenuEvent_Callback(KImageFilePreview_ContextMenuEvent_Callback cb) { kimagefilepreview_contextmenuevent_callback = cb; }
    inline void setKImageFilePreview_TabletEvent_Callback(KImageFilePreview_TabletEvent_Callback cb) { kimagefilepreview_tabletevent_callback = cb; }
    inline void setKImageFilePreview_ActionEvent_Callback(KImageFilePreview_ActionEvent_Callback cb) { kimagefilepreview_actionevent_callback = cb; }
    inline void setKImageFilePreview_DragEnterEvent_Callback(KImageFilePreview_DragEnterEvent_Callback cb) { kimagefilepreview_dragenterevent_callback = cb; }
    inline void setKImageFilePreview_DragMoveEvent_Callback(KImageFilePreview_DragMoveEvent_Callback cb) { kimagefilepreview_dragmoveevent_callback = cb; }
    inline void setKImageFilePreview_DragLeaveEvent_Callback(KImageFilePreview_DragLeaveEvent_Callback cb) { kimagefilepreview_dragleaveevent_callback = cb; }
    inline void setKImageFilePreview_DropEvent_Callback(KImageFilePreview_DropEvent_Callback cb) { kimagefilepreview_dropevent_callback = cb; }
    inline void setKImageFilePreview_ShowEvent_Callback(KImageFilePreview_ShowEvent_Callback cb) { kimagefilepreview_showevent_callback = cb; }
    inline void setKImageFilePreview_HideEvent_Callback(KImageFilePreview_HideEvent_Callback cb) { kimagefilepreview_hideevent_callback = cb; }
    inline void setKImageFilePreview_NativeEvent_Callback(KImageFilePreview_NativeEvent_Callback cb) { kimagefilepreview_nativeevent_callback = cb; }
    inline void setKImageFilePreview_ChangeEvent_Callback(KImageFilePreview_ChangeEvent_Callback cb) { kimagefilepreview_changeevent_callback = cb; }
    inline void setKImageFilePreview_Metric_Callback(KImageFilePreview_Metric_Callback cb) { kimagefilepreview_metric_callback = cb; }
    inline void setKImageFilePreview_InitPainter_Callback(KImageFilePreview_InitPainter_Callback cb) { kimagefilepreview_initpainter_callback = cb; }
    inline void setKImageFilePreview_Redirected_Callback(KImageFilePreview_Redirected_Callback cb) { kimagefilepreview_redirected_callback = cb; }
    inline void setKImageFilePreview_SharedPainter_Callback(KImageFilePreview_SharedPainter_Callback cb) { kimagefilepreview_sharedpainter_callback = cb; }
    inline void setKImageFilePreview_InputMethodEvent_Callback(KImageFilePreview_InputMethodEvent_Callback cb) { kimagefilepreview_inputmethodevent_callback = cb; }
    inline void setKImageFilePreview_InputMethodQuery_Callback(KImageFilePreview_InputMethodQuery_Callback cb) { kimagefilepreview_inputmethodquery_callback = cb; }
    inline void setKImageFilePreview_FocusNextPrevChild_Callback(KImageFilePreview_FocusNextPrevChild_Callback cb) { kimagefilepreview_focusnextprevchild_callback = cb; }
    inline void setKImageFilePreview_EventFilter_Callback(KImageFilePreview_EventFilter_Callback cb) { kimagefilepreview_eventfilter_callback = cb; }
    inline void setKImageFilePreview_TimerEvent_Callback(KImageFilePreview_TimerEvent_Callback cb) { kimagefilepreview_timerevent_callback = cb; }
    inline void setKImageFilePreview_ChildEvent_Callback(KImageFilePreview_ChildEvent_Callback cb) { kimagefilepreview_childevent_callback = cb; }
    inline void setKImageFilePreview_CustomEvent_Callback(KImageFilePreview_CustomEvent_Callback cb) { kimagefilepreview_customevent_callback = cb; }
    inline void setKImageFilePreview_ConnectNotify_Callback(KImageFilePreview_ConnectNotify_Callback cb) { kimagefilepreview_connectnotify_callback = cb; }
    inline void setKImageFilePreview_DisconnectNotify_Callback(KImageFilePreview_DisconnectNotify_Callback cb) { kimagefilepreview_disconnectnotify_callback = cb; }
    inline void setKImageFilePreview_ShowPreview2_Callback(KImageFilePreview_ShowPreview2_Callback cb) { kimagefilepreview_showpreview2_callback = cb; }
    inline void setKImageFilePreview_ShowPreview3_Callback(KImageFilePreview_ShowPreview3_Callback cb) { kimagefilepreview_showpreview3_callback = cb; }
    inline void setKImageFilePreview_SetSupportedMimeTypes_Callback(KImageFilePreview_SetSupportedMimeTypes_Callback cb) { kimagefilepreview_setsupportedmimetypes_callback = cb; }
    inline void setKImageFilePreview_UpdateMicroFocus_Callback(KImageFilePreview_UpdateMicroFocus_Callback cb) { kimagefilepreview_updatemicrofocus_callback = cb; }
    inline void setKImageFilePreview_Create_Callback(KImageFilePreview_Create_Callback cb) { kimagefilepreview_create_callback = cb; }
    inline void setKImageFilePreview_Destroy_Callback(KImageFilePreview_Destroy_Callback cb) { kimagefilepreview_destroy_callback = cb; }
    inline void setKImageFilePreview_FocusNextChild_Callback(KImageFilePreview_FocusNextChild_Callback cb) { kimagefilepreview_focusnextchild_callback = cb; }
    inline void setKImageFilePreview_FocusPreviousChild_Callback(KImageFilePreview_FocusPreviousChild_Callback cb) { kimagefilepreview_focuspreviouschild_callback = cb; }
    inline void setKImageFilePreview_Sender_Callback(KImageFilePreview_Sender_Callback cb) { kimagefilepreview_sender_callback = cb; }
    inline void setKImageFilePreview_SenderSignalIndex_Callback(KImageFilePreview_SenderSignalIndex_Callback cb) { kimagefilepreview_sendersignalindex_callback = cb; }
    inline void setKImageFilePreview_Receivers_Callback(KImageFilePreview_Receivers_Callback cb) { kimagefilepreview_receivers_callback = cb; }
    inline void setKImageFilePreview_IsSignalConnected_Callback(KImageFilePreview_IsSignalConnected_Callback cb) { kimagefilepreview_issignalconnected_callback = cb; }
    inline void setKImageFilePreview_GetDecodedMetricF_Callback(KImageFilePreview_GetDecodedMetricF_Callback cb) { kimagefilepreview_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKImageFilePreview_MetaObject_IsBase(bool value) const { kimagefilepreview_metaobject_isbase = value; }
    inline void setKImageFilePreview_Metacast_IsBase(bool value) const { kimagefilepreview_metacast_isbase = value; }
    inline void setKImageFilePreview_Metacall_IsBase(bool value) const { kimagefilepreview_metacall_isbase = value; }
    inline void setKImageFilePreview_SizeHint_IsBase(bool value) const { kimagefilepreview_sizehint_isbase = value; }
    inline void setKImageFilePreview_ShowPreview_IsBase(bool value) const { kimagefilepreview_showpreview_isbase = value; }
    inline void setKImageFilePreview_ClearPreview_IsBase(bool value) const { kimagefilepreview_clearpreview_isbase = value; }
    inline void setKImageFilePreview_GotPreview_IsBase(bool value) const { kimagefilepreview_gotpreview_isbase = value; }
    inline void setKImageFilePreview_ResizeEvent_IsBase(bool value) const { kimagefilepreview_resizeevent_isbase = value; }
    inline void setKImageFilePreview_CreateJob_IsBase(bool value) const { kimagefilepreview_createjob_isbase = value; }
    inline void setKImageFilePreview_DevType_IsBase(bool value) const { kimagefilepreview_devtype_isbase = value; }
    inline void setKImageFilePreview_SetVisible_IsBase(bool value) const { kimagefilepreview_setvisible_isbase = value; }
    inline void setKImageFilePreview_MinimumSizeHint_IsBase(bool value) const { kimagefilepreview_minimumsizehint_isbase = value; }
    inline void setKImageFilePreview_HeightForWidth_IsBase(bool value) const { kimagefilepreview_heightforwidth_isbase = value; }
    inline void setKImageFilePreview_HasHeightForWidth_IsBase(bool value) const { kimagefilepreview_hasheightforwidth_isbase = value; }
    inline void setKImageFilePreview_PaintEngine_IsBase(bool value) const { kimagefilepreview_paintengine_isbase = value; }
    inline void setKImageFilePreview_Event_IsBase(bool value) const { kimagefilepreview_event_isbase = value; }
    inline void setKImageFilePreview_MousePressEvent_IsBase(bool value) const { kimagefilepreview_mousepressevent_isbase = value; }
    inline void setKImageFilePreview_MouseReleaseEvent_IsBase(bool value) const { kimagefilepreview_mousereleaseevent_isbase = value; }
    inline void setKImageFilePreview_MouseDoubleClickEvent_IsBase(bool value) const { kimagefilepreview_mousedoubleclickevent_isbase = value; }
    inline void setKImageFilePreview_MouseMoveEvent_IsBase(bool value) const { kimagefilepreview_mousemoveevent_isbase = value; }
    inline void setKImageFilePreview_WheelEvent_IsBase(bool value) const { kimagefilepreview_wheelevent_isbase = value; }
    inline void setKImageFilePreview_KeyPressEvent_IsBase(bool value) const { kimagefilepreview_keypressevent_isbase = value; }
    inline void setKImageFilePreview_KeyReleaseEvent_IsBase(bool value) const { kimagefilepreview_keyreleaseevent_isbase = value; }
    inline void setKImageFilePreview_FocusInEvent_IsBase(bool value) const { kimagefilepreview_focusinevent_isbase = value; }
    inline void setKImageFilePreview_FocusOutEvent_IsBase(bool value) const { kimagefilepreview_focusoutevent_isbase = value; }
    inline void setKImageFilePreview_EnterEvent_IsBase(bool value) const { kimagefilepreview_enterevent_isbase = value; }
    inline void setKImageFilePreview_LeaveEvent_IsBase(bool value) const { kimagefilepreview_leaveevent_isbase = value; }
    inline void setKImageFilePreview_PaintEvent_IsBase(bool value) const { kimagefilepreview_paintevent_isbase = value; }
    inline void setKImageFilePreview_MoveEvent_IsBase(bool value) const { kimagefilepreview_moveevent_isbase = value; }
    inline void setKImageFilePreview_CloseEvent_IsBase(bool value) const { kimagefilepreview_closeevent_isbase = value; }
    inline void setKImageFilePreview_ContextMenuEvent_IsBase(bool value) const { kimagefilepreview_contextmenuevent_isbase = value; }
    inline void setKImageFilePreview_TabletEvent_IsBase(bool value) const { kimagefilepreview_tabletevent_isbase = value; }
    inline void setKImageFilePreview_ActionEvent_IsBase(bool value) const { kimagefilepreview_actionevent_isbase = value; }
    inline void setKImageFilePreview_DragEnterEvent_IsBase(bool value) const { kimagefilepreview_dragenterevent_isbase = value; }
    inline void setKImageFilePreview_DragMoveEvent_IsBase(bool value) const { kimagefilepreview_dragmoveevent_isbase = value; }
    inline void setKImageFilePreview_DragLeaveEvent_IsBase(bool value) const { kimagefilepreview_dragleaveevent_isbase = value; }
    inline void setKImageFilePreview_DropEvent_IsBase(bool value) const { kimagefilepreview_dropevent_isbase = value; }
    inline void setKImageFilePreview_ShowEvent_IsBase(bool value) const { kimagefilepreview_showevent_isbase = value; }
    inline void setKImageFilePreview_HideEvent_IsBase(bool value) const { kimagefilepreview_hideevent_isbase = value; }
    inline void setKImageFilePreview_NativeEvent_IsBase(bool value) const { kimagefilepreview_nativeevent_isbase = value; }
    inline void setKImageFilePreview_ChangeEvent_IsBase(bool value) const { kimagefilepreview_changeevent_isbase = value; }
    inline void setKImageFilePreview_Metric_IsBase(bool value) const { kimagefilepreview_metric_isbase = value; }
    inline void setKImageFilePreview_InitPainter_IsBase(bool value) const { kimagefilepreview_initpainter_isbase = value; }
    inline void setKImageFilePreview_Redirected_IsBase(bool value) const { kimagefilepreview_redirected_isbase = value; }
    inline void setKImageFilePreview_SharedPainter_IsBase(bool value) const { kimagefilepreview_sharedpainter_isbase = value; }
    inline void setKImageFilePreview_InputMethodEvent_IsBase(bool value) const { kimagefilepreview_inputmethodevent_isbase = value; }
    inline void setKImageFilePreview_InputMethodQuery_IsBase(bool value) const { kimagefilepreview_inputmethodquery_isbase = value; }
    inline void setKImageFilePreview_FocusNextPrevChild_IsBase(bool value) const { kimagefilepreview_focusnextprevchild_isbase = value; }
    inline void setKImageFilePreview_EventFilter_IsBase(bool value) const { kimagefilepreview_eventfilter_isbase = value; }
    inline void setKImageFilePreview_TimerEvent_IsBase(bool value) const { kimagefilepreview_timerevent_isbase = value; }
    inline void setKImageFilePreview_ChildEvent_IsBase(bool value) const { kimagefilepreview_childevent_isbase = value; }
    inline void setKImageFilePreview_CustomEvent_IsBase(bool value) const { kimagefilepreview_customevent_isbase = value; }
    inline void setKImageFilePreview_ConnectNotify_IsBase(bool value) const { kimagefilepreview_connectnotify_isbase = value; }
    inline void setKImageFilePreview_DisconnectNotify_IsBase(bool value) const { kimagefilepreview_disconnectnotify_isbase = value; }
    inline void setKImageFilePreview_ShowPreview2_IsBase(bool value) const { kimagefilepreview_showpreview2_isbase = value; }
    inline void setKImageFilePreview_ShowPreview3_IsBase(bool value) const { kimagefilepreview_showpreview3_isbase = value; }
    inline void setKImageFilePreview_SetSupportedMimeTypes_IsBase(bool value) const { kimagefilepreview_setsupportedmimetypes_isbase = value; }
    inline void setKImageFilePreview_UpdateMicroFocus_IsBase(bool value) const { kimagefilepreview_updatemicrofocus_isbase = value; }
    inline void setKImageFilePreview_Create_IsBase(bool value) const { kimagefilepreview_create_isbase = value; }
    inline void setKImageFilePreview_Destroy_IsBase(bool value) const { kimagefilepreview_destroy_isbase = value; }
    inline void setKImageFilePreview_FocusNextChild_IsBase(bool value) const { kimagefilepreview_focusnextchild_isbase = value; }
    inline void setKImageFilePreview_FocusPreviousChild_IsBase(bool value) const { kimagefilepreview_focuspreviouschild_isbase = value; }
    inline void setKImageFilePreview_Sender_IsBase(bool value) const { kimagefilepreview_sender_isbase = value; }
    inline void setKImageFilePreview_SenderSignalIndex_IsBase(bool value) const { kimagefilepreview_sendersignalindex_isbase = value; }
    inline void setKImageFilePreview_Receivers_IsBase(bool value) const { kimagefilepreview_receivers_isbase = value; }
    inline void setKImageFilePreview_IsSignalConnected_IsBase(bool value) const { kimagefilepreview_issignalconnected_isbase = value; }
    inline void setKImageFilePreview_GetDecodedMetricF_IsBase(bool value) const { kimagefilepreview_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kimagefilepreview_metaobject_isbase) {
            kimagefilepreview_metaobject_isbase = false;
            return KImageFilePreview::metaObject();
        }
        auto metaobject_cb = kimagefilepreview_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KImageFilePreview::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kimagefilepreview_metacast_isbase) {
            kimagefilepreview_metacast_isbase = false;
            return KImageFilePreview::qt_metacast(param1);
        }
        auto metacast_cb = kimagefilepreview_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KImageFilePreview::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kimagefilepreview_metacall_isbase) {
            kimagefilepreview_metacall_isbase = false;
            return KImageFilePreview::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kimagefilepreview_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KImageFilePreview::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kimagefilepreview_sizehint_isbase) {
            kimagefilepreview_sizehint_isbase = false;
            return KImageFilePreview::sizeHint();
        }
        auto sizehint_cb = kimagefilepreview_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KImageFilePreview::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPreview(const QUrl& url) override {
        if (kimagefilepreview_showpreview_isbase) {
            kimagefilepreview_showpreview_isbase = false;
            KImageFilePreview::showPreview(url);
            return;
        }
        auto showpreview_cb = kimagefilepreview_showpreview_callback;
        if (showpreview_cb) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            showpreview_cb(this, cbval1);
            return;
        }
        KImageFilePreview::showPreview(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clearPreview() override {
        if (kimagefilepreview_clearpreview_isbase) {
            kimagefilepreview_clearpreview_isbase = false;
            KImageFilePreview::clearPreview();
            return;
        }
        auto clearpreview_cb = kimagefilepreview_clearpreview_callback;
        if (clearpreview_cb) {
            clearpreview_cb();
            return;
        }
        KImageFilePreview::clearPreview();
    }

    // Virtual method for C ABI access and custom callback
    virtual void gotPreview(const KFileItem& param1, const QPixmap& param2) override {
        if (kimagefilepreview_gotpreview_isbase) {
            kimagefilepreview_gotpreview_isbase = false;
            KImageFilePreview::gotPreview(param1, param2);
            return;
        }
        auto gotpreview_cb = kimagefilepreview_gotpreview_callback;
        if (gotpreview_cb) {
            const KFileItem& param1_ret = param1;
            // Cast returned reference into pointer
            KFileItem* cbval1 = const_cast<KFileItem*>(&param1_ret);
            const QPixmap& param2_ret = param2;
            // Cast returned reference into pointer
            QPixmap* cbval2 = const_cast<QPixmap*>(&param2_ret);

            gotpreview_cb(this, cbval1, cbval2);
            return;
        }
        KImageFilePreview::gotPreview(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kimagefilepreview_resizeevent_isbase) {
            kimagefilepreview_resizeevent_isbase = false;
            KImageFilePreview::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = kimagefilepreview_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::PreviewJob* createJob(const QUrl& url, int width, int height) override {
        if (kimagefilepreview_createjob_isbase) {
            kimagefilepreview_createjob_isbase = false;
            return KImageFilePreview::createJob(url, width, height);
        }
        auto createjob_cb = kimagefilepreview_createjob_callback;
        if (createjob_cb) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = width;
            int cbval3 = height;

            KIO__PreviewJob* callback_ret = createjob_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KImageFilePreview::createJob(url, width, height);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kimagefilepreview_devtype_isbase) {
            kimagefilepreview_devtype_isbase = false;
            return KImageFilePreview::devType();
        }
        auto devtype_cb = kimagefilepreview_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KImageFilePreview::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kimagefilepreview_setvisible_isbase) {
            kimagefilepreview_setvisible_isbase = false;
            KImageFilePreview::setVisible(visible);
            return;
        }
        auto setvisible_cb = kimagefilepreview_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KImageFilePreview::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kimagefilepreview_minimumsizehint_isbase) {
            kimagefilepreview_minimumsizehint_isbase = false;
            return KImageFilePreview::minimumSizeHint();
        }
        auto minimumsizehint_cb = kimagefilepreview_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KImageFilePreview::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kimagefilepreview_heightforwidth_isbase) {
            kimagefilepreview_heightforwidth_isbase = false;
            return KImageFilePreview::heightForWidth(param1);
        }
        auto heightforwidth_cb = kimagefilepreview_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KImageFilePreview::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kimagefilepreview_hasheightforwidth_isbase) {
            kimagefilepreview_hasheightforwidth_isbase = false;
            return KImageFilePreview::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kimagefilepreview_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KImageFilePreview::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kimagefilepreview_paintengine_isbase) {
            kimagefilepreview_paintengine_isbase = false;
            return KImageFilePreview::paintEngine();
        }
        auto paintengine_cb = kimagefilepreview_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KImageFilePreview::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kimagefilepreview_event_isbase) {
            kimagefilepreview_event_isbase = false;
            return KImageFilePreview::event(event);
        }
        auto event_cb = kimagefilepreview_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KImageFilePreview::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kimagefilepreview_mousepressevent_isbase) {
            kimagefilepreview_mousepressevent_isbase = false;
            KImageFilePreview::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kimagefilepreview_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kimagefilepreview_mousereleaseevent_isbase) {
            kimagefilepreview_mousereleaseevent_isbase = false;
            KImageFilePreview::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kimagefilepreview_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kimagefilepreview_mousedoubleclickevent_isbase) {
            kimagefilepreview_mousedoubleclickevent_isbase = false;
            KImageFilePreview::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kimagefilepreview_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kimagefilepreview_mousemoveevent_isbase) {
            kimagefilepreview_mousemoveevent_isbase = false;
            KImageFilePreview::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kimagefilepreview_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kimagefilepreview_wheelevent_isbase) {
            kimagefilepreview_wheelevent_isbase = false;
            KImageFilePreview::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kimagefilepreview_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kimagefilepreview_keypressevent_isbase) {
            kimagefilepreview_keypressevent_isbase = false;
            KImageFilePreview::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = kimagefilepreview_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kimagefilepreview_keyreleaseevent_isbase) {
            kimagefilepreview_keyreleaseevent_isbase = false;
            KImageFilePreview::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kimagefilepreview_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kimagefilepreview_focusinevent_isbase) {
            kimagefilepreview_focusinevent_isbase = false;
            KImageFilePreview::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kimagefilepreview_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kimagefilepreview_focusoutevent_isbase) {
            kimagefilepreview_focusoutevent_isbase = false;
            KImageFilePreview::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kimagefilepreview_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kimagefilepreview_enterevent_isbase) {
            kimagefilepreview_enterevent_isbase = false;
            KImageFilePreview::enterEvent(event);
            return;
        }
        auto enterevent_cb = kimagefilepreview_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kimagefilepreview_leaveevent_isbase) {
            kimagefilepreview_leaveevent_isbase = false;
            KImageFilePreview::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kimagefilepreview_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kimagefilepreview_paintevent_isbase) {
            kimagefilepreview_paintevent_isbase = false;
            KImageFilePreview::paintEvent(event);
            return;
        }
        auto paintevent_cb = kimagefilepreview_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kimagefilepreview_moveevent_isbase) {
            kimagefilepreview_moveevent_isbase = false;
            KImageFilePreview::moveEvent(event);
            return;
        }
        auto moveevent_cb = kimagefilepreview_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kimagefilepreview_closeevent_isbase) {
            kimagefilepreview_closeevent_isbase = false;
            KImageFilePreview::closeEvent(event);
            return;
        }
        auto closeevent_cb = kimagefilepreview_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kimagefilepreview_contextmenuevent_isbase) {
            kimagefilepreview_contextmenuevent_isbase = false;
            KImageFilePreview::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = kimagefilepreview_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kimagefilepreview_tabletevent_isbase) {
            kimagefilepreview_tabletevent_isbase = false;
            KImageFilePreview::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kimagefilepreview_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kimagefilepreview_actionevent_isbase) {
            kimagefilepreview_actionevent_isbase = false;
            KImageFilePreview::actionEvent(event);
            return;
        }
        auto actionevent_cb = kimagefilepreview_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kimagefilepreview_dragenterevent_isbase) {
            kimagefilepreview_dragenterevent_isbase = false;
            KImageFilePreview::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kimagefilepreview_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kimagefilepreview_dragmoveevent_isbase) {
            kimagefilepreview_dragmoveevent_isbase = false;
            KImageFilePreview::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kimagefilepreview_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kimagefilepreview_dragleaveevent_isbase) {
            kimagefilepreview_dragleaveevent_isbase = false;
            KImageFilePreview::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kimagefilepreview_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kimagefilepreview_dropevent_isbase) {
            kimagefilepreview_dropevent_isbase = false;
            KImageFilePreview::dropEvent(event);
            return;
        }
        auto dropevent_cb = kimagefilepreview_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kimagefilepreview_showevent_isbase) {
            kimagefilepreview_showevent_isbase = false;
            KImageFilePreview::showEvent(event);
            return;
        }
        auto showevent_cb = kimagefilepreview_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kimagefilepreview_hideevent_isbase) {
            kimagefilepreview_hideevent_isbase = false;
            KImageFilePreview::hideEvent(event);
            return;
        }
        auto hideevent_cb = kimagefilepreview_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kimagefilepreview_nativeevent_isbase) {
            kimagefilepreview_nativeevent_isbase = false;
            return KImageFilePreview::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kimagefilepreview_nativeevent_callback;
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
        return KImageFilePreview::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kimagefilepreview_changeevent_isbase) {
            kimagefilepreview_changeevent_isbase = false;
            KImageFilePreview::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kimagefilepreview_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kimagefilepreview_metric_isbase) {
            kimagefilepreview_metric_isbase = false;
            return KImageFilePreview::metric(param1);
        }
        auto metric_cb = kimagefilepreview_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KImageFilePreview::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kimagefilepreview_initpainter_isbase) {
            kimagefilepreview_initpainter_isbase = false;
            KImageFilePreview::initPainter(painter);
            return;
        }
        auto initpainter_cb = kimagefilepreview_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KImageFilePreview::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kimagefilepreview_redirected_isbase) {
            kimagefilepreview_redirected_isbase = false;
            return KImageFilePreview::redirected(offset);
        }
        auto redirected_cb = kimagefilepreview_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KImageFilePreview::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kimagefilepreview_sharedpainter_isbase) {
            kimagefilepreview_sharedpainter_isbase = false;
            return KImageFilePreview::sharedPainter();
        }
        auto sharedpainter_cb = kimagefilepreview_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KImageFilePreview::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kimagefilepreview_inputmethodevent_isbase) {
            kimagefilepreview_inputmethodevent_isbase = false;
            KImageFilePreview::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kimagefilepreview_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kimagefilepreview_inputmethodquery_isbase) {
            kimagefilepreview_inputmethodquery_isbase = false;
            return KImageFilePreview::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kimagefilepreview_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KImageFilePreview::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kimagefilepreview_focusnextprevchild_isbase) {
            kimagefilepreview_focusnextprevchild_isbase = false;
            return KImageFilePreview::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kimagefilepreview_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KImageFilePreview::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kimagefilepreview_eventfilter_isbase) {
            kimagefilepreview_eventfilter_isbase = false;
            return KImageFilePreview::eventFilter(watched, event);
        }
        auto eventfilter_cb = kimagefilepreview_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KImageFilePreview::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kimagefilepreview_timerevent_isbase) {
            kimagefilepreview_timerevent_isbase = false;
            KImageFilePreview::timerEvent(event);
            return;
        }
        auto timerevent_cb = kimagefilepreview_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kimagefilepreview_childevent_isbase) {
            kimagefilepreview_childevent_isbase = false;
            KImageFilePreview::childEvent(event);
            return;
        }
        auto childevent_cb = kimagefilepreview_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kimagefilepreview_customevent_isbase) {
            kimagefilepreview_customevent_isbase = false;
            KImageFilePreview::customEvent(event);
            return;
        }
        auto customevent_cb = kimagefilepreview_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KImageFilePreview::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kimagefilepreview_connectnotify_isbase) {
            kimagefilepreview_connectnotify_isbase = false;
            KImageFilePreview::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kimagefilepreview_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KImageFilePreview::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kimagefilepreview_disconnectnotify_isbase) {
            kimagefilepreview_disconnectnotify_isbase = false;
            KImageFilePreview::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kimagefilepreview_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KImageFilePreview::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void showPreview() {
        if (kimagefilepreview_showpreview2_isbase) {
            kimagefilepreview_showpreview2_isbase = false;
            KImageFilePreview::showPreview();
            return;
        }
        auto showpreview2_cb = kimagefilepreview_showpreview2_callback;
        if (showpreview2_cb) {
            showpreview2_cb();
            return;
        }
        KImageFilePreview::showPreview();
    }

    // Virtual method for C ABI access and custom callback
    void showPreview(const QUrl& url, bool force) {
        if (kimagefilepreview_showpreview3_isbase) {
            kimagefilepreview_showpreview3_isbase = false;
            KImageFilePreview::showPreview(url, force);
            return;
        }
        auto showpreview3_cb = kimagefilepreview_showpreview3_callback;
        if (showpreview3_cb) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            bool cbval2 = force;

            showpreview3_cb(this, cbval1, cbval2);
            return;
        }
        KImageFilePreview::showPreview(url, force);
    }

    // Virtual method for C ABI access and custom callback
    void setSupportedMimeTypes(const QList<QString>& mimeTypes) {
        if (kimagefilepreview_setsupportedmimetypes_isbase) {
            kimagefilepreview_setsupportedmimetypes_isbase = false;
            KImageFilePreview::setSupportedMimeTypes(mimeTypes);
            return;
        }
        auto setsupportedmimetypes_cb = kimagefilepreview_setsupportedmimetypes_callback;
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
        KImageFilePreview::setSupportedMimeTypes(mimeTypes);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kimagefilepreview_updatemicrofocus_isbase) {
            kimagefilepreview_updatemicrofocus_isbase = false;
            KImageFilePreview::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kimagefilepreview_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KImageFilePreview::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kimagefilepreview_create_isbase) {
            kimagefilepreview_create_isbase = false;
            KImageFilePreview::create();
            return;
        }
        auto create_cb = kimagefilepreview_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KImageFilePreview::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kimagefilepreview_destroy_isbase) {
            kimagefilepreview_destroy_isbase = false;
            KImageFilePreview::destroy();
            return;
        }
        auto destroy_cb = kimagefilepreview_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KImageFilePreview::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kimagefilepreview_focusnextchild_isbase) {
            kimagefilepreview_focusnextchild_isbase = false;
            return KImageFilePreview::focusNextChild();
        }
        auto focusnextchild_cb = kimagefilepreview_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KImageFilePreview::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kimagefilepreview_focuspreviouschild_isbase) {
            kimagefilepreview_focuspreviouschild_isbase = false;
            return KImageFilePreview::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kimagefilepreview_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KImageFilePreview::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kimagefilepreview_sender_isbase) {
            kimagefilepreview_sender_isbase = false;
            return KImageFilePreview::sender();
        }
        auto sender_cb = kimagefilepreview_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KImageFilePreview::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kimagefilepreview_sendersignalindex_isbase) {
            kimagefilepreview_sendersignalindex_isbase = false;
            return KImageFilePreview::senderSignalIndex();
        }
        auto sendersignalindex_cb = kimagefilepreview_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KImageFilePreview::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kimagefilepreview_receivers_isbase) {
            kimagefilepreview_receivers_isbase = false;
            return KImageFilePreview::receivers(signal);
        }
        auto receivers_cb = kimagefilepreview_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KImageFilePreview::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kimagefilepreview_issignalconnected_isbase) {
            kimagefilepreview_issignalconnected_isbase = false;
            return KImageFilePreview::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kimagefilepreview_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KImageFilePreview::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kimagefilepreview_getdecodedmetricf_isbase) {
            kimagefilepreview_getdecodedmetricf_isbase = false;
            return KImageFilePreview::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kimagefilepreview_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KImageFilePreview::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KImageFilePreview_GotPreview(KImageFilePreview* self, const KFileItem* param1, const QPixmap* param2);
    friend void KImageFilePreview_SuperGotPreview(KImageFilePreview* self, const KFileItem* param1, const QPixmap* param2);
    friend void KImageFilePreview_ResizeEvent(KImageFilePreview* self, QResizeEvent* event);
    friend void KImageFilePreview_SuperResizeEvent(KImageFilePreview* self, QResizeEvent* event);
    friend KIO__PreviewJob* KImageFilePreview_CreateJob(KImageFilePreview* self, const QUrl* url, int width, int height);
    friend KIO__PreviewJob* KImageFilePreview_SuperCreateJob(KImageFilePreview* self, const QUrl* url, int width, int height);
    friend bool KImageFilePreview_Event(KImageFilePreview* self, QEvent* event);
    friend bool KImageFilePreview_SuperEvent(KImageFilePreview* self, QEvent* event);
    friend void KImageFilePreview_MousePressEvent(KImageFilePreview* self, QMouseEvent* event);
    friend void KImageFilePreview_SuperMousePressEvent(KImageFilePreview* self, QMouseEvent* event);
    friend void KImageFilePreview_MouseReleaseEvent(KImageFilePreview* self, QMouseEvent* event);
    friend void KImageFilePreview_SuperMouseReleaseEvent(KImageFilePreview* self, QMouseEvent* event);
    friend void KImageFilePreview_MouseDoubleClickEvent(KImageFilePreview* self, QMouseEvent* event);
    friend void KImageFilePreview_SuperMouseDoubleClickEvent(KImageFilePreview* self, QMouseEvent* event);
    friend void KImageFilePreview_MouseMoveEvent(KImageFilePreview* self, QMouseEvent* event);
    friend void KImageFilePreview_SuperMouseMoveEvent(KImageFilePreview* self, QMouseEvent* event);
    friend void KImageFilePreview_WheelEvent(KImageFilePreview* self, QWheelEvent* event);
    friend void KImageFilePreview_SuperWheelEvent(KImageFilePreview* self, QWheelEvent* event);
    friend void KImageFilePreview_KeyPressEvent(KImageFilePreview* self, QKeyEvent* event);
    friend void KImageFilePreview_SuperKeyPressEvent(KImageFilePreview* self, QKeyEvent* event);
    friend void KImageFilePreview_KeyReleaseEvent(KImageFilePreview* self, QKeyEvent* event);
    friend void KImageFilePreview_SuperKeyReleaseEvent(KImageFilePreview* self, QKeyEvent* event);
    friend void KImageFilePreview_FocusInEvent(KImageFilePreview* self, QFocusEvent* event);
    friend void KImageFilePreview_SuperFocusInEvent(KImageFilePreview* self, QFocusEvent* event);
    friend void KImageFilePreview_FocusOutEvent(KImageFilePreview* self, QFocusEvent* event);
    friend void KImageFilePreview_SuperFocusOutEvent(KImageFilePreview* self, QFocusEvent* event);
    friend void KImageFilePreview_EnterEvent(KImageFilePreview* self, QEnterEvent* event);
    friend void KImageFilePreview_SuperEnterEvent(KImageFilePreview* self, QEnterEvent* event);
    friend void KImageFilePreview_LeaveEvent(KImageFilePreview* self, QEvent* event);
    friend void KImageFilePreview_SuperLeaveEvent(KImageFilePreview* self, QEvent* event);
    friend void KImageFilePreview_PaintEvent(KImageFilePreview* self, QPaintEvent* event);
    friend void KImageFilePreview_SuperPaintEvent(KImageFilePreview* self, QPaintEvent* event);
    friend void KImageFilePreview_MoveEvent(KImageFilePreview* self, QMoveEvent* event);
    friend void KImageFilePreview_SuperMoveEvent(KImageFilePreview* self, QMoveEvent* event);
    friend void KImageFilePreview_CloseEvent(KImageFilePreview* self, QCloseEvent* event);
    friend void KImageFilePreview_SuperCloseEvent(KImageFilePreview* self, QCloseEvent* event);
    friend void KImageFilePreview_ContextMenuEvent(KImageFilePreview* self, QContextMenuEvent* event);
    friend void KImageFilePreview_SuperContextMenuEvent(KImageFilePreview* self, QContextMenuEvent* event);
    friend void KImageFilePreview_TabletEvent(KImageFilePreview* self, QTabletEvent* event);
    friend void KImageFilePreview_SuperTabletEvent(KImageFilePreview* self, QTabletEvent* event);
    friend void KImageFilePreview_ActionEvent(KImageFilePreview* self, QActionEvent* event);
    friend void KImageFilePreview_SuperActionEvent(KImageFilePreview* self, QActionEvent* event);
    friend void KImageFilePreview_DragEnterEvent(KImageFilePreview* self, QDragEnterEvent* event);
    friend void KImageFilePreview_SuperDragEnterEvent(KImageFilePreview* self, QDragEnterEvent* event);
    friend void KImageFilePreview_DragMoveEvent(KImageFilePreview* self, QDragMoveEvent* event);
    friend void KImageFilePreview_SuperDragMoveEvent(KImageFilePreview* self, QDragMoveEvent* event);
    friend void KImageFilePreview_DragLeaveEvent(KImageFilePreview* self, QDragLeaveEvent* event);
    friend void KImageFilePreview_SuperDragLeaveEvent(KImageFilePreview* self, QDragLeaveEvent* event);
    friend void KImageFilePreview_DropEvent(KImageFilePreview* self, QDropEvent* event);
    friend void KImageFilePreview_SuperDropEvent(KImageFilePreview* self, QDropEvent* event);
    friend void KImageFilePreview_ShowEvent(KImageFilePreview* self, QShowEvent* event);
    friend void KImageFilePreview_SuperShowEvent(KImageFilePreview* self, QShowEvent* event);
    friend void KImageFilePreview_HideEvent(KImageFilePreview* self, QHideEvent* event);
    friend void KImageFilePreview_SuperHideEvent(KImageFilePreview* self, QHideEvent* event);
    friend bool KImageFilePreview_NativeEvent(KImageFilePreview* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KImageFilePreview_SuperNativeEvent(KImageFilePreview* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KImageFilePreview_ChangeEvent(KImageFilePreview* self, QEvent* param1);
    friend void KImageFilePreview_SuperChangeEvent(KImageFilePreview* self, QEvent* param1);
    friend int KImageFilePreview_Metric(const KImageFilePreview* self, int param1);
    friend int KImageFilePreview_SuperMetric(const KImageFilePreview* self, int param1);
    friend void KImageFilePreview_InitPainter(const KImageFilePreview* self, QPainter* painter);
    friend void KImageFilePreview_SuperInitPainter(const KImageFilePreview* self, QPainter* painter);
    friend QPaintDevice* KImageFilePreview_Redirected(const KImageFilePreview* self, QPoint* offset);
    friend QPaintDevice* KImageFilePreview_SuperRedirected(const KImageFilePreview* self, QPoint* offset);
    friend QPainter* KImageFilePreview_SharedPainter(const KImageFilePreview* self);
    friend QPainter* KImageFilePreview_SuperSharedPainter(const KImageFilePreview* self);
    friend void KImageFilePreview_InputMethodEvent(KImageFilePreview* self, QInputMethodEvent* param1);
    friend void KImageFilePreview_SuperInputMethodEvent(KImageFilePreview* self, QInputMethodEvent* param1);
    friend bool KImageFilePreview_FocusNextPrevChild(KImageFilePreview* self, bool next);
    friend bool KImageFilePreview_SuperFocusNextPrevChild(KImageFilePreview* self, bool next);
    friend void KImageFilePreview_TimerEvent(KImageFilePreview* self, QTimerEvent* event);
    friend void KImageFilePreview_SuperTimerEvent(KImageFilePreview* self, QTimerEvent* event);
    friend void KImageFilePreview_ChildEvent(KImageFilePreview* self, QChildEvent* event);
    friend void KImageFilePreview_SuperChildEvent(KImageFilePreview* self, QChildEvent* event);
    friend void KImageFilePreview_CustomEvent(KImageFilePreview* self, QEvent* event);
    friend void KImageFilePreview_SuperCustomEvent(KImageFilePreview* self, QEvent* event);
    friend void KImageFilePreview_ConnectNotify(KImageFilePreview* self, const QMetaMethod* signal);
    friend void KImageFilePreview_SuperConnectNotify(KImageFilePreview* self, const QMetaMethod* signal);
    friend void KImageFilePreview_DisconnectNotify(KImageFilePreview* self, const QMetaMethod* signal);
    friend void KImageFilePreview_SuperDisconnectNotify(KImageFilePreview* self, const QMetaMethod* signal);
    friend void KImageFilePreview_ShowPreview2(KImageFilePreview* self);
    friend void KImageFilePreview_SuperShowPreview2(KImageFilePreview* self);
    friend void KImageFilePreview_ShowPreview3(KImageFilePreview* self, const QUrl* url, bool force);
    friend void KImageFilePreview_SuperShowPreview3(KImageFilePreview* self, const QUrl* url, bool force);
    friend void KImageFilePreview_SetSupportedMimeTypes(KImageFilePreview* self, const libqt_list /* of libqt_string */ mimeTypes);
    friend void KImageFilePreview_SuperSetSupportedMimeTypes(KImageFilePreview* self, const libqt_list /* of libqt_string */ mimeTypes);
    friend void KImageFilePreview_UpdateMicroFocus(KImageFilePreview* self);
    friend void KImageFilePreview_SuperUpdateMicroFocus(KImageFilePreview* self);
    friend void KImageFilePreview_Create(KImageFilePreview* self);
    friend void KImageFilePreview_SuperCreate(KImageFilePreview* self);
    friend void KImageFilePreview_Destroy(KImageFilePreview* self);
    friend void KImageFilePreview_SuperDestroy(KImageFilePreview* self);
    friend bool KImageFilePreview_FocusNextChild(KImageFilePreview* self);
    friend bool KImageFilePreview_SuperFocusNextChild(KImageFilePreview* self);
    friend bool KImageFilePreview_FocusPreviousChild(KImageFilePreview* self);
    friend bool KImageFilePreview_SuperFocusPreviousChild(KImageFilePreview* self);
    friend QObject* KImageFilePreview_Sender(const KImageFilePreview* self);
    friend QObject* KImageFilePreview_SuperSender(const KImageFilePreview* self);
    friend int KImageFilePreview_SenderSignalIndex(const KImageFilePreview* self);
    friend int KImageFilePreview_SuperSenderSignalIndex(const KImageFilePreview* self);
    friend int KImageFilePreview_Receivers(const KImageFilePreview* self, const char* signal);
    friend int KImageFilePreview_SuperReceivers(const KImageFilePreview* self, const char* signal);
    friend bool KImageFilePreview_IsSignalConnected(const KImageFilePreview* self, const QMetaMethod* signal);
    friend bool KImageFilePreview_SuperIsSignalConnected(const KImageFilePreview* self, const QMetaMethod* signal);
    friend double KImageFilePreview_GetDecodedMetricF(const KImageFilePreview* self, int metricA, int metricB);
    friend double KImageFilePreview_SuperGetDecodedMetricF(const KImageFilePreview* self, int metricA, int metricB);
};

#endif
