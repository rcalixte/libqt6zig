#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALCONFIGPAGE_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALCONFIGPAGE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::ConfigPage so that we can call protected methods
class VirtualKTextEditorConfigPage : public KTextEditor::ConfigPage {

  public:
    // Virtual class boolean flag
    bool isVirtualKTextEditorConfigPage = true;

    // Virtual class public types (including callbacks)
    using KTextEditor__ConfigPage_Metacall_Callback = int (*)(KTextEditor__ConfigPage*, int, int, void**);
    using KTextEditor__ConfigPage_Name_Callback = const char* (*)();
    using KTextEditor__ConfigPage_FullName_Callback = const char* (*)();
    using KTextEditor__ConfigPage_Icon_Callback = QIcon* (*)();
    using KTextEditor__ConfigPage_Apply_Callback = void (*)();
    using KTextEditor__ConfigPage_Reset_Callback = void (*)();
    using KTextEditor__ConfigPage_Defaults_Callback = void (*)();
    using KTextEditor__ConfigPage_DevType_Callback = int (*)();
    using KTextEditor__ConfigPage_SetVisible_Callback = void (*)(KTextEditor__ConfigPage*, bool);
    using KTextEditor__ConfigPage_SizeHint_Callback = QSize* (*)();
    using KTextEditor__ConfigPage_MinimumSizeHint_Callback = QSize* (*)();
    using KTextEditor__ConfigPage_HeightForWidth_Callback = int (*)(const KTextEditor__ConfigPage*, int);
    using KTextEditor__ConfigPage_HasHeightForWidth_Callback = bool (*)();
    using KTextEditor__ConfigPage_PaintEngine_Callback = QPaintEngine* (*)();
    using KTextEditor__ConfigPage_Event_Callback = bool (*)(KTextEditor__ConfigPage*, QEvent*);
    using KTextEditor__ConfigPage_MousePressEvent_Callback = void (*)(KTextEditor__ConfigPage*, QMouseEvent*);
    using KTextEditor__ConfigPage_MouseReleaseEvent_Callback = void (*)(KTextEditor__ConfigPage*, QMouseEvent*);
    using KTextEditor__ConfigPage_MouseDoubleClickEvent_Callback = void (*)(KTextEditor__ConfigPage*, QMouseEvent*);
    using KTextEditor__ConfigPage_MouseMoveEvent_Callback = void (*)(KTextEditor__ConfigPage*, QMouseEvent*);
    using KTextEditor__ConfigPage_WheelEvent_Callback = void (*)(KTextEditor__ConfigPage*, QWheelEvent*);
    using KTextEditor__ConfigPage_KeyPressEvent_Callback = void (*)(KTextEditor__ConfigPage*, QKeyEvent*);
    using KTextEditor__ConfigPage_KeyReleaseEvent_Callback = void (*)(KTextEditor__ConfigPage*, QKeyEvent*);
    using KTextEditor__ConfigPage_FocusInEvent_Callback = void (*)(KTextEditor__ConfigPage*, QFocusEvent*);
    using KTextEditor__ConfigPage_FocusOutEvent_Callback = void (*)(KTextEditor__ConfigPage*, QFocusEvent*);
    using KTextEditor__ConfigPage_EnterEvent_Callback = void (*)(KTextEditor__ConfigPage*, QEnterEvent*);
    using KTextEditor__ConfigPage_LeaveEvent_Callback = void (*)(KTextEditor__ConfigPage*, QEvent*);
    using KTextEditor__ConfigPage_PaintEvent_Callback = void (*)(KTextEditor__ConfigPage*, QPaintEvent*);
    using KTextEditor__ConfigPage_MoveEvent_Callback = void (*)(KTextEditor__ConfigPage*, QMoveEvent*);
    using KTextEditor__ConfigPage_ResizeEvent_Callback = void (*)(KTextEditor__ConfigPage*, QResizeEvent*);
    using KTextEditor__ConfigPage_CloseEvent_Callback = void (*)(KTextEditor__ConfigPage*, QCloseEvent*);
    using KTextEditor__ConfigPage_ContextMenuEvent_Callback = void (*)(KTextEditor__ConfigPage*, QContextMenuEvent*);
    using KTextEditor__ConfigPage_TabletEvent_Callback = void (*)(KTextEditor__ConfigPage*, QTabletEvent*);
    using KTextEditor__ConfigPage_ActionEvent_Callback = void (*)(KTextEditor__ConfigPage*, QActionEvent*);
    using KTextEditor__ConfigPage_DragEnterEvent_Callback = void (*)(KTextEditor__ConfigPage*, QDragEnterEvent*);
    using KTextEditor__ConfigPage_DragMoveEvent_Callback = void (*)(KTextEditor__ConfigPage*, QDragMoveEvent*);
    using KTextEditor__ConfigPage_DragLeaveEvent_Callback = void (*)(KTextEditor__ConfigPage*, QDragLeaveEvent*);
    using KTextEditor__ConfigPage_DropEvent_Callback = void (*)(KTextEditor__ConfigPage*, QDropEvent*);
    using KTextEditor__ConfigPage_ShowEvent_Callback = void (*)(KTextEditor__ConfigPage*, QShowEvent*);
    using KTextEditor__ConfigPage_HideEvent_Callback = void (*)(KTextEditor__ConfigPage*, QHideEvent*);
    using KTextEditor__ConfigPage_NativeEvent_Callback = bool (*)(KTextEditor__ConfigPage*, libqt_string, void*, intptr_t*);
    using KTextEditor__ConfigPage_ChangeEvent_Callback = void (*)(KTextEditor__ConfigPage*, QEvent*);
    using KTextEditor__ConfigPage_Metric_Callback = int (*)(const KTextEditor__ConfigPage*, int);
    using KTextEditor__ConfigPage_InitPainter_Callback = void (*)(const KTextEditor__ConfigPage*, QPainter*);
    using KTextEditor__ConfigPage_Redirected_Callback = QPaintDevice* (*)(const KTextEditor__ConfigPage*, QPoint*);
    using KTextEditor__ConfigPage_SharedPainter_Callback = QPainter* (*)();
    using KTextEditor__ConfigPage_InputMethodEvent_Callback = void (*)(KTextEditor__ConfigPage*, QInputMethodEvent*);
    using KTextEditor__ConfigPage_InputMethodQuery_Callback = QVariant* (*)(const KTextEditor__ConfigPage*, int);
    using KTextEditor__ConfigPage_FocusNextPrevChild_Callback = bool (*)(KTextEditor__ConfigPage*, bool);
    using KTextEditor__ConfigPage_EventFilter_Callback = bool (*)(KTextEditor__ConfigPage*, QObject*, QEvent*);
    using KTextEditor__ConfigPage_TimerEvent_Callback = void (*)(KTextEditor__ConfigPage*, QTimerEvent*);
    using KTextEditor__ConfigPage_ChildEvent_Callback = void (*)(KTextEditor__ConfigPage*, QChildEvent*);
    using KTextEditor__ConfigPage_CustomEvent_Callback = void (*)(KTextEditor__ConfigPage*, QEvent*);
    using KTextEditor__ConfigPage_ConnectNotify_Callback = void (*)(KTextEditor__ConfigPage*, QMetaMethod*);
    using KTextEditor__ConfigPage_DisconnectNotify_Callback = void (*)(KTextEditor__ConfigPage*, QMetaMethod*);
    using KTextEditor__ConfigPage_UpdateMicroFocus_Callback = void (*)();
    using KTextEditor__ConfigPage_Create_Callback = void (*)();
    using KTextEditor__ConfigPage_Destroy_Callback = void (*)();
    using KTextEditor__ConfigPage_FocusNextChild_Callback = bool (*)();
    using KTextEditor__ConfigPage_FocusPreviousChild_Callback = bool (*)();
    using KTextEditor__ConfigPage_Sender_Callback = QObject* (*)();
    using KTextEditor__ConfigPage_SenderSignalIndex_Callback = int (*)();
    using KTextEditor__ConfigPage_Receivers_Callback = int (*)(const KTextEditor__ConfigPage*, const char*);
    using KTextEditor__ConfigPage_IsSignalConnected_Callback = bool (*)(const KTextEditor__ConfigPage*, QMetaMethod*);
    using KTextEditor__ConfigPage_GetDecodedMetricF_Callback = double (*)(const KTextEditor__ConfigPage*, int, int);

  protected:
    // Instance callback storage
    KTextEditor__ConfigPage_Metacall_Callback ktexteditor__configpage_metacall_callback = nullptr;
    KTextEditor__ConfigPage_Name_Callback ktexteditor__configpage_name_callback = nullptr;
    KTextEditor__ConfigPage_FullName_Callback ktexteditor__configpage_fullname_callback = nullptr;
    KTextEditor__ConfigPage_Icon_Callback ktexteditor__configpage_icon_callback = nullptr;
    KTextEditor__ConfigPage_Apply_Callback ktexteditor__configpage_apply_callback = nullptr;
    KTextEditor__ConfigPage_Reset_Callback ktexteditor__configpage_reset_callback = nullptr;
    KTextEditor__ConfigPage_Defaults_Callback ktexteditor__configpage_defaults_callback = nullptr;
    KTextEditor__ConfigPage_DevType_Callback ktexteditor__configpage_devtype_callback = nullptr;
    KTextEditor__ConfigPage_SetVisible_Callback ktexteditor__configpage_setvisible_callback = nullptr;
    KTextEditor__ConfigPage_SizeHint_Callback ktexteditor__configpage_sizehint_callback = nullptr;
    KTextEditor__ConfigPage_MinimumSizeHint_Callback ktexteditor__configpage_minimumsizehint_callback = nullptr;
    KTextEditor__ConfigPage_HeightForWidth_Callback ktexteditor__configpage_heightforwidth_callback = nullptr;
    KTextEditor__ConfigPage_HasHeightForWidth_Callback ktexteditor__configpage_hasheightforwidth_callback = nullptr;
    KTextEditor__ConfigPage_PaintEngine_Callback ktexteditor__configpage_paintengine_callback = nullptr;
    KTextEditor__ConfigPage_Event_Callback ktexteditor__configpage_event_callback = nullptr;
    KTextEditor__ConfigPage_MousePressEvent_Callback ktexteditor__configpage_mousepressevent_callback = nullptr;
    KTextEditor__ConfigPage_MouseReleaseEvent_Callback ktexteditor__configpage_mousereleaseevent_callback = nullptr;
    KTextEditor__ConfigPage_MouseDoubleClickEvent_Callback ktexteditor__configpage_mousedoubleclickevent_callback = nullptr;
    KTextEditor__ConfigPage_MouseMoveEvent_Callback ktexteditor__configpage_mousemoveevent_callback = nullptr;
    KTextEditor__ConfigPage_WheelEvent_Callback ktexteditor__configpage_wheelevent_callback = nullptr;
    KTextEditor__ConfigPage_KeyPressEvent_Callback ktexteditor__configpage_keypressevent_callback = nullptr;
    KTextEditor__ConfigPage_KeyReleaseEvent_Callback ktexteditor__configpage_keyreleaseevent_callback = nullptr;
    KTextEditor__ConfigPage_FocusInEvent_Callback ktexteditor__configpage_focusinevent_callback = nullptr;
    KTextEditor__ConfigPage_FocusOutEvent_Callback ktexteditor__configpage_focusoutevent_callback = nullptr;
    KTextEditor__ConfigPage_EnterEvent_Callback ktexteditor__configpage_enterevent_callback = nullptr;
    KTextEditor__ConfigPage_LeaveEvent_Callback ktexteditor__configpage_leaveevent_callback = nullptr;
    KTextEditor__ConfigPage_PaintEvent_Callback ktexteditor__configpage_paintevent_callback = nullptr;
    KTextEditor__ConfigPage_MoveEvent_Callback ktexteditor__configpage_moveevent_callback = nullptr;
    KTextEditor__ConfigPage_ResizeEvent_Callback ktexteditor__configpage_resizeevent_callback = nullptr;
    KTextEditor__ConfigPage_CloseEvent_Callback ktexteditor__configpage_closeevent_callback = nullptr;
    KTextEditor__ConfigPage_ContextMenuEvent_Callback ktexteditor__configpage_contextmenuevent_callback = nullptr;
    KTextEditor__ConfigPage_TabletEvent_Callback ktexteditor__configpage_tabletevent_callback = nullptr;
    KTextEditor__ConfigPage_ActionEvent_Callback ktexteditor__configpage_actionevent_callback = nullptr;
    KTextEditor__ConfigPage_DragEnterEvent_Callback ktexteditor__configpage_dragenterevent_callback = nullptr;
    KTextEditor__ConfigPage_DragMoveEvent_Callback ktexteditor__configpage_dragmoveevent_callback = nullptr;
    KTextEditor__ConfigPage_DragLeaveEvent_Callback ktexteditor__configpage_dragleaveevent_callback = nullptr;
    KTextEditor__ConfigPage_DropEvent_Callback ktexteditor__configpage_dropevent_callback = nullptr;
    KTextEditor__ConfigPage_ShowEvent_Callback ktexteditor__configpage_showevent_callback = nullptr;
    KTextEditor__ConfigPage_HideEvent_Callback ktexteditor__configpage_hideevent_callback = nullptr;
    KTextEditor__ConfigPage_NativeEvent_Callback ktexteditor__configpage_nativeevent_callback = nullptr;
    KTextEditor__ConfigPage_ChangeEvent_Callback ktexteditor__configpage_changeevent_callback = nullptr;
    KTextEditor__ConfigPage_Metric_Callback ktexteditor__configpage_metric_callback = nullptr;
    KTextEditor__ConfigPage_InitPainter_Callback ktexteditor__configpage_initpainter_callback = nullptr;
    KTextEditor__ConfigPage_Redirected_Callback ktexteditor__configpage_redirected_callback = nullptr;
    KTextEditor__ConfigPage_SharedPainter_Callback ktexteditor__configpage_sharedpainter_callback = nullptr;
    KTextEditor__ConfigPage_InputMethodEvent_Callback ktexteditor__configpage_inputmethodevent_callback = nullptr;
    KTextEditor__ConfigPage_InputMethodQuery_Callback ktexteditor__configpage_inputmethodquery_callback = nullptr;
    KTextEditor__ConfigPage_FocusNextPrevChild_Callback ktexteditor__configpage_focusnextprevchild_callback = nullptr;
    KTextEditor__ConfigPage_EventFilter_Callback ktexteditor__configpage_eventfilter_callback = nullptr;
    KTextEditor__ConfigPage_TimerEvent_Callback ktexteditor__configpage_timerevent_callback = nullptr;
    KTextEditor__ConfigPage_ChildEvent_Callback ktexteditor__configpage_childevent_callback = nullptr;
    KTextEditor__ConfigPage_CustomEvent_Callback ktexteditor__configpage_customevent_callback = nullptr;
    KTextEditor__ConfigPage_ConnectNotify_Callback ktexteditor__configpage_connectnotify_callback = nullptr;
    KTextEditor__ConfigPage_DisconnectNotify_Callback ktexteditor__configpage_disconnectnotify_callback = nullptr;
    KTextEditor__ConfigPage_UpdateMicroFocus_Callback ktexteditor__configpage_updatemicrofocus_callback = nullptr;
    KTextEditor__ConfigPage_Create_Callback ktexteditor__configpage_create_callback = nullptr;
    KTextEditor__ConfigPage_Destroy_Callback ktexteditor__configpage_destroy_callback = nullptr;
    KTextEditor__ConfigPage_FocusNextChild_Callback ktexteditor__configpage_focusnextchild_callback = nullptr;
    KTextEditor__ConfigPage_FocusPreviousChild_Callback ktexteditor__configpage_focuspreviouschild_callback = nullptr;
    KTextEditor__ConfigPage_Sender_Callback ktexteditor__configpage_sender_callback = nullptr;
    KTextEditor__ConfigPage_SenderSignalIndex_Callback ktexteditor__configpage_sendersignalindex_callback = nullptr;
    KTextEditor__ConfigPage_Receivers_Callback ktexteditor__configpage_receivers_callback = nullptr;
    KTextEditor__ConfigPage_IsSignalConnected_Callback ktexteditor__configpage_issignalconnected_callback = nullptr;
    KTextEditor__ConfigPage_GetDecodedMetricF_Callback ktexteditor__configpage_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool ktexteditor__configpage_metacall_isbase = false;
    mutable bool ktexteditor__configpage_name_isbase = false;
    mutable bool ktexteditor__configpage_fullname_isbase = false;
    mutable bool ktexteditor__configpage_icon_isbase = false;
    mutable bool ktexteditor__configpage_apply_isbase = false;
    mutable bool ktexteditor__configpage_reset_isbase = false;
    mutable bool ktexteditor__configpage_defaults_isbase = false;
    mutable bool ktexteditor__configpage_devtype_isbase = false;
    mutable bool ktexteditor__configpage_setvisible_isbase = false;
    mutable bool ktexteditor__configpage_sizehint_isbase = false;
    mutable bool ktexteditor__configpage_minimumsizehint_isbase = false;
    mutable bool ktexteditor__configpage_heightforwidth_isbase = false;
    mutable bool ktexteditor__configpage_hasheightforwidth_isbase = false;
    mutable bool ktexteditor__configpage_paintengine_isbase = false;
    mutable bool ktexteditor__configpage_event_isbase = false;
    mutable bool ktexteditor__configpage_mousepressevent_isbase = false;
    mutable bool ktexteditor__configpage_mousereleaseevent_isbase = false;
    mutable bool ktexteditor__configpage_mousedoubleclickevent_isbase = false;
    mutable bool ktexteditor__configpage_mousemoveevent_isbase = false;
    mutable bool ktexteditor__configpage_wheelevent_isbase = false;
    mutable bool ktexteditor__configpage_keypressevent_isbase = false;
    mutable bool ktexteditor__configpage_keyreleaseevent_isbase = false;
    mutable bool ktexteditor__configpage_focusinevent_isbase = false;
    mutable bool ktexteditor__configpage_focusoutevent_isbase = false;
    mutable bool ktexteditor__configpage_enterevent_isbase = false;
    mutable bool ktexteditor__configpage_leaveevent_isbase = false;
    mutable bool ktexteditor__configpage_paintevent_isbase = false;
    mutable bool ktexteditor__configpage_moveevent_isbase = false;
    mutable bool ktexteditor__configpage_resizeevent_isbase = false;
    mutable bool ktexteditor__configpage_closeevent_isbase = false;
    mutable bool ktexteditor__configpage_contextmenuevent_isbase = false;
    mutable bool ktexteditor__configpage_tabletevent_isbase = false;
    mutable bool ktexteditor__configpage_actionevent_isbase = false;
    mutable bool ktexteditor__configpage_dragenterevent_isbase = false;
    mutable bool ktexteditor__configpage_dragmoveevent_isbase = false;
    mutable bool ktexteditor__configpage_dragleaveevent_isbase = false;
    mutable bool ktexteditor__configpage_dropevent_isbase = false;
    mutable bool ktexteditor__configpage_showevent_isbase = false;
    mutable bool ktexteditor__configpage_hideevent_isbase = false;
    mutable bool ktexteditor__configpage_nativeevent_isbase = false;
    mutable bool ktexteditor__configpage_changeevent_isbase = false;
    mutable bool ktexteditor__configpage_metric_isbase = false;
    mutable bool ktexteditor__configpage_initpainter_isbase = false;
    mutable bool ktexteditor__configpage_redirected_isbase = false;
    mutable bool ktexteditor__configpage_sharedpainter_isbase = false;
    mutable bool ktexteditor__configpage_inputmethodevent_isbase = false;
    mutable bool ktexteditor__configpage_inputmethodquery_isbase = false;
    mutable bool ktexteditor__configpage_focusnextprevchild_isbase = false;
    mutable bool ktexteditor__configpage_eventfilter_isbase = false;
    mutable bool ktexteditor__configpage_timerevent_isbase = false;
    mutable bool ktexteditor__configpage_childevent_isbase = false;
    mutable bool ktexteditor__configpage_customevent_isbase = false;
    mutable bool ktexteditor__configpage_connectnotify_isbase = false;
    mutable bool ktexteditor__configpage_disconnectnotify_isbase = false;
    mutable bool ktexteditor__configpage_updatemicrofocus_isbase = false;
    mutable bool ktexteditor__configpage_create_isbase = false;
    mutable bool ktexteditor__configpage_destroy_isbase = false;
    mutable bool ktexteditor__configpage_focusnextchild_isbase = false;
    mutable bool ktexteditor__configpage_focuspreviouschild_isbase = false;
    mutable bool ktexteditor__configpage_sender_isbase = false;
    mutable bool ktexteditor__configpage_sendersignalindex_isbase = false;
    mutable bool ktexteditor__configpage_receivers_isbase = false;
    mutable bool ktexteditor__configpage_issignalconnected_isbase = false;
    mutable bool ktexteditor__configpage_getdecodedmetricf_isbase = false;

  public:
    VirtualKTextEditorConfigPage(QWidget* parent) : KTextEditor::ConfigPage(parent) {};

    ~VirtualKTextEditorConfigPage() {
        ktexteditor__configpage_metacall_callback = nullptr;
        ktexteditor__configpage_name_callback = nullptr;
        ktexteditor__configpage_fullname_callback = nullptr;
        ktexteditor__configpage_icon_callback = nullptr;
        ktexteditor__configpage_apply_callback = nullptr;
        ktexteditor__configpage_reset_callback = nullptr;
        ktexteditor__configpage_defaults_callback = nullptr;
        ktexteditor__configpage_devtype_callback = nullptr;
        ktexteditor__configpage_setvisible_callback = nullptr;
        ktexteditor__configpage_sizehint_callback = nullptr;
        ktexteditor__configpage_minimumsizehint_callback = nullptr;
        ktexteditor__configpage_heightforwidth_callback = nullptr;
        ktexteditor__configpage_hasheightforwidth_callback = nullptr;
        ktexteditor__configpage_paintengine_callback = nullptr;
        ktexteditor__configpage_event_callback = nullptr;
        ktexteditor__configpage_mousepressevent_callback = nullptr;
        ktexteditor__configpage_mousereleaseevent_callback = nullptr;
        ktexteditor__configpage_mousedoubleclickevent_callback = nullptr;
        ktexteditor__configpage_mousemoveevent_callback = nullptr;
        ktexteditor__configpage_wheelevent_callback = nullptr;
        ktexteditor__configpage_keypressevent_callback = nullptr;
        ktexteditor__configpage_keyreleaseevent_callback = nullptr;
        ktexteditor__configpage_focusinevent_callback = nullptr;
        ktexteditor__configpage_focusoutevent_callback = nullptr;
        ktexteditor__configpage_enterevent_callback = nullptr;
        ktexteditor__configpage_leaveevent_callback = nullptr;
        ktexteditor__configpage_paintevent_callback = nullptr;
        ktexteditor__configpage_moveevent_callback = nullptr;
        ktexteditor__configpage_resizeevent_callback = nullptr;
        ktexteditor__configpage_closeevent_callback = nullptr;
        ktexteditor__configpage_contextmenuevent_callback = nullptr;
        ktexteditor__configpage_tabletevent_callback = nullptr;
        ktexteditor__configpage_actionevent_callback = nullptr;
        ktexteditor__configpage_dragenterevent_callback = nullptr;
        ktexteditor__configpage_dragmoveevent_callback = nullptr;
        ktexteditor__configpage_dragleaveevent_callback = nullptr;
        ktexteditor__configpage_dropevent_callback = nullptr;
        ktexteditor__configpage_showevent_callback = nullptr;
        ktexteditor__configpage_hideevent_callback = nullptr;
        ktexteditor__configpage_nativeevent_callback = nullptr;
        ktexteditor__configpage_changeevent_callback = nullptr;
        ktexteditor__configpage_metric_callback = nullptr;
        ktexteditor__configpage_initpainter_callback = nullptr;
        ktexteditor__configpage_redirected_callback = nullptr;
        ktexteditor__configpage_sharedpainter_callback = nullptr;
        ktexteditor__configpage_inputmethodevent_callback = nullptr;
        ktexteditor__configpage_inputmethodquery_callback = nullptr;
        ktexteditor__configpage_focusnextprevchild_callback = nullptr;
        ktexteditor__configpage_eventfilter_callback = nullptr;
        ktexteditor__configpage_timerevent_callback = nullptr;
        ktexteditor__configpage_childevent_callback = nullptr;
        ktexteditor__configpage_customevent_callback = nullptr;
        ktexteditor__configpage_connectnotify_callback = nullptr;
        ktexteditor__configpage_disconnectnotify_callback = nullptr;
        ktexteditor__configpage_updatemicrofocus_callback = nullptr;
        ktexteditor__configpage_create_callback = nullptr;
        ktexteditor__configpage_destroy_callback = nullptr;
        ktexteditor__configpage_focusnextchild_callback = nullptr;
        ktexteditor__configpage_focuspreviouschild_callback = nullptr;
        ktexteditor__configpage_sender_callback = nullptr;
        ktexteditor__configpage_sendersignalindex_callback = nullptr;
        ktexteditor__configpage_receivers_callback = nullptr;
        ktexteditor__configpage_issignalconnected_callback = nullptr;
        ktexteditor__configpage_getdecodedmetricf_callback = nullptr;
    }

    // Callback setters
    inline void setKTextEditor__ConfigPage_Metacall_Callback(KTextEditor__ConfigPage_Metacall_Callback cb) { ktexteditor__configpage_metacall_callback = cb; }
    inline void setKTextEditor__ConfigPage_Name_Callback(KTextEditor__ConfigPage_Name_Callback cb) { ktexteditor__configpage_name_callback = cb; }
    inline void setKTextEditor__ConfigPage_FullName_Callback(KTextEditor__ConfigPage_FullName_Callback cb) { ktexteditor__configpage_fullname_callback = cb; }
    inline void setKTextEditor__ConfigPage_Icon_Callback(KTextEditor__ConfigPage_Icon_Callback cb) { ktexteditor__configpage_icon_callback = cb; }
    inline void setKTextEditor__ConfigPage_Apply_Callback(KTextEditor__ConfigPage_Apply_Callback cb) { ktexteditor__configpage_apply_callback = cb; }
    inline void setKTextEditor__ConfigPage_Reset_Callback(KTextEditor__ConfigPage_Reset_Callback cb) { ktexteditor__configpage_reset_callback = cb; }
    inline void setKTextEditor__ConfigPage_Defaults_Callback(KTextEditor__ConfigPage_Defaults_Callback cb) { ktexteditor__configpage_defaults_callback = cb; }
    inline void setKTextEditor__ConfigPage_DevType_Callback(KTextEditor__ConfigPage_DevType_Callback cb) { ktexteditor__configpage_devtype_callback = cb; }
    inline void setKTextEditor__ConfigPage_SetVisible_Callback(KTextEditor__ConfigPage_SetVisible_Callback cb) { ktexteditor__configpage_setvisible_callback = cb; }
    inline void setKTextEditor__ConfigPage_SizeHint_Callback(KTextEditor__ConfigPage_SizeHint_Callback cb) { ktexteditor__configpage_sizehint_callback = cb; }
    inline void setKTextEditor__ConfigPage_MinimumSizeHint_Callback(KTextEditor__ConfigPage_MinimumSizeHint_Callback cb) { ktexteditor__configpage_minimumsizehint_callback = cb; }
    inline void setKTextEditor__ConfigPage_HeightForWidth_Callback(KTextEditor__ConfigPage_HeightForWidth_Callback cb) { ktexteditor__configpage_heightforwidth_callback = cb; }
    inline void setKTextEditor__ConfigPage_HasHeightForWidth_Callback(KTextEditor__ConfigPage_HasHeightForWidth_Callback cb) { ktexteditor__configpage_hasheightforwidth_callback = cb; }
    inline void setKTextEditor__ConfigPage_PaintEngine_Callback(KTextEditor__ConfigPage_PaintEngine_Callback cb) { ktexteditor__configpage_paintengine_callback = cb; }
    inline void setKTextEditor__ConfigPage_Event_Callback(KTextEditor__ConfigPage_Event_Callback cb) { ktexteditor__configpage_event_callback = cb; }
    inline void setKTextEditor__ConfigPage_MousePressEvent_Callback(KTextEditor__ConfigPage_MousePressEvent_Callback cb) { ktexteditor__configpage_mousepressevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_MouseReleaseEvent_Callback(KTextEditor__ConfigPage_MouseReleaseEvent_Callback cb) { ktexteditor__configpage_mousereleaseevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_MouseDoubleClickEvent_Callback(KTextEditor__ConfigPage_MouseDoubleClickEvent_Callback cb) { ktexteditor__configpage_mousedoubleclickevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_MouseMoveEvent_Callback(KTextEditor__ConfigPage_MouseMoveEvent_Callback cb) { ktexteditor__configpage_mousemoveevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_WheelEvent_Callback(KTextEditor__ConfigPage_WheelEvent_Callback cb) { ktexteditor__configpage_wheelevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_KeyPressEvent_Callback(KTextEditor__ConfigPage_KeyPressEvent_Callback cb) { ktexteditor__configpage_keypressevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_KeyReleaseEvent_Callback(KTextEditor__ConfigPage_KeyReleaseEvent_Callback cb) { ktexteditor__configpage_keyreleaseevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_FocusInEvent_Callback(KTextEditor__ConfigPage_FocusInEvent_Callback cb) { ktexteditor__configpage_focusinevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_FocusOutEvent_Callback(KTextEditor__ConfigPage_FocusOutEvent_Callback cb) { ktexteditor__configpage_focusoutevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_EnterEvent_Callback(KTextEditor__ConfigPage_EnterEvent_Callback cb) { ktexteditor__configpage_enterevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_LeaveEvent_Callback(KTextEditor__ConfigPage_LeaveEvent_Callback cb) { ktexteditor__configpage_leaveevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_PaintEvent_Callback(KTextEditor__ConfigPage_PaintEvent_Callback cb) { ktexteditor__configpage_paintevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_MoveEvent_Callback(KTextEditor__ConfigPage_MoveEvent_Callback cb) { ktexteditor__configpage_moveevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_ResizeEvent_Callback(KTextEditor__ConfigPage_ResizeEvent_Callback cb) { ktexteditor__configpage_resizeevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_CloseEvent_Callback(KTextEditor__ConfigPage_CloseEvent_Callback cb) { ktexteditor__configpage_closeevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_ContextMenuEvent_Callback(KTextEditor__ConfigPage_ContextMenuEvent_Callback cb) { ktexteditor__configpage_contextmenuevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_TabletEvent_Callback(KTextEditor__ConfigPage_TabletEvent_Callback cb) { ktexteditor__configpage_tabletevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_ActionEvent_Callback(KTextEditor__ConfigPage_ActionEvent_Callback cb) { ktexteditor__configpage_actionevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_DragEnterEvent_Callback(KTextEditor__ConfigPage_DragEnterEvent_Callback cb) { ktexteditor__configpage_dragenterevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_DragMoveEvent_Callback(KTextEditor__ConfigPage_DragMoveEvent_Callback cb) { ktexteditor__configpage_dragmoveevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_DragLeaveEvent_Callback(KTextEditor__ConfigPage_DragLeaveEvent_Callback cb) { ktexteditor__configpage_dragleaveevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_DropEvent_Callback(KTextEditor__ConfigPage_DropEvent_Callback cb) { ktexteditor__configpage_dropevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_ShowEvent_Callback(KTextEditor__ConfigPage_ShowEvent_Callback cb) { ktexteditor__configpage_showevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_HideEvent_Callback(KTextEditor__ConfigPage_HideEvent_Callback cb) { ktexteditor__configpage_hideevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_NativeEvent_Callback(KTextEditor__ConfigPage_NativeEvent_Callback cb) { ktexteditor__configpage_nativeevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_ChangeEvent_Callback(KTextEditor__ConfigPage_ChangeEvent_Callback cb) { ktexteditor__configpage_changeevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_Metric_Callback(KTextEditor__ConfigPage_Metric_Callback cb) { ktexteditor__configpage_metric_callback = cb; }
    inline void setKTextEditor__ConfigPage_InitPainter_Callback(KTextEditor__ConfigPage_InitPainter_Callback cb) { ktexteditor__configpage_initpainter_callback = cb; }
    inline void setKTextEditor__ConfigPage_Redirected_Callback(KTextEditor__ConfigPage_Redirected_Callback cb) { ktexteditor__configpage_redirected_callback = cb; }
    inline void setKTextEditor__ConfigPage_SharedPainter_Callback(KTextEditor__ConfigPage_SharedPainter_Callback cb) { ktexteditor__configpage_sharedpainter_callback = cb; }
    inline void setKTextEditor__ConfigPage_InputMethodEvent_Callback(KTextEditor__ConfigPage_InputMethodEvent_Callback cb) { ktexteditor__configpage_inputmethodevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_InputMethodQuery_Callback(KTextEditor__ConfigPage_InputMethodQuery_Callback cb) { ktexteditor__configpage_inputmethodquery_callback = cb; }
    inline void setKTextEditor__ConfigPage_FocusNextPrevChild_Callback(KTextEditor__ConfigPage_FocusNextPrevChild_Callback cb) { ktexteditor__configpage_focusnextprevchild_callback = cb; }
    inline void setKTextEditor__ConfigPage_EventFilter_Callback(KTextEditor__ConfigPage_EventFilter_Callback cb) { ktexteditor__configpage_eventfilter_callback = cb; }
    inline void setKTextEditor__ConfigPage_TimerEvent_Callback(KTextEditor__ConfigPage_TimerEvent_Callback cb) { ktexteditor__configpage_timerevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_ChildEvent_Callback(KTextEditor__ConfigPage_ChildEvent_Callback cb) { ktexteditor__configpage_childevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_CustomEvent_Callback(KTextEditor__ConfigPage_CustomEvent_Callback cb) { ktexteditor__configpage_customevent_callback = cb; }
    inline void setKTextEditor__ConfigPage_ConnectNotify_Callback(KTextEditor__ConfigPage_ConnectNotify_Callback cb) { ktexteditor__configpage_connectnotify_callback = cb; }
    inline void setKTextEditor__ConfigPage_DisconnectNotify_Callback(KTextEditor__ConfigPage_DisconnectNotify_Callback cb) { ktexteditor__configpage_disconnectnotify_callback = cb; }
    inline void setKTextEditor__ConfigPage_UpdateMicroFocus_Callback(KTextEditor__ConfigPage_UpdateMicroFocus_Callback cb) { ktexteditor__configpage_updatemicrofocus_callback = cb; }
    inline void setKTextEditor__ConfigPage_Create_Callback(KTextEditor__ConfigPage_Create_Callback cb) { ktexteditor__configpage_create_callback = cb; }
    inline void setKTextEditor__ConfigPage_Destroy_Callback(KTextEditor__ConfigPage_Destroy_Callback cb) { ktexteditor__configpage_destroy_callback = cb; }
    inline void setKTextEditor__ConfigPage_FocusNextChild_Callback(KTextEditor__ConfigPage_FocusNextChild_Callback cb) { ktexteditor__configpage_focusnextchild_callback = cb; }
    inline void setKTextEditor__ConfigPage_FocusPreviousChild_Callback(KTextEditor__ConfigPage_FocusPreviousChild_Callback cb) { ktexteditor__configpage_focuspreviouschild_callback = cb; }
    inline void setKTextEditor__ConfigPage_Sender_Callback(KTextEditor__ConfigPage_Sender_Callback cb) { ktexteditor__configpage_sender_callback = cb; }
    inline void setKTextEditor__ConfigPage_SenderSignalIndex_Callback(KTextEditor__ConfigPage_SenderSignalIndex_Callback cb) { ktexteditor__configpage_sendersignalindex_callback = cb; }
    inline void setKTextEditor__ConfigPage_Receivers_Callback(KTextEditor__ConfigPage_Receivers_Callback cb) { ktexteditor__configpage_receivers_callback = cb; }
    inline void setKTextEditor__ConfigPage_IsSignalConnected_Callback(KTextEditor__ConfigPage_IsSignalConnected_Callback cb) { ktexteditor__configpage_issignalconnected_callback = cb; }
    inline void setKTextEditor__ConfigPage_GetDecodedMetricF_Callback(KTextEditor__ConfigPage_GetDecodedMetricF_Callback cb) { ktexteditor__configpage_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setKTextEditor__ConfigPage_Metacall_IsBase(bool value) const { ktexteditor__configpage_metacall_isbase = value; }
    inline void setKTextEditor__ConfigPage_Name_IsBase(bool value) const { ktexteditor__configpage_name_isbase = value; }
    inline void setKTextEditor__ConfigPage_FullName_IsBase(bool value) const { ktexteditor__configpage_fullname_isbase = value; }
    inline void setKTextEditor__ConfigPage_Icon_IsBase(bool value) const { ktexteditor__configpage_icon_isbase = value; }
    inline void setKTextEditor__ConfigPage_Apply_IsBase(bool value) const { ktexteditor__configpage_apply_isbase = value; }
    inline void setKTextEditor__ConfigPage_Reset_IsBase(bool value) const { ktexteditor__configpage_reset_isbase = value; }
    inline void setKTextEditor__ConfigPage_Defaults_IsBase(bool value) const { ktexteditor__configpage_defaults_isbase = value; }
    inline void setKTextEditor__ConfigPage_DevType_IsBase(bool value) const { ktexteditor__configpage_devtype_isbase = value; }
    inline void setKTextEditor__ConfigPage_SetVisible_IsBase(bool value) const { ktexteditor__configpage_setvisible_isbase = value; }
    inline void setKTextEditor__ConfigPage_SizeHint_IsBase(bool value) const { ktexteditor__configpage_sizehint_isbase = value; }
    inline void setKTextEditor__ConfigPage_MinimumSizeHint_IsBase(bool value) const { ktexteditor__configpage_minimumsizehint_isbase = value; }
    inline void setKTextEditor__ConfigPage_HeightForWidth_IsBase(bool value) const { ktexteditor__configpage_heightforwidth_isbase = value; }
    inline void setKTextEditor__ConfigPage_HasHeightForWidth_IsBase(bool value) const { ktexteditor__configpage_hasheightforwidth_isbase = value; }
    inline void setKTextEditor__ConfigPage_PaintEngine_IsBase(bool value) const { ktexteditor__configpage_paintengine_isbase = value; }
    inline void setKTextEditor__ConfigPage_Event_IsBase(bool value) const { ktexteditor__configpage_event_isbase = value; }
    inline void setKTextEditor__ConfigPage_MousePressEvent_IsBase(bool value) const { ktexteditor__configpage_mousepressevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_MouseReleaseEvent_IsBase(bool value) const { ktexteditor__configpage_mousereleaseevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_MouseDoubleClickEvent_IsBase(bool value) const { ktexteditor__configpage_mousedoubleclickevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_MouseMoveEvent_IsBase(bool value) const { ktexteditor__configpage_mousemoveevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_WheelEvent_IsBase(bool value) const { ktexteditor__configpage_wheelevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_KeyPressEvent_IsBase(bool value) const { ktexteditor__configpage_keypressevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_KeyReleaseEvent_IsBase(bool value) const { ktexteditor__configpage_keyreleaseevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_FocusInEvent_IsBase(bool value) const { ktexteditor__configpage_focusinevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_FocusOutEvent_IsBase(bool value) const { ktexteditor__configpage_focusoutevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_EnterEvent_IsBase(bool value) const { ktexteditor__configpage_enterevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_LeaveEvent_IsBase(bool value) const { ktexteditor__configpage_leaveevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_PaintEvent_IsBase(bool value) const { ktexteditor__configpage_paintevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_MoveEvent_IsBase(bool value) const { ktexteditor__configpage_moveevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_ResizeEvent_IsBase(bool value) const { ktexteditor__configpage_resizeevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_CloseEvent_IsBase(bool value) const { ktexteditor__configpage_closeevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_ContextMenuEvent_IsBase(bool value) const { ktexteditor__configpage_contextmenuevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_TabletEvent_IsBase(bool value) const { ktexteditor__configpage_tabletevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_ActionEvent_IsBase(bool value) const { ktexteditor__configpage_actionevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_DragEnterEvent_IsBase(bool value) const { ktexteditor__configpage_dragenterevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_DragMoveEvent_IsBase(bool value) const { ktexteditor__configpage_dragmoveevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_DragLeaveEvent_IsBase(bool value) const { ktexteditor__configpage_dragleaveevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_DropEvent_IsBase(bool value) const { ktexteditor__configpage_dropevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_ShowEvent_IsBase(bool value) const { ktexteditor__configpage_showevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_HideEvent_IsBase(bool value) const { ktexteditor__configpage_hideevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_NativeEvent_IsBase(bool value) const { ktexteditor__configpage_nativeevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_ChangeEvent_IsBase(bool value) const { ktexteditor__configpage_changeevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_Metric_IsBase(bool value) const { ktexteditor__configpage_metric_isbase = value; }
    inline void setKTextEditor__ConfigPage_InitPainter_IsBase(bool value) const { ktexteditor__configpage_initpainter_isbase = value; }
    inline void setKTextEditor__ConfigPage_Redirected_IsBase(bool value) const { ktexteditor__configpage_redirected_isbase = value; }
    inline void setKTextEditor__ConfigPage_SharedPainter_IsBase(bool value) const { ktexteditor__configpage_sharedpainter_isbase = value; }
    inline void setKTextEditor__ConfigPage_InputMethodEvent_IsBase(bool value) const { ktexteditor__configpage_inputmethodevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_InputMethodQuery_IsBase(bool value) const { ktexteditor__configpage_inputmethodquery_isbase = value; }
    inline void setKTextEditor__ConfigPage_FocusNextPrevChild_IsBase(bool value) const { ktexteditor__configpage_focusnextprevchild_isbase = value; }
    inline void setKTextEditor__ConfigPage_EventFilter_IsBase(bool value) const { ktexteditor__configpage_eventfilter_isbase = value; }
    inline void setKTextEditor__ConfigPage_TimerEvent_IsBase(bool value) const { ktexteditor__configpage_timerevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_ChildEvent_IsBase(bool value) const { ktexteditor__configpage_childevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_CustomEvent_IsBase(bool value) const { ktexteditor__configpage_customevent_isbase = value; }
    inline void setKTextEditor__ConfigPage_ConnectNotify_IsBase(bool value) const { ktexteditor__configpage_connectnotify_isbase = value; }
    inline void setKTextEditor__ConfigPage_DisconnectNotify_IsBase(bool value) const { ktexteditor__configpage_disconnectnotify_isbase = value; }
    inline void setKTextEditor__ConfigPage_UpdateMicroFocus_IsBase(bool value) const { ktexteditor__configpage_updatemicrofocus_isbase = value; }
    inline void setKTextEditor__ConfigPage_Create_IsBase(bool value) const { ktexteditor__configpage_create_isbase = value; }
    inline void setKTextEditor__ConfigPage_Destroy_IsBase(bool value) const { ktexteditor__configpage_destroy_isbase = value; }
    inline void setKTextEditor__ConfigPage_FocusNextChild_IsBase(bool value) const { ktexteditor__configpage_focusnextchild_isbase = value; }
    inline void setKTextEditor__ConfigPage_FocusPreviousChild_IsBase(bool value) const { ktexteditor__configpage_focuspreviouschild_isbase = value; }
    inline void setKTextEditor__ConfigPage_Sender_IsBase(bool value) const { ktexteditor__configpage_sender_isbase = value; }
    inline void setKTextEditor__ConfigPage_SenderSignalIndex_IsBase(bool value) const { ktexteditor__configpage_sendersignalindex_isbase = value; }
    inline void setKTextEditor__ConfigPage_Receivers_IsBase(bool value) const { ktexteditor__configpage_receivers_isbase = value; }
    inline void setKTextEditor__ConfigPage_IsSignalConnected_IsBase(bool value) const { ktexteditor__configpage_issignalconnected_isbase = value; }
    inline void setKTextEditor__ConfigPage_GetDecodedMetricF_IsBase(bool value) const { ktexteditor__configpage_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktexteditor__configpage_metacall_isbase) {
            ktexteditor__configpage_metacall_isbase = false;
            return KTextEditor__ConfigPage::qt_metacall(param1, param2, param3);
        } else if (ktexteditor__configpage_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ktexteditor__configpage_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__ConfigPage::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString name() const override {
        if (ktexteditor__configpage_name_callback != nullptr) {
            const char* callback_ret = ktexteditor__configpage_name_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString fullName() const override {
        if (ktexteditor__configpage_fullname_isbase) {
            ktexteditor__configpage_fullname_isbase = false;
            return KTextEditor__ConfigPage::fullName();
        } else if (ktexteditor__configpage_fullname_callback != nullptr) {
            const char* callback_ret = ktexteditor__configpage_fullname_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KTextEditor__ConfigPage::fullName();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QIcon icon() const override {
        if (ktexteditor__configpage_icon_isbase) {
            ktexteditor__configpage_icon_isbase = false;
            return KTextEditor__ConfigPage::icon();
        } else if (ktexteditor__configpage_icon_callback != nullptr) {
            QIcon* callback_ret = ktexteditor__configpage_icon_callback();
            return *callback_ret;
        } else {
            return KTextEditor__ConfigPage::icon();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void apply() override {
        if (ktexteditor__configpage_apply_callback != nullptr) {
            ktexteditor__configpage_apply_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (ktexteditor__configpage_reset_callback != nullptr) {
            ktexteditor__configpage_reset_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void defaults() override {
        if (ktexteditor__configpage_defaults_callback != nullptr) {
            ktexteditor__configpage_defaults_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ktexteditor__configpage_devtype_isbase) {
            ktexteditor__configpage_devtype_isbase = false;
            return KTextEditor__ConfigPage::devType();
        } else if (ktexteditor__configpage_devtype_callback != nullptr) {
            int callback_ret = ktexteditor__configpage_devtype_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__ConfigPage::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ktexteditor__configpage_setvisible_isbase) {
            ktexteditor__configpage_setvisible_isbase = false;
            KTextEditor__ConfigPage::setVisible(visible);
        } else if (ktexteditor__configpage_setvisible_callback != nullptr) {
            bool cbval1 = visible;

            ktexteditor__configpage_setvisible_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ktexteditor__configpage_sizehint_isbase) {
            ktexteditor__configpage_sizehint_isbase = false;
            return KTextEditor__ConfigPage::sizeHint();
        } else if (ktexteditor__configpage_sizehint_callback != nullptr) {
            QSize* callback_ret = ktexteditor__configpage_sizehint_callback();
            return *callback_ret;
        } else {
            return KTextEditor__ConfigPage::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ktexteditor__configpage_minimumsizehint_isbase) {
            ktexteditor__configpage_minimumsizehint_isbase = false;
            return KTextEditor__ConfigPage::minimumSizeHint();
        } else if (ktexteditor__configpage_minimumsizehint_callback != nullptr) {
            QSize* callback_ret = ktexteditor__configpage_minimumsizehint_callback();
            return *callback_ret;
        } else {
            return KTextEditor__ConfigPage::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ktexteditor__configpage_heightforwidth_isbase) {
            ktexteditor__configpage_heightforwidth_isbase = false;
            return KTextEditor__ConfigPage::heightForWidth(param1);
        } else if (ktexteditor__configpage_heightforwidth_callback != nullptr) {
            int cbval1 = param1;

            int callback_ret = ktexteditor__configpage_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__ConfigPage::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ktexteditor__configpage_hasheightforwidth_isbase) {
            ktexteditor__configpage_hasheightforwidth_isbase = false;
            return KTextEditor__ConfigPage::hasHeightForWidth();
        } else if (ktexteditor__configpage_hasheightforwidth_callback != nullptr) {
            bool callback_ret = ktexteditor__configpage_hasheightforwidth_callback();
            return callback_ret;
        } else {
            return KTextEditor__ConfigPage::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ktexteditor__configpage_paintengine_isbase) {
            ktexteditor__configpage_paintengine_isbase = false;
            return KTextEditor__ConfigPage::paintEngine();
        } else if (ktexteditor__configpage_paintengine_callback != nullptr) {
            QPaintEngine* callback_ret = ktexteditor__configpage_paintengine_callback();
            return callback_ret;
        } else {
            return KTextEditor__ConfigPage::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktexteditor__configpage_event_isbase) {
            ktexteditor__configpage_event_isbase = false;
            return KTextEditor__ConfigPage::event(event);
        } else if (ktexteditor__configpage_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = ktexteditor__configpage_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEditor__ConfigPage::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (ktexteditor__configpage_mousepressevent_isbase) {
            ktexteditor__configpage_mousepressevent_isbase = false;
            KTextEditor__ConfigPage::mousePressEvent(event);
        } else if (ktexteditor__configpage_mousepressevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ktexteditor__configpage_mousepressevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (ktexteditor__configpage_mousereleaseevent_isbase) {
            ktexteditor__configpage_mousereleaseevent_isbase = false;
            KTextEditor__ConfigPage::mouseReleaseEvent(event);
        } else if (ktexteditor__configpage_mousereleaseevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ktexteditor__configpage_mousereleaseevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (ktexteditor__configpage_mousedoubleclickevent_isbase) {
            ktexteditor__configpage_mousedoubleclickevent_isbase = false;
            KTextEditor__ConfigPage::mouseDoubleClickEvent(event);
        } else if (ktexteditor__configpage_mousedoubleclickevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ktexteditor__configpage_mousedoubleclickevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (ktexteditor__configpage_mousemoveevent_isbase) {
            ktexteditor__configpage_mousemoveevent_isbase = false;
            KTextEditor__ConfigPage::mouseMoveEvent(event);
        } else if (ktexteditor__configpage_mousemoveevent_callback != nullptr) {
            QMouseEvent* cbval1 = event;

            ktexteditor__configpage_mousemoveevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ktexteditor__configpage_wheelevent_isbase) {
            ktexteditor__configpage_wheelevent_isbase = false;
            KTextEditor__ConfigPage::wheelEvent(event);
        } else if (ktexteditor__configpage_wheelevent_callback != nullptr) {
            QWheelEvent* cbval1 = event;

            ktexteditor__configpage_wheelevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (ktexteditor__configpage_keypressevent_isbase) {
            ktexteditor__configpage_keypressevent_isbase = false;
            KTextEditor__ConfigPage::keyPressEvent(event);
        } else if (ktexteditor__configpage_keypressevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            ktexteditor__configpage_keypressevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (ktexteditor__configpage_keyreleaseevent_isbase) {
            ktexteditor__configpage_keyreleaseevent_isbase = false;
            KTextEditor__ConfigPage::keyReleaseEvent(event);
        } else if (ktexteditor__configpage_keyreleaseevent_callback != nullptr) {
            QKeyEvent* cbval1 = event;

            ktexteditor__configpage_keyreleaseevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (ktexteditor__configpage_focusinevent_isbase) {
            ktexteditor__configpage_focusinevent_isbase = false;
            KTextEditor__ConfigPage::focusInEvent(event);
        } else if (ktexteditor__configpage_focusinevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            ktexteditor__configpage_focusinevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (ktexteditor__configpage_focusoutevent_isbase) {
            ktexteditor__configpage_focusoutevent_isbase = false;
            KTextEditor__ConfigPage::focusOutEvent(event);
        } else if (ktexteditor__configpage_focusoutevent_callback != nullptr) {
            QFocusEvent* cbval1 = event;

            ktexteditor__configpage_focusoutevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ktexteditor__configpage_enterevent_isbase) {
            ktexteditor__configpage_enterevent_isbase = false;
            KTextEditor__ConfigPage::enterEvent(event);
        } else if (ktexteditor__configpage_enterevent_callback != nullptr) {
            QEnterEvent* cbval1 = event;

            ktexteditor__configpage_enterevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ktexteditor__configpage_leaveevent_isbase) {
            ktexteditor__configpage_leaveevent_isbase = false;
            KTextEditor__ConfigPage::leaveEvent(event);
        } else if (ktexteditor__configpage_leaveevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktexteditor__configpage_leaveevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (ktexteditor__configpage_paintevent_isbase) {
            ktexteditor__configpage_paintevent_isbase = false;
            KTextEditor__ConfigPage::paintEvent(event);
        } else if (ktexteditor__configpage_paintevent_callback != nullptr) {
            QPaintEvent* cbval1 = event;

            ktexteditor__configpage_paintevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ktexteditor__configpage_moveevent_isbase) {
            ktexteditor__configpage_moveevent_isbase = false;
            KTextEditor__ConfigPage::moveEvent(event);
        } else if (ktexteditor__configpage_moveevent_callback != nullptr) {
            QMoveEvent* cbval1 = event;

            ktexteditor__configpage_moveevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (ktexteditor__configpage_resizeevent_isbase) {
            ktexteditor__configpage_resizeevent_isbase = false;
            KTextEditor__ConfigPage::resizeEvent(event);
        } else if (ktexteditor__configpage_resizeevent_callback != nullptr) {
            QResizeEvent* cbval1 = event;

            ktexteditor__configpage_resizeevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ktexteditor__configpage_closeevent_isbase) {
            ktexteditor__configpage_closeevent_isbase = false;
            KTextEditor__ConfigPage::closeEvent(event);
        } else if (ktexteditor__configpage_closeevent_callback != nullptr) {
            QCloseEvent* cbval1 = event;

            ktexteditor__configpage_closeevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (ktexteditor__configpage_contextmenuevent_isbase) {
            ktexteditor__configpage_contextmenuevent_isbase = false;
            KTextEditor__ConfigPage::contextMenuEvent(event);
        } else if (ktexteditor__configpage_contextmenuevent_callback != nullptr) {
            QContextMenuEvent* cbval1 = event;

            ktexteditor__configpage_contextmenuevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ktexteditor__configpage_tabletevent_isbase) {
            ktexteditor__configpage_tabletevent_isbase = false;
            KTextEditor__ConfigPage::tabletEvent(event);
        } else if (ktexteditor__configpage_tabletevent_callback != nullptr) {
            QTabletEvent* cbval1 = event;

            ktexteditor__configpage_tabletevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (ktexteditor__configpage_actionevent_isbase) {
            ktexteditor__configpage_actionevent_isbase = false;
            KTextEditor__ConfigPage::actionEvent(event);
        } else if (ktexteditor__configpage_actionevent_callback != nullptr) {
            QActionEvent* cbval1 = event;

            ktexteditor__configpage_actionevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (ktexteditor__configpage_dragenterevent_isbase) {
            ktexteditor__configpage_dragenterevent_isbase = false;
            KTextEditor__ConfigPage::dragEnterEvent(event);
        } else if (ktexteditor__configpage_dragenterevent_callback != nullptr) {
            QDragEnterEvent* cbval1 = event;

            ktexteditor__configpage_dragenterevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (ktexteditor__configpage_dragmoveevent_isbase) {
            ktexteditor__configpage_dragmoveevent_isbase = false;
            KTextEditor__ConfigPage::dragMoveEvent(event);
        } else if (ktexteditor__configpage_dragmoveevent_callback != nullptr) {
            QDragMoveEvent* cbval1 = event;

            ktexteditor__configpage_dragmoveevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (ktexteditor__configpage_dragleaveevent_isbase) {
            ktexteditor__configpage_dragleaveevent_isbase = false;
            KTextEditor__ConfigPage::dragLeaveEvent(event);
        } else if (ktexteditor__configpage_dragleaveevent_callback != nullptr) {
            QDragLeaveEvent* cbval1 = event;

            ktexteditor__configpage_dragleaveevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (ktexteditor__configpage_dropevent_isbase) {
            ktexteditor__configpage_dropevent_isbase = false;
            KTextEditor__ConfigPage::dropEvent(event);
        } else if (ktexteditor__configpage_dropevent_callback != nullptr) {
            QDropEvent* cbval1 = event;

            ktexteditor__configpage_dropevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (ktexteditor__configpage_showevent_isbase) {
            ktexteditor__configpage_showevent_isbase = false;
            KTextEditor__ConfigPage::showEvent(event);
        } else if (ktexteditor__configpage_showevent_callback != nullptr) {
            QShowEvent* cbval1 = event;

            ktexteditor__configpage_showevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (ktexteditor__configpage_hideevent_isbase) {
            ktexteditor__configpage_hideevent_isbase = false;
            KTextEditor__ConfigPage::hideEvent(event);
        } else if (ktexteditor__configpage_hideevent_callback != nullptr) {
            QHideEvent* cbval1 = event;

            ktexteditor__configpage_hideevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ktexteditor__configpage_nativeevent_isbase) {
            ktexteditor__configpage_nativeevent_isbase = false;
            return KTextEditor__ConfigPage::nativeEvent(eventType, message, result);
        } else if (ktexteditor__configpage_nativeevent_callback != nullptr) {
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

            bool callback_ret = ktexteditor__configpage_nativeevent_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KTextEditor__ConfigPage::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (ktexteditor__configpage_changeevent_isbase) {
            ktexteditor__configpage_changeevent_isbase = false;
            KTextEditor__ConfigPage::changeEvent(param1);
        } else if (ktexteditor__configpage_changeevent_callback != nullptr) {
            QEvent* cbval1 = param1;

            ktexteditor__configpage_changeevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ktexteditor__configpage_metric_isbase) {
            ktexteditor__configpage_metric_isbase = false;
            return KTextEditor__ConfigPage::metric(param1);
        } else if (ktexteditor__configpage_metric_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = ktexteditor__configpage_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__ConfigPage::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ktexteditor__configpage_initpainter_isbase) {
            ktexteditor__configpage_initpainter_isbase = false;
            KTextEditor__ConfigPage::initPainter(painter);
        } else if (ktexteditor__configpage_initpainter_callback != nullptr) {
            QPainter* cbval1 = painter;

            ktexteditor__configpage_initpainter_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ktexteditor__configpage_redirected_isbase) {
            ktexteditor__configpage_redirected_isbase = false;
            return KTextEditor__ConfigPage::redirected(offset);
        } else if (ktexteditor__configpage_redirected_callback != nullptr) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = ktexteditor__configpage_redirected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEditor__ConfigPage::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ktexteditor__configpage_sharedpainter_isbase) {
            ktexteditor__configpage_sharedpainter_isbase = false;
            return KTextEditor__ConfigPage::sharedPainter();
        } else if (ktexteditor__configpage_sharedpainter_callback != nullptr) {
            QPainter* callback_ret = ktexteditor__configpage_sharedpainter_callback();
            return callback_ret;
        } else {
            return KTextEditor__ConfigPage::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ktexteditor__configpage_inputmethodevent_isbase) {
            ktexteditor__configpage_inputmethodevent_isbase = false;
            KTextEditor__ConfigPage::inputMethodEvent(param1);
        } else if (ktexteditor__configpage_inputmethodevent_callback != nullptr) {
            QInputMethodEvent* cbval1 = param1;

            ktexteditor__configpage_inputmethodevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ktexteditor__configpage_inputmethodquery_isbase) {
            ktexteditor__configpage_inputmethodquery_isbase = false;
            return KTextEditor__ConfigPage::inputMethodQuery(param1);
        } else if (ktexteditor__configpage_inputmethodquery_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = ktexteditor__configpage_inputmethodquery_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KTextEditor__ConfigPage::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ktexteditor__configpage_focusnextprevchild_isbase) {
            ktexteditor__configpage_focusnextprevchild_isbase = false;
            return KTextEditor__ConfigPage::focusNextPrevChild(next);
        } else if (ktexteditor__configpage_focusnextprevchild_callback != nullptr) {
            bool cbval1 = next;

            bool callback_ret = ktexteditor__configpage_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEditor__ConfigPage::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktexteditor__configpage_eventfilter_isbase) {
            ktexteditor__configpage_eventfilter_isbase = false;
            return KTextEditor__ConfigPage::eventFilter(watched, event);
        } else if (ktexteditor__configpage_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = ktexteditor__configpage_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KTextEditor__ConfigPage::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktexteditor__configpage_timerevent_isbase) {
            ktexteditor__configpage_timerevent_isbase = false;
            KTextEditor__ConfigPage::timerEvent(event);
        } else if (ktexteditor__configpage_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ktexteditor__configpage_timerevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktexteditor__configpage_childevent_isbase) {
            ktexteditor__configpage_childevent_isbase = false;
            KTextEditor__ConfigPage::childEvent(event);
        } else if (ktexteditor__configpage_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ktexteditor__configpage_childevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktexteditor__configpage_customevent_isbase) {
            ktexteditor__configpage_customevent_isbase = false;
            KTextEditor__ConfigPage::customEvent(event);
        } else if (ktexteditor__configpage_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktexteditor__configpage_customevent_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__configpage_connectnotify_isbase) {
            ktexteditor__configpage_connectnotify_isbase = false;
            KTextEditor__ConfigPage::connectNotify(signal);
        } else if (ktexteditor__configpage_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktexteditor__configpage_connectnotify_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__configpage_disconnectnotify_isbase) {
            ktexteditor__configpage_disconnectnotify_isbase = false;
            KTextEditor__ConfigPage::disconnectNotify(signal);
        } else if (ktexteditor__configpage_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktexteditor__configpage_disconnectnotify_callback(this, cbval1);
        } else {
            KTextEditor__ConfigPage::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (ktexteditor__configpage_updatemicrofocus_isbase) {
            ktexteditor__configpage_updatemicrofocus_isbase = false;
            KTextEditor__ConfigPage::updateMicroFocus();
        } else if (ktexteditor__configpage_updatemicrofocus_callback != nullptr) {
            ktexteditor__configpage_updatemicrofocus_callback();
        } else {
            KTextEditor__ConfigPage::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (ktexteditor__configpage_create_isbase) {
            ktexteditor__configpage_create_isbase = false;
            KTextEditor__ConfigPage::create();
        } else if (ktexteditor__configpage_create_callback != nullptr) {
            ktexteditor__configpage_create_callback();
        } else {
            KTextEditor__ConfigPage::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (ktexteditor__configpage_destroy_isbase) {
            ktexteditor__configpage_destroy_isbase = false;
            KTextEditor__ConfigPage::destroy();
        } else if (ktexteditor__configpage_destroy_callback != nullptr) {
            ktexteditor__configpage_destroy_callback();
        } else {
            KTextEditor__ConfigPage::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (ktexteditor__configpage_focusnextchild_isbase) {
            ktexteditor__configpage_focusnextchild_isbase = false;
            return KTextEditor__ConfigPage::focusNextChild();
        } else if (ktexteditor__configpage_focusnextchild_callback != nullptr) {
            bool callback_ret = ktexteditor__configpage_focusnextchild_callback();
            return callback_ret;
        } else {
            return KTextEditor__ConfigPage::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (ktexteditor__configpage_focuspreviouschild_isbase) {
            ktexteditor__configpage_focuspreviouschild_isbase = false;
            return KTextEditor__ConfigPage::focusPreviousChild();
        } else if (ktexteditor__configpage_focuspreviouschild_callback != nullptr) {
            bool callback_ret = ktexteditor__configpage_focuspreviouschild_callback();
            return callback_ret;
        } else {
            return KTextEditor__ConfigPage::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktexteditor__configpage_sender_isbase) {
            ktexteditor__configpage_sender_isbase = false;
            return KTextEditor__ConfigPage::sender();
        } else if (ktexteditor__configpage_sender_callback != nullptr) {
            QObject* callback_ret = ktexteditor__configpage_sender_callback();
            return callback_ret;
        } else {
            return KTextEditor__ConfigPage::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktexteditor__configpage_sendersignalindex_isbase) {
            ktexteditor__configpage_sendersignalindex_isbase = false;
            return KTextEditor__ConfigPage::senderSignalIndex();
        } else if (ktexteditor__configpage_sendersignalindex_callback != nullptr) {
            int callback_ret = ktexteditor__configpage_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__ConfigPage::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktexteditor__configpage_receivers_isbase) {
            ktexteditor__configpage_receivers_isbase = false;
            return KTextEditor__ConfigPage::receivers(signal);
        } else if (ktexteditor__configpage_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ktexteditor__configpage_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__ConfigPage::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktexteditor__configpage_issignalconnected_isbase) {
            ktexteditor__configpage_issignalconnected_isbase = false;
            return KTextEditor__ConfigPage::isSignalConnected(signal);
        } else if (ktexteditor__configpage_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ktexteditor__configpage_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEditor__ConfigPage::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (ktexteditor__configpage_getdecodedmetricf_isbase) {
            ktexteditor__configpage_getdecodedmetricf_isbase = false;
            return KTextEditor__ConfigPage::getDecodedMetricF(metricA, metricB);
        } else if (ktexteditor__configpage_getdecodedmetricf_callback != nullptr) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = ktexteditor__configpage_getdecodedmetricf_callback(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        } else {
            return KTextEditor__ConfigPage::getDecodedMetricF(metricA, metricB);
        }
    }

    // Friend functions
    friend bool KTextEditor__ConfigPage_Event(KTextEditor::ConfigPage* self, QEvent* event);
    friend bool KTextEditor__ConfigPage_QBaseEvent(KTextEditor::ConfigPage* self, QEvent* event);
    friend void KTextEditor__ConfigPage_MousePressEvent(KTextEditor::ConfigPage* self, QMouseEvent* event);
    friend void KTextEditor__ConfigPage_QBaseMousePressEvent(KTextEditor::ConfigPage* self, QMouseEvent* event);
    friend void KTextEditor__ConfigPage_MouseReleaseEvent(KTextEditor::ConfigPage* self, QMouseEvent* event);
    friend void KTextEditor__ConfigPage_QBaseMouseReleaseEvent(KTextEditor::ConfigPage* self, QMouseEvent* event);
    friend void KTextEditor__ConfigPage_MouseDoubleClickEvent(KTextEditor::ConfigPage* self, QMouseEvent* event);
    friend void KTextEditor__ConfigPage_QBaseMouseDoubleClickEvent(KTextEditor::ConfigPage* self, QMouseEvent* event);
    friend void KTextEditor__ConfigPage_MouseMoveEvent(KTextEditor::ConfigPage* self, QMouseEvent* event);
    friend void KTextEditor__ConfigPage_QBaseMouseMoveEvent(KTextEditor::ConfigPage* self, QMouseEvent* event);
    friend void KTextEditor__ConfigPage_WheelEvent(KTextEditor::ConfigPage* self, QWheelEvent* event);
    friend void KTextEditor__ConfigPage_QBaseWheelEvent(KTextEditor::ConfigPage* self, QWheelEvent* event);
    friend void KTextEditor__ConfigPage_KeyPressEvent(KTextEditor::ConfigPage* self, QKeyEvent* event);
    friend void KTextEditor__ConfigPage_QBaseKeyPressEvent(KTextEditor::ConfigPage* self, QKeyEvent* event);
    friend void KTextEditor__ConfigPage_KeyReleaseEvent(KTextEditor::ConfigPage* self, QKeyEvent* event);
    friend void KTextEditor__ConfigPage_QBaseKeyReleaseEvent(KTextEditor::ConfigPage* self, QKeyEvent* event);
    friend void KTextEditor__ConfigPage_FocusInEvent(KTextEditor::ConfigPage* self, QFocusEvent* event);
    friend void KTextEditor__ConfigPage_QBaseFocusInEvent(KTextEditor::ConfigPage* self, QFocusEvent* event);
    friend void KTextEditor__ConfigPage_FocusOutEvent(KTextEditor::ConfigPage* self, QFocusEvent* event);
    friend void KTextEditor__ConfigPage_QBaseFocusOutEvent(KTextEditor::ConfigPage* self, QFocusEvent* event);
    friend void KTextEditor__ConfigPage_EnterEvent(KTextEditor::ConfigPage* self, QEnterEvent* event);
    friend void KTextEditor__ConfigPage_QBaseEnterEvent(KTextEditor::ConfigPage* self, QEnterEvent* event);
    friend void KTextEditor__ConfigPage_LeaveEvent(KTextEditor::ConfigPage* self, QEvent* event);
    friend void KTextEditor__ConfigPage_QBaseLeaveEvent(KTextEditor::ConfigPage* self, QEvent* event);
    friend void KTextEditor__ConfigPage_PaintEvent(KTextEditor::ConfigPage* self, QPaintEvent* event);
    friend void KTextEditor__ConfigPage_QBasePaintEvent(KTextEditor::ConfigPage* self, QPaintEvent* event);
    friend void KTextEditor__ConfigPage_MoveEvent(KTextEditor::ConfigPage* self, QMoveEvent* event);
    friend void KTextEditor__ConfigPage_QBaseMoveEvent(KTextEditor::ConfigPage* self, QMoveEvent* event);
    friend void KTextEditor__ConfigPage_ResizeEvent(KTextEditor::ConfigPage* self, QResizeEvent* event);
    friend void KTextEditor__ConfigPage_QBaseResizeEvent(KTextEditor::ConfigPage* self, QResizeEvent* event);
    friend void KTextEditor__ConfigPage_CloseEvent(KTextEditor::ConfigPage* self, QCloseEvent* event);
    friend void KTextEditor__ConfigPage_QBaseCloseEvent(KTextEditor::ConfigPage* self, QCloseEvent* event);
    friend void KTextEditor__ConfigPage_ContextMenuEvent(KTextEditor::ConfigPage* self, QContextMenuEvent* event);
    friend void KTextEditor__ConfigPage_QBaseContextMenuEvent(KTextEditor::ConfigPage* self, QContextMenuEvent* event);
    friend void KTextEditor__ConfigPage_TabletEvent(KTextEditor::ConfigPage* self, QTabletEvent* event);
    friend void KTextEditor__ConfigPage_QBaseTabletEvent(KTextEditor::ConfigPage* self, QTabletEvent* event);
    friend void KTextEditor__ConfigPage_ActionEvent(KTextEditor::ConfigPage* self, QActionEvent* event);
    friend void KTextEditor__ConfigPage_QBaseActionEvent(KTextEditor::ConfigPage* self, QActionEvent* event);
    friend void KTextEditor__ConfigPage_DragEnterEvent(KTextEditor::ConfigPage* self, QDragEnterEvent* event);
    friend void KTextEditor__ConfigPage_QBaseDragEnterEvent(KTextEditor::ConfigPage* self, QDragEnterEvent* event);
    friend void KTextEditor__ConfigPage_DragMoveEvent(KTextEditor::ConfigPage* self, QDragMoveEvent* event);
    friend void KTextEditor__ConfigPage_QBaseDragMoveEvent(KTextEditor::ConfigPage* self, QDragMoveEvent* event);
    friend void KTextEditor__ConfigPage_DragLeaveEvent(KTextEditor::ConfigPage* self, QDragLeaveEvent* event);
    friend void KTextEditor__ConfigPage_QBaseDragLeaveEvent(KTextEditor::ConfigPage* self, QDragLeaveEvent* event);
    friend void KTextEditor__ConfigPage_DropEvent(KTextEditor::ConfigPage* self, QDropEvent* event);
    friend void KTextEditor__ConfigPage_QBaseDropEvent(KTextEditor::ConfigPage* self, QDropEvent* event);
    friend void KTextEditor__ConfigPage_ShowEvent(KTextEditor::ConfigPage* self, QShowEvent* event);
    friend void KTextEditor__ConfigPage_QBaseShowEvent(KTextEditor::ConfigPage* self, QShowEvent* event);
    friend void KTextEditor__ConfigPage_HideEvent(KTextEditor::ConfigPage* self, QHideEvent* event);
    friend void KTextEditor__ConfigPage_QBaseHideEvent(KTextEditor::ConfigPage* self, QHideEvent* event);
    friend bool KTextEditor__ConfigPage_NativeEvent(KTextEditor::ConfigPage* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool KTextEditor__ConfigPage_QBaseNativeEvent(KTextEditor::ConfigPage* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KTextEditor__ConfigPage_ChangeEvent(KTextEditor::ConfigPage* self, QEvent* param1);
    friend void KTextEditor__ConfigPage_QBaseChangeEvent(KTextEditor::ConfigPage* self, QEvent* param1);
    friend int KTextEditor__ConfigPage_Metric(const KTextEditor::ConfigPage* self, int param1);
    friend int KTextEditor__ConfigPage_QBaseMetric(const KTextEditor::ConfigPage* self, int param1);
    friend void KTextEditor__ConfigPage_InitPainter(const KTextEditor::ConfigPage* self, QPainter* painter);
    friend void KTextEditor__ConfigPage_QBaseInitPainter(const KTextEditor::ConfigPage* self, QPainter* painter);
    friend QPaintDevice* KTextEditor__ConfigPage_Redirected(const KTextEditor::ConfigPage* self, QPoint* offset);
    friend QPaintDevice* KTextEditor__ConfigPage_QBaseRedirected(const KTextEditor::ConfigPage* self, QPoint* offset);
    friend QPainter* KTextEditor__ConfigPage_SharedPainter(const KTextEditor::ConfigPage* self);
    friend QPainter* KTextEditor__ConfigPage_QBaseSharedPainter(const KTextEditor::ConfigPage* self);
    friend void KTextEditor__ConfigPage_InputMethodEvent(KTextEditor::ConfigPage* self, QInputMethodEvent* param1);
    friend void KTextEditor__ConfigPage_QBaseInputMethodEvent(KTextEditor::ConfigPage* self, QInputMethodEvent* param1);
    friend bool KTextEditor__ConfigPage_FocusNextPrevChild(KTextEditor::ConfigPage* self, bool next);
    friend bool KTextEditor__ConfigPage_QBaseFocusNextPrevChild(KTextEditor::ConfigPage* self, bool next);
    friend void KTextEditor__ConfigPage_TimerEvent(KTextEditor::ConfigPage* self, QTimerEvent* event);
    friend void KTextEditor__ConfigPage_QBaseTimerEvent(KTextEditor::ConfigPage* self, QTimerEvent* event);
    friend void KTextEditor__ConfigPage_ChildEvent(KTextEditor::ConfigPage* self, QChildEvent* event);
    friend void KTextEditor__ConfigPage_QBaseChildEvent(KTextEditor::ConfigPage* self, QChildEvent* event);
    friend void KTextEditor__ConfigPage_CustomEvent(KTextEditor::ConfigPage* self, QEvent* event);
    friend void KTextEditor__ConfigPage_QBaseCustomEvent(KTextEditor::ConfigPage* self, QEvent* event);
    friend void KTextEditor__ConfigPage_ConnectNotify(KTextEditor::ConfigPage* self, const QMetaMethod* signal);
    friend void KTextEditor__ConfigPage_QBaseConnectNotify(KTextEditor::ConfigPage* self, const QMetaMethod* signal);
    friend void KTextEditor__ConfigPage_DisconnectNotify(KTextEditor::ConfigPage* self, const QMetaMethod* signal);
    friend void KTextEditor__ConfigPage_QBaseDisconnectNotify(KTextEditor::ConfigPage* self, const QMetaMethod* signal);
    friend void KTextEditor__ConfigPage_UpdateMicroFocus(KTextEditor::ConfigPage* self);
    friend void KTextEditor__ConfigPage_QBaseUpdateMicroFocus(KTextEditor::ConfigPage* self);
    friend void KTextEditor__ConfigPage_Create(KTextEditor::ConfigPage* self);
    friend void KTextEditor__ConfigPage_QBaseCreate(KTextEditor::ConfigPage* self);
    friend void KTextEditor__ConfigPage_Destroy(KTextEditor::ConfigPage* self);
    friend void KTextEditor__ConfigPage_QBaseDestroy(KTextEditor::ConfigPage* self);
    friend bool KTextEditor__ConfigPage_FocusNextChild(KTextEditor::ConfigPage* self);
    friend bool KTextEditor__ConfigPage_QBaseFocusNextChild(KTextEditor::ConfigPage* self);
    friend bool KTextEditor__ConfigPage_FocusPreviousChild(KTextEditor::ConfigPage* self);
    friend bool KTextEditor__ConfigPage_QBaseFocusPreviousChild(KTextEditor::ConfigPage* self);
    friend QObject* KTextEditor__ConfigPage_Sender(const KTextEditor::ConfigPage* self);
    friend QObject* KTextEditor__ConfigPage_QBaseSender(const KTextEditor::ConfigPage* self);
    friend int KTextEditor__ConfigPage_SenderSignalIndex(const KTextEditor::ConfigPage* self);
    friend int KTextEditor__ConfigPage_QBaseSenderSignalIndex(const KTextEditor::ConfigPage* self);
    friend int KTextEditor__ConfigPage_Receivers(const KTextEditor::ConfigPage* self, const char* signal);
    friend int KTextEditor__ConfigPage_QBaseReceivers(const KTextEditor::ConfigPage* self, const char* signal);
    friend bool KTextEditor__ConfigPage_IsSignalConnected(const KTextEditor::ConfigPage* self, const QMetaMethod* signal);
    friend bool KTextEditor__ConfigPage_QBaseIsSignalConnected(const KTextEditor::ConfigPage* self, const QMetaMethod* signal);
    friend double KTextEditor__ConfigPage_GetDecodedMetricF(const KTextEditor::ConfigPage* self, int metricA, int metricB);
    friend double KTextEditor__ConfigPage_QBaseGetDecodedMetricF(const KTextEditor::ConfigPage* self, int metricA, int metricB);
};

#endif
