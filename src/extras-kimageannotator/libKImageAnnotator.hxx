#pragma once
#ifndef SRC_EXTRAS_KIMAGEANNOTATORC_LIBVIRTUALKIMAGEANNOTATOR_H
#define SRC_EXTRAS_KIMAGEANNOTATORC_LIBVIRTUALKIMAGEANNOTATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of kImageAnnotator::KImageAnnotator so that we can call protected methods
class VirtualkImageAnnotatorKImageAnnotator final : public kImageAnnotator::KImageAnnotator {

  public:
    // Virtual class boolean flag
    bool isVirtualkImageAnnotatorKImageAnnotator = true;

    // Virtual class public types (including callbacks)
    using kImageAnnotator__KImageAnnotator_MetaObject_Callback = QMetaObject* (*)();
    using kImageAnnotator__KImageAnnotator_Metacast_Callback = void* (*)(kImageAnnotator__KImageAnnotator*, const char*);
    using kImageAnnotator__KImageAnnotator_Metacall_Callback = int (*)(kImageAnnotator__KImageAnnotator*, int, int, void**);
    using kImageAnnotator__KImageAnnotator_SizeHint_Callback = QSize* (*)();
    using kImageAnnotator__KImageAnnotator_DevType_Callback = int (*)();
    using kImageAnnotator__KImageAnnotator_SetVisible_Callback = void (*)(kImageAnnotator__KImageAnnotator*, bool);
    using kImageAnnotator__KImageAnnotator_MinimumSizeHint_Callback = QSize* (*)();
    using kImageAnnotator__KImageAnnotator_HeightForWidth_Callback = int (*)(const kImageAnnotator__KImageAnnotator*, int);
    using kImageAnnotator__KImageAnnotator_HasHeightForWidth_Callback = bool (*)();
    using kImageAnnotator__KImageAnnotator_PaintEngine_Callback = QPaintEngine* (*)();
    using kImageAnnotator__KImageAnnotator_Event_Callback = bool (*)(kImageAnnotator__KImageAnnotator*, QEvent*);
    using kImageAnnotator__KImageAnnotator_MousePressEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QMouseEvent*);
    using kImageAnnotator__KImageAnnotator_MouseReleaseEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QMouseEvent*);
    using kImageAnnotator__KImageAnnotator_MouseDoubleClickEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QMouseEvent*);
    using kImageAnnotator__KImageAnnotator_MouseMoveEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QMouseEvent*);
    using kImageAnnotator__KImageAnnotator_WheelEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QWheelEvent*);
    using kImageAnnotator__KImageAnnotator_KeyPressEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QKeyEvent*);
    using kImageAnnotator__KImageAnnotator_KeyReleaseEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QKeyEvent*);
    using kImageAnnotator__KImageAnnotator_FocusInEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QFocusEvent*);
    using kImageAnnotator__KImageAnnotator_FocusOutEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QFocusEvent*);
    using kImageAnnotator__KImageAnnotator_EnterEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QEnterEvent*);
    using kImageAnnotator__KImageAnnotator_LeaveEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QEvent*);
    using kImageAnnotator__KImageAnnotator_PaintEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QPaintEvent*);
    using kImageAnnotator__KImageAnnotator_MoveEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QMoveEvent*);
    using kImageAnnotator__KImageAnnotator_ResizeEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QResizeEvent*);
    using kImageAnnotator__KImageAnnotator_CloseEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QCloseEvent*);
    using kImageAnnotator__KImageAnnotator_ContextMenuEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QContextMenuEvent*);
    using kImageAnnotator__KImageAnnotator_TabletEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QTabletEvent*);
    using kImageAnnotator__KImageAnnotator_ActionEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QActionEvent*);
    using kImageAnnotator__KImageAnnotator_DragEnterEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QDragEnterEvent*);
    using kImageAnnotator__KImageAnnotator_DragMoveEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QDragMoveEvent*);
    using kImageAnnotator__KImageAnnotator_DragLeaveEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QDragLeaveEvent*);
    using kImageAnnotator__KImageAnnotator_DropEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QDropEvent*);
    using kImageAnnotator__KImageAnnotator_ShowEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QShowEvent*);
    using kImageAnnotator__KImageAnnotator_HideEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QHideEvent*);
    using kImageAnnotator__KImageAnnotator_NativeEvent_Callback = bool (*)(kImageAnnotator__KImageAnnotator*, libqt_string, void*, intptr_t*);
    using kImageAnnotator__KImageAnnotator_ChangeEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QEvent*);
    using kImageAnnotator__KImageAnnotator_Metric_Callback = int (*)(const kImageAnnotator__KImageAnnotator*, int);
    using kImageAnnotator__KImageAnnotator_InitPainter_Callback = void (*)(const kImageAnnotator__KImageAnnotator*, QPainter*);
    using kImageAnnotator__KImageAnnotator_Redirected_Callback = QPaintDevice* (*)(const kImageAnnotator__KImageAnnotator*, QPoint*);
    using kImageAnnotator__KImageAnnotator_SharedPainter_Callback = QPainter* (*)();
    using kImageAnnotator__KImageAnnotator_InputMethodEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QInputMethodEvent*);
    using kImageAnnotator__KImageAnnotator_InputMethodQuery_Callback = QVariant* (*)(const kImageAnnotator__KImageAnnotator*, int);
    using kImageAnnotator__KImageAnnotator_FocusNextPrevChild_Callback = bool (*)(kImageAnnotator__KImageAnnotator*, bool);
    using kImageAnnotator__KImageAnnotator_EventFilter_Callback = bool (*)(kImageAnnotator__KImageAnnotator*, QObject*, QEvent*);
    using kImageAnnotator__KImageAnnotator_TimerEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QTimerEvent*);
    using kImageAnnotator__KImageAnnotator_ChildEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QChildEvent*);
    using kImageAnnotator__KImageAnnotator_CustomEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QEvent*);
    using kImageAnnotator__KImageAnnotator_ConnectNotify_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QMetaMethod*);
    using kImageAnnotator__KImageAnnotator_DisconnectNotify_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QMetaMethod*);
    using kImageAnnotator__KImageAnnotator_UpdateMicroFocus_Callback = void (*)();
    using kImageAnnotator__KImageAnnotator_Create_Callback = void (*)();
    using kImageAnnotator__KImageAnnotator_Destroy_Callback = void (*)();
    using kImageAnnotator__KImageAnnotator_FocusNextChild_Callback = bool (*)();
    using kImageAnnotator__KImageAnnotator_FocusPreviousChild_Callback = bool (*)();
    using kImageAnnotator__KImageAnnotator_Sender_Callback = QObject* (*)();
    using kImageAnnotator__KImageAnnotator_SenderSignalIndex_Callback = int (*)();
    using kImageAnnotator__KImageAnnotator_Receivers_Callback = int (*)(const kImageAnnotator__KImageAnnotator*, const char*);
    using kImageAnnotator__KImageAnnotator_IsSignalConnected_Callback = bool (*)(const kImageAnnotator__KImageAnnotator*, QMetaMethod*);
    using kImageAnnotator__KImageAnnotator_GetDecodedMetricF_Callback = double (*)(const kImageAnnotator__KImageAnnotator*, int, int);

  protected:
    // Instance callback storage
    kImageAnnotator__KImageAnnotator_MetaObject_Callback kimageannotator__kimageannotator_metaobject_callback = nullptr;
    kImageAnnotator__KImageAnnotator_Metacast_Callback kimageannotator__kimageannotator_metacast_callback = nullptr;
    kImageAnnotator__KImageAnnotator_Metacall_Callback kimageannotator__kimageannotator_metacall_callback = nullptr;
    kImageAnnotator__KImageAnnotator_SizeHint_Callback kimageannotator__kimageannotator_sizehint_callback = nullptr;
    kImageAnnotator__KImageAnnotator_DevType_Callback kimageannotator__kimageannotator_devtype_callback = nullptr;
    kImageAnnotator__KImageAnnotator_SetVisible_Callback kimageannotator__kimageannotator_setvisible_callback = nullptr;
    kImageAnnotator__KImageAnnotator_MinimumSizeHint_Callback kimageannotator__kimageannotator_minimumsizehint_callback = nullptr;
    kImageAnnotator__KImageAnnotator_HeightForWidth_Callback kimageannotator__kimageannotator_heightforwidth_callback = nullptr;
    kImageAnnotator__KImageAnnotator_HasHeightForWidth_Callback kimageannotator__kimageannotator_hasheightforwidth_callback = nullptr;
    kImageAnnotator__KImageAnnotator_PaintEngine_Callback kimageannotator__kimageannotator_paintengine_callback = nullptr;
    kImageAnnotator__KImageAnnotator_Event_Callback kimageannotator__kimageannotator_event_callback = nullptr;
    kImageAnnotator__KImageAnnotator_MousePressEvent_Callback kimageannotator__kimageannotator_mousepressevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_MouseReleaseEvent_Callback kimageannotator__kimageannotator_mousereleaseevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_MouseDoubleClickEvent_Callback kimageannotator__kimageannotator_mousedoubleclickevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_MouseMoveEvent_Callback kimageannotator__kimageannotator_mousemoveevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_WheelEvent_Callback kimageannotator__kimageannotator_wheelevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_KeyPressEvent_Callback kimageannotator__kimageannotator_keypressevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_KeyReleaseEvent_Callback kimageannotator__kimageannotator_keyreleaseevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_FocusInEvent_Callback kimageannotator__kimageannotator_focusinevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_FocusOutEvent_Callback kimageannotator__kimageannotator_focusoutevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_EnterEvent_Callback kimageannotator__kimageannotator_enterevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_LeaveEvent_Callback kimageannotator__kimageannotator_leaveevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_PaintEvent_Callback kimageannotator__kimageannotator_paintevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_MoveEvent_Callback kimageannotator__kimageannotator_moveevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_ResizeEvent_Callback kimageannotator__kimageannotator_resizeevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_CloseEvent_Callback kimageannotator__kimageannotator_closeevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_ContextMenuEvent_Callback kimageannotator__kimageannotator_contextmenuevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_TabletEvent_Callback kimageannotator__kimageannotator_tabletevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_ActionEvent_Callback kimageannotator__kimageannotator_actionevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_DragEnterEvent_Callback kimageannotator__kimageannotator_dragenterevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_DragMoveEvent_Callback kimageannotator__kimageannotator_dragmoveevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_DragLeaveEvent_Callback kimageannotator__kimageannotator_dragleaveevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_DropEvent_Callback kimageannotator__kimageannotator_dropevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_ShowEvent_Callback kimageannotator__kimageannotator_showevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_HideEvent_Callback kimageannotator__kimageannotator_hideevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_NativeEvent_Callback kimageannotator__kimageannotator_nativeevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_ChangeEvent_Callback kimageannotator__kimageannotator_changeevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_Metric_Callback kimageannotator__kimageannotator_metric_callback = nullptr;
    kImageAnnotator__KImageAnnotator_InitPainter_Callback kimageannotator__kimageannotator_initpainter_callback = nullptr;
    kImageAnnotator__KImageAnnotator_Redirected_Callback kimageannotator__kimageannotator_redirected_callback = nullptr;
    kImageAnnotator__KImageAnnotator_SharedPainter_Callback kimageannotator__kimageannotator_sharedpainter_callback = nullptr;
    kImageAnnotator__KImageAnnotator_InputMethodEvent_Callback kimageannotator__kimageannotator_inputmethodevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_InputMethodQuery_Callback kimageannotator__kimageannotator_inputmethodquery_callback = nullptr;
    kImageAnnotator__KImageAnnotator_FocusNextPrevChild_Callback kimageannotator__kimageannotator_focusnextprevchild_callback = nullptr;
    kImageAnnotator__KImageAnnotator_EventFilter_Callback kimageannotator__kimageannotator_eventfilter_callback = nullptr;
    kImageAnnotator__KImageAnnotator_TimerEvent_Callback kimageannotator__kimageannotator_timerevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_ChildEvent_Callback kimageannotator__kimageannotator_childevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_CustomEvent_Callback kimageannotator__kimageannotator_customevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_ConnectNotify_Callback kimageannotator__kimageannotator_connectnotify_callback = nullptr;
    kImageAnnotator__KImageAnnotator_DisconnectNotify_Callback kimageannotator__kimageannotator_disconnectnotify_callback = nullptr;
    kImageAnnotator__KImageAnnotator_UpdateMicroFocus_Callback kimageannotator__kimageannotator_updatemicrofocus_callback = nullptr;
    kImageAnnotator__KImageAnnotator_Create_Callback kimageannotator__kimageannotator_create_callback = nullptr;
    kImageAnnotator__KImageAnnotator_Destroy_Callback kimageannotator__kimageannotator_destroy_callback = nullptr;
    kImageAnnotator__KImageAnnotator_FocusNextChild_Callback kimageannotator__kimageannotator_focusnextchild_callback = nullptr;
    kImageAnnotator__KImageAnnotator_FocusPreviousChild_Callback kimageannotator__kimageannotator_focuspreviouschild_callback = nullptr;
    kImageAnnotator__KImageAnnotator_Sender_Callback kimageannotator__kimageannotator_sender_callback = nullptr;
    kImageAnnotator__KImageAnnotator_SenderSignalIndex_Callback kimageannotator__kimageannotator_sendersignalindex_callback = nullptr;
    kImageAnnotator__KImageAnnotator_Receivers_Callback kimageannotator__kimageannotator_receivers_callback = nullptr;
    kImageAnnotator__KImageAnnotator_IsSignalConnected_Callback kimageannotator__kimageannotator_issignalconnected_callback = nullptr;
    kImageAnnotator__KImageAnnotator_GetDecodedMetricF_Callback kimageannotator__kimageannotator_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kimageannotator__kimageannotator_metaobject_isbase = false;
    mutable bool kimageannotator__kimageannotator_metacast_isbase = false;
    mutable bool kimageannotator__kimageannotator_metacall_isbase = false;
    mutable bool kimageannotator__kimageannotator_sizehint_isbase = false;
    mutable bool kimageannotator__kimageannotator_devtype_isbase = false;
    mutable bool kimageannotator__kimageannotator_setvisible_isbase = false;
    mutable bool kimageannotator__kimageannotator_minimumsizehint_isbase = false;
    mutable bool kimageannotator__kimageannotator_heightforwidth_isbase = false;
    mutable bool kimageannotator__kimageannotator_hasheightforwidth_isbase = false;
    mutable bool kimageannotator__kimageannotator_paintengine_isbase = false;
    mutable bool kimageannotator__kimageannotator_event_isbase = false;
    mutable bool kimageannotator__kimageannotator_mousepressevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_mousereleaseevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_mousedoubleclickevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_mousemoveevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_wheelevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_keypressevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_keyreleaseevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_focusinevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_focusoutevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_enterevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_leaveevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_paintevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_moveevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_resizeevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_closeevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_contextmenuevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_tabletevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_actionevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_dragenterevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_dragmoveevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_dragleaveevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_dropevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_showevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_hideevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_nativeevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_changeevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_metric_isbase = false;
    mutable bool kimageannotator__kimageannotator_initpainter_isbase = false;
    mutable bool kimageannotator__kimageannotator_redirected_isbase = false;
    mutable bool kimageannotator__kimageannotator_sharedpainter_isbase = false;
    mutable bool kimageannotator__kimageannotator_inputmethodevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_inputmethodquery_isbase = false;
    mutable bool kimageannotator__kimageannotator_focusnextprevchild_isbase = false;
    mutable bool kimageannotator__kimageannotator_eventfilter_isbase = false;
    mutable bool kimageannotator__kimageannotator_timerevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_childevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_customevent_isbase = false;
    mutable bool kimageannotator__kimageannotator_connectnotify_isbase = false;
    mutable bool kimageannotator__kimageannotator_disconnectnotify_isbase = false;
    mutable bool kimageannotator__kimageannotator_updatemicrofocus_isbase = false;
    mutable bool kimageannotator__kimageannotator_create_isbase = false;
    mutable bool kimageannotator__kimageannotator_destroy_isbase = false;
    mutable bool kimageannotator__kimageannotator_focusnextchild_isbase = false;
    mutable bool kimageannotator__kimageannotator_focuspreviouschild_isbase = false;
    mutable bool kimageannotator__kimageannotator_sender_isbase = false;
    mutable bool kimageannotator__kimageannotator_sendersignalindex_isbase = false;
    mutable bool kimageannotator__kimageannotator_receivers_isbase = false;
    mutable bool kimageannotator__kimageannotator_issignalconnected_isbase = false;
    mutable bool kimageannotator__kimageannotator_getdecodedmetricf_isbase = false;

  public:
    VirtualkImageAnnotatorKImageAnnotator() : kImageAnnotator::KImageAnnotator() {};

    // Callback setters
    inline void setkImageAnnotator__KImageAnnotator_MetaObject_Callback(kImageAnnotator__KImageAnnotator_MetaObject_Callback cb) { kimageannotator__kimageannotator_metaobject_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_Metacast_Callback(kImageAnnotator__KImageAnnotator_Metacast_Callback cb) { kimageannotator__kimageannotator_metacast_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_Metacall_Callback(kImageAnnotator__KImageAnnotator_Metacall_Callback cb) { kimageannotator__kimageannotator_metacall_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_SizeHint_Callback(kImageAnnotator__KImageAnnotator_SizeHint_Callback cb) { kimageannotator__kimageannotator_sizehint_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_DevType_Callback(kImageAnnotator__KImageAnnotator_DevType_Callback cb) { kimageannotator__kimageannotator_devtype_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_SetVisible_Callback(kImageAnnotator__KImageAnnotator_SetVisible_Callback cb) { kimageannotator__kimageannotator_setvisible_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_MinimumSizeHint_Callback(kImageAnnotator__KImageAnnotator_MinimumSizeHint_Callback cb) { kimageannotator__kimageannotator_minimumsizehint_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_HeightForWidth_Callback(kImageAnnotator__KImageAnnotator_HeightForWidth_Callback cb) { kimageannotator__kimageannotator_heightforwidth_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_HasHeightForWidth_Callback(kImageAnnotator__KImageAnnotator_HasHeightForWidth_Callback cb) { kimageannotator__kimageannotator_hasheightforwidth_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_PaintEngine_Callback(kImageAnnotator__KImageAnnotator_PaintEngine_Callback cb) { kimageannotator__kimageannotator_paintengine_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_Event_Callback(kImageAnnotator__KImageAnnotator_Event_Callback cb) { kimageannotator__kimageannotator_event_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_MousePressEvent_Callback(kImageAnnotator__KImageAnnotator_MousePressEvent_Callback cb) { kimageannotator__kimageannotator_mousepressevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_MouseReleaseEvent_Callback(kImageAnnotator__KImageAnnotator_MouseReleaseEvent_Callback cb) { kimageannotator__kimageannotator_mousereleaseevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_MouseDoubleClickEvent_Callback(kImageAnnotator__KImageAnnotator_MouseDoubleClickEvent_Callback cb) { kimageannotator__kimageannotator_mousedoubleclickevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_MouseMoveEvent_Callback(kImageAnnotator__KImageAnnotator_MouseMoveEvent_Callback cb) { kimageannotator__kimageannotator_mousemoveevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_WheelEvent_Callback(kImageAnnotator__KImageAnnotator_WheelEvent_Callback cb) { kimageannotator__kimageannotator_wheelevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_KeyPressEvent_Callback(kImageAnnotator__KImageAnnotator_KeyPressEvent_Callback cb) { kimageannotator__kimageannotator_keypressevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_KeyReleaseEvent_Callback(kImageAnnotator__KImageAnnotator_KeyReleaseEvent_Callback cb) { kimageannotator__kimageannotator_keyreleaseevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_FocusInEvent_Callback(kImageAnnotator__KImageAnnotator_FocusInEvent_Callback cb) { kimageannotator__kimageannotator_focusinevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_FocusOutEvent_Callback(kImageAnnotator__KImageAnnotator_FocusOutEvent_Callback cb) { kimageannotator__kimageannotator_focusoutevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_EnterEvent_Callback(kImageAnnotator__KImageAnnotator_EnterEvent_Callback cb) { kimageannotator__kimageannotator_enterevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_LeaveEvent_Callback(kImageAnnotator__KImageAnnotator_LeaveEvent_Callback cb) { kimageannotator__kimageannotator_leaveevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_PaintEvent_Callback(kImageAnnotator__KImageAnnotator_PaintEvent_Callback cb) { kimageannotator__kimageannotator_paintevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_MoveEvent_Callback(kImageAnnotator__KImageAnnotator_MoveEvent_Callback cb) { kimageannotator__kimageannotator_moveevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_ResizeEvent_Callback(kImageAnnotator__KImageAnnotator_ResizeEvent_Callback cb) { kimageannotator__kimageannotator_resizeevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_CloseEvent_Callback(kImageAnnotator__KImageAnnotator_CloseEvent_Callback cb) { kimageannotator__kimageannotator_closeevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_ContextMenuEvent_Callback(kImageAnnotator__KImageAnnotator_ContextMenuEvent_Callback cb) { kimageannotator__kimageannotator_contextmenuevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_TabletEvent_Callback(kImageAnnotator__KImageAnnotator_TabletEvent_Callback cb) { kimageannotator__kimageannotator_tabletevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_ActionEvent_Callback(kImageAnnotator__KImageAnnotator_ActionEvent_Callback cb) { kimageannotator__kimageannotator_actionevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_DragEnterEvent_Callback(kImageAnnotator__KImageAnnotator_DragEnterEvent_Callback cb) { kimageannotator__kimageannotator_dragenterevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_DragMoveEvent_Callback(kImageAnnotator__KImageAnnotator_DragMoveEvent_Callback cb) { kimageannotator__kimageannotator_dragmoveevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_DragLeaveEvent_Callback(kImageAnnotator__KImageAnnotator_DragLeaveEvent_Callback cb) { kimageannotator__kimageannotator_dragleaveevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_DropEvent_Callback(kImageAnnotator__KImageAnnotator_DropEvent_Callback cb) { kimageannotator__kimageannotator_dropevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_ShowEvent_Callback(kImageAnnotator__KImageAnnotator_ShowEvent_Callback cb) { kimageannotator__kimageannotator_showevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_HideEvent_Callback(kImageAnnotator__KImageAnnotator_HideEvent_Callback cb) { kimageannotator__kimageannotator_hideevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_NativeEvent_Callback(kImageAnnotator__KImageAnnotator_NativeEvent_Callback cb) { kimageannotator__kimageannotator_nativeevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_ChangeEvent_Callback(kImageAnnotator__KImageAnnotator_ChangeEvent_Callback cb) { kimageannotator__kimageannotator_changeevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_Metric_Callback(kImageAnnotator__KImageAnnotator_Metric_Callback cb) { kimageannotator__kimageannotator_metric_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_InitPainter_Callback(kImageAnnotator__KImageAnnotator_InitPainter_Callback cb) { kimageannotator__kimageannotator_initpainter_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_Redirected_Callback(kImageAnnotator__KImageAnnotator_Redirected_Callback cb) { kimageannotator__kimageannotator_redirected_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_SharedPainter_Callback(kImageAnnotator__KImageAnnotator_SharedPainter_Callback cb) { kimageannotator__kimageannotator_sharedpainter_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_InputMethodEvent_Callback(kImageAnnotator__KImageAnnotator_InputMethodEvent_Callback cb) { kimageannotator__kimageannotator_inputmethodevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_InputMethodQuery_Callback(kImageAnnotator__KImageAnnotator_InputMethodQuery_Callback cb) { kimageannotator__kimageannotator_inputmethodquery_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_FocusNextPrevChild_Callback(kImageAnnotator__KImageAnnotator_FocusNextPrevChild_Callback cb) { kimageannotator__kimageannotator_focusnextprevchild_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_EventFilter_Callback(kImageAnnotator__KImageAnnotator_EventFilter_Callback cb) { kimageannotator__kimageannotator_eventfilter_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_TimerEvent_Callback(kImageAnnotator__KImageAnnotator_TimerEvent_Callback cb) { kimageannotator__kimageannotator_timerevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_ChildEvent_Callback(kImageAnnotator__KImageAnnotator_ChildEvent_Callback cb) { kimageannotator__kimageannotator_childevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_CustomEvent_Callback(kImageAnnotator__KImageAnnotator_CustomEvent_Callback cb) { kimageannotator__kimageannotator_customevent_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_ConnectNotify_Callback(kImageAnnotator__KImageAnnotator_ConnectNotify_Callback cb) { kimageannotator__kimageannotator_connectnotify_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_DisconnectNotify_Callback(kImageAnnotator__KImageAnnotator_DisconnectNotify_Callback cb) { kimageannotator__kimageannotator_disconnectnotify_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_UpdateMicroFocus_Callback(kImageAnnotator__KImageAnnotator_UpdateMicroFocus_Callback cb) { kimageannotator__kimageannotator_updatemicrofocus_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_Create_Callback(kImageAnnotator__KImageAnnotator_Create_Callback cb) { kimageannotator__kimageannotator_create_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_Destroy_Callback(kImageAnnotator__KImageAnnotator_Destroy_Callback cb) { kimageannotator__kimageannotator_destroy_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_FocusNextChild_Callback(kImageAnnotator__KImageAnnotator_FocusNextChild_Callback cb) { kimageannotator__kimageannotator_focusnextchild_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_FocusPreviousChild_Callback(kImageAnnotator__KImageAnnotator_FocusPreviousChild_Callback cb) { kimageannotator__kimageannotator_focuspreviouschild_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_Sender_Callback(kImageAnnotator__KImageAnnotator_Sender_Callback cb) { kimageannotator__kimageannotator_sender_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_SenderSignalIndex_Callback(kImageAnnotator__KImageAnnotator_SenderSignalIndex_Callback cb) { kimageannotator__kimageannotator_sendersignalindex_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_Receivers_Callback(kImageAnnotator__KImageAnnotator_Receivers_Callback cb) { kimageannotator__kimageannotator_receivers_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_IsSignalConnected_Callback(kImageAnnotator__KImageAnnotator_IsSignalConnected_Callback cb) { kimageannotator__kimageannotator_issignalconnected_callback = cb; }
    inline void setkImageAnnotator__KImageAnnotator_GetDecodedMetricF_Callback(kImageAnnotator__KImageAnnotator_GetDecodedMetricF_Callback cb) { kimageannotator__kimageannotator_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setkImageAnnotator__KImageAnnotator_MetaObject_IsBase(bool value) const { kimageannotator__kimageannotator_metaobject_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_Metacast_IsBase(bool value) const { kimageannotator__kimageannotator_metacast_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_Metacall_IsBase(bool value) const { kimageannotator__kimageannotator_metacall_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_SizeHint_IsBase(bool value) const { kimageannotator__kimageannotator_sizehint_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_DevType_IsBase(bool value) const { kimageannotator__kimageannotator_devtype_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_SetVisible_IsBase(bool value) const { kimageannotator__kimageannotator_setvisible_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_MinimumSizeHint_IsBase(bool value) const { kimageannotator__kimageannotator_minimumsizehint_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_HeightForWidth_IsBase(bool value) const { kimageannotator__kimageannotator_heightforwidth_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_HasHeightForWidth_IsBase(bool value) const { kimageannotator__kimageannotator_hasheightforwidth_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_PaintEngine_IsBase(bool value) const { kimageannotator__kimageannotator_paintengine_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_Event_IsBase(bool value) const { kimageannotator__kimageannotator_event_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_MousePressEvent_IsBase(bool value) const { kimageannotator__kimageannotator_mousepressevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_MouseReleaseEvent_IsBase(bool value) const { kimageannotator__kimageannotator_mousereleaseevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_MouseDoubleClickEvent_IsBase(bool value) const { kimageannotator__kimageannotator_mousedoubleclickevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_MouseMoveEvent_IsBase(bool value) const { kimageannotator__kimageannotator_mousemoveevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_WheelEvent_IsBase(bool value) const { kimageannotator__kimageannotator_wheelevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_KeyPressEvent_IsBase(bool value) const { kimageannotator__kimageannotator_keypressevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_KeyReleaseEvent_IsBase(bool value) const { kimageannotator__kimageannotator_keyreleaseevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_FocusInEvent_IsBase(bool value) const { kimageannotator__kimageannotator_focusinevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_FocusOutEvent_IsBase(bool value) const { kimageannotator__kimageannotator_focusoutevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_EnterEvent_IsBase(bool value) const { kimageannotator__kimageannotator_enterevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_LeaveEvent_IsBase(bool value) const { kimageannotator__kimageannotator_leaveevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_PaintEvent_IsBase(bool value) const { kimageannotator__kimageannotator_paintevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_MoveEvent_IsBase(bool value) const { kimageannotator__kimageannotator_moveevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_ResizeEvent_IsBase(bool value) const { kimageannotator__kimageannotator_resizeevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_CloseEvent_IsBase(bool value) const { kimageannotator__kimageannotator_closeevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_ContextMenuEvent_IsBase(bool value) const { kimageannotator__kimageannotator_contextmenuevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_TabletEvent_IsBase(bool value) const { kimageannotator__kimageannotator_tabletevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_ActionEvent_IsBase(bool value) const { kimageannotator__kimageannotator_actionevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_DragEnterEvent_IsBase(bool value) const { kimageannotator__kimageannotator_dragenterevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_DragMoveEvent_IsBase(bool value) const { kimageannotator__kimageannotator_dragmoveevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_DragLeaveEvent_IsBase(bool value) const { kimageannotator__kimageannotator_dragleaveevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_DropEvent_IsBase(bool value) const { kimageannotator__kimageannotator_dropevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_ShowEvent_IsBase(bool value) const { kimageannotator__kimageannotator_showevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_HideEvent_IsBase(bool value) const { kimageannotator__kimageannotator_hideevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_NativeEvent_IsBase(bool value) const { kimageannotator__kimageannotator_nativeevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_ChangeEvent_IsBase(bool value) const { kimageannotator__kimageannotator_changeevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_Metric_IsBase(bool value) const { kimageannotator__kimageannotator_metric_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_InitPainter_IsBase(bool value) const { kimageannotator__kimageannotator_initpainter_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_Redirected_IsBase(bool value) const { kimageannotator__kimageannotator_redirected_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_SharedPainter_IsBase(bool value) const { kimageannotator__kimageannotator_sharedpainter_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_InputMethodEvent_IsBase(bool value) const { kimageannotator__kimageannotator_inputmethodevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_InputMethodQuery_IsBase(bool value) const { kimageannotator__kimageannotator_inputmethodquery_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_FocusNextPrevChild_IsBase(bool value) const { kimageannotator__kimageannotator_focusnextprevchild_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_EventFilter_IsBase(bool value) const { kimageannotator__kimageannotator_eventfilter_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_TimerEvent_IsBase(bool value) const { kimageannotator__kimageannotator_timerevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_ChildEvent_IsBase(bool value) const { kimageannotator__kimageannotator_childevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_CustomEvent_IsBase(bool value) const { kimageannotator__kimageannotator_customevent_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_ConnectNotify_IsBase(bool value) const { kimageannotator__kimageannotator_connectnotify_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_DisconnectNotify_IsBase(bool value) const { kimageannotator__kimageannotator_disconnectnotify_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_UpdateMicroFocus_IsBase(bool value) const { kimageannotator__kimageannotator_updatemicrofocus_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_Create_IsBase(bool value) const { kimageannotator__kimageannotator_create_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_Destroy_IsBase(bool value) const { kimageannotator__kimageannotator_destroy_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_FocusNextChild_IsBase(bool value) const { kimageannotator__kimageannotator_focusnextchild_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_FocusPreviousChild_IsBase(bool value) const { kimageannotator__kimageannotator_focuspreviouschild_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_Sender_IsBase(bool value) const { kimageannotator__kimageannotator_sender_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_SenderSignalIndex_IsBase(bool value) const { kimageannotator__kimageannotator_sendersignalindex_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_Receivers_IsBase(bool value) const { kimageannotator__kimageannotator_receivers_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_IsSignalConnected_IsBase(bool value) const { kimageannotator__kimageannotator_issignalconnected_isbase = value; }
    inline void setkImageAnnotator__KImageAnnotator_GetDecodedMetricF_IsBase(bool value) const { kimageannotator__kimageannotator_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kimageannotator__kimageannotator_metaobject_isbase) {
            kimageannotator__kimageannotator_metaobject_isbase = false;
            return kImageAnnotator__KImageAnnotator::metaObject();
        }
        auto metaobject_cb = kimageannotator__kimageannotator_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kimageannotator__kimageannotator_metacast_isbase) {
            kimageannotator__kimageannotator_metacast_isbase = false;
            return kImageAnnotator__KImageAnnotator::qt_metacast(param1);
        }
        auto metacast_cb = kimageannotator__kimageannotator_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kimageannotator__kimageannotator_metacall_isbase) {
            kimageannotator__kimageannotator_metacall_isbase = false;
            return kImageAnnotator__KImageAnnotator::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kimageannotator__kimageannotator_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return kImageAnnotator__KImageAnnotator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kimageannotator__kimageannotator_sizehint_isbase) {
            kimageannotator__kimageannotator_sizehint_isbase = false;
            return kImageAnnotator__KImageAnnotator::sizeHint();
        }
        auto sizehint_cb = kimageannotator__kimageannotator_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kimageannotator__kimageannotator_devtype_isbase) {
            kimageannotator__kimageannotator_devtype_isbase = false;
            return kImageAnnotator__KImageAnnotator::devType();
        }
        auto devtype_cb = kimageannotator__kimageannotator_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return kImageAnnotator__KImageAnnotator::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kimageannotator__kimageannotator_setvisible_isbase) {
            kimageannotator__kimageannotator_setvisible_isbase = false;
            kImageAnnotator__KImageAnnotator::setVisible(visible);
            return;
        }
        auto setvisible_cb = kimageannotator__kimageannotator_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kimageannotator__kimageannotator_minimumsizehint_isbase) {
            kimageannotator__kimageannotator_minimumsizehint_isbase = false;
            return kImageAnnotator__KImageAnnotator::minimumSizeHint();
        }
        auto minimumsizehint_cb = kimageannotator__kimageannotator_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kimageannotator__kimageannotator_heightforwidth_isbase) {
            kimageannotator__kimageannotator_heightforwidth_isbase = false;
            return kImageAnnotator__KImageAnnotator::heightForWidth(param1);
        }
        auto heightforwidth_cb = kimageannotator__kimageannotator_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return kImageAnnotator__KImageAnnotator::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kimageannotator__kimageannotator_hasheightforwidth_isbase) {
            kimageannotator__kimageannotator_hasheightforwidth_isbase = false;
            return kImageAnnotator__KImageAnnotator::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kimageannotator__kimageannotator_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kimageannotator__kimageannotator_paintengine_isbase) {
            kimageannotator__kimageannotator_paintengine_isbase = false;
            return kImageAnnotator__KImageAnnotator::paintEngine();
        }
        auto paintengine_cb = kimageannotator__kimageannotator_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kimageannotator__kimageannotator_event_isbase) {
            kimageannotator__kimageannotator_event_isbase = false;
            return kImageAnnotator__KImageAnnotator::event(event);
        }
        auto event_cb = kimageannotator__kimageannotator_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kimageannotator__kimageannotator_mousepressevent_isbase) {
            kimageannotator__kimageannotator_mousepressevent_isbase = false;
            kImageAnnotator__KImageAnnotator::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kimageannotator__kimageannotator_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kimageannotator__kimageannotator_mousereleaseevent_isbase) {
            kimageannotator__kimageannotator_mousereleaseevent_isbase = false;
            kImageAnnotator__KImageAnnotator::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kimageannotator__kimageannotator_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kimageannotator__kimageannotator_mousedoubleclickevent_isbase) {
            kimageannotator__kimageannotator_mousedoubleclickevent_isbase = false;
            kImageAnnotator__KImageAnnotator::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kimageannotator__kimageannotator_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kimageannotator__kimageannotator_mousemoveevent_isbase) {
            kimageannotator__kimageannotator_mousemoveevent_isbase = false;
            kImageAnnotator__KImageAnnotator::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kimageannotator__kimageannotator_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kimageannotator__kimageannotator_wheelevent_isbase) {
            kimageannotator__kimageannotator_wheelevent_isbase = false;
            kImageAnnotator__KImageAnnotator::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kimageannotator__kimageannotator_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kimageannotator__kimageannotator_keypressevent_isbase) {
            kimageannotator__kimageannotator_keypressevent_isbase = false;
            kImageAnnotator__KImageAnnotator::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = kimageannotator__kimageannotator_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kimageannotator__kimageannotator_keyreleaseevent_isbase) {
            kimageannotator__kimageannotator_keyreleaseevent_isbase = false;
            kImageAnnotator__KImageAnnotator::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kimageannotator__kimageannotator_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kimageannotator__kimageannotator_focusinevent_isbase) {
            kimageannotator__kimageannotator_focusinevent_isbase = false;
            kImageAnnotator__KImageAnnotator::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kimageannotator__kimageannotator_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kimageannotator__kimageannotator_focusoutevent_isbase) {
            kimageannotator__kimageannotator_focusoutevent_isbase = false;
            kImageAnnotator__KImageAnnotator::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kimageannotator__kimageannotator_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kimageannotator__kimageannotator_enterevent_isbase) {
            kimageannotator__kimageannotator_enterevent_isbase = false;
            kImageAnnotator__KImageAnnotator::enterEvent(event);
            return;
        }
        auto enterevent_cb = kimageannotator__kimageannotator_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kimageannotator__kimageannotator_leaveevent_isbase) {
            kimageannotator__kimageannotator_leaveevent_isbase = false;
            kImageAnnotator__KImageAnnotator::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kimageannotator__kimageannotator_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kimageannotator__kimageannotator_paintevent_isbase) {
            kimageannotator__kimageannotator_paintevent_isbase = false;
            kImageAnnotator__KImageAnnotator::paintEvent(event);
            return;
        }
        auto paintevent_cb = kimageannotator__kimageannotator_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kimageannotator__kimageannotator_moveevent_isbase) {
            kimageannotator__kimageannotator_moveevent_isbase = false;
            kImageAnnotator__KImageAnnotator::moveEvent(event);
            return;
        }
        auto moveevent_cb = kimageannotator__kimageannotator_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kimageannotator__kimageannotator_resizeevent_isbase) {
            kimageannotator__kimageannotator_resizeevent_isbase = false;
            kImageAnnotator__KImageAnnotator::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = kimageannotator__kimageannotator_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kimageannotator__kimageannotator_closeevent_isbase) {
            kimageannotator__kimageannotator_closeevent_isbase = false;
            kImageAnnotator__KImageAnnotator::closeEvent(event);
            return;
        }
        auto closeevent_cb = kimageannotator__kimageannotator_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kimageannotator__kimageannotator_contextmenuevent_isbase) {
            kimageannotator__kimageannotator_contextmenuevent_isbase = false;
            kImageAnnotator__KImageAnnotator::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = kimageannotator__kimageannotator_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kimageannotator__kimageannotator_tabletevent_isbase) {
            kimageannotator__kimageannotator_tabletevent_isbase = false;
            kImageAnnotator__KImageAnnotator::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kimageannotator__kimageannotator_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kimageannotator__kimageannotator_actionevent_isbase) {
            kimageannotator__kimageannotator_actionevent_isbase = false;
            kImageAnnotator__KImageAnnotator::actionEvent(event);
            return;
        }
        auto actionevent_cb = kimageannotator__kimageannotator_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kimageannotator__kimageannotator_dragenterevent_isbase) {
            kimageannotator__kimageannotator_dragenterevent_isbase = false;
            kImageAnnotator__KImageAnnotator::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kimageannotator__kimageannotator_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kimageannotator__kimageannotator_dragmoveevent_isbase) {
            kimageannotator__kimageannotator_dragmoveevent_isbase = false;
            kImageAnnotator__KImageAnnotator::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kimageannotator__kimageannotator_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kimageannotator__kimageannotator_dragleaveevent_isbase) {
            kimageannotator__kimageannotator_dragleaveevent_isbase = false;
            kImageAnnotator__KImageAnnotator::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kimageannotator__kimageannotator_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kimageannotator__kimageannotator_dropevent_isbase) {
            kimageannotator__kimageannotator_dropevent_isbase = false;
            kImageAnnotator__KImageAnnotator::dropEvent(event);
            return;
        }
        auto dropevent_cb = kimageannotator__kimageannotator_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kimageannotator__kimageannotator_showevent_isbase) {
            kimageannotator__kimageannotator_showevent_isbase = false;
            kImageAnnotator__KImageAnnotator::showEvent(event);
            return;
        }
        auto showevent_cb = kimageannotator__kimageannotator_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kimageannotator__kimageannotator_hideevent_isbase) {
            kimageannotator__kimageannotator_hideevent_isbase = false;
            kImageAnnotator__KImageAnnotator::hideEvent(event);
            return;
        }
        auto hideevent_cb = kimageannotator__kimageannotator_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kimageannotator__kimageannotator_nativeevent_isbase) {
            kimageannotator__kimageannotator_nativeevent_isbase = false;
            return kImageAnnotator__KImageAnnotator::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kimageannotator__kimageannotator_nativeevent_callback;
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
        return kImageAnnotator__KImageAnnotator::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kimageannotator__kimageannotator_changeevent_isbase) {
            kimageannotator__kimageannotator_changeevent_isbase = false;
            kImageAnnotator__KImageAnnotator::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kimageannotator__kimageannotator_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kimageannotator__kimageannotator_metric_isbase) {
            kimageannotator__kimageannotator_metric_isbase = false;
            return kImageAnnotator__KImageAnnotator::metric(param1);
        }
        auto metric_cb = kimageannotator__kimageannotator_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return kImageAnnotator__KImageAnnotator::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kimageannotator__kimageannotator_initpainter_isbase) {
            kimageannotator__kimageannotator_initpainter_isbase = false;
            kImageAnnotator__KImageAnnotator::initPainter(painter);
            return;
        }
        auto initpainter_cb = kimageannotator__kimageannotator_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kimageannotator__kimageannotator_redirected_isbase) {
            kimageannotator__kimageannotator_redirected_isbase = false;
            return kImageAnnotator__KImageAnnotator::redirected(offset);
        }
        auto redirected_cb = kimageannotator__kimageannotator_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kimageannotator__kimageannotator_sharedpainter_isbase) {
            kimageannotator__kimageannotator_sharedpainter_isbase = false;
            return kImageAnnotator__KImageAnnotator::sharedPainter();
        }
        auto sharedpainter_cb = kimageannotator__kimageannotator_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kimageannotator__kimageannotator_inputmethodevent_isbase) {
            kimageannotator__kimageannotator_inputmethodevent_isbase = false;
            kImageAnnotator__KImageAnnotator::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kimageannotator__kimageannotator_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kimageannotator__kimageannotator_inputmethodquery_isbase) {
            kimageannotator__kimageannotator_inputmethodquery_isbase = false;
            return kImageAnnotator__KImageAnnotator::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kimageannotator__kimageannotator_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kimageannotator__kimageannotator_focusnextprevchild_isbase) {
            kimageannotator__kimageannotator_focusnextprevchild_isbase = false;
            return kImageAnnotator__KImageAnnotator::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kimageannotator__kimageannotator_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kimageannotator__kimageannotator_eventfilter_isbase) {
            kimageannotator__kimageannotator_eventfilter_isbase = false;
            return kImageAnnotator__KImageAnnotator::eventFilter(watched, event);
        }
        auto eventfilter_cb = kimageannotator__kimageannotator_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kimageannotator__kimageannotator_timerevent_isbase) {
            kimageannotator__kimageannotator_timerevent_isbase = false;
            kImageAnnotator__KImageAnnotator::timerEvent(event);
            return;
        }
        auto timerevent_cb = kimageannotator__kimageannotator_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kimageannotator__kimageannotator_childevent_isbase) {
            kimageannotator__kimageannotator_childevent_isbase = false;
            kImageAnnotator__KImageAnnotator::childEvent(event);
            return;
        }
        auto childevent_cb = kimageannotator__kimageannotator_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kimageannotator__kimageannotator_customevent_isbase) {
            kimageannotator__kimageannotator_customevent_isbase = false;
            kImageAnnotator__KImageAnnotator::customEvent(event);
            return;
        }
        auto customevent_cb = kimageannotator__kimageannotator_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kimageannotator__kimageannotator_connectnotify_isbase) {
            kimageannotator__kimageannotator_connectnotify_isbase = false;
            kImageAnnotator__KImageAnnotator::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kimageannotator__kimageannotator_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kimageannotator__kimageannotator_disconnectnotify_isbase) {
            kimageannotator__kimageannotator_disconnectnotify_isbase = false;
            kImageAnnotator__KImageAnnotator::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kimageannotator__kimageannotator_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kimageannotator__kimageannotator_updatemicrofocus_isbase) {
            kimageannotator__kimageannotator_updatemicrofocus_isbase = false;
            kImageAnnotator__KImageAnnotator::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kimageannotator__kimageannotator_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        kImageAnnotator__KImageAnnotator::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kimageannotator__kimageannotator_create_isbase) {
            kimageannotator__kimageannotator_create_isbase = false;
            kImageAnnotator__KImageAnnotator::create();
            return;
        }
        auto create_cb = kimageannotator__kimageannotator_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        kImageAnnotator__KImageAnnotator::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kimageannotator__kimageannotator_destroy_isbase) {
            kimageannotator__kimageannotator_destroy_isbase = false;
            kImageAnnotator__KImageAnnotator::destroy();
            return;
        }
        auto destroy_cb = kimageannotator__kimageannotator_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        kImageAnnotator__KImageAnnotator::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kimageannotator__kimageannotator_focusnextchild_isbase) {
            kimageannotator__kimageannotator_focusnextchild_isbase = false;
            return kImageAnnotator__KImageAnnotator::focusNextChild();
        }
        auto focusnextchild_cb = kimageannotator__kimageannotator_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kimageannotator__kimageannotator_focuspreviouschild_isbase) {
            kimageannotator__kimageannotator_focuspreviouschild_isbase = false;
            return kImageAnnotator__KImageAnnotator::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kimageannotator__kimageannotator_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kimageannotator__kimageannotator_sender_isbase) {
            kimageannotator__kimageannotator_sender_isbase = false;
            return kImageAnnotator__KImageAnnotator::sender();
        }
        auto sender_cb = kimageannotator__kimageannotator_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kimageannotator__kimageannotator_sendersignalindex_isbase) {
            kimageannotator__kimageannotator_sendersignalindex_isbase = false;
            return kImageAnnotator__KImageAnnotator::senderSignalIndex();
        }
        auto sendersignalindex_cb = kimageannotator__kimageannotator_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return kImageAnnotator__KImageAnnotator::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kimageannotator__kimageannotator_receivers_isbase) {
            kimageannotator__kimageannotator_receivers_isbase = false;
            return kImageAnnotator__KImageAnnotator::receivers(signal);
        }
        auto receivers_cb = kimageannotator__kimageannotator_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return kImageAnnotator__KImageAnnotator::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kimageannotator__kimageannotator_issignalconnected_isbase) {
            kimageannotator__kimageannotator_issignalconnected_isbase = false;
            return kImageAnnotator__KImageAnnotator::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kimageannotator__kimageannotator_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kimageannotator__kimageannotator_getdecodedmetricf_isbase) {
            kimageannotator__kimageannotator_getdecodedmetricf_isbase = false;
            return kImageAnnotator__KImageAnnotator::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kimageannotator__kimageannotator_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return kImageAnnotator__KImageAnnotator::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool kImageAnnotator__KImageAnnotator_Event(kImageAnnotator::KImageAnnotator* self, QEvent* event);
    friend bool kImageAnnotator__KImageAnnotator_SuperEvent(kImageAnnotator::KImageAnnotator* self, QEvent* event);
    friend void kImageAnnotator__KImageAnnotator_MousePressEvent(kImageAnnotator::KImageAnnotator* self, QMouseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperMousePressEvent(kImageAnnotator::KImageAnnotator* self, QMouseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_MouseReleaseEvent(kImageAnnotator::KImageAnnotator* self, QMouseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperMouseReleaseEvent(kImageAnnotator::KImageAnnotator* self, QMouseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_MouseDoubleClickEvent(kImageAnnotator::KImageAnnotator* self, QMouseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperMouseDoubleClickEvent(kImageAnnotator::KImageAnnotator* self, QMouseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_MouseMoveEvent(kImageAnnotator::KImageAnnotator* self, QMouseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperMouseMoveEvent(kImageAnnotator::KImageAnnotator* self, QMouseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_WheelEvent(kImageAnnotator::KImageAnnotator* self, QWheelEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperWheelEvent(kImageAnnotator::KImageAnnotator* self, QWheelEvent* event);
    friend void kImageAnnotator__KImageAnnotator_KeyPressEvent(kImageAnnotator::KImageAnnotator* self, QKeyEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperKeyPressEvent(kImageAnnotator::KImageAnnotator* self, QKeyEvent* event);
    friend void kImageAnnotator__KImageAnnotator_KeyReleaseEvent(kImageAnnotator::KImageAnnotator* self, QKeyEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperKeyReleaseEvent(kImageAnnotator::KImageAnnotator* self, QKeyEvent* event);
    friend void kImageAnnotator__KImageAnnotator_FocusInEvent(kImageAnnotator::KImageAnnotator* self, QFocusEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperFocusInEvent(kImageAnnotator::KImageAnnotator* self, QFocusEvent* event);
    friend void kImageAnnotator__KImageAnnotator_FocusOutEvent(kImageAnnotator::KImageAnnotator* self, QFocusEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperFocusOutEvent(kImageAnnotator::KImageAnnotator* self, QFocusEvent* event);
    friend void kImageAnnotator__KImageAnnotator_EnterEvent(kImageAnnotator::KImageAnnotator* self, QEnterEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperEnterEvent(kImageAnnotator::KImageAnnotator* self, QEnterEvent* event);
    friend void kImageAnnotator__KImageAnnotator_LeaveEvent(kImageAnnotator::KImageAnnotator* self, QEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperLeaveEvent(kImageAnnotator::KImageAnnotator* self, QEvent* event);
    friend void kImageAnnotator__KImageAnnotator_PaintEvent(kImageAnnotator::KImageAnnotator* self, QPaintEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperPaintEvent(kImageAnnotator::KImageAnnotator* self, QPaintEvent* event);
    friend void kImageAnnotator__KImageAnnotator_MoveEvent(kImageAnnotator::KImageAnnotator* self, QMoveEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperMoveEvent(kImageAnnotator::KImageAnnotator* self, QMoveEvent* event);
    friend void kImageAnnotator__KImageAnnotator_ResizeEvent(kImageAnnotator::KImageAnnotator* self, QResizeEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperResizeEvent(kImageAnnotator::KImageAnnotator* self, QResizeEvent* event);
    friend void kImageAnnotator__KImageAnnotator_CloseEvent(kImageAnnotator::KImageAnnotator* self, QCloseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperCloseEvent(kImageAnnotator::KImageAnnotator* self, QCloseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_ContextMenuEvent(kImageAnnotator::KImageAnnotator* self, QContextMenuEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperContextMenuEvent(kImageAnnotator::KImageAnnotator* self, QContextMenuEvent* event);
    friend void kImageAnnotator__KImageAnnotator_TabletEvent(kImageAnnotator::KImageAnnotator* self, QTabletEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperTabletEvent(kImageAnnotator::KImageAnnotator* self, QTabletEvent* event);
    friend void kImageAnnotator__KImageAnnotator_ActionEvent(kImageAnnotator::KImageAnnotator* self, QActionEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperActionEvent(kImageAnnotator::KImageAnnotator* self, QActionEvent* event);
    friend void kImageAnnotator__KImageAnnotator_DragEnterEvent(kImageAnnotator::KImageAnnotator* self, QDragEnterEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperDragEnterEvent(kImageAnnotator::KImageAnnotator* self, QDragEnterEvent* event);
    friend void kImageAnnotator__KImageAnnotator_DragMoveEvent(kImageAnnotator::KImageAnnotator* self, QDragMoveEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperDragMoveEvent(kImageAnnotator::KImageAnnotator* self, QDragMoveEvent* event);
    friend void kImageAnnotator__KImageAnnotator_DragLeaveEvent(kImageAnnotator::KImageAnnotator* self, QDragLeaveEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperDragLeaveEvent(kImageAnnotator::KImageAnnotator* self, QDragLeaveEvent* event);
    friend void kImageAnnotator__KImageAnnotator_DropEvent(kImageAnnotator::KImageAnnotator* self, QDropEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperDropEvent(kImageAnnotator::KImageAnnotator* self, QDropEvent* event);
    friend void kImageAnnotator__KImageAnnotator_ShowEvent(kImageAnnotator::KImageAnnotator* self, QShowEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperShowEvent(kImageAnnotator::KImageAnnotator* self, QShowEvent* event);
    friend void kImageAnnotator__KImageAnnotator_HideEvent(kImageAnnotator::KImageAnnotator* self, QHideEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperHideEvent(kImageAnnotator::KImageAnnotator* self, QHideEvent* event);
    friend bool kImageAnnotator__KImageAnnotator_NativeEvent(kImageAnnotator::KImageAnnotator* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool kImageAnnotator__KImageAnnotator_SuperNativeEvent(kImageAnnotator::KImageAnnotator* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void kImageAnnotator__KImageAnnotator_ChangeEvent(kImageAnnotator::KImageAnnotator* self, QEvent* param1);
    friend void kImageAnnotator__KImageAnnotator_SuperChangeEvent(kImageAnnotator::KImageAnnotator* self, QEvent* param1);
    friend int kImageAnnotator__KImageAnnotator_Metric(const kImageAnnotator::KImageAnnotator* self, int param1);
    friend int kImageAnnotator__KImageAnnotator_SuperMetric(const kImageAnnotator::KImageAnnotator* self, int param1);
    friend void kImageAnnotator__KImageAnnotator_InitPainter(const kImageAnnotator::KImageAnnotator* self, QPainter* painter);
    friend void kImageAnnotator__KImageAnnotator_SuperInitPainter(const kImageAnnotator::KImageAnnotator* self, QPainter* painter);
    friend QPaintDevice* kImageAnnotator__KImageAnnotator_Redirected(const kImageAnnotator::KImageAnnotator* self, QPoint* offset);
    friend QPaintDevice* kImageAnnotator__KImageAnnotator_SuperRedirected(const kImageAnnotator::KImageAnnotator* self, QPoint* offset);
    friend QPainter* kImageAnnotator__KImageAnnotator_SharedPainter(const kImageAnnotator::KImageAnnotator* self);
    friend QPainter* kImageAnnotator__KImageAnnotator_SuperSharedPainter(const kImageAnnotator::KImageAnnotator* self);
    friend void kImageAnnotator__KImageAnnotator_InputMethodEvent(kImageAnnotator::KImageAnnotator* self, QInputMethodEvent* param1);
    friend void kImageAnnotator__KImageAnnotator_SuperInputMethodEvent(kImageAnnotator::KImageAnnotator* self, QInputMethodEvent* param1);
    friend bool kImageAnnotator__KImageAnnotator_FocusNextPrevChild(kImageAnnotator::KImageAnnotator* self, bool next);
    friend bool kImageAnnotator__KImageAnnotator_SuperFocusNextPrevChild(kImageAnnotator::KImageAnnotator* self, bool next);
    friend void kImageAnnotator__KImageAnnotator_TimerEvent(kImageAnnotator::KImageAnnotator* self, QTimerEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperTimerEvent(kImageAnnotator::KImageAnnotator* self, QTimerEvent* event);
    friend void kImageAnnotator__KImageAnnotator_ChildEvent(kImageAnnotator::KImageAnnotator* self, QChildEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperChildEvent(kImageAnnotator::KImageAnnotator* self, QChildEvent* event);
    friend void kImageAnnotator__KImageAnnotator_CustomEvent(kImageAnnotator::KImageAnnotator* self, QEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperCustomEvent(kImageAnnotator::KImageAnnotator* self, QEvent* event);
    friend void kImageAnnotator__KImageAnnotator_ConnectNotify(kImageAnnotator::KImageAnnotator* self, const QMetaMethod* signal);
    friend void kImageAnnotator__KImageAnnotator_SuperConnectNotify(kImageAnnotator::KImageAnnotator* self, const QMetaMethod* signal);
    friend void kImageAnnotator__KImageAnnotator_DisconnectNotify(kImageAnnotator::KImageAnnotator* self, const QMetaMethod* signal);
    friend void kImageAnnotator__KImageAnnotator_SuperDisconnectNotify(kImageAnnotator::KImageAnnotator* self, const QMetaMethod* signal);
    friend void kImageAnnotator__KImageAnnotator_UpdateMicroFocus(kImageAnnotator::KImageAnnotator* self);
    friend void kImageAnnotator__KImageAnnotator_SuperUpdateMicroFocus(kImageAnnotator::KImageAnnotator* self);
    friend void kImageAnnotator__KImageAnnotator_Create(kImageAnnotator::KImageAnnotator* self);
    friend void kImageAnnotator__KImageAnnotator_SuperCreate(kImageAnnotator::KImageAnnotator* self);
    friend void kImageAnnotator__KImageAnnotator_Destroy(kImageAnnotator::KImageAnnotator* self);
    friend void kImageAnnotator__KImageAnnotator_SuperDestroy(kImageAnnotator::KImageAnnotator* self);
    friend bool kImageAnnotator__KImageAnnotator_FocusNextChild(kImageAnnotator::KImageAnnotator* self);
    friend bool kImageAnnotator__KImageAnnotator_SuperFocusNextChild(kImageAnnotator::KImageAnnotator* self);
    friend bool kImageAnnotator__KImageAnnotator_FocusPreviousChild(kImageAnnotator::KImageAnnotator* self);
    friend bool kImageAnnotator__KImageAnnotator_SuperFocusPreviousChild(kImageAnnotator::KImageAnnotator* self);
    friend QObject* kImageAnnotator__KImageAnnotator_Sender(const kImageAnnotator::KImageAnnotator* self);
    friend QObject* kImageAnnotator__KImageAnnotator_SuperSender(const kImageAnnotator::KImageAnnotator* self);
    friend int kImageAnnotator__KImageAnnotator_SenderSignalIndex(const kImageAnnotator::KImageAnnotator* self);
    friend int kImageAnnotator__KImageAnnotator_SuperSenderSignalIndex(const kImageAnnotator::KImageAnnotator* self);
    friend int kImageAnnotator__KImageAnnotator_Receivers(const kImageAnnotator::KImageAnnotator* self, const char* signal);
    friend int kImageAnnotator__KImageAnnotator_SuperReceivers(const kImageAnnotator::KImageAnnotator* self, const char* signal);
    friend bool kImageAnnotator__KImageAnnotator_IsSignalConnected(const kImageAnnotator::KImageAnnotator* self, const QMetaMethod* signal);
    friend bool kImageAnnotator__KImageAnnotator_SuperIsSignalConnected(const kImageAnnotator::KImageAnnotator* self, const QMetaMethod* signal);
    friend double kImageAnnotator__KImageAnnotator_GetDecodedMetricF(const kImageAnnotator::KImageAnnotator* self, int metricA, int metricB);
    friend double kImageAnnotator__KImageAnnotator_SuperGetDecodedMetricF(const kImageAnnotator::KImageAnnotator* self, int metricA, int metricB);
};

#endif
