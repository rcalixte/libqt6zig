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
    using KFontRequester_Metacall_Callback = int (*)(KFontRequester*, int, int, void**);
    using KFontRequester_SetFont_Callback = void (*)(KFontRequester*, QFont*, bool);
    using KFontRequester_SetSampleText_Callback = void (*)(KFontRequester*, libqt_string);
    using KFontRequester_SetTitle_Callback = void (*)(KFontRequester*, libqt_string);
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

    ~VirtualKFontRequester() {
        kfontrequester_metacall_callback = nullptr;
        kfontrequester_setfont_callback = nullptr;
        kfontrequester_setsampletext_callback = nullptr;
        kfontrequester_settitle_callback = nullptr;
        kfontrequester_eventfilter_callback = nullptr;
        kfontrequester_devtype_callback = nullptr;
        kfontrequester_setvisible_callback = nullptr;
        kfontrequester_sizehint_callback = nullptr;
        kfontrequester_minimumsizehint_callback = nullptr;
        kfontrequester_heightforwidth_callback = nullptr;
        kfontrequester_hasheightforwidth_callback = nullptr;
        kfontrequester_paintengine_callback = nullptr;
        kfontrequester_event_callback = nullptr;
        kfontrequester_mousepressevent_callback = nullptr;
        kfontrequester_mousereleaseevent_callback = nullptr;
        kfontrequester_mousedoubleclickevent_callback = nullptr;
        kfontrequester_mousemoveevent_callback = nullptr;
        kfontrequester_wheelevent_callback = nullptr;
        kfontrequester_keypressevent_callback = nullptr;
        kfontrequester_keyreleaseevent_callback = nullptr;
        kfontrequester_focusinevent_callback = nullptr;
        kfontrequester_focusoutevent_callback = nullptr;
        kfontrequester_enterevent_callback = nullptr;
        kfontrequester_leaveevent_callback = nullptr;
        kfontrequester_paintevent_callback = nullptr;
        kfontrequester_moveevent_callback = nullptr;
        kfontrequester_resizeevent_callback = nullptr;
        kfontrequester_closeevent_callback = nullptr;
        kfontrequester_contextmenuevent_callback = nullptr;
        kfontrequester_tabletevent_callback = nullptr;
        kfontrequester_actionevent_callback = nullptr;
        kfontrequester_dragenterevent_callback = nullptr;
        kfontrequester_dragmoveevent_callback = nullptr;
        kfontrequester_dragleaveevent_callback = nullptr;
        kfontrequester_dropevent_callback = nullptr;
        kfontrequester_showevent_callback = nullptr;
        kfontrequester_hideevent_callback = nullptr;
        kfontrequester_nativeevent_callback = nullptr;
        kfontrequester_changeevent_callback = nullptr;
        kfontrequester_metric_callback = nullptr;
        kfontrequester_initpainter_callback = nullptr;
        kfontrequester_redirected_callback = nullptr;
        kfontrequester_sharedpainter_callback = nullptr;
        kfontrequester_inputmethodevent_callback = nullptr;
        kfontrequester_inputmethodquery_callback = nullptr;
        kfontrequester_focusnextprevchild_callback = nullptr;
        kfontrequester_timerevent_callback = nullptr;
        kfontrequester_childevent_callback = nullptr;
        kfontrequester_customevent_callback = nullptr;
        kfontrequester_connectnotify_callback = nullptr;
        kfontrequester_disconnectnotify_callback = nullptr;
        kfontrequester_updatemicrofocus_callback = nullptr;
        kfontrequester_create_callback = nullptr;
        kfontrequester_destroy_callback = nullptr;
        kfontrequester_focusnextchild_callback = nullptr;
        kfontrequester_focuspreviouschild_callback = nullptr;
        kfontrequester_sender_callback = nullptr;
        kfontrequester_sendersignalindex_callback = nullptr;
        kfontrequester_receivers_callback = nullptr;
        kfontrequester_issignalconnected_callback = nullptr;
        kfontrequester_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfontrequester_metacall_isbase) {
            kfontrequester_metacall_isbase = false;
            return KFontRequester::qt_metacall(param1, param2, param3);
        } else if (kfontrequester_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kfontrequester_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KFontRequester::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& font, bool onlyFixed) override {
        if (kfontrequester_setfont_isbase) {
            kfontrequester_setfont_isbase = false;
            KFontRequester::setFont(font, onlyFixed);
        } else if (kfontrequester_setfont_callback != nullptr) {
            const QFont& font_ret = font;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&font_ret);
            bool cbval2 = onlyFixed;

            kfontrequester_setfont_callback(this, cbval1, cbval2);
        } else {
            KFontRequester::setFont(font, onlyFixed);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSampleText(const QString& text) override {
        if (kfontrequester_setsampletext_isbase) {
            kfontrequester_setsampletext_isbase = false;
            KFontRequester::setSampleText(text);
        } else if (kfontrequester_setsampletext_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            kfontrequester_setsampletext_callback(this, cbval1);
        } else {
            KFontRequester::setSampleText(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTitle(const QString& title) override {
        if (kfontrequester_settitle_isbase) {
            kfontrequester_settitle_isbase = false;
            KFontRequester::setTitle(title);
        } else if (kfontrequester_settitle_callback != nullptr) {
            const QString title_ret = title;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray title_b = title_ret.toUtf8();
            libqt_string title_str;
            title_str.len = title_b.length();
            title_str.data = static_cast<const char*>(malloc(title_str.len + 1));
            memcpy((void*)title_str.data, title_b.data(), title_str.len);
            ((char*)title_str.data)[title_str.len] = '\0';
            libqt_string cbval1 = title_str;

            kfontrequester_settitle_callback(this, cbval1);
        } else {
            KFontRequester::setTitle(title);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfontrequester_eventfilter_isbase) {
            kfontrequester_eventfilter_isbase = false;
            return KFontRequester::eventFilter(watched, event);
        } else if (kfontrequester_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kfontrequester_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KFontRequester::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kfontrequester_devtype_isbase) {
            kfontrequester_devtype_isbase = false;
            return KFontRequester::devType();
        } else if (kfontrequester_devtype_callback != nullptr) {
            int callback_ret = kfontrequester_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFontRequester::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kfontrequester_setvisible_isbase) {
            kfontrequester_setvisible_isbase = false;
            KFontRequester::setVisible(visible);
        } else if (kfontrequester_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kfontrequester_setvisible_callback(this, cbval1);
        } else {
            KFontRequester::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kfontrequester_sizehint_isbase) {
            kfontrequester_sizehint_isbase = false;
            return KFontRequester::sizeHint();
        } else if (kfontrequester_sizehint_callback != nullptr) {
            QSize* callback_ret = kfontrequester_sizehint_callback();
            return *callback_ret;
        } else {
            return KFontRequester::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kfontrequester_minimumsizehint_isbase) {
            kfontrequester_minimumsizehint_isbase = false;
            return KFontRequester::minimumSizeHint();
        } else if (kfontrequester_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kfontrequester_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KFontRequester::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kfontrequester_heightforwidth_isbase) {
            kfontrequester_heightforwidth_isbase = false;
            return KFontRequester::heightForWidth(param1);
        } else if (kfontrequester_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kfontrequester_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFontRequester::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kfontrequester_hasheightforwidth_isbase) {
            kfontrequester_hasheightforwidth_isbase = false;
            return KFontRequester::hasHeightForWidth();
        } else if (kfontrequester_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kfontrequester_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KFontRequester::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kfontrequester_paintengine_isbase) {
            kfontrequester_paintengine_isbase = false;
            return KFontRequester::paintEngine();
        } else if (kfontrequester_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kfontrequester_paintengine_callback();
            return callback_ret;
        } else {
            return KFontRequester::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfontrequester_event_isbase) {
            kfontrequester_event_isbase = false;
            return KFontRequester::event(event);
        } else if (kfontrequester_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kfontrequester_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFontRequester::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kfontrequester_mousepressevent_isbase) {
            kfontrequester_mousepressevent_isbase = false;
            KFontRequester::mousePressEvent(event);
        } else if (kfontrequester_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfontrequester_mousepressevent_callback(this, cbval1);
        } else {
            KFontRequester::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kfontrequester_mousereleaseevent_isbase) {
            kfontrequester_mousereleaseevent_isbase = false;
            KFontRequester::mouseReleaseEvent(event);
        } else if (kfontrequester_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfontrequester_mousereleaseevent_callback(this, cbval1);
        } else {
            KFontRequester::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kfontrequester_mousedoubleclickevent_isbase) {
            kfontrequester_mousedoubleclickevent_isbase = false;
            KFontRequester::mouseDoubleClickEvent(event);
        } else if (kfontrequester_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfontrequester_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KFontRequester::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kfontrequester_mousemoveevent_isbase) {
            kfontrequester_mousemoveevent_isbase = false;
            KFontRequester::mouseMoveEvent(event);
        } else if (kfontrequester_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kfontrequester_mousemoveevent_callback(this, cbval1);
        } else {
            KFontRequester::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kfontrequester_wheelevent_isbase) {
            kfontrequester_wheelevent_isbase = false;
            KFontRequester::wheelEvent(event);
        } else if (kfontrequester_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kfontrequester_wheelevent_callback(this, cbval1);
        } else {
            KFontRequester::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kfontrequester_keypressevent_isbase) {
            kfontrequester_keypressevent_isbase = false;
            KFontRequester::keyPressEvent(event);
        } else if (kfontrequester_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kfontrequester_keypressevent_callback(this, cbval1);
        } else {
            KFontRequester::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kfontrequester_keyreleaseevent_isbase) {
            kfontrequester_keyreleaseevent_isbase = false;
            KFontRequester::keyReleaseEvent(event);
        } else if (kfontrequester_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kfontrequester_keyreleaseevent_callback(this, cbval1);
        } else {
            KFontRequester::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kfontrequester_focusinevent_isbase) {
            kfontrequester_focusinevent_isbase = false;
            KFontRequester::focusInEvent(event);
        } else if (kfontrequester_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kfontrequester_focusinevent_callback(this, cbval1);
        } else {
            KFontRequester::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kfontrequester_focusoutevent_isbase) {
            kfontrequester_focusoutevent_isbase = false;
            KFontRequester::focusOutEvent(event);
        } else if (kfontrequester_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kfontrequester_focusoutevent_callback(this, cbval1);
        } else {
            KFontRequester::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kfontrequester_enterevent_isbase) {
            kfontrequester_enterevent_isbase = false;
            KFontRequester::enterEvent(event);
        } else if (kfontrequester_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kfontrequester_enterevent_callback(this, cbval1);
        } else {
            KFontRequester::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kfontrequester_leaveevent_isbase) {
            kfontrequester_leaveevent_isbase = false;
            KFontRequester::leaveEvent(event);
        } else if (kfontrequester_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kfontrequester_leaveevent_callback(this, cbval1);
        } else {
            KFontRequester::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kfontrequester_paintevent_isbase) {
            kfontrequester_paintevent_isbase = false;
            KFontRequester::paintEvent(event);
        } else if (kfontrequester_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kfontrequester_paintevent_callback(this, cbval1);
        } else {
            KFontRequester::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kfontrequester_moveevent_isbase) {
            kfontrequester_moveevent_isbase = false;
            KFontRequester::moveEvent(event);
        } else if (kfontrequester_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kfontrequester_moveevent_callback(this, cbval1);
        } else {
            KFontRequester::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kfontrequester_resizeevent_isbase) {
            kfontrequester_resizeevent_isbase = false;
            KFontRequester::resizeEvent(event);
        } else if (kfontrequester_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kfontrequester_resizeevent_callback(this, cbval1);
        } else {
            KFontRequester::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kfontrequester_closeevent_isbase) {
            kfontrequester_closeevent_isbase = false;
            KFontRequester::closeEvent(event);
        } else if (kfontrequester_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kfontrequester_closeevent_callback(this, cbval1);
        } else {
            KFontRequester::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kfontrequester_contextmenuevent_isbase) {
            kfontrequester_contextmenuevent_isbase = false;
            KFontRequester::contextMenuEvent(event);
        } else if (kfontrequester_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kfontrequester_contextmenuevent_callback(this, cbval1);
        } else {
            KFontRequester::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kfontrequester_tabletevent_isbase) {
            kfontrequester_tabletevent_isbase = false;
            KFontRequester::tabletEvent(event);
        } else if (kfontrequester_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kfontrequester_tabletevent_callback(this, cbval1);
        } else {
            KFontRequester::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kfontrequester_actionevent_isbase) {
            kfontrequester_actionevent_isbase = false;
            KFontRequester::actionEvent(event);
        } else if (kfontrequester_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kfontrequester_actionevent_callback(this, cbval1);
        } else {
            KFontRequester::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kfontrequester_dragenterevent_isbase) {
            kfontrequester_dragenterevent_isbase = false;
            KFontRequester::dragEnterEvent(event);
        } else if (kfontrequester_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kfontrequester_dragenterevent_callback(this, cbval1);
        } else {
            KFontRequester::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kfontrequester_dragmoveevent_isbase) {
            kfontrequester_dragmoveevent_isbase = false;
            KFontRequester::dragMoveEvent(event);
        } else if (kfontrequester_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kfontrequester_dragmoveevent_callback(this, cbval1);
        } else {
            KFontRequester::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kfontrequester_dragleaveevent_isbase) {
            kfontrequester_dragleaveevent_isbase = false;
            KFontRequester::dragLeaveEvent(event);
        } else if (kfontrequester_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kfontrequester_dragleaveevent_callback(this, cbval1);
        } else {
            KFontRequester::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kfontrequester_dropevent_isbase) {
            kfontrequester_dropevent_isbase = false;
            KFontRequester::dropEvent(event);
        } else if (kfontrequester_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kfontrequester_dropevent_callback(this, cbval1);
        } else {
            KFontRequester::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kfontrequester_showevent_isbase) {
            kfontrequester_showevent_isbase = false;
            KFontRequester::showEvent(event);
        } else if (kfontrequester_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kfontrequester_showevent_callback(this, cbval1);
        } else {
            KFontRequester::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kfontrequester_hideevent_isbase) {
            kfontrequester_hideevent_isbase = false;
            KFontRequester::hideEvent(event);
        } else if (kfontrequester_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kfontrequester_hideevent_callback(this, cbval1);
        } else {
            KFontRequester::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kfontrequester_nativeevent_isbase) {
            kfontrequester_nativeevent_isbase = false;
            return KFontRequester::nativeEvent(eventType, message, result);
        } else if (kfontrequester_nativeevent_callback != nullptr) {
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

            bool callback_ret = kfontrequester_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KFontRequester::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kfontrequester_changeevent_isbase) {
            kfontrequester_changeevent_isbase = false;
            KFontRequester::changeEvent(param1);
        } else if (kfontrequester_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kfontrequester_changeevent_callback(this, cbval1);
        } else {
            KFontRequester::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kfontrequester_metric_isbase) {
            kfontrequester_metric_isbase = false;
            return KFontRequester::metric(param1);
        } else if (kfontrequester_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kfontrequester_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFontRequester::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kfontrequester_initpainter_isbase) {
            kfontrequester_initpainter_isbase = false;
            KFontRequester::initPainter(painter);
        } else if (kfontrequester_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kfontrequester_initpainter_callback(this, cbval1);
        } else {
            KFontRequester::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kfontrequester_redirected_isbase) {
            kfontrequester_redirected_isbase = false;
            return KFontRequester::redirected(offset);
        } else if (kfontrequester_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kfontrequester_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFontRequester::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kfontrequester_sharedpainter_isbase) {
            kfontrequester_sharedpainter_isbase = false;
            return KFontRequester::sharedPainter();
        } else if (kfontrequester_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kfontrequester_sharedpainter_callback();
            return callback_ret;
        } else {
            return KFontRequester::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kfontrequester_inputmethodevent_isbase) {
            kfontrequester_inputmethodevent_isbase = false;
            KFontRequester::inputMethodEvent(param1);
        } else if (kfontrequester_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kfontrequester_inputmethodevent_callback(this, cbval1);
        } else {
            KFontRequester::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kfontrequester_inputmethodquery_isbase) {
            kfontrequester_inputmethodquery_isbase = false;
            return KFontRequester::inputMethodQuery(param1);
        } else if (kfontrequester_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kfontrequester_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KFontRequester::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kfontrequester_focusnextprevchild_isbase) {
            kfontrequester_focusnextprevchild_isbase = false;
            return KFontRequester::focusNextPrevChild(next);
        } else if (kfontrequester_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kfontrequester_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFontRequester::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfontrequester_timerevent_isbase) {
            kfontrequester_timerevent_isbase = false;
            KFontRequester::timerEvent(event);
        } else if (kfontrequester_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kfontrequester_timerevent_callback(this, cbval1);
        } else {
            KFontRequester::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfontrequester_childevent_isbase) {
            kfontrequester_childevent_isbase = false;
            KFontRequester::childEvent(event);
        } else if (kfontrequester_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kfontrequester_childevent_callback(this, cbval1);
        } else {
            KFontRequester::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfontrequester_customevent_isbase) {
            kfontrequester_customevent_isbase = false;
            KFontRequester::customEvent(event);
        } else if (kfontrequester_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kfontrequester_customevent_callback(this, cbval1);
        } else {
            KFontRequester::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfontrequester_connectnotify_isbase) {
            kfontrequester_connectnotify_isbase = false;
            KFontRequester::connectNotify(signal);
        } else if (kfontrequester_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfontrequester_connectnotify_callback(this, cbval1);
        } else {
            KFontRequester::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfontrequester_disconnectnotify_isbase) {
            kfontrequester_disconnectnotify_isbase = false;
            KFontRequester::disconnectNotify(signal);
        } else if (kfontrequester_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfontrequester_disconnectnotify_callback(this, cbval1);
        } else {
            KFontRequester::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kfontrequester_updatemicrofocus_isbase) {
            kfontrequester_updatemicrofocus_isbase = false;
            KFontRequester::updateMicroFocus();
        } else if (kfontrequester_updatemicrofocus_callback != nullptr) {
            kfontrequester_updatemicrofocus_callback();
        } else {
            KFontRequester::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kfontrequester_create_isbase) {
            kfontrequester_create_isbase = false;
            KFontRequester::create();
        } else if (kfontrequester_create_callback != nullptr) {
            kfontrequester_create_callback();
        } else {
            KFontRequester::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kfontrequester_destroy_isbase) {
            kfontrequester_destroy_isbase = false;
            KFontRequester::destroy();
        } else if (kfontrequester_destroy_callback != nullptr) {
            kfontrequester_destroy_callback();
        } else {
            KFontRequester::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kfontrequester_focusnextchild_isbase) {
            kfontrequester_focusnextchild_isbase = false;
            return KFontRequester::focusNextChild();
        } else if (kfontrequester_focusnextchild_callback != nullptr) {
            bool callback_ret = kfontrequester_focusnextchild_callback();
            return callback_ret;
        } else {
            return KFontRequester::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kfontrequester_focuspreviouschild_isbase) {
            kfontrequester_focuspreviouschild_isbase = false;
            return KFontRequester::focusPreviousChild();
        } else if (kfontrequester_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kfontrequester_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KFontRequester::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfontrequester_sender_isbase) {
            kfontrequester_sender_isbase = false;
            return KFontRequester::sender();
        } else if (kfontrequester_sender_callback != nullptr) {
            QObject* callback_ret = kfontrequester_sender_callback();
            return callback_ret;
        } else {
            return KFontRequester::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfontrequester_sendersignalindex_isbase) {
            kfontrequester_sendersignalindex_isbase = false;
            return KFontRequester::senderSignalIndex();
        } else if (kfontrequester_sendersignalindex_callback != nullptr) {
            int callback_ret = kfontrequester_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFontRequester::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfontrequester_receivers_isbase) {
            kfontrequester_receivers_isbase = false;
            return KFontRequester::receivers(signal);
        } else if (kfontrequester_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kfontrequester_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFontRequester::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfontrequester_issignalconnected_isbase) {
            kfontrequester_issignalconnected_isbase = false;
            return KFontRequester::isSignalConnected(signal);
        } else if (kfontrequester_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kfontrequester_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFontRequester::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kfontrequester_getdecodedmetricf_isbase) {
            kfontrequester_getdecodedmetricf_isbase = false;
            return KFontRequester::getDecodedMetricF(metricA, metricB);
        } else if (kfontrequester_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kfontrequester_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KFontRequester::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KFontRequester_EventFilter(KFontRequester* self, QObject* watched, QEvent* event);
    friend bool KFontRequester_QBaseEventFilter(KFontRequester* self, QObject* watched, QEvent* event);
    friend bool KFontRequester_Event(KFontRequester* self, QEvent* event);
    friend bool KFontRequester_QBaseEvent(KFontRequester* self, QEvent* event);
    friend void KFontRequester_MousePressEvent(KFontRequester* self, QMouseEvent* event);
    friend void KFontRequester_QBaseMousePressEvent(KFontRequester* self, QMouseEvent* event);
    friend void KFontRequester_MouseReleaseEvent(KFontRequester* self, QMouseEvent* event);
    friend void KFontRequester_QBaseMouseReleaseEvent(KFontRequester* self, QMouseEvent* event);
    friend void KFontRequester_MouseDoubleClickEvent(KFontRequester* self, QMouseEvent* event);
    friend void KFontRequester_QBaseMouseDoubleClickEvent(KFontRequester* self, QMouseEvent* event);
    friend void KFontRequester_MouseMoveEvent(KFontRequester* self, QMouseEvent* event);
    friend void KFontRequester_QBaseMouseMoveEvent(KFontRequester* self, QMouseEvent* event);
    friend void KFontRequester_WheelEvent(KFontRequester* self, QWheelEvent* event);
    friend void KFontRequester_QBaseWheelEvent(KFontRequester* self, QWheelEvent* event);
    friend void KFontRequester_KeyPressEvent(KFontRequester* self, QKeyEvent* event);
    friend void KFontRequester_QBaseKeyPressEvent(KFontRequester* self, QKeyEvent* event);
    friend void KFontRequester_KeyReleaseEvent(KFontRequester* self, QKeyEvent* event);
    friend void KFontRequester_QBaseKeyReleaseEvent(KFontRequester* self, QKeyEvent* event);
    friend void KFontRequester_FocusInEvent(KFontRequester* self, QFocusEvent* event);
    friend void KFontRequester_QBaseFocusInEvent(KFontRequester* self, QFocusEvent* event);
    friend void KFontRequester_FocusOutEvent(KFontRequester* self, QFocusEvent* event);
    friend void KFontRequester_QBaseFocusOutEvent(KFontRequester* self, QFocusEvent* event);
    friend void KFontRequester_EnterEvent(KFontRequester* self, QEnterEvent* event);
    friend void KFontRequester_QBaseEnterEvent(KFontRequester* self, QEnterEvent* event);
    friend void KFontRequester_LeaveEvent(KFontRequester* self, QEvent* event);
    friend void KFontRequester_QBaseLeaveEvent(KFontRequester* self, QEvent* event);
    friend void KFontRequester_PaintEvent(KFontRequester* self, QPaintEvent* event);
    friend void KFontRequester_QBasePaintEvent(KFontRequester* self, QPaintEvent* event);
    friend void KFontRequester_MoveEvent(KFontRequester* self, QMoveEvent* event);
    friend void KFontRequester_QBaseMoveEvent(KFontRequester* self, QMoveEvent* event);
    friend void KFontRequester_ResizeEvent(KFontRequester* self, QResizeEvent* event);
    friend void KFontRequester_QBaseResizeEvent(KFontRequester* self, QResizeEvent* event);
    friend void KFontRequester_CloseEvent(KFontRequester* self, QCloseEvent* event);
    friend void KFontRequester_QBaseCloseEvent(KFontRequester* self, QCloseEvent* event);
    friend void KFontRequester_ContextMenuEvent(KFontRequester* self, QContextMenuEvent* event);
    friend void KFontRequester_QBaseContextMenuEvent(KFontRequester* self, QContextMenuEvent* event);
    friend void KFontRequester_TabletEvent(KFontRequester* self, QTabletEvent* event);
    friend void KFontRequester_QBaseTabletEvent(KFontRequester* self, QTabletEvent* event);
    friend void KFontRequester_ActionEvent(KFontRequester* self, QActionEvent* event);
    friend void KFontRequester_QBaseActionEvent(KFontRequester* self, QActionEvent* event);
    friend void KFontRequester_DragEnterEvent(KFontRequester* self, QDragEnterEvent* event);
    friend void KFontRequester_QBaseDragEnterEvent(KFontRequester* self, QDragEnterEvent* event);
    friend void KFontRequester_DragMoveEvent(KFontRequester* self, QDragMoveEvent* event);
    friend void KFontRequester_QBaseDragMoveEvent(KFontRequester* self, QDragMoveEvent* event);
    friend void KFontRequester_DragLeaveEvent(KFontRequester* self, QDragLeaveEvent* event);
    friend void KFontRequester_QBaseDragLeaveEvent(KFontRequester* self, QDragLeaveEvent* event);
    friend void KFontRequester_DropEvent(KFontRequester* self, QDropEvent* event);
    friend void KFontRequester_QBaseDropEvent(KFontRequester* self, QDropEvent* event);
    friend void KFontRequester_ShowEvent(KFontRequester* self, QShowEvent* event);
    friend void KFontRequester_QBaseShowEvent(KFontRequester* self, QShowEvent* event);
    friend void KFontRequester_HideEvent(KFontRequester* self, QHideEvent* event);
    friend void KFontRequester_QBaseHideEvent(KFontRequester* self, QHideEvent* event);
    friend bool KFontRequester_NativeEvent(KFontRequester* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KFontRequester_QBaseNativeEvent(KFontRequester* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KFontRequester_ChangeEvent(KFontRequester* self, QEvent* param1);
    friend void KFontRequester_QBaseChangeEvent(KFontRequester* self, QEvent* param1);
    friend int KFontRequester_Metric(const KFontRequester* self, int param1);
    friend int KFontRequester_QBaseMetric(const KFontRequester* self, int param1);
    friend void KFontRequester_InitPainter(const KFontRequester* self, QPainter* painter);
    friend void KFontRequester_QBaseInitPainter(const KFontRequester* self, QPainter* painter);
    friend QPaintDevice* KFontRequester_Redirected(const KFontRequester* self, QPoint* offset);
    friend QPaintDevice* KFontRequester_QBaseRedirected(const KFontRequester* self, QPoint* offset);
    friend QPainter* KFontRequester_SharedPainter(const KFontRequester* self);
    friend QPainter* KFontRequester_QBaseSharedPainter(const KFontRequester* self);
    friend void KFontRequester_InputMethodEvent(KFontRequester* self, QInputMethodEvent* param1);
    friend void KFontRequester_QBaseInputMethodEvent(KFontRequester* self, QInputMethodEvent* param1);
    friend bool KFontRequester_FocusNextPrevChild(KFontRequester* self, bool next);
    friend bool KFontRequester_QBaseFocusNextPrevChild(KFontRequester* self, bool next);
    friend void KFontRequester_TimerEvent(KFontRequester* self, QTimerEvent* event);
    friend void KFontRequester_QBaseTimerEvent(KFontRequester* self, QTimerEvent* event);
    friend void KFontRequester_ChildEvent(KFontRequester* self, QChildEvent* event);
    friend void KFontRequester_QBaseChildEvent(KFontRequester* self, QChildEvent* event);
    friend void KFontRequester_CustomEvent(KFontRequester* self, QEvent* event);
    friend void KFontRequester_QBaseCustomEvent(KFontRequester* self, QEvent* event);
    friend void KFontRequester_ConnectNotify(KFontRequester* self, const QMetaMethod* signal);
    friend void KFontRequester_QBaseConnectNotify(KFontRequester* self, const QMetaMethod* signal);
    friend void KFontRequester_DisconnectNotify(KFontRequester* self, const QMetaMethod* signal);
    friend void KFontRequester_QBaseDisconnectNotify(KFontRequester* self, const QMetaMethod* signal);
    friend void KFontRequester_UpdateMicroFocus(KFontRequester* self);
    friend void KFontRequester_QBaseUpdateMicroFocus(KFontRequester* self);
    friend void KFontRequester_Create(KFontRequester* self);
    friend void KFontRequester_QBaseCreate(KFontRequester* self);
    friend void KFontRequester_Destroy(KFontRequester* self);
    friend void KFontRequester_QBaseDestroy(KFontRequester* self);
    friend bool KFontRequester_FocusNextChild(KFontRequester* self);
    friend bool KFontRequester_QBaseFocusNextChild(KFontRequester* self);
    friend bool KFontRequester_FocusPreviousChild(KFontRequester* self);
    friend bool KFontRequester_QBaseFocusPreviousChild(KFontRequester* self);
    friend QObject* KFontRequester_Sender(const KFontRequester* self);
    friend QObject* KFontRequester_QBaseSender(const KFontRequester* self);
    friend int KFontRequester_SenderSignalIndex(const KFontRequester* self);
    friend int KFontRequester_QBaseSenderSignalIndex(const KFontRequester* self);
    friend int KFontRequester_Receivers(const KFontRequester* self, const char* signal);
    friend int KFontRequester_QBaseReceivers(const KFontRequester* self, const char* signal);
    friend bool KFontRequester_IsSignalConnected(const KFontRequester* self, const QMetaMethod* signal);
    friend bool KFontRequester_QBaseIsSignalConnected(const KFontRequester* self, const QMetaMethod* signal);
    friend double KFontRequester_GetDecodedMetricF(const KFontRequester* self, int metricA, int metricB);
    friend double KFontRequester_QBaseGetDecodedMetricF(const KFontRequester* self, int metricA, int metricB);
};

#endif
