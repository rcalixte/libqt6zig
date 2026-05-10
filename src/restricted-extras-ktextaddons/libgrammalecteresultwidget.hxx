#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALGRAMMALECTERESULTWIDGET_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALGRAMMALECTERESULTWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::GrammalecteResultWidget so that we can call protected methods
class VirtualTextGrammarCheckGrammalecteResultWidget final : public TextGrammarCheck::GrammalecteResultWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualTextGrammarCheckGrammalecteResultWidget = true;

    // Virtual class public types (including callbacks)
    using TextGrammarCheck__GrammalecteResultWidget_MetaObject_Callback = QMetaObject* (*)();
    using TextGrammarCheck__GrammalecteResultWidget_Metacast_Callback = void* (*)(TextGrammarCheck__GrammalecteResultWidget*, const char*);
    using TextGrammarCheck__GrammalecteResultWidget_Metacall_Callback = int (*)(TextGrammarCheck__GrammalecteResultWidget*, int, int, void**);
    using TextGrammarCheck__GrammalecteResultWidget_CheckGrammar_Callback = void (*)();
    using TextGrammarCheck__GrammalecteResultWidget_AddExtraWidget_Callback = void (*)();
    using TextGrammarCheck__GrammalecteResultWidget_DevType_Callback = int (*)();
    using TextGrammarCheck__GrammalecteResultWidget_SetVisible_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, bool);
    using TextGrammarCheck__GrammalecteResultWidget_SizeHint_Callback = QSize* (*)();
    using TextGrammarCheck__GrammalecteResultWidget_MinimumSizeHint_Callback = QSize* (*)();
    using TextGrammarCheck__GrammalecteResultWidget_HeightForWidth_Callback = int (*)(const TextGrammarCheck__GrammalecteResultWidget*, int);
    using TextGrammarCheck__GrammalecteResultWidget_HasHeightForWidth_Callback = bool (*)();
    using TextGrammarCheck__GrammalecteResultWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using TextGrammarCheck__GrammalecteResultWidget_Event_Callback = bool (*)(TextGrammarCheck__GrammalecteResultWidget*, QEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_MousePressEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_MouseReleaseEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_MouseDoubleClickEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_MouseMoveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_WheelEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QWheelEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_KeyPressEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QKeyEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_KeyReleaseEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QKeyEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_FocusInEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QFocusEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_FocusOutEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QFocusEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_EnterEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QEnterEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_LeaveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_PaintEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QPaintEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_MoveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QMoveEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_ResizeEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QResizeEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_CloseEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QCloseEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_ContextMenuEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QContextMenuEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_TabletEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QTabletEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_ActionEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QActionEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_DragEnterEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QDragEnterEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_DragMoveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QDragMoveEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_DragLeaveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QDragLeaveEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_DropEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QDropEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_ShowEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QShowEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_HideEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QHideEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_NativeEvent_Callback = bool (*)(TextGrammarCheck__GrammalecteResultWidget*, libqt_string, void*, intptr_t*);
    using TextGrammarCheck__GrammalecteResultWidget_ChangeEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_Metric_Callback = int (*)(const TextGrammarCheck__GrammalecteResultWidget*, int);
    using TextGrammarCheck__GrammalecteResultWidget_InitPainter_Callback = void (*)(const TextGrammarCheck__GrammalecteResultWidget*, QPainter*);
    using TextGrammarCheck__GrammalecteResultWidget_Redirected_Callback = QPaintDevice* (*)(const TextGrammarCheck__GrammalecteResultWidget*, QPoint*);
    using TextGrammarCheck__GrammalecteResultWidget_SharedPainter_Callback = QPainter* (*)();
    using TextGrammarCheck__GrammalecteResultWidget_InputMethodEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QInputMethodEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_InputMethodQuery_Callback = QVariant* (*)(const TextGrammarCheck__GrammalecteResultWidget*, int);
    using TextGrammarCheck__GrammalecteResultWidget_FocusNextPrevChild_Callback = bool (*)(TextGrammarCheck__GrammalecteResultWidget*, bool);
    using TextGrammarCheck__GrammalecteResultWidget_EventFilter_Callback = bool (*)(TextGrammarCheck__GrammalecteResultWidget*, QObject*, QEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_TimerEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QTimerEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_ChildEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QChildEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_CustomEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_ConnectNotify_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QMetaMethod*);
    using TextGrammarCheck__GrammalecteResultWidget_DisconnectNotify_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QMetaMethod*);
    using TextGrammarCheck__GrammalecteResultWidget_UpdateMicroFocus_Callback = void (*)();
    using TextGrammarCheck__GrammalecteResultWidget_Create_Callback = void (*)();
    using TextGrammarCheck__GrammalecteResultWidget_Destroy_Callback = void (*)();
    using TextGrammarCheck__GrammalecteResultWidget_FocusNextChild_Callback = bool (*)();
    using TextGrammarCheck__GrammalecteResultWidget_FocusPreviousChild_Callback = bool (*)();
    using TextGrammarCheck__GrammalecteResultWidget_Sender_Callback = QObject* (*)();
    using TextGrammarCheck__GrammalecteResultWidget_SenderSignalIndex_Callback = int (*)();
    using TextGrammarCheck__GrammalecteResultWidget_Receivers_Callback = int (*)(const TextGrammarCheck__GrammalecteResultWidget*, const char*);
    using TextGrammarCheck__GrammalecteResultWidget_IsSignalConnected_Callback = bool (*)(const TextGrammarCheck__GrammalecteResultWidget*, QMetaMethod*);
    using TextGrammarCheck__GrammalecteResultWidget_GetDecodedMetricF_Callback = double (*)(const TextGrammarCheck__GrammalecteResultWidget*, int, int);

  protected:
    // Instance callback storage
    TextGrammarCheck__GrammalecteResultWidget_MetaObject_Callback textgrammarcheck__grammalecteresultwidget_metaobject_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_Metacast_Callback textgrammarcheck__grammalecteresultwidget_metacast_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_Metacall_Callback textgrammarcheck__grammalecteresultwidget_metacall_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_CheckGrammar_Callback textgrammarcheck__grammalecteresultwidget_checkgrammar_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_AddExtraWidget_Callback textgrammarcheck__grammalecteresultwidget_addextrawidget_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_DevType_Callback textgrammarcheck__grammalecteresultwidget_devtype_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_SetVisible_Callback textgrammarcheck__grammalecteresultwidget_setvisible_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_SizeHint_Callback textgrammarcheck__grammalecteresultwidget_sizehint_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_MinimumSizeHint_Callback textgrammarcheck__grammalecteresultwidget_minimumsizehint_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_HeightForWidth_Callback textgrammarcheck__grammalecteresultwidget_heightforwidth_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_HasHeightForWidth_Callback textgrammarcheck__grammalecteresultwidget_hasheightforwidth_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_PaintEngine_Callback textgrammarcheck__grammalecteresultwidget_paintengine_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_Event_Callback textgrammarcheck__grammalecteresultwidget_event_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_MousePressEvent_Callback textgrammarcheck__grammalecteresultwidget_mousepressevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_MouseReleaseEvent_Callback textgrammarcheck__grammalecteresultwidget_mousereleaseevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_MouseDoubleClickEvent_Callback textgrammarcheck__grammalecteresultwidget_mousedoubleclickevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_MouseMoveEvent_Callback textgrammarcheck__grammalecteresultwidget_mousemoveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_WheelEvent_Callback textgrammarcheck__grammalecteresultwidget_wheelevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_KeyPressEvent_Callback textgrammarcheck__grammalecteresultwidget_keypressevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_KeyReleaseEvent_Callback textgrammarcheck__grammalecteresultwidget_keyreleaseevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_FocusInEvent_Callback textgrammarcheck__grammalecteresultwidget_focusinevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_FocusOutEvent_Callback textgrammarcheck__grammalecteresultwidget_focusoutevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_EnterEvent_Callback textgrammarcheck__grammalecteresultwidget_enterevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_LeaveEvent_Callback textgrammarcheck__grammalecteresultwidget_leaveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_PaintEvent_Callback textgrammarcheck__grammalecteresultwidget_paintevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_MoveEvent_Callback textgrammarcheck__grammalecteresultwidget_moveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_ResizeEvent_Callback textgrammarcheck__grammalecteresultwidget_resizeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_CloseEvent_Callback textgrammarcheck__grammalecteresultwidget_closeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_ContextMenuEvent_Callback textgrammarcheck__grammalecteresultwidget_contextmenuevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_TabletEvent_Callback textgrammarcheck__grammalecteresultwidget_tabletevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_ActionEvent_Callback textgrammarcheck__grammalecteresultwidget_actionevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_DragEnterEvent_Callback textgrammarcheck__grammalecteresultwidget_dragenterevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_DragMoveEvent_Callback textgrammarcheck__grammalecteresultwidget_dragmoveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_DragLeaveEvent_Callback textgrammarcheck__grammalecteresultwidget_dragleaveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_DropEvent_Callback textgrammarcheck__grammalecteresultwidget_dropevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_ShowEvent_Callback textgrammarcheck__grammalecteresultwidget_showevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_HideEvent_Callback textgrammarcheck__grammalecteresultwidget_hideevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_NativeEvent_Callback textgrammarcheck__grammalecteresultwidget_nativeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_ChangeEvent_Callback textgrammarcheck__grammalecteresultwidget_changeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_Metric_Callback textgrammarcheck__grammalecteresultwidget_metric_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_InitPainter_Callback textgrammarcheck__grammalecteresultwidget_initpainter_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_Redirected_Callback textgrammarcheck__grammalecteresultwidget_redirected_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_SharedPainter_Callback textgrammarcheck__grammalecteresultwidget_sharedpainter_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_InputMethodEvent_Callback textgrammarcheck__grammalecteresultwidget_inputmethodevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_InputMethodQuery_Callback textgrammarcheck__grammalecteresultwidget_inputmethodquery_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_FocusNextPrevChild_Callback textgrammarcheck__grammalecteresultwidget_focusnextprevchild_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_EventFilter_Callback textgrammarcheck__grammalecteresultwidget_eventfilter_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_TimerEvent_Callback textgrammarcheck__grammalecteresultwidget_timerevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_ChildEvent_Callback textgrammarcheck__grammalecteresultwidget_childevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_CustomEvent_Callback textgrammarcheck__grammalecteresultwidget_customevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_ConnectNotify_Callback textgrammarcheck__grammalecteresultwidget_connectnotify_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_DisconnectNotify_Callback textgrammarcheck__grammalecteresultwidget_disconnectnotify_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_UpdateMicroFocus_Callback textgrammarcheck__grammalecteresultwidget_updatemicrofocus_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_Create_Callback textgrammarcheck__grammalecteresultwidget_create_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_Destroy_Callback textgrammarcheck__grammalecteresultwidget_destroy_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_FocusNextChild_Callback textgrammarcheck__grammalecteresultwidget_focusnextchild_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_FocusPreviousChild_Callback textgrammarcheck__grammalecteresultwidget_focuspreviouschild_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_Sender_Callback textgrammarcheck__grammalecteresultwidget_sender_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_SenderSignalIndex_Callback textgrammarcheck__grammalecteresultwidget_sendersignalindex_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_Receivers_Callback textgrammarcheck__grammalecteresultwidget_receivers_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_IsSignalConnected_Callback textgrammarcheck__grammalecteresultwidget_issignalconnected_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_GetDecodedMetricF_Callback textgrammarcheck__grammalecteresultwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool textgrammarcheck__grammalecteresultwidget_metaobject_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_metacast_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_metacall_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_checkgrammar_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_addextrawidget_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_devtype_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_setvisible_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_sizehint_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_minimumsizehint_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_heightforwidth_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_hasheightforwidth_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_paintengine_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_event_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_mousepressevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_mousereleaseevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_mousedoubleclickevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_mousemoveevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_wheelevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_keypressevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_keyreleaseevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_focusinevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_focusoutevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_enterevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_leaveevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_paintevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_moveevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_resizeevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_closeevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_contextmenuevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_tabletevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_actionevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_dragenterevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_dragmoveevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_dragleaveevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_dropevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_showevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_hideevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_nativeevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_changeevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_metric_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_initpainter_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_redirected_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_sharedpainter_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_inputmethodevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_inputmethodquery_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_focusnextprevchild_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_eventfilter_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_timerevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_childevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_customevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_connectnotify_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_disconnectnotify_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_updatemicrofocus_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_create_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_destroy_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_focusnextchild_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_focuspreviouschild_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_sender_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_sendersignalindex_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_receivers_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_issignalconnected_isbase = false;
    mutable bool textgrammarcheck__grammalecteresultwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualTextGrammarCheckGrammalecteResultWidget(QWidget* parent) : TextGrammarCheck::GrammalecteResultWidget(parent) {};
    VirtualTextGrammarCheckGrammalecteResultWidget() : TextGrammarCheck::GrammalecteResultWidget() {};

    // Callback setters
    inline void setTextGrammarCheck__GrammalecteResultWidget_MetaObject_Callback(TextGrammarCheck__GrammalecteResultWidget_MetaObject_Callback cb) { textgrammarcheck__grammalecteresultwidget_metaobject_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_Metacast_Callback(TextGrammarCheck__GrammalecteResultWidget_Metacast_Callback cb) { textgrammarcheck__grammalecteresultwidget_metacast_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_Metacall_Callback(TextGrammarCheck__GrammalecteResultWidget_Metacall_Callback cb) { textgrammarcheck__grammalecteresultwidget_metacall_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_CheckGrammar_Callback(TextGrammarCheck__GrammalecteResultWidget_CheckGrammar_Callback cb) { textgrammarcheck__grammalecteresultwidget_checkgrammar_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_AddExtraWidget_Callback(TextGrammarCheck__GrammalecteResultWidget_AddExtraWidget_Callback cb) { textgrammarcheck__grammalecteresultwidget_addextrawidget_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_DevType_Callback(TextGrammarCheck__GrammalecteResultWidget_DevType_Callback cb) { textgrammarcheck__grammalecteresultwidget_devtype_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_SetVisible_Callback(TextGrammarCheck__GrammalecteResultWidget_SetVisible_Callback cb) { textgrammarcheck__grammalecteresultwidget_setvisible_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_SizeHint_Callback(TextGrammarCheck__GrammalecteResultWidget_SizeHint_Callback cb) { textgrammarcheck__grammalecteresultwidget_sizehint_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_MinimumSizeHint_Callback(TextGrammarCheck__GrammalecteResultWidget_MinimumSizeHint_Callback cb) { textgrammarcheck__grammalecteresultwidget_minimumsizehint_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_HeightForWidth_Callback(TextGrammarCheck__GrammalecteResultWidget_HeightForWidth_Callback cb) { textgrammarcheck__grammalecteresultwidget_heightforwidth_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_HasHeightForWidth_Callback(TextGrammarCheck__GrammalecteResultWidget_HasHeightForWidth_Callback cb) { textgrammarcheck__grammalecteresultwidget_hasheightforwidth_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_PaintEngine_Callback(TextGrammarCheck__GrammalecteResultWidget_PaintEngine_Callback cb) { textgrammarcheck__grammalecteresultwidget_paintengine_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_Event_Callback(TextGrammarCheck__GrammalecteResultWidget_Event_Callback cb) { textgrammarcheck__grammalecteresultwidget_event_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_MousePressEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_MousePressEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_mousepressevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_MouseReleaseEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_MouseReleaseEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_mousereleaseevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_MouseDoubleClickEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_MouseDoubleClickEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_mousedoubleclickevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_MouseMoveEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_MouseMoveEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_mousemoveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_WheelEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_WheelEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_wheelevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_KeyPressEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_KeyPressEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_keypressevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_KeyReleaseEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_KeyReleaseEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_keyreleaseevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_FocusInEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_FocusInEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_focusinevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_FocusOutEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_FocusOutEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_focusoutevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_EnterEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_EnterEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_enterevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_LeaveEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_LeaveEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_leaveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_PaintEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_PaintEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_paintevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_MoveEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_MoveEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_moveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_ResizeEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_ResizeEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_resizeevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_CloseEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_CloseEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_closeevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_ContextMenuEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_ContextMenuEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_contextmenuevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_TabletEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_TabletEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_tabletevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_ActionEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_ActionEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_actionevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_DragEnterEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_DragEnterEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_dragenterevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_DragMoveEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_DragMoveEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_dragmoveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_DragLeaveEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_DragLeaveEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_dragleaveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_DropEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_DropEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_dropevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_ShowEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_ShowEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_showevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_HideEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_HideEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_hideevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_NativeEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_NativeEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_nativeevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_ChangeEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_ChangeEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_changeevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_Metric_Callback(TextGrammarCheck__GrammalecteResultWidget_Metric_Callback cb) { textgrammarcheck__grammalecteresultwidget_metric_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_InitPainter_Callback(TextGrammarCheck__GrammalecteResultWidget_InitPainter_Callback cb) { textgrammarcheck__grammalecteresultwidget_initpainter_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_Redirected_Callback(TextGrammarCheck__GrammalecteResultWidget_Redirected_Callback cb) { textgrammarcheck__grammalecteresultwidget_redirected_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_SharedPainter_Callback(TextGrammarCheck__GrammalecteResultWidget_SharedPainter_Callback cb) { textgrammarcheck__grammalecteresultwidget_sharedpainter_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_InputMethodEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_InputMethodEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_inputmethodevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_InputMethodQuery_Callback(TextGrammarCheck__GrammalecteResultWidget_InputMethodQuery_Callback cb) { textgrammarcheck__grammalecteresultwidget_inputmethodquery_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_FocusNextPrevChild_Callback(TextGrammarCheck__GrammalecteResultWidget_FocusNextPrevChild_Callback cb) { textgrammarcheck__grammalecteresultwidget_focusnextprevchild_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_EventFilter_Callback(TextGrammarCheck__GrammalecteResultWidget_EventFilter_Callback cb) { textgrammarcheck__grammalecteresultwidget_eventfilter_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_TimerEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_TimerEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_timerevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_ChildEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_ChildEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_childevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_CustomEvent_Callback(TextGrammarCheck__GrammalecteResultWidget_CustomEvent_Callback cb) { textgrammarcheck__grammalecteresultwidget_customevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_ConnectNotify_Callback(TextGrammarCheck__GrammalecteResultWidget_ConnectNotify_Callback cb) { textgrammarcheck__grammalecteresultwidget_connectnotify_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_DisconnectNotify_Callback(TextGrammarCheck__GrammalecteResultWidget_DisconnectNotify_Callback cb) { textgrammarcheck__grammalecteresultwidget_disconnectnotify_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_UpdateMicroFocus_Callback(TextGrammarCheck__GrammalecteResultWidget_UpdateMicroFocus_Callback cb) { textgrammarcheck__grammalecteresultwidget_updatemicrofocus_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_Create_Callback(TextGrammarCheck__GrammalecteResultWidget_Create_Callback cb) { textgrammarcheck__grammalecteresultwidget_create_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_Destroy_Callback(TextGrammarCheck__GrammalecteResultWidget_Destroy_Callback cb) { textgrammarcheck__grammalecteresultwidget_destroy_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_FocusNextChild_Callback(TextGrammarCheck__GrammalecteResultWidget_FocusNextChild_Callback cb) { textgrammarcheck__grammalecteresultwidget_focusnextchild_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_FocusPreviousChild_Callback(TextGrammarCheck__GrammalecteResultWidget_FocusPreviousChild_Callback cb) { textgrammarcheck__grammalecteresultwidget_focuspreviouschild_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_Sender_Callback(TextGrammarCheck__GrammalecteResultWidget_Sender_Callback cb) { textgrammarcheck__grammalecteresultwidget_sender_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_SenderSignalIndex_Callback(TextGrammarCheck__GrammalecteResultWidget_SenderSignalIndex_Callback cb) { textgrammarcheck__grammalecteresultwidget_sendersignalindex_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_Receivers_Callback(TextGrammarCheck__GrammalecteResultWidget_Receivers_Callback cb) { textgrammarcheck__grammalecteresultwidget_receivers_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_IsSignalConnected_Callback(TextGrammarCheck__GrammalecteResultWidget_IsSignalConnected_Callback cb) { textgrammarcheck__grammalecteresultwidget_issignalconnected_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_GetDecodedMetricF_Callback(TextGrammarCheck__GrammalecteResultWidget_GetDecodedMetricF_Callback cb) { textgrammarcheck__grammalecteresultwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextGrammarCheck__GrammalecteResultWidget_MetaObject_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_metaobject_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_Metacast_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_metacast_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_Metacall_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_metacall_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_CheckGrammar_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_checkgrammar_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_AddExtraWidget_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_addextrawidget_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_DevType_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_devtype_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_SetVisible_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_setvisible_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_SizeHint_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_sizehint_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_MinimumSizeHint_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_minimumsizehint_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_HeightForWidth_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_heightforwidth_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_HasHeightForWidth_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_hasheightforwidth_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_PaintEngine_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_paintengine_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_Event_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_event_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_MousePressEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_mousepressevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_MouseReleaseEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_mousereleaseevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_MouseDoubleClickEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_mousedoubleclickevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_MouseMoveEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_mousemoveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_WheelEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_wheelevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_KeyPressEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_keypressevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_KeyReleaseEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_keyreleaseevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_FocusInEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_focusinevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_FocusOutEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_focusoutevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_EnterEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_enterevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_LeaveEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_leaveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_PaintEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_paintevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_MoveEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_moveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_ResizeEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_resizeevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_CloseEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_closeevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_ContextMenuEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_contextmenuevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_TabletEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_tabletevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_ActionEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_actionevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_DragEnterEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_dragenterevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_DragMoveEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_dragmoveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_DragLeaveEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_dragleaveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_DropEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_dropevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_ShowEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_showevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_HideEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_hideevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_NativeEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_nativeevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_ChangeEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_changeevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_Metric_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_metric_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_InitPainter_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_initpainter_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_Redirected_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_redirected_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_SharedPainter_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_sharedpainter_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_InputMethodEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_inputmethodevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_InputMethodQuery_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_inputmethodquery_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_FocusNextPrevChild_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_focusnextprevchild_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_EventFilter_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_eventfilter_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_TimerEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_timerevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_ChildEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_childevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_CustomEvent_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_customevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_ConnectNotify_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_connectnotify_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_DisconnectNotify_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_disconnectnotify_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_UpdateMicroFocus_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_updatemicrofocus_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_Create_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_create_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_Destroy_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_destroy_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_FocusNextChild_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_focusnextchild_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_FocusPreviousChild_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_focuspreviouschild_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_Sender_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_sender_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_SenderSignalIndex_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_sendersignalindex_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_Receivers_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_receivers_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_IsSignalConnected_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_issignalconnected_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteResultWidget_GetDecodedMetricF_IsBase(bool value) const { textgrammarcheck__grammalecteresultwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__grammalecteresultwidget_metaobject_isbase) {
            textgrammarcheck__grammalecteresultwidget_metaobject_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::metaObject();
        }
        auto metaobject_cb = textgrammarcheck__grammalecteresultwidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__grammalecteresultwidget_metacast_isbase) {
            textgrammarcheck__grammalecteresultwidget_metacast_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::qt_metacast(param1);
        }
        auto metacast_cb = textgrammarcheck__grammalecteresultwidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__grammalecteresultwidget_metacall_isbase) {
            textgrammarcheck__grammalecteresultwidget_metacall_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textgrammarcheck__grammalecteresultwidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteResultWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkGrammar() override {
        if (textgrammarcheck__grammalecteresultwidget_checkgrammar_isbase) {
            textgrammarcheck__grammalecteresultwidget_checkgrammar_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::checkGrammar();
            return;
        }
        auto checkgrammar_cb = textgrammarcheck__grammalecteresultwidget_checkgrammar_callback;
        if (checkgrammar_cb) {
            checkgrammar_cb();
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::checkGrammar();
    }

    // Virtual method for C ABI access and custom callback
    virtual void addExtraWidget() override {
        if (textgrammarcheck__grammalecteresultwidget_addextrawidget_isbase) {
            textgrammarcheck__grammalecteresultwidget_addextrawidget_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::addExtraWidget();
            return;
        }
        auto addextrawidget_cb = textgrammarcheck__grammalecteresultwidget_addextrawidget_callback;
        if (addextrawidget_cb) {
            addextrawidget_cb();
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::addExtraWidget();
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textgrammarcheck__grammalecteresultwidget_devtype_isbase) {
            textgrammarcheck__grammalecteresultwidget_devtype_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::devType();
        }
        auto devtype_cb = textgrammarcheck__grammalecteresultwidget_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteResultWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textgrammarcheck__grammalecteresultwidget_setvisible_isbase) {
            textgrammarcheck__grammalecteresultwidget_setvisible_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::setVisible(visible);
            return;
        }
        auto setvisible_cb = textgrammarcheck__grammalecteresultwidget_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textgrammarcheck__grammalecteresultwidget_sizehint_isbase) {
            textgrammarcheck__grammalecteresultwidget_sizehint_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::sizeHint();
        }
        auto sizehint_cb = textgrammarcheck__grammalecteresultwidget_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textgrammarcheck__grammalecteresultwidget_minimumsizehint_isbase) {
            textgrammarcheck__grammalecteresultwidget_minimumsizehint_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::minimumSizeHint();
        }
        auto minimumsizehint_cb = textgrammarcheck__grammalecteresultwidget_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textgrammarcheck__grammalecteresultwidget_heightforwidth_isbase) {
            textgrammarcheck__grammalecteresultwidget_heightforwidth_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::heightForWidth(param1);
        }
        auto heightforwidth_cb = textgrammarcheck__grammalecteresultwidget_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteResultWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textgrammarcheck__grammalecteresultwidget_hasheightforwidth_isbase) {
            textgrammarcheck__grammalecteresultwidget_hasheightforwidth_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = textgrammarcheck__grammalecteresultwidget_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textgrammarcheck__grammalecteresultwidget_paintengine_isbase) {
            textgrammarcheck__grammalecteresultwidget_paintengine_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::paintEngine();
        }
        auto paintengine_cb = textgrammarcheck__grammalecteresultwidget_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_event_isbase) {
            textgrammarcheck__grammalecteresultwidget_event_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::event(event);
        }
        auto event_cb = textgrammarcheck__grammalecteresultwidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_mousepressevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_mousepressevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = textgrammarcheck__grammalecteresultwidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_mousereleaseevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_mousereleaseevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = textgrammarcheck__grammalecteresultwidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_mousedoubleclickevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_mousedoubleclickevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = textgrammarcheck__grammalecteresultwidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_mousemoveevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_mousemoveevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = textgrammarcheck__grammalecteresultwidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_wheelevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_wheelevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = textgrammarcheck__grammalecteresultwidget_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_keypressevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_keypressevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = textgrammarcheck__grammalecteresultwidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_keyreleaseevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_keyreleaseevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = textgrammarcheck__grammalecteresultwidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_focusinevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_focusinevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = textgrammarcheck__grammalecteresultwidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_focusoutevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_focusoutevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = textgrammarcheck__grammalecteresultwidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_enterevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_enterevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::enterEvent(event);
            return;
        }
        auto enterevent_cb = textgrammarcheck__grammalecteresultwidget_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_leaveevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_leaveevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = textgrammarcheck__grammalecteresultwidget_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_paintevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_paintevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::paintEvent(event);
            return;
        }
        auto paintevent_cb = textgrammarcheck__grammalecteresultwidget_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_moveevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_moveevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = textgrammarcheck__grammalecteresultwidget_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_resizeevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_resizeevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = textgrammarcheck__grammalecteresultwidget_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_closeevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_closeevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = textgrammarcheck__grammalecteresultwidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_contextmenuevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_contextmenuevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = textgrammarcheck__grammalecteresultwidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_tabletevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_tabletevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = textgrammarcheck__grammalecteresultwidget_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_actionevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_actionevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::actionEvent(event);
            return;
        }
        auto actionevent_cb = textgrammarcheck__grammalecteresultwidget_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_dragenterevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_dragenterevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = textgrammarcheck__grammalecteresultwidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_dragmoveevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_dragmoveevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = textgrammarcheck__grammalecteresultwidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_dragleaveevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_dragleaveevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = textgrammarcheck__grammalecteresultwidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_dropevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_dropevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::dropEvent(event);
            return;
        }
        auto dropevent_cb = textgrammarcheck__grammalecteresultwidget_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_showevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_showevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::showEvent(event);
            return;
        }
        auto showevent_cb = textgrammarcheck__grammalecteresultwidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_hideevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_hideevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::hideEvent(event);
            return;
        }
        auto hideevent_cb = textgrammarcheck__grammalecteresultwidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textgrammarcheck__grammalecteresultwidget_nativeevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_nativeevent_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = textgrammarcheck__grammalecteresultwidget_nativeevent_callback;
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
        return TextGrammarCheck__GrammalecteResultWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textgrammarcheck__grammalecteresultwidget_changeevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_changeevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::changeEvent(param1);
            return;
        }
        auto changeevent_cb = textgrammarcheck__grammalecteresultwidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textgrammarcheck__grammalecteresultwidget_metric_isbase) {
            textgrammarcheck__grammalecteresultwidget_metric_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::metric(param1);
        }
        auto metric_cb = textgrammarcheck__grammalecteresultwidget_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteResultWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textgrammarcheck__grammalecteresultwidget_initpainter_isbase) {
            textgrammarcheck__grammalecteresultwidget_initpainter_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::initPainter(painter);
            return;
        }
        auto initpainter_cb = textgrammarcheck__grammalecteresultwidget_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textgrammarcheck__grammalecteresultwidget_redirected_isbase) {
            textgrammarcheck__grammalecteresultwidget_redirected_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::redirected(offset);
        }
        auto redirected_cb = textgrammarcheck__grammalecteresultwidget_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textgrammarcheck__grammalecteresultwidget_sharedpainter_isbase) {
            textgrammarcheck__grammalecteresultwidget_sharedpainter_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::sharedPainter();
        }
        auto sharedpainter_cb = textgrammarcheck__grammalecteresultwidget_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textgrammarcheck__grammalecteresultwidget_inputmethodevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_inputmethodevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = textgrammarcheck__grammalecteresultwidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textgrammarcheck__grammalecteresultwidget_inputmethodquery_isbase) {
            textgrammarcheck__grammalecteresultwidget_inputmethodquery_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = textgrammarcheck__grammalecteresultwidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textgrammarcheck__grammalecteresultwidget_focusnextprevchild_isbase) {
            textgrammarcheck__grammalecteresultwidget_focusnextprevchild_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = textgrammarcheck__grammalecteresultwidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_eventfilter_isbase) {
            textgrammarcheck__grammalecteresultwidget_eventfilter_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::eventFilter(watched, event);
        }
        auto eventfilter_cb = textgrammarcheck__grammalecteresultwidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_timerevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_timerevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::timerEvent(event);
            return;
        }
        auto timerevent_cb = textgrammarcheck__grammalecteresultwidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_childevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_childevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::childEvent(event);
            return;
        }
        auto childevent_cb = textgrammarcheck__grammalecteresultwidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_customevent_isbase) {
            textgrammarcheck__grammalecteresultwidget_customevent_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::customEvent(event);
            return;
        }
        auto customevent_cb = textgrammarcheck__grammalecteresultwidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammalecteresultwidget_connectnotify_isbase) {
            textgrammarcheck__grammalecteresultwidget_connectnotify_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textgrammarcheck__grammalecteresultwidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammalecteresultwidget_disconnectnotify_isbase) {
            textgrammarcheck__grammalecteresultwidget_disconnectnotify_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textgrammarcheck__grammalecteresultwidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (textgrammarcheck__grammalecteresultwidget_updatemicrofocus_isbase) {
            textgrammarcheck__grammalecteresultwidget_updatemicrofocus_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = textgrammarcheck__grammalecteresultwidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (textgrammarcheck__grammalecteresultwidget_create_isbase) {
            textgrammarcheck__grammalecteresultwidget_create_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::create();
            return;
        }
        auto create_cb = textgrammarcheck__grammalecteresultwidget_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (textgrammarcheck__grammalecteresultwidget_destroy_isbase) {
            textgrammarcheck__grammalecteresultwidget_destroy_isbase = false;
            TextGrammarCheck__GrammalecteResultWidget::destroy();
            return;
        }
        auto destroy_cb = textgrammarcheck__grammalecteresultwidget_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (textgrammarcheck__grammalecteresultwidget_focusnextchild_isbase) {
            textgrammarcheck__grammalecteresultwidget_focusnextchild_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::focusNextChild();
        }
        auto focusnextchild_cb = textgrammarcheck__grammalecteresultwidget_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (textgrammarcheck__grammalecteresultwidget_focuspreviouschild_isbase) {
            textgrammarcheck__grammalecteresultwidget_focuspreviouschild_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::focusPreviousChild();
        }
        auto focuspreviouschild_cb = textgrammarcheck__grammalecteresultwidget_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textgrammarcheck__grammalecteresultwidget_sender_isbase) {
            textgrammarcheck__grammalecteresultwidget_sender_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::sender();
        }
        auto sender_cb = textgrammarcheck__grammalecteresultwidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textgrammarcheck__grammalecteresultwidget_sendersignalindex_isbase) {
            textgrammarcheck__grammalecteresultwidget_sendersignalindex_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = textgrammarcheck__grammalecteresultwidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteResultWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textgrammarcheck__grammalecteresultwidget_receivers_isbase) {
            textgrammarcheck__grammalecteresultwidget_receivers_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::receivers(signal);
        }
        auto receivers_cb = textgrammarcheck__grammalecteresultwidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteResultWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textgrammarcheck__grammalecteresultwidget_issignalconnected_isbase) {
            textgrammarcheck__grammalecteresultwidget_issignalconnected_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textgrammarcheck__grammalecteresultwidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (textgrammarcheck__grammalecteresultwidget_getdecodedmetricf_isbase) {
            textgrammarcheck__grammalecteresultwidget_getdecodedmetricf_isbase = false;
            return TextGrammarCheck__GrammalecteResultWidget::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = textgrammarcheck__grammalecteresultwidget_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteResultWidget::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void TextGrammarCheck__GrammalecteResultWidget_AddExtraWidget(TextGrammarCheck::GrammalecteResultWidget* self);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperAddExtraWidget(TextGrammarCheck::GrammalecteResultWidget* self);
    friend bool TextGrammarCheck__GrammalecteResultWidget_Event(TextGrammarCheck::GrammalecteResultWidget* self, QEvent* event);
    friend bool TextGrammarCheck__GrammalecteResultWidget_SuperEvent(TextGrammarCheck::GrammalecteResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_MousePressEvent(TextGrammarCheck::GrammalecteResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperMousePressEvent(TextGrammarCheck::GrammalecteResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_MouseReleaseEvent(TextGrammarCheck::GrammalecteResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperMouseReleaseEvent(TextGrammarCheck::GrammalecteResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_MouseDoubleClickEvent(TextGrammarCheck::GrammalecteResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperMouseDoubleClickEvent(TextGrammarCheck::GrammalecteResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_MouseMoveEvent(TextGrammarCheck::GrammalecteResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperMouseMoveEvent(TextGrammarCheck::GrammalecteResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_WheelEvent(TextGrammarCheck::GrammalecteResultWidget* self, QWheelEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperWheelEvent(TextGrammarCheck::GrammalecteResultWidget* self, QWheelEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_KeyPressEvent(TextGrammarCheck::GrammalecteResultWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperKeyPressEvent(TextGrammarCheck::GrammalecteResultWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_KeyReleaseEvent(TextGrammarCheck::GrammalecteResultWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperKeyReleaseEvent(TextGrammarCheck::GrammalecteResultWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_FocusInEvent(TextGrammarCheck::GrammalecteResultWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperFocusInEvent(TextGrammarCheck::GrammalecteResultWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_FocusOutEvent(TextGrammarCheck::GrammalecteResultWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperFocusOutEvent(TextGrammarCheck::GrammalecteResultWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_EnterEvent(TextGrammarCheck::GrammalecteResultWidget* self, QEnterEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperEnterEvent(TextGrammarCheck::GrammalecteResultWidget* self, QEnterEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_LeaveEvent(TextGrammarCheck::GrammalecteResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperLeaveEvent(TextGrammarCheck::GrammalecteResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_PaintEvent(TextGrammarCheck::GrammalecteResultWidget* self, QPaintEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperPaintEvent(TextGrammarCheck::GrammalecteResultWidget* self, QPaintEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_MoveEvent(TextGrammarCheck::GrammalecteResultWidget* self, QMoveEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperMoveEvent(TextGrammarCheck::GrammalecteResultWidget* self, QMoveEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_ResizeEvent(TextGrammarCheck::GrammalecteResultWidget* self, QResizeEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperResizeEvent(TextGrammarCheck::GrammalecteResultWidget* self, QResizeEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_CloseEvent(TextGrammarCheck::GrammalecteResultWidget* self, QCloseEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperCloseEvent(TextGrammarCheck::GrammalecteResultWidget* self, QCloseEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_ContextMenuEvent(TextGrammarCheck::GrammalecteResultWidget* self, QContextMenuEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperContextMenuEvent(TextGrammarCheck::GrammalecteResultWidget* self, QContextMenuEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_TabletEvent(TextGrammarCheck::GrammalecteResultWidget* self, QTabletEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperTabletEvent(TextGrammarCheck::GrammalecteResultWidget* self, QTabletEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_ActionEvent(TextGrammarCheck::GrammalecteResultWidget* self, QActionEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperActionEvent(TextGrammarCheck::GrammalecteResultWidget* self, QActionEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_DragEnterEvent(TextGrammarCheck::GrammalecteResultWidget* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperDragEnterEvent(TextGrammarCheck::GrammalecteResultWidget* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_DragMoveEvent(TextGrammarCheck::GrammalecteResultWidget* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperDragMoveEvent(TextGrammarCheck::GrammalecteResultWidget* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_DragLeaveEvent(TextGrammarCheck::GrammalecteResultWidget* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperDragLeaveEvent(TextGrammarCheck::GrammalecteResultWidget* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_DropEvent(TextGrammarCheck::GrammalecteResultWidget* self, QDropEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperDropEvent(TextGrammarCheck::GrammalecteResultWidget* self, QDropEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_ShowEvent(TextGrammarCheck::GrammalecteResultWidget* self, QShowEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperShowEvent(TextGrammarCheck::GrammalecteResultWidget* self, QShowEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_HideEvent(TextGrammarCheck::GrammalecteResultWidget* self, QHideEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperHideEvent(TextGrammarCheck::GrammalecteResultWidget* self, QHideEvent* event);
    friend bool TextGrammarCheck__GrammalecteResultWidget_NativeEvent(TextGrammarCheck::GrammalecteResultWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextGrammarCheck__GrammalecteResultWidget_SuperNativeEvent(TextGrammarCheck::GrammalecteResultWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextGrammarCheck__GrammalecteResultWidget_ChangeEvent(TextGrammarCheck::GrammalecteResultWidget* self, QEvent* param1);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperChangeEvent(TextGrammarCheck::GrammalecteResultWidget* self, QEvent* param1);
    friend int TextGrammarCheck__GrammalecteResultWidget_Metric(const TextGrammarCheck::GrammalecteResultWidget* self, int param1);
    friend int TextGrammarCheck__GrammalecteResultWidget_SuperMetric(const TextGrammarCheck::GrammalecteResultWidget* self, int param1);
    friend void TextGrammarCheck__GrammalecteResultWidget_InitPainter(const TextGrammarCheck::GrammalecteResultWidget* self, QPainter* painter);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperInitPainter(const TextGrammarCheck::GrammalecteResultWidget* self, QPainter* painter);
    friend QPaintDevice* TextGrammarCheck__GrammalecteResultWidget_Redirected(const TextGrammarCheck::GrammalecteResultWidget* self, QPoint* offset);
    friend QPaintDevice* TextGrammarCheck__GrammalecteResultWidget_SuperRedirected(const TextGrammarCheck::GrammalecteResultWidget* self, QPoint* offset);
    friend QPainter* TextGrammarCheck__GrammalecteResultWidget_SharedPainter(const TextGrammarCheck::GrammalecteResultWidget* self);
    friend QPainter* TextGrammarCheck__GrammalecteResultWidget_SuperSharedPainter(const TextGrammarCheck::GrammalecteResultWidget* self);
    friend void TextGrammarCheck__GrammalecteResultWidget_InputMethodEvent(TextGrammarCheck::GrammalecteResultWidget* self, QInputMethodEvent* param1);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperInputMethodEvent(TextGrammarCheck::GrammalecteResultWidget* self, QInputMethodEvent* param1);
    friend bool TextGrammarCheck__GrammalecteResultWidget_FocusNextPrevChild(TextGrammarCheck::GrammalecteResultWidget* self, bool next);
    friend bool TextGrammarCheck__GrammalecteResultWidget_SuperFocusNextPrevChild(TextGrammarCheck::GrammalecteResultWidget* self, bool next);
    friend void TextGrammarCheck__GrammalecteResultWidget_TimerEvent(TextGrammarCheck::GrammalecteResultWidget* self, QTimerEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperTimerEvent(TextGrammarCheck::GrammalecteResultWidget* self, QTimerEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_ChildEvent(TextGrammarCheck::GrammalecteResultWidget* self, QChildEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperChildEvent(TextGrammarCheck::GrammalecteResultWidget* self, QChildEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_CustomEvent(TextGrammarCheck::GrammalecteResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperCustomEvent(TextGrammarCheck::GrammalecteResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_ConnectNotify(TextGrammarCheck::GrammalecteResultWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperConnectNotify(TextGrammarCheck::GrammalecteResultWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteResultWidget_DisconnectNotify(TextGrammarCheck::GrammalecteResultWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperDisconnectNotify(TextGrammarCheck::GrammalecteResultWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteResultWidget_UpdateMicroFocus(TextGrammarCheck::GrammalecteResultWidget* self);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperUpdateMicroFocus(TextGrammarCheck::GrammalecteResultWidget* self);
    friend void TextGrammarCheck__GrammalecteResultWidget_Create(TextGrammarCheck::GrammalecteResultWidget* self);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperCreate(TextGrammarCheck::GrammalecteResultWidget* self);
    friend void TextGrammarCheck__GrammalecteResultWidget_Destroy(TextGrammarCheck::GrammalecteResultWidget* self);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperDestroy(TextGrammarCheck::GrammalecteResultWidget* self);
    friend bool TextGrammarCheck__GrammalecteResultWidget_FocusNextChild(TextGrammarCheck::GrammalecteResultWidget* self);
    friend bool TextGrammarCheck__GrammalecteResultWidget_SuperFocusNextChild(TextGrammarCheck::GrammalecteResultWidget* self);
    friend bool TextGrammarCheck__GrammalecteResultWidget_FocusPreviousChild(TextGrammarCheck::GrammalecteResultWidget* self);
    friend bool TextGrammarCheck__GrammalecteResultWidget_SuperFocusPreviousChild(TextGrammarCheck::GrammalecteResultWidget* self);
    friend QObject* TextGrammarCheck__GrammalecteResultWidget_Sender(const TextGrammarCheck::GrammalecteResultWidget* self);
    friend QObject* TextGrammarCheck__GrammalecteResultWidget_SuperSender(const TextGrammarCheck::GrammalecteResultWidget* self);
    friend int TextGrammarCheck__GrammalecteResultWidget_SenderSignalIndex(const TextGrammarCheck::GrammalecteResultWidget* self);
    friend int TextGrammarCheck__GrammalecteResultWidget_SuperSenderSignalIndex(const TextGrammarCheck::GrammalecteResultWidget* self);
    friend int TextGrammarCheck__GrammalecteResultWidget_Receivers(const TextGrammarCheck::GrammalecteResultWidget* self, const char* signal);
    friend int TextGrammarCheck__GrammalecteResultWidget_SuperReceivers(const TextGrammarCheck::GrammalecteResultWidget* self, const char* signal);
    friend bool TextGrammarCheck__GrammalecteResultWidget_IsSignalConnected(const TextGrammarCheck::GrammalecteResultWidget* self, const QMetaMethod* signal);
    friend bool TextGrammarCheck__GrammalecteResultWidget_SuperIsSignalConnected(const TextGrammarCheck::GrammalecteResultWidget* self, const QMetaMethod* signal);
    friend double TextGrammarCheck__GrammalecteResultWidget_GetDecodedMetricF(const TextGrammarCheck::GrammalecteResultWidget* self, int metricA, int metricB);
    friend double TextGrammarCheck__GrammalecteResultWidget_SuperGetDecodedMetricF(const TextGrammarCheck::GrammalecteResultWidget* self, int metricA, int metricB);
};

#endif
