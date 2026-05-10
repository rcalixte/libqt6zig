#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALPLAINTEXTEDITORWIDGET_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALPLAINTEXTEDITORWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::PlainTextEditorWidget so that we can call protected methods
class VirtualTextCustomEditorPlainTextEditorWidget final : public TextCustomEditor::PlainTextEditorWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualTextCustomEditorPlainTextEditorWidget = true;

    // Virtual class public types (including callbacks)
    using TextCustomEditor__PlainTextEditorWidget_MetaObject_Callback = QMetaObject* (*)();
    using TextCustomEditor__PlainTextEditorWidget_Metacast_Callback = void* (*)(TextCustomEditor__PlainTextEditorWidget*, const char*);
    using TextCustomEditor__PlainTextEditorWidget_Metacall_Callback = int (*)(TextCustomEditor__PlainTextEditorWidget*, int, int, void**);
    using TextCustomEditor__PlainTextEditorWidget_DevType_Callback = int (*)();
    using TextCustomEditor__PlainTextEditorWidget_SetVisible_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, bool);
    using TextCustomEditor__PlainTextEditorWidget_SizeHint_Callback = QSize* (*)();
    using TextCustomEditor__PlainTextEditorWidget_MinimumSizeHint_Callback = QSize* (*)();
    using TextCustomEditor__PlainTextEditorWidget_HeightForWidth_Callback = int (*)(const TextCustomEditor__PlainTextEditorWidget*, int);
    using TextCustomEditor__PlainTextEditorWidget_HasHeightForWidth_Callback = bool (*)();
    using TextCustomEditor__PlainTextEditorWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using TextCustomEditor__PlainTextEditorWidget_Event_Callback = bool (*)(TextCustomEditor__PlainTextEditorWidget*, QEvent*);
    using TextCustomEditor__PlainTextEditorWidget_MousePressEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditorWidget_MouseReleaseEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditorWidget_MouseDoubleClickEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditorWidget_MouseMoveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditorWidget_WheelEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QWheelEvent*);
    using TextCustomEditor__PlainTextEditorWidget_KeyPressEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QKeyEvent*);
    using TextCustomEditor__PlainTextEditorWidget_KeyReleaseEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QKeyEvent*);
    using TextCustomEditor__PlainTextEditorWidget_FocusInEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QFocusEvent*);
    using TextCustomEditor__PlainTextEditorWidget_FocusOutEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QFocusEvent*);
    using TextCustomEditor__PlainTextEditorWidget_EnterEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QEnterEvent*);
    using TextCustomEditor__PlainTextEditorWidget_LeaveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QEvent*);
    using TextCustomEditor__PlainTextEditorWidget_PaintEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QPaintEvent*);
    using TextCustomEditor__PlainTextEditorWidget_MoveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QMoveEvent*);
    using TextCustomEditor__PlainTextEditorWidget_ResizeEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QResizeEvent*);
    using TextCustomEditor__PlainTextEditorWidget_CloseEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QCloseEvent*);
    using TextCustomEditor__PlainTextEditorWidget_ContextMenuEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QContextMenuEvent*);
    using TextCustomEditor__PlainTextEditorWidget_TabletEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QTabletEvent*);
    using TextCustomEditor__PlainTextEditorWidget_ActionEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QActionEvent*);
    using TextCustomEditor__PlainTextEditorWidget_DragEnterEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QDragEnterEvent*);
    using TextCustomEditor__PlainTextEditorWidget_DragMoveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QDragMoveEvent*);
    using TextCustomEditor__PlainTextEditorWidget_DragLeaveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QDragLeaveEvent*);
    using TextCustomEditor__PlainTextEditorWidget_DropEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QDropEvent*);
    using TextCustomEditor__PlainTextEditorWidget_ShowEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QShowEvent*);
    using TextCustomEditor__PlainTextEditorWidget_HideEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QHideEvent*);
    using TextCustomEditor__PlainTextEditorWidget_NativeEvent_Callback = bool (*)(TextCustomEditor__PlainTextEditorWidget*, libqt_string, void*, intptr_t*);
    using TextCustomEditor__PlainTextEditorWidget_ChangeEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QEvent*);
    using TextCustomEditor__PlainTextEditorWidget_Metric_Callback = int (*)(const TextCustomEditor__PlainTextEditorWidget*, int);
    using TextCustomEditor__PlainTextEditorWidget_InitPainter_Callback = void (*)(const TextCustomEditor__PlainTextEditorWidget*, QPainter*);
    using TextCustomEditor__PlainTextEditorWidget_Redirected_Callback = QPaintDevice* (*)(const TextCustomEditor__PlainTextEditorWidget*, QPoint*);
    using TextCustomEditor__PlainTextEditorWidget_SharedPainter_Callback = QPainter* (*)();
    using TextCustomEditor__PlainTextEditorWidget_InputMethodEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QInputMethodEvent*);
    using TextCustomEditor__PlainTextEditorWidget_InputMethodQuery_Callback = QVariant* (*)(const TextCustomEditor__PlainTextEditorWidget*, int);
    using TextCustomEditor__PlainTextEditorWidget_FocusNextPrevChild_Callback = bool (*)(TextCustomEditor__PlainTextEditorWidget*, bool);
    using TextCustomEditor__PlainTextEditorWidget_EventFilter_Callback = bool (*)(TextCustomEditor__PlainTextEditorWidget*, QObject*, QEvent*);
    using TextCustomEditor__PlainTextEditorWidget_TimerEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QTimerEvent*);
    using TextCustomEditor__PlainTextEditorWidget_ChildEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QChildEvent*);
    using TextCustomEditor__PlainTextEditorWidget_CustomEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QEvent*);
    using TextCustomEditor__PlainTextEditorWidget_ConnectNotify_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QMetaMethod*);
    using TextCustomEditor__PlainTextEditorWidget_DisconnectNotify_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QMetaMethod*);
    using TextCustomEditor__PlainTextEditorWidget_UpdateMicroFocus_Callback = void (*)();
    using TextCustomEditor__PlainTextEditorWidget_Create_Callback = void (*)();
    using TextCustomEditor__PlainTextEditorWidget_Destroy_Callback = void (*)();
    using TextCustomEditor__PlainTextEditorWidget_FocusNextChild_Callback = bool (*)();
    using TextCustomEditor__PlainTextEditorWidget_FocusPreviousChild_Callback = bool (*)();
    using TextCustomEditor__PlainTextEditorWidget_Sender_Callback = QObject* (*)();
    using TextCustomEditor__PlainTextEditorWidget_SenderSignalIndex_Callback = int (*)();
    using TextCustomEditor__PlainTextEditorWidget_Receivers_Callback = int (*)(const TextCustomEditor__PlainTextEditorWidget*, const char*);
    using TextCustomEditor__PlainTextEditorWidget_IsSignalConnected_Callback = bool (*)(const TextCustomEditor__PlainTextEditorWidget*, QMetaMethod*);
    using TextCustomEditor__PlainTextEditorWidget_GetDecodedMetricF_Callback = double (*)(const TextCustomEditor__PlainTextEditorWidget*, int, int);

  protected:
    // Instance callback storage
    TextCustomEditor__PlainTextEditorWidget_MetaObject_Callback textcustomeditor__plaintexteditorwidget_metaobject_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_Metacast_Callback textcustomeditor__plaintexteditorwidget_metacast_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_Metacall_Callback textcustomeditor__plaintexteditorwidget_metacall_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_DevType_Callback textcustomeditor__plaintexteditorwidget_devtype_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_SetVisible_Callback textcustomeditor__plaintexteditorwidget_setvisible_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_SizeHint_Callback textcustomeditor__plaintexteditorwidget_sizehint_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_MinimumSizeHint_Callback textcustomeditor__plaintexteditorwidget_minimumsizehint_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_HeightForWidth_Callback textcustomeditor__plaintexteditorwidget_heightforwidth_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_HasHeightForWidth_Callback textcustomeditor__plaintexteditorwidget_hasheightforwidth_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_PaintEngine_Callback textcustomeditor__plaintexteditorwidget_paintengine_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_Event_Callback textcustomeditor__plaintexteditorwidget_event_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_MousePressEvent_Callback textcustomeditor__plaintexteditorwidget_mousepressevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_MouseReleaseEvent_Callback textcustomeditor__plaintexteditorwidget_mousereleaseevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_MouseDoubleClickEvent_Callback textcustomeditor__plaintexteditorwidget_mousedoubleclickevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_MouseMoveEvent_Callback textcustomeditor__plaintexteditorwidget_mousemoveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_WheelEvent_Callback textcustomeditor__plaintexteditorwidget_wheelevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_KeyPressEvent_Callback textcustomeditor__plaintexteditorwidget_keypressevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_KeyReleaseEvent_Callback textcustomeditor__plaintexteditorwidget_keyreleaseevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_FocusInEvent_Callback textcustomeditor__plaintexteditorwidget_focusinevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_FocusOutEvent_Callback textcustomeditor__plaintexteditorwidget_focusoutevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_EnterEvent_Callback textcustomeditor__plaintexteditorwidget_enterevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_LeaveEvent_Callback textcustomeditor__plaintexteditorwidget_leaveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_PaintEvent_Callback textcustomeditor__plaintexteditorwidget_paintevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_MoveEvent_Callback textcustomeditor__plaintexteditorwidget_moveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_ResizeEvent_Callback textcustomeditor__plaintexteditorwidget_resizeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_CloseEvent_Callback textcustomeditor__plaintexteditorwidget_closeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_ContextMenuEvent_Callback textcustomeditor__plaintexteditorwidget_contextmenuevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_TabletEvent_Callback textcustomeditor__plaintexteditorwidget_tabletevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_ActionEvent_Callback textcustomeditor__plaintexteditorwidget_actionevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_DragEnterEvent_Callback textcustomeditor__plaintexteditorwidget_dragenterevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_DragMoveEvent_Callback textcustomeditor__plaintexteditorwidget_dragmoveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_DragLeaveEvent_Callback textcustomeditor__plaintexteditorwidget_dragleaveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_DropEvent_Callback textcustomeditor__plaintexteditorwidget_dropevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_ShowEvent_Callback textcustomeditor__plaintexteditorwidget_showevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_HideEvent_Callback textcustomeditor__plaintexteditorwidget_hideevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_NativeEvent_Callback textcustomeditor__plaintexteditorwidget_nativeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_ChangeEvent_Callback textcustomeditor__plaintexteditorwidget_changeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_Metric_Callback textcustomeditor__plaintexteditorwidget_metric_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_InitPainter_Callback textcustomeditor__plaintexteditorwidget_initpainter_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_Redirected_Callback textcustomeditor__plaintexteditorwidget_redirected_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_SharedPainter_Callback textcustomeditor__plaintexteditorwidget_sharedpainter_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_InputMethodEvent_Callback textcustomeditor__plaintexteditorwidget_inputmethodevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_InputMethodQuery_Callback textcustomeditor__plaintexteditorwidget_inputmethodquery_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_FocusNextPrevChild_Callback textcustomeditor__plaintexteditorwidget_focusnextprevchild_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_EventFilter_Callback textcustomeditor__plaintexteditorwidget_eventfilter_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_TimerEvent_Callback textcustomeditor__plaintexteditorwidget_timerevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_ChildEvent_Callback textcustomeditor__plaintexteditorwidget_childevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_CustomEvent_Callback textcustomeditor__plaintexteditorwidget_customevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_ConnectNotify_Callback textcustomeditor__plaintexteditorwidget_connectnotify_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_DisconnectNotify_Callback textcustomeditor__plaintexteditorwidget_disconnectnotify_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_UpdateMicroFocus_Callback textcustomeditor__plaintexteditorwidget_updatemicrofocus_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_Create_Callback textcustomeditor__plaintexteditorwidget_create_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_Destroy_Callback textcustomeditor__plaintexteditorwidget_destroy_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_FocusNextChild_Callback textcustomeditor__plaintexteditorwidget_focusnextchild_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_FocusPreviousChild_Callback textcustomeditor__plaintexteditorwidget_focuspreviouschild_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_Sender_Callback textcustomeditor__plaintexteditorwidget_sender_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_SenderSignalIndex_Callback textcustomeditor__plaintexteditorwidget_sendersignalindex_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_Receivers_Callback textcustomeditor__plaintexteditorwidget_receivers_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_IsSignalConnected_Callback textcustomeditor__plaintexteditorwidget_issignalconnected_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_GetDecodedMetricF_Callback textcustomeditor__plaintexteditorwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool textcustomeditor__plaintexteditorwidget_metaobject_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_metacast_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_metacall_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_devtype_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_setvisible_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_sizehint_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_minimumsizehint_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_heightforwidth_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_hasheightforwidth_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_paintengine_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_event_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_mousepressevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_mousereleaseevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_mousedoubleclickevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_mousemoveevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_wheelevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_keypressevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_keyreleaseevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_focusinevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_focusoutevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_enterevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_leaveevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_paintevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_moveevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_resizeevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_closeevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_contextmenuevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_tabletevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_actionevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_dragenterevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_dragmoveevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_dragleaveevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_dropevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_showevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_hideevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_nativeevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_changeevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_metric_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_initpainter_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_redirected_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_sharedpainter_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_inputmethodevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_inputmethodquery_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_focusnextprevchild_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_eventfilter_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_timerevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_childevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_customevent_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_connectnotify_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_disconnectnotify_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_updatemicrofocus_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_create_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_destroy_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_focusnextchild_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_focuspreviouschild_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_sender_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_sendersignalindex_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_receivers_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_issignalconnected_isbase = false;
    mutable bool textcustomeditor__plaintexteditorwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualTextCustomEditorPlainTextEditorWidget(QWidget* parent) : TextCustomEditor::PlainTextEditorWidget(parent) {};
    VirtualTextCustomEditorPlainTextEditorWidget() : TextCustomEditor::PlainTextEditorWidget() {};
    VirtualTextCustomEditorPlainTextEditorWidget(TextCustomEditor::PlainTextEditor* customEditor) : TextCustomEditor::PlainTextEditorWidget(customEditor) {};
    VirtualTextCustomEditorPlainTextEditorWidget(TextCustomEditor::PlainTextEditor* customEditor, QWidget* parent) : TextCustomEditor::PlainTextEditorWidget(customEditor, parent) {};

    // Callback setters
    inline void setTextCustomEditor__PlainTextEditorWidget_MetaObject_Callback(TextCustomEditor__PlainTextEditorWidget_MetaObject_Callback cb) { textcustomeditor__plaintexteditorwidget_metaobject_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_Metacast_Callback(TextCustomEditor__PlainTextEditorWidget_Metacast_Callback cb) { textcustomeditor__plaintexteditorwidget_metacast_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_Metacall_Callback(TextCustomEditor__PlainTextEditorWidget_Metacall_Callback cb) { textcustomeditor__plaintexteditorwidget_metacall_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_DevType_Callback(TextCustomEditor__PlainTextEditorWidget_DevType_Callback cb) { textcustomeditor__plaintexteditorwidget_devtype_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_SetVisible_Callback(TextCustomEditor__PlainTextEditorWidget_SetVisible_Callback cb) { textcustomeditor__plaintexteditorwidget_setvisible_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_SizeHint_Callback(TextCustomEditor__PlainTextEditorWidget_SizeHint_Callback cb) { textcustomeditor__plaintexteditorwidget_sizehint_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_MinimumSizeHint_Callback(TextCustomEditor__PlainTextEditorWidget_MinimumSizeHint_Callback cb) { textcustomeditor__plaintexteditorwidget_minimumsizehint_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_HeightForWidth_Callback(TextCustomEditor__PlainTextEditorWidget_HeightForWidth_Callback cb) { textcustomeditor__plaintexteditorwidget_heightforwidth_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_HasHeightForWidth_Callback(TextCustomEditor__PlainTextEditorWidget_HasHeightForWidth_Callback cb) { textcustomeditor__plaintexteditorwidget_hasheightforwidth_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_PaintEngine_Callback(TextCustomEditor__PlainTextEditorWidget_PaintEngine_Callback cb) { textcustomeditor__plaintexteditorwidget_paintengine_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_Event_Callback(TextCustomEditor__PlainTextEditorWidget_Event_Callback cb) { textcustomeditor__plaintexteditorwidget_event_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_MousePressEvent_Callback(TextCustomEditor__PlainTextEditorWidget_MousePressEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_mousepressevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_MouseReleaseEvent_Callback(TextCustomEditor__PlainTextEditorWidget_MouseReleaseEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_mousereleaseevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_MouseDoubleClickEvent_Callback(TextCustomEditor__PlainTextEditorWidget_MouseDoubleClickEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_mousedoubleclickevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_MouseMoveEvent_Callback(TextCustomEditor__PlainTextEditorWidget_MouseMoveEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_mousemoveevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_WheelEvent_Callback(TextCustomEditor__PlainTextEditorWidget_WheelEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_wheelevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_KeyPressEvent_Callback(TextCustomEditor__PlainTextEditorWidget_KeyPressEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_keypressevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_KeyReleaseEvent_Callback(TextCustomEditor__PlainTextEditorWidget_KeyReleaseEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_keyreleaseevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_FocusInEvent_Callback(TextCustomEditor__PlainTextEditorWidget_FocusInEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_focusinevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_FocusOutEvent_Callback(TextCustomEditor__PlainTextEditorWidget_FocusOutEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_focusoutevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_EnterEvent_Callback(TextCustomEditor__PlainTextEditorWidget_EnterEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_enterevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_LeaveEvent_Callback(TextCustomEditor__PlainTextEditorWidget_LeaveEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_leaveevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_PaintEvent_Callback(TextCustomEditor__PlainTextEditorWidget_PaintEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_paintevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_MoveEvent_Callback(TextCustomEditor__PlainTextEditorWidget_MoveEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_moveevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_ResizeEvent_Callback(TextCustomEditor__PlainTextEditorWidget_ResizeEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_resizeevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_CloseEvent_Callback(TextCustomEditor__PlainTextEditorWidget_CloseEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_closeevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_ContextMenuEvent_Callback(TextCustomEditor__PlainTextEditorWidget_ContextMenuEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_contextmenuevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_TabletEvent_Callback(TextCustomEditor__PlainTextEditorWidget_TabletEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_tabletevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_ActionEvent_Callback(TextCustomEditor__PlainTextEditorWidget_ActionEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_actionevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_DragEnterEvent_Callback(TextCustomEditor__PlainTextEditorWidget_DragEnterEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_dragenterevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_DragMoveEvent_Callback(TextCustomEditor__PlainTextEditorWidget_DragMoveEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_dragmoveevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_DragLeaveEvent_Callback(TextCustomEditor__PlainTextEditorWidget_DragLeaveEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_dragleaveevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_DropEvent_Callback(TextCustomEditor__PlainTextEditorWidget_DropEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_dropevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_ShowEvent_Callback(TextCustomEditor__PlainTextEditorWidget_ShowEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_showevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_HideEvent_Callback(TextCustomEditor__PlainTextEditorWidget_HideEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_hideevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_NativeEvent_Callback(TextCustomEditor__PlainTextEditorWidget_NativeEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_nativeevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_ChangeEvent_Callback(TextCustomEditor__PlainTextEditorWidget_ChangeEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_changeevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_Metric_Callback(TextCustomEditor__PlainTextEditorWidget_Metric_Callback cb) { textcustomeditor__plaintexteditorwidget_metric_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_InitPainter_Callback(TextCustomEditor__PlainTextEditorWidget_InitPainter_Callback cb) { textcustomeditor__plaintexteditorwidget_initpainter_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_Redirected_Callback(TextCustomEditor__PlainTextEditorWidget_Redirected_Callback cb) { textcustomeditor__plaintexteditorwidget_redirected_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_SharedPainter_Callback(TextCustomEditor__PlainTextEditorWidget_SharedPainter_Callback cb) { textcustomeditor__plaintexteditorwidget_sharedpainter_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_InputMethodEvent_Callback(TextCustomEditor__PlainTextEditorWidget_InputMethodEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_inputmethodevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_InputMethodQuery_Callback(TextCustomEditor__PlainTextEditorWidget_InputMethodQuery_Callback cb) { textcustomeditor__plaintexteditorwidget_inputmethodquery_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_FocusNextPrevChild_Callback(TextCustomEditor__PlainTextEditorWidget_FocusNextPrevChild_Callback cb) { textcustomeditor__plaintexteditorwidget_focusnextprevchild_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_EventFilter_Callback(TextCustomEditor__PlainTextEditorWidget_EventFilter_Callback cb) { textcustomeditor__plaintexteditorwidget_eventfilter_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_TimerEvent_Callback(TextCustomEditor__PlainTextEditorWidget_TimerEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_timerevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_ChildEvent_Callback(TextCustomEditor__PlainTextEditorWidget_ChildEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_childevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_CustomEvent_Callback(TextCustomEditor__PlainTextEditorWidget_CustomEvent_Callback cb) { textcustomeditor__plaintexteditorwidget_customevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_ConnectNotify_Callback(TextCustomEditor__PlainTextEditorWidget_ConnectNotify_Callback cb) { textcustomeditor__plaintexteditorwidget_connectnotify_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_DisconnectNotify_Callback(TextCustomEditor__PlainTextEditorWidget_DisconnectNotify_Callback cb) { textcustomeditor__plaintexteditorwidget_disconnectnotify_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_UpdateMicroFocus_Callback(TextCustomEditor__PlainTextEditorWidget_UpdateMicroFocus_Callback cb) { textcustomeditor__plaintexteditorwidget_updatemicrofocus_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_Create_Callback(TextCustomEditor__PlainTextEditorWidget_Create_Callback cb) { textcustomeditor__plaintexteditorwidget_create_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_Destroy_Callback(TextCustomEditor__PlainTextEditorWidget_Destroy_Callback cb) { textcustomeditor__plaintexteditorwidget_destroy_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_FocusNextChild_Callback(TextCustomEditor__PlainTextEditorWidget_FocusNextChild_Callback cb) { textcustomeditor__plaintexteditorwidget_focusnextchild_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_FocusPreviousChild_Callback(TextCustomEditor__PlainTextEditorWidget_FocusPreviousChild_Callback cb) { textcustomeditor__plaintexteditorwidget_focuspreviouschild_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_Sender_Callback(TextCustomEditor__PlainTextEditorWidget_Sender_Callback cb) { textcustomeditor__plaintexteditorwidget_sender_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_SenderSignalIndex_Callback(TextCustomEditor__PlainTextEditorWidget_SenderSignalIndex_Callback cb) { textcustomeditor__plaintexteditorwidget_sendersignalindex_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_Receivers_Callback(TextCustomEditor__PlainTextEditorWidget_Receivers_Callback cb) { textcustomeditor__plaintexteditorwidget_receivers_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_IsSignalConnected_Callback(TextCustomEditor__PlainTextEditorWidget_IsSignalConnected_Callback cb) { textcustomeditor__plaintexteditorwidget_issignalconnected_callback = cb; }
    inline void setTextCustomEditor__PlainTextEditorWidget_GetDecodedMetricF_Callback(TextCustomEditor__PlainTextEditorWidget_GetDecodedMetricF_Callback cb) { textcustomeditor__plaintexteditorwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextCustomEditor__PlainTextEditorWidget_MetaObject_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_metaobject_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_Metacast_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_metacast_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_Metacall_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_metacall_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_DevType_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_devtype_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_SetVisible_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_setvisible_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_SizeHint_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_sizehint_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_MinimumSizeHint_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_minimumsizehint_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_HeightForWidth_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_heightforwidth_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_HasHeightForWidth_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_hasheightforwidth_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_PaintEngine_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_paintengine_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_Event_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_event_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_MousePressEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_mousepressevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_MouseReleaseEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_mousereleaseevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_MouseDoubleClickEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_mousedoubleclickevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_MouseMoveEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_mousemoveevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_WheelEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_wheelevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_KeyPressEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_keypressevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_KeyReleaseEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_keyreleaseevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_FocusInEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_focusinevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_FocusOutEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_focusoutevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_EnterEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_enterevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_LeaveEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_leaveevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_PaintEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_paintevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_MoveEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_moveevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_ResizeEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_resizeevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_CloseEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_closeevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_ContextMenuEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_contextmenuevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_TabletEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_tabletevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_ActionEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_actionevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_DragEnterEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_dragenterevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_DragMoveEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_dragmoveevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_DragLeaveEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_dragleaveevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_DropEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_dropevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_ShowEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_showevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_HideEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_hideevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_NativeEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_nativeevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_ChangeEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_changeevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_Metric_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_metric_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_InitPainter_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_initpainter_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_Redirected_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_redirected_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_SharedPainter_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_sharedpainter_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_InputMethodEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_inputmethodevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_InputMethodQuery_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_inputmethodquery_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_FocusNextPrevChild_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_focusnextprevchild_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_EventFilter_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_eventfilter_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_TimerEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_timerevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_ChildEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_childevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_CustomEvent_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_customevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_ConnectNotify_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_connectnotify_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_DisconnectNotify_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_disconnectnotify_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_UpdateMicroFocus_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_updatemicrofocus_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_Create_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_create_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_Destroy_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_destroy_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_FocusNextChild_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_focusnextchild_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_FocusPreviousChild_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_focuspreviouschild_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_Sender_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_sender_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_SenderSignalIndex_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_sendersignalindex_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_Receivers_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_receivers_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_IsSignalConnected_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_issignalconnected_isbase = value; }
    inline void setTextCustomEditor__PlainTextEditorWidget_GetDecodedMetricF_IsBase(bool value) const { textcustomeditor__plaintexteditorwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__plaintexteditorwidget_metaobject_isbase) {
            textcustomeditor__plaintexteditorwidget_metaobject_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::metaObject();
        }
        auto metaobject_cb = textcustomeditor__plaintexteditorwidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__plaintexteditorwidget_metacast_isbase) {
            textcustomeditor__plaintexteditorwidget_metacast_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::qt_metacast(param1);
        }
        auto metacast_cb = textcustomeditor__plaintexteditorwidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__plaintexteditorwidget_metacall_isbase) {
            textcustomeditor__plaintexteditorwidget_metacall_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textcustomeditor__plaintexteditorwidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditorWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textcustomeditor__plaintexteditorwidget_devtype_isbase) {
            textcustomeditor__plaintexteditorwidget_devtype_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::devType();
        }
        auto devtype_cb = textcustomeditor__plaintexteditorwidget_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditorWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textcustomeditor__plaintexteditorwidget_setvisible_isbase) {
            textcustomeditor__plaintexteditorwidget_setvisible_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::setVisible(visible);
            return;
        }
        auto setvisible_cb = textcustomeditor__plaintexteditorwidget_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textcustomeditor__plaintexteditorwidget_sizehint_isbase) {
            textcustomeditor__plaintexteditorwidget_sizehint_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::sizeHint();
        }
        auto sizehint_cb = textcustomeditor__plaintexteditorwidget_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textcustomeditor__plaintexteditorwidget_minimumsizehint_isbase) {
            textcustomeditor__plaintexteditorwidget_minimumsizehint_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::minimumSizeHint();
        }
        auto minimumsizehint_cb = textcustomeditor__plaintexteditorwidget_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textcustomeditor__plaintexteditorwidget_heightforwidth_isbase) {
            textcustomeditor__plaintexteditorwidget_heightforwidth_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::heightForWidth(param1);
        }
        auto heightforwidth_cb = textcustomeditor__plaintexteditorwidget_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditorWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textcustomeditor__plaintexteditorwidget_hasheightforwidth_isbase) {
            textcustomeditor__plaintexteditorwidget_hasheightforwidth_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = textcustomeditor__plaintexteditorwidget_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textcustomeditor__plaintexteditorwidget_paintengine_isbase) {
            textcustomeditor__plaintexteditorwidget_paintengine_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::paintEngine();
        }
        auto paintengine_cb = textcustomeditor__plaintexteditorwidget_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_event_isbase) {
            textcustomeditor__plaintexteditorwidget_event_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::event(event);
        }
        auto event_cb = textcustomeditor__plaintexteditorwidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_mousepressevent_isbase) {
            textcustomeditor__plaintexteditorwidget_mousepressevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = textcustomeditor__plaintexteditorwidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_mousereleaseevent_isbase) {
            textcustomeditor__plaintexteditorwidget_mousereleaseevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = textcustomeditor__plaintexteditorwidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_mousedoubleclickevent_isbase) {
            textcustomeditor__plaintexteditorwidget_mousedoubleclickevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = textcustomeditor__plaintexteditorwidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_mousemoveevent_isbase) {
            textcustomeditor__plaintexteditorwidget_mousemoveevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = textcustomeditor__plaintexteditorwidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_wheelevent_isbase) {
            textcustomeditor__plaintexteditorwidget_wheelevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = textcustomeditor__plaintexteditorwidget_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_keypressevent_isbase) {
            textcustomeditor__plaintexteditorwidget_keypressevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = textcustomeditor__plaintexteditorwidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_keyreleaseevent_isbase) {
            textcustomeditor__plaintexteditorwidget_keyreleaseevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = textcustomeditor__plaintexteditorwidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_focusinevent_isbase) {
            textcustomeditor__plaintexteditorwidget_focusinevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = textcustomeditor__plaintexteditorwidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_focusoutevent_isbase) {
            textcustomeditor__plaintexteditorwidget_focusoutevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = textcustomeditor__plaintexteditorwidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_enterevent_isbase) {
            textcustomeditor__plaintexteditorwidget_enterevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::enterEvent(event);
            return;
        }
        auto enterevent_cb = textcustomeditor__plaintexteditorwidget_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_leaveevent_isbase) {
            textcustomeditor__plaintexteditorwidget_leaveevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = textcustomeditor__plaintexteditorwidget_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_paintevent_isbase) {
            textcustomeditor__plaintexteditorwidget_paintevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::paintEvent(event);
            return;
        }
        auto paintevent_cb = textcustomeditor__plaintexteditorwidget_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_moveevent_isbase) {
            textcustomeditor__plaintexteditorwidget_moveevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = textcustomeditor__plaintexteditorwidget_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_resizeevent_isbase) {
            textcustomeditor__plaintexteditorwidget_resizeevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = textcustomeditor__plaintexteditorwidget_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_closeevent_isbase) {
            textcustomeditor__plaintexteditorwidget_closeevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = textcustomeditor__plaintexteditorwidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_contextmenuevent_isbase) {
            textcustomeditor__plaintexteditorwidget_contextmenuevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = textcustomeditor__plaintexteditorwidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_tabletevent_isbase) {
            textcustomeditor__plaintexteditorwidget_tabletevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = textcustomeditor__plaintexteditorwidget_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_actionevent_isbase) {
            textcustomeditor__plaintexteditorwidget_actionevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::actionEvent(event);
            return;
        }
        auto actionevent_cb = textcustomeditor__plaintexteditorwidget_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_dragenterevent_isbase) {
            textcustomeditor__plaintexteditorwidget_dragenterevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = textcustomeditor__plaintexteditorwidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_dragmoveevent_isbase) {
            textcustomeditor__plaintexteditorwidget_dragmoveevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = textcustomeditor__plaintexteditorwidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_dragleaveevent_isbase) {
            textcustomeditor__plaintexteditorwidget_dragleaveevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = textcustomeditor__plaintexteditorwidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_dropevent_isbase) {
            textcustomeditor__plaintexteditorwidget_dropevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::dropEvent(event);
            return;
        }
        auto dropevent_cb = textcustomeditor__plaintexteditorwidget_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_showevent_isbase) {
            textcustomeditor__plaintexteditorwidget_showevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::showEvent(event);
            return;
        }
        auto showevent_cb = textcustomeditor__plaintexteditorwidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_hideevent_isbase) {
            textcustomeditor__plaintexteditorwidget_hideevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::hideEvent(event);
            return;
        }
        auto hideevent_cb = textcustomeditor__plaintexteditorwidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textcustomeditor__plaintexteditorwidget_nativeevent_isbase) {
            textcustomeditor__plaintexteditorwidget_nativeevent_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = textcustomeditor__plaintexteditorwidget_nativeevent_callback;
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
        return TextCustomEditor__PlainTextEditorWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textcustomeditor__plaintexteditorwidget_changeevent_isbase) {
            textcustomeditor__plaintexteditorwidget_changeevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::changeEvent(param1);
            return;
        }
        auto changeevent_cb = textcustomeditor__plaintexteditorwidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textcustomeditor__plaintexteditorwidget_metric_isbase) {
            textcustomeditor__plaintexteditorwidget_metric_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::metric(param1);
        }
        auto metric_cb = textcustomeditor__plaintexteditorwidget_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditorWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textcustomeditor__plaintexteditorwidget_initpainter_isbase) {
            textcustomeditor__plaintexteditorwidget_initpainter_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::initPainter(painter);
            return;
        }
        auto initpainter_cb = textcustomeditor__plaintexteditorwidget_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textcustomeditor__plaintexteditorwidget_redirected_isbase) {
            textcustomeditor__plaintexteditorwidget_redirected_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::redirected(offset);
        }
        auto redirected_cb = textcustomeditor__plaintexteditorwidget_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textcustomeditor__plaintexteditorwidget_sharedpainter_isbase) {
            textcustomeditor__plaintexteditorwidget_sharedpainter_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::sharedPainter();
        }
        auto sharedpainter_cb = textcustomeditor__plaintexteditorwidget_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textcustomeditor__plaintexteditorwidget_inputmethodevent_isbase) {
            textcustomeditor__plaintexteditorwidget_inputmethodevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = textcustomeditor__plaintexteditorwidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textcustomeditor__plaintexteditorwidget_inputmethodquery_isbase) {
            textcustomeditor__plaintexteditorwidget_inputmethodquery_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = textcustomeditor__plaintexteditorwidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textcustomeditor__plaintexteditorwidget_focusnextprevchild_isbase) {
            textcustomeditor__plaintexteditorwidget_focusnextprevchild_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = textcustomeditor__plaintexteditorwidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_eventfilter_isbase) {
            textcustomeditor__plaintexteditorwidget_eventfilter_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::eventFilter(watched, event);
        }
        auto eventfilter_cb = textcustomeditor__plaintexteditorwidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_timerevent_isbase) {
            textcustomeditor__plaintexteditorwidget_timerevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::timerEvent(event);
            return;
        }
        auto timerevent_cb = textcustomeditor__plaintexteditorwidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_childevent_isbase) {
            textcustomeditor__plaintexteditorwidget_childevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::childEvent(event);
            return;
        }
        auto childevent_cb = textcustomeditor__plaintexteditorwidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_customevent_isbase) {
            textcustomeditor__plaintexteditorwidget_customevent_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::customEvent(event);
            return;
        }
        auto customevent_cb = textcustomeditor__plaintexteditorwidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__plaintexteditorwidget_connectnotify_isbase) {
            textcustomeditor__plaintexteditorwidget_connectnotify_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textcustomeditor__plaintexteditorwidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__plaintexteditorwidget_disconnectnotify_isbase) {
            textcustomeditor__plaintexteditorwidget_disconnectnotify_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textcustomeditor__plaintexteditorwidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (textcustomeditor__plaintexteditorwidget_updatemicrofocus_isbase) {
            textcustomeditor__plaintexteditorwidget_updatemicrofocus_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = textcustomeditor__plaintexteditorwidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (textcustomeditor__plaintexteditorwidget_create_isbase) {
            textcustomeditor__plaintexteditorwidget_create_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::create();
            return;
        }
        auto create_cb = textcustomeditor__plaintexteditorwidget_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (textcustomeditor__plaintexteditorwidget_destroy_isbase) {
            textcustomeditor__plaintexteditorwidget_destroy_isbase = false;
            TextCustomEditor__PlainTextEditorWidget::destroy();
            return;
        }
        auto destroy_cb = textcustomeditor__plaintexteditorwidget_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (textcustomeditor__plaintexteditorwidget_focusnextchild_isbase) {
            textcustomeditor__plaintexteditorwidget_focusnextchild_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::focusNextChild();
        }
        auto focusnextchild_cb = textcustomeditor__plaintexteditorwidget_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (textcustomeditor__plaintexteditorwidget_focuspreviouschild_isbase) {
            textcustomeditor__plaintexteditorwidget_focuspreviouschild_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::focusPreviousChild();
        }
        auto focuspreviouschild_cb = textcustomeditor__plaintexteditorwidget_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textcustomeditor__plaintexteditorwidget_sender_isbase) {
            textcustomeditor__plaintexteditorwidget_sender_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::sender();
        }
        auto sender_cb = textcustomeditor__plaintexteditorwidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textcustomeditor__plaintexteditorwidget_sendersignalindex_isbase) {
            textcustomeditor__plaintexteditorwidget_sendersignalindex_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = textcustomeditor__plaintexteditorwidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditorWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textcustomeditor__plaintexteditorwidget_receivers_isbase) {
            textcustomeditor__plaintexteditorwidget_receivers_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::receivers(signal);
        }
        auto receivers_cb = textcustomeditor__plaintexteditorwidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditorWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textcustomeditor__plaintexteditorwidget_issignalconnected_isbase) {
            textcustomeditor__plaintexteditorwidget_issignalconnected_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textcustomeditor__plaintexteditorwidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (textcustomeditor__plaintexteditorwidget_getdecodedmetricf_isbase) {
            textcustomeditor__plaintexteditorwidget_getdecodedmetricf_isbase = false;
            return TextCustomEditor__PlainTextEditorWidget::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = textcustomeditor__plaintexteditorwidget_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditorWidget::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool TextCustomEditor__PlainTextEditorWidget_Event(TextCustomEditor::PlainTextEditorWidget* self, QEvent* event);
    friend bool TextCustomEditor__PlainTextEditorWidget_SuperEvent(TextCustomEditor::PlainTextEditorWidget* self, QEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_MousePressEvent(TextCustomEditor::PlainTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperMousePressEvent(TextCustomEditor::PlainTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_MouseReleaseEvent(TextCustomEditor::PlainTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperMouseReleaseEvent(TextCustomEditor::PlainTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_MouseDoubleClickEvent(TextCustomEditor::PlainTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperMouseDoubleClickEvent(TextCustomEditor::PlainTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_MouseMoveEvent(TextCustomEditor::PlainTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperMouseMoveEvent(TextCustomEditor::PlainTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_WheelEvent(TextCustomEditor::PlainTextEditorWidget* self, QWheelEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperWheelEvent(TextCustomEditor::PlainTextEditorWidget* self, QWheelEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_KeyPressEvent(TextCustomEditor::PlainTextEditorWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperKeyPressEvent(TextCustomEditor::PlainTextEditorWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_KeyReleaseEvent(TextCustomEditor::PlainTextEditorWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperKeyReleaseEvent(TextCustomEditor::PlainTextEditorWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_FocusInEvent(TextCustomEditor::PlainTextEditorWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperFocusInEvent(TextCustomEditor::PlainTextEditorWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_FocusOutEvent(TextCustomEditor::PlainTextEditorWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperFocusOutEvent(TextCustomEditor::PlainTextEditorWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_EnterEvent(TextCustomEditor::PlainTextEditorWidget* self, QEnterEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperEnterEvent(TextCustomEditor::PlainTextEditorWidget* self, QEnterEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_LeaveEvent(TextCustomEditor::PlainTextEditorWidget* self, QEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperLeaveEvent(TextCustomEditor::PlainTextEditorWidget* self, QEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_PaintEvent(TextCustomEditor::PlainTextEditorWidget* self, QPaintEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperPaintEvent(TextCustomEditor::PlainTextEditorWidget* self, QPaintEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_MoveEvent(TextCustomEditor::PlainTextEditorWidget* self, QMoveEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperMoveEvent(TextCustomEditor::PlainTextEditorWidget* self, QMoveEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_ResizeEvent(TextCustomEditor::PlainTextEditorWidget* self, QResizeEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperResizeEvent(TextCustomEditor::PlainTextEditorWidget* self, QResizeEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_CloseEvent(TextCustomEditor::PlainTextEditorWidget* self, QCloseEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperCloseEvent(TextCustomEditor::PlainTextEditorWidget* self, QCloseEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_ContextMenuEvent(TextCustomEditor::PlainTextEditorWidget* self, QContextMenuEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperContextMenuEvent(TextCustomEditor::PlainTextEditorWidget* self, QContextMenuEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_TabletEvent(TextCustomEditor::PlainTextEditorWidget* self, QTabletEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperTabletEvent(TextCustomEditor::PlainTextEditorWidget* self, QTabletEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_ActionEvent(TextCustomEditor::PlainTextEditorWidget* self, QActionEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperActionEvent(TextCustomEditor::PlainTextEditorWidget* self, QActionEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_DragEnterEvent(TextCustomEditor::PlainTextEditorWidget* self, QDragEnterEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperDragEnterEvent(TextCustomEditor::PlainTextEditorWidget* self, QDragEnterEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_DragMoveEvent(TextCustomEditor::PlainTextEditorWidget* self, QDragMoveEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperDragMoveEvent(TextCustomEditor::PlainTextEditorWidget* self, QDragMoveEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_DragLeaveEvent(TextCustomEditor::PlainTextEditorWidget* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperDragLeaveEvent(TextCustomEditor::PlainTextEditorWidget* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_DropEvent(TextCustomEditor::PlainTextEditorWidget* self, QDropEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperDropEvent(TextCustomEditor::PlainTextEditorWidget* self, QDropEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_ShowEvent(TextCustomEditor::PlainTextEditorWidget* self, QShowEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperShowEvent(TextCustomEditor::PlainTextEditorWidget* self, QShowEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_HideEvent(TextCustomEditor::PlainTextEditorWidget* self, QHideEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperHideEvent(TextCustomEditor::PlainTextEditorWidget* self, QHideEvent* event);
    friend bool TextCustomEditor__PlainTextEditorWidget_NativeEvent(TextCustomEditor::PlainTextEditorWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextCustomEditor__PlainTextEditorWidget_SuperNativeEvent(TextCustomEditor::PlainTextEditorWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextCustomEditor__PlainTextEditorWidget_ChangeEvent(TextCustomEditor::PlainTextEditorWidget* self, QEvent* param1);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperChangeEvent(TextCustomEditor::PlainTextEditorWidget* self, QEvent* param1);
    friend int TextCustomEditor__PlainTextEditorWidget_Metric(const TextCustomEditor::PlainTextEditorWidget* self, int param1);
    friend int TextCustomEditor__PlainTextEditorWidget_SuperMetric(const TextCustomEditor::PlainTextEditorWidget* self, int param1);
    friend void TextCustomEditor__PlainTextEditorWidget_InitPainter(const TextCustomEditor::PlainTextEditorWidget* self, QPainter* painter);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperInitPainter(const TextCustomEditor::PlainTextEditorWidget* self, QPainter* painter);
    friend QPaintDevice* TextCustomEditor__PlainTextEditorWidget_Redirected(const TextCustomEditor::PlainTextEditorWidget* self, QPoint* offset);
    friend QPaintDevice* TextCustomEditor__PlainTextEditorWidget_SuperRedirected(const TextCustomEditor::PlainTextEditorWidget* self, QPoint* offset);
    friend QPainter* TextCustomEditor__PlainTextEditorWidget_SharedPainter(const TextCustomEditor::PlainTextEditorWidget* self);
    friend QPainter* TextCustomEditor__PlainTextEditorWidget_SuperSharedPainter(const TextCustomEditor::PlainTextEditorWidget* self);
    friend void TextCustomEditor__PlainTextEditorWidget_InputMethodEvent(TextCustomEditor::PlainTextEditorWidget* self, QInputMethodEvent* param1);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperInputMethodEvent(TextCustomEditor::PlainTextEditorWidget* self, QInputMethodEvent* param1);
    friend bool TextCustomEditor__PlainTextEditorWidget_FocusNextPrevChild(TextCustomEditor::PlainTextEditorWidget* self, bool next);
    friend bool TextCustomEditor__PlainTextEditorWidget_SuperFocusNextPrevChild(TextCustomEditor::PlainTextEditorWidget* self, bool next);
    friend void TextCustomEditor__PlainTextEditorWidget_TimerEvent(TextCustomEditor::PlainTextEditorWidget* self, QTimerEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperTimerEvent(TextCustomEditor::PlainTextEditorWidget* self, QTimerEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_ChildEvent(TextCustomEditor::PlainTextEditorWidget* self, QChildEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperChildEvent(TextCustomEditor::PlainTextEditorWidget* self, QChildEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_CustomEvent(TextCustomEditor::PlainTextEditorWidget* self, QEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperCustomEvent(TextCustomEditor::PlainTextEditorWidget* self, QEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_ConnectNotify(TextCustomEditor::PlainTextEditorWidget* self, const QMetaMethod* signal);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperConnectNotify(TextCustomEditor::PlainTextEditorWidget* self, const QMetaMethod* signal);
    friend void TextCustomEditor__PlainTextEditorWidget_DisconnectNotify(TextCustomEditor::PlainTextEditorWidget* self, const QMetaMethod* signal);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperDisconnectNotify(TextCustomEditor::PlainTextEditorWidget* self, const QMetaMethod* signal);
    friend void TextCustomEditor__PlainTextEditorWidget_UpdateMicroFocus(TextCustomEditor::PlainTextEditorWidget* self);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperUpdateMicroFocus(TextCustomEditor::PlainTextEditorWidget* self);
    friend void TextCustomEditor__PlainTextEditorWidget_Create(TextCustomEditor::PlainTextEditorWidget* self);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperCreate(TextCustomEditor::PlainTextEditorWidget* self);
    friend void TextCustomEditor__PlainTextEditorWidget_Destroy(TextCustomEditor::PlainTextEditorWidget* self);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperDestroy(TextCustomEditor::PlainTextEditorWidget* self);
    friend bool TextCustomEditor__PlainTextEditorWidget_FocusNextChild(TextCustomEditor::PlainTextEditorWidget* self);
    friend bool TextCustomEditor__PlainTextEditorWidget_SuperFocusNextChild(TextCustomEditor::PlainTextEditorWidget* self);
    friend bool TextCustomEditor__PlainTextEditorWidget_FocusPreviousChild(TextCustomEditor::PlainTextEditorWidget* self);
    friend bool TextCustomEditor__PlainTextEditorWidget_SuperFocusPreviousChild(TextCustomEditor::PlainTextEditorWidget* self);
    friend QObject* TextCustomEditor__PlainTextEditorWidget_Sender(const TextCustomEditor::PlainTextEditorWidget* self);
    friend QObject* TextCustomEditor__PlainTextEditorWidget_SuperSender(const TextCustomEditor::PlainTextEditorWidget* self);
    friend int TextCustomEditor__PlainTextEditorWidget_SenderSignalIndex(const TextCustomEditor::PlainTextEditorWidget* self);
    friend int TextCustomEditor__PlainTextEditorWidget_SuperSenderSignalIndex(const TextCustomEditor::PlainTextEditorWidget* self);
    friend int TextCustomEditor__PlainTextEditorWidget_Receivers(const TextCustomEditor::PlainTextEditorWidget* self, const char* signal);
    friend int TextCustomEditor__PlainTextEditorWidget_SuperReceivers(const TextCustomEditor::PlainTextEditorWidget* self, const char* signal);
    friend bool TextCustomEditor__PlainTextEditorWidget_IsSignalConnected(const TextCustomEditor::PlainTextEditorWidget* self, const QMetaMethod* signal);
    friend bool TextCustomEditor__PlainTextEditorWidget_SuperIsSignalConnected(const TextCustomEditor::PlainTextEditorWidget* self, const QMetaMethod* signal);
    friend double TextCustomEditor__PlainTextEditorWidget_GetDecodedMetricF(const TextCustomEditor::PlainTextEditorWidget* self, int metricA, int metricB);
    friend double TextCustomEditor__PlainTextEditorWidget_SuperGetDecodedMetricF(const TextCustomEditor::PlainTextEditorWidget* self, int metricA, int metricB);
};

#endif
