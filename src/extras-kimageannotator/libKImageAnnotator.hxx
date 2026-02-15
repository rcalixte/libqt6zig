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

    ~VirtualkImageAnnotatorKImageAnnotator() {
        kimageannotator__kimageannotator_metaobject_callback = nullptr;
        kimageannotator__kimageannotator_metacast_callback = nullptr;
        kimageannotator__kimageannotator_metacall_callback = nullptr;
        kimageannotator__kimageannotator_sizehint_callback = nullptr;
        kimageannotator__kimageannotator_devtype_callback = nullptr;
        kimageannotator__kimageannotator_setvisible_callback = nullptr;
        kimageannotator__kimageannotator_minimumsizehint_callback = nullptr;
        kimageannotator__kimageannotator_heightforwidth_callback = nullptr;
        kimageannotator__kimageannotator_hasheightforwidth_callback = nullptr;
        kimageannotator__kimageannotator_paintengine_callback = nullptr;
        kimageannotator__kimageannotator_event_callback = nullptr;
        kimageannotator__kimageannotator_mousepressevent_callback = nullptr;
        kimageannotator__kimageannotator_mousereleaseevent_callback = nullptr;
        kimageannotator__kimageannotator_mousedoubleclickevent_callback = nullptr;
        kimageannotator__kimageannotator_mousemoveevent_callback = nullptr;
        kimageannotator__kimageannotator_wheelevent_callback = nullptr;
        kimageannotator__kimageannotator_keypressevent_callback = nullptr;
        kimageannotator__kimageannotator_keyreleaseevent_callback = nullptr;
        kimageannotator__kimageannotator_focusinevent_callback = nullptr;
        kimageannotator__kimageannotator_focusoutevent_callback = nullptr;
        kimageannotator__kimageannotator_enterevent_callback = nullptr;
        kimageannotator__kimageannotator_leaveevent_callback = nullptr;
        kimageannotator__kimageannotator_paintevent_callback = nullptr;
        kimageannotator__kimageannotator_moveevent_callback = nullptr;
        kimageannotator__kimageannotator_resizeevent_callback = nullptr;
        kimageannotator__kimageannotator_closeevent_callback = nullptr;
        kimageannotator__kimageannotator_contextmenuevent_callback = nullptr;
        kimageannotator__kimageannotator_tabletevent_callback = nullptr;
        kimageannotator__kimageannotator_actionevent_callback = nullptr;
        kimageannotator__kimageannotator_dragenterevent_callback = nullptr;
        kimageannotator__kimageannotator_dragmoveevent_callback = nullptr;
        kimageannotator__kimageannotator_dragleaveevent_callback = nullptr;
        kimageannotator__kimageannotator_dropevent_callback = nullptr;
        kimageannotator__kimageannotator_showevent_callback = nullptr;
        kimageannotator__kimageannotator_hideevent_callback = nullptr;
        kimageannotator__kimageannotator_nativeevent_callback = nullptr;
        kimageannotator__kimageannotator_changeevent_callback = nullptr;
        kimageannotator__kimageannotator_metric_callback = nullptr;
        kimageannotator__kimageannotator_initpainter_callback = nullptr;
        kimageannotator__kimageannotator_redirected_callback = nullptr;
        kimageannotator__kimageannotator_sharedpainter_callback = nullptr;
        kimageannotator__kimageannotator_inputmethodevent_callback = nullptr;
        kimageannotator__kimageannotator_inputmethodquery_callback = nullptr;
        kimageannotator__kimageannotator_focusnextprevchild_callback = nullptr;
        kimageannotator__kimageannotator_eventfilter_callback = nullptr;
        kimageannotator__kimageannotator_timerevent_callback = nullptr;
        kimageannotator__kimageannotator_childevent_callback = nullptr;
        kimageannotator__kimageannotator_customevent_callback = nullptr;
        kimageannotator__kimageannotator_connectnotify_callback = nullptr;
        kimageannotator__kimageannotator_disconnectnotify_callback = nullptr;
        kimageannotator__kimageannotator_updatemicrofocus_callback = nullptr;
        kimageannotator__kimageannotator_create_callback = nullptr;
        kimageannotator__kimageannotator_destroy_callback = nullptr;
        kimageannotator__kimageannotator_focusnextchild_callback = nullptr;
        kimageannotator__kimageannotator_focuspreviouschild_callback = nullptr;
        kimageannotator__kimageannotator_sender_callback = nullptr;
        kimageannotator__kimageannotator_sendersignalindex_callback = nullptr;
        kimageannotator__kimageannotator_receivers_callback = nullptr;
        kimageannotator__kimageannotator_issignalconnected_callback = nullptr;
        kimageannotator__kimageannotator_getdecodedmetricf_callback = nullptr;
    }

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
        } else if (kimageannotator__kimageannotator_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = kimageannotator__kimageannotator_metaobject_callback();
            return callback_ret;
        } else {
            return kImageAnnotator__KImageAnnotator::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kimageannotator__kimageannotator_metacast_isbase) {
            kimageannotator__kimageannotator_metacast_isbase = false;
            return kImageAnnotator__KImageAnnotator::qt_metacast(param1);
        } else if (kimageannotator__kimageannotator_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = kimageannotator__kimageannotator_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return kImageAnnotator__KImageAnnotator::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kimageannotator__kimageannotator_metacall_isbase) {
            kimageannotator__kimageannotator_metacall_isbase = false;
            return kImageAnnotator__KImageAnnotator::qt_metacall(param1, param2, param3);
        } else if (kimageannotator__kimageannotator_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kimageannotator__kimageannotator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return kImageAnnotator__KImageAnnotator::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kimageannotator__kimageannotator_sizehint_isbase) {
            kimageannotator__kimageannotator_sizehint_isbase = false;
            return kImageAnnotator__KImageAnnotator::sizeHint();
        } else if (kimageannotator__kimageannotator_sizehint_callback != nullptr) {
            QSize* callback_ret = kimageannotator__kimageannotator_sizehint_callback();
            return *callback_ret;
        } else {
            return kImageAnnotator__KImageAnnotator::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kimageannotator__kimageannotator_devtype_isbase) {
            kimageannotator__kimageannotator_devtype_isbase = false;
            return kImageAnnotator__KImageAnnotator::devType();
        } else if (kimageannotator__kimageannotator_devtype_callback != nullptr) {
            int callback_ret = kimageannotator__kimageannotator_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return kImageAnnotator__KImageAnnotator::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kimageannotator__kimageannotator_setvisible_isbase) {
            kimageannotator__kimageannotator_setvisible_isbase = false;
            kImageAnnotator__KImageAnnotator::setVisible(visible);
        } else if (kimageannotator__kimageannotator_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kimageannotator__kimageannotator_setvisible_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kimageannotator__kimageannotator_minimumsizehint_isbase) {
            kimageannotator__kimageannotator_minimumsizehint_isbase = false;
            return kImageAnnotator__KImageAnnotator::minimumSizeHint();
        } else if (kimageannotator__kimageannotator_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kimageannotator__kimageannotator_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return kImageAnnotator__KImageAnnotator::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kimageannotator__kimageannotator_heightforwidth_isbase) {
            kimageannotator__kimageannotator_heightforwidth_isbase = false;
            return kImageAnnotator__KImageAnnotator::heightForWidth(param1);
        } else if (kimageannotator__kimageannotator_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kimageannotator__kimageannotator_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return kImageAnnotator__KImageAnnotator::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kimageannotator__kimageannotator_hasheightforwidth_isbase) {
            kimageannotator__kimageannotator_hasheightforwidth_isbase = false;
            return kImageAnnotator__KImageAnnotator::hasHeightForWidth();
        } else if (kimageannotator__kimageannotator_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kimageannotator__kimageannotator_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return kImageAnnotator__KImageAnnotator::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kimageannotator__kimageannotator_paintengine_isbase) {
            kimageannotator__kimageannotator_paintengine_isbase = false;
            return kImageAnnotator__KImageAnnotator::paintEngine();
        } else if (kimageannotator__kimageannotator_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kimageannotator__kimageannotator_paintengine_callback();
            return callback_ret;
        } else {
            return kImageAnnotator__KImageAnnotator::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kimageannotator__kimageannotator_event_isbase) {
            kimageannotator__kimageannotator_event_isbase = false;
            return kImageAnnotator__KImageAnnotator::event(event);
        } else if (kimageannotator__kimageannotator_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kimageannotator__kimageannotator_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return kImageAnnotator__KImageAnnotator::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kimageannotator__kimageannotator_mousepressevent_isbase) {
            kimageannotator__kimageannotator_mousepressevent_isbase = false;
            kImageAnnotator__KImageAnnotator::mousePressEvent(event);
        } else if (kimageannotator__kimageannotator_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kimageannotator__kimageannotator_mousepressevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kimageannotator__kimageannotator_mousereleaseevent_isbase) {
            kimageannotator__kimageannotator_mousereleaseevent_isbase = false;
            kImageAnnotator__KImageAnnotator::mouseReleaseEvent(event);
        } else if (kimageannotator__kimageannotator_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kimageannotator__kimageannotator_mousereleaseevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kimageannotator__kimageannotator_mousedoubleclickevent_isbase) {
            kimageannotator__kimageannotator_mousedoubleclickevent_isbase = false;
            kImageAnnotator__KImageAnnotator::mouseDoubleClickEvent(event);
        } else if (kimageannotator__kimageannotator_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kimageannotator__kimageannotator_mousedoubleclickevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kimageannotator__kimageannotator_mousemoveevent_isbase) {
            kimageannotator__kimageannotator_mousemoveevent_isbase = false;
            kImageAnnotator__KImageAnnotator::mouseMoveEvent(event);
        } else if (kimageannotator__kimageannotator_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kimageannotator__kimageannotator_mousemoveevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kimageannotator__kimageannotator_wheelevent_isbase) {
            kimageannotator__kimageannotator_wheelevent_isbase = false;
            kImageAnnotator__KImageAnnotator::wheelEvent(event);
        } else if (kimageannotator__kimageannotator_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kimageannotator__kimageannotator_wheelevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kimageannotator__kimageannotator_keypressevent_isbase) {
            kimageannotator__kimageannotator_keypressevent_isbase = false;
            kImageAnnotator__KImageAnnotator::keyPressEvent(event);
        } else if (kimageannotator__kimageannotator_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kimageannotator__kimageannotator_keypressevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kimageannotator__kimageannotator_keyreleaseevent_isbase) {
            kimageannotator__kimageannotator_keyreleaseevent_isbase = false;
            kImageAnnotator__KImageAnnotator::keyReleaseEvent(event);
        } else if (kimageannotator__kimageannotator_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kimageannotator__kimageannotator_keyreleaseevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kimageannotator__kimageannotator_focusinevent_isbase) {
            kimageannotator__kimageannotator_focusinevent_isbase = false;
            kImageAnnotator__KImageAnnotator::focusInEvent(event);
        } else if (kimageannotator__kimageannotator_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kimageannotator__kimageannotator_focusinevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kimageannotator__kimageannotator_focusoutevent_isbase) {
            kimageannotator__kimageannotator_focusoutevent_isbase = false;
            kImageAnnotator__KImageAnnotator::focusOutEvent(event);
        } else if (kimageannotator__kimageannotator_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kimageannotator__kimageannotator_focusoutevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kimageannotator__kimageannotator_enterevent_isbase) {
            kimageannotator__kimageannotator_enterevent_isbase = false;
            kImageAnnotator__KImageAnnotator::enterEvent(event);
        } else if (kimageannotator__kimageannotator_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kimageannotator__kimageannotator_enterevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kimageannotator__kimageannotator_leaveevent_isbase) {
            kimageannotator__kimageannotator_leaveevent_isbase = false;
            kImageAnnotator__KImageAnnotator::leaveEvent(event);
        } else if (kimageannotator__kimageannotator_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kimageannotator__kimageannotator_leaveevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kimageannotator__kimageannotator_paintevent_isbase) {
            kimageannotator__kimageannotator_paintevent_isbase = false;
            kImageAnnotator__KImageAnnotator::paintEvent(event);
        } else if (kimageannotator__kimageannotator_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kimageannotator__kimageannotator_paintevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kimageannotator__kimageannotator_moveevent_isbase) {
            kimageannotator__kimageannotator_moveevent_isbase = false;
            kImageAnnotator__KImageAnnotator::moveEvent(event);
        } else if (kimageannotator__kimageannotator_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kimageannotator__kimageannotator_moveevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kimageannotator__kimageannotator_resizeevent_isbase) {
            kimageannotator__kimageannotator_resizeevent_isbase = false;
            kImageAnnotator__KImageAnnotator::resizeEvent(event);
        } else if (kimageannotator__kimageannotator_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kimageannotator__kimageannotator_resizeevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kimageannotator__kimageannotator_closeevent_isbase) {
            kimageannotator__kimageannotator_closeevent_isbase = false;
            kImageAnnotator__KImageAnnotator::closeEvent(event);
        } else if (kimageannotator__kimageannotator_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kimageannotator__kimageannotator_closeevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kimageannotator__kimageannotator_contextmenuevent_isbase) {
            kimageannotator__kimageannotator_contextmenuevent_isbase = false;
            kImageAnnotator__KImageAnnotator::contextMenuEvent(event);
        } else if (kimageannotator__kimageannotator_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kimageannotator__kimageannotator_contextmenuevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kimageannotator__kimageannotator_tabletevent_isbase) {
            kimageannotator__kimageannotator_tabletevent_isbase = false;
            kImageAnnotator__KImageAnnotator::tabletEvent(event);
        } else if (kimageannotator__kimageannotator_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kimageannotator__kimageannotator_tabletevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kimageannotator__kimageannotator_actionevent_isbase) {
            kimageannotator__kimageannotator_actionevent_isbase = false;
            kImageAnnotator__KImageAnnotator::actionEvent(event);
        } else if (kimageannotator__kimageannotator_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kimageannotator__kimageannotator_actionevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kimageannotator__kimageannotator_dragenterevent_isbase) {
            kimageannotator__kimageannotator_dragenterevent_isbase = false;
            kImageAnnotator__KImageAnnotator::dragEnterEvent(event);
        } else if (kimageannotator__kimageannotator_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kimageannotator__kimageannotator_dragenterevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kimageannotator__kimageannotator_dragmoveevent_isbase) {
            kimageannotator__kimageannotator_dragmoveevent_isbase = false;
            kImageAnnotator__KImageAnnotator::dragMoveEvent(event);
        } else if (kimageannotator__kimageannotator_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kimageannotator__kimageannotator_dragmoveevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kimageannotator__kimageannotator_dragleaveevent_isbase) {
            kimageannotator__kimageannotator_dragleaveevent_isbase = false;
            kImageAnnotator__KImageAnnotator::dragLeaveEvent(event);
        } else if (kimageannotator__kimageannotator_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kimageannotator__kimageannotator_dragleaveevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kimageannotator__kimageannotator_dropevent_isbase) {
            kimageannotator__kimageannotator_dropevent_isbase = false;
            kImageAnnotator__KImageAnnotator::dropEvent(event);
        } else if (kimageannotator__kimageannotator_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kimageannotator__kimageannotator_dropevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kimageannotator__kimageannotator_showevent_isbase) {
            kimageannotator__kimageannotator_showevent_isbase = false;
            kImageAnnotator__KImageAnnotator::showEvent(event);
        } else if (kimageannotator__kimageannotator_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kimageannotator__kimageannotator_showevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kimageannotator__kimageannotator_hideevent_isbase) {
            kimageannotator__kimageannotator_hideevent_isbase = false;
            kImageAnnotator__KImageAnnotator::hideEvent(event);
        } else if (kimageannotator__kimageannotator_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kimageannotator__kimageannotator_hideevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kimageannotator__kimageannotator_nativeevent_isbase) {
            kimageannotator__kimageannotator_nativeevent_isbase = false;
            return kImageAnnotator__KImageAnnotator::nativeEvent(eventType, message, result);
        } else if (kimageannotator__kimageannotator_nativeevent_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = kimageannotator__kimageannotator_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return kImageAnnotator__KImageAnnotator::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kimageannotator__kimageannotator_changeevent_isbase) {
            kimageannotator__kimageannotator_changeevent_isbase = false;
            kImageAnnotator__KImageAnnotator::changeEvent(param1);
        } else if (kimageannotator__kimageannotator_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kimageannotator__kimageannotator_changeevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kimageannotator__kimageannotator_metric_isbase) {
            kimageannotator__kimageannotator_metric_isbase = false;
            return kImageAnnotator__KImageAnnotator::metric(param1);
        } else if (kimageannotator__kimageannotator_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kimageannotator__kimageannotator_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return kImageAnnotator__KImageAnnotator::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kimageannotator__kimageannotator_initpainter_isbase) {
            kimageannotator__kimageannotator_initpainter_isbase = false;
            kImageAnnotator__KImageAnnotator::initPainter(painter);
        } else if (kimageannotator__kimageannotator_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kimageannotator__kimageannotator_initpainter_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kimageannotator__kimageannotator_redirected_isbase) {
            kimageannotator__kimageannotator_redirected_isbase = false;
            return kImageAnnotator__KImageAnnotator::redirected(offset);
        } else if (kimageannotator__kimageannotator_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kimageannotator__kimageannotator_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return kImageAnnotator__KImageAnnotator::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kimageannotator__kimageannotator_sharedpainter_isbase) {
            kimageannotator__kimageannotator_sharedpainter_isbase = false;
            return kImageAnnotator__KImageAnnotator::sharedPainter();
        } else if (kimageannotator__kimageannotator_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kimageannotator__kimageannotator_sharedpainter_callback();
            return callback_ret;
        } else {
            return kImageAnnotator__KImageAnnotator::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kimageannotator__kimageannotator_inputmethodevent_isbase) {
            kimageannotator__kimageannotator_inputmethodevent_isbase = false;
            kImageAnnotator__KImageAnnotator::inputMethodEvent(param1);
        } else if (kimageannotator__kimageannotator_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kimageannotator__kimageannotator_inputmethodevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kimageannotator__kimageannotator_inputmethodquery_isbase) {
            kimageannotator__kimageannotator_inputmethodquery_isbase = false;
            return kImageAnnotator__KImageAnnotator::inputMethodQuery(param1);
        } else if (kimageannotator__kimageannotator_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kimageannotator__kimageannotator_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return kImageAnnotator__KImageAnnotator::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kimageannotator__kimageannotator_focusnextprevchild_isbase) {
            kimageannotator__kimageannotator_focusnextprevchild_isbase = false;
            return kImageAnnotator__KImageAnnotator::focusNextPrevChild(next);
        } else if (kimageannotator__kimageannotator_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kimageannotator__kimageannotator_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return kImageAnnotator__KImageAnnotator::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kimageannotator__kimageannotator_eventfilter_isbase) {
            kimageannotator__kimageannotator_eventfilter_isbase = false;
            return kImageAnnotator__KImageAnnotator::eventFilter(watched, event);
        } else if (kimageannotator__kimageannotator_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kimageannotator__kimageannotator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return kImageAnnotator__KImageAnnotator::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kimageannotator__kimageannotator_timerevent_isbase) {
            kimageannotator__kimageannotator_timerevent_isbase = false;
            kImageAnnotator__KImageAnnotator::timerEvent(event);
        } else if (kimageannotator__kimageannotator_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kimageannotator__kimageannotator_timerevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kimageannotator__kimageannotator_childevent_isbase) {
            kimageannotator__kimageannotator_childevent_isbase = false;
            kImageAnnotator__KImageAnnotator::childEvent(event);
        } else if (kimageannotator__kimageannotator_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kimageannotator__kimageannotator_childevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kimageannotator__kimageannotator_customevent_isbase) {
            kimageannotator__kimageannotator_customevent_isbase = false;
            kImageAnnotator__KImageAnnotator::customEvent(event);
        } else if (kimageannotator__kimageannotator_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kimageannotator__kimageannotator_customevent_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kimageannotator__kimageannotator_connectnotify_isbase) {
            kimageannotator__kimageannotator_connectnotify_isbase = false;
            kImageAnnotator__KImageAnnotator::connectNotify(signal);
        } else if (kimageannotator__kimageannotator_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kimageannotator__kimageannotator_connectnotify_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kimageannotator__kimageannotator_disconnectnotify_isbase) {
            kimageannotator__kimageannotator_disconnectnotify_isbase = false;
            kImageAnnotator__KImageAnnotator::disconnectNotify(signal);
        } else if (kimageannotator__kimageannotator_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kimageannotator__kimageannotator_disconnectnotify_callback(this, cbval1);
        } else {
            kImageAnnotator__KImageAnnotator::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kimageannotator__kimageannotator_updatemicrofocus_isbase) {
            kimageannotator__kimageannotator_updatemicrofocus_isbase = false;
            kImageAnnotator__KImageAnnotator::updateMicroFocus();
        } else if (kimageannotator__kimageannotator_updatemicrofocus_callback != nullptr) {
            kimageannotator__kimageannotator_updatemicrofocus_callback();
        } else {
            kImageAnnotator__KImageAnnotator::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kimageannotator__kimageannotator_create_isbase) {
            kimageannotator__kimageannotator_create_isbase = false;
            kImageAnnotator__KImageAnnotator::create();
        } else if (kimageannotator__kimageannotator_create_callback != nullptr) {
            kimageannotator__kimageannotator_create_callback();
        } else {
            kImageAnnotator__KImageAnnotator::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kimageannotator__kimageannotator_destroy_isbase) {
            kimageannotator__kimageannotator_destroy_isbase = false;
            kImageAnnotator__KImageAnnotator::destroy();
        } else if (kimageannotator__kimageannotator_destroy_callback != nullptr) {
            kimageannotator__kimageannotator_destroy_callback();
        } else {
            kImageAnnotator__KImageAnnotator::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kimageannotator__kimageannotator_focusnextchild_isbase) {
            kimageannotator__kimageannotator_focusnextchild_isbase = false;
            return kImageAnnotator__KImageAnnotator::focusNextChild();
        } else if (kimageannotator__kimageannotator_focusnextchild_callback != nullptr) {
            bool callback_ret = kimageannotator__kimageannotator_focusnextchild_callback();
            return callback_ret;
        } else {
            return kImageAnnotator__KImageAnnotator::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kimageannotator__kimageannotator_focuspreviouschild_isbase) {
            kimageannotator__kimageannotator_focuspreviouschild_isbase = false;
            return kImageAnnotator__KImageAnnotator::focusPreviousChild();
        } else if (kimageannotator__kimageannotator_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kimageannotator__kimageannotator_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return kImageAnnotator__KImageAnnotator::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kimageannotator__kimageannotator_sender_isbase) {
            kimageannotator__kimageannotator_sender_isbase = false;
            return kImageAnnotator__KImageAnnotator::sender();
        } else if (kimageannotator__kimageannotator_sender_callback != nullptr) {
            QObject* callback_ret = kimageannotator__kimageannotator_sender_callback();
            return callback_ret;
        } else {
            return kImageAnnotator__KImageAnnotator::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kimageannotator__kimageannotator_sendersignalindex_isbase) {
            kimageannotator__kimageannotator_sendersignalindex_isbase = false;
            return kImageAnnotator__KImageAnnotator::senderSignalIndex();
        } else if (kimageannotator__kimageannotator_sendersignalindex_callback != nullptr) {
            int callback_ret = kimageannotator__kimageannotator_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return kImageAnnotator__KImageAnnotator::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kimageannotator__kimageannotator_receivers_isbase) {
            kimageannotator__kimageannotator_receivers_isbase = false;
            return kImageAnnotator__KImageAnnotator::receivers(signal);
        } else if (kimageannotator__kimageannotator_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kimageannotator__kimageannotator_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return kImageAnnotator__KImageAnnotator::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kimageannotator__kimageannotator_issignalconnected_isbase) {
            kimageannotator__kimageannotator_issignalconnected_isbase = false;
            return kImageAnnotator__KImageAnnotator::isSignalConnected(signal);
        } else if (kimageannotator__kimageannotator_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kimageannotator__kimageannotator_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return kImageAnnotator__KImageAnnotator::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kimageannotator__kimageannotator_getdecodedmetricf_isbase) {
            kimageannotator__kimageannotator_getdecodedmetricf_isbase = false;
            return kImageAnnotator__KImageAnnotator::getDecodedMetricF(metricA, metricB);
        } else if (kimageannotator__kimageannotator_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kimageannotator__kimageannotator_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return kImageAnnotator__KImageAnnotator::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool kImageAnnotator__KImageAnnotator_Event(kImageAnnotator::KImageAnnotator* self, QEvent* event);
    friend bool kImageAnnotator__KImageAnnotator_QBaseEvent(kImageAnnotator::KImageAnnotator* self, QEvent* event);
    friend void kImageAnnotator__KImageAnnotator_MousePressEvent(kImageAnnotator::KImageAnnotator* self, QMouseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseMousePressEvent(kImageAnnotator::KImageAnnotator* self, QMouseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_MouseReleaseEvent(kImageAnnotator::KImageAnnotator* self, QMouseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseMouseReleaseEvent(kImageAnnotator::KImageAnnotator* self, QMouseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_MouseDoubleClickEvent(kImageAnnotator::KImageAnnotator* self, QMouseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseMouseDoubleClickEvent(kImageAnnotator::KImageAnnotator* self, QMouseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_MouseMoveEvent(kImageAnnotator::KImageAnnotator* self, QMouseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseMouseMoveEvent(kImageAnnotator::KImageAnnotator* self, QMouseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_WheelEvent(kImageAnnotator::KImageAnnotator* self, QWheelEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseWheelEvent(kImageAnnotator::KImageAnnotator* self, QWheelEvent* event);
    friend void kImageAnnotator__KImageAnnotator_KeyPressEvent(kImageAnnotator::KImageAnnotator* self, QKeyEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseKeyPressEvent(kImageAnnotator::KImageAnnotator* self, QKeyEvent* event);
    friend void kImageAnnotator__KImageAnnotator_KeyReleaseEvent(kImageAnnotator::KImageAnnotator* self, QKeyEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseKeyReleaseEvent(kImageAnnotator::KImageAnnotator* self, QKeyEvent* event);
    friend void kImageAnnotator__KImageAnnotator_FocusInEvent(kImageAnnotator::KImageAnnotator* self, QFocusEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseFocusInEvent(kImageAnnotator::KImageAnnotator* self, QFocusEvent* event);
    friend void kImageAnnotator__KImageAnnotator_FocusOutEvent(kImageAnnotator::KImageAnnotator* self, QFocusEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseFocusOutEvent(kImageAnnotator::KImageAnnotator* self, QFocusEvent* event);
    friend void kImageAnnotator__KImageAnnotator_EnterEvent(kImageAnnotator::KImageAnnotator* self, QEnterEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseEnterEvent(kImageAnnotator::KImageAnnotator* self, QEnterEvent* event);
    friend void kImageAnnotator__KImageAnnotator_LeaveEvent(kImageAnnotator::KImageAnnotator* self, QEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseLeaveEvent(kImageAnnotator::KImageAnnotator* self, QEvent* event);
    friend void kImageAnnotator__KImageAnnotator_PaintEvent(kImageAnnotator::KImageAnnotator* self, QPaintEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBasePaintEvent(kImageAnnotator::KImageAnnotator* self, QPaintEvent* event);
    friend void kImageAnnotator__KImageAnnotator_MoveEvent(kImageAnnotator::KImageAnnotator* self, QMoveEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseMoveEvent(kImageAnnotator::KImageAnnotator* self, QMoveEvent* event);
    friend void kImageAnnotator__KImageAnnotator_ResizeEvent(kImageAnnotator::KImageAnnotator* self, QResizeEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseResizeEvent(kImageAnnotator::KImageAnnotator* self, QResizeEvent* event);
    friend void kImageAnnotator__KImageAnnotator_CloseEvent(kImageAnnotator::KImageAnnotator* self, QCloseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseCloseEvent(kImageAnnotator::KImageAnnotator* self, QCloseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_ContextMenuEvent(kImageAnnotator::KImageAnnotator* self, QContextMenuEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseContextMenuEvent(kImageAnnotator::KImageAnnotator* self, QContextMenuEvent* event);
    friend void kImageAnnotator__KImageAnnotator_TabletEvent(kImageAnnotator::KImageAnnotator* self, QTabletEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseTabletEvent(kImageAnnotator::KImageAnnotator* self, QTabletEvent* event);
    friend void kImageAnnotator__KImageAnnotator_ActionEvent(kImageAnnotator::KImageAnnotator* self, QActionEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseActionEvent(kImageAnnotator::KImageAnnotator* self, QActionEvent* event);
    friend void kImageAnnotator__KImageAnnotator_DragEnterEvent(kImageAnnotator::KImageAnnotator* self, QDragEnterEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseDragEnterEvent(kImageAnnotator::KImageAnnotator* self, QDragEnterEvent* event);
    friend void kImageAnnotator__KImageAnnotator_DragMoveEvent(kImageAnnotator::KImageAnnotator* self, QDragMoveEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseDragMoveEvent(kImageAnnotator::KImageAnnotator* self, QDragMoveEvent* event);
    friend void kImageAnnotator__KImageAnnotator_DragLeaveEvent(kImageAnnotator::KImageAnnotator* self, QDragLeaveEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseDragLeaveEvent(kImageAnnotator::KImageAnnotator* self, QDragLeaveEvent* event);
    friend void kImageAnnotator__KImageAnnotator_DropEvent(kImageAnnotator::KImageAnnotator* self, QDropEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseDropEvent(kImageAnnotator::KImageAnnotator* self, QDropEvent* event);
    friend void kImageAnnotator__KImageAnnotator_ShowEvent(kImageAnnotator::KImageAnnotator* self, QShowEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseShowEvent(kImageAnnotator::KImageAnnotator* self, QShowEvent* event);
    friend void kImageAnnotator__KImageAnnotator_HideEvent(kImageAnnotator::KImageAnnotator* self, QHideEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseHideEvent(kImageAnnotator::KImageAnnotator* self, QHideEvent* event);
    friend bool kImageAnnotator__KImageAnnotator_NativeEvent(kImageAnnotator::KImageAnnotator* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool kImageAnnotator__KImageAnnotator_QBaseNativeEvent(kImageAnnotator::KImageAnnotator* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void kImageAnnotator__KImageAnnotator_ChangeEvent(kImageAnnotator::KImageAnnotator* self, QEvent* param1);
    friend void kImageAnnotator__KImageAnnotator_QBaseChangeEvent(kImageAnnotator::KImageAnnotator* self, QEvent* param1);
    friend int kImageAnnotator__KImageAnnotator_Metric(const kImageAnnotator::KImageAnnotator* self, int param1);
    friend int kImageAnnotator__KImageAnnotator_QBaseMetric(const kImageAnnotator::KImageAnnotator* self, int param1);
    friend void kImageAnnotator__KImageAnnotator_InitPainter(const kImageAnnotator::KImageAnnotator* self, QPainter* painter);
    friend void kImageAnnotator__KImageAnnotator_QBaseInitPainter(const kImageAnnotator::KImageAnnotator* self, QPainter* painter);
    friend QPaintDevice* kImageAnnotator__KImageAnnotator_Redirected(const kImageAnnotator::KImageAnnotator* self, QPoint* offset);
    friend QPaintDevice* kImageAnnotator__KImageAnnotator_QBaseRedirected(const kImageAnnotator::KImageAnnotator* self, QPoint* offset);
    friend QPainter* kImageAnnotator__KImageAnnotator_SharedPainter(const kImageAnnotator::KImageAnnotator* self);
    friend QPainter* kImageAnnotator__KImageAnnotator_QBaseSharedPainter(const kImageAnnotator::KImageAnnotator* self);
    friend void kImageAnnotator__KImageAnnotator_InputMethodEvent(kImageAnnotator::KImageAnnotator* self, QInputMethodEvent* param1);
    friend void kImageAnnotator__KImageAnnotator_QBaseInputMethodEvent(kImageAnnotator::KImageAnnotator* self, QInputMethodEvent* param1);
    friend bool kImageAnnotator__KImageAnnotator_FocusNextPrevChild(kImageAnnotator::KImageAnnotator* self, bool next);
    friend bool kImageAnnotator__KImageAnnotator_QBaseFocusNextPrevChild(kImageAnnotator::KImageAnnotator* self, bool next);
    friend void kImageAnnotator__KImageAnnotator_TimerEvent(kImageAnnotator::KImageAnnotator* self, QTimerEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseTimerEvent(kImageAnnotator::KImageAnnotator* self, QTimerEvent* event);
    friend void kImageAnnotator__KImageAnnotator_ChildEvent(kImageAnnotator::KImageAnnotator* self, QChildEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseChildEvent(kImageAnnotator::KImageAnnotator* self, QChildEvent* event);
    friend void kImageAnnotator__KImageAnnotator_CustomEvent(kImageAnnotator::KImageAnnotator* self, QEvent* event);
    friend void kImageAnnotator__KImageAnnotator_QBaseCustomEvent(kImageAnnotator::KImageAnnotator* self, QEvent* event);
    friend void kImageAnnotator__KImageAnnotator_ConnectNotify(kImageAnnotator::KImageAnnotator* self, const QMetaMethod* signal);
    friend void kImageAnnotator__KImageAnnotator_QBaseConnectNotify(kImageAnnotator::KImageAnnotator* self, const QMetaMethod* signal);
    friend void kImageAnnotator__KImageAnnotator_DisconnectNotify(kImageAnnotator::KImageAnnotator* self, const QMetaMethod* signal);
    friend void kImageAnnotator__KImageAnnotator_QBaseDisconnectNotify(kImageAnnotator::KImageAnnotator* self, const QMetaMethod* signal);
    friend void kImageAnnotator__KImageAnnotator_UpdateMicroFocus(kImageAnnotator::KImageAnnotator* self);
    friend void kImageAnnotator__KImageAnnotator_QBaseUpdateMicroFocus(kImageAnnotator::KImageAnnotator* self);
    friend void kImageAnnotator__KImageAnnotator_Create(kImageAnnotator::KImageAnnotator* self);
    friend void kImageAnnotator__KImageAnnotator_QBaseCreate(kImageAnnotator::KImageAnnotator* self);
    friend void kImageAnnotator__KImageAnnotator_Destroy(kImageAnnotator::KImageAnnotator* self);
    friend void kImageAnnotator__KImageAnnotator_QBaseDestroy(kImageAnnotator::KImageAnnotator* self);
    friend bool kImageAnnotator__KImageAnnotator_FocusNextChild(kImageAnnotator::KImageAnnotator* self);
    friend bool kImageAnnotator__KImageAnnotator_QBaseFocusNextChild(kImageAnnotator::KImageAnnotator* self);
    friend bool kImageAnnotator__KImageAnnotator_FocusPreviousChild(kImageAnnotator::KImageAnnotator* self);
    friend bool kImageAnnotator__KImageAnnotator_QBaseFocusPreviousChild(kImageAnnotator::KImageAnnotator* self);
    friend QObject* kImageAnnotator__KImageAnnotator_Sender(const kImageAnnotator::KImageAnnotator* self);
    friend QObject* kImageAnnotator__KImageAnnotator_QBaseSender(const kImageAnnotator::KImageAnnotator* self);
    friend int kImageAnnotator__KImageAnnotator_SenderSignalIndex(const kImageAnnotator::KImageAnnotator* self);
    friend int kImageAnnotator__KImageAnnotator_QBaseSenderSignalIndex(const kImageAnnotator::KImageAnnotator* self);
    friend int kImageAnnotator__KImageAnnotator_Receivers(const kImageAnnotator::KImageAnnotator* self, const char* signal);
    friend int kImageAnnotator__KImageAnnotator_QBaseReceivers(const kImageAnnotator::KImageAnnotator* self, const char* signal);
    friend bool kImageAnnotator__KImageAnnotator_IsSignalConnected(const kImageAnnotator::KImageAnnotator* self, const QMetaMethod* signal);
    friend bool kImageAnnotator__KImageAnnotator_QBaseIsSignalConnected(const kImageAnnotator::KImageAnnotator* self, const QMetaMethod* signal);
    friend double kImageAnnotator__KImageAnnotator_GetDecodedMetricF(const kImageAnnotator::KImageAnnotator* self, int metricA, int metricB);
    friend double kImageAnnotator__KImageAnnotator_QBaseGetDecodedMetricF(const kImageAnnotator::KImageAnnotator* self, int metricA, int metricB);
};

#endif
