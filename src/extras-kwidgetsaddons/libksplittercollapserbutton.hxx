#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKSPLITTERCOLLAPSERBUTTON_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKSPLITTERCOLLAPSERBUTTON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSplitterCollapserButton so that we can call protected methods
class VirtualKSplitterCollapserButton final : public KSplitterCollapserButton {

  public:
    // Virtual class boolean flag
    bool isVirtualKSplitterCollapserButton = true;

    // Virtual class public types (including callbacks)
    using KSplitterCollapserButton_MetaObject_Callback = QMetaObject* (*)();
    using KSplitterCollapserButton_Metacast_Callback = void* (*)(KSplitterCollapserButton*, const char*);
    using KSplitterCollapserButton_Metacall_Callback = int (*)(KSplitterCollapserButton*, int, int, void**);
    using KSplitterCollapserButton_SizeHint_Callback = QSize* (*)();
    using KSplitterCollapserButton_EventFilter_Callback = bool (*)(KSplitterCollapserButton*, QObject*, QEvent*);
    using KSplitterCollapserButton_PaintEvent_Callback = void (*)(KSplitterCollapserButton*, QPaintEvent*);
    using KSplitterCollapserButton_EnterEvent_Callback = void (*)(KSplitterCollapserButton*, QEnterEvent*);
    using KSplitterCollapserButton_LeaveEvent_Callback = void (*)(KSplitterCollapserButton*, QEvent*);
    using KSplitterCollapserButton_ShowEvent_Callback = void (*)(KSplitterCollapserButton*, QShowEvent*);
    using KSplitterCollapserButton_MinimumSizeHint_Callback = QSize* (*)();
    using KSplitterCollapserButton_Event_Callback = bool (*)(KSplitterCollapserButton*, QEvent*);
    using KSplitterCollapserButton_MousePressEvent_Callback = void (*)(KSplitterCollapserButton*, QMouseEvent*);
    using KSplitterCollapserButton_MouseReleaseEvent_Callback = void (*)(KSplitterCollapserButton*, QMouseEvent*);
    using KSplitterCollapserButton_ActionEvent_Callback = void (*)(KSplitterCollapserButton*, QActionEvent*);
    using KSplitterCollapserButton_TimerEvent_Callback = void (*)(KSplitterCollapserButton*, QTimerEvent*);
    using KSplitterCollapserButton_ChangeEvent_Callback = void (*)(KSplitterCollapserButton*, QEvent*);
    using KSplitterCollapserButton_HitButton_Callback = bool (*)(const KSplitterCollapserButton*, QPoint*);
    using KSplitterCollapserButton_CheckStateSet_Callback = void (*)();
    using KSplitterCollapserButton_NextCheckState_Callback = void (*)();
    using KSplitterCollapserButton_InitStyleOption_Callback = void (*)(const KSplitterCollapserButton*, QStyleOptionToolButton*);
    using KSplitterCollapserButton_KeyPressEvent_Callback = void (*)(KSplitterCollapserButton*, QKeyEvent*);
    using KSplitterCollapserButton_KeyReleaseEvent_Callback = void (*)(KSplitterCollapserButton*, QKeyEvent*);
    using KSplitterCollapserButton_MouseMoveEvent_Callback = void (*)(KSplitterCollapserButton*, QMouseEvent*);
    using KSplitterCollapserButton_FocusInEvent_Callback = void (*)(KSplitterCollapserButton*, QFocusEvent*);
    using KSplitterCollapserButton_FocusOutEvent_Callback = void (*)(KSplitterCollapserButton*, QFocusEvent*);
    using KSplitterCollapserButton_DevType_Callback = int (*)();
    using KSplitterCollapserButton_SetVisible_Callback = void (*)(KSplitterCollapserButton*, bool);
    using KSplitterCollapserButton_HeightForWidth_Callback = int (*)(const KSplitterCollapserButton*, int);
    using KSplitterCollapserButton_HasHeightForWidth_Callback = bool (*)();
    using KSplitterCollapserButton_PaintEngine_Callback = QPaintEngine* (*)();
    using KSplitterCollapserButton_MouseDoubleClickEvent_Callback = void (*)(KSplitterCollapserButton*, QMouseEvent*);
    using KSplitterCollapserButton_WheelEvent_Callback = void (*)(KSplitterCollapserButton*, QWheelEvent*);
    using KSplitterCollapserButton_MoveEvent_Callback = void (*)(KSplitterCollapserButton*, QMoveEvent*);
    using KSplitterCollapserButton_ResizeEvent_Callback = void (*)(KSplitterCollapserButton*, QResizeEvent*);
    using KSplitterCollapserButton_CloseEvent_Callback = void (*)(KSplitterCollapserButton*, QCloseEvent*);
    using KSplitterCollapserButton_ContextMenuEvent_Callback = void (*)(KSplitterCollapserButton*, QContextMenuEvent*);
    using KSplitterCollapserButton_TabletEvent_Callback = void (*)(KSplitterCollapserButton*, QTabletEvent*);
    using KSplitterCollapserButton_DragEnterEvent_Callback = void (*)(KSplitterCollapserButton*, QDragEnterEvent*);
    using KSplitterCollapserButton_DragMoveEvent_Callback = void (*)(KSplitterCollapserButton*, QDragMoveEvent*);
    using KSplitterCollapserButton_DragLeaveEvent_Callback = void (*)(KSplitterCollapserButton*, QDragLeaveEvent*);
    using KSplitterCollapserButton_DropEvent_Callback = void (*)(KSplitterCollapserButton*, QDropEvent*);
    using KSplitterCollapserButton_HideEvent_Callback = void (*)(KSplitterCollapserButton*, QHideEvent*);
    using KSplitterCollapserButton_NativeEvent_Callback = bool (*)(KSplitterCollapserButton*, libqt_string, void*, intptr_t*);
    using KSplitterCollapserButton_Metric_Callback = int (*)(const KSplitterCollapserButton*, int);
    using KSplitterCollapserButton_InitPainter_Callback = void (*)(const KSplitterCollapserButton*, QPainter*);
    using KSplitterCollapserButton_Redirected_Callback = QPaintDevice* (*)(const KSplitterCollapserButton*, QPoint*);
    using KSplitterCollapserButton_SharedPainter_Callback = QPainter* (*)();
    using KSplitterCollapserButton_InputMethodEvent_Callback = void (*)(KSplitterCollapserButton*, QInputMethodEvent*);
    using KSplitterCollapserButton_InputMethodQuery_Callback = QVariant* (*)(const KSplitterCollapserButton*, int);
    using KSplitterCollapserButton_FocusNextPrevChild_Callback = bool (*)(KSplitterCollapserButton*, bool);
    using KSplitterCollapserButton_ChildEvent_Callback = void (*)(KSplitterCollapserButton*, QChildEvent*);
    using KSplitterCollapserButton_CustomEvent_Callback = void (*)(KSplitterCollapserButton*, QEvent*);
    using KSplitterCollapserButton_ConnectNotify_Callback = void (*)(KSplitterCollapserButton*, QMetaMethod*);
    using KSplitterCollapserButton_DisconnectNotify_Callback = void (*)(KSplitterCollapserButton*, QMetaMethod*);
    using KSplitterCollapserButton_UpdateMicroFocus_Callback = void (*)();
    using KSplitterCollapserButton_Create_Callback = void (*)();
    using KSplitterCollapserButton_Destroy_Callback = void (*)();
    using KSplitterCollapserButton_FocusNextChild_Callback = bool (*)();
    using KSplitterCollapserButton_FocusPreviousChild_Callback = bool (*)();
    using KSplitterCollapserButton_Sender_Callback = QObject* (*)();
    using KSplitterCollapserButton_SenderSignalIndex_Callback = int (*)();
    using KSplitterCollapserButton_Receivers_Callback = int (*)(const KSplitterCollapserButton*, const char*);
    using KSplitterCollapserButton_IsSignalConnected_Callback = bool (*)(const KSplitterCollapserButton*, QMetaMethod*);
    using KSplitterCollapserButton_GetDecodedMetricF_Callback = double (*)(const KSplitterCollapserButton*, int, int);

  protected:
    // Instance callback storage
    KSplitterCollapserButton_MetaObject_Callback ksplittercollapserbutton_metaobject_callback = nullptr;
    KSplitterCollapserButton_Metacast_Callback ksplittercollapserbutton_metacast_callback = nullptr;
    KSplitterCollapserButton_Metacall_Callback ksplittercollapserbutton_metacall_callback = nullptr;
    KSplitterCollapserButton_SizeHint_Callback ksplittercollapserbutton_sizehint_callback = nullptr;
    KSplitterCollapserButton_EventFilter_Callback ksplittercollapserbutton_eventfilter_callback = nullptr;
    KSplitterCollapserButton_PaintEvent_Callback ksplittercollapserbutton_paintevent_callback = nullptr;
    KSplitterCollapserButton_EnterEvent_Callback ksplittercollapserbutton_enterevent_callback = nullptr;
    KSplitterCollapserButton_LeaveEvent_Callback ksplittercollapserbutton_leaveevent_callback = nullptr;
    KSplitterCollapserButton_ShowEvent_Callback ksplittercollapserbutton_showevent_callback = nullptr;
    KSplitterCollapserButton_MinimumSizeHint_Callback ksplittercollapserbutton_minimumsizehint_callback = nullptr;
    KSplitterCollapserButton_Event_Callback ksplittercollapserbutton_event_callback = nullptr;
    KSplitterCollapserButton_MousePressEvent_Callback ksplittercollapserbutton_mousepressevent_callback = nullptr;
    KSplitterCollapserButton_MouseReleaseEvent_Callback ksplittercollapserbutton_mousereleaseevent_callback = nullptr;
    KSplitterCollapserButton_ActionEvent_Callback ksplittercollapserbutton_actionevent_callback = nullptr;
    KSplitterCollapserButton_TimerEvent_Callback ksplittercollapserbutton_timerevent_callback = nullptr;
    KSplitterCollapserButton_ChangeEvent_Callback ksplittercollapserbutton_changeevent_callback = nullptr;
    KSplitterCollapserButton_HitButton_Callback ksplittercollapserbutton_hitbutton_callback = nullptr;
    KSplitterCollapserButton_CheckStateSet_Callback ksplittercollapserbutton_checkstateset_callback = nullptr;
    KSplitterCollapserButton_NextCheckState_Callback ksplittercollapserbutton_nextcheckstate_callback = nullptr;
    KSplitterCollapserButton_InitStyleOption_Callback ksplittercollapserbutton_initstyleoption_callback = nullptr;
    KSplitterCollapserButton_KeyPressEvent_Callback ksplittercollapserbutton_keypressevent_callback = nullptr;
    KSplitterCollapserButton_KeyReleaseEvent_Callback ksplittercollapserbutton_keyreleaseevent_callback = nullptr;
    KSplitterCollapserButton_MouseMoveEvent_Callback ksplittercollapserbutton_mousemoveevent_callback = nullptr;
    KSplitterCollapserButton_FocusInEvent_Callback ksplittercollapserbutton_focusinevent_callback = nullptr;
    KSplitterCollapserButton_FocusOutEvent_Callback ksplittercollapserbutton_focusoutevent_callback = nullptr;
    KSplitterCollapserButton_DevType_Callback ksplittercollapserbutton_devtype_callback = nullptr;
    KSplitterCollapserButton_SetVisible_Callback ksplittercollapserbutton_setvisible_callback = nullptr;
    KSplitterCollapserButton_HeightForWidth_Callback ksplittercollapserbutton_heightforwidth_callback = nullptr;
    KSplitterCollapserButton_HasHeightForWidth_Callback ksplittercollapserbutton_hasheightforwidth_callback = nullptr;
    KSplitterCollapserButton_PaintEngine_Callback ksplittercollapserbutton_paintengine_callback = nullptr;
    KSplitterCollapserButton_MouseDoubleClickEvent_Callback ksplittercollapserbutton_mousedoubleclickevent_callback = nullptr;
    KSplitterCollapserButton_WheelEvent_Callback ksplittercollapserbutton_wheelevent_callback = nullptr;
    KSplitterCollapserButton_MoveEvent_Callback ksplittercollapserbutton_moveevent_callback = nullptr;
    KSplitterCollapserButton_ResizeEvent_Callback ksplittercollapserbutton_resizeevent_callback = nullptr;
    KSplitterCollapserButton_CloseEvent_Callback ksplittercollapserbutton_closeevent_callback = nullptr;
    KSplitterCollapserButton_ContextMenuEvent_Callback ksplittercollapserbutton_contextmenuevent_callback = nullptr;
    KSplitterCollapserButton_TabletEvent_Callback ksplittercollapserbutton_tabletevent_callback = nullptr;
    KSplitterCollapserButton_DragEnterEvent_Callback ksplittercollapserbutton_dragenterevent_callback = nullptr;
    KSplitterCollapserButton_DragMoveEvent_Callback ksplittercollapserbutton_dragmoveevent_callback = nullptr;
    KSplitterCollapserButton_DragLeaveEvent_Callback ksplittercollapserbutton_dragleaveevent_callback = nullptr;
    KSplitterCollapserButton_DropEvent_Callback ksplittercollapserbutton_dropevent_callback = nullptr;
    KSplitterCollapserButton_HideEvent_Callback ksplittercollapserbutton_hideevent_callback = nullptr;
    KSplitterCollapserButton_NativeEvent_Callback ksplittercollapserbutton_nativeevent_callback = nullptr;
    KSplitterCollapserButton_Metric_Callback ksplittercollapserbutton_metric_callback = nullptr;
    KSplitterCollapserButton_InitPainter_Callback ksplittercollapserbutton_initpainter_callback = nullptr;
    KSplitterCollapserButton_Redirected_Callback ksplittercollapserbutton_redirected_callback = nullptr;
    KSplitterCollapserButton_SharedPainter_Callback ksplittercollapserbutton_sharedpainter_callback = nullptr;
    KSplitterCollapserButton_InputMethodEvent_Callback ksplittercollapserbutton_inputmethodevent_callback = nullptr;
    KSplitterCollapserButton_InputMethodQuery_Callback ksplittercollapserbutton_inputmethodquery_callback = nullptr;
    KSplitterCollapserButton_FocusNextPrevChild_Callback ksplittercollapserbutton_focusnextprevchild_callback = nullptr;
    KSplitterCollapserButton_ChildEvent_Callback ksplittercollapserbutton_childevent_callback = nullptr;
    KSplitterCollapserButton_CustomEvent_Callback ksplittercollapserbutton_customevent_callback = nullptr;
    KSplitterCollapserButton_ConnectNotify_Callback ksplittercollapserbutton_connectnotify_callback = nullptr;
    KSplitterCollapserButton_DisconnectNotify_Callback ksplittercollapserbutton_disconnectnotify_callback = nullptr;
    KSplitterCollapserButton_UpdateMicroFocus_Callback ksplittercollapserbutton_updatemicrofocus_callback = nullptr;
    KSplitterCollapserButton_Create_Callback ksplittercollapserbutton_create_callback = nullptr;
    KSplitterCollapserButton_Destroy_Callback ksplittercollapserbutton_destroy_callback = nullptr;
    KSplitterCollapserButton_FocusNextChild_Callback ksplittercollapserbutton_focusnextchild_callback = nullptr;
    KSplitterCollapserButton_FocusPreviousChild_Callback ksplittercollapserbutton_focuspreviouschild_callback = nullptr;
    KSplitterCollapserButton_Sender_Callback ksplittercollapserbutton_sender_callback = nullptr;
    KSplitterCollapserButton_SenderSignalIndex_Callback ksplittercollapserbutton_sendersignalindex_callback = nullptr;
    KSplitterCollapserButton_Receivers_Callback ksplittercollapserbutton_receivers_callback = nullptr;
    KSplitterCollapserButton_IsSignalConnected_Callback ksplittercollapserbutton_issignalconnected_callback = nullptr;
    KSplitterCollapserButton_GetDecodedMetricF_Callback ksplittercollapserbutton_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool ksplittercollapserbutton_metaobject_isbase = false;
    mutable bool ksplittercollapserbutton_metacast_isbase = false;
    mutable bool ksplittercollapserbutton_metacall_isbase = false;
    mutable bool ksplittercollapserbutton_sizehint_isbase = false;
    mutable bool ksplittercollapserbutton_eventfilter_isbase = false;
    mutable bool ksplittercollapserbutton_paintevent_isbase = false;
    mutable bool ksplittercollapserbutton_enterevent_isbase = false;
    mutable bool ksplittercollapserbutton_leaveevent_isbase = false;
    mutable bool ksplittercollapserbutton_showevent_isbase = false;
    mutable bool ksplittercollapserbutton_minimumsizehint_isbase = false;
    mutable bool ksplittercollapserbutton_event_isbase = false;
    mutable bool ksplittercollapserbutton_mousepressevent_isbase = false;
    mutable bool ksplittercollapserbutton_mousereleaseevent_isbase = false;
    mutable bool ksplittercollapserbutton_actionevent_isbase = false;
    mutable bool ksplittercollapserbutton_timerevent_isbase = false;
    mutable bool ksplittercollapserbutton_changeevent_isbase = false;
    mutable bool ksplittercollapserbutton_hitbutton_isbase = false;
    mutable bool ksplittercollapserbutton_checkstateset_isbase = false;
    mutable bool ksplittercollapserbutton_nextcheckstate_isbase = false;
    mutable bool ksplittercollapserbutton_initstyleoption_isbase = false;
    mutable bool ksplittercollapserbutton_keypressevent_isbase = false;
    mutable bool ksplittercollapserbutton_keyreleaseevent_isbase = false;
    mutable bool ksplittercollapserbutton_mousemoveevent_isbase = false;
    mutable bool ksplittercollapserbutton_focusinevent_isbase = false;
    mutable bool ksplittercollapserbutton_focusoutevent_isbase = false;
    mutable bool ksplittercollapserbutton_devtype_isbase = false;
    mutable bool ksplittercollapserbutton_setvisible_isbase = false;
    mutable bool ksplittercollapserbutton_heightforwidth_isbase = false;
    mutable bool ksplittercollapserbutton_hasheightforwidth_isbase = false;
    mutable bool ksplittercollapserbutton_paintengine_isbase = false;
    mutable bool ksplittercollapserbutton_mousedoubleclickevent_isbase = false;
    mutable bool ksplittercollapserbutton_wheelevent_isbase = false;
    mutable bool ksplittercollapserbutton_moveevent_isbase = false;
    mutable bool ksplittercollapserbutton_resizeevent_isbase = false;
    mutable bool ksplittercollapserbutton_closeevent_isbase = false;
    mutable bool ksplittercollapserbutton_contextmenuevent_isbase = false;
    mutable bool ksplittercollapserbutton_tabletevent_isbase = false;
    mutable bool ksplittercollapserbutton_dragenterevent_isbase = false;
    mutable bool ksplittercollapserbutton_dragmoveevent_isbase = false;
    mutable bool ksplittercollapserbutton_dragleaveevent_isbase = false;
    mutable bool ksplittercollapserbutton_dropevent_isbase = false;
    mutable bool ksplittercollapserbutton_hideevent_isbase = false;
    mutable bool ksplittercollapserbutton_nativeevent_isbase = false;
    mutable bool ksplittercollapserbutton_metric_isbase = false;
    mutable bool ksplittercollapserbutton_initpainter_isbase = false;
    mutable bool ksplittercollapserbutton_redirected_isbase = false;
    mutable bool ksplittercollapserbutton_sharedpainter_isbase = false;
    mutable bool ksplittercollapserbutton_inputmethodevent_isbase = false;
    mutable bool ksplittercollapserbutton_inputmethodquery_isbase = false;
    mutable bool ksplittercollapserbutton_focusnextprevchild_isbase = false;
    mutable bool ksplittercollapserbutton_childevent_isbase = false;
    mutable bool ksplittercollapserbutton_customevent_isbase = false;
    mutable bool ksplittercollapserbutton_connectnotify_isbase = false;
    mutable bool ksplittercollapserbutton_disconnectnotify_isbase = false;
    mutable bool ksplittercollapserbutton_updatemicrofocus_isbase = false;
    mutable bool ksplittercollapserbutton_create_isbase = false;
    mutable bool ksplittercollapserbutton_destroy_isbase = false;
    mutable bool ksplittercollapserbutton_focusnextchild_isbase = false;
    mutable bool ksplittercollapserbutton_focuspreviouschild_isbase = false;
    mutable bool ksplittercollapserbutton_sender_isbase = false;
    mutable bool ksplittercollapserbutton_sendersignalindex_isbase = false;
    mutable bool ksplittercollapserbutton_receivers_isbase = false;
    mutable bool ksplittercollapserbutton_issignalconnected_isbase = false;
    mutable bool ksplittercollapserbutton_getdecodedmetricf_isbase = false;

  public:
    VirtualKSplitterCollapserButton(QWidget* childWidget, QSplitter* splitter) : KSplitterCollapserButton(childWidget, splitter) {};

    // Callback setters
    inline void setKSplitterCollapserButton_MetaObject_Callback(KSplitterCollapserButton_MetaObject_Callback cb) { ksplittercollapserbutton_metaobject_callback = cb; }
    inline void setKSplitterCollapserButton_Metacast_Callback(KSplitterCollapserButton_Metacast_Callback cb) { ksplittercollapserbutton_metacast_callback = cb; }
    inline void setKSplitterCollapserButton_Metacall_Callback(KSplitterCollapserButton_Metacall_Callback cb) { ksplittercollapserbutton_metacall_callback = cb; }
    inline void setKSplitterCollapserButton_SizeHint_Callback(KSplitterCollapserButton_SizeHint_Callback cb) { ksplittercollapserbutton_sizehint_callback = cb; }
    inline void setKSplitterCollapserButton_EventFilter_Callback(KSplitterCollapserButton_EventFilter_Callback cb) { ksplittercollapserbutton_eventfilter_callback = cb; }
    inline void setKSplitterCollapserButton_PaintEvent_Callback(KSplitterCollapserButton_PaintEvent_Callback cb) { ksplittercollapserbutton_paintevent_callback = cb; }
    inline void setKSplitterCollapserButton_EnterEvent_Callback(KSplitterCollapserButton_EnterEvent_Callback cb) { ksplittercollapserbutton_enterevent_callback = cb; }
    inline void setKSplitterCollapserButton_LeaveEvent_Callback(KSplitterCollapserButton_LeaveEvent_Callback cb) { ksplittercollapserbutton_leaveevent_callback = cb; }
    inline void setKSplitterCollapserButton_ShowEvent_Callback(KSplitterCollapserButton_ShowEvent_Callback cb) { ksplittercollapserbutton_showevent_callback = cb; }
    inline void setKSplitterCollapserButton_MinimumSizeHint_Callback(KSplitterCollapserButton_MinimumSizeHint_Callback cb) { ksplittercollapserbutton_minimumsizehint_callback = cb; }
    inline void setKSplitterCollapserButton_Event_Callback(KSplitterCollapserButton_Event_Callback cb) { ksplittercollapserbutton_event_callback = cb; }
    inline void setKSplitterCollapserButton_MousePressEvent_Callback(KSplitterCollapserButton_MousePressEvent_Callback cb) { ksplittercollapserbutton_mousepressevent_callback = cb; }
    inline void setKSplitterCollapserButton_MouseReleaseEvent_Callback(KSplitterCollapserButton_MouseReleaseEvent_Callback cb) { ksplittercollapserbutton_mousereleaseevent_callback = cb; }
    inline void setKSplitterCollapserButton_ActionEvent_Callback(KSplitterCollapserButton_ActionEvent_Callback cb) { ksplittercollapserbutton_actionevent_callback = cb; }
    inline void setKSplitterCollapserButton_TimerEvent_Callback(KSplitterCollapserButton_TimerEvent_Callback cb) { ksplittercollapserbutton_timerevent_callback = cb; }
    inline void setKSplitterCollapserButton_ChangeEvent_Callback(KSplitterCollapserButton_ChangeEvent_Callback cb) { ksplittercollapserbutton_changeevent_callback = cb; }
    inline void setKSplitterCollapserButton_HitButton_Callback(KSplitterCollapserButton_HitButton_Callback cb) { ksplittercollapserbutton_hitbutton_callback = cb; }
    inline void setKSplitterCollapserButton_CheckStateSet_Callback(KSplitterCollapserButton_CheckStateSet_Callback cb) { ksplittercollapserbutton_checkstateset_callback = cb; }
    inline void setKSplitterCollapserButton_NextCheckState_Callback(KSplitterCollapserButton_NextCheckState_Callback cb) { ksplittercollapserbutton_nextcheckstate_callback = cb; }
    inline void setKSplitterCollapserButton_InitStyleOption_Callback(KSplitterCollapserButton_InitStyleOption_Callback cb) { ksplittercollapserbutton_initstyleoption_callback = cb; }
    inline void setKSplitterCollapserButton_KeyPressEvent_Callback(KSplitterCollapserButton_KeyPressEvent_Callback cb) { ksplittercollapserbutton_keypressevent_callback = cb; }
    inline void setKSplitterCollapserButton_KeyReleaseEvent_Callback(KSplitterCollapserButton_KeyReleaseEvent_Callback cb) { ksplittercollapserbutton_keyreleaseevent_callback = cb; }
    inline void setKSplitterCollapserButton_MouseMoveEvent_Callback(KSplitterCollapserButton_MouseMoveEvent_Callback cb) { ksplittercollapserbutton_mousemoveevent_callback = cb; }
    inline void setKSplitterCollapserButton_FocusInEvent_Callback(KSplitterCollapserButton_FocusInEvent_Callback cb) { ksplittercollapserbutton_focusinevent_callback = cb; }
    inline void setKSplitterCollapserButton_FocusOutEvent_Callback(KSplitterCollapserButton_FocusOutEvent_Callback cb) { ksplittercollapserbutton_focusoutevent_callback = cb; }
    inline void setKSplitterCollapserButton_DevType_Callback(KSplitterCollapserButton_DevType_Callback cb) { ksplittercollapserbutton_devtype_callback = cb; }
    inline void setKSplitterCollapserButton_SetVisible_Callback(KSplitterCollapserButton_SetVisible_Callback cb) { ksplittercollapserbutton_setvisible_callback = cb; }
    inline void setKSplitterCollapserButton_HeightForWidth_Callback(KSplitterCollapserButton_HeightForWidth_Callback cb) { ksplittercollapserbutton_heightforwidth_callback = cb; }
    inline void setKSplitterCollapserButton_HasHeightForWidth_Callback(KSplitterCollapserButton_HasHeightForWidth_Callback cb) { ksplittercollapserbutton_hasheightforwidth_callback = cb; }
    inline void setKSplitterCollapserButton_PaintEngine_Callback(KSplitterCollapserButton_PaintEngine_Callback cb) { ksplittercollapserbutton_paintengine_callback = cb; }
    inline void setKSplitterCollapserButton_MouseDoubleClickEvent_Callback(KSplitterCollapserButton_MouseDoubleClickEvent_Callback cb) { ksplittercollapserbutton_mousedoubleclickevent_callback = cb; }
    inline void setKSplitterCollapserButton_WheelEvent_Callback(KSplitterCollapserButton_WheelEvent_Callback cb) { ksplittercollapserbutton_wheelevent_callback = cb; }
    inline void setKSplitterCollapserButton_MoveEvent_Callback(KSplitterCollapserButton_MoveEvent_Callback cb) { ksplittercollapserbutton_moveevent_callback = cb; }
    inline void setKSplitterCollapserButton_ResizeEvent_Callback(KSplitterCollapserButton_ResizeEvent_Callback cb) { ksplittercollapserbutton_resizeevent_callback = cb; }
    inline void setKSplitterCollapserButton_CloseEvent_Callback(KSplitterCollapserButton_CloseEvent_Callback cb) { ksplittercollapserbutton_closeevent_callback = cb; }
    inline void setKSplitterCollapserButton_ContextMenuEvent_Callback(KSplitterCollapserButton_ContextMenuEvent_Callback cb) { ksplittercollapserbutton_contextmenuevent_callback = cb; }
    inline void setKSplitterCollapserButton_TabletEvent_Callback(KSplitterCollapserButton_TabletEvent_Callback cb) { ksplittercollapserbutton_tabletevent_callback = cb; }
    inline void setKSplitterCollapserButton_DragEnterEvent_Callback(KSplitterCollapserButton_DragEnterEvent_Callback cb) { ksplittercollapserbutton_dragenterevent_callback = cb; }
    inline void setKSplitterCollapserButton_DragMoveEvent_Callback(KSplitterCollapserButton_DragMoveEvent_Callback cb) { ksplittercollapserbutton_dragmoveevent_callback = cb; }
    inline void setKSplitterCollapserButton_DragLeaveEvent_Callback(KSplitterCollapserButton_DragLeaveEvent_Callback cb) { ksplittercollapserbutton_dragleaveevent_callback = cb; }
    inline void setKSplitterCollapserButton_DropEvent_Callback(KSplitterCollapserButton_DropEvent_Callback cb) { ksplittercollapserbutton_dropevent_callback = cb; }
    inline void setKSplitterCollapserButton_HideEvent_Callback(KSplitterCollapserButton_HideEvent_Callback cb) { ksplittercollapserbutton_hideevent_callback = cb; }
    inline void setKSplitterCollapserButton_NativeEvent_Callback(KSplitterCollapserButton_NativeEvent_Callback cb) { ksplittercollapserbutton_nativeevent_callback = cb; }
    inline void setKSplitterCollapserButton_Metric_Callback(KSplitterCollapserButton_Metric_Callback cb) { ksplittercollapserbutton_metric_callback = cb; }
    inline void setKSplitterCollapserButton_InitPainter_Callback(KSplitterCollapserButton_InitPainter_Callback cb) { ksplittercollapserbutton_initpainter_callback = cb; }
    inline void setKSplitterCollapserButton_Redirected_Callback(KSplitterCollapserButton_Redirected_Callback cb) { ksplittercollapserbutton_redirected_callback = cb; }
    inline void setKSplitterCollapserButton_SharedPainter_Callback(KSplitterCollapserButton_SharedPainter_Callback cb) { ksplittercollapserbutton_sharedpainter_callback = cb; }
    inline void setKSplitterCollapserButton_InputMethodEvent_Callback(KSplitterCollapserButton_InputMethodEvent_Callback cb) { ksplittercollapserbutton_inputmethodevent_callback = cb; }
    inline void setKSplitterCollapserButton_InputMethodQuery_Callback(KSplitterCollapserButton_InputMethodQuery_Callback cb) { ksplittercollapserbutton_inputmethodquery_callback = cb; }
    inline void setKSplitterCollapserButton_FocusNextPrevChild_Callback(KSplitterCollapserButton_FocusNextPrevChild_Callback cb) { ksplittercollapserbutton_focusnextprevchild_callback = cb; }
    inline void setKSplitterCollapserButton_ChildEvent_Callback(KSplitterCollapserButton_ChildEvent_Callback cb) { ksplittercollapserbutton_childevent_callback = cb; }
    inline void setKSplitterCollapserButton_CustomEvent_Callback(KSplitterCollapserButton_CustomEvent_Callback cb) { ksplittercollapserbutton_customevent_callback = cb; }
    inline void setKSplitterCollapserButton_ConnectNotify_Callback(KSplitterCollapserButton_ConnectNotify_Callback cb) { ksplittercollapserbutton_connectnotify_callback = cb; }
    inline void setKSplitterCollapserButton_DisconnectNotify_Callback(KSplitterCollapserButton_DisconnectNotify_Callback cb) { ksplittercollapserbutton_disconnectnotify_callback = cb; }
    inline void setKSplitterCollapserButton_UpdateMicroFocus_Callback(KSplitterCollapserButton_UpdateMicroFocus_Callback cb) { ksplittercollapserbutton_updatemicrofocus_callback = cb; }
    inline void setKSplitterCollapserButton_Create_Callback(KSplitterCollapserButton_Create_Callback cb) { ksplittercollapserbutton_create_callback = cb; }
    inline void setKSplitterCollapserButton_Destroy_Callback(KSplitterCollapserButton_Destroy_Callback cb) { ksplittercollapserbutton_destroy_callback = cb; }
    inline void setKSplitterCollapserButton_FocusNextChild_Callback(KSplitterCollapserButton_FocusNextChild_Callback cb) { ksplittercollapserbutton_focusnextchild_callback = cb; }
    inline void setKSplitterCollapserButton_FocusPreviousChild_Callback(KSplitterCollapserButton_FocusPreviousChild_Callback cb) { ksplittercollapserbutton_focuspreviouschild_callback = cb; }
    inline void setKSplitterCollapserButton_Sender_Callback(KSplitterCollapserButton_Sender_Callback cb) { ksplittercollapserbutton_sender_callback = cb; }
    inline void setKSplitterCollapserButton_SenderSignalIndex_Callback(KSplitterCollapserButton_SenderSignalIndex_Callback cb) { ksplittercollapserbutton_sendersignalindex_callback = cb; }
    inline void setKSplitterCollapserButton_Receivers_Callback(KSplitterCollapserButton_Receivers_Callback cb) { ksplittercollapserbutton_receivers_callback = cb; }
    inline void setKSplitterCollapserButton_IsSignalConnected_Callback(KSplitterCollapserButton_IsSignalConnected_Callback cb) { ksplittercollapserbutton_issignalconnected_callback = cb; }
    inline void setKSplitterCollapserButton_GetDecodedMetricF_Callback(KSplitterCollapserButton_GetDecodedMetricF_Callback cb) { ksplittercollapserbutton_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKSplitterCollapserButton_MetaObject_IsBase(bool value) const { ksplittercollapserbutton_metaobject_isbase = value; }
    inline void setKSplitterCollapserButton_Metacast_IsBase(bool value) const { ksplittercollapserbutton_metacast_isbase = value; }
    inline void setKSplitterCollapserButton_Metacall_IsBase(bool value) const { ksplittercollapserbutton_metacall_isbase = value; }
    inline void setKSplitterCollapserButton_SizeHint_IsBase(bool value) const { ksplittercollapserbutton_sizehint_isbase = value; }
    inline void setKSplitterCollapserButton_EventFilter_IsBase(bool value) const { ksplittercollapserbutton_eventfilter_isbase = value; }
    inline void setKSplitterCollapserButton_PaintEvent_IsBase(bool value) const { ksplittercollapserbutton_paintevent_isbase = value; }
    inline void setKSplitterCollapserButton_EnterEvent_IsBase(bool value) const { ksplittercollapserbutton_enterevent_isbase = value; }
    inline void setKSplitterCollapserButton_LeaveEvent_IsBase(bool value) const { ksplittercollapserbutton_leaveevent_isbase = value; }
    inline void setKSplitterCollapserButton_ShowEvent_IsBase(bool value) const { ksplittercollapserbutton_showevent_isbase = value; }
    inline void setKSplitterCollapserButton_MinimumSizeHint_IsBase(bool value) const { ksplittercollapserbutton_minimumsizehint_isbase = value; }
    inline void setKSplitterCollapserButton_Event_IsBase(bool value) const { ksplittercollapserbutton_event_isbase = value; }
    inline void setKSplitterCollapserButton_MousePressEvent_IsBase(bool value) const { ksplittercollapserbutton_mousepressevent_isbase = value; }
    inline void setKSplitterCollapserButton_MouseReleaseEvent_IsBase(bool value) const { ksplittercollapserbutton_mousereleaseevent_isbase = value; }
    inline void setKSplitterCollapserButton_ActionEvent_IsBase(bool value) const { ksplittercollapserbutton_actionevent_isbase = value; }
    inline void setKSplitterCollapserButton_TimerEvent_IsBase(bool value) const { ksplittercollapserbutton_timerevent_isbase = value; }
    inline void setKSplitterCollapserButton_ChangeEvent_IsBase(bool value) const { ksplittercollapserbutton_changeevent_isbase = value; }
    inline void setKSplitterCollapserButton_HitButton_IsBase(bool value) const { ksplittercollapserbutton_hitbutton_isbase = value; }
    inline void setKSplitterCollapserButton_CheckStateSet_IsBase(bool value) const { ksplittercollapserbutton_checkstateset_isbase = value; }
    inline void setKSplitterCollapserButton_NextCheckState_IsBase(bool value) const { ksplittercollapserbutton_nextcheckstate_isbase = value; }
    inline void setKSplitterCollapserButton_InitStyleOption_IsBase(bool value) const { ksplittercollapserbutton_initstyleoption_isbase = value; }
    inline void setKSplitterCollapserButton_KeyPressEvent_IsBase(bool value) const { ksplittercollapserbutton_keypressevent_isbase = value; }
    inline void setKSplitterCollapserButton_KeyReleaseEvent_IsBase(bool value) const { ksplittercollapserbutton_keyreleaseevent_isbase = value; }
    inline void setKSplitterCollapserButton_MouseMoveEvent_IsBase(bool value) const { ksplittercollapserbutton_mousemoveevent_isbase = value; }
    inline void setKSplitterCollapserButton_FocusInEvent_IsBase(bool value) const { ksplittercollapserbutton_focusinevent_isbase = value; }
    inline void setKSplitterCollapserButton_FocusOutEvent_IsBase(bool value) const { ksplittercollapserbutton_focusoutevent_isbase = value; }
    inline void setKSplitterCollapserButton_DevType_IsBase(bool value) const { ksplittercollapserbutton_devtype_isbase = value; }
    inline void setKSplitterCollapserButton_SetVisible_IsBase(bool value) const { ksplittercollapserbutton_setvisible_isbase = value; }
    inline void setKSplitterCollapserButton_HeightForWidth_IsBase(bool value) const { ksplittercollapserbutton_heightforwidth_isbase = value; }
    inline void setKSplitterCollapserButton_HasHeightForWidth_IsBase(bool value) const { ksplittercollapserbutton_hasheightforwidth_isbase = value; }
    inline void setKSplitterCollapserButton_PaintEngine_IsBase(bool value) const { ksplittercollapserbutton_paintengine_isbase = value; }
    inline void setKSplitterCollapserButton_MouseDoubleClickEvent_IsBase(bool value) const { ksplittercollapserbutton_mousedoubleclickevent_isbase = value; }
    inline void setKSplitterCollapserButton_WheelEvent_IsBase(bool value) const { ksplittercollapserbutton_wheelevent_isbase = value; }
    inline void setKSplitterCollapserButton_MoveEvent_IsBase(bool value) const { ksplittercollapserbutton_moveevent_isbase = value; }
    inline void setKSplitterCollapserButton_ResizeEvent_IsBase(bool value) const { ksplittercollapserbutton_resizeevent_isbase = value; }
    inline void setKSplitterCollapserButton_CloseEvent_IsBase(bool value) const { ksplittercollapserbutton_closeevent_isbase = value; }
    inline void setKSplitterCollapserButton_ContextMenuEvent_IsBase(bool value) const { ksplittercollapserbutton_contextmenuevent_isbase = value; }
    inline void setKSplitterCollapserButton_TabletEvent_IsBase(bool value) const { ksplittercollapserbutton_tabletevent_isbase = value; }
    inline void setKSplitterCollapserButton_DragEnterEvent_IsBase(bool value) const { ksplittercollapserbutton_dragenterevent_isbase = value; }
    inline void setKSplitterCollapserButton_DragMoveEvent_IsBase(bool value) const { ksplittercollapserbutton_dragmoveevent_isbase = value; }
    inline void setKSplitterCollapserButton_DragLeaveEvent_IsBase(bool value) const { ksplittercollapserbutton_dragleaveevent_isbase = value; }
    inline void setKSplitterCollapserButton_DropEvent_IsBase(bool value) const { ksplittercollapserbutton_dropevent_isbase = value; }
    inline void setKSplitterCollapserButton_HideEvent_IsBase(bool value) const { ksplittercollapserbutton_hideevent_isbase = value; }
    inline void setKSplitterCollapserButton_NativeEvent_IsBase(bool value) const { ksplittercollapserbutton_nativeevent_isbase = value; }
    inline void setKSplitterCollapserButton_Metric_IsBase(bool value) const { ksplittercollapserbutton_metric_isbase = value; }
    inline void setKSplitterCollapserButton_InitPainter_IsBase(bool value) const { ksplittercollapserbutton_initpainter_isbase = value; }
    inline void setKSplitterCollapserButton_Redirected_IsBase(bool value) const { ksplittercollapserbutton_redirected_isbase = value; }
    inline void setKSplitterCollapserButton_SharedPainter_IsBase(bool value) const { ksplittercollapserbutton_sharedpainter_isbase = value; }
    inline void setKSplitterCollapserButton_InputMethodEvent_IsBase(bool value) const { ksplittercollapserbutton_inputmethodevent_isbase = value; }
    inline void setKSplitterCollapserButton_InputMethodQuery_IsBase(bool value) const { ksplittercollapserbutton_inputmethodquery_isbase = value; }
    inline void setKSplitterCollapserButton_FocusNextPrevChild_IsBase(bool value) const { ksplittercollapserbutton_focusnextprevchild_isbase = value; }
    inline void setKSplitterCollapserButton_ChildEvent_IsBase(bool value) const { ksplittercollapserbutton_childevent_isbase = value; }
    inline void setKSplitterCollapserButton_CustomEvent_IsBase(bool value) const { ksplittercollapserbutton_customevent_isbase = value; }
    inline void setKSplitterCollapserButton_ConnectNotify_IsBase(bool value) const { ksplittercollapserbutton_connectnotify_isbase = value; }
    inline void setKSplitterCollapserButton_DisconnectNotify_IsBase(bool value) const { ksplittercollapserbutton_disconnectnotify_isbase = value; }
    inline void setKSplitterCollapserButton_UpdateMicroFocus_IsBase(bool value) const { ksplittercollapserbutton_updatemicrofocus_isbase = value; }
    inline void setKSplitterCollapserButton_Create_IsBase(bool value) const { ksplittercollapserbutton_create_isbase = value; }
    inline void setKSplitterCollapserButton_Destroy_IsBase(bool value) const { ksplittercollapserbutton_destroy_isbase = value; }
    inline void setKSplitterCollapserButton_FocusNextChild_IsBase(bool value) const { ksplittercollapserbutton_focusnextchild_isbase = value; }
    inline void setKSplitterCollapserButton_FocusPreviousChild_IsBase(bool value) const { ksplittercollapserbutton_focuspreviouschild_isbase = value; }
    inline void setKSplitterCollapserButton_Sender_IsBase(bool value) const { ksplittercollapserbutton_sender_isbase = value; }
    inline void setKSplitterCollapserButton_SenderSignalIndex_IsBase(bool value) const { ksplittercollapserbutton_sendersignalindex_isbase = value; }
    inline void setKSplitterCollapserButton_Receivers_IsBase(bool value) const { ksplittercollapserbutton_receivers_isbase = value; }
    inline void setKSplitterCollapserButton_IsSignalConnected_IsBase(bool value) const { ksplittercollapserbutton_issignalconnected_isbase = value; }
    inline void setKSplitterCollapserButton_GetDecodedMetricF_IsBase(bool value) const { ksplittercollapserbutton_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ksplittercollapserbutton_metaobject_isbase) {
            ksplittercollapserbutton_metaobject_isbase = false;
            return KSplitterCollapserButton::metaObject();
        }
        auto metaobject_cb = ksplittercollapserbutton_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KSplitterCollapserButton::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ksplittercollapserbutton_metacast_isbase) {
            ksplittercollapserbutton_metacast_isbase = false;
            return KSplitterCollapserButton::qt_metacast(param1);
        }
        auto metacast_cb = ksplittercollapserbutton_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KSplitterCollapserButton::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksplittercollapserbutton_metacall_isbase) {
            ksplittercollapserbutton_metacall_isbase = false;
            return KSplitterCollapserButton::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = ksplittercollapserbutton_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSplitterCollapserButton::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ksplittercollapserbutton_sizehint_isbase) {
            ksplittercollapserbutton_sizehint_isbase = false;
            return KSplitterCollapserButton::sizeHint();
        }
        auto sizehint_cb = ksplittercollapserbutton_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return KSplitterCollapserButton::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (ksplittercollapserbutton_eventfilter_isbase) {
            ksplittercollapserbutton_eventfilter_isbase = false;
            return KSplitterCollapserButton::eventFilter(param1, param2);
        }
        auto eventfilter_cb = ksplittercollapserbutton_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KSplitterCollapserButton::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (ksplittercollapserbutton_paintevent_isbase) {
            ksplittercollapserbutton_paintevent_isbase = false;
            KSplitterCollapserButton::paintEvent(param1);
            return;
        }
        auto paintevent_cb = ksplittercollapserbutton_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = param1;

            paintevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ksplittercollapserbutton_enterevent_isbase) {
            ksplittercollapserbutton_enterevent_isbase = false;
            KSplitterCollapserButton::enterEvent(event);
            return;
        }
        auto enterevent_cb = ksplittercollapserbutton_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ksplittercollapserbutton_leaveevent_isbase) {
            ksplittercollapserbutton_leaveevent_isbase = false;
            KSplitterCollapserButton::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = ksplittercollapserbutton_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (ksplittercollapserbutton_showevent_isbase) {
            ksplittercollapserbutton_showevent_isbase = false;
            KSplitterCollapserButton::showEvent(event);
            return;
        }
        auto showevent_cb = ksplittercollapserbutton_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ksplittercollapserbutton_minimumsizehint_isbase) {
            ksplittercollapserbutton_minimumsizehint_isbase = false;
            return KSplitterCollapserButton::minimumSizeHint();
        }
        auto minimumsizehint_cb = ksplittercollapserbutton_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return KSplitterCollapserButton::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (ksplittercollapserbutton_event_isbase) {
            ksplittercollapserbutton_event_isbase = false;
            return KSplitterCollapserButton::event(e);
        }
        auto event_cb = ksplittercollapserbutton_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KSplitterCollapserButton::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (ksplittercollapserbutton_mousepressevent_isbase) {
            ksplittercollapserbutton_mousepressevent_isbase = false;
            KSplitterCollapserButton::mousePressEvent(param1);
            return;
        }
        auto mousepressevent_cb = ksplittercollapserbutton_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousepressevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (ksplittercollapserbutton_mousereleaseevent_isbase) {
            ksplittercollapserbutton_mousereleaseevent_isbase = false;
            KSplitterCollapserButton::mouseReleaseEvent(param1);
            return;
        }
        auto mousereleaseevent_cb = ksplittercollapserbutton_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = param1;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (ksplittercollapserbutton_actionevent_isbase) {
            ksplittercollapserbutton_actionevent_isbase = false;
            KSplitterCollapserButton::actionEvent(param1);
            return;
        }
        auto actionevent_cb = ksplittercollapserbutton_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = param1;

            actionevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::actionEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (ksplittercollapserbutton_timerevent_isbase) {
            ksplittercollapserbutton_timerevent_isbase = false;
            KSplitterCollapserButton::timerEvent(param1);
            return;
        }
        auto timerevent_cb = ksplittercollapserbutton_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = param1;

            timerevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::timerEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (ksplittercollapserbutton_changeevent_isbase) {
            ksplittercollapserbutton_changeevent_isbase = false;
            KSplitterCollapserButton::changeEvent(param1);
            return;
        }
        auto changeevent_cb = ksplittercollapserbutton_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (ksplittercollapserbutton_hitbutton_isbase) {
            ksplittercollapserbutton_hitbutton_isbase = false;
            return KSplitterCollapserButton::hitButton(pos);
        }
        auto hitbutton_cb = ksplittercollapserbutton_hitbutton_callback;
        if (hitbutton_cb) {
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval1 = const_cast<QPoint*>(&pos_ret);

            bool callback_ret = hitbutton_cb(this, cbval1);
            return callback_ret;
        }
        return KSplitterCollapserButton::hitButton(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (ksplittercollapserbutton_checkstateset_isbase) {
            ksplittercollapserbutton_checkstateset_isbase = false;
            KSplitterCollapserButton::checkStateSet();
            return;
        }
        auto checkstateset_cb = ksplittercollapserbutton_checkstateset_callback;
        if (checkstateset_cb) {
            checkstateset_cb();
            return;
        }
        KSplitterCollapserButton::checkStateSet();
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (ksplittercollapserbutton_nextcheckstate_isbase) {
            ksplittercollapserbutton_nextcheckstate_isbase = false;
            KSplitterCollapserButton::nextCheckState();
            return;
        }
        auto nextcheckstate_cb = ksplittercollapserbutton_nextcheckstate_callback;
        if (nextcheckstate_cb) {
            nextcheckstate_cb();
            return;
        }
        KSplitterCollapserButton::nextCheckState();
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionToolButton* option) const override {
        if (ksplittercollapserbutton_initstyleoption_isbase) {
            ksplittercollapserbutton_initstyleoption_isbase = false;
            KSplitterCollapserButton::initStyleOption(option);
            return;
        }
        auto initstyleoption_cb = ksplittercollapserbutton_initstyleoption_callback;
        if (initstyleoption_cb) {
            QStyleOptionToolButton* cbval1 = option;

            initstyleoption_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (ksplittercollapserbutton_keypressevent_isbase) {
            ksplittercollapserbutton_keypressevent_isbase = false;
            KSplitterCollapserButton::keyPressEvent(e);
            return;
        }
        auto keypressevent_cb = ksplittercollapserbutton_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = e;

            keypressevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::keyPressEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (ksplittercollapserbutton_keyreleaseevent_isbase) {
            ksplittercollapserbutton_keyreleaseevent_isbase = false;
            KSplitterCollapserButton::keyReleaseEvent(e);
            return;
        }
        auto keyreleaseevent_cb = ksplittercollapserbutton_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = e;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::keyReleaseEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (ksplittercollapserbutton_mousemoveevent_isbase) {
            ksplittercollapserbutton_mousemoveevent_isbase = false;
            KSplitterCollapserButton::mouseMoveEvent(e);
            return;
        }
        auto mousemoveevent_cb = ksplittercollapserbutton_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = e;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::mouseMoveEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (ksplittercollapserbutton_focusinevent_isbase) {
            ksplittercollapserbutton_focusinevent_isbase = false;
            KSplitterCollapserButton::focusInEvent(e);
            return;
        }
        auto focusinevent_cb = ksplittercollapserbutton_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = e;

            focusinevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::focusInEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (ksplittercollapserbutton_focusoutevent_isbase) {
            ksplittercollapserbutton_focusoutevent_isbase = false;
            KSplitterCollapserButton::focusOutEvent(e);
            return;
        }
        auto focusoutevent_cb = ksplittercollapserbutton_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = e;

            focusoutevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::focusOutEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ksplittercollapserbutton_devtype_isbase) {
            ksplittercollapserbutton_devtype_isbase = false;
            return KSplitterCollapserButton::devType();
        }
        auto devtype_cb = ksplittercollapserbutton_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return KSplitterCollapserButton::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ksplittercollapserbutton_setvisible_isbase) {
            ksplittercollapserbutton_setvisible_isbase = false;
            KSplitterCollapserButton::setVisible(visible);
            return;
        }
        auto setvisible_cb = ksplittercollapserbutton_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ksplittercollapserbutton_heightforwidth_isbase) {
            ksplittercollapserbutton_heightforwidth_isbase = false;
            return KSplitterCollapserButton::heightForWidth(param1);
        }
        auto heightforwidth_cb = ksplittercollapserbutton_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSplitterCollapserButton::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ksplittercollapserbutton_hasheightforwidth_isbase) {
            ksplittercollapserbutton_hasheightforwidth_isbase = false;
            return KSplitterCollapserButton::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = ksplittercollapserbutton_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return KSplitterCollapserButton::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ksplittercollapserbutton_paintengine_isbase) {
            ksplittercollapserbutton_paintengine_isbase = false;
            return KSplitterCollapserButton::paintEngine();
        }
        auto paintengine_cb = ksplittercollapserbutton_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return KSplitterCollapserButton::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (ksplittercollapserbutton_mousedoubleclickevent_isbase) {
            ksplittercollapserbutton_mousedoubleclickevent_isbase = false;
            KSplitterCollapserButton::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = ksplittercollapserbutton_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ksplittercollapserbutton_wheelevent_isbase) {
            ksplittercollapserbutton_wheelevent_isbase = false;
            KSplitterCollapserButton::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = ksplittercollapserbutton_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ksplittercollapserbutton_moveevent_isbase) {
            ksplittercollapserbutton_moveevent_isbase = false;
            KSplitterCollapserButton::moveEvent(event);
            return;
        }
        auto moveevent_cb = ksplittercollapserbutton_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (ksplittercollapserbutton_resizeevent_isbase) {
            ksplittercollapserbutton_resizeevent_isbase = false;
            KSplitterCollapserButton::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = ksplittercollapserbutton_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ksplittercollapserbutton_closeevent_isbase) {
            ksplittercollapserbutton_closeevent_isbase = false;
            KSplitterCollapserButton::closeEvent(event);
            return;
        }
        auto closeevent_cb = ksplittercollapserbutton_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (ksplittercollapserbutton_contextmenuevent_isbase) {
            ksplittercollapserbutton_contextmenuevent_isbase = false;
            KSplitterCollapserButton::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = ksplittercollapserbutton_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ksplittercollapserbutton_tabletevent_isbase) {
            ksplittercollapserbutton_tabletevent_isbase = false;
            KSplitterCollapserButton::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = ksplittercollapserbutton_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (ksplittercollapserbutton_dragenterevent_isbase) {
            ksplittercollapserbutton_dragenterevent_isbase = false;
            KSplitterCollapserButton::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = ksplittercollapserbutton_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (ksplittercollapserbutton_dragmoveevent_isbase) {
            ksplittercollapserbutton_dragmoveevent_isbase = false;
            KSplitterCollapserButton::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = ksplittercollapserbutton_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (ksplittercollapserbutton_dragleaveevent_isbase) {
            ksplittercollapserbutton_dragleaveevent_isbase = false;
            KSplitterCollapserButton::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = ksplittercollapserbutton_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (ksplittercollapserbutton_dropevent_isbase) {
            ksplittercollapserbutton_dropevent_isbase = false;
            KSplitterCollapserButton::dropEvent(event);
            return;
        }
        auto dropevent_cb = ksplittercollapserbutton_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (ksplittercollapserbutton_hideevent_isbase) {
            ksplittercollapserbutton_hideevent_isbase = false;
            KSplitterCollapserButton::hideEvent(event);
            return;
        }
        auto hideevent_cb = ksplittercollapserbutton_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ksplittercollapserbutton_nativeevent_isbase) {
            ksplittercollapserbutton_nativeevent_isbase = false;
            return KSplitterCollapserButton::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = ksplittercollapserbutton_nativeevent_callback;
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
        return KSplitterCollapserButton::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ksplittercollapserbutton_metric_isbase) {
            ksplittercollapserbutton_metric_isbase = false;
            return KSplitterCollapserButton::metric(param1);
        }
        auto metric_cb = ksplittercollapserbutton_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSplitterCollapserButton::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ksplittercollapserbutton_initpainter_isbase) {
            ksplittercollapserbutton_initpainter_isbase = false;
            KSplitterCollapserButton::initPainter(painter);
            return;
        }
        auto initpainter_cb = ksplittercollapserbutton_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ksplittercollapserbutton_redirected_isbase) {
            ksplittercollapserbutton_redirected_isbase = false;
            return KSplitterCollapserButton::redirected(offset);
        }
        auto redirected_cb = ksplittercollapserbutton_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return KSplitterCollapserButton::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ksplittercollapserbutton_sharedpainter_isbase) {
            ksplittercollapserbutton_sharedpainter_isbase = false;
            return KSplitterCollapserButton::sharedPainter();
        }
        auto sharedpainter_cb = ksplittercollapserbutton_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return KSplitterCollapserButton::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ksplittercollapserbutton_inputmethodevent_isbase) {
            ksplittercollapserbutton_inputmethodevent_isbase = false;
            KSplitterCollapserButton::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = ksplittercollapserbutton_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ksplittercollapserbutton_inputmethodquery_isbase) {
            ksplittercollapserbutton_inputmethodquery_isbase = false;
            return KSplitterCollapserButton::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = ksplittercollapserbutton_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return KSplitterCollapserButton::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ksplittercollapserbutton_focusnextprevchild_isbase) {
            ksplittercollapserbutton_focusnextprevchild_isbase = false;
            return KSplitterCollapserButton::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = ksplittercollapserbutton_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return KSplitterCollapserButton::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksplittercollapserbutton_childevent_isbase) {
            ksplittercollapserbutton_childevent_isbase = false;
            KSplitterCollapserButton::childEvent(event);
            return;
        }
        auto childevent_cb = ksplittercollapserbutton_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksplittercollapserbutton_customevent_isbase) {
            ksplittercollapserbutton_customevent_isbase = false;
            KSplitterCollapserButton::customEvent(event);
            return;
        }
        auto customevent_cb = ksplittercollapserbutton_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksplittercollapserbutton_connectnotify_isbase) {
            ksplittercollapserbutton_connectnotify_isbase = false;
            KSplitterCollapserButton::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = ksplittercollapserbutton_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksplittercollapserbutton_disconnectnotify_isbase) {
            ksplittercollapserbutton_disconnectnotify_isbase = false;
            KSplitterCollapserButton::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = ksplittercollapserbutton_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KSplitterCollapserButton::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (ksplittercollapserbutton_updatemicrofocus_isbase) {
            ksplittercollapserbutton_updatemicrofocus_isbase = false;
            KSplitterCollapserButton::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = ksplittercollapserbutton_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        KSplitterCollapserButton::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (ksplittercollapserbutton_create_isbase) {
            ksplittercollapserbutton_create_isbase = false;
            KSplitterCollapserButton::create();
            return;
        }
        auto create_cb = ksplittercollapserbutton_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        KSplitterCollapserButton::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (ksplittercollapserbutton_destroy_isbase) {
            ksplittercollapserbutton_destroy_isbase = false;
            KSplitterCollapserButton::destroy();
            return;
        }
        auto destroy_cb = ksplittercollapserbutton_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        KSplitterCollapserButton::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (ksplittercollapserbutton_focusnextchild_isbase) {
            ksplittercollapserbutton_focusnextchild_isbase = false;
            return KSplitterCollapserButton::focusNextChild();
        }
        auto focusnextchild_cb = ksplittercollapserbutton_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return KSplitterCollapserButton::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (ksplittercollapserbutton_focuspreviouschild_isbase) {
            ksplittercollapserbutton_focuspreviouschild_isbase = false;
            return KSplitterCollapserButton::focusPreviousChild();
        }
        auto focuspreviouschild_cb = ksplittercollapserbutton_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return KSplitterCollapserButton::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ksplittercollapserbutton_sender_isbase) {
            ksplittercollapserbutton_sender_isbase = false;
            return KSplitterCollapserButton::sender();
        }
        auto sender_cb = ksplittercollapserbutton_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KSplitterCollapserButton::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ksplittercollapserbutton_sendersignalindex_isbase) {
            ksplittercollapserbutton_sendersignalindex_isbase = false;
            return KSplitterCollapserButton::senderSignalIndex();
        }
        auto sendersignalindex_cb = ksplittercollapserbutton_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KSplitterCollapserButton::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ksplittercollapserbutton_receivers_isbase) {
            ksplittercollapserbutton_receivers_isbase = false;
            return KSplitterCollapserButton::receivers(signal);
        }
        auto receivers_cb = ksplittercollapserbutton_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSplitterCollapserButton::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ksplittercollapserbutton_issignalconnected_isbase) {
            ksplittercollapserbutton_issignalconnected_isbase = false;
            return KSplitterCollapserButton::isSignalConnected(signal);
        }
        auto issignalconnected_cb = ksplittercollapserbutton_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KSplitterCollapserButton::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (ksplittercollapserbutton_getdecodedmetricf_isbase) {
            ksplittercollapserbutton_getdecodedmetricf_isbase = false;
            return KSplitterCollapserButton::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = ksplittercollapserbutton_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return KSplitterCollapserButton::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool KSplitterCollapserButton_EventFilter(KSplitterCollapserButton* self, QObject* param1, QEvent* param2);
    friend bool KSplitterCollapserButton_SuperEventFilter(KSplitterCollapserButton* self, QObject* param1, QEvent* param2);
    friend void KSplitterCollapserButton_PaintEvent(KSplitterCollapserButton* self, QPaintEvent* param1);
    friend void KSplitterCollapserButton_SuperPaintEvent(KSplitterCollapserButton* self, QPaintEvent* param1);
    friend void KSplitterCollapserButton_EnterEvent(KSplitterCollapserButton* self, QEnterEvent* event);
    friend void KSplitterCollapserButton_SuperEnterEvent(KSplitterCollapserButton* self, QEnterEvent* event);
    friend void KSplitterCollapserButton_LeaveEvent(KSplitterCollapserButton* self, QEvent* event);
    friend void KSplitterCollapserButton_SuperLeaveEvent(KSplitterCollapserButton* self, QEvent* event);
    friend void KSplitterCollapserButton_ShowEvent(KSplitterCollapserButton* self, QShowEvent* event);
    friend void KSplitterCollapserButton_SuperShowEvent(KSplitterCollapserButton* self, QShowEvent* event);
    friend bool KSplitterCollapserButton_Event(KSplitterCollapserButton* self, QEvent* e);
    friend bool KSplitterCollapserButton_SuperEvent(KSplitterCollapserButton* self, QEvent* e);
    friend void KSplitterCollapserButton_MousePressEvent(KSplitterCollapserButton* self, QMouseEvent* param1);
    friend void KSplitterCollapserButton_SuperMousePressEvent(KSplitterCollapserButton* self, QMouseEvent* param1);
    friend void KSplitterCollapserButton_MouseReleaseEvent(KSplitterCollapserButton* self, QMouseEvent* param1);
    friend void KSplitterCollapserButton_SuperMouseReleaseEvent(KSplitterCollapserButton* self, QMouseEvent* param1);
    friend void KSplitterCollapserButton_ActionEvent(KSplitterCollapserButton* self, QActionEvent* param1);
    friend void KSplitterCollapserButton_SuperActionEvent(KSplitterCollapserButton* self, QActionEvent* param1);
    friend void KSplitterCollapserButton_TimerEvent(KSplitterCollapserButton* self, QTimerEvent* param1);
    friend void KSplitterCollapserButton_SuperTimerEvent(KSplitterCollapserButton* self, QTimerEvent* param1);
    friend void KSplitterCollapserButton_ChangeEvent(KSplitterCollapserButton* self, QEvent* param1);
    friend void KSplitterCollapserButton_SuperChangeEvent(KSplitterCollapserButton* self, QEvent* param1);
    friend bool KSplitterCollapserButton_HitButton(const KSplitterCollapserButton* self, const QPoint* pos);
    friend bool KSplitterCollapserButton_SuperHitButton(const KSplitterCollapserButton* self, const QPoint* pos);
    friend void KSplitterCollapserButton_CheckStateSet(KSplitterCollapserButton* self);
    friend void KSplitterCollapserButton_SuperCheckStateSet(KSplitterCollapserButton* self);
    friend void KSplitterCollapserButton_NextCheckState(KSplitterCollapserButton* self);
    friend void KSplitterCollapserButton_SuperNextCheckState(KSplitterCollapserButton* self);
    friend void KSplitterCollapserButton_InitStyleOption(const KSplitterCollapserButton* self, QStyleOptionToolButton* option);
    friend void KSplitterCollapserButton_SuperInitStyleOption(const KSplitterCollapserButton* self, QStyleOptionToolButton* option);
    friend void KSplitterCollapserButton_KeyPressEvent(KSplitterCollapserButton* self, QKeyEvent* e);
    friend void KSplitterCollapserButton_SuperKeyPressEvent(KSplitterCollapserButton* self, QKeyEvent* e);
    friend void KSplitterCollapserButton_KeyReleaseEvent(KSplitterCollapserButton* self, QKeyEvent* e);
    friend void KSplitterCollapserButton_SuperKeyReleaseEvent(KSplitterCollapserButton* self, QKeyEvent* e);
    friend void KSplitterCollapserButton_MouseMoveEvent(KSplitterCollapserButton* self, QMouseEvent* e);
    friend void KSplitterCollapserButton_SuperMouseMoveEvent(KSplitterCollapserButton* self, QMouseEvent* e);
    friend void KSplitterCollapserButton_FocusInEvent(KSplitterCollapserButton* self, QFocusEvent* e);
    friend void KSplitterCollapserButton_SuperFocusInEvent(KSplitterCollapserButton* self, QFocusEvent* e);
    friend void KSplitterCollapserButton_FocusOutEvent(KSplitterCollapserButton* self, QFocusEvent* e);
    friend void KSplitterCollapserButton_SuperFocusOutEvent(KSplitterCollapserButton* self, QFocusEvent* e);
    friend void KSplitterCollapserButton_MouseDoubleClickEvent(KSplitterCollapserButton* self, QMouseEvent* event);
    friend void KSplitterCollapserButton_SuperMouseDoubleClickEvent(KSplitterCollapserButton* self, QMouseEvent* event);
    friend void KSplitterCollapserButton_WheelEvent(KSplitterCollapserButton* self, QWheelEvent* event);
    friend void KSplitterCollapserButton_SuperWheelEvent(KSplitterCollapserButton* self, QWheelEvent* event);
    friend void KSplitterCollapserButton_MoveEvent(KSplitterCollapserButton* self, QMoveEvent* event);
    friend void KSplitterCollapserButton_SuperMoveEvent(KSplitterCollapserButton* self, QMoveEvent* event);
    friend void KSplitterCollapserButton_ResizeEvent(KSplitterCollapserButton* self, QResizeEvent* event);
    friend void KSplitterCollapserButton_SuperResizeEvent(KSplitterCollapserButton* self, QResizeEvent* event);
    friend void KSplitterCollapserButton_CloseEvent(KSplitterCollapserButton* self, QCloseEvent* event);
    friend void KSplitterCollapserButton_SuperCloseEvent(KSplitterCollapserButton* self, QCloseEvent* event);
    friend void KSplitterCollapserButton_ContextMenuEvent(KSplitterCollapserButton* self, QContextMenuEvent* event);
    friend void KSplitterCollapserButton_SuperContextMenuEvent(KSplitterCollapserButton* self, QContextMenuEvent* event);
    friend void KSplitterCollapserButton_TabletEvent(KSplitterCollapserButton* self, QTabletEvent* event);
    friend void KSplitterCollapserButton_SuperTabletEvent(KSplitterCollapserButton* self, QTabletEvent* event);
    friend void KSplitterCollapserButton_DragEnterEvent(KSplitterCollapserButton* self, QDragEnterEvent* event);
    friend void KSplitterCollapserButton_SuperDragEnterEvent(KSplitterCollapserButton* self, QDragEnterEvent* event);
    friend void KSplitterCollapserButton_DragMoveEvent(KSplitterCollapserButton* self, QDragMoveEvent* event);
    friend void KSplitterCollapserButton_SuperDragMoveEvent(KSplitterCollapserButton* self, QDragMoveEvent* event);
    friend void KSplitterCollapserButton_DragLeaveEvent(KSplitterCollapserButton* self, QDragLeaveEvent* event);
    friend void KSplitterCollapserButton_SuperDragLeaveEvent(KSplitterCollapserButton* self, QDragLeaveEvent* event);
    friend void KSplitterCollapserButton_DropEvent(KSplitterCollapserButton* self, QDropEvent* event);
    friend void KSplitterCollapserButton_SuperDropEvent(KSplitterCollapserButton* self, QDropEvent* event);
    friend void KSplitterCollapserButton_HideEvent(KSplitterCollapserButton* self, QHideEvent* event);
    friend void KSplitterCollapserButton_SuperHideEvent(KSplitterCollapserButton* self, QHideEvent* event);
    friend bool KSplitterCollapserButton_NativeEvent(KSplitterCollapserButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KSplitterCollapserButton_SuperNativeEvent(KSplitterCollapserButton* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int KSplitterCollapserButton_Metric(const KSplitterCollapserButton* self, int param1);
    friend int KSplitterCollapserButton_SuperMetric(const KSplitterCollapserButton* self, int param1);
    friend void KSplitterCollapserButton_InitPainter(const KSplitterCollapserButton* self, QPainter* painter);
    friend void KSplitterCollapserButton_SuperInitPainter(const KSplitterCollapserButton* self, QPainter* painter);
    friend QPaintDevice* KSplitterCollapserButton_Redirected(const KSplitterCollapserButton* self, QPoint* offset);
    friend QPaintDevice* KSplitterCollapserButton_SuperRedirected(const KSplitterCollapserButton* self, QPoint* offset);
    friend QPainter* KSplitterCollapserButton_SharedPainter(const KSplitterCollapserButton* self);
    friend QPainter* KSplitterCollapserButton_SuperSharedPainter(const KSplitterCollapserButton* self);
    friend void KSplitterCollapserButton_InputMethodEvent(KSplitterCollapserButton* self, QInputMethodEvent* param1);
    friend void KSplitterCollapserButton_SuperInputMethodEvent(KSplitterCollapserButton* self, QInputMethodEvent* param1);
    friend bool KSplitterCollapserButton_FocusNextPrevChild(KSplitterCollapserButton* self, bool next);
    friend bool KSplitterCollapserButton_SuperFocusNextPrevChild(KSplitterCollapserButton* self, bool next);
    friend void KSplitterCollapserButton_ChildEvent(KSplitterCollapserButton* self, QChildEvent* event);
    friend void KSplitterCollapserButton_SuperChildEvent(KSplitterCollapserButton* self, QChildEvent* event);
    friend void KSplitterCollapserButton_CustomEvent(KSplitterCollapserButton* self, QEvent* event);
    friend void KSplitterCollapserButton_SuperCustomEvent(KSplitterCollapserButton* self, QEvent* event);
    friend void KSplitterCollapserButton_ConnectNotify(KSplitterCollapserButton* self, const QMetaMethod* signal);
    friend void KSplitterCollapserButton_SuperConnectNotify(KSplitterCollapserButton* self, const QMetaMethod* signal);
    friend void KSplitterCollapserButton_DisconnectNotify(KSplitterCollapserButton* self, const QMetaMethod* signal);
    friend void KSplitterCollapserButton_SuperDisconnectNotify(KSplitterCollapserButton* self, const QMetaMethod* signal);
    friend void KSplitterCollapserButton_UpdateMicroFocus(KSplitterCollapserButton* self);
    friend void KSplitterCollapserButton_SuperUpdateMicroFocus(KSplitterCollapserButton* self);
    friend void KSplitterCollapserButton_Create(KSplitterCollapserButton* self);
    friend void KSplitterCollapserButton_SuperCreate(KSplitterCollapserButton* self);
    friend void KSplitterCollapserButton_Destroy(KSplitterCollapserButton* self);
    friend void KSplitterCollapserButton_SuperDestroy(KSplitterCollapserButton* self);
    friend bool KSplitterCollapserButton_FocusNextChild(KSplitterCollapserButton* self);
    friend bool KSplitterCollapserButton_SuperFocusNextChild(KSplitterCollapserButton* self);
    friend bool KSplitterCollapserButton_FocusPreviousChild(KSplitterCollapserButton* self);
    friend bool KSplitterCollapserButton_SuperFocusPreviousChild(KSplitterCollapserButton* self);
    friend QObject* KSplitterCollapserButton_Sender(const KSplitterCollapserButton* self);
    friend QObject* KSplitterCollapserButton_SuperSender(const KSplitterCollapserButton* self);
    friend int KSplitterCollapserButton_SenderSignalIndex(const KSplitterCollapserButton* self);
    friend int KSplitterCollapserButton_SuperSenderSignalIndex(const KSplitterCollapserButton* self);
    friend int KSplitterCollapserButton_Receivers(const KSplitterCollapserButton* self, const char* signal);
    friend int KSplitterCollapserButton_SuperReceivers(const KSplitterCollapserButton* self, const char* signal);
    friend bool KSplitterCollapserButton_IsSignalConnected(const KSplitterCollapserButton* self, const QMetaMethod* signal);
    friend bool KSplitterCollapserButton_SuperIsSignalConnected(const KSplitterCollapserButton* self, const QMetaMethod* signal);
    friend double KSplitterCollapserButton_GetDecodedMetricF(const KSplitterCollapserButton* self, int metricA, int metricB);
    friend double KSplitterCollapserButton_SuperGetDecodedMetricF(const KSplitterCollapserButton* self, int metricA, int metricB);
};

#endif
