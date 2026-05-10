#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALLANGUAGETOOLRESULTWIDGET_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALLANGUAGETOOLRESULTWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::LanguageToolResultWidget so that we can call protected methods
class VirtualTextGrammarCheckLanguageToolResultWidget final : public TextGrammarCheck::LanguageToolResultWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualTextGrammarCheckLanguageToolResultWidget = true;

    // Virtual class public types (including callbacks)
    using TextGrammarCheck__LanguageToolResultWidget_MetaObject_Callback = QMetaObject* (*)();
    using TextGrammarCheck__LanguageToolResultWidget_Metacast_Callback = void* (*)(TextGrammarCheck__LanguageToolResultWidget*, const char*);
    using TextGrammarCheck__LanguageToolResultWidget_Metacall_Callback = int (*)(TextGrammarCheck__LanguageToolResultWidget*, int, int, void**);
    using TextGrammarCheck__LanguageToolResultWidget_CheckGrammar_Callback = void (*)();
    using TextGrammarCheck__LanguageToolResultWidget_AddExtraWidget_Callback = void (*)();
    using TextGrammarCheck__LanguageToolResultWidget_DevType_Callback = int (*)();
    using TextGrammarCheck__LanguageToolResultWidget_SetVisible_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, bool);
    using TextGrammarCheck__LanguageToolResultWidget_SizeHint_Callback = QSize* (*)();
    using TextGrammarCheck__LanguageToolResultWidget_MinimumSizeHint_Callback = QSize* (*)();
    using TextGrammarCheck__LanguageToolResultWidget_HeightForWidth_Callback = int (*)(const TextGrammarCheck__LanguageToolResultWidget*, int);
    using TextGrammarCheck__LanguageToolResultWidget_HasHeightForWidth_Callback = bool (*)();
    using TextGrammarCheck__LanguageToolResultWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using TextGrammarCheck__LanguageToolResultWidget_Event_Callback = bool (*)(TextGrammarCheck__LanguageToolResultWidget*, QEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_MousePressEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_MouseReleaseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_MouseDoubleClickEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_MouseMoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_WheelEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QWheelEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_KeyPressEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QKeyEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_KeyReleaseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QKeyEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_FocusInEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QFocusEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_FocusOutEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QFocusEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_EnterEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QEnterEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_LeaveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_PaintEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QPaintEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_MoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QMoveEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_ResizeEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QResizeEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_CloseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QCloseEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_ContextMenuEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QContextMenuEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_TabletEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QTabletEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_ActionEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QActionEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_DragEnterEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QDragEnterEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_DragMoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QDragMoveEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_DragLeaveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QDragLeaveEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_DropEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QDropEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_ShowEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QShowEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_HideEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QHideEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_NativeEvent_Callback = bool (*)(TextGrammarCheck__LanguageToolResultWidget*, libqt_string, void*, intptr_t*);
    using TextGrammarCheck__LanguageToolResultWidget_ChangeEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_Metric_Callback = int (*)(const TextGrammarCheck__LanguageToolResultWidget*, int);
    using TextGrammarCheck__LanguageToolResultWidget_InitPainter_Callback = void (*)(const TextGrammarCheck__LanguageToolResultWidget*, QPainter*);
    using TextGrammarCheck__LanguageToolResultWidget_Redirected_Callback = QPaintDevice* (*)(const TextGrammarCheck__LanguageToolResultWidget*, QPoint*);
    using TextGrammarCheck__LanguageToolResultWidget_SharedPainter_Callback = QPainter* (*)();
    using TextGrammarCheck__LanguageToolResultWidget_InputMethodEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QInputMethodEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_InputMethodQuery_Callback = QVariant* (*)(const TextGrammarCheck__LanguageToolResultWidget*, int);
    using TextGrammarCheck__LanguageToolResultWidget_FocusNextPrevChild_Callback = bool (*)(TextGrammarCheck__LanguageToolResultWidget*, bool);
    using TextGrammarCheck__LanguageToolResultWidget_EventFilter_Callback = bool (*)(TextGrammarCheck__LanguageToolResultWidget*, QObject*, QEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_TimerEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QTimerEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_ChildEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QChildEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_CustomEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_ConnectNotify_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QMetaMethod*);
    using TextGrammarCheck__LanguageToolResultWidget_DisconnectNotify_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QMetaMethod*);
    using TextGrammarCheck__LanguageToolResultWidget_UpdateMicroFocus_Callback = void (*)();
    using TextGrammarCheck__LanguageToolResultWidget_Create_Callback = void (*)();
    using TextGrammarCheck__LanguageToolResultWidget_Destroy_Callback = void (*)();
    using TextGrammarCheck__LanguageToolResultWidget_FocusNextChild_Callback = bool (*)();
    using TextGrammarCheck__LanguageToolResultWidget_FocusPreviousChild_Callback = bool (*)();
    using TextGrammarCheck__LanguageToolResultWidget_Sender_Callback = QObject* (*)();
    using TextGrammarCheck__LanguageToolResultWidget_SenderSignalIndex_Callback = int (*)();
    using TextGrammarCheck__LanguageToolResultWidget_Receivers_Callback = int (*)(const TextGrammarCheck__LanguageToolResultWidget*, const char*);
    using TextGrammarCheck__LanguageToolResultWidget_IsSignalConnected_Callback = bool (*)(const TextGrammarCheck__LanguageToolResultWidget*, QMetaMethod*);
    using TextGrammarCheck__LanguageToolResultWidget_GetDecodedMetricF_Callback = double (*)(const TextGrammarCheck__LanguageToolResultWidget*, int, int);

  protected:
    // Instance callback storage
    TextGrammarCheck__LanguageToolResultWidget_MetaObject_Callback textgrammarcheck__languagetoolresultwidget_metaobject_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_Metacast_Callback textgrammarcheck__languagetoolresultwidget_metacast_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_Metacall_Callback textgrammarcheck__languagetoolresultwidget_metacall_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_CheckGrammar_Callback textgrammarcheck__languagetoolresultwidget_checkgrammar_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_AddExtraWidget_Callback textgrammarcheck__languagetoolresultwidget_addextrawidget_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_DevType_Callback textgrammarcheck__languagetoolresultwidget_devtype_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_SetVisible_Callback textgrammarcheck__languagetoolresultwidget_setvisible_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_SizeHint_Callback textgrammarcheck__languagetoolresultwidget_sizehint_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_MinimumSizeHint_Callback textgrammarcheck__languagetoolresultwidget_minimumsizehint_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_HeightForWidth_Callback textgrammarcheck__languagetoolresultwidget_heightforwidth_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_HasHeightForWidth_Callback textgrammarcheck__languagetoolresultwidget_hasheightforwidth_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_PaintEngine_Callback textgrammarcheck__languagetoolresultwidget_paintengine_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_Event_Callback textgrammarcheck__languagetoolresultwidget_event_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_MousePressEvent_Callback textgrammarcheck__languagetoolresultwidget_mousepressevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_MouseReleaseEvent_Callback textgrammarcheck__languagetoolresultwidget_mousereleaseevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_MouseDoubleClickEvent_Callback textgrammarcheck__languagetoolresultwidget_mousedoubleclickevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_MouseMoveEvent_Callback textgrammarcheck__languagetoolresultwidget_mousemoveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_WheelEvent_Callback textgrammarcheck__languagetoolresultwidget_wheelevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_KeyPressEvent_Callback textgrammarcheck__languagetoolresultwidget_keypressevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_KeyReleaseEvent_Callback textgrammarcheck__languagetoolresultwidget_keyreleaseevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_FocusInEvent_Callback textgrammarcheck__languagetoolresultwidget_focusinevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_FocusOutEvent_Callback textgrammarcheck__languagetoolresultwidget_focusoutevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_EnterEvent_Callback textgrammarcheck__languagetoolresultwidget_enterevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_LeaveEvent_Callback textgrammarcheck__languagetoolresultwidget_leaveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_PaintEvent_Callback textgrammarcheck__languagetoolresultwidget_paintevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_MoveEvent_Callback textgrammarcheck__languagetoolresultwidget_moveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_ResizeEvent_Callback textgrammarcheck__languagetoolresultwidget_resizeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_CloseEvent_Callback textgrammarcheck__languagetoolresultwidget_closeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_ContextMenuEvent_Callback textgrammarcheck__languagetoolresultwidget_contextmenuevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_TabletEvent_Callback textgrammarcheck__languagetoolresultwidget_tabletevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_ActionEvent_Callback textgrammarcheck__languagetoolresultwidget_actionevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_DragEnterEvent_Callback textgrammarcheck__languagetoolresultwidget_dragenterevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_DragMoveEvent_Callback textgrammarcheck__languagetoolresultwidget_dragmoveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_DragLeaveEvent_Callback textgrammarcheck__languagetoolresultwidget_dragleaveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_DropEvent_Callback textgrammarcheck__languagetoolresultwidget_dropevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_ShowEvent_Callback textgrammarcheck__languagetoolresultwidget_showevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_HideEvent_Callback textgrammarcheck__languagetoolresultwidget_hideevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_NativeEvent_Callback textgrammarcheck__languagetoolresultwidget_nativeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_ChangeEvent_Callback textgrammarcheck__languagetoolresultwidget_changeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_Metric_Callback textgrammarcheck__languagetoolresultwidget_metric_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_InitPainter_Callback textgrammarcheck__languagetoolresultwidget_initpainter_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_Redirected_Callback textgrammarcheck__languagetoolresultwidget_redirected_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_SharedPainter_Callback textgrammarcheck__languagetoolresultwidget_sharedpainter_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_InputMethodEvent_Callback textgrammarcheck__languagetoolresultwidget_inputmethodevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_InputMethodQuery_Callback textgrammarcheck__languagetoolresultwidget_inputmethodquery_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_FocusNextPrevChild_Callback textgrammarcheck__languagetoolresultwidget_focusnextprevchild_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_EventFilter_Callback textgrammarcheck__languagetoolresultwidget_eventfilter_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_TimerEvent_Callback textgrammarcheck__languagetoolresultwidget_timerevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_ChildEvent_Callback textgrammarcheck__languagetoolresultwidget_childevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_CustomEvent_Callback textgrammarcheck__languagetoolresultwidget_customevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_ConnectNotify_Callback textgrammarcheck__languagetoolresultwidget_connectnotify_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_DisconnectNotify_Callback textgrammarcheck__languagetoolresultwidget_disconnectnotify_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_UpdateMicroFocus_Callback textgrammarcheck__languagetoolresultwidget_updatemicrofocus_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_Create_Callback textgrammarcheck__languagetoolresultwidget_create_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_Destroy_Callback textgrammarcheck__languagetoolresultwidget_destroy_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_FocusNextChild_Callback textgrammarcheck__languagetoolresultwidget_focusnextchild_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_FocusPreviousChild_Callback textgrammarcheck__languagetoolresultwidget_focuspreviouschild_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_Sender_Callback textgrammarcheck__languagetoolresultwidget_sender_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_SenderSignalIndex_Callback textgrammarcheck__languagetoolresultwidget_sendersignalindex_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_Receivers_Callback textgrammarcheck__languagetoolresultwidget_receivers_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_IsSignalConnected_Callback textgrammarcheck__languagetoolresultwidget_issignalconnected_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_GetDecodedMetricF_Callback textgrammarcheck__languagetoolresultwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool textgrammarcheck__languagetoolresultwidget_metaobject_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_metacast_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_metacall_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_checkgrammar_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_addextrawidget_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_devtype_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_setvisible_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_sizehint_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_minimumsizehint_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_heightforwidth_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_hasheightforwidth_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_paintengine_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_event_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_mousepressevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_mousereleaseevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_mousedoubleclickevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_mousemoveevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_wheelevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_keypressevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_keyreleaseevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_focusinevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_focusoutevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_enterevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_leaveevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_paintevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_moveevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_resizeevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_closeevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_contextmenuevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_tabletevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_actionevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_dragenterevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_dragmoveevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_dragleaveevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_dropevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_showevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_hideevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_nativeevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_changeevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_metric_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_initpainter_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_redirected_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_sharedpainter_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_inputmethodevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_inputmethodquery_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_focusnextprevchild_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_eventfilter_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_timerevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_childevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_customevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_connectnotify_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_disconnectnotify_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_updatemicrofocus_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_create_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_destroy_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_focusnextchild_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_focuspreviouschild_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_sender_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_sendersignalindex_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_receivers_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_issignalconnected_isbase = false;
    mutable bool textgrammarcheck__languagetoolresultwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualTextGrammarCheckLanguageToolResultWidget(QWidget* parent) : TextGrammarCheck::LanguageToolResultWidget(parent) {};
    VirtualTextGrammarCheckLanguageToolResultWidget() : TextGrammarCheck::LanguageToolResultWidget() {};

    // Callback setters
    inline void setTextGrammarCheck__LanguageToolResultWidget_MetaObject_Callback(TextGrammarCheck__LanguageToolResultWidget_MetaObject_Callback cb) { textgrammarcheck__languagetoolresultwidget_metaobject_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_Metacast_Callback(TextGrammarCheck__LanguageToolResultWidget_Metacast_Callback cb) { textgrammarcheck__languagetoolresultwidget_metacast_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_Metacall_Callback(TextGrammarCheck__LanguageToolResultWidget_Metacall_Callback cb) { textgrammarcheck__languagetoolresultwidget_metacall_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_CheckGrammar_Callback(TextGrammarCheck__LanguageToolResultWidget_CheckGrammar_Callback cb) { textgrammarcheck__languagetoolresultwidget_checkgrammar_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_AddExtraWidget_Callback(TextGrammarCheck__LanguageToolResultWidget_AddExtraWidget_Callback cb) { textgrammarcheck__languagetoolresultwidget_addextrawidget_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_DevType_Callback(TextGrammarCheck__LanguageToolResultWidget_DevType_Callback cb) { textgrammarcheck__languagetoolresultwidget_devtype_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_SetVisible_Callback(TextGrammarCheck__LanguageToolResultWidget_SetVisible_Callback cb) { textgrammarcheck__languagetoolresultwidget_setvisible_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_SizeHint_Callback(TextGrammarCheck__LanguageToolResultWidget_SizeHint_Callback cb) { textgrammarcheck__languagetoolresultwidget_sizehint_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_MinimumSizeHint_Callback(TextGrammarCheck__LanguageToolResultWidget_MinimumSizeHint_Callback cb) { textgrammarcheck__languagetoolresultwidget_minimumsizehint_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_HeightForWidth_Callback(TextGrammarCheck__LanguageToolResultWidget_HeightForWidth_Callback cb) { textgrammarcheck__languagetoolresultwidget_heightforwidth_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_HasHeightForWidth_Callback(TextGrammarCheck__LanguageToolResultWidget_HasHeightForWidth_Callback cb) { textgrammarcheck__languagetoolresultwidget_hasheightforwidth_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_PaintEngine_Callback(TextGrammarCheck__LanguageToolResultWidget_PaintEngine_Callback cb) { textgrammarcheck__languagetoolresultwidget_paintengine_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_Event_Callback(TextGrammarCheck__LanguageToolResultWidget_Event_Callback cb) { textgrammarcheck__languagetoolresultwidget_event_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_MousePressEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_MousePressEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_mousepressevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_MouseReleaseEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_MouseReleaseEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_mousereleaseevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_MouseDoubleClickEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_MouseDoubleClickEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_mousedoubleclickevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_MouseMoveEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_MouseMoveEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_mousemoveevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_WheelEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_WheelEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_wheelevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_KeyPressEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_KeyPressEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_keypressevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_KeyReleaseEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_KeyReleaseEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_keyreleaseevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_FocusInEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_FocusInEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_focusinevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_FocusOutEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_FocusOutEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_focusoutevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_EnterEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_EnterEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_enterevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_LeaveEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_LeaveEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_leaveevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_PaintEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_PaintEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_paintevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_MoveEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_MoveEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_moveevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_ResizeEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_ResizeEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_resizeevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_CloseEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_CloseEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_closeevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_ContextMenuEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_ContextMenuEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_contextmenuevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_TabletEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_TabletEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_tabletevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_ActionEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_ActionEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_actionevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_DragEnterEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_DragEnterEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_dragenterevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_DragMoveEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_DragMoveEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_dragmoveevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_DragLeaveEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_DragLeaveEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_dragleaveevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_DropEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_DropEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_dropevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_ShowEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_ShowEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_showevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_HideEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_HideEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_hideevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_NativeEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_NativeEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_nativeevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_ChangeEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_ChangeEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_changeevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_Metric_Callback(TextGrammarCheck__LanguageToolResultWidget_Metric_Callback cb) { textgrammarcheck__languagetoolresultwidget_metric_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_InitPainter_Callback(TextGrammarCheck__LanguageToolResultWidget_InitPainter_Callback cb) { textgrammarcheck__languagetoolresultwidget_initpainter_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_Redirected_Callback(TextGrammarCheck__LanguageToolResultWidget_Redirected_Callback cb) { textgrammarcheck__languagetoolresultwidget_redirected_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_SharedPainter_Callback(TextGrammarCheck__LanguageToolResultWidget_SharedPainter_Callback cb) { textgrammarcheck__languagetoolresultwidget_sharedpainter_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_InputMethodEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_InputMethodEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_inputmethodevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_InputMethodQuery_Callback(TextGrammarCheck__LanguageToolResultWidget_InputMethodQuery_Callback cb) { textgrammarcheck__languagetoolresultwidget_inputmethodquery_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_FocusNextPrevChild_Callback(TextGrammarCheck__LanguageToolResultWidget_FocusNextPrevChild_Callback cb) { textgrammarcheck__languagetoolresultwidget_focusnextprevchild_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_EventFilter_Callback(TextGrammarCheck__LanguageToolResultWidget_EventFilter_Callback cb) { textgrammarcheck__languagetoolresultwidget_eventfilter_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_TimerEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_TimerEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_timerevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_ChildEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_ChildEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_childevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_CustomEvent_Callback(TextGrammarCheck__LanguageToolResultWidget_CustomEvent_Callback cb) { textgrammarcheck__languagetoolresultwidget_customevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_ConnectNotify_Callback(TextGrammarCheck__LanguageToolResultWidget_ConnectNotify_Callback cb) { textgrammarcheck__languagetoolresultwidget_connectnotify_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_DisconnectNotify_Callback(TextGrammarCheck__LanguageToolResultWidget_DisconnectNotify_Callback cb) { textgrammarcheck__languagetoolresultwidget_disconnectnotify_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_UpdateMicroFocus_Callback(TextGrammarCheck__LanguageToolResultWidget_UpdateMicroFocus_Callback cb) { textgrammarcheck__languagetoolresultwidget_updatemicrofocus_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_Create_Callback(TextGrammarCheck__LanguageToolResultWidget_Create_Callback cb) { textgrammarcheck__languagetoolresultwidget_create_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_Destroy_Callback(TextGrammarCheck__LanguageToolResultWidget_Destroy_Callback cb) { textgrammarcheck__languagetoolresultwidget_destroy_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_FocusNextChild_Callback(TextGrammarCheck__LanguageToolResultWidget_FocusNextChild_Callback cb) { textgrammarcheck__languagetoolresultwidget_focusnextchild_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_FocusPreviousChild_Callback(TextGrammarCheck__LanguageToolResultWidget_FocusPreviousChild_Callback cb) { textgrammarcheck__languagetoolresultwidget_focuspreviouschild_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_Sender_Callback(TextGrammarCheck__LanguageToolResultWidget_Sender_Callback cb) { textgrammarcheck__languagetoolresultwidget_sender_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_SenderSignalIndex_Callback(TextGrammarCheck__LanguageToolResultWidget_SenderSignalIndex_Callback cb) { textgrammarcheck__languagetoolresultwidget_sendersignalindex_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_Receivers_Callback(TextGrammarCheck__LanguageToolResultWidget_Receivers_Callback cb) { textgrammarcheck__languagetoolresultwidget_receivers_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_IsSignalConnected_Callback(TextGrammarCheck__LanguageToolResultWidget_IsSignalConnected_Callback cb) { textgrammarcheck__languagetoolresultwidget_issignalconnected_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_GetDecodedMetricF_Callback(TextGrammarCheck__LanguageToolResultWidget_GetDecodedMetricF_Callback cb) { textgrammarcheck__languagetoolresultwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextGrammarCheck__LanguageToolResultWidget_MetaObject_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_metaobject_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_Metacast_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_metacast_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_Metacall_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_metacall_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_CheckGrammar_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_checkgrammar_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_AddExtraWidget_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_addextrawidget_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_DevType_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_devtype_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_SetVisible_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_setvisible_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_SizeHint_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_sizehint_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_MinimumSizeHint_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_minimumsizehint_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_HeightForWidth_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_heightforwidth_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_HasHeightForWidth_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_hasheightforwidth_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_PaintEngine_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_paintengine_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_Event_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_event_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_MousePressEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_mousepressevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_MouseReleaseEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_mousereleaseevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_MouseDoubleClickEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_mousedoubleclickevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_MouseMoveEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_mousemoveevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_WheelEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_wheelevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_KeyPressEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_keypressevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_KeyReleaseEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_keyreleaseevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_FocusInEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_focusinevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_FocusOutEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_focusoutevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_EnterEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_enterevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_LeaveEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_leaveevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_PaintEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_paintevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_MoveEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_moveevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_ResizeEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_resizeevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_CloseEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_closeevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_ContextMenuEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_contextmenuevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_TabletEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_tabletevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_ActionEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_actionevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_DragEnterEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_dragenterevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_DragMoveEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_dragmoveevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_DragLeaveEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_dragleaveevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_DropEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_dropevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_ShowEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_showevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_HideEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_hideevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_NativeEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_nativeevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_ChangeEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_changeevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_Metric_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_metric_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_InitPainter_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_initpainter_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_Redirected_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_redirected_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_SharedPainter_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_sharedpainter_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_InputMethodEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_inputmethodevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_InputMethodQuery_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_inputmethodquery_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_FocusNextPrevChild_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_focusnextprevchild_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_EventFilter_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_eventfilter_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_TimerEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_timerevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_ChildEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_childevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_CustomEvent_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_customevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_ConnectNotify_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_connectnotify_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_DisconnectNotify_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_disconnectnotify_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_UpdateMicroFocus_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_updatemicrofocus_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_Create_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_create_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_Destroy_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_destroy_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_FocusNextChild_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_focusnextchild_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_FocusPreviousChild_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_focuspreviouschild_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_Sender_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_sender_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_SenderSignalIndex_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_sendersignalindex_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_Receivers_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_receivers_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_IsSignalConnected_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_issignalconnected_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolResultWidget_GetDecodedMetricF_IsBase(bool value) const { textgrammarcheck__languagetoolresultwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__languagetoolresultwidget_metaobject_isbase) {
            textgrammarcheck__languagetoolresultwidget_metaobject_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::metaObject();
        }
        auto metaobject_cb = textgrammarcheck__languagetoolresultwidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__languagetoolresultwidget_metacast_isbase) {
            textgrammarcheck__languagetoolresultwidget_metacast_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::qt_metacast(param1);
        }
        auto metacast_cb = textgrammarcheck__languagetoolresultwidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__languagetoolresultwidget_metacall_isbase) {
            textgrammarcheck__languagetoolresultwidget_metacall_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textgrammarcheck__languagetoolresultwidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolResultWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkGrammar() override {
        if (textgrammarcheck__languagetoolresultwidget_checkgrammar_isbase) {
            textgrammarcheck__languagetoolresultwidget_checkgrammar_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::checkGrammar();
            return;
        }
        auto checkgrammar_cb = textgrammarcheck__languagetoolresultwidget_checkgrammar_callback;
        if (checkgrammar_cb) {
            checkgrammar_cb();
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::checkGrammar();
    }

    // Virtual method for C ABI access and custom callback
    virtual void addExtraWidget() override {
        if (textgrammarcheck__languagetoolresultwidget_addextrawidget_isbase) {
            textgrammarcheck__languagetoolresultwidget_addextrawidget_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::addExtraWidget();
            return;
        }
        auto addextrawidget_cb = textgrammarcheck__languagetoolresultwidget_addextrawidget_callback;
        if (addextrawidget_cb) {
            addextrawidget_cb();
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::addExtraWidget();
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textgrammarcheck__languagetoolresultwidget_devtype_isbase) {
            textgrammarcheck__languagetoolresultwidget_devtype_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::devType();
        }
        auto devtype_cb = textgrammarcheck__languagetoolresultwidget_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolResultWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textgrammarcheck__languagetoolresultwidget_setvisible_isbase) {
            textgrammarcheck__languagetoolresultwidget_setvisible_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::setVisible(visible);
            return;
        }
        auto setvisible_cb = textgrammarcheck__languagetoolresultwidget_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textgrammarcheck__languagetoolresultwidget_sizehint_isbase) {
            textgrammarcheck__languagetoolresultwidget_sizehint_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::sizeHint();
        }
        auto sizehint_cb = textgrammarcheck__languagetoolresultwidget_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textgrammarcheck__languagetoolresultwidget_minimumsizehint_isbase) {
            textgrammarcheck__languagetoolresultwidget_minimumsizehint_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::minimumSizeHint();
        }
        auto minimumsizehint_cb = textgrammarcheck__languagetoolresultwidget_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textgrammarcheck__languagetoolresultwidget_heightforwidth_isbase) {
            textgrammarcheck__languagetoolresultwidget_heightforwidth_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::heightForWidth(param1);
        }
        auto heightforwidth_cb = textgrammarcheck__languagetoolresultwidget_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolResultWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textgrammarcheck__languagetoolresultwidget_hasheightforwidth_isbase) {
            textgrammarcheck__languagetoolresultwidget_hasheightforwidth_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = textgrammarcheck__languagetoolresultwidget_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textgrammarcheck__languagetoolresultwidget_paintengine_isbase) {
            textgrammarcheck__languagetoolresultwidget_paintengine_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::paintEngine();
        }
        auto paintengine_cb = textgrammarcheck__languagetoolresultwidget_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_event_isbase) {
            textgrammarcheck__languagetoolresultwidget_event_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::event(event);
        }
        auto event_cb = textgrammarcheck__languagetoolresultwidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_mousepressevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_mousepressevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = textgrammarcheck__languagetoolresultwidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_mousereleaseevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_mousereleaseevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = textgrammarcheck__languagetoolresultwidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_mousedoubleclickevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_mousedoubleclickevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = textgrammarcheck__languagetoolresultwidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_mousemoveevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_mousemoveevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = textgrammarcheck__languagetoolresultwidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_wheelevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_wheelevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = textgrammarcheck__languagetoolresultwidget_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_keypressevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_keypressevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = textgrammarcheck__languagetoolresultwidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_keyreleaseevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_keyreleaseevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = textgrammarcheck__languagetoolresultwidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_focusinevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_focusinevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = textgrammarcheck__languagetoolresultwidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_focusoutevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_focusoutevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = textgrammarcheck__languagetoolresultwidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_enterevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_enterevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::enterEvent(event);
            return;
        }
        auto enterevent_cb = textgrammarcheck__languagetoolresultwidget_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_leaveevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_leaveevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = textgrammarcheck__languagetoolresultwidget_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_paintevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_paintevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::paintEvent(event);
            return;
        }
        auto paintevent_cb = textgrammarcheck__languagetoolresultwidget_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_moveevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_moveevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = textgrammarcheck__languagetoolresultwidget_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_resizeevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_resizeevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = textgrammarcheck__languagetoolresultwidget_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_closeevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_closeevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = textgrammarcheck__languagetoolresultwidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_contextmenuevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_contextmenuevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = textgrammarcheck__languagetoolresultwidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_tabletevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_tabletevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = textgrammarcheck__languagetoolresultwidget_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_actionevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_actionevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::actionEvent(event);
            return;
        }
        auto actionevent_cb = textgrammarcheck__languagetoolresultwidget_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_dragenterevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_dragenterevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = textgrammarcheck__languagetoolresultwidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_dragmoveevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_dragmoveevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = textgrammarcheck__languagetoolresultwidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_dragleaveevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_dragleaveevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = textgrammarcheck__languagetoolresultwidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_dropevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_dropevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::dropEvent(event);
            return;
        }
        auto dropevent_cb = textgrammarcheck__languagetoolresultwidget_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_showevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_showevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::showEvent(event);
            return;
        }
        auto showevent_cb = textgrammarcheck__languagetoolresultwidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_hideevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_hideevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::hideEvent(event);
            return;
        }
        auto hideevent_cb = textgrammarcheck__languagetoolresultwidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textgrammarcheck__languagetoolresultwidget_nativeevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_nativeevent_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = textgrammarcheck__languagetoolresultwidget_nativeevent_callback;
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
        return TextGrammarCheck__LanguageToolResultWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textgrammarcheck__languagetoolresultwidget_changeevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_changeevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::changeEvent(param1);
            return;
        }
        auto changeevent_cb = textgrammarcheck__languagetoolresultwidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textgrammarcheck__languagetoolresultwidget_metric_isbase) {
            textgrammarcheck__languagetoolresultwidget_metric_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::metric(param1);
        }
        auto metric_cb = textgrammarcheck__languagetoolresultwidget_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolResultWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textgrammarcheck__languagetoolresultwidget_initpainter_isbase) {
            textgrammarcheck__languagetoolresultwidget_initpainter_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::initPainter(painter);
            return;
        }
        auto initpainter_cb = textgrammarcheck__languagetoolresultwidget_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textgrammarcheck__languagetoolresultwidget_redirected_isbase) {
            textgrammarcheck__languagetoolresultwidget_redirected_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::redirected(offset);
        }
        auto redirected_cb = textgrammarcheck__languagetoolresultwidget_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textgrammarcheck__languagetoolresultwidget_sharedpainter_isbase) {
            textgrammarcheck__languagetoolresultwidget_sharedpainter_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::sharedPainter();
        }
        auto sharedpainter_cb = textgrammarcheck__languagetoolresultwidget_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textgrammarcheck__languagetoolresultwidget_inputmethodevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_inputmethodevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = textgrammarcheck__languagetoolresultwidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textgrammarcheck__languagetoolresultwidget_inputmethodquery_isbase) {
            textgrammarcheck__languagetoolresultwidget_inputmethodquery_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = textgrammarcheck__languagetoolresultwidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textgrammarcheck__languagetoolresultwidget_focusnextprevchild_isbase) {
            textgrammarcheck__languagetoolresultwidget_focusnextprevchild_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = textgrammarcheck__languagetoolresultwidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_eventfilter_isbase) {
            textgrammarcheck__languagetoolresultwidget_eventfilter_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::eventFilter(watched, event);
        }
        auto eventfilter_cb = textgrammarcheck__languagetoolresultwidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_timerevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_timerevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::timerEvent(event);
            return;
        }
        auto timerevent_cb = textgrammarcheck__languagetoolresultwidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_childevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_childevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::childEvent(event);
            return;
        }
        auto childevent_cb = textgrammarcheck__languagetoolresultwidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_customevent_isbase) {
            textgrammarcheck__languagetoolresultwidget_customevent_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::customEvent(event);
            return;
        }
        auto customevent_cb = textgrammarcheck__languagetoolresultwidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__languagetoolresultwidget_connectnotify_isbase) {
            textgrammarcheck__languagetoolresultwidget_connectnotify_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textgrammarcheck__languagetoolresultwidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__languagetoolresultwidget_disconnectnotify_isbase) {
            textgrammarcheck__languagetoolresultwidget_disconnectnotify_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textgrammarcheck__languagetoolresultwidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (textgrammarcheck__languagetoolresultwidget_updatemicrofocus_isbase) {
            textgrammarcheck__languagetoolresultwidget_updatemicrofocus_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = textgrammarcheck__languagetoolresultwidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (textgrammarcheck__languagetoolresultwidget_create_isbase) {
            textgrammarcheck__languagetoolresultwidget_create_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::create();
            return;
        }
        auto create_cb = textgrammarcheck__languagetoolresultwidget_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (textgrammarcheck__languagetoolresultwidget_destroy_isbase) {
            textgrammarcheck__languagetoolresultwidget_destroy_isbase = false;
            TextGrammarCheck__LanguageToolResultWidget::destroy();
            return;
        }
        auto destroy_cb = textgrammarcheck__languagetoolresultwidget_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (textgrammarcheck__languagetoolresultwidget_focusnextchild_isbase) {
            textgrammarcheck__languagetoolresultwidget_focusnextchild_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::focusNextChild();
        }
        auto focusnextchild_cb = textgrammarcheck__languagetoolresultwidget_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (textgrammarcheck__languagetoolresultwidget_focuspreviouschild_isbase) {
            textgrammarcheck__languagetoolresultwidget_focuspreviouschild_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::focusPreviousChild();
        }
        auto focuspreviouschild_cb = textgrammarcheck__languagetoolresultwidget_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textgrammarcheck__languagetoolresultwidget_sender_isbase) {
            textgrammarcheck__languagetoolresultwidget_sender_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::sender();
        }
        auto sender_cb = textgrammarcheck__languagetoolresultwidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textgrammarcheck__languagetoolresultwidget_sendersignalindex_isbase) {
            textgrammarcheck__languagetoolresultwidget_sendersignalindex_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = textgrammarcheck__languagetoolresultwidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolResultWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textgrammarcheck__languagetoolresultwidget_receivers_isbase) {
            textgrammarcheck__languagetoolresultwidget_receivers_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::receivers(signal);
        }
        auto receivers_cb = textgrammarcheck__languagetoolresultwidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolResultWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textgrammarcheck__languagetoolresultwidget_issignalconnected_isbase) {
            textgrammarcheck__languagetoolresultwidget_issignalconnected_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textgrammarcheck__languagetoolresultwidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (textgrammarcheck__languagetoolresultwidget_getdecodedmetricf_isbase) {
            textgrammarcheck__languagetoolresultwidget_getdecodedmetricf_isbase = false;
            return TextGrammarCheck__LanguageToolResultWidget::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = textgrammarcheck__languagetoolresultwidget_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolResultWidget::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend void TextGrammarCheck__LanguageToolResultWidget_AddExtraWidget(TextGrammarCheck::LanguageToolResultWidget* self);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperAddExtraWidget(TextGrammarCheck::LanguageToolResultWidget* self);
    friend bool TextGrammarCheck__LanguageToolResultWidget_Event(TextGrammarCheck::LanguageToolResultWidget* self, QEvent* event);
    friend bool TextGrammarCheck__LanguageToolResultWidget_SuperEvent(TextGrammarCheck::LanguageToolResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_MousePressEvent(TextGrammarCheck::LanguageToolResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperMousePressEvent(TextGrammarCheck::LanguageToolResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_MouseReleaseEvent(TextGrammarCheck::LanguageToolResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperMouseReleaseEvent(TextGrammarCheck::LanguageToolResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_MouseDoubleClickEvent(TextGrammarCheck::LanguageToolResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperMouseDoubleClickEvent(TextGrammarCheck::LanguageToolResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_MouseMoveEvent(TextGrammarCheck::LanguageToolResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperMouseMoveEvent(TextGrammarCheck::LanguageToolResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_WheelEvent(TextGrammarCheck::LanguageToolResultWidget* self, QWheelEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperWheelEvent(TextGrammarCheck::LanguageToolResultWidget* self, QWheelEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_KeyPressEvent(TextGrammarCheck::LanguageToolResultWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperKeyPressEvent(TextGrammarCheck::LanguageToolResultWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_KeyReleaseEvent(TextGrammarCheck::LanguageToolResultWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperKeyReleaseEvent(TextGrammarCheck::LanguageToolResultWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_FocusInEvent(TextGrammarCheck::LanguageToolResultWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperFocusInEvent(TextGrammarCheck::LanguageToolResultWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_FocusOutEvent(TextGrammarCheck::LanguageToolResultWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperFocusOutEvent(TextGrammarCheck::LanguageToolResultWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_EnterEvent(TextGrammarCheck::LanguageToolResultWidget* self, QEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperEnterEvent(TextGrammarCheck::LanguageToolResultWidget* self, QEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_LeaveEvent(TextGrammarCheck::LanguageToolResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperLeaveEvent(TextGrammarCheck::LanguageToolResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_PaintEvent(TextGrammarCheck::LanguageToolResultWidget* self, QPaintEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperPaintEvent(TextGrammarCheck::LanguageToolResultWidget* self, QPaintEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_MoveEvent(TextGrammarCheck::LanguageToolResultWidget* self, QMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperMoveEvent(TextGrammarCheck::LanguageToolResultWidget* self, QMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_ResizeEvent(TextGrammarCheck::LanguageToolResultWidget* self, QResizeEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperResizeEvent(TextGrammarCheck::LanguageToolResultWidget* self, QResizeEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_CloseEvent(TextGrammarCheck::LanguageToolResultWidget* self, QCloseEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperCloseEvent(TextGrammarCheck::LanguageToolResultWidget* self, QCloseEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_ContextMenuEvent(TextGrammarCheck::LanguageToolResultWidget* self, QContextMenuEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperContextMenuEvent(TextGrammarCheck::LanguageToolResultWidget* self, QContextMenuEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_TabletEvent(TextGrammarCheck::LanguageToolResultWidget* self, QTabletEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperTabletEvent(TextGrammarCheck::LanguageToolResultWidget* self, QTabletEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_ActionEvent(TextGrammarCheck::LanguageToolResultWidget* self, QActionEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperActionEvent(TextGrammarCheck::LanguageToolResultWidget* self, QActionEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_DragEnterEvent(TextGrammarCheck::LanguageToolResultWidget* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperDragEnterEvent(TextGrammarCheck::LanguageToolResultWidget* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_DragMoveEvent(TextGrammarCheck::LanguageToolResultWidget* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperDragMoveEvent(TextGrammarCheck::LanguageToolResultWidget* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_DragLeaveEvent(TextGrammarCheck::LanguageToolResultWidget* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperDragLeaveEvent(TextGrammarCheck::LanguageToolResultWidget* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_DropEvent(TextGrammarCheck::LanguageToolResultWidget* self, QDropEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperDropEvent(TextGrammarCheck::LanguageToolResultWidget* self, QDropEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_ShowEvent(TextGrammarCheck::LanguageToolResultWidget* self, QShowEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperShowEvent(TextGrammarCheck::LanguageToolResultWidget* self, QShowEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_HideEvent(TextGrammarCheck::LanguageToolResultWidget* self, QHideEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperHideEvent(TextGrammarCheck::LanguageToolResultWidget* self, QHideEvent* event);
    friend bool TextGrammarCheck__LanguageToolResultWidget_NativeEvent(TextGrammarCheck::LanguageToolResultWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextGrammarCheck__LanguageToolResultWidget_SuperNativeEvent(TextGrammarCheck::LanguageToolResultWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextGrammarCheck__LanguageToolResultWidget_ChangeEvent(TextGrammarCheck::LanguageToolResultWidget* self, QEvent* param1);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperChangeEvent(TextGrammarCheck::LanguageToolResultWidget* self, QEvent* param1);
    friend int TextGrammarCheck__LanguageToolResultWidget_Metric(const TextGrammarCheck::LanguageToolResultWidget* self, int param1);
    friend int TextGrammarCheck__LanguageToolResultWidget_SuperMetric(const TextGrammarCheck::LanguageToolResultWidget* self, int param1);
    friend void TextGrammarCheck__LanguageToolResultWidget_InitPainter(const TextGrammarCheck::LanguageToolResultWidget* self, QPainter* painter);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperInitPainter(const TextGrammarCheck::LanguageToolResultWidget* self, QPainter* painter);
    friend QPaintDevice* TextGrammarCheck__LanguageToolResultWidget_Redirected(const TextGrammarCheck::LanguageToolResultWidget* self, QPoint* offset);
    friend QPaintDevice* TextGrammarCheck__LanguageToolResultWidget_SuperRedirected(const TextGrammarCheck::LanguageToolResultWidget* self, QPoint* offset);
    friend QPainter* TextGrammarCheck__LanguageToolResultWidget_SharedPainter(const TextGrammarCheck::LanguageToolResultWidget* self);
    friend QPainter* TextGrammarCheck__LanguageToolResultWidget_SuperSharedPainter(const TextGrammarCheck::LanguageToolResultWidget* self);
    friend void TextGrammarCheck__LanguageToolResultWidget_InputMethodEvent(TextGrammarCheck::LanguageToolResultWidget* self, QInputMethodEvent* param1);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperInputMethodEvent(TextGrammarCheck::LanguageToolResultWidget* self, QInputMethodEvent* param1);
    friend bool TextGrammarCheck__LanguageToolResultWidget_FocusNextPrevChild(TextGrammarCheck::LanguageToolResultWidget* self, bool next);
    friend bool TextGrammarCheck__LanguageToolResultWidget_SuperFocusNextPrevChild(TextGrammarCheck::LanguageToolResultWidget* self, bool next);
    friend void TextGrammarCheck__LanguageToolResultWidget_TimerEvent(TextGrammarCheck::LanguageToolResultWidget* self, QTimerEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperTimerEvent(TextGrammarCheck::LanguageToolResultWidget* self, QTimerEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_ChildEvent(TextGrammarCheck::LanguageToolResultWidget* self, QChildEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperChildEvent(TextGrammarCheck::LanguageToolResultWidget* self, QChildEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_CustomEvent(TextGrammarCheck::LanguageToolResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperCustomEvent(TextGrammarCheck::LanguageToolResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_ConnectNotify(TextGrammarCheck::LanguageToolResultWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperConnectNotify(TextGrammarCheck::LanguageToolResultWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__LanguageToolResultWidget_DisconnectNotify(TextGrammarCheck::LanguageToolResultWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperDisconnectNotify(TextGrammarCheck::LanguageToolResultWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__LanguageToolResultWidget_UpdateMicroFocus(TextGrammarCheck::LanguageToolResultWidget* self);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperUpdateMicroFocus(TextGrammarCheck::LanguageToolResultWidget* self);
    friend void TextGrammarCheck__LanguageToolResultWidget_Create(TextGrammarCheck::LanguageToolResultWidget* self);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperCreate(TextGrammarCheck::LanguageToolResultWidget* self);
    friend void TextGrammarCheck__LanguageToolResultWidget_Destroy(TextGrammarCheck::LanguageToolResultWidget* self);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperDestroy(TextGrammarCheck::LanguageToolResultWidget* self);
    friend bool TextGrammarCheck__LanguageToolResultWidget_FocusNextChild(TextGrammarCheck::LanguageToolResultWidget* self);
    friend bool TextGrammarCheck__LanguageToolResultWidget_SuperFocusNextChild(TextGrammarCheck::LanguageToolResultWidget* self);
    friend bool TextGrammarCheck__LanguageToolResultWidget_FocusPreviousChild(TextGrammarCheck::LanguageToolResultWidget* self);
    friend bool TextGrammarCheck__LanguageToolResultWidget_SuperFocusPreviousChild(TextGrammarCheck::LanguageToolResultWidget* self);
    friend QObject* TextGrammarCheck__LanguageToolResultWidget_Sender(const TextGrammarCheck::LanguageToolResultWidget* self);
    friend QObject* TextGrammarCheck__LanguageToolResultWidget_SuperSender(const TextGrammarCheck::LanguageToolResultWidget* self);
    friend int TextGrammarCheck__LanguageToolResultWidget_SenderSignalIndex(const TextGrammarCheck::LanguageToolResultWidget* self);
    friend int TextGrammarCheck__LanguageToolResultWidget_SuperSenderSignalIndex(const TextGrammarCheck::LanguageToolResultWidget* self);
    friend int TextGrammarCheck__LanguageToolResultWidget_Receivers(const TextGrammarCheck::LanguageToolResultWidget* self, const char* signal);
    friend int TextGrammarCheck__LanguageToolResultWidget_SuperReceivers(const TextGrammarCheck::LanguageToolResultWidget* self, const char* signal);
    friend bool TextGrammarCheck__LanguageToolResultWidget_IsSignalConnected(const TextGrammarCheck::LanguageToolResultWidget* self, const QMetaMethod* signal);
    friend bool TextGrammarCheck__LanguageToolResultWidget_SuperIsSignalConnected(const TextGrammarCheck::LanguageToolResultWidget* self, const QMetaMethod* signal);
    friend double TextGrammarCheck__LanguageToolResultWidget_GetDecodedMetricF(const TextGrammarCheck::LanguageToolResultWidget* self, int metricA, int metricB);
    friend double TextGrammarCheck__LanguageToolResultWidget_SuperGetDecodedMetricF(const TextGrammarCheck::LanguageToolResultWidget* self, int metricA, int metricB);
};

#endif
