#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALGRAMMARRESULTWIDGET_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALGRAMMARRESULTWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::GrammarResultWidget so that we can call protected methods
class VirtualTextGrammarCheckGrammarResultWidget : public TextGrammarCheck::GrammarResultWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualTextGrammarCheckGrammarResultWidget = true;

    // Virtual class public types (including callbacks)
    using TextGrammarCheck__GrammarResultWidget_MetaObject_Callback = QMetaObject* (*)();
    using TextGrammarCheck__GrammarResultWidget_Metacast_Callback = void* (*)(TextGrammarCheck__GrammarResultWidget*, const char*);
    using TextGrammarCheck__GrammarResultWidget_Metacall_Callback = int (*)(TextGrammarCheck__GrammarResultWidget*, int, int, void**);
    using TextGrammarCheck__GrammarResultWidget_CheckGrammar_Callback = void (*)();
    using TextGrammarCheck__GrammarResultWidget_AddExtraWidget_Callback = void (*)();
    using TextGrammarCheck__GrammarResultWidget_DevType_Callback = int (*)();
    using TextGrammarCheck__GrammarResultWidget_SetVisible_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, bool);
    using TextGrammarCheck__GrammarResultWidget_SizeHint_Callback = QSize* (*)();
    using TextGrammarCheck__GrammarResultWidget_MinimumSizeHint_Callback = QSize* (*)();
    using TextGrammarCheck__GrammarResultWidget_HeightForWidth_Callback = int (*)(const TextGrammarCheck__GrammarResultWidget*, int);
    using TextGrammarCheck__GrammarResultWidget_HasHeightForWidth_Callback = bool (*)();
    using TextGrammarCheck__GrammarResultWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using TextGrammarCheck__GrammarResultWidget_Event_Callback = bool (*)(TextGrammarCheck__GrammarResultWidget*, QEvent*);
    using TextGrammarCheck__GrammarResultWidget_MousePressEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammarResultWidget_MouseReleaseEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammarResultWidget_MouseDoubleClickEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammarResultWidget_MouseMoveEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammarResultWidget_WheelEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QWheelEvent*);
    using TextGrammarCheck__GrammarResultWidget_KeyPressEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QKeyEvent*);
    using TextGrammarCheck__GrammarResultWidget_KeyReleaseEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QKeyEvent*);
    using TextGrammarCheck__GrammarResultWidget_FocusInEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QFocusEvent*);
    using TextGrammarCheck__GrammarResultWidget_FocusOutEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QFocusEvent*);
    using TextGrammarCheck__GrammarResultWidget_EnterEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QEnterEvent*);
    using TextGrammarCheck__GrammarResultWidget_LeaveEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QEvent*);
    using TextGrammarCheck__GrammarResultWidget_PaintEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QPaintEvent*);
    using TextGrammarCheck__GrammarResultWidget_MoveEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QMoveEvent*);
    using TextGrammarCheck__GrammarResultWidget_ResizeEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QResizeEvent*);
    using TextGrammarCheck__GrammarResultWidget_CloseEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QCloseEvent*);
    using TextGrammarCheck__GrammarResultWidget_ContextMenuEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QContextMenuEvent*);
    using TextGrammarCheck__GrammarResultWidget_TabletEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QTabletEvent*);
    using TextGrammarCheck__GrammarResultWidget_ActionEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QActionEvent*);
    using TextGrammarCheck__GrammarResultWidget_DragEnterEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QDragEnterEvent*);
    using TextGrammarCheck__GrammarResultWidget_DragMoveEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QDragMoveEvent*);
    using TextGrammarCheck__GrammarResultWidget_DragLeaveEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QDragLeaveEvent*);
    using TextGrammarCheck__GrammarResultWidget_DropEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QDropEvent*);
    using TextGrammarCheck__GrammarResultWidget_ShowEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QShowEvent*);
    using TextGrammarCheck__GrammarResultWidget_HideEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QHideEvent*);
    using TextGrammarCheck__GrammarResultWidget_NativeEvent_Callback = bool (*)(TextGrammarCheck__GrammarResultWidget*, libqt_string, void*, intptr_t*);
    using TextGrammarCheck__GrammarResultWidget_ChangeEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QEvent*);
    using TextGrammarCheck__GrammarResultWidget_Metric_Callback = int (*)(const TextGrammarCheck__GrammarResultWidget*, int);
    using TextGrammarCheck__GrammarResultWidget_InitPainter_Callback = void (*)(const TextGrammarCheck__GrammarResultWidget*, QPainter*);
    using TextGrammarCheck__GrammarResultWidget_Redirected_Callback = QPaintDevice* (*)(const TextGrammarCheck__GrammarResultWidget*, QPoint*);
    using TextGrammarCheck__GrammarResultWidget_SharedPainter_Callback = QPainter* (*)();
    using TextGrammarCheck__GrammarResultWidget_InputMethodEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QInputMethodEvent*);
    using TextGrammarCheck__GrammarResultWidget_InputMethodQuery_Callback = QVariant* (*)(const TextGrammarCheck__GrammarResultWidget*, int);
    using TextGrammarCheck__GrammarResultWidget_FocusNextPrevChild_Callback = bool (*)(TextGrammarCheck__GrammarResultWidget*, bool);
    using TextGrammarCheck__GrammarResultWidget_EventFilter_Callback = bool (*)(TextGrammarCheck__GrammarResultWidget*, QObject*, QEvent*);
    using TextGrammarCheck__GrammarResultWidget_TimerEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QTimerEvent*);
    using TextGrammarCheck__GrammarResultWidget_ChildEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QChildEvent*);
    using TextGrammarCheck__GrammarResultWidget_CustomEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QEvent*);
    using TextGrammarCheck__GrammarResultWidget_ConnectNotify_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QMetaMethod*);
    using TextGrammarCheck__GrammarResultWidget_DisconnectNotify_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QMetaMethod*);
    using TextGrammarCheck__GrammarResultWidget_UpdateMicroFocus_Callback = void (*)();
    using TextGrammarCheck__GrammarResultWidget_Create_Callback = void (*)();
    using TextGrammarCheck__GrammarResultWidget_Destroy_Callback = void (*)();
    using TextGrammarCheck__GrammarResultWidget_FocusNextChild_Callback = bool (*)();
    using TextGrammarCheck__GrammarResultWidget_FocusPreviousChild_Callback = bool (*)();
    using TextGrammarCheck__GrammarResultWidget_Sender_Callback = QObject* (*)();
    using TextGrammarCheck__GrammarResultWidget_SenderSignalIndex_Callback = int (*)();
    using TextGrammarCheck__GrammarResultWidget_Receivers_Callback = int (*)(const TextGrammarCheck__GrammarResultWidget*, const char*);
    using TextGrammarCheck__GrammarResultWidget_IsSignalConnected_Callback = bool (*)(const TextGrammarCheck__GrammarResultWidget*, QMetaMethod*);
    using TextGrammarCheck__GrammarResultWidget_GetDecodedMetricF_Callback = double (*)(const TextGrammarCheck__GrammarResultWidget*, int, int);

  protected:
    // Instance callback storage
    TextGrammarCheck__GrammarResultWidget_MetaObject_Callback textgrammarcheck__grammarresultwidget_metaobject_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_Metacast_Callback textgrammarcheck__grammarresultwidget_metacast_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_Metacall_Callback textgrammarcheck__grammarresultwidget_metacall_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_CheckGrammar_Callback textgrammarcheck__grammarresultwidget_checkgrammar_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_AddExtraWidget_Callback textgrammarcheck__grammarresultwidget_addextrawidget_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_DevType_Callback textgrammarcheck__grammarresultwidget_devtype_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_SetVisible_Callback textgrammarcheck__grammarresultwidget_setvisible_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_SizeHint_Callback textgrammarcheck__grammarresultwidget_sizehint_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_MinimumSizeHint_Callback textgrammarcheck__grammarresultwidget_minimumsizehint_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_HeightForWidth_Callback textgrammarcheck__grammarresultwidget_heightforwidth_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_HasHeightForWidth_Callback textgrammarcheck__grammarresultwidget_hasheightforwidth_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_PaintEngine_Callback textgrammarcheck__grammarresultwidget_paintengine_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_Event_Callback textgrammarcheck__grammarresultwidget_event_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_MousePressEvent_Callback textgrammarcheck__grammarresultwidget_mousepressevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_MouseReleaseEvent_Callback textgrammarcheck__grammarresultwidget_mousereleaseevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_MouseDoubleClickEvent_Callback textgrammarcheck__grammarresultwidget_mousedoubleclickevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_MouseMoveEvent_Callback textgrammarcheck__grammarresultwidget_mousemoveevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_WheelEvent_Callback textgrammarcheck__grammarresultwidget_wheelevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_KeyPressEvent_Callback textgrammarcheck__grammarresultwidget_keypressevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_KeyReleaseEvent_Callback textgrammarcheck__grammarresultwidget_keyreleaseevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_FocusInEvent_Callback textgrammarcheck__grammarresultwidget_focusinevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_FocusOutEvent_Callback textgrammarcheck__grammarresultwidget_focusoutevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_EnterEvent_Callback textgrammarcheck__grammarresultwidget_enterevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_LeaveEvent_Callback textgrammarcheck__grammarresultwidget_leaveevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_PaintEvent_Callback textgrammarcheck__grammarresultwidget_paintevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_MoveEvent_Callback textgrammarcheck__grammarresultwidget_moveevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_ResizeEvent_Callback textgrammarcheck__grammarresultwidget_resizeevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_CloseEvent_Callback textgrammarcheck__grammarresultwidget_closeevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_ContextMenuEvent_Callback textgrammarcheck__grammarresultwidget_contextmenuevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_TabletEvent_Callback textgrammarcheck__grammarresultwidget_tabletevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_ActionEvent_Callback textgrammarcheck__grammarresultwidget_actionevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_DragEnterEvent_Callback textgrammarcheck__grammarresultwidget_dragenterevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_DragMoveEvent_Callback textgrammarcheck__grammarresultwidget_dragmoveevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_DragLeaveEvent_Callback textgrammarcheck__grammarresultwidget_dragleaveevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_DropEvent_Callback textgrammarcheck__grammarresultwidget_dropevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_ShowEvent_Callback textgrammarcheck__grammarresultwidget_showevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_HideEvent_Callback textgrammarcheck__grammarresultwidget_hideevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_NativeEvent_Callback textgrammarcheck__grammarresultwidget_nativeevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_ChangeEvent_Callback textgrammarcheck__grammarresultwidget_changeevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_Metric_Callback textgrammarcheck__grammarresultwidget_metric_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_InitPainter_Callback textgrammarcheck__grammarresultwidget_initpainter_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_Redirected_Callback textgrammarcheck__grammarresultwidget_redirected_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_SharedPainter_Callback textgrammarcheck__grammarresultwidget_sharedpainter_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_InputMethodEvent_Callback textgrammarcheck__grammarresultwidget_inputmethodevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_InputMethodQuery_Callback textgrammarcheck__grammarresultwidget_inputmethodquery_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_FocusNextPrevChild_Callback textgrammarcheck__grammarresultwidget_focusnextprevchild_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_EventFilter_Callback textgrammarcheck__grammarresultwidget_eventfilter_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_TimerEvent_Callback textgrammarcheck__grammarresultwidget_timerevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_ChildEvent_Callback textgrammarcheck__grammarresultwidget_childevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_CustomEvent_Callback textgrammarcheck__grammarresultwidget_customevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_ConnectNotify_Callback textgrammarcheck__grammarresultwidget_connectnotify_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_DisconnectNotify_Callback textgrammarcheck__grammarresultwidget_disconnectnotify_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_UpdateMicroFocus_Callback textgrammarcheck__grammarresultwidget_updatemicrofocus_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_Create_Callback textgrammarcheck__grammarresultwidget_create_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_Destroy_Callback textgrammarcheck__grammarresultwidget_destroy_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_FocusNextChild_Callback textgrammarcheck__grammarresultwidget_focusnextchild_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_FocusPreviousChild_Callback textgrammarcheck__grammarresultwidget_focuspreviouschild_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_Sender_Callback textgrammarcheck__grammarresultwidget_sender_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_SenderSignalIndex_Callback textgrammarcheck__grammarresultwidget_sendersignalindex_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_Receivers_Callback textgrammarcheck__grammarresultwidget_receivers_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_IsSignalConnected_Callback textgrammarcheck__grammarresultwidget_issignalconnected_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_GetDecodedMetricF_Callback textgrammarcheck__grammarresultwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool textgrammarcheck__grammarresultwidget_metaobject_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_metacast_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_metacall_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_checkgrammar_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_addextrawidget_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_devtype_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_setvisible_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_sizehint_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_minimumsizehint_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_heightforwidth_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_hasheightforwidth_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_paintengine_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_event_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_mousepressevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_mousereleaseevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_mousedoubleclickevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_mousemoveevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_wheelevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_keypressevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_keyreleaseevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_focusinevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_focusoutevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_enterevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_leaveevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_paintevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_moveevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_resizeevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_closeevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_contextmenuevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_tabletevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_actionevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_dragenterevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_dragmoveevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_dragleaveevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_dropevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_showevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_hideevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_nativeevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_changeevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_metric_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_initpainter_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_redirected_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_sharedpainter_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_inputmethodevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_inputmethodquery_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_focusnextprevchild_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_eventfilter_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_timerevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_childevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_customevent_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_connectnotify_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_disconnectnotify_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_updatemicrofocus_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_create_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_destroy_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_focusnextchild_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_focuspreviouschild_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_sender_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_sendersignalindex_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_receivers_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_issignalconnected_isbase = false;
    mutable bool textgrammarcheck__grammarresultwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualTextGrammarCheckGrammarResultWidget(QWidget* parent) : TextGrammarCheck::GrammarResultWidget(parent) {};
    VirtualTextGrammarCheckGrammarResultWidget() : TextGrammarCheck::GrammarResultWidget() {};

    // Callback setters
    inline void setTextGrammarCheck__GrammarResultWidget_MetaObject_Callback(TextGrammarCheck__GrammarResultWidget_MetaObject_Callback cb) { textgrammarcheck__grammarresultwidget_metaobject_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_Metacast_Callback(TextGrammarCheck__GrammarResultWidget_Metacast_Callback cb) { textgrammarcheck__grammarresultwidget_metacast_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_Metacall_Callback(TextGrammarCheck__GrammarResultWidget_Metacall_Callback cb) { textgrammarcheck__grammarresultwidget_metacall_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_CheckGrammar_Callback(TextGrammarCheck__GrammarResultWidget_CheckGrammar_Callback cb) { textgrammarcheck__grammarresultwidget_checkgrammar_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_AddExtraWidget_Callback(TextGrammarCheck__GrammarResultWidget_AddExtraWidget_Callback cb) { textgrammarcheck__grammarresultwidget_addextrawidget_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_DevType_Callback(TextGrammarCheck__GrammarResultWidget_DevType_Callback cb) { textgrammarcheck__grammarresultwidget_devtype_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_SetVisible_Callback(TextGrammarCheck__GrammarResultWidget_SetVisible_Callback cb) { textgrammarcheck__grammarresultwidget_setvisible_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_SizeHint_Callback(TextGrammarCheck__GrammarResultWidget_SizeHint_Callback cb) { textgrammarcheck__grammarresultwidget_sizehint_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_MinimumSizeHint_Callback(TextGrammarCheck__GrammarResultWidget_MinimumSizeHint_Callback cb) { textgrammarcheck__grammarresultwidget_minimumsizehint_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_HeightForWidth_Callback(TextGrammarCheck__GrammarResultWidget_HeightForWidth_Callback cb) { textgrammarcheck__grammarresultwidget_heightforwidth_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_HasHeightForWidth_Callback(TextGrammarCheck__GrammarResultWidget_HasHeightForWidth_Callback cb) { textgrammarcheck__grammarresultwidget_hasheightforwidth_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_PaintEngine_Callback(TextGrammarCheck__GrammarResultWidget_PaintEngine_Callback cb) { textgrammarcheck__grammarresultwidget_paintengine_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_Event_Callback(TextGrammarCheck__GrammarResultWidget_Event_Callback cb) { textgrammarcheck__grammarresultwidget_event_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_MousePressEvent_Callback(TextGrammarCheck__GrammarResultWidget_MousePressEvent_Callback cb) { textgrammarcheck__grammarresultwidget_mousepressevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_MouseReleaseEvent_Callback(TextGrammarCheck__GrammarResultWidget_MouseReleaseEvent_Callback cb) { textgrammarcheck__grammarresultwidget_mousereleaseevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_MouseDoubleClickEvent_Callback(TextGrammarCheck__GrammarResultWidget_MouseDoubleClickEvent_Callback cb) { textgrammarcheck__grammarresultwidget_mousedoubleclickevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_MouseMoveEvent_Callback(TextGrammarCheck__GrammarResultWidget_MouseMoveEvent_Callback cb) { textgrammarcheck__grammarresultwidget_mousemoveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_WheelEvent_Callback(TextGrammarCheck__GrammarResultWidget_WheelEvent_Callback cb) { textgrammarcheck__grammarresultwidget_wheelevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_KeyPressEvent_Callback(TextGrammarCheck__GrammarResultWidget_KeyPressEvent_Callback cb) { textgrammarcheck__grammarresultwidget_keypressevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_KeyReleaseEvent_Callback(TextGrammarCheck__GrammarResultWidget_KeyReleaseEvent_Callback cb) { textgrammarcheck__grammarresultwidget_keyreleaseevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_FocusInEvent_Callback(TextGrammarCheck__GrammarResultWidget_FocusInEvent_Callback cb) { textgrammarcheck__grammarresultwidget_focusinevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_FocusOutEvent_Callback(TextGrammarCheck__GrammarResultWidget_FocusOutEvent_Callback cb) { textgrammarcheck__grammarresultwidget_focusoutevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_EnterEvent_Callback(TextGrammarCheck__GrammarResultWidget_EnterEvent_Callback cb) { textgrammarcheck__grammarresultwidget_enterevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_LeaveEvent_Callback(TextGrammarCheck__GrammarResultWidget_LeaveEvent_Callback cb) { textgrammarcheck__grammarresultwidget_leaveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_PaintEvent_Callback(TextGrammarCheck__GrammarResultWidget_PaintEvent_Callback cb) { textgrammarcheck__grammarresultwidget_paintevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_MoveEvent_Callback(TextGrammarCheck__GrammarResultWidget_MoveEvent_Callback cb) { textgrammarcheck__grammarresultwidget_moveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_ResizeEvent_Callback(TextGrammarCheck__GrammarResultWidget_ResizeEvent_Callback cb) { textgrammarcheck__grammarresultwidget_resizeevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_CloseEvent_Callback(TextGrammarCheck__GrammarResultWidget_CloseEvent_Callback cb) { textgrammarcheck__grammarresultwidget_closeevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_ContextMenuEvent_Callback(TextGrammarCheck__GrammarResultWidget_ContextMenuEvent_Callback cb) { textgrammarcheck__grammarresultwidget_contextmenuevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_TabletEvent_Callback(TextGrammarCheck__GrammarResultWidget_TabletEvent_Callback cb) { textgrammarcheck__grammarresultwidget_tabletevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_ActionEvent_Callback(TextGrammarCheck__GrammarResultWidget_ActionEvent_Callback cb) { textgrammarcheck__grammarresultwidget_actionevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_DragEnterEvent_Callback(TextGrammarCheck__GrammarResultWidget_DragEnterEvent_Callback cb) { textgrammarcheck__grammarresultwidget_dragenterevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_DragMoveEvent_Callback(TextGrammarCheck__GrammarResultWidget_DragMoveEvent_Callback cb) { textgrammarcheck__grammarresultwidget_dragmoveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_DragLeaveEvent_Callback(TextGrammarCheck__GrammarResultWidget_DragLeaveEvent_Callback cb) { textgrammarcheck__grammarresultwidget_dragleaveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_DropEvent_Callback(TextGrammarCheck__GrammarResultWidget_DropEvent_Callback cb) { textgrammarcheck__grammarresultwidget_dropevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_ShowEvent_Callback(TextGrammarCheck__GrammarResultWidget_ShowEvent_Callback cb) { textgrammarcheck__grammarresultwidget_showevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_HideEvent_Callback(TextGrammarCheck__GrammarResultWidget_HideEvent_Callback cb) { textgrammarcheck__grammarresultwidget_hideevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_NativeEvent_Callback(TextGrammarCheck__GrammarResultWidget_NativeEvent_Callback cb) { textgrammarcheck__grammarresultwidget_nativeevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_ChangeEvent_Callback(TextGrammarCheck__GrammarResultWidget_ChangeEvent_Callback cb) { textgrammarcheck__grammarresultwidget_changeevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_Metric_Callback(TextGrammarCheck__GrammarResultWidget_Metric_Callback cb) { textgrammarcheck__grammarresultwidget_metric_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_InitPainter_Callback(TextGrammarCheck__GrammarResultWidget_InitPainter_Callback cb) { textgrammarcheck__grammarresultwidget_initpainter_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_Redirected_Callback(TextGrammarCheck__GrammarResultWidget_Redirected_Callback cb) { textgrammarcheck__grammarresultwidget_redirected_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_SharedPainter_Callback(TextGrammarCheck__GrammarResultWidget_SharedPainter_Callback cb) { textgrammarcheck__grammarresultwidget_sharedpainter_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_InputMethodEvent_Callback(TextGrammarCheck__GrammarResultWidget_InputMethodEvent_Callback cb) { textgrammarcheck__grammarresultwidget_inputmethodevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_InputMethodQuery_Callback(TextGrammarCheck__GrammarResultWidget_InputMethodQuery_Callback cb) { textgrammarcheck__grammarresultwidget_inputmethodquery_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_FocusNextPrevChild_Callback(TextGrammarCheck__GrammarResultWidget_FocusNextPrevChild_Callback cb) { textgrammarcheck__grammarresultwidget_focusnextprevchild_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_EventFilter_Callback(TextGrammarCheck__GrammarResultWidget_EventFilter_Callback cb) { textgrammarcheck__grammarresultwidget_eventfilter_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_TimerEvent_Callback(TextGrammarCheck__GrammarResultWidget_TimerEvent_Callback cb) { textgrammarcheck__grammarresultwidget_timerevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_ChildEvent_Callback(TextGrammarCheck__GrammarResultWidget_ChildEvent_Callback cb) { textgrammarcheck__grammarresultwidget_childevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_CustomEvent_Callback(TextGrammarCheck__GrammarResultWidget_CustomEvent_Callback cb) { textgrammarcheck__grammarresultwidget_customevent_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_ConnectNotify_Callback(TextGrammarCheck__GrammarResultWidget_ConnectNotify_Callback cb) { textgrammarcheck__grammarresultwidget_connectnotify_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_DisconnectNotify_Callback(TextGrammarCheck__GrammarResultWidget_DisconnectNotify_Callback cb) { textgrammarcheck__grammarresultwidget_disconnectnotify_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_UpdateMicroFocus_Callback(TextGrammarCheck__GrammarResultWidget_UpdateMicroFocus_Callback cb) { textgrammarcheck__grammarresultwidget_updatemicrofocus_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_Create_Callback(TextGrammarCheck__GrammarResultWidget_Create_Callback cb) { textgrammarcheck__grammarresultwidget_create_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_Destroy_Callback(TextGrammarCheck__GrammarResultWidget_Destroy_Callback cb) { textgrammarcheck__grammarresultwidget_destroy_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_FocusNextChild_Callback(TextGrammarCheck__GrammarResultWidget_FocusNextChild_Callback cb) { textgrammarcheck__grammarresultwidget_focusnextchild_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_FocusPreviousChild_Callback(TextGrammarCheck__GrammarResultWidget_FocusPreviousChild_Callback cb) { textgrammarcheck__grammarresultwidget_focuspreviouschild_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_Sender_Callback(TextGrammarCheck__GrammarResultWidget_Sender_Callback cb) { textgrammarcheck__grammarresultwidget_sender_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_SenderSignalIndex_Callback(TextGrammarCheck__GrammarResultWidget_SenderSignalIndex_Callback cb) { textgrammarcheck__grammarresultwidget_sendersignalindex_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_Receivers_Callback(TextGrammarCheck__GrammarResultWidget_Receivers_Callback cb) { textgrammarcheck__grammarresultwidget_receivers_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_IsSignalConnected_Callback(TextGrammarCheck__GrammarResultWidget_IsSignalConnected_Callback cb) { textgrammarcheck__grammarresultwidget_issignalconnected_callback = cb; }
    inline void setTextGrammarCheck__GrammarResultWidget_GetDecodedMetricF_Callback(TextGrammarCheck__GrammarResultWidget_GetDecodedMetricF_Callback cb) { textgrammarcheck__grammarresultwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextGrammarCheck__GrammarResultWidget_MetaObject_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_metaobject_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_Metacast_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_metacast_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_Metacall_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_metacall_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_CheckGrammar_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_checkgrammar_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_AddExtraWidget_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_addextrawidget_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_DevType_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_devtype_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_SetVisible_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_setvisible_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_SizeHint_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_sizehint_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_MinimumSizeHint_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_minimumsizehint_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_HeightForWidth_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_heightforwidth_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_HasHeightForWidth_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_hasheightforwidth_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_PaintEngine_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_paintengine_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_Event_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_event_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_MousePressEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_mousepressevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_MouseReleaseEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_mousereleaseevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_MouseDoubleClickEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_mousedoubleclickevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_MouseMoveEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_mousemoveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_WheelEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_wheelevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_KeyPressEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_keypressevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_KeyReleaseEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_keyreleaseevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_FocusInEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_focusinevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_FocusOutEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_focusoutevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_EnterEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_enterevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_LeaveEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_leaveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_PaintEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_paintevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_MoveEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_moveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_ResizeEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_resizeevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_CloseEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_closeevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_ContextMenuEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_contextmenuevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_TabletEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_tabletevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_ActionEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_actionevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_DragEnterEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_dragenterevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_DragMoveEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_dragmoveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_DragLeaveEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_dragleaveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_DropEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_dropevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_ShowEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_showevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_HideEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_hideevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_NativeEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_nativeevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_ChangeEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_changeevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_Metric_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_metric_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_InitPainter_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_initpainter_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_Redirected_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_redirected_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_SharedPainter_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_sharedpainter_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_InputMethodEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_inputmethodevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_InputMethodQuery_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_inputmethodquery_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_FocusNextPrevChild_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_focusnextprevchild_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_EventFilter_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_eventfilter_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_TimerEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_timerevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_ChildEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_childevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_CustomEvent_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_customevent_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_ConnectNotify_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_connectnotify_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_DisconnectNotify_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_disconnectnotify_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_UpdateMicroFocus_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_updatemicrofocus_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_Create_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_create_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_Destroy_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_destroy_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_FocusNextChild_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_focusnextchild_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_FocusPreviousChild_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_focuspreviouschild_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_Sender_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_sender_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_SenderSignalIndex_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_sendersignalindex_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_Receivers_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_receivers_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_IsSignalConnected_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_issignalconnected_isbase = value; }
    inline void setTextGrammarCheck__GrammarResultWidget_GetDecodedMetricF_IsBase(bool value) const { textgrammarcheck__grammarresultwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__grammarresultwidget_metaobject_isbase) {
            textgrammarcheck__grammarresultwidget_metaobject_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::metaObject();
        }
        auto metaobject_cb = textgrammarcheck__grammarresultwidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__grammarresultwidget_metacast_isbase) {
            textgrammarcheck__grammarresultwidget_metacast_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::qt_metacast(param1);
        }
        auto metacast_cb = textgrammarcheck__grammarresultwidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__grammarresultwidget_metacall_isbase) {
            textgrammarcheck__grammarresultwidget_metacall_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textgrammarcheck__grammarresultwidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammarResultWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkGrammar() override {
        auto checkgrammar_cb = textgrammarcheck__grammarresultwidget_checkgrammar_callback;
        if (checkgrammar_cb) {
            checkgrammar_cb();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void addExtraWidget() override {
        if (textgrammarcheck__grammarresultwidget_addextrawidget_isbase) {
            textgrammarcheck__grammarresultwidget_addextrawidget_isbase = false;
            TextGrammarCheck__GrammarResultWidget::addExtraWidget();
            return;
        }
        auto addextrawidget_cb = textgrammarcheck__grammarresultwidget_addextrawidget_callback;
        if (addextrawidget_cb) {
            addextrawidget_cb();
            return;
        }
        TextGrammarCheck__GrammarResultWidget::addExtraWidget();
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textgrammarcheck__grammarresultwidget_devtype_isbase) {
            textgrammarcheck__grammarresultwidget_devtype_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::devType();
        }
        auto devtype_cb = textgrammarcheck__grammarresultwidget_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammarResultWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textgrammarcheck__grammarresultwidget_setvisible_isbase) {
            textgrammarcheck__grammarresultwidget_setvisible_isbase = false;
            TextGrammarCheck__GrammarResultWidget::setVisible(visible);
            return;
        }
        auto setvisible_cb = textgrammarcheck__grammarresultwidget_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textgrammarcheck__grammarresultwidget_sizehint_isbase) {
            textgrammarcheck__grammarresultwidget_sizehint_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::sizeHint();
        }
        auto sizehint_cb = textgrammarcheck__grammarresultwidget_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textgrammarcheck__grammarresultwidget_minimumsizehint_isbase) {
            textgrammarcheck__grammarresultwidget_minimumsizehint_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::minimumSizeHint();
        }
        auto minimumsizehint_cb = textgrammarcheck__grammarresultwidget_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textgrammarcheck__grammarresultwidget_heightforwidth_isbase) {
            textgrammarcheck__grammarresultwidget_heightforwidth_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::heightForWidth(param1);
        }
        auto heightforwidth_cb = textgrammarcheck__grammarresultwidget_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammarResultWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textgrammarcheck__grammarresultwidget_hasheightforwidth_isbase) {
            textgrammarcheck__grammarresultwidget_hasheightforwidth_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = textgrammarcheck__grammarresultwidget_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textgrammarcheck__grammarresultwidget_paintengine_isbase) {
            textgrammarcheck__grammarresultwidget_paintengine_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::paintEngine();
        }
        auto paintengine_cb = textgrammarcheck__grammarresultwidget_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_event_isbase) {
            textgrammarcheck__grammarresultwidget_event_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::event(event);
        }
        auto event_cb = textgrammarcheck__grammarresultwidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_mousepressevent_isbase) {
            textgrammarcheck__grammarresultwidget_mousepressevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = textgrammarcheck__grammarresultwidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_mousereleaseevent_isbase) {
            textgrammarcheck__grammarresultwidget_mousereleaseevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = textgrammarcheck__grammarresultwidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_mousedoubleclickevent_isbase) {
            textgrammarcheck__grammarresultwidget_mousedoubleclickevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = textgrammarcheck__grammarresultwidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_mousemoveevent_isbase) {
            textgrammarcheck__grammarresultwidget_mousemoveevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = textgrammarcheck__grammarresultwidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_wheelevent_isbase) {
            textgrammarcheck__grammarresultwidget_wheelevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = textgrammarcheck__grammarresultwidget_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_keypressevent_isbase) {
            textgrammarcheck__grammarresultwidget_keypressevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = textgrammarcheck__grammarresultwidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_keyreleaseevent_isbase) {
            textgrammarcheck__grammarresultwidget_keyreleaseevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = textgrammarcheck__grammarresultwidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_focusinevent_isbase) {
            textgrammarcheck__grammarresultwidget_focusinevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = textgrammarcheck__grammarresultwidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_focusoutevent_isbase) {
            textgrammarcheck__grammarresultwidget_focusoutevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = textgrammarcheck__grammarresultwidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_enterevent_isbase) {
            textgrammarcheck__grammarresultwidget_enterevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::enterEvent(event);
            return;
        }
        auto enterevent_cb = textgrammarcheck__grammarresultwidget_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_leaveevent_isbase) {
            textgrammarcheck__grammarresultwidget_leaveevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = textgrammarcheck__grammarresultwidget_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_paintevent_isbase) {
            textgrammarcheck__grammarresultwidget_paintevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::paintEvent(event);
            return;
        }
        auto paintevent_cb = textgrammarcheck__grammarresultwidget_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_moveevent_isbase) {
            textgrammarcheck__grammarresultwidget_moveevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = textgrammarcheck__grammarresultwidget_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_resizeevent_isbase) {
            textgrammarcheck__grammarresultwidget_resizeevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = textgrammarcheck__grammarresultwidget_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_closeevent_isbase) {
            textgrammarcheck__grammarresultwidget_closeevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = textgrammarcheck__grammarresultwidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_contextmenuevent_isbase) {
            textgrammarcheck__grammarresultwidget_contextmenuevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = textgrammarcheck__grammarresultwidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_tabletevent_isbase) {
            textgrammarcheck__grammarresultwidget_tabletevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = textgrammarcheck__grammarresultwidget_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_actionevent_isbase) {
            textgrammarcheck__grammarresultwidget_actionevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::actionEvent(event);
            return;
        }
        auto actionevent_cb = textgrammarcheck__grammarresultwidget_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_dragenterevent_isbase) {
            textgrammarcheck__grammarresultwidget_dragenterevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = textgrammarcheck__grammarresultwidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_dragmoveevent_isbase) {
            textgrammarcheck__grammarresultwidget_dragmoveevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = textgrammarcheck__grammarresultwidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_dragleaveevent_isbase) {
            textgrammarcheck__grammarresultwidget_dragleaveevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = textgrammarcheck__grammarresultwidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_dropevent_isbase) {
            textgrammarcheck__grammarresultwidget_dropevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::dropEvent(event);
            return;
        }
        auto dropevent_cb = textgrammarcheck__grammarresultwidget_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_showevent_isbase) {
            textgrammarcheck__grammarresultwidget_showevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::showEvent(event);
            return;
        }
        auto showevent_cb = textgrammarcheck__grammarresultwidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_hideevent_isbase) {
            textgrammarcheck__grammarresultwidget_hideevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::hideEvent(event);
            return;
        }
        auto hideevent_cb = textgrammarcheck__grammarresultwidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textgrammarcheck__grammarresultwidget_nativeevent_isbase) {
            textgrammarcheck__grammarresultwidget_nativeevent_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = textgrammarcheck__grammarresultwidget_nativeevent_callback;
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
        return TextGrammarCheck__GrammarResultWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textgrammarcheck__grammarresultwidget_changeevent_isbase) {
            textgrammarcheck__grammarresultwidget_changeevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::changeEvent(param1);
            return;
        }
        auto changeevent_cb = textgrammarcheck__grammarresultwidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textgrammarcheck__grammarresultwidget_metric_isbase) {
            textgrammarcheck__grammarresultwidget_metric_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::metric(param1);
        }
        auto metric_cb = textgrammarcheck__grammarresultwidget_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammarResultWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textgrammarcheck__grammarresultwidget_initpainter_isbase) {
            textgrammarcheck__grammarresultwidget_initpainter_isbase = false;
            TextGrammarCheck__GrammarResultWidget::initPainter(painter);
            return;
        }
        auto initpainter_cb = textgrammarcheck__grammarresultwidget_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textgrammarcheck__grammarresultwidget_redirected_isbase) {
            textgrammarcheck__grammarresultwidget_redirected_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::redirected(offset);
        }
        auto redirected_cb = textgrammarcheck__grammarresultwidget_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textgrammarcheck__grammarresultwidget_sharedpainter_isbase) {
            textgrammarcheck__grammarresultwidget_sharedpainter_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::sharedPainter();
        }
        auto sharedpainter_cb = textgrammarcheck__grammarresultwidget_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textgrammarcheck__grammarresultwidget_inputmethodevent_isbase) {
            textgrammarcheck__grammarresultwidget_inputmethodevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = textgrammarcheck__grammarresultwidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textgrammarcheck__grammarresultwidget_inputmethodquery_isbase) {
            textgrammarcheck__grammarresultwidget_inputmethodquery_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = textgrammarcheck__grammarresultwidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textgrammarcheck__grammarresultwidget_focusnextprevchild_isbase) {
            textgrammarcheck__grammarresultwidget_focusnextprevchild_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = textgrammarcheck__grammarresultwidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_eventfilter_isbase) {
            textgrammarcheck__grammarresultwidget_eventfilter_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::eventFilter(watched, event);
        }
        auto eventfilter_cb = textgrammarcheck__grammarresultwidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_timerevent_isbase) {
            textgrammarcheck__grammarresultwidget_timerevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::timerEvent(event);
            return;
        }
        auto timerevent_cb = textgrammarcheck__grammarresultwidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_childevent_isbase) {
            textgrammarcheck__grammarresultwidget_childevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::childEvent(event);
            return;
        }
        auto childevent_cb = textgrammarcheck__grammarresultwidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_customevent_isbase) {
            textgrammarcheck__grammarresultwidget_customevent_isbase = false;
            TextGrammarCheck__GrammarResultWidget::customEvent(event);
            return;
        }
        auto customevent_cb = textgrammarcheck__grammarresultwidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammarresultwidget_connectnotify_isbase) {
            textgrammarcheck__grammarresultwidget_connectnotify_isbase = false;
            TextGrammarCheck__GrammarResultWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textgrammarcheck__grammarresultwidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammarresultwidget_disconnectnotify_isbase) {
            textgrammarcheck__grammarresultwidget_disconnectnotify_isbase = false;
            TextGrammarCheck__GrammarResultWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textgrammarcheck__grammarresultwidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (textgrammarcheck__grammarresultwidget_updatemicrofocus_isbase) {
            textgrammarcheck__grammarresultwidget_updatemicrofocus_isbase = false;
            TextGrammarCheck__GrammarResultWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = textgrammarcheck__grammarresultwidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextGrammarCheck__GrammarResultWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (textgrammarcheck__grammarresultwidget_create_isbase) {
            textgrammarcheck__grammarresultwidget_create_isbase = false;
            TextGrammarCheck__GrammarResultWidget::create();
            return;
        }
        auto create_cb = textgrammarcheck__grammarresultwidget_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextGrammarCheck__GrammarResultWidget::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (textgrammarcheck__grammarresultwidget_destroy_isbase) {
            textgrammarcheck__grammarresultwidget_destroy_isbase = false;
            TextGrammarCheck__GrammarResultWidget::destroy();
            return;
        }
        auto destroy_cb = textgrammarcheck__grammarresultwidget_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextGrammarCheck__GrammarResultWidget::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (textgrammarcheck__grammarresultwidget_focusnextchild_isbase) {
            textgrammarcheck__grammarresultwidget_focusnextchild_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::focusNextChild();
        }
        auto focusnextchild_cb = textgrammarcheck__grammarresultwidget_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (textgrammarcheck__grammarresultwidget_focuspreviouschild_isbase) {
            textgrammarcheck__grammarresultwidget_focuspreviouschild_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::focusPreviousChild();
        }
        auto focuspreviouschild_cb = textgrammarcheck__grammarresultwidget_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textgrammarcheck__grammarresultwidget_sender_isbase) {
            textgrammarcheck__grammarresultwidget_sender_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::sender();
        }
        auto sender_cb = textgrammarcheck__grammarresultwidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textgrammarcheck__grammarresultwidget_sendersignalindex_isbase) {
            textgrammarcheck__grammarresultwidget_sendersignalindex_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = textgrammarcheck__grammarresultwidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammarResultWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textgrammarcheck__grammarresultwidget_receivers_isbase) {
            textgrammarcheck__grammarresultwidget_receivers_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::receivers(signal);
        }
        auto receivers_cb = textgrammarcheck__grammarresultwidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammarResultWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textgrammarcheck__grammarresultwidget_issignalconnected_isbase) {
            textgrammarcheck__grammarresultwidget_issignalconnected_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textgrammarcheck__grammarresultwidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (textgrammarcheck__grammarresultwidget_getdecodedmetricf_isbase) {
            textgrammarcheck__grammarresultwidget_getdecodedmetricf_isbase = false;
            return TextGrammarCheck__GrammarResultWidget::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = textgrammarcheck__grammarresultwidget_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextGrammarCheck__GrammarResultWidget::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void TextGrammarCheck__GrammarResultWidget_AddExtraWidget(TextGrammarCheck::GrammarResultWidget* self);
    friend void TextGrammarCheck__GrammarResultWidget_SuperAddExtraWidget(TextGrammarCheck::GrammarResultWidget* self);
    friend bool TextGrammarCheck__GrammarResultWidget_Event(TextGrammarCheck::GrammarResultWidget* self, QEvent* event);
    friend bool TextGrammarCheck__GrammarResultWidget_SuperEvent(TextGrammarCheck::GrammarResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_MousePressEvent(TextGrammarCheck::GrammarResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperMousePressEvent(TextGrammarCheck::GrammarResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_MouseReleaseEvent(TextGrammarCheck::GrammarResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperMouseReleaseEvent(TextGrammarCheck::GrammarResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_MouseDoubleClickEvent(TextGrammarCheck::GrammarResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperMouseDoubleClickEvent(TextGrammarCheck::GrammarResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_MouseMoveEvent(TextGrammarCheck::GrammarResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperMouseMoveEvent(TextGrammarCheck::GrammarResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_WheelEvent(TextGrammarCheck::GrammarResultWidget* self, QWheelEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperWheelEvent(TextGrammarCheck::GrammarResultWidget* self, QWheelEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_KeyPressEvent(TextGrammarCheck::GrammarResultWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperKeyPressEvent(TextGrammarCheck::GrammarResultWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_KeyReleaseEvent(TextGrammarCheck::GrammarResultWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperKeyReleaseEvent(TextGrammarCheck::GrammarResultWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_FocusInEvent(TextGrammarCheck::GrammarResultWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperFocusInEvent(TextGrammarCheck::GrammarResultWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_FocusOutEvent(TextGrammarCheck::GrammarResultWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperFocusOutEvent(TextGrammarCheck::GrammarResultWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_EnterEvent(TextGrammarCheck::GrammarResultWidget* self, QEnterEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperEnterEvent(TextGrammarCheck::GrammarResultWidget* self, QEnterEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_LeaveEvent(TextGrammarCheck::GrammarResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperLeaveEvent(TextGrammarCheck::GrammarResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_PaintEvent(TextGrammarCheck::GrammarResultWidget* self, QPaintEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperPaintEvent(TextGrammarCheck::GrammarResultWidget* self, QPaintEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_MoveEvent(TextGrammarCheck::GrammarResultWidget* self, QMoveEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperMoveEvent(TextGrammarCheck::GrammarResultWidget* self, QMoveEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_ResizeEvent(TextGrammarCheck::GrammarResultWidget* self, QResizeEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperResizeEvent(TextGrammarCheck::GrammarResultWidget* self, QResizeEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_CloseEvent(TextGrammarCheck::GrammarResultWidget* self, QCloseEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperCloseEvent(TextGrammarCheck::GrammarResultWidget* self, QCloseEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_ContextMenuEvent(TextGrammarCheck::GrammarResultWidget* self, QContextMenuEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperContextMenuEvent(TextGrammarCheck::GrammarResultWidget* self, QContextMenuEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_TabletEvent(TextGrammarCheck::GrammarResultWidget* self, QTabletEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperTabletEvent(TextGrammarCheck::GrammarResultWidget* self, QTabletEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_ActionEvent(TextGrammarCheck::GrammarResultWidget* self, QActionEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperActionEvent(TextGrammarCheck::GrammarResultWidget* self, QActionEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_DragEnterEvent(TextGrammarCheck::GrammarResultWidget* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperDragEnterEvent(TextGrammarCheck::GrammarResultWidget* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_DragMoveEvent(TextGrammarCheck::GrammarResultWidget* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperDragMoveEvent(TextGrammarCheck::GrammarResultWidget* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_DragLeaveEvent(TextGrammarCheck::GrammarResultWidget* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperDragLeaveEvent(TextGrammarCheck::GrammarResultWidget* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_DropEvent(TextGrammarCheck::GrammarResultWidget* self, QDropEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperDropEvent(TextGrammarCheck::GrammarResultWidget* self, QDropEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_ShowEvent(TextGrammarCheck::GrammarResultWidget* self, QShowEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperShowEvent(TextGrammarCheck::GrammarResultWidget* self, QShowEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_HideEvent(TextGrammarCheck::GrammarResultWidget* self, QHideEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperHideEvent(TextGrammarCheck::GrammarResultWidget* self, QHideEvent* event);
    friend bool TextGrammarCheck__GrammarResultWidget_NativeEvent(TextGrammarCheck::GrammarResultWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextGrammarCheck__GrammarResultWidget_SuperNativeEvent(TextGrammarCheck::GrammarResultWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextGrammarCheck__GrammarResultWidget_ChangeEvent(TextGrammarCheck::GrammarResultWidget* self, QEvent* param1);
    friend void TextGrammarCheck__GrammarResultWidget_SuperChangeEvent(TextGrammarCheck::GrammarResultWidget* self, QEvent* param1);
    friend int TextGrammarCheck__GrammarResultWidget_Metric(const TextGrammarCheck::GrammarResultWidget* self, int param1);
    friend int TextGrammarCheck__GrammarResultWidget_SuperMetric(const TextGrammarCheck::GrammarResultWidget* self, int param1);
    friend void TextGrammarCheck__GrammarResultWidget_InitPainter(const TextGrammarCheck::GrammarResultWidget* self, QPainter* painter);
    friend void TextGrammarCheck__GrammarResultWidget_SuperInitPainter(const TextGrammarCheck::GrammarResultWidget* self, QPainter* painter);
    friend QPaintDevice* TextGrammarCheck__GrammarResultWidget_Redirected(const TextGrammarCheck::GrammarResultWidget* self, QPoint* offset);
    friend QPaintDevice* TextGrammarCheck__GrammarResultWidget_SuperRedirected(const TextGrammarCheck::GrammarResultWidget* self, QPoint* offset);
    friend QPainter* TextGrammarCheck__GrammarResultWidget_SharedPainter(const TextGrammarCheck::GrammarResultWidget* self);
    friend QPainter* TextGrammarCheck__GrammarResultWidget_SuperSharedPainter(const TextGrammarCheck::GrammarResultWidget* self);
    friend void TextGrammarCheck__GrammarResultWidget_InputMethodEvent(TextGrammarCheck::GrammarResultWidget* self, QInputMethodEvent* param1);
    friend void TextGrammarCheck__GrammarResultWidget_SuperInputMethodEvent(TextGrammarCheck::GrammarResultWidget* self, QInputMethodEvent* param1);
    friend bool TextGrammarCheck__GrammarResultWidget_FocusNextPrevChild(TextGrammarCheck::GrammarResultWidget* self, bool next);
    friend bool TextGrammarCheck__GrammarResultWidget_SuperFocusNextPrevChild(TextGrammarCheck::GrammarResultWidget* self, bool next);
    friend void TextGrammarCheck__GrammarResultWidget_TimerEvent(TextGrammarCheck::GrammarResultWidget* self, QTimerEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperTimerEvent(TextGrammarCheck::GrammarResultWidget* self, QTimerEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_ChildEvent(TextGrammarCheck::GrammarResultWidget* self, QChildEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperChildEvent(TextGrammarCheck::GrammarResultWidget* self, QChildEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_CustomEvent(TextGrammarCheck::GrammarResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperCustomEvent(TextGrammarCheck::GrammarResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_ConnectNotify(TextGrammarCheck::GrammarResultWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammarResultWidget_SuperConnectNotify(TextGrammarCheck::GrammarResultWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammarResultWidget_DisconnectNotify(TextGrammarCheck::GrammarResultWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammarResultWidget_SuperDisconnectNotify(TextGrammarCheck::GrammarResultWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammarResultWidget_UpdateMicroFocus(TextGrammarCheck::GrammarResultWidget* self);
    friend void TextGrammarCheck__GrammarResultWidget_SuperUpdateMicroFocus(TextGrammarCheck::GrammarResultWidget* self);
    friend void TextGrammarCheck__GrammarResultWidget_Create(TextGrammarCheck::GrammarResultWidget* self);
    friend void TextGrammarCheck__GrammarResultWidget_SuperCreate(TextGrammarCheck::GrammarResultWidget* self);
    friend void TextGrammarCheck__GrammarResultWidget_Destroy(TextGrammarCheck::GrammarResultWidget* self);
    friend void TextGrammarCheck__GrammarResultWidget_SuperDestroy(TextGrammarCheck::GrammarResultWidget* self);
    friend bool TextGrammarCheck__GrammarResultWidget_FocusNextChild(TextGrammarCheck::GrammarResultWidget* self);
    friend bool TextGrammarCheck__GrammarResultWidget_SuperFocusNextChild(TextGrammarCheck::GrammarResultWidget* self);
    friend bool TextGrammarCheck__GrammarResultWidget_FocusPreviousChild(TextGrammarCheck::GrammarResultWidget* self);
    friend bool TextGrammarCheck__GrammarResultWidget_SuperFocusPreviousChild(TextGrammarCheck::GrammarResultWidget* self);
    friend QObject* TextGrammarCheck__GrammarResultWidget_Sender(const TextGrammarCheck::GrammarResultWidget* self);
    friend QObject* TextGrammarCheck__GrammarResultWidget_SuperSender(const TextGrammarCheck::GrammarResultWidget* self);
    friend int TextGrammarCheck__GrammarResultWidget_SenderSignalIndex(const TextGrammarCheck::GrammarResultWidget* self);
    friend int TextGrammarCheck__GrammarResultWidget_SuperSenderSignalIndex(const TextGrammarCheck::GrammarResultWidget* self);
    friend int TextGrammarCheck__GrammarResultWidget_Receivers(const TextGrammarCheck::GrammarResultWidget* self, const char* signal);
    friend int TextGrammarCheck__GrammarResultWidget_SuperReceivers(const TextGrammarCheck::GrammarResultWidget* self, const char* signal);
    friend bool TextGrammarCheck__GrammarResultWidget_IsSignalConnected(const TextGrammarCheck::GrammarResultWidget* self, const QMetaMethod* signal);
    friend bool TextGrammarCheck__GrammarResultWidget_SuperIsSignalConnected(const TextGrammarCheck::GrammarResultWidget* self, const QMetaMethod* signal);
    friend double TextGrammarCheck__GrammarResultWidget_GetDecodedMetricF(const TextGrammarCheck::GrammarResultWidget* self, int metricA, int metricB);
    friend double TextGrammarCheck__GrammarResultWidget_SuperGetDecodedMetricF(const TextGrammarCheck::GrammarResultWidget* self, int metricA, int metricB);
};

#endif
