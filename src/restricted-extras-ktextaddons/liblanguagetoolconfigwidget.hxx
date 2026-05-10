#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALLANGUAGETOOLCONFIGWIDGET_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALLANGUAGETOOLCONFIGWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::LanguageToolConfigWidget so that we can call protected methods
class VirtualTextGrammarCheckLanguageToolConfigWidget final : public TextGrammarCheck::LanguageToolConfigWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualTextGrammarCheckLanguageToolConfigWidget = true;

    // Virtual class public types (including callbacks)
    using TextGrammarCheck__LanguageToolConfigWidget_MetaObject_Callback = QMetaObject* (*)();
    using TextGrammarCheck__LanguageToolConfigWidget_Metacast_Callback = void* (*)(TextGrammarCheck__LanguageToolConfigWidget*, const char*);
    using TextGrammarCheck__LanguageToolConfigWidget_Metacall_Callback = int (*)(TextGrammarCheck__LanguageToolConfigWidget*, int, int, void**);
    using TextGrammarCheck__LanguageToolConfigWidget_DevType_Callback = int (*)();
    using TextGrammarCheck__LanguageToolConfigWidget_SetVisible_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, bool);
    using TextGrammarCheck__LanguageToolConfigWidget_SizeHint_Callback = QSize* (*)();
    using TextGrammarCheck__LanguageToolConfigWidget_MinimumSizeHint_Callback = QSize* (*)();
    using TextGrammarCheck__LanguageToolConfigWidget_HeightForWidth_Callback = int (*)(const TextGrammarCheck__LanguageToolConfigWidget*, int);
    using TextGrammarCheck__LanguageToolConfigWidget_HasHeightForWidth_Callback = bool (*)();
    using TextGrammarCheck__LanguageToolConfigWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using TextGrammarCheck__LanguageToolConfigWidget_Event_Callback = bool (*)(TextGrammarCheck__LanguageToolConfigWidget*, QEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_MousePressEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_MouseReleaseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_MouseDoubleClickEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_MouseMoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_WheelEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QWheelEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_KeyPressEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QKeyEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_KeyReleaseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QKeyEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_FocusInEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QFocusEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_FocusOutEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QFocusEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_EnterEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QEnterEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_LeaveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_PaintEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QPaintEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_MoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QMoveEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_ResizeEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QResizeEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_CloseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QCloseEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_ContextMenuEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QContextMenuEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_TabletEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QTabletEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_ActionEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QActionEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_DragEnterEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QDragEnterEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_DragMoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QDragMoveEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_DragLeaveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QDragLeaveEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_DropEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QDropEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_ShowEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QShowEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_HideEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QHideEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_NativeEvent_Callback = bool (*)(TextGrammarCheck__LanguageToolConfigWidget*, libqt_string, void*, intptr_t*);
    using TextGrammarCheck__LanguageToolConfigWidget_ChangeEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_Metric_Callback = int (*)(const TextGrammarCheck__LanguageToolConfigWidget*, int);
    using TextGrammarCheck__LanguageToolConfigWidget_InitPainter_Callback = void (*)(const TextGrammarCheck__LanguageToolConfigWidget*, QPainter*);
    using TextGrammarCheck__LanguageToolConfigWidget_Redirected_Callback = QPaintDevice* (*)(const TextGrammarCheck__LanguageToolConfigWidget*, QPoint*);
    using TextGrammarCheck__LanguageToolConfigWidget_SharedPainter_Callback = QPainter* (*)();
    using TextGrammarCheck__LanguageToolConfigWidget_InputMethodEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QInputMethodEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_InputMethodQuery_Callback = QVariant* (*)(const TextGrammarCheck__LanguageToolConfigWidget*, int);
    using TextGrammarCheck__LanguageToolConfigWidget_FocusNextPrevChild_Callback = bool (*)(TextGrammarCheck__LanguageToolConfigWidget*, bool);
    using TextGrammarCheck__LanguageToolConfigWidget_EventFilter_Callback = bool (*)(TextGrammarCheck__LanguageToolConfigWidget*, QObject*, QEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_TimerEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QTimerEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_ChildEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QChildEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_CustomEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_ConnectNotify_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QMetaMethod*);
    using TextGrammarCheck__LanguageToolConfigWidget_DisconnectNotify_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QMetaMethod*);
    using TextGrammarCheck__LanguageToolConfigWidget_UpdateMicroFocus_Callback = void (*)();
    using TextGrammarCheck__LanguageToolConfigWidget_Create_Callback = void (*)();
    using TextGrammarCheck__LanguageToolConfigWidget_Destroy_Callback = void (*)();
    using TextGrammarCheck__LanguageToolConfigWidget_FocusNextChild_Callback = bool (*)();
    using TextGrammarCheck__LanguageToolConfigWidget_FocusPreviousChild_Callback = bool (*)();
    using TextGrammarCheck__LanguageToolConfigWidget_Sender_Callback = QObject* (*)();
    using TextGrammarCheck__LanguageToolConfigWidget_SenderSignalIndex_Callback = int (*)();
    using TextGrammarCheck__LanguageToolConfigWidget_Receivers_Callback = int (*)(const TextGrammarCheck__LanguageToolConfigWidget*, const char*);
    using TextGrammarCheck__LanguageToolConfigWidget_IsSignalConnected_Callback = bool (*)(const TextGrammarCheck__LanguageToolConfigWidget*, QMetaMethod*);
    using TextGrammarCheck__LanguageToolConfigWidget_GetDecodedMetricF_Callback = double (*)(const TextGrammarCheck__LanguageToolConfigWidget*, int, int);

  protected:
    // Instance callback storage
    TextGrammarCheck__LanguageToolConfigWidget_MetaObject_Callback textgrammarcheck__languagetoolconfigwidget_metaobject_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_Metacast_Callback textgrammarcheck__languagetoolconfigwidget_metacast_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_Metacall_Callback textgrammarcheck__languagetoolconfigwidget_metacall_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_DevType_Callback textgrammarcheck__languagetoolconfigwidget_devtype_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_SetVisible_Callback textgrammarcheck__languagetoolconfigwidget_setvisible_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_SizeHint_Callback textgrammarcheck__languagetoolconfigwidget_sizehint_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_MinimumSizeHint_Callback textgrammarcheck__languagetoolconfigwidget_minimumsizehint_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_HeightForWidth_Callback textgrammarcheck__languagetoolconfigwidget_heightforwidth_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_HasHeightForWidth_Callback textgrammarcheck__languagetoolconfigwidget_hasheightforwidth_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_PaintEngine_Callback textgrammarcheck__languagetoolconfigwidget_paintengine_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_Event_Callback textgrammarcheck__languagetoolconfigwidget_event_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_MousePressEvent_Callback textgrammarcheck__languagetoolconfigwidget_mousepressevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_MouseReleaseEvent_Callback textgrammarcheck__languagetoolconfigwidget_mousereleaseevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_MouseDoubleClickEvent_Callback textgrammarcheck__languagetoolconfigwidget_mousedoubleclickevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_MouseMoveEvent_Callback textgrammarcheck__languagetoolconfigwidget_mousemoveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_WheelEvent_Callback textgrammarcheck__languagetoolconfigwidget_wheelevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_KeyPressEvent_Callback textgrammarcheck__languagetoolconfigwidget_keypressevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_KeyReleaseEvent_Callback textgrammarcheck__languagetoolconfigwidget_keyreleaseevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_FocusInEvent_Callback textgrammarcheck__languagetoolconfigwidget_focusinevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_FocusOutEvent_Callback textgrammarcheck__languagetoolconfigwidget_focusoutevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_EnterEvent_Callback textgrammarcheck__languagetoolconfigwidget_enterevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_LeaveEvent_Callback textgrammarcheck__languagetoolconfigwidget_leaveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_PaintEvent_Callback textgrammarcheck__languagetoolconfigwidget_paintevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_MoveEvent_Callback textgrammarcheck__languagetoolconfigwidget_moveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_ResizeEvent_Callback textgrammarcheck__languagetoolconfigwidget_resizeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_CloseEvent_Callback textgrammarcheck__languagetoolconfigwidget_closeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_ContextMenuEvent_Callback textgrammarcheck__languagetoolconfigwidget_contextmenuevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_TabletEvent_Callback textgrammarcheck__languagetoolconfigwidget_tabletevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_ActionEvent_Callback textgrammarcheck__languagetoolconfigwidget_actionevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_DragEnterEvent_Callback textgrammarcheck__languagetoolconfigwidget_dragenterevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_DragMoveEvent_Callback textgrammarcheck__languagetoolconfigwidget_dragmoveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_DragLeaveEvent_Callback textgrammarcheck__languagetoolconfigwidget_dragleaveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_DropEvent_Callback textgrammarcheck__languagetoolconfigwidget_dropevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_ShowEvent_Callback textgrammarcheck__languagetoolconfigwidget_showevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_HideEvent_Callback textgrammarcheck__languagetoolconfigwidget_hideevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_NativeEvent_Callback textgrammarcheck__languagetoolconfigwidget_nativeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_ChangeEvent_Callback textgrammarcheck__languagetoolconfigwidget_changeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_Metric_Callback textgrammarcheck__languagetoolconfigwidget_metric_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_InitPainter_Callback textgrammarcheck__languagetoolconfigwidget_initpainter_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_Redirected_Callback textgrammarcheck__languagetoolconfigwidget_redirected_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_SharedPainter_Callback textgrammarcheck__languagetoolconfigwidget_sharedpainter_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_InputMethodEvent_Callback textgrammarcheck__languagetoolconfigwidget_inputmethodevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_InputMethodQuery_Callback textgrammarcheck__languagetoolconfigwidget_inputmethodquery_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_FocusNextPrevChild_Callback textgrammarcheck__languagetoolconfigwidget_focusnextprevchild_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_EventFilter_Callback textgrammarcheck__languagetoolconfigwidget_eventfilter_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_TimerEvent_Callback textgrammarcheck__languagetoolconfigwidget_timerevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_ChildEvent_Callback textgrammarcheck__languagetoolconfigwidget_childevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_CustomEvent_Callback textgrammarcheck__languagetoolconfigwidget_customevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_ConnectNotify_Callback textgrammarcheck__languagetoolconfigwidget_connectnotify_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_DisconnectNotify_Callback textgrammarcheck__languagetoolconfigwidget_disconnectnotify_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_UpdateMicroFocus_Callback textgrammarcheck__languagetoolconfigwidget_updatemicrofocus_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_Create_Callback textgrammarcheck__languagetoolconfigwidget_create_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_Destroy_Callback textgrammarcheck__languagetoolconfigwidget_destroy_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_FocusNextChild_Callback textgrammarcheck__languagetoolconfigwidget_focusnextchild_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_FocusPreviousChild_Callback textgrammarcheck__languagetoolconfigwidget_focuspreviouschild_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_Sender_Callback textgrammarcheck__languagetoolconfigwidget_sender_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_SenderSignalIndex_Callback textgrammarcheck__languagetoolconfigwidget_sendersignalindex_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_Receivers_Callback textgrammarcheck__languagetoolconfigwidget_receivers_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_IsSignalConnected_Callback textgrammarcheck__languagetoolconfigwidget_issignalconnected_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_GetDecodedMetricF_Callback textgrammarcheck__languagetoolconfigwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool textgrammarcheck__languagetoolconfigwidget_metaobject_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_metacast_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_metacall_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_devtype_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_setvisible_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_sizehint_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_minimumsizehint_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_heightforwidth_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_hasheightforwidth_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_paintengine_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_event_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_mousepressevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_mousereleaseevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_mousedoubleclickevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_mousemoveevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_wheelevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_keypressevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_keyreleaseevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_focusinevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_focusoutevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_enterevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_leaveevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_paintevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_moveevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_resizeevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_closeevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_contextmenuevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_tabletevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_actionevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_dragenterevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_dragmoveevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_dragleaveevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_dropevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_showevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_hideevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_nativeevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_changeevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_metric_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_initpainter_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_redirected_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_sharedpainter_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_inputmethodevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_inputmethodquery_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_focusnextprevchild_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_eventfilter_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_timerevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_childevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_customevent_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_connectnotify_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_disconnectnotify_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_updatemicrofocus_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_create_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_destroy_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_focusnextchild_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_focuspreviouschild_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_sender_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_sendersignalindex_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_receivers_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_issignalconnected_isbase = false;
    mutable bool textgrammarcheck__languagetoolconfigwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualTextGrammarCheckLanguageToolConfigWidget(QWidget* parent) : TextGrammarCheck::LanguageToolConfigWidget(parent) {};
    VirtualTextGrammarCheckLanguageToolConfigWidget() : TextGrammarCheck::LanguageToolConfigWidget() {};

    // Callback setters
    inline void setTextGrammarCheck__LanguageToolConfigWidget_MetaObject_Callback(TextGrammarCheck__LanguageToolConfigWidget_MetaObject_Callback cb) { textgrammarcheck__languagetoolconfigwidget_metaobject_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_Metacast_Callback(TextGrammarCheck__LanguageToolConfigWidget_Metacast_Callback cb) { textgrammarcheck__languagetoolconfigwidget_metacast_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_Metacall_Callback(TextGrammarCheck__LanguageToolConfigWidget_Metacall_Callback cb) { textgrammarcheck__languagetoolconfigwidget_metacall_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_DevType_Callback(TextGrammarCheck__LanguageToolConfigWidget_DevType_Callback cb) { textgrammarcheck__languagetoolconfigwidget_devtype_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_SetVisible_Callback(TextGrammarCheck__LanguageToolConfigWidget_SetVisible_Callback cb) { textgrammarcheck__languagetoolconfigwidget_setvisible_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_SizeHint_Callback(TextGrammarCheck__LanguageToolConfigWidget_SizeHint_Callback cb) { textgrammarcheck__languagetoolconfigwidget_sizehint_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_MinimumSizeHint_Callback(TextGrammarCheck__LanguageToolConfigWidget_MinimumSizeHint_Callback cb) { textgrammarcheck__languagetoolconfigwidget_minimumsizehint_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_HeightForWidth_Callback(TextGrammarCheck__LanguageToolConfigWidget_HeightForWidth_Callback cb) { textgrammarcheck__languagetoolconfigwidget_heightforwidth_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_HasHeightForWidth_Callback(TextGrammarCheck__LanguageToolConfigWidget_HasHeightForWidth_Callback cb) { textgrammarcheck__languagetoolconfigwidget_hasheightforwidth_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_PaintEngine_Callback(TextGrammarCheck__LanguageToolConfigWidget_PaintEngine_Callback cb) { textgrammarcheck__languagetoolconfigwidget_paintengine_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_Event_Callback(TextGrammarCheck__LanguageToolConfigWidget_Event_Callback cb) { textgrammarcheck__languagetoolconfigwidget_event_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_MousePressEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_MousePressEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_mousepressevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_MouseReleaseEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_MouseReleaseEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_mousereleaseevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_MouseDoubleClickEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_MouseDoubleClickEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_mousedoubleclickevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_MouseMoveEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_MouseMoveEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_mousemoveevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_WheelEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_WheelEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_wheelevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_KeyPressEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_KeyPressEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_keypressevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_KeyReleaseEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_KeyReleaseEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_keyreleaseevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_FocusInEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_FocusInEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_focusinevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_FocusOutEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_FocusOutEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_focusoutevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_EnterEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_EnterEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_enterevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_LeaveEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_LeaveEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_leaveevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_PaintEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_PaintEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_paintevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_MoveEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_MoveEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_moveevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_ResizeEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_ResizeEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_resizeevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_CloseEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_CloseEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_closeevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_ContextMenuEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_ContextMenuEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_contextmenuevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_TabletEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_TabletEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_tabletevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_ActionEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_ActionEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_actionevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_DragEnterEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_DragEnterEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_dragenterevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_DragMoveEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_DragMoveEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_dragmoveevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_DragLeaveEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_DragLeaveEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_dragleaveevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_DropEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_DropEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_dropevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_ShowEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_ShowEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_showevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_HideEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_HideEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_hideevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_NativeEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_NativeEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_nativeevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_ChangeEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_ChangeEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_changeevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_Metric_Callback(TextGrammarCheck__LanguageToolConfigWidget_Metric_Callback cb) { textgrammarcheck__languagetoolconfigwidget_metric_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_InitPainter_Callback(TextGrammarCheck__LanguageToolConfigWidget_InitPainter_Callback cb) { textgrammarcheck__languagetoolconfigwidget_initpainter_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_Redirected_Callback(TextGrammarCheck__LanguageToolConfigWidget_Redirected_Callback cb) { textgrammarcheck__languagetoolconfigwidget_redirected_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_SharedPainter_Callback(TextGrammarCheck__LanguageToolConfigWidget_SharedPainter_Callback cb) { textgrammarcheck__languagetoolconfigwidget_sharedpainter_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_InputMethodEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_InputMethodEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_inputmethodevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_InputMethodQuery_Callback(TextGrammarCheck__LanguageToolConfigWidget_InputMethodQuery_Callback cb) { textgrammarcheck__languagetoolconfigwidget_inputmethodquery_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_FocusNextPrevChild_Callback(TextGrammarCheck__LanguageToolConfigWidget_FocusNextPrevChild_Callback cb) { textgrammarcheck__languagetoolconfigwidget_focusnextprevchild_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_EventFilter_Callback(TextGrammarCheck__LanguageToolConfigWidget_EventFilter_Callback cb) { textgrammarcheck__languagetoolconfigwidget_eventfilter_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_TimerEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_TimerEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_timerevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_ChildEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_ChildEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_childevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_CustomEvent_Callback(TextGrammarCheck__LanguageToolConfigWidget_CustomEvent_Callback cb) { textgrammarcheck__languagetoolconfigwidget_customevent_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_ConnectNotify_Callback(TextGrammarCheck__LanguageToolConfigWidget_ConnectNotify_Callback cb) { textgrammarcheck__languagetoolconfigwidget_connectnotify_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_DisconnectNotify_Callback(TextGrammarCheck__LanguageToolConfigWidget_DisconnectNotify_Callback cb) { textgrammarcheck__languagetoolconfigwidget_disconnectnotify_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_UpdateMicroFocus_Callback(TextGrammarCheck__LanguageToolConfigWidget_UpdateMicroFocus_Callback cb) { textgrammarcheck__languagetoolconfigwidget_updatemicrofocus_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_Create_Callback(TextGrammarCheck__LanguageToolConfigWidget_Create_Callback cb) { textgrammarcheck__languagetoolconfigwidget_create_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_Destroy_Callback(TextGrammarCheck__LanguageToolConfigWidget_Destroy_Callback cb) { textgrammarcheck__languagetoolconfigwidget_destroy_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_FocusNextChild_Callback(TextGrammarCheck__LanguageToolConfigWidget_FocusNextChild_Callback cb) { textgrammarcheck__languagetoolconfigwidget_focusnextchild_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_FocusPreviousChild_Callback(TextGrammarCheck__LanguageToolConfigWidget_FocusPreviousChild_Callback cb) { textgrammarcheck__languagetoolconfigwidget_focuspreviouschild_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_Sender_Callback(TextGrammarCheck__LanguageToolConfigWidget_Sender_Callback cb) { textgrammarcheck__languagetoolconfigwidget_sender_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_SenderSignalIndex_Callback(TextGrammarCheck__LanguageToolConfigWidget_SenderSignalIndex_Callback cb) { textgrammarcheck__languagetoolconfigwidget_sendersignalindex_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_Receivers_Callback(TextGrammarCheck__LanguageToolConfigWidget_Receivers_Callback cb) { textgrammarcheck__languagetoolconfigwidget_receivers_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_IsSignalConnected_Callback(TextGrammarCheck__LanguageToolConfigWidget_IsSignalConnected_Callback cb) { textgrammarcheck__languagetoolconfigwidget_issignalconnected_callback = cb; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_GetDecodedMetricF_Callback(TextGrammarCheck__LanguageToolConfigWidget_GetDecodedMetricF_Callback cb) { textgrammarcheck__languagetoolconfigwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextGrammarCheck__LanguageToolConfigWidget_MetaObject_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_metaobject_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_Metacast_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_metacast_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_Metacall_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_metacall_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_DevType_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_devtype_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_SetVisible_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_setvisible_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_SizeHint_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_sizehint_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_MinimumSizeHint_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_minimumsizehint_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_HeightForWidth_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_heightforwidth_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_HasHeightForWidth_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_hasheightforwidth_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_PaintEngine_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_paintengine_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_Event_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_event_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_MousePressEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_mousepressevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_MouseReleaseEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_mousereleaseevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_MouseDoubleClickEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_mousedoubleclickevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_MouseMoveEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_mousemoveevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_WheelEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_wheelevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_KeyPressEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_keypressevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_KeyReleaseEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_keyreleaseevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_FocusInEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_focusinevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_FocusOutEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_focusoutevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_EnterEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_enterevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_LeaveEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_leaveevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_PaintEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_paintevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_MoveEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_moveevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_ResizeEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_resizeevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_CloseEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_closeevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_ContextMenuEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_contextmenuevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_TabletEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_tabletevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_ActionEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_actionevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_DragEnterEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_dragenterevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_DragMoveEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_dragmoveevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_DragLeaveEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_dragleaveevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_DropEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_dropevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_ShowEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_showevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_HideEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_hideevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_NativeEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_nativeevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_ChangeEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_changeevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_Metric_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_metric_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_InitPainter_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_initpainter_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_Redirected_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_redirected_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_SharedPainter_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_sharedpainter_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_InputMethodEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_inputmethodevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_InputMethodQuery_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_inputmethodquery_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_FocusNextPrevChild_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_focusnextprevchild_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_EventFilter_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_eventfilter_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_TimerEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_timerevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_ChildEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_childevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_CustomEvent_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_customevent_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_ConnectNotify_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_connectnotify_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_DisconnectNotify_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_disconnectnotify_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_UpdateMicroFocus_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_updatemicrofocus_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_Create_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_create_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_Destroy_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_destroy_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_FocusNextChild_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_focusnextchild_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_FocusPreviousChild_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_focuspreviouschild_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_Sender_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_sender_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_SenderSignalIndex_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_sendersignalindex_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_Receivers_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_receivers_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_IsSignalConnected_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_issignalconnected_isbase = value; }
    inline void setTextGrammarCheck__LanguageToolConfigWidget_GetDecodedMetricF_IsBase(bool value) const { textgrammarcheck__languagetoolconfigwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__languagetoolconfigwidget_metaobject_isbase) {
            textgrammarcheck__languagetoolconfigwidget_metaobject_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::metaObject();
        }
        auto metaobject_cb = textgrammarcheck__languagetoolconfigwidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__languagetoolconfigwidget_metacast_isbase) {
            textgrammarcheck__languagetoolconfigwidget_metacast_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::qt_metacast(param1);
        }
        auto metacast_cb = textgrammarcheck__languagetoolconfigwidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__languagetoolconfigwidget_metacall_isbase) {
            textgrammarcheck__languagetoolconfigwidget_metacall_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textgrammarcheck__languagetoolconfigwidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textgrammarcheck__languagetoolconfigwidget_devtype_isbase) {
            textgrammarcheck__languagetoolconfigwidget_devtype_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::devType();
        }
        auto devtype_cb = textgrammarcheck__languagetoolconfigwidget_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textgrammarcheck__languagetoolconfigwidget_setvisible_isbase) {
            textgrammarcheck__languagetoolconfigwidget_setvisible_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::setVisible(visible);
            return;
        }
        auto setvisible_cb = textgrammarcheck__languagetoolconfigwidget_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textgrammarcheck__languagetoolconfigwidget_sizehint_isbase) {
            textgrammarcheck__languagetoolconfigwidget_sizehint_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::sizeHint();
        }
        auto sizehint_cb = textgrammarcheck__languagetoolconfigwidget_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textgrammarcheck__languagetoolconfigwidget_minimumsizehint_isbase) {
            textgrammarcheck__languagetoolconfigwidget_minimumsizehint_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::minimumSizeHint();
        }
        auto minimumsizehint_cb = textgrammarcheck__languagetoolconfigwidget_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textgrammarcheck__languagetoolconfigwidget_heightforwidth_isbase) {
            textgrammarcheck__languagetoolconfigwidget_heightforwidth_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::heightForWidth(param1);
        }
        auto heightforwidth_cb = textgrammarcheck__languagetoolconfigwidget_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textgrammarcheck__languagetoolconfigwidget_hasheightforwidth_isbase) {
            textgrammarcheck__languagetoolconfigwidget_hasheightforwidth_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = textgrammarcheck__languagetoolconfigwidget_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textgrammarcheck__languagetoolconfigwidget_paintengine_isbase) {
            textgrammarcheck__languagetoolconfigwidget_paintengine_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::paintEngine();
        }
        auto paintengine_cb = textgrammarcheck__languagetoolconfigwidget_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_event_isbase) {
            textgrammarcheck__languagetoolconfigwidget_event_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::event(event);
        }
        auto event_cb = textgrammarcheck__languagetoolconfigwidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_mousepressevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_mousepressevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = textgrammarcheck__languagetoolconfigwidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_mousereleaseevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_mousereleaseevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = textgrammarcheck__languagetoolconfigwidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_mousedoubleclickevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_mousedoubleclickevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = textgrammarcheck__languagetoolconfigwidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_mousemoveevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_mousemoveevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = textgrammarcheck__languagetoolconfigwidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_wheelevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_wheelevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = textgrammarcheck__languagetoolconfigwidget_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_keypressevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_keypressevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = textgrammarcheck__languagetoolconfigwidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_keyreleaseevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_keyreleaseevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = textgrammarcheck__languagetoolconfigwidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_focusinevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_focusinevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = textgrammarcheck__languagetoolconfigwidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_focusoutevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_focusoutevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = textgrammarcheck__languagetoolconfigwidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_enterevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_enterevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::enterEvent(event);
            return;
        }
        auto enterevent_cb = textgrammarcheck__languagetoolconfigwidget_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_leaveevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_leaveevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = textgrammarcheck__languagetoolconfigwidget_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_paintevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_paintevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::paintEvent(event);
            return;
        }
        auto paintevent_cb = textgrammarcheck__languagetoolconfigwidget_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_moveevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_moveevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = textgrammarcheck__languagetoolconfigwidget_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_resizeevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_resizeevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = textgrammarcheck__languagetoolconfigwidget_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_closeevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_closeevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = textgrammarcheck__languagetoolconfigwidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_contextmenuevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_contextmenuevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = textgrammarcheck__languagetoolconfigwidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_tabletevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_tabletevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = textgrammarcheck__languagetoolconfigwidget_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_actionevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_actionevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::actionEvent(event);
            return;
        }
        auto actionevent_cb = textgrammarcheck__languagetoolconfigwidget_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_dragenterevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_dragenterevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = textgrammarcheck__languagetoolconfigwidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_dragmoveevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_dragmoveevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = textgrammarcheck__languagetoolconfigwidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_dragleaveevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_dragleaveevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = textgrammarcheck__languagetoolconfigwidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_dropevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_dropevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::dropEvent(event);
            return;
        }
        auto dropevent_cb = textgrammarcheck__languagetoolconfigwidget_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_showevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_showevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::showEvent(event);
            return;
        }
        auto showevent_cb = textgrammarcheck__languagetoolconfigwidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_hideevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_hideevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::hideEvent(event);
            return;
        }
        auto hideevent_cb = textgrammarcheck__languagetoolconfigwidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textgrammarcheck__languagetoolconfigwidget_nativeevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_nativeevent_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = textgrammarcheck__languagetoolconfigwidget_nativeevent_callback;
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
        return TextGrammarCheck__LanguageToolConfigWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textgrammarcheck__languagetoolconfigwidget_changeevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_changeevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::changeEvent(param1);
            return;
        }
        auto changeevent_cb = textgrammarcheck__languagetoolconfigwidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textgrammarcheck__languagetoolconfigwidget_metric_isbase) {
            textgrammarcheck__languagetoolconfigwidget_metric_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::metric(param1);
        }
        auto metric_cb = textgrammarcheck__languagetoolconfigwidget_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textgrammarcheck__languagetoolconfigwidget_initpainter_isbase) {
            textgrammarcheck__languagetoolconfigwidget_initpainter_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::initPainter(painter);
            return;
        }
        auto initpainter_cb = textgrammarcheck__languagetoolconfigwidget_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textgrammarcheck__languagetoolconfigwidget_redirected_isbase) {
            textgrammarcheck__languagetoolconfigwidget_redirected_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::redirected(offset);
        }
        auto redirected_cb = textgrammarcheck__languagetoolconfigwidget_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textgrammarcheck__languagetoolconfigwidget_sharedpainter_isbase) {
            textgrammarcheck__languagetoolconfigwidget_sharedpainter_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::sharedPainter();
        }
        auto sharedpainter_cb = textgrammarcheck__languagetoolconfigwidget_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textgrammarcheck__languagetoolconfigwidget_inputmethodevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_inputmethodevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = textgrammarcheck__languagetoolconfigwidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textgrammarcheck__languagetoolconfigwidget_inputmethodquery_isbase) {
            textgrammarcheck__languagetoolconfigwidget_inputmethodquery_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = textgrammarcheck__languagetoolconfigwidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textgrammarcheck__languagetoolconfigwidget_focusnextprevchild_isbase) {
            textgrammarcheck__languagetoolconfigwidget_focusnextprevchild_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = textgrammarcheck__languagetoolconfigwidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_eventfilter_isbase) {
            textgrammarcheck__languagetoolconfigwidget_eventfilter_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::eventFilter(watched, event);
        }
        auto eventfilter_cb = textgrammarcheck__languagetoolconfigwidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_timerevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_timerevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::timerEvent(event);
            return;
        }
        auto timerevent_cb = textgrammarcheck__languagetoolconfigwidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_childevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_childevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::childEvent(event);
            return;
        }
        auto childevent_cb = textgrammarcheck__languagetoolconfigwidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_customevent_isbase) {
            textgrammarcheck__languagetoolconfigwidget_customevent_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::customEvent(event);
            return;
        }
        auto customevent_cb = textgrammarcheck__languagetoolconfigwidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__languagetoolconfigwidget_connectnotify_isbase) {
            textgrammarcheck__languagetoolconfigwidget_connectnotify_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textgrammarcheck__languagetoolconfigwidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__languagetoolconfigwidget_disconnectnotify_isbase) {
            textgrammarcheck__languagetoolconfigwidget_disconnectnotify_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textgrammarcheck__languagetoolconfigwidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (textgrammarcheck__languagetoolconfigwidget_updatemicrofocus_isbase) {
            textgrammarcheck__languagetoolconfigwidget_updatemicrofocus_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = textgrammarcheck__languagetoolconfigwidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (textgrammarcheck__languagetoolconfigwidget_create_isbase) {
            textgrammarcheck__languagetoolconfigwidget_create_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::create();
            return;
        }
        auto create_cb = textgrammarcheck__languagetoolconfigwidget_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (textgrammarcheck__languagetoolconfigwidget_destroy_isbase) {
            textgrammarcheck__languagetoolconfigwidget_destroy_isbase = false;
            TextGrammarCheck__LanguageToolConfigWidget::destroy();
            return;
        }
        auto destroy_cb = textgrammarcheck__languagetoolconfigwidget_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (textgrammarcheck__languagetoolconfigwidget_focusnextchild_isbase) {
            textgrammarcheck__languagetoolconfigwidget_focusnextchild_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::focusNextChild();
        }
        auto focusnextchild_cb = textgrammarcheck__languagetoolconfigwidget_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (textgrammarcheck__languagetoolconfigwidget_focuspreviouschild_isbase) {
            textgrammarcheck__languagetoolconfigwidget_focuspreviouschild_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::focusPreviousChild();
        }
        auto focuspreviouschild_cb = textgrammarcheck__languagetoolconfigwidget_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textgrammarcheck__languagetoolconfigwidget_sender_isbase) {
            textgrammarcheck__languagetoolconfigwidget_sender_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::sender();
        }
        auto sender_cb = textgrammarcheck__languagetoolconfigwidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textgrammarcheck__languagetoolconfigwidget_sendersignalindex_isbase) {
            textgrammarcheck__languagetoolconfigwidget_sendersignalindex_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = textgrammarcheck__languagetoolconfigwidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textgrammarcheck__languagetoolconfigwidget_receivers_isbase) {
            textgrammarcheck__languagetoolconfigwidget_receivers_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::receivers(signal);
        }
        auto receivers_cb = textgrammarcheck__languagetoolconfigwidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textgrammarcheck__languagetoolconfigwidget_issignalconnected_isbase) {
            textgrammarcheck__languagetoolconfigwidget_issignalconnected_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textgrammarcheck__languagetoolconfigwidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (textgrammarcheck__languagetoolconfigwidget_getdecodedmetricf_isbase) {
            textgrammarcheck__languagetoolconfigwidget_getdecodedmetricf_isbase = false;
            return TextGrammarCheck__LanguageToolConfigWidget::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = textgrammarcheck__languagetoolconfigwidget_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigWidget::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool TextGrammarCheck__LanguageToolConfigWidget_Event(TextGrammarCheck::LanguageToolConfigWidget* self, QEvent* event);
    friend bool TextGrammarCheck__LanguageToolConfigWidget_SuperEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_MousePressEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperMousePressEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_MouseReleaseEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperMouseReleaseEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_MouseDoubleClickEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperMouseDoubleClickEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_MouseMoveEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperMouseMoveEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_WheelEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QWheelEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperWheelEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QWheelEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_KeyPressEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperKeyPressEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_KeyReleaseEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperKeyReleaseEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_FocusInEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperFocusInEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_FocusOutEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperFocusOutEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_EnterEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperEnterEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_LeaveEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperLeaveEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_PaintEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QPaintEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperPaintEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QPaintEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_MoveEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperMoveEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_ResizeEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QResizeEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperResizeEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QResizeEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_CloseEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QCloseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperCloseEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QCloseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_ContextMenuEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QContextMenuEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperContextMenuEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QContextMenuEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_TabletEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QTabletEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperTabletEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QTabletEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_ActionEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QActionEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperActionEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QActionEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_DragEnterEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperDragEnterEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_DragMoveEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperDragMoveEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_DragLeaveEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperDragLeaveEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_DropEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QDropEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperDropEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QDropEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_ShowEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QShowEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperShowEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QShowEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_HideEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QHideEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperHideEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QHideEvent* event);
    friend bool TextGrammarCheck__LanguageToolConfigWidget_NativeEvent(TextGrammarCheck::LanguageToolConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextGrammarCheck__LanguageToolConfigWidget_SuperNativeEvent(TextGrammarCheck::LanguageToolConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextGrammarCheck__LanguageToolConfigWidget_ChangeEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QEvent* param1);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperChangeEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QEvent* param1);
    friend int TextGrammarCheck__LanguageToolConfigWidget_Metric(const TextGrammarCheck::LanguageToolConfigWidget* self, int param1);
    friend int TextGrammarCheck__LanguageToolConfigWidget_SuperMetric(const TextGrammarCheck::LanguageToolConfigWidget* self, int param1);
    friend void TextGrammarCheck__LanguageToolConfigWidget_InitPainter(const TextGrammarCheck::LanguageToolConfigWidget* self, QPainter* painter);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperInitPainter(const TextGrammarCheck::LanguageToolConfigWidget* self, QPainter* painter);
    friend QPaintDevice* TextGrammarCheck__LanguageToolConfigWidget_Redirected(const TextGrammarCheck::LanguageToolConfigWidget* self, QPoint* offset);
    friend QPaintDevice* TextGrammarCheck__LanguageToolConfigWidget_SuperRedirected(const TextGrammarCheck::LanguageToolConfigWidget* self, QPoint* offset);
    friend QPainter* TextGrammarCheck__LanguageToolConfigWidget_SharedPainter(const TextGrammarCheck::LanguageToolConfigWidget* self);
    friend QPainter* TextGrammarCheck__LanguageToolConfigWidget_SuperSharedPainter(const TextGrammarCheck::LanguageToolConfigWidget* self);
    friend void TextGrammarCheck__LanguageToolConfigWidget_InputMethodEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QInputMethodEvent* param1);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperInputMethodEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QInputMethodEvent* param1);
    friend bool TextGrammarCheck__LanguageToolConfigWidget_FocusNextPrevChild(TextGrammarCheck::LanguageToolConfigWidget* self, bool next);
    friend bool TextGrammarCheck__LanguageToolConfigWidget_SuperFocusNextPrevChild(TextGrammarCheck::LanguageToolConfigWidget* self, bool next);
    friend void TextGrammarCheck__LanguageToolConfigWidget_TimerEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QTimerEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperTimerEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QTimerEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_ChildEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QChildEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperChildEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QChildEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_CustomEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperCustomEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_ConnectNotify(TextGrammarCheck::LanguageToolConfigWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperConnectNotify(TextGrammarCheck::LanguageToolConfigWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__LanguageToolConfigWidget_DisconnectNotify(TextGrammarCheck::LanguageToolConfigWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperDisconnectNotify(TextGrammarCheck::LanguageToolConfigWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__LanguageToolConfigWidget_UpdateMicroFocus(TextGrammarCheck::LanguageToolConfigWidget* self);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperUpdateMicroFocus(TextGrammarCheck::LanguageToolConfigWidget* self);
    friend void TextGrammarCheck__LanguageToolConfigWidget_Create(TextGrammarCheck::LanguageToolConfigWidget* self);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperCreate(TextGrammarCheck::LanguageToolConfigWidget* self);
    friend void TextGrammarCheck__LanguageToolConfigWidget_Destroy(TextGrammarCheck::LanguageToolConfigWidget* self);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperDestroy(TextGrammarCheck::LanguageToolConfigWidget* self);
    friend bool TextGrammarCheck__LanguageToolConfigWidget_FocusNextChild(TextGrammarCheck::LanguageToolConfigWidget* self);
    friend bool TextGrammarCheck__LanguageToolConfigWidget_SuperFocusNextChild(TextGrammarCheck::LanguageToolConfigWidget* self);
    friend bool TextGrammarCheck__LanguageToolConfigWidget_FocusPreviousChild(TextGrammarCheck::LanguageToolConfigWidget* self);
    friend bool TextGrammarCheck__LanguageToolConfigWidget_SuperFocusPreviousChild(TextGrammarCheck::LanguageToolConfigWidget* self);
    friend QObject* TextGrammarCheck__LanguageToolConfigWidget_Sender(const TextGrammarCheck::LanguageToolConfigWidget* self);
    friend QObject* TextGrammarCheck__LanguageToolConfigWidget_SuperSender(const TextGrammarCheck::LanguageToolConfigWidget* self);
    friend int TextGrammarCheck__LanguageToolConfigWidget_SenderSignalIndex(const TextGrammarCheck::LanguageToolConfigWidget* self);
    friend int TextGrammarCheck__LanguageToolConfigWidget_SuperSenderSignalIndex(const TextGrammarCheck::LanguageToolConfigWidget* self);
    friend int TextGrammarCheck__LanguageToolConfigWidget_Receivers(const TextGrammarCheck::LanguageToolConfigWidget* self, const char* signal);
    friend int TextGrammarCheck__LanguageToolConfigWidget_SuperReceivers(const TextGrammarCheck::LanguageToolConfigWidget* self, const char* signal);
    friend bool TextGrammarCheck__LanguageToolConfigWidget_IsSignalConnected(const TextGrammarCheck::LanguageToolConfigWidget* self, const QMetaMethod* signal);
    friend bool TextGrammarCheck__LanguageToolConfigWidget_SuperIsSignalConnected(const TextGrammarCheck::LanguageToolConfigWidget* self, const QMetaMethod* signal);
    friend double TextGrammarCheck__LanguageToolConfigWidget_GetDecodedMetricF(const TextGrammarCheck::LanguageToolConfigWidget* self, int metricA, int metricB);
    friend double TextGrammarCheck__LanguageToolConfigWidget_SuperGetDecodedMetricF(const TextGrammarCheck::LanguageToolConfigWidget* self, int metricA, int metricB);
};

#endif
