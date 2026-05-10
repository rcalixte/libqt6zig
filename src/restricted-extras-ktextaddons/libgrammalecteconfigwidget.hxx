#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALGRAMMALECTECONFIGWIDGET_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALGRAMMALECTECONFIGWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::GrammalecteConfigWidget so that we can call protected methods
class VirtualTextGrammarCheckGrammalecteConfigWidget final : public TextGrammarCheck::GrammalecteConfigWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualTextGrammarCheckGrammalecteConfigWidget = true;

    // Virtual class public types (including callbacks)
    using TextGrammarCheck__GrammalecteConfigWidget_MetaObject_Callback = QMetaObject* (*)();
    using TextGrammarCheck__GrammalecteConfigWidget_Metacast_Callback = void* (*)(TextGrammarCheck__GrammalecteConfigWidget*, const char*);
    using TextGrammarCheck__GrammalecteConfigWidget_Metacall_Callback = int (*)(TextGrammarCheck__GrammalecteConfigWidget*, int, int, void**);
    using TextGrammarCheck__GrammalecteConfigWidget_DevType_Callback = int (*)();
    using TextGrammarCheck__GrammalecteConfigWidget_SetVisible_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, bool);
    using TextGrammarCheck__GrammalecteConfigWidget_SizeHint_Callback = QSize* (*)();
    using TextGrammarCheck__GrammalecteConfigWidget_MinimumSizeHint_Callback = QSize* (*)();
    using TextGrammarCheck__GrammalecteConfigWidget_HeightForWidth_Callback = int (*)(const TextGrammarCheck__GrammalecteConfigWidget*, int);
    using TextGrammarCheck__GrammalecteConfigWidget_HasHeightForWidth_Callback = bool (*)();
    using TextGrammarCheck__GrammalecteConfigWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using TextGrammarCheck__GrammalecteConfigWidget_Event_Callback = bool (*)(TextGrammarCheck__GrammalecteConfigWidget*, QEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_MousePressEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_MouseReleaseEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_MouseDoubleClickEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_MouseMoveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_WheelEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QWheelEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_KeyPressEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QKeyEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_KeyReleaseEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QKeyEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_FocusInEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QFocusEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_FocusOutEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QFocusEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_EnterEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QEnterEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_LeaveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_PaintEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QPaintEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_MoveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QMoveEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_ResizeEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QResizeEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_CloseEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QCloseEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_ContextMenuEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QContextMenuEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_TabletEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QTabletEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_ActionEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QActionEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_DragEnterEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QDragEnterEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_DragMoveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QDragMoveEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_DragLeaveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QDragLeaveEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_DropEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QDropEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_ShowEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QShowEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_HideEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QHideEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_NativeEvent_Callback = bool (*)(TextGrammarCheck__GrammalecteConfigWidget*, libqt_string, void*, intptr_t*);
    using TextGrammarCheck__GrammalecteConfigWidget_ChangeEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_Metric_Callback = int (*)(const TextGrammarCheck__GrammalecteConfigWidget*, int);
    using TextGrammarCheck__GrammalecteConfigWidget_InitPainter_Callback = void (*)(const TextGrammarCheck__GrammalecteConfigWidget*, QPainter*);
    using TextGrammarCheck__GrammalecteConfigWidget_Redirected_Callback = QPaintDevice* (*)(const TextGrammarCheck__GrammalecteConfigWidget*, QPoint*);
    using TextGrammarCheck__GrammalecteConfigWidget_SharedPainter_Callback = QPainter* (*)();
    using TextGrammarCheck__GrammalecteConfigWidget_InputMethodEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QInputMethodEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_InputMethodQuery_Callback = QVariant* (*)(const TextGrammarCheck__GrammalecteConfigWidget*, int);
    using TextGrammarCheck__GrammalecteConfigWidget_FocusNextPrevChild_Callback = bool (*)(TextGrammarCheck__GrammalecteConfigWidget*, bool);
    using TextGrammarCheck__GrammalecteConfigWidget_EventFilter_Callback = bool (*)(TextGrammarCheck__GrammalecteConfigWidget*, QObject*, QEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_TimerEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QTimerEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_ChildEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QChildEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_CustomEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_ConnectNotify_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QMetaMethod*);
    using TextGrammarCheck__GrammalecteConfigWidget_DisconnectNotify_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QMetaMethod*);
    using TextGrammarCheck__GrammalecteConfigWidget_UpdateMicroFocus_Callback = void (*)();
    using TextGrammarCheck__GrammalecteConfigWidget_Create_Callback = void (*)();
    using TextGrammarCheck__GrammalecteConfigWidget_Destroy_Callback = void (*)();
    using TextGrammarCheck__GrammalecteConfigWidget_FocusNextChild_Callback = bool (*)();
    using TextGrammarCheck__GrammalecteConfigWidget_FocusPreviousChild_Callback = bool (*)();
    using TextGrammarCheck__GrammalecteConfigWidget_Sender_Callback = QObject* (*)();
    using TextGrammarCheck__GrammalecteConfigWidget_SenderSignalIndex_Callback = int (*)();
    using TextGrammarCheck__GrammalecteConfigWidget_Receivers_Callback = int (*)(const TextGrammarCheck__GrammalecteConfigWidget*, const char*);
    using TextGrammarCheck__GrammalecteConfigWidget_IsSignalConnected_Callback = bool (*)(const TextGrammarCheck__GrammalecteConfigWidget*, QMetaMethod*);
    using TextGrammarCheck__GrammalecteConfigWidget_GetDecodedMetricF_Callback = double (*)(const TextGrammarCheck__GrammalecteConfigWidget*, int, int);

  protected:
    // Instance callback storage
    TextGrammarCheck__GrammalecteConfigWidget_MetaObject_Callback textgrammarcheck__grammalecteconfigwidget_metaobject_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_Metacast_Callback textgrammarcheck__grammalecteconfigwidget_metacast_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_Metacall_Callback textgrammarcheck__grammalecteconfigwidget_metacall_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_DevType_Callback textgrammarcheck__grammalecteconfigwidget_devtype_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_SetVisible_Callback textgrammarcheck__grammalecteconfigwidget_setvisible_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_SizeHint_Callback textgrammarcheck__grammalecteconfigwidget_sizehint_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_MinimumSizeHint_Callback textgrammarcheck__grammalecteconfigwidget_minimumsizehint_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_HeightForWidth_Callback textgrammarcheck__grammalecteconfigwidget_heightforwidth_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_HasHeightForWidth_Callback textgrammarcheck__grammalecteconfigwidget_hasheightforwidth_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_PaintEngine_Callback textgrammarcheck__grammalecteconfigwidget_paintengine_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_Event_Callback textgrammarcheck__grammalecteconfigwidget_event_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_MousePressEvent_Callback textgrammarcheck__grammalecteconfigwidget_mousepressevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_MouseReleaseEvent_Callback textgrammarcheck__grammalecteconfigwidget_mousereleaseevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_MouseDoubleClickEvent_Callback textgrammarcheck__grammalecteconfigwidget_mousedoubleclickevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_MouseMoveEvent_Callback textgrammarcheck__grammalecteconfigwidget_mousemoveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_WheelEvent_Callback textgrammarcheck__grammalecteconfigwidget_wheelevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_KeyPressEvent_Callback textgrammarcheck__grammalecteconfigwidget_keypressevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_KeyReleaseEvent_Callback textgrammarcheck__grammalecteconfigwidget_keyreleaseevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_FocusInEvent_Callback textgrammarcheck__grammalecteconfigwidget_focusinevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_FocusOutEvent_Callback textgrammarcheck__grammalecteconfigwidget_focusoutevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_EnterEvent_Callback textgrammarcheck__grammalecteconfigwidget_enterevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_LeaveEvent_Callback textgrammarcheck__grammalecteconfigwidget_leaveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_PaintEvent_Callback textgrammarcheck__grammalecteconfigwidget_paintevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_MoveEvent_Callback textgrammarcheck__grammalecteconfigwidget_moveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_ResizeEvent_Callback textgrammarcheck__grammalecteconfigwidget_resizeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_CloseEvent_Callback textgrammarcheck__grammalecteconfigwidget_closeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_ContextMenuEvent_Callback textgrammarcheck__grammalecteconfigwidget_contextmenuevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_TabletEvent_Callback textgrammarcheck__grammalecteconfigwidget_tabletevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_ActionEvent_Callback textgrammarcheck__grammalecteconfigwidget_actionevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_DragEnterEvent_Callback textgrammarcheck__grammalecteconfigwidget_dragenterevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_DragMoveEvent_Callback textgrammarcheck__grammalecteconfigwidget_dragmoveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_DragLeaveEvent_Callback textgrammarcheck__grammalecteconfigwidget_dragleaveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_DropEvent_Callback textgrammarcheck__grammalecteconfigwidget_dropevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_ShowEvent_Callback textgrammarcheck__grammalecteconfigwidget_showevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_HideEvent_Callback textgrammarcheck__grammalecteconfigwidget_hideevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_NativeEvent_Callback textgrammarcheck__grammalecteconfigwidget_nativeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_ChangeEvent_Callback textgrammarcheck__grammalecteconfigwidget_changeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_Metric_Callback textgrammarcheck__grammalecteconfigwidget_metric_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_InitPainter_Callback textgrammarcheck__grammalecteconfigwidget_initpainter_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_Redirected_Callback textgrammarcheck__grammalecteconfigwidget_redirected_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_SharedPainter_Callback textgrammarcheck__grammalecteconfigwidget_sharedpainter_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_InputMethodEvent_Callback textgrammarcheck__grammalecteconfigwidget_inputmethodevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_InputMethodQuery_Callback textgrammarcheck__grammalecteconfigwidget_inputmethodquery_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_FocusNextPrevChild_Callback textgrammarcheck__grammalecteconfigwidget_focusnextprevchild_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_EventFilter_Callback textgrammarcheck__grammalecteconfigwidget_eventfilter_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_TimerEvent_Callback textgrammarcheck__grammalecteconfigwidget_timerevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_ChildEvent_Callback textgrammarcheck__grammalecteconfigwidget_childevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_CustomEvent_Callback textgrammarcheck__grammalecteconfigwidget_customevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_ConnectNotify_Callback textgrammarcheck__grammalecteconfigwidget_connectnotify_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_DisconnectNotify_Callback textgrammarcheck__grammalecteconfigwidget_disconnectnotify_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_UpdateMicroFocus_Callback textgrammarcheck__grammalecteconfigwidget_updatemicrofocus_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_Create_Callback textgrammarcheck__grammalecteconfigwidget_create_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_Destroy_Callback textgrammarcheck__grammalecteconfigwidget_destroy_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_FocusNextChild_Callback textgrammarcheck__grammalecteconfigwidget_focusnextchild_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_FocusPreviousChild_Callback textgrammarcheck__grammalecteconfigwidget_focuspreviouschild_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_Sender_Callback textgrammarcheck__grammalecteconfigwidget_sender_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_SenderSignalIndex_Callback textgrammarcheck__grammalecteconfigwidget_sendersignalindex_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_Receivers_Callback textgrammarcheck__grammalecteconfigwidget_receivers_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_IsSignalConnected_Callback textgrammarcheck__grammalecteconfigwidget_issignalconnected_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_GetDecodedMetricF_Callback textgrammarcheck__grammalecteconfigwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool textgrammarcheck__grammalecteconfigwidget_metaobject_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_metacast_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_metacall_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_devtype_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_setvisible_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_sizehint_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_minimumsizehint_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_heightforwidth_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_hasheightforwidth_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_paintengine_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_event_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_mousepressevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_mousereleaseevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_mousedoubleclickevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_mousemoveevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_wheelevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_keypressevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_keyreleaseevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_focusinevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_focusoutevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_enterevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_leaveevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_paintevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_moveevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_resizeevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_closeevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_contextmenuevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_tabletevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_actionevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_dragenterevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_dragmoveevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_dragleaveevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_dropevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_showevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_hideevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_nativeevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_changeevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_metric_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_initpainter_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_redirected_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_sharedpainter_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_inputmethodevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_inputmethodquery_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_focusnextprevchild_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_eventfilter_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_timerevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_childevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_customevent_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_connectnotify_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_disconnectnotify_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_updatemicrofocus_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_create_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_destroy_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_focusnextchild_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_focuspreviouschild_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_sender_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_sendersignalindex_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_receivers_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_issignalconnected_isbase = false;
    mutable bool textgrammarcheck__grammalecteconfigwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualTextGrammarCheckGrammalecteConfigWidget(QWidget* parent) : TextGrammarCheck::GrammalecteConfigWidget(parent) {};
    VirtualTextGrammarCheckGrammalecteConfigWidget() : TextGrammarCheck::GrammalecteConfigWidget() {};
    VirtualTextGrammarCheckGrammalecteConfigWidget(QWidget* parent, bool disableMessageBox) : TextGrammarCheck::GrammalecteConfigWidget(parent, disableMessageBox) {};

    // Callback setters
    inline void setTextGrammarCheck__GrammalecteConfigWidget_MetaObject_Callback(TextGrammarCheck__GrammalecteConfigWidget_MetaObject_Callback cb) { textgrammarcheck__grammalecteconfigwidget_metaobject_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_Metacast_Callback(TextGrammarCheck__GrammalecteConfigWidget_Metacast_Callback cb) { textgrammarcheck__grammalecteconfigwidget_metacast_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_Metacall_Callback(TextGrammarCheck__GrammalecteConfigWidget_Metacall_Callback cb) { textgrammarcheck__grammalecteconfigwidget_metacall_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_DevType_Callback(TextGrammarCheck__GrammalecteConfigWidget_DevType_Callback cb) { textgrammarcheck__grammalecteconfigwidget_devtype_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_SetVisible_Callback(TextGrammarCheck__GrammalecteConfigWidget_SetVisible_Callback cb) { textgrammarcheck__grammalecteconfigwidget_setvisible_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_SizeHint_Callback(TextGrammarCheck__GrammalecteConfigWidget_SizeHint_Callback cb) { textgrammarcheck__grammalecteconfigwidget_sizehint_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_MinimumSizeHint_Callback(TextGrammarCheck__GrammalecteConfigWidget_MinimumSizeHint_Callback cb) { textgrammarcheck__grammalecteconfigwidget_minimumsizehint_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_HeightForWidth_Callback(TextGrammarCheck__GrammalecteConfigWidget_HeightForWidth_Callback cb) { textgrammarcheck__grammalecteconfigwidget_heightforwidth_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_HasHeightForWidth_Callback(TextGrammarCheck__GrammalecteConfigWidget_HasHeightForWidth_Callback cb) { textgrammarcheck__grammalecteconfigwidget_hasheightforwidth_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_PaintEngine_Callback(TextGrammarCheck__GrammalecteConfigWidget_PaintEngine_Callback cb) { textgrammarcheck__grammalecteconfigwidget_paintengine_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_Event_Callback(TextGrammarCheck__GrammalecteConfigWidget_Event_Callback cb) { textgrammarcheck__grammalecteconfigwidget_event_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_MousePressEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_MousePressEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_mousepressevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_MouseReleaseEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_MouseReleaseEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_mousereleaseevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_MouseDoubleClickEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_MouseDoubleClickEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_mousedoubleclickevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_MouseMoveEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_MouseMoveEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_mousemoveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_WheelEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_WheelEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_wheelevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_KeyPressEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_KeyPressEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_keypressevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_KeyReleaseEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_KeyReleaseEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_keyreleaseevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_FocusInEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_FocusInEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_focusinevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_FocusOutEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_FocusOutEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_focusoutevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_EnterEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_EnterEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_enterevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_LeaveEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_LeaveEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_leaveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_PaintEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_PaintEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_paintevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_MoveEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_MoveEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_moveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_ResizeEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_ResizeEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_resizeevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_CloseEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_CloseEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_closeevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_ContextMenuEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_ContextMenuEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_contextmenuevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_TabletEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_TabletEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_tabletevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_ActionEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_ActionEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_actionevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_DragEnterEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_DragEnterEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_dragenterevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_DragMoveEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_DragMoveEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_dragmoveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_DragLeaveEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_DragLeaveEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_dragleaveevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_DropEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_DropEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_dropevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_ShowEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_ShowEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_showevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_HideEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_HideEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_hideevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_NativeEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_NativeEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_nativeevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_ChangeEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_ChangeEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_changeevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_Metric_Callback(TextGrammarCheck__GrammalecteConfigWidget_Metric_Callback cb) { textgrammarcheck__grammalecteconfigwidget_metric_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_InitPainter_Callback(TextGrammarCheck__GrammalecteConfigWidget_InitPainter_Callback cb) { textgrammarcheck__grammalecteconfigwidget_initpainter_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_Redirected_Callback(TextGrammarCheck__GrammalecteConfigWidget_Redirected_Callback cb) { textgrammarcheck__grammalecteconfigwidget_redirected_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_SharedPainter_Callback(TextGrammarCheck__GrammalecteConfigWidget_SharedPainter_Callback cb) { textgrammarcheck__grammalecteconfigwidget_sharedpainter_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_InputMethodEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_InputMethodEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_inputmethodevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_InputMethodQuery_Callback(TextGrammarCheck__GrammalecteConfigWidget_InputMethodQuery_Callback cb) { textgrammarcheck__grammalecteconfigwidget_inputmethodquery_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_FocusNextPrevChild_Callback(TextGrammarCheck__GrammalecteConfigWidget_FocusNextPrevChild_Callback cb) { textgrammarcheck__grammalecteconfigwidget_focusnextprevchild_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_EventFilter_Callback(TextGrammarCheck__GrammalecteConfigWidget_EventFilter_Callback cb) { textgrammarcheck__grammalecteconfigwidget_eventfilter_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_TimerEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_TimerEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_timerevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_ChildEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_ChildEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_childevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_CustomEvent_Callback(TextGrammarCheck__GrammalecteConfigWidget_CustomEvent_Callback cb) { textgrammarcheck__grammalecteconfigwidget_customevent_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_ConnectNotify_Callback(TextGrammarCheck__GrammalecteConfigWidget_ConnectNotify_Callback cb) { textgrammarcheck__grammalecteconfigwidget_connectnotify_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_DisconnectNotify_Callback(TextGrammarCheck__GrammalecteConfigWidget_DisconnectNotify_Callback cb) { textgrammarcheck__grammalecteconfigwidget_disconnectnotify_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_UpdateMicroFocus_Callback(TextGrammarCheck__GrammalecteConfigWidget_UpdateMicroFocus_Callback cb) { textgrammarcheck__grammalecteconfigwidget_updatemicrofocus_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_Create_Callback(TextGrammarCheck__GrammalecteConfigWidget_Create_Callback cb) { textgrammarcheck__grammalecteconfigwidget_create_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_Destroy_Callback(TextGrammarCheck__GrammalecteConfigWidget_Destroy_Callback cb) { textgrammarcheck__grammalecteconfigwidget_destroy_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_FocusNextChild_Callback(TextGrammarCheck__GrammalecteConfigWidget_FocusNextChild_Callback cb) { textgrammarcheck__grammalecteconfigwidget_focusnextchild_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_FocusPreviousChild_Callback(TextGrammarCheck__GrammalecteConfigWidget_FocusPreviousChild_Callback cb) { textgrammarcheck__grammalecteconfigwidget_focuspreviouschild_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_Sender_Callback(TextGrammarCheck__GrammalecteConfigWidget_Sender_Callback cb) { textgrammarcheck__grammalecteconfigwidget_sender_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_SenderSignalIndex_Callback(TextGrammarCheck__GrammalecteConfigWidget_SenderSignalIndex_Callback cb) { textgrammarcheck__grammalecteconfigwidget_sendersignalindex_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_Receivers_Callback(TextGrammarCheck__GrammalecteConfigWidget_Receivers_Callback cb) { textgrammarcheck__grammalecteconfigwidget_receivers_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_IsSignalConnected_Callback(TextGrammarCheck__GrammalecteConfigWidget_IsSignalConnected_Callback cb) { textgrammarcheck__grammalecteconfigwidget_issignalconnected_callback = cb; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_GetDecodedMetricF_Callback(TextGrammarCheck__GrammalecteConfigWidget_GetDecodedMetricF_Callback cb) { textgrammarcheck__grammalecteconfigwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextGrammarCheck__GrammalecteConfigWidget_MetaObject_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_metaobject_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_Metacast_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_metacast_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_Metacall_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_metacall_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_DevType_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_devtype_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_SetVisible_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_setvisible_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_SizeHint_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_sizehint_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_MinimumSizeHint_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_minimumsizehint_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_HeightForWidth_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_heightforwidth_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_HasHeightForWidth_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_hasheightforwidth_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_PaintEngine_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_paintengine_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_Event_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_event_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_MousePressEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_mousepressevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_MouseReleaseEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_mousereleaseevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_MouseDoubleClickEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_mousedoubleclickevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_MouseMoveEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_mousemoveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_WheelEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_wheelevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_KeyPressEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_keypressevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_KeyReleaseEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_keyreleaseevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_FocusInEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_focusinevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_FocusOutEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_focusoutevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_EnterEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_enterevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_LeaveEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_leaveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_PaintEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_paintevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_MoveEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_moveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_ResizeEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_resizeevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_CloseEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_closeevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_ContextMenuEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_contextmenuevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_TabletEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_tabletevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_ActionEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_actionevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_DragEnterEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_dragenterevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_DragMoveEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_dragmoveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_DragLeaveEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_dragleaveevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_DropEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_dropevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_ShowEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_showevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_HideEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_hideevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_NativeEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_nativeevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_ChangeEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_changeevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_Metric_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_metric_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_InitPainter_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_initpainter_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_Redirected_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_redirected_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_SharedPainter_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_sharedpainter_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_InputMethodEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_inputmethodevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_InputMethodQuery_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_inputmethodquery_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_FocusNextPrevChild_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_focusnextprevchild_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_EventFilter_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_eventfilter_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_TimerEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_timerevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_ChildEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_childevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_CustomEvent_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_customevent_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_ConnectNotify_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_connectnotify_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_DisconnectNotify_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_disconnectnotify_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_UpdateMicroFocus_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_updatemicrofocus_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_Create_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_create_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_Destroy_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_destroy_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_FocusNextChild_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_focusnextchild_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_FocusPreviousChild_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_focuspreviouschild_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_Sender_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_sender_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_SenderSignalIndex_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_sendersignalindex_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_Receivers_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_receivers_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_IsSignalConnected_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_issignalconnected_isbase = value; }
    inline void setTextGrammarCheck__GrammalecteConfigWidget_GetDecodedMetricF_IsBase(bool value) const { textgrammarcheck__grammalecteconfigwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__grammalecteconfigwidget_metaobject_isbase) {
            textgrammarcheck__grammalecteconfigwidget_metaobject_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::metaObject();
        }
        auto metaobject_cb = textgrammarcheck__grammalecteconfigwidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__grammalecteconfigwidget_metacast_isbase) {
            textgrammarcheck__grammalecteconfigwidget_metacast_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::qt_metacast(param1);
        }
        auto metacast_cb = textgrammarcheck__grammalecteconfigwidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__grammalecteconfigwidget_metacall_isbase) {
            textgrammarcheck__grammalecteconfigwidget_metacall_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textgrammarcheck__grammalecteconfigwidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textgrammarcheck__grammalecteconfigwidget_devtype_isbase) {
            textgrammarcheck__grammalecteconfigwidget_devtype_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::devType();
        }
        auto devtype_cb = textgrammarcheck__grammalecteconfigwidget_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textgrammarcheck__grammalecteconfigwidget_setvisible_isbase) {
            textgrammarcheck__grammalecteconfigwidget_setvisible_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::setVisible(visible);
            return;
        }
        auto setvisible_cb = textgrammarcheck__grammalecteconfigwidget_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textgrammarcheck__grammalecteconfigwidget_sizehint_isbase) {
            textgrammarcheck__grammalecteconfigwidget_sizehint_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::sizeHint();
        }
        auto sizehint_cb = textgrammarcheck__grammalecteconfigwidget_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textgrammarcheck__grammalecteconfigwidget_minimumsizehint_isbase) {
            textgrammarcheck__grammalecteconfigwidget_minimumsizehint_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::minimumSizeHint();
        }
        auto minimumsizehint_cb = textgrammarcheck__grammalecteconfigwidget_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textgrammarcheck__grammalecteconfigwidget_heightforwidth_isbase) {
            textgrammarcheck__grammalecteconfigwidget_heightforwidth_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::heightForWidth(param1);
        }
        auto heightforwidth_cb = textgrammarcheck__grammalecteconfigwidget_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textgrammarcheck__grammalecteconfigwidget_hasheightforwidth_isbase) {
            textgrammarcheck__grammalecteconfigwidget_hasheightforwidth_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = textgrammarcheck__grammalecteconfigwidget_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textgrammarcheck__grammalecteconfigwidget_paintengine_isbase) {
            textgrammarcheck__grammalecteconfigwidget_paintengine_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::paintEngine();
        }
        auto paintengine_cb = textgrammarcheck__grammalecteconfigwidget_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_event_isbase) {
            textgrammarcheck__grammalecteconfigwidget_event_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::event(event);
        }
        auto event_cb = textgrammarcheck__grammalecteconfigwidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_mousepressevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_mousepressevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = textgrammarcheck__grammalecteconfigwidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_mousereleaseevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_mousereleaseevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = textgrammarcheck__grammalecteconfigwidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_mousedoubleclickevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_mousedoubleclickevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = textgrammarcheck__grammalecteconfigwidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_mousemoveevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_mousemoveevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = textgrammarcheck__grammalecteconfigwidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_wheelevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_wheelevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = textgrammarcheck__grammalecteconfigwidget_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_keypressevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_keypressevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = textgrammarcheck__grammalecteconfigwidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_keyreleaseevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_keyreleaseevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = textgrammarcheck__grammalecteconfigwidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_focusinevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_focusinevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = textgrammarcheck__grammalecteconfigwidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_focusoutevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_focusoutevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = textgrammarcheck__grammalecteconfigwidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_enterevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_enterevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::enterEvent(event);
            return;
        }
        auto enterevent_cb = textgrammarcheck__grammalecteconfigwidget_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_leaveevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_leaveevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = textgrammarcheck__grammalecteconfigwidget_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_paintevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_paintevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::paintEvent(event);
            return;
        }
        auto paintevent_cb = textgrammarcheck__grammalecteconfigwidget_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_moveevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_moveevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = textgrammarcheck__grammalecteconfigwidget_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_resizeevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_resizeevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = textgrammarcheck__grammalecteconfigwidget_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_closeevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_closeevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = textgrammarcheck__grammalecteconfigwidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_contextmenuevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_contextmenuevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = textgrammarcheck__grammalecteconfigwidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_tabletevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_tabletevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = textgrammarcheck__grammalecteconfigwidget_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_actionevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_actionevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::actionEvent(event);
            return;
        }
        auto actionevent_cb = textgrammarcheck__grammalecteconfigwidget_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_dragenterevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_dragenterevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = textgrammarcheck__grammalecteconfigwidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_dragmoveevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_dragmoveevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = textgrammarcheck__grammalecteconfigwidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_dragleaveevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_dragleaveevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = textgrammarcheck__grammalecteconfigwidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_dropevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_dropevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::dropEvent(event);
            return;
        }
        auto dropevent_cb = textgrammarcheck__grammalecteconfigwidget_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_showevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_showevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::showEvent(event);
            return;
        }
        auto showevent_cb = textgrammarcheck__grammalecteconfigwidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_hideevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_hideevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::hideEvent(event);
            return;
        }
        auto hideevent_cb = textgrammarcheck__grammalecteconfigwidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textgrammarcheck__grammalecteconfigwidget_nativeevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_nativeevent_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = textgrammarcheck__grammalecteconfigwidget_nativeevent_callback;
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
        return TextGrammarCheck__GrammalecteConfigWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textgrammarcheck__grammalecteconfigwidget_changeevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_changeevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::changeEvent(param1);
            return;
        }
        auto changeevent_cb = textgrammarcheck__grammalecteconfigwidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textgrammarcheck__grammalecteconfigwidget_metric_isbase) {
            textgrammarcheck__grammalecteconfigwidget_metric_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::metric(param1);
        }
        auto metric_cb = textgrammarcheck__grammalecteconfigwidget_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textgrammarcheck__grammalecteconfigwidget_initpainter_isbase) {
            textgrammarcheck__grammalecteconfigwidget_initpainter_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::initPainter(painter);
            return;
        }
        auto initpainter_cb = textgrammarcheck__grammalecteconfigwidget_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textgrammarcheck__grammalecteconfigwidget_redirected_isbase) {
            textgrammarcheck__grammalecteconfigwidget_redirected_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::redirected(offset);
        }
        auto redirected_cb = textgrammarcheck__grammalecteconfigwidget_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textgrammarcheck__grammalecteconfigwidget_sharedpainter_isbase) {
            textgrammarcheck__grammalecteconfigwidget_sharedpainter_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::sharedPainter();
        }
        auto sharedpainter_cb = textgrammarcheck__grammalecteconfigwidget_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textgrammarcheck__grammalecteconfigwidget_inputmethodevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_inputmethodevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = textgrammarcheck__grammalecteconfigwidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textgrammarcheck__grammalecteconfigwidget_inputmethodquery_isbase) {
            textgrammarcheck__grammalecteconfigwidget_inputmethodquery_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = textgrammarcheck__grammalecteconfigwidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textgrammarcheck__grammalecteconfigwidget_focusnextprevchild_isbase) {
            textgrammarcheck__grammalecteconfigwidget_focusnextprevchild_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = textgrammarcheck__grammalecteconfigwidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_eventfilter_isbase) {
            textgrammarcheck__grammalecteconfigwidget_eventfilter_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::eventFilter(watched, event);
        }
        auto eventfilter_cb = textgrammarcheck__grammalecteconfigwidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_timerevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_timerevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::timerEvent(event);
            return;
        }
        auto timerevent_cb = textgrammarcheck__grammalecteconfigwidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_childevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_childevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::childEvent(event);
            return;
        }
        auto childevent_cb = textgrammarcheck__grammalecteconfigwidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_customevent_isbase) {
            textgrammarcheck__grammalecteconfigwidget_customevent_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::customEvent(event);
            return;
        }
        auto customevent_cb = textgrammarcheck__grammalecteconfigwidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammalecteconfigwidget_connectnotify_isbase) {
            textgrammarcheck__grammalecteconfigwidget_connectnotify_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textgrammarcheck__grammalecteconfigwidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammalecteconfigwidget_disconnectnotify_isbase) {
            textgrammarcheck__grammalecteconfigwidget_disconnectnotify_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textgrammarcheck__grammalecteconfigwidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (textgrammarcheck__grammalecteconfigwidget_updatemicrofocus_isbase) {
            textgrammarcheck__grammalecteconfigwidget_updatemicrofocus_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = textgrammarcheck__grammalecteconfigwidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (textgrammarcheck__grammalecteconfigwidget_create_isbase) {
            textgrammarcheck__grammalecteconfigwidget_create_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::create();
            return;
        }
        auto create_cb = textgrammarcheck__grammalecteconfigwidget_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (textgrammarcheck__grammalecteconfigwidget_destroy_isbase) {
            textgrammarcheck__grammalecteconfigwidget_destroy_isbase = false;
            TextGrammarCheck__GrammalecteConfigWidget::destroy();
            return;
        }
        auto destroy_cb = textgrammarcheck__grammalecteconfigwidget_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (textgrammarcheck__grammalecteconfigwidget_focusnextchild_isbase) {
            textgrammarcheck__grammalecteconfigwidget_focusnextchild_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::focusNextChild();
        }
        auto focusnextchild_cb = textgrammarcheck__grammalecteconfigwidget_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (textgrammarcheck__grammalecteconfigwidget_focuspreviouschild_isbase) {
            textgrammarcheck__grammalecteconfigwidget_focuspreviouschild_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::focusPreviousChild();
        }
        auto focuspreviouschild_cb = textgrammarcheck__grammalecteconfigwidget_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textgrammarcheck__grammalecteconfigwidget_sender_isbase) {
            textgrammarcheck__grammalecteconfigwidget_sender_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::sender();
        }
        auto sender_cb = textgrammarcheck__grammalecteconfigwidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textgrammarcheck__grammalecteconfigwidget_sendersignalindex_isbase) {
            textgrammarcheck__grammalecteconfigwidget_sendersignalindex_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = textgrammarcheck__grammalecteconfigwidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textgrammarcheck__grammalecteconfigwidget_receivers_isbase) {
            textgrammarcheck__grammalecteconfigwidget_receivers_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::receivers(signal);
        }
        auto receivers_cb = textgrammarcheck__grammalecteconfigwidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textgrammarcheck__grammalecteconfigwidget_issignalconnected_isbase) {
            textgrammarcheck__grammalecteconfigwidget_issignalconnected_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textgrammarcheck__grammalecteconfigwidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (textgrammarcheck__grammalecteconfigwidget_getdecodedmetricf_isbase) {
            textgrammarcheck__grammalecteconfigwidget_getdecodedmetricf_isbase = false;
            return TextGrammarCheck__GrammalecteConfigWidget::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = textgrammarcheck__grammalecteconfigwidget_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigWidget::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool TextGrammarCheck__GrammalecteConfigWidget_Event(TextGrammarCheck::GrammalecteConfigWidget* self, QEvent* event);
    friend bool TextGrammarCheck__GrammalecteConfigWidget_SuperEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_MousePressEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperMousePressEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_MouseReleaseEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperMouseReleaseEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_MouseDoubleClickEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperMouseDoubleClickEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_MouseMoveEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperMouseMoveEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_WheelEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QWheelEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperWheelEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QWheelEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_KeyPressEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperKeyPressEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_KeyReleaseEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperKeyReleaseEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_FocusInEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperFocusInEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_FocusOutEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperFocusOutEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_EnterEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QEnterEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperEnterEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QEnterEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_LeaveEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperLeaveEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_PaintEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QPaintEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperPaintEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QPaintEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_MoveEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QMoveEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperMoveEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QMoveEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_ResizeEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QResizeEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperResizeEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QResizeEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_CloseEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QCloseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperCloseEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QCloseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_ContextMenuEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QContextMenuEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperContextMenuEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QContextMenuEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_TabletEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QTabletEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperTabletEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QTabletEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_ActionEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QActionEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperActionEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QActionEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_DragEnterEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperDragEnterEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_DragMoveEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperDragMoveEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_DragLeaveEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperDragLeaveEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_DropEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QDropEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperDropEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QDropEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_ShowEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QShowEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperShowEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QShowEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_HideEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QHideEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperHideEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QHideEvent* event);
    friend bool TextGrammarCheck__GrammalecteConfigWidget_NativeEvent(TextGrammarCheck::GrammalecteConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextGrammarCheck__GrammalecteConfigWidget_SuperNativeEvent(TextGrammarCheck::GrammalecteConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextGrammarCheck__GrammalecteConfigWidget_ChangeEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QEvent* param1);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperChangeEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QEvent* param1);
    friend int TextGrammarCheck__GrammalecteConfigWidget_Metric(const TextGrammarCheck::GrammalecteConfigWidget* self, int param1);
    friend int TextGrammarCheck__GrammalecteConfigWidget_SuperMetric(const TextGrammarCheck::GrammalecteConfigWidget* self, int param1);
    friend void TextGrammarCheck__GrammalecteConfigWidget_InitPainter(const TextGrammarCheck::GrammalecteConfigWidget* self, QPainter* painter);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperInitPainter(const TextGrammarCheck::GrammalecteConfigWidget* self, QPainter* painter);
    friend QPaintDevice* TextGrammarCheck__GrammalecteConfigWidget_Redirected(const TextGrammarCheck::GrammalecteConfigWidget* self, QPoint* offset);
    friend QPaintDevice* TextGrammarCheck__GrammalecteConfigWidget_SuperRedirected(const TextGrammarCheck::GrammalecteConfigWidget* self, QPoint* offset);
    friend QPainter* TextGrammarCheck__GrammalecteConfigWidget_SharedPainter(const TextGrammarCheck::GrammalecteConfigWidget* self);
    friend QPainter* TextGrammarCheck__GrammalecteConfigWidget_SuperSharedPainter(const TextGrammarCheck::GrammalecteConfigWidget* self);
    friend void TextGrammarCheck__GrammalecteConfigWidget_InputMethodEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QInputMethodEvent* param1);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperInputMethodEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QInputMethodEvent* param1);
    friend bool TextGrammarCheck__GrammalecteConfigWidget_FocusNextPrevChild(TextGrammarCheck::GrammalecteConfigWidget* self, bool next);
    friend bool TextGrammarCheck__GrammalecteConfigWidget_SuperFocusNextPrevChild(TextGrammarCheck::GrammalecteConfigWidget* self, bool next);
    friend void TextGrammarCheck__GrammalecteConfigWidget_TimerEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QTimerEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperTimerEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QTimerEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_ChildEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QChildEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperChildEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QChildEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_CustomEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperCustomEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_ConnectNotify(TextGrammarCheck::GrammalecteConfigWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperConnectNotify(TextGrammarCheck::GrammalecteConfigWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteConfigWidget_DisconnectNotify(TextGrammarCheck::GrammalecteConfigWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperDisconnectNotify(TextGrammarCheck::GrammalecteConfigWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteConfigWidget_UpdateMicroFocus(TextGrammarCheck::GrammalecteConfigWidget* self);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperUpdateMicroFocus(TextGrammarCheck::GrammalecteConfigWidget* self);
    friend void TextGrammarCheck__GrammalecteConfigWidget_Create(TextGrammarCheck::GrammalecteConfigWidget* self);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperCreate(TextGrammarCheck::GrammalecteConfigWidget* self);
    friend void TextGrammarCheck__GrammalecteConfigWidget_Destroy(TextGrammarCheck::GrammalecteConfigWidget* self);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperDestroy(TextGrammarCheck::GrammalecteConfigWidget* self);
    friend bool TextGrammarCheck__GrammalecteConfigWidget_FocusNextChild(TextGrammarCheck::GrammalecteConfigWidget* self);
    friend bool TextGrammarCheck__GrammalecteConfigWidget_SuperFocusNextChild(TextGrammarCheck::GrammalecteConfigWidget* self);
    friend bool TextGrammarCheck__GrammalecteConfigWidget_FocusPreviousChild(TextGrammarCheck::GrammalecteConfigWidget* self);
    friend bool TextGrammarCheck__GrammalecteConfigWidget_SuperFocusPreviousChild(TextGrammarCheck::GrammalecteConfigWidget* self);
    friend QObject* TextGrammarCheck__GrammalecteConfigWidget_Sender(const TextGrammarCheck::GrammalecteConfigWidget* self);
    friend QObject* TextGrammarCheck__GrammalecteConfigWidget_SuperSender(const TextGrammarCheck::GrammalecteConfigWidget* self);
    friend int TextGrammarCheck__GrammalecteConfigWidget_SenderSignalIndex(const TextGrammarCheck::GrammalecteConfigWidget* self);
    friend int TextGrammarCheck__GrammalecteConfigWidget_SuperSenderSignalIndex(const TextGrammarCheck::GrammalecteConfigWidget* self);
    friend int TextGrammarCheck__GrammalecteConfigWidget_Receivers(const TextGrammarCheck::GrammalecteConfigWidget* self, const char* signal);
    friend int TextGrammarCheck__GrammalecteConfigWidget_SuperReceivers(const TextGrammarCheck::GrammalecteConfigWidget* self, const char* signal);
    friend bool TextGrammarCheck__GrammalecteConfigWidget_IsSignalConnected(const TextGrammarCheck::GrammalecteConfigWidget* self, const QMetaMethod* signal);
    friend bool TextGrammarCheck__GrammalecteConfigWidget_SuperIsSignalConnected(const TextGrammarCheck::GrammalecteConfigWidget* self, const QMetaMethod* signal);
    friend double TextGrammarCheck__GrammalecteConfigWidget_GetDecodedMetricF(const TextGrammarCheck::GrammalecteConfigWidget* self, int metricA, int metricB);
    friend double TextGrammarCheck__GrammalecteConfigWidget_SuperGetDecodedMetricF(const TextGrammarCheck::GrammalecteConfigWidget* self, int metricA, int metricB);
};

#endif
