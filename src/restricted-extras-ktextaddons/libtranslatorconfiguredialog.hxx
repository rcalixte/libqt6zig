#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTRANSLATORCONFIGUREDIALOG_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTRANSLATORCONFIGUREDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextTranslator::TranslatorConfigureDialog so that we can call protected methods
class VirtualTextTranslatorTranslatorConfigureDialog final : public TextTranslator::TranslatorConfigureDialog {

  public:
    // Virtual class boolean flag
    bool isVirtualTextTranslatorTranslatorConfigureDialog = true;

    // Virtual class public types (including callbacks)
    using TextTranslator__TranslatorConfigureDialog_MetaObject_Callback = QMetaObject* (*)();
    using TextTranslator__TranslatorConfigureDialog_Metacast_Callback = void* (*)(TextTranslator__TranslatorConfigureDialog*, const char*);
    using TextTranslator__TranslatorConfigureDialog_Metacall_Callback = int (*)(TextTranslator__TranslatorConfigureDialog*, int, int, void**);
    using TextTranslator__TranslatorConfigureDialog_SetVisible_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, bool);
    using TextTranslator__TranslatorConfigureDialog_SizeHint_Callback = QSize* (*)();
    using TextTranslator__TranslatorConfigureDialog_MinimumSizeHint_Callback = QSize* (*)();
    using TextTranslator__TranslatorConfigureDialog_Open_Callback = void (*)();
    using TextTranslator__TranslatorConfigureDialog_Exec_Callback = int (*)();
    using TextTranslator__TranslatorConfigureDialog_Done_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, int);
    using TextTranslator__TranslatorConfigureDialog_Accept_Callback = void (*)();
    using TextTranslator__TranslatorConfigureDialog_Reject_Callback = void (*)();
    using TextTranslator__TranslatorConfigureDialog_KeyPressEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QKeyEvent*);
    using TextTranslator__TranslatorConfigureDialog_CloseEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QCloseEvent*);
    using TextTranslator__TranslatorConfigureDialog_ShowEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QShowEvent*);
    using TextTranslator__TranslatorConfigureDialog_ResizeEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QResizeEvent*);
    using TextTranslator__TranslatorConfigureDialog_ContextMenuEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QContextMenuEvent*);
    using TextTranslator__TranslatorConfigureDialog_EventFilter_Callback = bool (*)(TextTranslator__TranslatorConfigureDialog*, QObject*, QEvent*);
    using TextTranslator__TranslatorConfigureDialog_DevType_Callback = int (*)();
    using TextTranslator__TranslatorConfigureDialog_HeightForWidth_Callback = int (*)(const TextTranslator__TranslatorConfigureDialog*, int);
    using TextTranslator__TranslatorConfigureDialog_HasHeightForWidth_Callback = bool (*)();
    using TextTranslator__TranslatorConfigureDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using TextTranslator__TranslatorConfigureDialog_Event_Callback = bool (*)(TextTranslator__TranslatorConfigureDialog*, QEvent*);
    using TextTranslator__TranslatorConfigureDialog_MousePressEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QMouseEvent*);
    using TextTranslator__TranslatorConfigureDialog_MouseReleaseEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QMouseEvent*);
    using TextTranslator__TranslatorConfigureDialog_MouseDoubleClickEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QMouseEvent*);
    using TextTranslator__TranslatorConfigureDialog_MouseMoveEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QMouseEvent*);
    using TextTranslator__TranslatorConfigureDialog_WheelEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QWheelEvent*);
    using TextTranslator__TranslatorConfigureDialog_KeyReleaseEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QKeyEvent*);
    using TextTranslator__TranslatorConfigureDialog_FocusInEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QFocusEvent*);
    using TextTranslator__TranslatorConfigureDialog_FocusOutEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QFocusEvent*);
    using TextTranslator__TranslatorConfigureDialog_EnterEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QEnterEvent*);
    using TextTranslator__TranslatorConfigureDialog_LeaveEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QEvent*);
    using TextTranslator__TranslatorConfigureDialog_PaintEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QPaintEvent*);
    using TextTranslator__TranslatorConfigureDialog_MoveEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QMoveEvent*);
    using TextTranslator__TranslatorConfigureDialog_TabletEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QTabletEvent*);
    using TextTranslator__TranslatorConfigureDialog_ActionEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QActionEvent*);
    using TextTranslator__TranslatorConfigureDialog_DragEnterEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QDragEnterEvent*);
    using TextTranslator__TranslatorConfigureDialog_DragMoveEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QDragMoveEvent*);
    using TextTranslator__TranslatorConfigureDialog_DragLeaveEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QDragLeaveEvent*);
    using TextTranslator__TranslatorConfigureDialog_DropEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QDropEvent*);
    using TextTranslator__TranslatorConfigureDialog_HideEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QHideEvent*);
    using TextTranslator__TranslatorConfigureDialog_NativeEvent_Callback = bool (*)(TextTranslator__TranslatorConfigureDialog*, libqt_string, void*, intptr_t*);
    using TextTranslator__TranslatorConfigureDialog_ChangeEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QEvent*);
    using TextTranslator__TranslatorConfigureDialog_Metric_Callback = int (*)(const TextTranslator__TranslatorConfigureDialog*, int);
    using TextTranslator__TranslatorConfigureDialog_InitPainter_Callback = void (*)(const TextTranslator__TranslatorConfigureDialog*, QPainter*);
    using TextTranslator__TranslatorConfigureDialog_Redirected_Callback = QPaintDevice* (*)(const TextTranslator__TranslatorConfigureDialog*, QPoint*);
    using TextTranslator__TranslatorConfigureDialog_SharedPainter_Callback = QPainter* (*)();
    using TextTranslator__TranslatorConfigureDialog_InputMethodEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QInputMethodEvent*);
    using TextTranslator__TranslatorConfigureDialog_InputMethodQuery_Callback = QVariant* (*)(const TextTranslator__TranslatorConfigureDialog*, int);
    using TextTranslator__TranslatorConfigureDialog_FocusNextPrevChild_Callback = bool (*)(TextTranslator__TranslatorConfigureDialog*, bool);
    using TextTranslator__TranslatorConfigureDialog_TimerEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QTimerEvent*);
    using TextTranslator__TranslatorConfigureDialog_ChildEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QChildEvent*);
    using TextTranslator__TranslatorConfigureDialog_CustomEvent_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QEvent*);
    using TextTranslator__TranslatorConfigureDialog_ConnectNotify_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QMetaMethod*);
    using TextTranslator__TranslatorConfigureDialog_DisconnectNotify_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QMetaMethod*);
    using TextTranslator__TranslatorConfigureDialog_AdjustPosition_Callback = void (*)(TextTranslator__TranslatorConfigureDialog*, QWidget*);
    using TextTranslator__TranslatorConfigureDialog_UpdateMicroFocus_Callback = void (*)();
    using TextTranslator__TranslatorConfigureDialog_Create_Callback = void (*)();
    using TextTranslator__TranslatorConfigureDialog_Destroy_Callback = void (*)();
    using TextTranslator__TranslatorConfigureDialog_FocusNextChild_Callback = bool (*)();
    using TextTranslator__TranslatorConfigureDialog_FocusPreviousChild_Callback = bool (*)();
    using TextTranslator__TranslatorConfigureDialog_Sender_Callback = QObject* (*)();
    using TextTranslator__TranslatorConfigureDialog_SenderSignalIndex_Callback = int (*)();
    using TextTranslator__TranslatorConfigureDialog_Receivers_Callback = int (*)(const TextTranslator__TranslatorConfigureDialog*, const char*);
    using TextTranslator__TranslatorConfigureDialog_IsSignalConnected_Callback = bool (*)(const TextTranslator__TranslatorConfigureDialog*, QMetaMethod*);
    using TextTranslator__TranslatorConfigureDialog_GetDecodedMetricF_Callback = double (*)(const TextTranslator__TranslatorConfigureDialog*, int, int);

  protected:
    // Instance callback storage
    TextTranslator__TranslatorConfigureDialog_MetaObject_Callback texttranslator__translatorconfiguredialog_metaobject_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Metacast_Callback texttranslator__translatorconfiguredialog_metacast_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Metacall_Callback texttranslator__translatorconfiguredialog_metacall_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_SetVisible_Callback texttranslator__translatorconfiguredialog_setvisible_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_SizeHint_Callback texttranslator__translatorconfiguredialog_sizehint_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_MinimumSizeHint_Callback texttranslator__translatorconfiguredialog_minimumsizehint_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Open_Callback texttranslator__translatorconfiguredialog_open_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Exec_Callback texttranslator__translatorconfiguredialog_exec_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Done_Callback texttranslator__translatorconfiguredialog_done_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Accept_Callback texttranslator__translatorconfiguredialog_accept_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Reject_Callback texttranslator__translatorconfiguredialog_reject_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_KeyPressEvent_Callback texttranslator__translatorconfiguredialog_keypressevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_CloseEvent_Callback texttranslator__translatorconfiguredialog_closeevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_ShowEvent_Callback texttranslator__translatorconfiguredialog_showevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_ResizeEvent_Callback texttranslator__translatorconfiguredialog_resizeevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_ContextMenuEvent_Callback texttranslator__translatorconfiguredialog_contextmenuevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_EventFilter_Callback texttranslator__translatorconfiguredialog_eventfilter_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_DevType_Callback texttranslator__translatorconfiguredialog_devtype_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_HeightForWidth_Callback texttranslator__translatorconfiguredialog_heightforwidth_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_HasHeightForWidth_Callback texttranslator__translatorconfiguredialog_hasheightforwidth_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_PaintEngine_Callback texttranslator__translatorconfiguredialog_paintengine_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Event_Callback texttranslator__translatorconfiguredialog_event_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_MousePressEvent_Callback texttranslator__translatorconfiguredialog_mousepressevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_MouseReleaseEvent_Callback texttranslator__translatorconfiguredialog_mousereleaseevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_MouseDoubleClickEvent_Callback texttranslator__translatorconfiguredialog_mousedoubleclickevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_MouseMoveEvent_Callback texttranslator__translatorconfiguredialog_mousemoveevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_WheelEvent_Callback texttranslator__translatorconfiguredialog_wheelevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_KeyReleaseEvent_Callback texttranslator__translatorconfiguredialog_keyreleaseevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_FocusInEvent_Callback texttranslator__translatorconfiguredialog_focusinevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_FocusOutEvent_Callback texttranslator__translatorconfiguredialog_focusoutevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_EnterEvent_Callback texttranslator__translatorconfiguredialog_enterevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_LeaveEvent_Callback texttranslator__translatorconfiguredialog_leaveevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_PaintEvent_Callback texttranslator__translatorconfiguredialog_paintevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_MoveEvent_Callback texttranslator__translatorconfiguredialog_moveevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_TabletEvent_Callback texttranslator__translatorconfiguredialog_tabletevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_ActionEvent_Callback texttranslator__translatorconfiguredialog_actionevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_DragEnterEvent_Callback texttranslator__translatorconfiguredialog_dragenterevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_DragMoveEvent_Callback texttranslator__translatorconfiguredialog_dragmoveevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_DragLeaveEvent_Callback texttranslator__translatorconfiguredialog_dragleaveevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_DropEvent_Callback texttranslator__translatorconfiguredialog_dropevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_HideEvent_Callback texttranslator__translatorconfiguredialog_hideevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_NativeEvent_Callback texttranslator__translatorconfiguredialog_nativeevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_ChangeEvent_Callback texttranslator__translatorconfiguredialog_changeevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Metric_Callback texttranslator__translatorconfiguredialog_metric_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_InitPainter_Callback texttranslator__translatorconfiguredialog_initpainter_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Redirected_Callback texttranslator__translatorconfiguredialog_redirected_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_SharedPainter_Callback texttranslator__translatorconfiguredialog_sharedpainter_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_InputMethodEvent_Callback texttranslator__translatorconfiguredialog_inputmethodevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_InputMethodQuery_Callback texttranslator__translatorconfiguredialog_inputmethodquery_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_FocusNextPrevChild_Callback texttranslator__translatorconfiguredialog_focusnextprevchild_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_TimerEvent_Callback texttranslator__translatorconfiguredialog_timerevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_ChildEvent_Callback texttranslator__translatorconfiguredialog_childevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_CustomEvent_Callback texttranslator__translatorconfiguredialog_customevent_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_ConnectNotify_Callback texttranslator__translatorconfiguredialog_connectnotify_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_DisconnectNotify_Callback texttranslator__translatorconfiguredialog_disconnectnotify_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_AdjustPosition_Callback texttranslator__translatorconfiguredialog_adjustposition_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_UpdateMicroFocus_Callback texttranslator__translatorconfiguredialog_updatemicrofocus_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Create_Callback texttranslator__translatorconfiguredialog_create_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Destroy_Callback texttranslator__translatorconfiguredialog_destroy_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_FocusNextChild_Callback texttranslator__translatorconfiguredialog_focusnextchild_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_FocusPreviousChild_Callback texttranslator__translatorconfiguredialog_focuspreviouschild_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Sender_Callback texttranslator__translatorconfiguredialog_sender_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_SenderSignalIndex_Callback texttranslator__translatorconfiguredialog_sendersignalindex_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_Receivers_Callback texttranslator__translatorconfiguredialog_receivers_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_IsSignalConnected_Callback texttranslator__translatorconfiguredialog_issignalconnected_callback = nullptr;
    TextTranslator__TranslatorConfigureDialog_GetDecodedMetricF_Callback texttranslator__translatorconfiguredialog_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool texttranslator__translatorconfiguredialog_metaobject_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_metacast_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_metacall_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_setvisible_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_sizehint_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_minimumsizehint_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_open_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_exec_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_done_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_accept_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_reject_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_keypressevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_closeevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_showevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_resizeevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_contextmenuevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_eventfilter_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_devtype_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_heightforwidth_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_hasheightforwidth_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_paintengine_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_event_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_mousepressevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_mousereleaseevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_mousedoubleclickevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_mousemoveevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_wheelevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_keyreleaseevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_focusinevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_focusoutevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_enterevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_leaveevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_paintevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_moveevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_tabletevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_actionevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_dragenterevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_dragmoveevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_dragleaveevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_dropevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_hideevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_nativeevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_changeevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_metric_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_initpainter_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_redirected_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_sharedpainter_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_inputmethodevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_inputmethodquery_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_focusnextprevchild_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_timerevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_childevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_customevent_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_connectnotify_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_disconnectnotify_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_adjustposition_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_updatemicrofocus_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_create_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_destroy_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_focusnextchild_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_focuspreviouschild_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_sender_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_sendersignalindex_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_receivers_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_issignalconnected_isbase = false;
    mutable bool texttranslator__translatorconfiguredialog_getdecodedmetricf_isbase = false;

  public:
    VirtualTextTranslatorTranslatorConfigureDialog(QWidget* parent) : TextTranslator::TranslatorConfigureDialog(parent) {};
    VirtualTextTranslatorTranslatorConfigureDialog() : TextTranslator::TranslatorConfigureDialog() {};

    // Callback setters
    inline void setTextTranslator__TranslatorConfigureDialog_MetaObject_Callback(TextTranslator__TranslatorConfigureDialog_MetaObject_Callback cb) { texttranslator__translatorconfiguredialog_metaobject_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_Metacast_Callback(TextTranslator__TranslatorConfigureDialog_Metacast_Callback cb) { texttranslator__translatorconfiguredialog_metacast_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_Metacall_Callback(TextTranslator__TranslatorConfigureDialog_Metacall_Callback cb) { texttranslator__translatorconfiguredialog_metacall_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_SetVisible_Callback(TextTranslator__TranslatorConfigureDialog_SetVisible_Callback cb) { texttranslator__translatorconfiguredialog_setvisible_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_SizeHint_Callback(TextTranslator__TranslatorConfigureDialog_SizeHint_Callback cb) { texttranslator__translatorconfiguredialog_sizehint_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_MinimumSizeHint_Callback(TextTranslator__TranslatorConfigureDialog_MinimumSizeHint_Callback cb) { texttranslator__translatorconfiguredialog_minimumsizehint_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_Open_Callback(TextTranslator__TranslatorConfigureDialog_Open_Callback cb) { texttranslator__translatorconfiguredialog_open_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_Exec_Callback(TextTranslator__TranslatorConfigureDialog_Exec_Callback cb) { texttranslator__translatorconfiguredialog_exec_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_Done_Callback(TextTranslator__TranslatorConfigureDialog_Done_Callback cb) { texttranslator__translatorconfiguredialog_done_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_Accept_Callback(TextTranslator__TranslatorConfigureDialog_Accept_Callback cb) { texttranslator__translatorconfiguredialog_accept_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_Reject_Callback(TextTranslator__TranslatorConfigureDialog_Reject_Callback cb) { texttranslator__translatorconfiguredialog_reject_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_KeyPressEvent_Callback(TextTranslator__TranslatorConfigureDialog_KeyPressEvent_Callback cb) { texttranslator__translatorconfiguredialog_keypressevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_CloseEvent_Callback(TextTranslator__TranslatorConfigureDialog_CloseEvent_Callback cb) { texttranslator__translatorconfiguredialog_closeevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_ShowEvent_Callback(TextTranslator__TranslatorConfigureDialog_ShowEvent_Callback cb) { texttranslator__translatorconfiguredialog_showevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_ResizeEvent_Callback(TextTranslator__TranslatorConfigureDialog_ResizeEvent_Callback cb) { texttranslator__translatorconfiguredialog_resizeevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_ContextMenuEvent_Callback(TextTranslator__TranslatorConfigureDialog_ContextMenuEvent_Callback cb) { texttranslator__translatorconfiguredialog_contextmenuevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_EventFilter_Callback(TextTranslator__TranslatorConfigureDialog_EventFilter_Callback cb) { texttranslator__translatorconfiguredialog_eventfilter_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_DevType_Callback(TextTranslator__TranslatorConfigureDialog_DevType_Callback cb) { texttranslator__translatorconfiguredialog_devtype_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_HeightForWidth_Callback(TextTranslator__TranslatorConfigureDialog_HeightForWidth_Callback cb) { texttranslator__translatorconfiguredialog_heightforwidth_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_HasHeightForWidth_Callback(TextTranslator__TranslatorConfigureDialog_HasHeightForWidth_Callback cb) { texttranslator__translatorconfiguredialog_hasheightforwidth_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_PaintEngine_Callback(TextTranslator__TranslatorConfigureDialog_PaintEngine_Callback cb) { texttranslator__translatorconfiguredialog_paintengine_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_Event_Callback(TextTranslator__TranslatorConfigureDialog_Event_Callback cb) { texttranslator__translatorconfiguredialog_event_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_MousePressEvent_Callback(TextTranslator__TranslatorConfigureDialog_MousePressEvent_Callback cb) { texttranslator__translatorconfiguredialog_mousepressevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_MouseReleaseEvent_Callback(TextTranslator__TranslatorConfigureDialog_MouseReleaseEvent_Callback cb) { texttranslator__translatorconfiguredialog_mousereleaseevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_MouseDoubleClickEvent_Callback(TextTranslator__TranslatorConfigureDialog_MouseDoubleClickEvent_Callback cb) { texttranslator__translatorconfiguredialog_mousedoubleclickevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_MouseMoveEvent_Callback(TextTranslator__TranslatorConfigureDialog_MouseMoveEvent_Callback cb) { texttranslator__translatorconfiguredialog_mousemoveevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_WheelEvent_Callback(TextTranslator__TranslatorConfigureDialog_WheelEvent_Callback cb) { texttranslator__translatorconfiguredialog_wheelevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_KeyReleaseEvent_Callback(TextTranslator__TranslatorConfigureDialog_KeyReleaseEvent_Callback cb) { texttranslator__translatorconfiguredialog_keyreleaseevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_FocusInEvent_Callback(TextTranslator__TranslatorConfigureDialog_FocusInEvent_Callback cb) { texttranslator__translatorconfiguredialog_focusinevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_FocusOutEvent_Callback(TextTranslator__TranslatorConfigureDialog_FocusOutEvent_Callback cb) { texttranslator__translatorconfiguredialog_focusoutevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_EnterEvent_Callback(TextTranslator__TranslatorConfigureDialog_EnterEvent_Callback cb) { texttranslator__translatorconfiguredialog_enterevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_LeaveEvent_Callback(TextTranslator__TranslatorConfigureDialog_LeaveEvent_Callback cb) { texttranslator__translatorconfiguredialog_leaveevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_PaintEvent_Callback(TextTranslator__TranslatorConfigureDialog_PaintEvent_Callback cb) { texttranslator__translatorconfiguredialog_paintevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_MoveEvent_Callback(TextTranslator__TranslatorConfigureDialog_MoveEvent_Callback cb) { texttranslator__translatorconfiguredialog_moveevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_TabletEvent_Callback(TextTranslator__TranslatorConfigureDialog_TabletEvent_Callback cb) { texttranslator__translatorconfiguredialog_tabletevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_ActionEvent_Callback(TextTranslator__TranslatorConfigureDialog_ActionEvent_Callback cb) { texttranslator__translatorconfiguredialog_actionevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_DragEnterEvent_Callback(TextTranslator__TranslatorConfigureDialog_DragEnterEvent_Callback cb) { texttranslator__translatorconfiguredialog_dragenterevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_DragMoveEvent_Callback(TextTranslator__TranslatorConfigureDialog_DragMoveEvent_Callback cb) { texttranslator__translatorconfiguredialog_dragmoveevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_DragLeaveEvent_Callback(TextTranslator__TranslatorConfigureDialog_DragLeaveEvent_Callback cb) { texttranslator__translatorconfiguredialog_dragleaveevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_DropEvent_Callback(TextTranslator__TranslatorConfigureDialog_DropEvent_Callback cb) { texttranslator__translatorconfiguredialog_dropevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_HideEvent_Callback(TextTranslator__TranslatorConfigureDialog_HideEvent_Callback cb) { texttranslator__translatorconfiguredialog_hideevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_NativeEvent_Callback(TextTranslator__TranslatorConfigureDialog_NativeEvent_Callback cb) { texttranslator__translatorconfiguredialog_nativeevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_ChangeEvent_Callback(TextTranslator__TranslatorConfigureDialog_ChangeEvent_Callback cb) { texttranslator__translatorconfiguredialog_changeevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_Metric_Callback(TextTranslator__TranslatorConfigureDialog_Metric_Callback cb) { texttranslator__translatorconfiguredialog_metric_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_InitPainter_Callback(TextTranslator__TranslatorConfigureDialog_InitPainter_Callback cb) { texttranslator__translatorconfiguredialog_initpainter_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_Redirected_Callback(TextTranslator__TranslatorConfigureDialog_Redirected_Callback cb) { texttranslator__translatorconfiguredialog_redirected_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_SharedPainter_Callback(TextTranslator__TranslatorConfigureDialog_SharedPainter_Callback cb) { texttranslator__translatorconfiguredialog_sharedpainter_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_InputMethodEvent_Callback(TextTranslator__TranslatorConfigureDialog_InputMethodEvent_Callback cb) { texttranslator__translatorconfiguredialog_inputmethodevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_InputMethodQuery_Callback(TextTranslator__TranslatorConfigureDialog_InputMethodQuery_Callback cb) { texttranslator__translatorconfiguredialog_inputmethodquery_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_FocusNextPrevChild_Callback(TextTranslator__TranslatorConfigureDialog_FocusNextPrevChild_Callback cb) { texttranslator__translatorconfiguredialog_focusnextprevchild_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_TimerEvent_Callback(TextTranslator__TranslatorConfigureDialog_TimerEvent_Callback cb) { texttranslator__translatorconfiguredialog_timerevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_ChildEvent_Callback(TextTranslator__TranslatorConfigureDialog_ChildEvent_Callback cb) { texttranslator__translatorconfiguredialog_childevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_CustomEvent_Callback(TextTranslator__TranslatorConfigureDialog_CustomEvent_Callback cb) { texttranslator__translatorconfiguredialog_customevent_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_ConnectNotify_Callback(TextTranslator__TranslatorConfigureDialog_ConnectNotify_Callback cb) { texttranslator__translatorconfiguredialog_connectnotify_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_DisconnectNotify_Callback(TextTranslator__TranslatorConfigureDialog_DisconnectNotify_Callback cb) { texttranslator__translatorconfiguredialog_disconnectnotify_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_AdjustPosition_Callback(TextTranslator__TranslatorConfigureDialog_AdjustPosition_Callback cb) { texttranslator__translatorconfiguredialog_adjustposition_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_UpdateMicroFocus_Callback(TextTranslator__TranslatorConfigureDialog_UpdateMicroFocus_Callback cb) { texttranslator__translatorconfiguredialog_updatemicrofocus_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_Create_Callback(TextTranslator__TranslatorConfigureDialog_Create_Callback cb) { texttranslator__translatorconfiguredialog_create_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_Destroy_Callback(TextTranslator__TranslatorConfigureDialog_Destroy_Callback cb) { texttranslator__translatorconfiguredialog_destroy_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_FocusNextChild_Callback(TextTranslator__TranslatorConfigureDialog_FocusNextChild_Callback cb) { texttranslator__translatorconfiguredialog_focusnextchild_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_FocusPreviousChild_Callback(TextTranslator__TranslatorConfigureDialog_FocusPreviousChild_Callback cb) { texttranslator__translatorconfiguredialog_focuspreviouschild_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_Sender_Callback(TextTranslator__TranslatorConfigureDialog_Sender_Callback cb) { texttranslator__translatorconfiguredialog_sender_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_SenderSignalIndex_Callback(TextTranslator__TranslatorConfigureDialog_SenderSignalIndex_Callback cb) { texttranslator__translatorconfiguredialog_sendersignalindex_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_Receivers_Callback(TextTranslator__TranslatorConfigureDialog_Receivers_Callback cb) { texttranslator__translatorconfiguredialog_receivers_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_IsSignalConnected_Callback(TextTranslator__TranslatorConfigureDialog_IsSignalConnected_Callback cb) { texttranslator__translatorconfiguredialog_issignalconnected_callback = cb; }
    inline void setTextTranslator__TranslatorConfigureDialog_GetDecodedMetricF_Callback(TextTranslator__TranslatorConfigureDialog_GetDecodedMetricF_Callback cb) { texttranslator__translatorconfiguredialog_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextTranslator__TranslatorConfigureDialog_MetaObject_IsBase(bool value) const { texttranslator__translatorconfiguredialog_metaobject_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_Metacast_IsBase(bool value) const { texttranslator__translatorconfiguredialog_metacast_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_Metacall_IsBase(bool value) const { texttranslator__translatorconfiguredialog_metacall_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_SetVisible_IsBase(bool value) const { texttranslator__translatorconfiguredialog_setvisible_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_SizeHint_IsBase(bool value) const { texttranslator__translatorconfiguredialog_sizehint_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_MinimumSizeHint_IsBase(bool value) const { texttranslator__translatorconfiguredialog_minimumsizehint_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_Open_IsBase(bool value) const { texttranslator__translatorconfiguredialog_open_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_Exec_IsBase(bool value) const { texttranslator__translatorconfiguredialog_exec_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_Done_IsBase(bool value) const { texttranslator__translatorconfiguredialog_done_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_Accept_IsBase(bool value) const { texttranslator__translatorconfiguredialog_accept_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_Reject_IsBase(bool value) const { texttranslator__translatorconfiguredialog_reject_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_KeyPressEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_keypressevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_CloseEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_closeevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_ShowEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_showevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_ResizeEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_resizeevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_ContextMenuEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_contextmenuevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_EventFilter_IsBase(bool value) const { texttranslator__translatorconfiguredialog_eventfilter_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_DevType_IsBase(bool value) const { texttranslator__translatorconfiguredialog_devtype_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_HeightForWidth_IsBase(bool value) const { texttranslator__translatorconfiguredialog_heightforwidth_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_HasHeightForWidth_IsBase(bool value) const { texttranslator__translatorconfiguredialog_hasheightforwidth_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_PaintEngine_IsBase(bool value) const { texttranslator__translatorconfiguredialog_paintengine_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_Event_IsBase(bool value) const { texttranslator__translatorconfiguredialog_event_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_MousePressEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_mousepressevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_MouseReleaseEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_mousereleaseevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_MouseDoubleClickEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_mousedoubleclickevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_MouseMoveEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_mousemoveevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_WheelEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_wheelevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_KeyReleaseEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_keyreleaseevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_FocusInEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_focusinevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_FocusOutEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_focusoutevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_EnterEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_enterevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_LeaveEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_leaveevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_PaintEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_paintevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_MoveEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_moveevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_TabletEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_tabletevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_ActionEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_actionevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_DragEnterEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_dragenterevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_DragMoveEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_dragmoveevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_DragLeaveEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_dragleaveevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_DropEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_dropevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_HideEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_hideevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_NativeEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_nativeevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_ChangeEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_changeevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_Metric_IsBase(bool value) const { texttranslator__translatorconfiguredialog_metric_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_InitPainter_IsBase(bool value) const { texttranslator__translatorconfiguredialog_initpainter_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_Redirected_IsBase(bool value) const { texttranslator__translatorconfiguredialog_redirected_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_SharedPainter_IsBase(bool value) const { texttranslator__translatorconfiguredialog_sharedpainter_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_InputMethodEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_inputmethodevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_InputMethodQuery_IsBase(bool value) const { texttranslator__translatorconfiguredialog_inputmethodquery_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_FocusNextPrevChild_IsBase(bool value) const { texttranslator__translatorconfiguredialog_focusnextprevchild_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_TimerEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_timerevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_ChildEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_childevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_CustomEvent_IsBase(bool value) const { texttranslator__translatorconfiguredialog_customevent_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_ConnectNotify_IsBase(bool value) const { texttranslator__translatorconfiguredialog_connectnotify_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_DisconnectNotify_IsBase(bool value) const { texttranslator__translatorconfiguredialog_disconnectnotify_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_AdjustPosition_IsBase(bool value) const { texttranslator__translatorconfiguredialog_adjustposition_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_UpdateMicroFocus_IsBase(bool value) const { texttranslator__translatorconfiguredialog_updatemicrofocus_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_Create_IsBase(bool value) const { texttranslator__translatorconfiguredialog_create_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_Destroy_IsBase(bool value) const { texttranslator__translatorconfiguredialog_destroy_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_FocusNextChild_IsBase(bool value) const { texttranslator__translatorconfiguredialog_focusnextchild_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_FocusPreviousChild_IsBase(bool value) const { texttranslator__translatorconfiguredialog_focuspreviouschild_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_Sender_IsBase(bool value) const { texttranslator__translatorconfiguredialog_sender_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_SenderSignalIndex_IsBase(bool value) const { texttranslator__translatorconfiguredialog_sendersignalindex_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_Receivers_IsBase(bool value) const { texttranslator__translatorconfiguredialog_receivers_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_IsSignalConnected_IsBase(bool value) const { texttranslator__translatorconfiguredialog_issignalconnected_isbase = value; }
    inline void setTextTranslator__TranslatorConfigureDialog_GetDecodedMetricF_IsBase(bool value) const { texttranslator__translatorconfiguredialog_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (texttranslator__translatorconfiguredialog_metaobject_isbase) {
            texttranslator__translatorconfiguredialog_metaobject_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::metaObject();
        }
        auto metaobject_cb = texttranslator__translatorconfiguredialog_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (texttranslator__translatorconfiguredialog_metacast_isbase) {
            texttranslator__translatorconfiguredialog_metacast_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::qt_metacast(param1);
        }
        auto metacast_cb = texttranslator__translatorconfiguredialog_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (texttranslator__translatorconfiguredialog_metacall_isbase) {
            texttranslator__translatorconfiguredialog_metacall_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = texttranslator__translatorconfiguredialog_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorConfigureDialog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (texttranslator__translatorconfiguredialog_setvisible_isbase) {
            texttranslator__translatorconfiguredialog_setvisible_isbase = false;
            TextTranslator__TranslatorConfigureDialog::setVisible(visible);
            return;
        }
        auto setvisible_cb = texttranslator__translatorconfiguredialog_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (texttranslator__translatorconfiguredialog_sizehint_isbase) {
            texttranslator__translatorconfiguredialog_sizehint_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::sizeHint();
        }
        auto sizehint_cb = texttranslator__translatorconfiguredialog_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (texttranslator__translatorconfiguredialog_minimumsizehint_isbase) {
            texttranslator__translatorconfiguredialog_minimumsizehint_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::minimumSizeHint();
        }
        auto minimumsizehint_cb = texttranslator__translatorconfiguredialog_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (texttranslator__translatorconfiguredialog_open_isbase) {
            texttranslator__translatorconfiguredialog_open_isbase = false;
            TextTranslator__TranslatorConfigureDialog::open();
            return;
        }
        auto open_cb = texttranslator__translatorconfiguredialog_open_callback;
        if (open_cb) {
            open_cb();
            return;
        }
        TextTranslator__TranslatorConfigureDialog::open();
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (texttranslator__translatorconfiguredialog_exec_isbase) {
            texttranslator__translatorconfiguredialog_exec_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::exec();
        }
        auto exec_cb = texttranslator__translatorconfiguredialog_exec_callback;
        if (exec_cb) {
            int callback_ret = exec_cb();
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorConfigureDialog::exec();
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (texttranslator__translatorconfiguredialog_done_isbase) {
            texttranslator__translatorconfiguredialog_done_isbase = false;
            TextTranslator__TranslatorConfigureDialog::done(param1);
            return;
        }
        auto done_cb = texttranslator__translatorconfiguredialog_done_callback;
        if (done_cb) {
            int cbval1 = param1;

            done_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::done(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (texttranslator__translatorconfiguredialog_accept_isbase) {
            texttranslator__translatorconfiguredialog_accept_isbase = false;
            TextTranslator__TranslatorConfigureDialog::accept();
            return;
        }
        auto accept_cb = texttranslator__translatorconfiguredialog_accept_callback;
        if (accept_cb) {
            accept_cb();
            return;
        }
        TextTranslator__TranslatorConfigureDialog::accept();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (texttranslator__translatorconfiguredialog_reject_isbase) {
            texttranslator__translatorconfiguredialog_reject_isbase = false;
            TextTranslator__TranslatorConfigureDialog::reject();
            return;
        }
        auto reject_cb = texttranslator__translatorconfiguredialog_reject_callback;
        if (reject_cb) {
            reject_cb();
            return;
        }
        TextTranslator__TranslatorConfigureDialog::reject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (texttranslator__translatorconfiguredialog_keypressevent_isbase) {
            texttranslator__translatorconfiguredialog_keypressevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::keyPressEvent(param1);
            return;
        }
        auto keypressevent_cb = texttranslator__translatorconfiguredialog_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = param1;

            keypressevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (texttranslator__translatorconfiguredialog_closeevent_isbase) {
            texttranslator__translatorconfiguredialog_closeevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::closeEvent(param1);
            return;
        }
        auto closeevent_cb = texttranslator__translatorconfiguredialog_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = param1;

            closeevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::closeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (texttranslator__translatorconfiguredialog_showevent_isbase) {
            texttranslator__translatorconfiguredialog_showevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::showEvent(param1);
            return;
        }
        auto showevent_cb = texttranslator__translatorconfiguredialog_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = param1;

            showevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (texttranslator__translatorconfiguredialog_resizeevent_isbase) {
            texttranslator__translatorconfiguredialog_resizeevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::resizeEvent(param1);
            return;
        }
        auto resizeevent_cb = texttranslator__translatorconfiguredialog_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = param1;

            resizeevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (texttranslator__translatorconfiguredialog_contextmenuevent_isbase) {
            texttranslator__translatorconfiguredialog_contextmenuevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::contextMenuEvent(param1);
            return;
        }
        auto contextmenuevent_cb = texttranslator__translatorconfiguredialog_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = param1;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (texttranslator__translatorconfiguredialog_eventfilter_isbase) {
            texttranslator__translatorconfiguredialog_eventfilter_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::eventFilter(param1, param2);
        }
        auto eventfilter_cb = texttranslator__translatorconfiguredialog_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (texttranslator__translatorconfiguredialog_devtype_isbase) {
            texttranslator__translatorconfiguredialog_devtype_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::devType();
        }
        auto devtype_cb = texttranslator__translatorconfiguredialog_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorConfigureDialog::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (texttranslator__translatorconfiguredialog_heightforwidth_isbase) {
            texttranslator__translatorconfiguredialog_heightforwidth_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::heightForWidth(param1);
        }
        auto heightforwidth_cb = texttranslator__translatorconfiguredialog_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorConfigureDialog::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (texttranslator__translatorconfiguredialog_hasheightforwidth_isbase) {
            texttranslator__translatorconfiguredialog_hasheightforwidth_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = texttranslator__translatorconfiguredialog_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (texttranslator__translatorconfiguredialog_paintengine_isbase) {
            texttranslator__translatorconfiguredialog_paintengine_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::paintEngine();
        }
        auto paintengine_cb = texttranslator__translatorconfiguredialog_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (texttranslator__translatorconfiguredialog_event_isbase) {
            texttranslator__translatorconfiguredialog_event_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::event(event);
        }
        auto event_cb = texttranslator__translatorconfiguredialog_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (texttranslator__translatorconfiguredialog_mousepressevent_isbase) {
            texttranslator__translatorconfiguredialog_mousepressevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = texttranslator__translatorconfiguredialog_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (texttranslator__translatorconfiguredialog_mousereleaseevent_isbase) {
            texttranslator__translatorconfiguredialog_mousereleaseevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = texttranslator__translatorconfiguredialog_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (texttranslator__translatorconfiguredialog_mousedoubleclickevent_isbase) {
            texttranslator__translatorconfiguredialog_mousedoubleclickevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = texttranslator__translatorconfiguredialog_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (texttranslator__translatorconfiguredialog_mousemoveevent_isbase) {
            texttranslator__translatorconfiguredialog_mousemoveevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = texttranslator__translatorconfiguredialog_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (texttranslator__translatorconfiguredialog_wheelevent_isbase) {
            texttranslator__translatorconfiguredialog_wheelevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = texttranslator__translatorconfiguredialog_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (texttranslator__translatorconfiguredialog_keyreleaseevent_isbase) {
            texttranslator__translatorconfiguredialog_keyreleaseevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = texttranslator__translatorconfiguredialog_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (texttranslator__translatorconfiguredialog_focusinevent_isbase) {
            texttranslator__translatorconfiguredialog_focusinevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = texttranslator__translatorconfiguredialog_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (texttranslator__translatorconfiguredialog_focusoutevent_isbase) {
            texttranslator__translatorconfiguredialog_focusoutevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = texttranslator__translatorconfiguredialog_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (texttranslator__translatorconfiguredialog_enterevent_isbase) {
            texttranslator__translatorconfiguredialog_enterevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::enterEvent(event);
            return;
        }
        auto enterevent_cb = texttranslator__translatorconfiguredialog_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (texttranslator__translatorconfiguredialog_leaveevent_isbase) {
            texttranslator__translatorconfiguredialog_leaveevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = texttranslator__translatorconfiguredialog_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (texttranslator__translatorconfiguredialog_paintevent_isbase) {
            texttranslator__translatorconfiguredialog_paintevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::paintEvent(event);
            return;
        }
        auto paintevent_cb = texttranslator__translatorconfiguredialog_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (texttranslator__translatorconfiguredialog_moveevent_isbase) {
            texttranslator__translatorconfiguredialog_moveevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::moveEvent(event);
            return;
        }
        auto moveevent_cb = texttranslator__translatorconfiguredialog_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (texttranslator__translatorconfiguredialog_tabletevent_isbase) {
            texttranslator__translatorconfiguredialog_tabletevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = texttranslator__translatorconfiguredialog_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (texttranslator__translatorconfiguredialog_actionevent_isbase) {
            texttranslator__translatorconfiguredialog_actionevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::actionEvent(event);
            return;
        }
        auto actionevent_cb = texttranslator__translatorconfiguredialog_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (texttranslator__translatorconfiguredialog_dragenterevent_isbase) {
            texttranslator__translatorconfiguredialog_dragenterevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = texttranslator__translatorconfiguredialog_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (texttranslator__translatorconfiguredialog_dragmoveevent_isbase) {
            texttranslator__translatorconfiguredialog_dragmoveevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = texttranslator__translatorconfiguredialog_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (texttranslator__translatorconfiguredialog_dragleaveevent_isbase) {
            texttranslator__translatorconfiguredialog_dragleaveevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = texttranslator__translatorconfiguredialog_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (texttranslator__translatorconfiguredialog_dropevent_isbase) {
            texttranslator__translatorconfiguredialog_dropevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::dropEvent(event);
            return;
        }
        auto dropevent_cb = texttranslator__translatorconfiguredialog_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (texttranslator__translatorconfiguredialog_hideevent_isbase) {
            texttranslator__translatorconfiguredialog_hideevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::hideEvent(event);
            return;
        }
        auto hideevent_cb = texttranslator__translatorconfiguredialog_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (texttranslator__translatorconfiguredialog_nativeevent_isbase) {
            texttranslator__translatorconfiguredialog_nativeevent_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = texttranslator__translatorconfiguredialog_nativeevent_callback;
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
        return TextTranslator__TranslatorConfigureDialog::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (texttranslator__translatorconfiguredialog_changeevent_isbase) {
            texttranslator__translatorconfiguredialog_changeevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::changeEvent(param1);
            return;
        }
        auto changeevent_cb = texttranslator__translatorconfiguredialog_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (texttranslator__translatorconfiguredialog_metric_isbase) {
            texttranslator__translatorconfiguredialog_metric_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::metric(param1);
        }
        auto metric_cb = texttranslator__translatorconfiguredialog_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorConfigureDialog::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (texttranslator__translatorconfiguredialog_initpainter_isbase) {
            texttranslator__translatorconfiguredialog_initpainter_isbase = false;
            TextTranslator__TranslatorConfigureDialog::initPainter(painter);
            return;
        }
        auto initpainter_cb = texttranslator__translatorconfiguredialog_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (texttranslator__translatorconfiguredialog_redirected_isbase) {
            texttranslator__translatorconfiguredialog_redirected_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::redirected(offset);
        }
        auto redirected_cb = texttranslator__translatorconfiguredialog_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (texttranslator__translatorconfiguredialog_sharedpainter_isbase) {
            texttranslator__translatorconfiguredialog_sharedpainter_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::sharedPainter();
        }
        auto sharedpainter_cb = texttranslator__translatorconfiguredialog_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (texttranslator__translatorconfiguredialog_inputmethodevent_isbase) {
            texttranslator__translatorconfiguredialog_inputmethodevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = texttranslator__translatorconfiguredialog_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (texttranslator__translatorconfiguredialog_inputmethodquery_isbase) {
            texttranslator__translatorconfiguredialog_inputmethodquery_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = texttranslator__translatorconfiguredialog_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (texttranslator__translatorconfiguredialog_focusnextprevchild_isbase) {
            texttranslator__translatorconfiguredialog_focusnextprevchild_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = texttranslator__translatorconfiguredialog_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (texttranslator__translatorconfiguredialog_timerevent_isbase) {
            texttranslator__translatorconfiguredialog_timerevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::timerEvent(event);
            return;
        }
        auto timerevent_cb = texttranslator__translatorconfiguredialog_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (texttranslator__translatorconfiguredialog_childevent_isbase) {
            texttranslator__translatorconfiguredialog_childevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::childEvent(event);
            return;
        }
        auto childevent_cb = texttranslator__translatorconfiguredialog_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (texttranslator__translatorconfiguredialog_customevent_isbase) {
            texttranslator__translatorconfiguredialog_customevent_isbase = false;
            TextTranslator__TranslatorConfigureDialog::customEvent(event);
            return;
        }
        auto customevent_cb = texttranslator__translatorconfiguredialog_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorconfiguredialog_connectnotify_isbase) {
            texttranslator__translatorconfiguredialog_connectnotify_isbase = false;
            TextTranslator__TranslatorConfigureDialog::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = texttranslator__translatorconfiguredialog_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorconfiguredialog_disconnectnotify_isbase) {
            texttranslator__translatorconfiguredialog_disconnectnotify_isbase = false;
            TextTranslator__TranslatorConfigureDialog::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = texttranslator__translatorconfiguredialog_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (texttranslator__translatorconfiguredialog_adjustposition_isbase) {
            texttranslator__translatorconfiguredialog_adjustposition_isbase = false;
            TextTranslator__TranslatorConfigureDialog::adjustPosition(param1);
            return;
        }
        auto adjustposition_cb = texttranslator__translatorconfiguredialog_adjustposition_callback;
        if (adjustposition_cb) {
            QWidget* cbval1 = param1;

            adjustposition_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureDialog::adjustPosition(param1);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (texttranslator__translatorconfiguredialog_updatemicrofocus_isbase) {
            texttranslator__translatorconfiguredialog_updatemicrofocus_isbase = false;
            TextTranslator__TranslatorConfigureDialog::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = texttranslator__translatorconfiguredialog_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextTranslator__TranslatorConfigureDialog::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (texttranslator__translatorconfiguredialog_create_isbase) {
            texttranslator__translatorconfiguredialog_create_isbase = false;
            TextTranslator__TranslatorConfigureDialog::create();
            return;
        }
        auto create_cb = texttranslator__translatorconfiguredialog_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextTranslator__TranslatorConfigureDialog::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (texttranslator__translatorconfiguredialog_destroy_isbase) {
            texttranslator__translatorconfiguredialog_destroy_isbase = false;
            TextTranslator__TranslatorConfigureDialog::destroy();
            return;
        }
        auto destroy_cb = texttranslator__translatorconfiguredialog_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextTranslator__TranslatorConfigureDialog::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (texttranslator__translatorconfiguredialog_focusnextchild_isbase) {
            texttranslator__translatorconfiguredialog_focusnextchild_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::focusNextChild();
        }
        auto focusnextchild_cb = texttranslator__translatorconfiguredialog_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (texttranslator__translatorconfiguredialog_focuspreviouschild_isbase) {
            texttranslator__translatorconfiguredialog_focuspreviouschild_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::focusPreviousChild();
        }
        auto focuspreviouschild_cb = texttranslator__translatorconfiguredialog_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (texttranslator__translatorconfiguredialog_sender_isbase) {
            texttranslator__translatorconfiguredialog_sender_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::sender();
        }
        auto sender_cb = texttranslator__translatorconfiguredialog_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (texttranslator__translatorconfiguredialog_sendersignalindex_isbase) {
            texttranslator__translatorconfiguredialog_sendersignalindex_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::senderSignalIndex();
        }
        auto sendersignalindex_cb = texttranslator__translatorconfiguredialog_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorConfigureDialog::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (texttranslator__translatorconfiguredialog_receivers_isbase) {
            texttranslator__translatorconfiguredialog_receivers_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::receivers(signal);
        }
        auto receivers_cb = texttranslator__translatorconfiguredialog_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorConfigureDialog::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (texttranslator__translatorconfiguredialog_issignalconnected_isbase) {
            texttranslator__translatorconfiguredialog_issignalconnected_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::isSignalConnected(signal);
        }
        auto issignalconnected_cb = texttranslator__translatorconfiguredialog_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureDialog::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (texttranslator__translatorconfiguredialog_getdecodedmetricf_isbase) {
            texttranslator__translatorconfiguredialog_getdecodedmetricf_isbase = false;
            return TextTranslator__TranslatorConfigureDialog::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = texttranslator__translatorconfiguredialog_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextTranslator__TranslatorConfigureDialog::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void TextTranslator__TranslatorConfigureDialog_KeyPressEvent(TextTranslator::TranslatorConfigureDialog* self, QKeyEvent* param1);
    friend void TextTranslator__TranslatorConfigureDialog_SuperKeyPressEvent(TextTranslator::TranslatorConfigureDialog* self, QKeyEvent* param1);
    friend void TextTranslator__TranslatorConfigureDialog_CloseEvent(TextTranslator::TranslatorConfigureDialog* self, QCloseEvent* param1);
    friend void TextTranslator__TranslatorConfigureDialog_SuperCloseEvent(TextTranslator::TranslatorConfigureDialog* self, QCloseEvent* param1);
    friend void TextTranslator__TranslatorConfigureDialog_ShowEvent(TextTranslator::TranslatorConfigureDialog* self, QShowEvent* param1);
    friend void TextTranslator__TranslatorConfigureDialog_SuperShowEvent(TextTranslator::TranslatorConfigureDialog* self, QShowEvent* param1);
    friend void TextTranslator__TranslatorConfigureDialog_ResizeEvent(TextTranslator::TranslatorConfigureDialog* self, QResizeEvent* param1);
    friend void TextTranslator__TranslatorConfigureDialog_SuperResizeEvent(TextTranslator::TranslatorConfigureDialog* self, QResizeEvent* param1);
    friend void TextTranslator__TranslatorConfigureDialog_ContextMenuEvent(TextTranslator::TranslatorConfigureDialog* self, QContextMenuEvent* param1);
    friend void TextTranslator__TranslatorConfigureDialog_SuperContextMenuEvent(TextTranslator::TranslatorConfigureDialog* self, QContextMenuEvent* param1);
    friend bool TextTranslator__TranslatorConfigureDialog_EventFilter(TextTranslator::TranslatorConfigureDialog* self, QObject* param1, QEvent* param2);
    friend bool TextTranslator__TranslatorConfigureDialog_SuperEventFilter(TextTranslator::TranslatorConfigureDialog* self, QObject* param1, QEvent* param2);
    friend bool TextTranslator__TranslatorConfigureDialog_Event(TextTranslator::TranslatorConfigureDialog* self, QEvent* event);
    friend bool TextTranslator__TranslatorConfigureDialog_SuperEvent(TextTranslator::TranslatorConfigureDialog* self, QEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_MousePressEvent(TextTranslator::TranslatorConfigureDialog* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperMousePressEvent(TextTranslator::TranslatorConfigureDialog* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_MouseReleaseEvent(TextTranslator::TranslatorConfigureDialog* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperMouseReleaseEvent(TextTranslator::TranslatorConfigureDialog* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_MouseDoubleClickEvent(TextTranslator::TranslatorConfigureDialog* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperMouseDoubleClickEvent(TextTranslator::TranslatorConfigureDialog* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_MouseMoveEvent(TextTranslator::TranslatorConfigureDialog* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperMouseMoveEvent(TextTranslator::TranslatorConfigureDialog* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_WheelEvent(TextTranslator::TranslatorConfigureDialog* self, QWheelEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperWheelEvent(TextTranslator::TranslatorConfigureDialog* self, QWheelEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_KeyReleaseEvent(TextTranslator::TranslatorConfigureDialog* self, QKeyEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperKeyReleaseEvent(TextTranslator::TranslatorConfigureDialog* self, QKeyEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_FocusInEvent(TextTranslator::TranslatorConfigureDialog* self, QFocusEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperFocusInEvent(TextTranslator::TranslatorConfigureDialog* self, QFocusEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_FocusOutEvent(TextTranslator::TranslatorConfigureDialog* self, QFocusEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperFocusOutEvent(TextTranslator::TranslatorConfigureDialog* self, QFocusEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_EnterEvent(TextTranslator::TranslatorConfigureDialog* self, QEnterEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperEnterEvent(TextTranslator::TranslatorConfigureDialog* self, QEnterEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_LeaveEvent(TextTranslator::TranslatorConfigureDialog* self, QEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperLeaveEvent(TextTranslator::TranslatorConfigureDialog* self, QEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_PaintEvent(TextTranslator::TranslatorConfigureDialog* self, QPaintEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperPaintEvent(TextTranslator::TranslatorConfigureDialog* self, QPaintEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_MoveEvent(TextTranslator::TranslatorConfigureDialog* self, QMoveEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperMoveEvent(TextTranslator::TranslatorConfigureDialog* self, QMoveEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_TabletEvent(TextTranslator::TranslatorConfigureDialog* self, QTabletEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperTabletEvent(TextTranslator::TranslatorConfigureDialog* self, QTabletEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_ActionEvent(TextTranslator::TranslatorConfigureDialog* self, QActionEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperActionEvent(TextTranslator::TranslatorConfigureDialog* self, QActionEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_DragEnterEvent(TextTranslator::TranslatorConfigureDialog* self, QDragEnterEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperDragEnterEvent(TextTranslator::TranslatorConfigureDialog* self, QDragEnterEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_DragMoveEvent(TextTranslator::TranslatorConfigureDialog* self, QDragMoveEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperDragMoveEvent(TextTranslator::TranslatorConfigureDialog* self, QDragMoveEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_DragLeaveEvent(TextTranslator::TranslatorConfigureDialog* self, QDragLeaveEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperDragLeaveEvent(TextTranslator::TranslatorConfigureDialog* self, QDragLeaveEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_DropEvent(TextTranslator::TranslatorConfigureDialog* self, QDropEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperDropEvent(TextTranslator::TranslatorConfigureDialog* self, QDropEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_HideEvent(TextTranslator::TranslatorConfigureDialog* self, QHideEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperHideEvent(TextTranslator::TranslatorConfigureDialog* self, QHideEvent* event);
    friend bool TextTranslator__TranslatorConfigureDialog_NativeEvent(TextTranslator::TranslatorConfigureDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextTranslator__TranslatorConfigureDialog_SuperNativeEvent(TextTranslator::TranslatorConfigureDialog* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextTranslator__TranslatorConfigureDialog_ChangeEvent(TextTranslator::TranslatorConfigureDialog* self, QEvent* param1);
    friend void TextTranslator__TranslatorConfigureDialog_SuperChangeEvent(TextTranslator::TranslatorConfigureDialog* self, QEvent* param1);
    friend int TextTranslator__TranslatorConfigureDialog_Metric(const TextTranslator::TranslatorConfigureDialog* self, int param1);
    friend int TextTranslator__TranslatorConfigureDialog_SuperMetric(const TextTranslator::TranslatorConfigureDialog* self, int param1);
    friend void TextTranslator__TranslatorConfigureDialog_InitPainter(const TextTranslator::TranslatorConfigureDialog* self, QPainter* painter);
    friend void TextTranslator__TranslatorConfigureDialog_SuperInitPainter(const TextTranslator::TranslatorConfigureDialog* self, QPainter* painter);
    friend QPaintDevice* TextTranslator__TranslatorConfigureDialog_Redirected(const TextTranslator::TranslatorConfigureDialog* self, QPoint* offset);
    friend QPaintDevice* TextTranslator__TranslatorConfigureDialog_SuperRedirected(const TextTranslator::TranslatorConfigureDialog* self, QPoint* offset);
    friend QPainter* TextTranslator__TranslatorConfigureDialog_SharedPainter(const TextTranslator::TranslatorConfigureDialog* self);
    friend QPainter* TextTranslator__TranslatorConfigureDialog_SuperSharedPainter(const TextTranslator::TranslatorConfigureDialog* self);
    friend void TextTranslator__TranslatorConfigureDialog_InputMethodEvent(TextTranslator::TranslatorConfigureDialog* self, QInputMethodEvent* param1);
    friend void TextTranslator__TranslatorConfigureDialog_SuperInputMethodEvent(TextTranslator::TranslatorConfigureDialog* self, QInputMethodEvent* param1);
    friend bool TextTranslator__TranslatorConfigureDialog_FocusNextPrevChild(TextTranslator::TranslatorConfigureDialog* self, bool next);
    friend bool TextTranslator__TranslatorConfigureDialog_SuperFocusNextPrevChild(TextTranslator::TranslatorConfigureDialog* self, bool next);
    friend void TextTranslator__TranslatorConfigureDialog_TimerEvent(TextTranslator::TranslatorConfigureDialog* self, QTimerEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperTimerEvent(TextTranslator::TranslatorConfigureDialog* self, QTimerEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_ChildEvent(TextTranslator::TranslatorConfigureDialog* self, QChildEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperChildEvent(TextTranslator::TranslatorConfigureDialog* self, QChildEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_CustomEvent(TextTranslator::TranslatorConfigureDialog* self, QEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_SuperCustomEvent(TextTranslator::TranslatorConfigureDialog* self, QEvent* event);
    friend void TextTranslator__TranslatorConfigureDialog_ConnectNotify(TextTranslator::TranslatorConfigureDialog* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorConfigureDialog_SuperConnectNotify(TextTranslator::TranslatorConfigureDialog* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorConfigureDialog_DisconnectNotify(TextTranslator::TranslatorConfigureDialog* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorConfigureDialog_SuperDisconnectNotify(TextTranslator::TranslatorConfigureDialog* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorConfigureDialog_AdjustPosition(TextTranslator::TranslatorConfigureDialog* self, QWidget* param1);
    friend void TextTranslator__TranslatorConfigureDialog_SuperAdjustPosition(TextTranslator::TranslatorConfigureDialog* self, QWidget* param1);
    friend void TextTranslator__TranslatorConfigureDialog_UpdateMicroFocus(TextTranslator::TranslatorConfigureDialog* self);
    friend void TextTranslator__TranslatorConfigureDialog_SuperUpdateMicroFocus(TextTranslator::TranslatorConfigureDialog* self);
    friend void TextTranslator__TranslatorConfigureDialog_Create(TextTranslator::TranslatorConfigureDialog* self);
    friend void TextTranslator__TranslatorConfigureDialog_SuperCreate(TextTranslator::TranslatorConfigureDialog* self);
    friend void TextTranslator__TranslatorConfigureDialog_Destroy(TextTranslator::TranslatorConfigureDialog* self);
    friend void TextTranslator__TranslatorConfigureDialog_SuperDestroy(TextTranslator::TranslatorConfigureDialog* self);
    friend bool TextTranslator__TranslatorConfigureDialog_FocusNextChild(TextTranslator::TranslatorConfigureDialog* self);
    friend bool TextTranslator__TranslatorConfigureDialog_SuperFocusNextChild(TextTranslator::TranslatorConfigureDialog* self);
    friend bool TextTranslator__TranslatorConfigureDialog_FocusPreviousChild(TextTranslator::TranslatorConfigureDialog* self);
    friend bool TextTranslator__TranslatorConfigureDialog_SuperFocusPreviousChild(TextTranslator::TranslatorConfigureDialog* self);
    friend QObject* TextTranslator__TranslatorConfigureDialog_Sender(const TextTranslator::TranslatorConfigureDialog* self);
    friend QObject* TextTranslator__TranslatorConfigureDialog_SuperSender(const TextTranslator::TranslatorConfigureDialog* self);
    friend int TextTranslator__TranslatorConfigureDialog_SenderSignalIndex(const TextTranslator::TranslatorConfigureDialog* self);
    friend int TextTranslator__TranslatorConfigureDialog_SuperSenderSignalIndex(const TextTranslator::TranslatorConfigureDialog* self);
    friend int TextTranslator__TranslatorConfigureDialog_Receivers(const TextTranslator::TranslatorConfigureDialog* self, const char* signal);
    friend int TextTranslator__TranslatorConfigureDialog_SuperReceivers(const TextTranslator::TranslatorConfigureDialog* self, const char* signal);
    friend bool TextTranslator__TranslatorConfigureDialog_IsSignalConnected(const TextTranslator::TranslatorConfigureDialog* self, const QMetaMethod* signal);
    friend bool TextTranslator__TranslatorConfigureDialog_SuperIsSignalConnected(const TextTranslator::TranslatorConfigureDialog* self, const QMetaMethod* signal);
    friend double TextTranslator__TranslatorConfigureDialog_GetDecodedMetricF(const TextTranslator::TranslatorConfigureDialog* self, int metricA, int metricB);
    friend double TextTranslator__TranslatorConfigureDialog_SuperGetDecodedMetricF(const TextTranslator::TranslatorConfigureDialog* self, int metricA, int metricB);
};

#endif
