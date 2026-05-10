#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALRICHTEXTBROWSERWIDGET_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALRICHTEXTBROWSERWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::RichTextBrowserWidget so that we can call protected methods
class VirtualTextCustomEditorRichTextBrowserWidget final : public TextCustomEditor::RichTextBrowserWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualTextCustomEditorRichTextBrowserWidget = true;

    // Virtual class public types (including callbacks)
    using TextCustomEditor__RichTextBrowserWidget_MetaObject_Callback = QMetaObject* (*)();
    using TextCustomEditor__RichTextBrowserWidget_Metacast_Callback = void* (*)(TextCustomEditor__RichTextBrowserWidget*, const char*);
    using TextCustomEditor__RichTextBrowserWidget_Metacall_Callback = int (*)(TextCustomEditor__RichTextBrowserWidget*, int, int, void**);
    using TextCustomEditor__RichTextBrowserWidget_DevType_Callback = int (*)();
    using TextCustomEditor__RichTextBrowserWidget_SetVisible_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, bool);
    using TextCustomEditor__RichTextBrowserWidget_SizeHint_Callback = QSize* (*)();
    using TextCustomEditor__RichTextBrowserWidget_MinimumSizeHint_Callback = QSize* (*)();
    using TextCustomEditor__RichTextBrowserWidget_HeightForWidth_Callback = int (*)(const TextCustomEditor__RichTextBrowserWidget*, int);
    using TextCustomEditor__RichTextBrowserWidget_HasHeightForWidth_Callback = bool (*)();
    using TextCustomEditor__RichTextBrowserWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using TextCustomEditor__RichTextBrowserWidget_Event_Callback = bool (*)(TextCustomEditor__RichTextBrowserWidget*, QEvent*);
    using TextCustomEditor__RichTextBrowserWidget_MousePressEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowserWidget_MouseReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowserWidget_MouseDoubleClickEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowserWidget_MouseMoveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowserWidget_WheelEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QWheelEvent*);
    using TextCustomEditor__RichTextBrowserWidget_KeyPressEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QKeyEvent*);
    using TextCustomEditor__RichTextBrowserWidget_KeyReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QKeyEvent*);
    using TextCustomEditor__RichTextBrowserWidget_FocusInEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QFocusEvent*);
    using TextCustomEditor__RichTextBrowserWidget_FocusOutEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QFocusEvent*);
    using TextCustomEditor__RichTextBrowserWidget_EnterEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QEnterEvent*);
    using TextCustomEditor__RichTextBrowserWidget_LeaveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QEvent*);
    using TextCustomEditor__RichTextBrowserWidget_PaintEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QPaintEvent*);
    using TextCustomEditor__RichTextBrowserWidget_MoveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QMoveEvent*);
    using TextCustomEditor__RichTextBrowserWidget_ResizeEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QResizeEvent*);
    using TextCustomEditor__RichTextBrowserWidget_CloseEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QCloseEvent*);
    using TextCustomEditor__RichTextBrowserWidget_ContextMenuEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QContextMenuEvent*);
    using TextCustomEditor__RichTextBrowserWidget_TabletEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QTabletEvent*);
    using TextCustomEditor__RichTextBrowserWidget_ActionEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QActionEvent*);
    using TextCustomEditor__RichTextBrowserWidget_DragEnterEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QDragEnterEvent*);
    using TextCustomEditor__RichTextBrowserWidget_DragMoveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QDragMoveEvent*);
    using TextCustomEditor__RichTextBrowserWidget_DragLeaveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QDragLeaveEvent*);
    using TextCustomEditor__RichTextBrowserWidget_DropEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QDropEvent*);
    using TextCustomEditor__RichTextBrowserWidget_ShowEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QShowEvent*);
    using TextCustomEditor__RichTextBrowserWidget_HideEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QHideEvent*);
    using TextCustomEditor__RichTextBrowserWidget_NativeEvent_Callback = bool (*)(TextCustomEditor__RichTextBrowserWidget*, libqt_string, void*, intptr_t*);
    using TextCustomEditor__RichTextBrowserWidget_ChangeEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QEvent*);
    using TextCustomEditor__RichTextBrowserWidget_Metric_Callback = int (*)(const TextCustomEditor__RichTextBrowserWidget*, int);
    using TextCustomEditor__RichTextBrowserWidget_InitPainter_Callback = void (*)(const TextCustomEditor__RichTextBrowserWidget*, QPainter*);
    using TextCustomEditor__RichTextBrowserWidget_Redirected_Callback = QPaintDevice* (*)(const TextCustomEditor__RichTextBrowserWidget*, QPoint*);
    using TextCustomEditor__RichTextBrowserWidget_SharedPainter_Callback = QPainter* (*)();
    using TextCustomEditor__RichTextBrowserWidget_InputMethodEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QInputMethodEvent*);
    using TextCustomEditor__RichTextBrowserWidget_InputMethodQuery_Callback = QVariant* (*)(const TextCustomEditor__RichTextBrowserWidget*, int);
    using TextCustomEditor__RichTextBrowserWidget_FocusNextPrevChild_Callback = bool (*)(TextCustomEditor__RichTextBrowserWidget*, bool);
    using TextCustomEditor__RichTextBrowserWidget_EventFilter_Callback = bool (*)(TextCustomEditor__RichTextBrowserWidget*, QObject*, QEvent*);
    using TextCustomEditor__RichTextBrowserWidget_TimerEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QTimerEvent*);
    using TextCustomEditor__RichTextBrowserWidget_ChildEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QChildEvent*);
    using TextCustomEditor__RichTextBrowserWidget_CustomEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QEvent*);
    using TextCustomEditor__RichTextBrowserWidget_ConnectNotify_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QMetaMethod*);
    using TextCustomEditor__RichTextBrowserWidget_DisconnectNotify_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QMetaMethod*);
    using TextCustomEditor__RichTextBrowserWidget_UpdateMicroFocus_Callback = void (*)();
    using TextCustomEditor__RichTextBrowserWidget_Create_Callback = void (*)();
    using TextCustomEditor__RichTextBrowserWidget_Destroy_Callback = void (*)();
    using TextCustomEditor__RichTextBrowserWidget_FocusNextChild_Callback = bool (*)();
    using TextCustomEditor__RichTextBrowserWidget_FocusPreviousChild_Callback = bool (*)();
    using TextCustomEditor__RichTextBrowserWidget_Sender_Callback = QObject* (*)();
    using TextCustomEditor__RichTextBrowserWidget_SenderSignalIndex_Callback = int (*)();
    using TextCustomEditor__RichTextBrowserWidget_Receivers_Callback = int (*)(const TextCustomEditor__RichTextBrowserWidget*, const char*);
    using TextCustomEditor__RichTextBrowserWidget_IsSignalConnected_Callback = bool (*)(const TextCustomEditor__RichTextBrowserWidget*, QMetaMethod*);
    using TextCustomEditor__RichTextBrowserWidget_GetDecodedMetricF_Callback = double (*)(const TextCustomEditor__RichTextBrowserWidget*, int, int);

  protected:
    // Instance callback storage
    TextCustomEditor__RichTextBrowserWidget_MetaObject_Callback textcustomeditor__richtextbrowserwidget_metaobject_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_Metacast_Callback textcustomeditor__richtextbrowserwidget_metacast_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_Metacall_Callback textcustomeditor__richtextbrowserwidget_metacall_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_DevType_Callback textcustomeditor__richtextbrowserwidget_devtype_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_SetVisible_Callback textcustomeditor__richtextbrowserwidget_setvisible_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_SizeHint_Callback textcustomeditor__richtextbrowserwidget_sizehint_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_MinimumSizeHint_Callback textcustomeditor__richtextbrowserwidget_minimumsizehint_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_HeightForWidth_Callback textcustomeditor__richtextbrowserwidget_heightforwidth_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_HasHeightForWidth_Callback textcustomeditor__richtextbrowserwidget_hasheightforwidth_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_PaintEngine_Callback textcustomeditor__richtextbrowserwidget_paintengine_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_Event_Callback textcustomeditor__richtextbrowserwidget_event_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_MousePressEvent_Callback textcustomeditor__richtextbrowserwidget_mousepressevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_MouseReleaseEvent_Callback textcustomeditor__richtextbrowserwidget_mousereleaseevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_MouseDoubleClickEvent_Callback textcustomeditor__richtextbrowserwidget_mousedoubleclickevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_MouseMoveEvent_Callback textcustomeditor__richtextbrowserwidget_mousemoveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_WheelEvent_Callback textcustomeditor__richtextbrowserwidget_wheelevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_KeyPressEvent_Callback textcustomeditor__richtextbrowserwidget_keypressevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_KeyReleaseEvent_Callback textcustomeditor__richtextbrowserwidget_keyreleaseevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_FocusInEvent_Callback textcustomeditor__richtextbrowserwidget_focusinevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_FocusOutEvent_Callback textcustomeditor__richtextbrowserwidget_focusoutevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_EnterEvent_Callback textcustomeditor__richtextbrowserwidget_enterevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_LeaveEvent_Callback textcustomeditor__richtextbrowserwidget_leaveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_PaintEvent_Callback textcustomeditor__richtextbrowserwidget_paintevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_MoveEvent_Callback textcustomeditor__richtextbrowserwidget_moveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_ResizeEvent_Callback textcustomeditor__richtextbrowserwidget_resizeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_CloseEvent_Callback textcustomeditor__richtextbrowserwidget_closeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_ContextMenuEvent_Callback textcustomeditor__richtextbrowserwidget_contextmenuevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_TabletEvent_Callback textcustomeditor__richtextbrowserwidget_tabletevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_ActionEvent_Callback textcustomeditor__richtextbrowserwidget_actionevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_DragEnterEvent_Callback textcustomeditor__richtextbrowserwidget_dragenterevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_DragMoveEvent_Callback textcustomeditor__richtextbrowserwidget_dragmoveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_DragLeaveEvent_Callback textcustomeditor__richtextbrowserwidget_dragleaveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_DropEvent_Callback textcustomeditor__richtextbrowserwidget_dropevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_ShowEvent_Callback textcustomeditor__richtextbrowserwidget_showevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_HideEvent_Callback textcustomeditor__richtextbrowserwidget_hideevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_NativeEvent_Callback textcustomeditor__richtextbrowserwidget_nativeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_ChangeEvent_Callback textcustomeditor__richtextbrowserwidget_changeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_Metric_Callback textcustomeditor__richtextbrowserwidget_metric_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_InitPainter_Callback textcustomeditor__richtextbrowserwidget_initpainter_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_Redirected_Callback textcustomeditor__richtextbrowserwidget_redirected_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_SharedPainter_Callback textcustomeditor__richtextbrowserwidget_sharedpainter_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_InputMethodEvent_Callback textcustomeditor__richtextbrowserwidget_inputmethodevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_InputMethodQuery_Callback textcustomeditor__richtextbrowserwidget_inputmethodquery_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_FocusNextPrevChild_Callback textcustomeditor__richtextbrowserwidget_focusnextprevchild_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_EventFilter_Callback textcustomeditor__richtextbrowserwidget_eventfilter_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_TimerEvent_Callback textcustomeditor__richtextbrowserwidget_timerevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_ChildEvent_Callback textcustomeditor__richtextbrowserwidget_childevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_CustomEvent_Callback textcustomeditor__richtextbrowserwidget_customevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_ConnectNotify_Callback textcustomeditor__richtextbrowserwidget_connectnotify_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_DisconnectNotify_Callback textcustomeditor__richtextbrowserwidget_disconnectnotify_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_UpdateMicroFocus_Callback textcustomeditor__richtextbrowserwidget_updatemicrofocus_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_Create_Callback textcustomeditor__richtextbrowserwidget_create_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_Destroy_Callback textcustomeditor__richtextbrowserwidget_destroy_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_FocusNextChild_Callback textcustomeditor__richtextbrowserwidget_focusnextchild_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_FocusPreviousChild_Callback textcustomeditor__richtextbrowserwidget_focuspreviouschild_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_Sender_Callback textcustomeditor__richtextbrowserwidget_sender_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_SenderSignalIndex_Callback textcustomeditor__richtextbrowserwidget_sendersignalindex_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_Receivers_Callback textcustomeditor__richtextbrowserwidget_receivers_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_IsSignalConnected_Callback textcustomeditor__richtextbrowserwidget_issignalconnected_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_GetDecodedMetricF_Callback textcustomeditor__richtextbrowserwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool textcustomeditor__richtextbrowserwidget_metaobject_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_metacast_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_metacall_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_devtype_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_setvisible_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_sizehint_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_minimumsizehint_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_heightforwidth_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_hasheightforwidth_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_paintengine_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_event_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_mousepressevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_mousereleaseevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_mousedoubleclickevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_mousemoveevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_wheelevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_keypressevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_keyreleaseevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_focusinevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_focusoutevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_enterevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_leaveevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_paintevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_moveevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_resizeevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_closeevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_contextmenuevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_tabletevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_actionevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_dragenterevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_dragmoveevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_dragleaveevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_dropevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_showevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_hideevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_nativeevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_changeevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_metric_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_initpainter_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_redirected_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_sharedpainter_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_inputmethodevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_inputmethodquery_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_focusnextprevchild_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_eventfilter_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_timerevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_childevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_customevent_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_connectnotify_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_disconnectnotify_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_updatemicrofocus_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_create_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_destroy_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_focusnextchild_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_focuspreviouschild_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_sender_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_sendersignalindex_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_receivers_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_issignalconnected_isbase = false;
    mutable bool textcustomeditor__richtextbrowserwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualTextCustomEditorRichTextBrowserWidget(QWidget* parent) : TextCustomEditor::RichTextBrowserWidget(parent) {};
    VirtualTextCustomEditorRichTextBrowserWidget() : TextCustomEditor::RichTextBrowserWidget() {};
    VirtualTextCustomEditorRichTextBrowserWidget(TextCustomEditor::RichTextBrowser* customEditor) : TextCustomEditor::RichTextBrowserWidget(customEditor) {};
    VirtualTextCustomEditorRichTextBrowserWidget(TextCustomEditor::RichTextBrowser* customEditor, QWidget* parent) : TextCustomEditor::RichTextBrowserWidget(customEditor, parent) {};

    // Callback setters
    inline void setTextCustomEditor__RichTextBrowserWidget_MetaObject_Callback(TextCustomEditor__RichTextBrowserWidget_MetaObject_Callback cb) { textcustomeditor__richtextbrowserwidget_metaobject_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_Metacast_Callback(TextCustomEditor__RichTextBrowserWidget_Metacast_Callback cb) { textcustomeditor__richtextbrowserwidget_metacast_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_Metacall_Callback(TextCustomEditor__RichTextBrowserWidget_Metacall_Callback cb) { textcustomeditor__richtextbrowserwidget_metacall_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_DevType_Callback(TextCustomEditor__RichTextBrowserWidget_DevType_Callback cb) { textcustomeditor__richtextbrowserwidget_devtype_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_SetVisible_Callback(TextCustomEditor__RichTextBrowserWidget_SetVisible_Callback cb) { textcustomeditor__richtextbrowserwidget_setvisible_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_SizeHint_Callback(TextCustomEditor__RichTextBrowserWidget_SizeHint_Callback cb) { textcustomeditor__richtextbrowserwidget_sizehint_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_MinimumSizeHint_Callback(TextCustomEditor__RichTextBrowserWidget_MinimumSizeHint_Callback cb) { textcustomeditor__richtextbrowserwidget_minimumsizehint_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_HeightForWidth_Callback(TextCustomEditor__RichTextBrowserWidget_HeightForWidth_Callback cb) { textcustomeditor__richtextbrowserwidget_heightforwidth_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_HasHeightForWidth_Callback(TextCustomEditor__RichTextBrowserWidget_HasHeightForWidth_Callback cb) { textcustomeditor__richtextbrowserwidget_hasheightforwidth_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_PaintEngine_Callback(TextCustomEditor__RichTextBrowserWidget_PaintEngine_Callback cb) { textcustomeditor__richtextbrowserwidget_paintengine_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_Event_Callback(TextCustomEditor__RichTextBrowserWidget_Event_Callback cb) { textcustomeditor__richtextbrowserwidget_event_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_MousePressEvent_Callback(TextCustomEditor__RichTextBrowserWidget_MousePressEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_mousepressevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_MouseReleaseEvent_Callback(TextCustomEditor__RichTextBrowserWidget_MouseReleaseEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_mousereleaseevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_MouseDoubleClickEvent_Callback(TextCustomEditor__RichTextBrowserWidget_MouseDoubleClickEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_mousedoubleclickevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_MouseMoveEvent_Callback(TextCustomEditor__RichTextBrowserWidget_MouseMoveEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_mousemoveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_WheelEvent_Callback(TextCustomEditor__RichTextBrowserWidget_WheelEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_wheelevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_KeyPressEvent_Callback(TextCustomEditor__RichTextBrowserWidget_KeyPressEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_keypressevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_KeyReleaseEvent_Callback(TextCustomEditor__RichTextBrowserWidget_KeyReleaseEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_keyreleaseevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_FocusInEvent_Callback(TextCustomEditor__RichTextBrowserWidget_FocusInEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_focusinevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_FocusOutEvent_Callback(TextCustomEditor__RichTextBrowserWidget_FocusOutEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_focusoutevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_EnterEvent_Callback(TextCustomEditor__RichTextBrowserWidget_EnterEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_enterevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_LeaveEvent_Callback(TextCustomEditor__RichTextBrowserWidget_LeaveEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_leaveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_PaintEvent_Callback(TextCustomEditor__RichTextBrowserWidget_PaintEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_paintevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_MoveEvent_Callback(TextCustomEditor__RichTextBrowserWidget_MoveEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_moveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_ResizeEvent_Callback(TextCustomEditor__RichTextBrowserWidget_ResizeEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_resizeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_CloseEvent_Callback(TextCustomEditor__RichTextBrowserWidget_CloseEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_closeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_ContextMenuEvent_Callback(TextCustomEditor__RichTextBrowserWidget_ContextMenuEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_contextmenuevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_TabletEvent_Callback(TextCustomEditor__RichTextBrowserWidget_TabletEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_tabletevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_ActionEvent_Callback(TextCustomEditor__RichTextBrowserWidget_ActionEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_actionevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_DragEnterEvent_Callback(TextCustomEditor__RichTextBrowserWidget_DragEnterEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_dragenterevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_DragMoveEvent_Callback(TextCustomEditor__RichTextBrowserWidget_DragMoveEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_dragmoveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_DragLeaveEvent_Callback(TextCustomEditor__RichTextBrowserWidget_DragLeaveEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_dragleaveevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_DropEvent_Callback(TextCustomEditor__RichTextBrowserWidget_DropEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_dropevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_ShowEvent_Callback(TextCustomEditor__RichTextBrowserWidget_ShowEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_showevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_HideEvent_Callback(TextCustomEditor__RichTextBrowserWidget_HideEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_hideevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_NativeEvent_Callback(TextCustomEditor__RichTextBrowserWidget_NativeEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_nativeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_ChangeEvent_Callback(TextCustomEditor__RichTextBrowserWidget_ChangeEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_changeevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_Metric_Callback(TextCustomEditor__RichTextBrowserWidget_Metric_Callback cb) { textcustomeditor__richtextbrowserwidget_metric_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_InitPainter_Callback(TextCustomEditor__RichTextBrowserWidget_InitPainter_Callback cb) { textcustomeditor__richtextbrowserwidget_initpainter_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_Redirected_Callback(TextCustomEditor__RichTextBrowserWidget_Redirected_Callback cb) { textcustomeditor__richtextbrowserwidget_redirected_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_SharedPainter_Callback(TextCustomEditor__RichTextBrowserWidget_SharedPainter_Callback cb) { textcustomeditor__richtextbrowserwidget_sharedpainter_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_InputMethodEvent_Callback(TextCustomEditor__RichTextBrowserWidget_InputMethodEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_inputmethodevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_InputMethodQuery_Callback(TextCustomEditor__RichTextBrowserWidget_InputMethodQuery_Callback cb) { textcustomeditor__richtextbrowserwidget_inputmethodquery_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_FocusNextPrevChild_Callback(TextCustomEditor__RichTextBrowserWidget_FocusNextPrevChild_Callback cb) { textcustomeditor__richtextbrowserwidget_focusnextprevchild_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_EventFilter_Callback(TextCustomEditor__RichTextBrowserWidget_EventFilter_Callback cb) { textcustomeditor__richtextbrowserwidget_eventfilter_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_TimerEvent_Callback(TextCustomEditor__RichTextBrowserWidget_TimerEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_timerevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_ChildEvent_Callback(TextCustomEditor__RichTextBrowserWidget_ChildEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_childevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_CustomEvent_Callback(TextCustomEditor__RichTextBrowserWidget_CustomEvent_Callback cb) { textcustomeditor__richtextbrowserwidget_customevent_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_ConnectNotify_Callback(TextCustomEditor__RichTextBrowserWidget_ConnectNotify_Callback cb) { textcustomeditor__richtextbrowserwidget_connectnotify_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_DisconnectNotify_Callback(TextCustomEditor__RichTextBrowserWidget_DisconnectNotify_Callback cb) { textcustomeditor__richtextbrowserwidget_disconnectnotify_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_UpdateMicroFocus_Callback(TextCustomEditor__RichTextBrowserWidget_UpdateMicroFocus_Callback cb) { textcustomeditor__richtextbrowserwidget_updatemicrofocus_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_Create_Callback(TextCustomEditor__RichTextBrowserWidget_Create_Callback cb) { textcustomeditor__richtextbrowserwidget_create_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_Destroy_Callback(TextCustomEditor__RichTextBrowserWidget_Destroy_Callback cb) { textcustomeditor__richtextbrowserwidget_destroy_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_FocusNextChild_Callback(TextCustomEditor__RichTextBrowserWidget_FocusNextChild_Callback cb) { textcustomeditor__richtextbrowserwidget_focusnextchild_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_FocusPreviousChild_Callback(TextCustomEditor__RichTextBrowserWidget_FocusPreviousChild_Callback cb) { textcustomeditor__richtextbrowserwidget_focuspreviouschild_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_Sender_Callback(TextCustomEditor__RichTextBrowserWidget_Sender_Callback cb) { textcustomeditor__richtextbrowserwidget_sender_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_SenderSignalIndex_Callback(TextCustomEditor__RichTextBrowserWidget_SenderSignalIndex_Callback cb) { textcustomeditor__richtextbrowserwidget_sendersignalindex_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_Receivers_Callback(TextCustomEditor__RichTextBrowserWidget_Receivers_Callback cb) { textcustomeditor__richtextbrowserwidget_receivers_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_IsSignalConnected_Callback(TextCustomEditor__RichTextBrowserWidget_IsSignalConnected_Callback cb) { textcustomeditor__richtextbrowserwidget_issignalconnected_callback = cb; }
    inline void setTextCustomEditor__RichTextBrowserWidget_GetDecodedMetricF_Callback(TextCustomEditor__RichTextBrowserWidget_GetDecodedMetricF_Callback cb) { textcustomeditor__richtextbrowserwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextCustomEditor__RichTextBrowserWidget_MetaObject_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_metaobject_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_Metacast_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_metacast_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_Metacall_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_metacall_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_DevType_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_devtype_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_SetVisible_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_setvisible_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_SizeHint_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_sizehint_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_MinimumSizeHint_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_minimumsizehint_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_HeightForWidth_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_heightforwidth_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_HasHeightForWidth_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_hasheightforwidth_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_PaintEngine_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_paintengine_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_Event_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_event_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_MousePressEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_mousepressevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_MouseReleaseEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_mousereleaseevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_MouseDoubleClickEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_mousedoubleclickevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_MouseMoveEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_mousemoveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_WheelEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_wheelevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_KeyPressEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_keypressevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_KeyReleaseEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_keyreleaseevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_FocusInEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_focusinevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_FocusOutEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_focusoutevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_EnterEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_enterevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_LeaveEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_leaveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_PaintEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_paintevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_MoveEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_moveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_ResizeEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_resizeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_CloseEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_closeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_ContextMenuEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_contextmenuevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_TabletEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_tabletevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_ActionEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_actionevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_DragEnterEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_dragenterevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_DragMoveEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_dragmoveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_DragLeaveEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_dragleaveevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_DropEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_dropevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_ShowEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_showevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_HideEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_hideevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_NativeEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_nativeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_ChangeEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_changeevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_Metric_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_metric_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_InitPainter_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_initpainter_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_Redirected_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_redirected_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_SharedPainter_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_sharedpainter_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_InputMethodEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_inputmethodevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_InputMethodQuery_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_inputmethodquery_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_FocusNextPrevChild_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_focusnextprevchild_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_EventFilter_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_eventfilter_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_TimerEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_timerevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_ChildEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_childevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_CustomEvent_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_customevent_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_ConnectNotify_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_connectnotify_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_DisconnectNotify_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_disconnectnotify_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_UpdateMicroFocus_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_updatemicrofocus_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_Create_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_create_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_Destroy_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_destroy_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_FocusNextChild_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_focusnextchild_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_FocusPreviousChild_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_focuspreviouschild_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_Sender_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_sender_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_SenderSignalIndex_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_sendersignalindex_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_Receivers_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_receivers_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_IsSignalConnected_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_issignalconnected_isbase = value; }
    inline void setTextCustomEditor__RichTextBrowserWidget_GetDecodedMetricF_IsBase(bool value) const { textcustomeditor__richtextbrowserwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__richtextbrowserwidget_metaobject_isbase) {
            textcustomeditor__richtextbrowserwidget_metaobject_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::metaObject();
        }
        auto metaobject_cb = textcustomeditor__richtextbrowserwidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__richtextbrowserwidget_metacast_isbase) {
            textcustomeditor__richtextbrowserwidget_metacast_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::qt_metacast(param1);
        }
        auto metacast_cb = textcustomeditor__richtextbrowserwidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__richtextbrowserwidget_metacall_isbase) {
            textcustomeditor__richtextbrowserwidget_metacall_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textcustomeditor__richtextbrowserwidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowserWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textcustomeditor__richtextbrowserwidget_devtype_isbase) {
            textcustomeditor__richtextbrowserwidget_devtype_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::devType();
        }
        auto devtype_cb = textcustomeditor__richtextbrowserwidget_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowserWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textcustomeditor__richtextbrowserwidget_setvisible_isbase) {
            textcustomeditor__richtextbrowserwidget_setvisible_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::setVisible(visible);
            return;
        }
        auto setvisible_cb = textcustomeditor__richtextbrowserwidget_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textcustomeditor__richtextbrowserwidget_sizehint_isbase) {
            textcustomeditor__richtextbrowserwidget_sizehint_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::sizeHint();
        }
        auto sizehint_cb = textcustomeditor__richtextbrowserwidget_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textcustomeditor__richtextbrowserwidget_minimumsizehint_isbase) {
            textcustomeditor__richtextbrowserwidget_minimumsizehint_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::minimumSizeHint();
        }
        auto minimumsizehint_cb = textcustomeditor__richtextbrowserwidget_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textcustomeditor__richtextbrowserwidget_heightforwidth_isbase) {
            textcustomeditor__richtextbrowserwidget_heightforwidth_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::heightForWidth(param1);
        }
        auto heightforwidth_cb = textcustomeditor__richtextbrowserwidget_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowserWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textcustomeditor__richtextbrowserwidget_hasheightforwidth_isbase) {
            textcustomeditor__richtextbrowserwidget_hasheightforwidth_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = textcustomeditor__richtextbrowserwidget_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textcustomeditor__richtextbrowserwidget_paintengine_isbase) {
            textcustomeditor__richtextbrowserwidget_paintengine_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::paintEngine();
        }
        auto paintengine_cb = textcustomeditor__richtextbrowserwidget_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_event_isbase) {
            textcustomeditor__richtextbrowserwidget_event_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::event(event);
        }
        auto event_cb = textcustomeditor__richtextbrowserwidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_mousepressevent_isbase) {
            textcustomeditor__richtextbrowserwidget_mousepressevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = textcustomeditor__richtextbrowserwidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_mousereleaseevent_isbase) {
            textcustomeditor__richtextbrowserwidget_mousereleaseevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = textcustomeditor__richtextbrowserwidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_mousedoubleclickevent_isbase) {
            textcustomeditor__richtextbrowserwidget_mousedoubleclickevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = textcustomeditor__richtextbrowserwidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_mousemoveevent_isbase) {
            textcustomeditor__richtextbrowserwidget_mousemoveevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = textcustomeditor__richtextbrowserwidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_wheelevent_isbase) {
            textcustomeditor__richtextbrowserwidget_wheelevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = textcustomeditor__richtextbrowserwidget_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_keypressevent_isbase) {
            textcustomeditor__richtextbrowserwidget_keypressevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = textcustomeditor__richtextbrowserwidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_keyreleaseevent_isbase) {
            textcustomeditor__richtextbrowserwidget_keyreleaseevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = textcustomeditor__richtextbrowserwidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_focusinevent_isbase) {
            textcustomeditor__richtextbrowserwidget_focusinevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = textcustomeditor__richtextbrowserwidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_focusoutevent_isbase) {
            textcustomeditor__richtextbrowserwidget_focusoutevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = textcustomeditor__richtextbrowserwidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_enterevent_isbase) {
            textcustomeditor__richtextbrowserwidget_enterevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::enterEvent(event);
            return;
        }
        auto enterevent_cb = textcustomeditor__richtextbrowserwidget_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_leaveevent_isbase) {
            textcustomeditor__richtextbrowserwidget_leaveevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = textcustomeditor__richtextbrowserwidget_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_paintevent_isbase) {
            textcustomeditor__richtextbrowserwidget_paintevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::paintEvent(event);
            return;
        }
        auto paintevent_cb = textcustomeditor__richtextbrowserwidget_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_moveevent_isbase) {
            textcustomeditor__richtextbrowserwidget_moveevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = textcustomeditor__richtextbrowserwidget_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_resizeevent_isbase) {
            textcustomeditor__richtextbrowserwidget_resizeevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = textcustomeditor__richtextbrowserwidget_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_closeevent_isbase) {
            textcustomeditor__richtextbrowserwidget_closeevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = textcustomeditor__richtextbrowserwidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_contextmenuevent_isbase) {
            textcustomeditor__richtextbrowserwidget_contextmenuevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = textcustomeditor__richtextbrowserwidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_tabletevent_isbase) {
            textcustomeditor__richtextbrowserwidget_tabletevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = textcustomeditor__richtextbrowserwidget_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_actionevent_isbase) {
            textcustomeditor__richtextbrowserwidget_actionevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::actionEvent(event);
            return;
        }
        auto actionevent_cb = textcustomeditor__richtextbrowserwidget_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_dragenterevent_isbase) {
            textcustomeditor__richtextbrowserwidget_dragenterevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = textcustomeditor__richtextbrowserwidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_dragmoveevent_isbase) {
            textcustomeditor__richtextbrowserwidget_dragmoveevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = textcustomeditor__richtextbrowserwidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_dragleaveevent_isbase) {
            textcustomeditor__richtextbrowserwidget_dragleaveevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = textcustomeditor__richtextbrowserwidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_dropevent_isbase) {
            textcustomeditor__richtextbrowserwidget_dropevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::dropEvent(event);
            return;
        }
        auto dropevent_cb = textcustomeditor__richtextbrowserwidget_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_showevent_isbase) {
            textcustomeditor__richtextbrowserwidget_showevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::showEvent(event);
            return;
        }
        auto showevent_cb = textcustomeditor__richtextbrowserwidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_hideevent_isbase) {
            textcustomeditor__richtextbrowserwidget_hideevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::hideEvent(event);
            return;
        }
        auto hideevent_cb = textcustomeditor__richtextbrowserwidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textcustomeditor__richtextbrowserwidget_nativeevent_isbase) {
            textcustomeditor__richtextbrowserwidget_nativeevent_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = textcustomeditor__richtextbrowserwidget_nativeevent_callback;
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
        return TextCustomEditor__RichTextBrowserWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textcustomeditor__richtextbrowserwidget_changeevent_isbase) {
            textcustomeditor__richtextbrowserwidget_changeevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::changeEvent(param1);
            return;
        }
        auto changeevent_cb = textcustomeditor__richtextbrowserwidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textcustomeditor__richtextbrowserwidget_metric_isbase) {
            textcustomeditor__richtextbrowserwidget_metric_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::metric(param1);
        }
        auto metric_cb = textcustomeditor__richtextbrowserwidget_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowserWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textcustomeditor__richtextbrowserwidget_initpainter_isbase) {
            textcustomeditor__richtextbrowserwidget_initpainter_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::initPainter(painter);
            return;
        }
        auto initpainter_cb = textcustomeditor__richtextbrowserwidget_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textcustomeditor__richtextbrowserwidget_redirected_isbase) {
            textcustomeditor__richtextbrowserwidget_redirected_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::redirected(offset);
        }
        auto redirected_cb = textcustomeditor__richtextbrowserwidget_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textcustomeditor__richtextbrowserwidget_sharedpainter_isbase) {
            textcustomeditor__richtextbrowserwidget_sharedpainter_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::sharedPainter();
        }
        auto sharedpainter_cb = textcustomeditor__richtextbrowserwidget_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textcustomeditor__richtextbrowserwidget_inputmethodevent_isbase) {
            textcustomeditor__richtextbrowserwidget_inputmethodevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = textcustomeditor__richtextbrowserwidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textcustomeditor__richtextbrowserwidget_inputmethodquery_isbase) {
            textcustomeditor__richtextbrowserwidget_inputmethodquery_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = textcustomeditor__richtextbrowserwidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textcustomeditor__richtextbrowserwidget_focusnextprevchild_isbase) {
            textcustomeditor__richtextbrowserwidget_focusnextprevchild_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = textcustomeditor__richtextbrowserwidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_eventfilter_isbase) {
            textcustomeditor__richtextbrowserwidget_eventfilter_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::eventFilter(watched, event);
        }
        auto eventfilter_cb = textcustomeditor__richtextbrowserwidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_timerevent_isbase) {
            textcustomeditor__richtextbrowserwidget_timerevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::timerEvent(event);
            return;
        }
        auto timerevent_cb = textcustomeditor__richtextbrowserwidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_childevent_isbase) {
            textcustomeditor__richtextbrowserwidget_childevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::childEvent(event);
            return;
        }
        auto childevent_cb = textcustomeditor__richtextbrowserwidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_customevent_isbase) {
            textcustomeditor__richtextbrowserwidget_customevent_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::customEvent(event);
            return;
        }
        auto customevent_cb = textcustomeditor__richtextbrowserwidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtextbrowserwidget_connectnotify_isbase) {
            textcustomeditor__richtextbrowserwidget_connectnotify_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textcustomeditor__richtextbrowserwidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtextbrowserwidget_disconnectnotify_isbase) {
            textcustomeditor__richtextbrowserwidget_disconnectnotify_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textcustomeditor__richtextbrowserwidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (textcustomeditor__richtextbrowserwidget_updatemicrofocus_isbase) {
            textcustomeditor__richtextbrowserwidget_updatemicrofocus_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = textcustomeditor__richtextbrowserwidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (textcustomeditor__richtextbrowserwidget_create_isbase) {
            textcustomeditor__richtextbrowserwidget_create_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::create();
            return;
        }
        auto create_cb = textcustomeditor__richtextbrowserwidget_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (textcustomeditor__richtextbrowserwidget_destroy_isbase) {
            textcustomeditor__richtextbrowserwidget_destroy_isbase = false;
            TextCustomEditor__RichTextBrowserWidget::destroy();
            return;
        }
        auto destroy_cb = textcustomeditor__richtextbrowserwidget_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (textcustomeditor__richtextbrowserwidget_focusnextchild_isbase) {
            textcustomeditor__richtextbrowserwidget_focusnextchild_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::focusNextChild();
        }
        auto focusnextchild_cb = textcustomeditor__richtextbrowserwidget_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (textcustomeditor__richtextbrowserwidget_focuspreviouschild_isbase) {
            textcustomeditor__richtextbrowserwidget_focuspreviouschild_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::focusPreviousChild();
        }
        auto focuspreviouschild_cb = textcustomeditor__richtextbrowserwidget_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textcustomeditor__richtextbrowserwidget_sender_isbase) {
            textcustomeditor__richtextbrowserwidget_sender_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::sender();
        }
        auto sender_cb = textcustomeditor__richtextbrowserwidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textcustomeditor__richtextbrowserwidget_sendersignalindex_isbase) {
            textcustomeditor__richtextbrowserwidget_sendersignalindex_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = textcustomeditor__richtextbrowserwidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowserWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textcustomeditor__richtextbrowserwidget_receivers_isbase) {
            textcustomeditor__richtextbrowserwidget_receivers_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::receivers(signal);
        }
        auto receivers_cb = textcustomeditor__richtextbrowserwidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowserWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textcustomeditor__richtextbrowserwidget_issignalconnected_isbase) {
            textcustomeditor__richtextbrowserwidget_issignalconnected_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textcustomeditor__richtextbrowserwidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (textcustomeditor__richtextbrowserwidget_getdecodedmetricf_isbase) {
            textcustomeditor__richtextbrowserwidget_getdecodedmetricf_isbase = false;
            return TextCustomEditor__RichTextBrowserWidget::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = textcustomeditor__richtextbrowserwidget_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowserWidget::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool TextCustomEditor__RichTextBrowserWidget_Event(TextCustomEditor::RichTextBrowserWidget* self, QEvent* event);
    friend bool TextCustomEditor__RichTextBrowserWidget_SuperEvent(TextCustomEditor::RichTextBrowserWidget* self, QEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_MousePressEvent(TextCustomEditor::RichTextBrowserWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperMousePressEvent(TextCustomEditor::RichTextBrowserWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_MouseReleaseEvent(TextCustomEditor::RichTextBrowserWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperMouseReleaseEvent(TextCustomEditor::RichTextBrowserWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_MouseDoubleClickEvent(TextCustomEditor::RichTextBrowserWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperMouseDoubleClickEvent(TextCustomEditor::RichTextBrowserWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_MouseMoveEvent(TextCustomEditor::RichTextBrowserWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperMouseMoveEvent(TextCustomEditor::RichTextBrowserWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_WheelEvent(TextCustomEditor::RichTextBrowserWidget* self, QWheelEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperWheelEvent(TextCustomEditor::RichTextBrowserWidget* self, QWheelEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_KeyPressEvent(TextCustomEditor::RichTextBrowserWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperKeyPressEvent(TextCustomEditor::RichTextBrowserWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_KeyReleaseEvent(TextCustomEditor::RichTextBrowserWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperKeyReleaseEvent(TextCustomEditor::RichTextBrowserWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_FocusInEvent(TextCustomEditor::RichTextBrowserWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperFocusInEvent(TextCustomEditor::RichTextBrowserWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_FocusOutEvent(TextCustomEditor::RichTextBrowserWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperFocusOutEvent(TextCustomEditor::RichTextBrowserWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_EnterEvent(TextCustomEditor::RichTextBrowserWidget* self, QEnterEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperEnterEvent(TextCustomEditor::RichTextBrowserWidget* self, QEnterEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_LeaveEvent(TextCustomEditor::RichTextBrowserWidget* self, QEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperLeaveEvent(TextCustomEditor::RichTextBrowserWidget* self, QEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_PaintEvent(TextCustomEditor::RichTextBrowserWidget* self, QPaintEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperPaintEvent(TextCustomEditor::RichTextBrowserWidget* self, QPaintEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_MoveEvent(TextCustomEditor::RichTextBrowserWidget* self, QMoveEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperMoveEvent(TextCustomEditor::RichTextBrowserWidget* self, QMoveEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_ResizeEvent(TextCustomEditor::RichTextBrowserWidget* self, QResizeEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperResizeEvent(TextCustomEditor::RichTextBrowserWidget* self, QResizeEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_CloseEvent(TextCustomEditor::RichTextBrowserWidget* self, QCloseEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperCloseEvent(TextCustomEditor::RichTextBrowserWidget* self, QCloseEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_ContextMenuEvent(TextCustomEditor::RichTextBrowserWidget* self, QContextMenuEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperContextMenuEvent(TextCustomEditor::RichTextBrowserWidget* self, QContextMenuEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_TabletEvent(TextCustomEditor::RichTextBrowserWidget* self, QTabletEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperTabletEvent(TextCustomEditor::RichTextBrowserWidget* self, QTabletEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_ActionEvent(TextCustomEditor::RichTextBrowserWidget* self, QActionEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperActionEvent(TextCustomEditor::RichTextBrowserWidget* self, QActionEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_DragEnterEvent(TextCustomEditor::RichTextBrowserWidget* self, QDragEnterEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperDragEnterEvent(TextCustomEditor::RichTextBrowserWidget* self, QDragEnterEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_DragMoveEvent(TextCustomEditor::RichTextBrowserWidget* self, QDragMoveEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperDragMoveEvent(TextCustomEditor::RichTextBrowserWidget* self, QDragMoveEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_DragLeaveEvent(TextCustomEditor::RichTextBrowserWidget* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperDragLeaveEvent(TextCustomEditor::RichTextBrowserWidget* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_DropEvent(TextCustomEditor::RichTextBrowserWidget* self, QDropEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperDropEvent(TextCustomEditor::RichTextBrowserWidget* self, QDropEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_ShowEvent(TextCustomEditor::RichTextBrowserWidget* self, QShowEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperShowEvent(TextCustomEditor::RichTextBrowserWidget* self, QShowEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_HideEvent(TextCustomEditor::RichTextBrowserWidget* self, QHideEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperHideEvent(TextCustomEditor::RichTextBrowserWidget* self, QHideEvent* event);
    friend bool TextCustomEditor__RichTextBrowserWidget_NativeEvent(TextCustomEditor::RichTextBrowserWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextCustomEditor__RichTextBrowserWidget_SuperNativeEvent(TextCustomEditor::RichTextBrowserWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextCustomEditor__RichTextBrowserWidget_ChangeEvent(TextCustomEditor::RichTextBrowserWidget* self, QEvent* param1);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperChangeEvent(TextCustomEditor::RichTextBrowserWidget* self, QEvent* param1);
    friend int TextCustomEditor__RichTextBrowserWidget_Metric(const TextCustomEditor::RichTextBrowserWidget* self, int param1);
    friend int TextCustomEditor__RichTextBrowserWidget_SuperMetric(const TextCustomEditor::RichTextBrowserWidget* self, int param1);
    friend void TextCustomEditor__RichTextBrowserWidget_InitPainter(const TextCustomEditor::RichTextBrowserWidget* self, QPainter* painter);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperInitPainter(const TextCustomEditor::RichTextBrowserWidget* self, QPainter* painter);
    friend QPaintDevice* TextCustomEditor__RichTextBrowserWidget_Redirected(const TextCustomEditor::RichTextBrowserWidget* self, QPoint* offset);
    friend QPaintDevice* TextCustomEditor__RichTextBrowserWidget_SuperRedirected(const TextCustomEditor::RichTextBrowserWidget* self, QPoint* offset);
    friend QPainter* TextCustomEditor__RichTextBrowserWidget_SharedPainter(const TextCustomEditor::RichTextBrowserWidget* self);
    friend QPainter* TextCustomEditor__RichTextBrowserWidget_SuperSharedPainter(const TextCustomEditor::RichTextBrowserWidget* self);
    friend void TextCustomEditor__RichTextBrowserWidget_InputMethodEvent(TextCustomEditor::RichTextBrowserWidget* self, QInputMethodEvent* param1);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperInputMethodEvent(TextCustomEditor::RichTextBrowserWidget* self, QInputMethodEvent* param1);
    friend bool TextCustomEditor__RichTextBrowserWidget_FocusNextPrevChild(TextCustomEditor::RichTextBrowserWidget* self, bool next);
    friend bool TextCustomEditor__RichTextBrowserWidget_SuperFocusNextPrevChild(TextCustomEditor::RichTextBrowserWidget* self, bool next);
    friend void TextCustomEditor__RichTextBrowserWidget_TimerEvent(TextCustomEditor::RichTextBrowserWidget* self, QTimerEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperTimerEvent(TextCustomEditor::RichTextBrowserWidget* self, QTimerEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_ChildEvent(TextCustomEditor::RichTextBrowserWidget* self, QChildEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperChildEvent(TextCustomEditor::RichTextBrowserWidget* self, QChildEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_CustomEvent(TextCustomEditor::RichTextBrowserWidget* self, QEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperCustomEvent(TextCustomEditor::RichTextBrowserWidget* self, QEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_ConnectNotify(TextCustomEditor::RichTextBrowserWidget* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperConnectNotify(TextCustomEditor::RichTextBrowserWidget* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextBrowserWidget_DisconnectNotify(TextCustomEditor::RichTextBrowserWidget* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperDisconnectNotify(TextCustomEditor::RichTextBrowserWidget* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextBrowserWidget_UpdateMicroFocus(TextCustomEditor::RichTextBrowserWidget* self);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperUpdateMicroFocus(TextCustomEditor::RichTextBrowserWidget* self);
    friend void TextCustomEditor__RichTextBrowserWidget_Create(TextCustomEditor::RichTextBrowserWidget* self);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperCreate(TextCustomEditor::RichTextBrowserWidget* self);
    friend void TextCustomEditor__RichTextBrowserWidget_Destroy(TextCustomEditor::RichTextBrowserWidget* self);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperDestroy(TextCustomEditor::RichTextBrowserWidget* self);
    friend bool TextCustomEditor__RichTextBrowserWidget_FocusNextChild(TextCustomEditor::RichTextBrowserWidget* self);
    friend bool TextCustomEditor__RichTextBrowserWidget_SuperFocusNextChild(TextCustomEditor::RichTextBrowserWidget* self);
    friend bool TextCustomEditor__RichTextBrowserWidget_FocusPreviousChild(TextCustomEditor::RichTextBrowserWidget* self);
    friend bool TextCustomEditor__RichTextBrowserWidget_SuperFocusPreviousChild(TextCustomEditor::RichTextBrowserWidget* self);
    friend QObject* TextCustomEditor__RichTextBrowserWidget_Sender(const TextCustomEditor::RichTextBrowserWidget* self);
    friend QObject* TextCustomEditor__RichTextBrowserWidget_SuperSender(const TextCustomEditor::RichTextBrowserWidget* self);
    friend int TextCustomEditor__RichTextBrowserWidget_SenderSignalIndex(const TextCustomEditor::RichTextBrowserWidget* self);
    friend int TextCustomEditor__RichTextBrowserWidget_SuperSenderSignalIndex(const TextCustomEditor::RichTextBrowserWidget* self);
    friend int TextCustomEditor__RichTextBrowserWidget_Receivers(const TextCustomEditor::RichTextBrowserWidget* self, const char* signal);
    friend int TextCustomEditor__RichTextBrowserWidget_SuperReceivers(const TextCustomEditor::RichTextBrowserWidget* self, const char* signal);
    friend bool TextCustomEditor__RichTextBrowserWidget_IsSignalConnected(const TextCustomEditor::RichTextBrowserWidget* self, const QMetaMethod* signal);
    friend bool TextCustomEditor__RichTextBrowserWidget_SuperIsSignalConnected(const TextCustomEditor::RichTextBrowserWidget* self, const QMetaMethod* signal);
    friend double TextCustomEditor__RichTextBrowserWidget_GetDecodedMetricF(const TextCustomEditor::RichTextBrowserWidget* self, int metricA, int metricB);
    friend double TextCustomEditor__RichTextBrowserWidget_SuperGetDecodedMetricF(const TextCustomEditor::RichTextBrowserWidget* self, int metricA, int metricB);
};

#endif
