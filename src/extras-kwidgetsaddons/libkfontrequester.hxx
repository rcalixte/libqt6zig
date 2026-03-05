#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKFONTREQUESTER_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKFONTREQUESTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFontRequester so that we can call protected methods
class VirtualKFontRequester final : public KFontRequester {

  public:
    // Virtual class boolean flag
    bool isVirtualKFontRequester = true;

    // Virtual class public types (including callbacks)
    using KFontRequester_MetaObject_Callback = QMetaObject* (*)();
    using KFontRequester_Metacast_Callback = void* (*)(KFontRequester*, const char*);
    using KFontRequester_Metacall_Callback = int (*)(KFontRequester*, int, int, void**);
    using KFontRequester_SetFont_Callback = void (*)(KFontRequester*, QFont*, bool);
    using KFontRequester_SetSampleText_Callback = void (*)(KFontRequester*, const char*);
    using KFontRequester_SetTitle_Callback = void (*)(KFontRequester*, const char*);
    using KFontRequester_EventFilter_Callback = bool (*)(KFontRequester*, QObject*, QEvent*);
    using KFontRequester_DevType_Callback = int (*)();
    using KFontRequester_SetVisible_Callback = void (*)(KFontRequester*, bool);
    using KFontRequester_SizeHint_Callback = QSize* (*)();
    using KFontRequester_MinimumSizeHint_Callback = QSize* (*)();
    using KFontRequester_HeightForWidth_Callback = int (*)(const KFontRequester*, int);
    using KFontRequester_HasHeightForWidth_Callback = bool (*)();
    using KFontRequester_PaintEngine_Callback = QPaintEngine* (*)();
    using KFontRequester_Event_Callback = bool (*)(KFontRequester*, QEvent*);
    using KFontRequester_MousePressEvent_Callback = void (*)(KFontRequester*, QMouseEvent*);
    using KFontRequester_MouseReleaseEvent_Callback = void (*)(KFontRequester*, QMouseEvent*);
    using KFontRequester_MouseDoubleClickEvent_Callback = void (*)(KFontRequester*, QMouseEvent*);
    using KFontRequester_MouseMoveEvent_Callback = void (*)(KFontRequester*, QMouseEvent*);
    using KFontRequester_WheelEvent_Callback = void (*)(KFontRequester*, QWheelEvent*);
    using KFontRequester_KeyPressEvent_Callback = void (*)(KFontRequester*, QKeyEvent*);
    using KFontRequester_KeyReleaseEvent_Callback = void (*)(KFontRequester*, QKeyEvent*);
    using KFontRequester_FocusInEvent_Callback = void (*)(KFontRequester*, QFocusEvent*);
    using KFontRequester_FocusOutEvent_Callback = void (*)(KFontRequester*, QFocusEvent*);
    using KFontRequester_EnterEvent_Callback = void (*)(KFontRequester*, QEnterEvent*);
    using KFontRequester_LeaveEvent_Callback = void (*)(KFontRequester*, QEvent*);
    using KFontRequester_PaintEvent_Callback = void (*)(KFontRequester*, QPaintEvent*);
    using KFontRequester_MoveEvent_Callback = void (*)(KFontRequester*, QMoveEvent*);
    using KFontRequester_ResizeEvent_Callback = void (*)(KFontRequester*, QResizeEvent*);
    using KFontRequester_CloseEvent_Callback = void (*)(KFontRequester*, QCloseEvent*);
    using KFontRequester_ContextMenuEvent_Callback = void (*)(KFontRequester*, QContextMenuEvent*);
    using KFontRequester_TabletEvent_Callback = void (*)(KFontRequester*, QTabletEvent*);
    using KFontRequester_ActionEvent_Callback = void (*)(KFontRequester*, QActionEvent*);
    using KFontRequester_DragEnterEvent_Callback = void (*)(KFontRequester*, QDragEnterEvent*);
    using KFontRequester_DragMoveEvent_Callback = void (*)(KFontRequester*, QDragMoveEvent*);
    using KFontRequester_DragLeaveEvent_Callback = void (*)(KFontRequester*, QDragLeaveEvent*);
    using KFontRequester_DropEvent_Callback = void (*)(KFontRequester*, QDropEvent*);
    using KFontRequester_ShowEvent_Callback = void (*)(KFontRequester*, QShowEvent*);
    using KFontRequester_HideEvent_Callback = void (*)(KFontRequester*, QHideEvent*);
    using KFontRequester_NativeEvent_Callback = bool (*)(KFontRequester*, libqt_string, void*, intptr_t*);
    using KFontRequester_ChangeEvent_Callback = void (*)(KFontRequester*, QEvent*);
    using KFontRequester_Metric_Callback = int (*)(const KFontRequester*, int);
    using KFontRequester_InitPainter_Callback = void (*)(const KFontRequester*, QPainter*);
    using KFontRequester_Redirected_Callback = QPaintDevice* (*)(const KFontRequester*, QPoint*);
    using KFontRequester_SharedPainter_Callback = QPainter* (*)();
    using KFontRequester_InputMethodEvent_Callback = void (*)(KFontRequester*, QInputMethodEvent*);
    using KFontRequester_InputMethodQuery_Callback = QVariant* (*)(const KFontRequester*, int);
    using KFontRequester_FocusNextPrevChild_Callback = bool (*)(KFontRequester*, bool);
    using KFontRequester_TimerEvent_Callback = void (*)(KFontRequester*, QTimerEvent*);
    using KFontRequester_ChildEvent_Callback = void (*)(KFontRequester*, QChildEvent*);
    using KFontRequester_CustomEvent_Callback = void (*)(KFontRequester*, QEvent*);
    using KFontRequester_ConnectNotify_Callback = void (*)(KFontRequester*, QMetaMethod*);
    using KFontRequester_DisconnectNotify_Callback = void (*)(KFontRequester*, QMetaMethod*);
    using KFontRequester_UpdateMicroFocus_Callback = void (*)();
    using KFontRequester_Create_Callback = void (*)();
    using KFontRequester_Destroy_Callback = void (*)();
    using KFontRequester_FocusNextChild_Callback = bool (*)();
    using KFontRequester_FocusPreviousChild_Callback = bool (*)();
    using KFontRequester_Sender_Callback = QObject* (*)();
    using KFontRequester_SenderSignalIndex_Callback = int (*)();
    using KFontRequester_Receivers_Callback = int (*)(const KFontRequester*, const char*);
    using KFontRequester_IsSignalConnected_Callback = bool (*)(const KFontRequester*, QMetaMethod*);
    using KFontRequester_GetDecodedMetricF_Callback = double (*)(const KFontRequester*, int, int);

  protected:
    // Instance callback storage
    KFontRequester_MetaObject_Callback kfontrequester_metaobject_callback = nullptr;
    KFontRequester_Metacast_Callback kfontrequester_metacast_callback = nullptr;
    KFontRequester_Metacall_Callback kfontrequester_metacall_callback = nullptr;
    KFontRequester_SetFont_Callback kfontrequester_setfont_callback = nullptr;
    KFontRequester_SetSampleText_Callback kfontrequester_setsampletext_callback = nullptr;
    KFontRequester_SetTitle_Callback kfontrequester_settitle_callback = nullptr;
    KFontRequester_EventFilter_Callback kfontrequester_eventfilter_callback = nullptr;
    KFontRequester_DevType_Callback kfontrequester_devtype_callback = nullptr;
    KFontRequester_SetVisible_Callback kfontrequester_setvisible_callback = nullptr;
    KFontRequester_SizeHint_Callback kfontrequester_sizehint_callback = nullptr;
    KFontRequester_MinimumSizeHint_Callback kfontrequester_minimumsizehint_callback = nullptr;
    KFontRequester_HeightForWidth_Callback kfontrequester_heightforwidth_callback = nullptr;
    KFontRequester_HasHeightForWidth_Callback kfontrequester_hasheightforwidth_callback = nullptr;
    KFontRequester_PaintEngine_Callback kfontrequester_paintengine_callback = nullptr;
    KFontRequester_Event_Callback kfontrequester_event_callback = nullptr;
    KFontRequester_MousePressEvent_Callback kfontrequester_mousepressevent_callback = nullptr;
    KFontRequester_MouseReleaseEvent_Callback kfontrequester_mousereleaseevent_callback = nullptr;
    KFontRequester_MouseDoubleClickEvent_Callback kfontrequester_mousedoubleclickevent_callback = nullptr;
    KFontRequester_MouseMoveEvent_Callback kfontrequester_mousemoveevent_callback = nullptr;
    KFontRequester_WheelEvent_Callback kfontrequester_wheelevent_callback = nullptr;
    KFontRequester_KeyPressEvent_Callback kfontrequester_keypressevent_callback = nullptr;
    KFontRequester_KeyReleaseEvent_Callback kfontrequester_keyreleaseevent_callback = nullptr;
    KFontRequester_FocusInEvent_Callback kfontrequester_focusinevent_callback = nullptr;
    KFontRequester_FocusOutEvent_Callback kfontrequester_focusoutevent_callback = nullptr;
    KFontRequester_EnterEvent_Callback kfontrequester_enterevent_callback = nullptr;
    KFontRequester_LeaveEvent_Callback kfontrequester_leaveevent_callback = nullptr;
    KFontRequester_PaintEvent_Callback kfontrequester_paintevent_callback = nullptr;
    KFontRequester_MoveEvent_Callback kfontrequester_moveevent_callback = nullptr;
    KFontRequester_ResizeEvent_Callback kfontrequester_resizeevent_callback = nullptr;
    KFontRequester_CloseEvent_Callback kfontrequester_closeevent_callback = nullptr;
    KFontRequester_ContextMenuEvent_Callback kfontrequester_contextmenuevent_callback = nullptr;
    KFontRequester_TabletEvent_Callback kfontrequester_tabletevent_callback = nullptr;
    KFontRequester_ActionEvent_Callback kfontrequester_actionevent_callback = nullptr;
    KFontRequester_DragEnterEvent_Callback kfontrequester_dragenterevent_callback = nullptr;
    KFontRequester_DragMoveEvent_Callback kfontrequester_dragmoveevent_callback = nullptr;
    KFontRequester_DragLeaveEvent_Callback kfontrequester_dragleaveevent_callback = nullptr;
    KFontRequester_DropEvent_Callback kfontrequester_dropevent_callback = nullptr;
    KFontRequester_ShowEvent_Callback kfontrequester_showevent_callback = nullptr;
    KFontRequester_HideEvent_Callback kfontrequester_hideevent_callback = nullptr;
    KFontRequester_NativeEvent_Callback kfontrequester_nativeevent_callback = nullptr;
    KFontRequester_ChangeEvent_Callback kfontrequester_changeevent_callback = nullptr;
    KFontRequester_Metric_Callback kfontrequester_metric_callback = nullptr;
    KFontRequester_InitPainter_Callback kfontrequester_initpainter_callback = nullptr;
    KFontRequester_Redirected_Callback kfontrequester_redirected_callback = nullptr;
    KFontRequester_SharedPainter_Callback kfontrequester_sharedpainter_callback = nullptr;
    KFontRequester_InputMethodEvent_Callback kfontrequester_inputmethodevent_callback = nullptr;
    KFontRequester_InputMethodQuery_Callback kfontrequester_inputmethodquery_callback = nullptr;
    KFontRequester_FocusNextPrevChild_Callback kfontrequester_focusnextprevchild_callback = nullptr;
    KFontRequester_TimerEvent_Callback kfontrequester_timerevent_callback = nullptr;
    KFontRequester_ChildEvent_Callback kfontrequester_childevent_callback = nullptr;
    KFontRequester_CustomEvent_Callback kfontrequester_customevent_callback = nullptr;
    KFontRequester_ConnectNotify_Callback kfontrequester_connectnotify_callback = nullptr;
    KFontRequester_DisconnectNotify_Callback kfontrequester_disconnectnotify_callback = nullptr;
    KFontRequester_UpdateMicroFocus_Callback kfontrequester_updatemicrofocus_callback = nullptr;
    KFontRequester_Create_Callback kfontrequester_create_callback = nullptr;
    KFontRequester_Destroy_Callback kfontrequester_destroy_callback = nullptr;
    KFontRequester_FocusNextChild_Callback kfontrequester_focusnextchild_callback = nullptr;
    KFontRequester_FocusPreviousChild_Callback kfontrequester_focuspreviouschild_callback = nullptr;
    KFontRequester_Sender_Callback kfontrequester_sender_callback = nullptr;
    KFontRequester_SenderSignalIndex_Callback kfontrequester_sendersignalindex_callback = nullptr;
    KFontRequester_Receivers_Callback kfontrequester_receivers_callback = nullptr;
    KFontRequester_IsSignalConnected_Callback kfontrequester_issignalconnected_callback = nullptr;
    KFontRequester_GetDecodedMetricF_Callback kfontrequester_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kfontrequester_metaobject_isbase = false;
    mutable bool kfontrequester_metacast_isbase = false;
    mutable bool kfontrequester_metacall_isbase = false;
    mutable bool kfontrequester_setfont_isbase = false;
    mutable bool kfontrequester_setsampletext_isbase = false;
    mutable bool kfontrequester_settitle_isbase = false;
    mutable bool kfontrequester_eventfilter_isbase = false;
    mutable bool kfontrequester_devtype_isbase = false;
    mutable bool kfontrequester_setvisible_isbase = false;
    mutable bool kfontrequester_sizehint_isbase = false;
    mutable bool kfontrequester_minimumsizehint_isbase = false;
    mutable bool kfontrequester_heightforwidth_isbase = false;
    mutable bool kfontrequester_hasheightforwidth_isbase = false;
    mutable bool kfontrequester_paintengine_isbase = false;
    mutable bool kfontrequester_event_isbase = false;
    mutable bool kfontrequester_mousepressevent_isbase = false;
    mutable bool kfontrequester_mousereleaseevent_isbase = false;
    mutable bool kfontrequester_mousedoubleclickevent_isbase = false;
    mutable bool kfontrequester_mousemoveevent_isbase = false;
    mutable bool kfontrequester_wheelevent_isbase = false;
    mutable bool kfontrequester_keypressevent_isbase = false;
    mutable bool kfontrequester_keyreleaseevent_isbase = false;
    mutable bool kfontrequester_focusinevent_isbase = false;
    mutable bool kfontrequester_focusoutevent_isbase = false;
    mutable bool kfontrequester_enterevent_isbase = false;
    mutable bool kfontrequester_leaveevent_isbase = false;
    mutable bool kfontrequester_paintevent_isbase = false;
    mutable bool kfontrequester_moveevent_isbase = false;
    mutable bool kfontrequester_resizeevent_isbase = false;
    mutable bool kfontrequester_closeevent_isbase = false;
    mutable bool kfontrequester_contextmenuevent_isbase = false;
    mutable bool kfontrequester_tabletevent_isbase = false;
    mutable bool kfontrequester_actionevent_isbase = false;
    mutable bool kfontrequester_dragenterevent_isbase = false;
    mutable bool kfontrequester_dragmoveevent_isbase = false;
    mutable bool kfontrequester_dragleaveevent_isbase = false;
    mutable bool kfontrequester_dropevent_isbase = false;
    mutable bool kfontrequester_showevent_isbase = false;
    mutable bool kfontrequester_hideevent_isbase = false;
    mutable bool kfontrequester_nativeevent_isbase = false;
    mutable bool kfontrequester_changeevent_isbase = false;
    mutable bool kfontrequester_metric_isbase = false;
    mutable bool kfontrequester_initpainter_isbase = false;
    mutable bool kfontrequester_redirected_isbase = false;
    mutable bool kfontrequester_sharedpainter_isbase = false;
    mutable bool kfontrequester_inputmethodevent_isbase = false;
    mutable bool kfontrequester_inputmethodquery_isbase = false;
    mutable bool kfontrequester_focusnextprevchild_isbase = false;
    mutable bool kfontrequester_timerevent_isbase = false;
    mutable bool kfontrequester_childevent_isbase = false;
    mutable bool kfontrequester_customevent_isbase = false;
    mutable bool kfontrequester_connectnotify_isbase = false;
    mutable bool kfontrequester_disconnectnotify_isbase = false;
    mutable bool kfontrequester_updatemicrofocus_isbase = false;
    mutable bool kfontrequester_create_isbase = false;
    mutable bool kfontrequester_destroy_isbase = false;
    mutable bool kfontrequester_focusnextchild_isbase = false;
    mutable bool kfontrequester_focuspreviouschild_isbase = false;
    mutable bool kfontrequester_sender_isbase = false;
    mutable bool kfontrequester_sendersignalindex_isbase = false;
    mutable bool kfontrequester_receivers_isbase = false;
    mutable bool kfontrequester_issignalconnected_isbase = false;
    mutable bool kfontrequester_getdecodedmetricf_isbase = false;

  public:
    VirtualKFontRequester(QWidget* parent) : KFontRequester(parent) {};
    VirtualKFontRequester() : KFontRequester() {};
    VirtualKFontRequester(QWidget* parent, bool onlyFixed) : KFontRequester(parent, onlyFixed) {};

    // Callback setters
    inline void setKFontRequester_MetaObject_Callback(KFontRequester_MetaObject_Callback cb) { kfontrequester_metaobject_callback = cb; }
    inline void setKFontRequester_Metacast_Callback(KFontRequester_Metacast_Callback cb) { kfontrequester_metacast_callback = cb; }
    inline void setKFontRequester_Metacall_Callback(KFontRequester_Metacall_Callback cb) { kfontrequester_metacall_callback = cb; }
    inline void setKFontRequester_SetFont_Callback(KFontRequester_SetFont_Callback cb) { kfontrequester_setfont_callback = cb; }
    inline void setKFontRequester_SetSampleText_Callback(KFontRequester_SetSampleText_Callback cb) { kfontrequester_setsampletext_callback = cb; }
    inline void setKFontRequester_SetTitle_Callback(KFontRequester_SetTitle_Callback cb) { kfontrequester_settitle_callback = cb; }
    inline void setKFontRequester_EventFilter_Callback(KFontRequester_EventFilter_Callback cb) { kfontrequester_eventfilter_callback = cb; }
    inline void setKFontRequester_DevType_Callback(KFontRequester_DevType_Callback cb) { kfontrequester_devtype_callback = cb; }
    inline void setKFontRequester_SetVisible_Callback(KFontRequester_SetVisible_Callback cb) { kfontrequester_setvisible_callback = cb; }
    inline void setKFontRequester_SizeHint_Callback(KFontRequester_SizeHint_Callback cb) { kfontrequester_sizehint_callback = cb; }
    inline void setKFontRequester_MinimumSizeHint_Callback(KFontRequester_MinimumSizeHint_Callback cb) { kfontrequester_minimumsizehint_callback = cb; }
    inline void setKFontRequester_HeightForWidth_Callback(KFontRequester_HeightForWidth_Callback cb) { kfontrequester_heightforwidth_callback = cb; }
    inline void setKFontRequester_HasHeightForWidth_Callback(KFontRequester_HasHeightForWidth_Callback cb) { kfontrequester_hasheightforwidth_callback = cb; }
    inline void setKFontRequester_PaintEngine_Callback(KFontRequester_PaintEngine_Callback cb) { kfontrequester_paintengine_callback = cb; }
    inline void setKFontRequester_Event_Callback(KFontRequester_Event_Callback cb) { kfontrequester_event_callback = cb; }
    inline void setKFontRequester_MousePressEvent_Callback(KFontRequester_MousePressEvent_Callback cb) { kfontrequester_mousepressevent_callback = cb; }
    inline void setKFontRequester_MouseReleaseEvent_Callback(KFontRequester_MouseReleaseEvent_Callback cb) { kfontrequester_mousereleaseevent_callback = cb; }
    inline void setKFontRequester_MouseDoubleClickEvent_Callback(KFontRequester_MouseDoubleClickEvent_Callback cb) { kfontrequester_mousedoubleclickevent_callback = cb; }
    inline void setKFontRequester_MouseMoveEvent_Callback(KFontRequester_MouseMoveEvent_Callback cb) { kfontrequester_mousemoveevent_callback = cb; }
    inline void setKFontRequester_WheelEvent_Callback(KFontRequester_WheelEvent_Callback cb) { kfontrequester_wheelevent_callback = cb; }
    inline void setKFontRequester_KeyPressEvent_Callback(KFontRequester_KeyPressEvent_Callback cb) { kfontrequester_keypressevent_callback = cb; }
    inline void setKFontRequester_KeyReleaseEvent_Callback(KFontRequester_KeyReleaseEvent_Callback cb) { kfontrequester_keyreleaseevent_callback = cb; }
    inline void setKFontRequester_FocusInEvent_Callback(KFontRequester_FocusInEvent_Callback cb) { kfontrequester_focusinevent_callback = cb; }
    inline void setKFontRequester_FocusOutEvent_Callback(KFontRequester_FocusOutEvent_Callback cb) { kfontrequester_focusoutevent_callback = cb; }
    inline void setKFontRequester_EnterEvent_Callback(KFontRequester_EnterEvent_Callback cb) { kfontrequester_enterevent_callback = cb; }
    inline void setKFontRequester_LeaveEvent_Callback(KFontRequester_LeaveEvent_Callback cb) { kfontrequester_leaveevent_callback = cb; }
    inline void setKFontRequester_PaintEvent_Callback(KFontRequester_PaintEvent_Callback cb) { kfontrequester_paintevent_callback = cb; }
    inline void setKFontRequester_MoveEvent_Callback(KFontRequester_MoveEvent_Callback cb) { kfontrequester_moveevent_callback = cb; }
    inline void setKFontRequester_ResizeEvent_Callback(KFontRequester_ResizeEvent_Callback cb) { kfontrequester_resizeevent_callback = cb; }
    inline void setKFontRequester_CloseEvent_Callback(KFontRequester_CloseEvent_Callback cb) { kfontrequester_closeevent_callback = cb; }
    inline void setKFontRequester_ContextMenuEvent_Callback(KFontRequester_ContextMenuEvent_Callback cb) { kfontrequester_contextmenuevent_callback = cb; }
    inline void setKFontRequester_TabletEvent_Callback(KFontRequester_TabletEvent_Callback cb) { kfontrequester_tabletevent_callback = cb; }
    inline void setKFontRequester_ActionEvent_Callback(KFontRequester_ActionEvent_Callback cb) { kfontrequester_actionevent_callback = cb; }
    inline void setKFontRequester_DragEnterEvent_Callback(KFontRequester_DragEnterEvent_Callback cb) { kfontrequester_dragenterevent_callback = cb; }
    inline void setKFontRequester_DragMoveEvent_Callback(KFontRequester_DragMoveEvent_Callback cb) { kfontrequester_dragmoveevent_callback = cb; }
    inline void setKFontRequester_DragLeaveEvent_Callback(KFontRequester_DragLeaveEvent_Callback cb) { kfontrequester_dragleaveevent_callback = cb; }
    inline void setKFontRequester_DropEvent_Callback(KFontRequester_DropEvent_Callback cb) { kfontrequester_dropevent_callback = cb; }
    inline void setKFontRequester_ShowEvent_Callback(KFontRequester_ShowEvent_Callback cb) { kfontrequester_showevent_callback = cb; }
    inline void setKFontRequester_HideEvent_Callback(KFontRequester_HideEvent_Callback cb) { kfontrequester_hideevent_callback = cb; }
    inline void setKFontRequester_NativeEvent_Callback(KFontRequester_NativeEvent_Callback cb) { kfontrequester_nativeevent_callback = cb; }
    inline void setKFontRequester_ChangeEvent_Callback(KFontRequester_ChangeEvent_Callback cb) { kfontrequester_changeevent_callback = cb; }
    inline void setKFontRequester_Metric_Callback(KFontRequester_Metric_Callback cb) { kfontrequester_metric_callback = cb; }
    inline void setKFontRequester_InitPainter_Callback(KFontRequester_InitPainter_Callback cb) { kfontrequester_initpainter_callback = cb; }
    inline void setKFontRequester_Redirected_Callback(KFontRequester_Redirected_Callback cb) { kfontrequester_redirected_callback = cb; }
    inline void setKFontRequester_SharedPainter_Callback(KFontRequester_SharedPainter_Callback cb) { kfontrequester_sharedpainter_callback = cb; }
    inline void setKFontRequester_InputMethodEvent_Callback(KFontRequester_InputMethodEvent_Callback cb) { kfontrequester_inputmethodevent_callback = cb; }
    inline void setKFontRequester_InputMethodQuery_Callback(KFontRequester_InputMethodQuery_Callback cb) { kfontrequester_inputmethodquery_callback = cb; }
    inline void setKFontRequester_FocusNextPrevChild_Callback(KFontRequester_FocusNextPrevChild_Callback cb) { kfontrequester_focusnextprevchild_callback = cb; }
    inline void setKFontRequester_TimerEvent_Callback(KFontRequester_TimerEvent_Callback cb) { kfontrequester_timerevent_callback = cb; }
    inline void setKFontRequester_ChildEvent_Callback(KFontRequester_ChildEvent_Callback cb) { kfontrequester_childevent_callback = cb; }
    inline void setKFontRequester_CustomEvent_Callback(KFontRequester_CustomEvent_Callback cb) { kfontrequester_customevent_callback = cb; }
    inline void setKFontRequester_ConnectNotify_Callback(KFontRequester_ConnectNotify_Callback cb) { kfontrequester_connectnotify_callback = cb; }
    inline void setKFontRequester_DisconnectNotify_Callback(KFontRequester_DisconnectNotify_Callback cb) { kfontrequester_disconnectnotify_callback = cb; }
    inline void setKFontRequester_UpdateMicroFocus_Callback(KFontRequester_UpdateMicroFocus_Callback cb) { kfontrequester_updatemicrofocus_callback = cb; }
    inline void setKFontRequester_Create_Callback(KFontRequester_Create_Callback cb) { kfontrequester_create_callback = cb; }
    inline void setKFontRequester_Destroy_Callback(KFontRequester_Destroy_Callback cb) { kfontrequester_destroy_callback = cb; }
    inline void setKFontRequester_FocusNextChild_Callback(KFontRequester_FocusNextChild_Callback cb) { kfontrequester_focusnextchild_callback = cb; }
    inline void setKFontRequester_FocusPreviousChild_Callback(KFontRequester_FocusPreviousChild_Callback cb) { kfontrequester_focuspreviouschild_callback = cb; }
    inline void setKFontRequester_Sender_Callback(KFontRequester_Sender_Callback cb) { kfontrequester_sender_callback = cb; }
    inline void setKFontRequester_SenderSignalIndex_Callback(KFontRequester_SenderSignalIndex_Callback cb) { kfontrequester_sendersignalindex_callback = cb; }
    inline void setKFontRequester_Receivers_Callback(KFontRequester_Receivers_Callback cb) { kfontrequester_receivers_callback = cb; }
    inline void setKFontRequester_IsSignalConnected_Callback(KFontRequester_IsSignalConnected_Callback cb) { kfontrequester_issignalconnected_callback = cb; }
    inline void setKFontRequester_GetDecodedMetricF_Callback(KFontRequester_GetDecodedMetricF_Callback cb) { kfontrequester_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKFontRequester_MetaObject_IsBase(bool value) const { kfontrequester_metaobject_isbase = value; }
    inline void setKFontRequester_Metacast_IsBase(bool value) const { kfontrequester_metacast_isbase = value; }
    inline void setKFontRequester_Metacall_IsBase(bool value) const { kfontrequester_metacall_isbase = value; }
    inline void setKFontRequester_SetFont_IsBase(bool value) const { kfontrequester_setfont_isbase = value; }
    inline void setKFontRequester_SetSampleText_IsBase(bool value) const { kfontrequester_setsampletext_isbase = value; }
    inline void setKFontRequester_SetTitle_IsBase(bool value) const { kfontrequester_settitle_isbase = value; }
    inline void setKFontRequester_EventFilter_IsBase(bool value) const { kfontrequester_eventfilter_isbase = value; }
    inline void setKFontRequester_DevType_IsBase(bool value) const { kfontrequester_devtype_isbase = value; }
    inline void setKFontRequester_SetVisible_IsBase(bool value) const { kfontrequester_setvisible_isbase = value; }
    inline void setKFontRequester_SizeHint_IsBase(bool value) const { kfontrequester_sizehint_isbase = value; }
    inline void setKFontRequester_MinimumSizeHint_IsBase(bool value) const { kfontrequester_minimumsizehint_isbase = value; }
    inline void setKFontRequester_HeightForWidth_IsBase(bool value) const { kfontrequester_heightforwidth_isbase = value; }
    inline void setKFontRequester_HasHeightForWidth_IsBase(bool value) const { kfontrequester_hasheightforwidth_isbase = value; }
    inline void setKFontRequester_PaintEngine_IsBase(bool value) const { kfontrequester_paintengine_isbase = value; }
    inline void setKFontRequester_Event_IsBase(bool value) const { kfontrequester_event_isbase = value; }
    inline void setKFontRequester_MousePressEvent_IsBase(bool value) const { kfontrequester_mousepressevent_isbase = value; }
    inline void setKFontRequester_MouseReleaseEvent_IsBase(bool value) const { kfontrequester_mousereleaseevent_isbase = value; }
    inline void setKFontRequester_MouseDoubleClickEvent_IsBase(bool value) const { kfontrequester_mousedoubleclickevent_isbase = value; }
    inline void setKFontRequester_MouseMoveEvent_IsBase(bool value) const { kfontrequester_mousemoveevent_isbase = value; }
    inline void setKFontRequester_WheelEvent_IsBase(bool value) const { kfontrequester_wheelevent_isbase = value; }
    inline void setKFontRequester_KeyPressEvent_IsBase(bool value) const { kfontrequester_keypressevent_isbase = value; }
    inline void setKFontRequester_KeyReleaseEvent_IsBase(bool value) const { kfontrequester_keyreleaseevent_isbase = value; }
    inline void setKFontRequester_FocusInEvent_IsBase(bool value) const { kfontrequester_focusinevent_isbase = value; }
    inline void setKFontRequester_FocusOutEvent_IsBase(bool value) const { kfontrequester_focusoutevent_isbase = value; }
    inline void setKFontRequester_EnterEvent_IsBase(bool value) const { kfontrequester_enterevent_isbase = value; }
    inline void setKFontRequester_LeaveEvent_IsBase(bool value) const { kfontrequester_leaveevent_isbase = value; }
    inline void setKFontRequester_PaintEvent_IsBase(bool value) const { kfontrequester_paintevent_isbase = value; }
    inline void setKFontRequester_MoveEvent_IsBase(bool value) const { kfontrequester_moveevent_isbase = value; }
    inline void setKFontRequester_ResizeEvent_IsBase(bool value) const { kfontrequester_resizeevent_isbase = value; }
    inline void setKFontRequester_CloseEvent_IsBase(bool value) const { kfontrequester_closeevent_isbase = value; }
    inline void setKFontRequester_ContextMenuEvent_IsBase(bool value) const { kfontrequester_contextmenuevent_isbase = value; }
    inline void setKFontRequester_TabletEvent_IsBase(bool value) const { kfontrequester_tabletevent_isbase = value; }
    inline void setKFontRequester_ActionEvent_IsBase(bool value) const { kfontrequester_actionevent_isbase = value; }
    inline void setKFontRequester_DragEnterEvent_IsBase(bool value) const { kfontrequester_dragenterevent_isbase = value; }
    inline void setKFontRequester_DragMoveEvent_IsBase(bool value) const { kfontrequester_dragmoveevent_isbase = value; }
    inline void setKFontRequester_DragLeaveEvent_IsBase(bool value) const { kfontrequester_dragleaveevent_isbase = value; }
    inline void setKFontRequester_DropEvent_IsBase(bool value) const { kfontrequester_dropevent_isbase = value; }
    inline void setKFontRequester_ShowEvent_IsBase(bool value) const { kfontrequester_showevent_isbase = value; }
    inline void setKFontRequester_HideEvent_IsBase(bool value) const { kfontrequester_hideevent_isbase = value; }
    inline void setKFontRequester_NativeEvent_IsBase(bool value) const { kfontrequester_nativeevent_isbase = value; }
    inline void setKFontRequester_ChangeEvent_IsBase(bool value) const { kfontrequester_changeevent_isbase = value; }
    inline void setKFontRequester_Metric_IsBase(bool value) const { kfontrequester_metric_isbase = value; }
    inline void setKFontRequester_InitPainter_IsBase(bool value) const { kfontrequester_initpainter_isbase = value; }
    inline void setKFontRequester_Redirected_IsBase(bool value) const { kfontrequester_redirected_isbase = value; }
    inline void setKFontRequester_SharedPainter_IsBase(bool value) const { kfontrequester_sharedpainter_isbase = value; }
    inline void setKFontRequester_InputMethodEvent_IsBase(bool value) const { kfontrequester_inputmethodevent_isbase = value; }
    inline void setKFontRequester_InputMethodQuery_IsBase(bool value) const { kfontrequester_inputmethodquery_isbase = value; }
    inline void setKFontRequester_FocusNextPrevChild_IsBase(bool value) const { kfontrequester_focusnextprevchild_isbase = value; }
    inline void setKFontRequester_TimerEvent_IsBase(bool value) const { kfontrequester_timerevent_isbase = value; }
    inline void setKFontRequester_ChildEvent_IsBase(bool value) const { kfontrequester_childevent_isbase = value; }
    inline void setKFontRequester_CustomEvent_IsBase(bool value) const { kfontrequester_customevent_isbase = value; }
    inline void setKFontRequester_ConnectNotify_IsBase(bool value) const { kfontrequester_connectnotify_isbase = value; }
    inline void setKFontRequester_DisconnectNotify_IsBase(bool value) const { kfontrequester_disconnectnotify_isbase = value; }
    inline void setKFontRequester_UpdateMicroFocus_IsBase(bool value) const { kfontrequester_updatemicrofocus_isbase = value; }
    inline void setKFontRequester_Create_IsBase(bool value) const { kfontrequester_create_isbase = value; }
    inline void setKFontRequester_Destroy_IsBase(bool value) const { kfontrequester_destroy_isbase = value; }
    inline void setKFontRequester_FocusNextChild_IsBase(bool value) const { kfontrequester_focusnextchild_isbase = value; }
    inline void setKFontRequester_FocusPreviousChild_IsBase(bool value) const { kfontrequester_focuspreviouschild_isbase = value; }
    inline void setKFontRequester_Sender_IsBase(bool value) const { kfontrequester_sender_isbase = value; }
    inline void setKFontRequester_SenderSignalIndex_IsBase(bool value) const { kfontrequester_sendersignalindex_isbase = value; }
    inline void setKFontRequester_Receivers_IsBase(bool value) const { kfontrequester_receivers_isbase = value; }
    inline void setKFontRequester_IsSignalConnected_IsBase(bool value) const { kfontrequester_issignalconnected_isbase = value; }
    inline void setKFontRequester_GetDecodedMetricF_IsBase(bool value) const { kfontrequester_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfontrequester_metaobject_isbase) {
            kfontrequester_metaobject_isbase = false;
            return KFontRequester::metaObject();
        }
        auto metaobject_cb = kfontrequester_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KFontRequester::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfontrequester_metacast_isbase) {
            kfontrequester_metacast_isbase = false;
            return KFontRequester::qt_metacast(param1);
        }
        auto metacast_cb = kfontrequester_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KFontRequester::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfontrequester_metacall_isbase) {
            kfontrequester_metacall_isbase = false;
            return KFontRequester::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kfontrequester_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFontRequester::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& font, bool onlyFixed) override {
        if (kfontrequester_setfont_isbase) {
            kfontrequester_setfont_isbase = false;
            KFontRequester::setFont(font, onlyFixed);
            return;
        }
        auto setfont_cb = kfontrequester_setfont_callback;
        if (setfont_cb) {
            const QFont& font_ret = font;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&font_ret);
            bool cbval2 = onlyFixed;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        KFontRequester::setFont(font, onlyFixed);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSampleText(const QString& text) override {
        if (kfontrequester_setsampletext_isbase) {
            kfontrequester_setsampletext_isbase = false;
            KFontRequester::setSampleText(text);
            return;
        }
        auto setsampletext_cb = kfontrequester_setsampletext_callback;
        if (setsampletext_cb) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;

            setsampletext_cb(this, cbval1);
            libqt_free(text_str);
            return;
        }
        KFontRequester::setSampleText(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTitle(const QString& title) override {
        if (kfontrequester_settitle_isbase) {
            kfontrequester_settitle_isbase = false;
            KFontRequester::setTitle(title);
            return;
        }
        auto settitle_cb = kfontrequester_settitle_callback;
        if (settitle_cb) {
            const QString title_ret = title;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray title_b = title_ret.toUtf8();
            auto title_str_len = title_b.length();
            const char* title_str = static_cast<const char*>(malloc(title_str_len + 1));
            memcpy((void*)title_str, title_b.data(), title_str_len);
            ((char*)title_str)[title_str_len] = '\0';
            const char* cbval1 = title_str;

            settitle_cb(this, cbval1);
            libqt_free(title_str);
            return;
        }
        KFontRequester::setTitle(title);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfontrequester_eventfilter_isbase) {
            kfontrequester_eventfilter_isbase = false;
            return KFontRequester::eventFilter(watched, event);
        }
        auto eventfilter_cb = kfontrequester_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFontRequester::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kfontrequester_devtype_isbase) {
            kfontrequester_devtype_isbase = false;
            return KFontRequester::devType();
        }
        auto devtype_cb = kfontrequester_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KFontRequester::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kfontrequester_setvisible_isbase) {
            kfontrequester_setvisible_isbase = false;
            KFontRequester::setVisible(visible);
            return;
        }
        auto setvisible_cb = kfontrequester_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KFontRequester::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kfontrequester_sizehint_isbase) {
            kfontrequester_sizehint_isbase = false;
            return KFontRequester::sizeHint();
        }
        auto sizehint_cb = kfontrequester_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KFontRequester::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kfontrequester_minimumsizehint_isbase) {
            kfontrequester_minimumsizehint_isbase = false;
            return KFontRequester::minimumSizeHint();
        }
        auto minimumsizehint_cb = kfontrequester_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KFontRequester::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kfontrequester_heightforwidth_isbase) {
            kfontrequester_heightforwidth_isbase = false;
            return KFontRequester::heightForWidth(param1);
        }
        auto heightforwidth_cb = kfontrequester_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFontRequester::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kfontrequester_hasheightforwidth_isbase) {
            kfontrequester_hasheightforwidth_isbase = false;
            return KFontRequester::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kfontrequester_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KFontRequester::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kfontrequester_paintengine_isbase) {
            kfontrequester_paintengine_isbase = false;
            return KFontRequester::paintEngine();
        }
        auto paintengine_cb = kfontrequester_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KFontRequester::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfontrequester_event_isbase) {
            kfontrequester_event_isbase = false;
            return KFontRequester::event(event);
        }
        auto event_cb = kfontrequester_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KFontRequester::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kfontrequester_mousepressevent_isbase) {
            kfontrequester_mousepressevent_isbase = false;
            KFontRequester::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kfontrequester_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KFontRequester::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kfontrequester_mousereleaseevent_isbase) {
            kfontrequester_mousereleaseevent_isbase = false;
            KFontRequester::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kfontrequester_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KFontRequester::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kfontrequester_mousedoubleclickevent_isbase) {
            kfontrequester_mousedoubleclickevent_isbase = false;
            KFontRequester::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kfontrequester_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KFontRequester::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kfontrequester_mousemoveevent_isbase) {
            kfontrequester_mousemoveevent_isbase = false;
            KFontRequester::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kfontrequester_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KFontRequester::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kfontrequester_wheelevent_isbase) {
            kfontrequester_wheelevent_isbase = false;
            KFontRequester::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kfontrequester_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KFontRequester::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kfontrequester_keypressevent_isbase) {
            kfontrequester_keypressevent_isbase = false;
            KFontRequester::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = kfontrequester_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        KFontRequester::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kfontrequester_keyreleaseevent_isbase) {
            kfontrequester_keyreleaseevent_isbase = false;
            KFontRequester::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kfontrequester_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KFontRequester::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kfontrequester_focusinevent_isbase) {
            kfontrequester_focusinevent_isbase = false;
            KFontRequester::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kfontrequester_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KFontRequester::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kfontrequester_focusoutevent_isbase) {
            kfontrequester_focusoutevent_isbase = false;
            KFontRequester::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kfontrequester_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KFontRequester::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kfontrequester_enterevent_isbase) {
            kfontrequester_enterevent_isbase = false;
            KFontRequester::enterEvent(event);
            return;
        }
        auto enterevent_cb = kfontrequester_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KFontRequester::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kfontrequester_leaveevent_isbase) {
            kfontrequester_leaveevent_isbase = false;
            KFontRequester::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kfontrequester_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KFontRequester::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kfontrequester_paintevent_isbase) {
            kfontrequester_paintevent_isbase = false;
            KFontRequester::paintEvent(event);
            return;
        }
        auto paintevent_cb = kfontrequester_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KFontRequester::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kfontrequester_moveevent_isbase) {
            kfontrequester_moveevent_isbase = false;
            KFontRequester::moveEvent(event);
            return;
        }
        auto moveevent_cb = kfontrequester_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KFontRequester::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kfontrequester_resizeevent_isbase) {
            kfontrequester_resizeevent_isbase = false;
            KFontRequester::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = kfontrequester_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KFontRequester::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kfontrequester_closeevent_isbase) {
            kfontrequester_closeevent_isbase = false;
            KFontRequester::closeEvent(event);
            return;
        }
        auto closeevent_cb = kfontrequester_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KFontRequester::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kfontrequester_contextmenuevent_isbase) {
            kfontrequester_contextmenuevent_isbase = false;
            KFontRequester::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = kfontrequester_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KFontRequester::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kfontrequester_tabletevent_isbase) {
            kfontrequester_tabletevent_isbase = false;
            KFontRequester::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kfontrequester_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KFontRequester::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kfontrequester_actionevent_isbase) {
            kfontrequester_actionevent_isbase = false;
            KFontRequester::actionEvent(event);
            return;
        }
        auto actionevent_cb = kfontrequester_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KFontRequester::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kfontrequester_dragenterevent_isbase) {
            kfontrequester_dragenterevent_isbase = false;
            KFontRequester::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kfontrequester_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KFontRequester::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kfontrequester_dragmoveevent_isbase) {
            kfontrequester_dragmoveevent_isbase = false;
            KFontRequester::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kfontrequester_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KFontRequester::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kfontrequester_dragleaveevent_isbase) {
            kfontrequester_dragleaveevent_isbase = false;
            KFontRequester::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kfontrequester_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KFontRequester::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kfontrequester_dropevent_isbase) {
            kfontrequester_dropevent_isbase = false;
            KFontRequester::dropEvent(event);
            return;
        }
        auto dropevent_cb = kfontrequester_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KFontRequester::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kfontrequester_showevent_isbase) {
            kfontrequester_showevent_isbase = false;
            KFontRequester::showEvent(event);
            return;
        }
        auto showevent_cb = kfontrequester_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KFontRequester::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kfontrequester_hideevent_isbase) {
            kfontrequester_hideevent_isbase = false;
            KFontRequester::hideEvent(event);
            return;
        }
        auto hideevent_cb = kfontrequester_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KFontRequester::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kfontrequester_nativeevent_isbase) {
            kfontrequester_nativeevent_isbase = false;
            return KFontRequester::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kfontrequester_nativeevent_callback;
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
        return KFontRequester::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kfontrequester_changeevent_isbase) {
            kfontrequester_changeevent_isbase = false;
            KFontRequester::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kfontrequester_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KFontRequester::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kfontrequester_metric_isbase) {
            kfontrequester_metric_isbase = false;
            return KFontRequester::metric(param1);
        }
        auto metric_cb = kfontrequester_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFontRequester::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kfontrequester_initpainter_isbase) {
            kfontrequester_initpainter_isbase = false;
            KFontRequester::initPainter(painter);
            return;
        }
        auto initpainter_cb = kfontrequester_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KFontRequester::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kfontrequester_redirected_isbase) {
            kfontrequester_redirected_isbase = false;
            return KFontRequester::redirected(offset);
        }
        auto redirected_cb = kfontrequester_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KFontRequester::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kfontrequester_sharedpainter_isbase) {
            kfontrequester_sharedpainter_isbase = false;
            return KFontRequester::sharedPainter();
        }
        auto sharedpainter_cb = kfontrequester_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KFontRequester::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kfontrequester_inputmethodevent_isbase) {
            kfontrequester_inputmethodevent_isbase = false;
            KFontRequester::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kfontrequester_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KFontRequester::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kfontrequester_inputmethodquery_isbase) {
            kfontrequester_inputmethodquery_isbase = false;
            return KFontRequester::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kfontrequester_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KFontRequester::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kfontrequester_focusnextprevchild_isbase) {
            kfontrequester_focusnextprevchild_isbase = false;
            return KFontRequester::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kfontrequester_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KFontRequester::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfontrequester_timerevent_isbase) {
            kfontrequester_timerevent_isbase = false;
            KFontRequester::timerEvent(event);
            return;
        }
        auto timerevent_cb = kfontrequester_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KFontRequester::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfontrequester_childevent_isbase) {
            kfontrequester_childevent_isbase = false;
            KFontRequester::childEvent(event);
            return;
        }
        auto childevent_cb = kfontrequester_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KFontRequester::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfontrequester_customevent_isbase) {
            kfontrequester_customevent_isbase = false;
            KFontRequester::customEvent(event);
            return;
        }
        auto customevent_cb = kfontrequester_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KFontRequester::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfontrequester_connectnotify_isbase) {
            kfontrequester_connectnotify_isbase = false;
            KFontRequester::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kfontrequester_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KFontRequester::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfontrequester_disconnectnotify_isbase) {
            kfontrequester_disconnectnotify_isbase = false;
            KFontRequester::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kfontrequester_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KFontRequester::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kfontrequester_updatemicrofocus_isbase) {
            kfontrequester_updatemicrofocus_isbase = false;
            KFontRequester::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kfontrequester_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KFontRequester::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kfontrequester_create_isbase) {
            kfontrequester_create_isbase = false;
            KFontRequester::create();
            return;
        }
        auto create_cb = kfontrequester_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KFontRequester::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kfontrequester_destroy_isbase) {
            kfontrequester_destroy_isbase = false;
            KFontRequester::destroy();
            return;
        }
        auto destroy_cb = kfontrequester_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KFontRequester::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kfontrequester_focusnextchild_isbase) {
            kfontrequester_focusnextchild_isbase = false;
            return KFontRequester::focusNextChild();
        }
        auto focusnextchild_cb = kfontrequester_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KFontRequester::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kfontrequester_focuspreviouschild_isbase) {
            kfontrequester_focuspreviouschild_isbase = false;
            return KFontRequester::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kfontrequester_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KFontRequester::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfontrequester_sender_isbase) {
            kfontrequester_sender_isbase = false;
            return KFontRequester::sender();
        }
        auto sender_cb = kfontrequester_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KFontRequester::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfontrequester_sendersignalindex_isbase) {
            kfontrequester_sendersignalindex_isbase = false;
            return KFontRequester::senderSignalIndex();
        }
        auto sendersignalindex_cb = kfontrequester_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KFontRequester::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfontrequester_receivers_isbase) {
            kfontrequester_receivers_isbase = false;
            return KFontRequester::receivers(signal);
        }
        auto receivers_cb = kfontrequester_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFontRequester::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfontrequester_issignalconnected_isbase) {
            kfontrequester_issignalconnected_isbase = false;
            return KFontRequester::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kfontrequester_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KFontRequester::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kfontrequester_getdecodedmetricf_isbase) {
            kfontrequester_getdecodedmetricf_isbase = false;
            return KFontRequester::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kfontrequester_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KFontRequester::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool KFontRequester_EventFilter(KFontRequester* self, QObject* watched, QEvent* event);
    friend bool KFontRequester_SuperEventFilter(KFontRequester* self, QObject* watched, QEvent* event);
    friend bool KFontRequester_Event(KFontRequester* self, QEvent* event);
    friend bool KFontRequester_SuperEvent(KFontRequester* self, QEvent* event);
    friend void KFontRequester_MousePressEvent(KFontRequester* self, QMouseEvent* event);
    friend void KFontRequester_SuperMousePressEvent(KFontRequester* self, QMouseEvent* event);
    friend void KFontRequester_MouseReleaseEvent(KFontRequester* self, QMouseEvent* event);
    friend void KFontRequester_SuperMouseReleaseEvent(KFontRequester* self, QMouseEvent* event);
    friend void KFontRequester_MouseDoubleClickEvent(KFontRequester* self, QMouseEvent* event);
    friend void KFontRequester_SuperMouseDoubleClickEvent(KFontRequester* self, QMouseEvent* event);
    friend void KFontRequester_MouseMoveEvent(KFontRequester* self, QMouseEvent* event);
    friend void KFontRequester_SuperMouseMoveEvent(KFontRequester* self, QMouseEvent* event);
    friend void KFontRequester_WheelEvent(KFontRequester* self, QWheelEvent* event);
    friend void KFontRequester_SuperWheelEvent(KFontRequester* self, QWheelEvent* event);
    friend void KFontRequester_KeyPressEvent(KFontRequester* self, QKeyEvent* event);
    friend void KFontRequester_SuperKeyPressEvent(KFontRequester* self, QKeyEvent* event);
    friend void KFontRequester_KeyReleaseEvent(KFontRequester* self, QKeyEvent* event);
    friend void KFontRequester_SuperKeyReleaseEvent(KFontRequester* self, QKeyEvent* event);
    friend void KFontRequester_FocusInEvent(KFontRequester* self, QFocusEvent* event);
    friend void KFontRequester_SuperFocusInEvent(KFontRequester* self, QFocusEvent* event);
    friend void KFontRequester_FocusOutEvent(KFontRequester* self, QFocusEvent* event);
    friend void KFontRequester_SuperFocusOutEvent(KFontRequester* self, QFocusEvent* event);
    friend void KFontRequester_EnterEvent(KFontRequester* self, QEnterEvent* event);
    friend void KFontRequester_SuperEnterEvent(KFontRequester* self, QEnterEvent* event);
    friend void KFontRequester_LeaveEvent(KFontRequester* self, QEvent* event);
    friend void KFontRequester_SuperLeaveEvent(KFontRequester* self, QEvent* event);
    friend void KFontRequester_PaintEvent(KFontRequester* self, QPaintEvent* event);
    friend void KFontRequester_SuperPaintEvent(KFontRequester* self, QPaintEvent* event);
    friend void KFontRequester_MoveEvent(KFontRequester* self, QMoveEvent* event);
    friend void KFontRequester_SuperMoveEvent(KFontRequester* self, QMoveEvent* event);
    friend void KFontRequester_ResizeEvent(KFontRequester* self, QResizeEvent* event);
    friend void KFontRequester_SuperResizeEvent(KFontRequester* self, QResizeEvent* event);
    friend void KFontRequester_CloseEvent(KFontRequester* self, QCloseEvent* event);
    friend void KFontRequester_SuperCloseEvent(KFontRequester* self, QCloseEvent* event);
    friend void KFontRequester_ContextMenuEvent(KFontRequester* self, QContextMenuEvent* event);
    friend void KFontRequester_SuperContextMenuEvent(KFontRequester* self, QContextMenuEvent* event);
    friend void KFontRequester_TabletEvent(KFontRequester* self, QTabletEvent* event);
    friend void KFontRequester_SuperTabletEvent(KFontRequester* self, QTabletEvent* event);
    friend void KFontRequester_ActionEvent(KFontRequester* self, QActionEvent* event);
    friend void KFontRequester_SuperActionEvent(KFontRequester* self, QActionEvent* event);
    friend void KFontRequester_DragEnterEvent(KFontRequester* self, QDragEnterEvent* event);
    friend void KFontRequester_SuperDragEnterEvent(KFontRequester* self, QDragEnterEvent* event);
    friend void KFontRequester_DragMoveEvent(KFontRequester* self, QDragMoveEvent* event);
    friend void KFontRequester_SuperDragMoveEvent(KFontRequester* self, QDragMoveEvent* event);
    friend void KFontRequester_DragLeaveEvent(KFontRequester* self, QDragLeaveEvent* event);
    friend void KFontRequester_SuperDragLeaveEvent(KFontRequester* self, QDragLeaveEvent* event);
    friend void KFontRequester_DropEvent(KFontRequester* self, QDropEvent* event);
    friend void KFontRequester_SuperDropEvent(KFontRequester* self, QDropEvent* event);
    friend void KFontRequester_ShowEvent(KFontRequester* self, QShowEvent* event);
    friend void KFontRequester_SuperShowEvent(KFontRequester* self, QShowEvent* event);
    friend void KFontRequester_HideEvent(KFontRequester* self, QHideEvent* event);
    friend void KFontRequester_SuperHideEvent(KFontRequester* self, QHideEvent* event);
    friend bool KFontRequester_NativeEvent(KFontRequester* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KFontRequester_SuperNativeEvent(KFontRequester* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KFontRequester_ChangeEvent(KFontRequester* self, QEvent* param1);
    friend void KFontRequester_SuperChangeEvent(KFontRequester* self, QEvent* param1);
    friend int KFontRequester_Metric(const KFontRequester* self, int param1);
    friend int KFontRequester_SuperMetric(const KFontRequester* self, int param1);
    friend void KFontRequester_InitPainter(const KFontRequester* self, QPainter* painter);
    friend void KFontRequester_SuperInitPainter(const KFontRequester* self, QPainter* painter);
    friend QPaintDevice* KFontRequester_Redirected(const KFontRequester* self, QPoint* offset);
    friend QPaintDevice* KFontRequester_SuperRedirected(const KFontRequester* self, QPoint* offset);
    friend QPainter* KFontRequester_SharedPainter(const KFontRequester* self);
    friend QPainter* KFontRequester_SuperSharedPainter(const KFontRequester* self);
    friend void KFontRequester_InputMethodEvent(KFontRequester* self, QInputMethodEvent* param1);
    friend void KFontRequester_SuperInputMethodEvent(KFontRequester* self, QInputMethodEvent* param1);
    friend bool KFontRequester_FocusNextPrevChild(KFontRequester* self, bool next);
    friend bool KFontRequester_SuperFocusNextPrevChild(KFontRequester* self, bool next);
    friend void KFontRequester_TimerEvent(KFontRequester* self, QTimerEvent* event);
    friend void KFontRequester_SuperTimerEvent(KFontRequester* self, QTimerEvent* event);
    friend void KFontRequester_ChildEvent(KFontRequester* self, QChildEvent* event);
    friend void KFontRequester_SuperChildEvent(KFontRequester* self, QChildEvent* event);
    friend void KFontRequester_CustomEvent(KFontRequester* self, QEvent* event);
    friend void KFontRequester_SuperCustomEvent(KFontRequester* self, QEvent* event);
    friend void KFontRequester_ConnectNotify(KFontRequester* self, const QMetaMethod* signal);
    friend void KFontRequester_SuperConnectNotify(KFontRequester* self, const QMetaMethod* signal);
    friend void KFontRequester_DisconnectNotify(KFontRequester* self, const QMetaMethod* signal);
    friend void KFontRequester_SuperDisconnectNotify(KFontRequester* self, const QMetaMethod* signal);
    friend void KFontRequester_UpdateMicroFocus(KFontRequester* self);
    friend void KFontRequester_SuperUpdateMicroFocus(KFontRequester* self);
    friend void KFontRequester_Create(KFontRequester* self);
    friend void KFontRequester_SuperCreate(KFontRequester* self);
    friend void KFontRequester_Destroy(KFontRequester* self);
    friend void KFontRequester_SuperDestroy(KFontRequester* self);
    friend bool KFontRequester_FocusNextChild(KFontRequester* self);
    friend bool KFontRequester_SuperFocusNextChild(KFontRequester* self);
    friend bool KFontRequester_FocusPreviousChild(KFontRequester* self);
    friend bool KFontRequester_SuperFocusPreviousChild(KFontRequester* self);
    friend QObject* KFontRequester_Sender(const KFontRequester* self);
    friend QObject* KFontRequester_SuperSender(const KFontRequester* self);
    friend int KFontRequester_SenderSignalIndex(const KFontRequester* self);
    friend int KFontRequester_SuperSenderSignalIndex(const KFontRequester* self);
    friend int KFontRequester_Receivers(const KFontRequester* self, const char* signal);
    friend int KFontRequester_SuperReceivers(const KFontRequester* self, const char* signal);
    friend bool KFontRequester_IsSignalConnected(const KFontRequester* self, const QMetaMethod* signal);
    friend bool KFontRequester_SuperIsSignalConnected(const KFontRequester* self, const QMetaMethod* signal);
    friend double KFontRequester_GetDecodedMetricF(const KFontRequester* self, int metricA, int metricB);
    friend double KFontRequester_SuperGetDecodedMetricF(const KFontRequester* self, int metricA, int metricB);
};

#endif
