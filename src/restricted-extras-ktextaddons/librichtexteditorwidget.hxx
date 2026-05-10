#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALRICHTEXTEDITORWIDGET_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALRICHTEXTEDITORWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::RichTextEditorWidget so that we can call protected methods
class VirtualTextCustomEditorRichTextEditorWidget final : public TextCustomEditor::RichTextEditorWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualTextCustomEditorRichTextEditorWidget = true;

    // Virtual class public types (including callbacks)
    using TextCustomEditor__RichTextEditorWidget_MetaObject_Callback = QMetaObject* (*)();
    using TextCustomEditor__RichTextEditorWidget_Metacast_Callback = void* (*)(TextCustomEditor__RichTextEditorWidget*, const char*);
    using TextCustomEditor__RichTextEditorWidget_Metacall_Callback = int (*)(TextCustomEditor__RichTextEditorWidget*, int, int, void**);
    using TextCustomEditor__RichTextEditorWidget_DevType_Callback = int (*)();
    using TextCustomEditor__RichTextEditorWidget_SetVisible_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, bool);
    using TextCustomEditor__RichTextEditorWidget_SizeHint_Callback = QSize* (*)();
    using TextCustomEditor__RichTextEditorWidget_MinimumSizeHint_Callback = QSize* (*)();
    using TextCustomEditor__RichTextEditorWidget_HeightForWidth_Callback = int (*)(const TextCustomEditor__RichTextEditorWidget*, int);
    using TextCustomEditor__RichTextEditorWidget_HasHeightForWidth_Callback = bool (*)();
    using TextCustomEditor__RichTextEditorWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using TextCustomEditor__RichTextEditorWidget_Event_Callback = bool (*)(TextCustomEditor__RichTextEditorWidget*, QEvent*);
    using TextCustomEditor__RichTextEditorWidget_MousePressEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QMouseEvent*);
    using TextCustomEditor__RichTextEditorWidget_MouseReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QMouseEvent*);
    using TextCustomEditor__RichTextEditorWidget_MouseDoubleClickEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QMouseEvent*);
    using TextCustomEditor__RichTextEditorWidget_MouseMoveEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QMouseEvent*);
    using TextCustomEditor__RichTextEditorWidget_WheelEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QWheelEvent*);
    using TextCustomEditor__RichTextEditorWidget_KeyPressEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QKeyEvent*);
    using TextCustomEditor__RichTextEditorWidget_KeyReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QKeyEvent*);
    using TextCustomEditor__RichTextEditorWidget_FocusInEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QFocusEvent*);
    using TextCustomEditor__RichTextEditorWidget_FocusOutEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QFocusEvent*);
    using TextCustomEditor__RichTextEditorWidget_EnterEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QEnterEvent*);
    using TextCustomEditor__RichTextEditorWidget_LeaveEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QEvent*);
    using TextCustomEditor__RichTextEditorWidget_PaintEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QPaintEvent*);
    using TextCustomEditor__RichTextEditorWidget_MoveEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QMoveEvent*);
    using TextCustomEditor__RichTextEditorWidget_ResizeEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QResizeEvent*);
    using TextCustomEditor__RichTextEditorWidget_CloseEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QCloseEvent*);
    using TextCustomEditor__RichTextEditorWidget_ContextMenuEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QContextMenuEvent*);
    using TextCustomEditor__RichTextEditorWidget_TabletEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QTabletEvent*);
    using TextCustomEditor__RichTextEditorWidget_ActionEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QActionEvent*);
    using TextCustomEditor__RichTextEditorWidget_DragEnterEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QDragEnterEvent*);
    using TextCustomEditor__RichTextEditorWidget_DragMoveEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QDragMoveEvent*);
    using TextCustomEditor__RichTextEditorWidget_DragLeaveEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QDragLeaveEvent*);
    using TextCustomEditor__RichTextEditorWidget_DropEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QDropEvent*);
    using TextCustomEditor__RichTextEditorWidget_ShowEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QShowEvent*);
    using TextCustomEditor__RichTextEditorWidget_HideEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QHideEvent*);
    using TextCustomEditor__RichTextEditorWidget_NativeEvent_Callback = bool (*)(TextCustomEditor__RichTextEditorWidget*, libqt_string, void*, intptr_t*);
    using TextCustomEditor__RichTextEditorWidget_ChangeEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QEvent*);
    using TextCustomEditor__RichTextEditorWidget_Metric_Callback = int (*)(const TextCustomEditor__RichTextEditorWidget*, int);
    using TextCustomEditor__RichTextEditorWidget_InitPainter_Callback = void (*)(const TextCustomEditor__RichTextEditorWidget*, QPainter*);
    using TextCustomEditor__RichTextEditorWidget_Redirected_Callback = QPaintDevice* (*)(const TextCustomEditor__RichTextEditorWidget*, QPoint*);
    using TextCustomEditor__RichTextEditorWidget_SharedPainter_Callback = QPainter* (*)();
    using TextCustomEditor__RichTextEditorWidget_InputMethodEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QInputMethodEvent*);
    using TextCustomEditor__RichTextEditorWidget_InputMethodQuery_Callback = QVariant* (*)(const TextCustomEditor__RichTextEditorWidget*, int);
    using TextCustomEditor__RichTextEditorWidget_FocusNextPrevChild_Callback = bool (*)(TextCustomEditor__RichTextEditorWidget*, bool);
    using TextCustomEditor__RichTextEditorWidget_EventFilter_Callback = bool (*)(TextCustomEditor__RichTextEditorWidget*, QObject*, QEvent*);
    using TextCustomEditor__RichTextEditorWidget_TimerEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QTimerEvent*);
    using TextCustomEditor__RichTextEditorWidget_ChildEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QChildEvent*);
    using TextCustomEditor__RichTextEditorWidget_CustomEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QEvent*);
    using TextCustomEditor__RichTextEditorWidget_ConnectNotify_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QMetaMethod*);
    using TextCustomEditor__RichTextEditorWidget_DisconnectNotify_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QMetaMethod*);
    using TextCustomEditor__RichTextEditorWidget_UpdateMicroFocus_Callback = void (*)();
    using TextCustomEditor__RichTextEditorWidget_Create_Callback = void (*)();
    using TextCustomEditor__RichTextEditorWidget_Destroy_Callback = void (*)();
    using TextCustomEditor__RichTextEditorWidget_FocusNextChild_Callback = bool (*)();
    using TextCustomEditor__RichTextEditorWidget_FocusPreviousChild_Callback = bool (*)();
    using TextCustomEditor__RichTextEditorWidget_Sender_Callback = QObject* (*)();
    using TextCustomEditor__RichTextEditorWidget_SenderSignalIndex_Callback = int (*)();
    using TextCustomEditor__RichTextEditorWidget_Receivers_Callback = int (*)(const TextCustomEditor__RichTextEditorWidget*, const char*);
    using TextCustomEditor__RichTextEditorWidget_IsSignalConnected_Callback = bool (*)(const TextCustomEditor__RichTextEditorWidget*, QMetaMethod*);
    using TextCustomEditor__RichTextEditorWidget_GetDecodedMetricF_Callback = double (*)(const TextCustomEditor__RichTextEditorWidget*, int, int);

  protected:
    // Instance callback storage
    TextCustomEditor__RichTextEditorWidget_MetaObject_Callback textcustomeditor__richtexteditorwidget_metaobject_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_Metacast_Callback textcustomeditor__richtexteditorwidget_metacast_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_Metacall_Callback textcustomeditor__richtexteditorwidget_metacall_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_DevType_Callback textcustomeditor__richtexteditorwidget_devtype_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_SetVisible_Callback textcustomeditor__richtexteditorwidget_setvisible_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_SizeHint_Callback textcustomeditor__richtexteditorwidget_sizehint_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_MinimumSizeHint_Callback textcustomeditor__richtexteditorwidget_minimumsizehint_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_HeightForWidth_Callback textcustomeditor__richtexteditorwidget_heightforwidth_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_HasHeightForWidth_Callback textcustomeditor__richtexteditorwidget_hasheightforwidth_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_PaintEngine_Callback textcustomeditor__richtexteditorwidget_paintengine_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_Event_Callback textcustomeditor__richtexteditorwidget_event_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_MousePressEvent_Callback textcustomeditor__richtexteditorwidget_mousepressevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_MouseReleaseEvent_Callback textcustomeditor__richtexteditorwidget_mousereleaseevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_MouseDoubleClickEvent_Callback textcustomeditor__richtexteditorwidget_mousedoubleclickevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_MouseMoveEvent_Callback textcustomeditor__richtexteditorwidget_mousemoveevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_WheelEvent_Callback textcustomeditor__richtexteditorwidget_wheelevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_KeyPressEvent_Callback textcustomeditor__richtexteditorwidget_keypressevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_KeyReleaseEvent_Callback textcustomeditor__richtexteditorwidget_keyreleaseevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_FocusInEvent_Callback textcustomeditor__richtexteditorwidget_focusinevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_FocusOutEvent_Callback textcustomeditor__richtexteditorwidget_focusoutevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_EnterEvent_Callback textcustomeditor__richtexteditorwidget_enterevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_LeaveEvent_Callback textcustomeditor__richtexteditorwidget_leaveevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_PaintEvent_Callback textcustomeditor__richtexteditorwidget_paintevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_MoveEvent_Callback textcustomeditor__richtexteditorwidget_moveevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_ResizeEvent_Callback textcustomeditor__richtexteditorwidget_resizeevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_CloseEvent_Callback textcustomeditor__richtexteditorwidget_closeevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_ContextMenuEvent_Callback textcustomeditor__richtexteditorwidget_contextmenuevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_TabletEvent_Callback textcustomeditor__richtexteditorwidget_tabletevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_ActionEvent_Callback textcustomeditor__richtexteditorwidget_actionevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_DragEnterEvent_Callback textcustomeditor__richtexteditorwidget_dragenterevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_DragMoveEvent_Callback textcustomeditor__richtexteditorwidget_dragmoveevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_DragLeaveEvent_Callback textcustomeditor__richtexteditorwidget_dragleaveevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_DropEvent_Callback textcustomeditor__richtexteditorwidget_dropevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_ShowEvent_Callback textcustomeditor__richtexteditorwidget_showevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_HideEvent_Callback textcustomeditor__richtexteditorwidget_hideevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_NativeEvent_Callback textcustomeditor__richtexteditorwidget_nativeevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_ChangeEvent_Callback textcustomeditor__richtexteditorwidget_changeevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_Metric_Callback textcustomeditor__richtexteditorwidget_metric_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_InitPainter_Callback textcustomeditor__richtexteditorwidget_initpainter_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_Redirected_Callback textcustomeditor__richtexteditorwidget_redirected_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_SharedPainter_Callback textcustomeditor__richtexteditorwidget_sharedpainter_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_InputMethodEvent_Callback textcustomeditor__richtexteditorwidget_inputmethodevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_InputMethodQuery_Callback textcustomeditor__richtexteditorwidget_inputmethodquery_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_FocusNextPrevChild_Callback textcustomeditor__richtexteditorwidget_focusnextprevchild_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_EventFilter_Callback textcustomeditor__richtexteditorwidget_eventfilter_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_TimerEvent_Callback textcustomeditor__richtexteditorwidget_timerevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_ChildEvent_Callback textcustomeditor__richtexteditorwidget_childevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_CustomEvent_Callback textcustomeditor__richtexteditorwidget_customevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_ConnectNotify_Callback textcustomeditor__richtexteditorwidget_connectnotify_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_DisconnectNotify_Callback textcustomeditor__richtexteditorwidget_disconnectnotify_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_UpdateMicroFocus_Callback textcustomeditor__richtexteditorwidget_updatemicrofocus_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_Create_Callback textcustomeditor__richtexteditorwidget_create_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_Destroy_Callback textcustomeditor__richtexteditorwidget_destroy_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_FocusNextChild_Callback textcustomeditor__richtexteditorwidget_focusnextchild_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_FocusPreviousChild_Callback textcustomeditor__richtexteditorwidget_focuspreviouschild_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_Sender_Callback textcustomeditor__richtexteditorwidget_sender_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_SenderSignalIndex_Callback textcustomeditor__richtexteditorwidget_sendersignalindex_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_Receivers_Callback textcustomeditor__richtexteditorwidget_receivers_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_IsSignalConnected_Callback textcustomeditor__richtexteditorwidget_issignalconnected_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_GetDecodedMetricF_Callback textcustomeditor__richtexteditorwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool textcustomeditor__richtexteditorwidget_metaobject_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_metacast_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_metacall_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_devtype_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_setvisible_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_sizehint_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_minimumsizehint_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_heightforwidth_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_hasheightforwidth_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_paintengine_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_event_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_mousepressevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_mousereleaseevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_mousedoubleclickevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_mousemoveevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_wheelevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_keypressevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_keyreleaseevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_focusinevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_focusoutevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_enterevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_leaveevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_paintevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_moveevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_resizeevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_closeevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_contextmenuevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_tabletevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_actionevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_dragenterevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_dragmoveevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_dragleaveevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_dropevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_showevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_hideevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_nativeevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_changeevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_metric_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_initpainter_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_redirected_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_sharedpainter_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_inputmethodevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_inputmethodquery_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_focusnextprevchild_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_eventfilter_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_timerevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_childevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_customevent_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_connectnotify_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_disconnectnotify_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_updatemicrofocus_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_create_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_destroy_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_focusnextchild_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_focuspreviouschild_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_sender_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_sendersignalindex_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_receivers_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_issignalconnected_isbase = false;
    mutable bool textcustomeditor__richtexteditorwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualTextCustomEditorRichTextEditorWidget(QWidget* parent) : TextCustomEditor::RichTextEditorWidget(parent) {};
    VirtualTextCustomEditorRichTextEditorWidget() : TextCustomEditor::RichTextEditorWidget() {};
    VirtualTextCustomEditorRichTextEditorWidget(TextCustomEditor::RichTextEditor* customEditor) : TextCustomEditor::RichTextEditorWidget(customEditor) {};
    VirtualTextCustomEditorRichTextEditorWidget(TextCustomEditor::RichTextEditor* customEditor, QWidget* parent) : TextCustomEditor::RichTextEditorWidget(customEditor, parent) {};

    // Callback setters
    inline void setTextCustomEditor__RichTextEditorWidget_MetaObject_Callback(TextCustomEditor__RichTextEditorWidget_MetaObject_Callback cb) { textcustomeditor__richtexteditorwidget_metaobject_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_Metacast_Callback(TextCustomEditor__RichTextEditorWidget_Metacast_Callback cb) { textcustomeditor__richtexteditorwidget_metacast_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_Metacall_Callback(TextCustomEditor__RichTextEditorWidget_Metacall_Callback cb) { textcustomeditor__richtexteditorwidget_metacall_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_DevType_Callback(TextCustomEditor__RichTextEditorWidget_DevType_Callback cb) { textcustomeditor__richtexteditorwidget_devtype_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_SetVisible_Callback(TextCustomEditor__RichTextEditorWidget_SetVisible_Callback cb) { textcustomeditor__richtexteditorwidget_setvisible_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_SizeHint_Callback(TextCustomEditor__RichTextEditorWidget_SizeHint_Callback cb) { textcustomeditor__richtexteditorwidget_sizehint_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_MinimumSizeHint_Callback(TextCustomEditor__RichTextEditorWidget_MinimumSizeHint_Callback cb) { textcustomeditor__richtexteditorwidget_minimumsizehint_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_HeightForWidth_Callback(TextCustomEditor__RichTextEditorWidget_HeightForWidth_Callback cb) { textcustomeditor__richtexteditorwidget_heightforwidth_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_HasHeightForWidth_Callback(TextCustomEditor__RichTextEditorWidget_HasHeightForWidth_Callback cb) { textcustomeditor__richtexteditorwidget_hasheightforwidth_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_PaintEngine_Callback(TextCustomEditor__RichTextEditorWidget_PaintEngine_Callback cb) { textcustomeditor__richtexteditorwidget_paintengine_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_Event_Callback(TextCustomEditor__RichTextEditorWidget_Event_Callback cb) { textcustomeditor__richtexteditorwidget_event_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_MousePressEvent_Callback(TextCustomEditor__RichTextEditorWidget_MousePressEvent_Callback cb) { textcustomeditor__richtexteditorwidget_mousepressevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_MouseReleaseEvent_Callback(TextCustomEditor__RichTextEditorWidget_MouseReleaseEvent_Callback cb) { textcustomeditor__richtexteditorwidget_mousereleaseevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_MouseDoubleClickEvent_Callback(TextCustomEditor__RichTextEditorWidget_MouseDoubleClickEvent_Callback cb) { textcustomeditor__richtexteditorwidget_mousedoubleclickevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_MouseMoveEvent_Callback(TextCustomEditor__RichTextEditorWidget_MouseMoveEvent_Callback cb) { textcustomeditor__richtexteditorwidget_mousemoveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_WheelEvent_Callback(TextCustomEditor__RichTextEditorWidget_WheelEvent_Callback cb) { textcustomeditor__richtexteditorwidget_wheelevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_KeyPressEvent_Callback(TextCustomEditor__RichTextEditorWidget_KeyPressEvent_Callback cb) { textcustomeditor__richtexteditorwidget_keypressevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_KeyReleaseEvent_Callback(TextCustomEditor__RichTextEditorWidget_KeyReleaseEvent_Callback cb) { textcustomeditor__richtexteditorwidget_keyreleaseevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_FocusInEvent_Callback(TextCustomEditor__RichTextEditorWidget_FocusInEvent_Callback cb) { textcustomeditor__richtexteditorwidget_focusinevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_FocusOutEvent_Callback(TextCustomEditor__RichTextEditorWidget_FocusOutEvent_Callback cb) { textcustomeditor__richtexteditorwidget_focusoutevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_EnterEvent_Callback(TextCustomEditor__RichTextEditorWidget_EnterEvent_Callback cb) { textcustomeditor__richtexteditorwidget_enterevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_LeaveEvent_Callback(TextCustomEditor__RichTextEditorWidget_LeaveEvent_Callback cb) { textcustomeditor__richtexteditorwidget_leaveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_PaintEvent_Callback(TextCustomEditor__RichTextEditorWidget_PaintEvent_Callback cb) { textcustomeditor__richtexteditorwidget_paintevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_MoveEvent_Callback(TextCustomEditor__RichTextEditorWidget_MoveEvent_Callback cb) { textcustomeditor__richtexteditorwidget_moveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_ResizeEvent_Callback(TextCustomEditor__RichTextEditorWidget_ResizeEvent_Callback cb) { textcustomeditor__richtexteditorwidget_resizeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_CloseEvent_Callback(TextCustomEditor__RichTextEditorWidget_CloseEvent_Callback cb) { textcustomeditor__richtexteditorwidget_closeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_ContextMenuEvent_Callback(TextCustomEditor__RichTextEditorWidget_ContextMenuEvent_Callback cb) { textcustomeditor__richtexteditorwidget_contextmenuevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_TabletEvent_Callback(TextCustomEditor__RichTextEditorWidget_TabletEvent_Callback cb) { textcustomeditor__richtexteditorwidget_tabletevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_ActionEvent_Callback(TextCustomEditor__RichTextEditorWidget_ActionEvent_Callback cb) { textcustomeditor__richtexteditorwidget_actionevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_DragEnterEvent_Callback(TextCustomEditor__RichTextEditorWidget_DragEnterEvent_Callback cb) { textcustomeditor__richtexteditorwidget_dragenterevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_DragMoveEvent_Callback(TextCustomEditor__RichTextEditorWidget_DragMoveEvent_Callback cb) { textcustomeditor__richtexteditorwidget_dragmoveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_DragLeaveEvent_Callback(TextCustomEditor__RichTextEditorWidget_DragLeaveEvent_Callback cb) { textcustomeditor__richtexteditorwidget_dragleaveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_DropEvent_Callback(TextCustomEditor__RichTextEditorWidget_DropEvent_Callback cb) { textcustomeditor__richtexteditorwidget_dropevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_ShowEvent_Callback(TextCustomEditor__RichTextEditorWidget_ShowEvent_Callback cb) { textcustomeditor__richtexteditorwidget_showevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_HideEvent_Callback(TextCustomEditor__RichTextEditorWidget_HideEvent_Callback cb) { textcustomeditor__richtexteditorwidget_hideevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_NativeEvent_Callback(TextCustomEditor__RichTextEditorWidget_NativeEvent_Callback cb) { textcustomeditor__richtexteditorwidget_nativeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_ChangeEvent_Callback(TextCustomEditor__RichTextEditorWidget_ChangeEvent_Callback cb) { textcustomeditor__richtexteditorwidget_changeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_Metric_Callback(TextCustomEditor__RichTextEditorWidget_Metric_Callback cb) { textcustomeditor__richtexteditorwidget_metric_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_InitPainter_Callback(TextCustomEditor__RichTextEditorWidget_InitPainter_Callback cb) { textcustomeditor__richtexteditorwidget_initpainter_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_Redirected_Callback(TextCustomEditor__RichTextEditorWidget_Redirected_Callback cb) { textcustomeditor__richtexteditorwidget_redirected_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_SharedPainter_Callback(TextCustomEditor__RichTextEditorWidget_SharedPainter_Callback cb) { textcustomeditor__richtexteditorwidget_sharedpainter_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_InputMethodEvent_Callback(TextCustomEditor__RichTextEditorWidget_InputMethodEvent_Callback cb) { textcustomeditor__richtexteditorwidget_inputmethodevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_InputMethodQuery_Callback(TextCustomEditor__RichTextEditorWidget_InputMethodQuery_Callback cb) { textcustomeditor__richtexteditorwidget_inputmethodquery_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_FocusNextPrevChild_Callback(TextCustomEditor__RichTextEditorWidget_FocusNextPrevChild_Callback cb) { textcustomeditor__richtexteditorwidget_focusnextprevchild_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_EventFilter_Callback(TextCustomEditor__RichTextEditorWidget_EventFilter_Callback cb) { textcustomeditor__richtexteditorwidget_eventfilter_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_TimerEvent_Callback(TextCustomEditor__RichTextEditorWidget_TimerEvent_Callback cb) { textcustomeditor__richtexteditorwidget_timerevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_ChildEvent_Callback(TextCustomEditor__RichTextEditorWidget_ChildEvent_Callback cb) { textcustomeditor__richtexteditorwidget_childevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_CustomEvent_Callback(TextCustomEditor__RichTextEditorWidget_CustomEvent_Callback cb) { textcustomeditor__richtexteditorwidget_customevent_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_ConnectNotify_Callback(TextCustomEditor__RichTextEditorWidget_ConnectNotify_Callback cb) { textcustomeditor__richtexteditorwidget_connectnotify_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_DisconnectNotify_Callback(TextCustomEditor__RichTextEditorWidget_DisconnectNotify_Callback cb) { textcustomeditor__richtexteditorwidget_disconnectnotify_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_UpdateMicroFocus_Callback(TextCustomEditor__RichTextEditorWidget_UpdateMicroFocus_Callback cb) { textcustomeditor__richtexteditorwidget_updatemicrofocus_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_Create_Callback(TextCustomEditor__RichTextEditorWidget_Create_Callback cb) { textcustomeditor__richtexteditorwidget_create_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_Destroy_Callback(TextCustomEditor__RichTextEditorWidget_Destroy_Callback cb) { textcustomeditor__richtexteditorwidget_destroy_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_FocusNextChild_Callback(TextCustomEditor__RichTextEditorWidget_FocusNextChild_Callback cb) { textcustomeditor__richtexteditorwidget_focusnextchild_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_FocusPreviousChild_Callback(TextCustomEditor__RichTextEditorWidget_FocusPreviousChild_Callback cb) { textcustomeditor__richtexteditorwidget_focuspreviouschild_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_Sender_Callback(TextCustomEditor__RichTextEditorWidget_Sender_Callback cb) { textcustomeditor__richtexteditorwidget_sender_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_SenderSignalIndex_Callback(TextCustomEditor__RichTextEditorWidget_SenderSignalIndex_Callback cb) { textcustomeditor__richtexteditorwidget_sendersignalindex_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_Receivers_Callback(TextCustomEditor__RichTextEditorWidget_Receivers_Callback cb) { textcustomeditor__richtexteditorwidget_receivers_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_IsSignalConnected_Callback(TextCustomEditor__RichTextEditorWidget_IsSignalConnected_Callback cb) { textcustomeditor__richtexteditorwidget_issignalconnected_callback = cb; }
    inline void setTextCustomEditor__RichTextEditorWidget_GetDecodedMetricF_Callback(TextCustomEditor__RichTextEditorWidget_GetDecodedMetricF_Callback cb) { textcustomeditor__richtexteditorwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextCustomEditor__RichTextEditorWidget_MetaObject_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_metaobject_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_Metacast_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_metacast_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_Metacall_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_metacall_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_DevType_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_devtype_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_SetVisible_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_setvisible_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_SizeHint_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_sizehint_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_MinimumSizeHint_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_minimumsizehint_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_HeightForWidth_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_heightforwidth_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_HasHeightForWidth_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_hasheightforwidth_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_PaintEngine_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_paintengine_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_Event_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_event_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_MousePressEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_mousepressevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_MouseReleaseEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_mousereleaseevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_MouseDoubleClickEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_mousedoubleclickevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_MouseMoveEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_mousemoveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_WheelEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_wheelevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_KeyPressEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_keypressevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_KeyReleaseEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_keyreleaseevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_FocusInEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_focusinevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_FocusOutEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_focusoutevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_EnterEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_enterevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_LeaveEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_leaveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_PaintEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_paintevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_MoveEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_moveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_ResizeEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_resizeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_CloseEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_closeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_ContextMenuEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_contextmenuevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_TabletEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_tabletevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_ActionEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_actionevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_DragEnterEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_dragenterevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_DragMoveEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_dragmoveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_DragLeaveEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_dragleaveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_DropEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_dropevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_ShowEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_showevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_HideEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_hideevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_NativeEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_nativeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_ChangeEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_changeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_Metric_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_metric_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_InitPainter_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_initpainter_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_Redirected_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_redirected_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_SharedPainter_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_sharedpainter_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_InputMethodEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_inputmethodevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_InputMethodQuery_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_inputmethodquery_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_FocusNextPrevChild_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_focusnextprevchild_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_EventFilter_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_eventfilter_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_TimerEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_timerevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_ChildEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_childevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_CustomEvent_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_customevent_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_ConnectNotify_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_connectnotify_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_DisconnectNotify_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_disconnectnotify_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_UpdateMicroFocus_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_updatemicrofocus_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_Create_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_create_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_Destroy_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_destroy_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_FocusNextChild_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_focusnextchild_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_FocusPreviousChild_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_focuspreviouschild_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_Sender_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_sender_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_SenderSignalIndex_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_sendersignalindex_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_Receivers_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_receivers_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_IsSignalConnected_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_issignalconnected_isbase = value; }
    inline void setTextCustomEditor__RichTextEditorWidget_GetDecodedMetricF_IsBase(bool value) const { textcustomeditor__richtexteditorwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__richtexteditorwidget_metaobject_isbase) {
            textcustomeditor__richtexteditorwidget_metaobject_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::metaObject();
        }
        auto metaobject_cb = textcustomeditor__richtexteditorwidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__richtexteditorwidget_metacast_isbase) {
            textcustomeditor__richtexteditorwidget_metacast_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::qt_metacast(param1);
        }
        auto metacast_cb = textcustomeditor__richtexteditorwidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__richtexteditorwidget_metacall_isbase) {
            textcustomeditor__richtexteditorwidget_metacall_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textcustomeditor__richtexteditorwidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditorWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textcustomeditor__richtexteditorwidget_devtype_isbase) {
            textcustomeditor__richtexteditorwidget_devtype_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::devType();
        }
        auto devtype_cb = textcustomeditor__richtexteditorwidget_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditorWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textcustomeditor__richtexteditorwidget_setvisible_isbase) {
            textcustomeditor__richtexteditorwidget_setvisible_isbase = false;
            TextCustomEditor__RichTextEditorWidget::setVisible(visible);
            return;
        }
        auto setvisible_cb = textcustomeditor__richtexteditorwidget_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textcustomeditor__richtexteditorwidget_sizehint_isbase) {
            textcustomeditor__richtexteditorwidget_sizehint_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::sizeHint();
        }
        auto sizehint_cb = textcustomeditor__richtexteditorwidget_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textcustomeditor__richtexteditorwidget_minimumsizehint_isbase) {
            textcustomeditor__richtexteditorwidget_minimumsizehint_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::minimumSizeHint();
        }
        auto minimumsizehint_cb = textcustomeditor__richtexteditorwidget_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textcustomeditor__richtexteditorwidget_heightforwidth_isbase) {
            textcustomeditor__richtexteditorwidget_heightforwidth_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::heightForWidth(param1);
        }
        auto heightforwidth_cb = textcustomeditor__richtexteditorwidget_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditorWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textcustomeditor__richtexteditorwidget_hasheightforwidth_isbase) {
            textcustomeditor__richtexteditorwidget_hasheightforwidth_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = textcustomeditor__richtexteditorwidget_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textcustomeditor__richtexteditorwidget_paintengine_isbase) {
            textcustomeditor__richtexteditorwidget_paintengine_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::paintEngine();
        }
        auto paintengine_cb = textcustomeditor__richtexteditorwidget_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_event_isbase) {
            textcustomeditor__richtexteditorwidget_event_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::event(event);
        }
        auto event_cb = textcustomeditor__richtexteditorwidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_mousepressevent_isbase) {
            textcustomeditor__richtexteditorwidget_mousepressevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = textcustomeditor__richtexteditorwidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_mousereleaseevent_isbase) {
            textcustomeditor__richtexteditorwidget_mousereleaseevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = textcustomeditor__richtexteditorwidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_mousedoubleclickevent_isbase) {
            textcustomeditor__richtexteditorwidget_mousedoubleclickevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = textcustomeditor__richtexteditorwidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_mousemoveevent_isbase) {
            textcustomeditor__richtexteditorwidget_mousemoveevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = textcustomeditor__richtexteditorwidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_wheelevent_isbase) {
            textcustomeditor__richtexteditorwidget_wheelevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = textcustomeditor__richtexteditorwidget_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_keypressevent_isbase) {
            textcustomeditor__richtexteditorwidget_keypressevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = textcustomeditor__richtexteditorwidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_keyreleaseevent_isbase) {
            textcustomeditor__richtexteditorwidget_keyreleaseevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = textcustomeditor__richtexteditorwidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_focusinevent_isbase) {
            textcustomeditor__richtexteditorwidget_focusinevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = textcustomeditor__richtexteditorwidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_focusoutevent_isbase) {
            textcustomeditor__richtexteditorwidget_focusoutevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = textcustomeditor__richtexteditorwidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_enterevent_isbase) {
            textcustomeditor__richtexteditorwidget_enterevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::enterEvent(event);
            return;
        }
        auto enterevent_cb = textcustomeditor__richtexteditorwidget_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_leaveevent_isbase) {
            textcustomeditor__richtexteditorwidget_leaveevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = textcustomeditor__richtexteditorwidget_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_paintevent_isbase) {
            textcustomeditor__richtexteditorwidget_paintevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::paintEvent(event);
            return;
        }
        auto paintevent_cb = textcustomeditor__richtexteditorwidget_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_moveevent_isbase) {
            textcustomeditor__richtexteditorwidget_moveevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = textcustomeditor__richtexteditorwidget_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_resizeevent_isbase) {
            textcustomeditor__richtexteditorwidget_resizeevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = textcustomeditor__richtexteditorwidget_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_closeevent_isbase) {
            textcustomeditor__richtexteditorwidget_closeevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = textcustomeditor__richtexteditorwidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_contextmenuevent_isbase) {
            textcustomeditor__richtexteditorwidget_contextmenuevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = textcustomeditor__richtexteditorwidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_tabletevent_isbase) {
            textcustomeditor__richtexteditorwidget_tabletevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = textcustomeditor__richtexteditorwidget_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_actionevent_isbase) {
            textcustomeditor__richtexteditorwidget_actionevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::actionEvent(event);
            return;
        }
        auto actionevent_cb = textcustomeditor__richtexteditorwidget_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_dragenterevent_isbase) {
            textcustomeditor__richtexteditorwidget_dragenterevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = textcustomeditor__richtexteditorwidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_dragmoveevent_isbase) {
            textcustomeditor__richtexteditorwidget_dragmoveevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = textcustomeditor__richtexteditorwidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_dragleaveevent_isbase) {
            textcustomeditor__richtexteditorwidget_dragleaveevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = textcustomeditor__richtexteditorwidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_dropevent_isbase) {
            textcustomeditor__richtexteditorwidget_dropevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::dropEvent(event);
            return;
        }
        auto dropevent_cb = textcustomeditor__richtexteditorwidget_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_showevent_isbase) {
            textcustomeditor__richtexteditorwidget_showevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::showEvent(event);
            return;
        }
        auto showevent_cb = textcustomeditor__richtexteditorwidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_hideevent_isbase) {
            textcustomeditor__richtexteditorwidget_hideevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::hideEvent(event);
            return;
        }
        auto hideevent_cb = textcustomeditor__richtexteditorwidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textcustomeditor__richtexteditorwidget_nativeevent_isbase) {
            textcustomeditor__richtexteditorwidget_nativeevent_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = textcustomeditor__richtexteditorwidget_nativeevent_callback;
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
        return TextCustomEditor__RichTextEditorWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textcustomeditor__richtexteditorwidget_changeevent_isbase) {
            textcustomeditor__richtexteditorwidget_changeevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::changeEvent(param1);
            return;
        }
        auto changeevent_cb = textcustomeditor__richtexteditorwidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textcustomeditor__richtexteditorwidget_metric_isbase) {
            textcustomeditor__richtexteditorwidget_metric_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::metric(param1);
        }
        auto metric_cb = textcustomeditor__richtexteditorwidget_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditorWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textcustomeditor__richtexteditorwidget_initpainter_isbase) {
            textcustomeditor__richtexteditorwidget_initpainter_isbase = false;
            TextCustomEditor__RichTextEditorWidget::initPainter(painter);
            return;
        }
        auto initpainter_cb = textcustomeditor__richtexteditorwidget_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textcustomeditor__richtexteditorwidget_redirected_isbase) {
            textcustomeditor__richtexteditorwidget_redirected_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::redirected(offset);
        }
        auto redirected_cb = textcustomeditor__richtexteditorwidget_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textcustomeditor__richtexteditorwidget_sharedpainter_isbase) {
            textcustomeditor__richtexteditorwidget_sharedpainter_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::sharedPainter();
        }
        auto sharedpainter_cb = textcustomeditor__richtexteditorwidget_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textcustomeditor__richtexteditorwidget_inputmethodevent_isbase) {
            textcustomeditor__richtexteditorwidget_inputmethodevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = textcustomeditor__richtexteditorwidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textcustomeditor__richtexteditorwidget_inputmethodquery_isbase) {
            textcustomeditor__richtexteditorwidget_inputmethodquery_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = textcustomeditor__richtexteditorwidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textcustomeditor__richtexteditorwidget_focusnextprevchild_isbase) {
            textcustomeditor__richtexteditorwidget_focusnextprevchild_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = textcustomeditor__richtexteditorwidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_eventfilter_isbase) {
            textcustomeditor__richtexteditorwidget_eventfilter_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::eventFilter(watched, event);
        }
        auto eventfilter_cb = textcustomeditor__richtexteditorwidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_timerevent_isbase) {
            textcustomeditor__richtexteditorwidget_timerevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::timerEvent(event);
            return;
        }
        auto timerevent_cb = textcustomeditor__richtexteditorwidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_childevent_isbase) {
            textcustomeditor__richtexteditorwidget_childevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::childEvent(event);
            return;
        }
        auto childevent_cb = textcustomeditor__richtexteditorwidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_customevent_isbase) {
            textcustomeditor__richtexteditorwidget_customevent_isbase = false;
            TextCustomEditor__RichTextEditorWidget::customEvent(event);
            return;
        }
        auto customevent_cb = textcustomeditor__richtexteditorwidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtexteditorwidget_connectnotify_isbase) {
            textcustomeditor__richtexteditorwidget_connectnotify_isbase = false;
            TextCustomEditor__RichTextEditorWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textcustomeditor__richtexteditorwidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtexteditorwidget_disconnectnotify_isbase) {
            textcustomeditor__richtexteditorwidget_disconnectnotify_isbase = false;
            TextCustomEditor__RichTextEditorWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textcustomeditor__richtexteditorwidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (textcustomeditor__richtexteditorwidget_updatemicrofocus_isbase) {
            textcustomeditor__richtexteditorwidget_updatemicrofocus_isbase = false;
            TextCustomEditor__RichTextEditorWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = textcustomeditor__richtexteditorwidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextCustomEditor__RichTextEditorWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (textcustomeditor__richtexteditorwidget_create_isbase) {
            textcustomeditor__richtexteditorwidget_create_isbase = false;
            TextCustomEditor__RichTextEditorWidget::create();
            return;
        }
        auto create_cb = textcustomeditor__richtexteditorwidget_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextCustomEditor__RichTextEditorWidget::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (textcustomeditor__richtexteditorwidget_destroy_isbase) {
            textcustomeditor__richtexteditorwidget_destroy_isbase = false;
            TextCustomEditor__RichTextEditorWidget::destroy();
            return;
        }
        auto destroy_cb = textcustomeditor__richtexteditorwidget_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextCustomEditor__RichTextEditorWidget::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (textcustomeditor__richtexteditorwidget_focusnextchild_isbase) {
            textcustomeditor__richtexteditorwidget_focusnextchild_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::focusNextChild();
        }
        auto focusnextchild_cb = textcustomeditor__richtexteditorwidget_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (textcustomeditor__richtexteditorwidget_focuspreviouschild_isbase) {
            textcustomeditor__richtexteditorwidget_focuspreviouschild_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::focusPreviousChild();
        }
        auto focuspreviouschild_cb = textcustomeditor__richtexteditorwidget_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textcustomeditor__richtexteditorwidget_sender_isbase) {
            textcustomeditor__richtexteditorwidget_sender_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::sender();
        }
        auto sender_cb = textcustomeditor__richtexteditorwidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textcustomeditor__richtexteditorwidget_sendersignalindex_isbase) {
            textcustomeditor__richtexteditorwidget_sendersignalindex_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = textcustomeditor__richtexteditorwidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditorWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textcustomeditor__richtexteditorwidget_receivers_isbase) {
            textcustomeditor__richtexteditorwidget_receivers_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::receivers(signal);
        }
        auto receivers_cb = textcustomeditor__richtexteditorwidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditorWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textcustomeditor__richtexteditorwidget_issignalconnected_isbase) {
            textcustomeditor__richtexteditorwidget_issignalconnected_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textcustomeditor__richtexteditorwidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (textcustomeditor__richtexteditorwidget_getdecodedmetricf_isbase) {
            textcustomeditor__richtexteditorwidget_getdecodedmetricf_isbase = false;
            return TextCustomEditor__RichTextEditorWidget::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = textcustomeditor__richtexteditorwidget_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextCustomEditor__RichTextEditorWidget::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool TextCustomEditor__RichTextEditorWidget_Event(TextCustomEditor::RichTextEditorWidget* self, QEvent* event);
    friend bool TextCustomEditor__RichTextEditorWidget_SuperEvent(TextCustomEditor::RichTextEditorWidget* self, QEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_MousePressEvent(TextCustomEditor::RichTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperMousePressEvent(TextCustomEditor::RichTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_MouseReleaseEvent(TextCustomEditor::RichTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperMouseReleaseEvent(TextCustomEditor::RichTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_MouseDoubleClickEvent(TextCustomEditor::RichTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperMouseDoubleClickEvent(TextCustomEditor::RichTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_MouseMoveEvent(TextCustomEditor::RichTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperMouseMoveEvent(TextCustomEditor::RichTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_WheelEvent(TextCustomEditor::RichTextEditorWidget* self, QWheelEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperWheelEvent(TextCustomEditor::RichTextEditorWidget* self, QWheelEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_KeyPressEvent(TextCustomEditor::RichTextEditorWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperKeyPressEvent(TextCustomEditor::RichTextEditorWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_KeyReleaseEvent(TextCustomEditor::RichTextEditorWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperKeyReleaseEvent(TextCustomEditor::RichTextEditorWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_FocusInEvent(TextCustomEditor::RichTextEditorWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperFocusInEvent(TextCustomEditor::RichTextEditorWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_FocusOutEvent(TextCustomEditor::RichTextEditorWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperFocusOutEvent(TextCustomEditor::RichTextEditorWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_EnterEvent(TextCustomEditor::RichTextEditorWidget* self, QEnterEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperEnterEvent(TextCustomEditor::RichTextEditorWidget* self, QEnterEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_LeaveEvent(TextCustomEditor::RichTextEditorWidget* self, QEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperLeaveEvent(TextCustomEditor::RichTextEditorWidget* self, QEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_PaintEvent(TextCustomEditor::RichTextEditorWidget* self, QPaintEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperPaintEvent(TextCustomEditor::RichTextEditorWidget* self, QPaintEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_MoveEvent(TextCustomEditor::RichTextEditorWidget* self, QMoveEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperMoveEvent(TextCustomEditor::RichTextEditorWidget* self, QMoveEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_ResizeEvent(TextCustomEditor::RichTextEditorWidget* self, QResizeEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperResizeEvent(TextCustomEditor::RichTextEditorWidget* self, QResizeEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_CloseEvent(TextCustomEditor::RichTextEditorWidget* self, QCloseEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperCloseEvent(TextCustomEditor::RichTextEditorWidget* self, QCloseEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_ContextMenuEvent(TextCustomEditor::RichTextEditorWidget* self, QContextMenuEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperContextMenuEvent(TextCustomEditor::RichTextEditorWidget* self, QContextMenuEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_TabletEvent(TextCustomEditor::RichTextEditorWidget* self, QTabletEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperTabletEvent(TextCustomEditor::RichTextEditorWidget* self, QTabletEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_ActionEvent(TextCustomEditor::RichTextEditorWidget* self, QActionEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperActionEvent(TextCustomEditor::RichTextEditorWidget* self, QActionEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_DragEnterEvent(TextCustomEditor::RichTextEditorWidget* self, QDragEnterEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperDragEnterEvent(TextCustomEditor::RichTextEditorWidget* self, QDragEnterEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_DragMoveEvent(TextCustomEditor::RichTextEditorWidget* self, QDragMoveEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperDragMoveEvent(TextCustomEditor::RichTextEditorWidget* self, QDragMoveEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_DragLeaveEvent(TextCustomEditor::RichTextEditorWidget* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperDragLeaveEvent(TextCustomEditor::RichTextEditorWidget* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_DropEvent(TextCustomEditor::RichTextEditorWidget* self, QDropEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperDropEvent(TextCustomEditor::RichTextEditorWidget* self, QDropEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_ShowEvent(TextCustomEditor::RichTextEditorWidget* self, QShowEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperShowEvent(TextCustomEditor::RichTextEditorWidget* self, QShowEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_HideEvent(TextCustomEditor::RichTextEditorWidget* self, QHideEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperHideEvent(TextCustomEditor::RichTextEditorWidget* self, QHideEvent* event);
    friend bool TextCustomEditor__RichTextEditorWidget_NativeEvent(TextCustomEditor::RichTextEditorWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextCustomEditor__RichTextEditorWidget_SuperNativeEvent(TextCustomEditor::RichTextEditorWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextCustomEditor__RichTextEditorWidget_ChangeEvent(TextCustomEditor::RichTextEditorWidget* self, QEvent* param1);
    friend void TextCustomEditor__RichTextEditorWidget_SuperChangeEvent(TextCustomEditor::RichTextEditorWidget* self, QEvent* param1);
    friend int TextCustomEditor__RichTextEditorWidget_Metric(const TextCustomEditor::RichTextEditorWidget* self, int param1);
    friend int TextCustomEditor__RichTextEditorWidget_SuperMetric(const TextCustomEditor::RichTextEditorWidget* self, int param1);
    friend void TextCustomEditor__RichTextEditorWidget_InitPainter(const TextCustomEditor::RichTextEditorWidget* self, QPainter* painter);
    friend void TextCustomEditor__RichTextEditorWidget_SuperInitPainter(const TextCustomEditor::RichTextEditorWidget* self, QPainter* painter);
    friend QPaintDevice* TextCustomEditor__RichTextEditorWidget_Redirected(const TextCustomEditor::RichTextEditorWidget* self, QPoint* offset);
    friend QPaintDevice* TextCustomEditor__RichTextEditorWidget_SuperRedirected(const TextCustomEditor::RichTextEditorWidget* self, QPoint* offset);
    friend QPainter* TextCustomEditor__RichTextEditorWidget_SharedPainter(const TextCustomEditor::RichTextEditorWidget* self);
    friend QPainter* TextCustomEditor__RichTextEditorWidget_SuperSharedPainter(const TextCustomEditor::RichTextEditorWidget* self);
    friend void TextCustomEditor__RichTextEditorWidget_InputMethodEvent(TextCustomEditor::RichTextEditorWidget* self, QInputMethodEvent* param1);
    friend void TextCustomEditor__RichTextEditorWidget_SuperInputMethodEvent(TextCustomEditor::RichTextEditorWidget* self, QInputMethodEvent* param1);
    friend bool TextCustomEditor__RichTextEditorWidget_FocusNextPrevChild(TextCustomEditor::RichTextEditorWidget* self, bool next);
    friend bool TextCustomEditor__RichTextEditorWidget_SuperFocusNextPrevChild(TextCustomEditor::RichTextEditorWidget* self, bool next);
    friend void TextCustomEditor__RichTextEditorWidget_TimerEvent(TextCustomEditor::RichTextEditorWidget* self, QTimerEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperTimerEvent(TextCustomEditor::RichTextEditorWidget* self, QTimerEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_ChildEvent(TextCustomEditor::RichTextEditorWidget* self, QChildEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperChildEvent(TextCustomEditor::RichTextEditorWidget* self, QChildEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_CustomEvent(TextCustomEditor::RichTextEditorWidget* self, QEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperCustomEvent(TextCustomEditor::RichTextEditorWidget* self, QEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_ConnectNotify(TextCustomEditor::RichTextEditorWidget* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextEditorWidget_SuperConnectNotify(TextCustomEditor::RichTextEditorWidget* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextEditorWidget_DisconnectNotify(TextCustomEditor::RichTextEditorWidget* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextEditorWidget_SuperDisconnectNotify(TextCustomEditor::RichTextEditorWidget* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextEditorWidget_UpdateMicroFocus(TextCustomEditor::RichTextEditorWidget* self);
    friend void TextCustomEditor__RichTextEditorWidget_SuperUpdateMicroFocus(TextCustomEditor::RichTextEditorWidget* self);
    friend void TextCustomEditor__RichTextEditorWidget_Create(TextCustomEditor::RichTextEditorWidget* self);
    friend void TextCustomEditor__RichTextEditorWidget_SuperCreate(TextCustomEditor::RichTextEditorWidget* self);
    friend void TextCustomEditor__RichTextEditorWidget_Destroy(TextCustomEditor::RichTextEditorWidget* self);
    friend void TextCustomEditor__RichTextEditorWidget_SuperDestroy(TextCustomEditor::RichTextEditorWidget* self);
    friend bool TextCustomEditor__RichTextEditorWidget_FocusNextChild(TextCustomEditor::RichTextEditorWidget* self);
    friend bool TextCustomEditor__RichTextEditorWidget_SuperFocusNextChild(TextCustomEditor::RichTextEditorWidget* self);
    friend bool TextCustomEditor__RichTextEditorWidget_FocusPreviousChild(TextCustomEditor::RichTextEditorWidget* self);
    friend bool TextCustomEditor__RichTextEditorWidget_SuperFocusPreviousChild(TextCustomEditor::RichTextEditorWidget* self);
    friend QObject* TextCustomEditor__RichTextEditorWidget_Sender(const TextCustomEditor::RichTextEditorWidget* self);
    friend QObject* TextCustomEditor__RichTextEditorWidget_SuperSender(const TextCustomEditor::RichTextEditorWidget* self);
    friend int TextCustomEditor__RichTextEditorWidget_SenderSignalIndex(const TextCustomEditor::RichTextEditorWidget* self);
    friend int TextCustomEditor__RichTextEditorWidget_SuperSenderSignalIndex(const TextCustomEditor::RichTextEditorWidget* self);
    friend int TextCustomEditor__RichTextEditorWidget_Receivers(const TextCustomEditor::RichTextEditorWidget* self, const char* signal);
    friend int TextCustomEditor__RichTextEditorWidget_SuperReceivers(const TextCustomEditor::RichTextEditorWidget* self, const char* signal);
    friend bool TextCustomEditor__RichTextEditorWidget_IsSignalConnected(const TextCustomEditor::RichTextEditorWidget* self, const QMetaMethod* signal);
    friend bool TextCustomEditor__RichTextEditorWidget_SuperIsSignalConnected(const TextCustomEditor::RichTextEditorWidget* self, const QMetaMethod* signal);
    friend double TextCustomEditor__RichTextEditorWidget_GetDecodedMetricF(const TextCustomEditor::RichTextEditorWidget* self, int metricA, int metricB);
    friend double TextCustomEditor__RichTextEditorWidget_SuperGetDecodedMetricF(const TextCustomEditor::RichTextEditorWidget* self, int metricA, int metricB);
};

#endif
