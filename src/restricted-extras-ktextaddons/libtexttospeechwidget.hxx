#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTEXTTOSPEECHWIDGET_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTEXTTOSPEECHWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextEditTextToSpeech::TextToSpeechWidget so that we can call protected methods
class VirtualTextEditTextToSpeechTextToSpeechWidget final : public TextEditTextToSpeech::TextToSpeechWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualTextEditTextToSpeechTextToSpeechWidget = true;

    // Virtual class public types (including callbacks)
    using TextEditTextToSpeech__TextToSpeechWidget_MetaObject_Callback = QMetaObject* (*)();
    using TextEditTextToSpeech__TextToSpeechWidget_Metacast_Callback = void* (*)(TextEditTextToSpeech__TextToSpeechWidget*, const char*);
    using TextEditTextToSpeech__TextToSpeechWidget_Metacall_Callback = int (*)(TextEditTextToSpeech__TextToSpeechWidget*, int, int, void**);
    using TextEditTextToSpeech__TextToSpeechWidget_DevType_Callback = int (*)();
    using TextEditTextToSpeech__TextToSpeechWidget_SetVisible_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, bool);
    using TextEditTextToSpeech__TextToSpeechWidget_SizeHint_Callback = QSize* (*)();
    using TextEditTextToSpeech__TextToSpeechWidget_MinimumSizeHint_Callback = QSize* (*)();
    using TextEditTextToSpeech__TextToSpeechWidget_HeightForWidth_Callback = int (*)(const TextEditTextToSpeech__TextToSpeechWidget*, int);
    using TextEditTextToSpeech__TextToSpeechWidget_HasHeightForWidth_Callback = bool (*)();
    using TextEditTextToSpeech__TextToSpeechWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using TextEditTextToSpeech__TextToSpeechWidget_Event_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechWidget*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_MousePressEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QMouseEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_MouseReleaseEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QMouseEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_MouseDoubleClickEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QMouseEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_MouseMoveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QMouseEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_WheelEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QWheelEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_KeyPressEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QKeyEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_KeyReleaseEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QKeyEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_FocusInEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QFocusEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_FocusOutEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QFocusEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_EnterEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QEnterEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_LeaveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_PaintEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QPaintEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_MoveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QMoveEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_ResizeEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QResizeEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_CloseEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QCloseEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_ContextMenuEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QContextMenuEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_TabletEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QTabletEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_ActionEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QActionEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_DragEnterEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QDragEnterEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_DragMoveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QDragMoveEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_DragLeaveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QDragLeaveEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_DropEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QDropEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_ShowEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QShowEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_HideEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QHideEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_NativeEvent_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechWidget*, libqt_string, void*, intptr_t*);
    using TextEditTextToSpeech__TextToSpeechWidget_ChangeEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_Metric_Callback = int (*)(const TextEditTextToSpeech__TextToSpeechWidget*, int);
    using TextEditTextToSpeech__TextToSpeechWidget_InitPainter_Callback = void (*)(const TextEditTextToSpeech__TextToSpeechWidget*, QPainter*);
    using TextEditTextToSpeech__TextToSpeechWidget_Redirected_Callback = QPaintDevice* (*)(const TextEditTextToSpeech__TextToSpeechWidget*, QPoint*);
    using TextEditTextToSpeech__TextToSpeechWidget_SharedPainter_Callback = QPainter* (*)();
    using TextEditTextToSpeech__TextToSpeechWidget_InputMethodEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QInputMethodEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_InputMethodQuery_Callback = QVariant* (*)(const TextEditTextToSpeech__TextToSpeechWidget*, int);
    using TextEditTextToSpeech__TextToSpeechWidget_FocusNextPrevChild_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechWidget*, bool);
    using TextEditTextToSpeech__TextToSpeechWidget_EventFilter_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechWidget*, QObject*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_TimerEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QTimerEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_ChildEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QChildEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_CustomEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_ConnectNotify_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QMetaMethod*);
    using TextEditTextToSpeech__TextToSpeechWidget_DisconnectNotify_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QMetaMethod*);
    using TextEditTextToSpeech__TextToSpeechWidget_UpdateMicroFocus_Callback = void (*)();
    using TextEditTextToSpeech__TextToSpeechWidget_Create_Callback = void (*)();
    using TextEditTextToSpeech__TextToSpeechWidget_Destroy_Callback = void (*)();
    using TextEditTextToSpeech__TextToSpeechWidget_FocusNextChild_Callback = bool (*)();
    using TextEditTextToSpeech__TextToSpeechWidget_FocusPreviousChild_Callback = bool (*)();
    using TextEditTextToSpeech__TextToSpeechWidget_Sender_Callback = QObject* (*)();
    using TextEditTextToSpeech__TextToSpeechWidget_SenderSignalIndex_Callback = int (*)();
    using TextEditTextToSpeech__TextToSpeechWidget_Receivers_Callback = int (*)(const TextEditTextToSpeech__TextToSpeechWidget*, const char*);
    using TextEditTextToSpeech__TextToSpeechWidget_IsSignalConnected_Callback = bool (*)(const TextEditTextToSpeech__TextToSpeechWidget*, QMetaMethod*);
    using TextEditTextToSpeech__TextToSpeechWidget_GetDecodedMetricF_Callback = double (*)(const TextEditTextToSpeech__TextToSpeechWidget*, int, int);

  protected:
    // Instance callback storage
    TextEditTextToSpeech__TextToSpeechWidget_MetaObject_Callback textedittexttospeech__texttospeechwidget_metaobject_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_Metacast_Callback textedittexttospeech__texttospeechwidget_metacast_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_Metacall_Callback textedittexttospeech__texttospeechwidget_metacall_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_DevType_Callback textedittexttospeech__texttospeechwidget_devtype_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_SetVisible_Callback textedittexttospeech__texttospeechwidget_setvisible_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_SizeHint_Callback textedittexttospeech__texttospeechwidget_sizehint_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_MinimumSizeHint_Callback textedittexttospeech__texttospeechwidget_minimumsizehint_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_HeightForWidth_Callback textedittexttospeech__texttospeechwidget_heightforwidth_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_HasHeightForWidth_Callback textedittexttospeech__texttospeechwidget_hasheightforwidth_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_PaintEngine_Callback textedittexttospeech__texttospeechwidget_paintengine_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_Event_Callback textedittexttospeech__texttospeechwidget_event_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_MousePressEvent_Callback textedittexttospeech__texttospeechwidget_mousepressevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_MouseReleaseEvent_Callback textedittexttospeech__texttospeechwidget_mousereleaseevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_MouseDoubleClickEvent_Callback textedittexttospeech__texttospeechwidget_mousedoubleclickevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_MouseMoveEvent_Callback textedittexttospeech__texttospeechwidget_mousemoveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_WheelEvent_Callback textedittexttospeech__texttospeechwidget_wheelevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_KeyPressEvent_Callback textedittexttospeech__texttospeechwidget_keypressevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_KeyReleaseEvent_Callback textedittexttospeech__texttospeechwidget_keyreleaseevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_FocusInEvent_Callback textedittexttospeech__texttospeechwidget_focusinevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_FocusOutEvent_Callback textedittexttospeech__texttospeechwidget_focusoutevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_EnterEvent_Callback textedittexttospeech__texttospeechwidget_enterevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_LeaveEvent_Callback textedittexttospeech__texttospeechwidget_leaveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_PaintEvent_Callback textedittexttospeech__texttospeechwidget_paintevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_MoveEvent_Callback textedittexttospeech__texttospeechwidget_moveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_ResizeEvent_Callback textedittexttospeech__texttospeechwidget_resizeevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_CloseEvent_Callback textedittexttospeech__texttospeechwidget_closeevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_ContextMenuEvent_Callback textedittexttospeech__texttospeechwidget_contextmenuevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_TabletEvent_Callback textedittexttospeech__texttospeechwidget_tabletevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_ActionEvent_Callback textedittexttospeech__texttospeechwidget_actionevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_DragEnterEvent_Callback textedittexttospeech__texttospeechwidget_dragenterevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_DragMoveEvent_Callback textedittexttospeech__texttospeechwidget_dragmoveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_DragLeaveEvent_Callback textedittexttospeech__texttospeechwidget_dragleaveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_DropEvent_Callback textedittexttospeech__texttospeechwidget_dropevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_ShowEvent_Callback textedittexttospeech__texttospeechwidget_showevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_HideEvent_Callback textedittexttospeech__texttospeechwidget_hideevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_NativeEvent_Callback textedittexttospeech__texttospeechwidget_nativeevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_ChangeEvent_Callback textedittexttospeech__texttospeechwidget_changeevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_Metric_Callback textedittexttospeech__texttospeechwidget_metric_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_InitPainter_Callback textedittexttospeech__texttospeechwidget_initpainter_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_Redirected_Callback textedittexttospeech__texttospeechwidget_redirected_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_SharedPainter_Callback textedittexttospeech__texttospeechwidget_sharedpainter_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_InputMethodEvent_Callback textedittexttospeech__texttospeechwidget_inputmethodevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_InputMethodQuery_Callback textedittexttospeech__texttospeechwidget_inputmethodquery_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_FocusNextPrevChild_Callback textedittexttospeech__texttospeechwidget_focusnextprevchild_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_EventFilter_Callback textedittexttospeech__texttospeechwidget_eventfilter_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_TimerEvent_Callback textedittexttospeech__texttospeechwidget_timerevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_ChildEvent_Callback textedittexttospeech__texttospeechwidget_childevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_CustomEvent_Callback textedittexttospeech__texttospeechwidget_customevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_ConnectNotify_Callback textedittexttospeech__texttospeechwidget_connectnotify_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_DisconnectNotify_Callback textedittexttospeech__texttospeechwidget_disconnectnotify_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_UpdateMicroFocus_Callback textedittexttospeech__texttospeechwidget_updatemicrofocus_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_Create_Callback textedittexttospeech__texttospeechwidget_create_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_Destroy_Callback textedittexttospeech__texttospeechwidget_destroy_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_FocusNextChild_Callback textedittexttospeech__texttospeechwidget_focusnextchild_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_FocusPreviousChild_Callback textedittexttospeech__texttospeechwidget_focuspreviouschild_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_Sender_Callback textedittexttospeech__texttospeechwidget_sender_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_SenderSignalIndex_Callback textedittexttospeech__texttospeechwidget_sendersignalindex_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_Receivers_Callback textedittexttospeech__texttospeechwidget_receivers_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_IsSignalConnected_Callback textedittexttospeech__texttospeechwidget_issignalconnected_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_GetDecodedMetricF_Callback textedittexttospeech__texttospeechwidget_getdecodedmetricf_callback = nullptr;

    // Instance base flags
    mutable bool textedittexttospeech__texttospeechwidget_metaobject_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_metacast_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_metacall_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_devtype_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_setvisible_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_sizehint_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_minimumsizehint_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_heightforwidth_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_hasheightforwidth_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_paintengine_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_event_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_mousepressevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_mousereleaseevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_mousedoubleclickevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_mousemoveevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_wheelevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_keypressevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_keyreleaseevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_focusinevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_focusoutevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_enterevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_leaveevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_paintevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_moveevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_resizeevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_closeevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_contextmenuevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_tabletevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_actionevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_dragenterevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_dragmoveevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_dragleaveevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_dropevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_showevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_hideevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_nativeevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_changeevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_metric_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_initpainter_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_redirected_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_sharedpainter_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_inputmethodevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_inputmethodquery_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_focusnextprevchild_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_eventfilter_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_timerevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_childevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_customevent_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_connectnotify_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_disconnectnotify_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_updatemicrofocus_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_create_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_destroy_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_focusnextchild_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_focuspreviouschild_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_sender_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_sendersignalindex_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_receivers_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_issignalconnected_isbase = false;
    mutable bool textedittexttospeech__texttospeechwidget_getdecodedmetricf_isbase = false;

  public:
    VirtualTextEditTextToSpeechTextToSpeechWidget(QWidget* parent) : TextEditTextToSpeech::TextToSpeechWidget(parent) {};
    VirtualTextEditTextToSpeechTextToSpeechWidget() : TextEditTextToSpeech::TextToSpeechWidget() {};

    // Callback setters
    inline void setTextEditTextToSpeech__TextToSpeechWidget_MetaObject_Callback(TextEditTextToSpeech__TextToSpeechWidget_MetaObject_Callback cb) { textedittexttospeech__texttospeechwidget_metaobject_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_Metacast_Callback(TextEditTextToSpeech__TextToSpeechWidget_Metacast_Callback cb) { textedittexttospeech__texttospeechwidget_metacast_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_Metacall_Callback(TextEditTextToSpeech__TextToSpeechWidget_Metacall_Callback cb) { textedittexttospeech__texttospeechwidget_metacall_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_DevType_Callback(TextEditTextToSpeech__TextToSpeechWidget_DevType_Callback cb) { textedittexttospeech__texttospeechwidget_devtype_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_SetVisible_Callback(TextEditTextToSpeech__TextToSpeechWidget_SetVisible_Callback cb) { textedittexttospeech__texttospeechwidget_setvisible_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_SizeHint_Callback(TextEditTextToSpeech__TextToSpeechWidget_SizeHint_Callback cb) { textedittexttospeech__texttospeechwidget_sizehint_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_MinimumSizeHint_Callback(TextEditTextToSpeech__TextToSpeechWidget_MinimumSizeHint_Callback cb) { textedittexttospeech__texttospeechwidget_minimumsizehint_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_HeightForWidth_Callback(TextEditTextToSpeech__TextToSpeechWidget_HeightForWidth_Callback cb) { textedittexttospeech__texttospeechwidget_heightforwidth_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_HasHeightForWidth_Callback(TextEditTextToSpeech__TextToSpeechWidget_HasHeightForWidth_Callback cb) { textedittexttospeech__texttospeechwidget_hasheightforwidth_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_PaintEngine_Callback(TextEditTextToSpeech__TextToSpeechWidget_PaintEngine_Callback cb) { textedittexttospeech__texttospeechwidget_paintengine_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_Event_Callback(TextEditTextToSpeech__TextToSpeechWidget_Event_Callback cb) { textedittexttospeech__texttospeechwidget_event_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_MousePressEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_MousePressEvent_Callback cb) { textedittexttospeech__texttospeechwidget_mousepressevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_MouseReleaseEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_MouseReleaseEvent_Callback cb) { textedittexttospeech__texttospeechwidget_mousereleaseevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_MouseDoubleClickEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_MouseDoubleClickEvent_Callback cb) { textedittexttospeech__texttospeechwidget_mousedoubleclickevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_MouseMoveEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_MouseMoveEvent_Callback cb) { textedittexttospeech__texttospeechwidget_mousemoveevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_WheelEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_WheelEvent_Callback cb) { textedittexttospeech__texttospeechwidget_wheelevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_KeyPressEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_KeyPressEvent_Callback cb) { textedittexttospeech__texttospeechwidget_keypressevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_KeyReleaseEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_KeyReleaseEvent_Callback cb) { textedittexttospeech__texttospeechwidget_keyreleaseevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_FocusInEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_FocusInEvent_Callback cb) { textedittexttospeech__texttospeechwidget_focusinevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_FocusOutEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_FocusOutEvent_Callback cb) { textedittexttospeech__texttospeechwidget_focusoutevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_EnterEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_EnterEvent_Callback cb) { textedittexttospeech__texttospeechwidget_enterevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_LeaveEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_LeaveEvent_Callback cb) { textedittexttospeech__texttospeechwidget_leaveevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_PaintEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_PaintEvent_Callback cb) { textedittexttospeech__texttospeechwidget_paintevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_MoveEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_MoveEvent_Callback cb) { textedittexttospeech__texttospeechwidget_moveevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_ResizeEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_ResizeEvent_Callback cb) { textedittexttospeech__texttospeechwidget_resizeevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_CloseEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_CloseEvent_Callback cb) { textedittexttospeech__texttospeechwidget_closeevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_ContextMenuEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_ContextMenuEvent_Callback cb) { textedittexttospeech__texttospeechwidget_contextmenuevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_TabletEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_TabletEvent_Callback cb) { textedittexttospeech__texttospeechwidget_tabletevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_ActionEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_ActionEvent_Callback cb) { textedittexttospeech__texttospeechwidget_actionevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_DragEnterEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_DragEnterEvent_Callback cb) { textedittexttospeech__texttospeechwidget_dragenterevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_DragMoveEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_DragMoveEvent_Callback cb) { textedittexttospeech__texttospeechwidget_dragmoveevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_DragLeaveEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_DragLeaveEvent_Callback cb) { textedittexttospeech__texttospeechwidget_dragleaveevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_DropEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_DropEvent_Callback cb) { textedittexttospeech__texttospeechwidget_dropevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_ShowEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_ShowEvent_Callback cb) { textedittexttospeech__texttospeechwidget_showevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_HideEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_HideEvent_Callback cb) { textedittexttospeech__texttospeechwidget_hideevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_NativeEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_NativeEvent_Callback cb) { textedittexttospeech__texttospeechwidget_nativeevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_ChangeEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_ChangeEvent_Callback cb) { textedittexttospeech__texttospeechwidget_changeevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_Metric_Callback(TextEditTextToSpeech__TextToSpeechWidget_Metric_Callback cb) { textedittexttospeech__texttospeechwidget_metric_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_InitPainter_Callback(TextEditTextToSpeech__TextToSpeechWidget_InitPainter_Callback cb) { textedittexttospeech__texttospeechwidget_initpainter_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_Redirected_Callback(TextEditTextToSpeech__TextToSpeechWidget_Redirected_Callback cb) { textedittexttospeech__texttospeechwidget_redirected_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_SharedPainter_Callback(TextEditTextToSpeech__TextToSpeechWidget_SharedPainter_Callback cb) { textedittexttospeech__texttospeechwidget_sharedpainter_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_InputMethodEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_InputMethodEvent_Callback cb) { textedittexttospeech__texttospeechwidget_inputmethodevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_InputMethodQuery_Callback(TextEditTextToSpeech__TextToSpeechWidget_InputMethodQuery_Callback cb) { textedittexttospeech__texttospeechwidget_inputmethodquery_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_FocusNextPrevChild_Callback(TextEditTextToSpeech__TextToSpeechWidget_FocusNextPrevChild_Callback cb) { textedittexttospeech__texttospeechwidget_focusnextprevchild_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_EventFilter_Callback(TextEditTextToSpeech__TextToSpeechWidget_EventFilter_Callback cb) { textedittexttospeech__texttospeechwidget_eventfilter_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_TimerEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_TimerEvent_Callback cb) { textedittexttospeech__texttospeechwidget_timerevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_ChildEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_ChildEvent_Callback cb) { textedittexttospeech__texttospeechwidget_childevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_CustomEvent_Callback(TextEditTextToSpeech__TextToSpeechWidget_CustomEvent_Callback cb) { textedittexttospeech__texttospeechwidget_customevent_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_ConnectNotify_Callback(TextEditTextToSpeech__TextToSpeechWidget_ConnectNotify_Callback cb) { textedittexttospeech__texttospeechwidget_connectnotify_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_DisconnectNotify_Callback(TextEditTextToSpeech__TextToSpeechWidget_DisconnectNotify_Callback cb) { textedittexttospeech__texttospeechwidget_disconnectnotify_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_UpdateMicroFocus_Callback(TextEditTextToSpeech__TextToSpeechWidget_UpdateMicroFocus_Callback cb) { textedittexttospeech__texttospeechwidget_updatemicrofocus_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_Create_Callback(TextEditTextToSpeech__TextToSpeechWidget_Create_Callback cb) { textedittexttospeech__texttospeechwidget_create_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_Destroy_Callback(TextEditTextToSpeech__TextToSpeechWidget_Destroy_Callback cb) { textedittexttospeech__texttospeechwidget_destroy_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_FocusNextChild_Callback(TextEditTextToSpeech__TextToSpeechWidget_FocusNextChild_Callback cb) { textedittexttospeech__texttospeechwidget_focusnextchild_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_FocusPreviousChild_Callback(TextEditTextToSpeech__TextToSpeechWidget_FocusPreviousChild_Callback cb) { textedittexttospeech__texttospeechwidget_focuspreviouschild_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_Sender_Callback(TextEditTextToSpeech__TextToSpeechWidget_Sender_Callback cb) { textedittexttospeech__texttospeechwidget_sender_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_SenderSignalIndex_Callback(TextEditTextToSpeech__TextToSpeechWidget_SenderSignalIndex_Callback cb) { textedittexttospeech__texttospeechwidget_sendersignalindex_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_Receivers_Callback(TextEditTextToSpeech__TextToSpeechWidget_Receivers_Callback cb) { textedittexttospeech__texttospeechwidget_receivers_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_IsSignalConnected_Callback(TextEditTextToSpeech__TextToSpeechWidget_IsSignalConnected_Callback cb) { textedittexttospeech__texttospeechwidget_issignalconnected_callback = cb; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_GetDecodedMetricF_Callback(TextEditTextToSpeech__TextToSpeechWidget_GetDecodedMetricF_Callback cb) { textedittexttospeech__texttospeechwidget_getdecodedmetricf_callback = cb; }

    // Base flag setters
    inline void setTextEditTextToSpeech__TextToSpeechWidget_MetaObject_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_metaobject_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_Metacast_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_metacast_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_Metacall_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_metacall_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_DevType_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_devtype_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_SetVisible_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_setvisible_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_SizeHint_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_sizehint_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_MinimumSizeHint_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_minimumsizehint_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_HeightForWidth_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_heightforwidth_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_HasHeightForWidth_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_hasheightforwidth_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_PaintEngine_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_paintengine_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_Event_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_event_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_MousePressEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_mousepressevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_MouseReleaseEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_mousereleaseevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_MouseDoubleClickEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_mousedoubleclickevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_MouseMoveEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_mousemoveevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_WheelEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_wheelevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_KeyPressEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_keypressevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_KeyReleaseEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_keyreleaseevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_FocusInEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_focusinevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_FocusOutEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_focusoutevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_EnterEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_enterevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_LeaveEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_leaveevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_PaintEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_paintevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_MoveEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_moveevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_ResizeEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_resizeevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_CloseEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_closeevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_ContextMenuEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_contextmenuevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_TabletEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_tabletevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_ActionEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_actionevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_DragEnterEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_dragenterevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_DragMoveEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_dragmoveevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_DragLeaveEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_dragleaveevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_DropEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_dropevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_ShowEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_showevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_HideEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_hideevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_NativeEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_nativeevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_ChangeEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_changeevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_Metric_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_metric_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_InitPainter_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_initpainter_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_Redirected_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_redirected_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_SharedPainter_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_sharedpainter_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_InputMethodEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_inputmethodevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_InputMethodQuery_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_inputmethodquery_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_FocusNextPrevChild_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_focusnextprevchild_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_EventFilter_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_eventfilter_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_TimerEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_timerevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_ChildEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_childevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_CustomEvent_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_customevent_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_ConnectNotify_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_connectnotify_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_DisconnectNotify_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_disconnectnotify_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_UpdateMicroFocus_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_updatemicrofocus_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_Create_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_create_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_Destroy_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_destroy_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_FocusNextChild_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_focusnextchild_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_FocusPreviousChild_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_focuspreviouschild_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_Sender_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_sender_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_SenderSignalIndex_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_sendersignalindex_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_Receivers_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_receivers_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_IsSignalConnected_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_issignalconnected_isbase = value; }
    inline void setTextEditTextToSpeech__TextToSpeechWidget_GetDecodedMetricF_IsBase(bool value) const { textedittexttospeech__texttospeechwidget_getdecodedmetricf_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textedittexttospeech__texttospeechwidget_metaobject_isbase) {
            textedittexttospeech__texttospeechwidget_metaobject_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::metaObject();
        }
        auto metaobject_cb = textedittexttospeech__texttospeechwidget_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textedittexttospeech__texttospeechwidget_metacast_isbase) {
            textedittexttospeech__texttospeechwidget_metacast_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::qt_metacast(param1);
        }
        auto metacast_cb = textedittexttospeech__texttospeechwidget_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textedittexttospeech__texttospeechwidget_metacall_isbase) {
            textedittexttospeech__texttospeechwidget_metacall_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textedittexttospeech__texttospeechwidget_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textedittexttospeech__texttospeechwidget_devtype_isbase) {
            textedittexttospeech__texttospeechwidget_devtype_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::devType();
        }
        auto devtype_cb = textedittexttospeech__texttospeechwidget_devtype_callback;
        if (devtype_cb) {
            int callback_ret = devtype_cb();
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textedittexttospeech__texttospeechwidget_setvisible_isbase) {
            textedittexttospeech__texttospeechwidget_setvisible_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::setVisible(visible);
            return;
        }
        auto setvisible_cb = textedittexttospeech__texttospeechwidget_setvisible_callback;
        if (setvisible_cb) {
            bool cbval1 = visible;

            setvisible_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textedittexttospeech__texttospeechwidget_sizehint_isbase) {
            textedittexttospeech__texttospeechwidget_sizehint_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::sizeHint();
        }
        auto sizehint_cb = textedittexttospeech__texttospeechwidget_sizehint_callback;
        if (sizehint_cb) {
            QSize* callback_ret = sizehint_cb();
            return *callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textedittexttospeech__texttospeechwidget_minimumsizehint_isbase) {
            textedittexttospeech__texttospeechwidget_minimumsizehint_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::minimumSizeHint();
        }
        auto minimumsizehint_cb = textedittexttospeech__texttospeechwidget_minimumsizehint_callback;
        if (minimumsizehint_cb) {
            QSize* callback_ret = minimumsizehint_cb();
            return *callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textedittexttospeech__texttospeechwidget_heightforwidth_isbase) {
            textedittexttospeech__texttospeechwidget_heightforwidth_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::heightForWidth(param1);
        }
        auto heightforwidth_cb = textedittexttospeech__texttospeechwidget_heightforwidth_callback;
        if (heightforwidth_cb) {
            int cbval1 = param1;

            int callback_ret = heightforwidth_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textedittexttospeech__texttospeechwidget_hasheightforwidth_isbase) {
            textedittexttospeech__texttospeechwidget_hasheightforwidth_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::hasHeightForWidth();
        }
        auto hasheightforwidth_cb = textedittexttospeech__texttospeechwidget_hasheightforwidth_callback;
        if (hasheightforwidth_cb) {
            bool callback_ret = hasheightforwidth_cb();
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textedittexttospeech__texttospeechwidget_paintengine_isbase) {
            textedittexttospeech__texttospeechwidget_paintengine_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::paintEngine();
        }
        auto paintengine_cb = textedittexttospeech__texttospeechwidget_paintengine_callback;
        if (paintengine_cb) {
            QPaintEngine* callback_ret = paintengine_cb();
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_event_isbase) {
            textedittexttospeech__texttospeechwidget_event_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::event(event);
        }
        auto event_cb = textedittexttospeech__texttospeechwidget_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_mousepressevent_isbase) {
            textedittexttospeech__texttospeechwidget_mousepressevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::mousePressEvent(event);
            return;
        }
        auto mousepressevent_cb = textedittexttospeech__texttospeechwidget_mousepressevent_callback;
        if (mousepressevent_cb) {
            QMouseEvent* cbval1 = event;

            mousepressevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_mousereleaseevent_isbase) {
            textedittexttospeech__texttospeechwidget_mousereleaseevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::mouseReleaseEvent(event);
            return;
        }
        auto mousereleaseevent_cb = textedittexttospeech__texttospeechwidget_mousereleaseevent_callback;
        if (mousereleaseevent_cb) {
            QMouseEvent* cbval1 = event;

            mousereleaseevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_mousedoubleclickevent_isbase) {
            textedittexttospeech__texttospeechwidget_mousedoubleclickevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::mouseDoubleClickEvent(event);
            return;
        }
        auto mousedoubleclickevent_cb = textedittexttospeech__texttospeechwidget_mousedoubleclickevent_callback;
        if (mousedoubleclickevent_cb) {
            QMouseEvent* cbval1 = event;

            mousedoubleclickevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_mousemoveevent_isbase) {
            textedittexttospeech__texttospeechwidget_mousemoveevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::mouseMoveEvent(event);
            return;
        }
        auto mousemoveevent_cb = textedittexttospeech__texttospeechwidget_mousemoveevent_callback;
        if (mousemoveevent_cb) {
            QMouseEvent* cbval1 = event;

            mousemoveevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_wheelevent_isbase) {
            textedittexttospeech__texttospeechwidget_wheelevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::wheelEvent(event);
            return;
        }
        auto wheelevent_cb = textedittexttospeech__texttospeechwidget_wheelevent_callback;
        if (wheelevent_cb) {
            QWheelEvent* cbval1 = event;

            wheelevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_keypressevent_isbase) {
            textedittexttospeech__texttospeechwidget_keypressevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::keyPressEvent(event);
            return;
        }
        auto keypressevent_cb = textedittexttospeech__texttospeechwidget_keypressevent_callback;
        if (keypressevent_cb) {
            QKeyEvent* cbval1 = event;

            keypressevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_keyreleaseevent_isbase) {
            textedittexttospeech__texttospeechwidget_keyreleaseevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::keyReleaseEvent(event);
            return;
        }
        auto keyreleaseevent_cb = textedittexttospeech__texttospeechwidget_keyreleaseevent_callback;
        if (keyreleaseevent_cb) {
            QKeyEvent* cbval1 = event;

            keyreleaseevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_focusinevent_isbase) {
            textedittexttospeech__texttospeechwidget_focusinevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::focusInEvent(event);
            return;
        }
        auto focusinevent_cb = textedittexttospeech__texttospeechwidget_focusinevent_callback;
        if (focusinevent_cb) {
            QFocusEvent* cbval1 = event;

            focusinevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_focusoutevent_isbase) {
            textedittexttospeech__texttospeechwidget_focusoutevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::focusOutEvent(event);
            return;
        }
        auto focusoutevent_cb = textedittexttospeech__texttospeechwidget_focusoutevent_callback;
        if (focusoutevent_cb) {
            QFocusEvent* cbval1 = event;

            focusoutevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_enterevent_isbase) {
            textedittexttospeech__texttospeechwidget_enterevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::enterEvent(event);
            return;
        }
        auto enterevent_cb = textedittexttospeech__texttospeechwidget_enterevent_callback;
        if (enterevent_cb) {
            QEnterEvent* cbval1 = event;

            enterevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_leaveevent_isbase) {
            textedittexttospeech__texttospeechwidget_leaveevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::leaveEvent(event);
            return;
        }
        auto leaveevent_cb = textedittexttospeech__texttospeechwidget_leaveevent_callback;
        if (leaveevent_cb) {
            QEvent* cbval1 = event;

            leaveevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_paintevent_isbase) {
            textedittexttospeech__texttospeechwidget_paintevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::paintEvent(event);
            return;
        }
        auto paintevent_cb = textedittexttospeech__texttospeechwidget_paintevent_callback;
        if (paintevent_cb) {
            QPaintEvent* cbval1 = event;

            paintevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_moveevent_isbase) {
            textedittexttospeech__texttospeechwidget_moveevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::moveEvent(event);
            return;
        }
        auto moveevent_cb = textedittexttospeech__texttospeechwidget_moveevent_callback;
        if (moveevent_cb) {
            QMoveEvent* cbval1 = event;

            moveevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_resizeevent_isbase) {
            textedittexttospeech__texttospeechwidget_resizeevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::resizeEvent(event);
            return;
        }
        auto resizeevent_cb = textedittexttospeech__texttospeechwidget_resizeevent_callback;
        if (resizeevent_cb) {
            QResizeEvent* cbval1 = event;

            resizeevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_closeevent_isbase) {
            textedittexttospeech__texttospeechwidget_closeevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::closeEvent(event);
            return;
        }
        auto closeevent_cb = textedittexttospeech__texttospeechwidget_closeevent_callback;
        if (closeevent_cb) {
            QCloseEvent* cbval1 = event;

            closeevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_contextmenuevent_isbase) {
            textedittexttospeech__texttospeechwidget_contextmenuevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::contextMenuEvent(event);
            return;
        }
        auto contextmenuevent_cb = textedittexttospeech__texttospeechwidget_contextmenuevent_callback;
        if (contextmenuevent_cb) {
            QContextMenuEvent* cbval1 = event;

            contextmenuevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_tabletevent_isbase) {
            textedittexttospeech__texttospeechwidget_tabletevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::tabletEvent(event);
            return;
        }
        auto tabletevent_cb = textedittexttospeech__texttospeechwidget_tabletevent_callback;
        if (tabletevent_cb) {
            QTabletEvent* cbval1 = event;

            tabletevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_actionevent_isbase) {
            textedittexttospeech__texttospeechwidget_actionevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::actionEvent(event);
            return;
        }
        auto actionevent_cb = textedittexttospeech__texttospeechwidget_actionevent_callback;
        if (actionevent_cb) {
            QActionEvent* cbval1 = event;

            actionevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_dragenterevent_isbase) {
            textedittexttospeech__texttospeechwidget_dragenterevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::dragEnterEvent(event);
            return;
        }
        auto dragenterevent_cb = textedittexttospeech__texttospeechwidget_dragenterevent_callback;
        if (dragenterevent_cb) {
            QDragEnterEvent* cbval1 = event;

            dragenterevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_dragmoveevent_isbase) {
            textedittexttospeech__texttospeechwidget_dragmoveevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::dragMoveEvent(event);
            return;
        }
        auto dragmoveevent_cb = textedittexttospeech__texttospeechwidget_dragmoveevent_callback;
        if (dragmoveevent_cb) {
            QDragMoveEvent* cbval1 = event;

            dragmoveevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_dragleaveevent_isbase) {
            textedittexttospeech__texttospeechwidget_dragleaveevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::dragLeaveEvent(event);
            return;
        }
        auto dragleaveevent_cb = textedittexttospeech__texttospeechwidget_dragleaveevent_callback;
        if (dragleaveevent_cb) {
            QDragLeaveEvent* cbval1 = event;

            dragleaveevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_dropevent_isbase) {
            textedittexttospeech__texttospeechwidget_dropevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::dropEvent(event);
            return;
        }
        auto dropevent_cb = textedittexttospeech__texttospeechwidget_dropevent_callback;
        if (dropevent_cb) {
            QDropEvent* cbval1 = event;

            dropevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_showevent_isbase) {
            textedittexttospeech__texttospeechwidget_showevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::showEvent(event);
            return;
        }
        auto showevent_cb = textedittexttospeech__texttospeechwidget_showevent_callback;
        if (showevent_cb) {
            QShowEvent* cbval1 = event;

            showevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_hideevent_isbase) {
            textedittexttospeech__texttospeechwidget_hideevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::hideEvent(event);
            return;
        }
        auto hideevent_cb = textedittexttospeech__texttospeechwidget_hideevent_callback;
        if (hideevent_cb) {
            QHideEvent* cbval1 = event;

            hideevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textedittexttospeech__texttospeechwidget_nativeevent_isbase) {
            textedittexttospeech__texttospeechwidget_nativeevent_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::nativeEvent(eventType, message, result);
        }
        auto nativeevent_cb = textedittexttospeech__texttospeechwidget_nativeevent_callback;
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
        return TextEditTextToSpeech__TextToSpeechWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textedittexttospeech__texttospeechwidget_changeevent_isbase) {
            textedittexttospeech__texttospeechwidget_changeevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::changeEvent(param1);
            return;
        }
        auto changeevent_cb = textedittexttospeech__texttospeechwidget_changeevent_callback;
        if (changeevent_cb) {
            QEvent* cbval1 = param1;

            changeevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textedittexttospeech__texttospeechwidget_metric_isbase) {
            textedittexttospeech__texttospeechwidget_metric_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::metric(param1);
        }
        auto metric_cb = textedittexttospeech__texttospeechwidget_metric_callback;
        if (metric_cb) {
            int cbval1 = static_cast<int>(param1);

            int callback_ret = metric_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textedittexttospeech__texttospeechwidget_initpainter_isbase) {
            textedittexttospeech__texttospeechwidget_initpainter_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::initPainter(painter);
            return;
        }
        auto initpainter_cb = textedittexttospeech__texttospeechwidget_initpainter_callback;
        if (initpainter_cb) {
            QPainter* cbval1 = painter;

            initpainter_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textedittexttospeech__texttospeechwidget_redirected_isbase) {
            textedittexttospeech__texttospeechwidget_redirected_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::redirected(offset);
        }
        auto redirected_cb = textedittexttospeech__texttospeechwidget_redirected_callback;
        if (redirected_cb) {
            QPoint* cbval1 = offset;

            QPaintDevice* callback_ret = redirected_cb(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textedittexttospeech__texttospeechwidget_sharedpainter_isbase) {
            textedittexttospeech__texttospeechwidget_sharedpainter_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::sharedPainter();
        }
        auto sharedpainter_cb = textedittexttospeech__texttospeechwidget_sharedpainter_callback;
        if (sharedpainter_cb) {
            QPainter* callback_ret = sharedpainter_cb();
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textedittexttospeech__texttospeechwidget_inputmethodevent_isbase) {
            textedittexttospeech__texttospeechwidget_inputmethodevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::inputMethodEvent(param1);
            return;
        }
        auto inputmethodevent_cb = textedittexttospeech__texttospeechwidget_inputmethodevent_callback;
        if (inputmethodevent_cb) {
            QInputMethodEvent* cbval1 = param1;

            inputmethodevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textedittexttospeech__texttospeechwidget_inputmethodquery_isbase) {
            textedittexttospeech__texttospeechwidget_inputmethodquery_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::inputMethodQuery(param1);
        }
        auto inputmethodquery_cb = textedittexttospeech__texttospeechwidget_inputmethodquery_callback;
        if (inputmethodquery_cb) {
            int cbval1 = static_cast<int>(param1);

            QVariant* callback_ret = inputmethodquery_cb(this, cbval1);
            return *callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textedittexttospeech__texttospeechwidget_focusnextprevchild_isbase) {
            textedittexttospeech__texttospeechwidget_focusnextprevchild_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::focusNextPrevChild(next);
        }
        auto focusnextprevchild_cb = textedittexttospeech__texttospeechwidget_focusnextprevchild_callback;
        if (focusnextprevchild_cb) {
            bool cbval1 = next;

            bool callback_ret = focusnextprevchild_cb(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_eventfilter_isbase) {
            textedittexttospeech__texttospeechwidget_eventfilter_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::eventFilter(watched, event);
        }
        auto eventfilter_cb = textedittexttospeech__texttospeechwidget_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_timerevent_isbase) {
            textedittexttospeech__texttospeechwidget_timerevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::timerEvent(event);
            return;
        }
        auto timerevent_cb = textedittexttospeech__texttospeechwidget_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_childevent_isbase) {
            textedittexttospeech__texttospeechwidget_childevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::childEvent(event);
            return;
        }
        auto childevent_cb = textedittexttospeech__texttospeechwidget_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_customevent_isbase) {
            textedittexttospeech__texttospeechwidget_customevent_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::customEvent(event);
            return;
        }
        auto customevent_cb = textedittexttospeech__texttospeechwidget_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textedittexttospeech__texttospeechwidget_connectnotify_isbase) {
            textedittexttospeech__texttospeechwidget_connectnotify_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textedittexttospeech__texttospeechwidget_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textedittexttospeech__texttospeechwidget_disconnectnotify_isbase) {
            textedittexttospeech__texttospeechwidget_disconnectnotify_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textedittexttospeech__texttospeechwidget_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (textedittexttospeech__texttospeechwidget_updatemicrofocus_isbase) {
            textedittexttospeech__texttospeechwidget_updatemicrofocus_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::updateMicroFocus();
            return;
        }
        auto updatemicrofocus_cb = textedittexttospeech__texttospeechwidget_updatemicrofocus_callback;
        if (updatemicrofocus_cb) {
            updatemicrofocus_cb();
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::updateMicroFocus();
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (textedittexttospeech__texttospeechwidget_create_isbase) {
            textedittexttospeech__texttospeechwidget_create_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::create();
            return;
        }
        auto create_cb = textedittexttospeech__texttospeechwidget_create_callback;
        if (create_cb) {
            create_cb();
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::create();
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (textedittexttospeech__texttospeechwidget_destroy_isbase) {
            textedittexttospeech__texttospeechwidget_destroy_isbase = false;
            TextEditTextToSpeech__TextToSpeechWidget::destroy();
            return;
        }
        auto destroy_cb = textedittexttospeech__texttospeechwidget_destroy_callback;
        if (destroy_cb) {
            destroy_cb();
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::destroy();
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (textedittexttospeech__texttospeechwidget_focusnextchild_isbase) {
            textedittexttospeech__texttospeechwidget_focusnextchild_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::focusNextChild();
        }
        auto focusnextchild_cb = textedittexttospeech__texttospeechwidget_focusnextchild_callback;
        if (focusnextchild_cb) {
            bool callback_ret = focusnextchild_cb();
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::focusNextChild();
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (textedittexttospeech__texttospeechwidget_focuspreviouschild_isbase) {
            textedittexttospeech__texttospeechwidget_focuspreviouschild_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::focusPreviousChild();
        }
        auto focuspreviouschild_cb = textedittexttospeech__texttospeechwidget_focuspreviouschild_callback;
        if (focuspreviouschild_cb) {
            bool callback_ret = focuspreviouschild_cb();
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::focusPreviousChild();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textedittexttospeech__texttospeechwidget_sender_isbase) {
            textedittexttospeech__texttospeechwidget_sender_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::sender();
        }
        auto sender_cb = textedittexttospeech__texttospeechwidget_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textedittexttospeech__texttospeechwidget_sendersignalindex_isbase) {
            textedittexttospeech__texttospeechwidget_sendersignalindex_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::senderSignalIndex();
        }
        auto sendersignalindex_cb = textedittexttospeech__texttospeechwidget_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechWidget::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textedittexttospeech__texttospeechwidget_receivers_isbase) {
            textedittexttospeech__texttospeechwidget_receivers_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::receivers(signal);
        }
        auto receivers_cb = textedittexttospeech__texttospeechwidget_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechWidget::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textedittexttospeech__texttospeechwidget_issignalconnected_isbase) {
            textedittexttospeech__texttospeechwidget_issignalconnected_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textedittexttospeech__texttospeechwidget_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::isSignalConnected(signal);
    }

    // Virtual method for C ABI access and custom callback
    double getDecodedMetricF(QPaintDevice::PaintDeviceMetric metricA, QPaintDevice::PaintDeviceMetric metricB) const {
        if (textedittexttospeech__texttospeechwidget_getdecodedmetricf_isbase) {
            textedittexttospeech__texttospeechwidget_getdecodedmetricf_isbase = false;
            return TextEditTextToSpeech__TextToSpeechWidget::getDecodedMetricF(metricA, metricB);
        }
        auto getdecodedmetricf_cb = textedittexttospeech__texttospeechwidget_getdecodedmetricf_callback;
        if (getdecodedmetricf_cb) {
            int cbval1 = static_cast<int>(metricA);
            int cbval2 = static_cast<int>(metricB);

            double callback_ret = getdecodedmetricf_cb(this, cbval1, cbval2);
            return static_cast<double>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechWidget::getDecodedMetricF(metricA, metricB);
    }

    // Friend functions
    friend bool TextEditTextToSpeech__TextToSpeechWidget_Event(TextEditTextToSpeech::TextToSpeechWidget* self, QEvent* event);
    friend bool TextEditTextToSpeech__TextToSpeechWidget_SuperEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_MousePressEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperMousePressEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_MouseReleaseEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperMouseReleaseEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_MouseDoubleClickEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperMouseDoubleClickEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_MouseMoveEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperMouseMoveEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_WheelEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QWheelEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperWheelEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QWheelEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_KeyPressEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QKeyEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperKeyPressEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QKeyEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_KeyReleaseEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QKeyEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperKeyReleaseEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QKeyEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_FocusInEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QFocusEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperFocusInEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QFocusEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_FocusOutEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QFocusEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperFocusOutEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QFocusEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_EnterEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QEnterEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperEnterEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QEnterEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_LeaveEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperLeaveEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_PaintEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QPaintEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperPaintEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QPaintEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_MoveEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QMoveEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperMoveEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QMoveEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_ResizeEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QResizeEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperResizeEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QResizeEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_CloseEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QCloseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperCloseEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QCloseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_ContextMenuEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QContextMenuEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperContextMenuEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QContextMenuEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_TabletEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QTabletEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperTabletEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QTabletEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_ActionEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QActionEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperActionEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QActionEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_DragEnterEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QDragEnterEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperDragEnterEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QDragEnterEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_DragMoveEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QDragMoveEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperDragMoveEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QDragMoveEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_DragLeaveEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QDragLeaveEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperDragLeaveEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QDragLeaveEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_DropEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QDropEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperDropEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QDropEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_ShowEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QShowEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperShowEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QShowEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_HideEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QHideEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperHideEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QHideEvent* event);
    friend bool TextEditTextToSpeech__TextToSpeechWidget_NativeEvent(TextEditTextToSpeech::TextToSpeechWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend bool TextEditTextToSpeech__TextToSpeechWidget_SuperNativeEvent(TextEditTextToSpeech::TextToSpeechWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextEditTextToSpeech__TextToSpeechWidget_ChangeEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QEvent* param1);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperChangeEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QEvent* param1);
    friend int TextEditTextToSpeech__TextToSpeechWidget_Metric(const TextEditTextToSpeech::TextToSpeechWidget* self, int param1);
    friend int TextEditTextToSpeech__TextToSpeechWidget_SuperMetric(const TextEditTextToSpeech::TextToSpeechWidget* self, int param1);
    friend void TextEditTextToSpeech__TextToSpeechWidget_InitPainter(const TextEditTextToSpeech::TextToSpeechWidget* self, QPainter* painter);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperInitPainter(const TextEditTextToSpeech::TextToSpeechWidget* self, QPainter* painter);
    friend QPaintDevice* TextEditTextToSpeech__TextToSpeechWidget_Redirected(const TextEditTextToSpeech::TextToSpeechWidget* self, QPoint* offset);
    friend QPaintDevice* TextEditTextToSpeech__TextToSpeechWidget_SuperRedirected(const TextEditTextToSpeech::TextToSpeechWidget* self, QPoint* offset);
    friend QPainter* TextEditTextToSpeech__TextToSpeechWidget_SharedPainter(const TextEditTextToSpeech::TextToSpeechWidget* self);
    friend QPainter* TextEditTextToSpeech__TextToSpeechWidget_SuperSharedPainter(const TextEditTextToSpeech::TextToSpeechWidget* self);
    friend void TextEditTextToSpeech__TextToSpeechWidget_InputMethodEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QInputMethodEvent* param1);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperInputMethodEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QInputMethodEvent* param1);
    friend bool TextEditTextToSpeech__TextToSpeechWidget_FocusNextPrevChild(TextEditTextToSpeech::TextToSpeechWidget* self, bool next);
    friend bool TextEditTextToSpeech__TextToSpeechWidget_SuperFocusNextPrevChild(TextEditTextToSpeech::TextToSpeechWidget* self, bool next);
    friend void TextEditTextToSpeech__TextToSpeechWidget_TimerEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QTimerEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperTimerEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QTimerEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_ChildEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QChildEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperChildEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QChildEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_CustomEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperCustomEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_ConnectNotify(TextEditTextToSpeech::TextToSpeechWidget* self, const QMetaMethod* signal);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperConnectNotify(TextEditTextToSpeech::TextToSpeechWidget* self, const QMetaMethod* signal);
    friend void TextEditTextToSpeech__TextToSpeechWidget_DisconnectNotify(TextEditTextToSpeech::TextToSpeechWidget* self, const QMetaMethod* signal);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperDisconnectNotify(TextEditTextToSpeech::TextToSpeechWidget* self, const QMetaMethod* signal);
    friend void TextEditTextToSpeech__TextToSpeechWidget_UpdateMicroFocus(TextEditTextToSpeech::TextToSpeechWidget* self);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperUpdateMicroFocus(TextEditTextToSpeech::TextToSpeechWidget* self);
    friend void TextEditTextToSpeech__TextToSpeechWidget_Create(TextEditTextToSpeech::TextToSpeechWidget* self);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperCreate(TextEditTextToSpeech::TextToSpeechWidget* self);
    friend void TextEditTextToSpeech__TextToSpeechWidget_Destroy(TextEditTextToSpeech::TextToSpeechWidget* self);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperDestroy(TextEditTextToSpeech::TextToSpeechWidget* self);
    friend bool TextEditTextToSpeech__TextToSpeechWidget_FocusNextChild(TextEditTextToSpeech::TextToSpeechWidget* self);
    friend bool TextEditTextToSpeech__TextToSpeechWidget_SuperFocusNextChild(TextEditTextToSpeech::TextToSpeechWidget* self);
    friend bool TextEditTextToSpeech__TextToSpeechWidget_FocusPreviousChild(TextEditTextToSpeech::TextToSpeechWidget* self);
    friend bool TextEditTextToSpeech__TextToSpeechWidget_SuperFocusPreviousChild(TextEditTextToSpeech::TextToSpeechWidget* self);
    friend QObject* TextEditTextToSpeech__TextToSpeechWidget_Sender(const TextEditTextToSpeech::TextToSpeechWidget* self);
    friend QObject* TextEditTextToSpeech__TextToSpeechWidget_SuperSender(const TextEditTextToSpeech::TextToSpeechWidget* self);
    friend int TextEditTextToSpeech__TextToSpeechWidget_SenderSignalIndex(const TextEditTextToSpeech::TextToSpeechWidget* self);
    friend int TextEditTextToSpeech__TextToSpeechWidget_SuperSenderSignalIndex(const TextEditTextToSpeech::TextToSpeechWidget* self);
    friend int TextEditTextToSpeech__TextToSpeechWidget_Receivers(const TextEditTextToSpeech::TextToSpeechWidget* self, const char* signal);
    friend int TextEditTextToSpeech__TextToSpeechWidget_SuperReceivers(const TextEditTextToSpeech::TextToSpeechWidget* self, const char* signal);
    friend bool TextEditTextToSpeech__TextToSpeechWidget_IsSignalConnected(const TextEditTextToSpeech::TextToSpeechWidget* self, const QMetaMethod* signal);
    friend bool TextEditTextToSpeech__TextToSpeechWidget_SuperIsSignalConnected(const TextEditTextToSpeech::TextToSpeechWidget* self, const QMetaMethod* signal);
    friend double TextEditTextToSpeech__TextToSpeechWidget_GetDecodedMetricF(const TextEditTextToSpeech::TextToSpeechWidget* self, int metricA, int metricB);
    friend double TextEditTextToSpeech__TextToSpeechWidget_SuperGetDecodedMetricF(const TextEditTextToSpeech::TextToSpeechWidget* self, int metricA, int metricB);
};

#endif
