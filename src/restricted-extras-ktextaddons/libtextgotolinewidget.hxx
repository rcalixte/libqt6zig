#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTEXTGOTOLINEWIDGET_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTEXTGOTOLINEWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::TextGoToLineWidget so that we can call protected methods
class VirtualTextCustomEditorTextGoToLineWidget final : public TextCustomEditor::TextGoToLineWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualTextCustomEditorTextGoToLineWidget = true;

    // Virtual class public types (including callbacks)
    using TextCustomEditor__TextGoToLineWidget_MetaObject_Callback = QMetaObject* (*)();
    using TextCustomEditor__TextGoToLineWidget_Metacast_Callback = void* (*)(TextCustomEditor__TextGoToLineWidget*, const char*);
    using TextCustomEditor__TextGoToLineWidget_Metacall_Callback = int (*)(TextCustomEditor__TextGoToLineWidget*, int, int, void**);
    using TextCustomEditor__TextGoToLineWidget_Event_Callback = bool (*)(TextCustomEditor__TextGoToLineWidget*, QEvent*);
    using TextCustomEditor__TextGoToLineWidget_ShowEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QShowEvent*);
    using TextCustomEditor__TextGoToLineWidget_EventFilter_Callback = bool (*)(TextCustomEditor__TextGoToLineWidget*, QObject*, QEvent*);
    using TextCustomEditor__TextGoToLineWidget_DevType_Callback = int (*)();
    using TextCustomEditor__TextGoToLineWidget_SetVisible_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, bool);
    using TextCustomEditor__TextGoToLineWidget_SizeHint_Callback = QSize* (*)();
    using TextCustomEditor__TextGoToLineWidget_MinimumSizeHint_Callback = QSize* (*)();
    using TextCustomEditor__TextGoToLineWidget_HeightForWidth_Callback = int (*)(const TextCustomEditor__TextGoToLineWidget*, int);
    using TextCustomEditor__TextGoToLineWidget_HasHeightForWidth_Callback = bool (*)();
    using TextCustomEditor__TextGoToLineWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using TextCustomEditor__TextGoToLineWidget_MousePressEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QMouseEvent*);
    using TextCustomEditor__TextGoToLineWidget_MouseReleaseEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QMouseEvent*);
    using TextCustomEditor__TextGoToLineWidget_MouseDoubleClickEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QMouseEvent*);
    using TextCustomEditor__TextGoToLineWidget_MouseMoveEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QMouseEvent*);
    using TextCustomEditor__TextGoToLineWidget_WheelEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QWheelEvent*);
    using TextCustomEditor__TextGoToLineWidget_KeyPressEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QKeyEvent*);
    using TextCustomEditor__TextGoToLineWidget_KeyReleaseEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QKeyEvent*);
    using TextCustomEditor__TextGoToLineWidget_FocusInEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QFocusEvent*);
    using TextCustomEditor__TextGoToLineWidget_FocusOutEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QFocusEvent*);
    using TextCustomEditor__TextGoToLineWidget_EnterEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QEnterEvent*);
    using TextCustomEditor__TextGoToLineWidget_LeaveEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QEvent*);
    using TextCustomEditor__TextGoToLineWidget_PaintEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QPaintEvent*);
    using TextCustomEditor__TextGoToLineWidget_MoveEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QMoveEvent*);
    using TextCustomEditor__TextGoToLineWidget_ResizeEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QResizeEvent*);
    using TextCustomEditor__TextGoToLineWidget_CloseEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QCloseEvent*);
    using TextCustomEditor__TextGoToLineWidget_ContextMenuEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QContextMenuEvent*);
    using TextCustomEditor__TextGoToLineWidget_TabletEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QTabletEvent*);
    using TextCustomEditor__TextGoToLineWidget_ActionEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QActionEvent*);
    using TextCustomEditor__TextGoToLineWidget_DragEnterEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QDragEnterEvent*);
    using TextCustomEditor__TextGoToLineWidget_DragMoveEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QDragMoveEvent*);
    using TextCustomEditor__TextGoToLineWidget_DragLeaveEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QDragLeaveEvent*);
    using TextCustomEditor__TextGoToLineWidget_DropEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QDropEvent*);
    using TextCustomEditor__TextGoToLineWidget_HideEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QHideEvent*);
    using TextCustomEditor__TextGoToLineWidget_NativeEvent_Callback = bool (*)(TextCustomEditor__TextGoToLineWidget*, libqt_string, void*, intptr_t*);
    using TextCustomEditor__TextGoToLineWidget_ChangeEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QEvent*);
    using TextCustomEditor__TextGoToLineWidget_Metric_Callback = int (*)(const TextCustomEditor__TextGoToLineWidget*, int);
    using TextCustomEditor__TextGoToLineWidget_InitPainter_Callback = void (*)(const TextCustomEditor__TextGoToLineWidget*, QPainter*);
    using TextCustomEditor__TextGoToLineWidget_Redirected_Callback = QPaintDevice* (*)(const TextCustomEditor__TextGoToLineWidget*, QPoint*);
    using TextCustomEditor__TextGoToLineWidget_SharedPainter_Callback = QPainter* (*)();
    using TextCustomEditor__TextGoToLineWidget_InputMethodEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QInputMethodEvent*);
    using TextCustomEditor__TextGoToLineWidget_InputMethodQuery_Callback = QVariant* (*)(const TextCustomEditor__TextGoToLineWidget*, int);
    using TextCustomEditor__TextGoToLineWidget_FocusNextPrevChild_Callback = bool (*)(TextCustomEditor__TextGoToLineWidget*, bool);
    using TextCustomEditor__TextGoToLineWidget_TimerEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QTimerEvent*);
    using TextCustomEditor__TextGoToLineWidget_ChildEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QChildEvent*);
    using TextCustomEditor__TextGoToLineWidget_CustomEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QEvent*);
    using TextCustomEditor__TextGoToLineWidget_ConnectNotify_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QMetaMethod*);
    using TextCustomEditor__TextGoToLineWidget_DisconnectNotify_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QMetaMethod*);
    using TextCustomEditor__TextGoToLineWidget_UpdateMicroFocus_Callback = void (*)();
    using TextCustomEditor__TextGoToLineWidget_Create_Callback = void (*)();
    using TextCustomEditor__TextGoToLineWidget_Destroy_Callback = void (*)();
    using TextCustomEditor__TextGoToLineWidget_FocusNextChild_Callback = bool (*)();
    using TextCustomEditor__TextGoToLineWidget_FocusPreviousChild_Callback = bool (*)();
    using TextCustomEditor__TextGoToLineWidget_Sender_Callback = QObject* (*)();
    using TextCustomEditor__TextGoToLineWidget_SenderSignalIndex_Callback = int (*)();
    using TextCustomEditor__TextGoToLineWidget_Receivers_Callback = int (*)(const TextCustomEditor__TextGoToLineWidget*, const char*);
    using TextCustomEditor__TextGoToLineWidget_IsSignalConnected_Callback = bool (*)(const TextCustomEditor__TextGoToLineWidget*, QMetaMethod*);
    using TextCustomEditor__TextGoToLineWidget_GetDecodedMetricF_Callback = double (*)(const TextCustomEditor__TextGoToLineWidget*, int, int);

  protected:
    // Instance callback storage
    TextCustomEditor__TextGoToLineWidget_MetaObject_Callback textcustomeditor__textgotolinewidget_metaobject_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_Metacast_Callback textcustomeditor__textgotolinewidget_metacast_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_Metacall_Callback textcustomeditor__textgotolinewidget_metacall_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_Event_Callback textcustomeditor__textgotolinewidget_event_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_ShowEvent_Callback textcustomeditor__textgotolinewidget_showevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_EventFilter_Callback textcustomeditor__textgotolinewidget_eventfilter_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_DevType_Callback textcustomeditor__textgotolinewidget_devtype_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_SetVisible_Callback textcustomeditor__textgotolinewidget_setvisible_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_SizeHint_Callback textcustomeditor__textgotolinewidget_sizehint_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_MinimumSizeHint_Callback textcustomeditor__textgotolinewidget_minimumsizehint_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_HeightForWidth_Callback textcustomeditor__textgotolinewidget_heightforwidth_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_HasHeightForWidth_Callback textcustomeditor__textgotolinewidget_hasheightforwidth_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_PaintEngine_Callback textcustomeditor__textgotolinewidget_paintengine_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_MousePressEvent_Callback textcustomeditor__textgotolinewidget_mousepressevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_MouseReleaseEvent_Callback textcustomeditor__textgotolinewidget_mousereleaseevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_MouseDoubleClickEvent_Callback textcustomeditor__textgotolinewidget_mousedoubleclickevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_MouseMoveEvent_Callback textcustomeditor__textgotolinewidget_mousemoveevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_WheelEvent_Callback textcustomeditor__textgotolinewidget_wheelevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_KeyPressEvent_Callback textcustomeditor__textgotolinewidget_keypressevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_KeyReleaseEvent_Callback textcustomeditor__textgotolinewidget_keyreleaseevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_FocusInEvent_Callback textcustomeditor__textgotolinewidget_focusinevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_FocusOutEvent_Callback textcustomeditor__textgotolinewidget_focusoutevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_EnterEvent_Callback textcustomeditor__textgotolinewidget_enterevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_LeaveEvent_Callback textcustomeditor__textgotolinewidget_leaveevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_PaintEvent_Callback textcustomeditor__textgotolinewidget_paintevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_MoveEvent_Callback textcustomeditor__textgotolinewidget_moveevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_ResizeEvent_Callback textcustomeditor__textgotolinewidget_resizeevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_CloseEvent_Callback textcustomeditor__textgotolinewidget_closeevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_ContextMenuEvent_Callback textcustomeditor__textgotolinewidget_contextmenuevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_TabletEvent_Callback textcustomeditor__textgotolinewidget_tabletevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_ActionEvent_Callback textcustomeditor__textgotolinewidget_actionevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_DragEnterEvent_Callback textcustomeditor__textgotolinewidget_dragenterevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_DragMoveEvent_Callback textcustomeditor__textgotolinewidget_dragmoveevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_DragLeaveEvent_Callback textcustomeditor__textgotolinewidget_dragleaveevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_DropEvent_Callback textcustomeditor__textgotolinewidget_dropevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_HideEvent_Callback textcustomeditor__textgotolinewidget_hideevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_NativeEvent_Callback textcustomeditor__textgotolinewidget_nativeevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_ChangeEvent_Callback textcustomeditor__textgotolinewidget_changeevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_Metric_Callback textcustomeditor__textgotolinewidget_metric_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_InitPainter_Callback textcustomeditor__textgotolinewidget_initpainter_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_Redirected_Callback textcustomeditor__textgotolinewidget_redirected_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_SharedPainter_Callback textcustomeditor__textgotolinewidget_sharedpainter_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_InputMethodEvent_Callback textcustomeditor__textgotolinewidget_inputmethodevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_InputMethodQuery_Callback textcustomeditor__textgotolinewidget_inputmethodquery_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_FocusNextPrevChild_Callback textcustomeditor__textgotolinewidget_focusnextprevchild_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_TimerEvent_Callback textcustomeditor__textgotolinewidget_timerevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_ChildEvent_Callback textcustomeditor__textgotolinewidget_childevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_CustomEvent_Callback textcustomeditor__textgotolinewidget_customevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_ConnectNotify_Callback textcustomeditor__textgotolinewidget_connectnotify_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_DisconnectNotify_Callback textcustomeditor__textgotolinewidget_disconnectnotify_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_UpdateMicroFocus_Callback textcustomeditor__textgotolinewidget_updatemicrofocus_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_Create_Callback textcustomeditor__textgotolinewidget_create_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_Destroy_Callback textcustomeditor__textgotolinewidget_destroy_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_FocusNextChild_Callback textcustomeditor__textgotolinewidget_focusnextchild_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_FocusPreviousChild_Callback textcustomeditor__textgotolinewidget_focuspreviouschild_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_Sender_Callback textcustomeditor__textgotolinewidget_sender_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_SenderSignalIndex_Callback textcustomeditor__textgotolinewidget_sendersignalindex_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_Receivers_Callback textcustomeditor__textgotolinewidget_receivers_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_IsSignalConnected_Callback textcustomeditor__textgotolinewidget_issignalconnected_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_GetDecodedMetricF_Callback textcustomeditor__textgotolinewidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool textcustomeditor__textgotolinewidget_metaobject_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_metacast_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_metacall_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_event_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_showevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_eventfilter_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_devtype_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_setvisible_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_sizehint_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_minimumsizehint_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_heightforwidth_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_hasheightforwidth_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_paintengine_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_mousepressevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_mousereleaseevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_mousedoubleclickevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_mousemoveevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_wheelevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_keypressevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_keyreleaseevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_focusinevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_focusoutevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_enterevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_leaveevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_paintevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_moveevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_resizeevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_closeevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_contextmenuevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_tabletevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_actionevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_dragenterevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_dragmoveevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_dragleaveevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_dropevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_hideevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_nativeevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_changeevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_metric_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_initpainter_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_redirected_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_sharedpainter_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_inputmethodevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_inputmethodquery_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_focusnextprevchild_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_timerevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_childevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_customevent_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_connectnotify_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_disconnectnotify_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_updatemicrofocus_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_create_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_destroy_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_focusnextchild_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_focuspreviouschild_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_sender_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_sendersignalindex_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_receivers_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_issignalconnected_isbase = false;
    mutable bool textcustomeditor__textgotolinewidget_getdecodedmetricf_isbase = false;

  public:
    VirtualTextCustomEditorTextGoToLineWidget(QWidget* parent) : TextCustomEditor::TextGoToLineWidget(parent) {};
    VirtualTextCustomEditorTextGoToLineWidget() : TextCustomEditor::TextGoToLineWidget() {};

    // Callback setters
    inline void setTextCustomEditor__TextGoToLineWidget_MetaObject_Callback(TextCustomEditor__TextGoToLineWidget_MetaObject_Callback cb) { textcustomeditor__textgotolinewidget_metaobject_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_Metacast_Callback(TextCustomEditor__TextGoToLineWidget_Metacast_Callback cb) { textcustomeditor__textgotolinewidget_metacast_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_Metacall_Callback(TextCustomEditor__TextGoToLineWidget_Metacall_Callback cb) { textcustomeditor__textgotolinewidget_metacall_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_Event_Callback(TextCustomEditor__TextGoToLineWidget_Event_Callback cb) { textcustomeditor__textgotolinewidget_event_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_ShowEvent_Callback(TextCustomEditor__TextGoToLineWidget_ShowEvent_Callback cb) { textcustomeditor__textgotolinewidget_showevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_EventFilter_Callback(TextCustomEditor__TextGoToLineWidget_EventFilter_Callback cb) { textcustomeditor__textgotolinewidget_eventfilter_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_DevType_Callback(TextCustomEditor__TextGoToLineWidget_DevType_Callback cb) { textcustomeditor__textgotolinewidget_devtype_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_SetVisible_Callback(TextCustomEditor__TextGoToLineWidget_SetVisible_Callback cb) { textcustomeditor__textgotolinewidget_setvisible_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_SizeHint_Callback(TextCustomEditor__TextGoToLineWidget_SizeHint_Callback cb) { textcustomeditor__textgotolinewidget_sizehint_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_MinimumSizeHint_Callback(TextCustomEditor__TextGoToLineWidget_MinimumSizeHint_Callback cb) { textcustomeditor__textgotolinewidget_minimumsizehint_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_HeightForWidth_Callback(TextCustomEditor__TextGoToLineWidget_HeightForWidth_Callback cb) { textcustomeditor__textgotolinewidget_heightforwidth_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_HasHeightForWidth_Callback(TextCustomEditor__TextGoToLineWidget_HasHeightForWidth_Callback cb) { textcustomeditor__textgotolinewidget_hasheightforwidth_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_PaintEngine_Callback(TextCustomEditor__TextGoToLineWidget_PaintEngine_Callback cb) { textcustomeditor__textgotolinewidget_paintengine_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_MousePressEvent_Callback(TextCustomEditor__TextGoToLineWidget_MousePressEvent_Callback cb) { textcustomeditor__textgotolinewidget_mousepressevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_MouseReleaseEvent_Callback(TextCustomEditor__TextGoToLineWidget_MouseReleaseEvent_Callback cb) { textcustomeditor__textgotolinewidget_mousereleaseevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_MouseDoubleClickEvent_Callback(TextCustomEditor__TextGoToLineWidget_MouseDoubleClickEvent_Callback cb) { textcustomeditor__textgotolinewidget_mousedoubleclickevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_MouseMoveEvent_Callback(TextCustomEditor__TextGoToLineWidget_MouseMoveEvent_Callback cb) { textcustomeditor__textgotolinewidget_mousemoveevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_WheelEvent_Callback(TextCustomEditor__TextGoToLineWidget_WheelEvent_Callback cb) { textcustomeditor__textgotolinewidget_wheelevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_KeyPressEvent_Callback(TextCustomEditor__TextGoToLineWidget_KeyPressEvent_Callback cb) { textcustomeditor__textgotolinewidget_keypressevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_KeyReleaseEvent_Callback(TextCustomEditor__TextGoToLineWidget_KeyReleaseEvent_Callback cb) { textcustomeditor__textgotolinewidget_keyreleaseevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_FocusInEvent_Callback(TextCustomEditor__TextGoToLineWidget_FocusInEvent_Callback cb) { textcustomeditor__textgotolinewidget_focusinevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_FocusOutEvent_Callback(TextCustomEditor__TextGoToLineWidget_FocusOutEvent_Callback cb) { textcustomeditor__textgotolinewidget_focusoutevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_EnterEvent_Callback(TextCustomEditor__TextGoToLineWidget_EnterEvent_Callback cb) { textcustomeditor__textgotolinewidget_enterevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_LeaveEvent_Callback(TextCustomEditor__TextGoToLineWidget_LeaveEvent_Callback cb) { textcustomeditor__textgotolinewidget_leaveevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_PaintEvent_Callback(TextCustomEditor__TextGoToLineWidget_PaintEvent_Callback cb) { textcustomeditor__textgotolinewidget_paintevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_MoveEvent_Callback(TextCustomEditor__TextGoToLineWidget_MoveEvent_Callback cb) { textcustomeditor__textgotolinewidget_moveevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_ResizeEvent_Callback(TextCustomEditor__TextGoToLineWidget_ResizeEvent_Callback cb) { textcustomeditor__textgotolinewidget_resizeevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_CloseEvent_Callback(TextCustomEditor__TextGoToLineWidget_CloseEvent_Callback cb) { textcustomeditor__textgotolinewidget_closeevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_ContextMenuEvent_Callback(TextCustomEditor__TextGoToLineWidget_ContextMenuEvent_Callback cb) { textcustomeditor__textgotolinewidget_contextmenuevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_TabletEvent_Callback(TextCustomEditor__TextGoToLineWidget_TabletEvent_Callback cb) { textcustomeditor__textgotolinewidget_tabletevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_ActionEvent_Callback(TextCustomEditor__TextGoToLineWidget_ActionEvent_Callback cb) { textcustomeditor__textgotolinewidget_actionevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_DragEnterEvent_Callback(TextCustomEditor__TextGoToLineWidget_DragEnterEvent_Callback cb) { textcustomeditor__textgotolinewidget_dragenterevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_DragMoveEvent_Callback(TextCustomEditor__TextGoToLineWidget_DragMoveEvent_Callback cb) { textcustomeditor__textgotolinewidget_dragmoveevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_DragLeaveEvent_Callback(TextCustomEditor__TextGoToLineWidget_DragLeaveEvent_Callback cb) { textcustomeditor__textgotolinewidget_dragleaveevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_DropEvent_Callback(TextCustomEditor__TextGoToLineWidget_DropEvent_Callback cb) { textcustomeditor__textgotolinewidget_dropevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_HideEvent_Callback(TextCustomEditor__TextGoToLineWidget_HideEvent_Callback cb) { textcustomeditor__textgotolinewidget_hideevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_NativeEvent_Callback(TextCustomEditor__TextGoToLineWidget_NativeEvent_Callback cb) { textcustomeditor__textgotolinewidget_nativeevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_ChangeEvent_Callback(TextCustomEditor__TextGoToLineWidget_ChangeEvent_Callback cb) { textcustomeditor__textgotolinewidget_changeevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_Metric_Callback(TextCustomEditor__TextGoToLineWidget_Metric_Callback cb) { textcustomeditor__textgotolinewidget_metric_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_InitPainter_Callback(TextCustomEditor__TextGoToLineWidget_InitPainter_Callback cb) { textcustomeditor__textgotolinewidget_initpainter_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_Redirected_Callback(TextCustomEditor__TextGoToLineWidget_Redirected_Callback cb) { textcustomeditor__textgotolinewidget_redirected_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_SharedPainter_Callback(TextCustomEditor__TextGoToLineWidget_SharedPainter_Callback cb) { textcustomeditor__textgotolinewidget_sharedpainter_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_InputMethodEvent_Callback(TextCustomEditor__TextGoToLineWidget_InputMethodEvent_Callback cb) { textcustomeditor__textgotolinewidget_inputmethodevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_InputMethodQuery_Callback(TextCustomEditor__TextGoToLineWidget_InputMethodQuery_Callback cb) { textcustomeditor__textgotolinewidget_inputmethodquery_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_FocusNextPrevChild_Callback(TextCustomEditor__TextGoToLineWidget_FocusNextPrevChild_Callback cb) { textcustomeditor__textgotolinewidget_focusnextprevchild_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_TimerEvent_Callback(TextCustomEditor__TextGoToLineWidget_TimerEvent_Callback cb) { textcustomeditor__textgotolinewidget_timerevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_ChildEvent_Callback(TextCustomEditor__TextGoToLineWidget_ChildEvent_Callback cb) { textcustomeditor__textgotolinewidget_childevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_CustomEvent_Callback(TextCustomEditor__TextGoToLineWidget_CustomEvent_Callback cb) { textcustomeditor__textgotolinewidget_customevent_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_ConnectNotify_Callback(TextCustomEditor__TextGoToLineWidget_ConnectNotify_Callback cb) { textcustomeditor__textgotolinewidget_connectnotify_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_DisconnectNotify_Callback(TextCustomEditor__TextGoToLineWidget_DisconnectNotify_Callback cb) { textcustomeditor__textgotolinewidget_disconnectnotify_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_UpdateMicroFocus_Callback(TextCustomEditor__TextGoToLineWidget_UpdateMicroFocus_Callback cb) { textcustomeditor__textgotolinewidget_updatemicrofocus_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_Create_Callback(TextCustomEditor__TextGoToLineWidget_Create_Callback cb) { textcustomeditor__textgotolinewidget_create_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_Destroy_Callback(TextCustomEditor__TextGoToLineWidget_Destroy_Callback cb) { textcustomeditor__textgotolinewidget_destroy_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_FocusNextChild_Callback(TextCustomEditor__TextGoToLineWidget_FocusNextChild_Callback cb) { textcustomeditor__textgotolinewidget_focusnextchild_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_FocusPreviousChild_Callback(TextCustomEditor__TextGoToLineWidget_FocusPreviousChild_Callback cb) { textcustomeditor__textgotolinewidget_focuspreviouschild_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_Sender_Callback(TextCustomEditor__TextGoToLineWidget_Sender_Callback cb) { textcustomeditor__textgotolinewidget_sender_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_SenderSignalIndex_Callback(TextCustomEditor__TextGoToLineWidget_SenderSignalIndex_Callback cb) { textcustomeditor__textgotolinewidget_sendersignalindex_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_Receivers_Callback(TextCustomEditor__TextGoToLineWidget_Receivers_Callback cb) { textcustomeditor__textgotolinewidget_receivers_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_IsSignalConnected_Callback(TextCustomEditor__TextGoToLineWidget_IsSignalConnected_Callback cb) { textcustomeditor__textgotolinewidget_issignalconnected_callback = cb; }
    inline void setTextCustomEditor__TextGoToLineWidget_GetDecodedMetricF_Callback(TextCustomEditor__TextGoToLineWidget_GetDecodedMetricF_Callback cb) { textcustomeditor__textgotolinewidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextCustomEditor__TextGoToLineWidget_MetaObject_IsBase(bool value) const { textcustomeditor__textgotolinewidget_metaobject_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_Metacast_IsBase(bool value) const { textcustomeditor__textgotolinewidget_metacast_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_Metacall_IsBase(bool value) const { textcustomeditor__textgotolinewidget_metacall_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_Event_IsBase(bool value) const { textcustomeditor__textgotolinewidget_event_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_ShowEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_showevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_EventFilter_IsBase(bool value) const { textcustomeditor__textgotolinewidget_eventfilter_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_DevType_IsBase(bool value) const { textcustomeditor__textgotolinewidget_devtype_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_SetVisible_IsBase(bool value) const { textcustomeditor__textgotolinewidget_setvisible_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_SizeHint_IsBase(bool value) const { textcustomeditor__textgotolinewidget_sizehint_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_MinimumSizeHint_IsBase(bool value) const { textcustomeditor__textgotolinewidget_minimumsizehint_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_HeightForWidth_IsBase(bool value) const { textcustomeditor__textgotolinewidget_heightforwidth_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_HasHeightForWidth_IsBase(bool value) const { textcustomeditor__textgotolinewidget_hasheightforwidth_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_PaintEngine_IsBase(bool value) const { textcustomeditor__textgotolinewidget_paintengine_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_MousePressEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_mousepressevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_MouseReleaseEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_mousereleaseevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_MouseDoubleClickEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_mousedoubleclickevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_MouseMoveEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_mousemoveevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_WheelEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_wheelevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_KeyPressEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_keypressevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_KeyReleaseEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_keyreleaseevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_FocusInEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_focusinevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_FocusOutEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_focusoutevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_EnterEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_enterevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_LeaveEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_leaveevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_PaintEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_paintevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_MoveEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_moveevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_ResizeEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_resizeevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_CloseEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_closeevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_ContextMenuEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_contextmenuevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_TabletEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_tabletevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_ActionEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_actionevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_DragEnterEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_dragenterevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_DragMoveEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_dragmoveevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_DragLeaveEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_dragleaveevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_DropEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_dropevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_HideEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_hideevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_NativeEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_nativeevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_ChangeEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_changeevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_Metric_IsBase(bool value) const { textcustomeditor__textgotolinewidget_metric_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_InitPainter_IsBase(bool value) const { textcustomeditor__textgotolinewidget_initpainter_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_Redirected_IsBase(bool value) const { textcustomeditor__textgotolinewidget_redirected_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_SharedPainter_IsBase(bool value) const { textcustomeditor__textgotolinewidget_sharedpainter_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_InputMethodEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_inputmethodevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_InputMethodQuery_IsBase(bool value) const { textcustomeditor__textgotolinewidget_inputmethodquery_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_FocusNextPrevChild_IsBase(bool value) const { textcustomeditor__textgotolinewidget_focusnextprevchild_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_TimerEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_timerevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_ChildEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_childevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_CustomEvent_IsBase(bool value) const { textcustomeditor__textgotolinewidget_customevent_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_ConnectNotify_IsBase(bool value) const { textcustomeditor__textgotolinewidget_connectnotify_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_DisconnectNotify_IsBase(bool value) const { textcustomeditor__textgotolinewidget_disconnectnotify_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_UpdateMicroFocus_IsBase(bool value) const { textcustomeditor__textgotolinewidget_updatemicrofocus_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_Create_IsBase(bool value) const { textcustomeditor__textgotolinewidget_create_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_Destroy_IsBase(bool value) const { textcustomeditor__textgotolinewidget_destroy_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_FocusNextChild_IsBase(bool value) const { textcustomeditor__textgotolinewidget_focusnextchild_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_FocusPreviousChild_IsBase(bool value) const { textcustomeditor__textgotolinewidget_focuspreviouschild_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_Sender_IsBase(bool value) const { textcustomeditor__textgotolinewidget_sender_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_SenderSignalIndex_IsBase(bool value) const { textcustomeditor__textgotolinewidget_sendersignalindex_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_Receivers_IsBase(bool value) const { textcustomeditor__textgotolinewidget_receivers_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_IsSignalConnected_IsBase(bool value) const { textcustomeditor__textgotolinewidget_issignalconnected_isbase = value; }
    inline void setTextCustomEditor__TextGoToLineWidget_GetDecodedMetricF_IsBase(bool value) const { textcustomeditor__textgotolinewidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__textgotolinewidget_metaobject_isbase) {
            textcustomeditor__textgotolinewidget_metaobject_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::metaObject();
        }
        auto metaobject_cb = textcustomeditor__textgotolinewidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__textgotolinewidget_metacast_isbase) {
            textcustomeditor__textgotolinewidget_metacast_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::qt_metacast(param1);
        }
        auto metacast_cb = textcustomeditor__textgotolinewidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__textgotolinewidget_metacall_isbase) {
            textcustomeditor__textgotolinewidget_metacall_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textcustomeditor__textgotolinewidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextGoToLineWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (textcustomeditor__textgotolinewidget_event_isbase) {
            textcustomeditor__textgotolinewidget_event_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::event(e);
        }
        auto event_cb = textcustomeditor__textgotolinewidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = e;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (textcustomeditor__textgotolinewidget_showevent_isbase) {
            textcustomeditor__textgotolinewidget_showevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::showEvent(e);
            return;
        }
        auto showevent_cb = textcustomeditor__textgotolinewidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = e;

            showevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::showEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* obj, QEvent* event) override {
        if (textcustomeditor__textgotolinewidget_eventfilter_isbase) {
            textcustomeditor__textgotolinewidget_eventfilter_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::eventFilter(obj, event);
        }
        auto eventfilter_cb = textcustomeditor__textgotolinewidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = obj;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::eventFilter(obj, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textcustomeditor__textgotolinewidget_devtype_isbase) {
            textcustomeditor__textgotolinewidget_devtype_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::devType();
        }
        auto devtype_cb = textcustomeditor__textgotolinewidget_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextGoToLineWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textcustomeditor__textgotolinewidget_setvisible_isbase) {
            textcustomeditor__textgotolinewidget_setvisible_isbase = false;
            TextCustomEditor__TextGoToLineWidget::setVisible(visible);
            return;
        }
        auto setvisible_cb = textcustomeditor__textgotolinewidget_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textcustomeditor__textgotolinewidget_sizehint_isbase) {
            textcustomeditor__textgotolinewidget_sizehint_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::sizeHint();
        }
        auto sizehint_cb = textcustomeditor__textgotolinewidget_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textcustomeditor__textgotolinewidget_minimumsizehint_isbase) {
            textcustomeditor__textgotolinewidget_minimumsizehint_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::minimumSizeHint();
        }
        auto minimumsizehint_cb = textcustomeditor__textgotolinewidget_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textcustomeditor__textgotolinewidget_heightforwidth_isbase) {
            textcustomeditor__textgotolinewidget_heightforwidth_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::heightForWidth(param1);
        }
        auto heightforwidth_cb = textcustomeditor__textgotolinewidget_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextGoToLineWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textcustomeditor__textgotolinewidget_hasheightforwidth_isbase) {
            textcustomeditor__textgotolinewidget_hasheightforwidth_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = textcustomeditor__textgotolinewidget_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textcustomeditor__textgotolinewidget_paintengine_isbase) {
            textcustomeditor__textgotolinewidget_paintengine_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::paintEngine();
        }
        auto paintengine_cb = textcustomeditor__textgotolinewidget_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textcustomeditor__textgotolinewidget_mousepressevent_isbase) {
            textcustomeditor__textgotolinewidget_mousepressevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = textcustomeditor__textgotolinewidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textcustomeditor__textgotolinewidget_mousereleaseevent_isbase) {
            textcustomeditor__textgotolinewidget_mousereleaseevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = textcustomeditor__textgotolinewidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textcustomeditor__textgotolinewidget_mousedoubleclickevent_isbase) {
            textcustomeditor__textgotolinewidget_mousedoubleclickevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = textcustomeditor__textgotolinewidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textcustomeditor__textgotolinewidget_mousemoveevent_isbase) {
            textcustomeditor__textgotolinewidget_mousemoveevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = textcustomeditor__textgotolinewidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textcustomeditor__textgotolinewidget_wheelevent_isbase) {
            textcustomeditor__textgotolinewidget_wheelevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = textcustomeditor__textgotolinewidget_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textcustomeditor__textgotolinewidget_keypressevent_isbase) {
            textcustomeditor__textgotolinewidget_keypressevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = textcustomeditor__textgotolinewidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textcustomeditor__textgotolinewidget_keyreleaseevent_isbase) {
            textcustomeditor__textgotolinewidget_keyreleaseevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = textcustomeditor__textgotolinewidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textcustomeditor__textgotolinewidget_focusinevent_isbase) {
            textcustomeditor__textgotolinewidget_focusinevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = textcustomeditor__textgotolinewidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textcustomeditor__textgotolinewidget_focusoutevent_isbase) {
            textcustomeditor__textgotolinewidget_focusoutevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = textcustomeditor__textgotolinewidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textcustomeditor__textgotolinewidget_enterevent_isbase) {
            textcustomeditor__textgotolinewidget_enterevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::enterEvent(event);
            return;
        }
        auto enterevent_cb = textcustomeditor__textgotolinewidget_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textcustomeditor__textgotolinewidget_leaveevent_isbase) {
            textcustomeditor__textgotolinewidget_leaveevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = textcustomeditor__textgotolinewidget_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textcustomeditor__textgotolinewidget_paintevent_isbase) {
            textcustomeditor__textgotolinewidget_paintevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::paintEvent(event);
            return;
        }
        auto paintevent_cb = textcustomeditor__textgotolinewidget_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textcustomeditor__textgotolinewidget_moveevent_isbase) {
            textcustomeditor__textgotolinewidget_moveevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = textcustomeditor__textgotolinewidget_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textcustomeditor__textgotolinewidget_resizeevent_isbase) {
            textcustomeditor__textgotolinewidget_resizeevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = textcustomeditor__textgotolinewidget_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textcustomeditor__textgotolinewidget_closeevent_isbase) {
            textcustomeditor__textgotolinewidget_closeevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = textcustomeditor__textgotolinewidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textcustomeditor__textgotolinewidget_contextmenuevent_isbase) {
            textcustomeditor__textgotolinewidget_contextmenuevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = textcustomeditor__textgotolinewidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textcustomeditor__textgotolinewidget_tabletevent_isbase) {
            textcustomeditor__textgotolinewidget_tabletevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = textcustomeditor__textgotolinewidget_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textcustomeditor__textgotolinewidget_actionevent_isbase) {
            textcustomeditor__textgotolinewidget_actionevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::actionEvent(event);
            return;
        }
        auto actionevent_cb = textcustomeditor__textgotolinewidget_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textcustomeditor__textgotolinewidget_dragenterevent_isbase) {
            textcustomeditor__textgotolinewidget_dragenterevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = textcustomeditor__textgotolinewidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textcustomeditor__textgotolinewidget_dragmoveevent_isbase) {
            textcustomeditor__textgotolinewidget_dragmoveevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = textcustomeditor__textgotolinewidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textcustomeditor__textgotolinewidget_dragleaveevent_isbase) {
            textcustomeditor__textgotolinewidget_dragleaveevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = textcustomeditor__textgotolinewidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textcustomeditor__textgotolinewidget_dropevent_isbase) {
            textcustomeditor__textgotolinewidget_dropevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::dropEvent(event);
            return;
        }
        auto dropevent_cb = textcustomeditor__textgotolinewidget_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textcustomeditor__textgotolinewidget_hideevent_isbase) {
            textcustomeditor__textgotolinewidget_hideevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::hideEvent(event);
            return;
        }
        auto hideevent_cb = textcustomeditor__textgotolinewidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textcustomeditor__textgotolinewidget_nativeevent_isbase) {
            textcustomeditor__textgotolinewidget_nativeevent_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = textcustomeditor__textgotolinewidget_nativeevent_callback;
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
        return TextCustomEditor__TextGoToLineWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textcustomeditor__textgotolinewidget_changeevent_isbase) {
            textcustomeditor__textgotolinewidget_changeevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::changeEvent(param1);
            return;
        }
        auto changeevent_cb = textcustomeditor__textgotolinewidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textcustomeditor__textgotolinewidget_metric_isbase) {
            textcustomeditor__textgotolinewidget_metric_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::metric(param1);
        }
        auto metric_cb = textcustomeditor__textgotolinewidget_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextGoToLineWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textcustomeditor__textgotolinewidget_initpainter_isbase) {
            textcustomeditor__textgotolinewidget_initpainter_isbase = false;
            TextCustomEditor__TextGoToLineWidget::initPainter(painter);
            return;
        }
        auto initpainter_cb = textcustomeditor__textgotolinewidget_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textcustomeditor__textgotolinewidget_redirected_isbase) {
            textcustomeditor__textgotolinewidget_redirected_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::redirected(offset);
        }
        auto redirected_cb = textcustomeditor__textgotolinewidget_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textcustomeditor__textgotolinewidget_sharedpainter_isbase) {
            textcustomeditor__textgotolinewidget_sharedpainter_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::sharedPainter();
        }
        auto sharedpainter_cb = textcustomeditor__textgotolinewidget_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textcustomeditor__textgotolinewidget_inputmethodevent_isbase) {
            textcustomeditor__textgotolinewidget_inputmethodevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = textcustomeditor__textgotolinewidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textcustomeditor__textgotolinewidget_inputmethodquery_isbase) {
            textcustomeditor__textgotolinewidget_inputmethodquery_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = textcustomeditor__textgotolinewidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textcustomeditor__textgotolinewidget_focusnextprevchild_isbase) {
            textcustomeditor__textgotolinewidget_focusnextprevchild_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = textcustomeditor__textgotolinewidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textcustomeditor__textgotolinewidget_timerevent_isbase) {
            textcustomeditor__textgotolinewidget_timerevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::timerEvent(event);
            return;
        }
        auto timerevent_cb = textcustomeditor__textgotolinewidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__textgotolinewidget_childevent_isbase) {
            textcustomeditor__textgotolinewidget_childevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::childEvent(event);
            return;
        }
        auto childevent_cb = textcustomeditor__textgotolinewidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__textgotolinewidget_customevent_isbase) {
            textcustomeditor__textgotolinewidget_customevent_isbase = false;
            TextCustomEditor__TextGoToLineWidget::customEvent(event);
            return;
        }
        auto customevent_cb = textcustomeditor__textgotolinewidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__textgotolinewidget_connectnotify_isbase) {
            textcustomeditor__textgotolinewidget_connectnotify_isbase = false;
            TextCustomEditor__TextGoToLineWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textcustomeditor__textgotolinewidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__textgotolinewidget_disconnectnotify_isbase) {
            textcustomeditor__textgotolinewidget_disconnectnotify_isbase = false;
            TextCustomEditor__TextGoToLineWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textcustomeditor__textgotolinewidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (textcustomeditor__textgotolinewidget_updatemicrofocus_isbase) {
            textcustomeditor__textgotolinewidget_updatemicrofocus_isbase = false;
            TextCustomEditor__TextGoToLineWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = textcustomeditor__textgotolinewidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextCustomEditor__TextGoToLineWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (textcustomeditor__textgotolinewidget_create_isbase) {
            textcustomeditor__textgotolinewidget_create_isbase = false;
            TextCustomEditor__TextGoToLineWidget::create();
            return;
        }
        auto create_cb = textcustomeditor__textgotolinewidget_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextCustomEditor__TextGoToLineWidget::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (textcustomeditor__textgotolinewidget_destroy_isbase) {
            textcustomeditor__textgotolinewidget_destroy_isbase = false;
            TextCustomEditor__TextGoToLineWidget::destroy();
            return;
        }
        auto destroy_cb = textcustomeditor__textgotolinewidget_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextCustomEditor__TextGoToLineWidget::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (textcustomeditor__textgotolinewidget_focusnextchild_isbase) {
            textcustomeditor__textgotolinewidget_focusnextchild_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::focusNextChild();
        }
        auto focusnextchild_cb = textcustomeditor__textgotolinewidget_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (textcustomeditor__textgotolinewidget_focuspreviouschild_isbase) {
            textcustomeditor__textgotolinewidget_focuspreviouschild_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::focusPreviousChild();
        }
        auto focuspreviouschild_cb = textcustomeditor__textgotolinewidget_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textcustomeditor__textgotolinewidget_sender_isbase) {
            textcustomeditor__textgotolinewidget_sender_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::sender();
        }
        auto sender_cb = textcustomeditor__textgotolinewidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textcustomeditor__textgotolinewidget_sendersignalindex_isbase) {
            textcustomeditor__textgotolinewidget_sendersignalindex_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = textcustomeditor__textgotolinewidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextGoToLineWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textcustomeditor__textgotolinewidget_receivers_isbase) {
            textcustomeditor__textgotolinewidget_receivers_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::receivers(signal);
        }
        auto receivers_cb = textcustomeditor__textgotolinewidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextGoToLineWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textcustomeditor__textgotolinewidget_issignalconnected_isbase) {
            textcustomeditor__textgotolinewidget_issignalconnected_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textcustomeditor__textgotolinewidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (textcustomeditor__textgotolinewidget_getdecodedmetricf_isbase) {
            textcustomeditor__textgotolinewidget_getdecodedmetricf_isbase = false;
            return TextCustomEditor__TextGoToLineWidget::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = textcustomeditor__textgotolinewidget_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextCustomEditor__TextGoToLineWidget::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool TextCustomEditor__TextGoToLineWidget_Event(TextCustomEditor::TextGoToLineWidget* self, QEvent* e);
    friend bool TextCustomEditor__TextGoToLineWidget_SuperEvent(TextCustomEditor::TextGoToLineWidget* self, QEvent* e);
    friend void TextCustomEditor__TextGoToLineWidget_ShowEvent(TextCustomEditor::TextGoToLineWidget* self, QShowEvent* e);
    friend void TextCustomEditor__TextGoToLineWidget_SuperShowEvent(TextCustomEditor::TextGoToLineWidget* self, QShowEvent* e);
    friend bool TextCustomEditor__TextGoToLineWidget_EventFilter(TextCustomEditor::TextGoToLineWidget* self, QObject* obj, QEvent* event);
    friend bool TextCustomEditor__TextGoToLineWidget_SuperEventFilter(TextCustomEditor::TextGoToLineWidget* self, QObject* obj, QEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_MousePressEvent(TextCustomEditor::TextGoToLineWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperMousePressEvent(TextCustomEditor::TextGoToLineWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_MouseReleaseEvent(TextCustomEditor::TextGoToLineWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperMouseReleaseEvent(TextCustomEditor::TextGoToLineWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_MouseDoubleClickEvent(TextCustomEditor::TextGoToLineWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperMouseDoubleClickEvent(TextCustomEditor::TextGoToLineWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_MouseMoveEvent(TextCustomEditor::TextGoToLineWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperMouseMoveEvent(TextCustomEditor::TextGoToLineWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_WheelEvent(TextCustomEditor::TextGoToLineWidget* self, QWheelEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperWheelEvent(TextCustomEditor::TextGoToLineWidget* self, QWheelEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_KeyPressEvent(TextCustomEditor::TextGoToLineWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperKeyPressEvent(TextCustomEditor::TextGoToLineWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_KeyReleaseEvent(TextCustomEditor::TextGoToLineWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperKeyReleaseEvent(TextCustomEditor::TextGoToLineWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_FocusInEvent(TextCustomEditor::TextGoToLineWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperFocusInEvent(TextCustomEditor::TextGoToLineWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_FocusOutEvent(TextCustomEditor::TextGoToLineWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperFocusOutEvent(TextCustomEditor::TextGoToLineWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_EnterEvent(TextCustomEditor::TextGoToLineWidget* self, QEnterEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperEnterEvent(TextCustomEditor::TextGoToLineWidget* self, QEnterEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_LeaveEvent(TextCustomEditor::TextGoToLineWidget* self, QEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperLeaveEvent(TextCustomEditor::TextGoToLineWidget* self, QEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_PaintEvent(TextCustomEditor::TextGoToLineWidget* self, QPaintEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperPaintEvent(TextCustomEditor::TextGoToLineWidget* self, QPaintEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_MoveEvent(TextCustomEditor::TextGoToLineWidget* self, QMoveEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperMoveEvent(TextCustomEditor::TextGoToLineWidget* self, QMoveEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_ResizeEvent(TextCustomEditor::TextGoToLineWidget* self, QResizeEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperResizeEvent(TextCustomEditor::TextGoToLineWidget* self, QResizeEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_CloseEvent(TextCustomEditor::TextGoToLineWidget* self, QCloseEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperCloseEvent(TextCustomEditor::TextGoToLineWidget* self, QCloseEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_ContextMenuEvent(TextCustomEditor::TextGoToLineWidget* self, QContextMenuEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperContextMenuEvent(TextCustomEditor::TextGoToLineWidget* self, QContextMenuEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_TabletEvent(TextCustomEditor::TextGoToLineWidget* self, QTabletEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperTabletEvent(TextCustomEditor::TextGoToLineWidget* self, QTabletEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_ActionEvent(TextCustomEditor::TextGoToLineWidget* self, QActionEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperActionEvent(TextCustomEditor::TextGoToLineWidget* self, QActionEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_DragEnterEvent(TextCustomEditor::TextGoToLineWidget* self, QDragEnterEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperDragEnterEvent(TextCustomEditor::TextGoToLineWidget* self, QDragEnterEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_DragMoveEvent(TextCustomEditor::TextGoToLineWidget* self, QDragMoveEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperDragMoveEvent(TextCustomEditor::TextGoToLineWidget* self, QDragMoveEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_DragLeaveEvent(TextCustomEditor::TextGoToLineWidget* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperDragLeaveEvent(TextCustomEditor::TextGoToLineWidget* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_DropEvent(TextCustomEditor::TextGoToLineWidget* self, QDropEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperDropEvent(TextCustomEditor::TextGoToLineWidget* self, QDropEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_HideEvent(TextCustomEditor::TextGoToLineWidget* self, QHideEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperHideEvent(TextCustomEditor::TextGoToLineWidget* self, QHideEvent* event);
    friend bool TextCustomEditor__TextGoToLineWidget_NativeEvent(TextCustomEditor::TextGoToLineWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextCustomEditor__TextGoToLineWidget_SuperNativeEvent(TextCustomEditor::TextGoToLineWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextCustomEditor__TextGoToLineWidget_ChangeEvent(TextCustomEditor::TextGoToLineWidget* self, QEvent* param1);
    friend void TextCustomEditor__TextGoToLineWidget_SuperChangeEvent(TextCustomEditor::TextGoToLineWidget* self, QEvent* param1);
    friend int TextCustomEditor__TextGoToLineWidget_Metric(const TextCustomEditor::TextGoToLineWidget* self, int param1);
    friend int TextCustomEditor__TextGoToLineWidget_SuperMetric(const TextCustomEditor::TextGoToLineWidget* self, int param1);
    friend void TextCustomEditor__TextGoToLineWidget_InitPainter(const TextCustomEditor::TextGoToLineWidget* self, QPainter* painter);
    friend void TextCustomEditor__TextGoToLineWidget_SuperInitPainter(const TextCustomEditor::TextGoToLineWidget* self, QPainter* painter);
    friend QPaintDevice* TextCustomEditor__TextGoToLineWidget_Redirected(const TextCustomEditor::TextGoToLineWidget* self, QPoint* offset);
    friend QPaintDevice* TextCustomEditor__TextGoToLineWidget_SuperRedirected(const TextCustomEditor::TextGoToLineWidget* self, QPoint* offset);
    friend QPainter* TextCustomEditor__TextGoToLineWidget_SharedPainter(const TextCustomEditor::TextGoToLineWidget* self);
    friend QPainter* TextCustomEditor__TextGoToLineWidget_SuperSharedPainter(const TextCustomEditor::TextGoToLineWidget* self);
    friend void TextCustomEditor__TextGoToLineWidget_InputMethodEvent(TextCustomEditor::TextGoToLineWidget* self, QInputMethodEvent* param1);
    friend void TextCustomEditor__TextGoToLineWidget_SuperInputMethodEvent(TextCustomEditor::TextGoToLineWidget* self, QInputMethodEvent* param1);
    friend bool TextCustomEditor__TextGoToLineWidget_FocusNextPrevChild(TextCustomEditor::TextGoToLineWidget* self, bool next);
    friend bool TextCustomEditor__TextGoToLineWidget_SuperFocusNextPrevChild(TextCustomEditor::TextGoToLineWidget* self, bool next);
    friend void TextCustomEditor__TextGoToLineWidget_TimerEvent(TextCustomEditor::TextGoToLineWidget* self, QTimerEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperTimerEvent(TextCustomEditor::TextGoToLineWidget* self, QTimerEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_ChildEvent(TextCustomEditor::TextGoToLineWidget* self, QChildEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperChildEvent(TextCustomEditor::TextGoToLineWidget* self, QChildEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_CustomEvent(TextCustomEditor::TextGoToLineWidget* self, QEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperCustomEvent(TextCustomEditor::TextGoToLineWidget* self, QEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_ConnectNotify(TextCustomEditor::TextGoToLineWidget* self, const QMetaMethod* signal);
    friend void TextCustomEditor__TextGoToLineWidget_SuperConnectNotify(TextCustomEditor::TextGoToLineWidget* self, const QMetaMethod* signal);
    friend void TextCustomEditor__TextGoToLineWidget_DisconnectNotify(TextCustomEditor::TextGoToLineWidget* self, const QMetaMethod* signal);
    friend void TextCustomEditor__TextGoToLineWidget_SuperDisconnectNotify(TextCustomEditor::TextGoToLineWidget* self, const QMetaMethod* signal);
    friend void TextCustomEditor__TextGoToLineWidget_UpdateMicroFocus(TextCustomEditor::TextGoToLineWidget* self);
    friend void TextCustomEditor__TextGoToLineWidget_SuperUpdateMicroFocus(TextCustomEditor::TextGoToLineWidget* self);
    friend void TextCustomEditor__TextGoToLineWidget_Create(TextCustomEditor::TextGoToLineWidget* self);
    friend void TextCustomEditor__TextGoToLineWidget_SuperCreate(TextCustomEditor::TextGoToLineWidget* self);
    friend void TextCustomEditor__TextGoToLineWidget_Destroy(TextCustomEditor::TextGoToLineWidget* self);
    friend void TextCustomEditor__TextGoToLineWidget_SuperDestroy(TextCustomEditor::TextGoToLineWidget* self);
    friend bool TextCustomEditor__TextGoToLineWidget_FocusNextChild(TextCustomEditor::TextGoToLineWidget* self);
    friend bool TextCustomEditor__TextGoToLineWidget_SuperFocusNextChild(TextCustomEditor::TextGoToLineWidget* self);
    friend bool TextCustomEditor__TextGoToLineWidget_FocusPreviousChild(TextCustomEditor::TextGoToLineWidget* self);
    friend bool TextCustomEditor__TextGoToLineWidget_SuperFocusPreviousChild(TextCustomEditor::TextGoToLineWidget* self);
    friend QObject* TextCustomEditor__TextGoToLineWidget_Sender(const TextCustomEditor::TextGoToLineWidget* self);
    friend QObject* TextCustomEditor__TextGoToLineWidget_SuperSender(const TextCustomEditor::TextGoToLineWidget* self);
    friend int TextCustomEditor__TextGoToLineWidget_SenderSignalIndex(const TextCustomEditor::TextGoToLineWidget* self);
    friend int TextCustomEditor__TextGoToLineWidget_SuperSenderSignalIndex(const TextCustomEditor::TextGoToLineWidget* self);
    friend int TextCustomEditor__TextGoToLineWidget_Receivers(const TextCustomEditor::TextGoToLineWidget* self, const char* signal);
    friend int TextCustomEditor__TextGoToLineWidget_SuperReceivers(const TextCustomEditor::TextGoToLineWidget* self, const char* signal);
    friend bool TextCustomEditor__TextGoToLineWidget_IsSignalConnected(const TextCustomEditor::TextGoToLineWidget* self, const QMetaMethod* signal);
    friend bool TextCustomEditor__TextGoToLineWidget_SuperIsSignalConnected(const TextCustomEditor::TextGoToLineWidget* self, const QMetaMethod* signal);
    friend double TextCustomEditor__TextGoToLineWidget_GetDecodedMetricF(const TextCustomEditor::TextGoToLineWidget* self, int metricA, int metricB);
    friend double TextCustomEditor__TextGoToLineWidget_SuperGetDecodedMetricF(const TextCustomEditor::TextGoToLineWidget* self, int metricA, int metricB);
};

#endif
