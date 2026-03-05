#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPIXMAPREGIONSELECTORDIALOG_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKPIXMAPREGIONSELECTORDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPixmapRegionSelectorDialog so that we can call protected methods
class VirtualKPixmapRegionSelectorDialog final : public KPixmapRegionSelectorDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualKPixmapRegionSelectorDialog = true;

    // Virtual class public types (including callbacks)
    using KPixmapRegionSelectorDialog_MetaObject_Callback = QMetaObject* (*)();
    using KPixmapRegionSelectorDialog_Metacast_Callback = void* (*)(KPixmapRegionSelectorDialog*, const char*);
    using KPixmapRegionSelectorDialog_Metacall_Callback = int (*)(KPixmapRegionSelectorDialog*, int, int, void**);
    using KPixmapRegionSelectorDialog_SetVisible_Callback = void (*)(KPixmapRegionSelectorDialog*, bool);
    using KPixmapRegionSelectorDialog_SizeHint_Callback = QSize* (*)();
    using KPixmapRegionSelectorDialog_MinimumSizeHint_Callback = QSize* (*)();
    using KPixmapRegionSelectorDialog_Open_Callback = void (*)();
    using KPixmapRegionSelectorDialog_Exec_Callback = int (*)();
    using KPixmapRegionSelectorDialog_Done_Callback = void (*)(KPixmapRegionSelectorDialog*, int);
    using KPixmapRegionSelectorDialog_Accept_Callback = void (*)();
    using KPixmapRegionSelectorDialog_Reject_Callback = void (*)();
    using KPixmapRegionSelectorDialog_KeyPressEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QKeyEvent*);
    using KPixmapRegionSelectorDialog_CloseEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QCloseEvent*);
    using KPixmapRegionSelectorDialog_ShowEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QShowEvent*);
    using KPixmapRegionSelectorDialog_ResizeEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QResizeEvent*);
    using KPixmapRegionSelectorDialog_ContextMenuEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QContextMenuEvent*);
    using KPixmapRegionSelectorDialog_EventFilter_Callback = bool (*)(KPixmapRegionSelectorDialog*, QObject*, QEvent*);
    using KPixmapRegionSelectorDialog_DevType_Callback = int (*)();
    using KPixmapRegionSelectorDialog_HeightForWidth_Callback = int (*)(const KPixmapRegionSelectorDialog*, int);
    using KPixmapRegionSelectorDialog_HasHeightForWidth_Callback = bool (*)();
    using KPixmapRegionSelectorDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using KPixmapRegionSelectorDialog_Event_Callback = bool (*)(KPixmapRegionSelectorDialog*, QEvent*);
    using KPixmapRegionSelectorDialog_MousePressEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QMouseEvent*);
    using KPixmapRegionSelectorDialog_MouseReleaseEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QMouseEvent*);
    using KPixmapRegionSelectorDialog_MouseDoubleClickEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QMouseEvent*);
    using KPixmapRegionSelectorDialog_MouseMoveEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QMouseEvent*);
    using KPixmapRegionSelectorDialog_WheelEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QWheelEvent*);
    using KPixmapRegionSelectorDialog_KeyReleaseEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QKeyEvent*);
    using KPixmapRegionSelectorDialog_FocusInEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QFocusEvent*);
    using KPixmapRegionSelectorDialog_FocusOutEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QFocusEvent*);
    using KPixmapRegionSelectorDialog_EnterEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QEnterEvent*);
    using KPixmapRegionSelectorDialog_LeaveEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QEvent*);
    using KPixmapRegionSelectorDialog_PaintEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QPaintEvent*);
    using KPixmapRegionSelectorDialog_MoveEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QMoveEvent*);
    using KPixmapRegionSelectorDialog_TabletEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QTabletEvent*);
    using KPixmapRegionSelectorDialog_ActionEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QActionEvent*);
    using KPixmapRegionSelectorDialog_DragEnterEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QDragEnterEvent*);
    using KPixmapRegionSelectorDialog_DragMoveEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QDragMoveEvent*);
    using KPixmapRegionSelectorDialog_DragLeaveEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QDragLeaveEvent*);
    using KPixmapRegionSelectorDialog_DropEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QDropEvent*);
    using KPixmapRegionSelectorDialog_HideEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QHideEvent*);
    using KPixmapRegionSelectorDialog_NativeEvent_Callback = bool (*)(KPixmapRegionSelectorDialog*, libqt_string, void*, intptr_t*);
    using KPixmapRegionSelectorDialog_ChangeEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QEvent*);
    using KPixmapRegionSelectorDialog_Metric_Callback = int (*)(const KPixmapRegionSelectorDialog*, int);
    using KPixmapRegionSelectorDialog_InitPainter_Callback = void (*)(const KPixmapRegionSelectorDialog*, QPainter*);
    using KPixmapRegionSelectorDialog_Redirected_Callback = QPaintDevice* (*)(const KPixmapRegionSelectorDialog*, QPoint*);
    using KPixmapRegionSelectorDialog_SharedPainter_Callback = QPainter* (*)();
    using KPixmapRegionSelectorDialog_InputMethodEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QInputMethodEvent*);
    using KPixmapRegionSelectorDialog_InputMethodQuery_Callback = QVariant* (*)(const KPixmapRegionSelectorDialog*, int);
    using KPixmapRegionSelectorDialog_FocusNextPrevChild_Callback = bool (*)(KPixmapRegionSelectorDialog*, bool);
    using KPixmapRegionSelectorDialog_TimerEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QTimerEvent*);
    using KPixmapRegionSelectorDialog_ChildEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QChildEvent*);
    using KPixmapRegionSelectorDialog_CustomEvent_Callback = void (*)(KPixmapRegionSelectorDialog*, QEvent*);
    using KPixmapRegionSelectorDialog_ConnectNotify_Callback = void (*)(KPixmapRegionSelectorDialog*, QMetaMethod*);
    using KPixmapRegionSelectorDialog_DisconnectNotify_Callback = void (*)(KPixmapRegionSelectorDialog*, QMetaMethod*);
    using KPixmapRegionSelectorDialog_AdjustPosition_Callback = void (*)(KPixmapRegionSelectorDialog*, QWidget*);
    using KPixmapRegionSelectorDialog_UpdateMicroFocus_Callback = void (*)();
    using KPixmapRegionSelectorDialog_Create_Callback = void (*)();
    using KPixmapRegionSelectorDialog_Destroy_Callback = void (*)();
    using KPixmapRegionSelectorDialog_FocusNextChild_Callback = bool (*)();
    using KPixmapRegionSelectorDialog_FocusPreviousChild_Callback = bool (*)();
    using KPixmapRegionSelectorDialog_Sender_Callback = QObject* (*)();
    using KPixmapRegionSelectorDialog_SenderSignalIndex_Callback = int (*)();
    using KPixmapRegionSelectorDialog_Receivers_Callback = int (*)(const KPixmapRegionSelectorDialog*, const char*);
    using KPixmapRegionSelectorDialog_IsSignalConnected_Callback = bool (*)(const KPixmapRegionSelectorDialog*, QMetaMethod*);
    using KPixmapRegionSelectorDialog_GetDecodedMetricF_Callback = double (*)(const KPixmapRegionSelectorDialog*, int, int);

  protected:
    // Instance callback storage
    KPixmapRegionSelectorDialog_MetaObject_Callback kpixmapregionselectordialog_metaobject_callback = nullptr;
    KPixmapRegionSelectorDialog_Metacast_Callback kpixmapregionselectordialog_metacast_callback = nullptr;
    KPixmapRegionSelectorDialog_Metacall_Callback kpixmapregionselectordialog_metacall_callback = nullptr;
    KPixmapRegionSelectorDialog_SetVisible_Callback kpixmapregionselectordialog_setvisible_callback = nullptr;
    KPixmapRegionSelectorDialog_SizeHint_Callback kpixmapregionselectordialog_sizehint_callback = nullptr;
    KPixmapRegionSelectorDialog_MinimumSizeHint_Callback kpixmapregionselectordialog_minimumsizehint_callback = nullptr;
    KPixmapRegionSelectorDialog_Open_Callback kpixmapregionselectordialog_open_callback = nullptr;
    KPixmapRegionSelectorDialog_Exec_Callback kpixmapregionselectordialog_exec_callback = nullptr;
    KPixmapRegionSelectorDialog_Done_Callback kpixmapregionselectordialog_done_callback = nullptr;
    KPixmapRegionSelectorDialog_Accept_Callback kpixmapregionselectordialog_accept_callback = nullptr;
    KPixmapRegionSelectorDialog_Reject_Callback kpixmapregionselectordialog_reject_callback = nullptr;
    KPixmapRegionSelectorDialog_KeyPressEvent_Callback kpixmapregionselectordialog_keypressevent_callback = nullptr;
    KPixmapRegionSelectorDialog_CloseEvent_Callback kpixmapregionselectordialog_closeevent_callback = nullptr;
    KPixmapRegionSelectorDialog_ShowEvent_Callback kpixmapregionselectordialog_showevent_callback = nullptr;
    KPixmapRegionSelectorDialog_ResizeEvent_Callback kpixmapregionselectordialog_resizeevent_callback = nullptr;
    KPixmapRegionSelectorDialog_ContextMenuEvent_Callback kpixmapregionselectordialog_contextmenuevent_callback = nullptr;
    KPixmapRegionSelectorDialog_EventFilter_Callback kpixmapregionselectordialog_eventfilter_callback = nullptr;
    KPixmapRegionSelectorDialog_DevType_Callback kpixmapregionselectordialog_devtype_callback = nullptr;
    KPixmapRegionSelectorDialog_HeightForWidth_Callback kpixmapregionselectordialog_heightforwidth_callback = nullptr;
    KPixmapRegionSelectorDialog_HasHeightForWidth_Callback kpixmapregionselectordialog_hasheightforwidth_callback = nullptr;
    KPixmapRegionSelectorDialog_PaintEngine_Callback kpixmapregionselectordialog_paintengine_callback = nullptr;
    KPixmapRegionSelectorDialog_Event_Callback kpixmapregionselectordialog_event_callback = nullptr;
    KPixmapRegionSelectorDialog_MousePressEvent_Callback kpixmapregionselectordialog_mousepressevent_callback = nullptr;
    KPixmapRegionSelectorDialog_MouseReleaseEvent_Callback kpixmapregionselectordialog_mousereleaseevent_callback = nullptr;
    KPixmapRegionSelectorDialog_MouseDoubleClickEvent_Callback kpixmapregionselectordialog_mousedoubleclickevent_callback = nullptr;
    KPixmapRegionSelectorDialog_MouseMoveEvent_Callback kpixmapregionselectordialog_mousemoveevent_callback = nullptr;
    KPixmapRegionSelectorDialog_WheelEvent_Callback kpixmapregionselectordialog_wheelevent_callback = nullptr;
    KPixmapRegionSelectorDialog_KeyReleaseEvent_Callback kpixmapregionselectordialog_keyreleaseevent_callback = nullptr;
    KPixmapRegionSelectorDialog_FocusInEvent_Callback kpixmapregionselectordialog_focusinevent_callback = nullptr;
    KPixmapRegionSelectorDialog_FocusOutEvent_Callback kpixmapregionselectordialog_focusoutevent_callback = nullptr;
    KPixmapRegionSelectorDialog_EnterEvent_Callback kpixmapregionselectordialog_enterevent_callback = nullptr;
    KPixmapRegionSelectorDialog_LeaveEvent_Callback kpixmapregionselectordialog_leaveevent_callback = nullptr;
    KPixmapRegionSelectorDialog_PaintEvent_Callback kpixmapregionselectordialog_paintevent_callback = nullptr;
    KPixmapRegionSelectorDialog_MoveEvent_Callback kpixmapregionselectordialog_moveevent_callback = nullptr;
    KPixmapRegionSelectorDialog_TabletEvent_Callback kpixmapregionselectordialog_tabletevent_callback = nullptr;
    KPixmapRegionSelectorDialog_ActionEvent_Callback kpixmapregionselectordialog_actionevent_callback = nullptr;
    KPixmapRegionSelectorDialog_DragEnterEvent_Callback kpixmapregionselectordialog_dragenterevent_callback = nullptr;
    KPixmapRegionSelectorDialog_DragMoveEvent_Callback kpixmapregionselectordialog_dragmoveevent_callback = nullptr;
    KPixmapRegionSelectorDialog_DragLeaveEvent_Callback kpixmapregionselectordialog_dragleaveevent_callback = nullptr;
    KPixmapRegionSelectorDialog_DropEvent_Callback kpixmapregionselectordialog_dropevent_callback = nullptr;
    KPixmapRegionSelectorDialog_HideEvent_Callback kpixmapregionselectordialog_hideevent_callback = nullptr;
    KPixmapRegionSelectorDialog_NativeEvent_Callback kpixmapregionselectordialog_nativeevent_callback = nullptr;
    KPixmapRegionSelectorDialog_ChangeEvent_Callback kpixmapregionselectordialog_changeevent_callback = nullptr;
    KPixmapRegionSelectorDialog_Metric_Callback kpixmapregionselectordialog_metric_callback = nullptr;
    KPixmapRegionSelectorDialog_InitPainter_Callback kpixmapregionselectordialog_initpainter_callback = nullptr;
    KPixmapRegionSelectorDialog_Redirected_Callback kpixmapregionselectordialog_redirected_callback = nullptr;
    KPixmapRegionSelectorDialog_SharedPainter_Callback kpixmapregionselectordialog_sharedpainter_callback = nullptr;
    KPixmapRegionSelectorDialog_InputMethodEvent_Callback kpixmapregionselectordialog_inputmethodevent_callback = nullptr;
    KPixmapRegionSelectorDialog_InputMethodQuery_Callback kpixmapregionselectordialog_inputmethodquery_callback = nullptr;
    KPixmapRegionSelectorDialog_FocusNextPrevChild_Callback kpixmapregionselectordialog_focusnextprevchild_callback = nullptr;
    KPixmapRegionSelectorDialog_TimerEvent_Callback kpixmapregionselectordialog_timerevent_callback = nullptr;
    KPixmapRegionSelectorDialog_ChildEvent_Callback kpixmapregionselectordialog_childevent_callback = nullptr;
    KPixmapRegionSelectorDialog_CustomEvent_Callback kpixmapregionselectordialog_customevent_callback = nullptr;
    KPixmapRegionSelectorDialog_ConnectNotify_Callback kpixmapregionselectordialog_connectnotify_callback = nullptr;
    KPixmapRegionSelectorDialog_DisconnectNotify_Callback kpixmapregionselectordialog_disconnectnotify_callback = nullptr;
    KPixmapRegionSelectorDialog_AdjustPosition_Callback kpixmapregionselectordialog_adjustposition_callback = nullptr;
    KPixmapRegionSelectorDialog_UpdateMicroFocus_Callback kpixmapregionselectordialog_updatemicrofocus_callback = nullptr;
    KPixmapRegionSelectorDialog_Create_Callback kpixmapregionselectordialog_create_callback = nullptr;
    KPixmapRegionSelectorDialog_Destroy_Callback kpixmapregionselectordialog_destroy_callback = nullptr;
    KPixmapRegionSelectorDialog_FocusNextChild_Callback kpixmapregionselectordialog_focusnextchild_callback = nullptr;
    KPixmapRegionSelectorDialog_FocusPreviousChild_Callback kpixmapregionselectordialog_focuspreviouschild_callback = nullptr;
    KPixmapRegionSelectorDialog_Sender_Callback kpixmapregionselectordialog_sender_callback = nullptr;
    KPixmapRegionSelectorDialog_SenderSignalIndex_Callback kpixmapregionselectordialog_sendersignalindex_callback = nullptr;
    KPixmapRegionSelectorDialog_Receivers_Callback kpixmapregionselectordialog_receivers_callback = nullptr;
    KPixmapRegionSelectorDialog_IsSignalConnected_Callback kpixmapregionselectordialog_issignalconnected_callback = nullptr;
    KPixmapRegionSelectorDialog_GetDecodedMetricF_Callback kpixmapregionselectordialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool kpixmapregionselectordialog_metaobject_isbase = false;
    mutable bool kpixmapregionselectordialog_metacast_isbase = false;
    mutable bool kpixmapregionselectordialog_metacall_isbase = false;
    mutable bool kpixmapregionselectordialog_setvisible_isbase = false;
    mutable bool kpixmapregionselectordialog_sizehint_isbase = false;
    mutable bool kpixmapregionselectordialog_minimumsizehint_isbase = false;
    mutable bool kpixmapregionselectordialog_open_isbase = false;
    mutable bool kpixmapregionselectordialog_exec_isbase = false;
    mutable bool kpixmapregionselectordialog_done_isbase = false;
    mutable bool kpixmapregionselectordialog_accept_isbase = false;
    mutable bool kpixmapregionselectordialog_reject_isbase = false;
    mutable bool kpixmapregionselectordialog_keypressevent_isbase = false;
    mutable bool kpixmapregionselectordialog_closeevent_isbase = false;
    mutable bool kpixmapregionselectordialog_showevent_isbase = false;
    mutable bool kpixmapregionselectordialog_resizeevent_isbase = false;
    mutable bool kpixmapregionselectordialog_contextmenuevent_isbase = false;
    mutable bool kpixmapregionselectordialog_eventfilter_isbase = false;
    mutable bool kpixmapregionselectordialog_devtype_isbase = false;
    mutable bool kpixmapregionselectordialog_heightforwidth_isbase = false;
    mutable bool kpixmapregionselectordialog_hasheightforwidth_isbase = false;
    mutable bool kpixmapregionselectordialog_paintengine_isbase = false;
    mutable bool kpixmapregionselectordialog_event_isbase = false;
    mutable bool kpixmapregionselectordialog_mousepressevent_isbase = false;
    mutable bool kpixmapregionselectordialog_mousereleaseevent_isbase = false;
    mutable bool kpixmapregionselectordialog_mousedoubleclickevent_isbase = false;
    mutable bool kpixmapregionselectordialog_mousemoveevent_isbase = false;
    mutable bool kpixmapregionselectordialog_wheelevent_isbase = false;
    mutable bool kpixmapregionselectordialog_keyreleaseevent_isbase = false;
    mutable bool kpixmapregionselectordialog_focusinevent_isbase = false;
    mutable bool kpixmapregionselectordialog_focusoutevent_isbase = false;
    mutable bool kpixmapregionselectordialog_enterevent_isbase = false;
    mutable bool kpixmapregionselectordialog_leaveevent_isbase = false;
    mutable bool kpixmapregionselectordialog_paintevent_isbase = false;
    mutable bool kpixmapregionselectordialog_moveevent_isbase = false;
    mutable bool kpixmapregionselectordialog_tabletevent_isbase = false;
    mutable bool kpixmapregionselectordialog_actionevent_isbase = false;
    mutable bool kpixmapregionselectordialog_dragenterevent_isbase = false;
    mutable bool kpixmapregionselectordialog_dragmoveevent_isbase = false;
    mutable bool kpixmapregionselectordialog_dragleaveevent_isbase = false;
    mutable bool kpixmapregionselectordialog_dropevent_isbase = false;
    mutable bool kpixmapregionselectordialog_hideevent_isbase = false;
    mutable bool kpixmapregionselectordialog_nativeevent_isbase = false;
    mutable bool kpixmapregionselectordialog_changeevent_isbase = false;
    mutable bool kpixmapregionselectordialog_metric_isbase = false;
    mutable bool kpixmapregionselectordialog_initpainter_isbase = false;
    mutable bool kpixmapregionselectordialog_redirected_isbase = false;
    mutable bool kpixmapregionselectordialog_sharedpainter_isbase = false;
    mutable bool kpixmapregionselectordialog_inputmethodevent_isbase = false;
    mutable bool kpixmapregionselectordialog_inputmethodquery_isbase = false;
    mutable bool kpixmapregionselectordialog_focusnextprevchild_isbase = false;
    mutable bool kpixmapregionselectordialog_timerevent_isbase = false;
    mutable bool kpixmapregionselectordialog_childevent_isbase = false;
    mutable bool kpixmapregionselectordialog_customevent_isbase = false;
    mutable bool kpixmapregionselectordialog_connectnotify_isbase = false;
    mutable bool kpixmapregionselectordialog_disconnectnotify_isbase = false;
    mutable bool kpixmapregionselectordialog_adjustposition_isbase = false;
    mutable bool kpixmapregionselectordialog_updatemicrofocus_isbase = false;
    mutable bool kpixmapregionselectordialog_create_isbase = false;
    mutable bool kpixmapregionselectordialog_destroy_isbase = false;
    mutable bool kpixmapregionselectordialog_focusnextchild_isbase = false;
    mutable bool kpixmapregionselectordialog_focuspreviouschild_isbase = false;
    mutable bool kpixmapregionselectordialog_sender_isbase = false;
    mutable bool kpixmapregionselectordialog_sendersignalindex_isbase = false;
    mutable bool kpixmapregionselectordialog_receivers_isbase = false;
    mutable bool kpixmapregionselectordialog_issignalconnected_isbase = false;
    mutable bool kpixmapregionselectordialog_getdecodedmetricf_isbase = false;

  public:
    VirtualKPixmapRegionSelectorDialog(QWidget* parent) : KPixmapRegionSelectorDialog(parent) {};
    VirtualKPixmapRegionSelectorDialog() : KPixmapRegionSelectorDialog() {};

    // Callback setters
    inline void setKPixmapRegionSelectorDialog_MetaObject_Callback(KPixmapRegionSelectorDialog_MetaObject_Callback cb) { kpixmapregionselectordialog_metaobject_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Metacast_Callback(KPixmapRegionSelectorDialog_Metacast_Callback cb) { kpixmapregionselectordialog_metacast_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Metacall_Callback(KPixmapRegionSelectorDialog_Metacall_Callback cb) { kpixmapregionselectordialog_metacall_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_SetVisible_Callback(KPixmapRegionSelectorDialog_SetVisible_Callback cb) { kpixmapregionselectordialog_setvisible_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_SizeHint_Callback(KPixmapRegionSelectorDialog_SizeHint_Callback cb) { kpixmapregionselectordialog_sizehint_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_MinimumSizeHint_Callback(KPixmapRegionSelectorDialog_MinimumSizeHint_Callback cb) { kpixmapregionselectordialog_minimumsizehint_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Open_Callback(KPixmapRegionSelectorDialog_Open_Callback cb) { kpixmapregionselectordialog_open_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Exec_Callback(KPixmapRegionSelectorDialog_Exec_Callback cb) { kpixmapregionselectordialog_exec_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Done_Callback(KPixmapRegionSelectorDialog_Done_Callback cb) { kpixmapregionselectordialog_done_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Accept_Callback(KPixmapRegionSelectorDialog_Accept_Callback cb) { kpixmapregionselectordialog_accept_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Reject_Callback(KPixmapRegionSelectorDialog_Reject_Callback cb) { kpixmapregionselectordialog_reject_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_KeyPressEvent_Callback(KPixmapRegionSelectorDialog_KeyPressEvent_Callback cb) { kpixmapregionselectordialog_keypressevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_CloseEvent_Callback(KPixmapRegionSelectorDialog_CloseEvent_Callback cb) { kpixmapregionselectordialog_closeevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_ShowEvent_Callback(KPixmapRegionSelectorDialog_ShowEvent_Callback cb) { kpixmapregionselectordialog_showevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_ResizeEvent_Callback(KPixmapRegionSelectorDialog_ResizeEvent_Callback cb) { kpixmapregionselectordialog_resizeevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_ContextMenuEvent_Callback(KPixmapRegionSelectorDialog_ContextMenuEvent_Callback cb) { kpixmapregionselectordialog_contextmenuevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_EventFilter_Callback(KPixmapRegionSelectorDialog_EventFilter_Callback cb) { kpixmapregionselectordialog_eventfilter_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_DevType_Callback(KPixmapRegionSelectorDialog_DevType_Callback cb) { kpixmapregionselectordialog_devtype_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_HeightForWidth_Callback(KPixmapRegionSelectorDialog_HeightForWidth_Callback cb) { kpixmapregionselectordialog_heightforwidth_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_HasHeightForWidth_Callback(KPixmapRegionSelectorDialog_HasHeightForWidth_Callback cb) { kpixmapregionselectordialog_hasheightforwidth_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_PaintEngine_Callback(KPixmapRegionSelectorDialog_PaintEngine_Callback cb) { kpixmapregionselectordialog_paintengine_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Event_Callback(KPixmapRegionSelectorDialog_Event_Callback cb) { kpixmapregionselectordialog_event_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_MousePressEvent_Callback(KPixmapRegionSelectorDialog_MousePressEvent_Callback cb) { kpixmapregionselectordialog_mousepressevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_MouseReleaseEvent_Callback(KPixmapRegionSelectorDialog_MouseReleaseEvent_Callback cb) { kpixmapregionselectordialog_mousereleaseevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_MouseDoubleClickEvent_Callback(KPixmapRegionSelectorDialog_MouseDoubleClickEvent_Callback cb) { kpixmapregionselectordialog_mousedoubleclickevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_MouseMoveEvent_Callback(KPixmapRegionSelectorDialog_MouseMoveEvent_Callback cb) { kpixmapregionselectordialog_mousemoveevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_WheelEvent_Callback(KPixmapRegionSelectorDialog_WheelEvent_Callback cb) { kpixmapregionselectordialog_wheelevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_KeyReleaseEvent_Callback(KPixmapRegionSelectorDialog_KeyReleaseEvent_Callback cb) { kpixmapregionselectordialog_keyreleaseevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_FocusInEvent_Callback(KPixmapRegionSelectorDialog_FocusInEvent_Callback cb) { kpixmapregionselectordialog_focusinevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_FocusOutEvent_Callback(KPixmapRegionSelectorDialog_FocusOutEvent_Callback cb) { kpixmapregionselectordialog_focusoutevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_EnterEvent_Callback(KPixmapRegionSelectorDialog_EnterEvent_Callback cb) { kpixmapregionselectordialog_enterevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_LeaveEvent_Callback(KPixmapRegionSelectorDialog_LeaveEvent_Callback cb) { kpixmapregionselectordialog_leaveevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_PaintEvent_Callback(KPixmapRegionSelectorDialog_PaintEvent_Callback cb) { kpixmapregionselectordialog_paintevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_MoveEvent_Callback(KPixmapRegionSelectorDialog_MoveEvent_Callback cb) { kpixmapregionselectordialog_moveevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_TabletEvent_Callback(KPixmapRegionSelectorDialog_TabletEvent_Callback cb) { kpixmapregionselectordialog_tabletevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_ActionEvent_Callback(KPixmapRegionSelectorDialog_ActionEvent_Callback cb) { kpixmapregionselectordialog_actionevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_DragEnterEvent_Callback(KPixmapRegionSelectorDialog_DragEnterEvent_Callback cb) { kpixmapregionselectordialog_dragenterevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_DragMoveEvent_Callback(KPixmapRegionSelectorDialog_DragMoveEvent_Callback cb) { kpixmapregionselectordialog_dragmoveevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_DragLeaveEvent_Callback(KPixmapRegionSelectorDialog_DragLeaveEvent_Callback cb) { kpixmapregionselectordialog_dragleaveevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_DropEvent_Callback(KPixmapRegionSelectorDialog_DropEvent_Callback cb) { kpixmapregionselectordialog_dropevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_HideEvent_Callback(KPixmapRegionSelectorDialog_HideEvent_Callback cb) { kpixmapregionselectordialog_hideevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_NativeEvent_Callback(KPixmapRegionSelectorDialog_NativeEvent_Callback cb) { kpixmapregionselectordialog_nativeevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_ChangeEvent_Callback(KPixmapRegionSelectorDialog_ChangeEvent_Callback cb) { kpixmapregionselectordialog_changeevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Metric_Callback(KPixmapRegionSelectorDialog_Metric_Callback cb) { kpixmapregionselectordialog_metric_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_InitPainter_Callback(KPixmapRegionSelectorDialog_InitPainter_Callback cb) { kpixmapregionselectordialog_initpainter_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Redirected_Callback(KPixmapRegionSelectorDialog_Redirected_Callback cb) { kpixmapregionselectordialog_redirected_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_SharedPainter_Callback(KPixmapRegionSelectorDialog_SharedPainter_Callback cb) { kpixmapregionselectordialog_sharedpainter_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_InputMethodEvent_Callback(KPixmapRegionSelectorDialog_InputMethodEvent_Callback cb) { kpixmapregionselectordialog_inputmethodevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_InputMethodQuery_Callback(KPixmapRegionSelectorDialog_InputMethodQuery_Callback cb) { kpixmapregionselectordialog_inputmethodquery_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_FocusNextPrevChild_Callback(KPixmapRegionSelectorDialog_FocusNextPrevChild_Callback cb) { kpixmapregionselectordialog_focusnextprevchild_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_TimerEvent_Callback(KPixmapRegionSelectorDialog_TimerEvent_Callback cb) { kpixmapregionselectordialog_timerevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_ChildEvent_Callback(KPixmapRegionSelectorDialog_ChildEvent_Callback cb) { kpixmapregionselectordialog_childevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_CustomEvent_Callback(KPixmapRegionSelectorDialog_CustomEvent_Callback cb) { kpixmapregionselectordialog_customevent_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_ConnectNotify_Callback(KPixmapRegionSelectorDialog_ConnectNotify_Callback cb) { kpixmapregionselectordialog_connectnotify_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_DisconnectNotify_Callback(KPixmapRegionSelectorDialog_DisconnectNotify_Callback cb) { kpixmapregionselectordialog_disconnectnotify_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_AdjustPosition_Callback(KPixmapRegionSelectorDialog_AdjustPosition_Callback cb) { kpixmapregionselectordialog_adjustposition_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_UpdateMicroFocus_Callback(KPixmapRegionSelectorDialog_UpdateMicroFocus_Callback cb) { kpixmapregionselectordialog_updatemicrofocus_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Create_Callback(KPixmapRegionSelectorDialog_Create_Callback cb) { kpixmapregionselectordialog_create_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Destroy_Callback(KPixmapRegionSelectorDialog_Destroy_Callback cb) { kpixmapregionselectordialog_destroy_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_FocusNextChild_Callback(KPixmapRegionSelectorDialog_FocusNextChild_Callback cb) { kpixmapregionselectordialog_focusnextchild_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_FocusPreviousChild_Callback(KPixmapRegionSelectorDialog_FocusPreviousChild_Callback cb) { kpixmapregionselectordialog_focuspreviouschild_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Sender_Callback(KPixmapRegionSelectorDialog_Sender_Callback cb) { kpixmapregionselectordialog_sender_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_SenderSignalIndex_Callback(KPixmapRegionSelectorDialog_SenderSignalIndex_Callback cb) { kpixmapregionselectordialog_sendersignalindex_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_Receivers_Callback(KPixmapRegionSelectorDialog_Receivers_Callback cb) { kpixmapregionselectordialog_receivers_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_IsSignalConnected_Callback(KPixmapRegionSelectorDialog_IsSignalConnected_Callback cb) { kpixmapregionselectordialog_issignalconnected_callback = cb; }
    inline void setKPixmapRegionSelectorDialog_GetDecodedMetricF_Callback(KPixmapRegionSelectorDialog_GetDecodedMetricF_Callback cb) { kpixmapregionselectordialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKPixmapRegionSelectorDialog_MetaObject_IsBase(bool value) const { kpixmapregionselectordialog_metaobject_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Metacast_IsBase(bool value) const { kpixmapregionselectordialog_metacast_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Metacall_IsBase(bool value) const { kpixmapregionselectordialog_metacall_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_SetVisible_IsBase(bool value) const { kpixmapregionselectordialog_setvisible_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_SizeHint_IsBase(bool value) const { kpixmapregionselectordialog_sizehint_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_MinimumSizeHint_IsBase(bool value) const { kpixmapregionselectordialog_minimumsizehint_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Open_IsBase(bool value) const { kpixmapregionselectordialog_open_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Exec_IsBase(bool value) const { kpixmapregionselectordialog_exec_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Done_IsBase(bool value) const { kpixmapregionselectordialog_done_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Accept_IsBase(bool value) const { kpixmapregionselectordialog_accept_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Reject_IsBase(bool value) const { kpixmapregionselectordialog_reject_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_KeyPressEvent_IsBase(bool value) const { kpixmapregionselectordialog_keypressevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_CloseEvent_IsBase(bool value) const { kpixmapregionselectordialog_closeevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_ShowEvent_IsBase(bool value) const { kpixmapregionselectordialog_showevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_ResizeEvent_IsBase(bool value) const { kpixmapregionselectordialog_resizeevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_ContextMenuEvent_IsBase(bool value) const { kpixmapregionselectordialog_contextmenuevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_EventFilter_IsBase(bool value) const { kpixmapregionselectordialog_eventfilter_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_DevType_IsBase(bool value) const { kpixmapregionselectordialog_devtype_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_HeightForWidth_IsBase(bool value) const { kpixmapregionselectordialog_heightforwidth_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_HasHeightForWidth_IsBase(bool value) const { kpixmapregionselectordialog_hasheightforwidth_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_PaintEngine_IsBase(bool value) const { kpixmapregionselectordialog_paintengine_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Event_IsBase(bool value) const { kpixmapregionselectordialog_event_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_MousePressEvent_IsBase(bool value) const { kpixmapregionselectordialog_mousepressevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_MouseReleaseEvent_IsBase(bool value) const { kpixmapregionselectordialog_mousereleaseevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_MouseDoubleClickEvent_IsBase(bool value) const { kpixmapregionselectordialog_mousedoubleclickevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_MouseMoveEvent_IsBase(bool value) const { kpixmapregionselectordialog_mousemoveevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_WheelEvent_IsBase(bool value) const { kpixmapregionselectordialog_wheelevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_KeyReleaseEvent_IsBase(bool value) const { kpixmapregionselectordialog_keyreleaseevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_FocusInEvent_IsBase(bool value) const { kpixmapregionselectordialog_focusinevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_FocusOutEvent_IsBase(bool value) const { kpixmapregionselectordialog_focusoutevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_EnterEvent_IsBase(bool value) const { kpixmapregionselectordialog_enterevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_LeaveEvent_IsBase(bool value) const { kpixmapregionselectordialog_leaveevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_PaintEvent_IsBase(bool value) const { kpixmapregionselectordialog_paintevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_MoveEvent_IsBase(bool value) const { kpixmapregionselectordialog_moveevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_TabletEvent_IsBase(bool value) const { kpixmapregionselectordialog_tabletevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_ActionEvent_IsBase(bool value) const { kpixmapregionselectordialog_actionevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_DragEnterEvent_IsBase(bool value) const { kpixmapregionselectordialog_dragenterevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_DragMoveEvent_IsBase(bool value) const { kpixmapregionselectordialog_dragmoveevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_DragLeaveEvent_IsBase(bool value) const { kpixmapregionselectordialog_dragleaveevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_DropEvent_IsBase(bool value) const { kpixmapregionselectordialog_dropevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_HideEvent_IsBase(bool value) const { kpixmapregionselectordialog_hideevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_NativeEvent_IsBase(bool value) const { kpixmapregionselectordialog_nativeevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_ChangeEvent_IsBase(bool value) const { kpixmapregionselectordialog_changeevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Metric_IsBase(bool value) const { kpixmapregionselectordialog_metric_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_InitPainter_IsBase(bool value) const { kpixmapregionselectordialog_initpainter_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Redirected_IsBase(bool value) const { kpixmapregionselectordialog_redirected_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_SharedPainter_IsBase(bool value) const { kpixmapregionselectordialog_sharedpainter_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_InputMethodEvent_IsBase(bool value) const { kpixmapregionselectordialog_inputmethodevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_InputMethodQuery_IsBase(bool value) const { kpixmapregionselectordialog_inputmethodquery_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_FocusNextPrevChild_IsBase(bool value) const { kpixmapregionselectordialog_focusnextprevchild_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_TimerEvent_IsBase(bool value) const { kpixmapregionselectordialog_timerevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_ChildEvent_IsBase(bool value) const { kpixmapregionselectordialog_childevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_CustomEvent_IsBase(bool value) const { kpixmapregionselectordialog_customevent_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_ConnectNotify_IsBase(bool value) const { kpixmapregionselectordialog_connectnotify_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_DisconnectNotify_IsBase(bool value) const { kpixmapregionselectordialog_disconnectnotify_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_AdjustPosition_IsBase(bool value) const { kpixmapregionselectordialog_adjustposition_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_UpdateMicroFocus_IsBase(bool value) const { kpixmapregionselectordialog_updatemicrofocus_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Create_IsBase(bool value) const { kpixmapregionselectordialog_create_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Destroy_IsBase(bool value) const { kpixmapregionselectordialog_destroy_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_FocusNextChild_IsBase(bool value) const { kpixmapregionselectordialog_focusnextchild_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_FocusPreviousChild_IsBase(bool value) const { kpixmapregionselectordialog_focuspreviouschild_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Sender_IsBase(bool value) const { kpixmapregionselectordialog_sender_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_SenderSignalIndex_IsBase(bool value) const { kpixmapregionselectordialog_sendersignalindex_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_Receivers_IsBase(bool value) const { kpixmapregionselectordialog_receivers_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_IsSignalConnected_IsBase(bool value) const { kpixmapregionselectordialog_issignalconnected_isbase = value; }
    inline void setKPixmapRegionSelectorDialog_GetDecodedMetricF_IsBase(bool value) const { kpixmapregionselectordialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpixmapregionselectordialog_metaobject_isbase) {
            kpixmapregionselectordialog_metaobject_isbase = false;
            return KPixmapRegionSelectorDialog::metaObject();
        }
        auto metaobject_cb = kpixmapregionselectordialog_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KPixmapRegionSelectorDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpixmapregionselectordialog_metacast_isbase) {
            kpixmapregionselectordialog_metacast_isbase = false;
            return KPixmapRegionSelectorDialog::qt_metacast(param1);
        }
        auto metacast_cb = kpixmapregionselectordialog_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KPixmapRegionSelectorDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpixmapregionselectordialog_metacall_isbase) {
            kpixmapregionselectordialog_metacall_isbase = false;
            return KPixmapRegionSelectorDialog::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kpixmapregionselectordialog_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPixmapRegionSelectorDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpixmapregionselectordialog_setvisible_isbase) {
            kpixmapregionselectordialog_setvisible_isbase = false;
            KPixmapRegionSelectorDialog::setVisible(visible);
            return;
        }
        auto setvisible_cb = kpixmapregionselectordialog_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpixmapregionselectordialog_sizehint_isbase) {
            kpixmapregionselectordialog_sizehint_isbase = false;
            return KPixmapRegionSelectorDialog::sizeHint();
        }
        auto sizehint_cb = kpixmapregionselectordialog_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KPixmapRegionSelectorDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpixmapregionselectordialog_minimumsizehint_isbase) {
            kpixmapregionselectordialog_minimumsizehint_isbase = false;
            return KPixmapRegionSelectorDialog::minimumSizeHint();
        }
        auto minimumsizehint_cb = kpixmapregionselectordialog_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KPixmapRegionSelectorDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (kpixmapregionselectordialog_open_isbase) {
            kpixmapregionselectordialog_open_isbase = false;
            KPixmapRegionSelectorDialog::open();
            return;
        }
        auto open_cb = kpixmapregionselectordialog_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        KPixmapRegionSelectorDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (kpixmapregionselectordialog_exec_isbase) {
            kpixmapregionselectordialog_exec_isbase = false;
            return KPixmapRegionSelectorDialog::exec();
        }
        auto exec_cb = kpixmapregionselectordialog_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return KPixmapRegionSelectorDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (kpixmapregionselectordialog_done_isbase) {
            kpixmapregionselectordialog_done_isbase = false;
            KPixmapRegionSelectorDialog::done(param1);
            return;
        }
        auto done_cb = kpixmapregionselectordialog_done_callback;
        if (done_cb) {
            int cbval1 = param1;

            done_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (kpixmapregionselectordialog_accept_isbase) {
            kpixmapregionselectordialog_accept_isbase = false;
            KPixmapRegionSelectorDialog::accept();
            return;
        }
        auto accept_cb = kpixmapregionselectordialog_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        KPixmapRegionSelectorDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (kpixmapregionselectordialog_reject_isbase) {
            kpixmapregionselectordialog_reject_isbase = false;
            KPixmapRegionSelectorDialog::reject();
            return;
        }
        auto reject_cb = kpixmapregionselectordialog_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        KPixmapRegionSelectorDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kpixmapregionselectordialog_keypressevent_isbase) {
            kpixmapregionselectordialog_keypressevent_isbase = false;
            KPixmapRegionSelectorDialog::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = kpixmapregionselectordialog_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (kpixmapregionselectordialog_closeevent_isbase) {
            kpixmapregionselectordialog_closeevent_isbase = false;
            KPixmapRegionSelectorDialog::closeEvent(param1);
            return;
        }
        auto closeevent_cb = kpixmapregionselectordialog_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (kpixmapregionselectordialog_showevent_isbase) {
            kpixmapregionselectordialog_showevent_isbase = false;
            KPixmapRegionSelectorDialog::showEvent(param1);
            return;
        }
        auto showevent_cb = kpixmapregionselectordialog_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kpixmapregionselectordialog_resizeevent_isbase) {
            kpixmapregionselectordialog_resizeevent_isbase = false;
            KPixmapRegionSelectorDialog::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = kpixmapregionselectordialog_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (kpixmapregionselectordialog_contextmenuevent_isbase) {
            kpixmapregionselectordialog_contextmenuevent_isbase = false;
            KPixmapRegionSelectorDialog::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = kpixmapregionselectordialog_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (kpixmapregionselectordialog_eventfilter_isbase) {
            kpixmapregionselectordialog_eventfilter_isbase = false;
            return KPixmapRegionSelectorDialog::eventFilter(param1, param2);
        }
        auto eventfilter_cb = kpixmapregionselectordialog_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPixmapRegionSelectorDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpixmapregionselectordialog_devtype_isbase) {
            kpixmapregionselectordialog_devtype_isbase = false;
            return KPixmapRegionSelectorDialog::devType();
        }
        auto devtype_cb = kpixmapregionselectordialog_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KPixmapRegionSelectorDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpixmapregionselectordialog_heightforwidth_isbase) {
            kpixmapregionselectordialog_heightforwidth_isbase = false;
            return KPixmapRegionSelectorDialog::heightForWidth(param1);
        }
        auto heightforwidth_cb = kpixmapregionselectordialog_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPixmapRegionSelectorDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpixmapregionselectordialog_hasheightforwidth_isbase) {
            kpixmapregionselectordialog_hasheightforwidth_isbase = false;
            return KPixmapRegionSelectorDialog::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = kpixmapregionselectordialog_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KPixmapRegionSelectorDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpixmapregionselectordialog_paintengine_isbase) {
            kpixmapregionselectordialog_paintengine_isbase = false;
            return KPixmapRegionSelectorDialog::paintEngine();
        }
        auto paintengine_cb = kpixmapregionselectordialog_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KPixmapRegionSelectorDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpixmapregionselectordialog_event_isbase) {
            kpixmapregionselectordialog_event_isbase = false;
            return KPixmapRegionSelectorDialog::event(event);
        }
        auto event_cb = kpixmapregionselectordialog_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KPixmapRegionSelectorDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpixmapregionselectordialog_mousepressevent_isbase) {
            kpixmapregionselectordialog_mousepressevent_isbase = false;
            KPixmapRegionSelectorDialog::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = kpixmapregionselectordialog_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpixmapregionselectordialog_mousereleaseevent_isbase) {
            kpixmapregionselectordialog_mousereleaseevent_isbase = false;
            KPixmapRegionSelectorDialog::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = kpixmapregionselectordialog_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpixmapregionselectordialog_mousedoubleclickevent_isbase) {
            kpixmapregionselectordialog_mousedoubleclickevent_isbase = false;
            KPixmapRegionSelectorDialog::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = kpixmapregionselectordialog_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpixmapregionselectordialog_mousemoveevent_isbase) {
            kpixmapregionselectordialog_mousemoveevent_isbase = false;
            KPixmapRegionSelectorDialog::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = kpixmapregionselectordialog_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpixmapregionselectordialog_wheelevent_isbase) {
            kpixmapregionselectordialog_wheelevent_isbase = false;
            KPixmapRegionSelectorDialog::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = kpixmapregionselectordialog_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpixmapregionselectordialog_keyreleaseevent_isbase) {
            kpixmapregionselectordialog_keyreleaseevent_isbase = false;
            KPixmapRegionSelectorDialog::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = kpixmapregionselectordialog_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpixmapregionselectordialog_focusinevent_isbase) {
            kpixmapregionselectordialog_focusinevent_isbase = false;
            KPixmapRegionSelectorDialog::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = kpixmapregionselectordialog_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpixmapregionselectordialog_focusoutevent_isbase) {
            kpixmapregionselectordialog_focusoutevent_isbase = false;
            KPixmapRegionSelectorDialog::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = kpixmapregionselectordialog_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpixmapregionselectordialog_enterevent_isbase) {
            kpixmapregionselectordialog_enterevent_isbase = false;
            KPixmapRegionSelectorDialog::enterEvent(event);
            return;
        }
        auto enterevent_cb = kpixmapregionselectordialog_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpixmapregionselectordialog_leaveevent_isbase) {
            kpixmapregionselectordialog_leaveevent_isbase = false;
            KPixmapRegionSelectorDialog::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = kpixmapregionselectordialog_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpixmapregionselectordialog_paintevent_isbase) {
            kpixmapregionselectordialog_paintevent_isbase = false;
            KPixmapRegionSelectorDialog::paintEvent(event);
            return;
        }
        auto paintevent_cb = kpixmapregionselectordialog_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpixmapregionselectordialog_moveevent_isbase) {
            kpixmapregionselectordialog_moveevent_isbase = false;
            KPixmapRegionSelectorDialog::moveEvent(event);
            return;
        }
        auto moveevent_cb = kpixmapregionselectordialog_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpixmapregionselectordialog_tabletevent_isbase) {
            kpixmapregionselectordialog_tabletevent_isbase = false;
            KPixmapRegionSelectorDialog::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = kpixmapregionselectordialog_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpixmapregionselectordialog_actionevent_isbase) {
            kpixmapregionselectordialog_actionevent_isbase = false;
            KPixmapRegionSelectorDialog::actionEvent(event);
            return;
        }
        auto actionevent_cb = kpixmapregionselectordialog_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpixmapregionselectordialog_dragenterevent_isbase) {
            kpixmapregionselectordialog_dragenterevent_isbase = false;
            KPixmapRegionSelectorDialog::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = kpixmapregionselectordialog_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpixmapregionselectordialog_dragmoveevent_isbase) {
            kpixmapregionselectordialog_dragmoveevent_isbase = false;
            KPixmapRegionSelectorDialog::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = kpixmapregionselectordialog_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpixmapregionselectordialog_dragleaveevent_isbase) {
            kpixmapregionselectordialog_dragleaveevent_isbase = false;
            KPixmapRegionSelectorDialog::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = kpixmapregionselectordialog_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpixmapregionselectordialog_dropevent_isbase) {
            kpixmapregionselectordialog_dropevent_isbase = false;
            KPixmapRegionSelectorDialog::dropEvent(event);
            return;
        }
        auto dropevent_cb = kpixmapregionselectordialog_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpixmapregionselectordialog_hideevent_isbase) {
            kpixmapregionselectordialog_hideevent_isbase = false;
            KPixmapRegionSelectorDialog::hideEvent(event);
            return;
        }
        auto hideevent_cb = kpixmapregionselectordialog_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpixmapregionselectordialog_nativeevent_isbase) {
            kpixmapregionselectordialog_nativeevent_isbase = false;
            return KPixmapRegionSelectorDialog::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = kpixmapregionselectordialog_nativeevent_callback;
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
        return KPixmapRegionSelectorDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpixmapregionselectordialog_changeevent_isbase) {
            kpixmapregionselectordialog_changeevent_isbase = false;
            KPixmapRegionSelectorDialog::changeEvent(param1);
            return;
        }
        auto changeevent_cb = kpixmapregionselectordialog_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpixmapregionselectordialog_metric_isbase) {
            kpixmapregionselectordialog_metric_isbase = false;
            return KPixmapRegionSelectorDialog::metric(param1);
        }
        auto metric_cb = kpixmapregionselectordialog_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPixmapRegionSelectorDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpixmapregionselectordialog_initpainter_isbase) {
            kpixmapregionselectordialog_initpainter_isbase = false;
            KPixmapRegionSelectorDialog::initPainter(painter);
            return;
        }
        auto initpainter_cb = kpixmapregionselectordialog_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpixmapregionselectordialog_redirected_isbase) {
            kpixmapregionselectordialog_redirected_isbase = false;
            return KPixmapRegionSelectorDialog::redirected(offset);
        }
        auto redirected_cb = kpixmapregionselectordialog_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KPixmapRegionSelectorDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpixmapregionselectordialog_sharedpainter_isbase) {
            kpixmapregionselectordialog_sharedpainter_isbase = false;
            return KPixmapRegionSelectorDialog::sharedPainter();
        }
        auto sharedpainter_cb = kpixmapregionselectordialog_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KPixmapRegionSelectorDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpixmapregionselectordialog_inputmethodevent_isbase) {
            kpixmapregionselectordialog_inputmethodevent_isbase = false;
            KPixmapRegionSelectorDialog::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = kpixmapregionselectordialog_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpixmapregionselectordialog_inputmethodquery_isbase) {
            kpixmapregionselectordialog_inputmethodquery_isbase = false;
            return KPixmapRegionSelectorDialog::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = kpixmapregionselectordialog_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KPixmapRegionSelectorDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpixmapregionselectordialog_focusnextprevchild_isbase) {
            kpixmapregionselectordialog_focusnextprevchild_isbase = false;
            return KPixmapRegionSelectorDialog::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = kpixmapregionselectordialog_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KPixmapRegionSelectorDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpixmapregionselectordialog_timerevent_isbase) {
            kpixmapregionselectordialog_timerevent_isbase = false;
            KPixmapRegionSelectorDialog::timerEvent(event);
            return;
        }
        auto timerevent_cb = kpixmapregionselectordialog_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpixmapregionselectordialog_childevent_isbase) {
            kpixmapregionselectordialog_childevent_isbase = false;
            KPixmapRegionSelectorDialog::childEvent(event);
            return;
        }
        auto childevent_cb = kpixmapregionselectordialog_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpixmapregionselectordialog_customevent_isbase) {
            kpixmapregionselectordialog_customevent_isbase = false;
            KPixmapRegionSelectorDialog::customEvent(event);
            return;
        }
        auto customevent_cb = kpixmapregionselectordialog_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpixmapregionselectordialog_connectnotify_isbase) {
            kpixmapregionselectordialog_connectnotify_isbase = false;
            KPixmapRegionSelectorDialog::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kpixmapregionselectordialog_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpixmapregionselectordialog_disconnectnotify_isbase) {
            kpixmapregionselectordialog_disconnectnotify_isbase = false;
            KPixmapRegionSelectorDialog::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kpixmapregionselectordialog_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (kpixmapregionselectordialog_adjustposition_isbase) {
            kpixmapregionselectordialog_adjustposition_isbase = false;
            KPixmapRegionSelectorDialog::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = kpixmapregionselectordialog_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        KPixmapRegionSelectorDialog::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (kpixmapregionselectordialog_updatemicrofocus_isbase) {
            kpixmapregionselectordialog_updatemicrofocus_isbase = false;
            KPixmapRegionSelectorDialog::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = kpixmapregionselectordialog_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KPixmapRegionSelectorDialog::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (kpixmapregionselectordialog_create_isbase) {
            kpixmapregionselectordialog_create_isbase = false;
            KPixmapRegionSelectorDialog::create();
            return;
        }
        auto create_cb = kpixmapregionselectordialog_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KPixmapRegionSelectorDialog::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (kpixmapregionselectordialog_destroy_isbase) {
            kpixmapregionselectordialog_destroy_isbase = false;
            KPixmapRegionSelectorDialog::destroy();
            return;
        }
        auto destroy_cb = kpixmapregionselectordialog_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KPixmapRegionSelectorDialog::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (kpixmapregionselectordialog_focusnextchild_isbase) {
            kpixmapregionselectordialog_focusnextchild_isbase = false;
            return KPixmapRegionSelectorDialog::focusNextChild();
        }
        auto focusnextchild_cb = kpixmapregionselectordialog_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KPixmapRegionSelectorDialog::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (kpixmapregionselectordialog_focuspreviouschild_isbase) {
            kpixmapregionselectordialog_focuspreviouschild_isbase = false;
            return KPixmapRegionSelectorDialog::focusPreviousChild();
        }
        auto focuspreviouschild_cb = kpixmapregionselectordialog_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KPixmapRegionSelectorDialog::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kpixmapregionselectordialog_sender_isbase) {
            kpixmapregionselectordialog_sender_isbase = false;
            return KPixmapRegionSelectorDialog::sender();
        }
        auto sender_cb = kpixmapregionselectordialog_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KPixmapRegionSelectorDialog::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kpixmapregionselectordialog_sendersignalindex_isbase) {
            kpixmapregionselectordialog_sendersignalindex_isbase = false;
            return KPixmapRegionSelectorDialog::senderSignalIndex();
        }
        auto sendersignalindex_cb = kpixmapregionselectordialog_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KPixmapRegionSelectorDialog::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kpixmapregionselectordialog_receivers_isbase) {
            kpixmapregionselectordialog_receivers_isbase = false;
            return KPixmapRegionSelectorDialog::receivers(signal);
        }
        auto receivers_cb = kpixmapregionselectordialog_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPixmapRegionSelectorDialog::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kpixmapregionselectordialog_issignalconnected_isbase) {
            kpixmapregionselectordialog_issignalconnected_isbase = false;
            return KPixmapRegionSelectorDialog::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kpixmapregionselectordialog_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KPixmapRegionSelectorDialog::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (kpixmapregionselectordialog_getdecodedmetricf_isbase) {
            kpixmapregionselectordialog_getdecodedmetricf_isbase = false;
            return KPixmapRegionSelectorDialog::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = kpixmapregionselectordialog_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KPixmapRegionSelectorDialog::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void KPixmapRegionSelectorDialog_KeyPressEvent(KPixmapRegionSelectorDialog* self, QKeyEvent* param1);
    friend void KPixmapRegionSelectorDialog_SuperKeyPressEvent(KPixmapRegionSelectorDialog* self, QKeyEvent* param1);
    friend void KPixmapRegionSelectorDialog_CloseEvent(KPixmapRegionSelectorDialog* self, QCloseEvent* param1);
    friend void KPixmapRegionSelectorDialog_SuperCloseEvent(KPixmapRegionSelectorDialog* self, QCloseEvent* param1);
    friend void KPixmapRegionSelectorDialog_ShowEvent(KPixmapRegionSelectorDialog* self, QShowEvent* param1);
    friend void KPixmapRegionSelectorDialog_SuperShowEvent(KPixmapRegionSelectorDialog* self, QShowEvent* param1);
    friend void KPixmapRegionSelectorDialog_ResizeEvent(KPixmapRegionSelectorDialog* self, QResizeEvent* param1);
    friend void KPixmapRegionSelectorDialog_SuperResizeEvent(KPixmapRegionSelectorDialog* self, QResizeEvent* param1);
    friend void KPixmapRegionSelectorDialog_ContextMenuEvent(KPixmapRegionSelectorDialog* self, QContextMenuEvent* param1);
    friend void KPixmapRegionSelectorDialog_SuperContextMenuEvent(KPixmapRegionSelectorDialog* self, QContextMenuEvent* param1);
    friend bool KPixmapRegionSelectorDialog_EventFilter(KPixmapRegionSelectorDialog* self, QObject* param1, QEvent* param2);
    friend bool KPixmapRegionSelectorDialog_SuperEventFilter(KPixmapRegionSelectorDialog* self, QObject* param1, QEvent* param2);
    friend bool KPixmapRegionSelectorDialog_Event(KPixmapRegionSelectorDialog* self, QEvent* event);
    friend bool KPixmapRegionSelectorDialog_SuperEvent(KPixmapRegionSelectorDialog* self, QEvent* event);
    friend void KPixmapRegionSelectorDialog_MousePressEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperMousePressEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorDialog_MouseReleaseEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperMouseReleaseEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorDialog_MouseDoubleClickEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperMouseDoubleClickEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorDialog_MouseMoveEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperMouseMoveEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorDialog_WheelEvent(KPixmapRegionSelectorDialog* self, QWheelEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperWheelEvent(KPixmapRegionSelectorDialog* self, QWheelEvent* event);
    friend void KPixmapRegionSelectorDialog_KeyReleaseEvent(KPixmapRegionSelectorDialog* self, QKeyEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperKeyReleaseEvent(KPixmapRegionSelectorDialog* self, QKeyEvent* event);
    friend void KPixmapRegionSelectorDialog_FocusInEvent(KPixmapRegionSelectorDialog* self, QFocusEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperFocusInEvent(KPixmapRegionSelectorDialog* self, QFocusEvent* event);
    friend void KPixmapRegionSelectorDialog_FocusOutEvent(KPixmapRegionSelectorDialog* self, QFocusEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperFocusOutEvent(KPixmapRegionSelectorDialog* self, QFocusEvent* event);
    friend void KPixmapRegionSelectorDialog_EnterEvent(KPixmapRegionSelectorDialog* self, QEnterEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperEnterEvent(KPixmapRegionSelectorDialog* self, QEnterEvent* event);
    friend void KPixmapRegionSelectorDialog_LeaveEvent(KPixmapRegionSelectorDialog* self, QEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperLeaveEvent(KPixmapRegionSelectorDialog* self, QEvent* event);
    friend void KPixmapRegionSelectorDialog_PaintEvent(KPixmapRegionSelectorDialog* self, QPaintEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperPaintEvent(KPixmapRegionSelectorDialog* self, QPaintEvent* event);
    friend void KPixmapRegionSelectorDialog_MoveEvent(KPixmapRegionSelectorDialog* self, QMoveEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperMoveEvent(KPixmapRegionSelectorDialog* self, QMoveEvent* event);
    friend void KPixmapRegionSelectorDialog_TabletEvent(KPixmapRegionSelectorDialog* self, QTabletEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperTabletEvent(KPixmapRegionSelectorDialog* self, QTabletEvent* event);
    friend void KPixmapRegionSelectorDialog_ActionEvent(KPixmapRegionSelectorDialog* self, QActionEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperActionEvent(KPixmapRegionSelectorDialog* self, QActionEvent* event);
    friend void KPixmapRegionSelectorDialog_DragEnterEvent(KPixmapRegionSelectorDialog* self, QDragEnterEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperDragEnterEvent(KPixmapRegionSelectorDialog* self, QDragEnterEvent* event);
    friend void KPixmapRegionSelectorDialog_DragMoveEvent(KPixmapRegionSelectorDialog* self, QDragMoveEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperDragMoveEvent(KPixmapRegionSelectorDialog* self, QDragMoveEvent* event);
    friend void KPixmapRegionSelectorDialog_DragLeaveEvent(KPixmapRegionSelectorDialog* self, QDragLeaveEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperDragLeaveEvent(KPixmapRegionSelectorDialog* self, QDragLeaveEvent* event);
    friend void KPixmapRegionSelectorDialog_DropEvent(KPixmapRegionSelectorDialog* self, QDropEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperDropEvent(KPixmapRegionSelectorDialog* self, QDropEvent* event);
    friend void KPixmapRegionSelectorDialog_HideEvent(KPixmapRegionSelectorDialog* self, QHideEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperHideEvent(KPixmapRegionSelectorDialog* self, QHideEvent* event);
    friend bool KPixmapRegionSelectorDialog_NativeEvent(KPixmapRegionSelectorDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KPixmapRegionSelectorDialog_SuperNativeEvent(KPixmapRegionSelectorDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KPixmapRegionSelectorDialog_ChangeEvent(KPixmapRegionSelectorDialog* self, QEvent* param1);
    friend void KPixmapRegionSelectorDialog_SuperChangeEvent(KPixmapRegionSelectorDialog* self, QEvent* param1);
    friend int KPixmapRegionSelectorDialog_Metric(const KPixmapRegionSelectorDialog* self, int param1);
    friend int KPixmapRegionSelectorDialog_SuperMetric(const KPixmapRegionSelectorDialog* self, int param1);
    friend void KPixmapRegionSelectorDialog_InitPainter(const KPixmapRegionSelectorDialog* self, QPainter* painter);
    friend void KPixmapRegionSelectorDialog_SuperInitPainter(const KPixmapRegionSelectorDialog* self, QPainter* painter);
    friend QPaintDevice* KPixmapRegionSelectorDialog_Redirected(const KPixmapRegionSelectorDialog* self, QPoint* offset);
    friend QPaintDevice* KPixmapRegionSelectorDialog_SuperRedirected(const KPixmapRegionSelectorDialog* self, QPoint* offset);
    friend QPainter* KPixmapRegionSelectorDialog_SharedPainter(const KPixmapRegionSelectorDialog* self);
    friend QPainter* KPixmapRegionSelectorDialog_SuperSharedPainter(const KPixmapRegionSelectorDialog* self);
    friend void KPixmapRegionSelectorDialog_InputMethodEvent(KPixmapRegionSelectorDialog* self, QInputMethodEvent* param1);
    friend void KPixmapRegionSelectorDialog_SuperInputMethodEvent(KPixmapRegionSelectorDialog* self, QInputMethodEvent* param1);
    friend bool KPixmapRegionSelectorDialog_FocusNextPrevChild(KPixmapRegionSelectorDialog* self, bool next);
    friend bool KPixmapRegionSelectorDialog_SuperFocusNextPrevChild(KPixmapRegionSelectorDialog* self, bool next);
    friend void KPixmapRegionSelectorDialog_TimerEvent(KPixmapRegionSelectorDialog* self, QTimerEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperTimerEvent(KPixmapRegionSelectorDialog* self, QTimerEvent* event);
    friend void KPixmapRegionSelectorDialog_ChildEvent(KPixmapRegionSelectorDialog* self, QChildEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperChildEvent(KPixmapRegionSelectorDialog* self, QChildEvent* event);
    friend void KPixmapRegionSelectorDialog_CustomEvent(KPixmapRegionSelectorDialog* self, QEvent* event);
    friend void KPixmapRegionSelectorDialog_SuperCustomEvent(KPixmapRegionSelectorDialog* self, QEvent* event);
    friend void KPixmapRegionSelectorDialog_ConnectNotify(KPixmapRegionSelectorDialog* self, const QMetaMethod* signal);
    friend void KPixmapRegionSelectorDialog_SuperConnectNotify(KPixmapRegionSelectorDialog* self, const QMetaMethod* signal);
    friend void KPixmapRegionSelectorDialog_DisconnectNotify(KPixmapRegionSelectorDialog* self, const QMetaMethod* signal);
    friend void KPixmapRegionSelectorDialog_SuperDisconnectNotify(KPixmapRegionSelectorDialog* self, const QMetaMethod* signal);
    friend void KPixmapRegionSelectorDialog_AdjustPosition(KPixmapRegionSelectorDialog* self, QWidget* param1);
    friend void KPixmapRegionSelectorDialog_SuperAdjustPosition(KPixmapRegionSelectorDialog* self, QWidget* param1);
    friend void KPixmapRegionSelectorDialog_UpdateMicroFocus(KPixmapRegionSelectorDialog* self);
    friend void KPixmapRegionSelectorDialog_SuperUpdateMicroFocus(KPixmapRegionSelectorDialog* self);
    friend void KPixmapRegionSelectorDialog_Create(KPixmapRegionSelectorDialog* self);
    friend void KPixmapRegionSelectorDialog_SuperCreate(KPixmapRegionSelectorDialog* self);
    friend void KPixmapRegionSelectorDialog_Destroy(KPixmapRegionSelectorDialog* self);
    friend void KPixmapRegionSelectorDialog_SuperDestroy(KPixmapRegionSelectorDialog* self);
    friend bool KPixmapRegionSelectorDialog_FocusNextChild(KPixmapRegionSelectorDialog* self);
    friend bool KPixmapRegionSelectorDialog_SuperFocusNextChild(KPixmapRegionSelectorDialog* self);
    friend bool KPixmapRegionSelectorDialog_FocusPreviousChild(KPixmapRegionSelectorDialog* self);
    friend bool KPixmapRegionSelectorDialog_SuperFocusPreviousChild(KPixmapRegionSelectorDialog* self);
    friend QObject* KPixmapRegionSelectorDialog_Sender(const KPixmapRegionSelectorDialog* self);
    friend QObject* KPixmapRegionSelectorDialog_SuperSender(const KPixmapRegionSelectorDialog* self);
    friend int KPixmapRegionSelectorDialog_SenderSignalIndex(const KPixmapRegionSelectorDialog* self);
    friend int KPixmapRegionSelectorDialog_SuperSenderSignalIndex(const KPixmapRegionSelectorDialog* self);
    friend int KPixmapRegionSelectorDialog_Receivers(const KPixmapRegionSelectorDialog* self, const char* signal);
    friend int KPixmapRegionSelectorDialog_SuperReceivers(const KPixmapRegionSelectorDialog* self, const char* signal);
    friend bool KPixmapRegionSelectorDialog_IsSignalConnected(const KPixmapRegionSelectorDialog* self, const QMetaMethod* signal);
    friend bool KPixmapRegionSelectorDialog_SuperIsSignalConnected(const KPixmapRegionSelectorDialog* self, const QMetaMethod* signal);
    friend double KPixmapRegionSelectorDialog_GetDecodedMetricF(const KPixmapRegionSelectorDialog* self, int metricA, int metricB);
    friend double KPixmapRegionSelectorDialog_SuperGetDecodedMetricF(const KPixmapRegionSelectorDialog* self, int metricA, int metricB);
};

#endif
