#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPIXMAPSEQUENCEWIDGET_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPIXMAPSEQUENCEWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPixmapSequenceWidget so that we can call protected methods
class VirtualKPixmapSequenceWidget final : public KPixmapSequenceWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualKPixmapSequenceWidget = true;

    // Virtual class public types (including callbacks)
    using KPixmapSequenceWidget_Metacall_Callback = int (*)(KPixmapSequenceWidget*, int, int, void**);
    using KPixmapSequenceWidget_SizeHint_Callback = QSize* (*)();
    using KPixmapSequenceWidget_DevType_Callback = int (*)();
    using KPixmapSequenceWidget_SetVisible_Callback = void (*)(KPixmapSequenceWidget*, bool);
    using KPixmapSequenceWidget_MinimumSizeHint_Callback = QSize* (*)();
    using KPixmapSequenceWidget_HeightForWidth_Callback = int (*)(const KPixmapSequenceWidget*, int);
    using KPixmapSequenceWidget_HasHeightForWidth_Callback = bool (*)();
    using KPixmapSequenceWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using KPixmapSequenceWidget_Event_Callback = bool (*)(KPixmapSequenceWidget*, QEvent*);
    using KPixmapSequenceWidget_MousePressEvent_Callback = void (*)(KPixmapSequenceWidget*, QMouseEvent*);
    using KPixmapSequenceWidget_MouseReleaseEvent_Callback = void (*)(KPixmapSequenceWidget*, QMouseEvent*);
    using KPixmapSequenceWidget_MouseDoubleClickEvent_Callback = void (*)(KPixmapSequenceWidget*, QMouseEvent*);
    using KPixmapSequenceWidget_MouseMoveEvent_Callback = void (*)(KPixmapSequenceWidget*, QMouseEvent*);
    using KPixmapSequenceWidget_WheelEvent_Callback = void (*)(KPixmapSequenceWidget*, QWheelEvent*);
    using KPixmapSequenceWidget_KeyPressEvent_Callback = void (*)(KPixmapSequenceWidget*, QKeyEvent*);
    using KPixmapSequenceWidget_KeyReleaseEvent_Callback = void (*)(KPixmapSequenceWidget*, QKeyEvent*);
    using KPixmapSequenceWidget_FocusInEvent_Callback = void (*)(KPixmapSequenceWidget*, QFocusEvent*);
    using KPixmapSequenceWidget_FocusOutEvent_Callback = void (*)(KPixmapSequenceWidget*, QFocusEvent*);
    using KPixmapSequenceWidget_EnterEvent_Callback = void (*)(KPixmapSequenceWidget*, QEnterEvent*);
    using KPixmapSequenceWidget_LeaveEvent_Callback = void (*)(KPixmapSequenceWidget*, QEvent*);
    using KPixmapSequenceWidget_PaintEvent_Callback = void (*)(KPixmapSequenceWidget*, QPaintEvent*);
    using KPixmapSequenceWidget_MoveEvent_Callback = void (*)(KPixmapSequenceWidget*, QMoveEvent*);
    using KPixmapSequenceWidget_ResizeEvent_Callback = void (*)(KPixmapSequenceWidget*, QResizeEvent*);
    using KPixmapSequenceWidget_CloseEvent_Callback = void (*)(KPixmapSequenceWidget*, QCloseEvent*);
    using KPixmapSequenceWidget_ContextMenuEvent_Callback = void (*)(KPixmapSequenceWidget*, QContextMenuEvent*);
    using KPixmapSequenceWidget_TabletEvent_Callback = void (*)(KPixmapSequenceWidget*, QTabletEvent*);
    using KPixmapSequenceWidget_ActionEvent_Callback = void (*)(KPixmapSequenceWidget*, QActionEvent*);
    using KPixmapSequenceWidget_DragEnterEvent_Callback = void (*)(KPixmapSequenceWidget*, QDragEnterEvent*);
    using KPixmapSequenceWidget_DragMoveEvent_Callback = void (*)(KPixmapSequenceWidget*, QDragMoveEvent*);
    using KPixmapSequenceWidget_DragLeaveEvent_Callback = void (*)(KPixmapSequenceWidget*, QDragLeaveEvent*);
    using KPixmapSequenceWidget_DropEvent_Callback = void (*)(KPixmapSequenceWidget*, QDropEvent*);
    using KPixmapSequenceWidget_ShowEvent_Callback = void (*)(KPixmapSequenceWidget*, QShowEvent*);
    using KPixmapSequenceWidget_HideEvent_Callback = void (*)(KPixmapSequenceWidget*, QHideEvent*);
    using KPixmapSequenceWidget_NativeEvent_Callback = bool (*)(KPixmapSequenceWidget*, libqt_string, void*, intptr_t*);
    using KPixmapSequenceWidget_ChangeEvent_Callback = void (*)(KPixmapSequenceWidget*, QEvent*);
    using KPixmapSequenceWidget_Metric_Callback = int (*)(const KPixmapSequenceWidget*, int);
    using KPixmapSequenceWidget_InitPainter_Callback = void (*)(const KPixmapSequenceWidget*, QPainter*);
    using KPixmapSequenceWidget_Redirected_Callback = QPaintDevice* (*)(const KPixmapSequenceWidget*, QPoint*);
    using KPixmapSequenceWidget_SharedPainter_Callback = QPainter* (*)();
    using KPixmapSequenceWidget_InputMethodEvent_Callback = void (*)(KPixmapSequenceWidget*, QInputMethodEvent*);
    using KPixmapSequenceWidget_InputMethodQuery_Callback = QVariant* (*)(const KPixmapSequenceWidget*, int);
    using KPixmapSequenceWidget_FocusNextPrevChild_Callback = bool (*)(KPixmapSequenceWidget*, bool);
    using KPixmapSequenceWidget_EventFilter_Callback = bool (*)(KPixmapSequenceWidget*, QObject*, QEvent*);
    using KPixmapSequenceWidget_TimerEvent_Callback = void (*)(KPixmapSequenceWidget*, QTimerEvent*);
    using KPixmapSequenceWidget_ChildEvent_Callback = void (*)(KPixmapSequenceWidget*, QChildEvent*);
    using KPixmapSequenceWidget_CustomEvent_Callback = void (*)(KPixmapSequenceWidget*, QEvent*);
    using KPixmapSequenceWidget_ConnectNotify_Callback = void (*)(KPixmapSequenceWidget*, QMetaMethod*);
    using KPixmapSequenceWidget_DisconnectNotify_Callback = void (*)(KPixmapSequenceWidget*, QMetaMethod*);
    using KPixmapSequenceWidget_UpdateMicroFocus_Callback = void (*)();
    using KPixmapSequenceWidget_Create_Callback = void (*)();
    using KPixmapSequenceWidget_Destroy_Callback = void (*)();
    using KPixmapSequenceWidget_FocusNextChild_Callback = bool (*)();
    using KPixmapSequenceWidget_FocusPreviousChild_Callback = bool (*)();
    using KPixmapSequenceWidget_Sender_Callback = QObject* (*)();
    using KPixmapSequenceWidget_SenderSignalIndex_Callback = int (*)();
    using KPixmapSequenceWidget_Receivers_Callback = int (*)(const KPixmapSequenceWidget*, const char*);
    using KPixmapSequenceWidget_IsSignalConnected_Callback = bool (*)(const KPixmapSequenceWidget*, QMetaMethod*);
    using KPixmapSequenceWidget_GetDecodedMetricF_Callback = double (*)(const KPixmapSequenceWidget*, int, int);

  protected:
    // Instance callback storage
    KPixmapSequenceWidget_Metacall_Callback kpixmapsequencewidget_metacall_callback = nullptr;
    KPixmapSequenceWidget_SizeHint_Callback kpixmapsequencewidget_sizehint_callback = nullptr;
    KPixmapSequenceWidget_DevType_Callback kpixmapsequencewidget_devtype_callback = nullptr;
    KPixmapSequenceWidget_SetVisible_Callback kpixmapsequencewidget_setvisible_callback = nullptr;
    KPixmapSequenceWidget_MinimumSizeHint_Callback kpixmapsequencewidget_minimumsizehint_callback = nullptr;
    KPixmapSequenceWidget_HeightForWidth_Callback kpixmapsequencewidget_heightforwidth_callback = nullptr;
    KPixmapSequenceWidget_HasHeightForWidth_Callback kpixmapsequencewidget_hasheightforwidth_callback = nullptr;
    KPixmapSequenceWidget_PaintEngine_Callback kpixmapsequencewidget_paintengine_callback = nullptr;
    KPixmapSequenceWidget_Event_Callback kpixmapsequencewidget_event_callback = nullptr;
    KPixmapSequenceWidget_MousePressEvent_Callback kpixmapsequencewidget_mousepressevent_callback = nullptr;
    KPixmapSequenceWidget_MouseReleaseEvent_Callback kpixmapsequencewidget_mousereleaseevent_callback = nullptr;
    KPixmapSequenceWidget_MouseDoubleClickEvent_Callback kpixmapsequencewidget_mousedoubleclickevent_callback = nullptr;
    KPixmapSequenceWidget_MouseMoveEvent_Callback kpixmapsequencewidget_mousemoveevent_callback = nullptr;
    KPixmapSequenceWidget_WheelEvent_Callback kpixmapsequencewidget_wheelevent_callback = nullptr;
    KPixmapSequenceWidget_KeyPressEvent_Callback kpixmapsequencewidget_keypressevent_callback = nullptr;
    KPixmapSequenceWidget_KeyReleaseEvent_Callback kpixmapsequencewidget_keyreleaseevent_callback = nullptr;
    KPixmapSequenceWidget_FocusInEvent_Callback kpixmapsequencewidget_focusinevent_callback = nullptr;
    KPixmapSequenceWidget_FocusOutEvent_Callback kpixmapsequencewidget_focusoutevent_callback = nullptr;
    KPixmapSequenceWidget_EnterEvent_Callback kpixmapsequencewidget_enterevent_callback = nullptr;
    KPixmapSequenceWidget_LeaveEvent_Callback kpixmapsequencewidget_leaveevent_callback = nullptr;
    KPixmapSequenceWidget_PaintEvent_Callback kpixmapsequencewidget_paintevent_callback = nullptr;
    KPixmapSequenceWidget_MoveEvent_Callback kpixmapsequencewidget_moveevent_callback = nullptr;
    KPixmapSequenceWidget_ResizeEvent_Callback kpixmapsequencewidget_resizeevent_callback = nullptr;
    KPixmapSequenceWidget_CloseEvent_Callback kpixmapsequencewidget_closeevent_callback = nullptr;
    KPixmapSequenceWidget_ContextMenuEvent_Callback kpixmapsequencewidget_contextmenuevent_callback = nullptr;
    KPixmapSequenceWidget_TabletEvent_Callback kpixmapsequencewidget_tabletevent_callback = nullptr;
    KPixmapSequenceWidget_ActionEvent_Callback kpixmapsequencewidget_actionevent_callback = nullptr;
    KPixmapSequenceWidget_DragEnterEvent_Callback kpixmapsequencewidget_dragenterevent_callback = nullptr;
    KPixmapSequenceWidget_DragMoveEvent_Callback kpixmapsequencewidget_dragmoveevent_callback = nullptr;
    KPixmapSequenceWidget_DragLeaveEvent_Callback kpixmapsequencewidget_dragleaveevent_callback = nullptr;
    KPixmapSequenceWidget_DropEvent_Callback kpixmapsequencewidget_dropevent_callback = nullptr;
    KPixmapSequenceWidget_ShowEvent_Callback kpixmapsequencewidget_showevent_callback = nullptr;
    KPixmapSequenceWidget_HideEvent_Callback kpixmapsequencewidget_hideevent_callback = nullptr;
    KPixmapSequenceWidget_NativeEvent_Callback kpixmapsequencewidget_nativeevent_callback = nullptr;
    KPixmapSequenceWidget_ChangeEvent_Callback kpixmapsequencewidget_changeevent_callback = nullptr;
    KPixmapSequenceWidget_Metric_Callback kpixmapsequencewidget_metric_callback = nullptr;
    KPixmapSequenceWidget_InitPainter_Callback kpixmapsequencewidget_initpainter_callback = nullptr;
    KPixmapSequenceWidget_Redirected_Callback kpixmapsequencewidget_redirected_callback = nullptr;
    KPixmapSequenceWidget_SharedPainter_Callback kpixmapsequencewidget_sharedpainter_callback = nullptr;
    KPixmapSequenceWidget_InputMethodEvent_Callback kpixmapsequencewidget_inputmethodevent_callback = nullptr;
    KPixmapSequenceWidget_InputMethodQuery_Callback kpixmapsequencewidget_inputmethodquery_callback = nullptr;
    KPixmapSequenceWidget_FocusNextPrevChild_Callback kpixmapsequencewidget_focusnextprevchild_callback = nullptr;
    KPixmapSequenceWidget_EventFilter_Callback kpixmapsequencewidget_eventfilter_callback = nullptr;
    KPixmapSequenceWidget_TimerEvent_Callback kpixmapsequencewidget_timerevent_callback = nullptr;
    KPixmapSequenceWidget_ChildEvent_Callback kpixmapsequencewidget_childevent_callback = nullptr;
    KPixmapSequenceWidget_CustomEvent_Callback kpixmapsequencewidget_customevent_callback = nullptr;
    KPixmapSequenceWidget_ConnectNotify_Callback kpixmapsequencewidget_connectnotify_callback = nullptr;
    KPixmapSequenceWidget_DisconnectNotify_Callback kpixmapsequencewidget_disconnectnotify_callback = nullptr;
    KPixmapSequenceWidget_UpdateMicroFocus_Callback kpixmapsequencewidget_updatemicrofocus_callback = nullptr;
    KPixmapSequenceWidget_Create_Callback kpixmapsequencewidget_create_callback = nullptr;
    KPixmapSequenceWidget_Destroy_Callback kpixmapsequencewidget_destroy_callback = nullptr;
    KPixmapSequenceWidget_FocusNextChild_Callback kpixmapsequencewidget_focusnextchild_callback = nullptr;
    KPixmapSequenceWidget_FocusPreviousChild_Callback kpixmapsequencewidget_focuspreviouschild_callback = nullptr;
    KPixmapSequenceWidget_Sender_Callback kpixmapsequencewidget_sender_callback = nullptr;
    KPixmapSequenceWidget_SenderSignalIndex_Callback kpixmapsequencewidget_sendersignalindex_callback = nullptr;
    KPixmapSequenceWidget_Receivers_Callback kpixmapsequencewidget_receivers_callback = nullptr;
    KPixmapSequenceWidget_IsSignalConnected_Callback kpixmapsequencewidget_issignalconnected_callback = nullptr;
    KPixmapSequenceWidget_GetDecodedMetricF_Callback kpixmapsequencewidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kpixmapsequencewidget_metacall_isbase = false;
    mutable bool kpixmapsequencewidget_sizehint_isbase = false;
    mutable bool kpixmapsequencewidget_devtype_isbase = false;
    mutable bool kpixmapsequencewidget_setvisible_isbase = false;
    mutable bool kpixmapsequencewidget_minimumsizehint_isbase = false;
    mutable bool kpixmapsequencewidget_heightforwidth_isbase = false;
    mutable bool kpixmapsequencewidget_hasheightforwidth_isbase = false;
    mutable bool kpixmapsequencewidget_paintengine_isbase = false;
    mutable bool kpixmapsequencewidget_event_isbase = false;
    mutable bool kpixmapsequencewidget_mousepressevent_isbase = false;
    mutable bool kpixmapsequencewidget_mousereleaseevent_isbase = false;
    mutable bool kpixmapsequencewidget_mousedoubleclickevent_isbase = false;
    mutable bool kpixmapsequencewidget_mousemoveevent_isbase = false;
    mutable bool kpixmapsequencewidget_wheelevent_isbase = false;
    mutable bool kpixmapsequencewidget_keypressevent_isbase = false;
    mutable bool kpixmapsequencewidget_keyreleaseevent_isbase = false;
    mutable bool kpixmapsequencewidget_focusinevent_isbase = false;
    mutable bool kpixmapsequencewidget_focusoutevent_isbase = false;
    mutable bool kpixmapsequencewidget_enterevent_isbase = false;
    mutable bool kpixmapsequencewidget_leaveevent_isbase = false;
    mutable bool kpixmapsequencewidget_paintevent_isbase = false;
    mutable bool kpixmapsequencewidget_moveevent_isbase = false;
    mutable bool kpixmapsequencewidget_resizeevent_isbase = false;
    mutable bool kpixmapsequencewidget_closeevent_isbase = false;
    mutable bool kpixmapsequencewidget_contextmenuevent_isbase = false;
    mutable bool kpixmapsequencewidget_tabletevent_isbase = false;
    mutable bool kpixmapsequencewidget_actionevent_isbase = false;
    mutable bool kpixmapsequencewidget_dragenterevent_isbase = false;
    mutable bool kpixmapsequencewidget_dragmoveevent_isbase = false;
    mutable bool kpixmapsequencewidget_dragleaveevent_isbase = false;
    mutable bool kpixmapsequencewidget_dropevent_isbase = false;
    mutable bool kpixmapsequencewidget_showevent_isbase = false;
    mutable bool kpixmapsequencewidget_hideevent_isbase = false;
    mutable bool kpixmapsequencewidget_nativeevent_isbase = false;
    mutable bool kpixmapsequencewidget_changeevent_isbase = false;
    mutable bool kpixmapsequencewidget_metric_isbase = false;
    mutable bool kpixmapsequencewidget_initpainter_isbase = false;
    mutable bool kpixmapsequencewidget_redirected_isbase = false;
    mutable bool kpixmapsequencewidget_sharedpainter_isbase = false;
    mutable bool kpixmapsequencewidget_inputmethodevent_isbase = false;
    mutable bool kpixmapsequencewidget_inputmethodquery_isbase = false;
    mutable bool kpixmapsequencewidget_focusnextprevchild_isbase = false;
    mutable bool kpixmapsequencewidget_eventfilter_isbase = false;
    mutable bool kpixmapsequencewidget_timerevent_isbase = false;
    mutable bool kpixmapsequencewidget_childevent_isbase = false;
    mutable bool kpixmapsequencewidget_customevent_isbase = false;
    mutable bool kpixmapsequencewidget_connectnotify_isbase = false;
    mutable bool kpixmapsequencewidget_disconnectnotify_isbase = false;
    mutable bool kpixmapsequencewidget_updatemicrofocus_isbase = false;
    mutable bool kpixmapsequencewidget_create_isbase = false;
    mutable bool kpixmapsequencewidget_destroy_isbase = false;
    mutable bool kpixmapsequencewidget_focusnextchild_isbase = false;
    mutable bool kpixmapsequencewidget_focuspreviouschild_isbase = false;
    mutable bool kpixmapsequencewidget_sender_isbase = false;
    mutable bool kpixmapsequencewidget_sendersignalindex_isbase = false;
    mutable bool kpixmapsequencewidget_receivers_isbase = false;
    mutable bool kpixmapsequencewidget_issignalconnected_isbase = false;
    mutable bool kpixmapsequencewidget_getdecodedmetricf_isbase = false;

  public:
    VirtualKPixmapSequenceWidget(QWidget* parent) : KPixmapSequenceWidget(parent) {};
    VirtualKPixmapSequenceWidget() : KPixmapSequenceWidget() {};
    VirtualKPixmapSequenceWidget(const KPixmapSequence& seq) : KPixmapSequenceWidget(seq) {};
    VirtualKPixmapSequenceWidget(const KPixmapSequence& seq, QWidget* parent) : KPixmapSequenceWidget(seq, parent) {};

    ~VirtualKPixmapSequenceWidget() {
        kpixmapsequencewidget_metacall_callback = nullptr;
        kpixmapsequencewidget_sizehint_callback = nullptr;
        kpixmapsequencewidget_devtype_callback = nullptr;
        kpixmapsequencewidget_setvisible_callback = nullptr;
        kpixmapsequencewidget_minimumsizehint_callback = nullptr;
        kpixmapsequencewidget_heightforwidth_callback = nullptr;
        kpixmapsequencewidget_hasheightforwidth_callback = nullptr;
        kpixmapsequencewidget_paintengine_callback = nullptr;
        kpixmapsequencewidget_event_callback = nullptr;
        kpixmapsequencewidget_mousepressevent_callback = nullptr;
        kpixmapsequencewidget_mousereleaseevent_callback = nullptr;
        kpixmapsequencewidget_mousedoubleclickevent_callback = nullptr;
        kpixmapsequencewidget_mousemoveevent_callback = nullptr;
        kpixmapsequencewidget_wheelevent_callback = nullptr;
        kpixmapsequencewidget_keypressevent_callback = nullptr;
        kpixmapsequencewidget_keyreleaseevent_callback = nullptr;
        kpixmapsequencewidget_focusinevent_callback = nullptr;
        kpixmapsequencewidget_focusoutevent_callback = nullptr;
        kpixmapsequencewidget_enterevent_callback = nullptr;
        kpixmapsequencewidget_leaveevent_callback = nullptr;
        kpixmapsequencewidget_paintevent_callback = nullptr;
        kpixmapsequencewidget_moveevent_callback = nullptr;
        kpixmapsequencewidget_resizeevent_callback = nullptr;
        kpixmapsequencewidget_closeevent_callback = nullptr;
        kpixmapsequencewidget_contextmenuevent_callback = nullptr;
        kpixmapsequencewidget_tabletevent_callback = nullptr;
        kpixmapsequencewidget_actionevent_callback = nullptr;
        kpixmapsequencewidget_dragenterevent_callback = nullptr;
        kpixmapsequencewidget_dragmoveevent_callback = nullptr;
        kpixmapsequencewidget_dragleaveevent_callback = nullptr;
        kpixmapsequencewidget_dropevent_callback = nullptr;
        kpixmapsequencewidget_showevent_callback = nullptr;
        kpixmapsequencewidget_hideevent_callback = nullptr;
        kpixmapsequencewidget_nativeevent_callback = nullptr;
        kpixmapsequencewidget_changeevent_callback = nullptr;
        kpixmapsequencewidget_metric_callback = nullptr;
        kpixmapsequencewidget_initpainter_callback = nullptr;
        kpixmapsequencewidget_redirected_callback = nullptr;
        kpixmapsequencewidget_sharedpainter_callback = nullptr;
        kpixmapsequencewidget_inputmethodevent_callback = nullptr;
        kpixmapsequencewidget_inputmethodquery_callback = nullptr;
        kpixmapsequencewidget_focusnextprevchild_callback = nullptr;
        kpixmapsequencewidget_eventfilter_callback = nullptr;
        kpixmapsequencewidget_timerevent_callback = nullptr;
        kpixmapsequencewidget_childevent_callback = nullptr;
        kpixmapsequencewidget_customevent_callback = nullptr;
        kpixmapsequencewidget_connectnotify_callback = nullptr;
        kpixmapsequencewidget_disconnectnotify_callback = nullptr;
        kpixmapsequencewidget_updatemicrofocus_callback = nullptr;
        kpixmapsequencewidget_create_callback = nullptr;
        kpixmapsequencewidget_destroy_callback = nullptr;
        kpixmapsequencewidget_focusnextchild_callback = nullptr;
        kpixmapsequencewidget_focuspreviouschild_callback = nullptr;
        kpixmapsequencewidget_sender_callback = nullptr;
        kpixmapsequencewidget_sendersignalindex_callback = nullptr;
        kpixmapsequencewidget_receivers_callback = nullptr;
        kpixmapsequencewidget_issignalconnected_callback = nullptr;
        kpixmapsequencewidget_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKPixmapSequenceWidget_Metacall_Callback(KPixmapSequenceWidget_Metacall_Callback cb) { kpixmapsequencewidget_metacall_callback = cb; }
    inline void setKPixmapSequenceWidget_SizeHint_Callback(KPixmapSequenceWidget_SizeHint_Callback cb) { kpixmapsequencewidget_sizehint_callback = cb; }
    inline void setKPixmapSequenceWidget_DevType_Callback(KPixmapSequenceWidget_DevType_Callback cb) { kpixmapsequencewidget_devtype_callback = cb; }
    inline void setKPixmapSequenceWidget_SetVisible_Callback(KPixmapSequenceWidget_SetVisible_Callback cb) { kpixmapsequencewidget_setvisible_callback = cb; }
    inline void setKPixmapSequenceWidget_MinimumSizeHint_Callback(KPixmapSequenceWidget_MinimumSizeHint_Callback cb) { kpixmapsequencewidget_minimumsizehint_callback = cb; }
    inline void setKPixmapSequenceWidget_HeightForWidth_Callback(KPixmapSequenceWidget_HeightForWidth_Callback cb) { kpixmapsequencewidget_heightforwidth_callback = cb; }
    inline void setKPixmapSequenceWidget_HasHeightForWidth_Callback(KPixmapSequenceWidget_HasHeightForWidth_Callback cb) { kpixmapsequencewidget_hasheightforwidth_callback = cb; }
    inline void setKPixmapSequenceWidget_PaintEngine_Callback(KPixmapSequenceWidget_PaintEngine_Callback cb) { kpixmapsequencewidget_paintengine_callback = cb; }
    inline void setKPixmapSequenceWidget_Event_Callback(KPixmapSequenceWidget_Event_Callback cb) { kpixmapsequencewidget_event_callback = cb; }
    inline void setKPixmapSequenceWidget_MousePressEvent_Callback(KPixmapSequenceWidget_MousePressEvent_Callback cb) { kpixmapsequencewidget_mousepressevent_callback = cb; }
    inline void setKPixmapSequenceWidget_MouseReleaseEvent_Callback(KPixmapSequenceWidget_MouseReleaseEvent_Callback cb) { kpixmapsequencewidget_mousereleaseevent_callback = cb; }
    inline void setKPixmapSequenceWidget_MouseDoubleClickEvent_Callback(KPixmapSequenceWidget_MouseDoubleClickEvent_Callback cb) { kpixmapsequencewidget_mousedoubleclickevent_callback = cb; }
    inline void setKPixmapSequenceWidget_MouseMoveEvent_Callback(KPixmapSequenceWidget_MouseMoveEvent_Callback cb) { kpixmapsequencewidget_mousemoveevent_callback = cb; }
    inline void setKPixmapSequenceWidget_WheelEvent_Callback(KPixmapSequenceWidget_WheelEvent_Callback cb) { kpixmapsequencewidget_wheelevent_callback = cb; }
    inline void setKPixmapSequenceWidget_KeyPressEvent_Callback(KPixmapSequenceWidget_KeyPressEvent_Callback cb) { kpixmapsequencewidget_keypressevent_callback = cb; }
    inline void setKPixmapSequenceWidget_KeyReleaseEvent_Callback(KPixmapSequenceWidget_KeyReleaseEvent_Callback cb) { kpixmapsequencewidget_keyreleaseevent_callback = cb; }
    inline void setKPixmapSequenceWidget_FocusInEvent_Callback(KPixmapSequenceWidget_FocusInEvent_Callback cb) { kpixmapsequencewidget_focusinevent_callback = cb; }
    inline void setKPixmapSequenceWidget_FocusOutEvent_Callback(KPixmapSequenceWidget_FocusOutEvent_Callback cb) { kpixmapsequencewidget_focusoutevent_callback = cb; }
    inline void setKPixmapSequenceWidget_EnterEvent_Callback(KPixmapSequenceWidget_EnterEvent_Callback cb) { kpixmapsequencewidget_enterevent_callback = cb; }
    inline void setKPixmapSequenceWidget_LeaveEvent_Callback(KPixmapSequenceWidget_LeaveEvent_Callback cb) { kpixmapsequencewidget_leaveevent_callback = cb; }
    inline void setKPixmapSequenceWidget_PaintEvent_Callback(KPixmapSequenceWidget_PaintEvent_Callback cb) { kpixmapsequencewidget_paintevent_callback = cb; }
    inline void setKPixmapSequenceWidget_MoveEvent_Callback(KPixmapSequenceWidget_MoveEvent_Callback cb) { kpixmapsequencewidget_moveevent_callback = cb; }
    inline void setKPixmapSequenceWidget_ResizeEvent_Callback(KPixmapSequenceWidget_ResizeEvent_Callback cb) { kpixmapsequencewidget_resizeevent_callback = cb; }
    inline void setKPixmapSequenceWidget_CloseEvent_Callback(KPixmapSequenceWidget_CloseEvent_Callback cb) { kpixmapsequencewidget_closeevent_callback = cb; }
    inline void setKPixmapSequenceWidget_ContextMenuEvent_Callback(KPixmapSequenceWidget_ContextMenuEvent_Callback cb) { kpixmapsequencewidget_contextmenuevent_callback = cb; }
    inline void setKPixmapSequenceWidget_TabletEvent_Callback(KPixmapSequenceWidget_TabletEvent_Callback cb) { kpixmapsequencewidget_tabletevent_callback = cb; }
    inline void setKPixmapSequenceWidget_ActionEvent_Callback(KPixmapSequenceWidget_ActionEvent_Callback cb) { kpixmapsequencewidget_actionevent_callback = cb; }
    inline void setKPixmapSequenceWidget_DragEnterEvent_Callback(KPixmapSequenceWidget_DragEnterEvent_Callback cb) { kpixmapsequencewidget_dragenterevent_callback = cb; }
    inline void setKPixmapSequenceWidget_DragMoveEvent_Callback(KPixmapSequenceWidget_DragMoveEvent_Callback cb) { kpixmapsequencewidget_dragmoveevent_callback = cb; }
    inline void setKPixmapSequenceWidget_DragLeaveEvent_Callback(KPixmapSequenceWidget_DragLeaveEvent_Callback cb) { kpixmapsequencewidget_dragleaveevent_callback = cb; }
    inline void setKPixmapSequenceWidget_DropEvent_Callback(KPixmapSequenceWidget_DropEvent_Callback cb) { kpixmapsequencewidget_dropevent_callback = cb; }
    inline void setKPixmapSequenceWidget_ShowEvent_Callback(KPixmapSequenceWidget_ShowEvent_Callback cb) { kpixmapsequencewidget_showevent_callback = cb; }
    inline void setKPixmapSequenceWidget_HideEvent_Callback(KPixmapSequenceWidget_HideEvent_Callback cb) { kpixmapsequencewidget_hideevent_callback = cb; }
    inline void setKPixmapSequenceWidget_NativeEvent_Callback(KPixmapSequenceWidget_NativeEvent_Callback cb) { kpixmapsequencewidget_nativeevent_callback = cb; }
    inline void setKPixmapSequenceWidget_ChangeEvent_Callback(KPixmapSequenceWidget_ChangeEvent_Callback cb) { kpixmapsequencewidget_changeevent_callback = cb; }
    inline void setKPixmapSequenceWidget_Metric_Callback(KPixmapSequenceWidget_Metric_Callback cb) { kpixmapsequencewidget_metric_callback = cb; }
    inline void setKPixmapSequenceWidget_InitPainter_Callback(KPixmapSequenceWidget_InitPainter_Callback cb) { kpixmapsequencewidget_initpainter_callback = cb; }
    inline void setKPixmapSequenceWidget_Redirected_Callback(KPixmapSequenceWidget_Redirected_Callback cb) { kpixmapsequencewidget_redirected_callback = cb; }
    inline void setKPixmapSequenceWidget_SharedPainter_Callback(KPixmapSequenceWidget_SharedPainter_Callback cb) { kpixmapsequencewidget_sharedpainter_callback = cb; }
    inline void setKPixmapSequenceWidget_InputMethodEvent_Callback(KPixmapSequenceWidget_InputMethodEvent_Callback cb) { kpixmapsequencewidget_inputmethodevent_callback = cb; }
    inline void setKPixmapSequenceWidget_InputMethodQuery_Callback(KPixmapSequenceWidget_InputMethodQuery_Callback cb) { kpixmapsequencewidget_inputmethodquery_callback = cb; }
    inline void setKPixmapSequenceWidget_FocusNextPrevChild_Callback(KPixmapSequenceWidget_FocusNextPrevChild_Callback cb) { kpixmapsequencewidget_focusnextprevchild_callback = cb; }
    inline void setKPixmapSequenceWidget_EventFilter_Callback(KPixmapSequenceWidget_EventFilter_Callback cb) { kpixmapsequencewidget_eventfilter_callback = cb; }
    inline void setKPixmapSequenceWidget_TimerEvent_Callback(KPixmapSequenceWidget_TimerEvent_Callback cb) { kpixmapsequencewidget_timerevent_callback = cb; }
    inline void setKPixmapSequenceWidget_ChildEvent_Callback(KPixmapSequenceWidget_ChildEvent_Callback cb) { kpixmapsequencewidget_childevent_callback = cb; }
    inline void setKPixmapSequenceWidget_CustomEvent_Callback(KPixmapSequenceWidget_CustomEvent_Callback cb) { kpixmapsequencewidget_customevent_callback = cb; }
    inline void setKPixmapSequenceWidget_ConnectNotify_Callback(KPixmapSequenceWidget_ConnectNotify_Callback cb) { kpixmapsequencewidget_connectnotify_callback = cb; }
    inline void setKPixmapSequenceWidget_DisconnectNotify_Callback(KPixmapSequenceWidget_DisconnectNotify_Callback cb) { kpixmapsequencewidget_disconnectnotify_callback = cb; }
    inline void setKPixmapSequenceWidget_UpdateMicroFocus_Callback(KPixmapSequenceWidget_UpdateMicroFocus_Callback cb) { kpixmapsequencewidget_updatemicrofocus_callback = cb; }
    inline void setKPixmapSequenceWidget_Create_Callback(KPixmapSequenceWidget_Create_Callback cb) { kpixmapsequencewidget_create_callback = cb; }
    inline void setKPixmapSequenceWidget_Destroy_Callback(KPixmapSequenceWidget_Destroy_Callback cb) { kpixmapsequencewidget_destroy_callback = cb; }
    inline void setKPixmapSequenceWidget_FocusNextChild_Callback(KPixmapSequenceWidget_FocusNextChild_Callback cb) { kpixmapsequencewidget_focusnextchild_callback = cb; }
    inline void setKPixmapSequenceWidget_FocusPreviousChild_Callback(KPixmapSequenceWidget_FocusPreviousChild_Callback cb) { kpixmapsequencewidget_focuspreviouschild_callback = cb; }
    inline void setKPixmapSequenceWidget_Sender_Callback(KPixmapSequenceWidget_Sender_Callback cb) { kpixmapsequencewidget_sender_callback = cb; }
    inline void setKPixmapSequenceWidget_SenderSignalIndex_Callback(KPixmapSequenceWidget_SenderSignalIndex_Callback cb) { kpixmapsequencewidget_sendersignalindex_callback = cb; }
    inline void setKPixmapSequenceWidget_Receivers_Callback(KPixmapSequenceWidget_Receivers_Callback cb) { kpixmapsequencewidget_receivers_callback = cb; }
    inline void setKPixmapSequenceWidget_IsSignalConnected_Callback(KPixmapSequenceWidget_IsSignalConnected_Callback cb) { kpixmapsequencewidget_issignalconnected_callback = cb; }
    inline void setKPixmapSequenceWidget_GetDecodedMetricF_Callback(KPixmapSequenceWidget_GetDecodedMetricF_Callback cb) { kpixmapsequencewidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKPixmapSequenceWidget_Metacall_IsBase(bool value) const { kpixmapsequencewidget_metacall_isbase = value; }
    inline void setKPixmapSequenceWidget_SizeHint_IsBase(bool value) const { kpixmapsequencewidget_sizehint_isbase = value; }
    inline void setKPixmapSequenceWidget_DevType_IsBase(bool value) const { kpixmapsequencewidget_devtype_isbase = value; }
    inline void setKPixmapSequenceWidget_SetVisible_IsBase(bool value) const { kpixmapsequencewidget_setvisible_isbase = value; }
    inline void setKPixmapSequenceWidget_MinimumSizeHint_IsBase(bool value) const { kpixmapsequencewidget_minimumsizehint_isbase = value; }
    inline void setKPixmapSequenceWidget_HeightForWidth_IsBase(bool value) const { kpixmapsequencewidget_heightforwidth_isbase = value; }
    inline void setKPixmapSequenceWidget_HasHeightForWidth_IsBase(bool value) const { kpixmapsequencewidget_hasheightforwidth_isbase = value; }
    inline void setKPixmapSequenceWidget_PaintEngine_IsBase(bool value) const { kpixmapsequencewidget_paintengine_isbase = value; }
    inline void setKPixmapSequenceWidget_Event_IsBase(bool value) const { kpixmapsequencewidget_event_isbase = value; }
    inline void setKPixmapSequenceWidget_MousePressEvent_IsBase(bool value) const { kpixmapsequencewidget_mousepressevent_isbase = value; }
    inline void setKPixmapSequenceWidget_MouseReleaseEvent_IsBase(bool value) const { kpixmapsequencewidget_mousereleaseevent_isbase = value; }
    inline void setKPixmapSequenceWidget_MouseDoubleClickEvent_IsBase(bool value) const { kpixmapsequencewidget_mousedoubleclickevent_isbase = value; }
    inline void setKPixmapSequenceWidget_MouseMoveEvent_IsBase(bool value) const { kpixmapsequencewidget_mousemoveevent_isbase = value; }
    inline void setKPixmapSequenceWidget_WheelEvent_IsBase(bool value) const { kpixmapsequencewidget_wheelevent_isbase = value; }
    inline void setKPixmapSequenceWidget_KeyPressEvent_IsBase(bool value) const { kpixmapsequencewidget_keypressevent_isbase = value; }
    inline void setKPixmapSequenceWidget_KeyReleaseEvent_IsBase(bool value) const { kpixmapsequencewidget_keyreleaseevent_isbase = value; }
    inline void setKPixmapSequenceWidget_FocusInEvent_IsBase(bool value) const { kpixmapsequencewidget_focusinevent_isbase = value; }
    inline void setKPixmapSequenceWidget_FocusOutEvent_IsBase(bool value) const { kpixmapsequencewidget_focusoutevent_isbase = value; }
    inline void setKPixmapSequenceWidget_EnterEvent_IsBase(bool value) const { kpixmapsequencewidget_enterevent_isbase = value; }
    inline void setKPixmapSequenceWidget_LeaveEvent_IsBase(bool value) const { kpixmapsequencewidget_leaveevent_isbase = value; }
    inline void setKPixmapSequenceWidget_PaintEvent_IsBase(bool value) const { kpixmapsequencewidget_paintevent_isbase = value; }
    inline void setKPixmapSequenceWidget_MoveEvent_IsBase(bool value) const { kpixmapsequencewidget_moveevent_isbase = value; }
    inline void setKPixmapSequenceWidget_ResizeEvent_IsBase(bool value) const { kpixmapsequencewidget_resizeevent_isbase = value; }
    inline void setKPixmapSequenceWidget_CloseEvent_IsBase(bool value) const { kpixmapsequencewidget_closeevent_isbase = value; }
    inline void setKPixmapSequenceWidget_ContextMenuEvent_IsBase(bool value) const { kpixmapsequencewidget_contextmenuevent_isbase = value; }
    inline void setKPixmapSequenceWidget_TabletEvent_IsBase(bool value) const { kpixmapsequencewidget_tabletevent_isbase = value; }
    inline void setKPixmapSequenceWidget_ActionEvent_IsBase(bool value) const { kpixmapsequencewidget_actionevent_isbase = value; }
    inline void setKPixmapSequenceWidget_DragEnterEvent_IsBase(bool value) const { kpixmapsequencewidget_dragenterevent_isbase = value; }
    inline void setKPixmapSequenceWidget_DragMoveEvent_IsBase(bool value) const { kpixmapsequencewidget_dragmoveevent_isbase = value; }
    inline void setKPixmapSequenceWidget_DragLeaveEvent_IsBase(bool value) const { kpixmapsequencewidget_dragleaveevent_isbase = value; }
    inline void setKPixmapSequenceWidget_DropEvent_IsBase(bool value) const { kpixmapsequencewidget_dropevent_isbase = value; }
    inline void setKPixmapSequenceWidget_ShowEvent_IsBase(bool value) const { kpixmapsequencewidget_showevent_isbase = value; }
    inline void setKPixmapSequenceWidget_HideEvent_IsBase(bool value) const { kpixmapsequencewidget_hideevent_isbase = value; }
    inline void setKPixmapSequenceWidget_NativeEvent_IsBase(bool value) const { kpixmapsequencewidget_nativeevent_isbase = value; }
    inline void setKPixmapSequenceWidget_ChangeEvent_IsBase(bool value) const { kpixmapsequencewidget_changeevent_isbase = value; }
    inline void setKPixmapSequenceWidget_Metric_IsBase(bool value) const { kpixmapsequencewidget_metric_isbase = value; }
    inline void setKPixmapSequenceWidget_InitPainter_IsBase(bool value) const { kpixmapsequencewidget_initpainter_isbase = value; }
    inline void setKPixmapSequenceWidget_Redirected_IsBase(bool value) const { kpixmapsequencewidget_redirected_isbase = value; }
    inline void setKPixmapSequenceWidget_SharedPainter_IsBase(bool value) const { kpixmapsequencewidget_sharedpainter_isbase = value; }
    inline void setKPixmapSequenceWidget_InputMethodEvent_IsBase(bool value) const { kpixmapsequencewidget_inputmethodevent_isbase = value; }
    inline void setKPixmapSequenceWidget_InputMethodQuery_IsBase(bool value) const { kpixmapsequencewidget_inputmethodquery_isbase = value; }
    inline void setKPixmapSequenceWidget_FocusNextPrevChild_IsBase(bool value) const { kpixmapsequencewidget_focusnextprevchild_isbase = value; }
    inline void setKPixmapSequenceWidget_EventFilter_IsBase(bool value) const { kpixmapsequencewidget_eventfilter_isbase = value; }
    inline void setKPixmapSequenceWidget_TimerEvent_IsBase(bool value) const { kpixmapsequencewidget_timerevent_isbase = value; }
    inline void setKPixmapSequenceWidget_ChildEvent_IsBase(bool value) const { kpixmapsequencewidget_childevent_isbase = value; }
    inline void setKPixmapSequenceWidget_CustomEvent_IsBase(bool value) const { kpixmapsequencewidget_customevent_isbase = value; }
    inline void setKPixmapSequenceWidget_ConnectNotify_IsBase(bool value) const { kpixmapsequencewidget_connectnotify_isbase = value; }
    inline void setKPixmapSequenceWidget_DisconnectNotify_IsBase(bool value) const { kpixmapsequencewidget_disconnectnotify_isbase = value; }
    inline void setKPixmapSequenceWidget_UpdateMicroFocus_IsBase(bool value) const { kpixmapsequencewidget_updatemicrofocus_isbase = value; }
    inline void setKPixmapSequenceWidget_Create_IsBase(bool value) const { kpixmapsequencewidget_create_isbase = value; }
    inline void setKPixmapSequenceWidget_Destroy_IsBase(bool value) const { kpixmapsequencewidget_destroy_isbase = value; }
    inline void setKPixmapSequenceWidget_FocusNextChild_IsBase(bool value) const { kpixmapsequencewidget_focusnextchild_isbase = value; }
    inline void setKPixmapSequenceWidget_FocusPreviousChild_IsBase(bool value) const { kpixmapsequencewidget_focuspreviouschild_isbase = value; }
    inline void setKPixmapSequenceWidget_Sender_IsBase(bool value) const { kpixmapsequencewidget_sender_isbase = value; }
    inline void setKPixmapSequenceWidget_SenderSignalIndex_IsBase(bool value) const { kpixmapsequencewidget_sendersignalindex_isbase = value; }
    inline void setKPixmapSequenceWidget_Receivers_IsBase(bool value) const { kpixmapsequencewidget_receivers_isbase = value; }
    inline void setKPixmapSequenceWidget_IsSignalConnected_IsBase(bool value) const { kpixmapsequencewidget_issignalconnected_isbase = value; }
    inline void setKPixmapSequenceWidget_GetDecodedMetricF_IsBase(bool value) const { kpixmapsequencewidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpixmapsequencewidget_metacall_isbase) {
            kpixmapsequencewidget_metacall_isbase = false;
            return KPixmapSequenceWidget::qt_metacall(param1, param2, param3);
        } else if (kpixmapsequencewidget_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kpixmapsequencewidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KPixmapSequenceWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpixmapsequencewidget_sizehint_isbase) {
            kpixmapsequencewidget_sizehint_isbase = false;
            return KPixmapSequenceWidget::sizeHint();
        } else if (kpixmapsequencewidget_sizehint_callback != nullptr) {
            QSize* callback_ret = kpixmapsequencewidget_sizehint_callback();
            return *callback_ret;
        } else {
            return KPixmapSequenceWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpixmapsequencewidget_devtype_isbase) {
            kpixmapsequencewidget_devtype_isbase = false;
            return KPixmapSequenceWidget::devType();
        } else if (kpixmapsequencewidget_devtype_callback != nullptr) {
            int callback_ret = kpixmapsequencewidget_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPixmapSequenceWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpixmapsequencewidget_setvisible_isbase) {
            kpixmapsequencewidget_setvisible_isbase = false;
            KPixmapSequenceWidget::setVisible(visible);
        } else if (kpixmapsequencewidget_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            kpixmapsequencewidget_setvisible_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpixmapsequencewidget_minimumsizehint_isbase) {
            kpixmapsequencewidget_minimumsizehint_isbase = false;
            return KPixmapSequenceWidget::minimumSizeHint();
        } else if (kpixmapsequencewidget_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = kpixmapsequencewidget_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KPixmapSequenceWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpixmapsequencewidget_heightforwidth_isbase) {
            kpixmapsequencewidget_heightforwidth_isbase = false;
            return KPixmapSequenceWidget::heightForWidth(param1);
        } else if (kpixmapsequencewidget_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = kpixmapsequencewidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPixmapSequenceWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpixmapsequencewidget_hasheightforwidth_isbase) {
            kpixmapsequencewidget_hasheightforwidth_isbase = false;
            return KPixmapSequenceWidget::hasHeightForWidth();
        } else if (kpixmapsequencewidget_hasheightforwidth_callback != nullptr) {
            bool callback_ret = kpixmapsequencewidget_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KPixmapSequenceWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpixmapsequencewidget_paintengine_isbase) {
            kpixmapsequencewidget_paintengine_isbase = false;
            return KPixmapSequenceWidget::paintEngine();
        } else if (kpixmapsequencewidget_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = kpixmapsequencewidget_paintengine_callback();
            return callback_ret;
        } else {
            return KPixmapSequenceWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpixmapsequencewidget_event_isbase) {
            kpixmapsequencewidget_event_isbase = false;
            return KPixmapSequenceWidget::event(event);
        } else if (kpixmapsequencewidget_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kpixmapsequencewidget_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPixmapSequenceWidget::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpixmapsequencewidget_mousepressevent_isbase) {
            kpixmapsequencewidget_mousepressevent_isbase = false;
            KPixmapSequenceWidget::mousePressEvent(event);
        } else if (kpixmapsequencewidget_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpixmapsequencewidget_mousepressevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpixmapsequencewidget_mousereleaseevent_isbase) {
            kpixmapsequencewidget_mousereleaseevent_isbase = false;
            KPixmapSequenceWidget::mouseReleaseEvent(event);
        } else if (kpixmapsequencewidget_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpixmapsequencewidget_mousereleaseevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpixmapsequencewidget_mousedoubleclickevent_isbase) {
            kpixmapsequencewidget_mousedoubleclickevent_isbase = false;
            KPixmapSequenceWidget::mouseDoubleClickEvent(event);
        } else if (kpixmapsequencewidget_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpixmapsequencewidget_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpixmapsequencewidget_mousemoveevent_isbase) {
            kpixmapsequencewidget_mousemoveevent_isbase = false;
            KPixmapSequenceWidget::mouseMoveEvent(event);
        } else if (kpixmapsequencewidget_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            kpixmapsequencewidget_mousemoveevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpixmapsequencewidget_wheelevent_isbase) {
            kpixmapsequencewidget_wheelevent_isbase = false;
            KPixmapSequenceWidget::wheelEvent(event);
        } else if (kpixmapsequencewidget_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            kpixmapsequencewidget_wheelevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kpixmapsequencewidget_keypressevent_isbase) {
            kpixmapsequencewidget_keypressevent_isbase = false;
            KPixmapSequenceWidget::keyPressEvent(event);
        } else if (kpixmapsequencewidget_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kpixmapsequencewidget_keypressevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpixmapsequencewidget_keyreleaseevent_isbase) {
            kpixmapsequencewidget_keyreleaseevent_isbase = false;
            KPixmapSequenceWidget::keyReleaseEvent(event);
        } else if (kpixmapsequencewidget_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            kpixmapsequencewidget_keyreleaseevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpixmapsequencewidget_focusinevent_isbase) {
            kpixmapsequencewidget_focusinevent_isbase = false;
            KPixmapSequenceWidget::focusInEvent(event);
        } else if (kpixmapsequencewidget_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kpixmapsequencewidget_focusinevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpixmapsequencewidget_focusoutevent_isbase) {
            kpixmapsequencewidget_focusoutevent_isbase = false;
            KPixmapSequenceWidget::focusOutEvent(event);
        } else if (kpixmapsequencewidget_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            kpixmapsequencewidget_focusoutevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpixmapsequencewidget_enterevent_isbase) {
            kpixmapsequencewidget_enterevent_isbase = false;
            KPixmapSequenceWidget::enterEvent(event);
        } else if (kpixmapsequencewidget_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            kpixmapsequencewidget_enterevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpixmapsequencewidget_leaveevent_isbase) {
            kpixmapsequencewidget_leaveevent_isbase = false;
            KPixmapSequenceWidget::leaveEvent(event);
        } else if (kpixmapsequencewidget_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kpixmapsequencewidget_leaveevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpixmapsequencewidget_paintevent_isbase) {
            kpixmapsequencewidget_paintevent_isbase = false;
            KPixmapSequenceWidget::paintEvent(event);
        } else if (kpixmapsequencewidget_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            kpixmapsequencewidget_paintevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpixmapsequencewidget_moveevent_isbase) {
            kpixmapsequencewidget_moveevent_isbase = false;
            KPixmapSequenceWidget::moveEvent(event);
        } else if (kpixmapsequencewidget_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            kpixmapsequencewidget_moveevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kpixmapsequencewidget_resizeevent_isbase) {
            kpixmapsequencewidget_resizeevent_isbase = false;
            KPixmapSequenceWidget::resizeEvent(event);
        } else if (kpixmapsequencewidget_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            kpixmapsequencewidget_resizeevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kpixmapsequencewidget_closeevent_isbase) {
            kpixmapsequencewidget_closeevent_isbase = false;
            KPixmapSequenceWidget::closeEvent(event);
        } else if (kpixmapsequencewidget_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            kpixmapsequencewidget_closeevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kpixmapsequencewidget_contextmenuevent_isbase) {
            kpixmapsequencewidget_contextmenuevent_isbase = false;
            KPixmapSequenceWidget::contextMenuEvent(event);
        } else if (kpixmapsequencewidget_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            kpixmapsequencewidget_contextmenuevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpixmapsequencewidget_tabletevent_isbase) {
            kpixmapsequencewidget_tabletevent_isbase = false;
            KPixmapSequenceWidget::tabletEvent(event);
        } else if (kpixmapsequencewidget_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            kpixmapsequencewidget_tabletevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpixmapsequencewidget_actionevent_isbase) {
            kpixmapsequencewidget_actionevent_isbase = false;
            KPixmapSequenceWidget::actionEvent(event);
        } else if (kpixmapsequencewidget_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            kpixmapsequencewidget_actionevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpixmapsequencewidget_dragenterevent_isbase) {
            kpixmapsequencewidget_dragenterevent_isbase = false;
            KPixmapSequenceWidget::dragEnterEvent(event);
        } else if (kpixmapsequencewidget_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            kpixmapsequencewidget_dragenterevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpixmapsequencewidget_dragmoveevent_isbase) {
            kpixmapsequencewidget_dragmoveevent_isbase = false;
            KPixmapSequenceWidget::dragMoveEvent(event);
        } else if (kpixmapsequencewidget_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            kpixmapsequencewidget_dragmoveevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpixmapsequencewidget_dragleaveevent_isbase) {
            kpixmapsequencewidget_dragleaveevent_isbase = false;
            KPixmapSequenceWidget::dragLeaveEvent(event);
        } else if (kpixmapsequencewidget_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            kpixmapsequencewidget_dragleaveevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpixmapsequencewidget_dropevent_isbase) {
            kpixmapsequencewidget_dropevent_isbase = false;
            KPixmapSequenceWidget::dropEvent(event);
        } else if (kpixmapsequencewidget_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            kpixmapsequencewidget_dropevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kpixmapsequencewidget_showevent_isbase) {
            kpixmapsequencewidget_showevent_isbase = false;
            KPixmapSequenceWidget::showEvent(event);
        } else if (kpixmapsequencewidget_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            kpixmapsequencewidget_showevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpixmapsequencewidget_hideevent_isbase) {
            kpixmapsequencewidget_hideevent_isbase = false;
            KPixmapSequenceWidget::hideEvent(event);
        } else if (kpixmapsequencewidget_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            kpixmapsequencewidget_hideevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpixmapsequencewidget_nativeevent_isbase) {
            kpixmapsequencewidget_nativeevent_isbase = false;
            return KPixmapSequenceWidget::nativeEvent(eventType, message, result);
        } else if (kpixmapsequencewidget_nativeevent_callback != nullptr) {
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

            bool callback_ret = kpixmapsequencewidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KPixmapSequenceWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpixmapsequencewidget_changeevent_isbase) {
            kpixmapsequencewidget_changeevent_isbase = false;
            KPixmapSequenceWidget::changeEvent(param1);
        } else if (kpixmapsequencewidget_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            kpixmapsequencewidget_changeevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpixmapsequencewidget_metric_isbase) {
            kpixmapsequencewidget_metric_isbase = false;
            return KPixmapSequenceWidget::metric(param1);
        } else if (kpixmapsequencewidget_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = kpixmapsequencewidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPixmapSequenceWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpixmapsequencewidget_initpainter_isbase) {
            kpixmapsequencewidget_initpainter_isbase = false;
            KPixmapSequenceWidget::initPainter(painter);
        } else if (kpixmapsequencewidget_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            kpixmapsequencewidget_initpainter_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpixmapsequencewidget_redirected_isbase) {
            kpixmapsequencewidget_redirected_isbase = false;
            return KPixmapSequenceWidget::redirected(offset);
        } else if (kpixmapsequencewidget_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = kpixmapsequencewidget_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPixmapSequenceWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpixmapsequencewidget_sharedpainter_isbase) {
            kpixmapsequencewidget_sharedpainter_isbase = false;
            return KPixmapSequenceWidget::sharedPainter();
        } else if (kpixmapsequencewidget_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = kpixmapsequencewidget_sharedpainter_callback();
            return callback_ret;
        } else {
            return KPixmapSequenceWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpixmapsequencewidget_inputmethodevent_isbase) {
            kpixmapsequencewidget_inputmethodevent_isbase = false;
            KPixmapSequenceWidget::inputMethodEvent(param1);
        } else if (kpixmapsequencewidget_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            kpixmapsequencewidget_inputmethodevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpixmapsequencewidget_inputmethodquery_isbase) {
            kpixmapsequencewidget_inputmethodquery_isbase = false;
            return KPixmapSequenceWidget::inputMethodQuery(param1);
        } else if (kpixmapsequencewidget_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = kpixmapsequencewidget_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KPixmapSequenceWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpixmapsequencewidget_focusnextprevchild_isbase) {
            kpixmapsequencewidget_focusnextprevchild_isbase = false;
            return KPixmapSequenceWidget::focusNextPrevChild(next);
        } else if (kpixmapsequencewidget_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = kpixmapsequencewidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPixmapSequenceWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kpixmapsequencewidget_eventfilter_isbase) {
            kpixmapsequencewidget_eventfilter_isbase = false;
            return KPixmapSequenceWidget::eventFilter(watched, event);
        } else if (kpixmapsequencewidget_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kpixmapsequencewidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KPixmapSequenceWidget::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpixmapsequencewidget_timerevent_isbase) {
            kpixmapsequencewidget_timerevent_isbase = false;
            KPixmapSequenceWidget::timerEvent(event);
        } else if (kpixmapsequencewidget_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kpixmapsequencewidget_timerevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpixmapsequencewidget_childevent_isbase) {
            kpixmapsequencewidget_childevent_isbase = false;
            KPixmapSequenceWidget::childEvent(event);
        } else if (kpixmapsequencewidget_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kpixmapsequencewidget_childevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpixmapsequencewidget_customevent_isbase) {
            kpixmapsequencewidget_customevent_isbase = false;
            KPixmapSequenceWidget::customEvent(event);
        } else if (kpixmapsequencewidget_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kpixmapsequencewidget_customevent_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpixmapsequencewidget_connectnotify_isbase) {
            kpixmapsequencewidget_connectnotify_isbase = false;
            KPixmapSequenceWidget::connectNotify(signal);
        } else if (kpixmapsequencewidget_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpixmapsequencewidget_connectnotify_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpixmapsequencewidget_disconnectnotify_isbase) {
            kpixmapsequencewidget_disconnectnotify_isbase = false;
            KPixmapSequenceWidget::disconnectNotify(signal);
        } else if (kpixmapsequencewidget_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kpixmapsequencewidget_disconnectnotify_callback(this, cbval1);
        } else {
            KPixmapSequenceWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kpixmapsequencewidget_updatemicrofocus_isbase) {
            kpixmapsequencewidget_updatemicrofocus_isbase = false;
            KPixmapSequenceWidget::updateMicroFocus();
        } else if (kpixmapsequencewidget_updatemicrofocus_callback != nullptr) {
            kpixmapsequencewidget_updatemicrofocus_callback();
        } else {
            KPixmapSequenceWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kpixmapsequencewidget_create_isbase) {
            kpixmapsequencewidget_create_isbase = false;
            KPixmapSequenceWidget::create();
        } else if (kpixmapsequencewidget_create_callback != nullptr) {
            kpixmapsequencewidget_create_callback();
        } else {
            KPixmapSequenceWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kpixmapsequencewidget_destroy_isbase) {
            kpixmapsequencewidget_destroy_isbase = false;
            KPixmapSequenceWidget::destroy();
        } else if (kpixmapsequencewidget_destroy_callback != nullptr) {
            kpixmapsequencewidget_destroy_callback();
        } else {
            KPixmapSequenceWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kpixmapsequencewidget_focusnextchild_isbase) {
            kpixmapsequencewidget_focusnextchild_isbase = false;
            return KPixmapSequenceWidget::focusNextChild();
        } else if (kpixmapsequencewidget_focusnextchild_callback != nullptr) {
            bool callback_ret = kpixmapsequencewidget_focusnextchild_callback();
            return callback_ret;
        } else {
            return KPixmapSequenceWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kpixmapsequencewidget_focuspreviouschild_isbase) {
            kpixmapsequencewidget_focuspreviouschild_isbase = false;
            return KPixmapSequenceWidget::focusPreviousChild();
        } else if (kpixmapsequencewidget_focuspreviouschild_callback != nullptr) {
            bool callback_ret = kpixmapsequencewidget_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KPixmapSequenceWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kpixmapsequencewidget_sender_isbase) {
            kpixmapsequencewidget_sender_isbase = false;
            return KPixmapSequenceWidget::sender();
        } else if (kpixmapsequencewidget_sender_callback != nullptr) {
            QObject* callback_ret = kpixmapsequencewidget_sender_callback();
            return callback_ret;
        } else {
            return KPixmapSequenceWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kpixmapsequencewidget_sendersignalindex_isbase) {
            kpixmapsequencewidget_sendersignalindex_isbase = false;
            return KPixmapSequenceWidget::senderSignalIndex();
        } else if (kpixmapsequencewidget_sendersignalindex_callback != nullptr) {
            int callback_ret = kpixmapsequencewidget_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KPixmapSequenceWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kpixmapsequencewidget_receivers_isbase) {
            kpixmapsequencewidget_receivers_isbase = false;
            return KPixmapSequenceWidget::receivers(signal);
        } else if (kpixmapsequencewidget_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kpixmapsequencewidget_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KPixmapSequenceWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kpixmapsequencewidget_issignalconnected_isbase) {
            kpixmapsequencewidget_issignalconnected_isbase = false;
            return KPixmapSequenceWidget::isSignalConnected(signal);
        } else if (kpixmapsequencewidget_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kpixmapsequencewidget_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KPixmapSequenceWidget::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kpixmapsequencewidget_getdecodedmetricf_isbase) {
            kpixmapsequencewidget_getdecodedmetricf_isbase = false;
            return KPixmapSequenceWidget::getDecodedMetricF(metricA, metricB);
        } else if (kpixmapsequencewidget_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = kpixmapsequencewidget_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KPixmapSequenceWidget::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KPixmapSequenceWidget_Event(KPixmapSequenceWidget* self, QEvent* event);
    friend bool KPixmapSequenceWidget_QBaseEvent(KPixmapSequenceWidget* self, QEvent* event);
    friend void KPixmapSequenceWidget_MousePressEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
    friend void KPixmapSequenceWidget_QBaseMousePressEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
    friend void KPixmapSequenceWidget_MouseReleaseEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
    friend void KPixmapSequenceWidget_QBaseMouseReleaseEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
    friend void KPixmapSequenceWidget_MouseDoubleClickEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
    friend void KPixmapSequenceWidget_QBaseMouseDoubleClickEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
    friend void KPixmapSequenceWidget_MouseMoveEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
    friend void KPixmapSequenceWidget_QBaseMouseMoveEvent(KPixmapSequenceWidget* self, QMouseEvent* event);
    friend void KPixmapSequenceWidget_WheelEvent(KPixmapSequenceWidget* self, QWheelEvent* event);
    friend void KPixmapSequenceWidget_QBaseWheelEvent(KPixmapSequenceWidget* self, QWheelEvent* event);
    friend void KPixmapSequenceWidget_KeyPressEvent(KPixmapSequenceWidget* self, QKeyEvent* event);
    friend void KPixmapSequenceWidget_QBaseKeyPressEvent(KPixmapSequenceWidget* self, QKeyEvent* event);
    friend void KPixmapSequenceWidget_KeyReleaseEvent(KPixmapSequenceWidget* self, QKeyEvent* event);
    friend void KPixmapSequenceWidget_QBaseKeyReleaseEvent(KPixmapSequenceWidget* self, QKeyEvent* event);
    friend void KPixmapSequenceWidget_FocusInEvent(KPixmapSequenceWidget* self, QFocusEvent* event);
    friend void KPixmapSequenceWidget_QBaseFocusInEvent(KPixmapSequenceWidget* self, QFocusEvent* event);
    friend void KPixmapSequenceWidget_FocusOutEvent(KPixmapSequenceWidget* self, QFocusEvent* event);
    friend void KPixmapSequenceWidget_QBaseFocusOutEvent(KPixmapSequenceWidget* self, QFocusEvent* event);
    friend void KPixmapSequenceWidget_EnterEvent(KPixmapSequenceWidget* self, QEnterEvent* event);
    friend void KPixmapSequenceWidget_QBaseEnterEvent(KPixmapSequenceWidget* self, QEnterEvent* event);
    friend void KPixmapSequenceWidget_LeaveEvent(KPixmapSequenceWidget* self, QEvent* event);
    friend void KPixmapSequenceWidget_QBaseLeaveEvent(KPixmapSequenceWidget* self, QEvent* event);
    friend void KPixmapSequenceWidget_PaintEvent(KPixmapSequenceWidget* self, QPaintEvent* event);
    friend void KPixmapSequenceWidget_QBasePaintEvent(KPixmapSequenceWidget* self, QPaintEvent* event);
    friend void KPixmapSequenceWidget_MoveEvent(KPixmapSequenceWidget* self, QMoveEvent* event);
    friend void KPixmapSequenceWidget_QBaseMoveEvent(KPixmapSequenceWidget* self, QMoveEvent* event);
    friend void KPixmapSequenceWidget_ResizeEvent(KPixmapSequenceWidget* self, QResizeEvent* event);
    friend void KPixmapSequenceWidget_QBaseResizeEvent(KPixmapSequenceWidget* self, QResizeEvent* event);
    friend void KPixmapSequenceWidget_CloseEvent(KPixmapSequenceWidget* self, QCloseEvent* event);
    friend void KPixmapSequenceWidget_QBaseCloseEvent(KPixmapSequenceWidget* self, QCloseEvent* event);
    friend void KPixmapSequenceWidget_ContextMenuEvent(KPixmapSequenceWidget* self, QContextMenuEvent* event);
    friend void KPixmapSequenceWidget_QBaseContextMenuEvent(KPixmapSequenceWidget* self, QContextMenuEvent* event);
    friend void KPixmapSequenceWidget_TabletEvent(KPixmapSequenceWidget* self, QTabletEvent* event);
    friend void KPixmapSequenceWidget_QBaseTabletEvent(KPixmapSequenceWidget* self, QTabletEvent* event);
    friend void KPixmapSequenceWidget_ActionEvent(KPixmapSequenceWidget* self, QActionEvent* event);
    friend void KPixmapSequenceWidget_QBaseActionEvent(KPixmapSequenceWidget* self, QActionEvent* event);
    friend void KPixmapSequenceWidget_DragEnterEvent(KPixmapSequenceWidget* self, QDragEnterEvent* event);
    friend void KPixmapSequenceWidget_QBaseDragEnterEvent(KPixmapSequenceWidget* self, QDragEnterEvent* event);
    friend void KPixmapSequenceWidget_DragMoveEvent(KPixmapSequenceWidget* self, QDragMoveEvent* event);
    friend void KPixmapSequenceWidget_QBaseDragMoveEvent(KPixmapSequenceWidget* self, QDragMoveEvent* event);
    friend void KPixmapSequenceWidget_DragLeaveEvent(KPixmapSequenceWidget* self, QDragLeaveEvent* event);
    friend void KPixmapSequenceWidget_QBaseDragLeaveEvent(KPixmapSequenceWidget* self, QDragLeaveEvent* event);
    friend void KPixmapSequenceWidget_DropEvent(KPixmapSequenceWidget* self, QDropEvent* event);
    friend void KPixmapSequenceWidget_QBaseDropEvent(KPixmapSequenceWidget* self, QDropEvent* event);
    friend void KPixmapSequenceWidget_ShowEvent(KPixmapSequenceWidget* self, QShowEvent* event);
    friend void KPixmapSequenceWidget_QBaseShowEvent(KPixmapSequenceWidget* self, QShowEvent* event);
    friend void KPixmapSequenceWidget_HideEvent(KPixmapSequenceWidget* self, QHideEvent* event);
    friend void KPixmapSequenceWidget_QBaseHideEvent(KPixmapSequenceWidget* self, QHideEvent* event);
    friend bool KPixmapSequenceWidget_NativeEvent(KPixmapSequenceWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KPixmapSequenceWidget_QBaseNativeEvent(KPixmapSequenceWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KPixmapSequenceWidget_ChangeEvent(KPixmapSequenceWidget* self, QEvent* param1);
    friend void KPixmapSequenceWidget_QBaseChangeEvent(KPixmapSequenceWidget* self, QEvent* param1);
    friend int KPixmapSequenceWidget_Metric(const KPixmapSequenceWidget* self, int param1);
    friend int KPixmapSequenceWidget_QBaseMetric(const KPixmapSequenceWidget* self, int param1);
    friend void KPixmapSequenceWidget_InitPainter(const KPixmapSequenceWidget* self, QPainter* painter);
    friend void KPixmapSequenceWidget_QBaseInitPainter(const KPixmapSequenceWidget* self, QPainter* painter);
    friend QPaintDevice* KPixmapSequenceWidget_Redirected(const KPixmapSequenceWidget* self, QPoint* offset);
    friend QPaintDevice* KPixmapSequenceWidget_QBaseRedirected(const KPixmapSequenceWidget* self, QPoint* offset);
    friend QPainter* KPixmapSequenceWidget_SharedPainter(const KPixmapSequenceWidget* self);
    friend QPainter* KPixmapSequenceWidget_QBaseSharedPainter(const KPixmapSequenceWidget* self);
    friend void KPixmapSequenceWidget_InputMethodEvent(KPixmapSequenceWidget* self, QInputMethodEvent* param1);
    friend void KPixmapSequenceWidget_QBaseInputMethodEvent(KPixmapSequenceWidget* self, QInputMethodEvent* param1);
    friend bool KPixmapSequenceWidget_FocusNextPrevChild(KPixmapSequenceWidget* self, bool next);
    friend bool KPixmapSequenceWidget_QBaseFocusNextPrevChild(KPixmapSequenceWidget* self, bool next);
    friend void KPixmapSequenceWidget_TimerEvent(KPixmapSequenceWidget* self, QTimerEvent* event);
    friend void KPixmapSequenceWidget_QBaseTimerEvent(KPixmapSequenceWidget* self, QTimerEvent* event);
    friend void KPixmapSequenceWidget_ChildEvent(KPixmapSequenceWidget* self, QChildEvent* event);
    friend void KPixmapSequenceWidget_QBaseChildEvent(KPixmapSequenceWidget* self, QChildEvent* event);
    friend void KPixmapSequenceWidget_CustomEvent(KPixmapSequenceWidget* self, QEvent* event);
    friend void KPixmapSequenceWidget_QBaseCustomEvent(KPixmapSequenceWidget* self, QEvent* event);
    friend void KPixmapSequenceWidget_ConnectNotify(KPixmapSequenceWidget* self, const QMetaMethod* signal);
    friend void KPixmapSequenceWidget_QBaseConnectNotify(KPixmapSequenceWidget* self, const QMetaMethod* signal);
    friend void KPixmapSequenceWidget_DisconnectNotify(KPixmapSequenceWidget* self, const QMetaMethod* signal);
    friend void KPixmapSequenceWidget_QBaseDisconnectNotify(KPixmapSequenceWidget* self, const QMetaMethod* signal);
    friend void KPixmapSequenceWidget_UpdateMicroFocus(KPixmapSequenceWidget* self);
    friend void KPixmapSequenceWidget_QBaseUpdateMicroFocus(KPixmapSequenceWidget* self);
    friend void KPixmapSequenceWidget_Create(KPixmapSequenceWidget* self);
    friend void KPixmapSequenceWidget_QBaseCreate(KPixmapSequenceWidget* self);
    friend void KPixmapSequenceWidget_Destroy(KPixmapSequenceWidget* self);
    friend void KPixmapSequenceWidget_QBaseDestroy(KPixmapSequenceWidget* self);
    friend bool KPixmapSequenceWidget_FocusNextChild(KPixmapSequenceWidget* self);
    friend bool KPixmapSequenceWidget_QBaseFocusNextChild(KPixmapSequenceWidget* self);
    friend bool KPixmapSequenceWidget_FocusPreviousChild(KPixmapSequenceWidget* self);
    friend bool KPixmapSequenceWidget_QBaseFocusPreviousChild(KPixmapSequenceWidget* self);
    friend QObject* KPixmapSequenceWidget_Sender(const KPixmapSequenceWidget* self);
    friend QObject* KPixmapSequenceWidget_QBaseSender(const KPixmapSequenceWidget* self);
    friend int KPixmapSequenceWidget_SenderSignalIndex(const KPixmapSequenceWidget* self);
    friend int KPixmapSequenceWidget_QBaseSenderSignalIndex(const KPixmapSequenceWidget* self);
    friend int KPixmapSequenceWidget_Receivers(const KPixmapSequenceWidget* self, const char* signal);
    friend int KPixmapSequenceWidget_QBaseReceivers(const KPixmapSequenceWidget* self, const char* signal);
    friend bool KPixmapSequenceWidget_IsSignalConnected(const KPixmapSequenceWidget* self, const QMetaMethod* signal);
    friend bool KPixmapSequenceWidget_QBaseIsSignalConnected(const KPixmapSequenceWidget* self, const QMetaMethod* signal);
    friend double KPixmapSequenceWidget_GetDecodedMetricF(const KPixmapSequenceWidget* self, int metricA, int metricB);
    friend double KPixmapSequenceWidget_QBaseGetDecodedMetricF(const KPixmapSequenceWidget* self, int metricA, int metricB);
};

#endif
